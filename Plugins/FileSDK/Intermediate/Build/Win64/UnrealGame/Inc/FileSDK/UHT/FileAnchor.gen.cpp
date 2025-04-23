// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileSDK/Public/FileAnchor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileAnchor() {}

// Begin Cross Module References
FILESDK_API UEnum* Z_Construct_UEnum_FileSDK_EFileSDKFileAnchor();
UPackage* Z_Construct_UPackage__Script_FileSDK();
// End Cross Module References

// Begin Enum EFileSDKFileAnchor
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFileSDKFileAnchor;
static UEnum* EFileSDKFileAnchor_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFileSDKFileAnchor.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFileSDKFileAnchor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FileSDK_EFileSDKFileAnchor, (UObject*)Z_Construct_UPackage__Script_FileSDK(), TEXT("EFileSDKFileAnchor"));
	}
	return Z_Registration_Info_UEnum_EFileSDKFileAnchor.OuterSingleton;
}
template<> FILESDK_API UEnum* StaticEnum<EFileSDKFileAnchor>()
{
	return EFileSDKFileAnchor_StaticEnum();
}
struct Z_Construct_UEnum_FileSDK_EFileSDKFileAnchor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Beginning.Comment", "/**\n   * References the beginning of the file. Great for reading metadata, resetting your location,\n   * or just going to exact location. If you're in the middle of the file and want to to go to\n   * 300 bytes from the beginning, set Anchor to Beginning and Offset to 300. A negative Offset\n   * doesn't make sense when using Beginning.\n   */" },
		{ "Beginning.Name", "EFileSDKFileAnchor::Beginning" },
		{ "Beginning.ToolTip", "References the beginning of the file. Great for reading metadata, resetting your location,\nor just going to exact location. If you're in the middle of the file and want to to go to\n300 bytes from the beginning, set Anchor to Beginning and Offset to 300. A negative Offset\ndoesn't make sense when using Beginning." },
		{ "BlueprintType", "true" },
		{ "Current.Comment", "/**\n   * References the current location of the file reader. Great for skipping chunks of data\n   * (i.e. your file has an array of stuff and you only want to read the metadata headers for\n   * each item, you can read the metadata, skip past the actual chunk, and go to the next\n   * metadata location) If you want to advanced your current location 100 bytes backwards,\n   * set Anchor to Current and Offset to -100.\n   */" },
		{ "Current.Name", "EFileSDKFileAnchor::Current" },
		{ "Current.ToolTip", "References the current location of the file reader. Great for skipping chunks of data\n(i.e. your file has an array of stuff and you only want to read the metadata headers for\neach item, you can read the metadata, skip past the actual chunk, and go to the next\nmetadata location) If you want to advanced your current location 100 bytes backwards,\nset Anchor to Current and Offset to -100." },
		{ "End.Comment", "/**\n   * References the end of the file. Great for reading footers where information is stored\n   * at the end of the file. Many times you use this when you open the file, but the metadata\n   * you want is near the end of the file a fixed number of bytes. For example, 300 bytes from\n   * the end would have Anchor set to End and Offset set to -300. A positive Offset doesn't\n   * make sense when using Beginning.\n   */" },
		{ "End.Name", "EFileSDKFileAnchor::End" },
		{ "End.ToolTip", "References the end of the file. Great for reading footers where information is stored\nat the end of the file. Many times you use this when you open the file, but the metadata\nyou want is near the end of the file a fixed number of bytes. For example, 300 bytes from\nthe end would have Anchor set to End and Offset set to -300. A positive Offset doesn't\nmake sense when using Beginning." },
		{ "ModuleRelativePath", "Public/FileAnchor.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFileSDKFileAnchor::Beginning", (int64)EFileSDKFileAnchor::Beginning },
		{ "EFileSDKFileAnchor::Current", (int64)EFileSDKFileAnchor::Current },
		{ "EFileSDKFileAnchor::End", (int64)EFileSDKFileAnchor::End },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FileSDK_EFileSDKFileAnchor_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FileSDK,
	nullptr,
	"EFileSDKFileAnchor",
	"EFileSDKFileAnchor",
	Z_Construct_UEnum_FileSDK_EFileSDKFileAnchor_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FileSDK_EFileSDKFileAnchor_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FileSDK_EFileSDKFileAnchor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FileSDK_EFileSDKFileAnchor_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FileSDK_EFileSDKFileAnchor()
{
	if (!Z_Registration_Info_UEnum_EFileSDKFileAnchor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFileSDKFileAnchor.InnerSingleton, Z_Construct_UEnum_FileSDK_EFileSDKFileAnchor_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFileSDKFileAnchor.InnerSingleton;
}
// End Enum EFileSDKFileAnchor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileAnchor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFileSDKFileAnchor_StaticEnum, TEXT("EFileSDKFileAnchor"), &Z_Registration_Info_UEnum_EFileSDKFileAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 234296418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileAnchor_h_3426134851(TEXT("/Script/FileSDK"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileAnchor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileAnchor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
