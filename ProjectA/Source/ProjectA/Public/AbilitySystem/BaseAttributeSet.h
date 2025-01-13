// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystem/BaseAbilitySystemComponent.h"


#include "BaseAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

class IPawnUIInterface;
/**
 * 
 */
UCLASS()
class PROJECTA_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UBaseAttributeSet();

    virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

	UPROPERTY(BlueprintReadOnly, Category="Status")
	FGameplayAttributeData CurrentHp;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, CurrentHp)

	UPROPERTY(BlueprintReadOnly, Category = "Status")
	FGameplayAttributeData MaxHp;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxHp)

	UPROPERTY(BlueprintReadOnly, Category = "Status")
	FGameplayAttributeData CurrentMp;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, CurrentMp)
	
	UPROPERTY(BlueprintReadOnly, Category = "Status")
	FGameplayAttributeData MaxMp;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxMp)

	UPROPERTY(BlueprintReadOnly, Category = "Damage")
	FGameplayAttributeData Attack;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Attack)

	UPROPERTY(BlueprintReadOnly, Category = "Damage")
	FGameplayAttributeData Defence;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Defence)

	UPROPERTY(BlueprintReadOnly, Category = "Damage")
	FGameplayAttributeData DamageTaken;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, DamageTaken)

private:
	TWeakInterfacePtr<IPawnUIInterface> CachedUIInterface;
};