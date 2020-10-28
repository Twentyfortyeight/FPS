// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef READALTER_SecondTriggerBox_generated_h
#error "SecondTriggerBox.generated.h already included, missing '#pragma once' in SecondTriggerBox.h"
#endif
#define READALTER_SecondTriggerBox_generated_h

#define ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_SPARSE_DATA
#define ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASecondTriggerBox(); \
	friend struct Z_Construct_UClass_ASecondTriggerBox_Statics; \
public: \
	DECLARE_CLASS(ASecondTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(ASecondTriggerBox)


#define ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASecondTriggerBox(); \
	friend struct Z_Construct_UClass_ASecondTriggerBox_Statics; \
public: \
	DECLARE_CLASS(ASecondTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(ASecondTriggerBox)


#define ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASecondTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASecondTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASecondTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASecondTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASecondTriggerBox(ASecondTriggerBox&&); \
	NO_API ASecondTriggerBox(const ASecondTriggerBox&); \
public:


#define ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASecondTriggerBox(ASecondTriggerBox&&); \
	NO_API ASecondTriggerBox(const ASecondTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASecondTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASecondTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASecondTriggerBox)


#define ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET
#define ReadAlter_Source_ReadAlter_SecondTriggerBox_h_12_PROLOG
#define ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_RPC_WRAPPERS \
	ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_INCLASS \
	ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_SecondTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READALTER_API UClass* StaticClass<class ASecondTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ReadAlter_Source_ReadAlter_SecondTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
