// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectA/Public/AbilitySystem/BaseAbilitySystemComponent.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "ProjectA/Public/BaseType/BaseStructType.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTA_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent();
PROJECTA_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister();
PROJECTA_API UScriptStruct* Z_Construct_UScriptStruct_FHeroAbilitySet();
UPackage* Z_Construct_UPackage__Script_ProjectA();
// End Cross Module References

// Begin Class UBaseAbilitySystemComponent Function GrantHeroWeaponAbilities
struct Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics
{
	struct BaseAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms
	{
		TArray<FHeroAbilitySet> WeaponAbilities;
		int32 Level;
		TArray<FGameplayAbilitySpecHandle> OutGrantedAbilitySpecHandles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Level", "1" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAbilities_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponAbilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGrantedAbilitySpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutGrantedAbilitySpecHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_WeaponAbilities_Inner = { "WeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 4023013549
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_WeaponAbilities = { "WeaponAbilities", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms, WeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAbilities_MetaData), NewProp_WeaponAbilities_MetaData) }; // 4023013549
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles = { "OutGrantedAbilitySpecHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms, OutGrantedAbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_WeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_WeaponAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::NewProp_OutGrantedAbilitySpecHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAbilitySystemComponent, nullptr, "GrantHeroWeaponAbilities", nullptr, nullptr, Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::BaseAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::BaseAbilitySystemComponent_eventGrantHeroWeaponAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAbilitySystemComponent::execGrantHeroWeaponAbilities)
{
	P_GET_TARRAY_REF(FHeroAbilitySet,Z_Param_Out_WeaponAbilities);
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_OutGrantedAbilitySpecHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantHeroWeaponAbilities(Z_Param_Out_WeaponAbilities,Z_Param_Level,Z_Param_Out_OutGrantedAbilitySpecHandles);
	P_NATIVE_END;
}
// End Class UBaseAbilitySystemComponent Function GrantHeroWeaponAbilities

// Begin Class UBaseAbilitySystemComponent Function RemoveGrantedHeroWeaponAbilities
struct Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics
{
	struct BaseAbilitySystemComponent_eventRemoveGrantedHeroWeaponAbilities_Parms
	{
		TArray<FGameplayAbilitySpecHandle> SpecHandlesToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecHandlesToRemove_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecHandlesToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::NewProp_SpecHandlesToRemove_Inner = { "SpecHandlesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::NewProp_SpecHandlesToRemove = { "SpecHandlesToRemove", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAbilitySystemComponent_eventRemoveGrantedHeroWeaponAbilities_Parms, SpecHandlesToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::NewProp_SpecHandlesToRemove_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::NewProp_SpecHandlesToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAbilitySystemComponent, nullptr, "RemoveGrantedHeroWeaponAbilities", nullptr, nullptr, Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::BaseAbilitySystemComponent_eventRemoveGrantedHeroWeaponAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::BaseAbilitySystemComponent_eventRemoveGrantedHeroWeaponAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAbilitySystemComponent::execRemoveGrantedHeroWeaponAbilities)
{
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_SpecHandlesToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGrantedHeroWeaponAbilities(Z_Param_Out_SpecHandlesToRemove);
	P_NATIVE_END;
}
// End Class UBaseAbilitySystemComponent Function RemoveGrantedHeroWeaponAbilities

// Begin Class UBaseAbilitySystemComponent Function TryActivateAbilityByTag
struct Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics
{
	struct BaseAbilitySystemComponent_eventTryActivateAbilityByTag_Parms
	{
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAbilitySystemComponent_eventTryActivateAbilityByTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseAbilitySystemComponent_eventTryActivateAbilityByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseAbilitySystemComponent_eventTryActivateAbilityByTag_Parms), &Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseAbilitySystemComponent, nullptr, "TryActivateAbilityByTag", nullptr, nullptr, Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::BaseAbilitySystemComponent_eventTryActivateAbilityByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::BaseAbilitySystemComponent_eventTryActivateAbilityByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseAbilitySystemComponent::execTryActivateAbilityByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryActivateAbilityByTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UBaseAbilitySystemComponent Function TryActivateAbilityByTag

// Begin Class UBaseAbilitySystemComponent
void UBaseAbilitySystemComponent::StaticRegisterNativesUBaseAbilitySystemComponent()
{
	UClass* Class = UBaseAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GrantHeroWeaponAbilities", &UBaseAbilitySystemComponent::execGrantHeroWeaponAbilities },
		{ "RemoveGrantedHeroWeaponAbilities", &UBaseAbilitySystemComponent::execRemoveGrantedHeroWeaponAbilities },
		{ "TryActivateAbilityByTag", &UBaseAbilitySystemComponent::execTryActivateAbilityByTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAbilitySystemComponent);
UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister()
{
	return UBaseAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UBaseAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/BaseAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseAbilitySystemComponent_GrantHeroWeaponAbilities, "GrantHeroWeaponAbilities" }, // 3664668554
		{ &Z_Construct_UFunction_UBaseAbilitySystemComponent_RemoveGrantedHeroWeaponAbilities, "RemoveGrantedHeroWeaponAbilities" }, // 3240770055
		{ &Z_Construct_UFunction_UBaseAbilitySystemComponent_TryActivateAbilityByTag, "TryActivateAbilityByTag" }, // 2123515611
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::ClassParams = {
	&UBaseAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton;
}
template<> PROJECTA_API UClass* StaticClass<UBaseAbilitySystemComponent>()
{
	return UBaseAbilitySystemComponent::StaticClass();
}
UBaseAbilitySystemComponent::UBaseAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAbilitySystemComponent);
UBaseAbilitySystemComponent::~UBaseAbilitySystemComponent() {}
// End Class UBaseAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_BaseAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAbilitySystemComponent, UBaseAbilitySystemComponent::StaticClass, TEXT("UBaseAbilitySystemComponent"), &Z_Registration_Info_UClass_UBaseAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAbilitySystemComponent), 588906995U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_BaseAbilitySystemComponent_h_1404639517(TEXT("/Script/ProjectA"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_BaseAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_BaseAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
