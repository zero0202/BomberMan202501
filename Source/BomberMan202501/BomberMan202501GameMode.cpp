// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan202501GameMode.h"
#include "BomberMan202501Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
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
#include "DirectorLaberinto.h"
#include "LaberintoConcreto_1.h"


ABomberMan202501GameMode::ABomberMan202501GameMode()
{

    //PrimaryActorTick.bCanEverTick = true;
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberMan202501GameMode::BeginPlay()
{
	Super::BeginPlay();

    
  
}

void ABomberMan202501GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    ADirectorLaberinto* Director = GetWorld()->SpawnActor<ADirectorLaberinto>(ADirectorLaberinto::StaticClass());
    if (!Director)
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to spawn DirectorLaberinto"));
        return;
    }
    ALaberintoConcreto_1* ConcreteBuilder = GetWorld()->SpawnActor<ALaberintoConcreto_1>(ALaberintoConcreto_1::StaticClass());
    if (!ConcreteBuilder)
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to spawn LaberintoConcreto_1"));
        return;
    }
    Director->SeleccionarLaberinto(ConcreteBuilder);
    Director->ConstruirLaberinto();
    Laberinto_1 = Director->ObtenerLaberinto();
    if (!Laberinto_1)
    {
        UE_LOG(LogTemp, Warning, TEXT("No maze constructed"));
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("Maze constructed successfully"));
    }
}



