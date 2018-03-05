// Fill out your copyright notice in the Description page of Project Settings.

#include "MainCharacterController.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"


// Sets default values
AMainCharacterController::AMainCharacterController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CreateDefaultSubobject<UFloatingPawnMovement>("MainCharacterMovement");

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("CubeMesh");
	//Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
}

// Called when the game starts or when spawned
void AMainCharacterController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacterController::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacterController::MoveRight);
}

void AMainCharacterController::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector(), Value);
}

void AMainCharacterController::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector(), Value);
}
