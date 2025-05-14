// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan202501/BloqueLava.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueLava() {}

// Begin Cross Module References
BOMBERMAN202501_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ABloqueLava();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ABloqueLava_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan202501();
// End Cross Module References

// Begin Class ABloqueLava
void ABloqueLava::StaticRegisterNativesABloqueLava()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueLava);
UClass* Z_Construct_UClass_ABloqueLava_NoRegister()
{
	return ABloqueLava::StaticClass();
}
struct Z_Construct_UClass_ABloqueLava_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueLava.h" },
		{ "ModuleRelativePath", "BloqueLava.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueLava>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueLava_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan202501,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLava_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueLava_Statics::ClassParams = {
	&ABloqueLava::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLava_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueLava_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueLava()
{
	if (!Z_Registration_Info_UClass_ABloqueLava.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueLava.OuterSingleton, Z_Construct_UClass_ABloqueLava_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueLava.OuterSingleton;
}
template<> BOMBERMAN202501_API UClass* StaticClass<ABloqueLava>()
{
	return ABloqueLava::StaticClass();
}
ABloqueLava::ABloqueLava() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueLava);
ABloqueLava::~ABloqueLava() {}
// End Class ABloqueLava

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_BloqueLava_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueLava, ABloqueLava::StaticClass, TEXT("ABloqueLava"), &Z_Registration_Info_UClass_ABloqueLava, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueLava), 2520449183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_BloqueLava_h_141878964(TEXT("/Script/BomberMan202501"),
	Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_BloqueLava_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_BloqueLava_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
