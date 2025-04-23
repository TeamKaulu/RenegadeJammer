// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileSDK/Public/FileSDKCopyFileAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileSDKCopyFileAsync() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
FILESDK_API UClass* Z_Construct_UClass_UFileSDKCopyFileAsync();
FILESDK_API UClass* Z_Construct_UClass_UFileSDKCopyFileAsync_NoRegister();
FILESDK_API UFunction* Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature();
FILESDK_API UFunction* Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FileSDK();
// End Cross Module References

// Begin Delegate FFileSDKOnCopyCompleted
struct Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics
{
	struct _Script_FileSDK_eventFileSDKOnCopyCompleted_Parms
	{
		bool Successful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Event that will be the 'Completed' exec wire in the blueprint node along with all parameters as output pins.\n" },
		{ "ModuleRelativePath", "Public/FileSDKCopyFileAsync.h" },
		{ "ToolTip", "Event that will be the 'Completed' exec wire in the blueprint node along with all parameters as output pins." },
	};
#endif // WITH_METADATA
	static void NewProp_Successful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Successful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::NewProp_Successful_SetBit(void* Obj)
{
	((_Script_FileSDK_eventFileSDKOnCopyCompleted_Parms*)Obj)->Successful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::NewProp_Successful = { "Successful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_FileSDK_eventFileSDKOnCopyCompleted_Parms), &Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::NewProp_Successful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::NewProp_Successful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FileSDK, nullptr, "FileSDKOnCopyCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::_Script_FileSDK_eventFileSDKOnCopyCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::_Script_FileSDK_eventFileSDKOnCopyCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFileSDKOnCopyCompleted_DelegateWrapper(const FMulticastScriptDelegate& FileSDKOnCopyCompleted, bool Successful)
{
	struct _Script_FileSDK_eventFileSDKOnCopyCompleted_Parms
	{
		bool Successful;
	};
	_Script_FileSDK_eventFileSDKOnCopyCompleted_Parms Parms;
	Parms.Successful=Successful ? true : false;
	FileSDKOnCopyCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FFileSDKOnCopyCompleted

// Begin Class UFileSDKCopyFileAsync Function CopyFileAsync
struct Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics
{
	struct FileSDKCopyFileAsync_eventCopyFileAsync_Parms
	{
		UObject* WorldContextObject;
		FString Source;
		FString Destination;
		FScriptDelegate ProgressCallback;
		bool OverwriteDestination;
		int32 ChunkSizeInKilobytes;
		UFileSDKCopyFileAsync* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FileSDK" },
		{ "Comment", "/**\n   * Copy a file or a directory, creating a duplicate version. Performs the copy operation\n   * in a separate background thread, preventing the game thread from waiting for the copy\n   * operation to finish.\n   *\n   * @param Source An absolute path to the file or directory you want to copy.\n   * @param Destination An absolute path to where you want to copy the file or to. You cannot provide\n   * \"/path/to/file.csv\" for Source and only provide \"file-old.csv\" for Destination; you must provide\n   * the full absolute path of the new file (i.e. \"/path/to/file-old.csv\").\n   * @param ProgressCallback This allows you to attach an event to receive execution when progress is made,\n   * allowing you to update a UI or other variables about the progress left for copying the file.\n   * @param OverwriteDestination If set to true, if a particular file exists in the respective Destination\n   * location, it will be overwritten with the new contents. Otherwise it will be ignored. For example if\n   * you're copying \"/path/from\" to \"/path/to\", and \"/path/to/file.txt\" already exists, if this is set to true,\n   * /path/from/file.txt will overwrite \"/path/to/file.txt\", if set to false, \"/path/to/file.txt\" will remain\n   * unchanged.\n   * @param ChunkSizeInKilobytes The number of kilobytes you want each chunk of data to be copied as.\n   * Smaller numbers can give you more fine progress updates, but at the cost of more disk IO operations,\n   * potentially slowing down the overall copy.\n   */" },
		{ "CPP_Default_ChunkSizeInKilobytes", "1024" },
		{ "CPP_Default_OverwriteDestination", "false" },
		{ "DisplayName", "Copy File or Directory Async" },
		{ "ModuleRelativePath", "Public/FileSDKCopyFileAsync.h" },
		{ "ToolTip", "Copy a file or a directory, creating a duplicate version. Performs the copy operation\nin a separate background thread, preventing the game thread from waiting for the copy\noperation to finish.\n\n@param Source An absolute path to the file or directory you want to copy.\n@param Destination An absolute path to where you want to copy the file or to. You cannot provide\n\"/path/to/file.csv\" for Source and only provide \"file-old.csv\" for Destination; you must provide\nthe full absolute path of the new file (i.e. \"/path/to/file-old.csv\").\n@param ProgressCallback This allows you to attach an event to receive execution when progress is made,\nallowing you to update a UI or other variables about the progress left for copying the file.\n@param OverwriteDestination If set to true, if a particular file exists in the respective Destination\nlocation, it will be overwritten with the new contents. Otherwise it will be ignored. For example if\nyou're copying \"/path/from\" to \"/path/to\", and \"/path/to/file.txt\" already exists, if this is set to true,\n/path/from/file.txt will overwrite \"/path/to/file.txt\", if set to false, \"/path/to/file.txt\" will remain\nunchanged.\n@param ChunkSizeInKilobytes The number of kilobytes you want each chunk of data to be copied as.\nSmaller numbers can give you more fine progress updates, but at the cost of more disk IO operations,\npotentially slowing down the overall copy." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ProgressCallback;
	static void NewProp_OverwriteDestination_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverwriteDestination;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSizeInKilobytes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKCopyFileAsync_eventCopyFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKCopyFileAsync_eventCopyFileAsync_Parms, Source), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKCopyFileAsync_eventCopyFileAsync_Parms, Destination), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_ProgressCallback = { "ProgressCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKCopyFileAsync_eventCopyFileAsync_Parms, ProgressCallback), Z_Construct_UDelegateFunction_FileSDK_FileSDKCopyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressCallback_MetaData), NewProp_ProgressCallback_MetaData) }; // 65310763
void Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_OverwriteDestination_SetBit(void* Obj)
{
	((FileSDKCopyFileAsync_eventCopyFileAsync_Parms*)Obj)->OverwriteDestination = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_OverwriteDestination = { "OverwriteDestination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FileSDKCopyFileAsync_eventCopyFileAsync_Parms), &Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_OverwriteDestination_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_ChunkSizeInKilobytes = { "ChunkSizeInKilobytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKCopyFileAsync_eventCopyFileAsync_Parms, ChunkSizeInKilobytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileSDKCopyFileAsync_eventCopyFileAsync_Parms, ReturnValue), Z_Construct_UClass_UFileSDKCopyFileAsync_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_ProgressCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_OverwriteDestination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_ChunkSizeInKilobytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileSDKCopyFileAsync, nullptr, "CopyFileAsync", nullptr, nullptr, Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::FileSDKCopyFileAsync_eventCopyFileAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::FileSDKCopyFileAsync_eventCopyFileAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFileSDKCopyFileAsync::execCopyFileAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_GET_PROPERTY(FStrProperty,Z_Param_Destination);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ProgressCallback);
	P_GET_UBOOL(Z_Param_OverwriteDestination);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChunkSizeInKilobytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFileSDKCopyFileAsync**)Z_Param__Result=UFileSDKCopyFileAsync::CopyFileAsync(Z_Param_WorldContextObject,Z_Param_Source,Z_Param_Destination,FFileSDKCopyDelegate(Z_Param_Out_ProgressCallback),Z_Param_OverwriteDestination,Z_Param_ChunkSizeInKilobytes);
	P_NATIVE_END;
}
// End Class UFileSDKCopyFileAsync Function CopyFileAsync

// Begin Class UFileSDKCopyFileAsync
void UFileSDKCopyFileAsync::StaticRegisterNativesUFileSDKCopyFileAsync()
{
	UClass* Class = UFileSDKCopyFileAsync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CopyFileAsync", &UFileSDKCopyFileAsync::execCopyFileAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileSDKCopyFileAsync);
UClass* Z_Construct_UClass_UFileSDKCopyFileAsync_NoRegister()
{
	return UFileSDKCopyFileAsync::StaticClass();
}
struct Z_Construct_UClass_UFileSDKCopyFileAsync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FileSDKCopyFileAsync.h" },
		{ "ModuleRelativePath", "Public/FileSDKCopyFileAsync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "Comment", "/**\n   * This execution pin is called when the copy finishes, regardless if it was successful or not.\n   */" },
		{ "ModuleRelativePath", "Public/FileSDKCopyFileAsync.h" },
		{ "ToolTip", "This execution pin is called when the copy finishes, regardless if it was successful or not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileSDKCopyFileAsync_CopyFileAsync, "CopyFileAsync" }, // 3633771644
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileSDKCopyFileAsync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFileSDKCopyFileAsync_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFileSDKCopyFileAsync, Completed), Z_Construct_UDelegateFunction_FileSDK_FileSDKOnCopyCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 962781458
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFileSDKCopyFileAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileSDKCopyFileAsync_Statics::NewProp_Completed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileSDKCopyFileAsync_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFileSDKCopyFileAsync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FileSDK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFileSDKCopyFileAsync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileSDKCopyFileAsync_Statics::ClassParams = {
	&UFileSDKCopyFileAsync::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFileSDKCopyFileAsync_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFileSDKCopyFileAsync_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFileSDKCopyFileAsync_Statics::Class_MetaDataParams), Z_Construct_UClass_UFileSDKCopyFileAsync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFileSDKCopyFileAsync()
{
	if (!Z_Registration_Info_UClass_UFileSDKCopyFileAsync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileSDKCopyFileAsync.OuterSingleton, Z_Construct_UClass_UFileSDKCopyFileAsync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFileSDKCopyFileAsync.OuterSingleton;
}
template<> FILESDK_API UClass* StaticClass<UFileSDKCopyFileAsync>()
{
	return UFileSDKCopyFileAsync::StaticClass();
}
UFileSDKCopyFileAsync::UFileSDKCopyFileAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFileSDKCopyFileAsync);
UFileSDKCopyFileAsync::~UFileSDKCopyFileAsync() {}
// End Class UFileSDKCopyFileAsync

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFileSDKCopyFileAsync, UFileSDKCopyFileAsync::StaticClass, TEXT("UFileSDKCopyFileAsync"), &Z_Registration_Info_UClass_UFileSDKCopyFileAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileSDKCopyFileAsync), 955495637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h_2320181995(TEXT("/Script/FileSDK"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FileSDK_Source_FileSDK_Public_FileSDKCopyFileAsync_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
