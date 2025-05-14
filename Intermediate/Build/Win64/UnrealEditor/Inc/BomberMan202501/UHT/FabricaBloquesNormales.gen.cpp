// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan202501/FabricaBloquesNormales.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaBloquesNormales() {}

// Begin Cross Module References
BOMBERMAN202501_API UClass* Z_Construct_UClass_AFabricaBloques();
BOMBERMAN202501_API UClass* Z_Construct_UClass_AFabricaBloquesNormales();
BOMBERMAN202501_API UClass* Z_Construct_UClass_AFabricaBloquesNormales_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan202501();
// End Cross Module References

// Begin Class AFabricaBloquesNormales
void AFabricaBloquesNormales::StaticRegisterNativesAFabricaBloquesNormales()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFabricaBloquesNormales);
UClass* Z_Construct_UClass_AFabricaBloquesNormales_NoRegister()
{
	return AFabricaBloquesNormales::StaticClass();
}
struct Z_Construct_UClass_AFabricaBloquesNormales_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FabricaBloquesNormales.h" },
		{ "ModuleRelativePath", "FabricaBloquesNormales.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaBloquesNormales>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFabricaBloquesNormales_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AFabricaBloques,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan202501,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloquesNormales_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFabricaBloquesNormales_Statics::ClassParams = {
	&AFabricaBloquesNormales::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloquesNormales_Statics::Class_MetaDataParams), Z_Construct_UClass_AFabricaBloquesNormales_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFabricaBloquesNormales()
{
	if (!Z_Registration_Info_UClass_AFabricaBloquesNormales.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFabricaBloquesNormales.OuterSingleton, Z_Construct_UClass_AFabricaBloquesNormales_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFabricaBloquesNormales.OuterSingleton;
}
template<> BOMBERMAN202501_API UClass* StaticClass<AFabricaBloquesNormales>()
{
	return AFabricaBloquesNormales::StaticClass();
}
AFabricaBloquesNormales::AFabricaBloquesNormales() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaBloquesNormales);
AFabricaBloquesNormales::~AFabricaBloquesNormales() {}
// End Class AFabricaBloquesNormales

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_FabricaBloquesNormales_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFabricaBloquesNormales, AFabricaBloquesNormales::StaticClass, TEXT("AFabricaBloquesNormales"), &Z_Registration_Info_UClass_AFabricaBloquesNormales, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFabricaBloquesNormales), 2982972464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_FabricaBloquesNormales_h_418462430(TEXT("/Script/BomberMan202501"),
	Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_FabricaBloquesNormales_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_FabricaBloquesNormales_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
