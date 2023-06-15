#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[2] = 
{
	{ 11666, 0,  0 } /*tableIndex: 0 */,
	{ 11666, 1,  1 } /*tableIndex: 1 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[2] = 
{
	"settings",
	"buildSettings",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[12] = 
{
	{ 0, 0 } /* 0x06000001 System.Boolean Unity.XR.MockHMD.MockHMD::SetRenderMode(Unity.XR.MockHMD.MockHMDBuildSettings/RenderMode) */,
	{ 0, 0 } /* 0x06000002 System.Boolean Unity.XR.MockHMD.MockHMD::SetEyeResolution(System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000003 System.Boolean Unity.XR.MockHMD.MockHMD::SetMirrorViewCrop(System.Single) */,
	{ 0, 1 } /* 0x06000004 Unity.XR.MockHMD.MockHMDBuildSettings Unity.XR.MockHMD.MockHMDBuildSettings::get_Instance() */,
	{ 0, 0 } /* 0x06000005 System.Void Unity.XR.MockHMD.MockHMDBuildSettings::OnEnable() */,
	{ 0, 0 } /* 0x06000006 System.Void Unity.XR.MockHMD.MockHMDBuildSettings::.ctor() */,
	{ 1, 1 } /* 0x06000007 System.Boolean Unity.XR.MockHMD.MockHMDLoader::Initialize() */,
	{ 0, 0 } /* 0x06000008 System.Boolean Unity.XR.MockHMD.MockHMDLoader::Start() */,
	{ 0, 0 } /* 0x06000009 System.Boolean Unity.XR.MockHMD.MockHMDLoader::Stop() */,
	{ 0, 0 } /* 0x0600000A System.Boolean Unity.XR.MockHMD.MockHMDLoader::Deinitialize() */,
	{ 0, 0 } /* 0x0600000B System.Void Unity.XR.MockHMD.MockHMDLoader::.ctor() */,
	{ 0, 0 } /* 0x0600000C System.Void Unity.XR.MockHMD.MockHMDLoader::.cctor() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_XR_MockHMD[];
Il2CppSequencePoint g_sequencePointsUnity_XR_MockHMD[68] = 
{
	{ 53283, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 53283, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 53283, 1, 46, 46, 13, 14, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 53283, 1, 47, 47, 17, 54, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 53283, 1, 55, 55, 17, 46, 3, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 53283, 1, 56, 56, 17, 38, 9, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 53283, 1, 56, 56, 17, 38, 11, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 53283, 1, 56, 56, 0, 0, 17, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 53283, 1, 57, 57, 21, 59, 20, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 53283, 1, 57, 57, 21, 59, 20, kSequencePointKind_StepOut, 0, 9 } /* seqPointIndex: 9 */,
	{ 53283, 1, 59, 59, 17, 33, 26, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 53283, 1, 60, 60, 13, 14, 30, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 53284, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 53284, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 53284, 1, 68, 68, 9, 10, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 53284, 1, 69, 69, 13, 38, 1, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 53284, 1, 70, 70, 9, 10, 7, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 53286, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 53286, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 53286, 2, 21, 21, 9, 10, 0, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 53286, 2, 22, 22, 13, 129, 1, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 53286, 2, 22, 22, 13, 129, 12, kSequencePointKind_StepOut, 0, 21 } /* seqPointIndex: 21 */,
	{ 53286, 2, 23, 23, 13, 129, 18, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 53286, 2, 23, 23, 13, 129, 29, kSequencePointKind_StepOut, 0, 23 } /* seqPointIndex: 23 */,
	{ 53286, 2, 25, 25, 13, 63, 35, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 53286, 2, 25, 25, 13, 63, 35, kSequencePointKind_StepOut, 0, 25 } /* seqPointIndex: 25 */,
	{ 53286, 2, 26, 26, 13, 39, 41, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 53286, 2, 26, 26, 13, 39, 43, kSequencePointKind_StepOut, 0, 27 } /* seqPointIndex: 27 */,
	{ 53286, 2, 26, 26, 0, 0, 49, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 53286, 2, 27, 27, 13, 14, 52, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 53286, 2, 28, 28, 17, 65, 53, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 53286, 2, 28, 28, 17, 65, 59, kSequencePointKind_StepOut, 0, 31 } /* seqPointIndex: 31 */,
	{ 53286, 2, 29, 29, 13, 14, 65, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 53286, 2, 31, 31, 13, 25, 66, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 53286, 2, 32, 32, 9, 10, 70, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 53287, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 53287, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 53287, 2, 36, 36, 9, 10, 0, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 53287, 2, 37, 37, 13, 50, 1, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 53287, 2, 37, 37, 13, 50, 2, kSequencePointKind_StepOut, 0, 39 } /* seqPointIndex: 39 */,
	{ 53287, 2, 38, 38, 13, 48, 8, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 53287, 2, 38, 38, 13, 48, 9, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 53287, 2, 39, 39, 13, 25, 15, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 53287, 2, 40, 40, 9, 10, 19, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 53288, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 53288, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 53288, 2, 44, 44, 9, 10, 0, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 53288, 2, 45, 45, 13, 47, 1, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 53288, 2, 45, 45, 13, 47, 2, kSequencePointKind_StepOut, 0, 48 } /* seqPointIndex: 48 */,
	{ 53288, 2, 46, 46, 13, 49, 8, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 53288, 2, 46, 46, 13, 49, 9, kSequencePointKind_StepOut, 0, 50 } /* seqPointIndex: 50 */,
	{ 53288, 2, 47, 47, 13, 25, 15, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 53288, 2, 48, 48, 9, 10, 19, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 53289, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 53289, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 53289, 2, 52, 52, 9, 10, 0, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 53289, 2, 53, 53, 13, 50, 1, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 53289, 2, 53, 53, 13, 50, 2, kSequencePointKind_StepOut, 0, 57 } /* seqPointIndex: 57 */,
	{ 53289, 2, 54, 54, 13, 52, 8, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 53289, 2, 54, 54, 13, 52, 9, kSequencePointKind_StepOut, 0, 59 } /* seqPointIndex: 59 */,
	{ 53289, 2, 55, 55, 13, 25, 15, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 53289, 2, 56, 56, 9, 10, 19, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 53291, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 53291, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 53291, 2, 14, 15, 9, 54, 0, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 53291, 2, 14, 15, 9, 54, 0, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 53291, 2, 16, 17, 9, 52, 10, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 53291, 2, 16, 17, 9, 52, 10, kSequencePointKind_StepOut, 0, 67 } /* seqPointIndex: 67 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnity_XR_MockHMD[];
Il2CppSequencePoint g_sequencePointsUnity_XR_MockHMD[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "D:\\Programmieren\\Unity\\iris-virtual-assistant\\Library\\PackageCache\\com.unity.xr.mock-hmd@1.3.1-preview.1\\Runtime\\MockHMDBuildSettings.cs", { 71, 93, 38, 200, 195, 23, 73, 85, 121, 110, 19, 140, 152, 39, 180, 210} }, //1 
{ "D:\\Programmieren\\Unity\\iris-virtual-assistant\\Library\\PackageCache\\com.unity.xr.mock-hmd@1.3.1-preview.1\\Runtime\\MockHMDLoader.cs", { 121, 246, 68, 1, 173, 156, 126, 177, 52, 116, 184, 173, 153, 47, 157, 222} }, //2 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[2] = 
{
	{ 7076, 1 },
	{ 7077, 2 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[5] = 
{
	{ 0, 32 },
	{ 0, 72 },
	{ 0, 21 },
	{ 0, 21 },
	{ 0, 21 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[12] = 
{
	{ 0, 0, 0 } /* System.Boolean Unity.XR.MockHMD.MockHMD::SetRenderMode(Unity.XR.MockHMD.MockHMDBuildSettings/RenderMode) */,
	{ 0, 0, 0 } /* System.Boolean Unity.XR.MockHMD.MockHMD::SetEyeResolution(System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Boolean Unity.XR.MockHMD.MockHMD::SetMirrorViewCrop(System.Single) */,
	{ 32, 0, 1 } /* Unity.XR.MockHMD.MockHMDBuildSettings Unity.XR.MockHMD.MockHMDBuildSettings::get_Instance() */,
	{ 0, 0, 0 } /* System.Void Unity.XR.MockHMD.MockHMDBuildSettings::OnEnable() */,
	{ 0, 0, 0 } /* System.Void Unity.XR.MockHMD.MockHMDBuildSettings::.ctor() */,
	{ 72, 1, 1 } /* System.Boolean Unity.XR.MockHMD.MockHMDLoader::Initialize() */,
	{ 21, 2, 1 } /* System.Boolean Unity.XR.MockHMD.MockHMDLoader::Start() */,
	{ 21, 3, 1 } /* System.Boolean Unity.XR.MockHMD.MockHMDLoader::Stop() */,
	{ 21, 4, 1 } /* System.Boolean Unity.XR.MockHMD.MockHMDLoader::Deinitialize() */,
	{ 0, 0, 0 } /* System.Void Unity.XR.MockHMD.MockHMDLoader::.ctor() */,
	{ 0, 0, 0 } /* System.Void Unity.XR.MockHMD.MockHMDLoader::.cctor() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_XR_MockHMD;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_XR_MockHMD = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	68,
	(Il2CppSequencePoint*)g_sequencePointsUnity_XR_MockHMD,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	2,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
