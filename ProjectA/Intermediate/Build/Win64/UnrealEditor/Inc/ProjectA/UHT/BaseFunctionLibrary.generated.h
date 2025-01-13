// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UPawnCombatComponent;
enum class EBaseConfirmType : uint8;
enum class EBaseValidType : uint8;
struct FGameplayEffectSpecHandle;
struct FGameplayTag;
struct FScalableFloat;
#ifdef PROJECTA_BaseFunctionLibrary_generated_h
#error "BaseFunctionLibrary.generated.h already included, missing '#pragma once' in BaseFunctionLibrary.h"
#endif
#define PROJECTA_BaseFunctionLibrary_generated_h

#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyGameplayEffectSpecHandleToTargetActor); \
	DECLARE_FUNCTION(execIsValidBlock); \
	DECLARE_FUNCTION(execComputeHitReactDirectionTag); \
	DECLARE_FUNCTION(execGetScalableFloatValueAtLevel); \
	DECLARE_FUNCTION(execIsTargetPawnHostile); \
	DECLARE_FUNCTION(execBP_GetPawnCombatComponentFromActor); \
	DECLARE_FUNCTION(execBP_HasTag); \
	DECLARE_FUNCTION(execRemovePlaygameTagFromActor); \
	DECLARE_FUNCTION(execAddPlaygameTagToActor);


#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBaseFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBaseFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectA"), NO_API) \
	DECLARE_SERIALIZER(UBaseFunctionLibrary)


#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseFunctionLibrary(UBaseFunctionLibrary&&); \
	UBaseFunctionLibrary(const UBaseFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseFunctionLibrary) \
	NO_API virtual ~UBaseFunctionLibrary();


#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseFunctionLibrary_h_18_PROLOG
#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTA_API UClass* StaticClass<class UBaseFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
