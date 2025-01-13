// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BaseType/BaseEnumType.h"
#include "BaseFunctionLibrary.generated.h"


struct FGameplayTag;
class UBaseAbilitySystemComponent;
class UPawnCombatComponent;
struct FScalableFloat;
/**
 * 
 */
UCLASS()
class PROJECTA_API UBaseFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	//UBlueprintFunctionLibrary�� ���� �����̹Ƿ� public�� static���� �����ؾ� ��. ���ͷ� ������ �����Ƽ�ý��� ������Ʈ ��������
	static UBaseAbilitySystemComponent* NativeGetAbilitySystemComponentFromActor(AActor* Actor);

	UFUNCTION(BlueprintCallable, Category="FunctionLibrary")
	static void AddPlaygameTagToActor(AActor* Actor, FGameplayTag Tag);

	UFUNCTION(BlueprintCallable, Category = "FunctionLibrary")
	static void RemovePlaygameTagFromActor(AActor* Actor, FGameplayTag Tag);

	static bool NativeActorHasTag(AActor* Actor, FGameplayTag Tag);

	UFUNCTION(BlueprintCallable, Category = "FunctionLibrary", meta=(Display="Does Actor Has Tag", ExpandEnumAsExecs = "OutType"))
	static void BP_HasTag(AActor* Actor, FGameplayTag Tag, EBaseConfirmType& OutType);

    static UPawnCombatComponent* NativeGetPawnCombatComponentFromActor(AActor* Actor);

    UFUNCTION(BlueprintCallable, Category = "FunctionLibrary", meta = (Display = "Get PawnCombatComponent From Actor", ExpandEnumAsExecs = "OutValidType"))
    static UPawnCombatComponent* BP_GetPawnCombatComponentFromActor(AActor* Actor, EBaseValidType& OutValidType);

    //�Ǿ� �ĺ� ���� �Լ�
    UFUNCTION(BlueprintPure, Category = "FunctionLibrary")
    static bool IsTargetPawnHostile(APawn* OwningPawn, APawn* TargetPawn);

    UFUNCTION(BlueprintPure, Category = "FunctionLibrary", meta = (CompactNodeTitle = "Get Value At Level"))
    static float GetScalableFloatValueAtLevel(const FScalableFloat& ScFloat, float Level);

	UFUNCTION(BlueprintPure, Category = "FunctionLibrary")
	static FGameplayTag ComputeHitReactDirectionTag(AActor* Attacker, AActor* HitActor, float& OutAngleDiffrecence);

	UFUNCTION(BlueprintPure, Category = "FunctionLibrary")
	static bool IsValidBlock(AActor* Attacker, AActor* Defender);

	UFUNCTION(BlueprintPure, Category = "FunctionLibrary")
	static bool ApplyGameplayEffectSpecHandleToTargetActor(AActor* Instigator, AActor* TargetActor, const FGameplayEffectSpecHandle& OutSpecHandle);
};
