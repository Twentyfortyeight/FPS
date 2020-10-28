// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/RotateanActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotateanActor() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_ARotateanActor_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_ARotateanActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
// End Cross Module References
	void ARotateanActor::StaticRegisterNativesARotateanActor()
	{
	}
	UClass* Z_Construct_UClass_ARotateanActor_NoRegister()
	{
		return ARotateanActor::StaticClass();
	}
	struct Z_Construct_UClass_ARotateanActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollhValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollhValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawhValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawhValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotateanActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateanActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RotateanActor.h" },
		{ "ModuleRelativePath", "RotateanActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateanActor_Statics::NewProp_RollhValue_MetaData[] = {
		{ "Category", "RotateanActor" },
		{ "ModuleRelativePath", "RotateanActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotateanActor_Statics::NewProp_RollhValue = { "RollhValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARotateanActor, RollhValue), METADATA_PARAMS(Z_Construct_UClass_ARotateanActor_Statics::NewProp_RollhValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARotateanActor_Statics::NewProp_RollhValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateanActor_Statics::NewProp_YawhValue_MetaData[] = {
		{ "Category", "RotateanActor" },
		{ "ModuleRelativePath", "RotateanActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotateanActor_Statics::NewProp_YawhValue = { "YawhValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARotateanActor, YawhValue), METADATA_PARAMS(Z_Construct_UClass_ARotateanActor_Statics::NewProp_YawhValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARotateanActor_Statics::NewProp_YawhValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateanActor_Statics::NewProp_PitchValue_MetaData[] = {
		{ "Category", "RotateanActor" },
		{ "ModuleRelativePath", "RotateanActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotateanActor_Statics::NewProp_PitchValue = { "PitchValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARotateanActor, PitchValue), METADATA_PARAMS(Z_Construct_UClass_ARotateanActor_Statics::NewProp_PitchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARotateanActor_Statics::NewProp_PitchValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotateanActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateanActor_Statics::NewProp_RollhValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateanActor_Statics::NewProp_YawhValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateanActor_Statics::NewProp_PitchValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotateanActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotateanActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARotateanActor_Statics::ClassParams = {
		&ARotateanActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARotateanActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARotateanActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARotateanActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARotateanActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARotateanActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARotateanActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARotateanActor, 1407354869);
	template<> READALTER_API UClass* StaticClass<ARotateanActor>()
	{
		return ARotateanActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARotateanActor(Z_Construct_UClass_ARotateanActor, &ARotateanActor::StaticClass, TEXT("/Script/ReadAlter"), TEXT("ARotateanActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotateanActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
