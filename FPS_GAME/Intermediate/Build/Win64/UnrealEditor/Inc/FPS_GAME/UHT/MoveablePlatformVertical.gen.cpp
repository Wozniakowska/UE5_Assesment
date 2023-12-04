// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_GAME/Public/MoveablePlatformVertical.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveablePlatformVertical() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FPS_GAME_API UClass* Z_Construct_UClass_AMoveablePlatformVertical();
	FPS_GAME_API UClass* Z_Construct_UClass_AMoveablePlatformVertical_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_GAME();
// End Cross Module References
	void AMoveablePlatformVertical::StaticRegisterNativesAMoveablePlatformVertical()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoveablePlatformVertical);
	UClass* Z_Construct_UClass_AMoveablePlatformVertical_NoRegister()
	{
		return AMoveablePlatformVertical::StaticClass();
	}
	struct Z_Construct_UClass_AMoveablePlatformVertical_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveablePlatformVertical_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_GAME,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveablePlatformVertical_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoveablePlatformVertical.h" },
		{ "ModuleRelativePath", "Public/MoveablePlatformVertical.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "MoveablePlatformVertical" },
		{ "ModuleRelativePath", "Public/MoveablePlatformVertical.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveablePlatformVertical, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_MoveDistance_MetaData[] = {
		{ "Category", "MoveablePlatformVertical" },
		{ "ModuleRelativePath", "Public/MoveablePlatformVertical.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveablePlatformVertical, MoveDistance), METADATA_PARAMS(Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_MoveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_MoveDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_StartDistance_MetaData[] = {
		{ "Category", "MoveablePlatformVertical" },
		{ "ModuleRelativePath", "Public/MoveablePlatformVertical.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveablePlatformVertical, StartDistance), METADATA_PARAMS(Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_StartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_StartDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveablePlatformVertical_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_MoveDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveablePlatformVertical_Statics::NewProp_StartDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveablePlatformVertical_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveablePlatformVertical>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveablePlatformVertical_Statics::ClassParams = {
		&AMoveablePlatformVertical::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMoveablePlatformVertical_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMoveablePlatformVertical_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoveablePlatformVertical_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveablePlatformVertical_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoveablePlatformVertical()
	{
		if (!Z_Registration_Info_UClass_AMoveablePlatformVertical.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveablePlatformVertical.OuterSingleton, Z_Construct_UClass_AMoveablePlatformVertical_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMoveablePlatformVertical.OuterSingleton;
	}
	template<> FPS_GAME_API UClass* StaticClass<AMoveablePlatformVertical>()
	{
		return AMoveablePlatformVertical::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveablePlatformVertical);
	AMoveablePlatformVertical::~AMoveablePlatformVertical() {}
	struct Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_MoveablePlatformVertical_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_MoveablePlatformVertical_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMoveablePlatformVertical, AMoveablePlatformVertical::StaticClass, TEXT("AMoveablePlatformVertical"), &Z_Registration_Info_UClass_AMoveablePlatformVertical, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveablePlatformVertical), 16731998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_MoveablePlatformVertical_h_2672338705(TEXT("/Script/FPS_GAME"),
		Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_MoveablePlatformVertical_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_MoveablePlatformVertical_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
