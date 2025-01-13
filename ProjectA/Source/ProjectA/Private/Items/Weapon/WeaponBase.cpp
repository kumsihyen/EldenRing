// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Weapon/WeaponBase.h"
#include "Components/BoxComponent.h"
#include "BaseDebugHelper.h"
#include "BaseFunctionLibrary.h"

// Sets default values
AWeaponBase::AWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

    WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
    RootComponent = WeaponMesh;

    WeaponCollsionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("WeaponCollisionBox"));
    WeaponCollsionBox->SetupAttachment(RootComponent);
    WeaponCollsionBox->SetBoxExtent(FVector(20.0f));
    WeaponCollsionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    
    //Overlap Connect
    WeaponCollsionBox->OnComponentBeginOverlap.AddUniqueDynamic(this, &ThisClass::OnCollisionBoxBeginOverlap);
    WeaponCollsionBox->OnComponentEndOverlap.AddUniqueDynamic(this, &ThisClass::OnCollisionBoxEndOverlap);
}

void AWeaponBase::OnCollisionBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    //GetInstigator 이벤트를 발생시킨 포인터 누가 대미지를 입혔는가 T 클래스 반환 (주체대상)
    APawn* WeaponOwningPawn = GetInstigator<APawn>();

    checkf(WeaponOwningPawn, TEXT("Forget to Assign an instigator as the owning pawn of the weapon: %s"), *GetName());

    /*if (APawn* HitPawn = Cast<APawn>(OtherActor))
    {
        if (WeaponOwningPawn != HitPawn)
        {
            OnWeaponHitTarget.ExecuteIfBound(OtherActor);
        }
    }*/

    if (APawn* HitPawn = Cast<APawn>(OtherActor))
    {
        if (UBaseFunctionLibrary::IsTargetPawnHostile(WeaponOwningPawn, HitPawn))
        {
            OnWeaponHitTarget.ExecuteIfBound(OtherActor);
        }
    }
    
}

void AWeaponBase::OnCollisionBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    //GetInstigator 이벤트를 발생시킨 포인터 누가 대미지를 입혔는가 T 클래스 반환 (주체대상)
    APawn* WeaponOwningPawn = GetInstigator<APawn>();

    checkf(WeaponOwningPawn, TEXT("Forget to Assign an instigator as the owning pawn of the weapon: %s"), *GetName());

    if (APawn* HitPawn = Cast<APawn>(OtherActor))
    {
        if (UBaseFunctionLibrary::IsTargetPawnHostile(WeaponOwningPawn, HitPawn))
        {
            OnWeaponPulledFromTarget.ExecuteIfBound(OtherActor);
        }
    }
}




