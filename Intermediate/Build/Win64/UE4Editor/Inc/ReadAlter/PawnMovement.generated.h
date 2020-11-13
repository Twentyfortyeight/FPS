// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef READALTER_PawnMovement_generated_h
#error "PawnMovement.generated.h already included, missing '#pragma once' in PawnMovement.h"
#endif
#define READALTER_PawnMovement_generated_h

#define ReadAlter_Source_ReadAlter_PawnMovement_h_15_SPARSE_DATA
#define ReadAlter_Source_ReadAlter_PawnMovement_h_15_RPC_WRAPPERS
#define ReadAlter_Source_ReadAlter_PawnMovement_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ReadAlter_Source_ReadAlter_PawnMovement_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnMovement(); \
	friend struct Z_Construct_UClass_UPawnMovement_Statics; \
public: \
	DECLARE_CLASS(UPawnMovement, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(UPawnMovement)


#define ReadAlter_Source_ReadAlter_PawnMovement_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPawnMovement(); \
	friend struct Z_Construct_UClass_UPawnMovement_Statics; \
public: \
	DECLARE_CLASS(UPawnMovement, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(UPawnMovement)


#define ReadAlter_Source_ReadAlter_PawnMovement_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnMovement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnMovement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnMovement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnMovement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnMovement(UPawnMovement&&); \
	NO_API UPawnMovement(const UPawnMovement&); \
public:


#define ReadAlter_Source_ReadAlter_PawnMovement_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnMovement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnMovement(UPawnMovement&&); \
	NO_API UPawnMovement(const UPawnMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnMovement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnMovement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnMovement)


#define ReadAlter_Source_ReadAlter_PawnMovement_h_15_PRIVATE_PROPERTY_OFFSET
#define ReadAlter_Source_ReadAlter_PawnMovement_h_12_PROLOG
#define ReadAlter_Source_ReadAlter_PawnMovement_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_PawnMovement_h_15_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_PawnMovement_h_15_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_PawnMovement_h_15_RPC_WRAPPERS \
	ReadAlter_Source_ReadAlter_PawnMovement_h_15_INCLASS \
	ReadAlter_Source_ReadAlter_PawnMovement_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ReadAlter_Source_ReadAlter_PawnMovement_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_PawnMovement_h_15_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_PawnMovement_h_15_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_PawnMovement_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_PawnMovement_h_15_INCLASS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_PawnMovement_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READALTER_API UClass* StaticClass<class UPawnMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ReadAlter_Source_ReadAlter_PawnMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
