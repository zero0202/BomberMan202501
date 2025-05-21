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

	//statc  
	Director = GetWorld()->SpawnActor<ADirectorLaberinto>();
	ALaberintoConcreto_1* Builder = GetWorld()->SpawnActor<ALaberintoConcreto_1>();

	if (Director && Builder)
	{
		Director->SeleccionarLaberinto(Builder);
		Director->ConstruirLaberinto();

		Laberinto_1 = Director->ObtenerLaberinto();  
	}

}

void ABomberMan202501GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

   
}



