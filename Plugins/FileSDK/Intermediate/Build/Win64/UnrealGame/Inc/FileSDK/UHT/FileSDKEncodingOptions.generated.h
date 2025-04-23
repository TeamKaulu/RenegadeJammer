// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileSDKEncodingOptions.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FILESDK_FileSDKEncodingOptions_generated_h
#error "FileSDKEncodingOptions.generated.h already included, missing '#pragma once' in FileSDKEncodingOptions.h"
#endif
#define FILESDK_FileSDKEncodingOptions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKEncodingOptions_h


#define FOREACH_ENUM_EFILESDKENCODINGOPTIONS(op) \
	op(EFileSDKEncodingOptions::AutoDetect) \
	op(EFileSDKEncodingOptions::ForceAnsi) \
	op(EFileSDKEncodingOptions::ForceUnicode) \
	op(EFileSDKEncodingOptions::ForceUTF8) \
	op(EFileSDKEncodingOptions::ForceUTF8WithoutBOM) 

enum class EFileSDKEncodingOptions : uint8;
template<> struct TIsUEnumClass<EFileSDKEncodingOptions> { enum { Value = true }; };
template<> FILESDK_API UEnum* StaticEnum<EFileSDKEncodingOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
