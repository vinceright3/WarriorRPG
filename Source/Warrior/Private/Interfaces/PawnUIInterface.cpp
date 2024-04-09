// Vince Petrelli All Rights Reserved


#include "Interfaces/PawnUIInterface.h"

// Add default functionality here for any IPawnUIInterface functions that are not pure virtual.

UHeroUIComponent* IPawnUIInterface::GetHeroUIComponent() const
{
	return nullptr;
}

UEnemyUIComponent* IPawnUIInterface::GetEnemyUIComponent() const
{
	return nullptr;
}
