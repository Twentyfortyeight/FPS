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
struct FVector;
struct FHitResult;
#ifdef READALTER_ReadAlterProjectile_generated_h
#error "ReadAlterProjectile.generated.h already included, missing '#pragma once' in ReadAlterProjectile.h"
#endif
#define READALTER_ReadAlterProjectile_generated_h

#define ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_SPARSE_DATA
#define ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReadAlterProjectile(); \
	friend struct Z_Construct_UClass_AReadAlterProjectile_Statics; \
public: \
	DECLARE_CLASS(AReadAlterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(AReadAlterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAReadAlterProjectile(); \
	friend struct Z_Construct_UClass_AReadAlterProjectile_Statics; \
public: \
	DECLARE_CLASS(AReadAlterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(AReadAlterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReadAlterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReadAlterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReadAlterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReadAlterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReadAlterProjectile(AReadAlterProjectile&&); \
	NO_API AReadAlterProjectile(const AReadAlterProjectile&); \
public:


#define ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReadAlterProjectile(AReadAlterProjectile&&); \
	NO_API AReadAlterProjectile(const AReadAlterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReadAlterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReadAlterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReadAlterProjectile)


#define ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AReadAlterProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AReadAlterProjectile, ProjectileMovement); }


#define ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_9_PROLOG
#define ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_RPC_WRAPPERS \
	ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_INCLASS \
	ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_INCLASS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_ReadAlterProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READALTER_API UClass* StaticClass<class AReadAlterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ReadAlter_Source_ReadAlter_ReadAlterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
