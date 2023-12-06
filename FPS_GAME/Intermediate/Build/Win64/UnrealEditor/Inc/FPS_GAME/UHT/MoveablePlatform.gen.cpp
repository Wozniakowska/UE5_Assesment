// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_GAME/Public/MoveablePlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveablePlatform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FPS_GAME_API UClass* Z_Construct_UClass_AMoveablePlatform();
	FPS_GAME_API UClass* Z_Construct_UClass_AMoveablePlatform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_GAME();
// End Cross Module References
	void AMoveablePlatform::StaticRegisterNativesAMoveablePlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoveablePlatform);
	UClass* Z_Construct_UClass_AMoveablePlatform_NoRegister()
	{
		return AMoveablePlatform::StaticClass();
	}
	struct Z_Construct_UClass_AMoveablePlatform_Statics
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
	UObject* (*const Z_Construct_UClass_AMoveablePlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_GAME,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveablePlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoveablePlatform.h" },
		{ "ModuleRelativePath", "Public/MoveablePlatform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "MoveablePlatform" },
		{ "ModuleRelativePath", "Public/MoveablePlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveablePlatform, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_MoveDistance_MetaData[] = {
		{ "Category", "MoveablePlatform" },
		{ "ModuleRelativePath", "Public/MoveablePlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveablePlatform, MoveDistance), METADATA_PARAMS(Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_MoveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_MoveDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_StartDistance_MetaData[] = {
		{ "Category", "MoveablePlatform" },
		{ "ModuleRelativePath", "Public/MoveablePlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoveablePlatform, StartDistance), METADATA_PARAMS(Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_StartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_StartDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoveablePlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_MoveDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoveablePlatform_Statics::NewProp_StartDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveablePlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveablePlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoveablePlatform_Statics::ClassParams = {
		&AMoveablePlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMoveablePlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMoveablePlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoveablePlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoveablePlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoveablePlatform()
	{
		if (!Z_Registration_Info_UClass_AMoveablePlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoveablePlatform.OuterSingleton, Z_Construct_UClass_AMoveablePlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMoveablePlatform.OuterSingleton;
	}
	template<> FPS_GAME_API UClass* StaticClass<AMoveablePlatform>()
	{
		return AMoveablePlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveablePlatform);
	AMoveablePlatform::~AMoveablePlatform() {}
	struct Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MoveablePlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MoveablePlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMoveablePlatform, AMoveablePlatform::StaticClass, TEXT("AMoveablePlatform"), &Z_Registration_Info_UClass_AMoveablePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoveablePlatform), 2988941539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MoveablePlatform_h_2530655730(TEXT("/Script/FPS_GAME"),
		Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MoveablePlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_MoveablePlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
