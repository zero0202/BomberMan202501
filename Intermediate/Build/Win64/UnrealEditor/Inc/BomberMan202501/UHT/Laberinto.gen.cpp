// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan202501/Laberinto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberinto() {}

// Begin Cross Module References
BOMBERMAN202501_API UClass* Z_Construct_UClass_ABloqueAcero_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ABloqueMadera_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ALaberinto();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ALaberinto_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_AObtaculos_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_APuerta_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_UILaberinto_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan202501();
// End Cross Module References

// Begin Class ALaberinto
void ALaberinto::StaticRegisterNativesALaberinto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberinto);
UClass* Z_Construct_UClass_ALaberinto_NoRegister()
{
	return ALaberinto::StaticClass();
}
struct Z_Construct_UClass_ALaberinto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Laberinto.h" },
		{ "ModuleRelativePath", "Laberinto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueA_MetaData[] = {
		{ "Category", "Laberinto" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clases para instanciar objetos\n" },
#endif
		{ "ModuleRelativePath", "Laberinto.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clases para instanciar objetos" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueM_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "ModuleRelativePath", "Laberinto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Puertas_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "ModuleRelativePath", "Laberinto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Obstaculos_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "ModuleRelativePath", "Laberinto.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BloqueA;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BloqueM;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Puertas;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Obstaculos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberinto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALaberinto_Statics::NewProp_BloqueA = { "BloqueA", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberinto, BloqueA), Z_Construct_UClass_UClass, Z_Construct_UClass_ABloqueAcero_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueA_MetaData), NewProp_BloqueA_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALaberinto_Statics::NewProp_BloqueM = { "BloqueM", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberinto, BloqueM), Z_Construct_UClass_UClass, Z_Construct_UClass_ABloqueMadera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueM_MetaData), NewProp_BloqueM_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALaberinto_Statics::NewProp_Puertas = { "Puertas", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberinto, Puertas), Z_Construct_UClass_UClass, Z_Construct_UClass_APuerta_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Puertas_MetaData), NewProp_Puertas_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALaberinto_Statics::NewProp_Obstaculos = { "Obstaculos", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberinto, Obstaculos), Z_Construct_UClass_UClass, Z_Construct_UClass_AObtaculos_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Obstaculos_MetaData), NewProp_Obstaculos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaberinto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberinto_Statics::NewProp_BloqueA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberinto_Statics::NewProp_BloqueM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberinto_Statics::NewProp_Puertas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberinto_Statics::NewProp_Obstaculos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALaberinto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan202501,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALaberinto_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UILaberinto_NoRegister, (int32)VTABLE_OFFSET(ALaberinto, IILaberinto), false },  // 1938543822
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberinto_Statics::ClassParams = {
	&ALaberinto::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALaberinto_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberinto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberinto()
{
	if (!Z_Registration_Info_UClass_ALaberinto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberinto.OuterSingleton, Z_Construct_UClass_ALaberinto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberinto.OuterSingleton;
}
template<> BOMBERMAN202501_API UClass* StaticClass<ALaberinto>()
{
	return ALaberinto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberinto);
ALaberinto::~ALaberinto() {}
// End Class ALaberinto

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_Laberinto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberinto, ALaberinto::StaticClass, TEXT("ALaberinto"), &Z_Registration_Info_UClass_ALaberinto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberinto), 988896941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_Laberinto_h_942184560(TEXT("/Script/BomberMan202501"),
	Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_Laberinto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_Laberinto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
