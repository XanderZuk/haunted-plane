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

TArray<FMapRow> AProceduralGeneration::GenerateMap(int mapSize, int initialStates, int generations, float complexityWeight, float solvabilityWeight, float opennessWeight, int numberOfKeys)
{
	if (initialStates % 2 != 0)	// Ensures an even number of initial states for the algorithm
		initialStates++;
	if (mapSize % 2 != 1)	// Ensures that the map can be centered on a single tile
		mapSize++;
	TArray<TArray<TArray<int>>> states;
	TArray<TArray<int>> best;
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
		best = map;
	}

	for (int i = 0; i < generations; i++)
	{
		for (auto& state : states)
		{
			int centerIndex = mapSize / 2;
			state[centerIndex][centerIndex] = 0;	// Clears the center tile for an accurate measure of fitness
		}
		
		UE_LOG(LogTemp, Display, TEXT("Generation: %d\n"), i);
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

		for (int j = 0; j < nextStates.Num() - 1; j += 2)
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
					if (FMath::RandRange(0, 100) == 1)	// 1 in 100 chance of a mutation per cell
					{
						cell = !cell;
					}
				}
			}
		}

		states = nextStates;
		float maxFitness = 0;
		int maxFitnessIndex = 0;
		for (int m = 0; m < states.Num(); m++)
		{
			float currentFitness = Fitness(states[m], complexityWeight, solvabilityWeight, opennessWeight);
			//UE_LOG(LogTemp, Display, TEXT("State Fitness: %f\n"), currentFitness);
			if (currentFitness > maxFitness)
			{
				maxFitness = currentFitness;
				maxFitnessIndex = m;
			}
			if (currentFitness > Fitness(best, complexityWeight, solvabilityWeight, opennessWeight))
			{
				best = states[m];
			}
		}
		UE_LOG(LogTemp, Display, TEXT("Max Fitness: %f\n"), maxFitness);
		/////UE_LOG(LogTemp, Display, TEXT("Complexity: %f\n"), Complexity(states[maxFitnessIndex]));
		/////UE_LOG(LogTemp, Display, TEXT("Solvability: %f\n"), Solvability(states[maxFitnessIndex]));
		/////UE_LOG(LogTemp, Display, TEXT("Openness: %f\n"), Openness(states[maxFitnessIndex]));

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
	if (Fitness(states[maxFitnessIndex], complexityWeight, solvabilityWeight, opennessWeight) > Fitness(best, complexityWeight, solvabilityWeight, opennessWeight))
	{
		best = states[maxFitnessIndex];
	}
	
	best = GenerateBorder(best);
	best = ClearCenter(best);
	best = FindSpawnableLocation(best, numberOfKeys);
	UE_LOG(LogTemp, Display, TEXT("Fitness: %f\n"), Fitness(best, complexityWeight, solvabilityWeight, opennessWeight));
	
	TArray<FMapRow> finalMap;

	for (auto& row : best)
	{
		finalMap.Add(FMapRow{row});
	}
	PrintState(best);
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
				output += "1";
			else if (j == 2)
				output += "2";
			else if (j == 3)
				output += "3";
			else
				output += "0";
		}
		output += "\n";
	}

	UE_LOG(LogTemp, Display, TEXT("Printout: \n%hs\n"), output.c_str());
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
			if ((cell.first >= 0 && cell.first < map.Num()) && (cell.second >= 0 && cell.second < map.Num()))	// Check if the cell is in bounds
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
			if ((visited[i][j] == 1))
			{
				cellsVisited++;
			}
			else if (map[i][j] == 0)
			{
				cellsNotVisited++;
			}
		}
	}
	return (static_cast<float>(cellsVisited) / cellsNotVisited) * 100;

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

	return (static_cast<float>(wallCells) / (map.Num() * map.Num())) * 100;	
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

	return static_cast<float>(sumOfLongestDistance) / openCells.Num();
}

TArray<TArray<int>> AProceduralGeneration::GenerateBorder(TArray<TArray<int>> map)
{
	TArray<int> wall;
	wall.Init(1, map.Num());

	map[0] = wall;
	map[map.Num() - 1] = wall;
    for (int i = 0; i < map.Num(); i++)
	{
		map[i][0] = 1;
		map[i][map.Num() - 1] = 1;
	}
	return map;
}



TArray<TArray<int>> AProceduralGeneration::ClearCenter(TArray<TArray<int>> map)
{
    int centerIndex = map.Num() / 2;
	for (int i = centerIndex - 2; i <= centerIndex + 2; i++)
	{
		for (int j = centerIndex - 2; j <= centerIndex + 2; j++)
		{
			map[i][j] = 0;
		}
	}

	return map;
}

TArray<TArray<int>> AProceduralGeneration::FindSpawnableLocation(TArray<TArray<int>> map, int numberOfKeys)
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
			if ((cell.first >= 0 && cell.first < map.Num()) && (cell.second >= 0 && cell.second < map.Num()))	// Check if the cell is in bounds
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

	int remainingKeys = numberOfKeys;
	while (remainingKeys != 0)
	{
		int x = FMath::RandRange(0, map.Num() / 4);
		if (FMath::RandRange(0, 1) == 1)
		{
			x += (map.Num() / 2);
		}

		int y = FMath::RandRange(0, map.Num() / 4);
		if (FMath::RandRange(0, 1) == 1)
		{
			y += (map.Num() / 2);
		}

		if (visited[x][y] == 1 && map[x][y] == 0)
		{
			map[x][y] = 2;
			remainingKeys--;
		}
	}
	while (1)
	{
		int x = FMath::RandRange(0, map.Num() / 4);
		if (FMath::RandRange(0, 1) == 1)
		{
			x += (map.Num() / 2);
		}

		int y = FMath::RandRange(0, map.Num() / 4);
		if (FMath::RandRange(0, 1) == 1)
		{
			y += (map.Num() / 2);
		}

		if (visited[x][y] == 1 && map[x][y] == 0)
		{
			map[x][y] = 3;
			break;
		}
	}
	return map;
}
