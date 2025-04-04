// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLUIInputPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLUIInputPass() {}

// Begin Cross Module References
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementInput();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLUIInputPass();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLUIInputPass_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References

// Begin Class UOWLUIInputPass Function GetWidget
struct Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics
{
	struct OWLUIInputPass_eventGetWidget_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLUIInputPass_eventGetWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLUIInputPass, nullptr, "GetWidget", nullptr, nullptr, Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::OWLUIInputPass_eventGetWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::OWLUIInputPass_eventGetWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLUIInputPass_GetWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLUIInputPass_GetWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLUIInputPass::execGetWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetWidget();
	P_NATIVE_END;
}
// End Class UOWLUIInputPass Function GetWidget

// Begin Class UOWLUIInputPass Function OnWorldDestroy
struct Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics
{
	struct OWLUIInputPass_eventOnWorldDestroy_Parms
	{
		UWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLUIInputPass_eventOnWorldDestroy_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLUIInputPass, nullptr, "OnWorldDestroy", nullptr, nullptr, Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::OWLUIInputPass_eventOnWorldDestroy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::OWLUIInputPass_eventOnWorldDestroy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLUIInputPass::execOnWorldDestroy)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWorldDestroy(Z_Param_World);
	P_NATIVE_END;
}
// End Class UOWLUIInputPass Function OnWorldDestroy

// Begin Class UOWLUIInputPass
void UOWLUIInputPass::StaticRegisterNativesUOWLUIInputPass()
{
	UClass* Class = UOWLUIInputPass::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWidget", &UOWLUIInputPass::execGetWidget },
		{ "OnWorldDestroy", &UOWLUIInputPass::execOnWorldDestroy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLUIInputPass);
UClass* Z_Construct_UClass_UOWLUIInputPass_NoRegister()
{
	return UOWLUIInputPass::StaticClass();
}
struct Z_Construct_UClass_UOWLUIInputPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OWLUIInputPass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetType_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderResolution_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearColour_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToRender_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLUIInputPass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderResolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColour;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetToRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWLUIInputPass_GetWidget, "GetWidget" }, // 2843818211
		{ &Z_Construct_UFunction_UOWLUIInputPass_OnWorldDestroy, "OnWorldDestroy" }, // 1857863994
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLUIInputPass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetType = { "WidgetType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLUIInputPass, WidgetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetType_MetaData), NewProp_WidgetType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_RenderResolution = { "RenderResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLUIInputPass, RenderResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderResolution_MetaData), NewProp_RenderResolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_ClearColour = { "ClearColour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLUIInputPass, ClearColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearColour_MetaData), NewProp_ClearColour_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetToRender = { "WidgetToRender", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLUIInputPass, WidgetToRender), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetToRender_MetaData), NewProp_WidgetToRender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLUIInputPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_RenderResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_ClearColour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLUIInputPass_Statics::NewProp_WidgetToRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWLUIInputPass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCompositingElementInput,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLUIInputPass_Statics::ClassParams = {
	&UOWLUIInputPass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWLUIInputPass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLUIInputPass_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLUIInputPass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWLUIInputPass()
{
	if (!Z_Registration_Info_UClass_UOWLUIInputPass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLUIInputPass.OuterSingleton, Z_Construct_UClass_UOWLUIInputPass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLUIInputPass.OuterSingleton;
}
template<> OWLCOMPOSURE_API UClass* StaticClass<UOWLUIInputPass>()
{
	return UOWLUIInputPass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLUIInputPass);
// End Class UOWLUIInputPass

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLUIInputPass, UOWLUIInputPass::StaticClass, TEXT("UOWLUIInputPass"), &Z_Registration_Info_UClass_UOWLUIInputPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLUIInputPass), 63107038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_3572775498(TEXT("/Script/OWLComposure"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLUIInputPass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
