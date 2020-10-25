// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef READALTER_HideActor_generated_h
#error "HideActor.generated.h already included, missing '#pragma once' in HideActor.h"
#endif
#define READALTER_HideActor_generated_h

#define ReadAlter_Source_ReadAlter_HideActor_h_12_SPARSE_DATA
#define ReadAlter_Source_ReadAlter_HideActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableActor) \
	{ \
		P_GET_UBOOL(Z_Param_toHide); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableActor(Z_Param_toHide); \
		P_NATIVE_END; \
	}


#define ReadAlter_Source_ReadAlter_HideActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableActor) \
	{ \
		P_GET_UBOOL(Z_Param_toHide); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableActor(Z_Param_toHide); \
		P_NATIVE_END; \
	}


#define ReadAlter_Source_ReadAlter_HideActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHideActor(); \
	friend struct Z_Construct_UClass_AHideActor_Statics; \
public: \
	DECLARE_CLASS(AHideActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(AHideActor)


#define ReadAlter_Source_ReadAlter_HideActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHideActor(); \
	friend struct Z_Construct_UClass_AHideActor_Statics; \
public: \
	DECLARE_CLASS(AHideActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(AHideActor)


#define ReadAlter_Source_ReadAlter_HideActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHideActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHideActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHideActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHideActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHideActor(AHideActor&&); \
	NO_API AHideActor(const AHideActor&); \
public:


#define ReadAlter_Source_ReadAlter_HideActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHideActor(AHideActor&&); \
	NO_API AHideActor(const AHideActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHideActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHideActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHideActor)


#define ReadAlter_Source_ReadAlter_HideActor_h_12_PRIVATE_PROPERTY_OFFSET
#define ReadAlter_Source_ReadAlter_HideActor_h_9_PROLOG
#define ReadAlter_Source_ReadAlter_HideActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_HideActor_h_12_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_HideActor_h_12_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_HideActor_h_12_RPC_WRAPPERS \
	ReadAlter_Source_ReadAlter_HideActor_h_12_INCLASS \
	ReadAlter_Source_ReadAlter_HideActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ReadAlter_Source_ReadAlter_HideActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_HideActor_h_12_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_HideActor_h_12_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_HideActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_HideActor_h_12_INCLASS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_HideActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READALTER_API UClass* StaticClass<class AHideActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ReadAlter_Source_ReadAlter_HideActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
