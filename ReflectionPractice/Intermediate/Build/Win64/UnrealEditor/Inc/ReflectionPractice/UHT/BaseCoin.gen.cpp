// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReflectionPractice/Public/BaseCoin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCoin() {}

// Begin Cross Module References
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_ABaseCoin();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_ABaseCoin_NoRegister();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_ABaseItem();
UPackage* Z_Construct_UPackage__Script_ReflectionPractice();
// End Cross Module References

// Begin Class ABaseCoin
void ABaseCoin::StaticRegisterNativesABaseCoin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCoin);
UClass* Z_Construct_UClass_ABaseCoin_NoRegister()
{
	return ABaseCoin::StaticClass();
}
struct Z_Construct_UClass_ABaseCoin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseCoin.h" },
		{ "ModuleRelativePath", "Public/BaseCoin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointValue_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/BaseCoin.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCoin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseCoin_Statics::NewProp_PointValue = { "PointValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCoin, PointValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointValue_MetaData), NewProp_PointValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCoin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCoin_Statics::NewProp_PointValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCoin_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseCoin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_ReflectionPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCoin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCoin_Statics::ClassParams = {
	&ABaseCoin::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseCoin_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCoin_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCoin_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseCoin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseCoin()
{
	if (!Z_Registration_Info_UClass_ABaseCoin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCoin.OuterSingleton, Z_Construct_UClass_ABaseCoin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseCoin.OuterSingleton;
}
template<> REFLECTIONPRACTICE_API UClass* StaticClass<ABaseCoin>()
{
	return ABaseCoin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCoin);
ABaseCoin::~ABaseCoin() {}
// End Class ABaseCoin

// Begin Registration
struct Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_BaseCoin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCoin, ABaseCoin::StaticClass, TEXT("ABaseCoin"), &Z_Registration_Info_UClass_ABaseCoin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCoin), 36627412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_BaseCoin_h_410283839(TEXT("/Script/ReflectionPractice"),
	Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_BaseCoin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_BaseCoin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
