// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralGeneration.h"

#ifdef HAUNTEDPLANE_ProceduralGeneration_generated_h
#error "ProceduralGeneration.generated.h already included, missing '#pragma once' in ProceduralGeneration.h"
#endif
#define HAUNTEDPLANE_ProceduralGeneration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMapRow;

// ********** Begin ScriptStruct FMapRow ***********************************************************
struct Z_Construct_UScriptStruct_FMapRow_Statics;
#define FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMapRow_Statics; \
	HAUNTEDPLANE_API static class UScriptStruct* StaticStruct();


struct FMapRow;
// ********** End ScriptStruct FMapRow *************************************************************

// ********** Begin Class AProceduralGeneration ****************************************************
#define FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateMap);


struct Z_Construct_UClass_AProceduralGeneration_Statics;
HAUNTEDPLANE_API UClass* Z_Construct_UClass_AProceduralGeneration_NoRegister();

#define FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceduralGeneration(); \
	friend struct ::Z_Construct_UClass_AProceduralGeneration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAUNTEDPLANE_API UClass* ::Z_Construct_UClass_AProceduralGeneration_NoRegister(); \
public: \
	DECLARE_CLASS2(AProceduralGeneration, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HauntedPlane"), Z_Construct_UClass_AProceduralGeneration_NoRegister) \
	DECLARE_SERIALIZER(AProceduralGeneration)


#define FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProceduralGeneration(AProceduralGeneration&&) = delete; \
	AProceduralGeneration(const AProceduralGeneration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralGeneration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralGeneration); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProceduralGeneration) \
	NO_API virtual ~AProceduralGeneration();


#define FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_18_PROLOG
#define FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_21_INCLASS_NO_PURE_DECLS \
	FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProceduralGeneration;

// ********** End Class AProceduralGeneration ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_paulaalmeida_Desktop_haunted_plane_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
