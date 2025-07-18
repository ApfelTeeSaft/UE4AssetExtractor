﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BGA_ProximityMine

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass B_BGA_ProximityMine.B_BGA_ProximityMine_C
// 0x020C (0x0694 - 0x0488)
class AB_BGA_ProximityMine_C final : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0488(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Collision_HalfSphere__1_Unit;                      // 0x048C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                   ActivateRingConstant_Vertical;                     // 0x0490(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                   ExplodeDamageRingConstant_Vertical;                // 0x0494(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                   ActivateRingConstant_Flat;                         // 0x0498(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                   ExplodeDamageRingConstant_flat;                    // 0x049C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                   Sm_ProximityMine_RadarDisc_01;                     // 0x04A0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*               P_ProximityMine_Beacon_01;                         // 0x04A4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*               P_ExplosionEffect;                                 // 0x04A8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*               P_ProximityMine_AoE_Reticle_01;                    // 0x04AC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*               P_Land_Effect;                                     // 0x04B0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                 SK_ProximityMine;                                  // 0x04B4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                   ProxyMine_Mesh;                                    // 0x04B8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                       Root_Shpere_Collision;                             // 0x04BC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UProjectileMovementComponent*           ProjectileMovement1;                               // 0x04C0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                         ScaleDownAll_ScaleDown_C7142F4C41588327B2083F80EC920637; // 0x04C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETimelineDirection                            ScaleDownAll__Direction_C7142F4C41588327B2083F80EC920637; // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C9[0x3];                                      // 0x04C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ScaleDownAll;                                      // 0x04CC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Scale_Ring_In_LERP_97089CCA4B30B5D55C3444B11A88826F; // 0x04D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETimelineDirection                            Scale_Ring_In__Direction_97089CCA4B30B5D55C3444B11A88826F; // 0x04D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D5[0x3];                                      // 0x04D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Scale_Ring_In;                                     // 0x04D8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Scale_Rings_Up_LERP_1C2C39AC441B3BFE9AA68EBE28BAFB7E; // 0x04DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETimelineDirection                            Scale_Rings_Up__Direction_1C2C39AC441B3BFE9AA68EBE28BAFB7E; // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E1[0x3];                                      // 0x04E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Scale_Rings_Up;                                    // 0x04E4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Timeline_0_NewTrack_0_A78484B549A162C03F2B799BECBA42F4; // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETimelineDirection                            Timeline_0__Direction_A78484B549A162C03F2B799BECBA42F4; // 0x04EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ED[0x3];                                      // 0x04ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x04F0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                             Land_Sound;                                        // 0x04F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPlaced;                                          // 0x04F8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_4F9[0x3];                                      // 0x04F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Impact_Loc;                                        // 0x04FC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                ExplosionRadiusGuide;                              // 0x0508(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         DistanceGuideDuration;                             // 0x0514(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           EventExplosion;                                    // 0x0518(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TargetRules;                                       // 0x0520(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                HitNormal;                                         // 0x0538(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsValidEnemy;                                      // 0x0544(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_545[0x3];                                      // 0x0545(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 PawnActors;                                        // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                             CueExplode;                                        // 0x054C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bActivated;                                        // 0x0550(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_551[0x3];                                      // 0x0551(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Mine_Mat;                                          // 0x0554(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           DefaultExplosionTag;                               // 0x0558(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           Upgrade1ExplosionTag;                              // 0x0560(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           Upgrade2ExplosionTag;                              // 0x0568(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Activation_Radius;                                 // 0x0570(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Beacon_Can_Play_;                                  // 0x0574(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_575[0x3];                                      // 0x0575(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Beacon_Speedup_Play_Speed;                         // 0x0578(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Beacon_Speedup_Play_Speed_Chip_OffTime;            // 0x057C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                Rings_Start_Size;                                  // 0x0580(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Ring_Restart_Delay;                                // 0x058C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDead_;                                           // 0x0590(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_591[0x3];                                      // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Activation_Delay;                                  // 0x0594(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               Activate_Ring_MID;                                 // 0x0598(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Activate_Ring_Color_Inner__Friendly_;              // 0x059C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Activate_Ring_Color_Outer__Friendly_;              // 0x05AC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Beacon_Core_Color__Friendly_;                      // 0x05BC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Beacon_Core_Color__Enemy_;                         // 0x05CC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Beacon_Streak_Color__Friendly_;                    // 0x05DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Beacon_Streak_Color__Enemy_;                       // 0x05EC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Beacon_Mesh_Color__Friendly_;                      // 0x05FC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Beacon_Mesh_Color__Enemy_;                         // 0x060C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               Radar_Disc_MID;                                    // 0x061C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Radar_Disc_Lights_Color__Friendly_;                // 0x0620(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Radar_Disc_Lights_Color__Enemy_;                   // 0x0630(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Radar_Disc_Dark_Color__Friendly_;                  // 0x0640(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Radar_Disc_Dark_Color__Enemy_;                     // 0x0650(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Activate_Ring_Color_Inner__Enemy_;                 // 0x0660(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Activate_Ring_Color_Outer__Enemy_;                 // 0x0670(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         AngleToShowAdditionalHUD;                          // 0x0680(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               Activate_Ring_Vertical_MID;                        // 0x0684(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               DamageRingMID;                                     // 0x0688(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               Damage_Ring_Vertical_MID;                          // 0x068C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                        Player_Owner;                                      // 0x0690(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_B_BGA_ProximityMine(int32 EntryPoint);
	void Beacon_Loop();
	void BndEvt__S_HalfSphere_Collision_1_Unit_K2Node_ComponentBoundEvent_420_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BaseDestroyed();
	void BaseDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void SetExplosion(int32 Explosion_Level, float Activation_Radius_0, class AFortPlayerPawn* PlayerPawn);
	void GameplayCue_Abilities_Activation_Generic_proxymine(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void StartSpin();
	void DamageExplode();
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void StopSpin();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal_0, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void SetProjectile(float Init_Speed, float Gravity, float Activation_Delay_0);
	void ScaleDownAll__UpdateFunc();
	void ScaleDownAll__FinishedFunc();
	void Scale_Ring_In__UpdateFunc();
	void Scale_Ring_In__FinishedFunc();
	void Scale_Rings_Up__UpdateFunc();
	void Scale_Rings_Up__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void UserConstructionScript();
	bool IsValidTarget(class UObject* Object);
	void OnRep_IsPlaced();
	void OnRep_bActivated();
	void OnRep_IsDead_();
	void DestroyFX();
	void AttachFX();
	void VFX_SetTeamColors();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_BGA_ProximityMine_C">();
	}
	static class AB_BGA_ProximityMine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_BGA_ProximityMine_C>();
	}
};
static_assert(alignof(AB_BGA_ProximityMine_C) == 0x000004, "Wrong alignment on AB_BGA_ProximityMine_C");
static_assert(sizeof(AB_BGA_ProximityMine_C) == 0x000694, "Wrong size on AB_BGA_ProximityMine_C");
static_assert(offsetof(AB_BGA_ProximityMine_C, UberGraphFrame) == 0x000488, "Member 'AB_BGA_ProximityMine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Collision_HalfSphere__1_Unit) == 0x00048C, "Member 'AB_BGA_ProximityMine_C::Collision_HalfSphere__1_Unit' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, ActivateRingConstant_Vertical) == 0x000490, "Member 'AB_BGA_ProximityMine_C::ActivateRingConstant_Vertical' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, ExplodeDamageRingConstant_Vertical) == 0x000494, "Member 'AB_BGA_ProximityMine_C::ExplodeDamageRingConstant_Vertical' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, ActivateRingConstant_Flat) == 0x000498, "Member 'AB_BGA_ProximityMine_C::ActivateRingConstant_Flat' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, ExplodeDamageRingConstant_flat) == 0x00049C, "Member 'AB_BGA_ProximityMine_C::ExplodeDamageRingConstant_flat' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Sm_ProximityMine_RadarDisc_01) == 0x0004A0, "Member 'AB_BGA_ProximityMine_C::Sm_ProximityMine_RadarDisc_01' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, P_ProximityMine_Beacon_01) == 0x0004A4, "Member 'AB_BGA_ProximityMine_C::P_ProximityMine_Beacon_01' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, P_ExplosionEffect) == 0x0004A8, "Member 'AB_BGA_ProximityMine_C::P_ExplosionEffect' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, P_ProximityMine_AoE_Reticle_01) == 0x0004AC, "Member 'AB_BGA_ProximityMine_C::P_ProximityMine_AoE_Reticle_01' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, P_Land_Effect) == 0x0004B0, "Member 'AB_BGA_ProximityMine_C::P_Land_Effect' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, SK_ProximityMine) == 0x0004B4, "Member 'AB_BGA_ProximityMine_C::SK_ProximityMine' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, ProxyMine_Mesh) == 0x0004B8, "Member 'AB_BGA_ProximityMine_C::ProxyMine_Mesh' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Root_Shpere_Collision) == 0x0004BC, "Member 'AB_BGA_ProximityMine_C::Root_Shpere_Collision' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, ProjectileMovement1) == 0x0004C0, "Member 'AB_BGA_ProximityMine_C::ProjectileMovement1' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, ScaleDownAll_ScaleDown_C7142F4C41588327B2083F80EC920637) == 0x0004C4, "Member 'AB_BGA_ProximityMine_C::ScaleDownAll_ScaleDown_C7142F4C41588327B2083F80EC920637' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, ScaleDownAll__Direction_C7142F4C41588327B2083F80EC920637) == 0x0004C8, "Member 'AB_BGA_ProximityMine_C::ScaleDownAll__Direction_C7142F4C41588327B2083F80EC920637' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, ScaleDownAll) == 0x0004CC, "Member 'AB_BGA_ProximityMine_C::ScaleDownAll' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Scale_Ring_In_LERP_97089CCA4B30B5D55C3444B11A88826F) == 0x0004D0, "Member 'AB_BGA_ProximityMine_C::Scale_Ring_In_LERP_97089CCA4B30B5D55C3444B11A88826F' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Scale_Ring_In__Direction_97089CCA4B30B5D55C3444B11A88826F) == 0x0004D4, "Member 'AB_BGA_ProximityMine_C::Scale_Ring_In__Direction_97089CCA4B30B5D55C3444B11A88826F' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Scale_Ring_In) == 0x0004D8, "Member 'AB_BGA_ProximityMine_C::Scale_Ring_In' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Scale_Rings_Up_LERP_1C2C39AC441B3BFE9AA68EBE28BAFB7E) == 0x0004DC, "Member 'AB_BGA_ProximityMine_C::Scale_Rings_Up_LERP_1C2C39AC441B3BFE9AA68EBE28BAFB7E' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Scale_Rings_Up__Direction_1C2C39AC441B3BFE9AA68EBE28BAFB7E) == 0x0004E0, "Member 'AB_BGA_ProximityMine_C::Scale_Rings_Up__Direction_1C2C39AC441B3BFE9AA68EBE28BAFB7E' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Scale_Rings_Up) == 0x0004E4, "Member 'AB_BGA_ProximityMine_C::Scale_Rings_Up' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Timeline_0_NewTrack_0_A78484B549A162C03F2B799BECBA42F4) == 0x0004E8, "Member 'AB_BGA_ProximityMine_C::Timeline_0_NewTrack_0_A78484B549A162C03F2B799BECBA42F4' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Timeline_0__Direction_A78484B549A162C03F2B799BECBA42F4) == 0x0004EC, "Member 'AB_BGA_ProximityMine_C::Timeline_0__Direction_A78484B549A162C03F2B799BECBA42F4' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Timeline_0) == 0x0004F0, "Member 'AB_BGA_ProximityMine_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Land_Sound) == 0x0004F4, "Member 'AB_BGA_ProximityMine_C::Land_Sound' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, IsPlaced) == 0x0004F8, "Member 'AB_BGA_ProximityMine_C::IsPlaced' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Impact_Loc) == 0x0004FC, "Member 'AB_BGA_ProximityMine_C::Impact_Loc' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, ExplosionRadiusGuide) == 0x000508, "Member 'AB_BGA_ProximityMine_C::ExplosionRadiusGuide' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, DistanceGuideDuration) == 0x000514, "Member 'AB_BGA_ProximityMine_C::DistanceGuideDuration' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, EventExplosion) == 0x000518, "Member 'AB_BGA_ProximityMine_C::EventExplosion' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, TargetRules) == 0x000520, "Member 'AB_BGA_ProximityMine_C::TargetRules' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, HitNormal) == 0x000538, "Member 'AB_BGA_ProximityMine_C::HitNormal' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, IsValidEnemy) == 0x000544, "Member 'AB_BGA_ProximityMine_C::IsValidEnemy' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, PawnActors) == 0x000548, "Member 'AB_BGA_ProximityMine_C::PawnActors' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, CueExplode) == 0x00054C, "Member 'AB_BGA_ProximityMine_C::CueExplode' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, bActivated) == 0x000550, "Member 'AB_BGA_ProximityMine_C::bActivated' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Mine_Mat) == 0x000554, "Member 'AB_BGA_ProximityMine_C::Mine_Mat' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, DefaultExplosionTag) == 0x000558, "Member 'AB_BGA_ProximityMine_C::DefaultExplosionTag' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Upgrade1ExplosionTag) == 0x000560, "Member 'AB_BGA_ProximityMine_C::Upgrade1ExplosionTag' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Upgrade2ExplosionTag) == 0x000568, "Member 'AB_BGA_ProximityMine_C::Upgrade2ExplosionTag' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Activation_Radius) == 0x000570, "Member 'AB_BGA_ProximityMine_C::Activation_Radius' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Beacon_Can_Play_) == 0x000574, "Member 'AB_BGA_ProximityMine_C::Beacon_Can_Play_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Beacon_Speedup_Play_Speed) == 0x000578, "Member 'AB_BGA_ProximityMine_C::Beacon_Speedup_Play_Speed' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Beacon_Speedup_Play_Speed_Chip_OffTime) == 0x00057C, "Member 'AB_BGA_ProximityMine_C::Beacon_Speedup_Play_Speed_Chip_OffTime' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Rings_Start_Size) == 0x000580, "Member 'AB_BGA_ProximityMine_C::Rings_Start_Size' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Ring_Restart_Delay) == 0x00058C, "Member 'AB_BGA_ProximityMine_C::Ring_Restart_Delay' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, IsDead_) == 0x000590, "Member 'AB_BGA_ProximityMine_C::IsDead_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Activation_Delay) == 0x000594, "Member 'AB_BGA_ProximityMine_C::Activation_Delay' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Activate_Ring_MID) == 0x000598, "Member 'AB_BGA_ProximityMine_C::Activate_Ring_MID' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Activate_Ring_Color_Inner__Friendly_) == 0x00059C, "Member 'AB_BGA_ProximityMine_C::Activate_Ring_Color_Inner__Friendly_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Activate_Ring_Color_Outer__Friendly_) == 0x0005AC, "Member 'AB_BGA_ProximityMine_C::Activate_Ring_Color_Outer__Friendly_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Beacon_Core_Color__Friendly_) == 0x0005BC, "Member 'AB_BGA_ProximityMine_C::Beacon_Core_Color__Friendly_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Beacon_Core_Color__Enemy_) == 0x0005CC, "Member 'AB_BGA_ProximityMine_C::Beacon_Core_Color__Enemy_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Beacon_Streak_Color__Friendly_) == 0x0005DC, "Member 'AB_BGA_ProximityMine_C::Beacon_Streak_Color__Friendly_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Beacon_Streak_Color__Enemy_) == 0x0005EC, "Member 'AB_BGA_ProximityMine_C::Beacon_Streak_Color__Enemy_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Beacon_Mesh_Color__Friendly_) == 0x0005FC, "Member 'AB_BGA_ProximityMine_C::Beacon_Mesh_Color__Friendly_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Beacon_Mesh_Color__Enemy_) == 0x00060C, "Member 'AB_BGA_ProximityMine_C::Beacon_Mesh_Color__Enemy_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Radar_Disc_MID) == 0x00061C, "Member 'AB_BGA_ProximityMine_C::Radar_Disc_MID' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Radar_Disc_Lights_Color__Friendly_) == 0x000620, "Member 'AB_BGA_ProximityMine_C::Radar_Disc_Lights_Color__Friendly_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Radar_Disc_Lights_Color__Enemy_) == 0x000630, "Member 'AB_BGA_ProximityMine_C::Radar_Disc_Lights_Color__Enemy_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Radar_Disc_Dark_Color__Friendly_) == 0x000640, "Member 'AB_BGA_ProximityMine_C::Radar_Disc_Dark_Color__Friendly_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Radar_Disc_Dark_Color__Enemy_) == 0x000650, "Member 'AB_BGA_ProximityMine_C::Radar_Disc_Dark_Color__Enemy_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Activate_Ring_Color_Inner__Enemy_) == 0x000660, "Member 'AB_BGA_ProximityMine_C::Activate_Ring_Color_Inner__Enemy_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Activate_Ring_Color_Outer__Enemy_) == 0x000670, "Member 'AB_BGA_ProximityMine_C::Activate_Ring_Color_Outer__Enemy_' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, AngleToShowAdditionalHUD) == 0x000680, "Member 'AB_BGA_ProximityMine_C::AngleToShowAdditionalHUD' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Activate_Ring_Vertical_MID) == 0x000684, "Member 'AB_BGA_ProximityMine_C::Activate_Ring_Vertical_MID' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, DamageRingMID) == 0x000688, "Member 'AB_BGA_ProximityMine_C::DamageRingMID' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Damage_Ring_Vertical_MID) == 0x00068C, "Member 'AB_BGA_ProximityMine_C::Damage_Ring_Vertical_MID' has a wrong offset!");
static_assert(offsetof(AB_BGA_ProximityMine_C, Player_Owner) == 0x000690, "Member 'AB_BGA_ProximityMine_C::Player_Owner' has a wrong offset!");

}

#pragma pack(pop)
