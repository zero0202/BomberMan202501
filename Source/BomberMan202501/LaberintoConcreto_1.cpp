// Fill out your copyright notice in the Description page of Project Settings.

#include "LaberintoConcreto_1.h"
#include "Laberinto.h"
#include "BloqueAcero.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "BloqueConcreto.h"
#include "BloqueArena.h"
#include "BloqueElectrico.h"
#include "BloqueHielo.h"
#include "BloqueHongo.h"
#include "BloqueLava.h"
#include "BloquePegajoso.h"
#include "Puerta.h"
#include "Obtaculos.h"

// Sets default values
ALaberintoConcreto_1::ALaberintoConcreto_1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALaberintoConcreto_1::BeginPlay()
{
	Super::BeginPlay();
	// GenerarMapaPrueba();
}

// Called every frame
void ALaberintoConcreto_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALaberintoConcreto_1::GenerarMapaPrueba()
{

}

void ALaberintoConcreto_1::Reset()
{
	if (Laberinto)
	{
		Laberinto->Destroy();
		Laberinto = nullptr;
	}

	Laberinto = GetWorld()->SpawnActor<ALaberinto>(ALaberinto::StaticClass());
	//Laberinto->InicializarMapas(MapaBloques, MapaPuertas, MapaObstaculos);
	//Laberinto->SetBuilder(this);
}

void ALaberintoConcreto_1::BuildBordes()
{
	for (int x = 0; x < columnas; ++x)
	{
		for (int y = 0; y < filas; ++y)
		{
			if (x == 0 || x == columnas - 1 || y == 0 || y == filas - 1)
			{
				FVector Pos(x * Espaciado, y * Espaciado, 0.0f);
				GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), Pos, FRotator::ZeroRotator);
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Borde creado"));
			}
		}
	}
}

void ALaberintoConcreto_1::BuildInterior()
{
	for (int y = 0; y < MapaLaberinto.Num(); ++y)
	{
		for (int x = 0; x < MapaLaberinto[y].Num(); ++x)
		{
			if (MapaLaberinto[y][x] == 1)
			{
				FVector Pos(x * Espaciado, y * Espaciado, 0.0f);
				GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), Pos, FRotator::ZeroRotator);
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Interior creado"));
			}
		}
	}
}

void ALaberintoConcreto_1::BuildPuertas()
{
	for (int y = 0; y < MapaPuertas.Num(); ++y)
	{
		for (int x = 0; x < MapaPuertas[y].Num(); ++x)
		{
			if (MapaPuertas[y][x] == 7)
			{
				FVector Pos(x * Espaciado, y * Espaciado, 0.0f);
				GetWorld()->SpawnActor<APuerta>(APuerta::StaticClass(), Pos, FRotator::ZeroRotator);
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("puertas creado"));
			}
		}
	}
}

void ALaberintoConcreto_1::BuildObstaculos()
{
	for (int y = 0; y < MapaObstaculos.Num(); ++y)
	{
		for (int x = 0; x < MapaObstaculos[y].Num(); ++x)
		{
			if (MapaObstaculos[y][x] == 8)
			{
				FVector Pos(x * Espaciado, y * Espaciado, 0.0f);
				GetWorld()->SpawnActor<AObtaculos>(AObtaculos::StaticClass(), Pos, FRotator::ZeroRotator);
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Obstaculos creado"));
			}
		}
	}
}

ALaberinto* ALaberintoConcreto_1::ObtenerLaberinto()
{
	return Laberinto;
}




