// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectA/Public/Widget/WidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_UHeroUIComponent_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_UWidgetBase();
PROJECTA_API UClass* Z_Construct_UClass_UWidgetBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjectA();
// End Cross Module References

// Begin Class UWidgetBase Function BP_OnOwingEnemyUIComponentInitialized
struct WidgetBase_eventBP_OnOwingEnemyUIComponentInitialized_Parms
{
	UEnemyUIComponent* EnemyUIComponent;
};
static FName NAME_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized = FName(TEXT("BP_OnOwingEnemyUIComponentInitialized"));
void UWidgetBase::BP_OnOwingEnemyUIComponentInitialized(UEnemyUIComponent* EnemyUIComponent)
{
	WidgetBase_eventBP_OnOwingEnemyUIComponentInitialized_Parms Parms;
	Parms.EnemyUIComponent=EnemyUIComponent;
	ProcessEvent(FindFunctionChecked(NAME_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized),&Parms);
}
struct Z_Construct_UFunction_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/WidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyUIComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyUIComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized_Statics::NewProp_EnemyUIComponent = { "EnemyUIComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBase_eventBP_OnOwingEnemyUIComponentInitialized_Parms, EnemyUIComponent), Z_Construct_UClass_UEnemyUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyUIComponent_MetaData), NewProp_EnemyUIComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized_Statics::NewProp_EnemyUIComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBase, nullptr, "BP_OnOwingEnemyUIComponentInitialized", nullptr, nullptr, Z_Construct_UFunction_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized_Statics::PropPointers), sizeof(WidgetBase_eventBP_OnOwingEnemyUIComponentInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(WidgetBase_eventBP_OnOwingEnemyUIComponentInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UWidgetBase Function BP_OnOwingEnemyUIComponentInitialized

// Begin Class UWidgetBase Function BP_OnOwningHeroUIComponentInitialized
struct WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms
{
	UHeroUIComponent* HeroUIComponent;
};
static FName NAME_UWidgetBase_BP_OnOwningHeroUIComponentInitialized = FName(TEXT("BP_OnOwningHeroUIComponentInitialized"));
void UWidgetBase::BP_OnOwningHeroUIComponentInitialized(UHeroUIComponent* HeroUIComponent)
{
	WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms Parms;
	Parms.HeroUIComponent=HeroUIComponent;
	ProcessEvent(FindFunctionChecked(NAME_UWidgetBase_BP_OnOwningHeroUIComponentInitialized),&Parms);
}
struct Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/WidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroUIComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroUIComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::NewProp_HeroUIComponent = { "HeroUIComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms, HeroUIComponent), Z_Construct_UClass_UHeroUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroUIComponent_MetaData), NewProp_HeroUIComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::NewProp_HeroUIComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBase, nullptr, "BP_OnOwningHeroUIComponentInitialized", nullptr, nullptr, Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers), sizeof(WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(WidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UWidgetBase Function BP_OnOwningHeroUIComponentInitialized

// Begin Class UWidgetBase Function InitEnemyCreateWidget
struct Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget_Statics
{
	struct WidgetBase_eventInitEnemyCreateWidget_Parms
	{
		AActor* EnemyActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/WidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget_Statics::NewProp_EnemyActor = { "EnemyActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBase_eventInitEnemyCreateWidget_Parms, EnemyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget_Statics::NewProp_EnemyActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBase, nullptr, "InitEnemyCreateWidget", nullptr, nullptr, Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget_Statics::WidgetBase_eventInitEnemyCreateWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget_Statics::WidgetBase_eventInitEnemyCreateWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBase::execInitEnemyCreateWidget)
{
	P_GET_OBJECT(AActor,Z_Param_EnemyActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitEnemyCreateWidget(Z_Param_EnemyActor);
	P_NATIVE_END;
}
// End Class UWidgetBase Function InitEnemyCreateWidget

// Begin Class UWidgetBase
void UWidgetBase::StaticRegisterNativesUWidgetBase()
{
	UClass* Class = UWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitEnemyCreateWidget", &UWidgetBase::execInitEnemyCreateWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBase);
UClass* Z_Construct_UClass_UWidgetBase_NoRegister()
{
	return UWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/WidgetBase.h" },
		{ "ModuleRelativePath", "Public/Widget/WidgetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetBase_BP_OnOwingEnemyUIComponentInitialized, "BP_OnOwingEnemyUIComponentInitialized" }, // 3209452667
		{ &Z_Construct_UFunction_UWidgetBase_BP_OnOwningHeroUIComponentInitialized, "BP_OnOwningHeroUIComponentInitialized" }, // 3515071877
		{ &Z_Construct_UFunction_UWidgetBase_InitEnemyCreateWidget, "InitEnemyCreateWidget" }, // 3162865178
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBase_Statics::ClassParams = {
	&UWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetBase()
{
	if (!Z_Registration_Info_UClass_UWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBase.OuterSingleton, Z_Construct_UClass_UWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetBase.OuterSingleton;
}
template<> PROJECTA_API UClass* StaticClass<UWidgetBase>()
{
	return UWidgetBase::StaticClass();
}
UWidgetBase::UWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBase);
UWidgetBase::~UWidgetBase() {}
// End Class UWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Widget_WidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBase, UWidgetBase::StaticClass, TEXT("UWidgetBase"), &Z_Registration_Info_UClass_UWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBase), 1961516626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Widget_WidgetBase_h_1013996524(TEXT("/Script/ProjectA"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Widget_WidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Widget_WidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
