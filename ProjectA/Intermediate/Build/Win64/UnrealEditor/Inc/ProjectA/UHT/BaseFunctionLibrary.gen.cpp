// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectA/Public/BaseFunctionLibrary.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTA_API UClass* Z_Construct_UClass_UBaseFunctionLibrary();
PROJECTA_API UClass* Z_Construct_UClass_UBaseFunctionLibrary_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_UPawnCombatComponent_NoRegister();
PROJECTA_API UEnum* Z_Construct_UEnum_ProjectA_EBaseConfirmType();
PROJECTA_API UEnum* Z_Construct_UEnum_ProjectA_EBaseValidType();
UPackage* Z_Construct_UPackage__Script_ProjectA();
// End Cross Module References

// Begin Class UBaseFunctionLibrary Function AddPlaygameTagToActor
struct Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics
{
	struct BaseFunctionLibrary_eventAddPlaygameTagToActor_Parms
	{
		AActor* Actor;
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "ModuleRelativePath", "Public/BaseFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventAddPlaygameTagToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventAddPlaygameTagToActor_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFunctionLibrary, nullptr, "AddPlaygameTagToActor", nullptr, nullptr, Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::BaseFunctionLibrary_eventAddPlaygameTagToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::BaseFunctionLibrary_eventAddPlaygameTagToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseFunctionLibrary::execAddPlaygameTagToActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBaseFunctionLibrary::AddPlaygameTagToActor(Z_Param_Actor,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UBaseFunctionLibrary Function AddPlaygameTagToActor

// Begin Class UBaseFunctionLibrary Function ApplyGameplayEffectSpecHandleToTargetActor
struct Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics
{
	struct BaseFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms
	{
		AActor* Instigator;
		AActor* TargetActor;
		FGameplayEffectSpecHandle OutSpecHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "ModuleRelativePath", "Public/BaseFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutSpecHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSpecHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_OutSpecHandle = { "OutSpecHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms, OutSpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutSpecHandle_MetaData), NewProp_OutSpecHandle_MetaData) }; // 3383902265
void Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms), &Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_OutSpecHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFunctionLibrary, nullptr, "ApplyGameplayEffectSpecHandleToTargetActor", nullptr, nullptr, Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::BaseFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::BaseFunctionLibrary_eventApplyGameplayEffectSpecHandleToTargetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseFunctionLibrary::execApplyGameplayEffectSpecHandleToTargetActor)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_OutSpecHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBaseFunctionLibrary::ApplyGameplayEffectSpecHandleToTargetActor(Z_Param_Instigator,Z_Param_TargetActor,Z_Param_Out_OutSpecHandle);
	P_NATIVE_END;
}
// End Class UBaseFunctionLibrary Function ApplyGameplayEffectSpecHandleToTargetActor

// Begin Class UBaseFunctionLibrary Function BP_GetPawnCombatComponentFromActor
struct Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics
{
	struct BaseFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms
	{
		AActor* Actor;
		EBaseValidType OutValidType;
		UPawnCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "Display", "Get PawnCombatComponent From Actor" },
		{ "ExpandEnumAsExecs", "OutValidType" },
		{ "ModuleRelativePath", "Public/BaseFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutValidType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutValidType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType = { "OutValidType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms, OutValidType), Z_Construct_UEnum_ProjectA_EBaseValidType, METADATA_PARAMS(0, nullptr) }; // 2982951054
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms, ReturnValue), Z_Construct_UClass_UPawnCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFunctionLibrary, nullptr, "BP_GetPawnCombatComponentFromActor", nullptr, nullptr, Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::BaseFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::BaseFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseFunctionLibrary::execBP_GetPawnCombatComponentFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_ENUM_REF(EBaseValidType,Z_Param_Out_OutValidType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPawnCombatComponent**)Z_Param__Result=UBaseFunctionLibrary::BP_GetPawnCombatComponentFromActor(Z_Param_Actor,(EBaseValidType&)(Z_Param_Out_OutValidType));
	P_NATIVE_END;
}
// End Class UBaseFunctionLibrary Function BP_GetPawnCombatComponentFromActor

// Begin Class UBaseFunctionLibrary Function BP_HasTag
struct Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics
{
	struct BaseFunctionLibrary_eventBP_HasTag_Parms
	{
		AActor* Actor;
		FGameplayTag Tag;
		EBaseConfirmType OutType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "Display", "Does Actor Has Tag" },
		{ "ExpandEnumAsExecs", "OutType" },
		{ "ModuleRelativePath", "Public/BaseFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventBP_HasTag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventBP_HasTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::NewProp_OutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::NewProp_OutType = { "OutType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventBP_HasTag_Parms, OutType), Z_Construct_UEnum_ProjectA_EBaseConfirmType, METADATA_PARAMS(0, nullptr) }; // 4113632116
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::NewProp_OutType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::NewProp_OutType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFunctionLibrary, nullptr, "BP_HasTag", nullptr, nullptr, Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::BaseFunctionLibrary_eventBP_HasTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::BaseFunctionLibrary_eventBP_HasTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseFunctionLibrary::execBP_HasTag)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_ENUM_REF(EBaseConfirmType,Z_Param_Out_OutType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBaseFunctionLibrary::BP_HasTag(Z_Param_Actor,Z_Param_Tag,(EBaseConfirmType&)(Z_Param_Out_OutType));
	P_NATIVE_END;
}
// End Class UBaseFunctionLibrary Function BP_HasTag

// Begin Class UBaseFunctionLibrary Function ComputeHitReactDirectionTag
struct Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics
{
	struct BaseFunctionLibrary_eventComputeHitReactDirectionTag_Parms
	{
		AActor* Attacker;
		AActor* HitActor;
		float OutAngleDiffrecence;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "ModuleRelativePath", "Public/BaseFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAngleDiffrecence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventComputeHitReactDirectionTag_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventComputeHitReactDirectionTag_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_OutAngleDiffrecence = { "OutAngleDiffrecence", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventComputeHitReactDirectionTag_Parms, OutAngleDiffrecence), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventComputeHitReactDirectionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_HitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_OutAngleDiffrecence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFunctionLibrary, nullptr, "ComputeHitReactDirectionTag", nullptr, nullptr, Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::BaseFunctionLibrary_eventComputeHitReactDirectionTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::BaseFunctionLibrary_eventComputeHitReactDirectionTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseFunctionLibrary::execComputeHitReactDirectionTag)
{
	P_GET_OBJECT(AActor,Z_Param_Attacker);
	P_GET_OBJECT(AActor,Z_Param_HitActor);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAngleDiffrecence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=UBaseFunctionLibrary::ComputeHitReactDirectionTag(Z_Param_Attacker,Z_Param_HitActor,Z_Param_Out_OutAngleDiffrecence);
	P_NATIVE_END;
}
// End Class UBaseFunctionLibrary Function ComputeHitReactDirectionTag

// Begin Class UBaseFunctionLibrary Function GetScalableFloatValueAtLevel
struct Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics
{
	struct BaseFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms
	{
		FScalableFloat ScFloat;
		float Level;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "CompactNodeTitle", "Get Value At Level" },
		{ "ModuleRelativePath", "Public/BaseFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScFloat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_ScFloat = { "ScFloat", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, ScFloat), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScFloat_MetaData), NewProp_ScFloat_MetaData) }; // 703790095
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_ScFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFunctionLibrary, nullptr, "GetScalableFloatValueAtLevel", nullptr, nullptr, Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::BaseFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::BaseFunctionLibrary_eventGetScalableFloatValueAtLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseFunctionLibrary::execGetScalableFloatValueAtLevel)
{
	P_GET_STRUCT_REF(FScalableFloat,Z_Param_Out_ScFloat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UBaseFunctionLibrary::GetScalableFloatValueAtLevel(Z_Param_Out_ScFloat,Z_Param_Level);
	P_NATIVE_END;
}
// End Class UBaseFunctionLibrary Function GetScalableFloatValueAtLevel

// Begin Class UBaseFunctionLibrary Function IsTargetPawnHostile
struct Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics
{
	struct BaseFunctionLibrary_eventIsTargetPawnHostile_Parms
	{
		APawn* OwningPawn;
		APawn* TargetPawn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xc4\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xc4\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPawn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_OwningPawn = { "OwningPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventIsTargetPawnHostile_Parms, OwningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_TargetPawn = { "TargetPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventIsTargetPawnHostile_Parms, TargetPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseFunctionLibrary_eventIsTargetPawnHostile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseFunctionLibrary_eventIsTargetPawnHostile_Parms), &Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_OwningPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_TargetPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFunctionLibrary, nullptr, "IsTargetPawnHostile", nullptr, nullptr, Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::BaseFunctionLibrary_eventIsTargetPawnHostile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::BaseFunctionLibrary_eventIsTargetPawnHostile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseFunctionLibrary::execIsTargetPawnHostile)
{
	P_GET_OBJECT(APawn,Z_Param_OwningPawn);
	P_GET_OBJECT(APawn,Z_Param_TargetPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBaseFunctionLibrary::IsTargetPawnHostile(Z_Param_OwningPawn,Z_Param_TargetPawn);
	P_NATIVE_END;
}
// End Class UBaseFunctionLibrary Function IsTargetPawnHostile

// Begin Class UBaseFunctionLibrary Function IsValidBlock
struct Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics
{
	struct BaseFunctionLibrary_eventIsValidBlock_Parms
	{
		AActor* Attacker;
		AActor* Defender;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "ModuleRelativePath", "Public/BaseFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Defender;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventIsValidBlock_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::NewProp_Defender = { "Defender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventIsValidBlock_Parms, Defender), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseFunctionLibrary_eventIsValidBlock_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseFunctionLibrary_eventIsValidBlock_Parms), &Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::NewProp_Defender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFunctionLibrary, nullptr, "IsValidBlock", nullptr, nullptr, Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::BaseFunctionLibrary_eventIsValidBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::BaseFunctionLibrary_eventIsValidBlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseFunctionLibrary::execIsValidBlock)
{
	P_GET_OBJECT(AActor,Z_Param_Attacker);
	P_GET_OBJECT(AActor,Z_Param_Defender);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBaseFunctionLibrary::IsValidBlock(Z_Param_Attacker,Z_Param_Defender);
	P_NATIVE_END;
}
// End Class UBaseFunctionLibrary Function IsValidBlock

// Begin Class UBaseFunctionLibrary Function RemovePlaygameTagFromActor
struct Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics
{
	struct BaseFunctionLibrary_eventRemovePlaygameTagFromActor_Parms
	{
		AActor* Actor;
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FunctionLibrary" },
		{ "ModuleRelativePath", "Public/BaseFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventRemovePlaygameTagFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseFunctionLibrary_eventRemovePlaygameTagFromActor_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseFunctionLibrary, nullptr, "RemovePlaygameTagFromActor", nullptr, nullptr, Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::BaseFunctionLibrary_eventRemovePlaygameTagFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::BaseFunctionLibrary_eventRemovePlaygameTagFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseFunctionLibrary::execRemovePlaygameTagFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	UBaseFunctionLibrary::RemovePlaygameTagFromActor(Z_Param_Actor,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UBaseFunctionLibrary Function RemovePlaygameTagFromActor

// Begin Class UBaseFunctionLibrary
void UBaseFunctionLibrary::StaticRegisterNativesUBaseFunctionLibrary()
{
	UClass* Class = UBaseFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPlaygameTagToActor", &UBaseFunctionLibrary::execAddPlaygameTagToActor },
		{ "ApplyGameplayEffectSpecHandleToTargetActor", &UBaseFunctionLibrary::execApplyGameplayEffectSpecHandleToTargetActor },
		{ "BP_GetPawnCombatComponentFromActor", &UBaseFunctionLibrary::execBP_GetPawnCombatComponentFromActor },
		{ "BP_HasTag", &UBaseFunctionLibrary::execBP_HasTag },
		{ "ComputeHitReactDirectionTag", &UBaseFunctionLibrary::execComputeHitReactDirectionTag },
		{ "GetScalableFloatValueAtLevel", &UBaseFunctionLibrary::execGetScalableFloatValueAtLevel },
		{ "IsTargetPawnHostile", &UBaseFunctionLibrary::execIsTargetPawnHostile },
		{ "IsValidBlock", &UBaseFunctionLibrary::execIsValidBlock },
		{ "RemovePlaygameTagFromActor", &UBaseFunctionLibrary::execRemovePlaygameTagFromActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFunctionLibrary);
UClass* Z_Construct_UClass_UBaseFunctionLibrary_NoRegister()
{
	return UBaseFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UBaseFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BaseFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/BaseFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseFunctionLibrary_AddPlaygameTagToActor, "AddPlaygameTagToActor" }, // 1176300289
		{ &Z_Construct_UFunction_UBaseFunctionLibrary_ApplyGameplayEffectSpecHandleToTargetActor, "ApplyGameplayEffectSpecHandleToTargetActor" }, // 3787415855
		{ &Z_Construct_UFunction_UBaseFunctionLibrary_BP_GetPawnCombatComponentFromActor, "BP_GetPawnCombatComponentFromActor" }, // 1618445011
		{ &Z_Construct_UFunction_UBaseFunctionLibrary_BP_HasTag, "BP_HasTag" }, // 2536825555
		{ &Z_Construct_UFunction_UBaseFunctionLibrary_ComputeHitReactDirectionTag, "ComputeHitReactDirectionTag" }, // 553548694
		{ &Z_Construct_UFunction_UBaseFunctionLibrary_GetScalableFloatValueAtLevel, "GetScalableFloatValueAtLevel" }, // 2223280581
		{ &Z_Construct_UFunction_UBaseFunctionLibrary_IsTargetPawnHostile, "IsTargetPawnHostile" }, // 2936904891
		{ &Z_Construct_UFunction_UBaseFunctionLibrary_IsValidBlock, "IsValidBlock" }, // 3884031766
		{ &Z_Construct_UFunction_UBaseFunctionLibrary_RemovePlaygameTagFromActor, "RemovePlaygameTagFromActor" }, // 2077170031
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFunctionLibrary_Statics::ClassParams = {
	&UBaseFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UBaseFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFunctionLibrary.OuterSingleton, Z_Construct_UClass_UBaseFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseFunctionLibrary.OuterSingleton;
}
template<> PROJECTA_API UClass* StaticClass<UBaseFunctionLibrary>()
{
	return UBaseFunctionLibrary::StaticClass();
}
UBaseFunctionLibrary::UBaseFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFunctionLibrary);
UBaseFunctionLibrary::~UBaseFunctionLibrary() {}
// End Class UBaseFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFunctionLibrary, UBaseFunctionLibrary::StaticClass, TEXT("UBaseFunctionLibrary"), &Z_Registration_Info_UClass_UBaseFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFunctionLibrary), 1097593923U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseFunctionLibrary_h_294930520(TEXT("/Script/ProjectA"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
