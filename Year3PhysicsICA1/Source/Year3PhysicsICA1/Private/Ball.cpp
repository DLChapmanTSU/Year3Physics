// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include "kismet/GameplayStatics.h"
#include "EngineUtils.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UStaticMeshComponent* m_meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere Renderer"));
	m_meshComp->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> baseMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Props/MaterialSphere.MaterialSphere'"));

	if (baseMeshAsset.Succeeded())
	{
		m_meshComp->SetStaticMesh(baseMeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

