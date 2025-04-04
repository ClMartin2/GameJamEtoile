// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLNDI/Public/OWLNDISoundWave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLNDISoundWave() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
OWLNDI_API UClass* Z_Construct_UClass_UOWLNDISoundWave();
OWLNDI_API UClass* Z_Construct_UClass_UOWLNDISoundWave_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWLNDI();
// End Cross Module References

// Begin Class UOWLNDISoundWave
void UOWLNDISoundWave::StaticRegisterNativesUOWLNDISoundWave()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLNDISoundWave);
UClass* Z_Construct_UClass_UOWLNDISoundWave_NoRegister()
{
	return UOWLNDISoundWave::StaticClass();
}
struct Z_Construct_UClass_UOWLNDISoundWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Off World Live NDI" },
		{ "DisplayName", "OWL NDI Sound Wave" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "OWLNDISoundWave.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/OWLNDISoundWave.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLNDISoundWave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOWLNDISoundWave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLNDI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDISoundWave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLNDISoundWave_Statics::ClassParams = {
	&UOWLNDISoundWave::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLNDISoundWave_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLNDISoundWave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWLNDISoundWave()
{
	if (!Z_Registration_Info_UClass_UOWLNDISoundWave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLNDISoundWave.OuterSingleton, Z_Construct_UClass_UOWLNDISoundWave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLNDISoundWave.OuterSingleton;
}
template<> OWLNDI_API UClass* StaticClass<UOWLNDISoundWave>()
{
	return UOWLNDISoundWave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLNDISoundWave);
UOWLNDISoundWave::~UOWLNDISoundWave() {}
// End Class UOWLNDISoundWave

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISoundWave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLNDISoundWave, UOWLNDISoundWave::StaticClass, TEXT("UOWLNDISoundWave"), &Z_Registration_Info_UClass_UOWLNDISoundWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLNDISoundWave), 2510459937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISoundWave_h_2903878573(TEXT("/Script/OWLNDI"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISoundWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLNDI_Public_OWLNDISoundWave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
