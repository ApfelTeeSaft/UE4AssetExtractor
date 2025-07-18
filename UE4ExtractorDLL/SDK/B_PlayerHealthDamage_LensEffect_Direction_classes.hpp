﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlayerHealthDamage_LensEffect_Direction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C
// 0x0010 (0x0300 - 0x02F0)
class AB_PlayerHealthDamage_LensEffect_Direction_C final : public AFortEmitterCameraLensEffectDirectional
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0004)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction(int32 EntryPoint);
	void PassParticle_Parameter(float Health_Percent);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PlayerHealthDamage_LensEffect_Direction_C">();
	}
	static class AB_PlayerHealthDamage_LensEffect_Direction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PlayerHealthDamage_LensEffect_Direction_C>();
	}
};
static_assert(alignof(AB_PlayerHealthDamage_LensEffect_Direction_C) == 0x000010, "Wrong alignment on AB_PlayerHealthDamage_LensEffect_Direction_C");
static_assert(sizeof(AB_PlayerHealthDamage_LensEffect_Direction_C) == 0x000300, "Wrong size on AB_PlayerHealthDamage_LensEffect_Direction_C");
static_assert(offsetof(AB_PlayerHealthDamage_LensEffect_Direction_C, UberGraphFrame) == 0x0002F0, "Member 'AB_PlayerHealthDamage_LensEffect_Direction_C::UberGraphFrame' has a wrong offset!");

}

#pragma pack(pop)
