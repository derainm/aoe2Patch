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

DWORD Aok20a_u_7A5500;
//DWORD Aok20a_u_00632C48 = 0x05FEDEB;// 0x0631C54;// 0x0618C48;
DWORD Aok20a_u_00619C48 = 0x0618C48;// 0x0618C48;// 0x05FEDEB;
void __declspec(naked) Aok20a_u_UserPatchResolution007C1EF0()
{
	__asm {
		PUSH EBP
		MOV EBP, ESP
		PUSH EBX
		PUSH ESI
		PUSH EDI
		XOR EDX, EDX
		MOV ECX, DWORD PTR SS : [EBP + 0Ch]
		MOV EAX, DWORD PTR SS : [EBP + 14h]
		MOV DWORD PTR DS : [773024h] , ECX
		LEA ECX, DWORD PTR DS : [EAX + ECX - 1h]
		MOV DWORD PTR DS : [773028h] , ECX
		//JMP [Aok20a_u_00632C48]
		JMP[Aok20a_u_00619C48]
	}
}
void __declspec(naked) Aok20a_u_UserPatchResolution007C1F20()
{
	__asm {
			PUSH EBP
			MOV EBP, ESP
			PUSH EBX
			PUSH ESI
			PUSH EDI
			MOV EBX, DWORD PTR DS : [Aok20a_u_7A5500]
			XOR EDX, EDX
			AND EBX, EBX
			JE short uu_007C1F4A
			MOV DWORD PTR DS : [773004h] , EBX
			MOV DWORD PTR DS : [773008h] , EBX
			MOV ECX, DWORD PTR SS : [EBP + 30h]
			MOV EAX, DWORD PTR SS : [EBP + 34h]
			MOV DWORD PTR DS : [EBX + 8h] , ECX
			MOV DWORD PTR DS : [EBX + 0Ch] , EAX
			uu_007C1F4A :
			MOV ECX, DWORD PTR SS : [EBP + 0Ch]
			MOV EAX, DWORD PTR SS : [EBP + 14h]
			MOV DWORD PTR DS : [773024h] , ECX
			LEA ECX, DWORD PTR DS : [EAX + ECX - 1h]
			MOV DWORD PTR DS : [773028h] , ECX
			//JMP [Aok20a_u_00632C48]
			JMP[Aok20a_u_00619C48]
	}
}

/// 006139B4 == 0058FA7E

//to heap alloc 24444
//todo check if is ok 
DWORD Aok20a_u_006139B4 = 0x05FABE7 ;//(DWORD)u_UserPatchResolution_006139B4;
//DWORD uu_006137C9 = 0x05F8FF0;
DWORD Aok20a_uu_007C1EF0 = (DWORD)Aok20a_u_UserPatchResolution007C1EF0;
DWORD Aok20a_uu_007C1F20 = (DWORD)Aok20a_u_UserPatchResolution007C1F20;
DWORD Aok20a__005F8FF0 = 0x05FAB6A;//005FAB6B  |. 56             PUSH ESI
//005FAB6A  /$ 53             PUSH EBX
//DWORD ___005FCE14 = 0x05FAEF4;
void __declspec(naked) Aok20a_u_UserPatchResolution07C1C38()
{
	__asm {
			MOV ESI, EDI
			MOV ECX, DWORD PTR SS : [EBP + 24h]
			MOV EAX, DWORD PTR SS : [EBP + 20h]
			MOV EDX, DWORD PTR SS : [EBP + 30h]
			PUSH 0h
			PUSH ECX
			PUSH EAX
			PUSH 19h
			PUSH EDX
			PUSH 0h
			PUSH ESI
			PUSH EBP
			CMP EDX, 400h
			JGE short uu_007C1C60
			MOV DWORD PTR SS : [ESP + 20h] , 0D6h
			JMP short uu_007C1C68
			uu_007C1C60 :
			MOV DWORD PTR SS : [ESP + 20h] , 116h
			uu_007C1C68 :
			SUB ESI, EDX
			AND ESI, ESI
			JL uu_007C1EE3
			uu_007C1C72 :
			MOV DWORD PTR SS : [ESP + 4h] , ESI
			CALL Aok20a_uu_007C1EF0 
			//MOV DWORD PTR DS : [795038] , 0h
			MOV DWORD PTR DS : [773038h] , 0h
			MOV EDX, DWORD PTR SS : [EBP + 30h]
			SUB ESI, EDX
			ADD ESI, 190h
			AND ESI, ESI
			JG short uu_007C1C72
			MOV DWORD PTR SS : [ESP + 4h] , 0h
			CALL Aok20a_uu_007C1EF0  
			//MOV ECX, DWORD PTR DS : [795004]
			MOV ECX, DWORD PTR DS : [773004h]
			MOV EAX, DWORD PTR SS : [EBP + 30h]
			MOV EDX, DWORD PTR SS : [EBP + 34h]
			MOV DWORD PTR SS : [ESP + 38h] , ECX
			MOV DWORD PTR SS : [ESP + 3Ch] , EAX
			MOV DWORD PTR SS : [ESP + 40h] , EDX
			MOV DWORD PTR SS : [ESP + 44h] , EDI
			MOV DWORD PTR SS : [ESP + 48h] , EBX
			MOV ESI, EBX
			MOV EAX, DWORD PTR DS : [Aok20a_u_7A5500]
			TEST EAX, EAX
			JE short uu_007C1CDA
			CMP DWORD PTR DS : [EAX + 10h] , ESI
			JGE short uu_007C1D0D
			PUSH EAX
			CALL Aok20a_u_006139B4
			//CALL __005FCE14
			ADD ESP, 4h
			uu_007C1CDA :
			SHL ESI, 2h
			ADD ESI, 14h
			PUSH ESI
			PUSH 1h
			//CALL uu_006137C9
			CALL Aok20a__005F8FF0 //bug there ?? // age2_x1.006137C9 heap alloc 
			ADD ESP, 8h
			MOV DWORD PTR DS : [Aok20a_u_7A5500] , EAX
			TEST EAX, EAX
			JE uu_007C1EE3
			LEA ECX, DWORD PTR DS : [ESI - 14h]
			LEA EDI, DWORD PTR DS : [EAX + 14h]
			MOV EDX, ECX
			SHR ECX, 2h
			REP STOS DWORD PTR ES : [EDI]
			MOV EDI, DWORD PTR SS : [ESP + 44h]
			MOV DWORD PTR DS : [EAX + 10h] , EBX
			uu_007C1D0D :
			MOV EDX, DWORD PTR SS : [ESP + 3Ch]
			MOV EAX, EDI
			SUB EAX, EDX
			SHR EAX, 1h
			SUB EAX, EDX
			MOV ESI, EAX
			MOV EAX, EBX
			LEA EBX, DWORD PTR DS : [EDX + ESI]
			MOV EDX, DWORD PTR SS : [ESP + 40h]
			SUB EAX, EDX
			MOV DWORD PTR SS : [ESP + 10h] , EDX
			MOV DWORD PTR SS : [ESP + 8h] , EAX
			MOV ECX, DWORD PTR SS : [ESP + 38h]
			MOV EDX, DWORD PTR SS : [ESP + 48h]
			LEA ESI, DWORD PTR DS : [ECX + EDX * 4h - 1B8h]
			CMP DWORD PTR DS : [ESI] , 0h
			JNZ short uu_007C1D56
			ADD ESI, 78h
			CMP DWORD PTR DS : [ESI] , 0h
			JNZ short uu_007C1D56
			ADD ESI, 78h
			CMP DWORD PTR DS : [ESI] , 0h
			JE uu_007C1EE3
			uu_007C1D56 :
			MOV EAX, DWORD PTR DS : [ESI]
			MOV EDX, DWORD PTR SS : [ESP + 3Ch]
			MOV DWORD PTR SS : [ESP + 24h] , EAX
			MOV EAX, EDI
			SUB EAX, EDX
			LEA ECX, DWORD PTR DS : [EDI - 198h]
			LEA EDX, DWORD PTR DS : [EDI - 1h]
			MOV DWORD PTR SS : [ESP + 1Ch] , 0h
			//MOV DWORD PTR DS : [795038] , 1C7
			MOV DWORD PTR DS : [773038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 2Ch] , EDX
			MOV DWORD PTR SS : [ESP + 28h] , ECX
			MOV DWORD PTR SS : [ESP + 4h] , EAX
			CALL Aok20a_uu_007C1EF0
			MOV EAX, DWORD PTR SS : [ESP + 24h]
			MOV EDX, DWORD PTR SS : [ESP + 3Ch]
			MOV ECX, DWORD PTR DS : [EAX + 0Ch]
			CMP DWORD PTR SS : [ESP + 20h] , 116h
			JE short uu_007C1DBD
			MOV ESI, 0DAh
			LEA EBX, DWORD PTR DS : [EDI - 128h]
			MOV EDI, -26h
			LEA EBP, DWORD PTR DS : [EDX - 434h]
			JMP short uu_007C1DD3
			uu_007C1DBD :
			MOV ESI, 119h
			LEA EBX, DWORD PTR DS : [EDI - 160h]
			MOV EDI, -2Ah
			LEA EBP, DWORD PTR DS : [EDX - 576h]
			uu_007C1DD3 :
			XOR EDX, EDX
			LEA EAX, DWORD PTR DS : [ESI - 1h]
			MOV DWORD PTR SS : [ESP + 1Ch] , EDX
			//MOV DWORD PTR DS : [795038] , 1C7h
			MOV DWORD PTR DS : [773038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 2Ch] , EAX
			MOV DWORD PTR SS : [ESP + 28h] , EDX
			MOV DWORD PTR SS : [ESP + 4h] , EDX
			MOV EDX, DWORD PTR SS : [ESP + 44h]
			LEA EAX, DWORD PTR DS : [EBX + 40h]
			DEC EDX
			CMP ECX, EAX
			JL short uu_007C1E09
			CMP ECX, EDX
			JNZ short uu_007C1E18
			CALL Aok20a_uu_007C1F20
			JMP short uu_007C1E18
			uu_007C1E09 :
			MOV ECX, DWORD PTR SS : [ESP + 38h]
			//MOV DWORD PTR DS : [795004] , ECX
			MOV DWORD PTR DS : [773004h] , ECX
			CALL Aok20a_uu_007C1EF0
			uu_007C1E18 :
			MOV EAX, DWORD PTR SS : [ESP + 24h]
			CMP DWORD PTR DS : [EAX + 0Ch] , ESI
			JL uu_007C1EE3
			CMP DWORD PTR DS : [EAX + 8h] , EBX
			JG uu_007C1EE3
			LEA EDX, DWORD PTR DS : [ESI + 30h]
			uu_007C1E31 :
			MOV DWORD PTR SS : [ESP + 1Ch] , 0h
			//MOV DWORD PTR DS : [795038] , 1C7h
			MOV DWORD PTR DS : [773038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 2Ch] , EDX
			MOV DWORD PTR SS : [ESP + 28h] , ESI
			MOV DWORD PTR SS : [ESP + 4h] , EDI
			CALL Aok20a_uu_007C1F20
			ADD EDI, 30h
			ADD ESI, 30h
			ADD EBP, 30h
			LEA EDX, DWORD PTR DS : [ESI + 30h]
			CMP EDX, EBX
			JGE short uu_007C1EBE
			MOV DWORD PTR SS : [ESP + 1Ch] , 2h
			//MOV DWORD PTR DS : [795038] , 1C7h
			MOV DWORD PTR DS : [773038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 2Ch] , EDX
			MOV DWORD PTR SS : [ESP + 28h] , ESI
			MOV DWORD PTR SS : [ESP + 4h] , EBP
			CALL Aok20a_uu_007C1F20
			ADD EDI, 30h
			ADD ESI, 30h
			ADD EBP, 30h
			LEA EDX, DWORD PTR DS : [ESI + 30h]
			CMP EDX, EBX
			JLE short uu_007C1E31
			MOV EDX, EBX
			MOV DWORD PTR SS : [ESP + 1Ch] , 0h
			//MOV DWORD PTR DS : [795038] , 1C7
			MOV DWORD PTR DS : [773038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 2Ch] , EDX
			MOV DWORD PTR SS : [ESP + 28h] , ESI
			MOV DWORD PTR SS : [ESP + 4h] , EDI
			CALL Aok20a_uu_007C1F20
			JMP short uu_007C1EE3
			uu_007C1EBE :
			MOV EDX, EBX
			MOV DWORD PTR SS : [ESP + 1Ch] , 2h
			//MOV DWORD PTR DS : [795038] , 1C7
			MOV DWORD PTR DS : [773038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 2Ch] , EDX
			MOV DWORD PTR SS : [ESP + 28h] , ESI
			MOV DWORD PTR SS : [ESP + 4h] , EBP
			CALL Aok20a_uu_007C1F20
			uu_007C1EE3 :
			ADD ESP, 50h
			POP EBP
			POP EBX
			POP EDI
			POP ESI
			RETN
	}
 
}
void __declspec(naked)  Aok20a_uu_AddWideScreenPanel007C1D90()
{
	__asm {
		PUSH EBP
		MOV EBP, ESP
		PUSH EBX
		PUSH ESI
		PUSH EDI
		XOR EDX, EDX
		MOV ECX, DWORD PTR SS : [EBP + 0Ch]
		MOV EAX, DWORD PTR SS : [EBP + 14h]
		MOV DWORD PTR DS : [773024h] , ECX
		LEA ECX, DWORD PTR DS : [EAX + ECX - 1h]
		MOV DWORD PTR DS : [773028h] , ECX
		//JMP [u_00619BC0]
		JMP[Aok20a_u_00619C48]
	}
}

DWORD aok20a_u_007C1C38 = (DWORD)Aok20a_u_UserPatchResolution07C1C38;
DWORD Aok20a_uu_007C1D90 = (DWORD)Aok20a_uu_AddWideScreenPanel007C1D90;
void __declspec(naked) Aok20a_u_UserPatchResolution007C1B70()
{
	__asm {
			PUSH ESI
			PUSH EDI
			PUSH EBX
			PUSH EBP
			SUB ESP, 30h
			MOV EDI, DWORD PTR DS : [ESI + 20h]
			MOV ECX, DWORD PTR DS : [ESI + 1008h]
			//MOV ECX, DWORD PTR DS : [ESI + 100Ch]
			MOV EDX, DWORD PTR DS : [EDI + 0C0h]
			MOV EBX, DWORD PTR DS : [EDI + 0D0h]
			MOV DWORD PTR DS : [773000h] , EDX //00774000  =795000
			MOV EAX, DWORD PTR DS : [EBX + 3Ch]
			MOV EDX, DWORD PTR DS : [EBX + 40h]
			MOV DWORD PTR DS : [773004h] , EAX
			MOV DWORD PTR DS : [773008h] , EDX
			MOV EDI, DWORD PTR DS : [ESI + 14h]
			MOV EBX, DWORD PTR DS : [ESI + 18h]
			MOV EBP, DWORD PTR DS : [ECX + 0Ch]
			LEA EAX, DWORD PTR DS : [EBX - 1h]
			LEA EDX, DWORD PTR DS : [EDI - 1h]
			MOV DWORD PTR DS : [773080h] , 0h
			MOV DWORD PTR DS : [773084h] , EAX
			MOV DWORD PTR DS : [773088h] , 0h
			MOV DWORD PTR DS : [77308Ch] , EDX
			MOV DWORD PTR DS : [773038h] , 0h
			CMP EDI, 320h
			JE  _007C1C35
			CMP EDI, 400h
			JNZ  _u_007C1C78
			CMP EBX, 300h
			JL  _u_007C1C78
			_007C1C35 :
			MOV EDX, DWORD PTR SS : [EBP + 24h]
			MOV EAX, DWORD PTR SS : [EBP + 20h]
			PUSH 0h
			PUSH EDX
			PUSH EAX
			MOV EDX, DWORD PTR SS : [EBP + 30h]
			PUSH 19h
			PUSH EDX
			PUSH 0h
			PUSH 0h
			PUSH EBP
			CALL Aok20a_uu_007C1D90
			MOV EDX, DWORD PTR SS : [EBP + 34h]
			MOV EAX, EBX
			MOV DWORD PTR DS : [773038h] , 1C7h
			SUB EAX, EDX
			MOV DWORD PTR SS : [ESP + 10h] , EDX
			MOV DWORD PTR SS : [ESP + 8h] , EAX
			CALL Aok20a_uu_007C1D90
			ADD ESP, 50h
			POP EBP
			POP EBX
			POP EDI
			POP ESI
			RETN
			_u_007C1C78 :
			JMP[aok20a_u_007C1C38]
	}
}
//004E1C09   . 8B46 20        MOV EAX, DWORD PTR DS : [ESI + 20]
//004E1C0C   . 8B8E 08100000  MOV ECX, DWORD PTR DS : [ESI + 1008]
//004E1C12   . 6A 00          PUSH 0
//PUSH 522368  == push 004E1C20 
DWORD aok20a_007C1B70 = (DWORD)Aok20a_u_UserPatchResolution007C1B70;
void __declspec(naked) Aok20a_u_UserPatchResolution()
{
	__asm {
		//push 004E1C20h
		JMP aok20a_007C1B70
	}
}

//0x0448EE8
WORD Aok20a_u_7A5608;
DWORD Aok20a_u_7912A0= 0x06633D4;
DWORD Aok20a_u_004BD5A0 = 0x04BDA30 ;
DWORD Aok20a_u_00448F37 = 0x0449037;
void __declspec(naked)  Aok20a_u_AddWideScreenPanel0448EE8()
{
	__asm {
		//MOV ECX, DWORD PTR DS : [ESI + 884h]
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
		MOV EDX, DWORD PTR DS : [ECX + 6Ch]//[ECX + 68h]
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
	writeByte(0x0448195+1, 0x4B);
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
	//00448FE8   > 8B8E 84080000  MOV ECX,DWORD PTR DS:[ESI+884]
	InjectHook((void*)0x0448FE8, Aok20a_u_AddWideScreenPanel0448EE8, PATCH_JUMP);
 
 
#pragma endregion resize  screen 
 
 
	//user patch ress
	InjectHook((void*)0x04E211E, Aok20a_u_UserPatchResolution, PATCH_JUMP);
	Nop(0x04E2123, 1);
	BYTE Aok20a_u_PUSH_4E1C20[] = { 0x68, 0x30,0x21,0x4E,0x00};
	writeData(0x04E2119, Aok20a_u_PUSH_4E1C20, 5);
	writeByte(0x04E1C13, 0x90);

	//004DF521  |. 7C 2D          JL SHORT empires2.004DF550
	//004DFA31  |. 7C 2D          JL SHORT empires2.004DFA60
	writeByte(0x04DFA31, 0xEB);
 
	//fix bug  1280 force to jum 1024x768
	//004DA6F5     E9 52030000    JMP 004DAA4C
	BYTE _004DABF5[] = {0xE9,0x52,0x03,0x00,0x00,0x90};
	writeData(0x04DABF5, _004DABF5, 6);
 

}
DWORD Aok20a_u_Cord_X;
DWORD Aok20a_u_Cord_Y;
 
 
DWORD Aok20a_u_refwidth = 0x500;
DWORD Aok20a_u_refheight = 0x90;
// V = Y
// H = X

void Aok20a_u_patchEXE(int H, int V)
{
	////000E2CDE	V	-200
	//writeDwordF1(0x00DAF85, V - 200);//1280
		writeDwordF1(0x001BCD6,H + 0	  );
		writeDwordF1(0x001BD1C,V + 0	  );
		writeDwordF1(0x001BD23,H + 1	  );
		writeDwordF1(0x001D395,H + 0	  );
		writeDwordF1(0x001D3AF,V + 0	  );
		writeDwordF1(0x001D3D2,H + 1	  );
		writeDwordF1(0x001D98C,H + 0	  );
		writeDwordF1(0x001D9BB,V + 0	  );
		writeDwordF1(0x001D9C5,H + 1	  );
		writeDwordF1(0x0048710,H + 0	  );
		writeDwordF1(0x0048717,H + 1	  );
		writeDwordF1(0x004875C,H + 0	  );
		writeDwordF1(0x0048780,H + 1	  );
		writeDwordF1(0x0049007,H + 0	  );
		writeDwordF1(0x004900C,V + 0	  );
		writeDwordF1(0x0049022,H + 1	  );
		writeDwordF1(0x0049027,V + 1	  );
		writeDwordF1(0x0049067,H + 2	  );
		writeDwordF1(0x0050C58,V + 0	  );
		writeDwordF1(0x0050D30,V + 1	  );
		writeDwordF1(0x0050ED3,V + 2	  );
		writeDwordF1(0x00511E3,V + 0	  );
		writeDwordF1(0x00511FD,V + 1	  );
		writeDwordF1(0x005E09B,H + 0	  );
		writeDwordF1(0x005E0A6,H + 1	  );
		writeDwordF1(0x005E150,H + 0	  );
		writeDwordF1(0x005E159,V + 0	  );
		writeDwordF1(0x005E16B,H + 1	  );
		writeDwordF1(0x005E174,V + 1	  );
		writeDwordF1(0x005E186,H + 2	  );
		writeDwordF1(0x005E18F,V + 2	  );
		writeDwordF1(0x005E225,H + 0	  );
		writeDwordF1(0x005E22E,V + 0	  );
		writeDwordF1(0x005E2CD,H + 0	  );
		writeDwordF1(0x005E2D6,V + 0	  );
		writeDwordF1(0x005E37B,H + 0	  );
		writeDwordF1(0x005E384,V + 0	  );
		writeDwordF1(0x005E3EE,H + 0	  );
		writeDwordF1(0x005E444,H + 1	  );
		writeDwordF1(0x005E44B,H + 2	  );
		writeDwordF1(0x005E4B4,H + 0	  );
		writeDwordF1(0x005E4BB,H + 2	  );
		writeDwordF1(0x005E536,H + 0	  );
		writeDwordF1(0x005E53D,H + 2	  );
		writeDwordF1(0x005E5B0,H + 0	  );
		writeDwordF1(0x005E5B7,H + 2	  );
		writeDwordF1(0x00DABEB,H + 1	  );
		writeDwordF1(0x00DAC07,H + 1	  );
		writeDwordF1(0x00DAC1C,V - 279	  );
		writeDwordF1(0x00DAC2E,V - 249	  );
		writeDwordF1(0x00DAC33,H + 1	  );
		writeDwordF1(0x00DAC67,V - 206	  );
		writeDwordF1(0x00DACCA,V - 196	  );
		writeDwordF1(0x00DACD9,V - 178	  );
		writeDwordF1(0x00DAD11,V - 55	  );
		writeDwordF1(0x00DAE18,H - 301	  );
		writeDwordF1(0x00DAE2E,H - 241	  );
		writeDwordF1(0x00DAE44,H - 181	  );
		writeDwordF1(0x00DAE5A,H - 121	  );
		writeDwordF1(0x00DAE70,H - 62	  );
		writeDwordF1(0x00DAE82,V - 194	  );
		writeDwordF1(0x00DAE9B,V - 67	  );
		writeDwordF1(0x00DAEB4,V - 197	  );
		writeDwordF1(0x00DAECD,V - 197	  );
		writeDwordF1(0x00DAEE6,V - 167	  );
		writeDwordF1(0x00DAEFF,V - 77	  );
		writeDwordF1(0x00DAF18,V - 48	  );
		writeDwordF1(0x00DAF31,V - 44	  );
		writeDwordF1(0x00DAF42,H + 0	  );
		writeDwordF1(0x00DAF5E,H + 0	  );
		writeDwordF1(0x00DAF73,V - 230	  );
		writeDwordF1(0x00DAF85,V - 200	  );
		writeDwordF1(0x00DAF8A,H + 0	  );
		writeDwordF1(0x00DAFBE,V - 169	  );
		writeDwordF1(0x00DAFC5,H - 336	  );
		writeDwordF1(0x00DAFF3,H / 2 - 112);
		writeDwordF1(0x00DB01C,H - 649	  );
		writeDwordF1(0x00DB021,V - 152	  );
		writeDwordF1(0x00DB030,V - 144	  );
		writeDwordF1(0x00DB068,V - 21	  );
		writeDwordF1(0x00DB16F,H - 303	  );
		writeDwordF1(0x00DB185,H - 243	  );
		writeDwordF1(0x00DB19B,H - 183	  );
		writeDwordF1(0x00DB1B1,H - 123	  );
		writeDwordF1(0x00DB1C7,H - 64	  );
		writeDwordF1(0x00DB1D9,V - 154	  );
		writeDwordF1(0x00DB1E0,H - 308	  );
		writeDwordF1(0x00DB1F2,V - 49	  );
		writeDwordF1(0x00DB1F9,H - 309	  );
		writeDwordF1(0x00DB20B,V - 156	  );
		writeDwordF1(0x00DB212,H - 96	  );
		writeDwordF1(0x00DB224,V - 162	  );
		writeDwordF1(0x00DB22B,H - 69	  );
		writeDwordF1(0x00DB23D,V - 137	  );
		writeDwordF1(0x00DB244,H - 60	  );
		writeDwordF1(0x00DB256,V - 59	  );
		writeDwordF1(0x00DB25D,H - 61	  );
		writeDwordF1(0x00DB26F,V - 35	  );
		writeDwordF1(0x00DB276,H - 74	  );
		writeDwordF1(0x00DB288,V - 39	  );
		writeDwordF1(0x00DB28F,H - 102	  );
		writeDwordF1(0x00DF9F6,H + 2	  );
		writeDwordF1(0x00DF9FF,V + 2	  );
		writeDwordF1(0x00DFA24,H + 1	  );
		writeDwordF1(0x00DFA2D,V + 1	  );
		writeDwordF1(0x00DFA61,H + 0	  );
		writeDwordF1(0x00DFA6A,V + 0	  );
		writeDwordF1(0x00E2140,H + 1	  );
		writeDwordF1(0x00E4CAA,H + 1	  );
		writeDwordF1(0x00E4DD1,H + 0	  );
		writeDwordF1(0x00ED6A7,H + 0	  );
		writeDwordF1(0x00ED6CE,H + 1	  );
		writeDwordF1(0x00EF034,H + 0	  );
		writeDwordF1(0x00EF039,V + 0	  );
		writeDwordF1(0x00EF04F,H + 1	  );
		writeDwordF1(0x00EF054,V + 1	  );
		writeDwordF1(0x01A7C25,H + 1	  );
}
//int preX = 800;
//int PreY = 600;
//int ppreX = 1024;
//int pPreY = 768;
void  AOK20a_wide()
{

	int V = 0;
	int H = 0;

	int cpt = 0;

	V = (int)Aok20a_u_Cord_Y;
	H = (int)Aok20a_u_Cord_X;

	//change interfaace id 
	if (H < 1024 && V < 768)
	{
		BYTE _004DF5B2_BACK[] = { 0x81,0xC7,0x9C,0xC7,0x00,0x00 };
		writeData(0x04DF5B2, _004DF5B2_BACK, 6);
	}
	else
	{
		BYTE _004DF5B2[] = { 0x81, 0xC7,  0xB0, 0xC7, 0x00 , 0x00 };
		writeData(0x04DF5B2, _004DF5B2, 6);
	}

	Aok20a_u_patchEXE(H, V);
}

DWORD _AOK20a_wide = (DWORD)AOK20a_wide;
DWORD AOK20a_EAX_wide;
DWORD AOK20a_ECX_wide;
DWORD Aok20a_u_004DA6EA = 0x04DABEA ;
DWORD Aok20a_u_4DA6CC = 0x04DABCC;
void __declspec(naked)  Aok20a_u_AddWideScreenPanelreadXY()
{
	__asm {
		JNZ _u_4DA6CC
		MOV EAX, DWORD PTR DS : [ESI + 18h]//Y            
		MOV Aok20a_u_Cord_Y, EAX
		MOV EAX, DWORD PTR DS : [ESI + 14h]//X
		MOV Aok20a_u_Cord_X, EAX
		MOV AOK20a_EAX_wide, EAX
		MOV AOK20a_ECX_wide, ECX
		call _AOK20a_wide
		MOV EAX, AOK20a_EAX_wide
		MOV ECX, AOK20a_ECX_wide
 
		JMP Aok20a_u_004DA6EA
		_u_4DA6CC :
		JMP  Aok20a_u_4DA6CC
	};
}






//004D9E8A  |. 8BCE           MOV ECX,ESI                              ; |
DWORD Aok20a_004D998C = 0x04D9E8A;
DWORD Aok20a_Res__X = (DWORD)GetSystemMetrics(SM_CXSCREEN);
DWORD Aok20a_Res__Y = (DWORD)GetSystemMetrics(SM_CYSCREEN);
//0041BCC5     B9 00040000                  MOV ECX, 400
//0041BD3B  |> 8B8B D8010000  MOV ECX,DWORD PTR DS:[EBX+1D8]
DWORD Aok20a_0041BD2B = 0x041BD3B;
DWORD Aok20a_getscreenEax = 0x041BD3B; //0x041BD2B;
void __declspec(naked)  AOK20a_setScreenRes()
{
	__asm {
		/*	MOV ECX, Aok20a_Res__Y
			MOV EDX, Aok20a_Res__X
			MOV EDX, DWORD PTR DS : [6645C4]
			MOV EAX, DWORD PTR DS : [EDX + 24]
			MOV EAX, DWORD PTR DS : [EAX + 8F4]
			CMP EAX, 320*/

			//MOV ECX, _Aok20a_u_Cord_X
			//MOV EDX, _Aok20a_u_Cord_Y
			//MOV u_screenSaveEDX, EDX
			//MOV EDX, DWORD PTR DS : [6645C4h]
			//MOV EAX, DWORD PTR DS : [EDX + 24h]
			//MOV EDX, _Aok20a_u_Cord_X
			//MOV  DWORD PTR DS : [EAX + 8F4h] , EDX
			//MOV EAX, _Aok20a_u_Cord_Y
			//MOV  DWORD PTR DS : [EAX + 8F8h] , EDX


		MOV EAX, DWORD PTR DS : [EBX + 28h]////+24h
		MOV ECX, Aok20a_Res__X
		MOV DWORD PTR DS : [EAX + 8F4h] , ECX // 320h
		MOV ECX, DWORD PTR DS : [EBX + 28h]//+24h
		MOV Aok20a_getscreenEax, EAX
		MOV EAX, Aok20a_Res__Y
		MOV DWORD PTR DS : [ECX + 8FCh] , EAX//258
		MOV  Aok20a_Res__Y, EAX
		JMP Aok20a_0041BD2B



	}
}


void Aok20a_getxy()
{
	//004DABE5  |.^75 E5          \JNZ SHORT empires2.004DABCC
	InjectHook((void*)0x04DABE5, Aok20a_u_AddWideScreenPanelreadXY, PATCH_JUMP);
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
	//0041BCD5  |. B9 00040000    MOV ECX,400
	InjectHook((void*)0x041BCD5, AOK20a_setScreenRes, PATCH_JUMP);
	Aok20a_getxy();
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