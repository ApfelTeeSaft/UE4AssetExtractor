﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Landscape

#include "Basic.hpp"


#pragma pack(push, 0x4)
namespace SDK::Params
{

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// 0x0004 (0x0004 - 0x0000)
struct LandscapeProxy_ChangeLODDistanceFactor final
{
public:
	float                                         InLODDistanceFactor;                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_ChangeLODDistanceFactor) == 0x000004, "Wrong alignment on LandscapeProxy_ChangeLODDistanceFactor");
static_assert(sizeof(LandscapeProxy_ChangeLODDistanceFactor) == 0x000004, "Wrong size on LandscapeProxy_ChangeLODDistanceFactor");
static_assert(offsetof(LandscapeProxy_ChangeLODDistanceFactor, InLODDistanceFactor) == 0x000000, "Member 'LandscapeProxy_ChangeLODDistanceFactor::InLODDistanceFactor' has a wrong offset!");

// Function Landscape.LandscapeProxy.EditorApplySpline
// 0x0028 (0x0028 - 0x0000)
struct LandscapeProxy_EditorApplySpline final
{
public:
	class USplineComponent*                       InSplineComponent;                                 // 0x0000(0x0004)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartWidth;                                        // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndWidth;                                          // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartSideFalloff;                                  // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndSideFalloff;                                    // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartRoll;                                         // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndRoll;                                           // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumSubdivisions;                                   // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRaiseHeights;                                     // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bLowerHeights;                                     // 0x0021(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ULandscapeLayerInfoObject*              PaintLayer;                                        // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeProxy_EditorApplySpline) == 0x000004, "Wrong alignment on LandscapeProxy_EditorApplySpline");
static_assert(sizeof(LandscapeProxy_EditorApplySpline) == 0x000028, "Wrong size on LandscapeProxy_EditorApplySpline");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, InSplineComponent) == 0x000000, "Member 'LandscapeProxy_EditorApplySpline::InSplineComponent' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, StartWidth) == 0x000004, "Member 'LandscapeProxy_EditorApplySpline::StartWidth' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EndWidth) == 0x000008, "Member 'LandscapeProxy_EditorApplySpline::EndWidth' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, StartSideFalloff) == 0x00000C, "Member 'LandscapeProxy_EditorApplySpline::StartSideFalloff' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EndSideFalloff) == 0x000010, "Member 'LandscapeProxy_EditorApplySpline::EndSideFalloff' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, StartRoll) == 0x000014, "Member 'LandscapeProxy_EditorApplySpline::StartRoll' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, EndRoll) == 0x000018, "Member 'LandscapeProxy_EditorApplySpline::EndRoll' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, NumSubdivisions) == 0x00001C, "Member 'LandscapeProxy_EditorApplySpline::NumSubdivisions' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, bRaiseHeights) == 0x000020, "Member 'LandscapeProxy_EditorApplySpline::bRaiseHeights' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, bLowerHeights) == 0x000021, "Member 'LandscapeProxy_EditorApplySpline::bLowerHeights' has a wrong offset!");
static_assert(offsetof(LandscapeProxy_EditorApplySpline, PaintLayer) == 0x000024, "Member 'LandscapeProxy_EditorApplySpline::PaintLayer' has a wrong offset!");

}

#pragma pack(pop)
