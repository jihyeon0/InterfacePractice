// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReflectionPractice/Public/SmallCoin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmallCoin() {}

// Begin Cross Module References
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_ABaseCoin();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_ASmallCoin();
REFLECTIONPRACTICE_API UClass* Z_Construct_UClass_ASmallCoin_NoRegister();
UPackage* Z_Construct_UPackage__Script_ReflectionPractice();
// End Cross Module References

// Begin Class ASmallCoin
void ASmallCoin::StaticRegisterNativesASmallCoin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASmallCoin);
UClass* Z_Construct_UClass_ASmallCoin_NoRegister()
{
	return ASmallCoin::StaticClass();
}
struct Z_Construct_UClass_ASmallCoin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SmallCoin.h" },
		{ "ModuleRelativePath", "Public/SmallCoin.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmallCoin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASmallCoin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCoin,
	(UObject* (*)())Z_Construct_UPackage__Script_ReflectionPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASmallCoin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASmallCoin_Statics::ClassParams = {
	&ASmallCoin::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASmallCoin_Statics::Class_MetaDataParams), Z_Construct_UClass_ASmallCoin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASmallCoin()
{
	if (!Z_Registration_Info_UClass_ASmallCoin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASmallCoin.OuterSingleton, Z_Construct_UClass_ASmallCoin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASmallCoin.OuterSingleton;
}
template<> REFLECTIONPRACTICE_API UClass* StaticClass<ASmallCoin>()
{
	return ASmallCoin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASmallCoin);
ASmallCoin::~ASmallCoin() {}
// End Class ASmallCoin

// Begin Registration
struct Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_SmallCoin_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASmallCoin, ASmallCoin::StaticClass, TEXT("ASmallCoin"), &Z_Registration_Info_UClass_ASmallCoin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASmallCoin), 1329167277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_SmallCoin_h_1044491868(TEXT("/Script/ReflectionPractice"),
	Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_SmallCoin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_InterfacePractice_ReflectionPractice_Source_ReflectionPractice_Public_SmallCoin_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
