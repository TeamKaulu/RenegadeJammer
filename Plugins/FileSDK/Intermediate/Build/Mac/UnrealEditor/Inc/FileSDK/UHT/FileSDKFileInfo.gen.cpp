// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileSDK/Public/FileSDKFileInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileSDKFileInfo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
FILESDK_API UScriptStruct* Z_Construct_UScriptStruct_FFileSDKFileInfo();
UPackage* Z_Construct_UPackage__Script_FileSDK();
// End Cross Module References

// Begin ScriptStruct FFileSDKFileInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FileSDKFileInfo;
class UScriptStruct* FFileSDKFileInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FileSDKFileInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FileSDKFileInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileSDKFileInfo, (UObject*)Z_Construct_UPackage__Script_FileSDK(), TEXT("FileSDKFileInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FileSDKFileInfo.OuterSingleton;
}
template<> FILESDK_API UScriptStruct* StaticStruct<FFileSDKFileInfo>()
{
	return FFileSDKFileInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FileSDKFileInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsolutePath_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** The full absolute path and file name */" },
		{ "ModuleRelativePath", "Public/FileSDKFileInfo.h" },
		{ "ToolTip", "The full absolute path and file name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** The file name without the path */" },
		{ "ModuleRelativePath", "Public/FileSDKFileInfo.h" },
		{ "ToolTip", "The file name without the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreationTime_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** The time that the file or directory was originally created, or FDateTime::MinValue if the creation time is unknown */" },
		{ "ModuleRelativePath", "Public/FileSDKFileInfo.h" },
		{ "ToolTip", "The time that the file or directory was originally created, or FDateTime::MinValue if the creation time is unknown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessTime_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** The time that the file or directory was last accessed, or FDateTime::MinValue if the access time is unknown */" },
		{ "ModuleRelativePath", "Public/FileSDKFileInfo.h" },
		{ "ToolTip", "The time that the file or directory was last accessed, or FDateTime::MinValue if the access time is unknown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModificationTime_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** The time the the file or directory was last modified, or FDateTime::MinValue if the modification time is unknown */" },
		{ "ModuleRelativePath", "Public/FileSDKFileInfo.h" },
		{ "ToolTip", "The time the the file or directory was last modified, or FDateTime::MinValue if the modification time is unknown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** Size of the file (in bytes), or -1 if the file size is unknown */" },
		{ "ModuleRelativePath", "Public/FileSDKFileInfo.h" },
		{ "ToolTip", "Size of the file (in bytes), or -1 if the file size is unknown" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDirectory_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** True if this data is for a directory, false if it's for a file */" },
		{ "ModuleRelativePath", "Public/FileSDKFileInfo.h" },
		{ "ToolTip", "True if this data is for a directory, false if it's for a file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** True if this file is read-only */" },
		{ "ModuleRelativePath", "Public/FileSDKFileInfo.h" },
		{ "ToolTip", "True if this file is read-only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** True if file or directory was found, false otherwise. Note that this value being true does not ensure that the other members are filled in with meaningful data, as not all file systems have access to all of this data */" },
		{ "ModuleRelativePath", "Public/FileSDKFileInfo.h" },
		{ "ToolTip", "True if file or directory was found, false otherwise. Note that this value being true does not ensure that the other members are filled in with meaningful data, as not all file systems have access to all of this data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbsolutePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreationTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccessTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModificationTime;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FileSize;
	static void NewProp_bIsDirectory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDirectory;
	static void NewProp_bIsReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileSDKFileInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_AbsolutePath = { "AbsolutePath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileSDKFileInfo, AbsolutePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsolutePath_MetaData), NewProp_AbsolutePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileSDKFileInfo, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_CreationTime = { "CreationTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileSDKFileInfo, CreationTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreationTime_MetaData), NewProp_CreationTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_AccessTime = { "AccessTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileSDKFileInfo, AccessTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessTime_MetaData), NewProp_AccessTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_ModificationTime = { "ModificationTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileSDKFileInfo, ModificationTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModificationTime_MetaData), NewProp_ModificationTime_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileSDKFileInfo, FileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileSize_MetaData), NewProp_FileSize_MetaData) };
void Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_bIsDirectory_SetBit(void* Obj)
{
	((FFileSDKFileInfo*)Obj)->bIsDirectory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_bIsDirectory = { "bIsDirectory", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFileSDKFileInfo), &Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_bIsDirectory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDirectory_MetaData), NewProp_bIsDirectory_MetaData) };
void Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
{
	((FFileSDKFileInfo*)Obj)->bIsReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFileSDKFileInfo), &Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReadOnly_MetaData), NewProp_bIsReadOnly_MetaData) };
void Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FFileSDKFileInfo*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFileSDKFileInfo), &Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_AbsolutePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_CreationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_AccessTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_ModificationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_FileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_bIsDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_bIsReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewProp_bIsValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FileSDK,
	nullptr,
	&NewStructOps,
	"FileSDKFileInfo",
	Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::PropPointers),
	sizeof(FFileSDKFileInfo),
	alignof(FFileSDKFileInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFileSDKFileInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FileSDKFileInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FileSDKFileInfo.InnerSingleton, Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FileSDKFileInfo.InnerSingleton;
}
// End ScriptStruct FFileSDKFileInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFileSDKFileInfo::StaticStruct, Z_Construct_UScriptStruct_FFileSDKFileInfo_Statics::NewStructOps, TEXT("FileSDKFileInfo"), &Z_Registration_Info_UScriptStruct_FileSDKFileInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFileSDKFileInfo), 3050070552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileInfo_h_3642232807(TEXT("/Script/FileSDK"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
