// Fill out your copyright notice in the Description page of Project Settings.

#include "Laberinto.h"
#include "Engine/Engine.h"
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

void ALaberinto::SetBordes()
{


	Builder->BuildBordes();

}

void ALaberinto::SetInterior()
{
	if (Builder)
	{
		Builder->BuildInterior();
	}
	else if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Builder no asignado: no se pueden construir torretas."));
	}
}

void ALaberinto::SetPuertas()
{
	if (Builder)
	{
		Builder->BuildPuertas();
	}
	else if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Builder no asignado: no se pueden construir torretas."));
	}
}

void ALaberinto::SetObstaculos()
{
	if (Builder)
	{
		Builder->BuildObstaculos();
	}
	else if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Builder no asignado: no se pueden construir minas."));
	}
}

