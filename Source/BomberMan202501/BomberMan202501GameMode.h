// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "IFabricaBloques.h"
#include "GameFramework/GameModeBase.h"
#include "BomberMan202501GameMode.generated.h"

UCLASS(minimalapi)
class ABomberMan202501GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan202501GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	//Para bloque
	UPROPERTY()
	TArray<ABloque*> BloquesA; // Guarda todos los bloques generados
	TArray<TArray<int32>> MapaLaberinto;
	TArray<FVector> PuntosPatrullaLibres;
	void GenerarMapaDesdeCodigo();
	void GenerarLaberinto();

	UPROPERTY()
	TScriptInterface<IIFabricaBloques> FabricaBloques;

};



