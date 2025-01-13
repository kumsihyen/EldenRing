// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectA/Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroGameplayAbility_Targeting() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTA_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
PROJECTA_API UClass* Z_Construct_UClass_UHeroGameplayAbility_Targeting();
PROJECTA_API UClass* Z_Construct_UClass_UHeroGameplayAbility_Targeting_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_UWidgetBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectA();
// End Cross Module References

// Begin Class UHeroGameplayAbility_Targeting Function OnTargetingTick
struct Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick_Statics
{
	struct HeroGameplayAbility_Targeting_eventOnTargetingTick_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroGameplayAbility_Targeting_eventOnTargetingTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroGameplayAbility_Targeting, nullptr, "OnTargetingTick", nullptr, nullptr, Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick_Statics::HeroGameplayAbility_Targeting_eventOnTargetingTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick_Statics::HeroGameplayAbility_Targeting_eventOnTargetingTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroGameplayAbility_Targeting::execOnTargetingTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetingTick(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UHeroGameplayAbility_Targeting Function OnTargetingTick

// Begin Class UHeroGameplayAbility_Targeting Function SwitchTarget
struct Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget_Statics
{
	struct HeroGameplayAbility_Targeting_eventSwitchTarget_Parms
	{
		FGameplayTag SwitchDirectionTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchDirectionTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchDirectionTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget_Statics::NewProp_SwitchDirectionTag = { "SwitchDirectionTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroGameplayAbility_Targeting_eventSwitchTarget_Parms, SwitchDirectionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchDirectionTag_MetaData), NewProp_SwitchDirectionTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget_Statics::NewProp_SwitchDirectionTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroGameplayAbility_Targeting, nullptr, "SwitchTarget", nullptr, nullptr, Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget_Statics::HeroGameplayAbility_Targeting_eventSwitchTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget_Statics::HeroGameplayAbility_Targeting_eventSwitchTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroGameplayAbility_Targeting::execSwitchTarget)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SwitchDirectionTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchTarget(Z_Param_Out_SwitchDirectionTag);
	P_NATIVE_END;
}
// End Class UHeroGameplayAbility_Targeting Function SwitchTarget

// Begin Class UHeroGameplayAbility_Targeting
void UHeroGameplayAbility_Targeting::StaticRegisterNativesUHeroGameplayAbility_Targeting()
{
	UClass* Class = UHeroGameplayAbility_Targeting::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTargetingTick", &UHeroGameplayAbility_Targeting::execOnTargetingTick },
		{ "SwitchTarget", &UHeroGameplayAbility_Targeting::execSwitchTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroGameplayAbility_Targeting);
UClass* Z_Construct_UClass_UHeroGameplayAbility_Targeting_NoRegister()
{
	return UHeroGameplayAbility_Targeting::StaticClass();
}
struct Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceBoxSize_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugShape_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableActorsToLock_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTaget_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingWidgetClass_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingRotationInterpSpeed_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingCameraOffset_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingWidgetSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedWalkSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingWalkSpeed_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingMappingContext_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceBoxSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceChannel;
	static void NewProp_bShowDebugShape_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugShape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableActorsToLock_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableActorsToLock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTaget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetingWidgetClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetingRotationInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetingCameraOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingWidgetSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetingWalkSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroGameplayAbility_Targeting_OnTargetingTick, "OnTargetingTick" }, // 4120569357
		{ &Z_Construct_UFunction_UHeroGameplayAbility_Targeting_SwitchTarget, "SwitchTarget" }, // 2817947974
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroGameplayAbility_Targeting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_Targeting, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TraceBoxSize = { "TraceBoxSize", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_Targeting, TraceBoxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceBoxSize_MetaData), NewProp_TraceBoxSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TraceChannel_Inner = { "TraceChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_Targeting, TraceChannel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 1798967895
void Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_bShowDebugShape_SetBit(void* Obj)
{
	((UHeroGameplayAbility_Targeting*)Obj)->bShowDebugShape = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_bShowDebugShape = { "bShowDebugShape", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroGameplayAbility_Targeting), &Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_bShowDebugShape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugShape_MetaData), NewProp_bShowDebugShape_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_AvailableActorsToLock_Inner = { "AvailableActorsToLock", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_AvailableActorsToLock = { "AvailableActorsToLock", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_Targeting, AvailableActorsToLock), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableActorsToLock_MetaData), NewProp_AvailableActorsToLock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_CurrentTaget = { "CurrentTaget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_Targeting, CurrentTaget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTaget_MetaData), NewProp_CurrentTaget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingWidgetClass = { "TargetingWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_Targeting, TargetingWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingWidgetClass_MetaData), NewProp_TargetingWidgetClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingRotationInterpSpeed = { "TargetingRotationInterpSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_Targeting, TargetingRotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingRotationInterpSpeed_MetaData), NewProp_TargetingRotationInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingCameraOffset = { "TargetingCameraOffset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_Targeting, TargetingCameraOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingCameraOffset_MetaData), NewProp_TargetingCameraOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingWidget = { "TargetingWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_Targeting, TargetingWidget), Z_Construct_UClass_UWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingWidget_MetaData), NewProp_TargetingWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingWidgetSize = { "TargetingWidgetSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_Targeting, TargetingWidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingWidgetSize_MetaData), NewProp_TargetingWidgetSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_CachedWalkSpeed = { "CachedWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_Targeting, CachedWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedWalkSpeed_MetaData), NewProp_CachedWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingWalkSpeed = { "TargetingWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_Targeting, TargetingWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingWalkSpeed_MetaData), NewProp_TargetingWalkSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingMappingContext = { "TargetingMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility_Targeting, TargetingMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingMappingContext_MetaData), NewProp_TargetingMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TraceBoxSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TraceChannel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_bShowDebugShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_AvailableActorsToLock_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_AvailableActorsToLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_CurrentTaget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingRotationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingCameraOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingWidgetSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_CachedWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::NewProp_TargetingMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::ClassParams = {
	&UHeroGameplayAbility_Targeting::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroGameplayAbility_Targeting()
{
	if (!Z_Registration_Info_UClass_UHeroGameplayAbility_Targeting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroGameplayAbility_Targeting.OuterSingleton, Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroGameplayAbility_Targeting.OuterSingleton;
}
template<> PROJECTA_API UClass* StaticClass<UHeroGameplayAbility_Targeting>()
{
	return UHeroGameplayAbility_Targeting::StaticClass();
}
UHeroGameplayAbility_Targeting::UHeroGameplayAbility_Targeting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroGameplayAbility_Targeting);
UHeroGameplayAbility_Targeting::~UHeroGameplayAbility_Targeting() {}
// End Class UHeroGameplayAbility_Targeting

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_HeroGameplayAbility_Targeting_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroGameplayAbility_Targeting, UHeroGameplayAbility_Targeting::StaticClass, TEXT("UHeroGameplayAbility_Targeting"), &Z_Registration_Info_UClass_UHeroGameplayAbility_Targeting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroGameplayAbility_Targeting), 4097488255U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_HeroGameplayAbility_Targeting_h_1085204404(TEXT("/Script/ProjectA"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_HeroGameplayAbility_Targeting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_HeroGameplayAbility_Targeting_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
