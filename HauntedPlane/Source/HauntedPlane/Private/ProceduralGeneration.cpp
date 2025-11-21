// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralGeneration.h"
#include <vector>

// Sets default values
AProceduralGeneration::AProceduralGeneration()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

int AProceduralGeneration::GenerateMap(int mapSize, int nstates, int nGenerations)
{
	std::vector<std::vector<std::vector<int>>> maps;
	// Generate initial states
	for (int i = 0; i < nstates; i++)
	{	
		std::vector<std::vector<int>> map;
		for (int j = 0; j < mapSize; j++)
		{
			std::vector<int> col;
			for (int k = 0; k < mapSize; k++)
			{
				col.push_back(rand() % 2);	// Fill columns with 0's and 1's
			}
			map.push_back(col);
		}
		maps.push_back(map);
	}

	for (int i = 0; i < nGenerations; i++)
	{
		
	}
    return 0;
}

// Called when the game starts or when spawned
void AProceduralGeneration::BeginPlay()
{
	Super::BeginPlay();
}

float AProceduralGeneration::fitness(std::vector<std::vector<int>> map)
{
    return (weightSolvability * solvability(map)) + (weightComplexity * complexity(map)) + (weightOpenness * openness(map));
}

float AProceduralGeneration::solvability(std::vector<std::vector<int>> map)
{
    return 0.0f;
}

float AProceduralGeneration::complexity(std::vector<std::vector<int>> map)
{
    return 0.0f;
}

float AProceduralGeneration::openness(std::vector<std::vector<int>> map)
{
    return 0.0f;
}

// Called every frame
void AProceduralGeneration::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


