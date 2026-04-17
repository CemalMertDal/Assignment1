#include "BaseGameAgent.h"

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

void ABaseGameAgent::ChangeWeaponType() {}
void ABaseGameAgent::GetWeaponSpawnTransform() {}
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