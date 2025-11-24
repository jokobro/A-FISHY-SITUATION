// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Thomas/test.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodetest() {}

// ********** Begin Cross Module References ********************************************************
AFISHYSITUATION_API UClass* Z_Construct_UClass_Atest();
AFISHYSITUATION_API UClass* Z_Construct_UClass_Atest_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_AFISHYSITUATION();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Atest ********************************************************************
void Atest::StaticRegisterNativesAtest()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Atest;
UClass* Atest::GetPrivateStaticClass()
{
	using TClass = Atest;
	if (!Z_Registration_Info_UClass_Atest.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("test"),
			Z_Registration_Info_UClass_Atest.InnerSingleton,
			StaticRegisterNativesAtest,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_Atest.InnerSingleton;
}
UClass* Z_Construct_UClass_Atest_NoRegister()
{
	return Atest::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Atest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Thomas/test.h" },
		{ "ModuleRelativePath", "Thomas/test.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Atest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_AFISHYSITUATION,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Atest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Atest_Statics::ClassParams = {
	&Atest::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Atest_Statics::Class_MetaDataParams), Z_Construct_UClass_Atest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Atest()
{
	if (!Z_Registration_Info_UClass_Atest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Atest.OuterSingleton, Z_Construct_UClass_Atest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Atest.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Atest);
Atest::~Atest() {}
// ********** End Class Atest **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_final_forms_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Thomas_test_h__Script_AFISHYSITUATION_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Atest, Atest::StaticClass, TEXT("Atest"), &Z_Registration_Info_UClass_Atest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Atest), 62257424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_final_forms_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Thomas_test_h__Script_AFISHYSITUATION_606140894(TEXT("/Script/AFISHYSITUATION"),
	Z_CompiledInDeferFile_FID_final_forms_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Thomas_test_h__Script_AFISHYSITUATION_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_final_forms_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Thomas_test_h__Script_AFISHYSITUATION_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
