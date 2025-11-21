// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Test.h"

#ifdef HAUNTEDPLANE_Test_generated_h
#error "Test.generated.h already included, missing '#pragma once' in Test.h"
#endif
#define HAUNTEDPLANE_Test_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATest ********************************************************************
HAUNTEDPLANE_API UClass* Z_Construct_UClass_ATest_NoRegister();

#define FID_HauntedPlane_Source_HauntedPlane_Public_Test_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATest(); \
	friend struct Z_Construct_UClass_ATest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAUNTEDPLANE_API UClass* Z_Construct_UClass_ATest_NoRegister(); \
public: \
	DECLARE_CLASS2(ATest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HauntedPlane"), Z_Construct_UClass_ATest_NoRegister) \
	DECLARE_SERIALIZER(ATest)


#define FID_HauntedPlane_Source_HauntedPlane_Public_Test_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATest(ATest&&) = delete; \
	ATest(const ATest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATest) \
	NO_API virtual ~ATest();


#define FID_HauntedPlane_Source_HauntedPlane_Public_Test_h_9_PROLOG
#define FID_HauntedPlane_Source_HauntedPlane_Public_Test_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HauntedPlane_Source_HauntedPlane_Public_Test_h_12_INCLASS_NO_PURE_DECLS \
	FID_HauntedPlane_Source_HauntedPlane_Public_Test_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATest;

// ********** End Class ATest **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HauntedPlane_Source_HauntedPlane_Public_Test_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
