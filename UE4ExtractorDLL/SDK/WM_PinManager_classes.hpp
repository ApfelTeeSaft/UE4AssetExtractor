﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_PinManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// BlueprintGeneratedClass WM_PinManager.WM_PinManager_C
// 0x0008 (0x025C - 0x0254)
class AWM_PinManager_C final : public AWorldMapPinManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0254(0x0004)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0258(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)

public:
	void ExecuteUbergraph_WM_PinManager(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	class AWorldMapPin* CreateWorldMapPin(int32 TheaterIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WM_PinManager_C">();
	}
	static class AWM_PinManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWM_PinManager_C>();
	}
};
static_assert(alignof(AWM_PinManager_C) == 0x000004, "Wrong alignment on AWM_PinManager_C");
static_assert(sizeof(AWM_PinManager_C) == 0x00025C, "Wrong size on AWM_PinManager_C");
static_assert(offsetof(AWM_PinManager_C, UberGraphFrame) == 0x000254, "Member 'AWM_PinManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWM_PinManager_C, DefaultSceneRoot) == 0x000258, "Member 'AWM_PinManager_C::DefaultSceneRoot' has a wrong offset!");

}

#pragma pack(pop)
