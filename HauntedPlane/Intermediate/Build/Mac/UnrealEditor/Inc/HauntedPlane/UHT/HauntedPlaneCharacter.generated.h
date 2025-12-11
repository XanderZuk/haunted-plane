// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HauntedPlaneCharacter.h"

#ifdef HAUNTEDPLANE_HauntedPlaneCharacter_generated_h
#error "HauntedPlaneCharacter.generated.h already included, missing '#pragma once' in HauntedPlaneCharacter.h"
#endif
#define HAUNTEDPLANE_HauntedPlaneCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHauntedPlaneCharacter ***************************************************
#define FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


struct Z_Construct_UClass_AHauntedPlaneCharacter_Statics;
HAUNTEDPLANE_API UClass* Z_Construct_UClass_AHauntedPlaneCharacter_NoRegister();

#define FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHauntedPlaneCharacter(); \
	friend struct ::Z_Construct_UClass_AHauntedPlaneCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAUNTEDPLANE_API UClass* ::Z_Construct_UClass_AHauntedPlaneCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AHauntedPlaneCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/HauntedPlane"), Z_Construct_UClass_AHauntedPlaneCharacter_NoRegister) \
	DECLARE_SERIALIZER(AHauntedPlaneCharacter)


#define FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHauntedPlaneCharacter(AHauntedPlaneCharacter&&) = delete; \
	AHauntedPlaneCharacter(const AHauntedPlaneCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHauntedPlaneCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHauntedPlaneCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AHauntedPlaneCharacter) \
	NO_API virtual ~AHauntedPlaneCharacter();


#define FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCharacter_h_21_PROLOG
#define FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHauntedPlaneCharacter;

// ********** End Class AHauntedPlaneCharacter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_HauntedPlaneCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
