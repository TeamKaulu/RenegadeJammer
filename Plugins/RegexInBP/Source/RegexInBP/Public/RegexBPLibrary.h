// © 2020 Peter Marcinov. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RegexBPLibrary.generated.h"

USTRUCT(BlueprintType)
struct FRegexExtendedResult
{
	GENERATED_USTRUCT_BODY()

	/* Index zero holds full match. First index has result for 1st capturing group, second index for 2nd capturing group etc.*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Regex")
	TMap<int32, FString> Results;
};

UCLASS()
class REGEXINBP_API URegexBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/*Indicates whether a pattern can be matched at least once in the input string*/
	UFUNCTION(BlueprintPure, Category = "Regex")
	static bool CanMatch(const FString & pattern, const FString & input);

	/*Searches the input string for substrings that match the pattern and returns all results*/
	UFUNCTION(BlueprintPure, Category = "Regex")
		static TArray<FString> Match(const FString & pattern, const FString & input);

	/*Searches the input string for substrings that match the pattern and returns all results. Apart from full matches, results contain partial matches for capturing groups as well*/
	UFUNCTION(BlueprintPure, Category = "Regex")
		static TArray<FRegexExtendedResult> MatchExtended(const FString & pattern, const FString & input);
};
