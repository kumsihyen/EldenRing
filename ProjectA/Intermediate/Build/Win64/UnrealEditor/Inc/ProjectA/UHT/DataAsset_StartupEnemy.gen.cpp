// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectA/Public/DataAssets/StartupData/DataAsset_StartupEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_StartupEnemy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PROJECTA_API UClass* Z_Construct_UClass_UDataAsset_StartupBase();
PROJECTA_API UClass* Z_Construct_UClass_UDataAsset_StartupEnemy();
PROJECTA_API UClass* Z_Construct_UClass_UDataAsset_StartupEnemy_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_UEnemyGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectA();
// End Cross Module References

// Begin Class UDataAsset_StartupEnemy
void UDataAsset_StartupEnemy::StaticRegisterNativesUDataAsset_StartupEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_StartupEnemy);
UClass* Z_Construct_UClass_UDataAsset_StartupEnemy_NoRegister()
{
	return UDataAsset_StartupEnemy::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_StartupEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "DataAssets/StartupData/DataAsset_StartupEnemy.h" },
		{ "ModuleRelativePath", "Public/DataAssets/StartupData/DataAsset_StartupEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCombatAbilities_MetaData[] = {
		{ "Category", "StartUpData" },
		{ "ModuleRelativePath", "Public/DataAssets/StartupData/DataAsset_StartupEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyCombatAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemyCombatAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_StartupEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::NewProp_EnemyCombatAbilities_Inner = { "EnemyCombatAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEnemyGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::NewProp_EnemyCombatAbilities = { "EnemyCombatAbilities", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_StartupEnemy, EnemyCombatAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCombatAbilities_MetaData), NewProp_EnemyCombatAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::NewProp_EnemyCombatAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::NewProp_EnemyCombatAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset_StartupBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::ClassParams = {
	&UDataAsset_StartupEnemy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_StartupEnemy()
{
	if (!Z_Registration_Info_UClass_UDataAsset_StartupEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_StartupEnemy.OuterSingleton, Z_Construct_UClass_UDataAsset_StartupEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_StartupEnemy.OuterSingleton;
}
template<> PROJECTA_API UClass* StaticClass<UDataAsset_StartupEnemy>()
{
	return UDataAsset_StartupEnemy::StaticClass();
}
UDataAsset_StartupEnemy::UDataAsset_StartupEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_StartupEnemy);
UDataAsset_StartupEnemy::~UDataAsset_StartupEnemy() {}
// End Class UDataAsset_StartupEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_DataAssets_StartupData_DataAsset_StartupEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_StartupEnemy, UDataAsset_StartupEnemy::StaticClass, TEXT("UDataAsset_StartupEnemy"), &Z_Registration_Info_UClass_UDataAsset_StartupEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_StartupEnemy), 1208772751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_DataAssets_StartupData_DataAsset_StartupEnemy_h_2443633903(TEXT("/Script/ProjectA"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_DataAssets_StartupData_DataAsset_StartupEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_DataAssets_StartupData_DataAsset_StartupEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
