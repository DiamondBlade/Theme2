// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEME_ThemeGameMode_generated_h
#error "ThemeGameMode.generated.h already included, missing '#pragma once' in ThemeGameMode.h"
#endif
#define THEME_ThemeGameMode_generated_h

#define Theme_Source_Theme_ThemeGameMode_h_12_RPC_WRAPPERS
#define Theme_Source_Theme_ThemeGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Theme_Source_Theme_ThemeGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThemeGameMode(); \
	friend struct Z_Construct_UClass_AThemeGameMode_Statics; \
public: \
	DECLARE_CLASS(AThemeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Theme"), THEME_API) \
	DECLARE_SERIALIZER(AThemeGameMode)


#define Theme_Source_Theme_ThemeGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAThemeGameMode(); \
	friend struct Z_Construct_UClass_AThemeGameMode_Statics; \
public: \
	DECLARE_CLASS(AThemeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Theme"), THEME_API) \
	DECLARE_SERIALIZER(AThemeGameMode)


#define Theme_Source_Theme_ThemeGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	THEME_API AThemeGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThemeGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THEME_API, AThemeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThemeGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	THEME_API AThemeGameMode(AThemeGameMode&&); \
	THEME_API AThemeGameMode(const AThemeGameMode&); \
public:


#define Theme_Source_Theme_ThemeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	THEME_API AThemeGameMode(AThemeGameMode&&); \
	THEME_API AThemeGameMode(const AThemeGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(THEME_API, AThemeGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThemeGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThemeGameMode)


#define Theme_Source_Theme_ThemeGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Theme_Source_Theme_ThemeGameMode_h_9_PROLOG
#define Theme_Source_Theme_ThemeGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Theme_Source_Theme_ThemeGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Theme_Source_Theme_ThemeGameMode_h_12_RPC_WRAPPERS \
	Theme_Source_Theme_ThemeGameMode_h_12_INCLASS \
	Theme_Source_Theme_ThemeGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Theme_Source_Theme_ThemeGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Theme_Source_Theme_ThemeGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Theme_Source_Theme_ThemeGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Theme_Source_Theme_ThemeGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Theme_Source_Theme_ThemeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEME_API UClass* StaticClass<class AThemeGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Theme_Source_Theme_ThemeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
