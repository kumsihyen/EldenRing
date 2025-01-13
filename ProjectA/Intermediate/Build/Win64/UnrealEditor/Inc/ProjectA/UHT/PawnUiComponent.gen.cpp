// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectA/Public/Components/Ui/PawnUiComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnUiComponent() {}

// Begin Cross Module References
PROJECTA_API UClass* Z_Construct_UClass_UPawnExtensionComponent();
PROJECTA_API UClass* Z_Construct_UClass_UPawnUiComponent();
PROJECTA_API UClass* Z_Construct_UClass_UPawnUiComponent_NoRegister();
PROJECTA_API UFunction* Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectA();
// End Cross Module References

// Begin Delegate FOnPercentChangeDelegate
struct Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature_Statics
{
	struct _Script_ProjectA_eventOnPercentChangeDelegate_Parms
	{
		float NewPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Ui/PawnUiComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature_Statics::NewProp_NewPercent = { "NewPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectA_eventOnPercentChangeDelegate_Parms, NewPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature_Statics::NewProp_NewPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectA, nullptr, "OnPercentChangeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature_Statics::_Script_ProjectA_eventOnPercentChangeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature_Statics::_Script_ProjectA_eventOnPercentChangeDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPercentChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPercentChangeDelegate, float NewPercent)
{
	struct _Script_ProjectA_eventOnPercentChangeDelegate_Parms
	{
		float NewPercent;
	};
	_Script_ProjectA_eventOnPercentChangeDelegate_Parms Parms;
	Parms.NewPercent=NewPercent;
	OnPercentChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPercentChangeDelegate

// Begin Class UPawnUiComponent
void UPawnUiComponent::StaticRegisterNativesUPawnUiComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnUiComponent);
UClass* Z_Construct_UClass_UPawnUiComponent_NoRegister()
{
	return UPawnUiComponent::StaticClass();
}
struct Z_Construct_UClass_UPawnUiComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/Ui/PawnUiComponent.h" },
		{ "ModuleRelativePath", "Public/Components/Ui/PawnUiComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentHpChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/Ui/PawnUiComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentHpChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnUiComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPawnUiComponent_Statics::NewProp_OnCurrentHpChanged = { "OnCurrentHpChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnUiComponent, OnCurrentHpChanged), Z_Construct_UDelegateFunction_ProjectA_OnPercentChangeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCurrentHpChanged_MetaData), NewProp_OnCurrentHpChanged_MetaData) }; // 1720721535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnUiComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnUiComponent_Statics::NewProp_OnCurrentHpChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUiComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPawnUiComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnExtensionComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUiComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnUiComponent_Statics::ClassParams = {
	&UPawnUiComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPawnUiComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUiComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnUiComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnUiComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnUiComponent()
{
	if (!Z_Registration_Info_UClass_UPawnUiComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnUiComponent.OuterSingleton, Z_Construct_UClass_UPawnUiComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnUiComponent.OuterSingleton;
}
template<> PROJECTA_API UClass* StaticClass<UPawnUiComponent>()
{
	return UPawnUiComponent::StaticClass();
}
UPawnUiComponent::UPawnUiComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnUiComponent);
UPawnUiComponent::~UPawnUiComponent() {}
// End Class UPawnUiComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Ui_PawnUiComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnUiComponent, UPawnUiComponent::StaticClass, TEXT("UPawnUiComponent"), &Z_Registration_Info_UClass_UPawnUiComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnUiComponent), 1587312825U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Ui_PawnUiComponent_h_849544420(TEXT("/Script/ProjectA"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Ui_PawnUiComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_ProjectA_ref_ProjectA_Source_ProjectA_Public_Components_Ui_PawnUiComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS