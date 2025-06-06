// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloquePegajoso.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN202501_API ABloquePegajoso : public ABloque
{
	GENERATED_BODY()
public:
	ABloquePegajoso();
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	// Funci�n para detectar colisi�n con el personaje
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Temporizador para liberar al personaje despu�s de 3 segundos
	FTimerHandle TimerHandle;

	// Funci�n para liberar al personaje del bloque pegajoso
	void LiberarPersonaje();
};
