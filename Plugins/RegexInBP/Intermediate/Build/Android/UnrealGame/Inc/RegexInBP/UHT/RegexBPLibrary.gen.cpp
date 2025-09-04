// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RegexInBP/Public/RegexBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRegexBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
REGEXINBP_API UClass* Z_Construct_UClass_URegexBPLibrary();
REGEXINBP_API UClass* Z_Construct_UClass_URegexBPLibrary_NoRegister();
REGEXINBP_API UScriptStruct* Z_Construct_UScriptStruct_FRegexExtendedResult();
UPackage* Z_Construct_UPackage__Script_RegexInBP();
// End Cross Module References

// Begin ScriptStruct FRegexExtendedResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RegexExtendedResult;
class UScriptStruct* FRegexExtendedResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RegexExtendedResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RegexExtendedResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegexExtendedResult, (UObject*)Z_Construct_UPackage__Script_RegexInBP(), TEXT("RegexExtendedResult"));
	}
	return Z_Registration_Info_UScriptStruct_RegexExtendedResult.OuterSingleton;
}
template<> REGEXINBP_API UScriptStruct* StaticStruct<FRegexExtendedResult>()
{
	return FRegexExtendedResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRegexExtendedResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RegexBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "Category", "Regex" },
		{ "Comment", "/* Index zero holds full match. First index has result for 1st capturing group, second index for 2nd capturing group etc.*/" },
		{ "ModuleRelativePath", "Public/RegexBPLibrary.h" },
		{ "ToolTip", "Index zero holds full match. First index has result for 1st capturing group, second index for 2nd capturing group etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Results_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Results_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Results;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegexExtendedResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::NewProp_Results_ValueProp = { "Results", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::NewProp_Results_Key_KeyProp = { "Results_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegexExtendedResult, Results), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::NewProp_Results_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::NewProp_Results_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::NewProp_Results,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RegexInBP,
	nullptr,
	&NewStructOps,
	"RegexExtendedResult",
	Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::PropPointers),
	sizeof(FRegexExtendedResult),
	alignof(FRegexExtendedResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRegexExtendedResult()
{
	if (!Z_Registration_Info_UScriptStruct_RegexExtendedResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RegexExtendedResult.InnerSingleton, Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RegexExtendedResult.InnerSingleton;
}
// End ScriptStruct FRegexExtendedResult

// Begin Class URegexBPLibrary Function CanMatch
struct Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics
{
	struct RegexBPLibrary_eventCanMatch_Parms
	{
		FString pattern;
		FString input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Regex" },
		{ "Comment", "/*Indicates whether a pattern can be matched at least once in the input string*/" },
		{ "ModuleRelativePath", "Public/RegexBPLibrary.h" },
		{ "ToolTip", "Indicates whether a pattern can be matched at least once in the input string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pattern_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_pattern;
	static const UECodeGen_Private::FStrPropertyParams NewProp_input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::NewProp_pattern = { "pattern", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegexBPLibrary_eventCanMatch_Parms, pattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pattern_MetaData), NewProp_pattern_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegexBPLibrary_eventCanMatch_Parms, input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_input_MetaData), NewProp_input_MetaData) };
void Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RegexBPLibrary_eventCanMatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RegexBPLibrary_eventCanMatch_Parms), &Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::NewProp_pattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::NewProp_input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegexBPLibrary, nullptr, "CanMatch", nullptr, nullptr, Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::RegexBPLibrary_eventCanMatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::RegexBPLibrary_eventCanMatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URegexBPLibrary_CanMatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URegexBPLibrary_CanMatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URegexBPLibrary::execCanMatch)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_pattern);
	P_GET_PROPERTY(FStrProperty,Z_Param_input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URegexBPLibrary::CanMatch(Z_Param_pattern,Z_Param_input);
	P_NATIVE_END;
}
// End Class URegexBPLibrary Function CanMatch

// Begin Class URegexBPLibrary Function Match
struct Z_Construct_UFunction_URegexBPLibrary_Match_Statics
{
	struct RegexBPLibrary_eventMatch_Parms
	{
		FString pattern;
		FString input;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Regex" },
		{ "Comment", "/*Searches the input string for substrings that match the pattern and returns all results*/" },
		{ "ModuleRelativePath", "Public/RegexBPLibrary.h" },
		{ "ToolTip", "Searches the input string for substrings that match the pattern and returns all results" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pattern_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_pattern;
	static const UECodeGen_Private::FStrPropertyParams NewProp_input;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URegexBPLibrary_Match_Statics::NewProp_pattern = { "pattern", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegexBPLibrary_eventMatch_Parms, pattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pattern_MetaData), NewProp_pattern_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URegexBPLibrary_Match_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegexBPLibrary_eventMatch_Parms, input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_input_MetaData), NewProp_input_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URegexBPLibrary_Match_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URegexBPLibrary_Match_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegexBPLibrary_eventMatch_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegexBPLibrary_Match_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegexBPLibrary_Match_Statics::NewProp_pattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegexBPLibrary_Match_Statics::NewProp_input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegexBPLibrary_Match_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegexBPLibrary_Match_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URegexBPLibrary_Match_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URegexBPLibrary_Match_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegexBPLibrary, nullptr, "Match", nullptr, nullptr, Z_Construct_UFunction_URegexBPLibrary_Match_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegexBPLibrary_Match_Statics::PropPointers), sizeof(Z_Construct_UFunction_URegexBPLibrary_Match_Statics::RegexBPLibrary_eventMatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URegexBPLibrary_Match_Statics::Function_MetaDataParams), Z_Construct_UFunction_URegexBPLibrary_Match_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URegexBPLibrary_Match_Statics::RegexBPLibrary_eventMatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URegexBPLibrary_Match()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URegexBPLibrary_Match_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URegexBPLibrary::execMatch)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_pattern);
	P_GET_PROPERTY(FStrProperty,Z_Param_input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=URegexBPLibrary::Match(Z_Param_pattern,Z_Param_input);
	P_NATIVE_END;
}
// End Class URegexBPLibrary Function Match

// Begin Class URegexBPLibrary Function MatchExtended
struct Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics
{
	struct RegexBPLibrary_eventMatchExtended_Parms
	{
		FString pattern;
		FString input;
		TArray<FRegexExtendedResult> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Regex" },
		{ "Comment", "/*Searches the input string for substrings that match the pattern and returns all results. Apart from full matches, results contain partial matches for capturing groups as well*/" },
		{ "ModuleRelativePath", "Public/RegexBPLibrary.h" },
		{ "ToolTip", "Searches the input string for substrings that match the pattern and returns all results. Apart from full matches, results contain partial matches for capturing groups as well" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pattern_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_pattern;
	static const UECodeGen_Private::FStrPropertyParams NewProp_input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::NewProp_pattern = { "pattern", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegexBPLibrary_eventMatchExtended_Parms, pattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pattern_MetaData), NewProp_pattern_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegexBPLibrary_eventMatchExtended_Parms, input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_input_MetaData), NewProp_input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRegexExtendedResult, METADATA_PARAMS(0, nullptr) }; // 511674302
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegexBPLibrary_eventMatchExtended_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 511674302
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::NewProp_pattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::NewProp_input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegexBPLibrary, nullptr, "MatchExtended", nullptr, nullptr, Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::PropPointers), sizeof(Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::RegexBPLibrary_eventMatchExtended_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::Function_MetaDataParams), Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::RegexBPLibrary_eventMatchExtended_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URegexBPLibrary_MatchExtended()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URegexBPLibrary_MatchExtended_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URegexBPLibrary::execMatchExtended)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_pattern);
	P_GET_PROPERTY(FStrProperty,Z_Param_input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRegexExtendedResult>*)Z_Param__Result=URegexBPLibrary::MatchExtended(Z_Param_pattern,Z_Param_input);
	P_NATIVE_END;
}
// End Class URegexBPLibrary Function MatchExtended

// Begin Class URegexBPLibrary
void URegexBPLibrary::StaticRegisterNativesURegexBPLibrary()
{
	UClass* Class = URegexBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanMatch", &URegexBPLibrary::execCanMatch },
		{ "Match", &URegexBPLibrary::execMatch },
		{ "MatchExtended", &URegexBPLibrary::execMatchExtended },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URegexBPLibrary);
UClass* Z_Construct_UClass_URegexBPLibrary_NoRegister()
{
	return URegexBPLibrary::StaticClass();
}
struct Z_Construct_UClass_URegexBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RegexBPLibrary.h" },
		{ "ModuleRelativePath", "Public/RegexBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URegexBPLibrary_CanMatch, "CanMatch" }, // 1038666855
		{ &Z_Construct_UFunction_URegexBPLibrary_Match, "Match" }, // 1467009520
		{ &Z_Construct_UFunction_URegexBPLibrary_MatchExtended, "MatchExtended" }, // 1470892173
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URegexBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URegexBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RegexInBP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URegexBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URegexBPLibrary_Statics::ClassParams = {
	&URegexBPLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URegexBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URegexBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URegexBPLibrary()
{
	if (!Z_Registration_Info_UClass_URegexBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URegexBPLibrary.OuterSingleton, Z_Construct_UClass_URegexBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URegexBPLibrary.OuterSingleton;
}
template<> REGEXINBP_API UClass* StaticClass<URegexBPLibrary>()
{
	return URegexBPLibrary::StaticClass();
}
URegexBPLibrary::URegexBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URegexBPLibrary);
URegexBPLibrary::~URegexBPLibrary() {}
// End Class URegexBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRegexExtendedResult::StaticStruct, Z_Construct_UScriptStruct_FRegexExtendedResult_Statics::NewStructOps, TEXT("RegexExtendedResult"), &Z_Registration_Info_UScriptStruct_RegexExtendedResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegexExtendedResult), 511674302U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URegexBPLibrary, URegexBPLibrary::StaticClass, TEXT("URegexBPLibrary"), &Z_Registration_Info_UClass_URegexBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URegexBPLibrary), 3351381782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_3012853628(TEXT("/Script/RegexInBP"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RegexInBP_Source_RegexInBP_Public_RegexBPLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
