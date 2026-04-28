#include "BaseGameAgent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "BaseWeapon.h"
#include "GameFramework/Controller.h"

ABaseGameAgent::ABaseGameAgent()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABaseGameAgent::BeginPlay()
{
	Super::BeginPlay();
}

void ABaseGameAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ABaseGameAgent::ChangeWeaponType(TSubclassOf<ABaseWeapon> NewWeaponType) {}
void ABaseGameAgent::GetWeaponSpawnTransform() {return FTransform();}
void ABaseGameAgent::SpawnDefaultWeapon() {}
void ABaseGameAgent::StartFire() {}
void ABaseGameAgent::StopFire() {}
void ABaseGameAgent::ApplyAgentDamage() {}
bool ABaseGameAgent::IsAlive() { return false; }
void ABaseGameAgent::Died() {}
void ABaseGameAgent::PlayHitEffects() {}
void ABaseGameAgent::CleanUp() {}
void ABaseGameAgent::ApplyAgentInfo() {}
void ABaseGameAgent::AimAt() {}
void ABaseGameAgent::PlayDeathEffects() {}
void ABaseGameAgent::CheckForOutOfBounds() {}

float ABaseGameAgent::TakeDamage(float Damage) { return 0.0f; }