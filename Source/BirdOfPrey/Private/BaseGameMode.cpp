#include "BaseGameMode.h"

float ABaseGameMode::GetWorldScrollVelocity() { return 0; }
AActor* ABaseGameMode::GetWorldCameraActor() { return 0; }
void ABaseGameMode::OnPlayerDied() {}
void ABaseGameMode::OnEnemyDied() {}
void ABaseGameMode::StartGame() {}
void ABaseGameMode::EndGame() {}
void ABaseGameMode::SpawnEnemyFrom() {}
void ABaseGameMode::ResetGame() {}
void ABaseGameMode::RespawnPlayer() {}
void ABaseGameMode::TrySpawnPowerUp() {}
float ABaseGameMode::GetDistanceTravelled() { return 0; }