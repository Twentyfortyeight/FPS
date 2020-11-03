// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/RotateAngleAxisSpecifyVector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotateAngleAxisSpecifyVector() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_ARotateAngleAxisSpecifyVector_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_ARotateAngleAxisSpecifyVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
// End Cross Module References
	void ARotateAngleAxisSpecifyVector::StaticRegisterNativesARotateAngleAxisSpecifyVector()
	{
	}
	UClass* Z_Construct_UClass_ARotateAngleAxisSpecifyVector_NoRegister()
	{
		return ARotateAngleAxisSpecifyVector::StaticClass();
	}
	struct Z_Construct_UClass_ARotateAngleAxisSpecifyVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotateAngleAxisSpecifyVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateAngleAxisSpecifyVector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RotateAngleAxisSpecifyVector.h" },
		{ "ModuleRelativePath", "RotateAngleAxisSpecifyVector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotateAngleAxisSpecifyVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotateAngleAxisSpecifyVector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARotateAngleAxisSpecifyVector_Statics::ClassParams = {
		&ARotateAngleAxisSpecifyVector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARotateAngleAxisSpecifyVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARotateAngleAxisSpecifyVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARotateAngleAxisSpecifyVector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARotateAngleAxisSpecifyVector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARotateAngleAxisSpecifyVector, 131500827);
	template<> READALTER_API UClass* StaticClass<ARotateAngleAxisSpecifyVector>()
	{
		return ARotateAngleAxisSpecifyVector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARotateAngleAxisSpecifyVector(Z_Construct_UClass_ARotateAngleAxisSpecifyVector, &ARotateAngleAxisSpecifyVector::StaticClass, TEXT("/Script/ReadAlter"), TEXT("ARotateAngleAxisSpecifyVector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotateAngleAxisSpecifyVector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
