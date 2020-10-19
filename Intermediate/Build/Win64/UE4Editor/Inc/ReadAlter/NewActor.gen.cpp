// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/NewActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewActor() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_ANewActor_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_ANewActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANewActor::StaticRegisterNativesANewActor()
	{
	}
	UClass* Z_Construct_UClass_ANewActor_NoRegister()
	{
		return ANewActor::StaticClass();
	}
	struct Z_Construct_UClass_ANewActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_supermesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_supermesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NewActor.h" },
		{ "ModuleRelativePath", "NewActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewActor_Statics::NewProp_supermesh_MetaData[] = {
		{ "Category", "NewActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewActor_Statics::NewProp_supermesh = { "supermesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewActor, supermesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANewActor_Statics::NewProp_supermesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewActor_Statics::NewProp_supermesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewActor_Statics::NewProp_supermesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANewActor_Statics::ClassParams = {
		&ANewActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANewActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANewActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANewActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANewActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANewActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANewActor, 3304642548);
	template<> READALTER_API UClass* StaticClass<ANewActor>()
	{
		return ANewActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANewActor(Z_Construct_UClass_ANewActor, &ANewActor::StaticClass, TEXT("/Script/ReadAlter"), TEXT("ANewActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
