// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/RadialImpulse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadialImpulse() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_ARadialImpulse_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_ARadialImpulse();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
// End Cross Module References
	void ARadialImpulse::StaticRegisterNativesARadialImpulse()
	{
	}
	UClass* Z_Construct_UClass_ARadialImpulse_NoRegister()
	{
		return ARadialImpulse::StaticClass();
	}
	struct Z_Construct_UClass_ARadialImpulse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARadialImpulse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadialImpulse_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RadialImpulse.h" },
		{ "ModuleRelativePath", "RadialImpulse.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARadialImpulse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARadialImpulse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARadialImpulse_Statics::ClassParams = {
		&ARadialImpulse::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARadialImpulse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARadialImpulse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARadialImpulse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARadialImpulse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARadialImpulse, 1057564802);
	template<> READALTER_API UClass* StaticClass<ARadialImpulse>()
	{
		return ARadialImpulse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARadialImpulse(Z_Construct_UClass_ARadialImpulse, &ARadialImpulse::StaticClass, TEXT("/Script/ReadAlter"), TEXT("ARadialImpulse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARadialImpulse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
