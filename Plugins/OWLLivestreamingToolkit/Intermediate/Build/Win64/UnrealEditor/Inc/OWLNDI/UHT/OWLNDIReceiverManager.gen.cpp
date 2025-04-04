// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLNDI/Public/OWLNDIReceiverManager.h"
#include "OWLNDI/Public/OWLNDIFinder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLNDIReceiverManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
OWLNDI_API UClass* Z_Construct_UClass_AOWLNDIReceiverManager();
OWLNDI_API UClass* Z_Construct_UClass_AOWLNDIReceiverManager_NoRegister();
OWLNDI_API UClass* Z_Construct_UClass_UOWLNDISoundWave_NoRegister();
OWLNDI_API UScriptStruct* Z_Construct_UScriptStruct_FNDISource();
OWLNDI_API UScriptStruct* Z_Construct_UScriptStruct_FOWLNDIReceiverInterface();
UPackage* Z_Construct_UPackage__Script_OWLNDI();
// End Cross Module References

// Begin ScriptStruct FOWLNDIReceiverInterface
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface;
class UScriptStruct* FOWLNDIReceiverInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface, (UObject*)Z_Construct_UPackage__Script_OWLNDI(), TEXT("OWLNDIReceiverInterface"));
	}
	return Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface.OuterSingleton;
}
template<> OWLNDI_API UScriptStruct* StaticStruct<FOWLNDIReceiverInterface>()
{
	return FOWLNDIReceiverInterface::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[] = {
		{ "Category", "OWLNDIReceiver" },
		{ "EditCondition", "!bUnderExternalControl" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseFirstAvailableSender_MetaData[] = {
		{ "Category", "OWLNDIReceiver" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "OWLNDIReceiver" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
		{ "Category", "OWLNDIReceiver" },
		{ "EditCondition", "!bUnderExternalControl" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDISoundWave_MetaData[] = {
		{ "Category", "OWLNDIReceiver" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnderExternalControl_MetaData[] = {
		{ "Category", "Internal" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Active_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
	static void NewProp_UseFirstAvailableSender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFirstAvailableSender;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NDISoundWave;
	static void NewProp_bUnderExternalControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnderExternalControl;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWLNDIReceiverInterface>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Active_SetBit(void* Obj)
{
	((FOWLNDIReceiverInterface*)Obj)->Active = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLNDIReceiverInterface), &Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Active_MetaData), NewProp_Active_MetaData) };
void Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_UseFirstAvailableSender_SetBit(void* Obj)
{
	((FOWLNDIReceiverInterface*)Obj)->UseFirstAvailableSender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_UseFirstAvailableSender = { "UseFirstAvailableSender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLNDIReceiverInterface), &Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_UseFirstAvailableSender_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseFirstAvailableSender_MetaData), NewProp_UseFirstAvailableSender_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDIReceiverInterface, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDIReceiverInterface, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_NDISoundWave = { "NDISoundWave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDIReceiverInterface, NDISoundWave), Z_Construct_UClass_UOWLNDISoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDISoundWave_MetaData), NewProp_NDISoundWave_MetaData) };
void Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_bUnderExternalControl_SetBit(void* Obj)
{
	((FOWLNDIReceiverInterface*)Obj)->bUnderExternalControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_bUnderExternalControl = { "bUnderExternalControl", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWLNDIReceiverInterface), &Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_bUnderExternalControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnderExternalControl_MetaData), NewProp_bUnderExternalControl_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWLNDIReceiverInterface, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Active,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_UseFirstAvailableSender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_NDISoundWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_bUnderExternalControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
	nullptr,
	&NewStructOps,
	"OWLNDIReceiverInterface",
	Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::PropPointers),
	sizeof(FOWLNDIReceiverInterface),
	alignof(FOWLNDIReceiverInterface),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWLNDIReceiverInterface()
{
	if (!Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface.InnerSingleton, Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface.InnerSingleton;
}
// End ScriptStruct FOWLNDIReceiverInterface

// Begin Class AOWLNDIReceiverManager Function GetAvailableNDISources
struct Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics
{
	struct OWLNDIReceiverManager_eventGetAvailableNDISources_Parms
	{
		TArray<FNDISource> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Off World Live NDI Receiver" },
		{ "Comment", "/** Returns a list of NDI sources that are available at this moment in time. */" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
		{ "ToolTip", "Returns a list of NDI sources that are available at this moment in time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNDISource, METADATA_PARAMS(0, nullptr) }; // 1673757425
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWLNDIReceiverManager_eventGetAvailableNDISources_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1673757425
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLNDIReceiverManager, nullptr, "GetAvailableNDISources", nullptr, nullptr, Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::OWLNDIReceiverManager_eventGetAvailableNDISources_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::OWLNDIReceiverManager_eventGetAvailableNDISources_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLNDIReceiverManager::execGetAvailableNDISources)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FNDISource>*)Z_Param__Result=P_THIS->GetAvailableNDISources();
	P_NATIVE_END;
}
// End Class AOWLNDIReceiverManager Function GetAvailableNDISources

// Begin Class AOWLNDIReceiverManager
void AOWLNDIReceiverManager::StaticRegisterNativesAOWLNDIReceiverManager()
{
	UClass* Class = AOWLNDIReceiverManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAvailableNDISources", &AOWLNDIReceiverManager::execGetAvailableNDISources },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLNDIReceiverManager);
UClass* Z_Construct_UClass_AOWLNDIReceiverManager_NoRegister()
{
	return AOWLNDIReceiverManager::StaticClass();
}
struct Z_Construct_UClass_AOWLNDIReceiverManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "OWL NDI Receiver Manager" },
		{ "IncludePath", "OWLNDIReceiverManager.h" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDIReceivers_MetaData[] = {
		{ "Category", "Off World Live NDI Receiver Settings" },
		{ "ModuleRelativePath", "Public/OWLNDIReceiverManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NDIReceivers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NDIReceivers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLNDIReceiverManager_GetAvailableNDISources, "GetAvailableNDISources" }, // 3575069605
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLNDIReceiverManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWLNDIReceiverManager_Statics::NewProp_NDIReceivers_Inner = { "NDIReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOWLNDIReceiverInterface, METADATA_PARAMS(0, nullptr) }; // 4023307529
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWLNDIReceiverManager_Statics::NewProp_NDIReceivers = { "NDIReceivers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLNDIReceiverManager, NDIReceivers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDIReceivers_MetaData), NewProp_NDIReceivers_MetaData) }; // 4023307529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLNDIReceiverManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLNDIReceiverManager_Statics::NewProp_NDIReceivers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLNDIReceiverManager_Statics::NewProp_NDIReceivers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDIReceiverManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWLNDIReceiverManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDIReceiverManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLNDIReceiverManager_Statics::ClassParams = {
	&AOWLNDIReceiverManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWLNDIReceiverManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDIReceiverManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLNDIReceiverManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLNDIReceiverManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWLNDIReceiverManager()
{
	if (!Z_Registration_Info_UClass_AOWLNDIReceiverManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLNDIReceiverManager.OuterSingleton, Z_Construct_UClass_AOWLNDIReceiverManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWLNDIReceiverManager.OuterSingleton;
}
template<> OWLNDI_API UClass* StaticClass<AOWLNDIReceiverManager>()
{
	return AOWLNDIReceiverManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLNDIReceiverManager);
AOWLNDIReceiverManager::~AOWLNDIReceiverManager() {}
// End Class AOWLNDIReceiverManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWLNDIReceiverInterface::StaticStruct, Z_Construct_UScriptStruct_FOWLNDIReceiverInterface_Statics::NewStructOps, TEXT("OWLNDIReceiverInterface"), &Z_Registration_Info_UScriptStruct_OWLNDIReceiverInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWLNDIReceiverInterface), 4023307529U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWLNDIReceiverManager, AOWLNDIReceiverManager::StaticClass, TEXT("AOWLNDIReceiverManager"), &Z_Registration_Info_UClass_AOWLNDIReceiverManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLNDIReceiverManager), 146961846U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_589882102(TEXT("/Script/OWLNDI"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDIReceiverManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
