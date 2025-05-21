// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "Puerta.h"
#include "Obtaculos.h"
#include "LaberintoConcreto_1.generated.h"

UCLASS()
class BOMBERMAN202501_API ALaberintoConcreto_1 : public AActor, public IILaberintoBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberintoConcreto_1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
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

	void InicializarMapas(
		const TArray<TArray<int32>>& NuevoMapaLaberinto,
		const TArray<TArray<int32>>& NuevoMapaPuertas,
		const TArray<TArray<int32>>& NuevoMapaObstaculos);
public:
	float Espaciado = 100.0f;
	int columnas = 10;
	int filas = 10;


	UPROPERTY()
	ALaberinto* Laberinto;

	TArray<TArray<int32>> MapaLaberinto;
	TArray<TArray<int32>> MapaBloques = {
		{0, 0, 1, 0, 0},
		{0, 1, 1, 1, 0},
		{1, 1, 0, 1, 1},
		{0, 1, 1, 1, 0},
		{0, 0, 1, 0, 0}
	};
	TArray<TArray<int32>> MapaPuertas = {
		{0, 0, 7, 0, 0},
		{0, 0, 0, 0, 0},
		{7, 0, 0, 0, 7},
		{0, 0, 0, 0, 0},
		{0, 0, 7, 0, 0}
	};
	TArray<TArray<int32>> MapaObstaculos{
		{0, 8, 0, 8, 0},
		{8, 0, 0, 0, 8},
		{0, 0, 8, 0, 0},
		{8, 0, 0, 0, 8},
		{0, 8, 0, 8, 0}
	};


public:

	virtual void Reset() override;
	virtual void BuildBordes() override;
	virtual void BuildInterior() override;
	virtual void BuildPuertas() override;
	virtual void BuildObstaculos() override;
	virtual  ALaberinto* ObtenerLaberinto() override;

};
