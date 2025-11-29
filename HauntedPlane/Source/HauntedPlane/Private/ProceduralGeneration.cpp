// Fill out your copyright notice in the Description page of Project Settings.

#include "ProceduralGeneration.h"
#include <string>
#include <queue>
#include <utility>

// Sets default values
AProceduralGeneration::AProceduralGeneration()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProceduralGeneration::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProceduralGeneration::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<FMapRow> AProceduralGeneration::GenerateMap(int mapSize, int initialStates, int generations, float complexityWeight, float solvabilityWeight, float opennessWeight)
{
	if (initialStates % 2 != 0)	// Ensures an even number of initial states for the algorithm
		initialStates++;
	if (mapSize % 2 != 1)	// Ensures that the map can be centered on a single tile
		mapSize++;
	TArray<TArray<TArray<int>>> states;
	// Generate initial states
	for (int i = 0; i < initialStates; i++)
	{	
		TArray<TArray<int>> map;
		for (int j = 0; j < mapSize; j++)
		{
			TArray<int> row;
			for (int k = 0; k < mapSize; k++)
			{
				row.Add(rand() % 2);	// Fill columns with 0's and 1's
			}
			map.Add(row);
		}
		states.Add(map);
	}

	for (int i = 0; i < generations; i++)
	{
		///////////////
		// Selection //
		/////////////// 
		TArray<TArray<TArray<int>>> nextStates; // Array of the states for the next generation
		TArray<float> stateFitness;
		TArray<float> cumulativeSum;
		float fitnessSum = 0;
		for (auto& state : states)
		{
			stateFitness.Add(Fitness(state, complexityWeight, solvabilityWeight, opennessWeight));
			fitnessSum += stateFitness.Last();
		}
		for (auto& fitness : stateFitness)	// Calculates the probabilities of a state being chosen
		{
			fitness /= fitnessSum;
			if (cumulativeSum.Num() == 0)
				cumulativeSum.Add(fitness);
			else
				cumulativeSum.Add(fitness + cumulativeSum.Last());
		}
		float total = cumulativeSum.Last();

		// Probabilistically select the states for the next generation
		for (int k = 0; k < initialStates; k++)
		{	
			float prob = FMath::RandRange(0.f, total);
			for (int j = 0; j < cumulativeSum.Num(); j++)
			{
				if ((j == cumulativeSum.Num() - 1) || (cumulativeSum[j] <= prob && cumulativeSum[j+1] > prob))
				{
					nextStates.Add(states[j]);
					break;
				}
			}
		}

		///////////////
		// Crossover //
		///////////////

		for (int j = 0; j < nextStates.Num() - 1; i += 2)
		{
			int rand = FMath::RandRange(0, mapSize - 1); // crossover point
			TArray<TArray<int>> temp = nextStates[j];	// make a copy of the first state of the pair
			for (int k = 0; k < mapSize; k++)	// Iterate over rows of a state
			{
				if (k >= rand)	// Swap the columns of the pair of states after the crossover
				{
					nextStates[j][k] = nextStates[j+1][k];
					nextStates[j+1][k] = temp[k];
				}
			}
		}

		//////////////
		// Mutation //
		//////////////

		for (auto& map : nextStates)
		{
			for (auto& col : map)
			{
				for (auto& cell : col)
				{
					if (FMath::RandRange(0, 20) == 1)	// 1 in 20 chance of a mutation per cell
					{
						cell = !cell;
					}
				}
			}
		}

		states = nextStates;
	}
    
	// Find the most fit state
	int maxFitnessIndex = 0;
	float maxFitness = 0;
	for (int i = 0; i < states.Num(); i++)
	{
		float currentFitness = Fitness(states[i], complexityWeight, solvabilityWeight, opennessWeight);
		if (currentFitness > maxFitness)
		{
			maxFitness = currentFitness;
			maxFitnessIndex = i;
		}
	}
	// TODO: cut out center
	TArray<FMapRow> finalMap;

	for (auto& row : states[maxFitnessIndex])
	{
		finalMap.Add(FMapRow{row});
	}
	return finalMap;
}

float AProceduralGeneration::Fitness(TArray<TArray<int>> map, float complexityWeight, float solvabilityWeight, float opennessWeight)
{
    return (solvabilityWeight * Solvability(map)) + (complexityWeight * Complexity(map)) + (opennessWeight * Openness(map));
}

void AProceduralGeneration::PrintState(TArray<TArray<int>> map)
{
    std::string output = "";
	for (auto& i : map)
	{
		for (auto& j : i)
		{
			if (j == 1)
				output += "\u25A0";
			else
				output += "\u25A1";
		}
		output += "\n";
	}

	UE_LOG(LogTemp, Display, TEXT("Printout: %hs\n"), output.c_str());
}

float AProceduralGeneration::Solvability(TArray<TArray<int>> map)
{
    std::queue<std::pair<int, int>> nextCells;
	TArray<TArray<int>> visited;
	for (int i = 0; i < map.Num(); i++)	// Initialize the visited array with 0's
	{
		TArray<int> row;
		row.Init(0, map.Num());
		visited.Add(row);
	}

	int center = map.Num() / 2;	// Force integer division to get the index of the center cell
	map[center][center] = 0;	// Clear the center cell

	nextCells.emplace(std::pair<int, int>(center, center));
	visited[center][center] = 1;

	while (!nextCells.empty())
	{
		std::pair<int, int> currentCell = nextCells.front();
		nextCells.pop();
		TArray<std::pair<int, int>> neighbours;

		// Add potential neighbours to an array
		neighbours.Add(std::pair<int, int>(currentCell.first - 1, currentCell.second));
		neighbours.Add(std::pair<int, int>(currentCell.first + 1, currentCell.second));
		neighbours.Add(std::pair<int, int>(currentCell.first, currentCell.second + 1));
		neighbours.Add(std::pair<int, int>(currentCell.first, currentCell.second - 1));

		for (auto& cell : neighbours)
		{
			if (cell.first >= 0 || cell.first <= map.Num() - 1)	// Check if the cell is in bounds
			{
				if (visited[cell.first][cell.second] == 0)	// Check if the cell has been visited
				{
					if (map[cell.first][cell.second] == 0) // Check if the cell is empty
					{
						nextCells.push(cell);	// Add the cell to the queue
						visited[cell.first][cell.second] = 1;	// Mark it as visited
					}
				}
			}
		}

	}

	int cellsVisited = 0;
	int cellsNotVisited = 0;
	for (int i = 0; i < map.Num(); i++)
	{
		for (int j = 0; j < map.Num(); j++)
		{
			if ((map[i][j] == 0) && (visited[i][j] == 1))
			{
				cellsVisited++;
			}
			else if (map[i][j] == 0)
			{
				cellsNotVisited++;
			}
		}
	}

	return (cellsVisited / cellsNotVisited) * 100;

}

// TODO: a better algorithm to measure complexity
float AProceduralGeneration::Complexity(TArray<TArray<int>> map)
{
	int wallCells = 0;

    for (int i = 0; i < map.Num(); i++)
	{
		for (int j = 0; j < map.Num(); j++)
		{
			if (map[i][j] == 1)
				wallCells++;
		}
	}

	return (wallCells / (map.Num() * map.Num())) * 100;	
}

float AProceduralGeneration::Openness(TArray<TArray<int>> map)
{
    TArray<std::pair<int, int>> openCells;
	int sumOfLongestDistance = 0;

	// Generate a list of the open cells in the map
	for (int i = 0; i < map.Num(); i++)
	{
		for (int j = 0; j < map.Num(); j++)
		{
			if (map[i][j] == 0)
				openCells.Add(std::pair<int, int>(i, j));
		}
	}

	for (auto& cell : openCells)
	{
		int longestDistance = 0;

		for (int i = 0; cell.first + i < map.Num(); i++)
		{
			if (map[cell.first + i][cell.second] == 1)
				break;
			else
			{
				if (i > longestDistance)
					longestDistance = i;
			}
		}
		for (int i = 0; cell.first - i >= 0; i++)
		{
			if (map[cell.first - i][cell.second] == 1)
				break;
			else
			{
				if (i > longestDistance)
					longestDistance = i;
			}
		}
		for (int i = 0; cell.second + i < map.Num(); i++)
		{
			if (map[cell.first][cell.second + i] == 1)
				break;
			else
			{
				if (i > longestDistance)
					longestDistance = i;
			}
		}
		for (int i = 0; cell.second - i >= 0; i++)
		{
			if (map[cell.first][cell.second - i] == 1)
				break;
			else
			{
				if (i > longestDistance)
					longestDistance = i;
			}
		}

		sumOfLongestDistance += longestDistance;
	}

	return sumOfLongestDistance / openCells.Num();
}

