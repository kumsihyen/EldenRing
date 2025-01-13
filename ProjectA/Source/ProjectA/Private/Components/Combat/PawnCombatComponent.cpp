// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Combat/PawnCombatComponent.h"
#include "Items/Weapon/WeaponBase.h"
#include "Components/BoxComponent.h"
#include "BaseDebugHelper.h"

void UPawnCombatComponent::RegisterSpawnedWeapon(FGameplayTag WeaponTag, AWeaponBase* Weapon, bool bRegisterAsEquippedWeapon)
{
    checkf(!CharacterCarriedWeaponMap.Contains(WeaponTag), TEXT("%s has already been as carried weapon"), *WeaponTag.ToString()); 
    check(Weapon);

    CharacterCarriedWeaponMap.Emplace(WeaponTag, Weapon);

    Weapon->OnWeaponHitTarget.BindUObject(this, &ThisClass::OnHitTargetActor);
    Weapon->OnWeaponPulledFromTarget.BindUObject(this, &ThisClass::OnWeaponPulledFromTargetActor);

    //������ ����� ����� �Ǹ� �����������⸦ ����
    if (bRegisterAsEquippedWeapon)
    {
        CurrentEquippedWeaponTag = WeaponTag;
    }
}

AWeaponBase* UPawnCombatComponent::GetCharacterCarriedWeaponByTag(FGameplayTag WeaponTag) const
{
    //Map �����̳ʿ� WeaponTag�� �����Ͱ� ������ AWeaponBase ��ȯ
    if (CharacterCarriedWeaponMap.Contains(WeaponTag))
    {
        if (AWeaponBase* const* FoundWeapon = CharacterCarriedWeaponMap.Find(WeaponTag))
        {
            return *FoundWeapon;
        }
    }

    return nullptr;
}

AWeaponBase* UPawnCombatComponent::GetCharacterCurrentEquippedWeapon() const
{
    if (!CurrentEquippedWeaponTag.IsValid())
    {
        return nullptr;
    }

    return GetCharacterCarriedWeaponByTag(CurrentEquippedWeaponTag);
}

void UPawnCombatComponent::ToggleWeaponCollision(bool bUse, EToggleDamageType ToggleDamageType)
{
    if (ToggleDamageType == EToggleDamageType::CurrentEquippedWeapon)
    {
        //무기 장착시
        ToggleCurrentEquippedWeaponCollision(bUse);
    }
    else
    {
        //맨손 공격시
        ToggleBodyCollision(bUse, ToggleDamageType);
    }
}

void UPawnCombatComponent::OnHitTargetActor(AActor* HitActor)
{
    //�ڽĿ��� ����
}

void UPawnCombatComponent::OnWeaponPulledFromTargetActor(AActor* InterectedActor)
{
    //�ڽĿ��� ����
}

void UPawnCombatComponent::ToggleCurrentEquippedWeaponCollision(bool bUse)
{
    AWeaponBase* Weapon = GetCharacterCurrentEquippedWeapon();

    check(Weapon);

    if (bUse)
    {
        Weapon->GetWeaponCollisionBox()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    }
    else
    {
        Weapon->GetWeaponCollisionBox()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        OverlappedActors.Empty();
    }
}

void UPawnCombatComponent::ToggleBodyCollision(bool bUse, EToggleDamageType ToggelDamageType)
{
    
}
