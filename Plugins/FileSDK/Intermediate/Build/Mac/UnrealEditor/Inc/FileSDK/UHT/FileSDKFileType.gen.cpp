// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileSDK/Public/FileSDKFileType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileSDKFileType() {}

// Begin Cross Module References
FILESDK_API UEnum* Z_Construct_UEnum_FileSDK_EFileSDKFileType();
UPackage* Z_Construct_UPackage__Script_FileSDK();
// End Cross Module References

// Begin Enum EFileSDKFileType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFileSDKFileType;
static UEnum* EFileSDKFileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFileSDKFileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFileSDKFileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FileSDK_EFileSDKFileType, (UObject*)Z_Construct_UPackage__Script_FileSDK(), TEXT("EFileSDKFileType"));
	}
	return Z_Registration_Info_UEnum_EFileSDKFileType.OuterSingleton;
}
template<> FILESDK_API UEnum* StaticEnum<EFileSDKFileType>()
{
	return EFileSDKFileType_StaticEnum();
}
struct Z_Construct_UEnum_FileSDK_EFileSDKFileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Directory.Name", "EFileSDKFileType::Directory" },
		{ "File.Name", "EFileSDKFileType::File" },
		{ "ModuleRelativePath", "Public/FileSDKFileType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFileSDKFileType::File", (int64)EFileSDKFileType::File },
		{ "EFileSDKFileType::Directory", (int64)EFileSDKFileType::Directory },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FileSDK_EFileSDKFileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FileSDK,
	nullptr,
	"EFileSDKFileType",
	"EFileSDKFileType",
	Z_Construct_UEnum_FileSDK_EFileSDKFileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FileSDK_EFileSDKFileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FileSDK_EFileSDKFileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FileSDK_EFileSDKFileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FileSDK_EFileSDKFileType()
{
	if (!Z_Registration_Info_UEnum_EFileSDKFileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFileSDKFileType.InnerSingleton, Z_Construct_UEnum_FileSDK_EFileSDKFileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFileSDKFileType.InnerSingleton;
}
// End Enum EFileSDKFileType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFileSDKFileType_StaticEnum, TEXT("EFileSDKFileType"), &Z_Registration_Info_UEnum_EFileSDKFileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2593547059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileType_h_2695742331(TEXT("/Script/FileSDK"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
