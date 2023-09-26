// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ball.h"
#include "PhysicsBallManager.generated.h"

UCLASS()
class YEAR3PHYSICSICA1_API APhysicsBallManager : public AActor
{
	GENERATED_BODY()
	
private:
	std::vector<ABall> m_balls;
public:	
	// Sets default values for this actor's properties
	APhysicsBallManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
