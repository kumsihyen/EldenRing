// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectA/Public/Characters/HeroCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_ABaseCharacter();
PROJECTA_API UClass* Z_Construct_UClass_AHeroCharacter();
PROJECTA_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_UDataAsset_InputConfig_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectA();
// End Cross Module References

// Begin Class AHeroCharacter
void AHeroCharacter::StaticRegisterNativesAHeroCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeroCharacter);
UClass* Z_Construct_UClass_AHeroCharacter_NoRegister()
{
	return AHeroCharacter::StaticClass();
}
struct Z_Construct_UClass_AHeroCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/HeroCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroCombatComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroUIComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/HeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfigDataAsset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterData" },
		{ "ModuleRelativePath", "Public/Characters/HeroCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroCombatComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroUIComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfigDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_HeroCombatComponent = { "HeroCombatComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, HeroCombatComponent), Z_Construct_UClass_UHeroCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroCombatComponent_MetaData), NewProp_HeroCombatComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_HeroUIComponent = { "HeroUIComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, HeroUIComponent), Z_Construct_UClass_UHeroUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroUIComponent_MetaData), NewProp_HeroUIComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroCharacter_Statics::NewProp_InputConfigDataAsset = { "InputConfigDataAsset", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeroCharacter, InputConfigDataAsset), Z_Construct_UClass_UDataAsset_InputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfigDataAsset_MetaData), NewProp_InputConfigDataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeroCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_HeroCombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_HeroUIComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroCharacter_Statics::NewProp_InputConfigDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHeroCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeroCharacter_Statics::ClassParams = {
	&AHeroCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHeroCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeroCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeroCharacter()
{
	if (!Z_Registration_Info_UClass_AHeroCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeroCharacter.OuterSingleton, Z_Construct_UClass_AHeroCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeroCharacter.OuterSingleton;
}
template<> PROJECTA_API UClass* StaticClass<AHeroCharacter>()
{
	return AHeroCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroCharacter);
AHeroCharacter::~AHeroCharacter() {}
// End Class AHeroCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Characters_HeroCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeroCharacter, AHeroCharacter::StaticClass, TEXT("AHeroCharacter"), &Z_Registration_Info_UClass_AHeroCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroCharacter), 3122344326U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Characters_HeroCharacter_h_1824087158(TEXT("/Script/ProjectA"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Characters_HeroCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Characters_HeroCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS