// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoConcreto_1.h"
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
#include "Laberinto.h"

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
	
}

// Called every frame
void ALaberintoConcreto_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALaberintoConcreto_1::InicializarMapas()
{
	MapaBloques = {
		{0, 0, 1, 0, 0},
		{0, 1, 1, 1, 0},
		{1, 1, 0, 1, 1},
		{0, 1, 1, 1, 0},
		{0, 0, 1, 0, 0}
	};

	MapaPuertas = {
		{0, 0, 7, 0, 0},
		{0, 0, 0, 0, 0},
		{7, 0, 0, 0, 7},
		{0, 0, 0, 0, 0},
		{0, 0, 7, 0, 0}
	};

	MapaObstaculos = {
		{0, 8, 0, 8, 0},
		{8, 0, 0, 0, 8},
		{0, 0, 8, 0, 0},
		{8, 0, 0, 0, 8},
		{0, 8, 0, 8, 0}
	};
}

void ALaberintoConcreto_1::Reset()
{
	if (Laberinto)
	{
		Laberinto->Destroy();
		Laberinto = nullptr;
	}

	Laberinto = GetWorld()->SpawnActor<ALaberinto>(ALaberinto::StaticClass());
	Laberinto->InicializarMapas(MapaBloques, MapaPuertas, MapaObstaculos);
}

void ALaberintoConcreto_1::BuildBordes()
{
	Laberinto->SetBordes();
}

void ALaberintoConcreto_1::BuildInterior()
{
	Laberinto->SetInterior();
}

void ALaberintoConcreto_1::BuildPuertas()
{
	Laberinto->SetPuertas();  
}

void ALaberintoConcreto_1::BuildObstaculos()
{
	Laberinto->SetObstaculos();
}

ALaberinto* ALaberintoConcreto_1::ObtenerLaberinto()
{
	return Laberinto;
}




