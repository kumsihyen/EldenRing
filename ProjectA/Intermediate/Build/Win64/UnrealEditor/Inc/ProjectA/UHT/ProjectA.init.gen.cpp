// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectA_init() {}
	PROJECTA_API UFunction* Z_Construct_UDelegateFunction_ProjectA_OnAbilityTaskTickDelegate__DelegateSignature();
	PROJECTA_API UFunction* Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature();
	PROJECTA_API UFunction* Z_Construct_UDelegateFunction_ProjectA_WaitSpawnEnemiesDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectA;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectA()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectA.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectA_OnAbilityTaskTickDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectA_WaitSpawnEnemiesDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectA",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4CC5BC94,
				0x192481B5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectA.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectA.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectA(Z_Construct_UPackage__Script_ProjectA, TEXT("/Script/ProjectA"), Z_Registration_Info_UPackage__Script_ProjectA, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4CC5BC94, 0x192481B5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
