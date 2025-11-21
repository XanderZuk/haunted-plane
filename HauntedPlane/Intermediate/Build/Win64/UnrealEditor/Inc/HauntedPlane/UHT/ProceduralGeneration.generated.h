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

// ********** Begin Class AProceduralGeneration ****************************************************
HAUNTEDPLANE_API UClass* Z_Construct_UClass_AProceduralGeneration_NoRegister();

#define FID_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceduralGeneration(); \
	friend struct Z_Construct_UClass_AProceduralGeneration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAUNTEDPLANE_API UClass* Z_Construct_UClass_AProceduralGeneration_NoRegister(); \
public: \
	DECLARE_CLASS2(AProceduralGeneration, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HauntedPlane"), Z_Construct_UClass_AProceduralGeneration_NoRegister) \
	DECLARE_SERIALIZER(AProceduralGeneration)


#define FID_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProceduralGeneration(AProceduralGeneration&&) = delete; \
	AProceduralGeneration(const AProceduralGeneration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralGeneration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralGeneration); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProceduralGeneration) \
	NO_API virtual ~AProceduralGeneration();


#define FID_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_9_PROLOG
#define FID_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_12_INCLASS_NO_PURE_DECLS \
	FID_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProceduralGeneration;

// ********** End Class AProceduralGeneration ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
