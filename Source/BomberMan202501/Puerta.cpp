// Fill out your copyright notice in the Description page of Project Settings.


#include "Puerta.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"

// Sets default values
APuerta::APuerta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Para la creacion de la malla 
	MeshPuerta = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPuerta"));
	MeshPuerta->SetupAttachment(RootComponent);
	RootComponent = MeshPuerta;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshBloqueArena(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMeshBloqueArena.Succeeded())
	{
		MeshPuerta->SetStaticMesh(ObjetoMeshBloqueArena.Object);

		MeshPuerta->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		MeshPuerta->SetWorldScale3D(FVector(1.5f, 1.9f, 1.2f));
	}
	//para asignar textura
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueAceroMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/FosforoRosa.FosforoRosa'"));
	if (ObjetoBloqueAceroMaterial.Succeeded())
	{
		MeshPuerta->SetMaterial(0, ObjetoBloqueAceroMaterial.Object);
	}


}

// Called when the game starts or when spawned
void APuerta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APuerta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

