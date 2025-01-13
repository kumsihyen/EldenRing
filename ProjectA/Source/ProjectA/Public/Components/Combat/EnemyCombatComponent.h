// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "EnemyCombatComponent.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTA_API UEnemyCombatComponent : public UPawnCombatComponent
{
	GENERATED_BODY()
	
public:
    virtual void OnHitTargetActor(AActor* HitActor) override;
	virtual void ToggleBodyCollision(bool bUse, EToggleDamageType ToggleDamageType) override;
};
