// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Combat/HeroCombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHeroWeapon;
struct FGameplayTag;
#ifdef PROJECTA_HeroCombatComponent_generated_h
#error "HeroCombatComponent.generated.h already included, missing '#pragma once' in HeroCombatComponent.h"
#endif
#define PROJECTA_HeroCombatComponent_generated_h

#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Combat_HeroCombatComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeroCurrentEquippedWeaponDamageAtLevel); \
	DECLARE_FUNCTION(execGetHeroCurrentEquippedWeapon); \
	DECLARE_FUNCTION(execGetHeroCarriedWeaponByTag);


#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Combat_HeroCombatComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroCombatComponent(); \
	friend struct Z_Construct_UClass_UHeroCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UHeroCombatComponent, UPawnCombatComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectA"), NO_API) \
	DECLARE_SERIALIZER(UHeroCombatComponent)


#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Combat_HeroCombatComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroCombatComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHeroCombatComponent(UHeroCombatComponent&&); \
	UHeroCombatComponent(const UHeroCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroCombatComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroCombatComponent) \
	NO_API virtual ~UHeroCombatComponent();


#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Combat_HeroCombatComponent_h_13_PROLOG
#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Combat_HeroCombatComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Combat_HeroCombatComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Combat_HeroCombatComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Combat_HeroCombatComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTA_API UClass* StaticClass<class UHeroCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Combat_HeroCombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
