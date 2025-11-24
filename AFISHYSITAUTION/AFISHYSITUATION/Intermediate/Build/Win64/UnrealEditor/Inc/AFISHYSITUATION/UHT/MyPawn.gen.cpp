// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Jochem/MyPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyPawn() {}

// ********** Begin Cross Module References ********************************************************
AFISHYSITUATION_API UClass* Z_Construct_UClass_AMyPawn();
AFISHYSITUATION_API UClass* Z_Construct_UClass_AMyPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_AFISHYSITUATION();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyPawn ******************************************************************
void AMyPawn::StaticRegisterNativesAMyPawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyPawn;
UClass* AMyPawn::GetPrivateStaticClass()
{
	using TClass = AMyPawn;
	if (!Z_Registration_Info_UClass_AMyPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyPawn"),
			Z_Registration_Info_UClass_AMyPawn.InnerSingleton,
			StaticRegisterNativesAMyPawn,
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
	return Z_Registration_Info_UClass_AMyPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyPawn_NoRegister()
{
	return AMyPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Jochem/MyPawn.h" },
		{ "ModuleRelativePath", "Jochem/MyPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_AFISHYSITUATION,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPawn_Statics::ClassParams = {
	&AMyPawn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPawn()
{
	if (!Z_Registration_Info_UClass_AMyPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPawn.OuterSingleton, Z_Construct_UClass_AMyPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
AMyPawn::~AMyPawn() {}
// ********** End Class AMyPawn ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Glu_Github_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Jochem_MyPawn_h__Script_AFISHYSITUATION_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPawn, AMyPawn::StaticClass, TEXT("AMyPawn"), &Z_Registration_Info_UClass_AMyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPawn), 1557935675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Glu_Github_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Jochem_MyPawn_h__Script_AFISHYSITUATION_1022961116(TEXT("/Script/AFISHYSITUATION"),
	Z_CompiledInDeferFile_FID_Glu_Github_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Jochem_MyPawn_h__Script_AFISHYSITUATION_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Glu_Github_A_FISHY_SITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Jochem_MyPawn_h__Script_AFISHYSITUATION_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
