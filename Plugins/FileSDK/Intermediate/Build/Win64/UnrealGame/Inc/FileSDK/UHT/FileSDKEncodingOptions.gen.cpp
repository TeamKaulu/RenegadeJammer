// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileSDK/Public/FileSDKEncodingOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileSDKEncodingOptions() {}

// Begin Cross Module References
FILESDK_API UEnum* Z_Construct_UEnum_FileSDK_EFileSDKEncodingOptions();
UPackage* Z_Construct_UPackage__Script_FileSDK();
// End Cross Module References

// Begin Enum EFileSDKEncodingOptions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFileSDKEncodingOptions;
static UEnum* EFileSDKEncodingOptions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFileSDKEncodingOptions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFileSDKEncodingOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FileSDK_EFileSDKEncodingOptions, (UObject*)Z_Construct_UPackage__Script_FileSDK(), TEXT("EFileSDKEncodingOptions"));
	}
	return Z_Registration_Info_UEnum_EFileSDKEncodingOptions.OuterSingleton;
}
template<> FILESDK_API UEnum* StaticEnum<EFileSDKEncodingOptions>()
{
	return EFileSDKEncodingOptions_StaticEnum();
}
struct Z_Construct_UEnum_FileSDK_EFileSDKEncodingOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutoDetect.Name", "EFileSDKEncodingOptions::AutoDetect" },
		{ "BlueprintType", "true" },
		{ "ForceAnsi.Name", "EFileSDKEncodingOptions::ForceAnsi" },
		{ "ForceUnicode.Name", "EFileSDKEncodingOptions::ForceUnicode" },
		{ "ForceUTF8.Name", "EFileSDKEncodingOptions::ForceUTF8" },
		{ "ForceUTF8WithoutBOM.Name", "EFileSDKEncodingOptions::ForceUTF8WithoutBOM" },
		{ "ModuleRelativePath", "Public/FileSDKEncodingOptions.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFileSDKEncodingOptions::AutoDetect", (int64)EFileSDKEncodingOptions::AutoDetect },
		{ "EFileSDKEncodingOptions::ForceAnsi", (int64)EFileSDKEncodingOptions::ForceAnsi },
		{ "EFileSDKEncodingOptions::ForceUnicode", (int64)EFileSDKEncodingOptions::ForceUnicode },
		{ "EFileSDKEncodingOptions::ForceUTF8", (int64)EFileSDKEncodingOptions::ForceUTF8 },
		{ "EFileSDKEncodingOptions::ForceUTF8WithoutBOM", (int64)EFileSDKEncodingOptions::ForceUTF8WithoutBOM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FileSDK_EFileSDKEncodingOptions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FileSDK,
	nullptr,
	"EFileSDKEncodingOptions",
	"EFileSDKEncodingOptions",
	Z_Construct_UEnum_FileSDK_EFileSDKEncodingOptions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FileSDK_EFileSDKEncodingOptions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FileSDK_EFileSDKEncodingOptions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FileSDK_EFileSDKEncodingOptions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FileSDK_EFileSDKEncodingOptions()
{
	if (!Z_Registration_Info_UEnum_EFileSDKEncodingOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFileSDKEncodingOptions.InnerSingleton, Z_Construct_UEnum_FileSDK_EFileSDKEncodingOptions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFileSDKEncodingOptions.InnerSingleton;
}
// End Enum EFileSDKEncodingOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKEncodingOptions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFileSDKEncodingOptions_StaticEnum, TEXT("EFileSDKEncodingOptions"), &Z_Registration_Info_UEnum_EFileSDKEncodingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2639114133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKEncodingOptions_h_1536813253(TEXT("/Script/FileSDK"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKEncodingOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKEncodingOptions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
