#include "PlayerShip.h"

void APlayerShip::GetShipConstantVelocity(FVector& Direction, float& Speed) {}
void APlayerShip::ClampToCameraBounds() {}
float APlayerShip::GetShipAxisAdjustment() { return 0.0f; }
void APlayerShip::CalcOutOfBoundsAdjustment() {}
void APlayerShip::GetPlayerAgentInfo() {}
bool APlayerShip::ShouldSpawnAIController() { return false; }
void APlayerShip::UpdateHoverPitch() {}
bool APlayerShip::HasDiedRecently() const { return false; }
float APlayerShip::TakeDamage(float Damage) { return 0.0f; }