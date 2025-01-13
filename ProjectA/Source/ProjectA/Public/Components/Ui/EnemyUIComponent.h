// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Ui/PawnUiComponent.h"
#include "EnemyUIComponent.generated.h"

class UWidgetBase;
/**
 * 
 */
UCLASS()
class PROJECTA_API UEnemyUIComponent : public UPawnUiComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void RegisterEnemyWidget(UWidgetBase* Widget);
	
	UFUNCTION(BlueprintCallable)
	void RemoveEnemyWidget();

private:
	TArray<UWidgetBase*> EnemyWidgets;
};
