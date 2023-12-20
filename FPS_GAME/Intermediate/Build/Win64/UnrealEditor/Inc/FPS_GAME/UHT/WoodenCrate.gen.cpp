// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_GAME/Public/WoodenCrate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWoodenCrate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPS_GAME_API UClass* Z_Construct_UClass_AWoodenCrate();
	FPS_GAME_API UClass* Z_Construct_UClass_AWoodenCrate_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPS_GAME();
// End Cross Module References
	void AWoodenCrate::StaticRegisterNativesAWoodenCrate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWoodenCrate);
	UClass* Z_Construct_UClass_AWoodenCrate_NoRegister()
	{
		return AWoodenCrate::StaticClass();
	}
	struct Z_Construct_UClass_AWoodenCrate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxNiagaraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxNiagaraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxDestroy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxDestroy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWoodenCrate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_GAME,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWoodenCrate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WoodenCrate.h" },
		{ "ModuleRelativePath", "Public/WoodenCrate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxCollisionComponent_MetaData[] = {
		{ "Category", "Shootable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WoodenCrate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxCollisionComponent = { "BoxCollisionComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWoodenCrate, BoxCollisionComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxCollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxCollisionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxMeshComponent_MetaData[] = {
		{ "Category", "Shootable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WoodenCrate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxMeshComponent = { "BoxMeshComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWoodenCrate, BoxMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxNiagaraComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WoodenCrate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxNiagaraComponent = { "BoxNiagaraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWoodenCrate, BoxNiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxNiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxNiagaraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxDestroy_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/WoodenCrate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxDestroy = { "BoxDestroy", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWoodenCrate, BoxDestroy), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxDestroy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWoodenCrate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxCollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxNiagaraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWoodenCrate_Statics::NewProp_BoxDestroy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWoodenCrate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWoodenCrate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWoodenCrate_Statics::ClassParams = {
		&AWoodenCrate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWoodenCrate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWoodenCrate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWoodenCrate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWoodenCrate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWoodenCrate()
	{
		if (!Z_Registration_Info_UClass_AWoodenCrate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWoodenCrate.OuterSingleton, Z_Construct_UClass_AWoodenCrate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWoodenCrate.OuterSingleton;
	}
	template<> FPS_GAME_API UClass* StaticClass<AWoodenCrate>()
	{
		return AWoodenCrate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWoodenCrate);
	AWoodenCrate::~AWoodenCrate() {}
	struct Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_WoodenCrate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_WoodenCrate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWoodenCrate, AWoodenCrate::StaticClass, TEXT("AWoodenCrate"), &Z_Registration_Info_UClass_AWoodenCrate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWoodenCrate), 3490920449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_WoodenCrate_h_944003587(TEXT("/Script/FPS_GAME"),
		Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_WoodenCrate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__Work_University_Year_3_UE5_Assesment_FPS_GAME_Source_FPS_GAME_Public_WoodenCrate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
