// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/OpenDoorWithLerp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDoorWithLerp() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_AOpenDoorWithLerp_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_AOpenDoorWithLerp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AOpenDoorWithLerp::StaticRegisterNativesAOpenDoorWithLerp()
	{
	}
	UClass* Z_Construct_UClass_AOpenDoorWithLerp_NoRegister()
	{
		return AOpenDoorWithLerp::StaticClass();
	}
	struct Z_Construct_UClass_AOpenDoorWithLerp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOpenDoorWithLerp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDoorWithLerp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenDoorWithLerp.h" },
		{ "ModuleRelativePath", "OpenDoorWithLerp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDoorWithLerp_Statics::NewProp_BoxComp_MetaData[] = {
		{ "Category", "OpenDoorWithLerp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OpenDoorWithLerp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenDoorWithLerp_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenDoorWithLerp, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenDoorWithLerp_Statics::NewProp_BoxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenDoorWithLerp_Statics::NewProp_BoxComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDoorWithLerp_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "OpenDoorWithLerp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OpenDoorWithLerp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenDoorWithLerp_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenDoorWithLerp, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenDoorWithLerp_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenDoorWithLerp_Statics::NewProp_Door_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOpenDoorWithLerp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDoorWithLerp_Statics::NewProp_BoxComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDoorWithLerp_Statics::NewProp_Door,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOpenDoorWithLerp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOpenDoorWithLerp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOpenDoorWithLerp_Statics::ClassParams = {
		&AOpenDoorWithLerp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOpenDoorWithLerp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOpenDoorWithLerp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOpenDoorWithLerp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenDoorWithLerp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOpenDoorWithLerp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOpenDoorWithLerp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOpenDoorWithLerp, 1320604296);
	template<> READALTER_API UClass* StaticClass<AOpenDoorWithLerp>()
	{
		return AOpenDoorWithLerp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOpenDoorWithLerp(Z_Construct_UClass_AOpenDoorWithLerp, &AOpenDoorWithLerp::StaticClass, TEXT("/Script/ReadAlter"), TEXT("AOpenDoorWithLerp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenDoorWithLerp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
