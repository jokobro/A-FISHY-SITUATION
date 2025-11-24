// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Teshawn/MyPawn1.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyPawn1() {}

// ********** Begin Cross Module References ********************************************************
AFISHYSITUATION_API UClass* Z_Construct_UClass_AMyPawn1();
AFISHYSITUATION_API UClass* Z_Construct_UClass_AMyPawn1_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_AFISHYSITUATION();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyPawn1 *****************************************************************
void AMyPawn1::StaticRegisterNativesAMyPawn1()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyPawn1;
UClass* AMyPawn1::GetPrivateStaticClass()
{
	using TClass = AMyPawn1;
	if (!Z_Registration_Info_UClass_AMyPawn1.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyPawn1"),
			Z_Registration_Info_UClass_AMyPawn1.InnerSingleton,
			StaticRegisterNativesAMyPawn1,
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
	return Z_Registration_Info_UClass_AMyPawn1.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyPawn1_NoRegister()
{
	return AMyPawn1::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyPawn1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Teshawn/MyPawn1.h" },
		{ "ModuleRelativePath", "Teshawn/MyPawn1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawn1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyPawn1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_AFISHYSITUATION,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPawn1_Statics::ClassParams = {
	&AMyPawn1::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn1_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPawn1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPawn1()
{
	if (!Z_Registration_Info_UClass_AMyPawn1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPawn1.OuterSingleton, Z_Construct_UClass_AMyPawn1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPawn1.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn1);
AMyPawn1::~AMyPawn1() {}
// ********** End Class AMyPawn1 *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_final_forms_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Teshawn_MyPawn1_h__Script_AFISHYSITUATION_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPawn1, AMyPawn1::StaticClass, TEXT("AMyPawn1"), &Z_Registration_Info_UClass_AMyPawn1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPawn1), 4212218817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_final_forms_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Teshawn_MyPawn1_h__Script_AFISHYSITUATION_3441555293(TEXT("/Script/AFISHYSITUATION"),
	Z_CompiledInDeferFile_FID_final_forms_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Teshawn_MyPawn1_h__Script_AFISHYSITUATION_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_final_forms_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Teshawn_MyPawn1_h__Script_AFISHYSITUATION_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
