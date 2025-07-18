﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Ninja_ThrowingStars

#include "Basic.hpp"

#include "B_Prj_Ninja_ThrowingStars_classes.hpp"
#include "B_Prj_Ninja_ThrowingStars_parameters.hpp"


#pragma pack(push, 0x4)
namespace SDK
{

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ExecuteUbergraph_B_Prj_Ninja_ThrowingStars
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Ninja_ThrowingStars_C::ExecuteUbergraph_B_Prj_Ninja_ThrowingStars(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ninja_ThrowingStars_C", "ExecuteUbergraph_B_Prj_Ninja_ThrowingStars");

	Params::B_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bFromSweep                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FHitResult&                SweepResult                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AB_Prj_Ninja_ThrowingStars_C::BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ninja_ThrowingStars_C", "BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ShouldPierce
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ninja_ThrowingStars_C::ShouldPierce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ninja_ThrowingStars_C", "ShouldPierce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.HomeTargetDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                      InstigatedBy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FVector&                   HitLocation_0                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*              FHitComponent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             BoneName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FVector&                   Momentum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Ninja_ThrowingStars_C::HomeTargetDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation_0, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ninja_ThrowingStars_C", "HomeTargetDied");

	Params::B_Prj_Ninja_ThrowingStars_C_HomeTargetDied Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation_0 = std::move(HitLocation_0);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.SetHoming
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ninja_ThrowingStars_C::SetHoming()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ninja_ThrowingStars_C", "SetHoming");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const TArray<class AActor*>&            HitActors                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// const TArray<struct FHitResult>&        HitResults                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AB_Prj_Ninja_ThrowingStars_C::OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ninja_ThrowingStars_C", "OnExploded");

	Params::B_Prj_Ninja_ThrowingStars_C_OnExploded Parms{};

	Parms.HitActors = std::move(HitActors);
	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           Other                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bSelfMoved                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FVector&                   HitLocation_0                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FVector&                   HitNormal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FVector&                   NormalImpulse                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FHitResult&                Hit                                                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AB_Prj_Ninja_ThrowingStars_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation_0, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ninja_ThrowingStars_C", "ReceiveHit");

	Params::B_Prj_Ninja_ThrowingStars_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation_0 = std::move(HitLocation_0);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Ninja_ThrowingStars_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ninja_ThrowingStars_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnRep_HitLocation
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ninja_ThrowingStars_C::OnRep_HitLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ninja_ThrowingStars_C", "OnRep_HitLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnRep_Piercing
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ninja_ThrowingStars_C::OnRep_Piercing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ninja_ThrowingStars_C", "OnRep_Piercing");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma pack(pop)
