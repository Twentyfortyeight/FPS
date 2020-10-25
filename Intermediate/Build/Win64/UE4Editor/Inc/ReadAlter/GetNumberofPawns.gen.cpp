// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/GetNumberofPawns.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetNumberofPawns() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_AGetNumberofPawns_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_AGetNumberofPawns();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
// End Cross Module References
	void AGetNumberofPawns::StaticRegisterNativesAGetNumberofPawns()
	{
	}
	UClass* Z_Construct_UClass_AGetNumberofPawns_NoRegister()
	{
		return AGetNumberofPawns::StaticClass();
	}
	struct Z_Construct_UClass_AGetNumberofPawns_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGetNumberofPawns_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGetNumberofPawns_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GetNumberofPawns.h" },
		{ "ModuleRelativePath", "GetNumberofPawns.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGetNumberofPawns_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGetNumberofPawns>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGetNumberofPawns_Statics::ClassParams = {
		&AGetNumberofPawns::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGetNumberofPawns_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGetNumberofPawns_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGetNumberofPawns()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGetNumberofPawns_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGetNumberofPawns, 827182013);
	template<> READALTER_API UClass* StaticClass<AGetNumberofPawns>()
	{
		return AGetNumberofPawns::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGetNumberofPawns(Z_Construct_UClass_AGetNumberofPawns, &AGetNumberofPawns::StaticClass, TEXT("/Script/ReadAlter"), TEXT("AGetNumberofPawns"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGetNumberofPawns);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
