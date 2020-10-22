// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/DebugLogging.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugLogging() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_ADebugLogging_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_ADebugLogging();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
// End Cross Module References
	void ADebugLogging::StaticRegisterNativesADebugLogging()
	{
	}
	UClass* Z_Construct_UClass_ADebugLogging_NoRegister()
	{
		return ADebugLogging::StaticClass();
	}
	struct Z_Construct_UClass_ADebugLogging_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADebugLogging_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugLogging_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DebugLogging.h" },
		{ "ModuleRelativePath", "DebugLogging.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADebugLogging_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADebugLogging>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADebugLogging_Statics::ClassParams = {
		&ADebugLogging::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADebugLogging_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADebugLogging_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADebugLogging()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADebugLogging_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADebugLogging, 2152745209);
	template<> READALTER_API UClass* StaticClass<ADebugLogging>()
	{
		return ADebugLogging::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADebugLogging(Z_Construct_UClass_ADebugLogging, &ADebugLogging::StaticClass, TEXT("/Script/ReadAlter"), TEXT("ADebugLogging"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADebugLogging);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
