// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HauntedPlaneCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHauntedPlaneCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
HAUNTEDPLANE_API UClass* Z_Construct_UClass_AHauntedPlaneCameraManager();
HAUNTEDPLANE_API UClass* Z_Construct_UClass_AHauntedPlaneCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_HauntedPlane();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHauntedPlaneCameraManager ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHauntedPlaneCameraManager;
UClass* AHauntedPlaneCameraManager::GetPrivateStaticClass()
{
	using TClass = AHauntedPlaneCameraManager;
	if (!Z_Registration_Info_UClass_AHauntedPlaneCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HauntedPlaneCameraManager"),
			Z_Registration_Info_UClass_AHauntedPlaneCameraManager.InnerSingleton,
			StaticRegisterNativesAHauntedPlaneCameraManager,
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
	return Z_Registration_Info_UClass_AHauntedPlaneCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AHauntedPlaneCameraManager_NoRegister()
{
	return AHauntedPlaneCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHauntedPlaneCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "HauntedPlaneCameraManager.h" },
		{ "ModuleRelativePath", "HauntedPlaneCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AHauntedPlaneCameraManager constinit property declarations ***************
// ********** End Class AHauntedPlaneCameraManager constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHauntedPlaneCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHauntedPlaneCameraManager_Statics
UObject* (*const Z_Construct_UClass_AHauntedPlaneCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_HauntedPlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHauntedPlaneCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHauntedPlaneCameraManager_Statics::ClassParams = {
	&AHauntedPlaneCameraManager::StaticClass,
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
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHauntedPlaneCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AHauntedPlaneCameraManager_Statics::Class_MetaDataParams)
};
void AHauntedPlaneCameraManager::StaticRegisterNativesAHauntedPlaneCameraManager()
{
}
UClass* Z_Construct_UClass_AHauntedPlaneCameraManager()
{
	if (!Z_Registration_Info_UClass_AHauntedPlaneCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHauntedPlaneCameraManager.OuterSingleton, Z_Construct_UClass_AHauntedPlaneCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHauntedPlaneCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHauntedPlaneCameraManager);
AHauntedPlaneCameraManager::~AHauntedPlaneCameraManager() {}
// ********** End Class AHauntedPlaneCameraManager *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCameraManager_h__Script_HauntedPlane_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHauntedPlaneCameraManager, AHauntedPlaneCameraManager::StaticClass, TEXT("AHauntedPlaneCameraManager"), &Z_Registration_Info_UClass_AHauntedPlaneCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHauntedPlaneCameraManager), 2123368663U) },
	};
}; // Z_CompiledInDeferFile_FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCameraManager_h__Script_HauntedPlane_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCameraManager_h__Script_HauntedPlane_1418718703{
	TEXT("/Script/HauntedPlane"),
	Z_CompiledInDeferFile_FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCameraManager_h__Script_HauntedPlane_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCameraManager_h__Script_HauntedPlane_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
