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
#ifdef READALTER_SwitchMaterialMesh_generated_h
#error "SwitchMaterialMesh.generated.h already included, missing '#pragma once' in SwitchMaterialMesh.h"
#endif
#define READALTER_SwitchMaterialMesh_generated_h

#define ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_SPARSE_DATA
#define ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_RPC_WRAPPERS \
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


#define ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwitchMaterialMesh(); \
	friend struct Z_Construct_UClass_ASwitchMaterialMesh_Statics; \
public: \
	DECLARE_CLASS(ASwitchMaterialMesh, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(ASwitchMaterialMesh)


#define ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASwitchMaterialMesh(); \
	friend struct Z_Construct_UClass_ASwitchMaterialMesh_Statics; \
public: \
	DECLARE_CLASS(ASwitchMaterialMesh, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReadAlter"), NO_API) \
	DECLARE_SERIALIZER(ASwitchMaterialMesh)


#define ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwitchMaterialMesh(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwitchMaterialMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwitchMaterialMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwitchMaterialMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwitchMaterialMesh(ASwitchMaterialMesh&&); \
	NO_API ASwitchMaterialMesh(const ASwitchMaterialMesh&); \
public:


#define ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwitchMaterialMesh(ASwitchMaterialMesh&&); \
	NO_API ASwitchMaterialMesh(const ASwitchMaterialMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwitchMaterialMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwitchMaterialMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwitchMaterialMesh)


#define ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_PRIVATE_PROPERTY_OFFSET
#define ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_9_PROLOG
#define ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_RPC_WRAPPERS \
	ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_INCLASS \
	ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_PRIVATE_PROPERTY_OFFSET \
	ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_SPARSE_DATA \
	ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_INCLASS_NO_PURE_DECLS \
	ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READALTER_API UClass* StaticClass<class ASwitchMaterialMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ReadAlter_Source_ReadAlter_SwitchMaterialMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
