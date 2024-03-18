// Vince Petrelli All Rights Reserved


#include "AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"
#include "Characters/WarriorHeroCharacter.h"
#include "Controllers/WarriorHeroController.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"

AWarriorHeroCharacter* UWarriorHeroGameplayAbility::GetHeroCharacterFromActorInfo()
{   
	if (!CachedWarriorHeroCharacter.IsValid())
	{
		CachedWarriorHeroCharacter = Cast<AWarriorHeroCharacter>(CurrentActorInfo->AvatarActor);
	}
   
    return CachedWarriorHeroCharacter.IsValid()? CachedWarriorHeroCharacter.Get() : nullptr;
}

AWarriorHeroController* UWarriorHeroGameplayAbility::GetHeroControllerFromActorInfo()
{	
	if (!CachedWarriorHeroController.IsValid())
	{
		CachedWarriorHeroController = Cast<AWarriorHeroController>(CurrentActorInfo->PlayerController);
	}

	return CachedWarriorHeroController.IsValid()? CachedWarriorHeroController.Get() : nullptr;
}

UHeroCombatComponent* UWarriorHeroGameplayAbility::GetHeroCombatComponentFromActorInfo()
{
	return GetHeroCharacterFromActorInfo()->GetHeroCombatComponent();
}

void UWarriorHeroGameplayAbility::GrantHeroWeaponAbilities(const TArray<FWarriorHeroAbilitySet>& InDefaultWeaponAbilities, TArray<FGameplayAbilitySpecHandle>& OutGrantedAbilitySpecHandles)
{
	if (InDefaultWeaponAbilities.IsEmpty())
	{
		return;
	}

	for (const FWarriorHeroAbilitySet& AbilitySet : InDefaultWeaponAbilities)
	{
		if(!AbilitySet.IsValid()) continue;

		FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);
		AbilitySpec.SourceObject = GetWarriorAbilitySystemComponentFromActorInfo()->GetAvatarActor();
		AbilitySpec.Level = GetAbilityLevel();
		AbilitySpec.DynamicAbilityTags.AddTag(AbilitySet.InputTag);
		
		FGameplayAbilitySpecHandle SpecHandle = GetWarriorAbilitySystemComponentFromActorInfo()->GiveAbility(AbilitySpec);

		OutGrantedAbilitySpecHandles.AddUnique(SpecHandle);
	}
}

void UWarriorHeroGameplayAbility::ClearGrantedHeroWeaponAbilities(const TArray<FGameplayAbilitySpecHandle>& InSpecHandlesToClear)
{
	if (InSpecHandlesToClear.IsEmpty())
	{
		return;
	}

	for (const FGameplayAbilitySpecHandle& SpecHandle : InSpecHandlesToClear)
	{
		if(!SpecHandle.IsValid()) continue;

		GetWarriorAbilitySystemComponentFromActorInfo()->ClearAbility(SpecHandle);
	}
}
