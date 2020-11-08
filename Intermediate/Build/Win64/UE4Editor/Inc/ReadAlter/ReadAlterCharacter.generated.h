// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef READALTER_ReadAlterCharacter_generated_h
#error "ReadAlterCharacter.generated.h already included, missing '#pragma once' in ReadAlterCharacter.h"
#endif
#define READALTER_ReadAlterCharacter_generated_h

#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_SPARSE_DATA
#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReadAlterCharacter(); \
	friend struct Z_Construct_UClass_AReadAlterCharacter_Statics; \
public: \
	DECLARE_CLASS(AReadAlterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(AReadAlterCharacter)


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAReadAlterCharacter(); \
	friend struct Z_Construct_UClass_AReadAlterCharacter_Statics; \
public: \
	DECLARE_CLASS(AReadAlterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(AReadAlterCharacter)


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_STANDARD_CONSTRUCTORS \
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


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReadAlterCharacter(AReadAlterCharacter&&); \
	NO_API AReadAlterCharacter(const AReadAlterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReadAlterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReadAlterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReadAlterCharacter)


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AReadAlterCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AReadAlterCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AReadAlterCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AReadAlterCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AReadAlterCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AReadAlterCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AReadAlterCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AReadAlterCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__TriggerCapsule() { return STRUCT_OFFSET(AReadAlterCharacter, TriggerCapsule); }


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_13_PROLOG
#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_RPC_WRAPPERS \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_INCLASS \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_INCLASS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_ReadAlterCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READALTER_API UClass* StaticClass<class AReadAlterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ReadAlter_Source_ReadAlter_ReadAlterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
