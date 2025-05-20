// Fill out your copyright notice in the Description page of Project Settings.

#include "Laberinto.h"

// Sets default values
ALaberinto::ALaberinto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALaberinto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaberinto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALaberinto::SetBordes(int columnas, int filas)
{
	const float Espaciado = 100.f;
	int Rows = MapaLaberinto.Num();
	int Cols = MapaLaberinto[0].Num();

	for (int Y = 0; Y < Rows; ++Y)
	{
		for (int X = 0; X < Cols; ++X)
		{
			if (MapaLaberinto[Y][X] == 4)
			{
				FVector Pos = FVector(X * Espaciado, Y * Espaciado, 0.f);
				GetWorld()->SpawnActor<ABloqueAcero>(BloqueA, Pos, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberinto::SetInterior(int m)
{
	const float Espaciado = 100.f;
	int Rows = MapaLaberinto.Num();
	int Cols = MapaLaberinto[0].Num();

	for (int Y = 0; Y < Rows; ++Y)
	{
		for (int X = 0; X < Cols; ++X)
		{
			if (MapaLaberinto[Y][X] == 1)
			{
				FVector Pos = FVector(X * Espaciado, Y * Espaciado, 0.f);
				GetWorld()->SpawnActor<ABloqueMadera>(BloqueM, Pos, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberinto::SetPuertas(int p)
{
	const float Espaciado = 100.f;
	int Rows = MapaPuertas.Num();
	int Cols = MapaPuertas[0].Num();

	for (int Y = 0; Y < Rows; ++Y)
	{
		for (int X = 0; X < Cols; ++X)
		{
			if (MapaPuertas[Y][X] == 7)
			{
				FVector Pos = FVector(X * Espaciado, Y * Espaciado, 100.f);
				GetWorld()->SpawnActor<APuerta>(Puertas, Pos, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberinto::SetObstaculos(int o)
{
	const float Espaciado = 100.f;
	int Rows = MapaObstaculos.Num();
	int Cols = MapaObstaculos[0].Num();

	for (int Y = 0; Y < Rows; ++Y)
	{
		for (int X = 0; X < Cols; ++X)
		{
			if (MapaObstaculos[Y][X] == 8)
			{
				FVector Pos = FVector(X * Espaciado, Y * Espaciado, 50.f);
				GetWorld()->SpawnActor<AObtaculos>(Obstaculos, Pos, FRotator::ZeroRotator);
			}
		}
	}
}

