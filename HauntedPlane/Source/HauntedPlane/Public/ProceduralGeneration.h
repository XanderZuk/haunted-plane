// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralGeneration.generated.h"

USTRUCT(BlueprintType)
struct FMapRow
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	TArray<int> Row;
};

UCLASS()
class HAUNTEDPLANE_API AProceduralGeneration : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProceduralGeneration();
	
	UFUNCTION(BlueprintCallable)
	static TArray<FMapRow> GenerateMap(int mapSize, int initialStates, int generations, float complexityWeight, float solvabilityWeight, float opennessWeight);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	static float Solvability(TArray<TArray<int>> map);
	static float Complexity(TArray<TArray<int>> map);
	static float Openness(TArray<TArray<int>> map);
	static float Fitness(TArray<TArray<int>> map, float complexityWeight, float solvabilityWeight, float opennessWeight);
	static void PrintState(TArray<TArray<int>> map);
	static TArray<TArray<int>> GenerateBorder(TArray<TArray<int>> map);
	static TArray<TArray<int>> ClearCenter(TArray<TArray<int>> map);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};


