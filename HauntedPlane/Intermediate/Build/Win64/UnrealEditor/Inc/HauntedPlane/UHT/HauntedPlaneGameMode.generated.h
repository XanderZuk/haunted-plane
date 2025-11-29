// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HauntedPlaneGameMode.h"

#ifdef HAUNTEDPLANE_HauntedPlaneGameMode_generated_h
#error "HauntedPlaneGameMode.generated.h already included, missing '#pragma once' in HauntedPlaneGameMode.h"
#endif
#define HAUNTEDPLANE_HauntedPlaneGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHauntedPlaneGameMode ****************************************************
struct Z_Construct_UClass_AHauntedPlaneGameMode_Statics;
HAUNTEDPLANE_API UClass* Z_Construct_UClass_AHauntedPlaneGameMode_NoRegister();

#define FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlaneGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHauntedPlaneGameMode(); \
	friend struct ::Z_Construct_UClass_AHauntedPlaneGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAUNTEDPLANE_API UClass* ::Z_Construct_UClass_AHauntedPlaneGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AHauntedPlaneGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HauntedPlane"), Z_Construct_UClass_AHauntedPlaneGameMode_NoRegister) \
	DECLARE_SERIALIZER(AHauntedPlaneGameMode)


#define FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlaneGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHauntedPlaneGameMode(AHauntedPlaneGameMode&&) = delete; \
	AHauntedPlaneGameMode(const AHauntedPlaneGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHauntedPlaneGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHauntedPlaneGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AHauntedPlaneGameMode) \
	NO_API virtual ~AHauntedPlaneGameMode();


#define FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlaneGameMode_h_12_PROLOG
#define FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlaneGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlaneGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlaneGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHauntedPlaneGameMode;

// ********** End Class AHauntedPlaneGameMode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlaneGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
