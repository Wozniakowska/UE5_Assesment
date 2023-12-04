// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_GAME/Public/Lava.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLava() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	FPS_GAME_API UClass* Z_Construct_UClass_ALava();
	FPS_GAME_API UClass* Z_Construct_UClass_ALava_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_GAME();
// End Cross Module References
	void ALava::StaticRegisterNativesALava()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALava);
	UClass* Z_Construct_UClass_ALava_NoRegister()
	{
		return ALava::StaticClass();
	}
	struct Z_Construct_UClass_ALava_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALava_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_GAME,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALava_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Lava.h" },
		{ "ModuleRelativePath", "Public/Lava.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALava_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "CollisionComponents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Lava.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALava_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALava, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALava_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALava_Statics::NewProp_BoxComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALava_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALava_Statics::NewProp_BoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALava_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALava>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALava_Statics::ClassParams = {
		&ALava::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALava_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALava_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALava_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALava_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALava()
	{
		if (!Z_Registration_Info_UClass_ALava.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALava.OuterSingleton, Z_Construct_UClass_ALava_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALava.OuterSingleton;
	}
	template<> FPS_GAME_API UClass* StaticClass<ALava>()
	{
		return ALava::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALava);
	ALava::~ALava() {}
	struct Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_Lava_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_Lava_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALava, ALava::StaticClass, TEXT("ALava"), &Z_Registration_Info_UClass_ALava, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALava), 3838549888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_Lava_h_2089287394(TEXT("/Script/FPS_GAME"),
		Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_Lava_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPS_GAME_Source_FPS_GAME_Public_Lava_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
