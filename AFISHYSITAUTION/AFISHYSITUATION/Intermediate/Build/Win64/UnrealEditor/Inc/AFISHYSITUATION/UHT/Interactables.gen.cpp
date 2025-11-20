// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Jochem/Interactables.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractables() {}

// ********** Begin Cross Module References ********************************************************
AFISHYSITUATION_API UClass* Z_Construct_UClass_AInteractables();
AFISHYSITUATION_API UClass* Z_Construct_UClass_AInteractables_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_AFISHYSITUATION();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractables Function CHeckInteraction *********************************
struct Z_Construct_UFunction_AInteractables_CHeckInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Jochem/Interactables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractables_CHeckInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AInteractables, nullptr, "CHeckInteraction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractables_CHeckInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractables_CHeckInteraction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AInteractables_CHeckInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractables_CHeckInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractables::execCHeckInteraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CHeckInteraction();
	P_NATIVE_END;
}
// ********** End Class AInteractables Function CHeckInteraction ***********************************

// ********** Begin Class AInteractables ***********************************************************
void AInteractables::StaticRegisterNativesAInteractables()
{
	UClass* Class = AInteractables::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CHeckInteraction", &AInteractables::execCHeckInteraction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractables;
UClass* AInteractables::GetPrivateStaticClass()
{
	using TClass = AInteractables;
	if (!Z_Registration_Info_UClass_AInteractables.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Interactables"),
			Z_Registration_Info_UClass_AInteractables.InnerSingleton,
			StaticRegisterNativesAInteractables,
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
	return Z_Registration_Info_UClass_AInteractables.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractables_NoRegister()
{
	return AInteractables::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractables_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Jochem/Interactables.h" },
		{ "ModuleRelativePath", "Jochem/Interactables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanInteract_MetaData[] = {
		{ "Category", "Interactables" },
		{ "ModuleRelativePath", "Jochem/Interactables.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bCanInteract_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanInteract;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractables_CHeckInteraction, "CHeckInteraction" }, // 4018271593
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractables>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AInteractables_Statics::NewProp_bCanInteract_SetBit(void* Obj)
{
	((AInteractables*)Obj)->bCanInteract = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractables_Statics::NewProp_bCanInteract = { "bCanInteract", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractables), &Z_Construct_UClass_AInteractables_Statics::NewProp_bCanInteract_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanInteract_MetaData), NewProp_bCanInteract_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractables_Statics::NewProp_bCanInteract,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractables_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractables_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_AFISHYSITUATION,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractables_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractables_Statics::ClassParams = {
	&AInteractables::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInteractables_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractables_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractables_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractables_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractables()
{
	if (!Z_Registration_Info_UClass_AInteractables.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractables.OuterSingleton, Z_Construct_UClass_AInteractables_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractables.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractables);
AInteractables::~AInteractables() {}
// ********** End Class AInteractables *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Game_Development_Unreal_Engine_Projects_AFISHYSITUATION_AFISHYSITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Jochem_Interactables_h__Script_AFISHYSITUATION_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractables, AInteractables::StaticClass, TEXT("AInteractables"), &Z_Registration_Info_UClass_AInteractables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractables), 3548036048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Development_Unreal_Engine_Projects_AFISHYSITUATION_AFISHYSITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Jochem_Interactables_h__Script_AFISHYSITUATION_3134837969(TEXT("/Script/AFISHYSITUATION"),
	Z_CompiledInDeferFile_FID_Game_Development_Unreal_Engine_Projects_AFISHYSITUATION_AFISHYSITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Jochem_Interactables_h__Script_AFISHYSITUATION_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Development_Unreal_Engine_Projects_AFISHYSITUATION_AFISHYSITUATION_AFISHYSITAUTION_AFISHYSITUATION_Source_AFISHYSITUATION_Jochem_Interactables_h__Script_AFISHYSITUATION_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
