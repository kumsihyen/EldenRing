// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/HeroCharacter.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/Input/BaseInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DataAssets/Input/DataAsset_InputConfig.h"
#include "BaseGamePlayTags.h"
#include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "DataAssets/StartupData/DataAsset_StartupBase.h"
#include "Components/Combat/HeroCombatComponent.h"
#include "Components/Ui/HeroUIComponent.h"

#include "BaseDebugHelper.h"

AHeroCharacter::AHeroCharacter()
{
	//ĸ��������Ʈ �ʱ������ ����
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);
	
	//ȸ�� ��� ��Ȱ��ȭ
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	//�������� �ʱ⼼��
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 200.0f;
	CameraBoom->SocketOffset = FVector(0.f, 55.f, 65.f);
	CameraBoom->bUsePawnControlRotation = true;

	//ī�޶� �ʱ⼼��
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	//�ɸ��Ϳ����� �ʱ⼼��
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.0f;

	//�Ž� ����
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/Assets/HeroCharacter/SK_CharM_Barbarous.SK_CharM_Barbarous"));

	if (MeshAsset.Succeeded()) {
		GetMesh()->SetSkeletalMesh(MeshAsset.Object);
	}

	//�Ž� �ʱ���ġ ���� Z�������� -100 ������ Yaw������ -90�� ȸ��
	GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -100.0f), FRotator(0, -90.0f, 0));

    //CombatComponent ����
    HeroCombatComponent = CreateDefaultSubobject<UHeroCombatComponent>(TEXT("HeroCombatComponent"));

	HeroUIComponent = CreateDefaultSubobject<UHeroUIComponent>(TEXT("HeroUIComponent"));
}

void AHeroCharacter::BeginPlay()
{
	Super::BeginPlay();

	//BeginPlay���� �α� �׽�Ʈ
	//Debug::Print(TEXT("Hero is Working"));
}

void AHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	checkf(InputConfigDataAsset, TEXT("Forgot to assign a valid data asset as input config"));

	ULocalPlayer* LocalPlayer = GetController<APlayerController>()->GetLocalPlayer();
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer);
	check(Subsystem);
	Subsystem->AddMappingContext(InputConfigDataAsset->DefaultMappingContext, 0);

	UBaseInputComponent* BaseInputComponent = CastChecked<UBaseInputComponent>(PlayerInputComponent);
    BaseInputComponent->BindNativeInputAction(InputConfigDataAsset, BaseGamePlayTags::InputTag_Move, ETriggerEvent::Triggered, this, &AHeroCharacter::Input_Move);
    BaseInputComponent->BindNativeInputAction(InputConfigDataAsset, BaseGamePlayTags::InputTag_Look, ETriggerEvent::Triggered, this, &AHeroCharacter::Input_Look);
	BaseInputComponent->BindNativeInputAction(InputConfigDataAsset, BaseGamePlayTags::InputTag_SwitchTarget, ETriggerEvent::Triggered,this, &AHeroCharacter::Input_SwitchTargetTriggered);
	BaseInputComponent->BindNativeInputAction(InputConfigDataAsset, BaseGamePlayTags::InputTag_SwitchTarget, ETriggerEvent::Completed,this, &AHeroCharacter::Input_SwitchTargetCompleted);
	
    BaseInputComponent->BindAbilityInputAction(InputConfigDataAsset, this, &AHeroCharacter::Input_AbilityInputPressed, &AHeroCharacter::Input_AbilityInputReleased);
}

UPawnCombatComponent* AHeroCharacter::GetPawnCombatComponent() const
{
    return HeroCombatComponent;
}

UPawnUiComponent* AHeroCharacter::GetPawnUIComponent() const
{
	return HeroUIComponent;
}

UHeroUIComponent* AHeroCharacter::GetHeroUIComponent() const
{
	return HeroUIComponent;
}

void AHeroCharacter::Input_Move(const FInputActionValue& InputActionValue)
{
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();
	const FRotator MovementRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
	if (MovementVector.Y != 0.f)
	{
		const FVector ForwardDirection = MovementRotation.RotateVector(FVector::ForwardVector);
		AddMovementInput(ForwardDirection, MovementVector.Y);
	}
	if (MovementVector.X != 0.f)
	{
		const FVector RightDirection = MovementRotation.RotateVector(FVector::RightVector);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AHeroCharacter::Input_Look(const FInputActionValue& InputActionValue)
{
	const FVector2D LookAxisVector = InputActionValue.Get<FVector2D>();

	if (LookAxisVector.X != 0.f)
	{
		AddControllerYawInput(LookAxisVector.X);
	}
	if (LookAxisVector.Y != 0.f)
	{
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AHeroCharacter::Input_SwitchTargetTriggered(const FInputActionValue& InputActionValue)
{
	SwitchDirection = InputActionValue.Get<FVector2D>();
}

void AHeroCharacter::Input_SwitchTargetCompleted(const FInputActionValue& InputActionValue)
{
	FGameplayEventData EventData;

	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
		this,
		SwitchDirection.X > 0.0f ? BaseGamePlayTags::Player_Event_SwitchTarget_Right : BaseGamePlayTags::Player_Event_SwitchTarget_Left,
		EventData
	);

	Debug::Print(TEXT("SwitchDirection: " + SwitchDirection.ToString()));
}

void AHeroCharacter::Input_AbilityInputPressed(FGameplayTag InputTag)
{
    BaseAbilitySystemComponent->OnAbilityInputPressed(InputTag);
}

void AHeroCharacter::Input_AbilityInputReleased(FGameplayTag InputTag)
{
    BaseAbilitySystemComponent->OnAbilityInputReleased(InputTag);
}

void AHeroCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	/*if (BaseAbilitySystemComponent && BaseAttributeSet)
	{
		const FString AppendString = FString::Printf(TEXT("Owner Actor: %s, AvatarActor: %s"), *BaseAbilitySystemComponent->GetOwnerActor()->GetActorLabel(), *BaseAbilitySystemComponent->GetAvatarActor()->GetActorLabel());

		Debug::Print(TEXT("Ability system component and AttributeSet valid. ") + AppendString, FColor::Green);
	}*/

	if (!StartupData.IsNull())
	{
		if (UDataAsset_StartupBase* LoadedData = StartupData.LoadSynchronous())
		{
			//Startup�����Ͱ� Null�� �ƴѰ�� StartupData�� ����ȭ�ε带 ���ļ� ���������� ���Ӿ����Ƽ�ý����� �ߵ��ȴ�. GA_HeroSpawnAxe
			LoadedData->GiveToAbilitySystemComponent(GetBaseAbilitySystemComponent());
		}
	}
	
}
