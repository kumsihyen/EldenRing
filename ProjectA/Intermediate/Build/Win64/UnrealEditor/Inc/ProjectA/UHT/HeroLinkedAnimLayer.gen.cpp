// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectA/Public/AnimInstances/HeroLinkedAnimLayer.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroLinkedAnimLayer() {}

// Begin Cross Module References
PROJECTA_API UClass* Z_Construct_UClass_UBaseAnimInstance();
PROJECTA_API UClass* Z_Construct_UClass_UHeroAnimInstance_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_UHeroLinkedAnimLayer();
PROJECTA_API UClass* Z_Construct_UClass_UHeroLinkedAnimLayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectA();
// End Cross Module References

// Begin Class UHeroLinkedAnimLayer Function GetHeroAnimInstance
struct Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance_Statics
{
	struct HeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms
	{
		UHeroAnimInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Public/AnimInstances/HeroLinkedAnimLayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UHeroAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroLinkedAnimLayer, nullptr, "GetHeroAnimInstance", nullptr, nullptr, Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::HeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::HeroLinkedAnimLayer_eventGetHeroAnimInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroLinkedAnimLayer::execGetHeroAnimInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHeroAnimInstance**)Z_Param__Result=P_THIS->GetHeroAnimInstance();
	P_NATIVE_END;
}
// End Class UHeroLinkedAnimLayer Function GetHeroAnimInstance

// Begin Class UHeroLinkedAnimLayer
void UHeroLinkedAnimLayer::StaticRegisterNativesUHeroLinkedAnimLayer()
{
	UClass* Class = UHeroLinkedAnimLayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeroAnimInstance", &UHeroLinkedAnimLayer::execGetHeroAnimInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroLinkedAnimLayer);
UClass* Z_Construct_UClass_UHeroLinkedAnimLayer_NoRegister()
{
	return UHeroLinkedAnimLayer::StaticClass();
}
struct Z_Construct_UClass_UHeroLinkedAnimLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/HeroLinkedAnimLayer.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/HeroLinkedAnimLayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroLinkedAnimLayer_GetHeroAnimInstance, "GetHeroAnimInstance" }, // 2421164111
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroLinkedAnimLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHeroLinkedAnimLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroLinkedAnimLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroLinkedAnimLayer_Statics::ClassParams = {
	&UHeroLinkedAnimLayer::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroLinkedAnimLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroLinkedAnimLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroLinkedAnimLayer()
{
	if (!Z_Registration_Info_UClass_UHeroLinkedAnimLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroLinkedAnimLayer.OuterSingleton, Z_Construct_UClass_UHeroLinkedAnimLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroLinkedAnimLayer.OuterSingleton;
}
template<> PROJECTA_API UClass* StaticClass<UHeroLinkedAnimLayer>()
{
	return UHeroLinkedAnimLayer::StaticClass();
}
UHeroLinkedAnimLayer::UHeroLinkedAnimLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroLinkedAnimLayer);
UHeroLinkedAnimLayer::~UHeroLinkedAnimLayer() {}
// End Class UHeroLinkedAnimLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AnimInstances_HeroLinkedAnimLayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroLinkedAnimLayer, UHeroLinkedAnimLayer::StaticClass, TEXT("UHeroLinkedAnimLayer"), &Z_Registration_Info_UClass_UHeroLinkedAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroLinkedAnimLayer), 2656484495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AnimInstances_HeroLinkedAnimLayer_h_2251154715(TEXT("/Script/ProjectA"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AnimInstances_HeroLinkedAnimLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AnimInstances_HeroLinkedAnimLayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
