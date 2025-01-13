// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimInstances/HeroLinkedAnimLayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHeroAnimInstance;
#ifdef PROJECTA_HeroLinkedAnimLayer_generated_h
#error "HeroLinkedAnimLayer.generated.h already included, missing '#pragma once' in HeroLinkedAnimLayer.h"
#endif
#define PROJECTA_HeroLinkedAnimLayer_generated_h

#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AnimInstances_HeroLinkedAnimLayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHeroAnimInstance);


#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AnimInstances_HeroLinkedAnimLayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroLinkedAnimLayer(); \
	friend struct Z_Construct_UClass_UHeroLinkedAnimLayer_Statics; \
public: \
	DECLARE_CLASS(UHeroLinkedAnimLayer, UBaseAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectA"), NO_API) \
	DECLARE_SERIALIZER(UHeroLinkedAnimLayer)


#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AnimInstances_HeroLinkedAnimLayer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroLinkedAnimLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHeroLinkedAnimLayer(UHeroLinkedAnimLayer&&); \
	UHeroLinkedAnimLayer(const UHeroLinkedAnimLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroLinkedAnimLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroLinkedAnimLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroLinkedAnimLayer) \
	NO_API virtual ~UHeroLinkedAnimLayer();


#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AnimInstances_HeroLinkedAnimLayer_h_13_PROLOG
#define FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AnimInstances_HeroLinkedAnimLayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AnimInstances_HeroLinkedAnimLayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AnimInstances_HeroLinkedAnimLayer_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AnimInstances_HeroLinkedAnimLayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTA_API UClass* StaticClass<class UHeroLinkedAnimLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_AnimInstances_HeroLinkedAnimLayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
