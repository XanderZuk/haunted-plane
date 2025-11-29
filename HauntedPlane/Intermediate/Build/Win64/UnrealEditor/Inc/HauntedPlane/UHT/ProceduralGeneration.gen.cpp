// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralGeneration.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeProceduralGeneration() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
HAUNTEDPLANE_API UClass* Z_Construct_UClass_AProceduralGeneration();
HAUNTEDPLANE_API UClass* Z_Construct_UClass_AProceduralGeneration_NoRegister();
HAUNTEDPLANE_API UScriptStruct* Z_Construct_UScriptStruct_FMapRow();
UPackage* Z_Construct_UPackage__Script_HauntedPlane();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMapRow ***********************************************************
struct Z_Construct_UScriptStruct_FMapRow_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMapRow); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMapRow); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "Category", "MapRow" },
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMapRow constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Row_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Row;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMapRow constinit property declarations *****************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMapRow_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMapRow;
class UScriptStruct* FMapRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMapRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMapRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapRow, (UObject*)Z_Construct_UPackage__Script_HauntedPlane(), TEXT("MapRow"));
	}
	return Z_Registration_Info_UScriptStruct_FMapRow.OuterSingleton;
	}

// ********** Begin ScriptStruct FMapRow Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapRow_Statics::NewProp_Row_Inner = { "Row", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapRow_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapRow, Row), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapRow_Statics::NewProp_Row_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapRow_Statics::NewProp_Row,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapRow_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMapRow Property Definitions ****************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HauntedPlane,
	nullptr,
	&NewStructOps,
	"MapRow",
	Z_Construct_UScriptStruct_FMapRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapRow_Statics::PropPointers),
	sizeof(FMapRow),
	alignof(FMapRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMapRow()
{
	if (!Z_Registration_Info_UScriptStruct_FMapRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMapRow.InnerSingleton, Z_Construct_UScriptStruct_FMapRow_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMapRow.InnerSingleton);
}
// ********** End ScriptStruct FMapRow *************************************************************

// ********** Begin Class AProceduralGeneration Function GenerateMap *******************************
struct Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics
{
	struct ProceduralGeneration_eventGenerateMap_Parms
	{
		int32 mapSize;
		int32 initialStates;
		int32 generations;
		float complexityWeight;
		float solvabilityWeight;
		float opennessWeight;
		TArray<FMapRow> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProceduralGeneration.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateMap constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_mapSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_initialStates;
	static const UECodeGen_Private::FIntPropertyParams NewProp_generations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_complexityWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_solvabilityWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_opennessWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateMap constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateMap Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_mapSize = { "mapSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralGeneration_eventGenerateMap_Parms, mapSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_initialStates = { "initialStates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralGeneration_eventGenerateMap_Parms, initialStates), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_generations = { "generations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralGeneration_eventGenerateMap_Parms, generations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_complexityWeight = { "complexityWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralGeneration_eventGenerateMap_Parms, complexityWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_solvabilityWeight = { "solvabilityWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralGeneration_eventGenerateMap_Parms, solvabilityWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_opennessWeight = { "opennessWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralGeneration_eventGenerateMap_Parms, opennessWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMapRow, METADATA_PARAMS(0, nullptr) }; // 73988200
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralGeneration_eventGenerateMap_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 73988200
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_mapSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_initialStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_generations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_complexityWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_solvabilityWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_opennessWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::PropPointers) < 2048);
// ********** End Function GenerateMap Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProceduralGeneration, nullptr, "GenerateMap", 	Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::ProceduralGeneration_eventGenerateMap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::ProceduralGeneration_eventGenerateMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProceduralGeneration_GenerateMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProceduralGeneration_GenerateMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProceduralGeneration::execGenerateMap)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_mapSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_initialStates);
	P_GET_PROPERTY(FIntProperty,Z_Param_generations);
	P_GET_PROPERTY(FFloatProperty,Z_Param_complexityWeight);
	P_GET_PROPERTY(FFloatProperty,Z_Param_solvabilityWeight);
	P_GET_PROPERTY(FFloatProperty,Z_Param_opennessWeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMapRow>*)Z_Param__Result=AProceduralGeneration::GenerateMap(Z_Param_mapSize,Z_Param_initialStates,Z_Param_generations,Z_Param_complexityWeight,Z_Param_solvabilityWeight,Z_Param_opennessWeight);
	P_NATIVE_END;
}
// ********** End Class AProceduralGeneration Function GenerateMap *********************************

// ********** Begin Class AProceduralGeneration ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AProceduralGeneration;
UClass* AProceduralGeneration::GetPrivateStaticClass()
{
	using TClass = AProceduralGeneration;
	if (!Z_Registration_Info_UClass_AProceduralGeneration.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
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
#endif // WITH_METADATA

// ********** Begin Class AProceduralGeneration constinit property declarations ********************
// ********** End Class AProceduralGeneration constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GenerateMap"), .Pointer = &AProceduralGeneration::execGenerateMap },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProceduralGeneration_GenerateMap, "GenerateMap" }, // 3865351625
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralGeneration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AProceduralGeneration_Statics
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
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralGeneration_Statics::Class_MetaDataParams), Z_Construct_UClass_AProceduralGeneration_Statics::Class_MetaDataParams)
};
void AProceduralGeneration::StaticRegisterNativesAProceduralGeneration()
{
	UClass* Class = AProceduralGeneration::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AProceduralGeneration_Statics::Funcs));
}
UClass* Z_Construct_UClass_AProceduralGeneration()
{
	if (!Z_Registration_Info_UClass_AProceduralGeneration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralGeneration.OuterSingleton, Z_Construct_UClass_AProceduralGeneration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProceduralGeneration.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AProceduralGeneration);
AProceduralGeneration::~AProceduralGeneration() {}
// ********** End Class AProceduralGeneration ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h__Script_HauntedPlane_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMapRow::StaticStruct, Z_Construct_UScriptStruct_FMapRow_Statics::NewStructOps, TEXT("MapRow"),&Z_Registration_Info_UScriptStruct_FMapRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapRow), 73988200U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralGeneration, AProceduralGeneration::StaticClass, TEXT("AProceduralGeneration"), &Z_Registration_Info_UClass_AProceduralGeneration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralGeneration), 3882108332U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h__Script_HauntedPlane_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h__Script_HauntedPlane_1767980583{
	TEXT("/Script/HauntedPlane"),
	Z_CompiledInDeferFile_FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h__Script_HauntedPlane_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h__Script_HauntedPlane_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h__Script_HauntedPlane_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_HauntedPlane_Source_HauntedPlane_Public_ProceduralGeneration_h__Script_HauntedPlane_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
