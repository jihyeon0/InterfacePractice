// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReflectionPractice/Public/MyGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_AMyGameState();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_AMyGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReflectionPractice();
// End Cross Module References

// Begin Class AMyGameState Function AddScore
struct Z_Construct_UFunction_AMyGameState_AddScore_Statics
{
	struct MyGameState_eventAddScore_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/MyGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameState_AddScore_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameState_eventAddScore_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameState_AddScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameState_AddScore_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_AddScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameState_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameState, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_AMyGameState_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameState_AddScore_Statics::MyGameState_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameState_AddScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyGameState_AddScore_Statics::MyGameState_eventAddScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyGameState_AddScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameState_AddScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyGameState::execAddScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScore(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class AMyGameState Function AddScore

// Begin Class AMyGameState Function GetScore
struct Z_Construct_UFunction_AMyGameState_GetScore_Statics
{
	struct MyGameState_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/MyGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameState_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameState_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameState_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameState_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameState_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameState, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_AMyGameState_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameState_GetScore_Statics::MyGameState_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameState_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyGameState_GetScore_Statics::MyGameState_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyGameState_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameState_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyGameState::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class AMyGameState Function GetScore

// Begin Class AMyGameState Function OnGameOver
struct Z_Construct_UFunction_AMyGameState_OnGameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameState_OnGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameState, nullptr, "OnGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_OnGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameState_OnGameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyGameState_OnGameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameState_OnGameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyGameState::execOnGameOver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameOver();
	P_NATIVE_END;
}
// End Class AMyGameState Function OnGameOver

// Begin Class AMyGameState
void AMyGameState::StaticRegisterNativesAMyGameState()
{
	UClass* Class = AMyGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScore", &AMyGameState::execAddScore },
		{ "GetScore", &AMyGameState::execGetScore },
		{ "OnGameOver", &AMyGameState::execOnGameOver },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameState);
UClass* Z_Construct_UClass_AMyGameState_NoRegister()
{
	return AMyGameState::StaticClass();
}
struct Z_Construct_UClass_AMyGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameState.h" },
		{ "ModuleRelativePath", "Public/MyGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/MyGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedCoinCount_MetaData[] = {
		{ "Category", "Coin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectedCoinCount_MetaData[] = {
		{ "Category", "Coin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelDuration_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/MyGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelIndex_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevels_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelMapNames_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb4\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MyGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb4\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnedCoinCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollectedCoinCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevels;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelMapNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelMapNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameState_AddScore, "AddScore" }, // 1375465541
		{ &Z_Construct_UFunction_AMyGameState_GetScore, "GetScore" }, // 3021216752
		{ &Z_Construct_UFunction_AMyGameState_OnGameOver, "OnGameOver" }, // 4194116190
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameState, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_SpawnedCoinCount = { "SpawnedCoinCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameState, SpawnedCoinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedCoinCount_MetaData), NewProp_SpawnedCoinCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_CollectedCoinCount = { "CollectedCoinCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameState, CollectedCoinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectedCoinCount_MetaData), NewProp_CollectedCoinCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_LevelDuration = { "LevelDuration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameState, LevelDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelDuration_MetaData), NewProp_LevelDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_CurrentLevelIndex = { "CurrentLevelIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameState, CurrentLevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelIndex_MetaData), NewProp_CurrentLevelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_MaxLevels = { "MaxLevels", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameState, MaxLevels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevels_MetaData), NewProp_MaxLevels_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_LevelMapNames_Inner = { "LevelMapNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyGameState_Statics::NewProp_LevelMapNames = { "LevelMapNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyGameState, LevelMapNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelMapNames_MetaData), NewProp_LevelMapNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_SpawnedCoinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_CollectedCoinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_LevelDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_CurrentLevelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_MaxLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_LevelMapNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyGameState_Statics::NewProp_LevelMapNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ReflectionPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameState_Statics::ClassParams = {
	&AMyGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGameState()
{
	if (!Z_Registration_Info_UClass_AMyGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameState.OuterSingleton, Z_Construct_UClass_AMyGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGameState.OuterSingleton;
}
template<> REFLECTIONPRACTICE_API UClass* StaticClass<AMyGameState>()
{
	return AMyGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameState);
AMyGameState::~AMyGameState() {}
// End Class AMyGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_MyGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameState, AMyGameState::StaticClass, TEXT("AMyGameState"), &Z_Registration_Info_UClass_AMyGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameState), 2229337650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_MyGameState_h_261982028(TEXT("/Script/ReflectionPractice"),
	Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_MyGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_MyGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
