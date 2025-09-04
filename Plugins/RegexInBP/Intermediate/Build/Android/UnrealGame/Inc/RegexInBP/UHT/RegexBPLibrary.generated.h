// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RegexBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRegexExtendedResult;
#ifdef REGEXINBP_RegexBPLibrary_generated_h
#error "RegexBPLibrary.generated.h already included, missing '#pragma once' in RegexBPLibrary.h"
#endif
#define REGEXINBP_RegexBPLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRegexExtendedResult_Statics; \
	REGEXINBP_API static class UScriptStruct* StaticStruct();


template<> REGEXINBP_API UScriptStruct* StaticStruct<struct FRegexExtendedResult>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMatchExtended); \
	DECLARE_FUNCTION(execMatch); \
	DECLARE_FUNCTION(execCanMatch);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURegexBPLibrary(); \
	friend struct Z_Construct_UClass_URegexBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URegexBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RegexInBP"), NO_API) \
	DECLARE_SERIALIZER(URegexBPLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URegexBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URegexBPLibrary(URegexBPLibrary&&); \
	URegexBPLibrary(const URegexBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URegexBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URegexBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URegexBPLibrary) \
	NO_API virtual ~URegexBPLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_19_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REGEXINBP_API UClass* StaticClass<class URegexBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
