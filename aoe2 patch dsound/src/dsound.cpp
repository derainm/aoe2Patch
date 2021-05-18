#include <Windows.h>
#include <stdio.h>
#include <direct.h>
#include <io.h>
typedef uintptr_t addr;
#include "MemoryMgr.h"
#include "../build/Aoc10CPatch.h"
#include "../build/Aoc10Patch.h"
//files check for 1.0e
#include <sys/stat.h>
#include <string>
#include <fstream>
#include "../build/Aok20Patch.h"
#include "../build/Aok20aPatch.h"

struct dsound_dll
{
	HMODULE dll;
	FARPROC DirectSoundCreate;
	FARPROC DirectSoundEnumerateA;
	FARPROC DirectSoundEnumerateW;
	FARPROC DllCanUnloadNow;
	FARPROC DllGetClassObject;
	FARPROC DirectSoundCaptureCreate;
	FARPROC DirectSoundCaptureEnumerateA;
	FARPROC DirectSoundCaptureEnumerateW;
	FARPROC GetDeviceID;
	FARPROC DirectSoundFullDuplexCreate;
	FARPROC DirectSoundCreate8;
	FARPROC DirectSoundCaptureCreate8;
} dsound;

WRAPPER void _DirectSoundCreate() { VARJMP(dsound.DirectSoundCreate); }
WRAPPER void _DirectSoundEnumerateA() { VARJMP(dsound.DirectSoundEnumerateA); }
WRAPPER void _DirectSoundEnumerateW() { VARJMP(dsound.DirectSoundEnumerateW); }
WRAPPER void _DllCanUnloadNow() { VARJMP(dsound.DllCanUnloadNow); }
WRAPPER void _DllGetClassObject() { VARJMP(dsound.DllGetClassObject); }
WRAPPER void _DirectSoundCaptureCreate() { VARJMP(dsound.DirectSoundCaptureCreate); }
WRAPPER void _DirectSoundCaptureEnumerateA() { VARJMP(dsound.DirectSoundCaptureEnumerateA); }
WRAPPER void _DirectSoundCaptureEnumerateW() { VARJMP(dsound.DirectSoundCaptureEnumerateW); }
WRAPPER void _GetDeviceID() { VARJMP(dsound.GetDeviceID); }
WRAPPER void _DirectSoundFullDuplexCreate() { VARJMP(dsound.DirectSoundFullDuplexCreate); }
WRAPPER void _DirectSoundCreate8() { VARJMP(dsound.DirectSoundCreate8); }
WRAPPER void _DirectSoundCaptureCreate8() { VARJMP(dsound.DirectSoundCaptureCreate8); }

void init_dsound(HINSTANCE hInst)
{
	TCHAR dsound_dll_path[MAX_PATH];

	GetEnvironmentVariable("windir", dsound_dll_path, MAX_PATH);
	strcat_s(dsound_dll_path, "\\System32\\dsound.dll");

	dsound.dll = LoadLibrary(dsound_dll_path);

	dsound.DirectSoundCreate = GetProcAddress(dsound.dll, "DirectSoundCreate");
	dsound.DirectSoundEnumerateA = GetProcAddress(dsound.dll, "DirectSoundEnumerateA");
	dsound.DirectSoundEnumerateW = GetProcAddress(dsound.dll, "DirectSoundEnumerateW");
	dsound.DllCanUnloadNow = GetProcAddress(dsound.dll, "DllCanUnloadNow");
	dsound.DllGetClassObject = GetProcAddress(dsound.dll, "DllGetClassObject");
	dsound.DirectSoundCaptureCreate = GetProcAddress(dsound.dll, "DirectSoundCaptureCreate");
	dsound.DirectSoundCaptureEnumerateA = GetProcAddress(dsound.dll, "DirectSoundCaptureEnumerateA");
	dsound.DirectSoundCaptureEnumerateW = GetProcAddress(dsound.dll, "DirectSoundCaptureEnumerateW");
	dsound.GetDeviceID = GetProcAddress(dsound.dll, "GetDeviceID");
	dsound.DirectSoundFullDuplexCreate = GetProcAddress(dsound.dll, "DirectSoundFullDuplexCreate");
	dsound.DirectSoundCreate8 = GetProcAddress(dsound.dll, "DirectSoundCreate8");
	dsound.DirectSoundCaptureCreate8 = GetProcAddress(dsound.dll, "DirectSoundCaptureCreate8");
}

int AoK20ab, AoK20, AoC10Ce, AoC10, UserPatch;//(user patch version aofe + 1.5 +1.1 .. etc)

void init()
{
	AoK20ab = (*(int*)0x005FB0D3 == 0x042474FF);
	AoK20 = (*(int*)0x005FB0D3 ==   0x0C24548D);
	AoC10Ce = (*(int*)0x006146F0 == 0x042474FF);
	AoC10 = (*(int*)0x006146F0 ==   0x0A053044);
	//UserPatch15 = (AoC10Ce && *(int*)0x0051A3B8 == 0x002A6674);
	UserPatch = (AoC10Ce && *(int*)0x0051A3B8 != 0x003D1446);
	//todo add aofe 
	
	if (AoC10Ce && !UserPatch)
	{
		Aoc10CPatchHook(true,true);
	}
	if (AoC10)
	{
		Aoc10PatchHook(true, true);
	}
	if (AoK20)
	{
		Aoc20PatchHook(false,true);
	}	
	if (AoK20ab)
	{
		Aoc20aPatchHook(false,true);
	}
}



inline bool exists_test3(const std::string& name) {
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}

BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		//int AoC10e = (*(int*)0x0680A18 == 0x7);
		init_dsound(hInst);
		if ( !exists_test3("on.ini"))// !AoC10e&&
		{
			init();
		}

	}

	if (reason == DLL_PROCESS_DETACH)
	{
		FreeLibrary(dsound.dll);
	}

	return TRUE;
}
