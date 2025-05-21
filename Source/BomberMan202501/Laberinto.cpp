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
void ALaberinto::InicializarMapas(
	const TArray<TArray<int32>>& NuevoMapaLaberinto,
	const TArray<TArray<int32>>& NuevoMapaPuertas,
	const TArray<TArray<int32>>& NuevoMapaObstaculos)
{
	MapaLaberinto = NuevoMapaLaberinto;
	MapaPuertas = NuevoMapaPuertas;
	MapaObstaculos = NuevoMapaObstaculos;
}
void ALaberinto::SetBordes()
{
	for (int x = 0; x < columnas; ++x)
	{
		for (int y = 0; y < filas; ++y)
		{
			if (x == 0 || x == columnas - 1 || y == 0 || y == filas - 1)
			{
				FVector Pos(x * Espaciado, y * Espaciado, 0.0f);
				GetWorld()->SpawnActor<ABloqueAcero>(BloqueA, Pos, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberinto::SetInterior()
{
	for (int y = 0; y < MapaLaberinto.Num(); ++y)
	{
		for (int x = 0; x < MapaLaberinto[y].Num(); ++x)
		{
			if (MapaLaberinto[y][x] == 1)
			{
				FVector Pos(x * Espaciado, y * Espaciado, 0.0f);
				GetWorld()->SpawnActor<ABloqueMadera>(BloqueM, Pos, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberinto::SetPuertas()
{
	for (int y = 0; y < MapaPuertas.Num(); ++y)
	{
		for (int x = 0; x < MapaPuertas[y].Num(); ++x)
		{
			if (MapaPuertas[y][x] == 7)
			{
				FVector Pos(x * Espaciado, y * Espaciado, 0.0f);
				GetWorld()->SpawnActor<APuerta>(Puertas, Pos, FRotator::ZeroRotator);
			}
		}
	}
}

void ALaberinto::SetObstaculos()
{
	for (int y = 0; y < MapaObstaculos.Num(); ++y)
	{
		for (int x = 0; x < MapaObstaculos[y].Num(); ++x)
		{
			if (MapaObstaculos[y][x] == 8)
			{
				FVector Pos(x * Espaciado, y * Espaciado, 0.0f);
				GetWorld()->SpawnActor<AObtaculos>(Obstaculos, Pos, FRotator::ZeroRotator);
			}
		}
	}
}

