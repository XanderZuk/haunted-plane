// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHauntedPlane_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	HAUNTEDPLANE_API UFunction* Z_Construct_UDelegateFunction_HauntedPlane_BulletCountUpdatedDelegate__DelegateSignature();
	HAUNTEDPLANE_API UFunction* Z_Construct_UDelegateFunction_HauntedPlane_DamagedDelegate__DelegateSignature();
	HAUNTEDPLANE_API UFunction* Z_Construct_UDelegateFunction_HauntedPlane_PawnDeathDelegate__DelegateSignature();
	HAUNTEDPLANE_API UFunction* Z_Construct_UDelegateFunction_HauntedPlane_SprintStateChangedDelegate__DelegateSignature();
	HAUNTEDPLANE_API UFunction* Z_Construct_UDelegateFunction_HauntedPlane_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HauntedPlane;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HauntedPlane()
	{
		if (!Z_Registration_Info_UPackage__Script_HauntedPlane.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_HauntedPlane_BulletCountUpdatedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_HauntedPlane_DamagedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_HauntedPlane_PawnDeathDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_HauntedPlane_SprintStateChangedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_HauntedPlane_UpdateSprintMeterDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/HauntedPlane",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x14AE49B4,
			0x447B7805,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HauntedPlane.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_HauntedPlane.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HauntedPlane(Z_Construct_UPackage__Script_HauntedPlane, TEXT("/Script/HauntedPlane"), Z_Registration_Info_UPackage__Script_HauntedPlane, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x14AE49B4, 0x447B7805));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
