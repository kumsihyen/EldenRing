// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/HeroGameplayAbility_Targeting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef PROJECTA_HeroGameplayAbility_Targeting_generated_h
#error "HeroGameplayAbility_Targeting.generated.h already included, missing '#pragma once' in HeroGameplayAbility_Targeting.h"
#endif
#define PROJECTA_HeroGameplayAbility_Targeting_generated_h

#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_HeroGameplayAbility_Targeting_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchTarget); \
	DECLARE_FUNCTION(execOnTargetingTick);


#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_HeroGameplayAbility_Targeting_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroGameplayAbility_Targeting(); \
	friend struct Z_Construct_UClass_UHeroGameplayAbility_Targeting_Statics; \
public: \
	DECLARE_CLASS(UHeroGameplayAbility_Targeting, UHeroGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectA"), NO_API) \
	DECLARE_SERIALIZER(UHeroGameplayAbility_Targeting)


#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_HeroGameplayAbility_Targeting_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroGameplayAbility_Targeting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHeroGameplayAbility_Targeting(UHeroGameplayAbility_Targeting&&); \
	UHeroGameplayAbility_Targeting(const UHeroGameplayAbility_Targeting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroGameplayAbility_Targeting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroGameplayAbility_Targeting); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroGameplayAbility_Targeting) \
	NO_API virtual ~UHeroGameplayAbility_Targeting();


#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_HeroGameplayAbility_Targeting_h_14_PROLOG
#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_HeroGameplayAbility_Targeting_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_HeroGameplayAbility_Targeting_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_HeroGameplayAbility_Targeting_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_HeroGameplayAbility_Targeting_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTA_API UClass* StaticClass<class UHeroGameplayAbility_Targeting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AbilitySystem_Abilities_HeroGameplayAbility_Targeting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
