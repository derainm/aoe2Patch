#include "Aoc10CPatch.h"
typedef uintptr_t addr;
#include "../src/MemoryMgr.h"


void nocdAOK20A()
{
 
	Nop(0x04F064C, 8);
	Nop(0x04F58E1 , 8);
	writeByte(0x04F4C88 , 0xEB);
	//0050A448
	writeByte(0x04F8B14 , 0xEB);
	writeByte(0x04F4CE1, 0xEB);
	writeByte(0x04F8B70, 0xEB);
}
//0x0448EE8
WORD Aok20a_u_7A5608;
DWORD Aok20a_u_7912A0;
DWORD Aok20a_u_004BD5A0 = 0x04BDA30 ;
DWORD Aok20a_u_00448F37 = 0x0449037;
void __declspec(naked)  Aok20a_u_AddWideScreenPanel0448EE8()
{
	__asm {
		MOV ECX, DWORD PTR DS : [ESI + 888h]
		CALL Aok20a_u_004BD5A0 //age2_x1.005479C0
		MOV EDI, EAX
		XOR EBP, EBP
		MOV BP, AX
		SHR EDI, 10h
		JMP Aok20a_u_00448F37 //age2_x1.005BC2EE //00448F37   > 6A 00          PUSH 0x0
	}
}

DWORD Aok20a_u_7A5609;
DWORD Aok20a_u_004BCF90= 0x04BD410 ;
DWORD Aok20a_u_004BCEB0= 0x04BD330 ;
DWORD Aok20a_u_005FCE14 = 0x05FAEF4;
DWORD Aok20a_u_04BBF20 = 0x04BC3A0 ;
char Aok20a_u_printRes[] = "%d x %d";
void __declspec(naked)  Aok20a_u_AddWideScreenPanel007BF9D0()
{
	__asm {
			PUSH ESI
			PUSH EDI
			PUSH EBX
			MOV EAX, DWORD PTR DS : [Aok20a_u_7A5608]
			MOV ECX, DWORD PTR SS : [ESP + 10h]
			CMP AL, BYTE PTR DS : [ECX + 54h]
			JNZ _007BFA69
			MOV ESI, DWORD PTR DS : [ECX + 0Ch]
			CMP ESI, 320h
			JL _007BFA69
			MOV EDI, DWORD PTR DS : [ECX + 8h]
			CMP EDI, 258h
			JL _007BFA69
			MOV EBX, DWORD PTR SS : [ESP + 14h]
			SUB ESP, 20h
			LEA ECX, DWORD PTR SS : [ESP]
			PUSH EDI
			PUSH ESI
			PUSH offset  Aok20a_u_printRes//_007BFA70; ASCII "%d x %d"
			PUSH ECX
			CALL Aok20a_u_005FCE14// age2_x1.0061442B  005FCE14  /$ 55             PUSH EBP
			ADD ESP, 10h
			LEA EDX, DWORD PTR SS : [ESP]
			MOV ECX, EBX
			XOR EAX, EAX
			PUSH EAX
			PUSH EDI
			MOV WORD PTR SS : [ESP + 2h] , SI
			PUSH EDX
			CALL Aok20a_u_004BCF90 //age2_x1.005473A0 
			ADD ESP, 20h
			//MOV BYTE PTR DS:[_7A5609]  , 1h
			MOV BYTE PTR DS : [Aok20a_u_7A5608 + 1] , 1h
			MOV ECX, Aok20a_u_7912A0
			MOV ECX, DWORD PTR DS : [ECX]
			MOV ECX, DWORD PTR DS : [ECX + 24h]
			CMP DWORD PTR DS : [ECX + 8F4h] , ESI
			JNZ _007BFA69
			CMP DWORD PTR DS : [ECX + 8FCh] , EDI
			JNZ _007BFA69
			MOV ECX, EBX
			MOVSX EAX, WORD PTR DS : [ECX + 0FCh]
			DEC EAX
			PUSH EAX
			CALL Aok20a_u_004BCEB0 //age2_x1.005472B0
			MOV ECX, EBX
			PUSH 1h
			PUSH 0h
			PUSH 7h
			CALL Aok20a_u_04BBF20//age2_x1.00546250
			_007BFA69 :
			POP EBX
			POP EDI
			POP ESI
			RETN 8h
			NOP
			//_007BFA70:
			//db "%d x %d", 0
	}
}

//007BF980

//004BDA70   $ 8B01           MOV EAX,DWORD PTR DS:[ECX]
DWORD Aok20a_u_004BD5E0= 0x04BDA70;//004BD5E0   $ 8B01           MOV EAX,DWORD PTR DS:[ECX]

DWORD Aok20a_u_007BF9D0 = (DWORD)Aok20a_u_AddWideScreenPanel007BF9D0;
void __declspec(naked)  AOK20au_AddWideScreenPanel007BF980()
{
	__asm {
		MOV ECX, DWORD PTR SS : [ESP + 4h]
		XOR EAX, EAX
		MOV  WORD PTR DS : [Aok20a_u_7A5608] , 20h//WORD PTR DS : [
		MOV DWORD PTR DS : [ECX + 174h] , EAX//[ECX + 174h] 
		CALL Aok20a_u_004BD5E0 //00547A00
		_007BF99A :
		MOV ECX, Aok20a_u_7912A0
		MOV ECX, DWORD PTR DS : [ECX]
		MOV EDX, DWORD PTR DS : [ECX + 68h]//[ECX + 6Ch]
		MOV ECX, DWORD PTR SS : [ESP + 4h]
		MOV EAX, DWORD PTR DS : [EDX + 18h]
		PUSH Aok20a_u_007BF9D0//age2_x1.007BF9D0
		PUSH ECX
		PUSH 0h
		MOV ECX, DWORD PTR DS : [EAX]
		PUSH 0h
		PUSH EAX
		CALL DWORD PTR DS : [ECX + 20h]
		CMP  WORD PTR DS : [Aok20a_u_7A5608] , 20h
		MOV BYTE PTR DS : [Aok20a_u_7A5608] , 8h
		JE _007BF99A
		RETN 4h
	}
}
////00448551  |. 8B6C24 4C      MOV EBP,DWORD PTR SS:[ESP+0x4C]
//004A5230  /$ 6A FF          PUSH -0x1
//004A55F0  /$ 56             PUSH ESI
//004A55F0  /$ 56             PUSH ESI
//007BF900   8B6C24 4C         MOV EBP,DWORD PTR SS:[ESP+0x4C]
DWORD AOK20a_u_00448925 = 0x0448A25 ;
DWORD AOK20a_u_004A5230 = 0x04A55D0; 
DWORD Aok20a_u_007BF980 =(DWORD)AOK20au_AddWideScreenPanel007BF980;;
DWORD Aok20a_u_004A55F0= 0x04A5990 ;//0x04A55F0 2.0
DWORD Aok20a_u_0044869C= 0x044879C;
//0044879C  |> 6A 00          PUSH 0                                   ; /Arg11 = 00000000
//0044869C  |> 6A 00          PUSH 0x0                                 ; /Arg11 = 00000000

void __declspec(naked)  AOK20A_u_AddWideScreenPanel00448551()
{
	__asm {
		MOV EBP, DWORD PTR SS : [ESP + 4Ch]
		XOR EDI, EDI
		PUSH 0Ah
		PUSH 73h
		PUSH 80h
		PUSH 0F7h
		PUSH 4Bh
		LEA EDI, DWORD PTR DS : [ESI + 888h]
		PUSH EDI
		PUSH ESI
		MOV ECX, ESI
		CALL AOK20a_u_004A5230//0055E9E0
		TEST EAX, EAX
		JE _u_00448925 // 005BBCFA
		MOV ECX, DWORD PTR DS : [EDI]
		PUSH 14h
		LEA EAX, DWORD PTR DS : [ESI + 88Ch]
		PUSH ECX
		PUSH EAX
		MOV ECX, ESI
		CALL Aok20a_u_004A55F0 //0055EDA0
		TEST EAX, EAX
		JE _u_00448925 // 005BBCFA
		MOV ECX, DWORD PTR DS : [ESI + 888h]
		PUSH ECX
		CALL Aok20a_u_007BF980 //age2_x1.007BF980
		JMP Aok20a_u_0044869C //age2_x1.005BBA15
		_u_00448925 :
		JMP[AOK20a_u_00448925]
	}
}


DWORD AOK20a_7912A0;
void AOK20a_UserPatchWideScreen()//DWORD* myCord_X, DWORD* myCord_Y)
{



	///resize  screen 
#pragma region resize  screen 
		//00448066  |. 6A 69          |PUSH 0x69                               ; |Arg4 = 00000069
	writeByte(0x0448166+1, 0x6E);
	//00448095  |. 6A 46          |PUSH 0x46                               ; |Arg3 = 00000046
	//00448195  |. 6A 46          |PUSH 46                                 ; |Arg3 = 00000046
	writeByte(0x0448195, 0x4B);
	//00448F6B   . 74 26          JE SHORT empires2.00448F93
	//0044906B   . 74 26          JE SHORT empires2.00449093
	writeByte(0x044906B, 0x66);
	writeByte(0x044906C, 0x90);
	//00448F81   . 8B0D C4456600  MOV ECX,DWORD PTR DS:[6645C4]
	//0044906D   . 8B0D D4336600  MOV ECX,DWORD PTR DS:[6633D4]
	//AOK20a_7912A0 = 0x06645C4;//7912A0
	AOK20a_7912A0 = 0x06633D4;//7912A0
	//00448551  |. 8B6C24 4C      MOV EBP,DWORD PTR SS:[ESP+0x4C]
	//00448651  |. 8B6C24 4C      MOV EBP,DWORD PTR SS:[ESP+4C]
	InjectHook((void*)0x0448651, AOK20A_u_AddWideScreenPanel00448551, PATCH_JUMP);
	//007BF980
	//u_00448925 = 0x0448925;
	//u_004A5230 = 0x04A5230;
	//u_0044869C = 0x044869C;
	//Aok20a_u_004BCF90 = 0x04BCF90;
	//Aok20a_u_004BCEB0 = 0x04BCEB0;
	//Aok20a_u_005FCE14 = 0x05FCE14;
	//Aok20a_u_04BBF20 = 0x04BBF20;
	//u_004A55F0 = 0x04A55F0;
	//Aok20a_u_004BD5E0 = 0x04BD5E0;
	//Aok20a_u_007BF980 = (DWORD)u_AddWideScreenPanel007BF980;
	//Aok20a_u_007BF9D0 = (DWORD)Aok20a_u_AddWideScreenPanel007BF9D0;
	//00448EE8   > 8B8E 84080000  MOV ECX,DWORD PTR DS:[ESI+0x884]
	//Aok20a_u_004BD5A0 = 0x04BD5A0;
	//Aok20a_u_00448F37 = 0x0448F37;
	InjectHook((void*)0x0448EE8, Aok20a_u_AddWideScreenPanel0448EE8, PATCH_JUMP);
 
 
#pragma endregion resize  screen 
 
	/*tttttttttttttttttttttttttttttttodo

	//user patch ress
	InjectHook((void*)0x04E1C0E, u_UserPatchResolution, PATCH_JUMP);
	BYTE u_PUSH_4E1C20[] = { 0x68,0x20,0x1C,0x4E,0x00 };
	writeData(0x04E1C09, u_PUSH_4E1C20, 5);
	writeByte(0x04E1C13, 0x90);
	//004DF521  |. 7C 2D          JL SHORT empires2.004DF550
	writeByte(0x04DF521, 0xEB);
 
	//fix bug  1280 force to jum 1024x768
	//004DA6F5     E9 52030000    JMP 004DAA4C
	BYTE _004DAA4C[] = { 0xE9,0x52,0x03,0x00,0x00,0x90 };
	writeData(0x04DA6F5, _004DAA4C, 6);
 */

}


void AoK20AWidescreen()
{

	//force to user interface drs instead of .ws 
	//0065C470  69 6E 74 65 72 66 61 63 2E 64 72 73 00           interfac.drs.
	BYTE  Aoc10CinterfacDrs[13]{ 0x69,0x6E,0x74,0x65,0x72,0x66,0x61,0x63,0x2E,0x64,0x72,0x73,0x00 };
	writeData((DWORD)0x065C470, Aoc10CinterfacDrs, 13);
	////hide conqueror logo
	//BYTE aoclogoconqueror[5] = { 0x6A,0x00,0x90,0x90,0x90 };
	//writeData(0x05172EE, aoclogoconqueror, 5);
	AOK20a_UserPatchWideScreen();
 
 
}

void windowedModAok20a(bool windowed)
{
	if (windowed)
	{
		LoadLibraryA("windmode.dll");
		BYTE c_6690[] =
		{
		0x66,0x90
		};
		//0041F86A  |. 75 2D          JNZ SHORT empires2.0041F899
		writeData(0x041F86A, c_6690, 2);
		//0048B06D  |. 75 3B          JNZ SHORT empires2.0048B0AA
		writeData(0x048B06D, c_6690, 2);
		//0041F86A  |. 75 2D          JNZ SHORT empires2.0041F899
		writeData(0x041F86A, c_6690, 2);
		//005E0EDB  |. 75 17          JNZ SHORT empires2.005E0EF4
		writeData(0x05E0EDB, c_6690, 2);
		//0045E9E1  |. 6A 00          PUSH 0                                   ; /Flags = 0
		Patch(0x045E9E1+1, (BYTE)0x03);

	}
}
void Aoc20aPatchHook(bool wideScreenCentred, bool windowed) 
{
	nocdAOK20A();
	AoK20AWidescreen();
	windowedModAok20a(windowed);
}