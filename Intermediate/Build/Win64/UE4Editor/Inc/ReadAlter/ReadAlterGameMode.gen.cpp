// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/ReadAlterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadAlterGameMode() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_AReadAlterGameMode_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_AReadAlterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
// End Cross Module References
	void AReadAlterGameMode::StaticRegisterNativesAReadAlterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AReadAlterGameMode_NoRegister()
	{
		return AReadAlterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AReadAlterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReadAlterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReadAlterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ReadAlterGameMode.h" },
		{ "ModuleRelativePath", "ReadAlterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReadAlterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReadAlterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReadAlterGameMode_Statics::ClassParams = {
		&AReadAlterGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AReadAlterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReadAlterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReadAlterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReadAlterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReadAlterGameMode, 1909148179);
	template<> READALTER_API UClass* StaticClass<AReadAlterGameMode>()
	{
		return AReadAlterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReadAlterGameMode(Z_Construct_UClass_AReadAlterGameMode, &AReadAlterGameMode::StaticClass, TEXT("/Script/ReadAlter"), TEXT("AReadAlterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReadAlterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
