// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/ProjectileBase.h"

#include "NiagaraComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "BaseGamePlayTags.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "BaseFunctionLibrary.h"

#include "BaseDebugHelper.h"

// Sets default values
AProjectileBase::AProjectileBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	CollsionBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollsionBoxComponent"));
	SetRootComponent(CollsionBoxComponent);
	CollsionBoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollsionBoxComponent->SetCollisionResponseToChannel(ECC_Pawn,ECR_Block);
	CollsionBoxComponent->SetCollisionResponseToChannel(ECC_WorldDynamic,ECR_Block);
	CollsionBoxComponent->SetCollisionResponseToChannel(ECC_WorldStatic,ECR_Block);
	CollsionBoxComponent->OnComponentHit.AddUniqueDynamic(this, &AProjectileBase::OnProjectileHit);
	CollsionBoxComponent->OnComponentBeginOverlap.AddUniqueDynamic(this, &AProjectileBase::OnProjectileBeginOverlap);

	NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
	NiagaraComponent->SetupAttachment(GetRootComponent());

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->InitialSpeed = 700.0f;
	ProjectileMovementComponent->MaxSpeed = 800.0f;
	ProjectileMovementComponent->Velocity = FVector(1.0f, 0.0f, 0.0f);
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;

	//수명
	InitialLifeSpan = 4.0f;
}

// Called when the game starts or when spawned
void AProjectileBase::BeginPlay()
{
	Super::BeginPlay();

	if (ProjectileDamagePolicy == EProjectileDamagePolicy::OnBeginOverlap)
	{
		//오버랩인경우 오버랩 Response로 변경
		CollsionBoxComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	}
}

// Called every frame
void AProjectileBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectileBase::HandleApplyProjectile(APawn* HitPawn, FGameplayEventData& Payload)
{
	checkf(ProjectileDamageSpecHandle.IsValid(), TEXT("ProjectileDamageSpecHandle must be valid"));
	const bool bWasApplied = UBaseFunctionLibrary::ApplyGameplayEffectSpecHandleToTargetActor(GetInstigator(), HitPawn, ProjectileDamageSpecHandle);

	if (bWasApplied)
	{
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
			HitPawn,
			BaseGamePlayTags::Shared_Event_HitReact,
			Payload
		);
	}
}

void AProjectileBase::OnProjectileHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
                                      UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	BP_OnSpawnProjectileHitFX(Hit.ImpactPoint);
	
	APawn* HitPawn = Cast<APawn>(OtherActor);

	//피격된 대상이 없거나, 아군일 경우
	if (!HitPawn || !UBaseFunctionLibrary::IsTargetPawnHostile(GetInstigator(), HitPawn))
	{
		Destroy();
		return;
	}

	bool bIsValidBlock = false;

	//플레이어가 블락중인지 판별
	const bool bIsPlayerBlocking = UBaseFunctionLibrary::NativeActorHasTag(HitPawn, BaseGamePlayTags::Player_Status_Blocking);

	if (bIsPlayerBlocking)
	{
		//블락이 유효한지 한번 더 체크
		bIsValidBlock = UBaseFunctionLibrary::IsValidBlock(this, HitPawn);
	}

	//GE Data Setting
	FGameplayEventData Data;
	Data.Instigator = this;
	Data.Target = HitPawn;

	if (bIsValidBlock)
	{
		//Send to HitPawn (SuccessBlock)
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
			HitPawn,
			BaseGamePlayTags::Player_Event_SuccessBlock,
			Data
		);
	}
	else
	{
		//Apply projectile Damage
		HandleApplyProjectile(HitPawn, Data);
	}

	Destroy();
	
}

void AProjectileBase::OnProjectileBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}

