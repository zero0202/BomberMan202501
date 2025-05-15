// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IFabricaBloques.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN202501_IFabricaBloques_generated_h
#error "IFabricaBloques.generated.h already included, missing '#pragma once' in IFabricaBloques.h"
#endif
#define BOMBERMAN202501_IFabricaBloques_generated_h

#define FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN202501_API UIFabricaBloques(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIFabricaBloques(UIFabricaBloques&&); \
	UIFabricaBloques(const UIFabricaBloques&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN202501_API, UIFabricaBloques); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFabricaBloques); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIFabricaBloques) \
	BOMBERMAN202501_API virtual ~UIFabricaBloques();


#define FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIFabricaBloques(); \
	friend struct Z_Construct_UClass_UIFabricaBloques_Statics; \
public: \
	DECLARE_CLASS(UIFabricaBloques, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BomberMan202501"), BOMBERMAN202501_API) \
	DECLARE_SERIALIZER(UIFabricaBloques)


#define FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h_13_GENERATED_UINTERFACE_BODY() \
	FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIFabricaBloques() {} \
public: \
	typedef UIFabricaBloques UClassType; \
	typedef IIFabricaBloques ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h_10_PROLOG
#define FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN202501_API UClass* StaticClass<class UIFabricaBloques>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan202501_Source_BomberMan202501_IFabricaBloques_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
