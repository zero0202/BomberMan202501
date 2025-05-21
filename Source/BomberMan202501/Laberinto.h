// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberinto.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "Puerta.h"
#include "Obtaculos.h"
#include "Laberinto.generated.h"

UCLASS()
class BOMBERMAN202501_API ALaberinto : public AActor, public IILaberinto
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberinto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	public:
	// Clases para instanciar objetos
	UPROPERTY(EditAnywhere)
	TSubclassOf<ABloqueAcero> BloqueA;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABloqueMadera> BloqueM;

	UPROPERTY(EditAnywhere)
	TSubclassOf<APuerta> Puertas;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AObtaculos> Obstaculos;
/*
	TArray<ABloque*> BLoque;
	TArray<APuerta*> Puertas;
	TArray<AObtaculos*> Obstaculos;
*/

	TArray<TArray<int32>> MapaLaberinto;
	TArray<TArray<int32>> MapaPuertas;
	TArray<TArray<int32>> MapaObstaculos; 

	void InicializarMapas(
		const TArray<TArray<int32>>& NuevoMapaLaberinto,
		const TArray<TArray<int32>>& NuevoMapaPuertas,
		const TArray<TArray<int32>>& NuevoMapaObstaculos);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	float Espaciado = 100.0f;
	int columnas = 10;
	int filas = 10;

public:

	virtual void SetBordes();
	virtual void SetInterior();
	virtual void SetPuertas();
	virtual void SetObstaculos();

};
