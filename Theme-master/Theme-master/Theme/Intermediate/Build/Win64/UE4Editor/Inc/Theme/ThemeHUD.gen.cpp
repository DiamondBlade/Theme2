// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Theme/ThemeHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThemeHUD() {}
// Cross Module References
	THEME_API UClass* Z_Construct_UClass_AThemeHUD_NoRegister();
	THEME_API UClass* Z_Construct_UClass_AThemeHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Theme();
// End Cross Module References
	void AThemeHUD::StaticRegisterNativesAThemeHUD()
	{
	}
	UClass* Z_Construct_UClass_AThemeHUD_NoRegister()
	{
		return AThemeHUD::StaticClass();
	}
	struct Z_Construct_UClass_AThemeHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThemeHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Theme,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThemeHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ThemeHUD.h" },
		{ "ModuleRelativePath", "ThemeHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThemeHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThemeHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThemeHUD_Statics::ClassParams = {
		&AThemeHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AThemeHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AThemeHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThemeHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThemeHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThemeHUD, 2482727227);
	template<> THEME_API UClass* StaticClass<AThemeHUD>()
	{
		return AThemeHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThemeHUD(Z_Construct_UClass_AThemeHUD, &AThemeHUD::StaticClass, TEXT("/Script/Theme"), TEXT("AThemeHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThemeHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
