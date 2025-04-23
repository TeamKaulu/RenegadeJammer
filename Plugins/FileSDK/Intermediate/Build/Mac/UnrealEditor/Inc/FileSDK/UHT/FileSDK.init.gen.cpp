// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileSDK_init() {}
	FILESDK_API UFunction* Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature();
	FILESDK_API UFunction* Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FileSDK;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FileSDK()
	{
		if (!Z_Registration_Info_UPackage__Script_FileSDK.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FileSDK",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x27519382,
				0xE195F13D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FileSDK.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FileSDK.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FileSDK(Z_Construct_UPackage__Script_FileSDK, TEXT("/Script/FileSDK"), Z_Registration_Info_UPackage__Script_FileSDK, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x27519382, 0xE195F13D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
