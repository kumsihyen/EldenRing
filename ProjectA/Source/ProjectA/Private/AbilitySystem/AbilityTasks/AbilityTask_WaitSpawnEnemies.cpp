// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AbilityTasks/AbilityTask_WaitSpawnEnemies.h"

#include "AbilitySystemComponent.h"
#include "NavigationSystem.h"
#include "Characters/EnemyCharacter.h"
#include "Engine/AssetManager.h"
#include "BaseDebugHelper.h"

UAbilityTask_WaitSpawnEnemies* UAbilityTask_WaitSpawnEnemies::WaitSpawnEnemies(UGameplayAbility* OwningAbility,
                                                                               FGameplayTag EventTag, TSoftClassPtr<AEnemyCharacter> SoftEnemyClass, int32 NumToSpawn,
                                                                               const FVector& SpawnLocation, float RandomSpawnRadius)
{

	//어빌리티 태스크를 생성해서 인자값으로 받은 정보를 담아서 넘긴다.
	UAbilityTask_WaitSpawnEnemies* Node = NewAbilityTask<UAbilityTask_WaitSpawnEnemies>(OwningAbility);
	Node->CachedEventTag = EventTag;
	Node->CachedSoftEnemiesClass = SoftEnemyClass;
	Node->CachedNumToSpawn = NumToSpawn;
	Node->CachedSpawnLocation = SpawnLocation;
	Node->CachedRandomSpawnRadius = RandomSpawnRadius;

	return Node;
}

void UAbilityTask_WaitSpawnEnemies::Activate()
{
	Super::Activate();

	//WaitSpawnEnemies 태스크 활성화시 FGameplayEventMulticastDelegate 게임플레이 이벤트 데이터 처리를 위해 델리게이트화
	FGameplayEventMulticastDelegate& Delegate = AbilitySystemComponent->GenericGameplayEventCallbacks.FindOrAdd(CachedEventTag);
	SpawnEnemiesHandle = Delegate.AddUObject(this, &UAbilityTask_WaitSpawnEnemies::OnGameplayEventReceived);
	
}

void UAbilityTask_WaitSpawnEnemies::OnDestroy(bool bInOwnerFinished)
{
	//Activate에서 주입한 SpawnEnemiesHandle로 Remove
	FGameplayEventMulticastDelegate& Delegate = AbilitySystemComponent->GenericGameplayEventCallbacks.FindOrAdd(CachedEventTag);
	Delegate.Remove(SpawnEnemiesHandle);
	
	Super::OnDestroy(bInOwnerFinished);
}

void UAbilityTask_WaitSpawnEnemies::OnGameplayEventReceived(const FGameplayEventData* Payload)
{
	//CachedSoftEnemiesClass가 null이 아닌걸 보장
	if (ensure(!CachedSoftEnemiesClass.IsNull()))
	{
		//비동기 클래스 로딩 OnEnemyClassLoaded에서 적캐릭터 생성 구현 
		UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
			CachedSoftEnemiesClass.ToSoftObjectPath(),
			FStreamableDelegate::CreateUObject(this, &UAbilityTask_WaitSpawnEnemies::OnEnemyClassLoaded)
		);
	}
	else
	{
		//델리게이트 브로드캐스팅전 어빌리티가 여전히 활성화되어 있는지 체크
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			//생성실패 델리게이트 브로드캐스팅
			SpawnFailed.Broadcast(TArray<AEnemyCharacter*>());
		}

		EndTask();
	}
	
}

void UAbilityTask_WaitSpawnEnemies::OnEnemyClassLoaded()
{
	UClass* LoadedClass = CachedSoftEnemiesClass.Get();
	UWorld* World = GetWorld();

	if (!LoadedClass || !World)
	{
		if (ShouldBroadcastAbilityTaskDelegates())
		{
			//생성실패 델리게이트 브로드캐스팅
			SpawnFailed.Broadcast(TArray<AEnemyCharacter*>());

			EndTask();

			return;
		}
	}

	TArray<AEnemyCharacter*> SpawnedEnemies;

	//생성된 적이 바닥 위에 생성되서 바닥에 갇히거나, 떨어지는걸 방지
	float UpperZPos = 150.0f;

	//생성조건 파라미터로 부여
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	
	for (int32 i = 0; i < CachedNumToSpawn; i++)
	{
		FVector RandomLocation;
		UNavigationSystemV1::K2_GetRandomReachablePointInRadius(
			this,CachedSpawnLocation,RandomLocation,CachedRandomSpawnRadius);

		RandomLocation += FVector(0.0f,0.0f,UpperZPos);

		const FRotator SpawnFacingRotation = AbilitySystemComponent->GetAvatarActor()->GetActorForwardVector().ToOrientationRotator();

		AEnemyCharacter* SpawnEnemy = World->SpawnActor<AEnemyCharacter>(LoadedClass, RandomLocation, SpawnFacingRotation, SpawnParams);

		if (SpawnEnemy)
		{
			SpawnedEnemies.Add(SpawnEnemy);
		}
	}

	if (ShouldBroadcastAbilityTaskDelegates())
	{
		if (!SpawnedEnemies.IsEmpty())
		{
			OnSpawnFinished.Broadcast(SpawnedEnemies);
		}
		else
		{
			SpawnFailed.Broadcast(TArray<AEnemyCharacter*>());
		}
	}

	EndTask();
}
