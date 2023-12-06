// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_GAME/Public/Timer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FPS_GAME_API UClass* Z_Construct_UClass_ATimer();
	FPS_GAME_API UClass* Z_Construct_UClass_ATimer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_GAME();
// End Cross Module References
	void ATimer::StaticRegisterNativesATimer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimer);
	UClass* Z_Construct_UClass_ATimer_NoRegister()
	{
		return ATimer::StaticClass();
	}
	struct Z_Construct_UClass_ATimer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_GAME,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Timer.h" },
		{ "ModuleRelativePath", "Public/Timer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimer_Statics::ClassParams = {
		&ATimer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATimer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimer()
	{
		if (!Z_Registration_Info_UClass_ATimer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimer.OuterSingleton, Z_Construct_UClass_ATimer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATimer.OuterSingleton;
	}
	template<> FPS_GAME_API UClass* StaticClass<ATimer>()
	{
		return ATimer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimer);
	ATimer::~ATimer() {}
	struct Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_Timer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_Timer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATimer, ATimer::StaticClass, TEXT("ATimer"), &Z_Registration_Info_UClass_ATimer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimer), 2292833661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_Timer_h_2088868472(TEXT("/Script/FPS_GAME"),
		Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_Timer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_Timer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
