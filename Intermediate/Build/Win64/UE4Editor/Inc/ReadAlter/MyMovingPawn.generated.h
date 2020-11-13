// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef READALTER_MyMovingPawn_generated_h
#error "MyMovingPawn.generated.h already included, missing '#pragma once' in MyMovingPawn.h"
#endif
#define READALTER_MyMovingPawn_generated_h

#define ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_SPARSE_DATA
#define ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_RPC_WRAPPERS
#define ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyMovingPawn(); \
	friend struct Z_Construct_UClass_AMyMovingPawn_Statics; \
public: \
	DECLARE_CLASS(AMyMovingPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(AMyMovingPawn)


#define ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyMovingPawn(); \
	friend struct Z_Construct_UClass_AMyMovingPawn_Statics; \
public: \
	DECLARE_CLASS(AMyMovingPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(AMyMovingPawn)


#define ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyMovingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyMovingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMovingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMovingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyMovingPawn(AMyMovingPawn&&); \
	NO_API AMyMovingPawn(const AMyMovingPawn&); \
public:


#define ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyMovingPawn(AMyMovingPawn&&); \
	NO_API AMyMovingPawn(const AMyMovingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyMovingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyMovingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyMovingPawn)


#define ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_PRIVATE_PROPERTY_OFFSET
#define ReadAlter_Source_ReadAlter_MyMovingPawn_h_10_PROLOG
#define ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_RPC_WRAPPERS \
	ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_INCLASS \
	ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_INCLASS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_MyMovingPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READALTER_API UClass* StaticClass<class AMyMovingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ReadAlter_Source_ReadAlter_MyMovingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
