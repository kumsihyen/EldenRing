// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/BaseGameplayAbility.h"
#include "HeroGameplayAbility.generated.h"

class AHeroCharacter;
class AHeroController;
class UHeroCombatComponent;
/**
 * 
 */
UCLASS()
class PROJECTA_API UHeroGameplayAbility : public UBaseGameplayAbility
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintPure, Category = "Ability")
    AHeroCharacter* GetHeroCharacterFromActorInfo();

    UFUNCTION(BlueprintPure, Category = "Ability")
    AHeroController* GetHeroControllerFromActorInfo();

    UFUNCTION(BlueprintPure, Category = "Ability")
    UHeroCombatComponent* GetHeroCombatComponentFromActorInfo();

    UFUNCTION(BlueprintPure, Category = "Ability")
    FGameplayEffectSpecHandle MakeHeroDamageEffectSpecHandle(TSubclassOf<UGameplayEffect> Effect, float WeaponBaseDamage, FGameplayTag AttckTypeTag, int32 ComboCount);

private:
    //�����ɸ����� ������ ������ �ִٸ� ĳ�� TWeakObjectPtr�� ���� ������ �������� ���� �� ��ü�� �ڵ����� �����մϴ�. (���� ������)
    TWeakObjectPtr<AHeroCharacter> CachedHeroCharacter;
    TWeakObjectPtr<AHeroController> CachedHeroController;

};
