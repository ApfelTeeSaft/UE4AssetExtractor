﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GadgetSelectBar

#include "Basic.hpp"

#include "GadgetSelectBar_classes.hpp"
#include "GadgetSelectBar_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function GadgetSelectBar.GadgetSelectBar_C.ExecuteUbergraph_GadgetSelectBar
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGadgetSelectBar_C::ExecuteUbergraph_GadgetSelectBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GadgetSelectBar_C", "ExecuteUbergraph_GadgetSelectBar");

	Params::GadgetSelectBar_C_ExecuteUbergraph_GadgetSelectBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GadgetSelectBar.GadgetSelectBar_C.HandleHomebaseInventoryUpdated
// (BlueprintCallable, BlueprintEvent)

void UGadgetSelectBar_C::HandleHomebaseInventoryUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GadgetSelectBar_C", "HandleHomebaseInventoryUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GadgetSelectBar.GadgetSelectBar_C.HandleLobbyStarted
// (BlueprintCallable, BlueprintEvent)

void UGadgetSelectBar_C::HandleLobbyStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GadgetSelectBar_C", "HandleLobbyStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GadgetSelectBar.GadgetSelectBar_C.HandleAccountInfoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFortPrivateAccountInfo&   NewInfo                                                (Parm)

void UGadgetSelectBar_C::HandleAccountInfoChanged(const struct FFortPrivateAccountInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GadgetSelectBar_C", "HandleAccountInfoChanged");

	Params::GadgetSelectBar_C_HandleAccountInfoChanged Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GadgetSelectBar.GadgetSelectBar_C.BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortWorldItem*                   Gadget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGadgetSelectBar_C::BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature(class UFortWorldItem* Gadget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GadgetSelectBar_C", "BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature");

	Params::GadgetSelectBar_C_BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature Parms{};

	Parms.Gadget = Gadget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GadgetSelectBar.GadgetSelectBar_C.BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortWorldItem*                   Gadget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGadgetSelectBar_C::BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature(class UFortWorldItem* Gadget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GadgetSelectBar_C", "BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature");

	Params::GadgetSelectBar_C_BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature Parms{};

	Parms.Gadget = Gadget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GadgetSelectBar.GadgetSelectBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGadgetSelectBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GadgetSelectBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GadgetSelectBar.GadgetSelectBar_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UGadgetSelectBar_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GadgetSelectBar_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GadgetSelectBar.GadgetSelectBar_C.InitBar
// (Public, BlueprintCallable, BlueprintEvent)

void UGadgetSelectBar_C::InitBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GadgetSelectBar_C", "InitBar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GadgetSelectBar.GadgetSelectBar_C.InitGadget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGadgetSelectButton_C*            Item_Widget                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Slot_Index                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGadgetSelectBar_C::InitGadget(class UGadgetSelectButton_C* Item_Widget, int32 Slot_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GadgetSelectBar_C", "InitGadget");

	Params::GadgetSelectBar_C_InitGadget Parms{};

	Parms.Item_Widget = Item_Widget;
	Parms.Slot_Index = Slot_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GadgetSelectBar.GadgetSelectBar_C.SelectGadget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*                   Item                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Slot_0                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGadgetSelectBar_C::SelectGadget(class UFortWorldItem* Item, int32 Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GadgetSelectBar_C", "SelectGadget");

	Params::GadgetSelectBar_C_SelectGadget Parms{};

	Parms.Item = Item;
	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GadgetSelectBar.GadgetSelectBar_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UGadgetSelectBar_C::BindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GadgetSelectBar_C", "BindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GadgetSelectBar.GadgetSelectBar_C.SetShown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShown                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGadgetSelectBar_C::SetShown(bool bShown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GadgetSelectBar_C", "SetShown");

	Params::GadgetSelectBar_C_SetShown Parms{};

	Parms.bShown = bShown;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma pack(pop)
