// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef READALTER_ReadAlterCharacter_generated_h
#error "ReadAlterCharacter.generated.h already included, missing '#pragma once' in ReadAlterCharacter.h"
#endif
#define READALTER_ReadAlterCharacter_generated_h

#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_SPARSE_DATA
#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_RPC_WRAPPERS
#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReadAlterCharacter(); \
	friend struct Z_Construct_UClass_AReadAlterCharacter_Statics; \
public: \
	DECLARE_CLASS(AReadAlterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(AReadAlterCharacter)


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAReadAlterCharacter(); \
	friend struct Z_Construct_UClass_AReadAlterCharacter_Statics; \
public: \
	DECLARE_CLASS(AReadAlterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(AReadAlterCharacter)


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReadAlterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReadAlterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReadAlterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReadAlterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReadAlterCharacter(AReadAlterCharacter&&); \
	NO_API AReadAlterCharacter(const AReadAlterCharacter&); \
public:


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReadAlterCharacter(AReadAlterCharacter&&); \
	NO_API AReadAlterCharacter(const AReadAlterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReadAlterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReadAlterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReadAlterCharacter)


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AReadAlterCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AReadAlterCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AReadAlterCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AReadAlterCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AReadAlterCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AReadAlterCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AReadAlterCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AReadAlterCharacter, L_MotionController); }


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_11_PROLOG
#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_RPC_WRAPPERS \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_INCLASS \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READALTER_API UClass* StaticClass<class AReadAlterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ReadAlter_Source_ReadAlter_ReadAlterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
