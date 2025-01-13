// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "HeroCombatComponent.generated.h"

class AHeroWeapon;
/**
 * 
 */
UCLASS()
class PROJECTA_API UHeroCombatComponent : public UPawnCombatComponent
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable, Category = "Combat")
    AHeroWeapon* GetHeroCarriedWeaponByTag(FGameplayTag Tag) const;

    UFUNCTION(BlueprintCallable, Category = "Combat")
    AHeroWeapon* GetHeroCurrentEquippedWeapon() const;

    UFUNCTION(BlueprintCallable, Category = "Combat")
    float GetHeroCurrentEquippedWeaponDamageAtLevel(float Level) const;

    //HitDetection
    virtual void OnHitTargetActor(AActor* HitActor) override;
    virtual void OnWeaponPulledFromTargetActor(AActor* InterectedActor) override;
};
