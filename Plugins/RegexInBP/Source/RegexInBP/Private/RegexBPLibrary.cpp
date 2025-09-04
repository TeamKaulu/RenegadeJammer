// © 2020 Peter Marcinov. All rights reserved.

#include "RegexBPLibrary.h"
#include "Internationalization/Regex.h"

bool URegexBPLibrary::CanMatch(const FString & pattern, const FString & input)
{
	const FRegexPattern frp = FRegexPattern(pattern);
	FRegexMatcher frm = FRegexMatcher(frp, input);
	bool isMatch = frm.FindNext();
	return isMatch;
}

TArray<FString> URegexBPLibrary::Match(const FString & pattern, const FString & input)
{
	TArray<FString> results;

	const FRegexPattern frp = FRegexPattern(pattern);
	FRegexMatcher frm = FRegexMatcher(frp, input);

	while (frm.FindNext())
	{
		FString match = frm.GetCaptureGroup(0);
		results.Add(match);
	}

	return results;
}

TArray<FRegexExtendedResult> URegexBPLibrary::MatchExtended(const FString & pattern, const FString & input)
{
	TArray<FRegexExtendedResult> results;

	const FRegexPattern frp = FRegexPattern(pattern);
	FRegexMatcher frm = FRegexMatcher(frp, input);

	while (frm.FindNext())
	{
		FRegexExtendedResult extResult;

		for (int32 i = 0; i <= frm.GetMatchEnding(); i++)
		{
			FString group = frm.GetCaptureGroup(i);
			if (group.Len() > 0)
			{
				extResult.Results.Add(i, frm.GetCaptureGroup(i));
			}
		}
		results.Add(extResult);
	}

	return results;
}
