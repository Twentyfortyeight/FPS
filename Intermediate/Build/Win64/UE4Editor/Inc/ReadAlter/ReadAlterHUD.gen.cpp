// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/ReadAlterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadAlterHUD() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_AReadAlterHUD_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_AReadAlterHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
// End Cross Module References
	void AReadAlterHUD::StaticRegisterNativesAReadAlterHUD()
	{
	}
	UClass* Z_Construct_UClass_AReadAlterHUD_NoRegister()
	{
		return AReadAlterHUD::StaticClass();
	}
	struct Z_Construct_UClass_AReadAlterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReadAlterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReadAlterHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ReadAlterHUD.h" },
		{ "ModuleRelativePath", "ReadAlterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReadAlterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReadAlterHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReadAlterHUD_Statics::ClassParams = {
		&AReadAlterHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AReadAlterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReadAlterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReadAlterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReadAlterHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReadAlterHUD, 3342222094);
	template<> READALTER_API UClass* StaticClass<AReadAlterHUD>()
	{
		return AReadAlterHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReadAlterHUD(Z_Construct_UClass_AReadAlterHUD, &AReadAlterHUD::StaticClass, TEXT("/Script/ReadAlter"), TEXT("AReadAlterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReadAlterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
