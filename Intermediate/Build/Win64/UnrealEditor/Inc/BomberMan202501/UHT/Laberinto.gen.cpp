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
BOMBERMAN202501_API UClass* Z_Construct_UClass_ALaberinto();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ALaberinto_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_UILaberinto_NoRegister();
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberinto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ALaberinto, ALaberinto::StaticClass, TEXT("ALaberinto"), &Z_Registration_Info_UClass_ALaberinto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberinto), 560911813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_Laberinto_h_455074832(TEXT("/Script/BomberMan202501"),
	Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_Laberinto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_Laberinto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
