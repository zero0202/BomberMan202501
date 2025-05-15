// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan202501/BomberMan202501GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan202501GameMode() {}

// Begin Cross Module References
BOMBERMAN202501_API UClass* Z_Construct_UClass_ABloque_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ABomberMan202501GameMode();
BOMBERMAN202501_API UClass* Z_Construct_UClass_ABomberMan202501GameMode_NoRegister();
BOMBERMAN202501_API UClass* Z_Construct_UClass_UIFabricaBloques_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan202501();
// End Cross Module References

// Begin Class ABomberMan202501GameMode
void ABomberMan202501GameMode::StaticRegisterNativesABomberMan202501GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan202501GameMode);
UClass* Z_Construct_UClass_ABomberMan202501GameMode_NoRegister()
{
	return ABomberMan202501GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan202501GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan202501GameMode.h" },
		{ "ModuleRelativePath", "BomberMan202501GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloquesA_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Para bloque\n" },
#endif
		{ "ModuleRelativePath", "BomberMan202501GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Para bloque" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FabricaBloques_MetaData[] = {
		{ "ModuleRelativePath", "BomberMan202501GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloquesA_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BloquesA;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_FabricaBloques;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan202501GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan202501GameMode_Statics::NewProp_BloquesA_Inner = { "BloquesA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberMan202501GameMode_Statics::NewProp_BloquesA = { "BloquesA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan202501GameMode, BloquesA), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloquesA_MetaData), NewProp_BloquesA_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ABomberMan202501GameMode_Statics::NewProp_FabricaBloques = { "FabricaBloques", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan202501GameMode, FabricaBloques), Z_Construct_UClass_UIFabricaBloques_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FabricaBloques_MetaData), NewProp_FabricaBloques_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan202501GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan202501GameMode_Statics::NewProp_BloquesA_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan202501GameMode_Statics::NewProp_BloquesA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan202501GameMode_Statics::NewProp_FabricaBloques,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan202501GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberMan202501GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan202501,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan202501GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan202501GameMode_Statics::ClassParams = {
	&ABomberMan202501GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABomberMan202501GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan202501GameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan202501GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan202501GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan202501GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan202501GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan202501GameMode.OuterSingleton, Z_Construct_UClass_ABomberMan202501GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan202501GameMode.OuterSingleton;
}
template<> BOMBERMAN202501_API UClass* StaticClass<ABomberMan202501GameMode>()
{
	return ABomberMan202501GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan202501GameMode);
ABomberMan202501GameMode::~ABomberMan202501GameMode() {}
// End Class ABomberMan202501GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_BomberMan202501GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan202501GameMode, ABomberMan202501GameMode::StaticClass, TEXT("ABomberMan202501GameMode"), &Z_Registration_Info_UClass_ABomberMan202501GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan202501GameMode), 911327231U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_BomberMan202501GameMode_h_3096184039(TEXT("/Script/BomberMan202501"),
	Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_BomberMan202501GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_BomberMan202501GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
