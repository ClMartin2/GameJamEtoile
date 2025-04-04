// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLMedia/Public/OWLMediaOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLMediaOutput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
OWLMEDIA_API UClass* Z_Construct_UClass_AOWLMediaOutput();
OWLMEDIA_API UClass* Z_Construct_UClass_AOWLMediaOutput_NoRegister();
OWLMEDIA_API UClass* Z_Construct_UClass_UOWLMediaOutputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWLMedia();
// End Cross Module References

// Begin Class AOWLMediaOutput Function IsReconnecting
struct Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics
{
	struct OWLMediaOutput_eventIsReconnecting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Connection State" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLMediaOutput_eventIsReconnecting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLMediaOutput_eventIsReconnecting_Parms), &Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLMediaOutput, nullptr, "IsReconnecting", nullptr, nullptr, Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::OWLMediaOutput_eventIsReconnecting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::OWLMediaOutput_eventIsReconnecting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLMediaOutput::execIsReconnecting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReconnecting();
	P_NATIVE_END;
}
// End Class AOWLMediaOutput Function IsReconnecting

// Begin Class AOWLMediaOutput Function Start
struct Z_Construct_UFunction_AOWLMediaOutput_Start_Statics
{
	struct OWLMediaOutput_eventStart_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Output Controls" },
		{ "Comment", "// Blueprint compatibility functions\n" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "Blueprint compatibility functions" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWLMediaOutput_eventStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWLMediaOutput_eventStart_Parms), &Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLMediaOutput, nullptr, "Start", nullptr, nullptr, Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::OWLMediaOutput_eventStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::OWLMediaOutput_eventStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWLMediaOutput_Start()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLMediaOutput_Start_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLMediaOutput::execStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Start();
	P_NATIVE_END;
}
// End Class AOWLMediaOutput Function Start

// Begin Class AOWLMediaOutput Function Stop
struct Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Output Controls" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLMediaOutput, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWLMediaOutput_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLMediaOutput_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLMediaOutput::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class AOWLMediaOutput Function Stop

// Begin Class AOWLMediaOutput
void AOWLMediaOutput::StaticRegisterNativesAOWLMediaOutput()
{
	UClass* Class = AOWLMediaOutput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsReconnecting", &AOWLMediaOutput::execIsReconnecting },
		{ "Start", &AOWLMediaOutput::execStart },
		{ "Stop", &AOWLMediaOutput::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLMediaOutput);
UClass* Z_Construct_UClass_AOWLMediaOutput_NoRegister()
{
	return AOWLMediaOutput::StaticClass();
}
struct Z_Construct_UClass_AOWLMediaOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "OWL Media Output" },
		{ "IncludePath", "OWLMediaOutput.h" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutputComponent_MetaData[] = {
		{ "Category", "Media Output" },
		{ "Comment", "// Expose component properties to blueprints\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWLMediaOutput.h" },
		{ "ToolTip", "Expose component properties to blueprints" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaOutputComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLMediaOutput_IsReconnecting, "IsReconnecting" }, // 2947559824
		{ &Z_Construct_UFunction_AOWLMediaOutput_Start, "Start" }, // 2723842414
		{ &Z_Construct_UFunction_AOWLMediaOutput_Stop, "Stop" }, // 4196474620
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLMediaOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_MediaOutputComponent = { "MediaOutputComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLMediaOutput, MediaOutputComponent), Z_Construct_UClass_UOWLMediaOutputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaOutputComponent_MetaData), NewProp_MediaOutputComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLMediaOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLMediaOutput_Statics::NewProp_MediaOutputComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWLMediaOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLMedia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLMediaOutput_Statics::ClassParams = {
	&AOWLMediaOutput::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWLMediaOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLMediaOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLMediaOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWLMediaOutput()
{
	if (!Z_Registration_Info_UClass_AOWLMediaOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLMediaOutput.OuterSingleton, Z_Construct_UClass_AOWLMediaOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWLMediaOutput.OuterSingleton;
}
template<> OWLMEDIA_API UClass* StaticClass<AOWLMediaOutput>()
{
	return AOWLMediaOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLMediaOutput);
AOWLMediaOutput::~AOWLMediaOutput() {}
// End Class AOWLMediaOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWLMediaOutput, AOWLMediaOutput::StaticClass, TEXT("AOWLMediaOutput"), &Z_Registration_Info_UClass_AOWLMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLMediaOutput), 4255899480U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_705788836(TEXT("/Script/OWLMedia"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLMedia_Public_OWLMediaOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
