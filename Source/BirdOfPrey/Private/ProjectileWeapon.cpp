#include "ProjectileWeapon.h"

FTransform AProjectileWeapon::GetProjectileSpawnTransform() { return FTransform(); }
bool AProjectileWeapon::ReadyToFire() { return false; }
bool AProjectileWeapon::IsFiring() { return false; }