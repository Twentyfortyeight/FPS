// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/RotateActorAroundPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotateActorAroundPlayer() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_ARotateActorAroundPlayer_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_ARotateActorAroundPlayer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ARotateActorAroundPlayer::StaticRegisterNativesARotateActorAroundPlayer()
	{
	}
	UClass* Z_Construct_UClass_ARotateActorAroundPlayer_NoRegister()
	{
		return ARotateActorAroundPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ARotateActorAroundPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Demension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Demension;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotateActorAroundPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateActorAroundPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RotateActorAroundPlayer.h" },
		{ "ModuleRelativePath", "RotateActorAroundPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "RotateActorAroundPlayer" },
		{ "ModuleRelativePath", "RotateActorAroundPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARotateActorAroundPlayer, Multiplier), METADATA_PARAMS(Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_AxisVector_MetaData[] = {
		{ "Category", "RotateActorAroundPlayer" },
		{ "ModuleRelativePath", "RotateActorAroundPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_AxisVector = { "AxisVector", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARotateActorAroundPlayer, AxisVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_AxisVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_AxisVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_Demension_MetaData[] = {
		{ "Category", "RotateActorAroundPlayer" },
		{ "ModuleRelativePath", "RotateActorAroundPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_Demension = { "Demension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARotateActorAroundPlayer, Demension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_Demension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_Demension_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotateActorAroundPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_Multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_AxisVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotateActorAroundPlayer_Statics::NewProp_Demension,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotateActorAroundPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotateActorAroundPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARotateActorAroundPlayer_Statics::ClassParams = {
		&ARotateActorAroundPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARotateActorAroundPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARotateActorAroundPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARotateActorAroundPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARotateActorAroundPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARotateActorAroundPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARotateActorAroundPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARotateActorAroundPlayer, 1637372352);
	template<> READALTER_API UClass* StaticClass<ARotateActorAroundPlayer>()
	{
		return ARotateActorAroundPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARotateActorAroundPlayer(Z_Construct_UClass_ARotateActorAroundPlayer, &ARotateActorAroundPlayer::StaticClass, TEXT("/Script/ReadAlter"), TEXT("ARotateActorAroundPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotateActorAroundPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
