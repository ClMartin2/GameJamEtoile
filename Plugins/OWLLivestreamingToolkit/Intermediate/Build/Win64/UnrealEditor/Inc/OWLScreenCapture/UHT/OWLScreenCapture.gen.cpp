// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLScreenCapture/Public/OWLScreenCapture.h"
#include "OWLScreenCapture/Public/OWLScreenCapturerOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLScreenCapture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
OWLSCREENCAPTURE_API UClass* Z_Construct_UClass_AOWLScreenCapture();
OWLSCREENCAPTURE_API UClass* Z_Construct_UClass_AOWLScreenCapture_NoRegister();
OWLSCREENCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FOWLScreenCaptureOptions();
UPackage* Z_Construct_UPackage__Script_OWLScreenCapture();
// End Cross Module References

// Begin Class AOWLScreenCapture Function GetAvailableMonitorNames
struct Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics
{
	struct OWLScreenCapture_eventGetAvailableMonitorNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWLScreenCapture" },
		{ "Comment", "/* Get a list of monitor names in order to be able to set monitor later */" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
		{ "ToolTip", "Get a list of monitor names in order to be able to set monitor later" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLScreenCapture_eventGetAvailableMonitorNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLScreenCapture, nullptr, "GetAvailableMonitorNames", nullptr, nullptr, Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::OWLScreenCapture_eventGetAvailableMonitorNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::OWLScreenCapture_eventGetAvailableMonitorNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLScreenCapture::execGetAvailableMonitorNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAvailableMonitorNames();
	P_NATIVE_END;
}
// End Class AOWLScreenCapture Function GetAvailableMonitorNames

// Begin Class AOWLScreenCapture Function GetAvailableWindowNames
struct Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics
{
	struct OWLScreenCapture_eventGetAvailableWindowNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWLScreenCapture" },
		{ "Comment", "/* Get a list of window names in order to be able to set monitor later */" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
		{ "ToolTip", "Get a list of window names in order to be able to set monitor later" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLScreenCapture_eventGetAvailableWindowNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLScreenCapture, nullptr, "GetAvailableWindowNames", nullptr, nullptr, Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::OWLScreenCapture_eventGetAvailableWindowNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::OWLScreenCapture_eventGetAvailableWindowNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLScreenCapture::execGetAvailableWindowNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAvailableWindowNames();
	P_NATIVE_END;
}
// End Class AOWLScreenCapture Function GetAvailableWindowNames

// Begin Class AOWLScreenCapture Function SetMonitor
struct Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics
{
	struct OWLScreenCapture_eventSetMonitor_Parms
	{
		FString Monitor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWLScreenCapture" },
		{ "Comment", "/* Sets the monitor. Returns false when monitor not available */" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
		{ "ToolTip", "Sets the monitor. Returns false when monitor not available" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Monitor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::NewProp_Monitor = { "Monitor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLScreenCapture_eventSetMonitor_Parms, Monitor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLScreenCapture_eventSetMonitor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLScreenCapture_eventSetMonitor_Parms), &Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::NewProp_Monitor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLScreenCapture, nullptr, "SetMonitor", nullptr, nullptr, Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::OWLScreenCapture_eventSetMonitor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::OWLScreenCapture_eventSetMonitor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLScreenCapture_SetMonitor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLScreenCapture_SetMonitor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLScreenCapture::execSetMonitor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Monitor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetMonitor(Z_Param_Monitor);
	P_NATIVE_END;
}
// End Class AOWLScreenCapture Function SetMonitor

// Begin Class AOWLScreenCapture Function SetWindow
struct Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics
{
	struct OWLScreenCapture_eventSetWindow_Parms
	{
		FString Window;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWLScreenCapture" },
		{ "Comment", "/* Sets the window. Returns false when window of that name not available */" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
		{ "ToolTip", "Sets the window. Returns false when window of that name not available" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Window;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::NewProp_Window = { "Window", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLScreenCapture_eventSetWindow_Parms, Window), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLScreenCapture_eventSetWindow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLScreenCapture_eventSetWindow_Parms), &Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::NewProp_Window,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLScreenCapture, nullptr, "SetWindow", nullptr, nullptr, Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::OWLScreenCapture_eventSetWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::OWLScreenCapture_eventSetWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLScreenCapture_SetWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLScreenCapture_SetWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLScreenCapture::execSetWindow)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Window);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetWindow(Z_Param_Window);
	P_NATIVE_END;
}
// End Class AOWLScreenCapture Function SetWindow

// Begin Class AOWLScreenCapture
void AOWLScreenCapture::StaticRegisterNativesAOWLScreenCapture()
{
	UClass* Class = AOWLScreenCapture::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAvailableMonitorNames", &AOWLScreenCapture::execGetAvailableMonitorNames },
		{ "GetAvailableWindowNames", &AOWLScreenCapture::execGetAvailableWindowNames },
		{ "SetMonitor", &AOWLScreenCapture::execSetMonitor },
		{ "SetWindow", &AOWLScreenCapture::execSetWindow },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLScreenCapture);
UClass* Z_Construct_UClass_AOWLScreenCapture_NoRegister()
{
	return AOWLScreenCapture::StaticClass();
}
struct Z_Construct_UClass_AOWLScreenCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "OWL Screen Capture" },
		{ "IncludePath", "OWLScreenCapture.h" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "OWLScreenCapture" },
		{ "Comment", "// TODO: we should probably add an option for disabling the annoying yellow boarder\n" },
		{ "DisplayName", "Capture Settings" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
		{ "ToolTip", "TODO: we should probably add an option for disabling the annoying yellow boarder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureId_MetaData[] = {
		{ "Category", "OWL Internal" },
		{ "ModuleRelativePath", "Public/OWLScreenCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLScreenCapture_GetAvailableMonitorNames, "GetAvailableMonitorNames" }, // 4293911962
		{ &Z_Construct_UFunction_AOWLScreenCapture_GetAvailableWindowNames, "GetAvailableWindowNames" }, // 2375988586
		{ &Z_Construct_UFunction_AOWLScreenCapture_SetMonitor, "SetMonitor" }, // 282956697
		{ &Z_Construct_UFunction_AOWLScreenCapture_SetWindow, "SetWindow" }, // 237162960
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLScreenCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLScreenCapture, Options), Z_Construct_UScriptStruct_FOWLScreenCaptureOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 382826323
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_CaptureId = { "CaptureId", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLScreenCapture, CaptureId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureId_MetaData), NewProp_CaptureId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLScreenCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLScreenCapture_Statics::NewProp_CaptureId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWLScreenCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLScreenCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLScreenCapture_Statics::ClassParams = {
	&AOWLScreenCapture::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWLScreenCapture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLScreenCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLScreenCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWLScreenCapture()
{
	if (!Z_Registration_Info_UClass_AOWLScreenCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLScreenCapture.OuterSingleton, Z_Construct_UClass_AOWLScreenCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWLScreenCapture.OuterSingleton;
}
template<> OWLSCREENCAPTURE_API UClass* StaticClass<AOWLScreenCapture>()
{
	return AOWLScreenCapture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLScreenCapture);
// End Class AOWLScreenCapture

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWLScreenCapture, AOWLScreenCapture::StaticClass, TEXT("AOWLScreenCapture"), &Z_Registration_Info_UClass_AOWLScreenCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLScreenCapture), 3796053443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_2965261446(TEXT("/Script/OWLScreenCapture"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLScreenCapture_Public_OWLScreenCapture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
