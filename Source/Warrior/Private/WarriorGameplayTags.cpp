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
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Roll,"InputTag.Roll");
	
	UE_DEFINE_GAMEPLAY_TAG(InputTag_MustBeHeld,"InputTag.MustBeHeld");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_MustBeHeld_Block,"InputTag.MustBeHeld.Block");

	UE_DEFINE_GAMEPLAY_TAG(InputTag_Toggleable,"InputTag.Toggleable");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Toggleable_TargetLock,"InputTag.Toggleable.TargetLock");

	/** Player tags **/
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_Axe,"Player.Ability.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Unequip_Axe,"Player.Ability.Unequip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Light_Axe,"Player.Ability.Attack.Light.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Heavy_Axe,"Player.Ability.Attack.Heavy.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_HitPause,"Player.Ability.HitPause");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Roll,"Player.Ability.Roll");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Block,"Player.Ability.Block");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_TargetLock,"Player.Ability.TargetLock");

	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Axe,"Player.Weapon.Axe");

	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Equip_Axe,"Player.Event.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Unequip_Axe,"Player.Event.Unequip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_HitPause,"Player.Event.HitPause");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_SuccessfulBlock,"Player.Event.SuccessfulBlock");

	UE_DEFINE_GAMEPLAY_TAG(Player_Status_JumpToFinisher,"Player.Status.JumpToFinisher");
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Rolling,"Player.Status.Rolling");
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Blocking,"Player.Status.Blocking");
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_TargetLock,"Player.Status.TargetLock");

	UE_DEFINE_GAMEPLAY_TAG(Player_SetByCaller_AttackType_Light,"Player.SetByCaller.AttackType.Light");
	UE_DEFINE_GAMEPLAY_TAG(Player_SetByCaller_AttackType_Heavy,"Player.SetByCaller.AttackType.Heavy");

	/** Enemy tags **/
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Melee,"Enemy.Ability.Melee");
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Ability_Ranged,"Enemy.Ability.Ranged");

	UE_DEFINE_GAMEPLAY_TAG(Enemy_Weapon,"Enemy.Weapon");

	UE_DEFINE_GAMEPLAY_TAG(Enemy_Status_Strafing,"Enemy.Status.Strafing");
	UE_DEFINE_GAMEPLAY_TAG(Enemy_Status_UnderAttack,"Enemy.Status.UnderAttack");

	/** Shared tags **/
	UE_DEFINE_GAMEPLAY_TAG(Shared_Ability_HitReact,"Shared.Ability.HitReact");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Ability_Death,"Shared.Ability.Death");

	UE_DEFINE_GAMEPLAY_TAG(Shared_Event_MeleeHit,"Shared.Event.MeleeHit");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Event_HitReact,"Shared.Event.HitReact");

	UE_DEFINE_GAMEPLAY_TAG(Shared_SetByCaller_BaseDamage,"Shared.SetByCaller.BaseDamage");

	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_Dead,"Shared.Status.Dead");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_HitReact_Front,"Shared.Status.HitReact.Front");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_HitReact_Left,"Shared.Status.HitReact.Left");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_HitReact_Right,"Shared.Status.HitReact.Right");
	UE_DEFINE_GAMEPLAY_TAG(Shared_Status_HitReact_Back,"Shared.Status.HitReact.Back");
}