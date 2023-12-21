// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_GAME_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FPS_GAME;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FPS_GAME()
	{
		if (!Z_Registration_Info_UPackage__Script_FPS_GAME.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPS_GAME",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x370BA45E,
				0xD780629E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FPS_GAME.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FPS_GAME.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FPS_GAME(Z_Construct_UPackage__Script_FPS_GAME, TEXT("/Script/FPS_GAME"), Z_Registration_Info_UPackage__Script_FPS_GAME, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x370BA45E, 0xD780629E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
