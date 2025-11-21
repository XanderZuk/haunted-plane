// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralGeneration.generated.h"
#include <vector>

UCLASS()
class HAUNTEDPLANE_API AProceduralGeneration : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProceduralGeneration();

	UPROPERTY(EditAnywhere)
	float weightSolvability;
	UPROPERTY(EditAnywhere)
	float weightComplexity;
	UPROPERTY(EditAnywhere)
	float weightOpenness;
	UPROPERTY(BlueprintCallable)
	int GenerateMap(int mapSize, int nstates, int nGenerations);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	float fitness(std::vector<std::vector<int>> map);
	float solvability(std::vector<std::vector<int>> map);
	float complexity(std::vector<std::vector<int>> map);
	float openness(std::vector<std::vector<int>> map);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
