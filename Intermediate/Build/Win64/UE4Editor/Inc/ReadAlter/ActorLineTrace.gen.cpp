// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/ActorLineTrace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorLineTrace() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_AActorLineTrace_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_AActorLineTrace();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AActorLineTrace::StaticRegisterNativesAActorLineTrace()
	{
	}
	UClass* Z_Construct_UClass_AActorLineTrace_NoRegister()
	{
		return AActorLineTrace::StaticClass();
	}
	struct Z_Construct_UClass_AActorLineTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshOne;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorLineTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorLineTrace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorLineTrace.h" },
		{ "ModuleRelativePath", "ActorLineTrace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorLineTrace_Statics::NewProp_MeshTwo_MetaData[] = {
		{ "Category", "ActorLineTrace" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActorLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorLineTrace_Statics::NewProp_MeshTwo = { "MeshTwo", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorLineTrace, MeshTwo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorLineTrace_Statics::NewProp_MeshTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorLineTrace_Statics::NewProp_MeshTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorLineTrace_Statics::NewProp_MeshOne_MetaData[] = {
		{ "Category", "ActorLineTrace" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActorLineTrace.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorLineTrace_Statics::NewProp_MeshOne = { "MeshOne", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorLineTrace, MeshOne), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorLineTrace_Statics::NewProp_MeshOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorLineTrace_Statics::NewProp_MeshOne_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorLineTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorLineTrace_Statics::NewProp_MeshTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorLineTrace_Statics::NewProp_MeshOne,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorLineTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorLineTrace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActorLineTrace_Statics::ClassParams = {
		&AActorLineTrace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AActorLineTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AActorLineTrace_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActorLineTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorLineTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorLineTrace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActorLineTrace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorLineTrace, 1490251437);
	template<> READALTER_API UClass* StaticClass<AActorLineTrace>()
	{
		return AActorLineTrace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorLineTrace(Z_Construct_UClass_AActorLineTrace, &AActorLineTrace::StaticClass, TEXT("/Script/ReadAlter"), TEXT("AActorLineTrace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorLineTrace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
