// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLMedia/Public/OWLMediaOutputComponent.h"
#include "OWLMedia/Public/OWLFFmpegOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLMediaOutputComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
OWLCAMERA_API UClass* Z_Construct_UClass_UOWLCaptureComponent_NoRegister();
OWLMEDIA_API UClass* Z_Construct_UClass_UOWLMediaOutputComponent();
OWLMEDIA_API UClass* Z_Construct_UClass_UOWLMediaOutputComponent_NoRegister();
OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat();
OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLHttpFormat();
OWLMEDIA_API UEnum* Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType();
OWLMEDIA_API UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature();
OWLMEDIA_API UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLFFmpegSettings();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLHTTPSettings();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLRTMPSettings();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLRTSPSettings();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSaveToFileSettings();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTOptions();
OWLMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTSettings();
UPackage* Z_Construct_UPackage__Script_OWLMedia();
// End Cross Module References

// Begin Delegate FOnMediaOutputStart
struct Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWLMedia, nullptr, "OnMediaOutputStart__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMediaOutputStart_DelegateWrapper(const FMulticastScriptDelegate& OnMediaOutputStart)
{
	OnMediaOutputStart.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnMediaOutputStart

// Begin Delegate FOnMediaOutputStop
struct Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics
{
	struct _Script_OWLMedia_eventOnMediaOutputStop_Parms
	{
		bool bGraceful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bGraceful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGraceful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful_SetBit(void* Obj)
{
	((_Script_OWLMedia_eventOnMediaOutputStop_Parms*)Obj)->bGraceful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful = { "bGraceful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OWLMedia_eventOnMediaOutputStop_Parms), &Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::NewProp_bGraceful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWLMedia, nullptr, "OnMediaOutputStop__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::_Script_OWLMedia_eventOnMediaOutputStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::_Script_OWLMedia_eventOnMediaOutputStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMediaOutputStop_DelegateWrapper(const FMulticastScriptDelegate& OnMediaOutputStop, bool bGraceful)
{
	struct _Script_OWLMedia_eventOnMediaOutputStop_Parms
	{
		bool bGraceful;
	};
	_Script_OWLMedia_eventOnMediaOutputStop_Parms Parms;
	Parms.bGraceful=bGraceful ? true : false;
	OnMediaOutputStop.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMediaOutputStop

// Begin ScriptStruct FOWLSaveToFileSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings;
class UScriptStruct* FOWLSaveToFileSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSaveToFileSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLSaveToFileSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLSaveToFileSettings>()
{
	return FOWLSaveToFileSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationFormat_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The container format in which the media should be saved */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The container format in which the media should be saved" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoOutputDir_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* Destination directory for saving video */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "Destination directory for saving video" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoOutputFile_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* Output file name (without extension) */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "Output file name (without extension)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestinationFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DestinationFormat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VideoOutputDir;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VideoOutputFile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSaveToFileSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat = { "DestinationFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSaveToFileSettings, DestinationFormat), Z_Construct_UEnum_OWLMedia_EOWLDestinationFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationFormat_MetaData), NewProp_DestinationFormat_MetaData) }; // 2375719469
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir = { "VideoOutputDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSaveToFileSettings, VideoOutputDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoOutputDir_MetaData), NewProp_VideoOutputDir_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile = { "VideoOutputFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSaveToFileSettings, VideoOutputFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoOutputFile_MetaData), NewProp_VideoOutputFile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_DestinationFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewProp_VideoOutputFile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
	nullptr,
	&NewStructOps,
	"OWLSaveToFileSettings",
	Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::PropPointers),
	sizeof(FOWLSaveToFileSettings),
	alignof(FOWLSaveToFileSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLSaveToFileSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings.InnerSingleton;
}
// End ScriptStruct FOWLSaveToFileSettings

// Begin ScriptStruct FOWLRTMPSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLRTMPSettings;
class UScriptStruct* FOWLRTMPSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLRTMPSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLRTMPSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLRTMPSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLRTMPSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLRTMPSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLRTMPSettings>()
{
	return FOWLRTMPSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The Stream destination URL */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The Stream destination URL" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamKey_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The Stream destination Key */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The Stream destination Key" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StreamKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLRTMPSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLRTMPSettings, StreamURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamURL_MetaData), NewProp_StreamURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey = { "StreamKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLRTMPSettings, StreamKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamKey_MetaData), NewProp_StreamKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewProp_StreamKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
	nullptr,
	&NewStructOps,
	"OWLRTMPSettings",
	Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::PropPointers),
	sizeof(FOWLRTMPSettings),
	alignof(FOWLRTMPSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLRTMPSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWLRTMPSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLRTMPSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWLRTMPSettings.InnerSingleton;
}
// End ScriptStruct FOWLRTMPSettings

// Begin ScriptStruct FOWLRTSPSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLRTSPSettings;
class UScriptStruct* FOWLRTSPSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLRTSPSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLRTSPSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLRTSPSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLRTSPSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLRTSPSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLRTSPSettings>()
{
	return FOWLRTSPSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The RTSP Server ie rtsp://<domain>:port */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The RTSP Server ie rtsp://<domain>:port" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLRTSPSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLRTSPSettings, StreamURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamURL_MetaData), NewProp_StreamURL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewProp_StreamURL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
	nullptr,
	&NewStructOps,
	"OWLRTSPSettings",
	Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::PropPointers),
	sizeof(FOWLRTSPSettings),
	alignof(FOWLRTSPSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLRTSPSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWLRTSPSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLRTSPSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWLRTSPSettings.InnerSingleton;
}
// End ScriptStruct FOWLRTSPSettings

// Begin ScriptStruct FOWLSRTSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLSRTSettings;
class UScriptStruct* FOWLSRTSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSRTSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLSRTSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSRTSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLSRTSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLSRTSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLSRTSettings>()
{
	return FOWLSRTSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWLSRTSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The Stream destination URL */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The Stream destination URL" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSRTSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSRTSettings, StreamURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamURL_MetaData), NewProp_StreamURL_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSRTSettings, Options), Z_Construct_UScriptStruct_FOWLSRTOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 1996186344
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_StreamURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
	nullptr,
	&NewStructOps,
	"OWLSRTSettings",
	Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::PropPointers),
	sizeof(FOWLSRTSettings),
	alignof(FOWLSRTSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLSRTSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSRTSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLSRTSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWLSRTSettings.InnerSingleton;
}
// End ScriptStruct FOWLSRTSettings

// Begin ScriptStruct FOWLHTTPSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLHTTPSettings;
class UScriptStruct* FOWLHTTPSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLHTTPSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLHTTPSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLHTTPSettings, (UObject*)Z_Construct_UPackage__Script_OWLMedia(), TEXT("OWLHTTPSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWLHTTPSettings.OuterSingleton;
}
template<> OWLMEDIA_API UScriptStruct* StaticStruct<FOWLHTTPSettings>()
{
	return FOWLHTTPSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamURL_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/* The http destination for the post request */" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "The http destination for the post request" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StreamURL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLHTTPSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_StreamURL = { "StreamURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLHTTPSettings, StreamURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamURL_MetaData), NewProp_StreamURL_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLHTTPSettings, Format), Z_Construct_UEnum_OWLMedia_EOWLHttpFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 2195858000
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_StreamURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewProp_Format,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
	nullptr,
	&NewStructOps,
	"OWLHTTPSettings",
	Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::PropPointers),
	sizeof(FOWLHTTPSettings),
	alignof(FOWLHTTPSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLHTTPSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWLHTTPSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLHTTPSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWLHTTPSettings.InnerSingleton;
}
// End ScriptStruct FOWLHTTPSettings

// Begin Class UOWLMediaOutputComponent
void UOWLMediaOutputComponent::StaticRegisterNativesUOWLMediaOutputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLMediaOutputComponent);
UClass* Z_Construct_UClass_UOWLMediaOutputComponent_NoRegister()
{
	return UOWLMediaOutputComponent::StaticClass();
}
struct Z_Construct_UClass_UOWLMediaOutputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OWLMediaOutputComponent.h" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveToFileSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_FILEOUTPUT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTMPSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_RTMP" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RTSPSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_RTSP" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HTTPSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_HTTP" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SRTSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "EditCondition", "OutputType == EOWLMediaOutputType::T_SRT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[] = {
		{ "Category", "Metered License Auth" },
		{ "EditCondition", "bOverrideAPIKey && !bHideAPIOptions" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAPIKey_MetaData[] = {
		{ "Category", "Metered License Auth" },
		{ "EditCondition", "!bHideAPIOptions" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideAPIOptions_MetaData[] = {
		{ "Category", "Metered License Auth" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputRenderTarget_MetaData[] = {
		{ "Category", "Input Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncoderSettings_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTimecodeProviderWhereAvailable_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasStarted_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationMs_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMeteredPricing_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinutesRemaining_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingMinutesRemaining_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStop_MetaData[] = {
		{ "Category", "OWL Media Output" },
		{ "Comment", "// Expose delegates\n" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
		{ "ToolTip", "Expose delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStart_MetaData[] = {
		{ "Category", "OWL Media Output" },
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntermediateTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLMediaOutputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveToFileSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RTMPSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RTSPSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HTTPSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SRTSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_APIKey;
	static void NewProp_bOverrideAPIKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAPIKey;
	static void NewProp_bHideAPIOptions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideAPIOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputRenderTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EncoderSettings;
	static void NewProp_bUseTimecodeProviderWhereAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTimecodeProviderWhereAvailable;
	static void NewProp_HasStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasStarted;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_DurationMs;
	static void NewProp_IsMeteredPricing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMeteredPricing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinutesRemaining;
	static void NewProp_LoadingMinutesRemaining_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadingMinutesRemaining;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStop;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntermediateTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLMediaOutputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, CaptureComponent), Z_Construct_UClass_UOWLCaptureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponent_MetaData), NewProp_CaptureComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, OutputType), Z_Construct_UEnum_OWLMedia_EOWLMediaOutputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // 2979194322
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SaveToFileSettings = { "SaveToFileSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, SaveToFileSettings), Z_Construct_UScriptStruct_FOWLSaveToFileSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveToFileSettings_MetaData), NewProp_SaveToFileSettings_MetaData) }; // 969146785
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTMPSettings = { "RTMPSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, RTMPSettings), Z_Construct_UScriptStruct_FOWLRTMPSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTMPSettings_MetaData), NewProp_RTMPSettings_MetaData) }; // 1607286658
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTSPSettings = { "RTSPSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, RTSPSettings), Z_Construct_UScriptStruct_FOWLRTSPSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RTSPSettings_MetaData), NewProp_RTSPSettings_MetaData) }; // 3575348645
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HTTPSettings = { "HTTPSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, HTTPSettings), Z_Construct_UScriptStruct_FOWLHTTPSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HTTPSettings_MetaData), NewProp_HTTPSettings_MetaData) }; // 3565203435
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SRTSettings = { "SRTSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, SRTSettings), Z_Construct_UScriptStruct_FOWLSRTSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SRTSettings_MetaData), NewProp_SRTSettings_MetaData) }; // 3635308420
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, APIKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_APIKey_MetaData), NewProp_APIKey_MetaData) };
void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey_SetBit(void* Obj)
{
	((UOWLMediaOutputComponent*)Obj)->bOverrideAPIKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey = { "bOverrideAPIKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAPIKey_MetaData), NewProp_bOverrideAPIKey_MetaData) };
void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions_SetBit(void* Obj)
{
	((UOWLMediaOutputComponent*)Obj)->bHideAPIOptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions = { "bHideAPIOptions", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideAPIOptions_MetaData), NewProp_bHideAPIOptions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_InputRenderTarget = { "InputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, InputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputRenderTarget_MetaData), NewProp_InputRenderTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_EncoderSettings = { "EncoderSettings", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, EncoderSettings), Z_Construct_UScriptStruct_FOWLFFmpegSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncoderSettings_MetaData), NewProp_EncoderSettings_MetaData) }; // 1716476972
void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable_SetBit(void* Obj)
{
	((UOWLMediaOutputComponent*)Obj)->bUseTimecodeProviderWhereAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable = { "bUseTimecodeProviderWhereAvailable", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTimecodeProviderWhereAvailable_MetaData), NewProp_bUseTimecodeProviderWhereAvailable_MetaData) };
void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted_SetBit(void* Obj)
{
	((UOWLMediaOutputComponent*)Obj)->HasStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted = { "HasStarted", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasStarted_MetaData), NewProp_HasStarted_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_DurationMs = { "DurationMs", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, DurationMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationMs_MetaData), NewProp_DurationMs_MetaData) };
void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing_SetBit(void* Obj)
{
	((UOWLMediaOutputComponent*)Obj)->IsMeteredPricing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing = { "IsMeteredPricing", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMeteredPricing_MetaData), NewProp_IsMeteredPricing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_MinutesRemaining = { "MinutesRemaining", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, MinutesRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinutesRemaining_MetaData), NewProp_MinutesRemaining_MetaData) };
void Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining_SetBit(void* Obj)
{
	((UOWLMediaOutputComponent*)Obj)->LoadingMinutesRemaining = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining = { "LoadingMinutesRemaining", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWLMediaOutputComponent), &Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingMinutesRemaining_MetaData), NewProp_LoadingMinutesRemaining_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStop = { "OnStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, OnStop), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStop__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStop_MetaData), NewProp_OnStop_MetaData) }; // 2779719039
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStart = { "OnStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, OnStart), Z_Construct_UDelegateFunction_OWLMedia_OnMediaOutputStart__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStart_MetaData), NewProp_OnStart_MetaData) }; // 451854075
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IntermediateTarget = { "IntermediateTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLMediaOutputComponent, IntermediateTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntermediateTarget_MetaData), NewProp_IntermediateTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLMediaOutputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_CaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SaveToFileSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTMPSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_RTSPSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HTTPSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_SRTSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_APIKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bOverrideAPIKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bHideAPIOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_InputRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_EncoderSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_bUseTimecodeProviderWhereAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_HasStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_DurationMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IsMeteredPricing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_MinutesRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_LoadingMinutesRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_OnStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLMediaOutputComponent_Statics::NewProp_IntermediateTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWLMediaOutputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLMediaOutputComponent_Statics::ClassParams = {
	&UOWLMediaOutputComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOWLMediaOutputComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLMediaOutputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLMediaOutputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWLMediaOutputComponent()
{
	if (!Z_Registration_Info_UClass_UOWLMediaOutputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLMediaOutputComponent.OuterSingleton, Z_Construct_UClass_UOWLMediaOutputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLMediaOutputComponent.OuterSingleton;
}
template<> OWLMEDIA_API UClass* StaticClass<UOWLMediaOutputComponent>()
{
	return UOWLMediaOutputComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLMediaOutputComponent);
// End Class UOWLMediaOutputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWLSaveToFileSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLSaveToFileSettings_Statics::NewStructOps, TEXT("OWLSaveToFileSettings"), &Z_Registration_Info_UScriptStruct_OWLSaveToFileSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSaveToFileSettings), 969146785U) },
		{ FOWLRTMPSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLRTMPSettings_Statics::NewStructOps, TEXT("OWLRTMPSettings"), &Z_Registration_Info_UScriptStruct_OWLRTMPSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLRTMPSettings), 1607286658U) },
		{ FOWLRTSPSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLRTSPSettings_Statics::NewStructOps, TEXT("OWLRTSPSettings"), &Z_Registration_Info_UScriptStruct_OWLRTSPSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLRTSPSettings), 3575348645U) },
		{ FOWLSRTSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLSRTSettings_Statics::NewStructOps, TEXT("OWLSRTSettings"), &Z_Registration_Info_UScriptStruct_OWLSRTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSRTSettings), 3635308420U) },
		{ FOWLHTTPSettings::StaticStruct, Z_Construct_UScriptStruct_FOWLHTTPSettings_Statics::NewStructOps, TEXT("OWLHTTPSettings"), &Z_Registration_Info_UScriptStruct_OWLHTTPSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLHTTPSettings), 3565203435U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLMediaOutputComponent, UOWLMediaOutputComponent::StaticClass, TEXT("UOWLMediaOutputComponent"), &Z_Registration_Info_UClass_UOWLMediaOutputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLMediaOutputComponent), 2432291633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_4272020722(TEXT("/Script/OWLMedia"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutputComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
