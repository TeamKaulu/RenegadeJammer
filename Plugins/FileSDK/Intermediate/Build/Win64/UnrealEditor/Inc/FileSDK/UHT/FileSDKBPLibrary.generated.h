// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileSDKBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFileSDKFileReader;
class UFileSDKLineReader;
enum class EFileSDKEncodingOptions : uint8;
enum class EFileSDKFileType : uint8;
struct FFileSDKDelegatePreInfo;
struct FFileSDKFileInfo;
#ifdef FILESDK_FileSDKBPLibrary_generated_h
#error "FileSDKBPLibrary.generated.h already included, missing '#pragma once' in FileSDKBPLibrary.h"
#endif
#define FILESDK_FileSDKBPLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_29_DELEGATE \
FILESDK_API void FFileSDKCopyDelegate_DelegateWrapper(const FScriptDelegate& FileSDKCopyDelegate, int32 KilobytesWritten, int32 TotalKilobytes);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFileSDKDelegatePreInfo_Statics; \
	FILESDK_API static class UScriptStruct* StaticStruct();


template<> FILESDK_API UScriptStruct* StaticStruct<struct FFileSDKDelegatePreInfo>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_45_RPC_WRAPPERS \
	DECLARE_FUNCTION(execPasteClipboard); \
	DECLARE_FUNCTION(execCopyToClipboard); \
	DECLARE_FUNCTION(execGetEnvironmentVariable); \
	DECLARE_FUNCTION(execGetCurrentUserHomeDirectory); \
	DECLARE_FUNCTION(execGetCurrentUsername); \
	DECLARE_FUNCTION(execGetFileOrDirectoryInfo); \
	DECLARE_FUNCTION(execGetDirectoryContentsWithFileInfo); \
	DECLARE_FUNCTION(execGetFilesFromDirectory); \
	DECLARE_FUNCTION(execReadBytesFromFile); \
	DECLARE_FUNCTION(execWriteBytesToFile); \
	DECLARE_FUNCTION(execWriteStringToFile); \
	DECLARE_FUNCTION(execReadLinesFromFile); \
	DECLARE_FUNCTION(execReadStringFromFile); \
	DECLARE_FUNCTION(execCopyDirectoryAsync); \
	DECLARE_FUNCTION(execCopyDirectory); \
	DECLARE_FUNCTION(execCopyFileAsync); \
	DECLARE_FUNCTION(execCopyFile); \
	DECLARE_FUNCTION(execRenameFileOrDirectory); \
	DECLARE_FUNCTION(execDeleteDirectory); \
	DECLARE_FUNCTION(execCreateDirectory); \
	DECLARE_FUNCTION(execDeleteFile); \
	DECLARE_FUNCTION(execCreateFile); \
	DECLARE_FUNCTION(execOpenFileReader);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUFileSDKBPLibrary(); \
	friend struct Z_Construct_UClass_UFileSDKBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFileSDKBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileSDK"), NO_API) \
	DECLARE_SERIALIZER(UFileSDKBPLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileSDKBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileSDKBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileSDKBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileSDKBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFileSDKBPLibrary(UFileSDKBPLibrary&&); \
	UFileSDKBPLibrary(const UFileSDKBPLibrary&); \
public: \
	NO_API virtual ~UFileSDKBPLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_43_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_45_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_45_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FILESDK_API UClass* StaticClass<class UFileSDKBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
