// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLSpout/Public/OWLSpoutSenderManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLSpoutSenderManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
OWLSPOUT_API UClass* Z_Construct_UClass_AOWLSpoutSenderManager();
OWLSPOUT_API UClass* Z_Construct_UClass_AOWLSpoutSenderManager_NoRegister();
OWLSPOUT_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutSenderInterface();
UPackage* Z_Construct_UPackage__Script_OWLSpout();
// End Cross Module References

// Begin ScriptStruct FOWLSpoutSenderInterface
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface;
class UScriptStruct* FOWLSpoutSenderInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface, (UObject*)Z_Construct_UPackage__Script_OWLSpout(), TEXT("OWLSpoutSenderInterface"));
	}
	return Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.OuterSingleton;
}
template<> OWLSPOUT_API UScriptStruct* StaticStruct<FOWLSpoutSenderInterface>()
{
	return FOWLSpoutSenderInterface::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "Comment", "/* Spout sender name that is used in editor targets */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Spout sender name that is used in editor targets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandaloneName_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "Comment", "/* Spout sender name that is used in game (standalone/packaged) targets  */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Spout sender name that is used in game (standalone/packaged) targets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFixGamma_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "Comment", "/* Align spout output with colours as perceived in Unreal viewport -- untick this if you are sending raw data */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Align spout output with colours as perceived in Unreal viewport -- untick this if you are sending raw data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRenderTarget_MetaData[] = {
		{ "Category", "OWLSpoutSender" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Active_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StandaloneName;
	static void NewProp_bFixGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixGamma;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceRenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSpoutSenderInterface>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_SetBit(void* Obj)
{
	((FOWLSpoutSenderInterface*)Obj)->Active = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLSpoutSenderInterface), &Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Active_MetaData), NewProp_Active_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSpoutSenderInterface, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName = { "StandaloneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSpoutSenderInterface, StandaloneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandaloneName_MetaData), NewProp_StandaloneName_MetaData) };
void Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma_SetBit(void* Obj)
{
	((FOWLSpoutSenderInterface*)Obj)->bFixGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma = { "bFixGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLSpoutSenderInterface), &Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFixGamma_MetaData), NewProp_bFixGamma_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_SourceRenderTarget = { "SourceRenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSpoutSenderInterface, SourceRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRenderTarget_MetaData), NewProp_SourceRenderTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Active,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_StandaloneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_bFixGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewProp_SourceRenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLSpout,
	nullptr,
	&NewStructOps,
	"OWLSpoutSenderInterface",
	Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::PropPointers),
	sizeof(FOWLSpoutSenderInterface),
	alignof(FOWLSpoutSenderInterface),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutSenderInterface()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.InnerSingleton, Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface.InnerSingleton;
}
// End ScriptStruct FOWLSpoutSenderInterface

// Begin Class AOWLSpoutSenderManager Function ActivateSender
struct Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics
{
	struct OWLSpoutSenderManager_eventActivateSender_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Spout Sender Manager" },
		{ "Comment", "/* Activates a sender by the spout sender name. Returns true if found. */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Activates a sender by the spout sender name. Returns true if found." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutSenderManager_eventActivateSender_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLSpoutSenderManager_eventActivateSender_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLSpoutSenderManager_eventActivateSender_Parms), &Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLSpoutSenderManager, nullptr, "ActivateSender", nullptr, nullptr, Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::OWLSpoutSenderManager_eventActivateSender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::OWLSpoutSenderManager_eventActivateSender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLSpoutSenderManager::execActivateSender)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ActivateSender(Z_Param_Name);
	P_NATIVE_END;
}
// End Class AOWLSpoutSenderManager Function ActivateSender

// Begin Class AOWLSpoutSenderManager Function AddSender
struct Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics
{
	struct OWLSpoutSenderManager_eventAddSender_Parms
	{
		FString Name;
		UTextureRenderTarget2D* TextureTarget;
		FString StandaloneName;
		bool bActive;
		bool bFixGamma;
		FOWLSpoutSenderInterface ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Spout Sender Manager" },
		{ "Comment", "/* Utility function to add a sender to the list - returns the struct created which has been added to the SpoutSenders array */" },
		{ "CPP_Default_bActive", "true" },
		{ "CPP_Default_bFixGamma", "true" },
		{ "CPP_Default_StandaloneName", "" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Utility function to add a sender to the list - returns the struct created which has been added to the SpoutSenders array" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StandaloneName;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static void NewProp_bFixGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixGamma;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutSenderManager_eventAddSender_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutSenderManager_eventAddSender_Parms, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_StandaloneName = { "StandaloneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutSenderManager_eventAddSender_Parms, StandaloneName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((OWLSpoutSenderManager_eventAddSender_Parms*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLSpoutSenderManager_eventAddSender_Parms), &Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bFixGamma_SetBit(void* Obj)
{
	((OWLSpoutSenderManager_eventAddSender_Parms*)Obj)->bFixGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bFixGamma = { "bFixGamma", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLSpoutSenderManager_eventAddSender_Parms), &Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bFixGamma_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutSenderManager_eventAddSender_Parms, ReturnValue), Z_Construct_UScriptStruct_FOWLSpoutSenderInterface, METADATA_PARAMS(0, nullptr) }; // 3545467096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_TextureTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_StandaloneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_bFixGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLSpoutSenderManager, nullptr, "AddSender", nullptr, nullptr, Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::OWLSpoutSenderManager_eventAddSender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::OWLSpoutSenderManager_eventAddSender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLSpoutSenderManager::execAddSender)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureTarget);
	P_GET_PROPERTY(FStrProperty,Z_Param_StandaloneName);
	P_GET_UBOOL(Z_Param_bActive);
	P_GET_UBOOL(Z_Param_bFixGamma);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOWLSpoutSenderInterface*)Z_Param__Result=P_THIS->AddSender(Z_Param_Name,Z_Param_TextureTarget,Z_Param_StandaloneName,Z_Param_bActive,Z_Param_bFixGamma);
	P_NATIVE_END;
}
// End Class AOWLSpoutSenderManager Function AddSender

// Begin Class AOWLSpoutSenderManager Function DeactivateSender
struct Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics
{
	struct OWLSpoutSenderManager_eventDeactivateSender_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Spout Sender Manager" },
		{ "Comment", "/* Deactivates a sender by the spout sender name. Returns true if found. */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Deactivates a sender by the spout sender name. Returns true if found." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutSenderManager_eventDeactivateSender_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLSpoutSenderManager_eventDeactivateSender_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLSpoutSenderManager_eventDeactivateSender_Parms), &Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLSpoutSenderManager, nullptr, "DeactivateSender", nullptr, nullptr, Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::OWLSpoutSenderManager_eventDeactivateSender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::OWLSpoutSenderManager_eventDeactivateSender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLSpoutSenderManager::execDeactivateSender)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeactivateSender(Z_Param_Name);
	P_NATIVE_END;
}
// End Class AOWLSpoutSenderManager Function DeactivateSender

// Begin Class AOWLSpoutSenderManager Function RemoveSenderByName
struct Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics
{
	struct OWLSpoutSenderManager_eventRemoveSenderByName_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWL Spout Sender Manager" },
		{ "Comment", "/* Utility function for removing a sender via blueprints with matching name. Returns true if matched */" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ToolTip", "Utility function for removing a sender via blueprints with matching name. Returns true if matched" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutSenderManager_eventRemoveSenderByName_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLSpoutSenderManager_eventRemoveSenderByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLSpoutSenderManager_eventRemoveSenderByName_Parms), &Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLSpoutSenderManager, nullptr, "RemoveSenderByName", nullptr, nullptr, Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::OWLSpoutSenderManager_eventRemoveSenderByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::OWLSpoutSenderManager_eventRemoveSenderByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLSpoutSenderManager::execRemoveSenderByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveSenderByName(Z_Param_Name);
	P_NATIVE_END;
}
// End Class AOWLSpoutSenderManager Function RemoveSenderByName

// Begin Class AOWLSpoutSenderManager
void AOWLSpoutSenderManager::StaticRegisterNativesAOWLSpoutSenderManager()
{
	UClass* Class = AOWLSpoutSenderManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateSender", &AOWLSpoutSenderManager::execActivateSender },
		{ "AddSender", &AOWLSpoutSenderManager::execAddSender },
		{ "DeactivateSender", &AOWLSpoutSenderManager::execDeactivateSender },
		{ "RemoveSenderByName", &AOWLSpoutSenderManager::execRemoveSenderByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLSpoutSenderManager);
UClass* Z_Construct_UClass_AOWLSpoutSenderManager_NoRegister()
{
	return AOWLSpoutSenderManager::StaticClass();
}
struct Z_Construct_UClass_AOWLSpoutSenderManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "OWL Spout Sender Manager" },
		{ "IncludePath", "OWLSpoutSenderManager.h" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpoutSenders_MetaData[] = {
		{ "Category", "Off World Live Spout Sender Settings" },
		{ "ModuleRelativePath", "Public/OWLSpoutSenderManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpoutSenders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpoutSenders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLSpoutSenderManager_ActivateSender, "ActivateSender" }, // 255910642
		{ &Z_Construct_UFunction_AOWLSpoutSenderManager_AddSender, "AddSender" }, // 1771597826
		{ &Z_Construct_UFunction_AOWLSpoutSenderManager_DeactivateSender, "DeactivateSender" }, // 1104268852
		{ &Z_Construct_UFunction_AOWLSpoutSenderManager_RemoveSenderByName, "RemoveSenderByName" }, // 3509852290
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLSpoutSenderManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_Inner = { "SpoutSenders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOWLSpoutSenderInterface, METADATA_PARAMS(0, nullptr) }; // 3545467096
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders = { "SpoutSenders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLSpoutSenderManager, SpoutSenders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpoutSenders_MetaData), NewProp_SpoutSenders_MetaData) }; // 3545467096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLSpoutSenderManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutSenderManager_Statics::NewProp_SpoutSenders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWLSpoutSenderManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLSpout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLSpoutSenderManager_Statics::ClassParams = {
	&AOWLSpoutSenderManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWLSpoutSenderManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutSenderManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLSpoutSenderManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWLSpoutSenderManager()
{
	if (!Z_Registration_Info_UClass_AOWLSpoutSenderManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLSpoutSenderManager.OuterSingleton, Z_Construct_UClass_AOWLSpoutSenderManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWLSpoutSenderManager.OuterSingleton;
}
template<> OWLSPOUT_API UClass* StaticClass<AOWLSpoutSenderManager>()
{
	return AOWLSpoutSenderManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLSpoutSenderManager);
AOWLSpoutSenderManager::~AOWLSpoutSenderManager() {}
// End Class AOWLSpoutSenderManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWLSpoutSenderInterface::StaticStruct, Z_Construct_UScriptStruct_FOWLSpoutSenderInterface_Statics::NewStructOps, TEXT("OWLSpoutSenderInterface"), &Z_Registration_Info_UScriptStruct_OWLSpoutSenderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSpoutSenderInterface), 3545467096U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWLSpoutSenderManager, AOWLSpoutSenderManager::StaticClass, TEXT("AOWLSpoutSenderManager"), &Z_Registration_Info_UClass_AOWLSpoutSenderManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLSpoutSenderManager), 1601485621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_2508238413(TEXT("/Script/OWLSpout"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutSenderManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
