// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan202501/Puerta.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuerta() {}

// Begin Cross Module References
BOMBERMAN202501_API UClass* Z_Construct_UClass_APuerta();
BOMBERMAN202501_API UClass* Z_Construct_UClass_APuerta_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan202501();
// End Cross Module References

// Begin Class APuerta
void APuerta::StaticRegisterNativesAPuerta()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuerta);
UClass* Z_Construct_UClass_APuerta_NoRegister()
{
	return APuerta::StaticClass();
}
struct Z_Construct_UClass_APuerta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Puerta.h" },
		{ "ModuleRelativePath", "Puerta.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshPuerta_MetaData[] = {
		{ "Category", "Puerta" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Puerta.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshPuerta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuerta>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuerta_Statics::NewProp_MeshPuerta = { "MeshPuerta", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APuerta, MeshPuerta), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshPuerta_MetaData), NewProp_MeshPuerta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuerta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuerta_Statics::NewProp_MeshPuerta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APuerta_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan202501,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APuerta_Statics::ClassParams = {
	&APuerta::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APuerta_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Statics::Class_MetaDataParams), Z_Construct_UClass_APuerta_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APuerta()
{
	if (!Z_Registration_Info_UClass_APuerta.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuerta.OuterSingleton, Z_Construct_UClass_APuerta_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APuerta.OuterSingleton;
}
template<> BOMBERMAN202501_API UClass* StaticClass<APuerta>()
{
	return APuerta::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APuerta);
APuerta::~APuerta() {}
// End Class APuerta

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_Puerta_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APuerta, APuerta::StaticClass, TEXT("APuerta"), &Z_Registration_Info_UClass_APuerta, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuerta), 2387487391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_Puerta_h_1883061568(TEXT("/Script/BomberMan202501"),
	Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_Puerta_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_Puerta_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
