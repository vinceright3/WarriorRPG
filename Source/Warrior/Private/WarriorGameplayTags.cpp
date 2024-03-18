// Vince Petrelli All Rights Reserved


#include "WarriorGameplayTags.h"

namespace WarriorGameplayTags
{
	/** Input Tags **/
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Move,"InputTag.Move");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Look,"InputTag.Look");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_EquipAxe,"InputTag.EquipAxe");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_UnequipAxe,"InputTag.UnequipAxe");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_LightAttack_Axe,"InputTag.LightAttack.Axe");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_HeavyAttack_Axe,"InputTag.HeavyAttack.Axe");

	/** Player tags **/
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_Axe,"Player.Ability.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Unequip_Axe,"Player.Ability.Unequip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Light_Axe,"Player.Ability.Attack.Light.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Heavy_Axe,"Player.Ability.Attack.Heavy.Axe");

	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Axe,"Player.Weapon.Axe");

	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Equip_Axe,"Player.Event.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Unequip_Axe,"Player.Event.Unequip.Axe");
}