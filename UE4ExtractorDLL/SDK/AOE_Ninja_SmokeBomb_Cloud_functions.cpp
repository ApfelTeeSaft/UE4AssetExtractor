﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AOE_Ninja_SmokeBomb_Cloud

#include "Basic.hpp"

#include "AOE_Ninja_SmokeBomb_Cloud_classes.hpp"
#include "AOE_Ninja_SmokeBomb_Cloud_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.ExecuteUbergraph_AOE_Ninja_SmokeBomb_Cloud
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAOE_Ninja_SmokeBomb_Cloud_C::ExecuteUbergraph_AOE_Ninja_SmokeBomb_Cloud(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Ninja_SmokeBomb_Cloud_C", "ExecuteUbergraph_AOE_Ninja_SmokeBomb_Cloud");

	Params::AOE_Ninja_SmokeBomb_Cloud_C_ExecuteUbergraph_AOE_Ninja_SmokeBomb_Cloud Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.ExtraLifespan
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AOELifespan_0                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAOE_Ninja_SmokeBomb_Cloud_C::ExtraLifespan(float AOELifespan_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Ninja_SmokeBomb_Cloud_C", "ExtraLifespan");

	Params::AOE_Ninja_SmokeBomb_Cloud_C_ExtraLifespan Parms{};

	Parms.AOELifespan_0 = AOELifespan_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.BndEvt__Capsule1_K2Node_ComponentBoundEvent_445_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAOE_Ninja_SmokeBomb_Cloud_C::BndEvt__Capsule1_K2Node_ComponentBoundEvent_445_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Ninja_SmokeBomb_Cloud_C", "BndEvt__Capsule1_K2Node_ComponentBoundEvent_445_ComponentEndOverlapSignature__DelegateSignature");

	Params::AOE_Ninja_SmokeBomb_Cloud_C_BndEvt__Capsule1_K2Node_ComponentBoundEvent_445_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.BndEvt__Capsule1_K2Node_ComponentBoundEvent_425_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bFromSweep                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FHitResult&                SweepResult                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AAOE_Ninja_SmokeBomb_Cloud_C::BndEvt__Capsule1_K2Node_ComponentBoundEvent_425_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Ninja_SmokeBomb_Cloud_C", "BndEvt__Capsule1_K2Node_ComponentBoundEvent_425_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AOE_Ninja_SmokeBomb_Cloud_C_BndEvt__Capsule1_K2Node_ComponentBoundEvent_425_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AAOE_Ninja_SmokeBomb_Cloud_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Ninja_SmokeBomb_Cloud_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.PPFade__UpdateFunc
// (BlueprintEvent)

void AAOE_Ninja_SmokeBomb_Cloud_C::PPFade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Ninja_SmokeBomb_Cloud_C", "PPFade__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.PPFade__FinishedFunc
// (BlueprintEvent)

void AAOE_Ninja_SmokeBomb_Cloud_C::PPFade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Ninja_SmokeBomb_Cloud_C", "PPFade__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.FadeIn__UpdateFunc
// (BlueprintEvent)

void AAOE_Ninja_SmokeBomb_Cloud_C::FadeIn__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Ninja_SmokeBomb_Cloud_C", "FadeIn__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.FadeIn__FinishedFunc
// (BlueprintEvent)

void AAOE_Ninja_SmokeBomb_Cloud_C::FadeIn__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Ninja_SmokeBomb_Cloud_C", "FadeIn__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAOE_Ninja_SmokeBomb_Cloud_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Ninja_SmokeBomb_Cloud_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.OnRep_Lifespan
// (BlueprintCallable, BlueprintEvent)

void AAOE_Ninja_SmokeBomb_Cloud_C::OnRep_Lifespan()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Ninja_SmokeBomb_Cloud_C", "OnRep_Lifespan");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AOE_Ninja_SmokeBomb_Cloud.AOE_Ninja_SmokeBomb_Cloud_C.OnRep_AOELifespan
// (BlueprintCallable, BlueprintEvent)

void AAOE_Ninja_SmokeBomb_Cloud_C::OnRep_AOELifespan()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AOE_Ninja_SmokeBomb_Cloud_C", "OnRep_AOELifespan");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma pack(pop)
