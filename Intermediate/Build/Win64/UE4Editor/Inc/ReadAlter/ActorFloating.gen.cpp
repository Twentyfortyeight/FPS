// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/ActorFloating.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFloating() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_AActorFloating_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_AActorFloating();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
// End Cross Module References
	void AActorFloating::StaticRegisterNativesAActorFloating()
	{
	}
	UClass* Z_Construct_UClass_AActorFloating_NoRegister()
	{
		return AActorFloating::StaticClass();
	}
	struct Z_Construct_UClass_AActorFloating_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zvalue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Zvalue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yvalue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yvalue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Xvalue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Xvalue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorFloating_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorFloating_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorFloating.h" },
		{ "ModuleRelativePath", "ActorFloating.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorFloating_Statics::NewProp_Zvalue_MetaData[] = {
		{ "Category", "ActorFloating" },
		{ "ModuleRelativePath", "ActorFloating.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActorFloating_Statics::NewProp_Zvalue = { "Zvalue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorFloating, Zvalue), METADATA_PARAMS(Z_Construct_UClass_AActorFloating_Statics::NewProp_Zvalue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorFloating_Statics::NewProp_Zvalue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorFloating_Statics::NewProp_Yvalue_MetaData[] = {
		{ "Category", "ActorFloating" },
		{ "ModuleRelativePath", "ActorFloating.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActorFloating_Statics::NewProp_Yvalue = { "Yvalue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorFloating, Yvalue), METADATA_PARAMS(Z_Construct_UClass_AActorFloating_Statics::NewProp_Yvalue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorFloating_Statics::NewProp_Yvalue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorFloating_Statics::NewProp_Xvalue_MetaData[] = {
		{ "Category", "ActorFloating" },
		{ "ModuleRelativePath", "ActorFloating.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActorFloating_Statics::NewProp_Xvalue = { "Xvalue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorFloating, Xvalue), METADATA_PARAMS(Z_Construct_UClass_AActorFloating_Statics::NewProp_Xvalue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorFloating_Statics::NewProp_Xvalue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorFloating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorFloating_Statics::NewProp_Zvalue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorFloating_Statics::NewProp_Yvalue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorFloating_Statics::NewProp_Xvalue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorFloating_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorFloating>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActorFloating_Statics::ClassParams = {
		&AActorFloating::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AActorFloating_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AActorFloating_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActorFloating_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorFloating_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorFloating()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActorFloating_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorFloating, 2894507548);
	template<> READALTER_API UClass* StaticClass<AActorFloating>()
	{
		return AActorFloating::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorFloating(Z_Construct_UClass_AActorFloating, &AActorFloating::StaticClass, TEXT("/Script/ReadAlter"), TEXT("AActorFloating"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorFloating);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
