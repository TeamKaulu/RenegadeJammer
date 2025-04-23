// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileSDKCopyFileAsync.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFileSDKCopyFileAsync;
class UObject;
#ifdef FILESDK_FileSDKCopyFileAsync_generated_h
#error "FileSDKCopyFileAsync.generated.h already included, missing '#pragma once' in FileSDKCopyFileAsync.h"
#endif
#define FILESDK_FileSDKCopyFileAsync_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h_15_DELEGATE \
FILESDK_API void FFileSDKOnCopyCompleted_DelegateWrapper(const FMulticastScriptDelegate& FileSDKOnCopyCompleted, bool Successful);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCopyFileAsync);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileSDKCopyFileAsync(); \
	friend struct Z_Construct_UClass_UFileSDKCopyFileAsync_Statics; \
public: \
	DECLARE_CLASS(UFileSDKCopyFileAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileSDK"), NO_API) \
	DECLARE_SERIALIZER(UFileSDKCopyFileAsync)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileSDKCopyFileAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFileSDKCopyFileAsync(UFileSDKCopyFileAsync&&); \
	UFileSDKCopyFileAsync(const UFileSDKCopyFileAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileSDKCopyFileAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileSDKCopyFileAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileSDKCopyFileAsync) \
	NO_API virtual ~UFileSDKCopyFileAsync();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h_17_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FILESDK_API UClass* StaticClass<class UFileSDKCopyFileAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
