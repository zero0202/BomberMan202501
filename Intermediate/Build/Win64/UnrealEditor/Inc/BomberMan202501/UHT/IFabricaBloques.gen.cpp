// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan202501/IFabricaBloques.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFabricaBloques() {}

// Begin Cross Module References
BOMBERMAN202501_API UClass* Z_Construct_UClass_UIFabricaBloques();
BOMBERMAN202501_API UClass* Z_Construct_UClass_UIFabricaBloques_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan202501();
// End Cross Module References

// Begin Interface UIFabricaBloques
void UIFabricaBloques::StaticRegisterNativesUIFabricaBloques()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIFabricaBloques);
UClass* Z_Construct_UClass_UIFabricaBloques_NoRegister()
{
	return UIFabricaBloques::StaticClass();
}
struct Z_Construct_UClass_UIFabricaBloques_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IFabricaBloques.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIFabricaBloques>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIFabricaBloques_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan202501,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIFabricaBloques_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIFabricaBloques_Statics::ClassParams = {
	&UIFabricaBloques::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIFabricaBloques_Statics::Class_MetaDataParams), Z_Construct_UClass_UIFabricaBloques_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIFabricaBloques()
{
	if (!Z_Registration_Info_UClass_UIFabricaBloques.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIFabricaBloques.OuterSingleton, Z_Construct_UClass_UIFabricaBloques_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIFabricaBloques.OuterSingleton;
}
template<> BOMBERMAN202501_API UClass* StaticClass<UIFabricaBloques>()
{
	return UIFabricaBloques::StaticClass();
}
UIFabricaBloques::UIFabricaBloques(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIFabricaBloques);
UIFabricaBloques::~UIFabricaBloques() {}
// End Interface UIFabricaBloques

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIFabricaBloques, UIFabricaBloques::StaticClass, TEXT("UIFabricaBloques"), &Z_Registration_Info_UClass_UIFabricaBloques, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIFabricaBloques), 645565502U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h_3464461486(TEXT("/Script/BomberMan202501"),
	Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
