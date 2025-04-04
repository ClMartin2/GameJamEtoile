// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLBaseComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLBaseComp() {}

// Begin Cross Module References
COMPOSURE_API UClass* Z_Construct_UClass_ACompositingElement();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLBaseComp();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLBaseComp_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References

// Begin Class AOWLBaseComp
void AOWLBaseComp::StaticRegisterNativesAOWLBaseComp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLBaseComp);
UClass* Z_Construct_UClass_AOWLBaseComp_NoRegister()
{
	return AOWLBaseComp::StaticClass();
}
struct Z_Construct_UClass_AOWLBaseComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A universal base class for compositing which prevents\n * re-render flickers caused by Scene View Extension re-renders\n */" },
		{ "DisplayName", "OWL Empty Comp Shot" },
		{ "IncludePath", "OWLBaseComp.h" },
		{ "ModuleRelativePath", "Public/OWLBaseComp.h" },
		{ "ShortTooltip", "A simple base actor used to composite multiple render layers together." },
		{ "ToolTip", "A universal base class for compositing which prevents\nre-render flickers caused by Scene View Extension re-renders" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLBaseComp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOWLBaseComp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACompositingElement,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLBaseComp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLBaseComp_Statics::ClassParams = {
	&AOWLBaseComp::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLBaseComp_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLBaseComp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWLBaseComp()
{
	if (!Z_Registration_Info_UClass_AOWLBaseComp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLBaseComp.OuterSingleton, Z_Construct_UClass_AOWLBaseComp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWLBaseComp.OuterSingleton;
}
template<> OWLCOMPOSURE_API UClass* StaticClass<AOWLBaseComp>()
{
	return AOWLBaseComp::StaticClass();
}
AOWLBaseComp::AOWLBaseComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLBaseComp);
AOWLBaseComp::~AOWLBaseComp() {}
// End Class AOWLBaseComp

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLBaseComp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWLBaseComp, AOWLBaseComp::StaticClass, TEXT("AOWLBaseComp"), &Z_Registration_Info_UClass_AOWLBaseComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLBaseComp), 3095635623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLBaseComp_h_405104073(TEXT("/Script/OWLComposure"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLBaseComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLBaseComp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
