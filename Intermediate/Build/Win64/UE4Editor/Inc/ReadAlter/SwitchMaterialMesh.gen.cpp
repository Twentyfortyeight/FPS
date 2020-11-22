// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/SwitchMaterialMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchMaterialMesh() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_ASwitchMaterialMesh_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_ASwitchMaterialMesh();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
	READALTER_API UFunction* Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASwitchMaterialMesh::StaticRegisterNativesASwitchMaterialMesh()
	{
		UClass* Class = ASwitchMaterialMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ASwitchMaterialMesh::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics
	{
		struct SwitchMaterialMesh_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwitchMaterialMesh_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SwitchMaterialMesh_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SwitchMaterialMesh_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwitchMaterialMesh_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwitchMaterialMesh_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwitchMaterialMesh_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwitchMaterialMesh_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwitchMaterialMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwitchMaterialMesh, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(SwitchMaterialMesh_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASwitchMaterialMesh_NoRegister()
	{
		return ASwitchMaterialMesh::StaticClass();
	}
	struct Z_Construct_UClass_ASwitchMaterialMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyBoxx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyBoxx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_onMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_offMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwitchMaterialMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASwitchMaterialMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASwitchMaterialMesh_OnOverlapBegin, "OnOverlapBegin" }, // 1556639906
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitchMaterialMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwitchMaterialMesh.h" },
		{ "ModuleRelativePath", "SwitchMaterialMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_MyBoxx_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwitchMaterialMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_MyBoxx = { "MyBoxx", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwitchMaterialMesh, MyBoxx), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_MyBoxx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_MyBoxx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_onMaterial_MetaData[] = {
		{ "Category", "SwitchMaterialMesh" },
		{ "ModuleRelativePath", "SwitchMaterialMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_onMaterial = { "onMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwitchMaterialMesh, onMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_onMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_onMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_offMaterial_MetaData[] = {
		{ "Category", "SwitchMaterialMesh" },
		{ "ModuleRelativePath", "SwitchMaterialMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_offMaterial = { "offMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwitchMaterialMesh, offMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_offMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_offMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_MyStaticMesh_MetaData[] = {
		{ "Category", "SwitchMaterialMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwitchMaterialMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_MyStaticMesh = { "MyStaticMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwitchMaterialMesh, MyStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_MyStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_MyStaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwitchMaterialMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_MyBoxx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_onMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_offMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchMaterialMesh_Statics::NewProp_MyStaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwitchMaterialMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwitchMaterialMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwitchMaterialMesh_Statics::ClassParams = {
		&ASwitchMaterialMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASwitchMaterialMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchMaterialMesh_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASwitchMaterialMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchMaterialMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwitchMaterialMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwitchMaterialMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwitchMaterialMesh, 1398183029);
	template<> READALTER_API UClass* StaticClass<ASwitchMaterialMesh>()
	{
		return ASwitchMaterialMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwitchMaterialMesh(Z_Construct_UClass_ASwitchMaterialMesh, &ASwitchMaterialMesh::StaticClass, TEXT("/Script/ReadAlter"), TEXT("ASwitchMaterialMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwitchMaterialMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
