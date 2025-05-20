// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan202501/ObtaculoMuro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObtaculoMuro() {}

// Begin Cross Module References
BOMBERMAN202501_API UClass* Z_Construct_UClass_AObtaculoMuro();
BOMBERMAN202501_API UClass* Z_Construct_UClass_AObtaculoMuro_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_AObtaculos();
UPackage* Z_Construct_UPackage__Script_BomberMan202501();
// End Cross Module References

// Begin Class AObtaculoMuro
void AObtaculoMuro::StaticRegisterNativesAObtaculoMuro()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObtaculoMuro);
UClass* Z_Construct_UClass_AObtaculoMuro_NoRegister()
{
	return AObtaculoMuro::StaticClass();
}
struct Z_Construct_UClass_AObtaculoMuro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ObtaculoMuro.h" },
		{ "ModuleRelativePath", "ObtaculoMuro.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObtaculoMuro>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AObtaculoMuro_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AObtaculos,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan202501,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObtaculoMuro_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObtaculoMuro_Statics::ClassParams = {
	&AObtaculoMuro::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObtaculoMuro_Statics::Class_MetaDataParams), Z_Construct_UClass_AObtaculoMuro_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObtaculoMuro()
{
	if (!Z_Registration_Info_UClass_AObtaculoMuro.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObtaculoMuro.OuterSingleton, Z_Construct_UClass_AObtaculoMuro_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObtaculoMuro.OuterSingleton;
}
template<> BOMBERMAN202501_API UClass* StaticClass<AObtaculoMuro>()
{
	return AObtaculoMuro::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObtaculoMuro);
AObtaculoMuro::~AObtaculoMuro() {}
// End Class AObtaculoMuro

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_ObtaculoMuro_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObtaculoMuro, AObtaculoMuro::StaticClass, TEXT("AObtaculoMuro"), &Z_Registration_Info_UClass_AObtaculoMuro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObtaculoMuro), 4140953965U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_ObtaculoMuro_h_3660190204(TEXT("/Script/BomberMan202501"),
	Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_ObtaculoMuro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_ObtaculoMuro_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
