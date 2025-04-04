// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLCamera/Public/OWLCaptureComponent.h"
#include "Runtime/Engine/Classes/Components/SceneCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLCaptureComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEngineShowFlagsSetting();
OWLCAMERA_API UClass* Z_Construct_UClass_UOWLCaptureComponent();
OWLCAMERA_API UClass* Z_Construct_UClass_UOWLCaptureComponent_NoRegister();
OWLCAMERA_API UEnum* Z_Construct_UEnum_OWLCamera_EOWLOutputBufferVisualisation();
OWLCAMERA_API UFunction* Z_Construct_UDelegateFunction_OWLCamera_OnCaptureComponentResized__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWLCamera();
// End Cross Module References

// Begin Enum EOWLOutputBufferVisualisation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLOutputBufferVisualisation;
static UEnum* EOWLOutputBufferVisualisation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOWLOutputBufferVisualisation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOWLOutputBufferVisualisation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLCamera_EOWLOutputBufferVisualisation, (UObject*)Z_Construct_UPackage__Script_OWLCamera(), TEXT("EOWLOutputBufferVisualisation"));
	}
	return Z_Registration_Info_UEnum_EOWLOutputBufferVisualisation.OuterSingleton;
}
template<> OWLCAMERA_API UEnum* StaticEnum<EOWLOutputBufferVisualisation>()
{
	return EOWLOutputBufferVisualisation_StaticEnum();
}
struct Z_Construct_UEnum_OWLCamera_EOWLOutputBufferVisualisation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BV_AmbientOcclusion.DisplayName", "Ambient Occlusion" },
		{ "BV_AmbientOcclusion.Name", "EOWLOutputBufferVisualisation::BV_AmbientOcclusion" },
		{ "BV_Anisotropy.DisplayName", "Ansiotropy" },
		{ "BV_Anisotropy.Name", "EOWLOutputBufferVisualisation::BV_Anisotropy" },
		{ "BV_BaseColor.DisplayName", "Base Color" },
		{ "BV_BaseColor.Name", "EOWLOutputBufferVisualisation::BV_BaseColor" },
		{ "BV_CustomDepth.DisplayName", "Custom Depth" },
		{ "BV_CustomDepth.Name", "EOWLOutputBufferVisualisation::BV_CustomDepth" },
		{ "BV_CustomDepthWorldUnits.DisplayName", "Custom Depth World Units" },
		{ "BV_CustomDepthWorldUnits.Name", "EOWLOutputBufferVisualisation::BV_CustomDepthWorldUnits" },
		{ "BV_CustomStencil.DisplayName", "Custom Stencil" },
		{ "BV_CustomStencil.Name", "EOWLOutputBufferVisualisation::BV_CustomStencil" },
		{ "BV_FinalImage.DisplayName", "Final Image" },
		{ "BV_FinalImage.Name", "EOWLOutputBufferVisualisation::BV_FinalImage" },
		{ "BV_MaterialAO.DisplayName", "Material Ambient Occlusion" },
		{ "BV_MaterialAO.Name", "EOWLOutputBufferVisualisation::BV_MaterialAO" },
		{ "BV_MattePass.DisplayName", "Matte Pass (Hold Out)" },
		{ "BV_MattePass.Name", "EOWLOutputBufferVisualisation::BV_MattePass" },
		{ "BV_MattePassInverted.DisplayName", "Matte Pass (Garbage)" },
		{ "BV_MattePassInverted.Name", "EOWLOutputBufferVisualisation::BV_MattePassInverted" },
		{ "BV_Metallic.DisplayName", "Metallic" },
		{ "BV_Metallic.Name", "EOWLOutputBufferVisualisation::BV_Metallic" },
		{ "BV_None.DisplayName", "None" },
		{ "BV_None.Name", "EOWLOutputBufferVisualisation::BV_None" },
		{ "BV_Opacity.DisplayName", "Opacity" },
		{ "BV_Opacity.Name", "EOWLOutputBufferVisualisation::BV_Opacity" },
		{ "BV_PostTonemapHDRColor.DisplayName", "Post-Tonemap HDR Color" },
		{ "BV_PostTonemapHDRColor.Name", "EOWLOutputBufferVisualisation::BV_PostTonemapHDRColor" },
		{ "BV_PreTonemapHDRColor.DisplayName", "Pre-Tonemap HDR Color" },
		{ "BV_PreTonemapHDRColor.Name", "EOWLOutputBufferVisualisation::BV_PreTonemapHDRColor" },
		{ "BV_Roughness.DisplayName", "Roughness" },
		{ "BV_Roughness.Name", "EOWLOutputBufferVisualisation::BV_Roughness" },
		{ "BV_SceneColor.DisplayName", "Scene Color" },
		{ "BV_SceneColor.Name", "EOWLOutputBufferVisualisation::BV_SceneColor" },
		{ "BV_SceneDepth.DisplayName", "Scene Depth" },
		{ "BV_SceneDepth.Name", "EOWLOutputBufferVisualisation::BV_SceneDepth" },
		{ "BV_SceneDepthWorldUnits.DisplayName", "Scene Depth World Units" },
		{ "BV_SceneDepthWorldUnits.Name", "EOWLOutputBufferVisualisation::BV_SceneDepthWorldUnits" },
		{ "BV_SeparateTranslucencyA.DisplayName", "Separate Translucency Alpha" },
		{ "BV_SeparateTranslucencyA.Name", "EOWLOutputBufferVisualisation::BV_SeparateTranslucencyA" },
		{ "BV_SeparateTranslucencyRGB.DisplayName", "Separate Translucency RGB" },
		{ "BV_SeparateTranslucencyRGB.Name", "EOWLOutputBufferVisualisation::BV_SeparateTranslucencyRGB" },
		{ "BV_ShadingModel.DisplayName", "ShadingModel" },
		{ "BV_ShadingModel.Name", "EOWLOutputBufferVisualisation::BV_ShadingModel" },
		{ "BV_Specular.DisplayName", "Specular" },
		{ "BV_Specular.Name", "EOWLOutputBufferVisualisation::BV_Specular" },
		{ "BV_SubsurfaceColor.DisplayName", "Subsurface Color" },
		{ "BV_SubsurfaceColor.Name", "EOWLOutputBufferVisualisation::BV_SubsurfaceColor" },
		{ "BV_Velocity.DisplayName", "Velocity" },
		{ "BV_Velocity.Name", "EOWLOutputBufferVisualisation::BV_Velocity" },
		{ "BV_WorldNormal.DisplayName", "World Normal" },
		{ "BV_WorldNormal.Name", "EOWLOutputBufferVisualisation::BV_WorldNormal" },
		{ "BV_WorldTangent.DisplayName", "World Tangent" },
		{ "BV_WorldTangent.Name", "EOWLOutputBufferVisualisation::BV_WorldTangent" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOWLOutputBufferVisualisation::BV_None", (int64)EOWLOutputBufferVisualisation::BV_None },
		{ "EOWLOutputBufferVisualisation::BV_BaseColor", (int64)EOWLOutputBufferVisualisation::BV_BaseColor },
		{ "EOWLOutputBufferVisualisation::BV_CustomDepth", (int64)EOWLOutputBufferVisualisation::BV_CustomDepth },
		{ "EOWLOutputBufferVisualisation::BV_CustomStencil", (int64)EOWLOutputBufferVisualisation::BV_CustomStencil },
		{ "EOWLOutputBufferVisualisation::BV_FinalImage", (int64)EOWLOutputBufferVisualisation::BV_FinalImage },
		{ "EOWLOutputBufferVisualisation::BV_ShadingModel", (int64)EOWLOutputBufferVisualisation::BV_ShadingModel },
		{ "EOWLOutputBufferVisualisation::BV_MaterialAO", (int64)EOWLOutputBufferVisualisation::BV_MaterialAO },
		{ "EOWLOutputBufferVisualisation::BV_Metallic", (int64)EOWLOutputBufferVisualisation::BV_Metallic },
		{ "EOWLOutputBufferVisualisation::BV_Opacity", (int64)EOWLOutputBufferVisualisation::BV_Opacity },
		{ "EOWLOutputBufferVisualisation::BV_Roughness", (int64)EOWLOutputBufferVisualisation::BV_Roughness },
		{ "EOWLOutputBufferVisualisation::BV_Anisotropy", (int64)EOWLOutputBufferVisualisation::BV_Anisotropy },
		{ "EOWLOutputBufferVisualisation::BV_SceneColor", (int64)EOWLOutputBufferVisualisation::BV_SceneColor },
		{ "EOWLOutputBufferVisualisation::BV_SceneDepth", (int64)EOWLOutputBufferVisualisation::BV_SceneDepth },
		{ "EOWLOutputBufferVisualisation::BV_SeparateTranslucencyRGB", (int64)EOWLOutputBufferVisualisation::BV_SeparateTranslucencyRGB },
		{ "EOWLOutputBufferVisualisation::BV_SeparateTranslucencyA", (int64)EOWLOutputBufferVisualisation::BV_SeparateTranslucencyA },
		{ "EOWLOutputBufferVisualisation::BV_Specular", (int64)EOWLOutputBufferVisualisation::BV_Specular },
		{ "EOWLOutputBufferVisualisation::BV_SubsurfaceColor", (int64)EOWLOutputBufferVisualisation::BV_SubsurfaceColor },
		{ "EOWLOutputBufferVisualisation::BV_WorldNormal", (int64)EOWLOutputBufferVisualisation::BV_WorldNormal },
		{ "EOWLOutputBufferVisualisation::BV_WorldTangent", (int64)EOWLOutputBufferVisualisation::BV_WorldTangent },
		{ "EOWLOutputBufferVisualisation::BV_AmbientOcclusion", (int64)EOWLOutputBufferVisualisation::BV_AmbientOcclusion },
		{ "EOWLOutputBufferVisualisation::BV_CustomDepthWorldUnits", (int64)EOWLOutputBufferVisualisation::BV_CustomDepthWorldUnits },
		{ "EOWLOutputBufferVisualisation::BV_SceneDepthWorldUnits", (int64)EOWLOutputBufferVisualisation::BV_SceneDepthWorldUnits },
		{ "EOWLOutputBufferVisualisation::BV_Velocity", (int64)EOWLOutputBufferVisualisation::BV_Velocity },
		{ "EOWLOutputBufferVisualisation::BV_PreTonemapHDRColor", (int64)EOWLOutputBufferVisualisation::BV_PreTonemapHDRColor },
		{ "EOWLOutputBufferVisualisation::BV_PostTonemapHDRColor", (int64)EOWLOutputBufferVisualisation::BV_PostTonemapHDRColor },
		{ "EOWLOutputBufferVisualisation::BV_MattePass", (int64)EOWLOutputBufferVisualisation::BV_MattePass },
		{ "EOWLOutputBufferVisualisation::BV_MattePassInverted", (int64)EOWLOutputBufferVisualisation::BV_MattePassInverted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLCamera_EOWLOutputBufferVisualisation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWLCamera,
	nullptr,
	"EOWLOutputBufferVisualisation",
	"EOWLOutputBufferVisualisation",
	Z_Construct_UEnum_OWLCamera_EOWLOutputBufferVisualisation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWLCamera_EOWLOutputBufferVisualisation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWLCamera_EOWLOutputBufferVisualisation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWLCamera_EOWLOutputBufferVisualisation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWLCamera_EOWLOutputBufferVisualisation()
{
	if (!Z_Registration_Info_UEnum_EOWLOutputBufferVisualisation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLOutputBufferVisualisation.InnerSingleton, Z_Construct_UEnum_OWLCamera_EOWLOutputBufferVisualisation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOWLOutputBufferVisualisation.InnerSingleton;
}
// End Enum EOWLOutputBufferVisualisation

// Begin Delegate FOnCaptureComponentResized
struct Z_Construct_UDelegateFunction_OWLCamera_OnCaptureComponentResized__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWLCamera_OnCaptureComponentResized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWLCamera, nullptr, "OnCaptureComponentResized__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLCamera_OnCaptureComponentResized__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWLCamera_OnCaptureComponentResized__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OWLCamera_OnCaptureComponentResized__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWLCamera_OnCaptureComponentResized__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCaptureComponentResized_DelegateWrapper(const FMulticastScriptDelegate& OnCaptureComponentResized)
{
	OnCaptureComponentResized.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnCaptureComponentResized

// Begin Class UOWLCaptureComponent Function ClearHiddenComponents
struct Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/** Clears the hidden list. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Clears the hidden list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "ClearHiddenComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLCaptureComponent::execClearHiddenComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearHiddenComponents();
	P_NATIVE_END;
}
// End Class UOWLCaptureComponent Function ClearHiddenComponents

// Begin Class UOWLCaptureComponent Function ClearShowOnlyComponents
struct Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/** Clears the Show Only list. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Clears the Show Only list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "ClearShowOnlyComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLCaptureComponent::execClearShowOnlyComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearShowOnlyComponents();
	P_NATIVE_END;
}
// End Class UOWLCaptureComponent Function ClearShowOnlyComponents

// Begin Class UOWLCaptureComponent Function GetCurrentUMGWidget
struct Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics
{
	struct OWLCaptureComponent_eventGetCurrentUMGWidget_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UMGRendering" },
		{ "Comment", "/** Get Current UMG Widget\n\x09 * WARNING: might return nullptr if the WidgetType is not set */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Get Current UMG Widget\nWARNING: might return nullptr if the WidgetType is not set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLCaptureComponent_eventGetCurrentUMGWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "GetCurrentUMGWidget", nullptr, nullptr, Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::OWLCaptureComponent_eventGetCurrentUMGWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::OWLCaptureComponent_eventGetCurrentUMGWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLCaptureComponent::execGetCurrentUMGWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetCurrentUMGWidget();
	P_NATIVE_END;
}
// End Class UOWLCaptureComponent Function GetCurrentUMGWidget

// Begin Class UOWLCaptureComponent Function GetTargetCamera
struct Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics
{
	struct OWLCaptureComponent_eventGetTargetCamera_Parms
	{
		UCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLCaptureComponent_eventGetTargetCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "GetTargetCamera", nullptr, nullptr, Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::OWLCaptureComponent_eventGetTargetCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::OWLCaptureComponent_eventGetTargetCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLCaptureComponent::execGetTargetCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraComponent**)Z_Param__Result=P_THIS->GetTargetCamera();
	P_NATIVE_END;
}
// End Class UOWLCaptureComponent Function GetTargetCamera

// Begin Class UOWLCaptureComponent Function HideActorComponents
struct Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics
{
	struct OWLCaptureComponent_eventHideActorComponents_Parms
	{
		AActor* InActor;
		bool bIncludeFromChildActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/**\n\x09 * Adds all primitive components in the actor to our list of hidden components.\n\x09 * @param bIncludeFromChildActors Whether to include the components from child actors\n\x09 */" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Adds all primitive components in the actor to our list of hidden components.\n@param bIncludeFromChildActors Whether to include the components from child actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFromChildActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLCaptureComponent_eventHideActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
{
	((OWLCaptureComponent_eventHideActorComponents_Parms*)Obj)->bIncludeFromChildActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLCaptureComponent_eventHideActorComponents_Parms), &Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeFromChildActors_MetaData), NewProp_bIncludeFromChildActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::NewProp_bIncludeFromChildActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "HideActorComponents", nullptr, nullptr, Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::OWLCaptureComponent_eventHideActorComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::OWLCaptureComponent_eventHideActorComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLCaptureComponent::execHideActorComponents)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideActorComponents(Z_Param_InActor,Z_Param_bIncludeFromChildActors);
	P_NATIVE_END;
}
// End Class UOWLCaptureComponent Function HideActorComponents

// Begin Class UOWLCaptureComponent Function HideComponent
struct Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics
{
	struct OWLCaptureComponent_eventHideComponent_Parms
	{
		UPrimitiveComponent* InComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/** Adds the component to our list of hidden components. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Adds the component to our list of hidden components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLCaptureComponent_eventHideComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::NewProp_InComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "HideComponent", nullptr, nullptr, Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::OWLCaptureComponent_eventHideComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::OWLCaptureComponent_eventHideComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLCaptureComponent_HideComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_HideComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLCaptureComponent::execHideComponent)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideComponent(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class UOWLCaptureComponent Function HideComponent

// Begin Class UOWLCaptureComponent Function RemoveShowOnlyActorComponents
struct Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics
{
	struct OWLCaptureComponent_eventRemoveShowOnlyActorComponents_Parms
	{
		AActor* InActor;
		bool bIncludeFromChildActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/**\n\x09* Removes an actor's components from the Show Only list.\n\x09* @param bIncludeFromChildActors Whether to remove the components from child actors\n\x09*/" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Removes an actor's components from the Show Only list.\n@param bIncludeFromChildActors Whether to remove the components from child actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFromChildActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLCaptureComponent_eventRemoveShowOnlyActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
{
	((OWLCaptureComponent_eventRemoveShowOnlyActorComponents_Parms*)Obj)->bIncludeFromChildActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLCaptureComponent_eventRemoveShowOnlyActorComponents_Parms), &Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeFromChildActors_MetaData), NewProp_bIncludeFromChildActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "RemoveShowOnlyActorComponents", nullptr, nullptr, Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::OWLCaptureComponent_eventRemoveShowOnlyActorComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::OWLCaptureComponent_eventRemoveShowOnlyActorComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLCaptureComponent::execRemoveShowOnlyActorComponents)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveShowOnlyActorComponents(Z_Param_InActor,Z_Param_bIncludeFromChildActors);
	P_NATIVE_END;
}
// End Class UOWLCaptureComponent Function RemoveShowOnlyActorComponents

// Begin Class UOWLCaptureComponent Function RemoveShowOnlyComponent
struct Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics
{
	struct OWLCaptureComponent_eventRemoveShowOnlyComponent_Parms
	{
		UPrimitiveComponent* InComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/** Removes a component from the Show Only list. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Removes a component from the Show Only list." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLCaptureComponent_eventRemoveShowOnlyComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::NewProp_InComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "RemoveShowOnlyComponent", nullptr, nullptr, Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::OWLCaptureComponent_eventRemoveShowOnlyComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::OWLCaptureComponent_eventRemoveShowOnlyComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLCaptureComponent::execRemoveShowOnlyComponent)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveShowOnlyComponent(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class UOWLCaptureComponent Function RemoveShowOnlyComponent

// Begin Class UOWLCaptureComponent Function ShowOnlyActorComponents
struct Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics
{
	struct OWLCaptureComponent_eventShowOnlyActorComponents_Parms
	{
		AActor* InActor;
		bool bIncludeFromChildActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/**\n\x09* Adds all primitive components in the actor to our list of show-only components.\n\x09* @param bIncludeFromChildActors Whether to include the components from child actors\n\x09*/" },
		{ "CPP_Default_bIncludeFromChildActors", "false" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Adds all primitive components in the actor to our list of show-only components.\n@param bIncludeFromChildActors Whether to include the components from child actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeFromChildActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static void NewProp_bIncludeFromChildActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeFromChildActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLCaptureComponent_eventShowOnlyActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit(void* Obj)
{
	((OWLCaptureComponent_eventShowOnlyActorComponents_Parms*)Obj)->bIncludeFromChildActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors = { "bIncludeFromChildActors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLCaptureComponent_eventShowOnlyActorComponents_Parms), &Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeFromChildActors_MetaData), NewProp_bIncludeFromChildActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::NewProp_bIncludeFromChildActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "ShowOnlyActorComponents", nullptr, nullptr, Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::OWLCaptureComponent_eventShowOnlyActorComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::OWLCaptureComponent_eventShowOnlyActorComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLCaptureComponent::execShowOnlyActorComponents)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_UBOOL(Z_Param_bIncludeFromChildActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowOnlyActorComponents(Z_Param_InActor,Z_Param_bIncludeFromChildActors);
	P_NATIVE_END;
}
// End Class UOWLCaptureComponent Function ShowOnlyActorComponents

// Begin Class UOWLCaptureComponent Function ShowOnlyComponent
struct Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics
{
	struct OWLCaptureComponent_eventShowOnlyComponent_Parms
	{
		UPrimitiveComponent* InComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWLCapture" },
		{ "Comment", "/** Adds the component to our list of show-only components. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Adds the component to our list of show-only components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLCaptureComponent_eventShowOnlyComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::NewProp_InComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWLCaptureComponent, nullptr, "ShowOnlyComponent", nullptr, nullptr, Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::OWLCaptureComponent_eventShowOnlyComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::OWLCaptureComponent_eventShowOnlyComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWLCaptureComponent::execShowOnlyComponent)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowOnlyComponent(Z_Param_InComponent);
	P_NATIVE_END;
}
// End Class UOWLCaptureComponent Function ShowOnlyComponent

// Begin Class UOWLCaptureComponent
void UOWLCaptureComponent::StaticRegisterNativesUOWLCaptureComponent()
{
	UClass* Class = UOWLCaptureComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearHiddenComponents", &UOWLCaptureComponent::execClearHiddenComponents },
		{ "ClearShowOnlyComponents", &UOWLCaptureComponent::execClearShowOnlyComponents },
		{ "GetCurrentUMGWidget", &UOWLCaptureComponent::execGetCurrentUMGWidget },
		{ "GetTargetCamera", &UOWLCaptureComponent::execGetTargetCamera },
		{ "HideActorComponents", &UOWLCaptureComponent::execHideActorComponents },
		{ "HideComponent", &UOWLCaptureComponent::execHideComponent },
		{ "RemoveShowOnlyActorComponents", &UOWLCaptureComponent::execRemoveShowOnlyActorComponents },
		{ "RemoveShowOnlyComponent", &UOWLCaptureComponent::execRemoveShowOnlyComponent },
		{ "ShowOnlyActorComponents", &UOWLCaptureComponent::execShowOnlyActorComponents },
		{ "ShowOnlyComponent", &UOWLCaptureComponent::execShowOnlyComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLCaptureComponent);
UClass* Z_Construct_UClass_UOWLCaptureComponent_NoRegister()
{
	return UOWLCaptureComponent::StaticClass();
}
struct Z_Construct_UClass_UOWLCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Collision Object Physics SceneComponent Mobility Tags Activation Cooking Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "OWLCaptureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/**\n\x09* Render target to render into and send to Spout\n\x09* If left unset the render target will be generated automatically\n\x09*/" },
		{ "EditCondition", "!bUseRTOverride" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Render target to render into and send to Spout\nIf left unset the render target will be generated automatically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualisationType_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "EditCondition", "!bHideBufferOption" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionX_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/**\n\x09* Min: 64px, Max: 7680\n\x09*/" },
		{ "EditCondition", "!bUseRTOverride" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "Min: 64px, Max: 7680" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionY_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/**\n\x09* Min: 64px, Max: 4320\n\x09*/" },
		{ "EditCondition", "!bUseRTOverride" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "Min: 64px, Max: 4320" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowFlagSettings_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseRendering_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "Comment", "/** Tick if you want to pause rendering to the render target */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Tick if you want to pause rendering to the render target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderHUD_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|UMG Rendering" },
		{ "EditCondition", "!bUseRTOverride" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetType_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|UMG Rendering" },
		{ "EditCondition", "!bUseRTOverride" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToRender_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseShowOnlyList_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Alpha Settings" },
		{ "Comment", "/** Tick if you want to render selected primitives only */" },
		{ "EditCondition", "!bUseRTOverride" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Tick if you want to render selected primitives only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenComponents_MetaData[] = {
		{ "Comment", "/** The components won't rendered by current component.*/" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "The components won't rendered by current component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenActors_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Alpha Settings" },
		{ "Comment", "/** The actors to hide in the scene capture. */" },
		{ "EditCondition", "!bUseRTOverride" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "The actors to hide in the scene capture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderSceneViewExtensions_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Render Settings" },
		{ "Comment", "/** Rendering Scene view extensions can be important for correctly rendering landscapes etc, but can often cause unnecessary re-renders\n\x09 when they are only expected to be executed in the viewport rendering cycle */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Rendering Scene view extensions can be important for correctly rendering landscapes etc, but can often cause unnecessary re-renders\n       when they are only expected to be executed in the viewport rendering cycle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyComponents_MetaData[] = {
		{ "Comment", "/** The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyActors_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Alpha Settings" },
		{ "Comment", "/** The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList.*/" },
		{ "EditCondition", "!bUseRTOverride" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvertAlpha_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Alpha Settings" },
		{ "Comment", "/** By default we invert the ue4's default alpha value of captured textures - you can disable it here */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "By default we invert the ue4's default alpha value of captured textures - you can disable it here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODDistanceFactor_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "Comment", "/** Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass. */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass." },
		{ "UIMax", "10" },
		{ "UIMin", ".1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxViewDistanceOverride_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "Comment", "/** if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room" },
		{ "UIMax", "10000" },
		{ "UIMin", "100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUpscaling_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "Comment", "/** Tick to enable plugins like DLSS -- warning certain anti-aliasing settings may cause crashes when screen percentage on this actor is adjusted */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Tick to enable plugins like DLSS -- warning certain anti-aliasing settings may cause crashes when screen percentage on this actor is adjusted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPercentage_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "ClampMax", "200" },
		{ "ClampMin", "25" },
		{ "Comment", "/** ScreenPercentage affects impact of upscaling (ie DLSS, TAA ...) */" },
		{ "EditCondition", "bEnableUpscaling" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "ScreenPercentage affects impact of upscaling (ie DLSS, TAA ...)" },
		{ "UIMax", "200" },
		{ "UIMin", "25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryScreenPercentage_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "ClampMax", "200" },
		{ "ClampMin", "25" },
		{ "Comment", "/** Secondary ScreenPercentage affects impact of upscaling (ie DLSS, TAA ...) */" },
		{ "EditCondition", "bEnableUpscaling" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Secondary ScreenPercentage affects impact of upscaling (ie DLSS, TAA ...)" },
		{ "UIMax", "200" },
		{ "UIMin", "25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceCameraCut_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "Comment", "/** Forces the `bCameraCut` flag which disables inter-frame caching for certain Unreal post-processing, like TSR motion blur. Disable if you notice performance degradation or lack of inter-frame effects */" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Forces the `bCameraCut` flag which disables inter-frame caching for certain Unreal post-processing, like TSR motion blur. Disable if you notice performance degradation or lack of inter-frame effects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPathTracing_MetaData[] = {
		{ "Category", "Off World Live Capture Settings|Advanced" },
		{ "Comment", "/** Enable path tracing */" },
		{ "EditCondition", "IsRayTracingAllowed() && IsRayTracingEnabled() && IsRayTracingEnabledForProject()" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Enable path tracing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetResized_MetaData[] = {
		{ "Category", "Off World Live Capture Settings" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "Triggered whenever the render target has been resized. This can be essential when triggering a media output stream on begin play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRTOverride_MetaData[] = {
		{ "Category", "Internal" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideBufferOption_MetaData[] = {
		{ "Category", "Internal" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaOnlyMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaOnlyMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaOnlyMaterialInverted_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaOnlyInvertedMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalRT_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CineCameraMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideRT_MetaData[] = {
		{ "Comment", "// This is used by child components that don't want to allow the user\n// to specify render targets\n" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
		{ "ToolTip", "This is used by child components that don't want to allow the user\nto specify render targets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideCameraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VisualisationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VisualisationType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShowFlagSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowFlagSettings;
	static void NewProp_PauseRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PauseRendering;
	static void NewProp_RenderHUD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderHUD;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetToRender;
	static void NewProp_UseShowOnlyList_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseShowOnlyList;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HiddenComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HiddenActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenActors;
	static void NewProp_bRenderSceneViewExtensions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderSceneViewExtensions;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ShowOnlyComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowOnlyActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyActors;
	static void NewProp_InvertAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDistanceFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxViewDistanceOverride;
	static void NewProp_bEnableUpscaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUpscaling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryScreenPercentage;
	static void NewProp_bForceCameraCut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceCameraCut;
	static void NewProp_bPathTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathTracing;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetResized;
	static void NewProp_bUseRTOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRTOverride;
	static void NewProp_bHideBufferOption_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideBufferOption;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlphaOnlyMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlphaOnlyMID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlphaOnlyMaterialInverted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlphaOnlyInvertedMID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InternalRT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CineCameraMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideRT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideCameraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWLCaptureComponent_ClearHiddenComponents, "ClearHiddenComponents" }, // 1906791201
		{ &Z_Construct_UFunction_UOWLCaptureComponent_ClearShowOnlyComponents, "ClearShowOnlyComponents" }, // 3839148992
		{ &Z_Construct_UFunction_UOWLCaptureComponent_GetCurrentUMGWidget, "GetCurrentUMGWidget" }, // 3785571706
		{ &Z_Construct_UFunction_UOWLCaptureComponent_GetTargetCamera, "GetTargetCamera" }, // 4065714666
		{ &Z_Construct_UFunction_UOWLCaptureComponent_HideActorComponents, "HideActorComponents" }, // 1515916369
		{ &Z_Construct_UFunction_UOWLCaptureComponent_HideComponent, "HideComponent" }, // 2051761610
		{ &Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyActorComponents, "RemoveShowOnlyActorComponents" }, // 2723352782
		{ &Z_Construct_UFunction_UOWLCaptureComponent_RemoveShowOnlyComponent, "RemoveShowOnlyComponent" }, // 1791217255
		{ &Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyActorComponents, "ShowOnlyActorComponents" }, // 3002067461
		{ &Z_Construct_UFunction_UOWLCaptureComponent_ShowOnlyComponent, "ShowOnlyComponent" }, // 3606747610
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureTarget_MetaData), NewProp_TextureTarget_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_VisualisationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_VisualisationType = { "VisualisationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, VisualisationType), Z_Construct_UEnum_OWLCamera_EOWLOutputBufferVisualisation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualisationType_MetaData), NewProp_VisualisationType_MetaData) }; // 1842689560
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, ResolutionX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionX_MetaData), NewProp_ResolutionX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, ResolutionY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionY_MetaData), NewProp_ResolutionY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowFlagSettings_Inner = { "ShowFlagSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEngineShowFlagsSetting, METADATA_PARAMS(0, nullptr) }; // 3559122429
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowFlagSettings = { "ShowFlagSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, ShowFlagSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowFlagSettings_MetaData), NewProp_ShowFlagSettings_MetaData) }; // 3559122429
void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_PauseRendering_SetBit(void* Obj)
{
	((UOWLCaptureComponent*)Obj)->PauseRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_PauseRendering = { "PauseRendering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_PauseRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseRendering_MetaData), NewProp_PauseRendering_MetaData) };
void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_RenderHUD_SetBit(void* Obj)
{
	((UOWLCaptureComponent*)Obj)->RenderHUD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_RenderHUD = { "RenderHUD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_RenderHUD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderHUD_MetaData), NewProp_RenderHUD_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetType = { "WidgetType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, WidgetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetType_MetaData), NewProp_WidgetType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetToRender = { "WidgetToRender", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, WidgetToRender), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetToRender_MetaData), NewProp_WidgetToRender_MetaData) };
void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_UseShowOnlyList_SetBit(void* Obj)
{
	((UOWLCaptureComponent*)Obj)->UseShowOnlyList = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_UseShowOnlyList = { "UseShowOnlyList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_UseShowOnlyList_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseShowOnlyList_MetaData), NewProp_UseShowOnlyList_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenComponents_Inner = { "HiddenComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenComponents = { "HiddenComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, HiddenComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenComponents_MetaData), NewProp_HiddenComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenActors_Inner = { "HiddenActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenActors = { "HiddenActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, HiddenActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenActors_MetaData), NewProp_HiddenActors_MetaData) };
void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bRenderSceneViewExtensions_SetBit(void* Obj)
{
	((UOWLCaptureComponent*)Obj)->bRenderSceneViewExtensions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bRenderSceneViewExtensions = { "bRenderSceneViewExtensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bRenderSceneViewExtensions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderSceneViewExtensions_MetaData), NewProp_bRenderSceneViewExtensions_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyComponents_Inner = { "ShowOnlyComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyComponents = { "ShowOnlyComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, ShowOnlyComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowOnlyComponents_MetaData), NewProp_ShowOnlyComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyActors_Inner = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyActors = { "ShowOnlyActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, ShowOnlyActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowOnlyActors_MetaData), NewProp_ShowOnlyActors_MetaData) };
void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InvertAlpha_SetBit(void* Obj)
{
	((UOWLCaptureComponent*)Obj)->InvertAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InvertAlpha = { "InvertAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InvertAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvertAlpha_MetaData), NewProp_InvertAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_LODDistanceFactor = { "LODDistanceFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, LODDistanceFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODDistanceFactor_MetaData), NewProp_LODDistanceFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_MaxViewDistanceOverride = { "MaxViewDistanceOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, MaxViewDistanceOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxViewDistanceOverride_MetaData), NewProp_MaxViewDistanceOverride_MetaData) };
void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bEnableUpscaling_SetBit(void* Obj)
{
	((UOWLCaptureComponent*)Obj)->bEnableUpscaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bEnableUpscaling = { "bEnableUpscaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bEnableUpscaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUpscaling_MetaData), NewProp_bEnableUpscaling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ScreenPercentage = { "ScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, ScreenPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenPercentage_MetaData), NewProp_ScreenPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_SecondaryScreenPercentage = { "SecondaryScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, SecondaryScreenPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryScreenPercentage_MetaData), NewProp_SecondaryScreenPercentage_MetaData) };
void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bForceCameraCut_SetBit(void* Obj)
{
	((UOWLCaptureComponent*)Obj)->bForceCameraCut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bForceCameraCut = { "bForceCameraCut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bForceCameraCut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceCameraCut_MetaData), NewProp_bForceCameraCut_MetaData) };
void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bPathTracing_SetBit(void* Obj)
{
	((UOWLCaptureComponent*)Obj)->bPathTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bPathTracing = { "bPathTracing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bPathTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPathTracing_MetaData), NewProp_bPathTracing_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_OnTargetResized = { "OnTargetResized", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, OnTargetResized), Z_Construct_UDelegateFunction_OWLCamera_OnCaptureComponentResized__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTargetResized_MetaData), NewProp_OnTargetResized_MetaData) }; // 3944048201
void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bUseRTOverride_SetBit(void* Obj)
{
	((UOWLCaptureComponent*)Obj)->bUseRTOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bUseRTOverride = { "bUseRTOverride", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bUseRTOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRTOverride_MetaData), NewProp_bUseRTOverride_MetaData) };
void Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bHideBufferOption_SetBit(void* Obj)
{
	((UOWLCaptureComponent*)Obj)->bHideBufferOption = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bHideBufferOption = { "bHideBufferOption", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLCaptureComponent), &Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bHideBufferOption_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideBufferOption_MetaData), NewProp_bHideBufferOption_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_AlphaOnlyMaterial = { "AlphaOnlyMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, AlphaOnlyMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaOnlyMaterial_MetaData), NewProp_AlphaOnlyMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_AlphaOnlyMID = { "AlphaOnlyMID", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, AlphaOnlyMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaOnlyMID_MetaData), NewProp_AlphaOnlyMID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_AlphaOnlyMaterialInverted = { "AlphaOnlyMaterialInverted", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, AlphaOnlyMaterialInverted), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaOnlyMaterialInverted_MetaData), NewProp_AlphaOnlyMaterialInverted_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_AlphaOnlyInvertedMID = { "AlphaOnlyInvertedMID", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, AlphaOnlyInvertedMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaOnlyInvertedMID_MetaData), NewProp_AlphaOnlyInvertedMID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InternalRT = { "InternalRT", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, InternalRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalRT_MetaData), NewProp_InternalRT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CameraMesh = { "CameraMesh", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, CameraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMesh_MetaData), NewProp_CameraMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CineCameraMesh = { "CineCameraMesh", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, CineCameraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CineCameraMesh_MetaData), NewProp_CineCameraMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_OverrideRT = { "OverrideRT", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, OverrideRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideRT_MetaData), NewProp_OverrideRT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_OverrideCameraComponent = { "OverrideCameraComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLCaptureComponent, OverrideCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideCameraComponent_MetaData), NewProp_OverrideCameraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLCaptureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_TextureTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_VisualisationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_VisualisationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ResolutionY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowFlagSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowFlagSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_PauseRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_RenderHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_WidgetToRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_UseShowOnlyList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_HiddenActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bRenderSceneViewExtensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ShowOnlyActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InvertAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_LODDistanceFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_MaxViewDistanceOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bEnableUpscaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_ScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_SecondaryScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bForceCameraCut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bPathTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_OnTargetResized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bUseRTOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_bHideBufferOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_AlphaOnlyMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_AlphaOnlyMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_AlphaOnlyMaterialInverted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_AlphaOnlyInvertedMID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_InternalRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CameraMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_CineCameraMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_OverrideRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLCaptureComponent_Statics::NewProp_OverrideCameraComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWLCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLCaptureComponent_Statics::ClassParams = {
	&UOWLCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWLCaptureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLCaptureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWLCaptureComponent()
{
	if (!Z_Registration_Info_UClass_UOWLCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLCaptureComponent.OuterSingleton, Z_Construct_UClass_UOWLCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLCaptureComponent.OuterSingleton;
}
template<> OWLCAMERA_API UClass* StaticClass<UOWLCaptureComponent>()
{
	return UOWLCaptureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLCaptureComponent);
UOWLCaptureComponent::~UOWLCaptureComponent() {}
// End Class UOWLCaptureComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOWLOutputBufferVisualisation_StaticEnum, TEXT("EOWLOutputBufferVisualisation"), &Z_Registration_Info_UEnum_EOWLOutputBufferVisualisation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1842689560U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLCaptureComponent, UOWLCaptureComponent::StaticClass, TEXT("UOWLCaptureComponent"), &Z_Registration_Info_UClass_UOWLCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLCaptureComponent), 1081960667U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_2573924344(TEXT("/Script/OWLCamera"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLCamera_Public_OWLCaptureComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
