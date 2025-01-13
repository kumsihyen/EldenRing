// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectA/Public/AbilitySystem/Abilities/EnemyGameplayAbility.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyGameplayAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
PROJECTA_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
PROJECTA_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_UEnemyGameplayAbility();
PROJECTA_API UClass* Z_Construct_UClass_UEnemyGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectA();
// End Cross Module References

// Begin Class UEnemyGameplayAbility Function GetEnemyCharacterFromActorInfo
struct Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics
{
	struct EnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms
	{
		AEnemyCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/EnemyGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyGameplayAbility, nullptr, "GetEnemyCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::EnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::EnemyGameplayAbility_eventGetEnemyCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyGameplayAbility::execGetEnemyCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AEnemyCharacter**)Z_Param__Result=P_THIS->GetEnemyCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class UEnemyGameplayAbility Function GetEnemyCharacterFromActorInfo

// Begin Class UEnemyGameplayAbility Function GetEnemyCombatComponentFromActorInfo
struct Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics
{
	struct EnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms
	{
		UEnemyCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/EnemyGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UEnemyCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyGameplayAbility, nullptr, "GetEnemyCombatComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::EnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::EnemyGameplayAbility_eventGetEnemyCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyGameplayAbility::execGetEnemyCombatComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEnemyCombatComponent**)Z_Param__Result=P_THIS->GetEnemyCombatComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UEnemyGameplayAbility Function GetEnemyCombatComponentFromActorInfo

// Begin Class UEnemyGameplayAbility Function MakeEnemyDamageEffectSpecHandle
struct Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics
{
	struct EnemyGameplayAbility_eventMakeEnemyDamageEffectSpecHandle_Parms
	{
		TSubclassOf<UGameplayEffect> Effect;
		FScalableFloat DamageFloat;
		FGameplayEffectSpecHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/EnemyGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageFloat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyGameplayAbility_eventMakeEnemyDamageEffectSpecHandle_Parms, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::NewProp_DamageFloat = { "DamageFloat", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyGameplayAbility_eventMakeEnemyDamageEffectSpecHandle_Parms, DamageFloat), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageFloat_MetaData), NewProp_DamageFloat_MetaData) }; // 703790095
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyGameplayAbility_eventMakeEnemyDamageEffectSpecHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 3383902265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::NewProp_DamageFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyGameplayAbility, nullptr, "MakeEnemyDamageEffectSpecHandle", nullptr, nullptr, Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::EnemyGameplayAbility_eventMakeEnemyDamageEffectSpecHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::EnemyGameplayAbility_eventMakeEnemyDamageEffectSpecHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyGameplayAbility::execMakeEnemyDamageEffectSpecHandle)
{
	P_GET_OBJECT(UClass,Z_Param_Effect);
	P_GET_STRUCT_REF(FScalableFloat,Z_Param_Out_DamageFloat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayEffectSpecHandle*)Z_Param__Result=P_THIS->MakeEnemyDamageEffectSpecHandle(Z_Param_Effect,Z_Param_Out_DamageFloat);
	P_NATIVE_END;
}
// End Class UEnemyGameplayAbility Function MakeEnemyDamageEffectSpecHandle

// Begin Class UEnemyGameplayAbility
void UEnemyGameplayAbility::StaticRegisterNativesUEnemyGameplayAbility()
{
	UClass* Class = UEnemyGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEnemyCharacterFromActorInfo", &UEnemyGameplayAbility::execGetEnemyCharacterFromActorInfo },
		{ "GetEnemyCombatComponentFromActorInfo", &UEnemyGameplayAbility::execGetEnemyCombatComponentFromActorInfo },
		{ "MakeEnemyDamageEffectSpecHandle", &UEnemyGameplayAbility::execMakeEnemyDamageEffectSpecHandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyGameplayAbility);
UClass* Z_Construct_UClass_UEnemyGameplayAbility_NoRegister()
{
	return UEnemyGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UEnemyGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/EnemyGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/EnemyGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCharacterFromActorInfo, "GetEnemyCharacterFromActorInfo" }, // 1588144668
		{ &Z_Construct_UFunction_UEnemyGameplayAbility_GetEnemyCombatComponentFromActorInfo, "GetEnemyCombatComponentFromActorInfo" }, // 191265928
		{ &Z_Construct_UFunction_UEnemyGameplayAbility_MakeEnemyDamageEffectSpecHandle, "MakeEnemyDamageEffectSpecHandle" }, // 852704958
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyGameplayAbility_Statics::ClassParams = {
	&UEnemyGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UEnemyGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyGameplayAbility.OuterSingleton, Z_Construct_UClass_UEnemyGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyGameplayAbility.OuterSingleton;
}
template<> PROJECTA_API UClass* StaticClass<UEnemyGameplayAbility>()
{
	return UEnemyGameplayAbility::StaticClass();
}
UEnemyGameplayAbility::UEnemyGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyGameplayAbility);
UEnemyGameplayAbility::~UEnemyGameplayAbility() {}
// End Class UEnemyGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyGameplayAbility, UEnemyGameplayAbility::StaticClass, TEXT("UEnemyGameplayAbility"), &Z_Registration_Info_UClass_UEnemyGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyGameplayAbility), 3042657205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h_3452541872(TEXT("/Script/ProjectA"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_EnemyGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
