// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectA/Public/Controllers/BaseAIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_ABaseAIController();
PROJECTA_API UClass* Z_Construct_UClass_ABaseAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectA();
// End Cross Module References

// Begin Class ABaseAIController Function OnEnemyPeceptionUpdated
struct Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics
{
	struct BaseAIController_eventOnEnemyPeceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controllers/BaseAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAIController_eventOnEnemyPeceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAIController_eventOnEnemyPeceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseAIController, nullptr, "OnEnemyPeceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::BaseAIController_eventOnEnemyPeceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::BaseAIController_eventOnEnemyPeceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseAIController::execOnEnemyPeceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyPeceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class ABaseAIController Function OnEnemyPeceptionUpdated

// Begin Class ABaseAIController
void ABaseAIController::StaticRegisterNativesABaseAIController()
{
	UClass* Class = ABaseAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEnemyPeceptionUpdated", &ABaseAIController::execOnEnemyPeceptionUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseAIController);
UClass* Z_Construct_UClass_ABaseAIController_NoRegister()
{
	return ABaseAIController::StaticClass();
}
struct Z_Construct_UClass_ABaseAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/BaseAIController.h" },
		{ "ModuleRelativePath", "Public/Controllers/BaseAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "Category", "BaseAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controllers/BaseAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISenseConfig_Sight_MetaData[] = {
		{ "Category", "BaseAIController" },
		{ "ModuleRelativePath", "Public/Controllers/BaseAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetourCrowdAvoidence_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Controllers/BaseAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetourCrowdAvoidenceQuality_MetaData[] = {
		{ "Category", "AI" },
		{ "EditCondition", "bDetourCrowdAvoidence" },
		{ "ModuleRelativePath", "Public/Controllers/BaseAIController.h" },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollsionQueryRange_MetaData[] = {
		{ "Category", "AI" },
		{ "EditCondition", "bDetourCrowdAvoidence" },
		{ "ModuleRelativePath", "Public/Controllers/BaseAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AISenseConfig_Sight;
	static void NewProp_bDetourCrowdAvoidence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetourCrowdAvoidence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DetourCrowdAvoidenceQuality;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollsionQueryRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseAIController_OnEnemyPeceptionUpdated, "OnEnemyPeceptionUpdated" }, // 1260352131
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseAIController_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIController, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseAIController_Statics::NewProp_AISenseConfig_Sight = { "AISenseConfig_Sight", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIController, AISenseConfig_Sight), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISenseConfig_Sight_MetaData), NewProp_AISenseConfig_Sight_MetaData) };
void Z_Construct_UClass_ABaseAIController_Statics::NewProp_bDetourCrowdAvoidence_SetBit(void* Obj)
{
	((ABaseAIController*)Obj)->bDetourCrowdAvoidence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseAIController_Statics::NewProp_bDetourCrowdAvoidence = { "bDetourCrowdAvoidence", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseAIController), &Z_Construct_UClass_ABaseAIController_Statics::NewProp_bDetourCrowdAvoidence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetourCrowdAvoidence_MetaData), NewProp_bDetourCrowdAvoidence_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseAIController_Statics::NewProp_DetourCrowdAvoidenceQuality = { "DetourCrowdAvoidenceQuality", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIController, DetourCrowdAvoidenceQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetourCrowdAvoidenceQuality_MetaData), NewProp_DetourCrowdAvoidenceQuality_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAIController_Statics::NewProp_CollsionQueryRange = { "CollsionQueryRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIController, CollsionQueryRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollsionQueryRange_MetaData), NewProp_CollsionQueryRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIController_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIController_Statics::NewProp_AISenseConfig_Sight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIController_Statics::NewProp_bDetourCrowdAvoidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIController_Statics::NewProp_DetourCrowdAvoidenceQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIController_Statics::NewProp_CollsionQueryRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseAIController_Statics::ClassParams = {
	&ABaseAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseAIController()
{
	if (!Z_Registration_Info_UClass_ABaseAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseAIController.OuterSingleton, Z_Construct_UClass_ABaseAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseAIController.OuterSingleton;
}
template<> PROJECTA_API UClass* StaticClass<ABaseAIController>()
{
	return ABaseAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseAIController);
ABaseAIController::~ABaseAIController() {}
// End Class ABaseAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Controllers_BaseAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseAIController, ABaseAIController::StaticClass, TEXT("ABaseAIController"), &Z_Registration_Info_UClass_ABaseAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseAIController), 182967765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Controllers_BaseAIController_h_1417479497(TEXT("/Script/ProjectA"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Controllers_BaseAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Controllers_BaseAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
