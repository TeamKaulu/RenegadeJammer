// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileSDK/Public/FileSDKLineReader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileSDKLineReader() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FILESDK_API UClass* Z_Construct_UClass_UFileSDKLineReader();
FILESDK_API UClass* Z_Construct_UClass_UFileSDKLineReader_NoRegister();
UPackage* Z_Construct_UPackage__Script_FileSDK();
// End Cross Module References

// Begin Class UFileSDKLineReader Function FilterLine
struct FileSDKLineReader_eventFilterLine_Parms
{
	FString Line;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	FileSDKLineReader_eventFilterLine_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UFileSDKLineReader_FilterLine = FName(TEXT("FilterLine"));
bool UFileSDKLineReader::FilterLine(const FString& Line)
{
	FileSDKLineReader_eventFilterLine_Parms Parms;
	Parms.Line=Line;
	ProcessEvent(FindFunctionChecked(NAME_UFileSDKLineReader_FilterLine),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * An overridable function that dictates whether or not a line in a file\n   * is filtered. Should return true if the line should be provided, false\n   * if the line should be filtered out (not included).\n   *\n   * @param Line The contents of the current line, excluding line endings.\n   *\n   * @return Should return true if the line should be provided, false\n   * if the line should be filtered out (not included).\n   */" },
		{ "ModuleRelativePath", "Public/FileSDKLineReader.h" },
		{ "ToolTip", "An overridable function that dictates whether or not a line in a file\nis filtered. Should return true if the line should be provided, false\nif the line should be filtered out (not included).\n\n@param Line The contents of the current line, excluding line endings.\n\n@return Should return true if the line should be provided, false\nif the line should be filtered out (not included)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Line_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Line;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKLineReader_eventFilterLine_Parms, Line), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Line_MetaData), NewProp_Line_MetaData) };
void Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FileSDKLineReader_eventFilterLine_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKLineReader_eventFilterLine_Parms), &Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::NewProp_Line,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKLineReader, nullptr, "FilterLine", nullptr, nullptr, Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::PropPointers), sizeof(FileSDKLineReader_eventFilterLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(FileSDKLineReader_eventFilterLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKLineReader_FilterLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKLineReader_FilterLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKLineReader::execFilterLine)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Line);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FilterLine_Implementation(Z_Param_Line);
	P_NATIVE_END;
}
// End Class UFileSDKLineReader Function FilterLine

// Begin Class UFileSDKLineReader
void UFileSDKLineReader::StaticRegisterNativesUFileSDKLineReader()
{
	UClass* Class = UFileSDKLineReader::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FilterLine", &UFileSDKLineReader::execFilterLine },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileSDKLineReader);
UClass* Z_Construct_UClass_UFileSDKLineReader_NoRegister()
{
	return UFileSDKLineReader::StaticClass();
}
struct Z_Construct_UClass_UFileSDKLineReader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FileSDKLineReader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FileSDKLineReader.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileSDKLineReader_FilterLine, "FilterLine" }, // 2804717018
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileSDKLineReader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFileSDKLineReader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FileSDK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileSDKLineReader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileSDKLineReader_Statics::ClassParams = {
	&UFileSDKLineReader::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFileSDKLineReader_Statics::Class_MetaDataParams), Z_Construct_UClass_UFileSDKLineReader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFileSDKLineReader()
{
	if (!Z_Registration_Info_UClass_UFileSDKLineReader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileSDKLineReader.OuterSingleton, Z_Construct_UClass_UFileSDKLineReader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFileSDKLineReader.OuterSingleton;
}
template<> FILESDK_API UClass* StaticClass<UFileSDKLineReader>()
{
	return UFileSDKLineReader::StaticClass();
}
UFileSDKLineReader::UFileSDKLineReader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFileSDKLineReader);
UFileSDKLineReader::~UFileSDKLineReader() {}
// End Class UFileSDKLineReader

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKLineReader_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFileSDKLineReader, UFileSDKLineReader::StaticClass, TEXT("UFileSDKLineReader"), &Z_Registration_Info_UClass_UFileSDKLineReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileSDKLineReader), 1751683052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKLineReader_h_2348458457(TEXT("/Script/FileSDK"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKLineReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKLineReader_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
