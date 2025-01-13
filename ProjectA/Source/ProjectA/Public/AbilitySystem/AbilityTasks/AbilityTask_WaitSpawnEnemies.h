// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_WaitSpawnEnemies.generated.h"

class AEnemyCharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitSpawnEnemiesDelegate, const TArray<AEnemyCharacter*>&, SpawnEnemies);

/**
 * 
 */
UCLASS()
class PROJECTA_API UAbilityTask_WaitSpawnEnemies : public UAbilityTask
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "AbilityTask", meta=(DisplayName="Wait Gameplay Event And Spawn Enemies",
		HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "true", NumToSpawn= "1", RandomSpawnRadius = "200"
	))
	static UAbilityTask_WaitSpawnEnemies* WaitSpawnEnemies(
		UGameplayAbility* OwningAbility,
		FGameplayTag EventTag,
		TSoftClassPtr<AEnemyCharacter> SoftEnemyClass,
		int32 NumToSpawn,
		const FVector& SpawnLocation,
		float RandomSpawnRadius
	);

	virtual void Activate() override;
	//*OnDestroy함수는 재구현한 함수 마지막 부분에  super 처리 할것!
	virtual void OnDestroy(bool bInOwnerFinished) override;

	UPROPERTY(BlueprintAssignable)
	FWaitSpawnEnemiesDelegate OnSpawnFinished;

	UPROPERTY(BlueprintAssignable)
	FWaitSpawnEnemiesDelegate SpawnFailed;

private:
	FGameplayTag CachedEventTag;
	TSoftClassPtr<AEnemyCharacter> CachedSoftEnemiesClass;
	int32 CachedNumToSpawn;
	FVector CachedSpawnLocation;
	float CachedRandomSpawnRadius;

	//FGameplayEventData 델리게이트 이벤트 소멸을 위한 핸들
	FDelegateHandle SpawnEnemiesHandle;

	void OnGameplayEventReceived(const FGameplayEventData* Payload);
	void OnEnemyClassLoaded();
};
