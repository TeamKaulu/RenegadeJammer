// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileSDK/Public/FileSDKBPLibrary.h"
#include "FileSDK/Public/FileSDKFileInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileSDKBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
FILESDK_API UClass* Z_Construct_UClass_UFileSDKBPLibrary();
FILESDK_API UClass* Z_Construct_UClass_UFileSDKBPLibrary_NoRegister();
FILESDK_API UClass* Z_Construct_UClass_UFileSDKFileReader_NoRegister();
FILESDK_API UClass* Z_Construct_UClass_UFileSDKLineReader_NoRegister();
FILESDK_API UEnum* Z_Construct_UEnum_FileSDK_EFileSDKEncodingOptions();
FILESDK_API UEnum* Z_Construct_UEnum_FileSDK_EFileSDKFileType();
FILESDK_API UFunction* Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature();
FILESDK_API UScriptStruct* Z_Construct_UScriptStruct_FFileSDKDelegatePreInfo();
FILESDK_API UScriptStruct* Z_Construct_UScriptStruct_FFileSDKFileInfo();
UPackage* Z_Construct_UPackage__Script_FileSDK();
// End Cross Module References

// Begin Delegate FFileSDKCopyDelegate
struct Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics
{
	struct _Script_FileSDK_eventFileSDKCopyDelegate_Parms
	{
		int32 KilobytesWritten;
		int32 TotalKilobytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_KilobytesWritten;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalKilobytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::NewProp_KilobytesWritten = { "KilobytesWritten", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FileSDK_eventFileSDKCopyDelegate_Parms, KilobytesWritten), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::NewProp_TotalKilobytes = { "TotalKilobytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FileSDK_eventFileSDKCopyDelegate_Parms, TotalKilobytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::NewProp_KilobytesWritten,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::NewProp_TotalKilobytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FileSDK, nullptr, "FileSDKCopyDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::_Script_FileSDK_eventFileSDKCopyDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::_Script_FileSDK_eventFileSDKCopyDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFileSDKCopyDelegate_DelegateWrapper(const FScriptDelegate& FileSDKCopyDelegate, int32 KilobytesWritten, int32 TotalKilobytes)
{
	struct _Script_FileSDK_eventFileSDKCopyDelegate_Parms
	{
		int32 KilobytesWritten;
		int32 TotalKilobytes;
	};
	_Script_FileSDK_eventFileSDKCopyDelegate_Parms Parms;
	Parms.KilobytesWritten=KilobytesWritten;
	Parms.TotalKilobytes=TotalKilobytes;
	FileSDKCopyDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FFileSDKCopyDelegate

// Begin ScriptStruct FFileSDKDelegatePreInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FileSDKDelegatePreInfo;
class UScriptStruct* FFileSDKDelegatePreInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FileSDKDelegatePreInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FileSDKDelegatePreInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileSDKDelegatePreInfo, (UObject*)Z_Construct_UPackage__Script_FileSDK(), TEXT("FileSDKDelegatePreInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FileSDKDelegatePreInfo.OuterSingleton;
}
template<> FILESDK_API UScriptStruct* StaticStruct<FFileSDKDelegatePreInfo>()
{
	return FFileSDKDelegatePreInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFileSDKDelegatePreInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileSDKDelegatePreInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFileSDKDelegatePreInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FileSDK,
	nullptr,
	&NewStructOps,
	"FileSDKDelegatePreInfo",
	nullptr,
	0,
	sizeof(FFileSDKDelegatePreInfo),
	alignof(FFileSDKDelegatePreInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileSDKDelegatePreInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFileSDKDelegatePreInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFileSDKDelegatePreInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FileSDKDelegatePreInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FileSDKDelegatePreInfo.InnerSingleton, Z_Construct_UScriptStruct_FFileSDKDelegatePreInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FileSDKDelegatePreInfo.InnerSingleton;
}
// End ScriptStruct FFileSDKDelegatePreInfo

// Begin Class UFileSDKBPLibrary Function CopyDirectory
struct Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics
{
	struct FileSDKBPLibrary_eventCopyDirectory_Parms
	{
		FString Source;
		FString Destination;
		FScriptDelegate ProgressCallback;
		bool OverwriteDestination;
		int32 ChunkSizeInKilobytes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ProgressCallback" },
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Copies a directory, including all of its contents, creating a duplicate version.\n   * Performs the copy operation on the main game thread; this can have performance issues for large\n   * directories. See \"Copy Directory Async\" to perform the copy in the background (in a separate thread).\n   *\n   * @param Source An absolute path to the directory you want to copy.\n   * @param Destination An absolute path to where you want to copy the directory to.\n   * @param ProgressCallback This allows you to attach an event to receive execution when progress is made,\n   * allowing you to update a UI or other variables about the progress left for copying the directory.\n   * @param OverwriteDestination If set to true, if a particular file exists in the respective Destination\n   * location, it will be overwritten with the new contents. Otherwise it will be ignored. For example if\n   * you're copying \"/path/from\" to \"/path/to\", and \"/path/to/file.txt\" already exists, if this is set to true,\n   * /path/from/file.txt will overwrite \"/path/to/file.txt\", if set to false, \"/path/to/file.txt\" will remain\n   * unchanged.\n   * @param ChunkSizeInKilobytes The number of kilobytes you want each chunk of data to be copied as.\n   * Smaller numbers can give you more fine progress updates, but at the cost of more disk IO operations,\n   * potentially slowing down the overall copy.\n   *\n   * @return Returns true if the copy finished successfully. Returns false if any of the files couldn't be\n   * copied or if subdirectories couldn't be created (usually this happens if there are permissions issues\n   * or files are open in other programs).\n   */" },
		{ "CPP_Default_ChunkSizeInKilobytes", "1024" },
		{ "CPP_Default_OverwriteDestination", "false" },
		{ "DisplayName", "Copy Directory" },
		{ "Keywords", "FileSDK copy directory folder" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Copies a directory, including all of its contents, creating a duplicate version.\nPerforms the copy operation on the main game thread; this can have performance issues for large\ndirectories. See \"Copy Directory Async\" to perform the copy in the background (in a separate thread).\n\n@param Source An absolute path to the directory you want to copy.\n@param Destination An absolute path to where you want to copy the directory to.\n@param ProgressCallback This allows you to attach an event to receive execution when progress is made,\nallowing you to update a UI or other variables about the progress left for copying the directory.\n@param OverwriteDestination If set to true, if a particular file exists in the respective Destination\nlocation, it will be overwritten with the new contents. Otherwise it will be ignored. For example if\nyou're copying \"/path/from\" to \"/path/to\", and \"/path/to/file.txt\" already exists, if this is set to true,\n/path/from/file.txt will overwrite \"/path/to/file.txt\", if set to false, \"/path/to/file.txt\" will remain\nunchanged.\n@param ChunkSizeInKilobytes The number of kilobytes you want each chunk of data to be copied as.\nSmaller numbers can give you more fine progress updates, but at the cost of more disk IO operations,\npotentially slowing down the overall copy.\n\n@return Returns true if the copy finished successfully. Returns false if any of the files couldn't be\ncopied or if subdirectories couldn't be created (usually this happens if there are permissions issues\nor files are open in other programs)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ProgressCallback;
	static void NewProp_OverwriteDestination_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverwriteDestination;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSizeInKilobytes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyDirectory_Parms, Source), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyDirectory_Parms, Destination), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_ProgressCallback = { "ProgressCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyDirectory_Parms, ProgressCallback), Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressCallback_MetaData), NewProp_ProgressCallback_MetaData) }; // 65310763
void Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_OverwriteDestination_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventCopyDirectory_Parms*)Obj)->OverwriteDestination = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_OverwriteDestination = { "OverwriteDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventCopyDirectory_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_OverwriteDestination_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_ChunkSizeInKilobytes = { "ChunkSizeInKilobytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyDirectory_Parms, ChunkSizeInKilobytes), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventCopyDirectory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventCopyDirectory_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_ProgressCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_OverwriteDestination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_ChunkSizeInKilobytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "CopyDirectory", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::FileSDKBPLibrary_eventCopyDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::FileSDKBPLibrary_eventCopyDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execCopyDirectory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_GET_PROPERTY(FStrProperty,Z_Param_Destination);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ProgressCallback);
	P_GET_UBOOL(Z_Param_OverwriteDestination);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChunkSizeInKilobytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSDKBPLibrary::CopyDirectory(Z_Param_Source,Z_Param_Destination,FFileSDKCopyDelegate(Z_Param_Out_ProgressCallback),Z_Param_OverwriteDestination,Z_Param_ChunkSizeInKilobytes);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function CopyDirectory

// Begin Class UFileSDKBPLibrary Function CopyDirectoryAsync
struct Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics
{
	struct FileSDKBPLibrary_eventCopyDirectoryAsync_Parms
	{
		FString Source;
		FString Destination;
		FScriptDelegate ProgressCallback;
		bool OverwriteDestination;
		int32 ChunkSizeInKilobytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ProgressCallback" },
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Copies a directory, including all of its contents, creating a duplicate version.\n   * Performs the copy operation in a separate background thread, preventing the game thread\n   * from waiting for the copy operation to finish.\n   *\n   * @param Source An absolute path to the directory you want to copy.\n   * @param Destination An absolute path to where you want to copy the directory to.\n   * @param ProgressCallback This allows you to attach an event to receive execution when progress is made,\n   * allowing you to update a UI or other variables about the progress left for copying the directory.\n   * @param OverwriteDestination If set to true, if a particular file exists in the respective Destination\n   * location, it will be overwritten with the new contents. Otherwise it will be ignored. For example if\n   * you're copying \"/path/from\" to \"/path/to\", and \"/path/to/file.txt\" already exists, if this is set to true,\n   * /path/from/file.txt will overwrite \"/path/to/file.txt\", if set to false, \"/path/to/file.txt\" will remain\n   * unchanged.\n   * @param ChunkSizeInKilobytes The number of kilobytes you want each chunk of data to be copied as.\n   * Smaller numbers can give you more fine progress updates, but at the cost of more disk IO operations,\n   * potentially slowing down the overall copy.\n   */" },
		{ "CPP_Default_ChunkSizeInKilobytes", "1024" },
		{ "CPP_Default_OverwriteDestination", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated; please use 'Copy File or Directory Async'." },
		{ "DisplayName", "Copy Directory Async" },
		{ "Keywords", "FileSDK copy directory folder async" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Copies a directory, including all of its contents, creating a duplicate version.\nPerforms the copy operation in a separate background thread, preventing the game thread\nfrom waiting for the copy operation to finish.\n\n@param Source An absolute path to the directory you want to copy.\n@param Destination An absolute path to where you want to copy the directory to.\n@param ProgressCallback This allows you to attach an event to receive execution when progress is made,\nallowing you to update a UI or other variables about the progress left for copying the directory.\n@param OverwriteDestination If set to true, if a particular file exists in the respective Destination\nlocation, it will be overwritten with the new contents. Otherwise it will be ignored. For example if\nyou're copying \"/path/from\" to \"/path/to\", and \"/path/to/file.txt\" already exists, if this is set to true,\n/path/from/file.txt will overwrite \"/path/to/file.txt\", if set to false, \"/path/to/file.txt\" will remain\nunchanged.\n@param ChunkSizeInKilobytes The number of kilobytes you want each chunk of data to be copied as.\nSmaller numbers can give you more fine progress updates, but at the cost of more disk IO operations,\npotentially slowing down the overall copy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ProgressCallback;
	static void NewProp_OverwriteDestination_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverwriteDestination;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSizeInKilobytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyDirectoryAsync_Parms, Source), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyDirectoryAsync_Parms, Destination), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::NewProp_ProgressCallback = { "ProgressCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyDirectoryAsync_Parms, ProgressCallback), Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressCallback_MetaData), NewProp_ProgressCallback_MetaData) }; // 65310763
void Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::NewProp_OverwriteDestination_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventCopyDirectoryAsync_Parms*)Obj)->OverwriteDestination = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::NewProp_OverwriteDestination = { "OverwriteDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventCopyDirectoryAsync_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::NewProp_OverwriteDestination_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::NewProp_ChunkSizeInKilobytes = { "ChunkSizeInKilobytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyDirectoryAsync_Parms, ChunkSizeInKilobytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::NewProp_ProgressCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::NewProp_OverwriteDestination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::NewProp_ChunkSizeInKilobytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "CopyDirectoryAsync", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::FileSDKBPLibrary_eventCopyDirectoryAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::FileSDKBPLibrary_eventCopyDirectoryAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execCopyDirectoryAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_GET_PROPERTY(FStrProperty,Z_Param_Destination);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ProgressCallback);
	P_GET_UBOOL(Z_Param_OverwriteDestination);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChunkSizeInKilobytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFileSDKBPLibrary::CopyDirectoryAsync(Z_Param_Source,Z_Param_Destination,FFileSDKCopyDelegate(Z_Param_Out_ProgressCallback),Z_Param_OverwriteDestination,Z_Param_ChunkSizeInKilobytes);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function CopyDirectoryAsync

// Begin Class UFileSDKBPLibrary Function CopyFile
struct Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics
{
	struct FileSDKBPLibrary_eventCopyFile_Parms
	{
		FString Source;
		FString Destination;
		FScriptDelegate ProgressCallback;
		FFileSDKDelegatePreInfo PreInfo;
		int32 ChunkSizeInKilobytes;
		bool OverwriteDestination;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ProgressCallback, PreInfo" },
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Copies a file, creating a duplicate version. Performs the copy operation on the main game thread;\n   * this can have performance issues for large files. See `Copy File Async` to perform the copy in the\n   * background (in a separate thread).\n   *\n   * @param Source An absolute path to the file you want to copy.\n   * @param Destination An absolute path to where you want to copy the file to. You cannot provide\n   * \"/path/to/file.csv\" for Source and only provide \"file-old.csv\" for Destination; you must provide\n   * the full absolute path of the new file (i.e. \"/path/to/file-old.csv\").\n   * @param ProgressCallback This allows you to attach an event to receive execution when progress is made,\n   * allowing you to update a UI or other variables about the progress left for copying the file.\n   * @param PreInfo The number of kilobytes you want each chunk of data to be copied as.\n   * Smaller numbers can give you more fine progress updates, but at the cost of more disk IO operations,\n   * potentially slowing down the overall copy.\n   * @param OverwriteDestination If file exists and this is set to true, the contents of the file will be overwritten.\n   *\n   * @return Returns false if Source could not be opened (likely because it doesn't exist) or if Destination\n   * could not be opened for write permissions (likely the directory doesn't exist, or the user doesn't have\n   * permissions to write there). Returns true if the copy was successful.\n   */" },
		{ "CPP_Default_ChunkSizeInKilobytes", "1024" },
		{ "CPP_Default_OverwriteDestination", "false" },
		{ "DisplayName", "Copy File" },
		{ "HidePin", "PreInfo" },
		{ "Keywords", "FileSDK copy file" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Copies a file, creating a duplicate version. Performs the copy operation on the main game thread;\nthis can have performance issues for large files. See `Copy File Async` to perform the copy in the\nbackground (in a separate thread).\n\n@param Source An absolute path to the file you want to copy.\n@param Destination An absolute path to where you want to copy the file to. You cannot provide\n\"/path/to/file.csv\" for Source and only provide \"file-old.csv\" for Destination; you must provide\nthe full absolute path of the new file (i.e. \"/path/to/file-old.csv\").\n@param ProgressCallback This allows you to attach an event to receive execution when progress is made,\nallowing you to update a UI or other variables about the progress left for copying the file.\n@param PreInfo The number of kilobytes you want each chunk of data to be copied as.\nSmaller numbers can give you more fine progress updates, but at the cost of more disk IO operations,\npotentially slowing down the overall copy.\n@param OverwriteDestination If file exists and this is set to true, the contents of the file will be overwritten.\n\n@return Returns false if Source could not be opened (likely because it doesn't exist) or if Destination\ncould not be opened for write permissions (likely the directory doesn't exist, or the user doesn't have\npermissions to write there). Returns true if the copy was successful." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ProgressCallback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSizeInKilobytes;
	static void NewProp_OverwriteDestination_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverwriteDestination;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyFile_Parms, Source), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyFile_Parms, Destination), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_ProgressCallback = { "ProgressCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyFile_Parms, ProgressCallback), Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressCallback_MetaData), NewProp_ProgressCallback_MetaData) }; // 65310763
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_PreInfo = { "PreInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyFile_Parms, PreInfo), Z_Construct_UScriptStruct_FFileSDKDelegatePreInfo, METADATA_PARAMS(0, nullptr) }; // 739444454
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_ChunkSizeInKilobytes = { "ChunkSizeInKilobytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyFile_Parms, ChunkSizeInKilobytes), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_OverwriteDestination_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventCopyFile_Parms*)Obj)->OverwriteDestination = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_OverwriteDestination = { "OverwriteDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventCopyFile_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_OverwriteDestination_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventCopyFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventCopyFile_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_ProgressCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_PreInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_ChunkSizeInKilobytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_OverwriteDestination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "CopyFile", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::FileSDKBPLibrary_eventCopyFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::FileSDKBPLibrary_eventCopyFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execCopyFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_GET_PROPERTY(FStrProperty,Z_Param_Destination);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ProgressCallback);
	P_GET_STRUCT(FFileSDKDelegatePreInfo,Z_Param_PreInfo);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChunkSizeInKilobytes);
	P_GET_UBOOL(Z_Param_OverwriteDestination);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSDKBPLibrary::CopyFile(Z_Param_Source,Z_Param_Destination,FFileSDKCopyDelegate(Z_Param_Out_ProgressCallback),Z_Param_PreInfo,Z_Param_ChunkSizeInKilobytes,Z_Param_OverwriteDestination);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function CopyFile

// Begin Class UFileSDKBPLibrary Function CopyFileAsync
struct Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics
{
	struct FileSDKBPLibrary_eventCopyFileAsync_Parms
	{
		FString Source;
		FString Destination;
		FScriptDelegate ProgressCallback;
		FFileSDKDelegatePreInfo PreInfo;
		int32 ChunkSizeInKilobytes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ProgressCallback, PreInfo" },
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Copies a file, creating a duplicate version. Performs the copy operation in a separate\n   * background thread, preventing the game thread from waiting for the copy operation to finish.\n   *\n   * @param Source An absolute path to the file you want to copy.\n   * @param Destination An absolute path to where you want to copy the file to. You cannot provide\n   * \"/path/to/file.csv\" for Source and only provide \"file-old.csv\" for Destination; you must provide\n   * the full absolute path of the new file (i.e. \"/path/to/file-old.csv\").\n   * @param ProgressCallback This allows you to attach an event to receive execution when progress is made,\n   * allowing you to update a UI or other variables about the progress left for copying the file.\n   * @param ChunkSizeInKilobytes The number of kilobytes you want each chunk of data to be copied as.\n   * Smaller numbers can give you more fine progress updates, but at the cost of more disk IO operations,\n   * potentially slowing down the overall copy.\n   */" },
		{ "CPP_Default_ChunkSizeInKilobytes", "1024" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated; please use 'Copy File or Directory Async'." },
		{ "DisplayName", "Copy File Async" },
		{ "HidePin", "PreInfo" },
		{ "Keywords", "FileSDK copy file async" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Copies a file, creating a duplicate version. Performs the copy operation in a separate\nbackground thread, preventing the game thread from waiting for the copy operation to finish.\n\n@param Source An absolute path to the file you want to copy.\n@param Destination An absolute path to where you want to copy the file to. You cannot provide\n\"/path/to/file.csv\" for Source and only provide \"file-old.csv\" for Destination; you must provide\nthe full absolute path of the new file (i.e. \"/path/to/file-old.csv\").\n@param ProgressCallback This allows you to attach an event to receive execution when progress is made,\nallowing you to update a UI or other variables about the progress left for copying the file.\n@param ChunkSizeInKilobytes The number of kilobytes you want each chunk of data to be copied as.\nSmaller numbers can give you more fine progress updates, but at the cost of more disk IO operations,\npotentially slowing down the overall copy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ProgressCallback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSizeInKilobytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyFileAsync_Parms, Source), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyFileAsync_Parms, Destination), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::NewProp_ProgressCallback = { "ProgressCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyFileAsync_Parms, ProgressCallback), Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressCallback_MetaData), NewProp_ProgressCallback_MetaData) }; // 65310763
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::NewProp_PreInfo = { "PreInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyFileAsync_Parms, PreInfo), Z_Construct_UScriptStruct_FFileSDKDelegatePreInfo, METADATA_PARAMS(0, nullptr) }; // 739444454
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::NewProp_ChunkSizeInKilobytes = { "ChunkSizeInKilobytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyFileAsync_Parms, ChunkSizeInKilobytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::NewProp_ProgressCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::NewProp_PreInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::NewProp_ChunkSizeInKilobytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "CopyFileAsync", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::FileSDKBPLibrary_eventCopyFileAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::FileSDKBPLibrary_eventCopyFileAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execCopyFileAsync)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_GET_PROPERTY(FStrProperty,Z_Param_Destination);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ProgressCallback);
	P_GET_STRUCT(FFileSDKDelegatePreInfo,Z_Param_PreInfo);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChunkSizeInKilobytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFileSDKBPLibrary::CopyFileAsync(Z_Param_Source,Z_Param_Destination,FFileSDKCopyDelegate(Z_Param_Out_ProgressCallback),Z_Param_PreInfo,Z_Param_ChunkSizeInKilobytes);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function CopyFileAsync

// Begin Class UFileSDKBPLibrary Function CopyToClipboard
struct Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard_Statics
{
	struct FileSDKBPLibrary_eventCopyToClipboard_Parms
	{
		FString InString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK | Clipboard" },
		{ "Comment", "/**\n   * Stores a string in your system's clipboard.\n   *\n   * @param InString String to copy.\n   */" },
		{ "DisplayName", "Set System Clipboard" },
		{ "Keywords", "Copy string to clipboard" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Stores a string in your system's clipboard.\n\n@param InString String to copy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCopyToClipboard_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard_Statics::NewProp_InString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "CopyToClipboard", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard_Statics::FileSDKBPLibrary_eventCopyToClipboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard_Statics::FileSDKBPLibrary_eventCopyToClipboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execCopyToClipboard)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFileSDKBPLibrary::CopyToClipboard(Z_Param_InString);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function CopyToClipboard

// Begin Class UFileSDKBPLibrary Function CreateDirectory
struct Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics
{
	struct FileSDKBPLibrary_eventCreateDirectory_Parms
	{
		FString DirectoryName;
		bool CreateDirectoryTree;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Creates a directory.\n   *\n   * @param DirectoryName An absolute path to the directory you want to create.\n   * @param CreateDirectoryTree If set to true, any missing folders to get to File Name will be automatically created.\n   * See docs at wiki.incanta.games for more details.\n   *\n   * @return Returns whether or not the directory was successfully created.\n   */" },
		{ "CPP_Default_CreateDirectoryTree", "true" },
		{ "DisplayName", "Create Directory" },
		{ "Keywords", "FileSDK create make generate directory folder" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Creates a directory.\n\n@param DirectoryName An absolute path to the directory you want to create.\n@param CreateDirectoryTree If set to true, any missing folders to get to File Name will be automatically created.\nSee docs at wiki.incanta.games for more details.\n\n@return Returns whether or not the directory was successfully created." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryName;
	static void NewProp_CreateDirectoryTree_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateDirectoryTree;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::NewProp_DirectoryName = { "DirectoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCreateDirectory_Parms, DirectoryName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::NewProp_CreateDirectoryTree_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventCreateDirectory_Parms*)Obj)->CreateDirectoryTree = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::NewProp_CreateDirectoryTree = { "CreateDirectoryTree", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventCreateDirectory_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::NewProp_CreateDirectoryTree_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventCreateDirectory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventCreateDirectory_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::NewProp_DirectoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::NewProp_CreateDirectoryTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "CreateDirectory", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::FileSDKBPLibrary_eventCreateDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::FileSDKBPLibrary_eventCreateDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execCreateDirectory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryName);
	P_GET_UBOOL(Z_Param_CreateDirectoryTree);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSDKBPLibrary::CreateDirectory(Z_Param_DirectoryName,Z_Param_CreateDirectoryTree);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function CreateDirectory

// Begin Class UFileSDKBPLibrary Function CreateFile
struct Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics
{
	struct FileSDKBPLibrary_eventCreateFile_Parms
	{
		FString FileName;
		bool ClearContentsIfExists;
		bool CreateDirectoryTree;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Creates an empty file.\n   *\n   * @param FileName An absolute path to the file you want to create.\n   * @param ClearContentsIfExists If set to true this node will completely delete any content in the file.\n   * @param CreateDirectoryTree If set to true, any missing folders to get to File Name will be automatically created.\n   * See docs at wiki.incanta.games for more details.\n   *\n   * @return Returns true if the file was successfully deleted.\n   * Returns false if the file doesn't exist or the file couldn't be deleted.\n   */" },
		{ "CPP_Default_ClearContentsIfExists", "true" },
		{ "CPP_Default_CreateDirectoryTree", "true" },
		{ "DisplayName", "Create File" },
		{ "Keywords", "FileSDK create make generate file" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Creates an empty file.\n\n@param FileName An absolute path to the file you want to create.\n@param ClearContentsIfExists If set to true this node will completely delete any content in the file.\n@param CreateDirectoryTree If set to true, any missing folders to get to File Name will be automatically created.\nSee docs at wiki.incanta.games for more details.\n\n@return Returns true if the file was successfully deleted.\nReturns false if the file doesn't exist or the file couldn't be deleted." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ClearContentsIfExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearContentsIfExists;
	static void NewProp_CreateDirectoryTree_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateDirectoryTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventCreateFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::NewProp_ClearContentsIfExists_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventCreateFile_Parms*)Obj)->ClearContentsIfExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::NewProp_ClearContentsIfExists = { "ClearContentsIfExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventCreateFile_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::NewProp_ClearContentsIfExists_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::NewProp_CreateDirectoryTree_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventCreateFile_Parms*)Obj)->CreateDirectoryTree = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::NewProp_CreateDirectoryTree = { "CreateDirectoryTree", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventCreateFile_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::NewProp_CreateDirectoryTree_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::NewProp_ClearContentsIfExists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::NewProp_CreateDirectoryTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "CreateFile", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::FileSDKBPLibrary_eventCreateFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::FileSDKBPLibrary_eventCreateFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execCreateFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_UBOOL(Z_Param_ClearContentsIfExists);
	P_GET_UBOOL(Z_Param_CreateDirectoryTree);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFileSDKBPLibrary::CreateFile(Z_Param_FileName,Z_Param_ClearContentsIfExists,Z_Param_CreateDirectoryTree);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function CreateFile

// Begin Class UFileSDKBPLibrary Function DeleteDirectory
struct Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics
{
	struct FileSDKBPLibrary_eventDeleteDirectory_Parms
	{
		FString DirectoryName;
		bool Recursive;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Deletes a directory.\n   *\n   * @param DirectoryName An absolute path to the directory you want to create.\n   * @param Recursive If set to true, all files and folders in this directory will be deleted.\n   * If set to false, the directory will only be deleted if it is empty.\n   *\n   * @return Returns whether or not the directory was successfully deleted.\n   */" },
		{ "CPP_Default_Recursive", "true" },
		{ "DisplayName", "Delete Directory" },
		{ "Keywords", "FileSDK delete destroy remove directory folder" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Deletes a directory.\n\n@param DirectoryName An absolute path to the directory you want to create.\n@param Recursive If set to true, all files and folders in this directory will be deleted.\nIf set to false, the directory will only be deleted if it is empty.\n\n@return Returns whether or not the directory was successfully deleted." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryName;
	static void NewProp_Recursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Recursive;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::NewProp_DirectoryName = { "DirectoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventDeleteDirectory_Parms, DirectoryName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::NewProp_Recursive_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventDeleteDirectory_Parms*)Obj)->Recursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::NewProp_Recursive = { "Recursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventDeleteDirectory_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::NewProp_Recursive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventDeleteDirectory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventDeleteDirectory_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::NewProp_DirectoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::NewProp_Recursive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "DeleteDirectory", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::FileSDKBPLibrary_eventDeleteDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::FileSDKBPLibrary_eventDeleteDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execDeleteDirectory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryName);
	P_GET_UBOOL(Z_Param_Recursive);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSDKBPLibrary::DeleteDirectory(Z_Param_DirectoryName,Z_Param_Recursive);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function DeleteDirectory

// Begin Class UFileSDKBPLibrary Function DeleteFile
struct Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics
{
	struct FileSDKBPLibrary_eventDeleteFile_Parms
	{
		FString FileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Deletes a file if it exists; does nothing if it doesn't exist.\n   *\n   * @param FileName An absolute path to the file you want to delete.\n   *\n   * @return Returns true if the file was successfully deleted.\n   * Returns false if the file doesn't exist or the file couldn't be deleted.\n   */" },
		{ "DisplayName", "Delete File" },
		{ "Keywords", "FileSDK delete file destroy" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Deletes a file if it exists; does nothing if it doesn't exist.\n\n@param FileName An absolute path to the file you want to delete.\n\n@return Returns true if the file was successfully deleted.\nReturns false if the file doesn't exist or the file couldn't be deleted." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventDeleteFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventDeleteFile_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "DeleteFile", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::FileSDKBPLibrary_eventDeleteFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::FileSDKBPLibrary_eventDeleteFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execDeleteFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSDKBPLibrary::DeleteFile(Z_Param_FileName);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function DeleteFile

// Begin Class UFileSDKBPLibrary Function GetCurrentUserHomeDirectory
struct Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory_Statics
{
	struct FileSDKBPLibrary_eventGetCurrentUserHomeDirectory_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK | Paths" },
		{ "Comment", "/**\n   * Returns the current user's home directory. (i.e. the entire C:\\Users\\<user path)\n   *\n   * @return On Windows, this returns the environment variable \"%HOMEDRIVE%\" concatenated with \"%HOMEPATH%\"\n   * (i.e. \"%HOMEDRIVE%%HOMEPATH%\"). On Mac and Linux, this returns the environment variable \"$HOME\".\n   * On other platforms, it returns \"PLATFORM_NOT_SUPPORTED\".\n   */" },
		{ "DisplayName", "Get Current User Home Directory" },
		{ "Keywords", "FileSDK get current user home directory" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Returns the current user's home directory. (i.e. the entire C:\\Users\\<user path)\n\n@return On Windows, this returns the environment variable \"%HOMEDRIVE%\" concatenated with \"%HOMEPATH%\"\n(i.e. \"%HOMEDRIVE%%HOMEPATH%\"). On Mac and Linux, this returns the environment variable \"$HOME\".\nOn other platforms, it returns \"PLATFORM_NOT_SUPPORTED\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventGetCurrentUserHomeDirectory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "GetCurrentUserHomeDirectory", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory_Statics::FileSDKBPLibrary_eventGetCurrentUserHomeDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory_Statics::FileSDKBPLibrary_eventGetCurrentUserHomeDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execGetCurrentUserHomeDirectory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UFileSDKBPLibrary::GetCurrentUserHomeDirectory();
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function GetCurrentUserHomeDirectory

// Begin Class UFileSDKBPLibrary Function GetCurrentUsername
struct Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername_Statics
{
	struct FileSDKBPLibrary_eventGetCurrentUsername_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK | Paths" },
		{ "Comment", "/**\n   * Retrieves the current username for whoever is running the program/game. (i.e. <user> in C:\\Users\\<user>)\n   *\n   * @return On Windows, this returns the environment variable \"%USERNAME%\". On Mac and Linux, this returns\n   * the environment variable \"$USER\". On other platforms, it returns \"PLATFORM_NOT_SUPPORTED\".\n   */" },
		{ "DisplayName", "Get Current Username" },
		{ "Keywords", "FileSDK get current user name username" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Retrieves the current username for whoever is running the program/game. (i.e. <user> in C:\\Users\\<user>)\n\n@return On Windows, this returns the environment variable \"%USERNAME%\". On Mac and Linux, this returns\nthe environment variable \"$USER\". On other platforms, it returns \"PLATFORM_NOT_SUPPORTED\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventGetCurrentUsername_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "GetCurrentUsername", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername_Statics::FileSDKBPLibrary_eventGetCurrentUsername_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername_Statics::FileSDKBPLibrary_eventGetCurrentUsername_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execGetCurrentUsername)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UFileSDKBPLibrary::GetCurrentUsername();
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function GetCurrentUsername

// Begin Class UFileSDKBPLibrary Function GetDirectoryContentsWithFileInfo
struct Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics
{
	struct FileSDKBPLibrary_eventGetDirectoryContentsWithFileInfo_Parms
	{
		FString Directory;
		bool SearchSubfolders;
		TArray<FFileSDKFileInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Lists the contents of a directory, including both files and directories, with supplemental information.\n   *\n   * @param Directory An absolute path to the directory that you want to list contents of.\n   * @param SearchSubfolders Whether or not to search subdirectories (true) or just search the\n   * single folder provided (false).\n   *\n   * @return An array of FileSDKFileInfo structs, one for each file and directory, each containing detailed\n   * information of the file/directory.\n   */" },
		{ "CPP_Default_SearchSubfolders", "false" },
		{ "DisplayName", "Get Directory Contents with File Info" },
		{ "Keywords", "FileSDK get search find files list directory contents file info stat" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Lists the contents of a directory, including both files and directories, with supplemental information.\n\n@param Directory An absolute path to the directory that you want to list contents of.\n@param SearchSubfolders Whether or not to search subdirectories (true) or just search the\nsingle folder provided (false).\n\n@return An array of FileSDKFileInfo structs, one for each file and directory, each containing detailed\ninformation of the file/directory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
	static void NewProp_SearchSubfolders_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SearchSubfolders;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventGetDirectoryContentsWithFileInfo_Parms, Directory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::NewProp_SearchSubfolders_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventGetDirectoryContentsWithFileInfo_Parms*)Obj)->SearchSubfolders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::NewProp_SearchSubfolders = { "SearchSubfolders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventGetDirectoryContentsWithFileInfo_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::NewProp_SearchSubfolders_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFileSDKFileInfo, METADATA_PARAMS(0, nullptr) }; // 3050070552
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventGetDirectoryContentsWithFileInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3050070552
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::NewProp_Directory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::NewProp_SearchSubfolders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "GetDirectoryContentsWithFileInfo", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::FileSDKBPLibrary_eventGetDirectoryContentsWithFileInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::FileSDKBPLibrary_eventGetDirectoryContentsWithFileInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execGetDirectoryContentsWithFileInfo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
	P_GET_UBOOL(Z_Param_SearchSubfolders);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFileSDKFileInfo>*)Z_Param__Result=UFileSDKBPLibrary::GetDirectoryContentsWithFileInfo(Z_Param_Directory,Z_Param_SearchSubfolders);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function GetDirectoryContentsWithFileInfo

// Begin Class UFileSDKBPLibrary Function GetEnvironmentVariable
struct Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics
{
	struct FileSDKBPLibrary_eventGetEnvironmentVariable_Parms
	{
		FString VariableName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK | Paths" },
		{ "Comment", "/**\n   * Returns the value of an environment variable.\n   *\n   * @param VariableName On Windows, you fetch environment variables in Command Prompt with something like \"%VAR%\";\n   * on Mac and Linux, you fetch environment variables in the terminal with something like \"$VAR\".\n   * In both cases, Variable Name is VAR without the \"%\" or \"$\".\n   *\n   * @return Returns the value of the environment variable if it's set. If it's not set it returns an empty string.\n   * On target platforms that are not Windows, Mac, or Linux, \"PLATFORM_NOT_SUPPORTED\" is returned.\n   */" },
		{ "DisplayName", "Get Environment Variable" },
		{ "Keywords", "FileSDK get environment env variable" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Returns the value of an environment variable.\n\n@param VariableName On Windows, you fetch environment variables in Command Prompt with something like \"%VAR%\";\non Mac and Linux, you fetch environment variables in the terminal with something like \"$VAR\".\nIn both cases, Variable Name is VAR without the \"%\" or \"$\".\n\n@return Returns the value of the environment variable if it's set. If it's not set it returns an empty string.\nOn target platforms that are not Windows, Mac, or Linux, \"PLATFORM_NOT_SUPPORTED\" is returned." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventGetEnvironmentVariable_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventGetEnvironmentVariable_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "GetEnvironmentVariable", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::FileSDKBPLibrary_eventGetEnvironmentVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::FileSDKBPLibrary_eventGetEnvironmentVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execGetEnvironmentVariable)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UFileSDKBPLibrary::GetEnvironmentVariable(Z_Param_VariableName);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function GetEnvironmentVariable

// Begin Class UFileSDKBPLibrary Function GetFileOrDirectoryInfo
struct Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics
{
	struct FileSDKBPLibrary_eventGetFileOrDirectoryInfo_Parms
	{
		FString Path;
		FFileSDKFileInfo Info;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Returns detailed information for a specific file or directory.\n   *\n   * @param Path An absolute path to the file or directory you want information for.\n   *\n   * @param Info The detailed info struct of the file.\n   */" },
		{ "DisplayName", "Get File or Directory Info" },
		{ "Keywords", "FileSDK get file" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Returns detailed information for a specific file or directory.\n\n@param Path An absolute path to the file or directory you want information for.\n\n@param Info The detailed info struct of the file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventGetFileOrDirectoryInfo_Parms, Path), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventGetFileOrDirectoryInfo_Parms, Info), Z_Construct_UScriptStruct_FFileSDKFileInfo, METADATA_PARAMS(0, nullptr) }; // 3050070552
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "GetFileOrDirectoryInfo", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::FileSDKBPLibrary_eventGetFileOrDirectoryInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::FileSDKBPLibrary_eventGetFileOrDirectoryInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execGetFileOrDirectoryInfo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Path);
	P_GET_STRUCT_REF(FFileSDKFileInfo,Z_Param_Out_Info);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFileSDKBPLibrary::GetFileOrDirectoryInfo(Z_Param_Path,Z_Param_Out_Info);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function GetFileOrDirectoryInfo

// Begin Class UFileSDKBPLibrary Function GetFilesFromDirectory
struct Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics
{
	struct FileSDKBPLibrary_eventGetFilesFromDirectory_Parms
	{
		FString DirectoryToSearch;
		FString FilterFilesWithExtension;
		bool SearchSubfolders;
		EFileSDKFileType FileType;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Searches for files or directories in a directory.\n   *\n   * @param DirectoryToSearch An absolute path to the directory that you want to search in.\n   * @param FilterFilesWithExtension Only used if \"File Type\" is \"File\". This argument allows\n   * you to filter the results by the file extension. Proper usage of this argument is\n   * \".txt\", \".csv\", etc, including the period.\n   * @param SearchSubfolders Whether or not to search subdirectories (true) or just search\n   * the single folder provided (false).\n   * @param FileType Whether or not to search for a \"File\" or a \"Directory\".\n   *\n   * @return An array of absolute paths to each file or directory found.\n   */" },
		{ "CPP_Default_FileType", "File" },
		{ "CPP_Default_SearchSubfolders", "false" },
		{ "DisplayName", "Get Files or Directories from Directory" },
		{ "Keywords", "FileSDK get search find files list directory contents" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Searches for files or directories in a directory.\n\n@param DirectoryToSearch An absolute path to the directory that you want to search in.\n@param FilterFilesWithExtension Only used if \"File Type\" is \"File\". This argument allows\nyou to filter the results by the file extension. Proper usage of this argument is\n\".txt\", \".csv\", etc, including the period.\n@param SearchSubfolders Whether or not to search subdirectories (true) or just search\nthe single folder provided (false).\n@param FileType Whether or not to search for a \"File\" or a \"Directory\".\n\n@return An array of absolute paths to each file or directory found." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryToSearch;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilterFilesWithExtension;
	static void NewProp_SearchSubfolders_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SearchSubfolders;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FileType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_DirectoryToSearch = { "DirectoryToSearch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventGetFilesFromDirectory_Parms, DirectoryToSearch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_FilterFilesWithExtension = { "FilterFilesWithExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventGetFilesFromDirectory_Parms, FilterFilesWithExtension), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_SearchSubfolders_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventGetFilesFromDirectory_Parms*)Obj)->SearchSubfolders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_SearchSubfolders = { "SearchSubfolders", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventGetFilesFromDirectory_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_SearchSubfolders_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventGetFilesFromDirectory_Parms, FileType), Z_Construct_UEnum_FileSDK_EFileSDKFileType, METADATA_PARAMS(0, nullptr) }; // 2593547059
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventGetFilesFromDirectory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_DirectoryToSearch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_FilterFilesWithExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_SearchSubfolders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_FileType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "GetFilesFromDirectory", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::FileSDKBPLibrary_eventGetFilesFromDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::FileSDKBPLibrary_eventGetFilesFromDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execGetFilesFromDirectory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DirectoryToSearch);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilterFilesWithExtension);
	P_GET_UBOOL(Z_Param_SearchSubfolders);
	P_GET_ENUM(EFileSDKFileType,Z_Param_FileType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UFileSDKBPLibrary::GetFilesFromDirectory(Z_Param_DirectoryToSearch,Z_Param_FilterFilesWithExtension,Z_Param_SearchSubfolders,EFileSDKFileType(Z_Param_FileType));
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function GetFilesFromDirectory

// Begin Class UFileSDKBPLibrary Function OpenFileReader
struct Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics
{
	struct FileSDKBPLibrary_eventOpenFileReader_Parms
	{
		FString FileName;
		UFileSDKFileReader* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Creates a File Reader instance; File Readers can be used to control how the file is read.\n   * You can seek to different parts of the file, only read in a specified number of bytes, etc.\n   * This gives you the most amount of control and is great for only reading metadata in large files.\n   * NOTE: Most use cases should use \"Read String from File\" or \"Read Bytes from File\" nodes.\n   *\n   * @param FileName An absolute path of the file that you want to open for reading.\n   *\n   * @return The File Reader instance regardless of the status of successful open.\n   * See the `Is Good` node before attempting to read anything.\n   */" },
		{ "DisplayName", "Open File Reader" },
		{ "Keywords", "FileSDK open file reader" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Creates a File Reader instance; File Readers can be used to control how the file is read.\nYou can seek to different parts of the file, only read in a specified number of bytes, etc.\nThis gives you the most amount of control and is great for only reading metadata in large files.\nNOTE: Most use cases should use \"Read String from File\" or \"Read Bytes from File\" nodes.\n\n@param FileName An absolute path of the file that you want to open for reading.\n\n@return The File Reader instance regardless of the status of successful open.\nSee the `Is Good` node before attempting to read anything." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventOpenFileReader_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventOpenFileReader_Parms, ReturnValue), Z_Construct_UClass_UFileSDKFileReader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "OpenFileReader", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::FileSDKBPLibrary_eventOpenFileReader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::FileSDKBPLibrary_eventOpenFileReader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execOpenFileReader)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFileSDKFileReader**)Z_Param__Result=UFileSDKBPLibrary::OpenFileReader(Z_Param_FileName);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function OpenFileReader

// Begin Class UFileSDKBPLibrary Function PasteClipboard
struct Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard_Statics
{
	struct FileSDKBPLibrary_eventPasteClipboard_Parms
	{
		FString Return;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK | Clipboard" },
		{ "Comment", "/**\n   * Returns a string from your system's clipboard.\n   *\n   * @param Return String stored in your system's clipboard.\n   */" },
		{ "DisplayName", "Get System Clipboard" },
		{ "Keywords", "Paste string from clipboard" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Returns a string from your system's clipboard.\n\n@param Return String stored in your system's clipboard." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Return;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard_Statics::NewProp_Return = { "Return", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventPasteClipboard_Parms, Return), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard_Statics::NewProp_Return,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "PasteClipboard", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard_Statics::FileSDKBPLibrary_eventPasteClipboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard_Statics::FileSDKBPLibrary_eventPasteClipboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execPasteClipboard)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Return);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFileSDKBPLibrary::PasteClipboard(Z_Param_Out_Return);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function PasteClipboard

// Begin Class UFileSDKBPLibrary Function ReadBytesFromFile
struct Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics
{
	struct FileSDKBPLibrary_eventReadBytesFromFile_Parms
	{
		FString FileName;
		TArray<uint8> Content;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Reads the entire contents of a file as a binary Byte array.\n   *\n   * @param FileName An absolute path to the file you want to read.\n   *\n   * @param Content The entire contents of File Name.\n   * @return Returns true if the file was opened and read successfully.\n   */" },
		{ "DisplayName", "Read Bytes from File" },
		{ "Keywords", "FileSDK read file bytes binary" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Reads the entire contents of a file as a binary Byte array.\n\n@param FileName An absolute path to the file you want to read.\n\n@param Content The entire contents of File Name.\n@return Returns true if the file was opened and read successfully." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Content;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventReadBytesFromFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventReadBytesFromFile_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventReadBytesFromFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventReadBytesFromFile_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::NewProp_Content_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "ReadBytesFromFile", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::FileSDKBPLibrary_eventReadBytesFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::FileSDKBPLibrary_eventReadBytesFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execReadBytesFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSDKBPLibrary::ReadBytesFromFile(Z_Param_FileName,Z_Param_Out_Content);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function ReadBytesFromFile

// Begin Class UFileSDKBPLibrary Function ReadLinesFromFile
struct Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics
{
	struct FileSDKBPLibrary_eventReadLinesFromFile_Parms
	{
		FString FileName;
		TSubclassOf<UFileSDKLineReader> LineReader;
		TArray<FString> Lines;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Read the entire contents of a file as an array of strings. Each element in the array is a\n   * separate line in the file. Both LF (Line Feed, used in Linux and Mac systems) and CRLF\n   * (Carriage Return, Line Feed, used in Windows systems) are supported.\n   *\n   * @param FileName An absolute path to the file you would like to read.\n   * @param LineReader While every line is read from the file regardless, you can use this\n   * parameter to filter which lines are returned in Lines. To do this, specify a child class\n   * of the \"FileSDKLineReader\" class and override the \"FilterLine\" function. When the \"FilterLine\"\n   * function returns true, the line is provided in the output of the \"Read Lines From File\" function.\n   * Find more details in our docs at wiki.incanta.games.\n   *\n   * @param Lines The lines of the file, optionally filtered by LineReader. These do not contain the\n   * line endings (i.e. there is no LF or CRLF character(s) at the end of the strings).\n   */" },
		{ "DisplayName", "Read Lines from File" },
		{ "Keywords", "FileSDK read lines array file string text" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Read the entire contents of a file as an array of strings. Each element in the array is a\nseparate line in the file. Both LF (Line Feed, used in Linux and Mac systems) and CRLF\n(Carriage Return, Line Feed, used in Windows systems) are supported.\n\n@param FileName An absolute path to the file you would like to read.\n@param LineReader While every line is read from the file regardless, you can use this\nparameter to filter which lines are returned in Lines. To do this, specify a child class\nof the \"FileSDKLineReader\" class and override the \"FilterLine\" function. When the \"FilterLine\"\nfunction returns true, the line is provided in the output of the \"Read Lines From File\" function.\nFind more details in our docs at wiki.incanta.games.\n\n@param Lines The lines of the file, optionally filtered by LineReader. These do not contain the\nline endings (i.e. there is no LF or CRLF character(s) at the end of the strings)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LineReader;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Lines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Lines;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventReadLinesFromFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::NewProp_LineReader = { "LineReader", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventReadLinesFromFile_Parms, LineReader), Z_Construct_UClass_UClass, Z_Construct_UClass_UFileSDKLineReader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::NewProp_Lines_Inner = { "Lines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::NewProp_Lines = { "Lines", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventReadLinesFromFile_Parms, Lines), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventReadLinesFromFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventReadLinesFromFile_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::NewProp_LineReader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::NewProp_Lines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::NewProp_Lines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "ReadLinesFromFile", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::FileSDKBPLibrary_eventReadLinesFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::FileSDKBPLibrary_eventReadLinesFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execReadLinesFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_OBJECT(UClass,Z_Param_LineReader);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Lines);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSDKBPLibrary::ReadLinesFromFile(Z_Param_FileName,Z_Param_LineReader,Z_Param_Out_Lines);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function ReadLinesFromFile

// Begin Class UFileSDKBPLibrary Function ReadStringFromFile
struct Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics
{
	struct FileSDKBPLibrary_eventReadStringFromFile_Parms
	{
		FString FileName;
		FString Content;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Reads the entire contents of a file as text into a string.\n   *\n   * @param FileName An absolute path to the file you would like to read.\n   *\n   * @param Content The entire contents of File Name.\n   * @return Returns true if the file could be opened and read successfully.\n   */" },
		{ "DisplayName", "Read String from File" },
		{ "Keywords", "FileSDK read file string text" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Reads the entire contents of a file as text into a string.\n\n@param FileName An absolute path to the file you would like to read.\n\n@param Content The entire contents of File Name.\n@return Returns true if the file could be opened and read successfully." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventReadStringFromFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventReadStringFromFile_Parms, Content), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventReadStringFromFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventReadStringFromFile_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "ReadStringFromFile", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::FileSDKBPLibrary_eventReadStringFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::FileSDKBPLibrary_eventReadStringFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execReadStringFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSDKBPLibrary::ReadStringFromFile(Z_Param_FileName,Z_Param_Out_Content);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function ReadStringFromFile

// Begin Class UFileSDKBPLibrary Function RenameFileOrDirectory
struct Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics
{
	struct FileSDKBPLibrary_eventRenameFileOrDirectory_Parms
	{
		FString Source;
		FString Destination;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Renames/moves a file or a directory to a new name/location.\n   *\n   * @param Source An absolute path to the file/directory that you want to rename/move.\n   * @param Destination An absolute path of the new location/name you want for the file or directory.\n   * You cannot provide \"/path/to/file.csv\" for Source and only provide \"file-old.csv\" for Destination;\n   * you must provide the full absolute path of the new file (i.e. \"/path/to/file-old.csv\").\n   *\n   * @return Returns whether or not the file/directory was successfully renamed/moved.\n   */" },
		{ "DisplayName", "Rename File or Directory" },
		{ "Keywords", "FileSDK rename move file directory folder" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Renames/moves a file or a directory to a new name/location.\n\n@param Source An absolute path to the file/directory that you want to rename/move.\n@param Destination An absolute path of the new location/name you want for the file or directory.\nYou cannot provide \"/path/to/file.csv\" for Source and only provide \"file-old.csv\" for Destination;\nyou must provide the full absolute path of the new file (i.e. \"/path/to/file-old.csv\").\n\n@return Returns whether or not the file/directory was successfully renamed/moved." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Destination;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventRenameFileOrDirectory_Parms, Source), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventRenameFileOrDirectory_Parms, Destination), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventRenameFileOrDirectory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventRenameFileOrDirectory_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "RenameFileOrDirectory", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::FileSDKBPLibrary_eventRenameFileOrDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::FileSDKBPLibrary_eventRenameFileOrDirectory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execRenameFileOrDirectory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_GET_PROPERTY(FStrProperty,Z_Param_Destination);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSDKBPLibrary::RenameFileOrDirectory(Z_Param_Source,Z_Param_Destination);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function RenameFileOrDirectory

// Begin Class UFileSDKBPLibrary Function WriteBytesToFile
struct Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics
{
	struct FileSDKBPLibrary_eventWriteBytesToFile_Parms
	{
		FString FileName;
		TArray<uint8> Content;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Writes a Byte array as binary data to a file. This node currently always overwrites the\n   * file contents. If you have a use case for appending binary files, please let us know.\n   * Will create the file if it doesn't exist. This node expects the parent directory to already\n   * exist (i.e. it will not create directories for you, and will return false if the parent\n   * directories do not exist).\n   *\n   * @param FileName An absolute path to the file you want to write.\n   * @param Content The bytes you would like to write to the file.\n   *\n   * @return Returns true if the file was opened wnd written successfully.\n   */" },
		{ "DisplayName", "Write Bytes to File" },
		{ "Keywords", "FileSDK write save file bytes binary" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Writes a Byte array as binary data to a file. This node currently always overwrites the\nfile contents. If you have a use case for appending binary files, please let us know.\nWill create the file if it doesn't exist. This node expects the parent directory to already\nexist (i.e. it will not create directories for you, and will return false if the parent\ndirectories do not exist).\n\n@param FileName An absolute path to the file you want to write.\n@param Content The bytes you would like to write to the file.\n\n@return Returns true if the file was opened wnd written successfully." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Content;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventWriteBytesToFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventWriteBytesToFile_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventWriteBytesToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventWriteBytesToFile_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::NewProp_Content_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "WriteBytesToFile", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::FileSDKBPLibrary_eventWriteBytesToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::FileSDKBPLibrary_eventWriteBytesToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execWriteBytesToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_TARRAY(uint8,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSDKBPLibrary::WriteBytesToFile(Z_Param_FileName,Z_Param_Content);
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function WriteBytesToFile

// Begin Class UFileSDKBPLibrary Function WriteStringToFile
struct Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics
{
	struct FileSDKBPLibrary_eventWriteStringToFile_Parms
	{
		FString FileName;
		FString Content;
		bool Append;
		EFileSDKEncodingOptions Encoding;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Writes a string as text to a file, with options to overwrite/append as well as encoding options.\n   * Will create the file if it doesn't exist. This node expects the parent directory to already exist\n   * (i.e. it will not create directories for you, and will return false if the parent directories do not exist).\n   *\n   * @param FileName An absolute path to the file you would like to write.\n   * @param Content The text you would like to write to the file.\n   * @param Append If set to false, the file will be erased before writing Content to it; if set to true,\n   * Content will be written at the end of the file. New lines/carriage returns will not be automatically\n   * inserted for you.\n   * @param Encoding Encoding options that are passed down to the file writer. \"Auto Detect\" will do its\n   * best to determine the encoding of the string, but you can also use one of the\n   * \"Force (Ansi | Unicode | UTF8 | UTF8WithoutBOM)\" options to force how the contents are encoded.\n   *\n   * @return Returns true if the file could be opened and written successfully.\n   */" },
		{ "CPP_Default_Append", "false" },
		{ "CPP_Default_Encoding", "AutoDetect" },
		{ "DisplayName", "Write String to File" },
		{ "Keywords", "FileSDK write append save file string text" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
		{ "ToolTip", "Writes a string as text to a file, with options to overwrite/append as well as encoding options.\nWill create the file if it doesn't exist. This node expects the parent directory to already exist\n(i.e. it will not create directories for you, and will return false if the parent directories do not exist).\n\n@param FileName An absolute path to the file you would like to write.\n@param Content The text you would like to write to the file.\n@param Append If set to false, the file will be erased before writing Content to it; if set to true,\nContent will be written at the end of the file. New lines/carriage returns will not be automatically\ninserted for you.\n@param Encoding Encoding options that are passed down to the file writer. \"Auto Detect\" will do its\nbest to determine the encoding of the string, but you can also use one of the\n\"Force (Ansi | Unicode | UTF8 | UTF8WithoutBOM)\" options to force how the contents are encoded.\n\n@return Returns true if the file could be opened and written successfully." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static void NewProp_Append_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Append;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Encoding_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Encoding;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventWriteStringToFile_Parms, FileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventWriteStringToFile_Parms, Content), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_Append_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventWriteStringToFile_Parms*)Obj)->Append = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_Append = { "Append", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventWriteStringToFile_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_Append_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_Encoding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_Encoding = { "Encoding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKBPLibrary_eventWriteStringToFile_Parms, Encoding), Z_Construct_UEnum_FileSDK_EFileSDKEncodingOptions, METADATA_PARAMS(0, nullptr) }; // 2639114133
void Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKBPLibrary_eventWriteStringToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKBPLibrary_eventWriteStringToFile_Parms), &Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_Append,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_Encoding_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_Encoding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKBPLibrary, nullptr, "WriteStringToFile", nullptr, nullptr, Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::FileSDKBPLibrary_eventWriteStringToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::FileSDKBPLibrary_eventWriteStringToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKBPLibrary::execWriteStringToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Content);
	P_GET_UBOOL(Z_Param_Append);
	P_GET_ENUM(EFileSDKEncodingOptions,Z_Param_Encoding);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFileSDKBPLibrary::WriteStringToFile(Z_Param_FileName,Z_Param_Content,Z_Param_Append,EFileSDKEncodingOptions(Z_Param_Encoding));
	P_NATIVE_END;
}
// End Class UFileSDKBPLibrary Function WriteStringToFile

// Begin Class UFileSDKBPLibrary
void UFileSDKBPLibrary::StaticRegisterNativesUFileSDKBPLibrary()
{
	UClass* Class = UFileSDKBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CopyDirectory", &UFileSDKBPLibrary::execCopyDirectory },
		{ "CopyDirectoryAsync", &UFileSDKBPLibrary::execCopyDirectoryAsync },
		{ "CopyFile", &UFileSDKBPLibrary::execCopyFile },
		{ "CopyFileAsync", &UFileSDKBPLibrary::execCopyFileAsync },
		{ "CopyToClipboard", &UFileSDKBPLibrary::execCopyToClipboard },
		{ "CreateDirectory", &UFileSDKBPLibrary::execCreateDirectory },
		{ "CreateFile", &UFileSDKBPLibrary::execCreateFile },
		{ "DeleteDirectory", &UFileSDKBPLibrary::execDeleteDirectory },
		{ "DeleteFile", &UFileSDKBPLibrary::execDeleteFile },
		{ "GetCurrentUserHomeDirectory", &UFileSDKBPLibrary::execGetCurrentUserHomeDirectory },
		{ "GetCurrentUsername", &UFileSDKBPLibrary::execGetCurrentUsername },
		{ "GetDirectoryContentsWithFileInfo", &UFileSDKBPLibrary::execGetDirectoryContentsWithFileInfo },
		{ "GetEnvironmentVariable", &UFileSDKBPLibrary::execGetEnvironmentVariable },
		{ "GetFileOrDirectoryInfo", &UFileSDKBPLibrary::execGetFileOrDirectoryInfo },
		{ "GetFilesFromDirectory", &UFileSDKBPLibrary::execGetFilesFromDirectory },
		{ "OpenFileReader", &UFileSDKBPLibrary::execOpenFileReader },
		{ "PasteClipboard", &UFileSDKBPLibrary::execPasteClipboard },
		{ "ReadBytesFromFile", &UFileSDKBPLibrary::execReadBytesFromFile },
		{ "ReadLinesFromFile", &UFileSDKBPLibrary::execReadLinesFromFile },
		{ "ReadStringFromFile", &UFileSDKBPLibrary::execReadStringFromFile },
		{ "RenameFileOrDirectory", &UFileSDKBPLibrary::execRenameFileOrDirectory },
		{ "WriteBytesToFile", &UFileSDKBPLibrary::execWriteBytesToFile },
		{ "WriteStringToFile", &UFileSDKBPLibrary::execWriteStringToFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileSDKBPLibrary);
UClass* Z_Construct_UClass_UFileSDKBPLibrary_NoRegister()
{
	return UFileSDKBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UFileSDKBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FileSDKBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FileSDKBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectory, "CopyDirectory" }, // 1271028296
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_CopyDirectoryAsync, "CopyDirectoryAsync" }, // 1660861974
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_CopyFile, "CopyFile" }, // 806798807
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_CopyFileAsync, "CopyFileAsync" }, // 506489595
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_CopyToClipboard, "CopyToClipboard" }, // 3738718687
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_CreateDirectory, "CreateDirectory" }, // 53180930
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_CreateFile, "CreateFile" }, // 2567400324
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_DeleteDirectory, "DeleteDirectory" }, // 2034499964
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_DeleteFile, "DeleteFile" }, // 153518257
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUserHomeDirectory, "GetCurrentUserHomeDirectory" }, // 2869447050
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_GetCurrentUsername, "GetCurrentUsername" }, // 3888687184
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_GetDirectoryContentsWithFileInfo, "GetDirectoryContentsWithFileInfo" }, // 283585534
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_GetEnvironmentVariable, "GetEnvironmentVariable" }, // 2267502377
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_GetFileOrDirectoryInfo, "GetFileOrDirectoryInfo" }, // 242199715
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_GetFilesFromDirectory, "GetFilesFromDirectory" }, // 759444761
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_OpenFileReader, "OpenFileReader" }, // 3237585101
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_PasteClipboard, "PasteClipboard" }, // 496111828
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_ReadBytesFromFile, "ReadBytesFromFile" }, // 129024934
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_ReadLinesFromFile, "ReadLinesFromFile" }, // 502405963
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_ReadStringFromFile, "ReadStringFromFile" }, // 2090353149
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_RenameFileOrDirectory, "RenameFileOrDirectory" }, // 588705704
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_WriteBytesToFile, "WriteBytesToFile" }, // 2703160468
		{ &Z_Construct_UFunction_UFileSDKBPLibrary_WriteStringToFile, "WriteStringToFile" }, // 3755020446
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileSDKBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFileSDKBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_FileSDK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileSDKBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileSDKBPLibrary_Statics::ClassParams = {
	&UFileSDKBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFileSDKBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UFileSDKBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFileSDKBPLibrary()
{
	if (!Z_Registration_Info_UClass_UFileSDKBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileSDKBPLibrary.OuterSingleton, Z_Construct_UClass_UFileSDKBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFileSDKBPLibrary.OuterSingleton;
}
template<> FILESDK_API UClass* StaticClass<UFileSDKBPLibrary>()
{
	return UFileSDKBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFileSDKBPLibrary);
UFileSDKBPLibrary::~UFileSDKBPLibrary() {}
// End Class UFileSDKBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFileSDKDelegatePreInfo::StaticStruct, Z_Construct_UScriptStruct_FFileSDKDelegatePreInfo_Statics::NewStructOps, TEXT("FileSDKDelegatePreInfo"), &Z_Registration_Info_UScriptStruct_FileSDKDelegatePreInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFileSDKDelegatePreInfo), 739444454U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFileSDKBPLibrary, UFileSDKBPLibrary::StaticClass, TEXT("UFileSDKBPLibrary"), &Z_Registration_Info_UClass_UFileSDKBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileSDKBPLibrary), 2104764848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_1575640985(TEXT("/Script/FileSDK"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKBPLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
