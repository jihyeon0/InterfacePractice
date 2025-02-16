// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReflectionPractice/Public/BigCoin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBigCoin() {}

// Begin Cross Module References
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_ABaseCoin();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_ABigCoin();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_ABigCoin_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReflectionPractice();
// End Cross Module References

// Begin Class ABigCoin
void ABigCoin::StaticRegisterNativesABigCoin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABigCoin);
UClass* Z_Construct_UClass_ABigCoin_NoRegister()
{
	return ABigCoin::StaticClass();
}
struct Z_Construct_UClass_ABigCoin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BigCoin.h" },
		{ "ModuleRelativePath", "Public/BigCoin.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABigCoin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABigCoin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCoin,
	(UObject* (*)())Z_Construct_UPackage__Script_ReflectionPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABigCoin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABigCoin_Statics::ClassParams = {
	&ABigCoin::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABigCoin_Statics::Class_MetaDataParams), Z_Construct_UClass_ABigCoin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABigCoin()
{
	if (!Z_Registration_Info_UClass_ABigCoin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABigCoin.OuterSingleton, Z_Construct_UClass_ABigCoin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABigCoin.OuterSingleton;
}
template<> REFLECTIONPRACTICE_API UClass* StaticClass<ABigCoin>()
{
	return ABigCoin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABigCoin);
ABigCoin::~ABigCoin() {}
// End Class ABigCoin

// Begin Registration
struct Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_BigCoin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABigCoin, ABigCoin::StaticClass, TEXT("ABigCoin"), &Z_Registration_Info_UClass_ABigCoin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABigCoin), 1748611130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_BigCoin_h_436210753(TEXT("/Script/ReflectionPractice"),
	Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_BigCoin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_BigCoin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
