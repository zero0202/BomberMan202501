// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BloqueArena.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN202501_BloqueArena_generated_h
#error "BloqueArena.generated.h already included, missing '#pragma once' in BloqueArena.h"
#endif
#define BOMBERMAN202501_BloqueArena_generated_h

#define FID_BomberMan202501_Source_BomberMan202501_BloqueArena_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloqueArena(); \
	friend struct Z_Construct_UClass_ABloqueArena_Statics; \
public: \
	DECLARE_CLASS(ABloqueArena, ABloque, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan202501"), NO_API) \
	DECLARE_SERIALIZER(ABloqueArena)


#define FID_BomberMan202501_Source_BomberMan202501_BloqueArena_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABloqueArena(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABloqueArena(ABloqueArena&&); \
	ABloqueArena(const ABloqueArena&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloqueArena); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloqueArena); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloqueArena) \
	NO_API virtual ~ABloqueArena();


#define FID_BomberMan202501_Source_BomberMan202501_BloqueArena_h_12_PROLOG
#define FID_BomberMan202501_Source_BomberMan202501_BloqueArena_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BomberMan202501_Source_BomberMan202501_BloqueArena_h_15_INCLASS_NO_PURE_DECLS \
	FID_BomberMan202501_Source_BomberMan202501_BloqueArena_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN202501_API UClass* StaticClass<class ABloqueArena>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BomberMan202501_Source_BomberMan202501_BloqueArena_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
