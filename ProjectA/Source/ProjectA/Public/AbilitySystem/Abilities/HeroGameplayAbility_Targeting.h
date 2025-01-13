// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/HeroGameplayAbility.h"
#include "HeroGameplayAbility_Targeting.generated.h"

class UInputMappingContext;
class UWidgetBase;
/**
 * 
 */
UCLASS()
class PROJECTA_API UHeroGameplayAbility_Targeting : public UHeroGameplayAbility
{
	GENERATED_BODY()

protected:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UFUNCTION(BlueprintCallable)
	void OnTargetingTick(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	void SwitchTarget(const FGameplayTag& SwitchDirectionTag);
	
private:
	void TryLockOnTarget();
	void GetAvailableActorsToLock();
	AActor* GetNearestTargetFromAvailableActors(const TArray<AActor*>& AvailableActors);
	void GetAvailableActorAroundTarget(TArray<AActor*>& OutLeftActors, TArray<AActor*>& OutRightActors);
	void DrawTargetingWidget();

	void CancelTargetingAbility();
	void CleanUp();
	void SetTagetingWidgetPosition();

	void InitTargetingMovement();
	void InitTargetingMappingContext();
	void ResetTargetingMovement();
	void ResetTargetingMappingContext();

	

	UPROPERTY(EditDefaultsOnly, Category="Targeting")
	float TraceDistance = 5000.0f;

	UPROPERTY(EditDefaultsOnly, Category="Targeting")
	FVector TraceBoxSize = FVector(5000.0f, 5000.0f, 300.f);
	
	UPROPERTY(EditDefaultsOnly, Category="Targeting")
	TArray<TEnumAsByte<EObjectTypeQuery>> TraceChannel;

	UPROPERTY(EditDefaultsOnly, Category="Targeting")
	bool bShowDebugShape;

	UPROPERTY()
	TArray<AActor*> AvailableActorsToLock;

	UPROPERTY()
	AActor* CurrentTaget;

	UPROPERTY(EditDefaultsOnly, Category="Targeting")
	TSubclassOf<UWidgetBase> TargetingWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category="Targeting")
	float TargetingRotationInterpSpeed = 5.0f;

	UPROPERTY(EditDefaultsOnly, Category="Targeting")
	float TargetingCameraOffset = 20.0f;
	
	UPROPERTY()
	UWidgetBase* TargetingWidget;

	UPROPERTY()
	FVector2D TargetingWidgetSize = FVector2D::ZeroVector;

	UPROPERTY()
	float CachedWalkSpeed = 0.0f;

	UPROPERTY(EditDefaultsOnly, Category="Targeting")
	float TargetingWalkSpeed = 150.0f;

	UPROPERTY(EditDefaultsOnly, Category="Targeting")
	UInputMappingContext* TargetingMappingContext;
	
};