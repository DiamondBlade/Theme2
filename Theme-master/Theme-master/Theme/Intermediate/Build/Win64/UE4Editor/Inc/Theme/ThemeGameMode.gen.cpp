// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Theme/ThemeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThemeGameMode() {}
// Cross Module References
	THEME_API UClass* Z_Construct_UClass_AThemeGameMode_NoRegister();
	THEME_API UClass* Z_Construct_UClass_AThemeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Theme();
// End Cross Module References
	void AThemeGameMode::StaticRegisterNativesAThemeGameMode()
	{
	}
	UClass* Z_Construct_UClass_AThemeGameMode_NoRegister()
	{
		return AThemeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AThemeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThemeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Theme,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThemeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ThemeGameMode.h" },
		{ "ModuleRelativePath", "ThemeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThemeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThemeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThemeGameMode_Statics::ClassParams = {
		&AThemeGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AThemeGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AThemeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThemeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThemeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThemeGameMode, 677520727);
	template<> THEME_API UClass* StaticClass<AThemeGameMode>()
	{
		return AThemeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThemeGameMode(Z_Construct_UClass_AThemeGameMode, &AThemeGameMode::StaticClass, TEXT("/Script/Theme"), TEXT("AThemeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThemeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
