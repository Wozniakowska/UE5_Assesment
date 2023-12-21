// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
#ifdef FPS_GAME_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define FPS_GAME_MainCharacter_generated_h

#define FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_SPARSE_DATA
#define FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSeconds); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSetRespawnLocation); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execRespawn);


#define FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSeconds); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSetRespawnLocation); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execRespawn);


#define FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_ACCESSORS
#define FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_GAME"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPS_GAME"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	NO_API virtual ~AMainCharacter();


#define FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter) \
	NO_API virtual ~AMainCharacter();


#define FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_15_PROLOG
#define FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_SPARSE_DATA \
	FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_RPC_WRAPPERS \
	FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_ACCESSORS \
	FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_INCLASS \
	FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_SPARSE_DATA \
	FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_ACCESSORS \
	FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_GAME_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
