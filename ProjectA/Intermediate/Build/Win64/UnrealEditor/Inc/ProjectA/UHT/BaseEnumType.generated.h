// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseType/BaseEnumType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTA_BaseEnumType_generated_h
#error "BaseEnumType.generated.h already included, missing '#pragma once' in BaseEnumType.h"
#endif
#define PROJECTA_BaseEnumType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_BaseType_BaseEnumType_h


#define FOREACH_ENUM_EBASECONFIRMTYPE(op) \
	op(EBaseConfirmType::Yes) \
	op(EBaseConfirmType::No) 

enum class EBaseConfirmType : uint8;
template<> struct TIsUEnumClass<EBaseConfirmType> { enum { Value = true }; };
template<> PROJECTA_API UEnum* StaticEnum<EBaseConfirmType>();

#define FOREACH_ENUM_EBASEVALIDTYPE(op) \
	op(EBaseValidType::Valid) \
	op(EBaseValidType::Invalid) 

enum class EBaseValidType : uint8;
template<> struct TIsUEnumClass<EBaseValidType> { enum { Value = true }; };
template<> PROJECTA_API UEnum* StaticEnum<EBaseValidType>();

#define FOREACH_ENUM_EBASESUCCESSTYPE(op) \
	op(EBaseSuccessType::Success) \
	op(EBaseSuccessType::Failed) 

enum class EBaseSuccessType : uint8;
template<> struct TIsUEnumClass<EBaseSuccessType> { enum { Value = true }; };
template<> PROJECTA_API UEnum* StaticEnum<EBaseSuccessType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
