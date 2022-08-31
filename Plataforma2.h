// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataforma2.generated.h"

UCLASS()
class PROYECTO1_API APlataforma2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlataforma2();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
