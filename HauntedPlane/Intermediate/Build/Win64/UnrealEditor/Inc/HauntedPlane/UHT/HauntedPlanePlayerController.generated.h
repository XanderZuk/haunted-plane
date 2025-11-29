// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HauntedPlanePlayerController.h"

#ifdef HAUNTEDPLANE_HauntedPlanePlayerController_generated_h
#error "HauntedPlanePlayerController.generated.h already included, missing '#pragma once' in HauntedPlanePlayerController.h"
#endif
#define HAUNTEDPLANE_HauntedPlanePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHauntedPlanePlayerController ********************************************
struct Z_Construct_UClass_AHauntedPlanePlayerController_Statics;
HAUNTEDPLANE_API UClass* Z_Construct_UClass_AHauntedPlanePlayerController_NoRegister();

#define FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlanePlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHauntedPlanePlayerController(); \
	friend struct ::Z_Construct_UClass_AHauntedPlanePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAUNTEDPLANE_API UClass* ::Z_Construct_UClass_AHauntedPlanePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AHauntedPlanePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/HauntedPlane"), Z_Construct_UClass_AHauntedPlanePlayerController_NoRegister) \
	DECLARE_SERIALIZER(AHauntedPlanePlayerController)


#define FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlanePlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHauntedPlanePlayerController(AHauntedPlanePlayerController&&) = delete; \
	AHauntedPlanePlayerController(const AHauntedPlanePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHauntedPlanePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHauntedPlanePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AHauntedPlanePlayerController) \
	NO_API virtual ~AHauntedPlanePlayerController();


#define FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlanePlayerController_h_17_PROLOG
#define FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlanePlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlanePlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlanePlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHauntedPlanePlayerController;

// ********** End Class AHauntedPlanePlayerController **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_HauntedPlanePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
