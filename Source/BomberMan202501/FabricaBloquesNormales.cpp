// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloquesNormales.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "BloqueArena.h"
#include "BloqueLava.h"
#include "BloqueHielo.h"
#include "Kismet/KismetMathLibrary.h"
// Sets default values
AFabricaBloquesNormales::AFabricaBloquesNormales()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaBloquesNormales::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaBloquesNormales::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABloque* AFabricaBloquesNormales::CrearBloquesCuadrados()
{
	int Tipo = FMath::RandRange(0, 3);

	TSubclassOf<ABloque> BloqueAInstanciar = nullptr;

	switch (Tipo)
	{
	case 0: BloqueAInstanciar = ABloqueMadera::StaticClass(); break;
	case 1: BloqueAInstanciar = ABloqueAcero::StaticClass(); break;
	case 2: BloqueAInstanciar = ABloqueArena::StaticClass(); break;
	case 3: BloqueAInstanciar = ABloqueLava::StaticClass(); break;
	}

	return GetWorld()->SpawnActor<ABloque>(BloqueAInstanciar, GetActorLocation(), FRotator::ZeroRotator);

}
ABloque* AFabricaBloquesNormales::CrearBloquesRedondos()
{
	return GetWorld()->SpawnActor<ABloque>(ABloqueHielo::StaticClass(), GetActorLocation(), FRotator::ZeroRotator);
}
