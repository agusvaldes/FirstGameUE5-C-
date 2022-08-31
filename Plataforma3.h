// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataforma3.generated.h"

UCLASS()
class PROYECTO1_API APlataforma3 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlataforma3();

	UPROPERTY(EditAnywhere, Category = Movement)
	float Speed;

	UPROPERTY(EditAnywhere, Category = Movement)
	float Amplitude;

	UPROPERTY(EditAnywhere, Category = Movement)
	float Frequency;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
