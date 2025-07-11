﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AOE_Ninja_SmokeBomb_Cloud

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C
// 0x0044 (0x03D4 - 0x0390)
class AAOE_Ninja_SmokeBomb_Cloud_C final : public AFortAreaOfEffectCloud
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  SmokePP;                                           // 0x0394(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*               SmokePersist;                                      // 0x0398(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCapsuleComponent*                      Capsule1;                                          // 0x039C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                         FadeIn_Alpha_9E8A507645603872B5DEF2BFE57392D1;     // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETimelineDirection                            FadeIn__Direction_9E8A507645603872B5DEF2BFE57392D1; // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A5[0x3];                                      // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeIn;                                            // 0x03A8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         PPFade_PPWeight_A4DD1BCE429C2F31EB8EB5856B27E063;  // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETimelineDirection                            PPFade__Direction_A4DD1BCE429C2F31EB8EB5856B27E063; // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B1[0x3];                                      // 0x03B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     PPFade;                                            // 0x03B4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                TX_Size;                                           // 0x03B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         FadeInTime;                                        // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         FadeOutTime;                                       // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FadingInOrOut_;                                    // 0x03CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD[0x3];                                      // 0x03CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AOELifespan;                                       // 0x03D0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

public:
	void ExecuteUbergraph_AOE_Ninja_SmokeBomb_Cloud(int32 EntryPoint);
	void ExtraLifespan(float AOELifespan_0);
	void BndEvt__Capsule1_K2Node_ComponentBoundEvent_445_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Capsule1_K2Node_ComponentBoundEvent_425_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void PPFade__UpdateFunc();
	void PPFade__FinishedFunc();
	void FadeIn__UpdateFunc();
	void FadeIn__FinishedFunc();
	void UserConstructionScript();
	void OnRep_Lifespan();
	void OnRep_AOELifespan();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AOE_Ninja_SmokeBomb_Cloud_C">();
	}
	static class AAOE_Ninja_SmokeBomb_Cloud_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAOE_Ninja_SmokeBomb_Cloud_C>();
	}
};
static_assert(alignof(AAOE_Ninja_SmokeBomb_Cloud_C) == 0x000004, "Wrong alignment on AAOE_Ninja_SmokeBomb_Cloud_C");
static_assert(sizeof(AAOE_Ninja_SmokeBomb_Cloud_C) == 0x0003D4, "Wrong size on AAOE_Ninja_SmokeBomb_Cloud_C");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, UberGraphFrame) == 0x000390, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, SmokePP) == 0x000394, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::SmokePP' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, SmokePersist) == 0x000398, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::SmokePersist' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, Capsule1) == 0x00039C, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::Capsule1' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, FadeIn_Alpha_9E8A507645603872B5DEF2BFE57392D1) == 0x0003A0, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::FadeIn_Alpha_9E8A507645603872B5DEF2BFE57392D1' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, FadeIn__Direction_9E8A507645603872B5DEF2BFE57392D1) == 0x0003A4, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::FadeIn__Direction_9E8A507645603872B5DEF2BFE57392D1' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, FadeIn) == 0x0003A8, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::FadeIn' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, PPFade_PPWeight_A4DD1BCE429C2F31EB8EB5856B27E063) == 0x0003AC, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::PPFade_PPWeight_A4DD1BCE429C2F31EB8EB5856B27E063' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, PPFade__Direction_A4DD1BCE429C2F31EB8EB5856B27E063) == 0x0003B0, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::PPFade__Direction_A4DD1BCE429C2F31EB8EB5856B27E063' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, PPFade) == 0x0003B4, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::PPFade' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, TX_Size) == 0x0003B8, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::TX_Size' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, FadeInTime) == 0x0003C4, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::FadeInTime' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, FadeOutTime) == 0x0003C8, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::FadeOutTime' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, FadingInOrOut_) == 0x0003CC, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::FadingInOrOut_' has a wrong offset!");
static_assert(offsetof(AAOE_Ninja_SmokeBomb_Cloud_C, AOELifespan) == 0x0003D0, "Member 'AAOE_Ninja_SmokeBomb_Cloud_C::AOELifespan' has a wrong offset!");

}

#pragma pack(pop)
