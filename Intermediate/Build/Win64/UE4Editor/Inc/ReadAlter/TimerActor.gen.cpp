// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/TimerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerActor() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_ATimerActor_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_ATimerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
// End Cross Module References
	void ATimerActor::StaticRegisterNativesATimerActor()
	{
	}
	UClass* Z_Construct_UClass_ATimerActor_NoRegister()
	{
		return ATimerActor::StaticClass();
	}
	struct Z_Construct_UClass_ATimerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimerActor.h" },
		{ "ModuleRelativePath", "TimerActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimerActor_Statics::ClassParams = {
		&ATimerActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATimerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimerActor, 4121284352);
	template<> READALTER_API UClass* StaticClass<ATimerActor>()
	{
		return ATimerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimerActor(Z_Construct_UClass_ATimerActor, &ATimerActor::StaticClass, TEXT("/Script/ReadAlter"), TEXT("ATimerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
