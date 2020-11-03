// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef READALTER_LightSwichButton_generated_h
#error "LightSwichButton.generated.h already included, missing '#pragma once' in LightSwichButton.h"
#endif
#define READALTER_LightSwichButton_generated_h

#define ReadAlter_Source_ReadAlter_LightSwichButton_h_12_SPARSE_DATA
#define ReadAlter_Source_ReadAlter_LightSwichButton_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleLight(); \
		P_NATIVE_END; \
	}


#define ReadAlter_Source_ReadAlter_LightSwichButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleLight(); \
		P_NATIVE_END; \
	}


#define ReadAlter_Source_ReadAlter_LightSwichButton_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightSwichButton(); \
	friend struct Z_Construct_UClass_ALightSwichButton_Statics; \
public: \
	DECLARE_CLASS(ALightSwichButton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(ALightSwichButton)


#define ReadAlter_Source_ReadAlter_LightSwichButton_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALightSwichButton(); \
	friend struct Z_Construct_UClass_ALightSwichButton_Statics; \
public: \
	DECLARE_CLASS(ALightSwichButton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(ALightSwichButton)


#define ReadAlter_Source_ReadAlter_LightSwichButton_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightSwichButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightSwichButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwichButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwichButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwichButton(ALightSwichButton&&); \
	NO_API ALightSwichButton(const ALightSwichButton&); \
public:


#define ReadAlter_Source_ReadAlter_LightSwichButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwichButton(ALightSwichButton&&); \
	NO_API ALightSwichButton(const ALightSwichButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwichButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwichButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightSwichButton)


#define ReadAlter_Source_ReadAlter_LightSwichButton_h_12_PRIVATE_PROPERTY_OFFSET
#define ReadAlter_Source_ReadAlter_LightSwichButton_h_9_PROLOG
#define ReadAlter_Source_ReadAlter_LightSwichButton_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_LightSwichButton_h_12_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_LightSwichButton_h_12_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_LightSwichButton_h_12_RPC_WRAPPERS \
	ReadAlter_Source_ReadAlter_LightSwichButton_h_12_INCLASS \
	ReadAlter_Source_ReadAlter_LightSwichButton_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ReadAlter_Source_ReadAlter_LightSwichButton_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_LightSwichButton_h_12_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_LightSwichButton_h_12_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_LightSwichButton_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_LightSwichButton_h_12_INCLASS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_LightSwichButton_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READALTER_API UClass* StaticClass<class ALightSwichButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ReadAlter_Source_ReadAlter_LightSwichButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
