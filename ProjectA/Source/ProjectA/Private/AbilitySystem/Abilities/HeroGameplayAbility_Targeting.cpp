// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h"

#include "BaseDebugHelper.h"
#include "BaseFunctionLibrary.h"
#include "BaseGamePlayTags.h"
#include "Characters/HeroCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Controllers/HeroController.h"
#include "Widget/WidgetBase.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Blueprint/WidgetTree.h"
#include "Components/SizeBox.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "EnhancedInputSubsystems.h"

void UHeroGameplayAbility_Targeting::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                                     const FGameplayAbilityActorInfo* ActorInfo,
                                                     const FGameplayAbilityActivationInfo ActivationInfo,
                                                     const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	//타켓팅 활성화시 
	TryLockOnTarget();

	InitTargetingMovement();

	InitTargetingMappingContext();
}

void UHeroGameplayAbility_Targeting::EndAbility(const FGameplayAbilitySpecHandle Handle,
                                                const FGameplayAbilityActorInfo* ActorInfo,
                                                const FGameplayAbilityActivationInfo ActivationInfo,
                                                bool bReplicateEndAbility, bool bWasCancelled)
{
	ResetTargetingMovement();
	ResetTargetingMappingContext();
	CleanUp();

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UHeroGameplayAbility_Targeting::OnTargetingTick(float DeltaTime)
{
	//타겟팅 유효성
	if (!CurrentTaget || UBaseFunctionLibrary::NativeActorHasTag(CurrentTaget, BaseGamePlayTags::Shared_Status_Dead)
		|| UBaseFunctionLibrary::NativeActorHasTag(GetHeroCharacterFromActorInfo(), BaseGamePlayTags::Shared_Status_Dead)
		)
	{
		CancelTargetingAbility();
		return;
	}

	SetTagetingWidgetPosition();

	//플레이어 캐릭터가 타겟팅의 회전이 필요할때
	const bool bShouldOverrideRotation = !UBaseFunctionLibrary::NativeActorHasTag(GetHeroCharacterFromActorInfo(), BaseGamePlayTags::Player_Status_Rolling)&&
		!UBaseFunctionLibrary::NativeActorHasTag(GetHeroCharacterFromActorInfo(), BaseGamePlayTags::Player_Ability_Block);
	
	if (bShouldOverrideRotation)
	{
		FRotator LookAtRot = UKismetMathLibrary::FindLookAtRotation(GetHeroCharacterFromActorInfo()->GetActorLocation(),
			CurrentTaget->GetActorLocation()
		);

		LookAtRot -= FRotator(TargetingCameraOffset, 0, 0);

		const FRotator CurrentControlRot = GetHeroControllerFromActorInfo()->GetControlRotation();
		const FRotator TargetRot = FMath::RInterpTo(CurrentControlRot, LookAtRot, DeltaTime, TargetingRotationInterpSpeed);

		GetHeroControllerFromActorInfo()->SetControlRotation(FRotator(TargetRot.Pitch, TargetRot.Yaw, 0.f));
		GetHeroCharacterFromActorInfo()->SetActorRotation(FRotator(0.0f, LookAtRot.Yaw, 0.f));
	}
}

void UHeroGameplayAbility_Targeting::GetAvailableActorAroundTarget(TArray<AActor*>& OutLeftActors,
	TArray<AActor*>& OutRightActors)
{
	if (!CurrentTaget || AvailableActorsToLock.IsEmpty())
	{
		CancelTargetingAbility();
		return;
	}

	const FVector PlayerLocation = GetHeroCharacterFromActorInfo()->GetActorLocation();
	const FVector PlayerToCurrentNormalized = (CurrentTaget->GetActorLocation() - PlayerLocation).GetSafeNormal();

	for (AActor* AvailableActor: AvailableActorsToLock)
	{
		if (!AvailableActor || AvailableActor == CurrentTaget) continue;

		const FVector PlayerToAvailableNormalized = (AvailableActor->GetActorLocation() - PlayerLocation).GetSafeNormal();
		const FVector CrossResult = FVector::CrossProduct(PlayerToCurrentNormalized, PlayerToAvailableNormalized);

		if (CrossResult.Z > 0.f)
		{
			OutRightActors.AddUnique(AvailableActor);
		}
		else
		{
			OutLeftActors.AddUnique(AvailableActor);
		}
	}
}


void UHeroGameplayAbility_Targeting::SwitchTarget(const FGameplayTag& SwitchDirectionTag)
{
	GetAvailableActorsToLock();

	TArray<AActor*> ActorsOnLeft;
	TArray<AActor*> ActorOnRight;

	AActor* NewTargeting = nullptr;

	GetAvailableActorAroundTarget(ActorsOnLeft, ActorOnRight);

	if (SwitchDirectionTag == BaseGamePlayTags::Player_Event_SwitchTarget_Left)
	{
		NewTargeting = GetNearestTargetFromAvailableActors(ActorsOnLeft);
	}
	else
	{
		NewTargeting = GetNearestTargetFromAvailableActors(ActorOnRight);
	}

	if (NewTargeting)
	{
		CurrentTaget = NewTargeting;
	}
}

void UHeroGameplayAbility_Targeting::TryLockOnTarget()
{
	//타겟팅이 가능한 액터 탐색
	GetAvailableActorsToLock();

	//타겟팅 가능한 엑터가 없으면
	if (AvailableActorsToLock.IsEmpty())
	{
		CancelTargetingAbility();
		return;
	}

	//타겟팅 가능한 엑터들중 가장 가까운 타겟 가져오기
	CurrentTaget = GetNearestTargetFromAvailableActors(AvailableActorsToLock);

	if (CurrentTaget)
	{
		DrawTargetingWidget();
		SetTagetingWidgetPosition();

		
	}
	else
	{
		CancelTargetingAbility();
	}
}

void UHeroGameplayAbility_Targeting::GetAvailableActorsToLock()
{
	TArray<FHitResult> HitResults;

	UKismetSystemLibrary::BoxTraceMultiForObjects(
		GetHeroCharacterFromActorInfo(),
		GetHeroCharacterFromActorInfo()->GetActorLocation(),
		GetHeroCharacterFromActorInfo()->GetActorLocation() + GetHeroCharacterFromActorInfo()->GetActorForwardVector() *
		TraceDistance,
		TraceBoxSize / 2.0f,
		GetHeroCharacterFromActorInfo()->GetActorForwardVector().ToOrientationRotator(),
		TraceChannel,
		false,
		TArray<AActor*>(),
		bShowDebugShape ? EDrawDebugTrace::Persistent : EDrawDebugTrace::None,
		HitResults,
		true
	);

	for (const FHitResult& HitResult : HitResults)
	{
		if (AActor* HitActor = HitResult.GetActor())
		{
			if (HitActor != GetHeroCharacterFromActorInfo())
			{
				AvailableActorsToLock.AddUnique(HitActor);

				Debug::Print(HitActor->GetActorNameOrLabel());
			}
		}
	}
}

AActor* UHeroGameplayAbility_Targeting::GetNearestTargetFromAvailableActors(const TArray<AActor*>& AvailableActors)
{
	//Distance는 대상과의 거리값이 나옴
	float Distance = 0.0f;
	return UGameplayStatics::FindNearestActor(GetHeroCharacterFromActorInfo()->GetActorLocation(), AvailableActors,
	                                          Distance);
}

void UHeroGameplayAbility_Targeting::DrawTargetingWidget()
{
	if (!TargetingWidget)
	{
		checkf(TargetingWidgetClass, TEXT("Forget to assigned  a valid widget class in Blueprint"));

		TargetingWidget = CreateWidget<UWidgetBase>(GetHeroControllerFromActorInfo(), TargetingWidgetClass);

		check(TargetingWidget);

		TargetingWidget->AddToViewport();
	}
}

void UHeroGameplayAbility_Targeting::CancelTargetingAbility()
{
	CancelAbility(GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(), GetCurrentActivationInfo(), true);
}

void UHeroGameplayAbility_Targeting::CleanUp()
{
	AvailableActorsToLock.Empty();
	CurrentTaget = nullptr;

	if (TargetingWidget)
	{
		TargetingWidget->RemoveFromParent();
	}

	TargetingWidget = nullptr;
	TargetingWidgetSize = FVector2D::ZeroVector;
	CachedWalkSpeed = 0.0f;
}

void UHeroGameplayAbility_Targeting::SetTagetingWidgetPosition()
{
	if (!TargetingWidget || !CurrentTaget)
	{
		CancelTargetingAbility();
		return;
	}

	FVector2D ScreenPosition;

	//적의 위치를 참조하여 스크린 위치를 반환
	UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(
		GetHeroControllerFromActorInfo(),
		CurrentTaget->GetActorLocation(),
		ScreenPosition,
		true
	);

	if (TargetingWidgetSize == FVector2D::ZeroVector)
	{
		TargetingWidget->WidgetTree->ForEachWidget(
			[this](UWidget* FoundWidget)
			{
				if (USizeBox* FoundSizeBox = Cast<USizeBox>(FoundWidget))
				{
					TargetingWidgetSize.X = FoundSizeBox->GetWidthOverride();
					TargetingWidgetSize.Y = FoundSizeBox->GetHeightOverride();
				}
			}
		);
	}

	ScreenPosition -= (TargetingWidgetSize / 2.0f);

	TargetingWidget->SetPositionInViewport(ScreenPosition, false);
}

void UHeroGameplayAbility_Targeting::InitTargetingMovement()
{
	CachedWalkSpeed = GetHeroCharacterFromActorInfo()->GetCharacterMovement()->GetMaxSpeed();
	GetHeroCharacterFromActorInfo()->GetCharacterMovement()->MaxWalkSpeed = TargetingWalkSpeed;
}

void UHeroGameplayAbility_Targeting::InitTargetingMappingContext()
{
	const ULocalPlayer* LocalPlayer = GetHeroControllerFromActorInfo()->GetLocalPlayer();
	
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);

	check(Subsystem);

	Subsystem->AddMappingContext(TargetingMappingContext, 3);
}

void UHeroGameplayAbility_Targeting::ResetTargetingMovement()
{
	if (CachedWalkSpeed > 0.0f)
	{
		GetHeroCharacterFromActorInfo()->GetCharacterMovement()->MaxWalkSpeed = CachedWalkSpeed;
	}

	
}

void UHeroGameplayAbility_Targeting::ResetTargetingMappingContext()
{
	if (!GetHeroControllerFromActorInfo())
	{
		return;
	}
	
	const ULocalPlayer* LocalPlayer = GetHeroControllerFromActorInfo()->GetLocalPlayer();
	
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);

	check(Subsystem);

	Subsystem->RemoveMappingContext(TargetingMappingContext);
}
