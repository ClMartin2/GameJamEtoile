// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLNDI/Public/OWLNDISenderManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLNDISenderManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
OWLNDI_API UClass* Z_Construct_UClass_AOWLNDISenderManager();
OWLNDI_API UClass* Z_Construct_UClass_AOWLNDISenderManager_NoRegister();
OWLNDI_API UEnum* Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat();
OWLNDI_API UScriptStruct* Z_Construct_UScriptStruct_FOWLNDISenderInterface();
UPackage* Z_Construct_UPackage__Script_OWLNDI();
// End Cross Module References

// Begin ScriptStruct FOWLNDISenderInterface
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLNDISenderInterface;
class UScriptStruct* FOWLNDISenderInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLNDISenderInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLNDISenderInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLNDISenderInterface, (UObject*)Z_Construct_UPackage__Script_OWLNDI(), TEXT("OWLNDISenderInterface"));
	}
	return Z_Registration_Info_UScriptStruct_OWLNDISenderInterface.OuterSingleton;
}
template<> OWLNDI_API UScriptStruct* StaticStruct<FOWLNDISenderInterface>()
{
	return FOWLNDISenderInterface::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureAudio_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "Comment", "/* NDI sender name that is used in editor targets */" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
		{ "ToolTip", "NDI sender name that is used in editor targets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandaloneName_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "Comment", "/* NDI sender name that is used in game (standalone/packaged) targets  */" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
		{ "ToolTip", "NDI sender name that is used in game (standalone/packaged) targets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoConversionFormat_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRenderTarget_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[] = {
		{ "Category", "OWLNDISender" },
		{ "Comment", "/* Optional submix to narrow down audio you send to the NDI stream */" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
		{ "ToolTip", "Optional submix to narrow down audio you send to the NDI stream" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Active_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
	static void NewProp_CaptureAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CaptureAudio;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StandaloneName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VideoConversionFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VideoConversionFormat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceRenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Submix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLNDISenderInterface>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Active_SetBit(void* Obj)
{
	((FOWLNDISenderInterface*)Obj)->Active = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLNDISenderInterface), &Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Active_MetaData), NewProp_Active_MetaData) };
void Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_CaptureAudio_SetBit(void* Obj)
{
	((FOWLNDISenderInterface*)Obj)->CaptureAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_CaptureAudio = { "CaptureAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLNDISenderInterface), &Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_CaptureAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureAudio_MetaData), NewProp_CaptureAudio_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDISenderInterface, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_StandaloneName = { "StandaloneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDISenderInterface, StandaloneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandaloneName_MetaData), NewProp_StandaloneName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_VideoConversionFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_VideoConversionFormat = { "VideoConversionFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDISenderInterface, VideoConversionFormat), Z_Construct_UEnum_OWLNDI_ENDIVideoConversionFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoConversionFormat_MetaData), NewProp_VideoConversionFormat_MetaData) }; // 860231916
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_SourceRenderTarget = { "SourceRenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDISenderInterface, SourceRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRenderTarget_MetaData), NewProp_SourceRenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDISenderInterface, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Submix_MetaData), NewProp_Submix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDISenderInterface, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Active,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_CaptureAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_StandaloneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_VideoConversionFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_VideoConversionFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_SourceRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_Submix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
	nullptr,
	&NewStructOps,
	"OWLNDISenderInterface",
	Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::PropPointers),
	sizeof(FOWLNDISenderInterface),
	alignof(FOWLNDISenderInterface),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLNDISenderInterface()
{
	if (!Z_Registration_Info_UScriptStruct_OWLNDISenderInterface.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLNDISenderInterface.InnerSingleton, Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWLNDISenderInterface.InnerSingleton;
}
// End ScriptStruct FOWLNDISenderInterface

// Begin Class AOWLNDISenderManager
void AOWLNDISenderManager::StaticRegisterNativesAOWLNDISenderManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLNDISenderManager);
UClass* Z_Construct_UClass_AOWLNDISenderManager_NoRegister()
{
	return AOWLNDISenderManager::StaticClass();
}
struct Z_Construct_UClass_AOWLNDISenderManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "OWL NDI Sender Manager" },
		{ "IncludePath", "OWLNDISenderManager.h" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDISenders_MetaData[] = {
		{ "Category", "Off World Live NDI Sender Settings" },
		{ "ModuleRelativePath", "Public/OWLNDISenderManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NDISenders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NDISenders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLNDISenderManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLNDISenderManager_Statics::NewProp_NDISenders_Inner = { "NDISenders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOWLNDISenderInterface, METADATA_PARAMS(0, nullptr) }; // 19403814
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLNDISenderManager_Statics::NewProp_NDISenders = { "NDISenders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLNDISenderManager, NDISenders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDISenders_MetaData), NewProp_NDISenders_MetaData) }; // 19403814
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLNDISenderManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLNDISenderManager_Statics::NewProp_NDISenders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLNDISenderManager_Statics::NewProp_NDISenders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDISenderManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWLNDISenderManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDISenderManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLNDISenderManager_Statics::ClassParams = {
	&AOWLNDISenderManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOWLNDISenderManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDISenderManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDISenderManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLNDISenderManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWLNDISenderManager()
{
	if (!Z_Registration_Info_UClass_AOWLNDISenderManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLNDISenderManager.OuterSingleton, Z_Construct_UClass_AOWLNDISenderManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWLNDISenderManager.OuterSingleton;
}
template<> OWLNDI_API UClass* StaticClass<AOWLNDISenderManager>()
{
	return AOWLNDISenderManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLNDISenderManager);
AOWLNDISenderManager::~AOWLNDISenderManager() {}
// End Class AOWLNDISenderManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWLNDISenderInterface::StaticStruct, Z_Construct_UScriptStruct_FOWLNDISenderInterface_Statics::NewStructOps, TEXT("OWLNDISenderInterface"), &Z_Registration_Info_UScriptStruct_OWLNDISenderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLNDISenderInterface), 19403814U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWLNDISenderManager, AOWLNDISenderManager::StaticClass, TEXT("AOWLNDISenderManager"), &Z_Registration_Info_UClass_AOWLNDISenderManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLNDISenderManager), 2826642639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_3875854007(TEXT("/Script/OWLNDI"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISenderManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
