// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan202501/BloqueArena.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueArena() {}

// Begin Cross Module References
BOMBERMAN202501_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ABloqueArena();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ABloqueArena_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan202501();
// End Cross Module References

// Begin Class ABloqueArena
void ABloqueArena::StaticRegisterNativesABloqueArena()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueArena);
UClass* Z_Construct_UClass_ABloqueArena_NoRegister()
{
	return ABloqueArena::StaticClass();
}
struct Z_Construct_UClass_ABloqueArena_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueArena.h" },
		{ "ModuleRelativePath", "BloqueArena.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueArena>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueArena_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan202501,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueArena_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueArena_Statics::ClassParams = {
	&ABloqueArena::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueArena_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueArena_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueArena()
{
	if (!Z_Registration_Info_UClass_ABloqueArena.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueArena.OuterSingleton, Z_Construct_UClass_ABloqueArena_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueArena.OuterSingleton;
}
template<> BOMBERMAN202501_API UClass* StaticClass<ABloqueArena>()
{
	return ABloqueArena::StaticClass();
}
ABloqueArena::ABloqueArena() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueArena);
ABloqueArena::~ABloqueArena() {}
// End Class ABloqueArena

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_BloqueArena_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueArena, ABloqueArena::StaticClass, TEXT("ABloqueArena"), &Z_Registration_Info_UClass_ABloqueArena, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueArena), 556370359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_BloqueArena_h_1544126515(TEXT("/Script/BomberMan202501"),
	Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_BloqueArena_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_BloqueArena_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
