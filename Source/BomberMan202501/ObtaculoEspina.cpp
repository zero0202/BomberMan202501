// Fill out your copyright notice in the Description page of Project Settings.


#include "ObtaculoEspina.h"

AObtaculoEspina::AObtaculoEspina()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshBloqueArena(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMeshBloqueArena.Succeeded())
	{
		MeshObstaculo->SetStaticMesh(ObjetoMeshBloqueArena.Object);

		MeshObstaculo->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		MeshObstaculo->SetWorldScale3D(FVector(1.5f, 1.9f, 1.2f));
	}
	//para asignar textura
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueAceroMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/FosforoRosa.FosforoRosa'"));
	if (ObjetoBloqueAceroMaterial.Succeeded())
	{
		MeshObstaculo->SetMaterial(0, ObjetoBloqueAceroMaterial.Object);
	}

}

void AObtaculoEspina::BeginPlay()
{
	Super::BeginPlay();

}

void AObtaculoEspina::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
