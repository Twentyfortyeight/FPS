// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/SweepTrace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSweepTrace() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_ASweepTrace_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_ASweepTrace();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
// End Cross Module References
	void ASweepTrace::StaticRegisterNativesASweepTrace()
	{
	}
	UClass* Z_Construct_UClass_ASweepTrace_NoRegister()
	{
		return ASweepTrace::StaticClass();
	}
	struct Z_Construct_UClass_ASweepTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASweepTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASweepTrace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SweepTrace.h" },
		{ "ModuleRelativePath", "SweepTrace.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASweepTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASweepTrace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASweepTrace_Statics::ClassParams = {
		&ASweepTrace::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASweepTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASweepTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASweepTrace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASweepTrace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASweepTrace, 1715446961);
	template<> READALTER_API UClass* StaticClass<ASweepTrace>()
	{
		return ASweepTrace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASweepTrace(Z_Construct_UClass_ASweepTrace, &ASweepTrace::StaticClass, TEXT("/Script/ReadAlter"), TEXT("ASweepTrace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASweepTrace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
