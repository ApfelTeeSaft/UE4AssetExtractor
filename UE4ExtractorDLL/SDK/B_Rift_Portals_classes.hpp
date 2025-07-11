﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Rift_Portals

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass B_Rift_Portals.B_Rift_Portals_C
// 0x004C (0x04D4 - 0x0488)
class AB_Rift_Portals_C final : public ABuildingRift
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0488(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Enemy_Spawn_point;                                 // 0x048C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                        Audio1;                                            // 0x0490(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBillboardComponent*                    Lightning_Strike_Point;                            // 0x0494(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                         Color_NewTrack_0_7DF105F847CA9F38EBFE67B5A16CE44A; // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ETimelineDirection                            Color__Direction_7DF105F847CA9F38EBFE67B5A16CE44A; // 0x049C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49D[0x3];                                      // 0x049D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Color;                                             // 0x04A0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               NewVar;                                            // 0x04A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               Rift_Active;                                       // 0x04A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               NewVar0;                                           // 0x04AC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               rotatorTowardTheNewChar;                           // 0x04B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*               SpawnCloud;                                        // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               Char_MId;                                          // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortAIPawn*                            Char;                                              // 0x04CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               SwipeMaterial;                                     // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_B_Rift_Portals(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnActivated();
	void Lightning_Impact_Event();
	void OnSpawnAI();
	void OnRemoved();
	void OnPlaced();
	void Color__UpdateFunc();
	void Color__FinishedFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Rift_Portals_C">();
	}
	static class AB_Rift_Portals_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Rift_Portals_C>();
	}
};
static_assert(alignof(AB_Rift_Portals_C) == 0x000004, "Wrong alignment on AB_Rift_Portals_C");
static_assert(sizeof(AB_Rift_Portals_C) == 0x0004D4, "Wrong size on AB_Rift_Portals_C");
static_assert(offsetof(AB_Rift_Portals_C, UberGraphFrame) == 0x000488, "Member 'AB_Rift_Portals_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Enemy_Spawn_point) == 0x00048C, "Member 'AB_Rift_Portals_C::Enemy_Spawn_point' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Audio1) == 0x000490, "Member 'AB_Rift_Portals_C::Audio1' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Lightning_Strike_Point) == 0x000494, "Member 'AB_Rift_Portals_C::Lightning_Strike_Point' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Color_NewTrack_0_7DF105F847CA9F38EBFE67B5A16CE44A) == 0x000498, "Member 'AB_Rift_Portals_C::Color_NewTrack_0_7DF105F847CA9F38EBFE67B5A16CE44A' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Color__Direction_7DF105F847CA9F38EBFE67B5A16CE44A) == 0x00049C, "Member 'AB_Rift_Portals_C::Color__Direction_7DF105F847CA9F38EBFE67B5A16CE44A' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Color) == 0x0004A0, "Member 'AB_Rift_Portals_C::Color' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, NewVar) == 0x0004A4, "Member 'AB_Rift_Portals_C::NewVar' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Rift_Active) == 0x0004A8, "Member 'AB_Rift_Portals_C::Rift_Active' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, NewVar0) == 0x0004AC, "Member 'AB_Rift_Portals_C::NewVar0' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, rotatorTowardTheNewChar) == 0x0004B8, "Member 'AB_Rift_Portals_C::rotatorTowardTheNewChar' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, SpawnCloud) == 0x0004C4, "Member 'AB_Rift_Portals_C::SpawnCloud' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Char_MId) == 0x0004C8, "Member 'AB_Rift_Portals_C::Char_MId' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, Char) == 0x0004CC, "Member 'AB_Rift_Portals_C::Char' has a wrong offset!");
static_assert(offsetof(AB_Rift_Portals_C, SwipeMaterial) == 0x0004D0, "Member 'AB_Rift_Portals_C::SwipeMaterial' has a wrong offset!");

}

#pragma pack(pop)
