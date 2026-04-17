#include "BaseProjectile.h"

void ABaseProjectile::InitialiseProjectile() {}
void ABaseProjectile::DealDamageTo() {}
void ABaseProjectile::OnHit() {}
void ABaseProjectile::GetInstigatorCollisionChannel() {}
void ABaseProjectile::CheckForGroundUnitTarget() {}
bool ABaseProjectile::ShouldCheckForGroundTarget() { return false; }
void ABaseProjectile::AdjustToTarget() {}
bool ABaseProjectile::IsEnemyProjectile() { return false; }
void ABaseProjectile::AdjustToDesiredZ() {}