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
	
	Laberinto = GetWorld()->SpawnActor<ALaberinto>(ALaberinto::StaticClass());
	
}

// Called every frame
void ALaberintoConcreto_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALaberintoConcreto_1::BuildBordes()
{
	Laberinto->SetBordes(1,2);
}

void ALaberintoConcreto_1::BuildInterior()
{
	Laberinto->SetInterior(1);
}

void ALaberintoConcreto_1::BuildPuertas()
{
	Laberinto->SetPuertas(1);  
}

void ALaberintoConcreto_1::BuildObstaculos()
{
	Laberinto->SetObstaculos(1);
}

ALaberinto* ALaberintoConcreto_1::ObtenerLaberinto()
{
	return Laberinto;
}




