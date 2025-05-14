// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueArena.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN202501_API ABloqueArena : public ABloque
{
	GENERATED_BODY()
public:

	ABloqueArena();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

protected:

	float velocidadA;
	float Amplitud;
	float Direccion;
	FVector PosicionInicial;

	// Estados de hundimiento y recuperaci�n
	bool PuedeMoverseA;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
