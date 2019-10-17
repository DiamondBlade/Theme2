// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef THEME_ThemeProjectile_generated_h
#error "ThemeProjectile.generated.h already included, missing '#pragma once' in ThemeProjectile.h"
#endif
#define THEME_ThemeProjectile_generated_h

#define Theme_Source_Theme_ThemeProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Theme_Source_Theme_ThemeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Theme_Source_Theme_ThemeProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThemeProjectile(); \
	friend struct Z_Construct_UClass_AThemeProjectile_Statics; \
public: \
	DECLARE_CLASS(AThemeProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Theme"), NO_API) \
	DECLARE_SERIALIZER(AThemeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Theme_Source_Theme_ThemeProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAThemeProjectile(); \
	friend struct Z_Construct_UClass_AThemeProjectile_Statics; \
public: \
	DECLARE_CLASS(AThemeProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Theme"), NO_API) \
	DECLARE_SERIALIZER(AThemeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Theme_Source_Theme_ThemeProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThemeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThemeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThemeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThemeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThemeProjectile(AThemeProjectile&&); \
	NO_API AThemeProjectile(const AThemeProjectile&); \
public:


#define Theme_Source_Theme_ThemeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThemeProjectile(AThemeProjectile&&); \
	NO_API AThemeProjectile(const AThemeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThemeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThemeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThemeProjectile)


#define Theme_Source_Theme_ThemeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AThemeProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AThemeProjectile, ProjectileMovement); }


#define Theme_Source_Theme_ThemeProjectile_h_9_PROLOG
#define Theme_Source_Theme_ThemeProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Theme_Source_Theme_ThemeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Theme_Source_Theme_ThemeProjectile_h_12_RPC_WRAPPERS \
	Theme_Source_Theme_ThemeProjectile_h_12_INCLASS \
	Theme_Source_Theme_ThemeProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Theme_Source_Theme_ThemeProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Theme_Source_Theme_ThemeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Theme_Source_Theme_ThemeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Theme_Source_Theme_ThemeProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Theme_Source_Theme_ThemeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEME_API UClass* StaticClass<class AThemeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Theme_Source_Theme_ThemeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
