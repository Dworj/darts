﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 UnityEngine.XR.TrackingSpaceType UnityEngine.XR.XRDevice::GetTrackingSpaceType()
extern void XRDevice_GetTrackingSpaceType_m160BD854CB480932E29017A40C46E648B064532A (void);
// 0x00000002 System.Boolean UnityEngine.XR.XRDevice::SetTrackingSpaceType(UnityEngine.XR.TrackingSpaceType)
extern void XRDevice_SetTrackingSpaceType_m8A35E391EF1DA72CD9091C137C384F31FF23530B (void);
// 0x00000003 System.Void UnityEngine.XR.XRDevice::InvokeDeviceLoaded(System.String)
extern void XRDevice_InvokeDeviceLoaded_mBE2198DE44A72E2F5059566C46B9907D82782790 (void);
static Il2CppMethodPointer s_methodPointers[3] = 
{
	XRDevice_GetTrackingSpaceType_m160BD854CB480932E29017A40C46E648B064532A,
	XRDevice_SetTrackingSpaceType_m8A35E391EF1DA72CD9091C137C384F31FF23530B,
	XRDevice_InvokeDeviceLoaded_mBE2198DE44A72E2F5059566C46B9907D82782790,
};
static const int32_t s_InvokerIndices[3] = 
{
	5129,
	4787,
	5063,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_VRModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_VRModule_CodeGenModule = 
{
	"UnityEngine.VRModule.dll",
	3,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
