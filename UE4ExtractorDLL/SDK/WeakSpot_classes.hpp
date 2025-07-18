﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeakSpot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass WeakSpot.WeakSpot_C
// 0x014C (0x0424 - 0x02D8)
class AWeakSpot_C final : public AFortCrackEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x02DC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UDecalComponent*                        Decal;                                             // 0x02E0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*               AttachedFlareParticle;                             // 0x02E4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*               AnimatedBackgroundRingsParticleEffect;             // 0x02E8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                   CrackModel;                                        // 0x02EC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                   SphereHitLocator;                                  // 0x02F0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCapsuleComponent*                      CollisionComponent;                                // 0x02F4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*               DamageEffect;                                      // 0x02F8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                         CrackPathAnimation_Animation_along_path_A821E81A4A7DE9E54A34FFA4C0F808DB; // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETimelineDirection                            CrackPathAnimation__Direction_A821E81A4A7DE9E54A34FFA4C0F808DB; // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_301[0x3];                                      // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CrackPathAnimation;                                // 0x0304(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         ParticleScaleTimeline_FirstTimeScale_FB17FC154EE00C450C643C9E1F0E3CAE; // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         ParticleScaleTimeline_Scale_FB17FC154EE00C450C643C9E1F0E3CAE; // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETimelineDirection                            ParticleScaleTimeline__Direction_FB17FC154EE00C450C643C9E1F0E3CAE; // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_311[0x3];                                      // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ParticleScaleTimeline;                             // 0x0314(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                InitialScaleAnimation_ColorTrack_1D97E47B41E4DD80FCCA45BAD9FA9013; // 0x0318(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         InitialScaleAnimation_Test_1D97E47B41E4DD80FCCA45BAD9FA9013; // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         InitialScaleAnimation_TargetScaleDown_1D97E47B41E4DD80FCCA45BAD9FA9013; // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         InitialScaleAnimation_Scaleup_1D97E47B41E4DD80FCCA45BAD9FA9013; // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETimelineDirection                            InitialScaleAnimation__Direction_1D97E47B41E4DD80FCCA45BAD9FA9013; // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_331[0x3];                                      // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     InitialScaleAnimation;                             // 0x0334(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Timeline_0_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E; // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Timeline_0_FadeAwayBounce_544AE05F40294D09C3C361AB7BCF6C4E; // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETimelineDirection                            Timeline_0__Direction_544AE05F40294D09C3C361AB7BCF6C4E; // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_341[0x3];                                      // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0344(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                Timeline_1_ColorTrack_AD84D9E348CF41B732F862B5A325E3EC; // 0x0348(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Timeline_1_SphereMultiplier_AD84D9E348CF41B732F862B5A325E3EC; // 0x0354(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Timeline_1_Crack_Timeline_AD84D9E348CF41B732F862B5A325E3EC; // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETimelineDirection                            Timeline_1__Direction_AD84D9E348CF41B732F862B5A325E3EC; // 0x035C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35D[0x3];                                      // 0x035D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x0360(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               animatingMID;                                      // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               SecondAnimatingMID;                                // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                CrackCurrentScale;                                 // 0x036C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         CurrentCrackAmount;                                // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ParticleScaleVariable;                             // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ScaleAwayVariable;                                 // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               MID_for_the_sphere_hit_locator;                    // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                             Impact_Sound;                                      // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                             SpawnSound;                                        // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                        MaterialControlPoints;                             // 0x0390(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               CrackFinderMID;                                    // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                   CrackFinderMesh1;                                  // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         One;                                               // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                 CrackFinderMeshWTF;                                // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UCurveVector*                           NOOOOO;                                            // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortSpline*                            newCrackSpline;                                    // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         TextureTilingPerWorldUnitDivisor;                  // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NewVar;                                            // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NewVar0;                                           // 0x03B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BA[0x2];                                      // 0x03BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CrackTravelPlayRate;                               // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                initial_crack_location;                            // 0x03C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                Initial_particle_location;                         // 0x03CC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                             SoundCrack_Level_01;                               // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                             SoundCrack_Level_02;                               // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                             SoundCrack_Level_03;                               // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                             SoundCrack_Level_04;                               // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                             SoundCrack_Level_05;                               // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                             SoundCrack_Level_06;                               // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                             SoundCrack_Level_07;                               // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class USoundBase*>                     Crack_sounds;                                      // 0x03F4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                             SoundCrack_Level_08;                               // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                             SoundCrack_Level_09;                               // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               ScytheMaterial;                                    // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UStaticMeshComponent*>           ReticleArray;                                      // 0x040C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         First_Crack_Actor_Size_Multiplier;                 // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Spline_Tangent_Offsets;                            // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Second_Crack_Actor_size_Multiplier;                // 0x0420(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WeakSpot(int32 EntryPoint);
	void OnBounceAnimationUpdate(const struct FFortBounceData& BounceData);
	void OnStartDirectionEffect();
	void OnHitCrack();
	void OnFadeOut();
	void ReceiveBeginPlay();
	void Timeline_1__FinishedAnimatingSphere__EventFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_0__Kill__EventFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void InitialScaleAnimation__UpdateFunc();
	void InitialScaleAnimation__FinishedFunc();
	void ParticleScaleTimeline__UpdateFunc();
	void ParticleScaleTimeline__FinishedFunc();
	void CrackPathAnimation__UpdateFunc();
	void CrackPathAnimation__FinishedFunc();
	void UserConstructionScript();
	void NewFunction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeakSpot_C">();
	}
	static class AWeakSpot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWeakSpot_C>();
	}
};
static_assert(alignof(AWeakSpot_C) == 0x000004, "Wrong alignment on AWeakSpot_C");
static_assert(sizeof(AWeakSpot_C) == 0x000424, "Wrong size on AWeakSpot_C");
static_assert(offsetof(AWeakSpot_C, UberGraphFrame) == 0x0002D8, "Member 'AWeakSpot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, PointLight) == 0x0002DC, "Member 'AWeakSpot_C::PointLight' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Decal) == 0x0002E0, "Member 'AWeakSpot_C::Decal' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, AttachedFlareParticle) == 0x0002E4, "Member 'AWeakSpot_C::AttachedFlareParticle' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, AnimatedBackgroundRingsParticleEffect) == 0x0002E8, "Member 'AWeakSpot_C::AnimatedBackgroundRingsParticleEffect' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, CrackModel) == 0x0002EC, "Member 'AWeakSpot_C::CrackModel' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SphereHitLocator) == 0x0002F0, "Member 'AWeakSpot_C::SphereHitLocator' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, CollisionComponent) == 0x0002F4, "Member 'AWeakSpot_C::CollisionComponent' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, DamageEffect) == 0x0002F8, "Member 'AWeakSpot_C::DamageEffect' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, CrackPathAnimation_Animation_along_path_A821E81A4A7DE9E54A34FFA4C0F808DB) == 0x0002FC, "Member 'AWeakSpot_C::CrackPathAnimation_Animation_along_path_A821E81A4A7DE9E54A34FFA4C0F808DB' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, CrackPathAnimation__Direction_A821E81A4A7DE9E54A34FFA4C0F808DB) == 0x000300, "Member 'AWeakSpot_C::CrackPathAnimation__Direction_A821E81A4A7DE9E54A34FFA4C0F808DB' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, CrackPathAnimation) == 0x000304, "Member 'AWeakSpot_C::CrackPathAnimation' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ParticleScaleTimeline_FirstTimeScale_FB17FC154EE00C450C643C9E1F0E3CAE) == 0x000308, "Member 'AWeakSpot_C::ParticleScaleTimeline_FirstTimeScale_FB17FC154EE00C450C643C9E1F0E3CAE' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ParticleScaleTimeline_Scale_FB17FC154EE00C450C643C9E1F0E3CAE) == 0x00030C, "Member 'AWeakSpot_C::ParticleScaleTimeline_Scale_FB17FC154EE00C450C643C9E1F0E3CAE' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ParticleScaleTimeline__Direction_FB17FC154EE00C450C643C9E1F0E3CAE) == 0x000310, "Member 'AWeakSpot_C::ParticleScaleTimeline__Direction_FB17FC154EE00C450C643C9E1F0E3CAE' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ParticleScaleTimeline) == 0x000314, "Member 'AWeakSpot_C::ParticleScaleTimeline' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, InitialScaleAnimation_ColorTrack_1D97E47B41E4DD80FCCA45BAD9FA9013) == 0x000318, "Member 'AWeakSpot_C::InitialScaleAnimation_ColorTrack_1D97E47B41E4DD80FCCA45BAD9FA9013' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, InitialScaleAnimation_Test_1D97E47B41E4DD80FCCA45BAD9FA9013) == 0x000324, "Member 'AWeakSpot_C::InitialScaleAnimation_Test_1D97E47B41E4DD80FCCA45BAD9FA9013' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, InitialScaleAnimation_TargetScaleDown_1D97E47B41E4DD80FCCA45BAD9FA9013) == 0x000328, "Member 'AWeakSpot_C::InitialScaleAnimation_TargetScaleDown_1D97E47B41E4DD80FCCA45BAD9FA9013' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, InitialScaleAnimation_Scaleup_1D97E47B41E4DD80FCCA45BAD9FA9013) == 0x00032C, "Member 'AWeakSpot_C::InitialScaleAnimation_Scaleup_1D97E47B41E4DD80FCCA45BAD9FA9013' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, InitialScaleAnimation__Direction_1D97E47B41E4DD80FCCA45BAD9FA9013) == 0x000330, "Member 'AWeakSpot_C::InitialScaleAnimation__Direction_1D97E47B41E4DD80FCCA45BAD9FA9013' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, InitialScaleAnimation) == 0x000334, "Member 'AWeakSpot_C::InitialScaleAnimation' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Timeline_0_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E) == 0x000338, "Member 'AWeakSpot_C::Timeline_0_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Timeline_0_FadeAwayBounce_544AE05F40294D09C3C361AB7BCF6C4E) == 0x00033C, "Member 'AWeakSpot_C::Timeline_0_FadeAwayBounce_544AE05F40294D09C3C361AB7BCF6C4E' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Timeline_0__Direction_544AE05F40294D09C3C361AB7BCF6C4E) == 0x000340, "Member 'AWeakSpot_C::Timeline_0__Direction_544AE05F40294D09C3C361AB7BCF6C4E' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Timeline_0) == 0x000344, "Member 'AWeakSpot_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Timeline_1_ColorTrack_AD84D9E348CF41B732F862B5A325E3EC) == 0x000348, "Member 'AWeakSpot_C::Timeline_1_ColorTrack_AD84D9E348CF41B732F862B5A325E3EC' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Timeline_1_SphereMultiplier_AD84D9E348CF41B732F862B5A325E3EC) == 0x000354, "Member 'AWeakSpot_C::Timeline_1_SphereMultiplier_AD84D9E348CF41B732F862B5A325E3EC' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Timeline_1_Crack_Timeline_AD84D9E348CF41B732F862B5A325E3EC) == 0x000358, "Member 'AWeakSpot_C::Timeline_1_Crack_Timeline_AD84D9E348CF41B732F862B5A325E3EC' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Timeline_1__Direction_AD84D9E348CF41B732F862B5A325E3EC) == 0x00035C, "Member 'AWeakSpot_C::Timeline_1__Direction_AD84D9E348CF41B732F862B5A325E3EC' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Timeline_1) == 0x000360, "Member 'AWeakSpot_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, animatingMID) == 0x000364, "Member 'AWeakSpot_C::animatingMID' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SecondAnimatingMID) == 0x000368, "Member 'AWeakSpot_C::SecondAnimatingMID' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, CrackCurrentScale) == 0x00036C, "Member 'AWeakSpot_C::CrackCurrentScale' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, CurrentCrackAmount) == 0x000378, "Member 'AWeakSpot_C::CurrentCrackAmount' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ParticleScaleVariable) == 0x00037C, "Member 'AWeakSpot_C::ParticleScaleVariable' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ScaleAwayVariable) == 0x000380, "Member 'AWeakSpot_C::ScaleAwayVariable' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, MID_for_the_sphere_hit_locator) == 0x000384, "Member 'AWeakSpot_C::MID_for_the_sphere_hit_locator' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Impact_Sound) == 0x000388, "Member 'AWeakSpot_C::Impact_Sound' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SpawnSound) == 0x00038C, "Member 'AWeakSpot_C::SpawnSound' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, MaterialControlPoints) == 0x000390, "Member 'AWeakSpot_C::MaterialControlPoints' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, CrackFinderMID) == 0x00039C, "Member 'AWeakSpot_C::CrackFinderMID' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, CrackFinderMesh1) == 0x0003A0, "Member 'AWeakSpot_C::CrackFinderMesh1' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, One) == 0x0003A4, "Member 'AWeakSpot_C::One' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, CrackFinderMeshWTF) == 0x0003A8, "Member 'AWeakSpot_C::CrackFinderMeshWTF' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, NOOOOO) == 0x0003AC, "Member 'AWeakSpot_C::NOOOOO' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, newCrackSpline) == 0x0003B0, "Member 'AWeakSpot_C::newCrackSpline' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, TextureTilingPerWorldUnitDivisor) == 0x0003B4, "Member 'AWeakSpot_C::TextureTilingPerWorldUnitDivisor' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, NewVar) == 0x0003B8, "Member 'AWeakSpot_C::NewVar' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, NewVar0) == 0x0003B9, "Member 'AWeakSpot_C::NewVar0' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, CrackTravelPlayRate) == 0x0003BC, "Member 'AWeakSpot_C::CrackTravelPlayRate' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, initial_crack_location) == 0x0003C0, "Member 'AWeakSpot_C::initial_crack_location' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Initial_particle_location) == 0x0003CC, "Member 'AWeakSpot_C::Initial_particle_location' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_01) == 0x0003D8, "Member 'AWeakSpot_C::SoundCrack_Level_01' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_02) == 0x0003DC, "Member 'AWeakSpot_C::SoundCrack_Level_02' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_03) == 0x0003E0, "Member 'AWeakSpot_C::SoundCrack_Level_03' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_04) == 0x0003E4, "Member 'AWeakSpot_C::SoundCrack_Level_04' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_05) == 0x0003E8, "Member 'AWeakSpot_C::SoundCrack_Level_05' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_06) == 0x0003EC, "Member 'AWeakSpot_C::SoundCrack_Level_06' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_07) == 0x0003F0, "Member 'AWeakSpot_C::SoundCrack_Level_07' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Crack_sounds) == 0x0003F4, "Member 'AWeakSpot_C::Crack_sounds' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_08) == 0x000400, "Member 'AWeakSpot_C::SoundCrack_Level_08' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SoundCrack_Level_09) == 0x000404, "Member 'AWeakSpot_C::SoundCrack_Level_09' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ScytheMaterial) == 0x000408, "Member 'AWeakSpot_C::ScytheMaterial' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ReticleArray) == 0x00040C, "Member 'AWeakSpot_C::ReticleArray' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, First_Crack_Actor_Size_Multiplier) == 0x000418, "Member 'AWeakSpot_C::First_Crack_Actor_Size_Multiplier' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Spline_Tangent_Offsets) == 0x00041C, "Member 'AWeakSpot_C::Spline_Tangent_Offsets' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Second_Crack_Actor_size_Multiplier) == 0x000420, "Member 'AWeakSpot_C::Second_Crack_Actor_size_Multiplier' has a wrong offset!");

}

#pragma pack(pop)
