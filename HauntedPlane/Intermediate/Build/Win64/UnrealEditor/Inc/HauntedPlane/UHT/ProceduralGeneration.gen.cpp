// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralGeneration.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProceduralGeneration() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
HAUNTEDPLANE_API UClass* Z_Construct_UClass_AProceduralGeneration();
HAUNTEDPLANE_API UClass* Z_Construct_UClass_AProceduralGeneration_NoRegister();
UPackage* Z_Construct_UPackage__Script_HauntedPlane();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProceduralGeneration ****************************************************
void AProceduralGeneration::StaticRegisterNativesAProceduralGeneration()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProceduralGeneration;
UClass* AProceduralGeneration::GetPrivateStaticClass()
{
	using TClass = AProceduralGeneration;
	if (!Z_Registration_Info_UClass_AProceduralGeneration.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProceduralGeneration"),
			Z_Registration_Info_UClass_AProceduralGeneration.InnerSingleton,
			StaticRegisterNativesAProceduralGeneration,
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
	return Z_Registration_Info_UClass_AProceduralGeneration.InnerSingleton;
}
UClass* Z_Construct_UClass_AProceduralGeneration_NoRegister()
{
	return AProceduralGeneration::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProceduralGeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralGeneration.h" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weightSolvability_MetaData[] = {
		{ "Category", "ProceduralGeneration" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weightComplexity_MetaData[] = {
		{ "Category", "ProceduralGeneration" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weightOpenness_MetaData[] = {
		{ "Category", "ProceduralGeneration" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_weightSolvability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_weightComplexity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_weightOpenness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralGeneration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_weightSolvability = { "weightSolvability", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, weightSolvability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weightSolvability_MetaData), NewProp_weightSolvability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_weightComplexity = { "weightComplexity", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, weightComplexity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weightComplexity_MetaData), NewProp_weightComplexity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_weightOpenness = { "weightOpenness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralGeneration, weightOpenness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weightOpenness_MetaData), NewProp_weightOpenness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralGeneration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_weightSolvability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_weightComplexity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralGeneration_Statics::NewProp_weightOpenness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralGeneration_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProceduralGeneration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HauntedPlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralGeneration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralGeneration_Statics::ClassParams = {
	&AProceduralGeneration::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProceduralGeneration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralGeneration_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralGeneration_Statics::Class_MetaDataParams), Z_Construct_UClass_AProceduralGeneration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProceduralGeneration()
{
	if (!Z_Registration_Info_UClass_AProceduralGeneration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralGeneration.OuterSingleton, Z_Construct_UClass_AProceduralGeneration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProceduralGeneration.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralGeneration);
AProceduralGeneration::~AProceduralGeneration() {}
// ********** End Class AProceduralGeneration ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h__Script_HauntedPlane_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralGeneration, AProceduralGeneration::StaticClass, TEXT("AProceduralGeneration"), &Z_Registration_Info_UClass_AProceduralGeneration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralGeneration), 2462549015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h__Script_HauntedPlane_2438137883(TEXT("/Script/HauntedPlane"),
	Z_CompiledInDeferFile_FID_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h__Script_HauntedPlane_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h__Script_HauntedPlane_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
