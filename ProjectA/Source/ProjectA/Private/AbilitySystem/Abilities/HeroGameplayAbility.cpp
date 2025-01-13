// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/HeroGameplayAbility.h"
#include "Characters/HeroCharacter.h"
#include "Controllers/HeroController.h"
#include "AbilitySystem/BaseAbilitySystemComponent.h"
#include "BaseGamePlayTags.h"
#include "BaseDebugHelper.h"

AHeroCharacter* UHeroGameplayAbility::GetHeroCharacterFromActorInfo()
{
    if (!CachedHeroCharacter.IsValid())
    {
        CachedHeroCharacter = Cast<AHeroCharacter>(CurrentActorInfo->AvatarActor);
    }

    return CachedHeroCharacter.IsValid()? CachedHeroCharacter.Get() : nullptr;
}

AHeroController* UHeroGameplayAbility::GetHeroControllerFromActorInfo()
{
    if (!CachedHeroController.IsValid())
    {
        CachedHeroController = Cast<AHeroController>(CurrentActorInfo->PlayerController);

    }
    return CachedHeroController.IsValid()? CachedHeroController.Get() : nullptr;
}

UHeroCombatComponent* UHeroGameplayAbility::GetHeroCombatComponentFromActorInfo()
{
    return GetHeroCharacterFromActorInfo()->GetHeroCombatComponent();
}

FGameplayEffectSpecHandle UHeroGameplayAbility::MakeHeroDamageEffectSpecHandle(TSubclassOf<UGameplayEffect> Effect, float WeaponBaseDamage, FGameplayTag AttckTypeTag, int32 ComboCount)
{
    check(Effect);

    FGameplayEffectContextHandle ContextHandle;
    ContextHandle.SetAbility(this);
    ContextHandle.AddSourceObject(GetAvatarActorFromActorInfo());
    ContextHandle.AddInstigator(GetAvatarActorFromActorInfo(), GetAvatarActorFromActorInfo());

    FGameplayEffectSpecHandle SpecHandle = GetBaseAbilitySystemComponentFromActorInfo()->MakeOutgoingSpec(
        Effect,
        GetAbilityLevel(),
        ContextHandle
    );

    SpecHandle.Data->SetSetByCallerMagnitude(
        BaseGamePlayTags::Shared_SetByCaller_BaseDamage,
        WeaponBaseDamage
    );


    if (AttckTypeTag.IsValid())
    {
        SpecHandle.Data->SetSetByCallerMagnitude(AttckTypeTag, ComboCount);
    }

    return SpecHandle;
} 
