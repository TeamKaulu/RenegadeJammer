// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileSDKFileReader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFileSDKFileAnchor : uint8;
#ifdef FILESDK_FileSDKFileReader_generated_h
#error "FileSDKFileReader.generated.h already included, missing '#pragma once' in FileSDKFileReader.h"
#endif
#define FILESDK_FileSDKFileReader_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileReader_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execReadStringToEnd); \
	DECLARE_FUNCTION(execReadString); \
	DECLARE_FUNCTION(execReadBytesToEnd); \
	DECLARE_FUNCTION(execReadBytes); \
	DECLARE_FUNCTION(execSeekFilePosition); \
	DECLARE_FUNCTION(execGetFilePosition); \
	DECLARE_FUNCTION(execIsGood);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileReader_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFileSDKFileReader(); \
	friend struct Z_Construct_UClass_UFileSDKFileReader_Statics; \
public: \
	DECLARE_CLASS(UFileSDKFileReader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileSDK"), NO_API) \
	DECLARE_SERIALIZER(UFileSDKFileReader)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileReader_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileSDKFileReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileSDKFileReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileSDKFileReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileSDKFileReader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFileSDKFileReader(UFileSDKFileReader&&); \
	UFileSDKFileReader(const UFileSDKFileReader&); \
public: \
	NO_API virtual ~UFileSDKFileReader();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileReader_h_15_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileReader_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileReader_h_17_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileReader_h_17_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileReader_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FILESDK_API UClass* StaticClass<class UFileSDKFileReader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileReader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
