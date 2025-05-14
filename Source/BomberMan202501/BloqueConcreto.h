// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueConcreto.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN202501_API ABloqueConcreto : public ABloque
{
	GENERATED_BODY()
public:

	ABloqueConcreto();

protected:

	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:

	virtual void Tick(float DeltaTime) override;
public:
	bool bPuedeGirar;
	float RotationSpeed;
};
