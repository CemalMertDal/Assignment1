#include "BaseProjectile.h"

void ABaseProjectile::InitialiseProjectile() {}
void ABaseProjectile::DealDamageTo() {}
void ABaseProjectile::OnHit() {}
TEnumAsByte<ECollisionChannel> ABaseProjectile::GetInstigatorCollisionChannel() { return ECC_WorldStatic; }
void ABaseProjectile::CheckForGroundUnitTarget() {}
bool ABaseProjectile::ShouldCheckForGroundTarget() { return false; }
void ABaseProjectile::AdjustToTarget() {}
bool ABaseProjectile::IsEnemyProjectile() { return false; }
void ABaseProjectile::AdjustToDesiredZ() {}