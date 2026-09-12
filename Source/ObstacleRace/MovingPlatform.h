// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLERACE_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Direction of moving platform
	UPROPERTY(EditAnywhere)
	FVector MovingDirection = FVector (0, 0, 0);

	// boolean for moving control
	UPROPERTY(EditAnywhere)
	bool IsMoving;


	UPROPERTY(EditAnywhere)
	bool IsRotating;

	UPROPERTY(EditAnywhere)
	FRotator RotationDirection = FRotator(0, 0, 0);

	UPROPERTY(EditAnywhere)
	float MovingSpeed;

	UPROPERTY(EditAnywhere)
	float RotationSpeed;

	void MovingActor(float DeltaTime);

	FVector ActorLocation;

};
