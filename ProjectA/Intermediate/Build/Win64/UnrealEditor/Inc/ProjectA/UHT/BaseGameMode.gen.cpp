// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectA/Public/GameModes/BaseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECTA_API UClass* Z_Construct_UClass_ABaseGameMode();
PROJECTA_API UClass* Z_Construct_UClass_ABaseGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectA();
// End Cross Module References

// Begin Class ABaseGameMode
void ABaseGameMode::StaticRegisterNativesABaseGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseGameMode);
UClass* Z_Construct_UClass_ABaseGameMode_NoRegister()
{
	return ABaseGameMode::StaticClass();
}
struct Z_Construct_UClass_ABaseGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/BaseGameMode.h" },
		{ "ModuleRelativePath", "Public/GameModes/BaseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseGameMode_Statics::ClassParams = {
	&ABaseGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseGameMode()
{
	if (!Z_Registration_Info_UClass_ABaseGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseGameMode.OuterSingleton, Z_Construct_UClass_ABaseGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseGameMode.OuterSingleton;
}
template<> PROJECTA_API UClass* StaticClass<ABaseGameMode>()
{
	return ABaseGameMode::StaticClass();
}
ABaseGameMode::ABaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGameMode);
ABaseGameMode::~ABaseGameMode() {}
// End Class ABaseGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_GameModes_BaseGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseGameMode, ABaseGameMode::StaticClass, TEXT("ABaseGameMode"), &Z_Registration_Info_UClass_ABaseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseGameMode), 1465172735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_GameModes_BaseGameMode_h_3824408115(TEXT("/Script/ProjectA"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_GameModes_BaseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_GameModes_BaseGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS