// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLVirtualWebcam/Public/OWLVirtualWebcamOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLVirtualWebcamOutput() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
OWLVIRTUALWEBCAM_API UClass* Z_Construct_UClass_AOWLVirtualWebcamOutput();
OWLVIRTUALWEBCAM_API UClass* Z_Construct_UClass_AOWLVirtualWebcamOutput_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWLVirtualWebcam();
// End Cross Module References

// Begin Class AOWLVirtualWebcamOutput Function Restart
struct Z_Construct_UFunction_AOWLVirtualWebcamOutput_Restart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Virtual Webcam" },
		{ "Comment", "/* Stop the camera (if running) and attempt to restart the camera */" },
		{ "ModuleRelativePath", "Public/OWLVirtualWebcamOutput.h" },
		{ "ToolTip", "Stop the camera (if running) and attempt to restart the camera" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWLVirtualWebcamOutput_Restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWLVirtualWebcamOutput, nullptr, "Restart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWLVirtualWebcamOutput_Restart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWLVirtualWebcamOutput_Restart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWLVirtualWebcamOutput_Restart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWLVirtualWebcamOutput_Restart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWLVirtualWebcamOutput::execRestart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Restart();
	P_NATIVE_END;
}
// End Class AOWLVirtualWebcamOutput Function Restart

// Begin Class AOWLVirtualWebcamOutput
void AOWLVirtualWebcamOutput::StaticRegisterNativesAOWLVirtualWebcamOutput()
{
	UClass* Class = AOWLVirtualWebcamOutput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Restart", &AOWLVirtualWebcamOutput::execRestart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLVirtualWebcamOutput);
UClass* Z_Construct_UClass_AOWLVirtualWebcamOutput_NoRegister()
{
	return AOWLVirtualWebcamOutput::StaticClass();
}
struct Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "OWL Virtual Webcam Output" },
		{ "IncludePath", "OWLVirtualWebcamOutput.h" },
		{ "ModuleRelativePath", "Public/OWLVirtualWebcamOutput.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputRenderTarget_MetaData[] = {
		{ "Category", "Virtual Webcam Settings" },
		{ "Comment", "/* Aspect Ratio must be 4:3 (works for all webcam software) or 16:9 (works for some webcam software) */" },
		{ "ModuleRelativePath", "Public/OWLVirtualWebcamOutput.h" },
		{ "ToolTip", "Aspect Ratio must be 4:3 (works for all webcam software) or 16:9 (works for some webcam software)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[] = {
		{ "Category", "Virtual Webcam Settings" },
		{ "ModuleRelativePath", "Public/OWLVirtualWebcamOutput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchInstallerWhenRequired_MetaData[] = {
		{ "Category", "Virtual Webcam Settings" },
		{ "Comment", "/* Launches the OWL Virtual Webcam installer automatically if it has not\n\x09 * Been installed on this machine */" },
		{ "ModuleRelativePath", "Public/OWLVirtualWebcamOutput.h" },
		{ "ToolTip", "Launches the OWL Virtual Webcam installer automatically if it has not\n       * Been installed on this machine" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable60Fps_MetaData[] = {
		{ "Category", "Virtual Webcam Settings" },
		{ "ModuleRelativePath", "Public/OWLVirtualWebcamOutput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputRenderTarget;
	static void NewProp_Active_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
	static void NewProp_LaunchInstallerWhenRequired_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LaunchInstallerWhenRequired;
	static void NewProp_bEnable60Fps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable60Fps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWLVirtualWebcamOutput_Restart, "Restart" }, // 1999449782
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLVirtualWebcamOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_InputRenderTarget = { "InputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLVirtualWebcamOutput, InputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputRenderTarget_MetaData), NewProp_InputRenderTarget_MetaData) };
void Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_Active_SetBit(void* Obj)
{
	((AOWLVirtualWebcamOutput*)Obj)->Active = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWLVirtualWebcamOutput), &Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_Active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Active_MetaData), NewProp_Active_MetaData) };
void Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_LaunchInstallerWhenRequired_SetBit(void* Obj)
{
	((AOWLVirtualWebcamOutput*)Obj)->LaunchInstallerWhenRequired = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_LaunchInstallerWhenRequired = { "LaunchInstallerWhenRequired", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWLVirtualWebcamOutput), &Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_LaunchInstallerWhenRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchInstallerWhenRequired_MetaData), NewProp_LaunchInstallerWhenRequired_MetaData) };
void Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_bEnable60Fps_SetBit(void* Obj)
{
	((AOWLVirtualWebcamOutput*)Obj)->bEnable60Fps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_bEnable60Fps = { "bEnable60Fps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWLVirtualWebcamOutput), &Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_bEnable60Fps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable60Fps_MetaData), NewProp_bEnable60Fps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_InputRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_Active,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_LaunchInstallerWhenRequired,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::NewProp_bEnable60Fps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLVirtualWebcam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::ClassParams = {
	&AOWLVirtualWebcamOutput::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWLVirtualWebcamOutput()
{
	if (!Z_Registration_Info_UClass_AOWLVirtualWebcamOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLVirtualWebcamOutput.OuterSingleton, Z_Construct_UClass_AOWLVirtualWebcamOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWLVirtualWebcamOutput.OuterSingleton;
}
template<> OWLVIRTUALWEBCAM_API UClass* StaticClass<AOWLVirtualWebcamOutput>()
{
	return AOWLVirtualWebcamOutput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLVirtualWebcamOutput);
// End Class AOWLVirtualWebcamOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLVirtualWebcam_Public_OWLVirtualWebcamOutput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWLVirtualWebcamOutput, AOWLVirtualWebcamOutput::StaticClass, TEXT("AOWLVirtualWebcamOutput"), &Z_Registration_Info_UClass_AOWLVirtualWebcamOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLVirtualWebcamOutput), 2478275597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLVirtualWebcam_Public_OWLVirtualWebcamOutput_h_2913123104(TEXT("/Script/OWLVirtualWebcam"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLVirtualWebcam_Public_OWLVirtualWebcamOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLVirtualWebcam_Public_OWLVirtualWebcamOutput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
