// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan202501/LaberintoConcreto_1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoConcreto_1() {}

// Begin Cross Module References
BOMBERMAN202501_API UClass* Z_Construct_UClass_ABloqueAcero_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ABloqueMadera_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ALaberinto_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ALaberintoConcreto_1();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ALaberintoConcreto_1_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_AObtaculos_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_APuerta_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_UILaberintoBuilder_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan202501();
// End Cross Module References

// Begin Class ALaberintoConcreto_1
void ALaberintoConcreto_1::StaticRegisterNativesALaberintoConcreto_1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberintoConcreto_1);
UClass* Z_Construct_UClass_ALaberintoConcreto_1_NoRegister()
{
	return ALaberintoConcreto_1::StaticClass();
}
struct Z_Construct_UClass_ALaberintoConcreto_1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LaberintoConcreto_1.h" },
		{ "ModuleRelativePath", "LaberintoConcreto_1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueA_MetaData[] = {
		{ "Category", "LaberintoConcreto_1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clases para instanciar objetos\n" },
#endif
		{ "ModuleRelativePath", "LaberintoConcreto_1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clases para instanciar objetos" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueM_MetaData[] = {
		{ "Category", "LaberintoConcreto_1" },
		{ "ModuleRelativePath", "LaberintoConcreto_1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Puertas_MetaData[] = {
		{ "Category", "LaberintoConcreto_1" },
		{ "ModuleRelativePath", "LaberintoConcreto_1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Obstaculos_MetaData[] = {
		{ "Category", "LaberintoConcreto_1" },
		{ "ModuleRelativePath", "LaberintoConcreto_1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Laberinto_MetaData[] = {
		{ "ModuleRelativePath", "LaberintoConcreto_1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BloqueA;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BloqueM;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Puertas;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Obstaculos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Laberinto;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoConcreto_1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALaberintoConcreto_1_Statics::NewProp_BloqueA = { "BloqueA", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoConcreto_1, BloqueA), Z_Construct_UClass_UClass, Z_Construct_UClass_ABloqueAcero_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueA_MetaData), NewProp_BloqueA_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALaberintoConcreto_1_Statics::NewProp_BloqueM = { "BloqueM", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoConcreto_1, BloqueM), Z_Construct_UClass_UClass, Z_Construct_UClass_ABloqueMadera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueM_MetaData), NewProp_BloqueM_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALaberintoConcreto_1_Statics::NewProp_Puertas = { "Puertas", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoConcreto_1, Puertas), Z_Construct_UClass_UClass, Z_Construct_UClass_APuerta_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Puertas_MetaData), NewProp_Puertas_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALaberintoConcreto_1_Statics::NewProp_Obstaculos = { "Obstaculos", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoConcreto_1, Obstaculos), Z_Construct_UClass_UClass, Z_Construct_UClass_AObtaculos_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Obstaculos_MetaData), NewProp_Obstaculos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaberintoConcreto_1_Statics::NewProp_Laberinto = { "Laberinto", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoConcreto_1, Laberinto), Z_Construct_UClass_ALaberinto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Laberinto_MetaData), NewProp_Laberinto_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaberintoConcreto_1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoConcreto_1_Statics::NewProp_BloqueA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoConcreto_1_Statics::NewProp_BloqueM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoConcreto_1_Statics::NewProp_Puertas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoConcreto_1_Statics::NewProp_Obstaculos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoConcreto_1_Statics::NewProp_Laberinto,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto_1_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALaberintoConcreto_1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan202501,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto_1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALaberintoConcreto_1_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UILaberintoBuilder_NoRegister, (int32)VTABLE_OFFSET(ALaberintoConcreto_1, IILaberintoBuilder), false },  // 3477129539
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoConcreto_1_Statics::ClassParams = {
	&ALaberintoConcreto_1::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALaberintoConcreto_1_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto_1_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcreto_1_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberintoConcreto_1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberintoConcreto_1()
{
	if (!Z_Registration_Info_UClass_ALaberintoConcreto_1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberintoConcreto_1.OuterSingleton, Z_Construct_UClass_ALaberintoConcreto_1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberintoConcreto_1.OuterSingleton;
}
template<> BOMBERMAN202501_API UClass* StaticClass<ALaberintoConcreto_1>()
{
	return ALaberintoConcreto_1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoConcreto_1);
ALaberintoConcreto_1::~ALaberintoConcreto_1() {}
// End Class ALaberintoConcreto_1

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_LaberintoConcreto_1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberintoConcreto_1, ALaberintoConcreto_1::StaticClass, TEXT("ALaberintoConcreto_1"), &Z_Registration_Info_UClass_ALaberintoConcreto_1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberintoConcreto_1), 2574858875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_LaberintoConcreto_1_h_2839219869(TEXT("/Script/BomberMan202501"),
	Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_LaberintoConcreto_1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_LaberintoConcreto_1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
