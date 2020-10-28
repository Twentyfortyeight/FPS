// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/RegisterComponentHit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRegisterComponentHit() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_ARegisterComponentHit_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_ARegisterComponentHit();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ARegisterComponentHit::StaticRegisterNativesARegisterComponentHit()
	{
	}
	UClass* Z_Construct_UClass_ARegisterComponentHit_NoRegister()
	{
		return ARegisterComponentHit::StaticClass();
	}
	struct Z_Construct_UClass_ARegisterComponentHit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARegisterComponentHit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegisterComponentHit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RegisterComponentHit.h" },
		{ "ModuleRelativePath", "RegisterComponentHit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARegisterComponentHit_Statics::NewProp_MyComp_MetaData[] = {
		{ "Category", "RegisterComponentHit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RegisterComponentHit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARegisterComponentHit_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARegisterComponentHit, MyComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARegisterComponentHit_Statics::NewProp_MyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARegisterComponentHit_Statics::NewProp_MyComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARegisterComponentHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARegisterComponentHit_Statics::NewProp_MyComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARegisterComponentHit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARegisterComponentHit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARegisterComponentHit_Statics::ClassParams = {
		&ARegisterComponentHit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARegisterComponentHit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARegisterComponentHit_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARegisterComponentHit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARegisterComponentHit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARegisterComponentHit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARegisterComponentHit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARegisterComponentHit, 3628399960);
	template<> READALTER_API UClass* StaticClass<ARegisterComponentHit>()
	{
		return ARegisterComponentHit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARegisterComponentHit(Z_Construct_UClass_ARegisterComponentHit, &ARegisterComponentHit::StaticClass, TEXT("/Script/ReadAlter"), TEXT("ARegisterComponentHit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARegisterComponentHit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
