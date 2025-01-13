// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Ui/PawnUiComponent.h"
#include "HeroUIComponent.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTA_API UHeroUIComponent : public UPawnUiComponent
{
	GENERATED_BODY()


public:
	UPROPERTY(BlueprintAssignable)
	FOnPercentChangeDelegate OnCurrentMpChanged;
	
};
