// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadAlter/PawnMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnMovement() {}
// Cross Module References
	READALTER_API UClass* Z_Construct_UClass_UPawnMovement_NoRegister();
	READALTER_API UClass* Z_Construct_UClass_UPawnMovement();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ReadAlter();
// End Cross Module References
	void UPawnMovement::StaticRegisterNativesUPawnMovement()
	{
	}
	UClass* Z_Construct_UClass_UPawnMovement_NoRegister()
	{
		return UPawnMovement::StaticClass();
	}
	struct Z_Construct_UClass_UPawnMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadAlter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnMovement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PawnMovement.h" },
		{ "ModuleRelativePath", "PawnMovement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnMovement_Statics::ClassParams = {
		&UPawnMovement::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnMovement, 4024437954);
	template<> READALTER_API UClass* StaticClass<UPawnMovement>()
	{
		return UPawnMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnMovement(Z_Construct_UClass_UPawnMovement, &UPawnMovement::StaticClass, TEXT("/Script/ReadAlter"), TEXT("UPawnMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
