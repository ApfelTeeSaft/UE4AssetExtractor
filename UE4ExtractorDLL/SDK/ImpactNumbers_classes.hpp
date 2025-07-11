﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImpactNumbers

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C
// 0x0068 (0x030C - 0x02A4)
class AImpactNumbers_C final : public AFortDamageNumbersActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A4(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                         Spacing_percentage_for_1s;                         // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         FontYSize;                                         // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         FontXSize;                                         // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         FontSizeScaleMaxPerc;                              // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Standard_Hit_Color;                                // 0x02BC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Critical_Wall_Hit_Color;                           // 0x02CC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Player_Damage_Color;                               // 0x02DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Number_Spacing_Multiplier;                         // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Number_of_number_rotations;                        // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Critical_Hit_Multiplier;                           // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Distance_from_Camera_Before_Doubling_Size;         // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                           Critical_Enemy_Hit_Color;                          // 0x02FC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ImpactNumbers(int32 EntryPoint);
	void OnNewDamageNumber(const struct FFortDamageNumberInfo& NewDamageNumberInfo);
	void UserConstructionScript();
	void init_a_new_number_set(struct FFortDamageNumberInfo& NewDamageHitInfoStruct, struct FTransform* OutCameraTransform, struct FVector* OutNumberLocation);
	void Set_Material_Pararmeters(struct FFortDamageNumberInfo& NewDamageHitInfoStruct, const struct FTransform& CameraTransform, const struct FVector& NumberLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImpactNumbers_C">();
	}
	static class AImpactNumbers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AImpactNumbers_C>();
	}
};
static_assert(alignof(AImpactNumbers_C) == 0x000004, "Wrong alignment on AImpactNumbers_C");
static_assert(sizeof(AImpactNumbers_C) == 0x00030C, "Wrong size on AImpactNumbers_C");
static_assert(offsetof(AImpactNumbers_C, UberGraphFrame) == 0x0002A4, "Member 'AImpactNumbers_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, DefaultSceneRoot) == 0x0002A8, "Member 'AImpactNumbers_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Spacing_percentage_for_1s) == 0x0002AC, "Member 'AImpactNumbers_C::Spacing_percentage_for_1s' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, FontYSize) == 0x0002B0, "Member 'AImpactNumbers_C::FontYSize' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, FontXSize) == 0x0002B4, "Member 'AImpactNumbers_C::FontXSize' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, FontSizeScaleMaxPerc) == 0x0002B8, "Member 'AImpactNumbers_C::FontSizeScaleMaxPerc' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Standard_Hit_Color) == 0x0002BC, "Member 'AImpactNumbers_C::Standard_Hit_Color' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Critical_Wall_Hit_Color) == 0x0002CC, "Member 'AImpactNumbers_C::Critical_Wall_Hit_Color' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Player_Damage_Color) == 0x0002DC, "Member 'AImpactNumbers_C::Player_Damage_Color' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Number_Spacing_Multiplier) == 0x0002EC, "Member 'AImpactNumbers_C::Number_Spacing_Multiplier' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Number_of_number_rotations) == 0x0002F0, "Member 'AImpactNumbers_C::Number_of_number_rotations' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Critical_Hit_Multiplier) == 0x0002F4, "Member 'AImpactNumbers_C::Critical_Hit_Multiplier' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Distance_from_Camera_Before_Doubling_Size) == 0x0002F8, "Member 'AImpactNumbers_C::Distance_from_Camera_Before_Doubling_Size' has a wrong offset!");
static_assert(offsetof(AImpactNumbers_C, Critical_Enemy_Hit_Color) == 0x0002FC, "Member 'AImpactNumbers_C::Critical_Enemy_Hit_Color' has a wrong offset!");

}

#pragma pack(pop)
