// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileAnchor.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FILESDK_FileAnchor_generated_h
#error "FileAnchor.generated.h already included, missing '#pragma once' in FileAnchor.h"
#endif
#define FILESDK_FileAnchor_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileAnchor_h


#define FOREACH_ENUM_EFILESDKFILEANCHOR(op) \
	op(EFileSDKFileAnchor::Beginning) \
	op(EFileSDKFileAnchor::Current) \
	op(EFileSDKFileAnchor::End) 

enum class EFileSDKFileAnchor : uint8;
template<> struct TIsUEnumClass<EFileSDKFileAnchor> { enum { Value = true }; };
template<> FILESDK_API UEnum* StaticEnum<EFileSDKFileAnchor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
