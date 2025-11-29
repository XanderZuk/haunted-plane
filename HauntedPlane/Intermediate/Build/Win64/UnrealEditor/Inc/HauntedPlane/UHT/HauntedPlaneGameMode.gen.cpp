// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HauntedPlaneGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHauntedPlaneGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HAUNTEDPLANE_API UClass* Z_Construct_UClass_AHauntedPlaneGameMode();
HAUNTEDPLANE_API UClass* Z_Construct_UClass_AHauntedPlaneGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HauntedPlane();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHauntedPlaneGameMode ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHauntedPlaneGameMode;
UClass* AHauntedPlaneGameMode::GetPrivateStaticClass()
{
	using TClass = AHauntedPlaneGameMode;
	if (!Z_Registration_Info_UClass_AHauntedPlaneGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HauntedPlaneGameMode"),
			Z_Registration_Info_UClass_AHauntedPlaneGameMode.InnerSingleton,
			StaticRegisterNativesAHauntedPlaneGameMode,
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
	return Z_Registration_Info_UClass_AHauntedPlaneGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AHauntedPlaneGameMode_NoRegister()
{
	return AHauntedPlaneGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHauntedPlaneGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HauntedPlaneGameMode.h" },
		{ "ModuleRelativePath", "HauntedPlaneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AHauntedPlaneGameMode constinit property declarations ********************
// ********** End Class AHauntedPlaneGameMode constinit property declarations **********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHauntedPlaneGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHauntedPlaneGameMode_Statics
UObject* (*const Z_Construct_UClass_AHauntedPlaneGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HauntedPlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHauntedPlaneGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHauntedPlaneGameMode_Statics::ClassParams = {
	&AHauntedPlaneGameMode::StaticClass,
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
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHauntedPlaneGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHauntedPlaneGameMode_Statics::Class_MetaDataParams)
};
void AHauntedPlaneGameMode::StaticRegisterNativesAHauntedPlaneGameMode()
{
}
UClass* Z_Construct_UClass_AHauntedPlaneGameMode()
{
	if (!Z_Registration_Info_UClass_AHauntedPlaneGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHauntedPlaneGameMode.OuterSingleton, Z_Construct_UClass_AHauntedPlaneGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHauntedPlaneGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHauntedPlaneGameMode);
AHauntedPlaneGameMode::~AHauntedPlaneGameMode() {}
// ********** End Class AHauntedPlaneGameMode ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlaneGameMode_h__Script_HauntedPlane_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHauntedPlaneGameMode, AHauntedPlaneGameMode::StaticClass, TEXT("AHauntedPlaneGameMode"), &Z_Registration_Info_UClass_AHauntedPlaneGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHauntedPlaneGameMode), 1986450540U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlaneGameMode_h__Script_HauntedPlane_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlaneGameMode_h__Script_HauntedPlane_2295172899{
	TEXT("/Script/HauntedPlane"),
	Z_CompiledInDeferFile_FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlaneGameMode_h__Script_HauntedPlane_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlaneGameMode_h__Script_HauntedPlane_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
