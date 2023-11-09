// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_GAME/FPS_GAMEGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_GAMEGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FPS_GAME_API UClass* Z_Construct_UClass_AFPS_GAMEGameModeBase();
	FPS_GAME_API UClass* Z_Construct_UClass_AFPS_GAMEGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_GAME();
// End Cross Module References
	void AFPS_GAMEGameModeBase::StaticRegisterNativesAFPS_GAMEGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPS_GAMEGameModeBase);
	UClass* Z_Construct_UClass_AFPS_GAMEGameModeBase_NoRegister()
	{
		return AFPS_GAMEGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_GAMEGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_GAMEGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_GAME,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_GAMEGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPS_GAMEGameModeBase.h" },
		{ "ModuleRelativePath", "FPS_GAMEGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_GAMEGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_GAMEGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPS_GAMEGameModeBase_Statics::ClassParams = {
		&AFPS_GAMEGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPS_GAMEGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_GAMEGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPS_GAMEGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFPS_GAMEGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPS_GAMEGameModeBase.OuterSingleton, Z_Construct_UClass_AFPS_GAMEGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPS_GAMEGameModeBase.OuterSingleton;
	}
	template<> FPS_GAME_API UClass* StaticClass<AFPS_GAMEGameModeBase>()
	{
		return AFPS_GAMEGameModeBase::StaticClass();
	}
	AFPS_GAMEGameModeBase::AFPS_GAMEGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_GAMEGameModeBase);
	AFPS_GAMEGameModeBase::~AFPS_GAMEGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_natal_Documents_University_Advanced_Game_Engine_UE5_Assesment_FPS_GAME_Source_FPS_GAME_FPS_GAMEGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natal_Documents_University_Advanced_Game_Engine_UE5_Assesment_FPS_GAME_Source_FPS_GAME_FPS_GAMEGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPS_GAMEGameModeBase, AFPS_GAMEGameModeBase::StaticClass, TEXT("AFPS_GAMEGameModeBase"), &Z_Registration_Info_UClass_AFPS_GAMEGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPS_GAMEGameModeBase), 33877937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natal_Documents_University_Advanced_Game_Engine_UE5_Assesment_FPS_GAME_Source_FPS_GAME_FPS_GAMEGameModeBase_h_1814303455(TEXT("/Script/FPS_GAME"),
		Z_CompiledInDeferFile_FID_Users_natal_Documents_University_Advanced_Game_Engine_UE5_Assesment_FPS_GAME_Source_FPS_GAME_FPS_GAMEGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natal_Documents_University_Advanced_Game_Engine_UE5_Assesment_FPS_GAME_Source_FPS_GAME_FPS_GAMEGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
