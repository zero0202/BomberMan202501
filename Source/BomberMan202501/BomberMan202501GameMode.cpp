// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan202501GameMode.h"
#include "BomberMan202501Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "FabricaBloques.h"
#include "FabricaBloquesNormales.h"
#include "BloqueAcero.h"
#include "BloqueLadrillo.h"

ABomberMan202501GameMode::ABomberMan202501GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
