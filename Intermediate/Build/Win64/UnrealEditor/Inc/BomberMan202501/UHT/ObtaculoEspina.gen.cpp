// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan202501/ObtaculoEspina.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObtaculoEspina() {}

// Begin Cross Module References
BOMBERMAN202501_API UClass* Z_Construct_UClass_AObtaculoEspina();
BOMBERMAN202501_API UClass* Z_Construct_UClass_AObtaculoEspina_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_AObtaculos();
UPackage* Z_Construct_UPackage__Script_BomberMan202501();
// End Cross Module References

// Begin Class AObtaculoEspina
void AObtaculoEspina::StaticRegisterNativesAObtaculoEspina()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObtaculoEspina);
UClass* Z_Construct_UClass_AObtaculoEspina_NoRegister()
{
	return AObtaculoEspina::StaticClass();
}
struct Z_Construct_UClass_AObtaculoEspina_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ObtaculoEspina.h" },
		{ "ModuleRelativePath", "ObtaculoEspina.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObtaculoEspina>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AObtaculoEspina_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AObtaculos,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan202501,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObtaculoEspina_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObtaculoEspina_Statics::ClassParams = {
	&AObtaculoEspina::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObtaculoEspina_Statics::Class_MetaDataParams), Z_Construct_UClass_AObtaculoEspina_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObtaculoEspina()
{
	if (!Z_Registration_Info_UClass_AObtaculoEspina.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObtaculoEspina.OuterSingleton, Z_Construct_UClass_AObtaculoEspina_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObtaculoEspina.OuterSingleton;
}
template<> BOMBERMAN202501_API UClass* StaticClass<AObtaculoEspina>()
{
	return AObtaculoEspina::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObtaculoEspina);
AObtaculoEspina::~AObtaculoEspina() {}
// End Class AObtaculoEspina

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_ObtaculoEspina_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObtaculoEspina, AObtaculoEspina::StaticClass, TEXT("AObtaculoEspina"), &Z_Registration_Info_UClass_AObtaculoEspina, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObtaculoEspina), 2971788529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_ObtaculoEspina_h_3083417700(TEXT("/Script/BomberMan202501"),
	Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_ObtaculoEspina_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_ObtaculoEspina_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
