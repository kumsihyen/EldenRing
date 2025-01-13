// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnExtensionComponent.h"
#include "GameplayTagContainer.h"
#include "PawnCombatComponent.generated.h"

class AWeaponBase;

UENUM(BlueprintType)
enum class EToggleDamageType : uint8
{
    CurrentEquippedWeapon,
    LeftHand,
    RightHand,
};

/**
 * 
 */
UCLASS()
class PROJECTA_API UPawnCombatComponent : public UPawnExtensionComponent
{
	GENERATED_BODY()

public:
    //������ ���� ���
    UFUNCTION(BlueprintCallable, Category = "Hero")
    void RegisterSpawnedWeapon(FGameplayTag WeaponTag, AWeaponBase* Weapon, bool bRegisterAsEquippedWeapon = false);

    //�ɸ��Ͱ� �޴��ϴ� ����
    UFUNCTION(BlueprintCallable, Category = "Hero")
    AWeaponBase* GetCharacterCarriedWeaponByTag(FGameplayTag WeaponTag) const;

    //ĳ���Ͱ� ������ ������ �±�
    UPROPERTY(BlueprintReadWrite, Category = "Hero")
    FGameplayTag CurrentEquippedWeaponTag;

    //ĳ���Ͱ� ������ ����
    UFUNCTION(BlueprintCallable, Category = "Hero")
    AWeaponBase* GetCharacterCurrentEquippedWeapon() const;

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void ToggleWeaponCollision(bool bUse, EToggleDamageType ToggelDamageType = EToggleDamageType::CurrentEquippedWeapon);

    //HitDetection
    virtual void OnHitTargetActor(AActor* HitActor);
    virtual void OnWeaponPulledFromTargetActor(AActor* InterectedActor);

protected:
    virtual void ToggleCurrentEquippedWeaponCollision(bool bUse);
    virtual void ToggleBodyCollision(bool bUse, EToggleDamageType ToggleDamageType);
    
    TArray<AActor*> OverlappedActors;

private:
    //ĳ���ʹ� ���� ���⸦ ������ �� �ִ�.
    TMap<FGameplayTag, AWeaponBase*> CharacterCarriedWeaponMap;
};
