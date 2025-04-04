// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLSpout/Public/OWLSpoutReceiverManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLSpoutReceiverManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
OWLSPOUT_API UClass* Z_Construct_UClass_AOWLSpoutReceiverManager();
OWLSPOUT_API UClass* Z_Construct_UClass_AOWLSpoutReceiverManager_NoRegister();
OWLSPOUT_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface();
UPackage* Z_Construct_UPackage__Script_OWLSpout();
// End Cross Module References

// Begin ScriptStruct FOWLSpoutReceiverInterface
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface;
class UScriptStruct* FOWLSpoutReceiverInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface, (UObject*)Z_Construct_UPackage__Script_OWLSpout(), TEXT("OWLSpoutReceiverInterface"));
	}
	return Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface.OuterSingleton;
}
template<> OWLSPOUT_API UScriptStruct* StaticStruct<FOWLSpoutReceiverInterface>()
{
	return FOWLSpoutReceiverInterface::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "EditCondition", "!bUnderExternalControl" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseFirstAvailableSender_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "Comment", "/* Name of the sender we are receiving from */" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
		{ "ToolTip", "Name of the sender we are receiving from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "EditCondition", "!bUnderExternalControl" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFixGamma_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "Comment", "/* Unreal Engine internally manages files in linear color space, but then applies\n\x09""a linear to sRGB conversion to all editor and game instances. To make your input\n\x09texture look the same, tick this box and we convert sRGB input to Linear, so that\n\x09Unreal can convert it back */" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
		{ "ToolTip", "Unreal Engine internally manages files in linear color space, but then applies\n      a linear to sRGB conversion to all editor and game instances. To make your input\n      texture look the same, tick this box and we convert sRGB input to Linear, so that\n      Unreal can convert it back" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpgrade8bitTo16_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "Comment", "/* When the sending Spout texture is 8Bit, applying the gamma fix results in a lossy color\n\x09""conversion that can lose color detail. Tick this box to force the receiver to copy to a 16bit texture */" },
		{ "EditCondition", "bFixGamma" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
		{ "ToolTip", "When the sending Spout texture is 8Bit, applying the gamma fix results in a lossy color\n      conversion that can lose color detail. Tick this box to force the receiver to copy to a 16bit texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnderExternalControl_MetaData[] = {
		{ "Category", "OWLSpoutReceiver" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Active_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
	static void NewProp_UseFirstAvailableSender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFirstAvailableSender;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static void NewProp_bFixGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixGamma;
	static void NewProp_bUpgrade8bitTo16_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpgrade8bitTo16;
	static void NewProp_bUnderExternalControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnderExternalControl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLSpoutReceiverInterface>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active_SetBit(void* Obj)
{
	((FOWLSpoutReceiverInterface*)Obj)->Active = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLSpoutReceiverInterface), &Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Active_MetaData), NewProp_Active_MetaData) };
void Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender_SetBit(void* Obj)
{
	((FOWLSpoutReceiverInterface*)Obj)->UseFirstAvailableSender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender = { "UseFirstAvailableSender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLSpoutReceiverInterface), &Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseFirstAvailableSender_MetaData), NewProp_UseFirstAvailableSender_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSpoutReceiverInterface, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLSpoutReceiverInterface, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
void Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bFixGamma_SetBit(void* Obj)
{
	((FOWLSpoutReceiverInterface*)Obj)->bFixGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bFixGamma = { "bFixGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLSpoutReceiverInterface), &Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bFixGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFixGamma_MetaData), NewProp_bFixGamma_MetaData) };
void Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUpgrade8bitTo16_SetBit(void* Obj)
{
	((FOWLSpoutReceiverInterface*)Obj)->bUpgrade8bitTo16 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUpgrade8bitTo16 = { "bUpgrade8bitTo16", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLSpoutReceiverInterface), &Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUpgrade8bitTo16_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpgrade8bitTo16_MetaData), NewProp_bUpgrade8bitTo16_MetaData) };
void Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUnderExternalControl_SetBit(void* Obj)
{
	((FOWLSpoutReceiverInterface*)Obj)->bUnderExternalControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUnderExternalControl = { "bUnderExternalControl", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLSpoutReceiverInterface), &Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUnderExternalControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnderExternalControl_MetaData), NewProp_bUnderExternalControl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Active,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_UseFirstAvailableSender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bFixGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUpgrade8bitTo16,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewProp_bUnderExternalControl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLSpout,
	nullptr,
	&NewStructOps,
	"OWLSpoutReceiverInterface",
	Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::PropPointers),
	sizeof(FOWLSpoutReceiverInterface),
	alignof(FOWLSpoutReceiverInterface),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface()
{
	if (!Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface.InnerSingleton, Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface.InnerSingleton;
}
// End ScriptStruct FOWLSpoutReceiverInterface

// Begin Class AOWLSpoutReceiverManager Function GetAvailableSenderNames
struct Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics
{
	struct OWLSpoutReceiverManager_eventGetAvailableSenderNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Off World Live Spout Receiver" },
		{ "Comment", "/** Returns a list of spout sender names that are available at this moment in time. */" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
		{ "ToolTip", "Returns a list of spout sender names that are available at this moment in time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLSpoutReceiverManager_eventGetAvailableSenderNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLSpoutReceiverManager, nullptr, "GetAvailableSenderNames", nullptr, nullptr, Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::OWLSpoutReceiverManager_eventGetAvailableSenderNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::OWLSpoutReceiverManager_eventGetAvailableSenderNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLSpoutReceiverManager::execGetAvailableSenderNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAvailableSenderNames();
	P_NATIVE_END;
}
// End Class AOWLSpoutReceiverManager Function GetAvailableSenderNames

// Begin Class AOWLSpoutReceiverManager
void AOWLSpoutReceiverManager::StaticRegisterNativesAOWLSpoutReceiverManager()
{
	UClass* Class = AOWLSpoutReceiverManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAvailableSenderNames", &AOWLSpoutReceiverManager::execGetAvailableSenderNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLSpoutReceiverManager);
UClass* Z_Construct_UClass_AOWLSpoutReceiverManager_NoRegister()
{
	return AOWLSpoutReceiverManager::StaticClass();
}
struct Z_Construct_UClass_AOWLSpoutReceiverManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "OWL Spout Receiver Manager" },
		{ "IncludePath", "OWLSpoutReceiverManager.h" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpoutReceivers_MetaData[] = {
		{ "Category", "Off World Live Spout Receiver Settings" },
		{ "ModuleRelativePath", "Public/OWLSpoutReceiverManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpoutReceivers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpoutReceivers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLSpoutReceiverManager_GetAvailableSenderNames, "GetAvailableSenderNames" }, // 2393160303
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLSpoutReceiverManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers_Inner = { "SpoutReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface, METADATA_PARAMS(0, nullptr) }; // 4057756470
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers = { "SpoutReceivers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLSpoutReceiverManager, SpoutReceivers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpoutReceivers_MetaData), NewProp_SpoutReceivers_MetaData) }; // 4057756470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::NewProp_SpoutReceivers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLSpout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::ClassParams = {
	&AOWLSpoutReceiverManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWLSpoutReceiverManager()
{
	if (!Z_Registration_Info_UClass_AOWLSpoutReceiverManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLSpoutReceiverManager.OuterSingleton, Z_Construct_UClass_AOWLSpoutReceiverManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWLSpoutReceiverManager.OuterSingleton;
}
template<> OWLSPOUT_API UClass* StaticClass<AOWLSpoutReceiverManager>()
{
	return AOWLSpoutReceiverManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLSpoutReceiverManager);
// End Class AOWLSpoutReceiverManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWLSpoutReceiverInterface::StaticStruct, Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface_Statics::NewStructOps, TEXT("OWLSpoutReceiverInterface"), &Z_Registration_Info_UScriptStruct_OWLSpoutReceiverInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLSpoutReceiverInterface), 4057756470U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWLSpoutReceiverManager, AOWLSpoutReceiverManager::StaticClass, TEXT("AOWLSpoutReceiverManager"), &Z_Registration_Info_UClass_AOWLSpoutReceiverManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLSpoutReceiverManager), 2835328764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_831765283(TEXT("/Script/OWLSpout"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLSpout_Public_OWLSpoutReceiverManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
