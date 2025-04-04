// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLCamera_init() {}
	OWLCAMERA_API UFunction* Z_Construct_UDelegateFunction_OWLCamera_OnCaptureComponentResized__DelegateSignature();
	OWLCAMERA_API UFunction* Z_Construct_UDelegateFunction_OWLCamera_OnViewportCaptureResized__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OWLCamera;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OWLCamera()
	{
		if (!Z_Registration_Info_UPackage__Script_OWLCamera.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OWLCamera_OnCaptureComponentResized__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWLCamera_OnViewportCaptureResized__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OWLCamera",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDA3BAA99,
				0x58B7DDF6,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OWLCamera.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OWLCamera.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OWLCamera(Z_Construct_UPackage__Script_OWLCamera, TEXT("/Script/OWLCamera"), Z_Registration_Info_UPackage__Script_OWLCamera, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDA3BAA99, 0x58B7DDF6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
