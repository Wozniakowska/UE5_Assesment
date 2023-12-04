// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_GAME/Public/CollectibleSpin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectibleSpin() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FPS_GAME_API UClass* Z_Construct_UClass_ACollectibleSpin();
	FPS_GAME_API UClass* Z_Construct_UClass_ACollectibleSpin_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_GAME();
// End Cross Module References
	void ACollectibleSpin::StaticRegisterNativesACollectibleSpin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACollectibleSpin);
	UClass* Z_Construct_UClass_ACollectibleSpin_NoRegister()
	{
		return ACollectibleSpin::StaticClass();
	}
	struct Z_Construct_UClass_ACollectibleSpin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pitchValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pitchValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollectibleSpin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_GAME,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectibleSpin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CollectibleSpin.h" },
		{ "ModuleRelativePath", "Public/CollectibleSpin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_pitchValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/CollectibleSpin.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_pitchValue = { "pitchValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACollectibleSpin, pitchValue), METADATA_PARAMS(Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_pitchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_pitchValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_YawValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/CollectibleSpin.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_YawValue = { "YawValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACollectibleSpin, YawValue), METADATA_PARAMS(Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_YawValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_YawValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_RollValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/CollectibleSpin.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_RollValue = { "RollValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACollectibleSpin, RollValue), METADATA_PARAMS(Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_RollValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_RollValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollectibleSpin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_pitchValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_YawValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectibleSpin_Statics::NewProp_RollValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollectibleSpin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectibleSpin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollectibleSpin_Statics::ClassParams = {
		&ACollectibleSpin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACollectibleSpin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpin_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACollectibleSpin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleSpin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollectibleSpin()
	{
		if (!Z_Registration_Info_UClass_ACollectibleSpin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollectibleSpin.OuterSingleton, Z_Construct_UClass_ACollectibleSpin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACollectibleSpin.OuterSingleton;
	}
	template<> FPS_GAME_API UClass* StaticClass<ACollectibleSpin>()
	{
		return ACollectibleSpin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectibleSpin);
	ACollectibleSpin::~ACollectibleSpin() {}
	struct Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_CollectibleSpin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_CollectibleSpin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACollectibleSpin, ACollectibleSpin::StaticClass, TEXT("ACollectibleSpin"), &Z_Registration_Info_UClass_ACollectibleSpin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollectibleSpin), 3151546737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_CollectibleSpin_h_3475460691(TEXT("/Script/FPS_GAME"),
		Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_CollectibleSpin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_CollectibleSpin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
