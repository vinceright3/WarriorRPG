// Vince Petrelli All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"
#include "WarriorGameInstance.generated.h"

USTRUCT(BlueprintType)
struct FWarriorGameLevelSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,meta = (Categories = "GameData.Level"))
	FGameplayTag LevelTag;

	UPROPERTY(EditDefaultsOnly)
	TSoftObjectPtr<UWorld> Level;

	bool IsValid() const
	{
		return LevelTag.IsValid() && !Level.IsNull();
	}


};

/**
 * 
 */
UCLASS()
class WARRIOR_API UWarriorGameInstance : public UGameInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	TArray<FWarriorGameLevelSet> GameLevelSets;

public:
	UFUNCTION(BlueprintCallable, meta =(GameplayTagFilter = "GameData.Level"))
	TSoftObjectPtr<UWorld> GetGameLevelByTag(FGameplayTag InTag);
	
};
