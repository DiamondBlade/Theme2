// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEME_ThemeHUD_generated_h
#error "ThemeHUD.generated.h already included, missing '#pragma once' in ThemeHUD.h"
#endif
#define THEME_ThemeHUD_generated_h

#define Theme_Source_Theme_ThemeHUD_h_12_RPC_WRAPPERS
#define Theme_Source_Theme_ThemeHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Theme_Source_Theme_ThemeHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThemeHUD(); \
	friend struct Z_Construct_UClass_AThemeHUD_Statics; \
public: \
	DECLARE_CLASS(AThemeHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Theme"), NO_API) \
	DECLARE_SERIALIZER(AThemeHUD)


#define Theme_Source_Theme_ThemeHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAThemeHUD(); \
	friend struct Z_Construct_UClass_AThemeHUD_Statics; \
public: \
	DECLARE_CLASS(AThemeHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Theme"), NO_API) \
	DECLARE_SERIALIZER(AThemeHUD)


#define Theme_Source_Theme_ThemeHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThemeHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThemeHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThemeHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThemeHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThemeHUD(AThemeHUD&&); \
	NO_API AThemeHUD(const AThemeHUD&); \
public:


#define Theme_Source_Theme_ThemeHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThemeHUD(AThemeHUD&&); \
	NO_API AThemeHUD(const AThemeHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThemeHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThemeHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThemeHUD)


#define Theme_Source_Theme_ThemeHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define Theme_Source_Theme_ThemeHUD_h_9_PROLOG
#define Theme_Source_Theme_ThemeHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Theme_Source_Theme_ThemeHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Theme_Source_Theme_ThemeHUD_h_12_RPC_WRAPPERS \
	Theme_Source_Theme_ThemeHUD_h_12_INCLASS \
	Theme_Source_Theme_ThemeHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Theme_Source_Theme_ThemeHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Theme_Source_Theme_ThemeHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	Theme_Source_Theme_ThemeHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Theme_Source_Theme_ThemeHUD_h_12_INCLASS_NO_PURE_DECLS \
	Theme_Source_Theme_ThemeHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEME_API UClass* StaticClass<class AThemeHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Theme_Source_Theme_ThemeHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
