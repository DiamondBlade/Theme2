// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEME_ThemeCharacter_generated_h
#error "ThemeCharacter.generated.h already included, missing '#pragma once' in ThemeCharacter.h"
#endif
#define THEME_ThemeCharacter_generated_h

#define Theme_Source_Theme_ThemeCharacter_h_14_RPC_WRAPPERS
#define Theme_Source_Theme_ThemeCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Theme_Source_Theme_ThemeCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThemeCharacter(); \
	friend struct Z_Construct_UClass_AThemeCharacter_Statics; \
public: \
	DECLARE_CLASS(AThemeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Theme"), NO_API) \
	DECLARE_SERIALIZER(AThemeCharacter)


#define Theme_Source_Theme_ThemeCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAThemeCharacter(); \
	friend struct Z_Construct_UClass_AThemeCharacter_Statics; \
public: \
	DECLARE_CLASS(AThemeCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Theme"), NO_API) \
	DECLARE_SERIALIZER(AThemeCharacter)


#define Theme_Source_Theme_ThemeCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThemeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThemeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThemeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThemeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThemeCharacter(AThemeCharacter&&); \
	NO_API AThemeCharacter(const AThemeCharacter&); \
public:


#define Theme_Source_Theme_ThemeCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThemeCharacter(AThemeCharacter&&); \
	NO_API AThemeCharacter(const AThemeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThemeCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThemeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThemeCharacter)


#define Theme_Source_Theme_ThemeCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AThemeCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AThemeCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AThemeCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AThemeCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AThemeCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AThemeCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AThemeCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AThemeCharacter, L_MotionController); }


#define Theme_Source_Theme_ThemeCharacter_h_11_PROLOG
#define Theme_Source_Theme_ThemeCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Theme_Source_Theme_ThemeCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Theme_Source_Theme_ThemeCharacter_h_14_RPC_WRAPPERS \
	Theme_Source_Theme_ThemeCharacter_h_14_INCLASS \
	Theme_Source_Theme_ThemeCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Theme_Source_Theme_ThemeCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Theme_Source_Theme_ThemeCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Theme_Source_Theme_ThemeCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Theme_Source_Theme_ThemeCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Theme_Source_Theme_ThemeCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEME_API UClass* StaticClass<class AThemeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Theme_Source_Theme_ThemeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
