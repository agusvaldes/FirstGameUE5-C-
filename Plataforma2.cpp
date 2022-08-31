// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma2.h"

// Sets default values
APlataforma2::APlataforma2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called every frame
void APlataforma2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const float TURN = 25.0f * DeltaTime;
	FRotator cr = GetActorRotation();
	cr.Yaw += TURN;

	SetActorRotation(cr);
}

