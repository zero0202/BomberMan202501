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
BOMBERMAN202501_API UClass* Z_Construct_UClass_AFabricaBloquesNormales();
BOMBERMAN202501_API UClass* Z_Construct_UClass_AFabricaBloquesNormales_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_UIFabricaBloques_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
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
		{ "IncludePath", "FabricaBloquesNormales.h" },
		{ "ModuleRelativePath", "FabricaBloquesNormales.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaBloquesNormales>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFabricaBloquesNormales_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan202501,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloquesNormales_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFabricaBloquesNormales_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIFabricaBloques_NoRegister, (int32)VTABLE_OFFSET(AFabricaBloquesNormales, IIFabricaBloques), false },  // 645565502
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFabricaBloquesNormales_Statics::ClassParams = {
	&AFabricaBloquesNormales::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaBloquesNormales);
AFabricaBloquesNormales::~AFabricaBloquesNormales() {}
// End Class AFabricaBloquesNormales

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_FabricaBloquesNormales_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFabricaBloquesNormales, AFabricaBloquesNormales::StaticClass, TEXT("AFabricaBloquesNormales"), &Z_Registration_Info_UClass_AFabricaBloquesNormales, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFabricaBloquesNormales), 2302445994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_FabricaBloquesNormales_h_1836729646(TEXT("/Script/BomberMan202501"),
	Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_FabricaBloquesNormales_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_FabricaBloquesNormales_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
