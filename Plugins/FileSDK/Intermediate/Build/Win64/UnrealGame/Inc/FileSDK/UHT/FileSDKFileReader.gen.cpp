// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileSDK/Public/FileSDKFileReader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileSDKFileReader() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FILESDK_API UClass* Z_Construct_UClass_UFileSDKFileReader();
FILESDK_API UClass* Z_Construct_UClass_UFileSDKFileReader_NoRegister();
FILESDK_API UEnum* Z_Construct_UEnum_FileSDK_EFileSDKFileAnchor();
UPackage* Z_Construct_UPackage__Script_FileSDK();
// End Cross Module References

// Begin Class UFileSDKFileReader Function Close
struct Z_Construct_UFunction_UFileSDKFileReader_Close_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK | File Reader" },
		{ "Comment", "/**\n   * Closes the file if it's valid/open. Does nothing otherwise.\n   */" },
		{ "DisplayName", "Close File Reader" },
		{ "Keywords", "FileSDK file reader close" },
		{ "ModuleRelativePath", "Public/FileSDKFileReader.h" },
		{ "ToolTip", "Closes the file if it's valid/open. Does nothing otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKFileReader_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKFileReader, nullptr, "Close", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_Close_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKFileReader_Close_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFileSDKFileReader_Close()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKFileReader_Close_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKFileReader::execClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Close();
	P_NATIVE_END;
}
// End Class UFileSDKFileReader Function Close

// Begin Class UFileSDKFileReader Function GetFilePosition
struct Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition_Statics
{
	struct FileSDKFileReader_eventGetFilePosition_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK | File Reader" },
		{ "Comment", "/**\n   * Returns the current position of the pointer for reading the file.\n   *\n   * @return The current position.\n   */" },
		{ "DisplayName", "Get File Position" },
		{ "Keywords", "FileSDK get current file position pointer" },
		{ "ModuleRelativePath", "Public/FileSDKFileReader.h" },
		{ "ToolTip", "Returns the current position of the pointer for reading the file.\n\n@return The current position." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKFileReader_eventGetFilePosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKFileReader, nullptr, "GetFilePosition", nullptr, nullptr, Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition_Statics::FileSDKFileReader_eventGetFilePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition_Statics::FileSDKFileReader_eventGetFilePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKFileReader::execGetFilePosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetFilePosition();
	P_NATIVE_END;
}
// End Class UFileSDKFileReader Function GetFilePosition

// Begin Class UFileSDKFileReader Function IsGood
struct Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics
{
	struct FileSDKFileReader_eventIsGood_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK | File Reader" },
		{ "Comment", "/**\n   * Checks to see if the file reader is in a \"good\" state. This is synonymous to the C++ good function.\n   * This function returns false if the file reader is in a bad state, failed, or at the end of the file.\n   *\n   * @return Returns false if the file reader is in a bad state, failed, or at the end of the file.\n   * Returns true if the file is successfully open and ready to read more bytes (i.e. the pointer\n   * is not at the end of the file).\n   */" },
		{ "DisplayName", "File Is Good" },
		{ "Keywords", "FileSDK file reader is good open" },
		{ "ModuleRelativePath", "Public/FileSDKFileReader.h" },
		{ "ToolTip", "Checks to see if the file reader is in a \"good\" state. This is synonymous to the C++ good function.\nThis function returns false if the file reader is in a bad state, failed, or at the end of the file.\n\n@return Returns false if the file reader is in a bad state, failed, or at the end of the file.\nReturns true if the file is successfully open and ready to read more bytes (i.e. the pointer\nis not at the end of the file)." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKFileReader_eventIsGood_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKFileReader_eventIsGood_Parms), &Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKFileReader, nullptr, "IsGood", nullptr, nullptr, Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::FileSDKFileReader_eventIsGood_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::FileSDKFileReader_eventIsGood_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKFileReader_IsGood()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKFileReader_IsGood_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKFileReader::execIsGood)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGood();
	P_NATIVE_END;
}
// End Class UFileSDKFileReader Function IsGood

// Begin Class UFileSDKFileReader Function ReadBytes
struct Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics
{
	struct FileSDKFileReader_eventReadBytes_Parms
	{
		int64 Num;
		TArray<uint8> Content;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK | File Reader" },
		{ "Comment", "/**\n   * Reads a specified number of bytes from the current file reader location as a binary Byte array.\n   * The file reader location is advanced to where ever it finishes reading.\n   *\n   * @param Num The number of bytes to read. If Num greater than the number of bytes left in the file,\n   * it will read to the end of the file.\n   *\n   * @param Content The bytes that were read in as a binary Byte array.\n   * @return \x09The actual number of bytes read. This is usually only different than Num if you reached\n   * the end of the file. You should, however, still use Is Good to check if you're at the end of the file.\n   */" },
		{ "DisplayName", "Read Bytes" },
		{ "Keywords", "FileSDK read bytes" },
		{ "ModuleRelativePath", "Public/FileSDKFileReader.h" },
		{ "ToolTip", "Reads a specified number of bytes from the current file reader location as a binary Byte array.\nThe file reader location is advanced to where ever it finishes reading.\n\n@param Num The number of bytes to read. If Num greater than the number of bytes left in the file,\nit will read to the end of the file.\n\n@param Content The bytes that were read in as a binary Byte array.\n@return   The actual number of bytes read. This is usually only different than Num if you reached\nthe end of the file. You should, however, still use Is Good to check if you're at the end of the file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Num;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Content;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKFileReader_eventReadBytes_Parms, Num), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKFileReader_eventReadBytes_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKFileReader_eventReadBytes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::NewProp_Num,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::NewProp_Content_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKFileReader, nullptr, "ReadBytes", nullptr, nullptr, Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::FileSDKFileReader_eventReadBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::FileSDKFileReader_eventReadBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKFileReader_ReadBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKFileReader_ReadBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKFileReader::execReadBytes)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_Num);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->ReadBytes(Z_Param_Num,Z_Param_Out_Content);
	P_NATIVE_END;
}
// End Class UFileSDKFileReader Function ReadBytes

// Begin Class UFileSDKFileReader Function ReadBytesToEnd
struct Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics
{
	struct FileSDKFileReader_eventReadBytesToEnd_Parms
	{
		TArray<uint8> Content;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK | File Reader" },
		{ "Comment", "/**\n   * Reads the rest of the file from the current location as a binary Byte array. The file reader\n   * location is advanced to the end of the file.\n   *\n   * @param Content The bytes that were read in as a binary Byte array.\n   * @return The actual number of bytes read.\n   */" },
		{ "DisplayName", "Read Bytes To End" },
		{ "Keywords", "FileSDK read bytes to end" },
		{ "ModuleRelativePath", "Public/FileSDKFileReader.h" },
		{ "ToolTip", "Reads the rest of the file from the current location as a binary Byte array. The file reader\nlocation is advanced to the end of the file.\n\n@param Content The bytes that were read in as a binary Byte array.\n@return The actual number of bytes read." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Content;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKFileReader_eventReadBytesToEnd_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKFileReader_eventReadBytesToEnd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::NewProp_Content_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKFileReader, nullptr, "ReadBytesToEnd", nullptr, nullptr, Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::FileSDKFileReader_eventReadBytesToEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::FileSDKFileReader_eventReadBytesToEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKFileReader::execReadBytesToEnd)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->ReadBytesToEnd(Z_Param_Out_Content);
	P_NATIVE_END;
}
// End Class UFileSDKFileReader Function ReadBytesToEnd

// Begin Class UFileSDKFileReader Function ReadString
struct Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics
{
	struct FileSDKFileReader_eventReadString_Parms
	{
		int64 Num;
		FString Content;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK | File Reader" },
		{ "Comment", "/**\n   * Reads a specified number of bytes from the current file reader location as a String.\n   * The file reader location is advanced to where ever it finishes reading.\n   *\n   * @param Num The number of bytes to read. If Num greater than the number of bytes left in the file,\n   * it will read to the end of the file.\n   *\n   * @param Content The bytes that were read in as a String.\n   * @return The actual number of bytes read. This is usually only different than Num if you reached\n   * the end of the file. You should, however, still use \"File Is Good\" to check if you're at the end of the file.\n   */" },
		{ "DisplayName", "Read String" },
		{ "Keywords", "FileSDK read string chars characters" },
		{ "ModuleRelativePath", "Public/FileSDKFileReader.h" },
		{ "ToolTip", "Reads a specified number of bytes from the current file reader location as a String.\nThe file reader location is advanced to where ever it finishes reading.\n\n@param Num The number of bytes to read. If Num greater than the number of bytes left in the file,\nit will read to the end of the file.\n\n@param Content The bytes that were read in as a String.\n@return The actual number of bytes read. This is usually only different than Num if you reached\nthe end of the file. You should, however, still use \"File Is Good\" to check if you're at the end of the file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Num;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKFileReader_eventReadString_Parms, Num), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKFileReader_eventReadString_Parms, Content), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKFileReader_eventReadString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::NewProp_Num,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKFileReader, nullptr, "ReadString", nullptr, nullptr, Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::FileSDKFileReader_eventReadString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::FileSDKFileReader_eventReadString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKFileReader_ReadString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKFileReader_ReadString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKFileReader::execReadString)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_Num);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->ReadString(Z_Param_Num,Z_Param_Out_Content);
	P_NATIVE_END;
}
// End Class UFileSDKFileReader Function ReadString

// Begin Class UFileSDKFileReader Function ReadStringToEnd
struct Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics
{
	struct FileSDKFileReader_eventReadStringToEnd_Parms
	{
		FString Content;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK | File Reader" },
		{ "Comment", "/**\n   * Reads the rest of the file from the current location as a String. The file reader location\n   * is advanced to the end of the file.\n   *\n   * @param Content The bytes that were read in as a String.\n   * @return The actual number of bytes read.\n   */" },
		{ "DisplayName", "Read String to End" },
		{ "Keywords", "FileSDK read string chars characters to end" },
		{ "ModuleRelativePath", "Public/FileSDKFileReader.h" },
		{ "ToolTip", "Reads the rest of the file from the current location as a String. The file reader location\nis advanced to the end of the file.\n\n@param Content The bytes that were read in as a String.\n@return The actual number of bytes read." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKFileReader_eventReadStringToEnd_Parms, Content), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKFileReader_eventReadStringToEnd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKFileReader, nullptr, "ReadStringToEnd", nullptr, nullptr, Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::FileSDKFileReader_eventReadStringToEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::FileSDKFileReader_eventReadStringToEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKFileReader::execReadStringToEnd)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->ReadStringToEnd(Z_Param_Out_Content);
	P_NATIVE_END;
}
// End Class UFileSDKFileReader Function ReadStringToEnd

// Begin Class UFileSDKFileReader Function SeekFilePosition
struct Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics
{
	struct FileSDKFileReader_eventSeekFilePosition_Parms
	{
		EFileSDKFileAnchor Anchor;
		int64 Offset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK | File Reader" },
		{ "Comment", "/**\n   * Change the position of the File Reader; this is essentially a pointer of where you're going\n   * to start reading for any of the following read nodes. When you open a File Reader, the seek\n   * position starts at the Beginning. This is synonymous to the C++ seekg function.\n   *\n   * @param Anchor This defines the \"from\" where that Offset is applied to.\n   * @param Offset Number of bytes to offset from the Anchor.\n   *\n   * @return Returns true if the file is open and \"File Is Good\"; otherwise returns false.\n   */" },
		{ "DisplayName", "Seek File Position" },
		{ "Keywords", "FileSDK seek change file position pointer" },
		{ "ModuleRelativePath", "Public/FileSDKFileReader.h" },
		{ "ToolTip", "Change the position of the File Reader; this is essentially a pointer of where you're going\nto start reading for any of the following read nodes. When you open a File Reader, the seek\nposition starts at the Beginning. This is synonymous to the C++ seekg function.\n\n@param Anchor This defines the \"from\" where that Offset is applied to.\n@param Offset Number of bytes to offset from the Anchor.\n\n@return Returns true if the file is open and \"File Is Good\"; otherwise returns false." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Anchor_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Offset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::NewProp_Anchor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKFileReader_eventSeekFilePosition_Parms, Anchor), Z_Construct_UEnum_FileSDK_EFileSDKFileAnchor, METADATA_PARAMS(0, nullptr) }; // 234296418
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKFileReader_eventSeekFilePosition_Parms, Offset), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKFileReader_eventSeekFilePosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKFileReader_eventSeekFilePosition_Parms), &Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::NewProp_Anchor_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::NewProp_Anchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKFileReader, nullptr, "SeekFilePosition", nullptr, nullptr, Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::FileSDKFileReader_eventSeekFilePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::FileSDKFileReader_eventSeekFilePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKFileReader::execSeekFilePosition)
{
	P_GET_ENUM(EFileSDKFileAnchor,Z_Param_Anchor);
	P_GET_PROPERTY(FInt64Property,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SeekFilePosition(EFileSDKFileAnchor(Z_Param_Anchor),Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UFileSDKFileReader Function SeekFilePosition

// Begin Class UFileSDKFileReader
void UFileSDKFileReader::StaticRegisterNativesUFileSDKFileReader()
{
	UClass* Class = UFileSDKFileReader::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Close", &UFileSDKFileReader::execClose },
		{ "GetFilePosition", &UFileSDKFileReader::execGetFilePosition },
		{ "IsGood", &UFileSDKFileReader::execIsGood },
		{ "ReadBytes", &UFileSDKFileReader::execReadBytes },
		{ "ReadBytesToEnd", &UFileSDKFileReader::execReadBytesToEnd },
		{ "ReadString", &UFileSDKFileReader::execReadString },
		{ "ReadStringToEnd", &UFileSDKFileReader::execReadStringToEnd },
		{ "SeekFilePosition", &UFileSDKFileReader::execSeekFilePosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileSDKFileReader);
UClass* Z_Construct_UClass_UFileSDKFileReader_NoRegister()
{
	return UFileSDKFileReader::StaticClass();
}
struct Z_Construct_UClass_UFileSDKFileReader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FileSDKFileReader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FileSDKFileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**\n   * The absolute path to the file being read.\n   */" },
		{ "ModuleRelativePath", "Public/FileSDKFileReader.h" },
		{ "ToolTip", "The absolute path to the file being read." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileSDKFileReader_Close, "Close" }, // 1159453383
		{ &Z_Construct_UFunction_UFileSDKFileReader_GetFilePosition, "GetFilePosition" }, // 1593946310
		{ &Z_Construct_UFunction_UFileSDKFileReader_IsGood, "IsGood" }, // 2414954967
		{ &Z_Construct_UFunction_UFileSDKFileReader_ReadBytes, "ReadBytes" }, // 2737989534
		{ &Z_Construct_UFunction_UFileSDKFileReader_ReadBytesToEnd, "ReadBytesToEnd" }, // 2234967543
		{ &Z_Construct_UFunction_UFileSDKFileReader_ReadString, "ReadString" }, // 2749125344
		{ &Z_Construct_UFunction_UFileSDKFileReader_ReadStringToEnd, "ReadStringToEnd" }, // 4076119314
		{ &Z_Construct_UFunction_UFileSDKFileReader_SeekFilePosition, "SeekFilePosition" }, // 2713778844
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileSDKFileReader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFileSDKFileReader_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFileSDKFileReader, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFileSDKFileReader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileSDKFileReader_Statics::NewProp_FileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileSDKFileReader_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFileSDKFileReader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FileSDK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileSDKFileReader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileSDKFileReader_Statics::ClassParams = {
	&UFileSDKFileReader::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFileSDKFileReader_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFileSDKFileReader_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFileSDKFileReader_Statics::Class_MetaDataParams), Z_Construct_UClass_UFileSDKFileReader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFileSDKFileReader()
{
	if (!Z_Registration_Info_UClass_UFileSDKFileReader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileSDKFileReader.OuterSingleton, Z_Construct_UClass_UFileSDKFileReader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFileSDKFileReader.OuterSingleton;
}
template<> FILESDK_API UClass* StaticClass<UFileSDKFileReader>()
{
	return UFileSDKFileReader::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFileSDKFileReader);
UFileSDKFileReader::~UFileSDKFileReader() {}
// End Class UFileSDKFileReader

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileReader_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFileSDKFileReader, UFileSDKFileReader::StaticClass, TEXT("UFileSDKFileReader"), &Z_Registration_Info_UClass_UFileSDKFileReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileSDKFileReader), 2577434651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileReader_h_2679575461(TEXT("/Script/FileSDK"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKFileReader_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
