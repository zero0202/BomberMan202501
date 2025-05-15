// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "IFabricaBloques.h"
#include "GameFramework/Actor.h"
#include "FabricaBloquesMagicos.generated.h"

UCLASS()
class BOMBERMAN202501_API AFabricaBloquesMagicos : public AActor, public IIFabricaBloques
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaBloquesMagicos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	ABloque* CrearBloquesCuadrados() override;
	ABloque* CrearBloquesRedondos() override;
};
