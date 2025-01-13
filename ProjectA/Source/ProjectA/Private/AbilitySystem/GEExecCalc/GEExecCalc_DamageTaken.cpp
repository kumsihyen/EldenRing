// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/GEExecCalc/GEExecCalc_DamageTaken.h"
#include "AbilitySystem/BaseAttributeSet.h"
#include "BaseGamePlayTags.h"
#include "BaseDebugHelper.h"

struct FDamageCapture
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Attack)
	DECLARE_ATTRIBUTE_CAPTUREDEF(Defence)
	DECLARE_ATTRIBUTE_CAPTUREDEF(DamageTaken)

	FDamageCapture()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UBaseAttributeSet, Attack, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UBaseAttributeSet, Defence, Target, false)
		DEFINE_ATTRIBUTE_CAPTUREDEF(UBaseAttributeSet, DamageTaken, Target, false);
	}
};

static const FDamageCapture& GetDamageCapture()
{
	static FDamageCapture DamageCapture;
	return DamageCapture;
}

UGEExecCalc_DamageTaken::UGEExecCalc_DamageTaken()
{
	/*
	//프로퍼티 생성
	FProperty* AttackProperty = FindFieldChecked<FProperty>(
		UBaseAttributeSet::StaticClass(),
		GET_MEMBER_NAME_CHECKED(UBaseAttributeSet, Attack)
	);

	//캡처 생성
	FGameplayEffectAttributeCaptureDefinition AttackCaptureDefinition(
		AttackProperty,
		EGameplayEffectAttributeCaptureSource::Source,
		false
	);

	RelevantAttributesToCapture.Add(AttackCaptureDefinition);
	*/

	//Define을 이용한 캡처주입 방식
	RelevantAttributesToCapture.Add(GetDamageCapture().AttackDef);
	RelevantAttributesToCapture.Add(GetDamageCapture().DefenceDef);
	RelevantAttributesToCapture.Add(GetDamageCapture().DamageTakenDef);
}

void UGEExecCalc_DamageTaken::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	const FGameplayEffectSpec& EffectSpec = ExecutionParams.GetOwningSpec();

	FAggregatorEvaluateParameters EvaluateParameters;
	EvaluateParameters.SourceTags = EffectSpec.CapturedSourceTags.GetAggregatedTags();
	EvaluateParameters.TargetTags = EffectSpec.CapturedTargetTags.GetAggregatedTags();

	float SourceAttack = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetDamageCapture().AttackDef, EvaluateParameters, SourceAttack);
	//Debug::Print(TEXT("SourceAttack"), SourceAttack);

	float BaseDamage = 0.f;
	int32 CachedComboCount_Light = 0;
	int32 CachedComboCount_Heavy = 0;


	for (const TPair<FGameplayTag, float>& TagMagnitude : EffectSpec.SetByCallerTagMagnitudes)
	{
		if (TagMagnitude.Key.MatchesTagExact(BaseGamePlayTags::Shared_SetByCaller_BaseDamage))
		{
			BaseDamage = TagMagnitude.Value;
			//Debug::Print(TEXT("BaseDamage"), BaseDamage);
		}

		if (TagMagnitude.Key.MatchesTagExact(BaseGamePlayTags::Player_SetByCaller_AttackType_Light))
		{
			CachedComboCount_Light = TagMagnitude.Value;
			//Debug::Print(TEXT("CachedComboCount_Light"), CachedComboCount_Light);
		}

		if (TagMagnitude.Key.MatchesTagExact(BaseGamePlayTags::Player_SetByCaller_AttackType_Heavy))
		{
			CachedComboCount_Heavy = TagMagnitude.Value;
			//Debug::Print(TEXT("CachedComboCount_Heavy"), CachedComboCount_Heavy);
		}
	}

	float TargetDefence = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetDamageCapture().DefenceDef, EvaluateParameters, TargetDefence);
	//Debug::Print(TEXT("TargetDefence"), TargetDefence);

	if (CachedComboCount_Light != 0)
	{
		const float LightDamageIncrePercent = (CachedComboCount_Light - 1) * 0.05 + 1.0f;
		BaseDamage *= LightDamageIncrePercent;
		//Debug::Print(TEXT("CachedComboCount_Light BaseDamage"), BaseDamage);
	}

	if (CachedComboCount_Heavy != 0)
	{
		const float HeavyDamageIncrePercent = CachedComboCount_Heavy * 0.15f + 1.f;
		BaseDamage *= HeavyDamageIncrePercent;
		//Debug::Print(TEXT("CachedComboCount_Heavy BaseDamage"), BaseDamage);
	}

	const float FinalDamage = BaseDamage * SourceAttack / TargetDefence;
	//Debug::Print(TEXT("FinalDamage"), FinalDamage);

	if (FinalDamage > 0.f)
	{
		OutExecutionOutput.AddOutputModifier(
			FGameplayModifierEvaluatedData(
				GetDamageCapture().DamageTakenProperty,
				EGameplayModOp::Override,
				FinalDamage
			)
		);
	}
}
