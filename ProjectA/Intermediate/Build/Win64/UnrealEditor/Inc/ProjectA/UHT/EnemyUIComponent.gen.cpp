// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectA/Public/Components/Ui/EnemyUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyUIComponent() {}

// Begin Cross Module References
PROJECTA_API UClass* Z_Construct_UClass_UEnemyUIComponent();
PROJECTA_API UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister();
PROJECTA_API UClass* Z_Construct_UClass_UPawnUiComponent();
PROJECTA_API UClass* Z_Construct_UClass_UWidgetBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectA();
// End Cross Module References

// Begin Class UEnemyUIComponent Function RegisterEnemyWidget
struct Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget_Statics
{
	struct EnemyUIComponent_eventRegisterEnemyWidget_Parms
	{
		UWidgetBase* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Ui/EnemyUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyUIComponent_eventRegisterEnemyWidget_Parms, Widget), Z_Construct_UClass_UWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyUIComponent, nullptr, "RegisterEnemyWidget", nullptr, nullptr, Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget_Statics::EnemyUIComponent_eventRegisterEnemyWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget_Statics::EnemyUIComponent_eventRegisterEnemyWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyUIComponent::execRegisterEnemyWidget)
{
	P_GET_OBJECT(UWidgetBase,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterEnemyWidget(Z_Param_Widget);
	P_NATIVE_END;
}
// End Class UEnemyUIComponent Function RegisterEnemyWidget

// Begin Class UEnemyUIComponent Function RemoveEnemyWidget
struct Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Ui/EnemyUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyUIComponent, nullptr, "RemoveEnemyWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyUIComponent::execRemoveEnemyWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveEnemyWidget();
	P_NATIVE_END;
}
// End Class UEnemyUIComponent Function RemoveEnemyWidget

// Begin Class UEnemyUIComponent
void UEnemyUIComponent::StaticRegisterNativesUEnemyUIComponent()
{
	UClass* Class = UEnemyUIComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterEnemyWidget", &UEnemyUIComponent::execRegisterEnemyWidget },
		{ "RemoveEnemyWidget", &UEnemyUIComponent::execRemoveEnemyWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyUIComponent);
UClass* Z_Construct_UClass_UEnemyUIComponent_NoRegister()
{
	return UEnemyUIComponent::StaticClass();
}
struct Z_Construct_UClass_UEnemyUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/Ui/EnemyUIComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Ui/EnemyUIComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyUIComponent_RegisterEnemyWidget, "RegisterEnemyWidget" }, // 417183896
		{ &Z_Construct_UFunction_UEnemyUIComponent_RemoveEnemyWidget, "RemoveEnemyWidget" }, // 1813454389
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnUiComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyUIComponent_Statics::ClassParams = {
	&UEnemyUIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyUIComponent()
{
	if (!Z_Registration_Info_UClass_UEnemyUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyUIComponent.OuterSingleton, Z_Construct_UClass_UEnemyUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyUIComponent.OuterSingleton;
}
template<> PROJECTA_API UClass* StaticClass<UEnemyUIComponent>()
{
	return UEnemyUIComponent::StaticClass();
}
UEnemyUIComponent::UEnemyUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyUIComponent);
UEnemyUIComponent::~UEnemyUIComponent() {}
// End Class UEnemyUIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Ui_EnemyUIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyUIComponent, UEnemyUIComponent::StaticClass, TEXT("UEnemyUIComponent"), &Z_Registration_Info_UClass_UEnemyUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyUIComponent), 1551065816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Ui_EnemyUIComponent_h_2181781860(TEXT("/Script/ProjectA"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Ui_EnemyUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Ui_EnemyUIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
