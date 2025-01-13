// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectA/Public/DataAssets/StartupData/DataAsset_StartupHero.h"
#include "ProjectA/Public/BaseType/BaseStructType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_StartupHero() {}

// Begin Cross Module References
PROJECTA_API UClass* Z_Construct_UClass_UDataAsset_StartupBase();
PROJECTA_API UClass* Z_Construct_UClass_UDataAsset_StartupHero();
PROJECTA_API UClass* Z_Construct_UClass_UDataAsset_StartupHero_NoRegister();
PROJECTA_API UScriptStruct* Z_Construct_UScriptStruct_FHeroAbilitySet();
UPackage* Z_Construct_UPackage__Script_ProjectA();
// End Cross Module References

// Begin Class UDataAsset_StartupHero
void UDataAsset_StartupHero::StaticRegisterNativesUDataAsset_StartupHero()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_StartupHero);
UClass* Z_Construct_UClass_UDataAsset_StartupHero_NoRegister()
{
	return UDataAsset_StartupHero::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_StartupHero_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/StartupData/DataAsset_StartupHero.h" },
		{ "ModuleRelativePath", "Public/DataAssets/StartupData/DataAsset_StartupHero.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroStartupAbilitySets_MetaData[] = {
		{ "Category", "StartupData" },
		{ "ModuleRelativePath", "Public/DataAssets/StartupData/DataAsset_StartupHero.h" },
		{ "TitleProPerty", "InputTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeroStartupAbilitySets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeroStartupAbilitySets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_StartupHero>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_StartupHero_Statics::NewProp_HeroStartupAbilitySets_Inner = { "HeroStartupAbilitySets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 4023013549
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_StartupHero_Statics::NewProp_HeroStartupAbilitySets = { "HeroStartupAbilitySets", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_StartupHero, HeroStartupAbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroStartupAbilitySets_MetaData), NewProp_HeroStartupAbilitySets_MetaData) }; // 4023013549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_StartupHero_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartupHero_Statics::NewProp_HeroStartupAbilitySets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartupHero_Statics::NewProp_HeroStartupAbilitySets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupHero_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_StartupHero_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset_StartupBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupHero_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_StartupHero_Statics::ClassParams = {
	&UDataAsset_StartupHero::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_StartupHero_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupHero_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupHero_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_StartupHero_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_StartupHero()
{
	if (!Z_Registration_Info_UClass_UDataAsset_StartupHero.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_StartupHero.OuterSingleton, Z_Construct_UClass_UDataAsset_StartupHero_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_StartupHero.OuterSingleton;
}
template<> PROJECTA_API UClass* StaticClass<UDataAsset_StartupHero>()
{
	return UDataAsset_StartupHero::StaticClass();
}
UDataAsset_StartupHero::UDataAsset_StartupHero(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_StartupHero);
UDataAsset_StartupHero::~UDataAsset_StartupHero() {}
// End Class UDataAsset_StartupHero

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_DataAssets_StartupData_DataAsset_StartupHero_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_StartupHero, UDataAsset_StartupHero::StaticClass, TEXT("UDataAsset_StartupHero"), &Z_Registration_Info_UClass_UDataAsset_StartupHero, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_StartupHero), 3904435337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_DataAssets_StartupData_DataAsset_StartupHero_h_2497714890(TEXT("/Script/ProjectA"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_DataAssets_StartupData_DataAsset_StartupHero_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_DataAssets_StartupData_DataAsset_StartupHero_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
