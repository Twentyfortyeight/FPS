// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/MyMovingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMovingPawn() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_AMyMovingPawn_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_AMyMovingPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
// End Cross Module References
	void AMyMovingPawn::StaticRegisterNativesAMyMovingPawn()
	{
	}
	UClass* Z_Construct_UClass_AMyMovingPawn_NoRegister()
	{
		return AMyMovingPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyMovingPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMovingPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMovingPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyMovingPawn.h" },
		{ "ModuleRelativePath", "MyMovingPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMovingPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMovingPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyMovingPawn_Statics::ClassParams = {
		&AMyMovingPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyMovingPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMovingPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMovingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyMovingPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyMovingPawn, 319442357);
	template<> READALTER_API UClass* StaticClass<AMyMovingPawn>()
	{
		return AMyMovingPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyMovingPawn(Z_Construct_UClass_AMyMovingPawn, &AMyMovingPawn::StaticClass, TEXT("/Script/ReadAlter"), TEXT("AMyMovingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMovingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
