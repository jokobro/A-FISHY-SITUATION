// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Roy/lo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodelo() {}

// ********** Begin Cross Module References ********************************************************
AFISHYSITUATION_API UClass* Z_Construct_UClass_Alo();
AFISHYSITUATION_API UClass* Z_Construct_UClass_Alo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_AFISHYSITUATION();
// ********** End Cross Module References **********************************************************

// ********** Begin Class Alo **********************************************************************
void Alo::StaticRegisterNativesAlo()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_Alo;
UClass* Alo::GetPrivateStaticClass()
{
	using TClass = Alo;
	if (!Z_Registration_Info_UClass_Alo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("lo"),
			Z_Registration_Info_UClass_Alo.InnerSingleton,
			StaticRegisterNativesAlo,
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
	return Z_Registration_Info_UClass_Alo.InnerSingleton;
}
UClass* Z_Construct_UClass_Alo_NoRegister()
{
	return Alo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_Alo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Roy/lo.h" },
		{ "ModuleRelativePath", "Roy/lo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Alo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Alo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_AFISHYSITUATION,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Alo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Alo_Statics::ClassParams = {
	&Alo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Alo_Statics::Class_MetaDataParams), Z_Construct_UClass_Alo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Alo()
{
	if (!Z_Registration_Info_UClass_Alo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Alo.OuterSingleton, Z_Construct_UClass_Alo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Alo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Alo);
Alo::~Alo() {}
// ********** End Class Alo ************************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Glu_Github_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Roy_lo_h__Script_AFISHYSITUATION_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Alo, Alo::StaticClass, TEXT("Alo"), &Z_Registration_Info_UClass_Alo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Alo), 2520485303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Glu_Github_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Roy_lo_h__Script_AFISHYSITUATION_4228688524(TEXT("/Script/AFISHYSITUATION"),
	Z_CompiledInDeferFile_FID_Glu_Github_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Roy_lo_h__Script_AFISHYSITUATION_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Glu_Github_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Roy_lo_h__Script_AFISHYSITUATION_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
