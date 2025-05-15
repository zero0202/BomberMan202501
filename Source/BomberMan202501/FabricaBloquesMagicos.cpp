// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloquesMagicos.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueElectrico.h"
#include "BloqueHongo.h"
#include "BloquePegajoso.h"
// Sets default values
AFabricaBloquesMagicos::AFabricaBloquesMagicos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaBloquesMagicos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaBloquesMagicos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABloque* AFabricaBloquesMagicos::CrearBloquesCuadrados()
{
	
	int Tipo = FMath::RandRange(0, 3);
	TSubclassOf<ABloque> BloqueAInstanciar = nullptr;
	switch (Tipo)
	{
	case 0: BloqueAInstanciar = ABloquePegajoso::StaticClass(); break;
	case 1: BloqueAInstanciar = ABloqueLadrillo::StaticClass(); break;
	case 2: BloqueAInstanciar = ABloqueElectrico::StaticClass(); break;
	case 3: BloqueAInstanciar = ABloqueHongo::StaticClass(); break;
	}
	return GetWorld()->SpawnActor<ABloque>(BloqueAInstanciar, GetActorLocation(), FRotator::ZeroRotator);
}

ABloque* AFabricaBloquesMagicos::CrearBloquesRedondos()
{
	return GetWorld()->SpawnActor<ABloque>(ABloqueConcreto::StaticClass(), GetActorLocation(), FRotator::ZeroRotator);
}

