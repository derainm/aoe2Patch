#include "Aoc10Patch.h"
typedef uintptr_t addr;
#include "../src/MemoryMgr.h"
bool centredwidescreenAOk20;
//resize slp interface
#pragma region resize interface slp

//00457ED0  |. E8 BB7E0000    CALL empires2.0045FD90
//0045FD90  /$ 56             PUSH ESI
DWORD u_0045FD90;
void __declspec(naked)  u_AddWideScreenPanel457ED0()
{
	__asm {
		MOV ECX, DWORD PTR DS : [ECX + 3Ch]
		SUB ESP, 64h
		XOR EAX, EAX
		MOV DWORD PTR SS : [ESP] , 64h
		MOV DWORD PTR SS : [ESP + 50h] , EAX
		PUSH ESP
		PUSH 1000400h
		PUSH EAX
		PUSH EAX
		MOV EDX, DWORD PTR DS : [ECX]
		PUSH EAX
		PUSH ECX
		CALL DWORD PTR DS : [EDX + 014h]
		ADD ESP, 064h
		MOV ECX, DWORD PTR DS : [ESI + 020h]
		JMP[u_0045FD90]
	}
}
//004580A9  |. 8B86 700E0000  MOV EAX,DWORD PTR DS:[ESI+0xE70]
//004580AF  |. 8BAE 780E0000  MOV EBP,DWORD PTR DS:[ESI+0xE78]

DWORD u_004DB740;
DWORD u_004580BD;
//004580A4  |. E8 476F0C00    CALL empires2.0051EFF0
DWORD u_004580A4;
DWORD u_004580A9;
DWORD u_0051EFF0;
//DWORD _007C08C0;
DWORD uf_AddWideScreenPanel7C08C0;
void __declspec(naked)  u_AddWideScreenPanel4580A4()
{
	__asm {
		CALL u_0051EFF0
		MOV EAX, DWORD PTR DS : [ESI + 0DC0h]
		MOV ECX, DWORD PTR DS : [ESI + 0EE4h]
		MOV EDX, DWORD PTR DS : [ESI + 0DC4h]
		MOV EBP, DWORD PTR DS : [ESI + 0EE8h]
		ADD EAX, ECX
		MOV ECX, DWORD PTR DS : [ESI + 01C5Ch]
		ADD EDX, EBP
		TEST ECX, ECX
		JE _005ABBE9
		JMP[uf_AddWideScreenPanel7C08C0]
		JE _005ABBD1
		CMP EBX, 400h
		JE SHORT _005ABBBC
		CMP EBX, 0500h
		JNZ _005ABBE9
		PUSH 0h
		ADD EDX, 039Eh
		PUSH 0h
		PUSH EDX
		ADD EAX, 79h
		JMP[_005ABBDF]
		_005ABBBC:
		PUSH 0h
			ADD EDX, 299h
			PUSH 0h
			PUSH EDX
			MOV EDX, DWORD PTR DS : [ESI + 20h]
			ADD EAX, 71h
			PUSH EAX
			PUSH EDX
			JMP _005ABBE4//005ABBCF   . EB 13          JMP SHORT age2_x1.005ABBE4// u_004580A4
			_005ABBD1 :
		PUSH 0h
			ADD EDX, 210h
			PUSH 0h
			PUSH EDX
			ADD EAX, 66h
			_005ABBDF :
		PUSH EAX
			MOV EAX, DWORD PTR DS : [ESI + 20h]
			PUSH EAX
			_005ABBE4 :
		CALL u_0051EFF0// u_004DB740
			_005ABBE9 :
		JMP[u_004580A9]
			//MOV EAX, DWORD PTR DS : [ESI + 0E70h]
			//MOV EBP, DWORD PTR DS : [ESI + 0xE78]
			//MOV EBX, DWORD PTR DS : [ESI + 0xDC0]
			//PUSH 0x0
			Jmp[u_004580A9]//004580A9     8B86 700E0000  MOV EAX,DWORD PTR DS:[ESI+0xE70]

	}
}
//MOV EAX,DWORD PTR DS:[0x6645C4]
//004580A9     8B86 700E0000  MOV EAX,DWORD PTR DS:[ESI+0xE70]
//004A23E0  /$ 81EC C80C0000  SUB ESP,0xCC8
DWORD u_6645C4;//7912A0
//DWORD u_0051EFF0;
//DWORD u_004580A9;
DWORD u_004A23E0;
void __declspec(naked)  u_AddWideScreenPanel7C08C0()
{
	__asm {
		MOV EBX, DWORD PTR DS : [ESI + 0E6Ch]
		INC EBX
		IMUL EBX, EBX, 20h
		MOV EBP, DWORD PTR DS : [ESI + 1C60h]
		MOV EBP, DWORD PTR SS : [EBP + 0Ch]
		MOV EBX, DWORD PTR DS : [EBX + EBP + 14h]
		CMP EBX, 300h
		JL SHORT _007C0911
		CMP EBX, 400h
		JL SHORT _007C08FC
		PUSH 0h
		ADD EDX, 39Eh
		PUSH 0h
		PUSH EDX
		ADD EAX, 79h
		PUSH EAX
		MOV EAX, DWORD PTR DS : [ESI + 20h]
		PUSH EAX
		JMP[_007C0924]
		_007C08FC :
		PUSH 0h
		ADD EDX, 299h
		PUSH 0h
		PUSH EDX
		MOV EDX, DWORD PTR DS : [ESI + 20h]
		ADD EAX, 71h
		PUSH EAX
		PUSH EDX
		JMP[_007C0924]
		_007C0911 :
		PUSH 0h
		ADD EDX, 210h
		PUSH 0h
		PUSH EDX
		ADD EAX, 66h
		PUSH EAX
		MOV EAX, DWORD PTR DS : [ESI + 20h]
		PUSH EAX
		_007C0924 :
		CALL u_0051EFF0
			JMP u_004580A9
	}
}
//004E1C38   . 8B56 20        MOV EDX,DWORD PTR DS:[ESI+0x20]
//004E1C45   . 68 AC446500    PUSH empires2.006544AC                   ;  ASCII "scr_game::draw3"
DWORD u_005223C2;//004E1C45

void __declspec(naked)  u_AddWideScreenPanel004E1C38()
{
	__asm {
		MOV EAX, DWORD PTR DS : [ESI + 14h]
		PUSH 0h
		PUSH 2h
		SUB EAX, 500h
		SHR EAX, 1
		LEA EDX, DWORD PTR DS : [EAX + 2ACh]
		MOV EAX, DWORD PTR DS : [ESI + 18h]
		LEA EAX, DWORD PTR DS : [EAX - 2Ah]
		PUSH EAX
		PUSH EDX
		MOV EDX, DWORD PTR DS : [ESI + 20h]
		PUSH EDX
		PUSH u_005223C2//004E1C45
		JMP u_0051EFF0//age2_x1.004DB740


	}
}
//004E1C0E
DWORD u_007C1C78;
DWORD u_007C1D90;
void __declspec(naked)  u_AddWideScreenPanel004E1C0E()
{
	__asm {
		PUSH ESI
		PUSH EDI
		PUSH EBX
		PUSH EBP
		SUB ESP, 8h
		MOV EDI, DWORD PTR DS : [ESI + 20h]
		MOV ECX, DWORD PTR DS : [ESI + 100Ch]
		MOV EDX, DWORD PTR DS : [EDI + 0C0h]
		MOV EBX, DWORD PTR DS : [EDI + 0D0h]
		MOV DWORD PTR DS : [774000h] , EDX //00774000  =795000
		MOV EAX, DWORD PTR DS : [EBX + 3Ch]
		MOV EDX, DWORD PTR DS : [EBX + 40h]
		MOV DWORD PTR DS : [774004h] , EAX
		MOV DWORD PTR DS : [774008h] , EDX
		MOV EDI, DWORD PTR DS : [ESI + 14h]
		MOV EBX, DWORD PTR DS : [ESI + 18]
		MOV EBP, DWORD PTR DS : [ECX + 0Ch]
		LEA EAX, DWORD PTR DS : [EBX - 1h]
		LEA EDX, DWORD PTR DS : [EDI - 1h]
		MOV DWORD PTR DS : [774080h] , 0h
		MOV DWORD PTR DS : [774084h] , EAX
		MOV DWORD PTR DS : [774088h] , 0h
		MOV DWORD PTR DS : [77408Ch] , EDX
		MOV DWORD PTR DS : [774038h] , 0h
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
			CALL u_007C1D90
			MOV EDX, DWORD PTR SS : [EBP + 34h]
			MOV EAX, EBX
			MOV DWORD PTR DS : [774038h] , 1C7h
			SUB EAX, EDX
			MOV DWORD PTR SS : [ESP + 10h] , EDX
			MOV DWORD PTR SS : [ESP + 8h] , EAX
			CALL u_007C1D90
			ADD ESP, 28h
			POP EBP
			POP EBX
			POP EDI
			POP ESI
			RETN
			_u_007C1C78 :
		JMP[u_007C1C78]
	}
}

//00774000  =795000
void __declspec(naked)  u_AddWideScreenPanel007C1C78()
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
		JE _007C1CA8
		CMP EDX, 500h
		JE _007C1CB2
		MOV DWORD PTR SS : [ESP + 20h] , 0D6h
		JMP _007C1CC2
		_007C1CA8 :
		MOV DWORD PTR SS : [ESP + 20h] , 116h
			JMP _007C1CC2
			_007C1CB2 :
		MOV DWORD PTR SS : [ESP + 10h] , 20h
			MOV DWORD PTR SS : [ESP + 20h] , 158h
			_007C1CC2 :
		SUB ESI, EDX
			AND ESI, ESI
			JL _007C1D7C
			_007C1CCC :
		MOV DWORD PTR SS : [ESP + 4h] , ESI
			CALL u_007C1D90
			MOV DWORD PTR DS : [774038h] , 0h
			MOV EDX, DWORD PTR SS : [EBP + 30h]
			SUB ESI, EDX
			ADD ESI, 190h
			AND ESI, ESI
			JG _007C1CCC
			MOV DWORD PTR SS : [ESP + 4h] , 0h
			CALL u_007C1D90
			MOV EDX, DWORD PTR SS : [EBP + 30h]
			MOV EAX, EDI
			SUB EAX, EDX
			SHR EAX, 1h
			SUB EAX, EDX
			MOV ESI, EAX
			MOV EAX, EBX
			LEA EBX, DWORD PTR DS : [EDX + ESI]
			MOV EDX, DWORD PTR SS : [EBP + 34h]
			SUB EAX, EDX
			MOV DWORD PTR SS : [ESP + 10h] , EDX
			MOV DWORD PTR SS : [ESP + 8h] , EAX
			MOV DWORD PTR SS : [ESP + 1Ch] , 0h
			MOV DWORD PTR DS : [774038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 4h] , EBX
			CALL u_007C1D90
			MOV EDX, DWORD PTR SS : [EBP + 30h]
			ADD EBX, EDX
			_007C1D3A :
		MOV DWORD PTR SS : [ESP + 1Ch] , 2h
			MOV DWORD PTR DS : [774038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 4h] , ESI
			CALL u_007C1D90
			MOV DWORD PTR SS : [ESP + 1Ch] , 0h
			MOV DWORD PTR DS : [774038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 4h] , EBX
			CALL u_007C1D90
			MOV EAX, DWORD PTR SS : [ESP + 20h]
			SUB ESI, EAX
			ADD EBX, EAX
			CMP EBX, EDI
			JL _007C1D3A
			_007C1D7C :
		ADD ESP, 28h
			POP EBP
			POP EBX
			POP EDI
			POP ESI
			RETN
	}
}
DWORD refwidth = 0x500;
DWORD refheight = 0x90;
//007C1D90
//00619BC0   55               PUSH EBP
DWORD u_00619BC0;
DWORD u_00619C48;
void __declspec(naked)  u_AddWideScreenPanel007C1D90()
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
		MOV DWORD PTR DS : [774024h] , ECX
		LEA ECX, DWORD PTR DS : [EAX + ECX - 1h]
		MOV DWORD PTR DS : [774028h] , ECX
		//JMP [u_00619BC0]
		JMP[u_00619C48]
	}
}

DWORD u_004DAB6E;
DWORD u_005A6870;
DWORD u_refwidth = 0x500;
DWORD u_refheight = 0x90;
// V = Y
// H = X
void patchEXE(int H, int V)
{
	//004DAD98  |> 3D 20030000    CMP EAX,320
	//004DA6EA     3D 00050000    CMP EAX,500

	//change interface id to fix widescreen bug

	//004DF5B2  |. 81C7 9CC70000  ADD EDI,0C79C
	//0C79C  =  51100

	//004E1C36   . 75 17          JNZ SHORT empires2.004E1C4F
	//Patch(0x04E1C36, (BYTE)0xEB);
	//0052237E     EB 0A          JMP SHORT age2_x1.0052238A
	Patch(0x04E1C36 , (BYTE)0xEB);
	Patch(0x04E1C36 + 1, (BYTE)0x17);

	//writeDwordF(0x001D354, H + 0);//1024
	//writeDwordF(0x001D369, V + 0);//768
	//writeDwordF(0x01BCE7 - 1, H);//  1024      1024    set
	//writeDwordF(0x01BCF4 - 1, V);//   768       768    set
	//unit formation button print
	if (V >= 1024)
	{
		u_refwidth = 0x500;
		u_refheight = 0xB0;
	}
	else if (V >= 768 && V < 1024)
	{
		u_refwidth = 0x400;
		u_refheight = 0x90;
	}
	else if (V >= 600 && V < 768)
	{
		u_refwidth = 0x400;
		u_refheight = 0x90;
	}
	//todo check if work
	/*if (H > 1024)
	{*/
	writeDwordF(0x0DAA41, H + 0);//1024
	writeDwordF(0x0DAA5D, H + 0);//1024
	writeDwordF(0x0DAA89, H + 0);//1024
/*}*/
/*if (H == 1024)
{

	writeDwordF(0x0DAA41, H + 0);//1024
	writeDwordF(0x0DAA5D, H + 0);//1024
	writeDwordF(0x0DAA89, H + 0);//1024

	writeDwordF(0x0DA6EA, H + 1);//1280
	writeDwordF(0x0DA706, H + 1);//1280
	writeDwordF(0x0DA732, H + 1);//1280
	writeDwordF(0x0DA732, H + 1);//1280
	writeDwordF(0x0050DA3, V + 2);//1200
}*/
//else if (H == 1280)
//{
//	writeDwordF(0x0DAA41, H + 0);//1024
//	writeDwordF(0x0DAA5D, H + 0);//1024
//	writeDwordF(0x0DAA89, H + 0);//1024
//}
//004DA6EA  |. 3D 00050000                   CMP EAX,500
//004DAA41  |> 3D 00050000                   CMP EAX,500
//004DAD98 | > 3D 20030000                   CMP EAX, 320



//if (H == 1280)
//{

//}

/*
	if (H > 1280)
	{*/

	//writeDwordF(0x0DA6EA, H + 1);//1280
	writeDwordF(0x0DA706, H + 1);//1280
	writeDwordF(0x0DA732, H + 1);//1280
	writeDwordF(0x0DA732, H + 1);//1280

/*}	*/

//if (V > 1200)
	writeDwordF(0x0050DA3, V + 2);//1200

	////purple up band
	////004DAA8E     6A 49                   PUSH 0x49

	writeDwordF(0x00DAA84, V - 200);//200
	//writeByte(0x04DAA8F, 0x20);
	writeByte(0x04DAA8F, 0x19);

	if (V >= 1024)
	{
		//writeDwordF(0x00DAA84, V - 250);
		writeDwordF(0x00DAA84, V - 200);
		//writeByte(0x04DAA8F, 0x20);
		writeByte(0x04DAA8F, 0x19);
		//precY = 1024;
	}
	else if (V >= 768 && V < 1024)
	{
		//writeDwordF(0x00DAA84, V - 200);
		writeDwordF(0x00DAA84, V - 200);
		writeByte(0x04DAA8F, 0x19);
		//writeByte(0x04DAA8F, 0x18);
		//precY = 768;
	}
	else if (V >= 600 && V < 768)
	{

		//writeDwordF(0x00DAA84, V - 230);
		writeDwordF(0x00DAA84, V - 200);
		writeByte(0x04DA6EF + 1, 0x84);
		writeByte(0x04DAD9D + 1, 0x84);
		//004DAD9D     0F84 47030000  JE empires2.004DB0EA
		//004DA6EF     0F84 4C030000  JE empires2.004DAA41
	}
	//if (V >= 600 && V < 768)
	//	precY = 600;



	//else if (V < 768 && V >= 600)
	//{
	//	ratioH = -(H - 800 ) / 2;
	//}

	writeDwordF(0x00DA71B, V - 279);
	writeDwordF(0x00DA72D, V - 249);
	writeDwordF(0x00DA766, V - 206);
	writeDwordF(0x00DA7C9, V - 196);
	writeDwordF(0x00DA7D8, V - 178);
	//writeDwordF(0x00DA810, V - 55);//0f
	writeDwordF(0x00DA917, H - 301);
	writeDwordF(0x00DA92D, H - 241);
	writeDwordF(0x00DA943, H - 181);
	writeDwordF(0x00DA959, H - 121);
	writeDwordF(0x00DA96F, H - 62);

	writeDwordF(0x00DA981, V - 194);
	writeDwordF(0x00DA99A, V - 67);
	writeDwordF(0x00DA9B3, V - 197);
	writeDwordF(0x00DA9CC, V - 197);
	writeDwordF(0x00DA9E5, V - 167);
	writeDwordF(0x00DA9FE, V - 77);

	/*		writeDwordF(0x00DAA17, V - 48);
			writeDwordF(0x00DAA30, V - 44);*/


			//writeDwordF(0x00DAA41, H + 0);//1024
			//writeDwordF(0x00DAA5D, H + 0);//1024
	writeDwordF(0x00DAA72, V - 230);
	//writeDwordF(0x00DAA84, V - 200);

	//writeDwordF(0x00DAA89, H + ratioH + 0);//1024
	//mini map 
	/*if (V >= 1024)
	{
		writeDwordF(0x00DAABD, V - 187);
		writeDwordF(0x00DAAC4, H - 369);
	}
	else if (V < 1024 && V >= 768)
	{
		writeDwordF(0x00DAABD, V - 169);
		writeDwordF(0x00DAAC4, H - 336);
	}*/
	//writeDwordF(0x00DAABD, V - 169);
	//writeDwordF(0x00DAAC4, H - 336);



	////mini map size
	////004DAAD2     68 E9C40000            PUSH 0xC4E9
	//if (V > 1024)
	//{
	//	writeDwordF(0xDAAD2, 0xC4E9);
	//	//004DAAB8     68 8A010000    PUSH 0x18A
	//	writeDwordF(0x0DAAB8, 0x18A);
	//	//004DAAB3     68 C6000000    PUSH 0xC6
	//	writeDwordF(0x0DAAB3, 0x0C6);

	//}
	//else if (V < 1024 && V >= 768)
	//{
	//	writeDwordF(0xDAAD2, 0xC4E8);
	//	//004DAAB8     68 8A010000    PUSH 0x18A
	//	//004DAAB8     68 8A010000    PUSH 0x18A
	//	writeDwordF(0x0DAAB8, 0x146);
	//	//004DAAB3     68 C6000000    PUSH 0xC6
	//	writeDwordF(0x0DAAB3, 0x0A4);
	//}
	//else if (V < 768 && V >= 600)
	//{
	//	writeDwordF(0xDAAD2, 0xC4EB);
	//	//004DAAB8     68 8A010000    PUSH 0x18A
	//	//004DAAB8     68 8A010000    PUSH 0x18A
	//	writeDwordF(0x0DAAB8, 0x10A);
	//	//004DAAB3     68 C6000000    PUSH 0xC6
	//	writeDwordF(0x0DAAB3, 0x086);
	//}



	//current age label
	writeDwordF(0x00DAAF2, H / 2 - 112);
	//formation + villager build button?

	writeDwordF(0x00DAB2F, V - 144);
	writeDwordF(0x00DAB67, V - 21);//21




	//selection
	writeDwordF(0x00DAB20, V - 152);
	int ratioSH = 0;
	if (V >= 1024)
	{
		//ratioSH = -(H - 1024 / 2) / 2 - 1024 / 2 - 50;
		//x
		writeDwordF(0x00DAB20, V - 162);
	}
	else if (V < 1024 && V >= 768)
	{
		//ratioSH = -(H - 800) / 2 - 800 / 2 - 230;
		//x
		writeDwordF(0x00DAB20, V - 152);
	}
	//else if (V < 768 && V >= 600)
	//{
	//	ratioSH = -(H - 800) / 2 - 800 / 2 ;
	//	//x
	//	writeDwordF(0x00DAB20, V + ratioV - 152);
	//}

	//writeDwordF(0x0DAB27, H - 230);//
	int ratioSHeight = 0;

	//else if (V < 768 && V >= 600)
	//{
	//	ratioSHeight = (800) / 2;
	//}
	//size of army selection
	//writeDwordF(0x00DAB1B, ratioSHeight);
	//writeDwordF(0x00DAB1B, H - 649);
	writeDwordF(0x00DAABD, V - 169);
	writeDwordF(0x00DAAC4, H - 336);
	writeDwordF(0x00DAB1B, H - 649);
	writeDwordF(0x00DAB20, V - 152);
	writeDwordF(0x00DAB2F, V - 144);
	//diplomatie button
	writeDwordF(0x00DAC6E, H - 303);
	writeDwordF(0x00DAC84, H - 243);
	writeDwordF(0x00DAC9A, H - 183);
	writeDwordF(0x00DACB0, H - 123);
	writeDwordF(0x00DACC6, H - 64);
	//mini map button
	int ratioVm = 0;


	//flashing x button 
	writeDwordF(0x00DACD8, V - 154);
	writeDwordF(0x00DACDF, H - 308);
	//idle button
	writeDwordF(0x00DACF1, V - 49);
	writeDwordF(0x00DACF8, H - 309);
	//player name button
	writeDwordF(0x00DAD0A, V - 156);
	writeDwordF(0x00DAD11, H - 96);
	//

	if (V >= 1024)
	{
		writeDwordF(0x00DAD2A, H - 29);
		writeDwordF(0x00DAD23, V - 142);
	}
	else if (V < 1024 && V >= 768)
	{
		writeDwordF(0x00DAD2A, H - 50);
		writeDwordF(0x00DAD23, V + -132);
	}
	//else
	//{
	//	writeDwordF(0x00DAD2A, H - 50);
	//	writeDwordF(0x00DAD23, V + -132);
	//}

	//ok
	writeDwordF(0x00DAD3C, V - 156);
	writeDwordF(0x00DAD43, H - 66);
	//
	writeDwordF(0x00DAD55, V - 59);
	writeDwordF(0x00DAD5C, H - 61);
	//
	writeDwordF(0x00DAD6E, V - 35);
	writeDwordF(0x00DAD75, H - 74);
	//idel show
	writeDwordF(0x00DAD87, V - 39);
	writeDwordF(0x00DAD8E, H - 102);
	////ressources number Y
	////004DAAA4     6A 20                   PUSH 0x20
	//writeDwordF(0x0DAAA4, 1);
	////ressources X
	////004DAAA8     6A 10                   PUSH 0x10
	////writeDwordF(0x0DAAA8, 1);



	writeDwordF(0x00E4731, V - 171);
	writeDwordF(0x00E4747, V - 138);
	writeDwordF(0x00E4789, V - 138);
	writeDwordF(0x00E475D, V - 118);
	//writeDwordF(0x00E4790, V - 118);
	writeDwordF(0x00E4773, V - 98);
	writeDwordF(0x00E47B5, V - 98);
	writeDwordF(0x00E47CB, V - 59);
	writeDwordF(0x00E47E1, V - 59);
	writeDwordF(0x00E47F7, V - 59);
	writeDwordF(0x00E4810, V - 59);
	writeDwordF(0x00E482B, V - 59);
	writeDwordF(0x00E4854, V - 144);
	writeDwordF(0x00E48AA, V - 118);
	writeDwordF(0x00E4868, V - 118);
	writeDwordF(0x00E487E, V - 98);
	writeDwordF(0x00E48C0, V - 98);
	writeDwordF(0x00E4894, V - 78);
	writeDwordF(0x00E48D6, V - 78);
	writeDwordF(0x00E48EC, V - 54);
	writeDwordF(0x00E4902, V - 54);
	writeDwordF(0x00E4918, V - 54);
	writeDwordF(0x00E4931, V - 54);
	writeDwordF(0x00E494A, V - 54);


	/*
	writeDwordF(0x00DA766, V - 206);
	writeDwordF(0x00DA7C9, V - 196);
	writeDwordF(0x00DA7D8, V - 178);
	writeDwordF(0x00DA80F, V - 55);
	writeDwordF(0x00DA917, H - 301);
	writeDwordF(0x00DA92D, H - 241);
	writeDwordF(0x00DA943, H - 181);
	writeDwordF(0x00DA959, H - 121);
	writeDwordF(0x00DA96F, H - 62);
	writeDwordF(0x00DA981, V - 194);
	writeDwordF(0x00DA99A, V - 67);
	writeDwordF(0x00DA9B3, V - 197);
	writeDwordF(0x00DA9CC, V - 197);
	writeDwordF(0x00DA9E5, V - 167);
	writeDwordF(0x00DA9FE, V - 77);
	writeDwordF(0x00DAA17, V - 48);
	writeDwordF(0x00DAA30, V - 44);
	writeDwordF(0x00DAA41, H + 0);//1024
	writeDwordF(0x00DAA5D, H + 0);//1024
	writeDwordF(0x00DAA72, V - 230);
	writeDwordF(0x00DAA84, V - 200);
	writeDwordF(0x00DAA89, H + 0);//1024
	writeDwordF(0x00DAABD, V - 169);
	writeDwordF(0x00DAAC4, H - 336);
	writeDwordF(0x00DAAF2, H / 2 - 112);
	writeDwordF(0x00DAB1B, H - 649);
	writeDwordF(0x00DAB20, V - 152);
	writeDwordF(0x00DAB2F, V - 144);
	//writeDwordF(0x00DAB67, V - 21);//
	writeDwordF(0x00DAC6E, H - 303);
	writeDwordF(0x00DAC84, H - 243);
	writeDwordF(0x00DAC9A, H - 183);
	writeDwordF(0x00DACB0, H - 123);
	writeDwordF(0x00DACC6, H - 64);
	writeDwordF(0x00DACD8, V - 154);
	writeDwordF(0x00DACDF, H - 308);
	writeDwordF(0x00DACF1, V - 49);
	writeDwordF(0x00DACF8, H - 309);
	writeDwordF(0x00DAD0A, V - 156);
	writeDwordF(0x00DAD11, H - 96);
	writeDwordF(0x00DAD23, V - 162);
	writeDwordF(0x00DAD2A, H - 69);
	writeDwordF(0x00DAD3C, V - 137);
	writeDwordF(0x00DAD43, H - 60);
	writeDwordF(0x00DAD55, V - 59);
	writeDwordF(0x00DAD5C, H - 61);
	writeDwordF(0x00DAD6E, V - 35);
	writeDwordF(0x00DAD75, H - 74);
	writeDwordF(0x00DAD87, V - 39);
	writeDwordF(0x00DAD8E, H - 102);




	writeDwordF(0x001BCC5, H + 0);//1024
	writeDwordF(0x001BD06, V + 0);//768
	//writeDwordF(0x001BD12,	H + 1);//1280
	writeDwordF(0x001D354, H + 0);//1024
	writeDwordF(0x001D369, V + 0);//768
	//writeDwordF(0x001D38C,	H + 1);//1280
	writeDwordF(0x001D94B, H + 0);//1024
	writeDwordF(0x001D975, V + 0);//768
	//writeDwordF(0x001D984,	H + 1);//1280
	writeDwordF(0x004860F, H + 0);//1024
	//writeDwordF(0x0048616,	H + 1);//1280
	writeDwordF(0x004865B, H + 0);//1024
	//writeDwordF(0x004867F,	H + 1);//1280
	writeDwordF(0x0048F06, H + 0);//1024
	writeDwordF(0x0048F0B, V + 0);//768



	//004DF557 | . 8138 04000300  CMP DWORD PTR DS : [EAX] , 30004
	//	004DF55D | ? 007C2D 33      ADD BYTE PTR SS : [EBP + EBP + 33] , BH
	//004DF58B  |. EB 2B          JMP SHORT empires2.004DF5B8


	*/

	/*
	writeDwordF(0x00DF4E5+1, H + 2);//1600


	writeDwordF(0x00DF4EC+1, V + 2);//1200
	writeDwordF(0x00DF513+1, H + 1);//1280
	writeDwordF(0x00DF51A+1, V + 1);//1024
	writeDwordF(0x00DF550+1, H + 0);//1024

	writeDwordF(0x00DF557+1, V + 0);//768
	writeDwordF(0x00E1C2F+1, H + 1);//1280
	writeDwordF(0x00E4719+1, H + 1);//1280
		*/
		//record game panel fix size
	writeDwordF(0x00E4840, H + 0);//1024
	writeDwordF(0x00ED126, H + 0);//1024
	writeDwordF(0x00ED14D, H + 1);//1280
	writeDwordF(0x00EEAC3, H + 0);//1024
	writeDwordF(0x00EEAC8, V + 0);//768
	writeDwordF(0x00EEADE, H + 1);//1280
	writeDwordF(0x00EEAE3, V + 1);//1024
	writeDwordF(0x01A6BC4, H + 1);//1280

	/*004D9660  |. 68 F85F0100    PUSH 15FF8
*/

}

void WideScreen(int H, int V)
{
	//unit formation button print
	if (V >= 1024)
	{
		refwidth = 0x500;
		refheight = 0xB0;
	}
	else if (V >= 768 && V < 1024)
	{
		refwidth = 0x400;
		refheight = 0x90;
	}
	else if (V >= 600 && V < 768)
	{
		refwidth = 0x400;
		refheight = 0x90;
	}
	//todo check if work
	if (H > 1024)
	{
		writeDwordF(0x0DAA41, H + 0);//1024
		writeDwordF(0x0DAA5D, H + 0);//1024
		writeDwordF(0x0DAA89, H + 0);//1024
	}
	if (H == 1024)
	{
		writeDwordF(0x0DAA41, H + 0);//1024
		writeDwordF(0x0DAA5D, H + 0);//1024
		writeDwordF(0x0DAA89, H + 0);//1024

		writeDwordF(0x0DA6EA, H + 1);//1280
		writeDwordF(0x0DA706, H + 1);//1280
		writeDwordF(0x0DA732, H + 1);//1280
		writeDwordF(0x0DA732, H + 1);//1280
		writeDwordF(0x0050DA3, V + 2);//1200
	}



	if (H > 1280)
	{

		writeDwordF(0x0DA6EA, H + 1);//1280
		writeDwordF(0x0DA706, H + 1);//1280
		writeDwordF(0x0DA732, H + 1);//1280
		writeDwordF(0x0DA732, H + 1);//1280

	}

	if (V > 1200)
		writeDwordF(0x0050DA3, V + 2);//1200

		////purple up band
		////004DAA8E     6A 49                   PUSH 0x49



	if (V >= 1024)
	{
		writeDwordF(0x00DAA84, V - 250);
		writeByte(0x04DAA8F, 0x20);
		//precY = 1024;
	}
	else if (V >= 768 && V < 1024)
	{
		writeDwordF(0x00DAA84, V - 200);
		writeByte(0x04DAA8F, 0x19);
		//precY = 768;
	}
	else if (V >= 600 && V < 768)
	{
		//writeDwordF(0x00DAA84, V - 230);
		writeDwordF(0x00DAA84, V - 200);
		writeByte(0x04DAA8F, 0x19);
		//writeByte(0x04DA6EF + 1, 0x84);
		//writeByte(0x04DAD9D + 1, 0x84);
	}

	//if (V >= 600 && V < 768)
	//	precY = 600;


	int ratioV = 0;
	int ratioH = 0;
	if (V >= 1024)
	{
		ratioH = -(H - 1024 - 169) / 2;
		ratioV = -20;
	}
	else if (V < 1024 && V >= 768)
	{
		ratioH = -(H - 800 - 219) / 2;
	}
	//else if (V < 768 && V >= 600)
	//{
	//	ratioH = -(H - 800 ) / 2;
	//}

	writeDwordF(0x00DA71B, V - 279);
	writeDwordF(0x00DA72D, V - 249);
	writeDwordF(0x00DA766, V - 206);
	writeDwordF(0x00DA7C9, V - 196);
	writeDwordF(0x00DA7D8, V - 178);
	//writeDwordF(0x00DA810, V - 55);//0f
	writeDwordF(0x00DA917, H - 301);
	writeDwordF(0x00DA92D, H - 241);
	writeDwordF(0x00DA943, H - 181);
	writeDwordF(0x00DA959, H - 121);
	writeDwordF(0x00DA96F, H - 62);

	writeDwordF(0x00DA981, V - 194);
	writeDwordF(0x00DA99A, V - 67);
	writeDwordF(0x00DA9B3, V - 197);
	writeDwordF(0x00DA9CC, V - 197);
	writeDwordF(0x00DA9E5, V - 167);
	writeDwordF(0x00DA9FE, V - 77);

	/*		writeDwordF(0x00DAA17, V - 48);
			writeDwordF(0x00DAA30, V - 44);*/


			//writeDwordF(0x00DAA41, H + 0);//1024
			//writeDwordF(0x00DAA5D, H + 0);//1024
	writeDwordF(0x00DAA72, V + ratioV - 230);
	//writeDwordF(0x00DAA84, V - 200);

	//writeDwordF(0x00DAA89, H + ratioH + 0);//1024
	//mini map 
	if (V >= 1024)
	{
		writeDwordF(0x00DAABD, V + ratioV - 187);
		writeDwordF(0x00DAAC4, H + ratioH - 369);
	}
	else if (V < 1024 && V >= 600)
	{
		writeDwordF(0x00DAABD, V + ratioV - 169);
		writeDwordF(0x00DAAC4, H + ratioH - 336);
	}
	//else if (V >= 600 && V < 768)
	//{
	//	//writeDwordF(0x00DAABD, V + ratioV - 169);
	//	//writeDwordF(0x00DAAC4, H + ratioH - 336);
	//	writeDwordF(0x00DAABD, V + ratioV - 187);
	//	writeDwordF(0x00DAAC4, H + ratioH - 369);
	//}

	//mini map size
	//004DAAD2     68 E9C40000            PUSH 0xC4E9
	if (V > 1024)
	{
		writeDwordF(0xDAAD2, 0xC4E9);
		//004DAAB8     68 8A010000    PUSH 0x18A
		writeDwordF(0x0DAAB8, 0x18A);
		//004DAAB3     68 C6000000    PUSH 0xC6
		writeDwordF(0x0DAAB3, 0x0C6);

	}
	else if (V < 1024 && V >= 768)
	{
		writeDwordF(0xDAAD2, 0xC4E8);
		//004DAAB8     68 8A010000    PUSH 0x18A
		//004DAAB8     68 8A010000    PUSH 0x18A
		writeDwordF(0x0DAAB8, 0x146);
		//004DAAB3     68 C6000000    PUSH 0xC6
		writeDwordF(0x0DAAB3, 0x0A4);
	}
	else if (V < 768 && V >= 600)
	{

		writeDwordF(0xDAAD2, 0xC4EB);
		//004DAAB8     68 8A010000    PUSH 0x18A
		//004DAAB8     68 8A010000    PUSH 0x18A
		writeDwordF(0x0DAAB8, 0x10A);
		//004DAAB3     68 C6000000    PUSH 0xC6
		writeDwordF(0x0DAAB3, 0x086);
	}
	//current age label
	writeDwordF(0x00DAAF2, H / 2 - 112);
	//formation + villager build button?

	writeDwordF(0x00DAB2F, V + ratioV - 144);
	writeDwordF(0x00DAB67, V + ratioV - 21);//21




	//selection

	int ratioSH = 0;
	if (V >= 1024)
	{
		ratioSH = -(H - 1024 / 2) / 2 - 1024 / 2 - 50;
		//x
		writeDwordF(0x00DAB20, V + ratioV - 162);
	}
	else if (V < 1024 && V >= 768)
	{
		ratioSH = -(H - 800) / 2 - 800 / 2 - 230;
		//x
		writeDwordF(0x00DAB20, V + ratioV - 152);
	}
	//else if (V < 768 && V >= 600)
	//{
	//	ratioSH = -(H - 800) / 2 - 800 / 2 ;
	//	//x
	//	writeDwordF(0x00DAB20, V + ratioV - 152);
	//}

	writeDwordF(0x0DAB27, H + ratioSH);//
	int ratioSHeight = 0;
	if (V >= 1024)
	{
		ratioSHeight = (1024 / 2);
	}
	else if (V < 1024 && V >= 768)
	{
		ratioSHeight = (800) / 2;
	}
	//else if (V < 768 && V >= 600)
	//{
	//	ratioSHeight = (800) / 2;
	//}
	//size of army selection
	writeDwordF(0x00DAB1B, ratioSHeight);


	//diplomatie button
	writeDwordF(0x00DAC6E, H - 303);
	writeDwordF(0x00DAC84, H - 243);
	writeDwordF(0x00DAC9A, H - 183);
	writeDwordF(0x00DACB0, H - 123);
	writeDwordF(0x00DACC6, H - 64);
	//mini map button
	int ratioVm = 0;

	if (V >= 1024)
	{
		ratioVm = -40;
	}
	//flashing x button 
	writeDwordF(0x00DACD8, V + ratioVm - 154);
	writeDwordF(0x00DACDF, H + ratioH - 308);
	//idle button
	writeDwordF(0x00DACF1, V + -49);
	writeDwordF(0x00DACF8, H + ratioH - 309);
	//player name button
	writeDwordF(0x00DAD0A, V + ratioVm - 156);
	writeDwordF(0x00DAD11, H + ratioH - 96);
	//

	if (V >= 1024)
	{
		writeDwordF(0x00DAD2A, H + ratioH - 29);
		writeDwordF(0x00DAD23, V + ratioVm - 142);
	}
	else if (V < 1024 && V >= 768)
	{
		writeDwordF(0x00DAD2A, H + ratioH - 50);
		writeDwordF(0x00DAD23, V + -132);
	}

	//ok
	writeDwordF(0x00DAD3C, V + ratioVm - 156);
	writeDwordF(0x00DAD43, H + ratioH - 66);
	//
	writeDwordF(0x00DAD55, V - 59);
	writeDwordF(0x00DAD5C, H + ratioH - 61);
	//
	writeDwordF(0x00DAD6E, V - 35);
	writeDwordF(0x00DAD75, H + ratioH - 74);
	//idel show
	writeDwordF(0x00DAD87, V - 39);
	writeDwordF(0x00DAD8E, H + ratioH - 102);
	////ressources number Y
	////004DAAA4     6A 20                   PUSH 0x20
	//writeDwordF(0x0DAAA4, 1);
	////ressources X
	////004DAAA8     6A 10                   PUSH 0x10
	////writeDwordF(0x0DAAA8, 1);



	writeDwordF(0x00E4731, V - 171);
	writeDwordF(0x00E4747, V - 138);
	writeDwordF(0x00E4789, V - 138);
	writeDwordF(0x00E475D, V - 118);
	//writeDwordF(0x00E4790, V - 118);
	writeDwordF(0x00E4773, V - 98);
	writeDwordF(0x00E47B5, V - 98);
	writeDwordF(0x00E47CB, V - 59);
	writeDwordF(0x00E47E1, V - 59);
	writeDwordF(0x00E47F7, V - 59);
	writeDwordF(0x00E4810, V - 59);
	writeDwordF(0x00E482B, V - 59);
	writeDwordF(0x00E4854, V - 144);
	writeDwordF(0x00E48AA, V - 118);
	writeDwordF(0x00E4868, V - 118);
	writeDwordF(0x00E487E, V - 98);
	writeDwordF(0x00E48C0, V - 98);
	writeDwordF(0x00E4894, V - 78);
	writeDwordF(0x00E48D6, V - 78);
	writeDwordF(0x00E48EC, V - 54);
	writeDwordF(0x00E4902, V - 54);
	writeDwordF(0x00E4918, V - 54);
	writeDwordF(0x00E4931, V - 54);
	writeDwordF(0x00E494A, V - 54);


}

//clean purple 
//0x51a3b7
//004DA6E7  |. 8B46 14        MOV EAX,DWORD PTR DS:[ESI+0x14]
DWORD u_Cord_X;
DWORD u_Cord_Y;
DWORD _u_Cord_X = GetSystemMetrics(SM_CXSCREEN);
DWORD _u_Cord_Y = GetSystemMetrics(SM_CYSCREEN);
DWORD u_004DA6EA;
DWORD u_4DA6CC;
DWORD u_screenSaveEDX;
//004DA6E7     8B46 14        MOV EAX, DWORD PTR DS : [ESI + 0x14]
//004DA6EA | . 3D 00050000    CMP EAX, 0x500
//004DA6EF | . 0F85 4C030000  JNZ empires2.004DAA41

int preX = 800;
int PreY = 600;
int ppreX = 1024;
int pPreY = 768;
void  wide()
{

	//chatchatColorFixe();
	int V = 0;
	int H = 0;

	int cpt = 0;


	//while (true) {


		//EnterCriticalSection(&cs_Cord_Y);
	V = (int)u_Cord_Y;
	//LeaveCriticalSection(&cs_Cord_Y);
	//EnterCriticalSection(&cs_Cord_X);
	H = (int)u_Cord_X;
	//EnterCriticalSection(&cs_Cord_X);

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


	//if ((preX == H && PreY == V))// || (ppreX == H && pPreY == V))
	//{
		//u_Cord_Y = GetSystemMetrics(SM_CYSCREEN);
		//u_Cord_X = GetSystemMetrics(SM_CXSCREEN);
		//writeDwordF(0x01BCE7 - 1, GetSystemMetrics(SM_CXSCREEN));//  1024      1024    set
		//writeDwordF(0x01BCF4 - 1, GetSystemMetrics(SM_CYSCREEN));//   768       768    set
		//WideScreen
		//patchEXE(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));
	if (centredwidescreenAOk20)
		WideScreen(H, V);
	else
	patchEXE(H, V);
	//}
	//else
	//{
	//	patchEXE(H, V);
	//}

}
DWORD _wide = (DWORD)wide;
DWORD EAX_wide;
DWORD ECX_wide;
void __declspec(naked)  u_AddWideScreenPanelreadXY()
{
	__asm {


		JNZ _u_4DA6CC
		MOV EAX, DWORD PTR DS : [ESI + 18h]//Y            
		MOV u_Cord_Y, EAX
		//MOV EAX, _u_Cord_Y
		//MOV  DWORD PTR DS : [ESI + 18h], EAX

		MOV EAX, DWORD PTR DS : [ESI + 14h]//X
		MOV u_Cord_X, EAX
		MOV EAX_wide, EAX
		MOV ECX_wide, ECX
		call _wide
		MOV EAX, EAX_wide
		MOV ECX, ECX_wide
		//MOV EAX, _u_Cord_X
		//MOV  DWORD PTR DS : [ESI + 14h] , EAX
		//MOV EAX, DWORD PTR DS : [ESI + 14h]//X
		//MOV EAX, u_Cord_X//DWORD PTR DS : [ESI + 14h]
		//CMP EAX, 0x500
		JMP u_004DA6EA
		_u_4DA6CC :
		JMP  u_4DA6CC
	};
}



__declspec(naked) int __stdcall u_getWindowX()
{
	__asm
	{
		MOV EAX, DWORD PTR DS : [u_Cord_X]
		ret
	}
}
//
__declspec(naked) int __stdcall u_getWindowY()
{
	__asm
	{
		mov     eax, DWORD PTR DS : [u_Cord_Y]
		ret
	}
}



char umap1280[] = "map1280.bmp";
char umap1024[] = "map1024.bmp";
char umap800[] = "map800.bmp";
DWORD u_00443B50;
DWORD uu_005A6870;
DWORD u_004AF4D0;
DWORD u_004DB0EA;

//004E1C09   . 8B46 20        MOV EAX,DWORD PTR DS:[ESI+0x20]

//00774000  =795000

void __declspec(naked)  u_AddWideScreenPanelSLP()
{
	__asm {
		PUSH ESI
		PUSH EDI
		PUSH EBX
		PUSH EBP
		SUB ESP, 8h
		MOV EDI, DWORD PTR DS : [ESI + 20h]
		MOV ECX, DWORD PTR DS : [ESI + 1008h]
		MOV EDX, DWORD PTR DS : [EDI + 0C0h]
		MOV EBX, DWORD PTR DS : [EDI + 0D0h]
		MOV DWORD PTR DS : [774000h] , EDX
		MOV EAX, DWORD PTR DS : [EBX + 3Ch]
		MOV EDX, DWORD PTR DS : [EBX + 40h]
		MOV DWORD PTR DS : [774004h] , EAX
		MOV DWORD PTR DS : [774008h] , EDX
		MOV EDI, DWORD PTR DS : [ESI + 14h]
		MOV EBX, DWORD PTR DS : [ESI + 18h]
		MOV EBP, DWORD PTR DS : [ECX + 0Ch]
		LEA EAX, DWORD PTR DS : [EBX - 1h]
		LEA EDX, DWORD PTR DS : [EDI - 1h]
		MOV DWORD PTR DS : [774080h] , 0h
		MOV DWORD PTR DS : [774084h] , EAX
		MOV DWORD PTR DS : [774088h] , 0h
		MOV DWORD PTR DS : [77408Ch] , EDX
		MOV DWORD PTR DS : [774038h] , 0h
		CMP EDI, 320h
		JE _007C1C35
		CMP EDI, 400h
		JNZ __007C1C78
		CMP EBX, 300h
		JL __007C1C78
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
			CALL u_007C1D90
			MOV EDX, DWORD PTR SS : [EBP + 34h]
			MOV EAX, EBX
			MOV DWORD PTR DS : [774038h] , 1C7h
			SUB EAX, EDX
			MOV DWORD PTR SS : [ESP + 10h] , EDX
			MOV DWORD PTR SS : [ESP + 8h] , EAX
			CALL u_007C1D90
			ADD ESP, 28h
			POP EBP
			POP EBX
			POP EDI
			POP ESI
			RETN
			__007C1C78 :
		JMP  u_007C1C78
	}
}
#pragma endregion resize interface slp

void getxy()
{
#pragma region resize interface slp

	//457ED0
	u_0045FD90 = 0x045FD90;
	//0x4580A4
	u_004580A9 = 0x04580A9;
	u_004580A4 = 0x04580A4;
	u_004DB740 = 0x04DB740;
	u_004580BD = 0x04580BD;
	u_0051EFF0 = 0x051EFF0;
	//7C08C0
	u_6645C4 = 0x06645C4;//7912A0
	u_0051EFF0 = 0x051EFF0;
	u_004580A9 = 0x04580A9;
	u_004A23E0 = 0x004A23E0;
	//_AddWideScreenPanel7C08C0 = (DWORD) u_AddWideScreenPanel7C08C0;
	//setHook((void*)0x457ED0, AddWideScreenPanel457ED0);
	//// call 7C08C0
	//setHook((void*)0x4580A4, AddWideScreenPanel4580A4);
	////4E1C38
	u_005223C2 = 0x04E1C45;
	//setHook((void*)0x04E1C38, AddWideScreenPanel004E1C38);

	////007C1D90
	u_007C1C78 = (DWORD)u_AddWideScreenPanel007C1C78;
	u_00619C48 = 0x0619C48;
	u_007C1D90 = (DWORD)u_AddWideScreenPanel007C1D90;

	u_00619BC0 = 0x0619BC0;
	//writeByte(0x41f80A,0x9066);
	////004E1C0E     90             NOP
	//setHook((void*)0x04E1C0E, AddWideScreenPanel004E1C0E);
	////to do ajouter la partie manquante
	////004E1C12 
	//writeByte(0x04E1C13, 0x90);
	//BYTE _04E1C14[] =
	//{
	//	0x68,0x20,0x1C,0x4E,0x00
	//};
	//writeData(0x04E1C09, _04E1C14, 5);
	////004E1C2A     8B46 18        MOV EAX,DWORD PTR DS:[ESI+0x18]
	//writeByte(0x04E1C2C, 0x18);
	////004E1C2F   . 3D 00050000    CMP EAX,0x500
	//writeByte(0x04E1C31, 0x04);



	u_004DA6EA = 0x04DA6EA;
	u_4DA6CC = 0x04DA6CC;
	//004DA6E7  |. 8B46 14        MOV EAX,DWORD PTR DS:[ESI+0x14]   -> X 
	InjectHook((void*)0x04DA6E5, u_AddWideScreenPanelreadXY, PATCH_JUMP);

	//004E1C0E     90             NOP
	/*setHook((void*)0x04E1C0E, u_AddWideScreenPanelSLP);
	BYTE u_PUSH_4E1C20[] = { 0x68,0x20,0x1C,0x4E,0x00 };
	writeData(0x04E1C09, u_PUSH_4E1C20, 5);
	writeByte(0x04E1C13, 0x90);*/




#pragma endregion resize interface slp
}

//004D9984 | . 8B4E 18                       MOV ECX, DWORD PTR DS : [ESI + 18]
//004D9987 | . 8B56 14                       MOV EDX, DWORD PTR DS : [ESI + 14]


DWORD _004D998C = 0x04D998C;
DWORD _Res__X = (DWORD)GetSystemMetrics(SM_CXSCREEN);
DWORD _Res__Y = (DWORD)GetSystemMetrics(SM_CYSCREEN);
//0041BCC5     B9 00040000                  MOV ECX, 400

DWORD _0041BD2B = 0x041BD2B;
DWORD _getscreenEax = 0x041BD2B;
void __declspec(naked)  setScreenRes()
{
	__asm {
		/*	MOV ECX, _Res__Y
			MOV EDX, _Res__X
			MOV EDX, DWORD PTR DS : [6645C4]
			MOV EAX, DWORD PTR DS : [EDX + 24]
			MOV EAX, DWORD PTR DS : [EAX + 8F4]
			CMP EAX, 320*/

			//MOV ECX, _u_Cord_X
			//MOV EDX, _u_Cord_Y
			//MOV u_screenSaveEDX, EDX
			//MOV EDX, DWORD PTR DS : [6645C4h]
			//MOV EAX, DWORD PTR DS : [EDX + 24h]
			//MOV EDX, _u_Cord_X
			//MOV  DWORD PTR DS : [EAX + 8F4h] , EDX
			//MOV EAX, _u_Cord_Y
			//MOV  DWORD PTR DS : [EAX + 8F8h] , EDX


		MOV EAX, DWORD PTR DS : [EBX + 24h]
		MOV ECX, _Res__X
		MOV DWORD PTR DS : [EAX + 8F4h] , ECX // 320h
		MOV ECX, DWORD PTR DS : [EBX + 24h]
		MOV _getscreenEax, EAX
		MOV EAX, _Res__Y
		MOV DWORD PTR DS : [ECX + 8FCh] , EAX//258
		MOV  _Res__Y, EAX
		JMP _0041BD2B



	}
}


DWORD myCord_X;
DWORD myCord_Y;



 

///resize  screen 
#pragma region resize  screen 
////00448551  |. 8B6C24 4C      MOV EBP,DWORD PTR SS:[ESP+0x4C]
//004A5230  /$ 6A FF          PUSH -0x1
//004A55F0  /$ 56             PUSH ESI
//004A55F0  /$ 56             PUSH ESI
//007BF900   8B6C24 4C         MOV EBP,DWORD PTR SS:[ESP+0x4C]
DWORD u_00448925;
DWORD u_004A5230;
DWORD u_007BF980;
DWORD u_004A55F0;
DWORD u_0044869C;//0044869C  |> 6A 00          PUSH 0x0                                 ; /Arg11 = 00000000

void __declspec(naked)  u_AddWideScreenPanel00448551()
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
		CALL u_004A5230//0055E9E0
		TEST EAX, EAX
		JE _u_00448925 // 005BBCFA
		MOV ECX, DWORD PTR DS : [EDI]
		PUSH 14h
		LEA EAX, DWORD PTR DS : [ESI + 88Ch]
		PUSH ECX
		PUSH EAX
		MOV ECX, ESI
		CALL u_004A55F0 //0055EDA0
		TEST EAX, EAX
		JE _u_00448925 // 005BBCFA
		MOV ECX, DWORD PTR DS : [ESI + 888h]
		PUSH ECX
		CALL u_007BF980 //age2_x1.007BF980
		JMP u_0044869C //age2_x1.005BBA15
		_u_00448925 :
		JMP[u_00448925]
	}
}
//007BF980
WORD u_7A5608;
DWORD u_004BD5E0;//004BD5E0   $ 8B01           MOV EAX,DWORD PTR DS:[ECX]
DWORD u_7912A0;
DWORD u_007BF9D0;
void __declspec(naked)  u_AddWideScreenPanel007BF980()
{
	__asm {
		MOV ECX, DWORD PTR SS : [ESP + 4h]
		XOR EAX, EAX
		MOV  WORD PTR DS : [u_7A5608] , 20h//WORD PTR DS : [
		MOV DWORD PTR DS : [ECX + 174h] , EAX//[ECX + 174h] 
		CALL u_004BD5E0 //00547A00
		_007BF99A :
		MOV ECX, u_7912A0
			MOV ECX, DWORD PTR DS : [ECX]
			MOV EDX, DWORD PTR DS : [ECX + 68h]//[ECX + 6Ch]
			MOV ECX, DWORD PTR SS : [ESP + 4h]
			MOV EAX, DWORD PTR DS : [EDX + 18h]
			PUSH u_007BF9D0//age2_x1.007BF9D0
			PUSH ECX
			PUSH 0h
			MOV ECX, DWORD PTR DS : [EAX]
			PUSH 0h
			PUSH EAX
			CALL DWORD PTR DS : [ECX + 20h]
			CMP  WORD PTR DS : [u_7A5608] , 20h
			MOV BYTE PTR DS : [u_7A5608] , 8h
			JE _007BF99A
			RETN 4h
	}
}
DWORD u_7A5609;
DWORD u_004BCF90;
DWORD u_004BCEB0;
DWORD u_005FCE14;
DWORD u_04BBF20;
char u_printRes[] = "%d x %d";
void __declspec(naked)  u_AddWideScreenPanel007BF9D0()
{
	__asm {
		PUSH ESI
		PUSH EDI
		PUSH EBX
		MOV EAX, DWORD PTR DS : [u_7A5608]
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
		PUSH offset  u_printRes//_007BFA70; ASCII "%d x %d"
		PUSH ECX
		CALL u_005FCE14// age2_x1.0061442B  005FCE14  /$ 55             PUSH EBP
		ADD ESP, 10h
		LEA EDX, DWORD PTR SS : [ESP]
		MOV ECX, EBX
		XOR EAX, EAX
		PUSH EAX
		PUSH EDI
		MOV WORD PTR SS : [ESP + 2h] , SI
		PUSH EDX
		CALL u_004BCF90 //age2_x1.005473A0 
		ADD ESP, 20h
		//MOV BYTE PTR DS:[_7A5609]  , 1h
		MOV BYTE PTR DS : [u_7A5608 + 1] , 1h
		MOV ECX, u_7912A0
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
		CALL u_004BCEB0 //age2_x1.005472B0
		MOV ECX, EBX
		PUSH 1h
		PUSH 0h
		PUSH 7h
		CALL u_04BBF20//age2_x1.00546250
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
//0x0448EE8
DWORD u_004BD5A0;
DWORD u_00448F37;
void __declspec(naked)  u_AddWideScreenPanel0448EE8()
{
	__asm {
		MOV ECX, DWORD PTR DS : [ESI + 888h]
		CALL u_004BD5A0 //age2_x1.005479C0
		MOV EDI, EAX
		XOR EBP, EBP
		MOV BP, AX
		SHR EDI, 10h
		JMP u_00448F37 //age2_x1.005BC2EE //00448F37   > 6A 00          PUSH 0x0
	}
}

//004EC54E  |. 0F84 F4080000  JE empires2.004ECE48

DWORD u_004A4570;
DWORD u_004ECE48;
//DWORD u_004A5230;
DWORD u_004EC554;
DWORD u_00948;
DWORD u_00968;
DWORD u_0096C;

void __declspec(naked)  u_AddWideScreenPanelBegingGame004EC54E()
{
	__asm {
		PUSH  1h
		PUSH  1h
		PUSH EBX
		PUSH  0Bh
		PUSH  12h
		PUSH  0A1h
		PUSH  172h
		PUSH  1C2h
		LEA EAX, u_00948 //DWORD PTR SS : [EBP +  948h]
		PUSH  2531h
		PUSH EAX
		PUSH EBP
		MOV ECX, EBP
		CALL  u_004A4570 //age2_x1.0055DD20
		TEST EAX, EAX
		JE __004ECE48 //age2_x1.0050CE74
		PUSH  0Ah
		PUSH  5Dh
		PUSH  80h
		PUSH  184h
		LEA ESI, u_00968//DWORD PTR SS : [EBP +  968h]
		PUSH  1C2h
		PUSH ESI
		PUSH EBP
		MOV ECX, EBP
		CALL u_004A5230 //age2_x1.0055E9E0
		TEST EAX, EAX
		JE __004ECE48 //age2_x1.0050CE74
		MOV ECX, DWORD PTR DS : [ESI]
		PUSH  14h
		LEA EAX, u_0096C//DWORD PTR SS : [EBP +  96Ch]
		PUSH ECX
		PUSH EAX
		MOV ECX, EBP
		CALL u_004A55F0 //0055EDA0 age2_x1.0055EDA0
		TEST EAX, EAX
		JE __004ECE48// age2_x1.0050CE74
		JMP u_004EC554 //004EC554| . 8B0E           MOV ECX, DWORD PTR DS : [ESI]
		__004ECE48 :
		JMP u_004ECE48

	}
}
//004ED45E  |. 8B01           |MOV EAX,DWORD PTR DS:[ECX]

//DWORD _004ED45E;
DWORD u_004ED464; // | > 8B0B | MOV ECX, DWORD PTR DS : [EBX]


void __declspec(naked)  u_AddWideScreenPanelBegingGame004ED45E()
{
	__asm {
		MOV EAX, DWORD PTR SS : [ESP + 14h]
		CMP EAX, 3h
		JNZ __004ED464//age2_x1.0050D3BC
		MOV EAX, DWORD PTR DS : [ECX]
		PUSH EDI
		CALL DWORD PTR DS : [EAX + 14h]
		JMP u_004ED464 //age2_x1.0050D3BC
		__004ED464 :
		JMP u_004ED464
	}
}
//0044862F  |> E8 3C720600    CALL empires2.004AF870
//DWORD u_007BF9D0;
DWORD u_00448634;
void __declspec(naked)  u_AddWideScreenPanelBegingGame0044862F()
{
	__asm {
		//MOV ECX, DWORD PTR DS : [EBX + 0964h]//968
		//MOV ECX, DWORD PTR DS : [EBX]
		MOV ECX, DWORD PTR DS : [ESI + 88Ch]
		PUSH ECX
		CALL u_007BF9D0// age2_x1.007BF980
		JMP u_00448634//age2_x1.0050F3C8
	}
}
//004EEFF1   . 8B8D 58090000  MOV ECX,DWORD PTR SS:[EBP+0x958]

DWORD u_004EF058;
DWORD u_004EF06F;
//void __declspec(naked)  AddWideScreenPanelBegingGame004EEFF1()
//{
//	__asm {
//		MOV ECX, DWORD PTR SS : [EBP + 958h]//964h
//		CMP EAX, ECX
//		JNZ _007BF8EE
//		CALL u_004BD5A0 //age2_x1.005479C0
//		MOV ESI, EAX
//		XOR EDI, EDI
//		MOV DI, AX
//		SHR ESI, 10h
//		JMP _004EF058 //age2_x1.0050EAFE
//		_007BF8EE :
//		JMP _004EF06F //age2_x1.0050EB18
//		NOP
//	}
//}
//004EEA81   . 8B8D 58090000  MOV ECX,DWORD PTR SS:[EBP+0x958]
//004EEAFF   > 8B8D 64090000  MOV ECX,DWORD PTR SS:[EBP+0x964]
DWORD u_004EEAFF;
//004EEAE8   > 8B0D C4456600  MOV ECX,DWORD PTR DS:[0x6645C4]
DWORD u_004EEAE8;
//004BD5A0  /$ 0FBF81 0401000>MOVSX EAX,WORD PTR DS:[ECX+0x104]
//DWORD u_004BD5A0;


void __declspec(naked)  u_AddWideScreenPanelBegingGame004EEA81()
{
	__asm {
		MOV ECX, DWORD PTR SS : [EBP + 958h]//964h
		CMP EAX, ECX
		JNZ _007BF8EE
		CALL u_004BD5A0 //age2_x1.005479C0
		MOV ESI, EAX
		XOR EDI, EDI
		MOV DI, AX
		SHR ESI, 10h
		JMP u_004EEAE8 //age2_x1.0050EAFE
		_007BF8EE :
		JMP u_004EEAFF //age2_x1.0050EB18
			NOP
	}
}
#pragma endregion resize screen

void userPatchWideScreen(int H, int V)
{

	//writeDwordF(0x00E494A, V - 54);
	/*
		writeDwordF(0x001BCC6,	H + 0	   );
		writeDwordF(0x001BD0C,	V + 0	   );
		writeDwordF(0x001BD13,	H + 1	   );
		writeDwordF(0x001D355,	H + 0	   );
		writeDwordF(0x001D36F,	V + 0	   );
		writeDwordF(0x001D392,	H + 1	   );
		writeDwordF(0x001D94C,	H + 0	   );
		writeDwordF(0x001D97B,	V + 0	   );
		writeDwordF(0x001D985,	H + 1	   );
		writeDwordF(0x0048610,	H + 0	   );
		writeDwordF(0x0048617,	H + 1	   );
		writeDwordF(0x004865C,	H + 0	   );
		writeDwordF(0x0048681,	H + 1	   );
		writeDwordF(0x0048F07,	H + 0	   );
		writeDwordF(0x0048F0C,	V + 0	   );
		writeDwordF(0x0048F22,	H + 1	   );
		writeDwordF(0x0048F27,	V + 1	   );
		writeDwordF(0x0048F67,	H + 2	   );
		writeDwordF(0x0050B28,	V + 0	   );
		writeDwordF(0x0050C00,	V + 1	   );
		writeDwordF(0x0050DA3,	V + 2	   );
		writeDwordF(0x00510B3,	V + 0	   );
		writeDwordF(0x00510CD,	V + 1	   );
		writeDwordF(0x005DF7B, 	H + 0	   );
		writeDwordF(0x005DF86, 	H + 1	   );
		writeDwordF(0x005E030, 	H + 0	   );
		writeDwordF(0x005E039,	V + 0	   );
		writeDwordF(0x005E04B, 	H + 1	   );
		writeDwordF(0x005E054,	V + 1	   );
		writeDwordF(0x005E066, 	H + 2	   );
		writeDwordF(0x005E06F, 	V + 2	   );
		writeDwordF(0x005E105, 	H + 0	   );
		writeDwordF(0x005E10E, 	V + 0	   );
		writeDwordF(0x005E1AD, 	H + 0	   );
		writeDwordF(0x005E1B6, 	V + 0	   );
		writeDwordF(0x005E25B, 	H + 0	   );
		writeDwordF(0x005E264,	V + 0	   );
		writeDwordF(0x005E2CE, 	H + 0	   );
		writeDwordF(0x005E324, 	H + 1	   );
		writeDwordF(0x005E32B, 	H + 2	   );
		writeDwordF(0x005E394, 	H + 0	   );
		writeDwordF(0x005E39B,	H + 2	   );
		writeDwordF(0x005E416,	H + 0	   );
		writeDwordF(0x005E41D,	H + 2	   );
		writeDwordF(0x005E490,	H + 0	   );
		writeDwordF(0x005E497,	H + 2	   );
		writeDwordF(0x00DA6EB,	H + 1	   );
		writeDwordF(0x00DA707,	H + 1	   );
		writeDwordF(0x00DA71C,	V - 279	   );
		writeDwordF(0x00DA72E,	V - 249	   );
		writeDwordF(0x00DA733,	H + 1	   );
		writeDwordF(0x00DA767,	V - 206	   );
		writeDwordF(0x00DA7CA,	V - 196	   );
		writeDwordF(0x00DA7D9,	V - 178	   );
		writeDwordF(0x00DA811,	V - 55	   );
		writeDwordF(0x00DA918,	H - 301	   );
		writeDwordF(0x00DA92E,	H - 241	   );
		writeDwordF(0x00DA944,	H - 181	   );
		writeDwordF(0x00DA95A,	H - 121	   );
		writeDwordF(0x00DA970,	H - 62	   );
		writeDwordF(0x00DA982,	V - 194	   );
		writeDwordF(0x00DA99B,	V - 67	   );
		writeDwordF(0x00DA9B4,	V - 197	   );
		writeDwordF(0x00DA9CD,	V - 197	   );
		writeDwordF(0x00DA9E6,	V - 167	   );
		writeDwordF(0x00DA9FF,	V - 77	   );
		writeDwordF(0x00DAA18,	V - 48	   );
		writeDwordF(0x00DAA31,	V - 44	   );
		writeDwordF(0x00DAA42,	H + 0	   );
		writeDwordF(0x00DAA5E,	H + 0	   );
		writeDwordF(0x00DAA73,	V - 230	   );
		writeDwordF(0x00DAA85,	V - 200	   );
		writeDwordF(0x00DAA8A,	H + 0	   );
		writeDwordF(0x00DAABE,	V - 169	   );
		writeDwordF(0x00DAAC5,	H - 336	   );
		writeDwordF(0x00DAAF3,	H / 2 - 112);
		writeDwordF(0x00DAB1C, 	H - 649    );
		writeDwordF(0x00DAB21,	V - 152	   );
		writeDwordF(0x00DAB30,	V - 144	   );
		writeDwordF(0x00DAB68,	V - 21	   );
		writeDwordF(0x00DAC6F,	H - 303	   );
		writeDwordF(0x00DAC85,	H - 243	   );
		writeDwordF(0x00DAC9B,	H - 183	   );
		writeDwordF(0x00DACB1,	H - 123	   );
		writeDwordF(0x00DACC7,	H - 64	   );
		writeDwordF(0x00DACD9,	V - 154	   );
		writeDwordF(0x00DACE0,	H - 308	   );
		writeDwordF(0x00DACF2,	V - 49	   );
		writeDwordF(0x00DACF9,	H - 309	   );
		writeDwordF(0x00DAD0B,	V - 156	   );
		writeDwordF(0x00DAD12,	H - 96	   );
		writeDwordF(0x00DAD24,	V - 162	   );
		writeDwordF(0x00DAD2B,	H - 69	   );
		writeDwordF(0x00DAD3D,	V - 137	   );
		writeDwordF(0x00DAD44,	H - 60	   );
		writeDwordF(0x00DAD56,	V - 59	   );
		writeDwordF(0x00DAD5D,	H - 61	   );
		writeDwordF(0x00DAD6F,	V - 35	   );
		writeDwordF(0x00DAD76,	H - 74	   );
		writeDwordF(0x00DAD88,	V - 39	   );
		writeDwordF(0x00DAD8F,	H - 102	   );
		writeDwordF(0x00DF4E6,	H + 2	   );
		writeDwordF(0x00DF4EF,	V + 2	   );
		writeDwordF(0x00DF514,	H + 1	   );
		writeDwordF(0x00DF51D,	V + 1	   );
		writeDwordF(0x00DF551,	H + 0	   );
		writeDwordF(0x00DF55A,	V + 0	   );
		writeDwordF(0x00E1C30,	H + 1	   );
		writeDwordF(0x00E471A,	H + 1	   );
		writeDwordF(0x00E4732,	V - 171	   );
		writeDwordF(0x00E4748,	V - 138	   );
		writeDwordF(0x00E478A,	V - 138	   );
		writeDwordF(0x00E475E,	V - 118	   );
		writeDwordF(0x00E47A0,	V - 118	   );
		writeDwordF(0x00E4774,	V - 98	   );
		writeDwordF(0x00E47B6,	V - 98	   );
		writeDwordF(0x00E47CC,	V - 59	   );
		writeDwordF(0x00E47E2,	V - 59	   );
		writeDwordF(0x00E47F8,	V - 59	   );
		writeDwordF(0x00E4811,	V - 59	   );
		writeDwordF(0x00E482C,	V - 59	   );
		writeDwordF(0x00E4855,	V - 144	   );
		writeDwordF(0x00E48AB,	V - 118	   );
		writeDwordF(0x00E4869,	V - 118	   );
		writeDwordF(0x00E487F,	V - 98	   );
		writeDwordF(0x00E48C1,	V - 98	   );
		writeDwordF(0x00E4895,	V - 78	   );
		writeDwordF(0x00E48D7,	V - 78	   );
		writeDwordF(0x00E48ED,	V - 54	   );
		writeDwordF(0x00E4903,	V - 54	   );
		writeDwordF(0x00E4919,	V - 54	   );
		writeDwordF(0x00E4932,	V - 54	   );
		writeDwordF(0x00E494B,	V - 54	   );
		writeDwordF(0x00E4841,	H + 0	   );
		writeDwordF(0x00ED127,	H + 0	   );
		writeDwordF(0x00ED14E,	H + 1	   );
		writeDwordF(0x00EEAC4,	H + 0	   );
		writeDwordF(0x00EEAC9,	V + 0	   );
		writeDwordF(0x00EEADF,	H + 1	   );
		writeDwordF(0x00EEAE4,	V + 1	   );
		writeDwordF(0x01A6BC5,	H + 1	   );*/

	writeDwordF(0x001BCC5, H + 0);//1024
	writeDwordF(0x001BD06, V + 0);//768
	//writeDwordF(0x001BD12,	H + 1);//1280
	writeDwordF(0x001D354, H + 0);//1024
	writeDwordF(0x001D369, V + 0);//768
	//writeDwordF(0x001D38C,	H + 1);//1280
	writeDwordF(0x001D94B, H + 0);//1024
	writeDwordF(0x001D975, V + 0);//768
	//writeDwordF(0x001D984,	H + 1);//1280
	writeDwordF(0x004860F, H + 0);//1024
	//writeDwordF(0x0048616,	H + 1);//1280
	writeDwordF(0x004865B, H + 0);//1024
	//writeDwordF(0x004867F,	H + 1);//1280
	writeDwordF(0x0048F06, H + 0);//1024
	writeDwordF(0x0048F0B, V + 0);//768
	//writeDwordF(0x0048F21,	H + 1);//1280
	//writeDwordF(0x0048F26,	V + 1);//1024
	//writeDwordF(0x0048F65,	H + 2);//1600
	writeDwordF(0x0050B27, V + 0);//768
	//writeDwordF(0x0050BFF,	V + 1);//1024
	//writeDwordF(0x0050DA2,	V + 2);//1200
	writeDwordF(0x00510B2, V + 0);//768
	//writeDwordF(0x00510CC,	V + 1);//1024
	writeDwordF(0x005DF79, H + 0);//1024
	//writeDwordF(0x005DF84, 	H + 1);//1280
	writeDwordF(0x005E02E, H + 0);//1024
	writeDwordF(0x005E036, V + 0);//768
	//writeDwordF(0x005E049, 	H + 1);//1280
	//writeDwordF(0x005E051,	V + 1);//1024
	//writeDwordF(0x005E064, 	H + 2);//1600
	//writeDwordF(0x005E06C, 	V + 2);//1200
	writeDwordF(0x005E103, H + 0);//1024
	writeDwordF(0x005E10B, V + 0);//768
	writeDwordF(0x005E1AB, H + 0);//1024
	writeDwordF(0x005E1B3, V + 0);//768
	writeDwordF(0x005E259, H);//1024   /////
	writeDwordF(0x005E261, V + 0);//768
	writeDwordF(0x005E2CD, H + 0);//1024
	//writeDwordF(0x005E323, 	H + 1);//1280
	//writeDwordF(0x005E32A, 	H + 2);//1600
	writeDwordF(0x005E393, H + 0);//1024
	//writeDwordF(0x005E39A,	H + 2);//1600
	writeDwordF(0x005E415, H + 0);//1024
	//writeDwordF(0x005E41C,	H + 2);//1600
	writeDwordF(0x005E48F, H + 0);//1024
	//writeDwordF(0x005E496,	H + 2);//1600
	//writeDwordF(0x00DA6EA,	H + 1);//1280
	//writeDwordF(0x00DA706,	H + 1);//1280
	writeDwordF(0x00DA71B, V - 279);
	writeDwordF(0x00DA72D, V - 249);
	//writeDwordF(0x00DA732,	H +	1  );//1280
	writeDwordF(0x00DA766, V - 206);
	writeDwordF(0x00DA7C9, V - 196);
	writeDwordF(0x00DA7D8, V - 178);
	writeDwordF(0x00DA80F, V - 55);
	writeDwordF(0x00DA917, H - 301);
	writeDwordF(0x00DA92D, H - 241);
	writeDwordF(0x00DA943, H - 181);
	writeDwordF(0x00DA959, H - 121);
	writeDwordF(0x00DA96F, H - 62);
	writeDwordF(0x00DA981, V - 194);
	writeDwordF(0x00DA99A, V - 67);
	writeDwordF(0x00DA9B3, V - 197);
	writeDwordF(0x00DA9CC, V - 197);
	writeDwordF(0x00DA9E5, V - 167);
	writeDwordF(0x00DA9FE, V - 77);
	writeDwordF(0x00DAA17, V - 48);
	writeDwordF(0x00DAA30, V - 44);
	writeDwordF(0x00DAA41, H + 0);//1024
	writeDwordF(0x00DAA5D, H + 0);//1024
	writeDwordF(0x00DAA72, V - 230);
	writeDwordF(0x00DAA84, V - 200);
	writeDwordF(0x00DAA89, H + 0);//1024
	writeDwordF(0x00DAABD, V - 169);
	writeDwordF(0x00DAAC4, H - 336);
	writeDwordF(0x00DAAF2, H / 2 - 112);
	writeDwordF(0x00DAB1B, H - 649);
	writeDwordF(0x00DAB20, V - 152);
	writeDwordF(0x00DAB2F, V - 144);
	//writeDwordF(0x00DAB67, V - 21);//
	writeDwordF(0x00DAC6E, H - 303);
	writeDwordF(0x00DAC84, H - 243);
	writeDwordF(0x00DAC9A, H - 183);
	writeDwordF(0x00DACB0, H - 123);
	writeDwordF(0x00DACC6, H - 64);
	writeDwordF(0x00DACD8, V - 154);
	writeDwordF(0x00DACDF, H - 308);
	writeDwordF(0x00DACF1, V - 49);
	writeDwordF(0x00DACF8, H - 309);
	writeDwordF(0x00DAD0A, V - 156);
	writeDwordF(0x00DAD11, H - 96);
	writeDwordF(0x00DAD23, V - 162);
	writeDwordF(0x00DAD2A, H - 69);
	writeDwordF(0x00DAD3C, V - 137);
	writeDwordF(0x00DAD43, H - 60);
	writeDwordF(0x00DAD55, V - 59);
	writeDwordF(0x00DAD5C, H - 61);
	writeDwordF(0x00DAD6E, V - 35);
	writeDwordF(0x00DAD75, H - 74);
	writeDwordF(0x00DAD87, V - 39);
	writeDwordF(0x00DAD8E, H - 102);
	writeDwordF(0x00E4731, V - 171);
	writeDwordF(0x00E4747, V - 138);
	writeDwordF(0x00E4789, V - 138);
	writeDwordF(0x00E475D, V - 118);
	writeDwordF(0x00E4790, V - 118);
	writeDwordF(0x00E4773, V - 98);
	writeDwordF(0x00E47B5, V - 98);
	writeDwordF(0x00E47CB, V - 59);
	writeDwordF(0x00E47E1, V - 59);
	writeDwordF(0x00E47F7, V - 59);
	writeDwordF(0x00E4810, V - 59);
	writeDwordF(0x00E482B, V - 59);
	writeDwordF(0x00E4854, V - 144);
	writeDwordF(0x00E48AA, V - 118);
	writeDwordF(0x00E4868, V - 118);
	writeDwordF(0x00E487E, V - 98);
	writeDwordF(0x00E48C0, V - 98);
	writeDwordF(0x00E4894, V - 78);
	writeDwordF(0x00E48D6, V - 78);
	writeDwordF(0x00E48EC, V - 54);
	writeDwordF(0x00E4902, V - 54);
	writeDwordF(0x00E4918, V - 54);
	writeDwordF(0x00E4931, V - 54);
	writeDwordF(0x00E494A, V - 54);
	//writeDwordF(0x00DF4E5,	H + 2  );//1600
	//writeDwordF(0x00DF4EC,	V + 2  );//1200
	//writeDwordF(0x00DF513,	H + 1  );//1280
	//writeDwordF(0x00DF51A,	V + 1  );//1024
	writeDwordF(0x00DF550, H + 0);//1024
	writeDwordF(0x00DF557, V + 0);//768
	//writeDwordF(0x00E1C2F,	H + 1  );//1280
	//writeDwordF(0x00E4719,	H + 1  );//1280

	writeDwordF(0x00E4840, H + 0);//1024
	writeDwordF(0x00ED126, H + 0);//1024
	//writeDwordF(0x00ED14D,	H + 1  );//1280
	writeDwordF(0x00EEAC3, H + 0);//1024
	writeDwordF(0x00EEAC8, V + 0);//768
	//writeDwordF(0x00EEADE,	H + 1  );//1280
	//writeDwordF(0x00EEAE3,	V + 1  );//1024
	//writeDwordF(0x01A6BC4,	H + 1  );//1280

}


#pragma endregion

//H 1024
//V 768
//0045E259     8180 07000000 >ADD DWORD PTR DS:[EAX+0x7],0x38811675


//writeDwordF(0x001BD12,	H + 1);//1280

//writeDwordF(0x001D38C,	H + 1);//1280

//writeDwordF(0x001D984,	H + 1);//1280

//writeDwordF(0x0048616,	H + 1);//1280

//writeDwordF(0x004867F,	H + 1);//1280

//writeDwordF(0x0048F21,	H + 1);//1280
//writeDwordF(0x0048F26,	V + 1);//1024
//writeDwordF(0x0048F65,	H + 2);//1600

//writeDwordF(0x0050BFF,	V + 1);//1024
//writeDwordF(0x0050DA2,	V + 2);//1200

//writeDwordF(0x00510CC,	V + 1);//1024

//writeDwordF(0x005DF84, 	H + 1);//1280

//writeDwordF(0x005E049, 	H + 1);//1280
//writeDwordF(0x005E051,	V + 1);//1024
//writeDwordF(0x005E064, 	H + 2);//1600
//writeDwordF(0x005E06C, 	V + 2);//1200

//writeDwordF(0x005E323, 	H + 1);//1280
//writeDwordF(0x005E32A, 	H + 2);//1600

//writeDwordF(0x005E39A,	H + 2);//1600

//writeDwordF(0x005E41C,	H + 2);//1600

//writeDwordF(0x005E496,	H + 2);//1600
//writeDwordF(0x00DA6EA,	H + 1);//1280
//writeDwordF(0x00DA706,	H + 1);//1280

//writeDwordF(0x00DA732,	H +	1  );//1280

//writeDwordF(0x00DF4E5,	H + 2  );//1600
//writeDwordF(0x00DF4EC,	V + 2  );//1200
//writeDwordF(0x00DF513,	H + 1  );//1280
//writeDwordF(0x00DF51A,	V + 1  );//1024

//writeDwordF(0x00E1C2F,	H + 1  );//1280
//writeDwordF(0x00E4719,	H + 1  );//1280


//writeDwordF(0x00ED14D,	H + 1  );//1280

//writeDwordF(0x00EEADE,	H + 1  );//1280
//writeDwordF(0x00EEAE3,	V + 1  );//1024
//writeDwordF(0x01A6BC4,	H + 1  );//1280

//004DAB6E  |. 8B8E 5C100000  MOV ECX,DWORD PTR DS:[ESI+0x105C]


void __declspec(naked) u_UnitFormationPrinteInWideScreen()
{
	__asm {

		MOV EBP, DWORD PTR DS : [ESI + 18h] ; Y
		SUB EBP, u_refheight
		LEA EDI, DWORD PTR DS : [ESI + 1074h]
		_007C0F71 :
		MOV EBX, DWORD PTR DS : [ESI + 14h] ; X
		SUB EBX, u_refwidth
		SHR EBX, 1h
		ADD EBX, 25h
		_007C0F82 :
		MOV ECX, DWORD PTR DS : [EDI]
			PUSH  28h
			PUSH  28h
			PUSH EBP
			MOV EAX, DWORD PTR DS : [ECX]
			PUSH EBX
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [EDI]
			PUSH  24h
			CALL  u_005A6870
			ADD EBX, 29h
			ADD EDI, 4h
			MOV EAX, DWORD PTR DS : [ESI + 14h] ; X
			SUB EAX, u_refwidth
			SHR EAX, 1h
			ADD EAX, 0F2h
			CMP EBX, EAX
			JL _007C0F82
			MOV EBX, DWORD PTR DS : [ESI + 18h]
			SUB EBX, 15h
			ADD EBP, 29h
			CMP EBP, EBX
			JL _007C0F71
			JMP u_004DAB6E

	}
}


//004DA6F5  |. 8B8E A0110000  MOV ECX,DWORD PTR DS:[ESI+11A0]

//004DA6EA  |. 3D 00050000    CMP EAX,500

char _00679C2C[100] = "map1280.bmp";
char _00679C20[100] = "map1024.bmp";
char _00679C14[100] = "map800.bmp";
DWORD _005BF1E0 = 0x0443B50;
DWORD _00453CE0 = 0x05A6870;
DWORD _00551350 = 0x04AF4D0;
DWORD __004DB0EA = 0x04DB0EA;
void __declspec(naked) u_patchExe()
{
	__asm {
		MOV EDI, DWORD PTR DS : [ESI + 18h]
		CMP EDI, 400h
		JMP _007C0E1F
		MOV EDI, DWORD PTR DS : [ESI + 14h]
		SUB EDI, 500h
		MOV ECX, DWORD PTR DS : [ESI + 11A0h]
		MOV EAX, DWORD PTR DS : [ECX + 6Ch]
		TEST EAX, EAX
		JE short _007C0A7B
		MOV EDX, DWORD PTR DS : [ECX]
		MOV EAX, DWORD PTR DS : [ESI + 14h]
		PUSH 1Eh
		PUSH EAX
		PUSH 20h
		PUSH 0h
		CALL DWORD PTR DS : [EDX + 1Ch]
		MOV ECX, DWORD PTR DS : [ESI + 1070h]
		MOV EAX, DWORD PTR DS : [ESI + 18h]
		SUB EAX, 118h
		MOV EDX, DWORD PTR DS : [ESI + 14h]
		PUSH EDX
		MOV EAX, DWORD PTR DS : [ECX]
		PUSH 3Eh
		JMP short _007C0A92
		_007C0A7B :
		MOV ECX, DWORD PTR DS : [ESI + 1070h]
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 0FAh
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ESI + 14h]
			PUSH EDX
			PUSH 20h
			MOV EAX, DWORD PTR DS : [ECX]
			_007C0A92 :
			PUSH 0h
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1078h]
			PUSH 20h
			PUSH 190h
			PUSH 0h
			MOV EDX, DWORD PTR DS : [ECX]
			PUSH 0h
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1074h]
			PUSH 0C6h
			PUSH 18Ah
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 0CFh
			PUSH EAX
			PUSH 364h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1074h]
			PUSH 0C4E9h
			PUSH offset _00679C2C; ASCII "map1280.bmp"
			CALL _005BF1E0
			MOV ECX, DWORD PTR DS : [ESI + 11BCh]
			PUSH 14h
			PUSH 70h
			PUSH 8h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SHR EAX, 1h
			SUB EAX, 38h
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1218h]
			PUSH 14h
			PUSH 142h
			PUSH 16h
			MOV EAX, DWORD PTR DS : [ECX]
			PUSH 209h
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 11C4h]
			PUSH 10h
			PUSH 1A4h
			PUSH 2h
			MOV EDX, DWORD PTR DS : [ECX]
			PUSH 2h
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 107Ch]
			PUSH 96h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 324h
			PUSH EAX
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 0C5h
			PUSH EAX
			PUSH 153h
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV EBP, DWORD PTR DS : [ESI + 18h]
			SUB EBP, 0B3h
			LEA EDI, DWORD PTR DS : [ESI + 1080h]
			_007C0B67 :
			MOV EBX, 2Ch
			_007C0B6C :
		MOV ECX, DWORD PTR DS : [EDI]
			PUSH 28h
			PUSH 28h
			PUSH EBP
			MOV EDX, DWORD PTR DS : [ECX]
			PUSH EBX
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [EDI]
			PUSH 24h
			CALL _00453CE0
			ADD EBX, 29h
			ADD EDI, 4h
			CMP EBX, 0F9h
			JL short _007C0B6C
			MOV EBX, DWORD PTR DS : [ESI + 18h]
			SUB EBX, 38h
			ADD EBP, 29h
			CMP EBP, EBX
			JL short _007C0B67
			MOV EDI, DWORD PTR DS : [ESI + 14h]
			SUB EDI, 500h
			MOV EAX, DWORD PTR DS : [ESI + 1068h]
			MOV ECX, DWORD PTR DS : [ESI + 10C8h]
			PUSH 0h
			PUSH EAX
			PUSH 0h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 1068h]
			PUSH 2h
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 10E8h]
			PUSH 0h
			CALL _00551350
			MOV EDX, DWORD PTR DS : [ESI + 1068h]
			MOV ECX, DWORD PTR DS : [ESI + 10DCh]
			PUSH 4h
			PUSH EDX
			PUSH 0h
			CALL _00551350
			MOV EAX, DWORD PTR DS : [ESI + 1068h]
			MOV ECX, DWORD PTR DS : [ESI + 10CCh]
			PUSH 6h
			PUSH EAX
			PUSH 0h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 1068h]
			PUSH 8h
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 10D8h]
			PUSH 0h
			CALL _00551350
			MOV EDX, DWORD PTR DS : [ESI + 1068h]
			MOV ECX, DWORD PTR DS : [ESI + 10E0h]
			PUSH 0Ah
			PUSH EDX
			PUSH 0h
			CALL _00551350
			MOV EAX, DWORD PTR DS : [ESI + 1068h]
			MOV ECX, DWORD PTR DS : [ESI + 10E4h]
			PUSH 0Ch
			PUSH EAX
			PUSH 0h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 1068h]
			PUSH 0Eh
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 10F0h]
			PUSH 0h
			CALL _00551350
			MOV EDX, DWORD PTR DS : [ESI + 1068h]
			MOV ECX, DWORD PTR DS : [ESI + 10E0h]
			PUSH 0Ah
			PUSH EDX
			PUSH 1h
			CALL _00551350
			MOV EAX, DWORD PTR DS : [ESI + 1068h]
			MOV ECX, DWORD PTR DS : [ESI + 10D8h]
			PUSH 8h
			PUSH EAX
			PUSH 1h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 1068h]
			PUSH 4h
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 10DCh]
			PUSH 1h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 10ECh]
			PUSH 13h
			PUSH 32h
			PUSH 8h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 105h
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10D0h]
			PUSH 13h
			PUSH 32h
			PUSH 8h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 0D3h
			PUSH EAX
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10BCh]
			MOV EDX, DWORD PTR DS : [ECX]
			PUSH 13h
			PUSH 32h
			PUSH 8h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 0A1h
			PUSH EAX
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10C0h]
			PUSH 13h
			PUSH 32h
			PUSH 8h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 6Fh
			PUSH EAX
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10C4h]
			PUSH 13h
			PUSH 32h
			PUSH 8h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 3Dh
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10E8h]
			PUSH 35h
			PUSH 35h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 0C3h
			PUSH EAX
			PUSH 377h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10E4h]
			PUSH 35h
			PUSH 35h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 44h
			PUSH EAX
			PUSH 376h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10CCh]
			PUSH 21h
			PUSH 21h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 0C6h
			PUSH EAX
			PUSH 47Ch
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10C8h]
			PUSH 21h
			PUSH 21h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 0C6h
			PUSH EAX
			PUSH 4A3h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10F0h]
			PUSH 21h
			PUSH 21h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 0A8h
			PUSH EAX
			PUSH 4BAh
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10D8h]
			PUSH 21h
			PUSH 21h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 4Eh
			PUSH EAX
			PUSH 4BBh
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10DCh]
			PUSH 21h
			PUSH 21h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 31h
			PUSH EAX
			PUSH 4A2h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10E0h]
			PUSH 21h
			PUSH 21h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 2Dh
			PUSH EAX
			PUSH 479h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EDX, DWORD PTR DS : [ECX]
			JMP _007C1603
			_007C0E1F :
		CMP EDI, 300h
			JL _007C1210
			MOV EDI, DWORD PTR DS : [ESI + 14h]
			SUB EDI, 400h
			MOV ECX, DWORD PTR DS : [ESI + 11A0h]
			MOV EAX, DWORD PTR DS : [ECX + 6Ch]
			TEST EAX, EAX
			JE short _007C0E69
			MOV EAX, DWORD PTR DS : [ECX]
			MOV EDX, DWORD PTR DS : [ESI + 14h]
			PUSH 1Eh
			PUSH EDX
			PUSH 19h
			PUSH 0h
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1070h]
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 0E6h
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ESI + 14h]
			PUSH EDX
			MOV EDX, DWORD PTR DS : [ECX]
			PUSH 37h
			JMP short _007C0E80
			_007C0E69 :
		MOV ECX, DWORD PTR DS : [ESI + 1070h]
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 0C8h
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ESI + 14h]
			PUSH EDX
			PUSH 19h
			MOV EDX, DWORD PTR DS : [ECX]
			_007C0E80 :
			PUSH 0h
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1078h]
			PUSH 18h
			PUSH 190h
			PUSH 0h
			MOV EAX, DWORD PTR DS : [ECX]
			PUSH 0h
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1074h]
			PUSH 0A4h
			PUSH 146h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 0A9h
			PUSH EAX
			PUSH 2B0h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1074h]
			PUSH 0C4E8h
			PUSH offset _00679C20; ASCII "map1024.bmp"
			CALL _005BF1E0
			MOV ECX, DWORD PTR DS : [ESI + 11BCh]
			PUSH 14h
			PUSH 70h
			PUSH 2h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SHR EAX, 1h
			SUB EAX, 38h
			PUSH EAX
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1218h]
			PUSH 14h
			PUSH 136h
			PUSH 10h
			MOV EDX, DWORD PTR DS : [ECX]
			PUSH 190h
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 11C4h]
			PUSH 10h
			PUSH 1A4h
			PUSH 2h
			MOV EAX, DWORD PTR DS : [ECX]
			PUSH 2h
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 107Ch]
			PUSH 96h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 284h
			PUSH EAX
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 98h
			PUSH EAX
			PUSH 11Eh
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV EBP, DWORD PTR DS : [ESI + 18h]
			SUB EBP, 90h
			LEA EDI, DWORD PTR DS : [ESI + 1080h]
			_007C0F55 :
			MOV EBX, 25h
			_007C0F5A :
		MOV ECX, DWORD PTR DS : [EDI]
			PUSH 28h
			PUSH 28h
			PUSH EBP
			MOV EAX, DWORD PTR DS : [ECX]
			PUSH EBX
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [EDI]
			PUSH 24h
			CALL _00453CE0
			ADD EBX, 29h
			ADD EDI, 4h
			CMP EBX, 0F2h
			JL short _007C0F5A
			MOV EBX, DWORD PTR DS : [ESI + 18h]
			SUB EBX, 15h
			ADD EBP, 29h
			CMP EBP, EBX
			JL short _007C0F55
			MOV EDI, DWORD PTR DS : [ESI + 14h]
			SUB EDI, 400h
			MOV ECX, DWORD PTR DS : [ESI + 1064h]
			PUSH 0h
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 10C8h]
			PUSH 0h
			CALL _00551350
			MOV EDX, DWORD PTR DS : [ESI + 1064h]
			MOV ECX, DWORD PTR DS : [ESI + 10E8h]
			PUSH 2h
			PUSH EDX
			PUSH 0h
			CALL _00551350
			MOV EAX, DWORD PTR DS : [ESI + 1064h]
			MOV ECX, DWORD PTR DS : [ESI + 10DCh]
			PUSH 4h
			PUSH EAX
			PUSH 0h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 1064h]
			PUSH 6h
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 10CCh]
			PUSH 0h
			CALL _00551350
			MOV EDX, DWORD PTR DS : [ESI + 1064h]
			MOV ECX, DWORD PTR DS : [ESI + 10D8h]
			PUSH 8h
			PUSH EDX
			PUSH 0h
			CALL _00551350
			MOV EAX, DWORD PTR DS : [ESI + 1064h]
			MOV ECX, DWORD PTR DS : [ESI + 10E0h]
			PUSH 0Ah
			PUSH EAX
			PUSH 0h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 1064h]
			PUSH 0Ch
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 10E4h]
			PUSH 0h
			CALL _00551350
			MOV EDX, DWORD PTR DS : [ESI + 1064h]
			MOV ECX, DWORD PTR DS : [ESI + 10F0h]
			PUSH 0Eh
			PUSH EDX
			PUSH 0h
			CALL _00551350
			MOV EAX, DWORD PTR DS : [ESI + 1064h]
			MOV ECX, DWORD PTR DS : [ESI + 10E0h]
			PUSH 0Ah
			PUSH EAX
			PUSH 1h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 1064h]
			PUSH 8h
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 10D8h]
			PUSH 1h
			CALL _00551350
			MOV EDX, DWORD PTR DS : [ESI + 1064h]
			MOV ECX, DWORD PTR DS : [ESI + 10DCh]
			PUSH 4h
			PUSH EDX
			PUSH 1h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 10ECh]
			PUSH 13h
			PUSH 32h
			PUSH 3h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 104h
			PUSH EAX
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10D0h]
			PUSH 13h
			PUSH 32h
			PUSH 3h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 0D2h
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10BCh]
			PUSH 13h
			PUSH 32h
			PUSH 3h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 0A0h
			PUSH EAX
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10C0h]
			PUSH 13h
			PUSH 32h
			PUSH 3h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 6Eh
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10C4h]
			PUSH 13h
			PUSH 32h
			PUSH 3h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 3Ch
			PUSH EAX
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10E8h]
			PUSH 23h
			PUSH 23h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 9Ah
			PUSH EAX
			PUSH 2CCh
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10E4h]
			PUSH 23h
			PUSH 23h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 31h
			PUSH EAX
			PUSH 2CBh
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10CCh]
			PUSH 19h
			PUSH 19h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 9Ch
			PUSH EAX
			PUSH 3A0h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10C8h]
			PUSH 19h
			PUSH 19h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 0A2h
			PUSH EAX
			PUSH 3BBh
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10F0h]
			PUSH 19h
			PUSH 19h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 89h
			PUSH EAX
			PUSH 3C4h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10D8h]
			PUSH 19h
			PUSH 19h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 3Bh
			PUSH EAX
			PUSH 3C3h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10DCh]
			PUSH 19h
			PUSH 19h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 23h
			PUSH EAX
			PUSH 3B6h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10E0h]
			PUSH 19h
			PUSH 19h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 27h
			PUSH EAX
			PUSH 39Ah
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			JMP _007C1606
			_007C1210 :
		CMP EDI, 258h
			JL _007C1606
			MOV EDI, DWORD PTR DS : [ESI + 14h]
			SUB EDI, 320h
			//MOV ECX, DWORD PTR DS : [ESI + 11A0h]
			MOV ECX, DWORD PTR DS : [ESI + 11A0h]
			MOV EAX, DWORD PTR DS : [ECX + 6Ch]
			TEST EAX, EAX
			JE short _007C125A
			MOV EDX, DWORD PTR DS : [ECX]
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			PUSH 1Eh
			PUSH EAX
			PUSH 19h
			PUSH 0h
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1070h]
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 0C8h
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ESI + 14h]
			PUSH EDX
			MOV EAX, DWORD PTR DS : [ECX]
			PUSH 37h
			JMP short _007C1271
			_007C125A :
		MOV ECX, DWORD PTR DS : [ESI + 1070h]
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 0AAh
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ESI + 14h]
			PUSH EDX
			PUSH 19h
			MOV EAX, DWORD PTR DS : [ECX]
			_007C1271 :
			PUSH 0h
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1078h]
			PUSH 18h
			PUSH 182h
			PUSH 0h
			MOV EDX, DWORD PTR DS : [ECX]
			PUSH 0h
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1074h]
			PUSH 86h
			PUSH 10Ah
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 87h
			PUSH EAX
			PUSH 1FFh
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1074h]
			PUSH 0C4EBh
			PUSH offset _00679C14; ASCII "map800.bmp"
			CALL _005BF1E0
			PUSH 14h
			PUSH 70h
			PUSH 2h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SHR EAX, 1h
			MOV EDX, 183h
			SUB EAX, 38h
			CMP EAX, EDX
			CMOVL EAX, EDX
			MOV ECX, DWORD PTR DS : [ESI + 11BCh]
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 1218h]
			PUSH 14h
			PUSH 13Eh
			PUSH 10h
			MOV EAX, DWORD PTR DS : [ECX]
			PUSH 11Fh
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 11C4h]
			PUSH 10h
			PUSH 1A4h
			PUSH 2h
			MOV EDX, DWORD PTR DS : [ECX]
			PUSH 2h
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 107Ch]
			PUSH 84h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 1F6h
			PUSH EAX
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 85h
			PUSH EAX
			PUSH 0D2h
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV EBP, DWORD PTR DS : [ESI + 18h]
			SUB EBP, 87h
			LEA EDI, DWORD PTR DS : [ESI + 1080h]
			_007C1350 :
			MOV EBX, 5h
			_007C1355 :
		MOV ECX, DWORD PTR DS : [EDI]
			PUSH 28h
			PUSH 28h
			PUSH EBP
			MOV EDX, DWORD PTR DS : [ECX]
			PUSH EBX
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [EDI]
			PUSH 24h
			CALL _00453CE0
			ADD EBX, 29h
			ADD EDI, 4h
			CMP EBX, 0D2h
			JL short _007C1355
			MOV EBX, DWORD PTR DS : [ESI + 18h]
			SUB EBX, 0Ch
			ADD EBP, 29h
			CMP EBP, EBX
			JL short _007C1350
			MOV EDI, DWORD PTR DS : [ESI + 14h]
			SUB EDI, 320h
			MOV EAX, DWORD PTR DS : [ESI + 1060h]
			MOV ECX, DWORD PTR DS : [ESI + 10C8h]
			PUSH 0h
			PUSH EAX
			PUSH 0h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 1060h]
			PUSH 2h
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 10E8h]
			PUSH 0h
			CALL _00551350
			MOV EDX, DWORD PTR DS : [ESI + 1060h]
			MOV ECX, DWORD PTR DS : [ESI + 10DCh]
			PUSH 4h
			PUSH EDX
			PUSH 0h
			CALL _00551350
			MOV EAX, DWORD PTR DS : [ESI + 1060h]
			MOV ECX, DWORD PTR DS : [ESI + 10CCh]
			PUSH 6h
			PUSH EAX
			PUSH 0h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 1060h]
			PUSH 8h
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 10D8h]
			PUSH 0h
			CALL _00551350
			MOV EDX, DWORD PTR DS : [ESI + 1060h]
			MOV ECX, DWORD PTR DS : [ESI + 10E0h]
			PUSH 0Ah
			PUSH EDX
			PUSH 0h
			CALL _00551350
			MOV EAX, DWORD PTR DS : [ESI + 1060h]
			MOV ECX, DWORD PTR DS : [ESI + 10E4h]
			PUSH 0Ch
			PUSH EAX
			PUSH 0h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 1060h]
			PUSH 0Eh
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 10F0h]
			PUSH 0h
			CALL _00551350
			MOV EDX, DWORD PTR DS : [ESI + 1060h]
			MOV ECX, DWORD PTR DS : [ESI + 10E0h]
			PUSH 0Ah
			PUSH EDX
			PUSH 1h
			CALL _00551350
			MOV EAX, DWORD PTR DS : [ESI + 1060h]
			MOV ECX, DWORD PTR DS : [ESI + 10D8h]
			PUSH 8h
			PUSH EAX
			PUSH 1h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 1060h]
			PUSH 4h
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 10DCh]
			PUSH 1h
			CALL _00551350
			MOV ECX, DWORD PTR DS : [ESI + 10ECh]
			PUSH 13h
			PUSH 32h
			PUSH 3h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 104h
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10D0h]
			PUSH 13h
			PUSH 32h
			PUSH 3h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 0D2h
			PUSH EAX
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10BCh]
			PUSH 13h
			PUSH 32h
			PUSH 3h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 0A0h
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10C0h]
			PUSH 13h
			PUSH 32h
			PUSH 3h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 6Eh
			PUSH EAX
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10C4h]
			PUSH 13h
			PUSH 32h
			PUSH 3h
			MOV EAX, DWORD PTR DS : [ESI + 14h]
			SUB EAX, 3Ch
			PUSH EAX
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10E8h]
			PUSH 23h
			PUSH 23h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 7Bh
			PUSH EAX
			PUSH 204h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10E4h]
			PUSH 23h
			PUSH 23h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 2Eh
			PUSH EAX
			PUSH 204h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10CCh]
			PUSH 19h
			PUSH 19h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 7Bh
			PUSH EAX
			PUSH 2CFh
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10C8h]
			PUSH 19h
			PUSH 19h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 7Bh
			PUSH EAX
			PUSH 2EDh
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10F0h]
			PUSH 19h
			PUSH 19h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 65h
			PUSH EAX
			PUSH 300h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10D8h]
			PUSH 19h
			PUSH 19h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 3Ah
			PUSH EAX
			PUSH 300h
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EDX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EDX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10DCh]
			PUSH 19h
			PUSH 19h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 25h
			PUSH EAX
			PUSH 2ECh
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [ESI + 10E0h]
			PUSH 19h
			PUSH 19h
			MOV EAX, DWORD PTR DS : [ESI + 18h]
			SUB EAX, 23h
			PUSH EAX
			PUSH 2CFh
			ADD DWORD PTR SS : [ESP] , EDI
			MOV EDX, DWORD PTR DS : [ECX]
			_007C1603 :
			CALL DWORD PTR DS : [EDX + 1Ch]
			//004DB0EA  |> 8B8E A8110000  MOV ECX,DWORD PTR DS:[ESI+11A8]
			_007C1606 :
			JMP __004DB0EA


	}
}

DWORD u_7A5500;
DWORD uu_00632C48 = 0x0632C48;
DWORD uu_00619C48 = 0x0619C48;
void __declspec(naked) u_UserPatchResolution007C1EF0()
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
		MOV DWORD PTR DS : [774024h] , ECX
		LEA ECX, DWORD PTR DS : [EAX + ECX - 1h]
		MOV DWORD PTR DS : [774028h] , ECX
		//JMP [uu_00632C48]
		JMP[uu_00619C48]
	}
}

void __declspec(naked) u_UserPatchResolution007C1F20()
{
	__asm {
		PUSH EBP
		MOV EBP, ESP
		PUSH EBX
		PUSH ESI
		PUSH EDI
		MOV EBX, DWORD PTR DS : [u_7A5500]
		XOR EDX, EDX
		AND EBX, EBX
		JE short uu_007C1F4A
		MOV DWORD PTR DS : [774004h] , EBX
		MOV DWORD PTR DS : [774008h] , EBX
		MOV ECX, DWORD PTR SS : [EBP + 30h]
		MOV EAX, DWORD PTR SS : [EBP + 34h]
		MOV DWORD PTR DS : [EBX + 8h] , ECX
		MOV DWORD PTR DS : [EBX + 0Ch] , EAX
		uu_007C1F4A :
		MOV ECX, DWORD PTR SS : [EBP + 0Ch]
			MOV EAX, DWORD PTR SS : [EBP + 14h]
			MOV DWORD PTR DS : [774024h] , ECX
			LEA ECX, DWORD PTR DS : [EAX + ECX - 1h]
			MOV DWORD PTR DS : [774028h] , ECX
			//JMP [uu_00632C48]
			JMP[uu_00619C48]
	}
}
void __declspec(naked)  uu_AddWideScreenPanel007C1D90()
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
		MOV DWORD PTR DS : [774024h] , ECX
		LEA ECX, DWORD PTR DS : [EAX + ECX - 1h]
		MOV DWORD PTR DS : [774028h] , ECX
		//JMP [u_00619BC0]
		JMP[uu_00619C48]
	}
}
DWORD uu_007C1D90 = (DWORD)uu_AddWideScreenPanel007C1D90;
//__declspec(naked) void resources_changed_hook(short int res_type, float usage_type, int unused) {
//	__asm {
//		pushad
//		mov eax, temp_pointer
//		mov dword ptr[eax], ecx         //temp_pointer->base_pointer points to calling class
//	}
//	//temp_pointer = (item_set*)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(item_set));
//
//	temp_pointer->player_name = (char*)(*(temp_pointer->base_pointer + (0x98 / sizeof(DWORD_PTR))));
//	temp_pointer->player_stat = (player_stats*)(*(temp_pointer->base_pointer + (0xA8 / sizeof(DWORD_PTR))));
//	if (items_insert(&base_pointers, temp_pointer) == true)
//		temp_pointer = (item_set*)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(item_set));
//
//	__asm {
//		popad
//		jmp resources_changed
//	}
//}
//007C1CD2   E8 DD1CE5FF      CALL age2_x1.006139B4
//we need this to alloc picture
//00607A94 | > 8325 8C2A7700 > AND DWORD PTR DS : [772A8C] , 0
//00607A9B | . 8325 902A7700 > AND DWORD PTR DS : [772A90] , 0
//

void __declspec(naked) u_UserPatchResolution_006178C8()//heap free
{
	__asm {
		//MOV EAX,DWORD PTR DS:[793144]
		MOV EAX, DWORD PTR DS : [772A90h]
		LEA ECX, DWORD PTR DS : [EAX + EAX * 4h]
		//MOV EAX,DWORD PTR DS:[793148]
		MOV EAX, DWORD PTR DS : [772A94h]
		LEA ECX, DWORD PTR DS : [EAX + ECX * 4h]
		_006178D8 :
		CMP EAX, ECX
		JNB short _006178F0
		MOV EDX, DWORD PTR SS : [ESP + 4h]
		SUB EDX, DWORD PTR DS : [EAX + 0Ch]
		CMP EDX, 100000h
		JB short _006178F2
		ADD EAX, 14
		JMP short _006178D8
		_006178F0 :
		XOR EAX, EAX
			_006178F2 :
		RETN
	}
}




//564A2BF7   50               PUSH EAX
//564A2BF8   6A 00            PUSH 0
//564A2BFA   A3 58564A56      MOV DWORD PTR DS : [test] , EAX
//564A2BFF   FF15 18404A56    CALL DWORD PTR DS : [<&KERNEL32.GetProcessHeap>] ; KERNEL32.GetProcessHeap
//564A2C05   50               PUSH EAX
//564A2C06   FF15 10404A56    CALL DWORD PTR DS : [<&KERNEL32.HeapFree>] ; KERNEL32.HeapFree
//

//without GetProcessHeap
//564A2BF7   50               PUSH EAX
//564A2BF8   6A 00            PUSH 0
//564A2BFA   FF35 BC564A56    PUSH DWORD PTR DS : [han] //HANDLE
//564A2C00 > A3 58564A56      MOV DWORD PTR DS : [test] , EAX
//564A2C05   FF15 10404A56    CALL DWORD PTR DS : [<&KERNEL32.HeapFree>] ; KERNEL32.HeapFree

//DWORD hHeap =0x772A98;
//DWORD _006178C8 = (DWORD)u_UserPatchResolution_006178C8;
////PUSH DWORD PTR DS : [772A98] ; / hHeap = NULL
//void __declspec(naked) u_UserPatchResolution_006139B4()//heap free
//{
//	__asm {
//		PUSH ESI
//		MOV ESI, DWORD PTR SS : [ESP + 8h]
//		TEST ESI, ESI
//		JE short _006139E1
//		PUSH ESI
//		CALL _006178C8
//		POP ECX
//		TEST EAX, EAX
//		PUSH ESI
//		JE SHORT age2_x1.006139D3
//		PUSH EAX
//		CALL age2_x1.006178F3
//		POP ECX
//		POP ECX
//		POP ESI
//		RETN
//	}
//	HeapFree(han, 0, test);
//	__asm
//	{
//	_006139E1:
//	POP ESI
//	RETN
//
//
//		/*
//
//		   PUSH 0; | Flags = 0
//		   PUSH DWORD PTR DS : [79314C] ; | hHeap = NULL
//		   CALL DWORD PTR DS : [<&KERNEL32.HeapFree>] ; \HeapFree
//		   POP ESI
//		   RETN
//*/
//
//	}
//	HeapFree(han, 0, test);
//}
void __declspec(naked) u_UserPatchResolution_006137C9()//heap alloc
{
	__asm {

	}
}
//006139B4  /$ 56             PUSH ESI
//0058FA7E  |. E8 2D960600    |CALL Empires2.005F90B0

//0058F2A0  |. E8 4B9D0600    CALL Empires2.005F8FF0
//00401210  |. E8 B4252100    CALL age2_x1.006137C9



//006139B4   ==  0058FA7E

//to heap alloc 24444
DWORD uu_006139B4 = 0x058FA7E;//(DWORD)u_UserPatchResolution_006139B4;
DWORD uu_006137C9 = 0x05F8FF0;
DWORD uu_007C1EF0 = (DWORD)u_UserPatchResolution007C1EF0;
DWORD uu_007C1F20 = (DWORD)u_UserPatchResolution007C1F20;
DWORD* test;
HANDLE  han;
DWORD _005F8FF0 = 0x05F8FF0;
DWORD __005FCE14 = 0x05FCE14;
void __declspec(naked) u_UserPatchResolution07C1C38()
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
			CALL uu_007C1EF0
			//MOV DWORD PTR DS : [795038] , 0h
			MOV DWORD PTR DS : [774038h] , 0h
			MOV EDX, DWORD PTR SS : [EBP + 30h]
			SUB ESI, EDX
			ADD ESI, 190h
			AND ESI, ESI
			JG short uu_007C1C72
			MOV DWORD PTR SS : [ESP + 4h] , 0h
			CALL uu_007C1EF0
			//MOV ECX, DWORD PTR DS : [795004]
			MOV ECX, DWORD PTR DS : [774004h]
			MOV EAX, DWORD PTR SS : [EBP + 30h]
			MOV EDX, DWORD PTR SS : [EBP + 34h]
			MOV DWORD PTR SS : [ESP + 38h] , ECX
			MOV DWORD PTR SS : [ESP + 3Ch] , EAX
			MOV DWORD PTR SS : [ESP + 40h] , EDX
			MOV DWORD PTR SS : [ESP + 44h] , EDI
			MOV DWORD PTR SS : [ESP + 48h] , EBX
			MOV ESI, EBX
			MOV EAX, DWORD PTR DS : [u_7A5500]
			TEST EAX, EAX
			JE short uu_007C1CDA
			CMP DWORD PTR DS : [EAX + 10h] , ESI
			JGE short uu_007C1D0D
			PUSH EAX
			CALL uu_006139B4
			//CALL __005FCE14
			ADD ESP, 4h
			uu_007C1CDA :
		SHL ESI, 2h
			ADD ESI, 14h
			PUSH ESI
			PUSH 1h
			//CALL uu_006137C9
			CALL _005F8FF0 // age2_x1.006137C9 heap alloc 
			ADD ESP, 8h
			MOV DWORD PTR DS : [u_7A5500] , EAX
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
			MOV DWORD PTR DS : [774038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 2Ch] , EDX
			MOV DWORD PTR SS : [ESP + 28h] , ECX
			MOV DWORD PTR SS : [ESP + 4h] , EAX
			CALL uu_007C1EF0
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
			MOV DWORD PTR DS : [774038h] , 1C7h
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
			CALL uu_007C1F20
			JMP short uu_007C1E18
			uu_007C1E09 :
		MOV ECX, DWORD PTR SS : [ESP + 38h]
			//MOV DWORD PTR DS : [795004] , ECX
			MOV DWORD PTR DS : [774004h] , ECX
			CALL uu_007C1EF0
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
			MOV DWORD PTR DS : [774038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 2Ch] , EDX
			MOV DWORD PTR SS : [ESP + 28h] , ESI
			MOV DWORD PTR SS : [ESP + 4h] , EDI
			CALL uu_007C1F20
			ADD EDI, 30h
			ADD ESI, 30h
			ADD EBP, 30h
			LEA EDX, DWORD PTR DS : [ESI + 30h]
			CMP EDX, EBX
			JGE short uu_007C1EBE
			MOV DWORD PTR SS : [ESP + 1Ch] , 2h
			//MOV DWORD PTR DS : [795038] , 1C7h
			MOV DWORD PTR DS : [774038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 2Ch] , EDX
			MOV DWORD PTR SS : [ESP + 28h] , ESI
			MOV DWORD PTR SS : [ESP + 4h] , EBP
			CALL uu_007C1F20
			ADD EDI, 30h
			ADD ESI, 30h
			ADD EBP, 30h
			LEA EDX, DWORD PTR DS : [ESI + 30h]
			CMP EDX, EBX
			JLE short uu_007C1E31
			MOV EDX, EBX
			MOV DWORD PTR SS : [ESP + 1Ch] , 0h
			//MOV DWORD PTR DS : [795038] , 1C7
			MOV DWORD PTR DS : [774038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 2Ch] , EDX
			MOV DWORD PTR SS : [ESP + 28h] , ESI
			MOV DWORD PTR SS : [ESP + 4h] , EDI
			CALL uu_007C1F20
			JMP short uu_007C1EE3
			uu_007C1EBE :
		MOV EDX, EBX
			MOV DWORD PTR SS : [ESP + 1Ch] , 2h
			//MOV DWORD PTR DS : [795038] , 1C7
			MOV DWORD PTR DS : [774038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 2Ch] , EDX
			MOV DWORD PTR SS : [ESP + 28h] , ESI
			MOV DWORD PTR SS : [ESP + 4h] , EBP
			CALL uu_007C1F20
			uu_007C1EE3 :
		ADD ESP, 50h
			POP EBP
			POP EBX
			POP EDI
			POP ESI
			RETN
	}
	//test = (DWORD*)HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(DWORD));
	//HeapFree(han, 0, test);
}
//7A362BE6   6A 04            PUSH 4
//7A362BE8   6A 08            PUSH 8
//7A362BEA   FF15 1440367A    CALL DWORD PTR DS : [<&KERNEL32.GetProcessHeap>] ; KERNEL32.GetProcessHeap
//7A362BF0   50               PUSH EAX
//7A362BF1   FF15 1040367A    CALL DWORD PTR DS : [<&KERNEL32.HeapAlloc>] ; ntdll.RtlAllocateHeap


DWORD u_007C1C38 = (DWORD)u_UserPatchResolution07C1C38;

void __declspec(naked) u_UserPatchResolution007C1B70()
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
		MOV DWORD PTR DS : [774000h] , EDX //00774000  =795000
		MOV EAX, DWORD PTR DS : [EBX + 3Ch]
		MOV EDX, DWORD PTR DS : [EBX + 40h]
		MOV DWORD PTR DS : [774004h] , EAX
		MOV DWORD PTR DS : [774008h] , EDX
		MOV EDI, DWORD PTR DS : [ESI + 14h]
		MOV EBX, DWORD PTR DS : [ESI + 18h]
		MOV EBP, DWORD PTR DS : [ECX + 0Ch]
		LEA EAX, DWORD PTR DS : [EBX - 1h]
		LEA EDX, DWORD PTR DS : [EDI - 1h]
		MOV DWORD PTR DS : [774080h] , 0h
		MOV DWORD PTR DS : [774084h] , EAX
		MOV DWORD PTR DS : [774088h] , 0h
		MOV DWORD PTR DS : [77408Ch] , EDX
		MOV DWORD PTR DS : [774038h] , 0h
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
			CALL uu_007C1D90
			MOV EDX, DWORD PTR SS : [EBP + 34h]
			MOV EAX, EBX
			MOV DWORD PTR DS : [774038h] , 1C7h
			SUB EAX, EDX
			MOV DWORD PTR SS : [ESP + 10h] , EDX
			MOV DWORD PTR SS : [ESP + 8h] , EAX
			CALL uu_007C1D90
			ADD ESP, 50h
			POP EBP
			POP EBX
			POP EDI
			POP ESI
			RETN
			_u_007C1C78 :
		JMP[u_007C1C38]




	}
}
//004E1C09   . 8B46 20        MOV EAX, DWORD PTR DS : [ESI + 20]
//004E1C0C   . 8B8E 08100000  MOV ECX, DWORD PTR DS : [ESI + 1008]
//004E1C12   . 6A 00          PUSH 0
//PUSH 522368  == push 004E1C20 
DWORD _007C1B70 = (DWORD)u_UserPatchResolution007C1B70;
void __declspec(naked) u_UserPatchResolution()
{
	__asm {
		//push 004E1C20h
		JMP _007C1B70
	}
}
/*
//1024
//004DAD98 | > 3D 20030000    CMP EAX, 320
//004DAD9D     0F85 47030000  JNZ empires2.004DB0EA
DWORD _004DB0EA = 0x04DB0EA;
DWORD _004DADA3 = 0x04DADA3;
void __declspec(naked) u_UserPatchResolutionFix1024()
{
	__asm {
		CMP EAX, 400//1024

		CMP EAX, 320
		JNZ  _004DB0EA
		JMP _004DADA3
	}
}
*/



// DWORD * myCord_X, DWORD* myCord_Y
void UserPatchWideScreen()//DWORD* myCord_X, DWORD* myCord_Y)
{



	///resize  screen 
#pragma region resize  screen 
		//00448066  |. 6A 69          |PUSH 0x69                               ; |Arg4 = 00000069
	writeByte(0x0448067, 0x6E);
	//00448095  |. 6A 46          |PUSH 0x46                               ; |Arg3 = 00000046
	writeByte(0x0448096, 0x4B);
	//00448F6B   . 74 26          JE SHORT empires2.00448F93
	writeByte(0x0448F6B, 0x66);
	writeByte(0x0448F6C, 0x90);
	u_7912A0 = 0x06645C4;//7912A0
	//00448551  |. 8B6C24 4C      MOV EBP,DWORD PTR SS:[ESP+0x4C]
	InjectHook((void*)0x0448551, u_AddWideScreenPanel00448551, PATCH_JUMP);
	//007BF980
	u_00448925 = 0x0448925;
	u_004A5230 = 0x04A5230;
	u_0044869C = 0x044869C;
	u_004BCF90 = 0x04BCF90;
	u_004BCEB0 = 0x04BCEB0;
	u_005FCE14 = 0x05FCE14;
	u_04BBF20 = 0x04BBF20;
	u_004A55F0 = 0x04A55F0;
	u_004BD5E0 = 0x04BD5E0;
	u_007BF980 = (DWORD)u_AddWideScreenPanel007BF980;
	u_007BF9D0 = (DWORD)u_AddWideScreenPanel007BF9D0;
	//00448EE8   > 8B8E 84080000  MOV ECX,DWORD PTR DS:[ESI+0x884]
	u_004BD5A0 = 0x04BD5A0;
	u_00448F37 = 0x0448F37;
	InjectHook((void*)0x0448EE8, u_AddWideScreenPanel0448EE8, PATCH_JUMP);
	//game start panel
	//
	//
	//todo

	/*
	_004A4570 = 0x04A4570;
	_004ECE48 = 0x04ECE48;
	u_004A5230 = 0x04A5230;
	_004EC554 = 0x04EC554;
	//0x04EC54E
	setHook((void*)0x04EC54E, AddWideScreenPanelBegingGame004EC54E);
	//004ED45C  |. 74 06          |JE SHORT empires2.004ED464
	_004ED464 = 0x04ED464;
	setHook((void*)0x04ED45E, AddWideScreenPanelBegingGame004ED45E);
	//004ED677  |> E8 4426FCFF    CALL Empires2.004AFCC0
	//_004ED45E = 0x04ED45E;
	_00448634 = 0x0448634;

	setHook((void*)0x0044862F, AddWideScreenPanelBegingGame0044862F);
	//004EEFF1   . 8B8D 58090000  MOV ECX,DWORD PTR SS:[EBP+0x958]
	_004EF058 = 0x04EF058;
	_004EF06F = 0x04EF06F;
	//004EEA81   . 8B8D 58090000  MOV ECX,DWORD PTR SS:[EBP+0x958]

	_004EEAFF= 0x04EEAFF;
	//004EEAE8   > 8B0D C4456600  MOV ECX,DWORD PTR DS:[0x6645C4]
	_004EEAE8= 0x04EEAE8;

	setHook((void*)0x04EEA81, AddWideScreenPanelBegingGame004EEA81);
	//004EF3FF
	BYTE _83C40C6690[] = {0x83,0xC4,0x0C,0x66,0x90};
	writeData(0x04EF3FF, _83C40C6690, 5);
	//004EF414
	writeData(0x04EF414, _83C40C6690, 5);
	//004EF429
	writeData(0x04EF429, _83C40C6690, 5);
	*/
#pragma endregion resize  screen 
	/*
	//Formation button pront X and Y
	u_004DAB6E = 0x04DAB6E;
	u_005A6870 = 0x05A6870;
	//004DAB3A     BB 50020000    MOV EBX,0x250
	//writeDwordF(0x04DAB3A, V + ratioV - 400);//21
	setHook((void*)0x04DAB3A, u_UnitFormationPrinteInWideScreen);
	//WideScreen(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));
	*/



	/**/

	//user patch ress
	InjectHook((void*)0x04E1C0E, u_UserPatchResolution, PATCH_JUMP);
	BYTE u_PUSH_4E1C20[] = { 0x68,0x20,0x1C,0x4E,0x00 };
	writeData(0x04E1C09, u_PUSH_4E1C20, 5);
	writeByte(0x04E1C13, 0x90);
	//004DF521  |. 7C 2D          JL SHORT empires2.004DF550
	writeByte(0x04DF521, 0xEB);
	//  good luck if we do this ...
	////resize
	//setHook((void*)0x04DA6EA, u_patchExe);
 
	//fix bug  1280 force to jum 1024x768
	//004DA6F5     E9 52030000    JMP 004DAA4C
	BYTE _004DAA4C[] = { 0xE9,0x52,0x03,0x00,0x00,0x90 };
	writeData(0x04DA6F5, _004DAA4C, 6);
	//	//004DF5B2  |. 81C7 9CC70000  ADD EDI,0C79C
	////0C79C  =  51100
	//
	//	//if (H < 1024 && V < 768)
	//	//{
	//		BYTE _004DF5B2[] = { 0x81, 0xC7,  0xB0, 0xC7, 0x00 , 0x00 };
	//		writeData(0x04DF5B2, _004DF5B2, 6);
	//	//}
	//	//else
	//	//{
	//	//	BYTE _004DF5B2_BACK[] = { 0x81,0xC7,0x9C,0xC7,0x00,0x00 };
	//	//	writeData(0x04DF5B2, _004DF5B2_BACK, 6);
	//	//}
	
}
 

//auto widescreen
#pragma region   Modify resolution systems
#pragma region resize interface slp

//00457ED0  |. E8 BB7E0000    CALL empires2.0045FD90
//0045FD90  /$ 56             PUSH ESI
DWORD _0045FD90;
void __declspec(naked)  AddWideScreenPanel457ED0()
{
	__asm {
		MOV ECX, DWORD PTR DS : [ECX + 3Ch]
		SUB ESP, 64h
		XOR EAX, EAX
		MOV DWORD PTR SS : [ESP] , 64h
		MOV DWORD PTR SS : [ESP + 50h] , EAX
		PUSH ESP
		PUSH 1000400h
		PUSH EAX
		PUSH EAX
		MOV EDX, DWORD PTR DS : [ECX]
		PUSH EAX
		PUSH ECX
		CALL DWORD PTR DS : [EDX + 014h]
		ADD ESP, 064h
		MOV ECX, DWORD PTR DS : [ESI + 020h]
		JMP[_0045FD90]
	}
}
//004580A9  |. 8B86 700E0000  MOV EAX,DWORD PTR DS:[ESI+0xE70]
//004580AF  |. 8BAE 780E0000  MOV EBP,DWORD PTR DS:[ESI+0xE78]

DWORD _004DB740;
DWORD _004580BD;
//004580A4  |. E8 476F0C00    CALL empires2.0051EFF0
DWORD _004580A4;
DWORD _004580A9;
DWORD _0051EFF0;
//DWORD _007C08C0;
DWORD _AddWideScreenPanel7C08C0;
void __declspec(naked)  AddWideScreenPanel4580A4()
{
	__asm {
		CALL _0051EFF0
		MOV EAX, DWORD PTR DS : [ESI + 0DC0h]
		MOV ECX, DWORD PTR DS : [ESI + 0EE4h]
		MOV EDX, DWORD PTR DS : [ESI + 0DC4h]
		MOV EBP, DWORD PTR DS : [ESI + 0EE8h]
		ADD EAX, ECX
		MOV ECX, DWORD PTR DS : [ESI + 01C5Ch]
		ADD EDX, EBP
		TEST ECX, ECX
		JE _005ABBE9
		JMP[_AddWideScreenPanel7C08C0]
		JE _005ABBD1
		CMP EBX, 400h
		JE SHORT _005ABBBC
		CMP EBX, 0500h
		JNZ _005ABBE9
		PUSH 0h
		ADD EDX, 039Eh
		PUSH 0h
		PUSH EDX
		ADD EAX, 79h
		JMP[_005ABBDF]
		_005ABBBC:
		PUSH 0h
			ADD EDX, 299h
			PUSH 0h
			PUSH EDX
			MOV EDX, DWORD PTR DS : [ESI + 20h]
			ADD EAX, 71h
			PUSH EAX
			PUSH EDX
			JMP _005ABBE4//005ABBCF   . EB 13          JMP SHORT age2_x1.005ABBE4// _004580A4
			_005ABBD1 :
		PUSH 0h
			ADD EDX, 210h
			PUSH 0h
			PUSH EDX
			ADD EAX, 66h
			_005ABBDF :
		PUSH EAX
			MOV EAX, DWORD PTR DS : [ESI + 20h]
			PUSH EAX
			_005ABBE4 :
		CALL _0051EFF0// _004DB740
			_005ABBE9 :
		JMP[_004580A9]
			//MOV EAX, DWORD PTR DS : [ESI + 0E70h]
			//MOV EBP, DWORD PTR DS : [ESI + 0xE78]
			//MOV EBX, DWORD PTR DS : [ESI + 0xDC0]
			//PUSH 0x0
			Jmp[_004580A9]//004580A9     8B86 700E0000  MOV EAX,DWORD PTR DS:[ESI+0xE70]

	}
}
//MOV EAX,DWORD PTR DS:[0x6645C4]
//004580A9     8B86 700E0000  MOV EAX,DWORD PTR DS:[ESI+0xE70]
//004A23E0  /$ 81EC C80C0000  SUB ESP,0xCC8
DWORD _6645C4;//7912A0
//DWORD _0051EFF0;
//DWORD _004580A9;
DWORD _004A23E0;
void __declspec(naked)  AddWideScreenPanel7C08C0()
{
	__asm {
		MOV EBX, DWORD PTR DS : [ESI + 0E6Ch]
		INC EBX
		IMUL EBX, EBX, 20h
		MOV EBP, DWORD PTR DS : [ESI + 1C60h]
		MOV EBP, DWORD PTR SS : [EBP + 0Ch]
		MOV EBX, DWORD PTR DS : [EBX + EBP + 14h]
		CMP EBX, 300h
		JL SHORT _007C0911
		CMP EBX, 400h
		JL SHORT _007C08FC
		PUSH 0h
		ADD EDX, 39Eh
		PUSH 0h
		PUSH EDX
		ADD EAX, 79h
		PUSH EAX
		MOV EAX, DWORD PTR DS : [ESI + 20h]
		PUSH EAX
		JMP[_007C0924]
		_007C08FC :
		PUSH 0h
		ADD EDX, 299h
		PUSH 0h
		PUSH EDX
		MOV EDX, DWORD PTR DS : [ESI + 20h]
		ADD EAX, 71h
		PUSH EAX
		PUSH EDX
		JMP[_007C0924]
		_007C0911 :
		PUSH 0h
		ADD EDX, 210h
		PUSH 0h
		PUSH EDX
		ADD EAX, 66h
		PUSH EAX
		MOV EAX, DWORD PTR DS : [ESI + 20h]
		PUSH EAX
		_007C0924 :
		CALL _0051EFF0
			JMP _004580A9
	}
}
//004E1C38   . 8B56 20        MOV EDX,DWORD PTR DS:[ESI+0x20]
//004E1C45   . 68 AC446500    PUSH empires2.006544AC                   ;  ASCII "scr_game::draw3"
DWORD _005223C2;//004E1C45

void __declspec(naked)  AddWideScreenPanel004E1C38()
{
	__asm {
		MOV EAX, DWORD PTR DS : [ESI + 14h]
		PUSH 0h
		PUSH 2h
		SUB EAX, 500h
		SHR EAX, 1
		LEA EDX, DWORD PTR DS : [EAX + 2ACh]
		MOV EAX, DWORD PTR DS : [ESI + 18h]
		LEA EAX, DWORD PTR DS : [EAX - 2Ah]
		PUSH EAX
		PUSH EDX
		MOV EDX, DWORD PTR DS : [ESI + 20h]
		PUSH EDX
		PUSH _005223C2//004E1C45
		JMP _0051EFF0//age2_x1.004DB740


	}
}
//004E1C0E
DWORD _007C1C78;
DWORD _007C1D90;
void __declspec(naked)  AddWideScreenPanel004E1C0E()
{
	__asm {
		PUSH ESI
		PUSH EDI
		PUSH EBX
		PUSH EBP
		SUB ESP, 8h
		MOV EDI, DWORD PTR DS : [ESI + 20h]
		MOV ECX, DWORD PTR DS : [ESI + 100Ch]
		MOV EDX, DWORD PTR DS : [EDI + 0C0h]
		MOV EBX, DWORD PTR DS : [EDI + 0D0h]
		MOV DWORD PTR DS : [774000h] , EDX //00774000  =795000
		MOV EAX, DWORD PTR DS : [EBX + 3Ch]
		MOV EDX, DWORD PTR DS : [EBX + 40h]
		MOV DWORD PTR DS : [774004h] , EAX
		MOV DWORD PTR DS : [774008h] , EDX
		MOV EDI, DWORD PTR DS : [ESI + 14h]
		MOV EBX, DWORD PTR DS : [ESI + 18]
		MOV EBP, DWORD PTR DS : [ECX + 0Ch]
		LEA EAX, DWORD PTR DS : [EBX - 1h]
		LEA EDX, DWORD PTR DS : [EDI - 1h]
		MOV DWORD PTR DS : [774080h] , 0h
		MOV DWORD PTR DS : [774084h] , EAX
		MOV DWORD PTR DS : [774088h] , 0h
		MOV DWORD PTR DS : [77408Ch] , EDX
		MOV DWORD PTR DS : [774038h] , 0h
		CMP EDI, 320h
		JE  _007C1C35
		CMP EDI, 400h
		JNZ  __007C1C78
		CMP EBX, 300h
		JL  __007C1C78
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
			CALL _007C1D90
			MOV EDX, DWORD PTR SS : [EBP + 34h]
			MOV EAX, EBX
			MOV DWORD PTR DS : [774038h] , 1C7h
			SUB EAX, EDX
			MOV DWORD PTR SS : [ESP + 10h] , EDX
			MOV DWORD PTR SS : [ESP + 8h] , EAX
			CALL _007C1D90
			ADD ESP, 28h
			POP EBP
			POP EBX
			POP EDI
			POP ESI
			RETN
			__007C1C78 :
		JMP[_007C1C78]
	}
}

//00774000  =795000
void __declspec(naked)  AddWideScreenPanel007C1C78()
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
		JE _007C1CA8
		CMP EDX, 500h
		JE _007C1CB2
		MOV DWORD PTR SS : [ESP + 20h] , 0D6h
		JMP _007C1CC2
		_007C1CA8 :
		MOV DWORD PTR SS : [ESP + 20h] , 116h
			JMP _007C1CC2
			_007C1CB2 :
		MOV DWORD PTR SS : [ESP + 10h] , 20h
			MOV DWORD PTR SS : [ESP + 20h] , 158h
			_007C1CC2 :
		SUB ESI, EDX
			AND ESI, ESI
			JL _007C1D7C
			_007C1CCC :
		MOV DWORD PTR SS : [ESP + 4h] , ESI
			CALL _007C1D90
			MOV DWORD PTR DS : [774038h] , 0h
			MOV EDX, DWORD PTR SS : [EBP + 30h]
			SUB ESI, EDX
			ADD ESI, 190h
			AND ESI, ESI
			JG _007C1CCC
			MOV DWORD PTR SS : [ESP + 4h] , 0h
			CALL _007C1D90
			MOV EDX, DWORD PTR SS : [EBP + 30h]
			MOV EAX, EDI
			SUB EAX, EDX
			SHR EAX, 1h
			SUB EAX, EDX
			MOV ESI, EAX
			MOV EAX, EBX
			LEA EBX, DWORD PTR DS : [EDX + ESI]
			MOV EDX, DWORD PTR SS : [EBP + 34h]
			SUB EAX, EDX
			MOV DWORD PTR SS : [ESP + 10h] , EDX
			MOV DWORD PTR SS : [ESP + 8h] , EAX
			MOV DWORD PTR SS : [ESP + 1Ch] , 0h
			MOV DWORD PTR DS : [774038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 4h] , EBX
			CALL _007C1D90
			MOV EDX, DWORD PTR SS : [EBP + 30h]
			ADD EBX, EDX
			_007C1D3A :
		MOV DWORD PTR SS : [ESP + 1Ch] , 2h
			MOV DWORD PTR DS : [774038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 4h] , ESI
			CALL _007C1D90
			MOV DWORD PTR SS : [ESP + 1Ch] , 0h
			MOV DWORD PTR DS : [774038h] , 1C7h
			MOV DWORD PTR SS : [ESP + 4h] , EBX
			CALL _007C1D90
			MOV EAX, DWORD PTR SS : [ESP + 20h]
			SUB ESI, EAX
			ADD EBX, EAX
			CMP EBX, EDI
			JL _007C1D3A
			_007C1D7C :
		ADD ESP, 28h
			POP EBP
			POP EBX
			POP EDI
			POP ESI
			RETN
	}
}
//007C1D90
//00619BC0   55               PUSH EBP
DWORD _00619BC0;
DWORD _00619C48;
void __declspec(naked)  AddWideScreenPanel007C1D90()
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
		MOV DWORD PTR DS : [774024h] , ECX
		LEA ECX, DWORD PTR DS : [EAX + ECX - 1h]
		MOV DWORD PTR DS : [774028h] , ECX
		//JMP [_00619BC0]
		JMP[_00619C48]
	}
}
//clean purple 
//0x51a3b7
//004DA6E7  |. 8B46 14        MOV EAX,DWORD PTR DS:[ESI+0x14]
DWORD Cord_X;
DWORD Cord_Y;
DWORD _004DA6EA;
DWORD _4DA6CC;
//004DA6E7     8B46 14        MOV EAX, DWORD PTR DS : [ESI + 0x14]
//004DA6EA | . 3D 00050000    CMP EAX, 0x500
//004DA6EF | . 0F85 4C030000  JNZ empires2.004DAA41


void __declspec(naked)  AddWideScreenPanelreadXY()
{
	__asm {
		JNZ __4DA6CC
		MOV EAX, DWORD PTR DS : [ESI + 18h]//Y            
		MOV Cord_Y, EAX
		MOV EAX, DWORD PTR DS : [ESI + 14h]//X
		MOV Cord_X, EAX
		//CMP EAX, 0x500
		JMP _004DA6EA
		__4DA6CC :
		JMP  _4DA6CC
	};
}

__declspec(naked) int __stdcall getWindowX()
{
	__asm
	{
		MOV EAX, DWORD PTR DS : [Cord_X]
		ret
	}
}
//
__declspec(naked) int __stdcall getWindowY()
{
	__asm
	{
		mov     eax, DWORD PTR DS : [Cord_Y]
		ret
	}
}



char map1280[] = "map1280.bmp";
char map1024[] = "map1024.bmp";
char map800[] = "map800.bmp";
DWORD _00443B50;
DWORD _005A6870;
DWORD _004AF4D0;
DWORD _004DB0EA;


#pragma endregion resize interface slp



///resize  screen 
#pragma region resize  screen 
////00448551  |. 8B6C24 4C      MOV EBP,DWORD PTR SS:[ESP+0x4C]
//004A5230  /$ 6A FF          PUSH -0x1
//004A55F0  /$ 56             PUSH ESI
//004A55F0  /$ 56             PUSH ESI
//007BF900   8B6C24 4C         MOV EBP,DWORD PTR SS:[ESP+0x4C]
DWORD _00448925;
DWORD _004A5230;
DWORD _007BF980;
DWORD _004A55F0;
DWORD _0044869C;//0044869C  |> 6A 00          PUSH 0x0                                 ; /Arg11 = 00000000

void __declspec(naked)  AddWideScreenPanel00448551()
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
		CALL _004A5230//0055E9E0
		TEST EAX, EAX
		JE __00448925 // 005BBCFA
		MOV ECX, DWORD PTR DS : [EDI]
		PUSH 14h
		LEA EAX, DWORD PTR DS : [ESI + 88Ch]
		PUSH ECX
		PUSH EAX
		MOV ECX, ESI
		CALL _004A55F0 //0055EDA0
		TEST EAX, EAX
		JE __00448925 // 005BBCFA
		MOV ECX, DWORD PTR DS : [ESI + 888h]
		PUSH ECX
		CALL _007BF980 //age2_x1.007BF980
		JMP _0044869C //age2_x1.005BBA15
		__00448925 :
		JMP[_00448925]
	}
}
//007BF980
WORD _7A5608;
DWORD _004BD5E0;//004BD5E0   $ 8B01           MOV EAX,DWORD PTR DS:[ECX]
DWORD _7912A0;
DWORD _007BF9D0;
void __declspec(naked)  AddWideScreenPanel007BF980()
{
	__asm {
		MOV ECX, DWORD PTR SS : [ESP + 4h]
		XOR EAX, EAX
		MOV  WORD PTR DS : [_7A5608] , 20h//WORD PTR DS : [
		MOV DWORD PTR DS : [ECX + 174h] , EAX//[ECX + 174h] 
		CALL _004BD5E0 //00547A00
		_007BF99A :
		MOV ECX, _7912A0
			MOV ECX, DWORD PTR DS : [ECX]
			MOV EDX, DWORD PTR DS : [ECX + 68h]//[ECX + 6Ch]
			MOV ECX, DWORD PTR SS : [ESP + 4h]
			MOV EAX, DWORD PTR DS : [EDX + 18h]
			PUSH _007BF9D0//age2_x1.007BF9D0
			PUSH ECX
			PUSH 0h
			MOV ECX, DWORD PTR DS : [EAX]
			PUSH 0h
			PUSH EAX
			CALL DWORD PTR DS : [ECX + 20h]
			CMP  WORD PTR DS : [_7A5608] , 20h
			MOV BYTE PTR DS : [_7A5608] , 8h
			JE _007BF99A
			RETN 4h
	}
}
DWORD _7A5609;
DWORD _004BCF90;
DWORD _004BCEB0;
DWORD _005FCE14;
DWORD _04BBF20;
char printRes[] = "%d x %d";
void __declspec(naked)  AddWideScreenPanel007BF9D0()
{
	__asm {
		PUSH ESI
		PUSH EDI
		PUSH EBX
		MOV EAX, DWORD PTR DS : [_7A5608]
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
		PUSH offset  printRes//_007BFA70; ASCII "%d x %d"
		PUSH ECX
		CALL _005FCE14// age2_x1.0061442B  005FCE14  /$ 55             PUSH EBP
		ADD ESP, 10h
		LEA EDX, DWORD PTR SS : [ESP]
		MOV ECX, EBX
		XOR EAX, EAX
		PUSH EAX
		PUSH EDI
		MOV WORD PTR SS : [ESP + 2h] , SI
		PUSH EDX
		CALL _004BCF90 //age2_x1.005473A0 
		ADD ESP, 20h
		//MOV BYTE PTR DS:[_7A5609]  , 1h
		MOV BYTE PTR DS : [_7A5608 + 1] , 1h
		MOV ECX, _7912A0
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
		CALL _004BCEB0 //age2_x1.005472B0
		MOV ECX, EBX
		PUSH 1h
		PUSH 0h
		PUSH 7h
		CALL _04BBF20//age2_x1.00546250
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
//0x0448EE8
DWORD _004BD5A0;
DWORD _00448F37;
void __declspec(naked)  AddWideScreenPanel0448EE8()
{
	__asm {
		MOV ECX, DWORD PTR DS : [ESI + 888h]
		CALL _004BD5A0 //age2_x1.005479C0
		MOV EDI, EAX
		XOR EBP, EBP
		MOV BP, AX
		SHR EDI, 10h
		JMP _00448F37 //age2_x1.005BC2EE //00448F37   > 6A 00          PUSH 0x0
	}
}

//004EC54E  |. 0F84 F4080000  JE empires2.004ECE48

DWORD _004A4570;
DWORD _004ECE48;
//DWORD _004A5230;
DWORD _004EC554;
DWORD _00948;
DWORD _00968;
DWORD _0096C;

void __declspec(naked)  AddWideScreenPanelBegingGame004EC54E()
{
	__asm {
		PUSH  1h
		PUSH  1h
		PUSH EBX
		PUSH  0Bh
		PUSH  12h
		PUSH  0A1h
		PUSH  172h
		PUSH  1C2h
		LEA EAX, _00948 //DWORD PTR SS : [EBP +  948h]
		PUSH  2531h
		PUSH EAX
		PUSH EBP
		MOV ECX, EBP
		CALL  _004A4570 //age2_x1.0055DD20
		TEST EAX, EAX
		JE __004ECE48 //age2_x1.0050CE74
		PUSH  0Ah
		PUSH  5Dh
		PUSH  80h
		PUSH  184h
		LEA ESI, _00968//DWORD PTR SS : [EBP +  968h]
		PUSH  1C2h
		PUSH ESI
		PUSH EBP
		MOV ECX, EBP
		CALL _004A5230 //age2_x1.0055E9E0
		TEST EAX, EAX
		JE __004ECE48 //age2_x1.0050CE74
		MOV ECX, DWORD PTR DS : [ESI]
		PUSH  14h
		LEA EAX, _0096C//DWORD PTR SS : [EBP +  96Ch]
		PUSH ECX
		PUSH EAX
		MOV ECX, EBP
		CALL _004A55F0 //0055EDA0 age2_x1.0055EDA0
		TEST EAX, EAX
		JE __004ECE48// age2_x1.0050CE74
		JMP _004EC554 //004EC554| . 8B0E           MOV ECX, DWORD PTR DS : [ESI]
		__004ECE48 :
		JMP _004ECE48

	}
}
//004ED45E  |. 8B01           |MOV EAX,DWORD PTR DS:[ECX]

//DWORD _004ED45E;
DWORD _004ED464; // | > 8B0B | MOV ECX, DWORD PTR DS : [EBX]


void __declspec(naked)  AddWideScreenPanelBegingGame004ED45E()
{
	__asm {
		MOV EAX, DWORD PTR SS : [ESP + 14h]
		CMP EAX, 3h
		JNZ __004ED464//age2_x1.0050D3BC
		MOV EAX, DWORD PTR DS : [ECX]
		PUSH EDI
		CALL DWORD PTR DS : [EAX + 14h]
		JMP _004ED464 //age2_x1.0050D3BC
		__004ED464 :
		JMP _004ED464
	}
}
//0044862F  |> E8 3C720600    CALL empires2.004AF870
//DWORD _007BF9D0;
DWORD _00448634;
void __declspec(naked)  AddWideScreenPanelBegingGame0044862F()
{
	__asm {
		//MOV ECX, DWORD PTR DS : [EBX + 0964h]//968
		//MOV ECX, DWORD PTR DS : [EBX]
		MOV ECX, DWORD PTR DS : [ESI + 88Ch]
		PUSH ECX
		CALL _007BF9D0// age2_x1.007BF980
		JMP _00448634//age2_x1.0050F3C8
	}
}
//004EEFF1   . 8B8D 58090000  MOV ECX,DWORD PTR SS:[EBP+0x958]

DWORD _004EF058;
DWORD _004EF06F;
//void __declspec(naked)  AddWideScreenPanelBegingGame004EEFF1()
//{
//	__asm {
//		MOV ECX, DWORD PTR SS : [EBP + 958h]//964h
//		CMP EAX, ECX
//		JNZ _007BF8EE
//		CALL _004BD5A0 //age2_x1.005479C0
//		MOV ESI, EAX
//		XOR EDI, EDI
//		MOV DI, AX
//		SHR ESI, 10h
//		JMP _004EF058 //age2_x1.0050EAFE
//		_007BF8EE :
//		JMP _004EF06F //age2_x1.0050EB18
//		NOP
//	}
//}
//004EEA81   . 8B8D 58090000  MOV ECX,DWORD PTR SS:[EBP+0x958]
//004EEAFF   > 8B8D 64090000  MOV ECX,DWORD PTR SS:[EBP+0x964]
DWORD _004EEAFF;
//004EEAE8   > 8B0D C4456600  MOV ECX,DWORD PTR DS:[0x6645C4]
DWORD _004EEAE8;
//004BD5A0  /$ 0FBF81 0401000>MOVSX EAX,WORD PTR DS:[ECX+0x104]
//DWORD _004BD5A0;


void __declspec(naked)  AddWideScreenPanelBegingGame004EEA81()
{
	__asm {
		MOV ECX, DWORD PTR SS : [EBP + 958h]//964h
		CMP EAX, ECX
		JNZ _007BF8EE
		CALL _004BD5A0 //age2_x1.005479C0
		MOV ESI, EAX
		XOR EDI, EDI
		MOV DI, AX
		SHR ESI, 10h
		JMP _004EEAE8 //age2_x1.0050EAFE
		_007BF8EE :
		JMP _004EEAFF //age2_x1.0050EB18
			NOP
	}
}
#pragma endregion resize screen
//004E1C09   . 8B46 20        MOV EAX,DWORD PTR DS:[ESI+0x20]

//00774000  =795000

void __declspec(naked)  AddWideScreenPanelSLP()
{
	__asm {
		PUSH ESI
		PUSH EDI
		PUSH EBX
		PUSH EBP
		SUB ESP, 8h
		MOV EDI, DWORD PTR DS : [ESI + 20h]
		MOV ECX, DWORD PTR DS : [ESI + 1008h]
		MOV EDX, DWORD PTR DS : [EDI + 0C0h]
		MOV EBX, DWORD PTR DS : [EDI + 0D0h]
		MOV DWORD PTR DS : [774000h] , EDX
		MOV EAX, DWORD PTR DS : [EBX + 3Ch]
		MOV EDX, DWORD PTR DS : [EBX + 40h]
		MOV DWORD PTR DS : [774004h] , EAX
		MOV DWORD PTR DS : [774008h] , EDX
		MOV EDI, DWORD PTR DS : [ESI + 14h]
		MOV EBX, DWORD PTR DS : [ESI + 18h]
		MOV EBP, DWORD PTR DS : [ECX + 0Ch]
		LEA EAX, DWORD PTR DS : [EBX - 1h]
		LEA EDX, DWORD PTR DS : [EDI - 1h]
		MOV DWORD PTR DS : [774080h] , 0h
		MOV DWORD PTR DS : [774084h] , EAX
		MOV DWORD PTR DS : [774088h] , 0h
		MOV DWORD PTR DS : [77408Ch] , EDX
		MOV DWORD PTR DS : [774038h] , 0h
		CMP EDI, 320h
		JE _007C1C35
		CMP EDI, 400h
		JNZ __007C1C78
		CMP EBX, 300h
		JL __007C1C78
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
			CALL _007C1D90
			MOV EDX, DWORD PTR SS : [EBP + 34h]
			MOV EAX, EBX
			MOV DWORD PTR DS : [774038h] , 1C7h
			SUB EAX, EDX
			MOV DWORD PTR SS : [ESP + 10h] , EDX
			MOV DWORD PTR SS : [ESP + 8h] , EAX
			CALL _007C1D90
			ADD ESP, 28h
			POP EBP
			POP EBX
			POP EDI
			POP ESI
			RETN
			__007C1C78 :
		JMP  _007C1C78
	}
}

//004DAB6E  |. 8B8E 5C100000  MOV ECX,DWORD PTR DS:[ESI+0x105C]

DWORD _004DAB6E;
//DWORD _005A6870;

void __declspec(naked) UnitFormationPrinteInWideScreen()
{
	__asm {

		MOV EBP, DWORD PTR DS : [ESI + 18h] ; Y
		SUB EBP, refheight
		LEA EDI, DWORD PTR DS : [ESI + 1074h]
		_007C0F71 :
		MOV EBX, DWORD PTR DS : [ESI + 14h] ; X
		SUB EBX, refwidth
		SHR EBX, 1h
		ADD EBX, 25h
		_007C0F82 :
		MOV ECX, DWORD PTR DS : [EDI]
			PUSH  28h
			PUSH  28h
			PUSH EBP
			MOV EAX, DWORD PTR DS : [ECX]
			PUSH EBX
			CALL DWORD PTR DS : [EAX + 1Ch]
			MOV ECX, DWORD PTR DS : [EDI]
			PUSH  24h
			CALL  _005A6870
			ADD EBX, 29h
			ADD EDI, 4h
			MOV EAX, DWORD PTR DS : [ESI + 14h] ; X
			SUB EAX, refwidth
			SHR EAX, 1h
			ADD EAX, 0F2h
			CMP EBX, EAX
			JL _007C0F82
			MOV EBX, DWORD PTR DS : [ESI + 18h]
			SUB EBX, 15h
			ADD EBP, 29h
			CMP EBP, EBX
			JL _007C0F71
			JMP _004DAB6E

	}
}

//DWORD _6645C4;

//004D9984 | . 8B4E 18        MOV ECX, DWORD PTR DS : [ESI + 0x18]
DWORD MyresX;
DWORD MyresY;
//004D7562  |. 50             PUSH EAX
//004D7568  |. 85C0           TEST EAX,EAX
DWORD _004D7568;
DWORD _004B9B60;
DWORD _PrecEax;
DWORD _PrecEcx;
DWORD _PrecEdx;


void __declspec(naked) SetResolution004D7562()
{
	__asm {

		MOV _PrecEax, EAX;
		MOV _PrecEcx, ECX;
		MOV _PrecEdx, EDX;

		//MOV EAX, DWORD PTR FS : [0]
		LEA ECX, DWORD PTR SS : [ESP + 18h]
			MOV EAX, DWORD PTR DS : [ECX + 24h]
			MOV  EDX, MyresX;
		MOV DWORD PTR DS : [EAX + 8F4h] , EDX
			//MOV  EAX, DWORD PTR DS : [EAX + 1Ch] ;
			LEA ECX, DWORD PTR SS : [ESP + 18h]
			MOV EAX, DWORD PTR DS : [ECX + 24h]
			MOV EDX, MyresY;
		MOV DWORD PTR DS : [ECX + 8FCh] , EDX



			MOV  EAX, _PrecEax;
		MOV  ECX, _PrecEcx;
		MOV  EDX, _PrecEdx;

		//mov DWORD PTR DS : [EAX + 18h] , MyresY
		//mov DWORD PTR DS : [EAX + 14h] , MyresX
		PUSH EAX
			CALL _004B9B60


			JMP _004D7568





	}
}



void patchEXE_(int V, int H)
{

	//unit formation button print
	if (V >= 1024)
	{
		refwidth = 0x500;
		refheight = 0xB0;
	}
	else if (V >= 768 && V < 1024)
	{
		refwidth = 0x400;
		refheight = 0x90;
	}
	else if (V >= 600 && V < 768)
	{
		refwidth = 0x400;
		refheight = 0x90;
	}
	//todo check if work
	if (H > 1024)
	{
		writeDwordF(0x0DAA41, H + 0);//1024
		writeDwordF(0x0DAA5D, H + 0);//1024
		writeDwordF(0x0DAA89, H + 0);//1024
	}
	if (H == 1024)
	{
		writeDwordF(0x0DAA41, H + 0);//1024
		writeDwordF(0x0DAA5D, H + 0);//1024
		writeDwordF(0x0DAA89, H + 0);//1024

		writeDwordF(0x0DA6EA, H + 1);//1280
		writeDwordF(0x0DA706, H + 1);//1280
		writeDwordF(0x0DA732, H + 1);//1280
		writeDwordF(0x0DA732, H + 1);//1280
		writeDwordF(0x0050DA3, V + 2);//1200
	}



	if (H > 1280)
	{

		writeDwordF(0x0DA6EA, H + 1);//1280
		writeDwordF(0x0DA706, H + 1);//1280
		writeDwordF(0x0DA732, H + 1);//1280
		writeDwordF(0x0DA732, H + 1);//1280

	}

	if (V > 1200)
		writeDwordF(0x0050DA3, V + 2);//1200

		////purple up band
		////004DAA8E     6A 49                   PUSH 0x49



	if (V >= 1024)
	{
		writeDwordF(0x00DAA84, V - 250);
		writeByte(0x04DAA8F, 0x20);
		//precY = 1024;
	}
	else if (V >= 768 && V < 1024)
	{
		writeDwordF(0x00DAA84, V - 200);
		writeByte(0x04DAA8F, 0x19);
		//precY = 768;
	}
	else if (V >= 600 && V < 768)
	{
		writeDwordF(0x00DAA84, V - 230);
	}
	//if (V >= 600 && V < 768)
	//	precY = 600;



	//else if (V < 768 && V >= 600)
	//{
	//	ratioH = -(H - 800 ) / 2;
	//}

	writeDwordF(0x00DA71B, V - 279);
	writeDwordF(0x00DA72D, V - 249);
	writeDwordF(0x00DA766, V - 206);
	writeDwordF(0x00DA7C9, V - 196);
	writeDwordF(0x00DA7D8, V - 178);
	//writeDwordF(0x00DA810, V - 55);//0f
	writeDwordF(0x00DA917, H - 301);
	writeDwordF(0x00DA92D, H - 241);
	writeDwordF(0x00DA943, H - 181);
	writeDwordF(0x00DA959, H - 121);
	writeDwordF(0x00DA96F, H - 62);

	writeDwordF(0x00DA981, V - 194);
	writeDwordF(0x00DA99A, V - 67);
	writeDwordF(0x00DA9B3, V - 197);
	writeDwordF(0x00DA9CC, V - 197);
	writeDwordF(0x00DA9E5, V - 167);
	writeDwordF(0x00DA9FE, V - 77);

	/*		writeDwordF(0x00DAA17, V - 48);
			writeDwordF(0x00DAA30, V - 44);*/


			//writeDwordF(0x00DAA41, H + 0);//1024
			//writeDwordF(0x00DAA5D, H + 0);//1024
	writeDwordF(0x00DAA72, V - 230);
	//writeDwordF(0x00DAA84, V - 200);

	//writeDwordF(0x00DAA89, H + ratioH + 0);//1024
	//mini map 
	if (V >= 1024)
	{
		writeDwordF(0x00DAABD, V - 187);
		writeDwordF(0x00DAAC4, H - 369);
	}
	else if (V < 1024 && V >= 768)
	{
		writeDwordF(0x00DAABD, V - 169);
		writeDwordF(0x00DAAC4, H - 336);
	}

	////mini map size
	////004DAAD2     68 E9C40000            PUSH 0xC4E9
	//if (V > 1024)
	//{
	//	writeDwordF(0xDAAD2, 0xC4E9);
	//	//004DAAB8     68 8A010000    PUSH 0x18A
	//	writeDwordF(0x0DAAB8, 0x18A);
	//	//004DAAB3     68 C6000000    PUSH 0xC6
	//	writeDwordF(0x0DAAB3, 0x0C6);

	//}
	//else if (V < 1024 && V >= 768)
	//{
	//	writeDwordF(0xDAAD2, 0xC4E8);
	//	//004DAAB8     68 8A010000    PUSH 0x18A
	//	//004DAAB8     68 8A010000    PUSH 0x18A
	//	writeDwordF(0x0DAAB8, 0x146);
	//	//004DAAB3     68 C6000000    PUSH 0xC6
	//	writeDwordF(0x0DAAB3, 0x0A4);
	//}
	//else if (V < 768 && V >= 600)
	//{
	//	writeDwordF(0xDAAD2, 0xC4EB);
	//	//004DAAB8     68 8A010000    PUSH 0x18A
	//	//004DAAB8     68 8A010000    PUSH 0x18A
	//	writeDwordF(0x0DAAB8, 0x10A);
	//	//004DAAB3     68 C6000000    PUSH 0xC6
	//	writeDwordF(0x0DAAB3, 0x086);
	//}
	//current age label
	writeDwordF(0x00DAAF2, H / 2 - 112);
	//formation + villager build button?

	writeDwordF(0x00DAB2F, V - 144);
	writeDwordF(0x00DAB67, V - 21);//21




	//selection

	int ratioSH = 0;
	if (V >= 1024)
	{
		//ratioSH = -(H - 1024 / 2) / 2 - 1024 / 2 - 50;
		//x
		writeDwordF(0x00DAB20, V - 162);
	}
	else if (V < 1024 && V >= 768)
	{
		//ratioSH = -(H - 800) / 2 - 800 / 2 - 230;
		//x
		writeDwordF(0x00DAB20, V - 152);
	}
	//else if (V < 768 && V >= 600)
	//{
	//	ratioSH = -(H - 800) / 2 - 800 / 2 ;
	//	//x
	//	writeDwordF(0x00DAB20, V + ratioV - 152);
	//}

	writeDwordF(0x0DAB27, H - 230);//
	int ratioSHeight = 0;

	//else if (V < 768 && V >= 600)
	//{
	//	ratioSHeight = (800) / 2;
	//}
	//size of army selection
	writeDwordF(0x00DAB1B, ratioSHeight);


	//diplomatie button
	writeDwordF(0x00DAC6E, H - 303);
	writeDwordF(0x00DAC84, H - 243);
	writeDwordF(0x00DAC9A, H - 183);
	writeDwordF(0x00DACB0, H - 123);
	writeDwordF(0x00DACC6, H - 64);
	//mini map button
	int ratioVm = 0;


	//flashing x button 
	writeDwordF(0x00DACD8, V - 154);
	writeDwordF(0x00DACDF, H - 308);
	//idle button
	writeDwordF(0x00DACF1, V - 49);
	writeDwordF(0x00DACF8, H - 309);
	//player name button
	writeDwordF(0x00DAD0A, V - 156);
	writeDwordF(0x00DAD11, H - 96);
	//

	if (V >= 1024)
	{
		writeDwordF(0x00DAD2A, H - 29);
		writeDwordF(0x00DAD23, V - 142);
	}
	else if (V < 1024 && V >= 768)
	{
		writeDwordF(0x00DAD2A, H - 50);
		writeDwordF(0x00DAD23, V + -132);
	}

	//ok
	writeDwordF(0x00DAD3C, V - 156);
	writeDwordF(0x00DAD43, H - 66);
	//
	writeDwordF(0x00DAD55, V - 59);
	writeDwordF(0x00DAD5C, H - 61);
	//
	writeDwordF(0x00DAD6E, V - 35);
	writeDwordF(0x00DAD75, H - 74);
	//idel show
	writeDwordF(0x00DAD87, V - 39);
	writeDwordF(0x00DAD8E, H - 102);
	////ressources number Y
	////004DAAA4     6A 20                   PUSH 0x20
	//writeDwordF(0x0DAAA4, 1);
	////ressources X
	////004DAAA8     6A 10                   PUSH 0x10
	////writeDwordF(0x0DAAA8, 1);



	writeDwordF(0x00E4731, V - 171);
	writeDwordF(0x00E4747, V - 138);
	writeDwordF(0x00E4789, V - 138);
	writeDwordF(0x00E475D, V - 118);
	writeDwordF(0x00E4790, V - 118);
	writeDwordF(0x00E4773, V - 98);
	writeDwordF(0x00E47B5, V - 98);
	writeDwordF(0x00E47CB, V - 59);
	writeDwordF(0x00E47E1, V - 59);
	writeDwordF(0x00E47F7, V - 59);
	writeDwordF(0x00E4810, V - 59);
	writeDwordF(0x00E482B, V - 59);
	writeDwordF(0x00E4854, V - 144);
	writeDwordF(0x00E48AA, V - 118);
	writeDwordF(0x00E4868, V - 118);
	writeDwordF(0x00E487E, V - 98);
	writeDwordF(0x00E48C0, V - 98);
	writeDwordF(0x00E4894, V - 78);
	writeDwordF(0x00E48D6, V - 78);
	writeDwordF(0x00E48EC, V - 54);
	writeDwordF(0x00E4902, V - 54);
	writeDwordF(0x00E4918, V - 54);
	writeDwordF(0x00E4931, V - 54);
	writeDwordF(0x00E494A, V - 54);





}
#pragma endregion
void NormaleAoeWideScreen(DWORD* myCord_X, DWORD* myCord_Y)
{
#pragma region   Modify resolution systems
#pragma region resize interface slp
	//457ED0
	_0045FD90 = 0x045FD90;
	//0x4580A4
	_004580A9 = 0x04580A9;
	_004580A4 = 0x04580A4;
	_004DB740 = 0x04DB740;
	_004580BD = 0x04580BD;
	_0051EFF0 = 0x051EFF0;
	//7C08C0
	_6645C4 = 0x06645C4;//7912A0
	_0051EFF0 = 0x051EFF0;
	_004580A9 = 0x04580A9;
	_004A23E0 = 0x004A23E0;
	//_AddWideScreenPanel7C08C0 = (DWORD) AddWideScreenPanel7C08C0;
	//setHook((void*)0x457ED0, AddWideScreenPanel457ED0);
	//// call 7C08C0
	//setHook((void*)0x4580A4, AddWideScreenPanel4580A4);
	////4E1C38
	_005223C2 = 0x04E1C45;
	//setHook((void*)0x04E1C38, AddWideScreenPanel004E1C38);

	////007C1D90
	_007C1C78 = (DWORD)AddWideScreenPanel007C1C78;
	_00619C48 = 0x0619C48;
	_007C1D90 = (DWORD)AddWideScreenPanel007C1D90;

	_00619BC0 = 0x0619BC0;
	//writeByte(0x41f80A,0x9066);
	////004E1C0E     90             NOP
	//setHook((void*)0x04E1C0E, AddWideScreenPanel004E1C0E);
	////to do ajouter la partie manquante
	////004E1C12 
	//writeByte(0x04E1C13, 0x90);
	//BYTE _04E1C14[] =
	//{
	//	0x68,0x20,0x1C,0x4E,0x00
	//};
	//writeData(0x04E1C09, _04E1C14, 5);
	////004E1C2A     8B46 18        MOV EAX,DWORD PTR DS:[ESI+0x18]
	//writeByte(0x04E1C2C, 0x18);
	////004E1C2F   . 3D 00050000    CMP EAX,0x500
	//writeByte(0x04E1C31, 0x04);



	_004DA6EA = 0x04DA6EA;
	_4DA6CC = 0x04DA6CC;
	//004DA6E7  |. 8B46 14        MOV EAX,DWORD PTR DS:[ESI+0x14]   -> X 
	InjectHook((void*)0x04DA6E5, AddWideScreenPanelreadXY, PATCH_JUMP);

	//004E1C0E     90             NOP
	InjectHook((void*)0x04E1C0E, AddWideScreenPanelSLP, PATCH_JUMP);
	BYTE PUSH_4E1C20[] = { 0x68,0x20,0x1C,0x4E,0x00 };
	writeData(0x04E1C09, PUSH_4E1C20, 5);
	writeByte(0x04E1C13, 0x90);



#pragma endregion resize interface slp

	///resize  screen 
#pragma region resize  screen 
		//00448066  |. 6A 69          |PUSH 0x69                               ; |Arg4 = 00000069
	writeByte(0x0448067, 0x6E);
	//00448095  |. 6A 46          |PUSH 0x46                               ; |Arg3 = 00000046
	writeByte(0x0448096, 0x4B);
	//00448F6B   . 74 26          JE SHORT empires2.00448F93
	writeByte(0x0448F6B, 0x66);
	writeByte(0x0448F6C, 0x90);
	_7912A0 = 0x06645C4;//7912A0
	//00448551  |. 8B6C24 4C      MOV EBP,DWORD PTR SS:[ESP+0x4C]
	InjectHook((void*)0x0448551, AddWideScreenPanel00448551, PATCH_JUMP);
	//007BF980
	_00448925 = 0x0448925;
	_004A5230 = 0x04A5230;
	_0044869C = 0x044869C;
	_004BCF90 = 0x04BCF90;
	_004BCEB0 = 0x04BCEB0;
	_005FCE14 = 0x05FCE14;
	_04BBF20 = 0x04BBF20;
	_004A55F0 = 0x04A55F0;
	_004BD5E0 = 0x04BD5E0;
	_007BF980 = (DWORD)AddWideScreenPanel007BF980;
	_007BF9D0 = (DWORD)AddWideScreenPanel007BF9D0;
	//00448EE8   > 8B8E 84080000  MOV ECX,DWORD PTR DS:[ESI+0x884]
	_004BD5A0 = 0x04BD5A0;
	_00448F37 = 0x0448F37;
	InjectHook((void*)0x0448EE8, AddWideScreenPanel0448EE8, PATCH_JUMP);
	//game start panel
	//
	//
	//todo

	/*
	_004A4570 = 0x04A4570;
	_004ECE48 = 0x04ECE48;
	_004A5230 = 0x04A5230;
	_004EC554 = 0x04EC554;
	//0x04EC54E
	setHook((void*)0x04EC54E, AddWideScreenPanelBegingGame004EC54E);
	//004ED45C  |. 74 06          |JE SHORT empires2.004ED464
	_004ED464 = 0x04ED464;
	setHook((void*)0x04ED45E, AddWideScreenPanelBegingGame004ED45E);
	//004ED677  |> E8 4426FCFF    CALL Empires2.004AFCC0
	//_004ED45E = 0x04ED45E;
	_00448634 = 0x0448634;

	setHook((void*)0x0044862F, AddWideScreenPanelBegingGame0044862F);
	//004EEFF1   . 8B8D 58090000  MOV ECX,DWORD PTR SS:[EBP+0x958]
	_004EF058 = 0x04EF058;
	_004EF06F = 0x04EF06F;
	//004EEA81   . 8B8D 58090000  MOV ECX,DWORD PTR SS:[EBP+0x958]

	_004EEAFF= 0x04EEAFF;
	//004EEAE8   > 8B0D C4456600  MOV ECX,DWORD PTR DS:[0x6645C4]
	_004EEAE8= 0x04EEAE8;

	setHook((void*)0x04EEA81, AddWideScreenPanelBegingGame004EEA81);
	//004EF3FF
	BYTE _83C40C6690[] = {0x83,0xC4,0x0C,0x66,0x90};
	writeData(0x04EF3FF, _83C40C6690, 5);
	//004EF414
	writeData(0x04EF414, _83C40C6690, 5);
	//004EF429
	writeData(0x04EF429, _83C40C6690, 5);
	*/
#pragma endregion resize  screen 

#pragma endregion
	//Formation button pront X and Y
	_004DAB6E = 0x04DAB6E;
	_005A6870 = 0x05A6870;
	//004DAB3A     BB 50020000    MOV EBX,0x250
	//writeDwordF(0x04DAB3A, V + ratioV - 400);//21
	InjectHook((void*)0x04DAB3A, UnitFormationPrinteInWideScreen, PATCH_JUMP);
	//WideScreen(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));


	*myCord_X = Cord_X;
	*myCord_Y = Cord_Y;

	//fix bug  1280 force to jum 1024x768
//004DA6F5     E9 52030000    JMP 004DAA4C
	BYTE _004DAA4C[] = { 0xE9,0x52,0x03,0x00,0x00,0x90 };
	writeData(0x04DA6F5, _004DAA4C, 6);
}

void widescreenAOk20(bool wideScreenCentred)
{
	centredwidescreenAOk20 = wideScreenCentred;
	//fix other widescreen installtion bug purple 
	// people don't clean exe as i say (i implemented no widescreen and they don't use ) and say no work ...
	//0065D410  69 6E 74 65 72 66 61 63 2E 64 72 73 00 00 00 00  interfac.drs....
	BYTE interfac[16] = { 0x69,0x6E,0x74,0x65,0x72,0x66,0x61,0x63,0x2E,0x64,0x72,0x73,0x00,0x00,0x00,0x00 };
	writeData(0x065D410, interfac, 16);
	if (wideScreenCentred)
	{
		NormaleAoeWideScreen(&myCord_X, &myCord_Y);
	}
	else
	{
		UserPatchWideScreen();

	}
	InjectHook((void*)0x041BCC5, setScreenRes, PATCH_JUMP);
	getxy();
}

void nocdAok20()
{
	//004F46E8     EB 23          JMP SHORT empires2.004F470D
	//start multi player with 1 player 
	//by pass "You cannot start a game with only one player."
	BYTE start_a_game_with_only_one_player[2] = { 0xEB, 0x23 };
	writeData(0x04F46E8, start_a_game_with_only_one_player, 2);
	//004F4685     EB 25          JMP SHORT empires2.004F46AC
	writeByte(0x04F4685, 0xEB);

	//004F8564     EB 26          JMP SHORT empires2.004F858C
	writeByte(0x04F8564, 0xEB);
	writeByte(0x04F8565, 0x26);
}

void version()
{
	BYTE _00600305[] = { 0xE9,0x76,0xB6,0x01,0x00 };
	writeData(0x600305, _00600305, 5);

	BYTE _0061B980[] = { 0xA3,0x90,0x27,0x77,0x00,0x68,0xA3,0xB9,0x61,0x00,0xFF,0x15,0x10,0xC1,0x61,0x00,0xEB,0x26,0x90,0x90,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
		,0x00,0x00,0x00,0x70,0x61,0x74,0x63,0x68,0x2E,0x64,0x6C,0x6C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6A,0x03,0x68,0xF1,0xB9,0x61,0x00,0x68
		,0x06,0xBA,0x61,0x00,0x6A,0x00,0xFF,0x15,0x7C,0xC3,0x61,0x00,0x83,0xF8,0x06,0x75,0x0C,0xC6,0x05,0xAC,0xD4,0x64,0x00,0x04,0xE9,0x2D,0x49,0xFE,0xFF,0xC6,0x05,0xAC
		,0xD4,0x64,0x00,0x01,0xE9,0x21,0x49,0xFE,0xFF,0x90,0x90,0x90,0x00,0x00,0x00,0x00,0x00,0x63,0x68,0x6F,0x73,0x65,0x20,0x76,0x65,0x72,0x73,0x69,0x6F,0x6E,0x00,0x00
		,0x00,0x00,0x00,0x00,0x00,0x00,0x64,0x6F,0x20,0x79,0x6F,0x75,0x20,0x77,0x61,0x6E,0x74,0x20,0x32,0x2E,0x30,0x43,0x3F,0x20,0x28,0x69,0x66,0x20,0x79,0x6F,0x75,0x20
		,0x68,0x6F,0x73,0x74,0x20,0x63,0x68,0x6F,0x73,0x65,0x20,0x6E,0x6F,0x29,0x00 };
	writeData(0x061B980, _0061B980, 175);

	BYTE _04F00DE[] = { 0x90,0x90,0x90,0x90,0x90,0x90 };

	writeData(0x4F00DE, _04F00DE, 6);
}


void windowedModAok20(bool windowed)
{
	if (windowed)
	{
		LoadLibraryA("windmode.dll");
		BYTE c_6690[] =
		{
		0x66,0x90
		};
 
		writeData(0x41f80A, c_6690, 2);
		writeData(0x48AD1D, c_6690, 2);
		writeData(0x5D95F8, c_6690, 2);
		writeData(0x5DF91B, c_6690, 2);
		Nop(0x4f00de , 6);
	}
}



char _007DB7BD[100] = "TCP";
char _007DB7C5[100] = "empires2:%s.%d";
DWORD ___005FCE14 = 0x05FCE14;
DWORD _00605C40 = 0x0605C40;
DWORD _7A5800;
DWORD _7A5144;
DWORD _7A5140;
DWORD _7A5154;
DWORD _7A5158;
DWORD _7A515C;
DWORD _7A5148;
DWORD _7A5150;
DWORD _7A5160;
DWORD _7A5164;
DWORD _7A5168;
DWORD _7A514C;
DWORD _7A5854;
DWORD _7A5858;
DWORD _7A585C;
DWORD _7A5860;
DWORD _7A5810;
DWORD _7A5814;
DWORD _7A5818;
DWORD _7A581C;
DWORD _7A5820;
DWORD _7A5824;
DWORD _7A5828;
DWORD _7A582C;
DWORD _7A5830;
DWORD _7A5834;
DWORD _7A5838;
DWORD _7A583C;
DWORD _7A5840;
DWORD _7A5844;
DWORD _7A5848;
DWORD _7A584C;
DWORD _7A5850;
DWORD _7A5870;
DWORD _7A5874;

void __declspec(naked) PortForwarding_007DB530()
{
	__asm {

		SUB ESP, 40h
		MOV EAX, DWORD PTR SS : [ESP + 44h]
		MOV EDX, DWORD PTR SS : [ESP + 48h]
		LEA ECX, DWORD PTR DS : [EDX * 4h + 7DB7BDh]
		LEA EDX, DWORD PTR SS : [ESP]
		PUSH EAX
		PUSH ECX
		PUSH offset _007DB7C5; ASCII "age2_x1:%s.%d"
		PUSH EDX
		//CALL age2_x1.0061442B
		CALL ___005FCE14
		ADD ESP, 10h
		MOV EDX, DWORD PTR SS : [ESP + 48h]
		LEA ECX, DWORD PTR DS : [EDX * 4h + 7DB7BDh]
		LEA EDX, DWORD PTR SS : [ESP]
		LEA EAX, DWORD PTR SS : [ESP + 0Ch]
		PUSH 0h
		PUSH 0h
		PUSH ECX
		PUSH EDX
		MOV EDX, DWORD PTR DS : [_7A5148]
		PUSH EDX
		PUSH EAX
		PUSH EAX
		MOV ECX, DWORD PTR DS : [_7A5144]
		MOV EAX, DWORD PTR DS : [_7A5140]
		PUSH ECX
		PUSH EAX
		CALL DWORD PTR DS : [_7A5154]
		ADD ESP, 64h
		RETN 8h
		ADD BYTE PTR DS : [EBX + 448B40ECh] , AL
		AND AL, 44h
		LEA EDX, DWORD PTR SS : [ESP]
		PUSH EAX
		PUSH offset _007DB7BD; ASCII "TCP"
		PUSH offset _007DB7C5; ASCII "age2_x1:%s.%d"
		PUSH EDX
		//CALL age2_x1.0061442B
		CALL ___005FCE14
		ADD ESP, 10h
		MOV EDX, DWORD PTR SS : [ESP + 48h]
		LEA ECX, DWORD PTR DS : [EDX * 4h + 7DB7BDh]
		LEA EAX, DWORD PTR SS : [ESP + 0Ch]
		PUSH 0h
		PUSH ECX
		PUSH EAX
		MOV ECX, DWORD PTR DS : [_7A5144]
		MOV EAX, DWORD PTR DS : [_7A5140]
		PUSH ECX
		PUSH EAX
		CALL DWORD PTR DS : [_7A5158]
		ADD ESP, 54h
		RETN 8h
		ADD BYTE PTR DS : [EAX] , AL
		ADD BYTE PTR DS : [EAX] , AL
		ADD BYTE PTR DS : [EAX] , AL
		SUB ESP, 40h
		MOV EAX, DWORD PTR SS : [ESP + 44h]
		LEA EDX, DWORD PTR SS : [ESP]
		PUSH EAX
		PUSH offset _007DB7BD; ASCII "TCP"
		PUSH offset _007DB7C5; ASCII "age2_x1:%s.%d"
		PUSH EDX
		//CALL age2_x1.0061442B
		CALL ___005FCE14
		ADD ESP, 10h
		XOR EAX, EAX
		LEA ECX, DWORD PTR SS : [ESP + 20h]
		LEA EDX, DWORD PTR SS : [ESP + 30h]
		MOV DWORD PTR DS : [ECX] , EAX
		PUSH EAX
		PUSH EAX
		PUSH EAX
		PUSH EDX
		PUSH ECX
		MOV EDX, DWORD PTR SS : [ESP + 5Ch]
		LEA ECX, DWORD PTR DS : [EDX * 4h + 7DB7BDh]
		LEA EAX, DWORD PTR SS : [ESP + 20h]
		PUSH ECX
		PUSH EAX
		MOV ECX, DWORD PTR DS : [_7A5144]
		MOV EAX, DWORD PTR DS : [_7A5140]
		PUSH ECX
		PUSH EAX
		CALL DWORD PTR DS : [_7A515C]
		TEST EAX, EAX
		JE short _007DB642
		MOV EAX, 1h
		ADD ESP, 64h
		RETN 8h
		_007DB642 :
		LEA ECX, DWORD PTR SS : [ESP + 54h]
			LEA EDX, DWORD PTR SS : [ESP + 30h]
			PUSH ECX
			PUSH EDX
			//CALL age2_x1.0061CD70
			CALL _00605C40
			TEST EAX, EAX
			JE short _007DB660
			MOV EAX, 2h
			ADD ESP, 6Ch
			RETN 8h
			_007DB660 :
		LEA ECX, DWORD PTR SS : [ESP + 4Ch]
			MOV EDX, DWORD PTR DS : [_7A5148]
			PUSH ECX
			PUSH EDX
			//CALL age2_x1.0061CD70
			CALL _00605C40
			NEG EAX
			SBB EAX, EAX
			AND EAX, 0FFFFFFFEh
			ADD EAX, 2h
			ADD ESP, 74h
			RETN 8h


	}
}


void __declspec(naked) PortForwarding_007DB5E0()
{
	__asm {
		SUB ESP, 40h
		MOV EAX, DWORD PTR SS : [ESP + 44h]
		LEA EDX, DWORD PTR SS : [ESP]
		PUSH EAX
		PUSH offset _007DB7BD; ASCII "TCP"
		PUSH offset _007DB7C5; ASCII "age2_x1:%s.%d"
		PUSH EDX
		//CALL age2_x1.0061442B
		CALL ___005FCE14
		ADD ESP, 10h
		XOR EAX, EAX
		LEA ECX, DWORD PTR SS : [ESP + 20h]
		LEA EDX, DWORD PTR SS : [ESP + 30h]
		MOV DWORD PTR DS : [ECX] , EAX
		PUSH EAX
		PUSH EAX
		PUSH EAX
		PUSH EDX
		PUSH ECX
		MOV EDX, DWORD PTR SS : [ESP + 5Ch]
		LEA ECX, DWORD PTR DS : [EDX * 4h + 7DB7BDh]
		LEA EAX, DWORD PTR SS : [ESP + 20h]
		PUSH ECX
		PUSH EAX
		MOV ECX, DWORD PTR DS : [_7A5144]
		MOV EAX, DWORD PTR DS : [_7A5140]
		PUSH ECX
		PUSH EAX
		CALL DWORD PTR DS : [_7A515C]
		TEST EAX, EAX
		JE short _007DB642
		MOV EAX, 1h
		ADD ESP, 64h
		RETN 8h
		_007DB642 :
		LEA ECX, DWORD PTR SS : [ESP + 54h]
			LEA EDX, DWORD PTR SS : [ESP + 30h]
			PUSH ECX
			PUSH EDX
			//CALL age2_x1.0061CD70
			CALL _00605C40
			TEST EAX, EAX
			JE short _007DB660
			MOV EAX, 2h
			ADD ESP, 6Ch
			RETN 8h
			_007DB660 :
		LEA ECX, DWORD PTR SS : [ESP + 4Ch]
			MOV EDX, DWORD PTR DS : [_7A5148]
			PUSH ECX
			PUSH EDX
			//CALL age2_x1.0061CD70
			CALL _00605C40
			NEG EAX
			SBB EAX, EAX
			AND EAX, 0FFFFFFFEh
			ADD EAX, 2h
			ADD ESP, 74h
			RETN 8h


	}
}



DWORD _007DB5E0 = (DWORD)PortForwarding_007DB5E0;
DWORD _007DB530 = (DWORD)PortForwarding_007DB530;
void __declspec(naked) PortForwarding_007DB6F0()
{
	__asm {
		PUSH 0h
		PUSH 0BA08h
		CALL _007DB5E0
		CMP EAX, 1h
		JNZ short _007DB71F
		PUSH 0h
		PUSH 0BA08h
		CALL _007DB530
		MOV EDX, DWORD PTR DS : [_7A514C]
		MOV BYTE PTR DS : [EDX + 0CAh] , 1h
		MOV EAX, 1h
		_007DB71F :
		RETN
	}

}

//0042E901 | .E8 DA070000    CALL empires2.0042F0E0
DWORD _0042F0E0 = 0x042F0E0;

DWORD  _0042E906 = 0x042E906;
DWORD  _007DB6F0 = (DWORD)PortForwarding_007DB6F0;
//dynamic jump
//007DB09B   E9 604F82FF      JMP 00000000
DWORD _007DB09B;
//007DB0A0   E8 0B01E0FF      CALL age2_x1_.005DB1B0

void __declspec(naked) PortForwarding_0042E901()
{
	__asm {
		CALL _0042F0E0
		MOV EAX, DWORD PTR DS : [_7A514C]
		TEST EAX, EAX
		JE short _007DB0B3
		CALL _007DB6F0
		_007DB0B3 :
		JMP _0042E906
	}
}

void __declspec(naked) PortForwarding_007DB690()
{
	__asm {

		MOV EDX, DWORD PTR SS : [ESP + 8h]
		MOV EAX, DWORD PTR SS : [ESP + 4h]
		PUSH EDX
		PUSH EAX
		CALL _007DB5E0
		CMP EAX, 1h
		JNZ short _007DB6DF
		MOV EDX, DWORD PTR SS : [ESP + 8h]
		MOV EAX, DWORD PTR SS : [ESP + 4h]
		PUSH EDX
		PUSH EAX
		CALL _007DB530
		MOV EDX, DWORD PTR SS : [ESP + 8h]
		NEG EDX
		SBB EDX, EDX
		AND EDX, 0FFFFFF9Bh
		ADD EDX, 65h
		MOV EAX, DWORD PTR SS : [ESP + 4h]
		SUB EAX, 8FCh
		ADD EAX, EDX
		MOV EDX, DWORD PTR DS : [_7A514C]
		MOV ECX, 1h
		MOV BYTE PTR DS : [EAX + EDX] , CL
		MOV EAX, ECX
		_007DB6DF :
		RETN 8h


	}
}
//007DB020   83EC 20          SUB ESP,20
DWORD EAX_007DB09B;
DWORD _007DB690 = (DWORD)PortForwarding_007DB690;
void __declspec(naked) PortForwarding_007DB020()
{
	__asm {
		SUB ESP, 20h
		MOV ECX, DWORD PTR SS : [ESP + 28h]
		MOVZX EAX, WORD PTR DS : [ECX + 2h]
		ROR AX, 8h
		CMP AX, 8FCh
		JB short _007DB093
		CMP AX, 960h
		JA short _007DB093
		MOV DWORD PTR SS : [ESP + 14h] , EAX
		MOV EAX, DWORD PTR SS : [ESP + 24h]
		LEA ECX, DWORD PTR SS : [ESP + 10h]
		LEA EDX, DWORD PTR SS : [ESP]
		MOV DWORD PTR DS : [ECX] , 10h
		PUSH ECX
		PUSH EDX
		PUSH 1008h
		PUSH 0FFFFh
		PUSH EAX
		CALL DWORD PTR DS : [_7A5164]
		TEST EAX, EAX
		JNZ short _007DB093
		MOV EAX, DWORD PTR SS : [ESP]
		DEC EAX
		AND EAX, 1h
		MOV EDX, DWORD PTR SS : [ESP + 14h]
		PUSH EAX
		PUSH EDX
		CALL _007DB690
		TEST EAX, EAX
		JNZ short _007DB093
		PUSH 271Dh
		CALL DWORD PTR DS : [_7A5168]
		MOV EAX, -1h
		ADD ESP, 20h
		RETN 0Ch
		_007DB093 :
		ADD ESP, 20h
			MOV EDI, EDI
			PUSH EBP
			MOV EBP, ESP
			//007DB09B   E9 604F82FF      JMP 00000000
			/*MOV EAX_007DB09B, EAX
			MOV EAX, __007DB09B
			MOV _007DB09B, EAX
			MOV  EAX, EAX_007DB09B
			__007DB09B :*/
			//dynamic jump
			JMP _007DB09B //00000000h


	}
}


//0041BEE2  |. FF15 10C16100  CALL DWORD PTR DS:[<&KERNEL32.LoadLibraryA>]    ; \LoadLibraryA
DWORD* _LoadLibrarAddr = (DWORD*)0x061C110;//LoadLibraryA
DWORD _LoadLibrar = *_LoadLibrarAddr;//LoadLibraryA
DWORD* _GetProcAddr = (DWORD*)0x61C0D8;
DWORD _GetProc = *_GetProcAddr;
//0041B9FB  |. FF15 B4C16100  CALL DWORD PTR DS:[<&KERNEL32.GetCurrentDirectoryA>]   ; \GetCurrentDirectoryA
DWORD* _GetProcCurrentAddr = (DWORD*)0x61C130;
DWORD _GetProcCurrent = *_GetProcCurrentAddr;


DWORD* _FreeLibraryAddr = (DWORD*)0x061C1A0;
DWORD _FreeLibrary = *_FreeLibraryAddr;

char _007DB805[100] = "ws2_32.dll";
char _007DB7D3[100] = "kernel32.dll";
char _007DB7E0[100] = "FlushInstructionCache";
char _007DB7F6[100] = "VirtualProtect";
char _007DB837[100] = "listen";
char _007DB83E[100] = "bind";
char _007DB810[100] = "getsockname";
char _007DB81C[100] = "getsockopt";
char _007DB827[100] = "WSASetLastError";
DWORD _VirtualProtec;
DWORD _007DB020 = (DWORD)PortForwarding_007DB020;
DWORD __007DB09B = (DWORD)PortForwarding_007DB020 + 0x87;
DWORD ourFunct;
DWORD toHook = _007DB020;
DWORD toHook2;
void __declspec(naked) PortForwarding_007DB2E0()
{
	__asm {
		PUSH ESI
		PUSH EDI
		PUSH EBX
		PUSH EBP
		SUB ESP, 20h
		PUSH offset _007DB805; ASCII "ws2_32.dll"
		//CALL DWORD PTR DS : [<&KERNEL32.LoadLibraryA>] ; KERNEL32.LoadLibraryA
		CALL DWORD PTR DS : [_LoadLibrar] ; KERNEL32.LoadLibraryA
		MOV ESI, EAX
		TEST ESI, ESI
		JE _007DB44D
		PUSH offset _007DB7D3; ASCII "kernel32.dll"
		//CALL DWORD PTR DS : [<&KERNEL32.LoadLibraryA>] ; KERNEL32.LoadLibraryA
		CALL DWORD PTR DS : [_LoadLibrar] ; KERNEL32.LoadLibraryA
		MOV EDI, EAX
		TEST EDI, EDI
		JE _007DB446
		//MOV EBP, DWORD PTR DS : [<&KERNEL32.GetProcAddress>] ; KERNEL32.GetProcAddress
		MOV EBP, DWORD PTR DS : [_GetProc] ; KERNEL32.GetProcAddress
		PUSH  offset _007DB7E0; ASCII "FlushInstructionCache"
		PUSH EDI
		CALL EBP
		TEST EAX, EAX
		JE _007DB43F
		MOV DWORD PTR SS : [ESP + 4h] , EAX
		PUSH offset _007DB7F6; ASCII "VirtualProtect"
		PUSH EDI
		CALL EBP
		TEST EAX, EAX
		MOV _VirtualProtec, EAX
		JE _007DB43F
		MOV DWORD PTR SS : [ESP + 8h] , EAX
		PUSH offset _007DB837; ASCII "listen"
		PUSH ESI
		CALL EBP
		TEST EAX, EAX
		JE _007DB43F
		MOV DWORD PTR SS : [ESP + 0Ch] , EAX
		PUSH offset _007DB83E; ASCII "bind"
		PUSH ESI
		CALL EBP
		TEST EAX, EAX
		JE _007DB43F
		MOV DWORD PTR SS : [ESP + 10h] , EAX
		PUSH offset _007DB810; ASCII "getsockname"
		PUSH ESI
		CALL EBP
		TEST EAX, EAX
		JE _007DB43F
		MOV DWORD PTR DS : [_7A5160] , EAX
		PUSH offset _007DB81C; ASCII "getsockopt"
		PUSH ESI
		CALL EBP
		TEST EAX, EAX
		JE _007DB43F
		MOV DWORD PTR DS : [_7A5164] , EAX
		PUSH offset _007DB827; ASCII "WSASetLastError"
		PUSH ESI
		CALL EBP
		TEST EAX, EAX
		JE _007DB43F
		MOV DWORD PTR DS : [_7A5168] , EAX

		//CALL DWORD PTR DS : [<&KERNEL32.GetCurrent>; KERNEL32.GetCurrentProcess
		CALL DWORD PTR DS : [_GetProcCurrent] ; KERNEL32.GetCurrentProcess
		MOV DWORD PTR SS : [ESP] , EAX
		LEA EAX, DWORD PTR SS : [ESP + 18h]
		MOV ECX, DWORD PTR SS : [ESP + 10h]
		MOV ourFunct, ECX
		/*PUSH EAX
		PUSH 40h
		PUSH 5h
		PUSH ECX
		CALL DWORD PTR SS : [ESP + 18h]
		LEA EAX, DWORD PTR SS : [ESP + 1Ch]
		PUSH EAX
		PUSH 40h
		PUSH 5h
		PUSH __007DB09B
		CALL DWORD PTR SS : [ESP + 18h]
		MOV EAX, DWORD PTR SS : [ESP + 10h]
		LEA ECX, DWORD PTR DS : [EAX + 5h]
		LEA EDX, DWORD PTR DS : [ECX + 0FF824FE0h]*/
	}
	Hook((void*)ourFunct, (void*)toHook, 5);
	__asm {
		/*NEG EDX
		MOV BYTE PTR DS : [EAX] , 0E9h//hook jmp
		MOV DWORD PTR DS : [EAX + 1h] , EDX
		*/
		MOV EAX, __007DB09B
		//LEA EDX, DWORD PTR DS : [EAX + 5h]
		MOV EAX, DWORD PTR SS : [ESP + 10h]
		LEA ECX, DWORD PTR DS : [EAX + 5h]
		MOV toHook2, ECX
	}
	Hook((void*)__007DB09B, (void*)toHook2, 5);
	__asm {


		/*SUB ECX, EDX
		MOV BYTE PTR DS : [EAX] , 0E9h//hook jmp
		MOV DWORD PTR DS : [EAX + 1h] , ECX*/
		MOV ECX, DWORD PTR SS : [ESP + 10h]
		MOV EAX, DWORD PTR SS : [ESP]
		PUSH 5h
		PUSH ECX
		PUSH EAX
		CALL DWORD PTR SS : [ESP + 10h]
		LEA EAX, DWORD PTR SS : [ESP + 18h]
		MOV EDX, DWORD PTR DS : [EAX]
		MOV ECX, DWORD PTR SS : [ESP + 10h]
		PUSH EAX
		PUSH EDX
		PUSH 5h
		PUSH ECX
		CALL DWORD PTR SS : [ESP + 18h]
		MOV EAX, DWORD PTR SS : [ESP]
		PUSH 5h
		PUSH __007DB09B
		PUSH EAX
		CALL DWORD PTR SS : [ESP + 10h]
		LEA EAX, DWORD PTR SS : [ESP + 1Ch]
		MOV EDX, DWORD PTR DS : [EAX]
		/*PUSH EAX
		PUSH EDX
		PUSH 5h
		PUSH __007DB09B
		CALL DWORD PTR SS : [ESP + 18h]*/
	_007DB43F:
			/*PUSH EDI*/
			//CALL DWORD PTR DS : [<&KERNEL32.FreeLibrar>; KERNEL32.FreeLibrary
			/*CALL DWORD PTR DS : [_FreeLibrary] ; KERNEL32.FreeLibrary*/
		_007DB446:
			/*PUSH ESI*/
			//CALL DWORD PTR DS : [<&KERNEL32.FreeLibrar>; KERNEL32.FreeLibrary
			/*CALL DWORD PTR DS : [_FreeLibrary] ; KERNEL32.FreeLibrary*/
		_007DB44D:
			ADD ESP, 20h
				POP EBP
				POP EBX
				POP EDI
				POP ESI
				RETN

	}
}

//007DB0C0   55               PUSH EBP
char _007DB720[100] = "miniupnpc.dll";
char _007DB736[100] = "upnpDiscover";
char _007DB743[100] = "UPNP_GetValidIGD";
char _007DB754[100] = "UPNP_AddPortMapping";
char _007DB768[100] = "UPNP_DeletePortMapping";
char _007DB77F[100] = "UPNP_GetSpecificPortMappingEntry";
char _007DB7A0[100] = "FreeUPNPUrls";
char _007DB7AD[100] = "freeUPNPDevlist";
//0042369D  |. E8 3E511E00    CALL <JMP.&WSOCK32.#115>                 ; \WSAStartup
DWORD _WSOCK32_WSAStartup = 0x06087E0;
//004237C2  |. E8 1F501E00    CALL <JMP.&WSOCK32.#116>                 ; [WSACleanup
DWORD _WSOCK32_WSACleanup = 0x06087E6;

DWORD _006137C9 = 0x05F8FF0;//DWORD uu_006137C9 = 0x05F8FF0; heap alloc 
DWORD _007DB2E0 = (DWORD)PortForwarding_007DB2E0;
void __declspec(naked) PortForwarding_007DB0C0()
{
	__asm {
		PUSH EBP
		MOV EBP, ESP
		SUB ESP, 0F00h
		PUSH EBX
		PUSH ESI
		PUSH EDI
		LEA EAX, DWORD PTR SS : [ESP + 38h]
		PUSH EAX
		PUSH 101h
		MOV DWORD PTR SS : [ESP + 28h] , 0h
		//CALL DWORD PTR DS : [<&WSOCK32.#115>] ; WS2_32.WSAStartup
		CALL DWORD PTR DS : [_WSOCK32_WSAStartup] ; WS2_32.WSAStartup
		TEST EAX, EAX
		JNZ _007DB2C9
		PUSH offset _007DB720; ASCII "age2_x1\miniupnpc.dll"
		CALL DWORD PTR DS : [_LoadLibrar] ; KERNEL32.LoadLibraryA
		MOV EDI, EAX
		TEST EDI, EDI
		JE _007DB2C3
		MOV DWORD PTR DS : [_7A5150] , EDI
		MOV ESI, DWORD PTR DS : [_GetProc] ; KERNEL32.GetProcAddress
		PUSH offset _007DB736; ASCII "upnpDiscover"
		PUSH EDI
		CALL ESI
		PUSH offset _007DB743; ASCII "UPNP_GetValidIGD"
		PUSH EDI
		MOV EBX, EAX
		CALL ESI
		PUSH  offset _007DB754; ASCII "UPNP_AddPortMapping"
		PUSH EDI
		MOV DWORD PTR SS : [ESP + 1Ch] , EAX
		CALL ESI
		PUSH offset _007DB768; ASCII "UPNP_DeletePortMapping"
		PUSH EDI
		MOV DWORD PTR SS : [ESP + 20h] , EAX
		CALL ESI
		PUSH offset _007DB77F; ASCII "UPNP_GetSpecificPortMappingEntry"
		PUSH EDI
		MOV DWORD PTR SS : [ESP + 24h] , EAX
		CALL ESI
		PUSH offset _007DB7A0; ASCII "FreeUPNPUrls"
		PUSH EDI
		MOV DWORD PTR SS : [ESP + 28h] , EAX
		CALL ESI
		PUSH offset _007DB7AD; ASCII "freeUPNPDevlist"
		PUSH EDI
		MOV DWORD PTR SS : [ESP + 18h] , EAX
		CALL ESI
		MOV ESI, EAX
		TEST EBX, EBX
		JE _007DB2C3
		CMP DWORD PTR SS : [ESP + 14h] , 0h
		JE _007DB2C3
		CMP DWORD PTR SS : [ESP + 18h] , 0h
		JE _007DB2C3
		CMP DWORD PTR SS : [ESP + 1Ch] , 0h
		JE _007DB2C3
		CMP DWORD PTR SS : [ESP + 20h] , 0h
		JE _007DB2C3
		CMP DWORD PTR SS : [ESP + 10h] , 0h
		JE _007DB2C3
		TEST ESI, ESI
		JE _007DB2C3
		MOV EAX, DWORD PTR SS : [ESP + 18h]
		MOV ECX, DWORD PTR SS : [ESP + 1Ch]
		MOV EDX, DWORD PTR SS : [ESP + 20h]
		MOV DWORD PTR DS : [_7A5154] , EAX
		MOV DWORD PTR DS : [_7A5158] , ECX
		MOV DWORD PTR DS : [_7A515C] , EDX
		XOR EAX, EAX
		LEA ECX, DWORD PTR SS : [ESP + 20h]
		MOV DWORD PTR DS : [ECX] , EAX
		PUSH ECX
		PUSH EAX
		PUSH EAX
		PUSH EAX
		PUSH EAX
		PUSH 3E8h
		CALL EBX
		MOV EBX, EAX
		ADD ESP, 18h
		TEST EBX, EBX
		JE _007DB2C3
		PUSH 40h
		LEA EDX, DWORD PTR SS : [ESP + 0D54h]
		PUSH EDX
		LEA EAX, DWORD PTR SS : [ESP + 1D0h]
		PUSH EAX
		LEA ECX, DWORD PTR SS : [ESP + 30h]
		PUSH ECX
		PUSH EBX
		CALL DWORD PTR SS : [ESP + 28h]
		ADD ESP, 14h
		MOV DWORD PTR SS : [ESP + 20h] , EAX
		TEST EAX, EAX
		JE _007DB2BD
		CMP EAX, 1h
		JNZ _007DB2B1
		PUSH 100h
		PUSH 1h
		CALL _006137C9
		ADD ESP, 8h
		TEST EAX, EAX
		JE _007DB2B1
		MOV DWORD PTR DS : [_7A5140] , EAX
		MOV ECX, DWORD PTR SS : [ESP + 24h]
		PUSH ECX
		PUSH EAX
		//CALL age2_x1.0061442B
		CALL ___005FCE14
		ADD ESP, 8h
		PUSH 100h
		PUSH 1h
		CALL _006137C9
		ADD ESP, 8h
		TEST EAX, EAX
		JE short _007DB2B1
		MOV DWORD PTR DS : [_7A5144] , EAX
		LEA ECX, DWORD PTR SS : [ESP + 6CCh]
		PUSH ECX
		PUSH EAX
		//CALL age2_x1.0061442B
		CALL ___005FCE14
		ADD ESP, 8h
		PUSH 40h
		PUSH 1h
		CALL _006137C9
		ADD ESP, 8h
		TEST EAX, EAX
		JE short _007DB2B1
		MOV DWORD PTR DS : [_7A5148] , EAX
		LEA ECX, DWORD PTR SS : [ESP + 0D50h]
		PUSH ECX
		PUSH EAX
		//CALL age2_x1.0061442B
		CALL ___005FCE14
		ADD ESP, 8h
		PUSH 0CBh
		PUSH 1h
		CALL _006137C9
		ADD ESP, 8h
		TEST EAX, EAX
		JE short _007DB2B1
		MOV DWORD PTR DS : [_7A514C] , EAX
		CALL _007DB2E0
		_007DB2B1 :
		LEA ECX, DWORD PTR SS : [ESP + 24h]
			PUSH ECX
			CALL DWORD PTR SS : [ESP + 14h]
			ADD ESP, 4h
			_007DB2BD :
		PUSH EBX
			CALL ESI
			ADD ESP, 4h
			_007DB2C3 :
		CALL DWORD PTR DS : [_WSOCK32_WSACleanup] ; WS2_32.WSACleanup
			_007DB2C9 :
		XOR EAX, EAX
			POP EDI
			POP ESI
			POP EBX
			MOV ESP, EBP
			POP EBP
			RETN


	}
}
void __declspec(naked) PortForwarding_007DB590()
{
	__asm {

		SUB ESP, 40h
		MOV EAX, DWORD PTR SS : [ESP + 44h]
		LEA EDX, DWORD PTR SS : [ESP]
		PUSH EAX
		PUSH offset _007DB7BD; ASCII "TCP"
		PUSH offset _007DB7C5; ASCII "age2_x1:%s.%d"
		PUSH EDX
		//CALL age2_x1_.0061442B
		CALL ___005FCE14
		ADD ESP, 10
		MOV EDX, DWORD PTR SS : [ESP + 48h]
		LEA ECX, DWORD PTR DS : [EDX * 4h + 7DB7BDh]
		LEA EAX, DWORD PTR SS : [ESP + 0Ch]
		PUSH 0h
		PUSH ECX
		PUSH EAX
		MOV ECX, DWORD PTR DS : [_7A5144]
		MOV EAX, DWORD PTR DS : [_7A5140]
		PUSH ECX
		PUSH EAX
		CALL DWORD PTR DS : [_7A5158]
		ADD ESP, 54h
		RETN 8h
	}
}
DWORD _007DB590 = (DWORD)PortForwarding_007DB590;
DWORD _006139B4 = 0x058FA7E;
void __declspec(naked) PortForwarding_007DB460()
{
	__asm {
		PUSH ESI
		PUSH EDI
		SUB ESP, 200h
		MOV EDI, 0CAh
		MOV ESI, DWORD PTR DS : [_7A514C]
		TEST ESI, ESI
		JE short _007DB4D7
		LEA EAX, DWORD PTR SS : [ESP]
		PUSH EAX
		PUSH 101h
		//CALL DWORD PTR DS : [<&WSOCK32.#115>] ; WS2_32.WSAStartup
		CALL DWORD PTR DS : [_WSOCK32_WSAStartup] ; WS2_32.WSAStartup
		TEST EAX, EAX
		JNZ short _007DB4D7
		MOV AL, BYTE PTR DS : [ESI + EDI]
		DEC EDI
		TEST AL, AL
		JE short _007DB49E
		PUSH 0h
		PUSH 0BA08h
		CALL _007DB590
		_007DB49E :
		MOV AL, BYTE PTR DS : [ESI + EDI]
			TEST AL, AL
			JE short _007DB4B3
			LEA EAX, DWORD PTR DS : [EDI + 897h]
			PUSH 0
			PUSH EAX
			CALL _007DB590
			_007DB4B3 :
		DEC EDI
			CMP EDI, 65h
			JGE short _007DB49E
			_007DB4B9 :
		MOV AL, BYTE PTR DS : [ESI + EDI]
			TEST AL, AL
			JE short _007DB4CE
			LEA EAX, DWORD PTR DS : [EDI + 8FCh]
			PUSH 1h
			PUSH EAX
			CALL _007DB590
			_007DB4CE :
		DEC EDI
			JGE short _007DB4B9
			//CALL DWORD PTR DS : [<&WSOCK32.#116>] ; WS2_32.WSACleanup
			CALL DWORD PTR DS : [_WSOCK32_WSACleanup] ; WS2_32.WSACleanup
			_007DB4D7 :
		ADD ESP, 200h
			MOV EAX, DWORD PTR DS : [_7A514C]
			PUSH EAX
			CALL _006139B4
			ADD ESP, 4h
			MOV EAX, DWORD PTR DS : [_7A5148]
			PUSH EAX
			CALL _006139B4
			ADD ESP, 4h
			MOV EAX, DWORD PTR DS : [_7A5144]
			PUSH EAX
			CALL _006139B4
			ADD ESP, 4h
			MOV EAX, DWORD PTR DS : [_7A5140]
			PUSH EAX
			CALL _006139B4
			ADD ESP, 4h
			MOV EAX, DWORD PTR DS : [_7A5150]
			TEST EAX, EAX
			JE short _007DB525
			PUSH EAX
			CALL DWORD PTR DS : [_FreeLibrary] ; KERNEL32.FreeLibrary
			//CALL DWORD PTR DS : [<&KERNEL32.FreeLibrary>] ; KERNEL32.FreeLibrary
			_007DB525 :
		POP EDI
			POP ESI
			RETN


	}
}



DWORD* _WaitForSingleObjectAddr = (DWORD*)0x061C1DC;
DWORD _WaitForSingleObject = *_WaitForSingleObjectAddr;
//DWORD _PostMessageA = 0x061C32C;
void __declspec(naked) PortForwarding_007E66E0()
{
	__asm {

		MOV EAX, DWORD PTR DS : [_7A5870]
		PUSH - 1h
		PUSH EAX
		MOV DWORD PTR DS : [_7A5874] , 0
		//CALL DWORD PTR DS : [<&KERNEL32.WaitForSingleObject>] ; KERNEL32.WaitForSingleObject
		CALL DWORD PTR DS : [_WaitForSingleObject] ; KERNEL32.WaitForSingleObject
		RETN


	}
}

DWORD _7A5880[100];
DWORD _007E66E0 = (DWORD)PortForwarding_007E66E0;
DWORD ECX_007E63E0;
void __declspec(naked) PortForwarding_007E63E0()
{
	__asm {
		PUSH EDI
		CALL _007E66E0
		MOV EDI, 1Fh
		_007E63EB :
		MOV ECX_007E63E0, ECX
			MOV ECX, _7A5880
			//MOV EAX, DWORD PTR DS : [EDI * 4 + 7A5880]
			MOV EAX, DWORD PTR DS : [EDI * 4h + ECX]
			MOV ECX, ECX_007E63E0

			PUSH EAX
			CALL _006139B4

			MOV ECX_007E63E0, ECX
			MOV ECX, _7A5880
			//MOV DWORD PTR DS : [EDI * 4 + 7A5880] , 0h
			MOV DWORD PTR DS : [EDI * 4 + ECX] , 0h
			MOV ECX, ECX_007E63E0

			ADD ESP, 4h
			DEC EDI
			JGE short _007E63EB
			MOV EAX, DWORD PTR DS : [_7A5810]
			TEST EAX, EAX
			JE short _007E6419
			PUSH EAX
			//CALL DWORD PTR DS : [<&KERNEL32.FreeLibrary>] ; KERNEL32.FreeLibrary
			CALL DWORD PTR DS : [_FreeLibrary] ; KERNEL32.FreeLibrary
			_007E6419 :
		//MOV EAX, DWORD PTR DS : [7A5800]
		//todo check if is correct
		MOV EAX, DWORD PTR DS : [_7A5800]
			TEST EAX, EAX
			JE short _007E6429
			PUSH EAX
			//CALL DWORD PTR DS : [<&KERNEL32.FreeLibrary>] ; KERNEL32.FreeLibrary
			CALL DWORD PTR DS : [_FreeLibrary] ; KERNEL32.FreeLibrary
			_007E6429 :
		XOR EAX, EAX
			//MOV EDI, age2_x1_.007A5800
			MOV EDI, _7A5880
			MOV ECX, 20h
			REP STOS DWORD PTR ES : [EDI]
			POP EDI
			RETN

	}
}
//initialize socket thread ?

DWORD _007E63E0 = (DWORD)PortForwarding_007E63E0;
char _007E6DBD[100] = "kernel32.dll";
char _007E6DCA[100] = "CreateThread";
char _007E6DD7[100] = "Sleep";
char _007E6DDD[100] = "InterlockedIncrement";
char _007E6DF2[100] = "InterlockedDecrement";
char _007E6E07[100] = "ws2_32.dll";
char _007E6E12[100] = "WSAStartup";
char _007E6E1D[100] = "WSACleanup";
char _007E6E28[100] = "__WSAFDIsSet";
char _007E6E35[100] = "getaddrinfo";
char _007E6E41[100] = "freeaddrinfo";
char _007E6E4E[100] = "socket";
char _007E6E55[100] = "bind";
char _007E6E5A[100] = "setsockopt";
char _007E6E65[100] = "listen";
char _007E6E6C[100] = "shutdown";
char _007E6E75[100] = "closesocket";
char _007E6E81[100] = "select";
char _007E6E88[100] = "WSAAccept";
char _007E6E92[100] = "send";
char _007E6E97[100] = "recv";
char _007E6E9C[100] = "WSAIoctl";

DWORD ECX_007E61C0;
void __declspec(naked) PortForwarding_007E61C0()
{
	__asm {
		PUSH ESI
		PUSH EDI
		CALL _007E63E0
		PUSH offset _007E6DBD; ASCII "kernel32.dll"
		//MOV EDI, DWORD PTR DS : [<&KERNEL32.GetProcAddress>] ; KERNEL32.GetProcAddress
		MOV EDI, DWORD PTR DS : [_GetProc] ; KERNEL32.GetProcAddress
		//CALL DWORD PTR DS : [<&KERNEL32.LoadLibraryA>] ; KERNEL32.LoadLibraryA
		CALL DWORD PTR DS : [_LoadLibrar] ; KERNEL32.LoadLibraryA
		MOV ESI, EAX
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A5800] , EAX
		PUSH offset _007E6DCA; ASCII "CreateThread"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A5854] , EAX
		PUSH offset _007E6DD7; ASCII "Sleep"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A5858] , EAX
		PUSH offset _007E6DDD; ASCII "InterlockedIncrement"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A585C] , EAX
		PUSH offset _007E6DF2; ASCII "InterlockedDecrement"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A5860] , EAX
		PUSH offset _007E6E07; ASCII "ws2_32.dll"
		//MOV EDI, DWORD PTR DS : [<&KERNEL32.GetProcAddress>] ; KERNEL32.GetProcAddress
		MOV EDI, DWORD PTR DS : [_GetProc] ; KERNEL32.GetProcAddress
		//CALL DWORD PTR DS : [<&KERNEL32.LoadLibraryA>] ; KERNEL32.LoadLibraryA
		CALL DWORD PTR DS : [_LoadLibrar] ; KERNEL32.LoadLibraryA
		MOV ESI, EAX
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A5810] , EAX
		PUSH offset _007E6E12; ASCII "WSAStartup"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A5814] , EAX
		push offset _007E6E1D; ASCII "WSACleanup"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A5818] , EAX
		push offset _007E6E28; ASCII "__WSAFDIsSet"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A581C] , EAX
		push offset _007E6E35; ASCII "getaddrinfo"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A5820] , EAX
		push offset _007E6E41; ASCII "freeaddrinfo"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A5824] , EAX
		push offset _007E6E4E; ASCII "socket"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A5828] , EAX
		push offset _007E6E55; ASCII "bind"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A582C] , EAX
		push offset _007E6E5A; ASCII "setsockopt"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A5830] , EAX
		push offset _007E6E65; ASCII "listen"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A5834] , EAX
		push offset _007E6E6C; ASCII "shutdown"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A5838] , EAX
		push offset _007E6E75; ASCII "closesocket"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE _007E63D4
		MOV DWORD PTR DS : [_7A583C] , EAX
		push offset _007E6E81; ASCII "select"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE short _007E63D4
		MOV DWORD PTR DS : [_7A5840] , EAX
		push offset _007E6E88; ASCII "WSAAccept"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE short _007E63D4
		MOV DWORD PTR DS : [_7A5844] , EAX
		push offset _007E6E92; ASCII "send"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE short _007E63D4
		MOV DWORD PTR DS : [_7A5848] , EAX
		push offset _007E6E97; ASCII "recv"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE short _007E63D4
		MOV DWORD PTR DS : [_7A584C] , EAX
		push offset _007E6E9C; ASCII "WSAIoctl"
		PUSH ESI
		CALL EDI
		TEST EAX, EAX
		JE short _007E63D4
		MOV DWORD PTR DS : [_7A5850] , EAX
		XOR EDI, EDI
		_007E63AF :
		PUSH 20h
			PUSH 1h
			CALL _006137C9

			MOV	ECX_007E61C0, ECX
			MOV ECX, _7A5880
			//MOV DWORD PTR DS : [EDI * 4 + 7A5880] , EAX
			MOV DWORD PTR DS : [EDI * 4 + ECX] , EAX
			MOV	ECX_007E61C0, ECX

			ADD ESP, 8h
			INC EDI
			TEST EAX, EAX
			JE short _007E63CE
			CMP EDI, 20h
			JL short _007E63AF
			JMP short _007E63D4
			_007E63CE :
		MOV DWORD PTR DS : [_7A5850] , EAX
			_007E63D4 :
		POP EDI
			POP ESI
			RETN


	}
}




//007DB020   83EC 20          SUB ESP,20    where it is called?


//00586BB7   >-E9 44BC2300    JMP age2_x1_.007C2800
//0x7c2870
//007C2875   E8 46390200      CALL age2_x1_.007E61C0
//0x7c288a

//loaded
//007C2870   E8 4B880100      CALL age2_x1_.007DB0C0
//007C2875   E8 46390200      CALL age2_x1_.007E61C0

//when game exist free library
//005873B7   . 6A 10          PUSH 10; / Style = MB_OK | MB_ICONHAND | MB_APPLMODAL
//005873B9   . 8D8C24 A01A000 > LEA ECX, DWORD PTR SS : [ESP + 1AA0] ; |
//005873C0   . 50             PUSH EAX; | Title
//005873C1   . 51             PUSH ECX; | Text
//005873C2   . 53             PUSH EBX; | hOwner
//005873C3.FF15 34536300  CALL DWORD PTR DS : [<&USER32.MessageBoxA>] ; \MessageBoxA
//005873C9 > -E9 B2B42300    JMP age2_x1_.007C2880


//007C2880   E8 ABC0DCFF      CALL age2_x1_.0058E930
//007C2885   E8 563B0200      CALL age2_x1_.007E63E0
//007C288A   E8 D18B0100      CALL age2_x1_.007DB460
//007C288F   E8 4C380000      CALL age2_x1_.007C60E0



//0047AEBC  |. BF 4C306500    MOV EDI,empires2.0065304C                       ;  ASCII "00.14.14.0914"
DWORD _005FE370 = 0x05FE370;


DWORD _0047AEBC_EAX;
DWORD _0047AEBC_ECX;
DWORD _0047AEBC_EDX;
DWORD _0047AEBC_EBX;
DWORD _0047AEBC_ESP;
DWORD _0047AEBC_EBP;
DWORD _0047AEBC_ESI;
DWORD _0047AEBC_EDI;
//0047AE20  /$ B8 881B0000    MOV EAX,1B88
DWORD _0047AE2A = 0x047AE2A;
void __declspec(naked) PortForwarding_0047AEBC()
{
	__asm {
		//save register
		MOV _0047AEBC_EAX, EAX
		MOV _0047AEBC_ECX, ECX
		MOV _0047AEBC_EDX, EDX
		MOV _0047AEBC_EBX, EBX
		MOV _0047AEBC_ESP, ESP
		MOV _0047AEBC_EBP, EBP
		MOV _0047AEBC_ESI, ESI
		MOV _0047AEBC_EDI, EDI

		call PortForwarding_007DB0C0
		//call PortForwarding_007E61C0
		//restaure register
		MOV  EAX, _0047AEBC_EAX
		MOV  ECX, _0047AEBC_ECX
		MOV  EDX, _0047AEBC_EDX
		MOV  EBX, _0047AEBC_EBX
		MOV  ESP, _0047AEBC_ESP
		MOV  EBP, _0047AEBC_EBP
		MOV  ESI, _0047AEBC_ESI
		MOV  EDI, _0047AEBC_EDI

		MOV EAX, 1B88h
		CALL _005FE370
		JMP _0047AE2A

	}
}


//0060034A  
void setPortForwardingHook()
{
	InjectHook((void*)0x042E901, PortForwarding_0042E901,PATCH_JUMP);
	//00586BB7   >-E9 44BC2300    JMP age2_x1_.007C2800
	//0047AEBC  |. BF 4C306500    MOV EDI,empires2.0065304C                       ;  ASCII "00.14.14.0914"
	InjectHook((void*)0x047AE20, PortForwarding_0047AEBC, PATCH_JUMP);

}
 

//004E4A80  |. 8B8E F0100000  MOV ECX,DWORD PTR DS:[ESI+10F0]
//MOV ECX,DWORD PTR DS:[6645C4]
//568 - 544 = 24 (hex)
//564    - 540 = 24
DWORD _004E4A86 = 0x04E4A86;
void __declspec(naked)  FixRecordingExploreStateBug004E4A80()
{
	__asm {
		MOV EAX, DWORD PTR DS : [664520h]
		CMP  DWORD PTR DS : [EDX + 564h] , 0h
		JNZ short _007BE834
		MOV ECX, DWORD PTR DS : [6645C4h]
		CMP DWORD PTR DS : [ECX + 13E0h] , 2h
		JNZ short _007BE834
		MOV EAX, DWORD PTR DS : [ESI + 1200h]
		MOV ECX, DWORD PTR DS : [EAX + 34h]
		//MOV BYTE PTR DS : [ECX + A256h] , 1h
		MOV  BYTE PTR DS : [EAX + 8ECEh] , 1h
		_007BE834 :
		MOV ECX, DWORD PTR DS : [ESI + 10F0h]
			JMP _004E4A86


	}
}
/*
//004E4A80  |. 8B8E F0100000  MOV ECX,DWORD PTR DS:[ESI+10F0]
DWORD _004E4A86 = 0x04E4A86;
void __declspec(naked)  FixRecordingExploreStateBug004E4A80()
{
	__asm {
		MOV EAX, DWORD PTR DS : [664520h]
		CMP  DWORD PTR DS : [EDX + 564h] , 0h
		JNZ short _007BE834
		MOV ECX, DWORD PTR DS : [6645C4h]
		CMP DWORD PTR DS : [ECX + 13E0h] , 2h
		JNZ short _007BE834
		MOV EAX, DWORD PTR DS : [ESI + 1200h]
		MOV ECX, DWORD PTR DS : [EAX + 34h]
		//MOV BYTE PTR DS : [ECX + A256h] , 1h
		MOV  BYTE PTR DS : [EAX + 8ECEh] , 1h
		_007BE834 :
		MOV ECX, DWORD PTR DS : [ESI + 10F0h]
		JMP _004E4A86


	}
}*/
//00482BD3  |. 8B3481         |MOV ESI,DWORD PTR DS:[ECX+EAX*4]
//00482BD6 | . 85F6 | TEST ESI, ESI


//DWORD _00482D5D = 0x0482D5D;
//DWORD _00482C2A = 0x0482C2A;
//DWORD _00482C18 = 0x0482C18;
//DWORD _00482C25 = 0x0482C25;
DWORD _005DC550 = 0x05DC550;
DWORD  _00527AE0 = 0x0527AE0;
void __declspec(naked)  FixRecordingExploreStateBug00482BD6()
{
	__asm {
		SUB ESP, 0Ch
		MOV ECX, DWORD PTR SS : [ESP + 10h]
		XOR EAX, EAX
		MOV DWORD PTR SS : [ESP + 4h] , EAX
		MOV DWORD PTR SS : [ESP + 8h] , EAX
		MOV DL, BYTE PTR DS : [ECX + 0Dh]
		TEST DL, DL
		JBE _00482D7B
		PUSH EBX
		PUSH EBP
		PUSH ESI
		PUSH EDI
		_00482BD0 :
		MOV ECX, DWORD PTR DS : [ECX + 14h]
			MOV ESI, DWORD PTR DS : [ECX + EAX * 4h]
			TEST ESI, ESI
			JE _00482D5D
			MOV CL, BYTE PTR SS : [ESP + 34h]
			XOR BL, BL
			CMP CL, 0Fh
			MOV BYTE PTR SS : [ESP + 13h] , BL
			MOV BYTE PTR SS : [ESP + 12h] , BL
			JE short _00482C2A
			MOV EDX, DWORD PTR DS : [ESI + 8h]
			CMP BYTE PTR DS : [EDX + 4h] , 32h
			JB short _00482C2A
			MOV AL, BYTE PTR DS : [ESI + 160h]
			TEST AL, AL
			JE short _00482C2A
			MOV EAX, DWORD PTR DS : [ESI + 15Ch]
			MOV EDX, DWORD PTR DS : [772210h]
			TEST EAX, EDX
			JE short _00482C18
			MOV BL, 1h
			JMP short _00482C25
			_00482C18 :
		TEST DWORD PTR DS : [77220Ch] , EAX
			JE short _00482C2A
			MOV BYTE PTR SS : [ESP + 13h] , 1h
			_00482C25 :
		MOV BYTE PTR SS : [ESP + 12h] , 1h
			_00482C2A :
		MOV EAX, DWORD PTR DS : [ESI + 8h]
			CMP WORD PTR DS : [EAX + 16h] , 22h
			JNZ short _00482C3A
			MOV BL, 1h
			MOV BYTE PTR SS : [ESP + 12h] , BL
			_00482C3A :
		MOV EDI, DWORD PTR DS : [ESI + 0Ch]
			XOR EDX, EDX
			MOV DL, BYTE PTR DS : [EAX + 6Dh]
			MOV AL, BYTE PTR SS : [ESP + 12h]
			TEST AL, AL
			MOV EBP, EDX
			JE short _00482C63
			TEST CL, CL
			JNZ short _00482C63
			MOV ECX, DWORD PTR SS : [ESP + 30h]
			PUSH 28h
			PUSH 0h
			CALL _005DC550 //empires2.005DC550
			MOV CL, BYTE PTR SS : [ESP + 34h]
			JMP short _00482C68
			_00482C63 :
		CMP CL, 0Fh
			JE short _00482C6C
			_00482C68 :
		TEST BL, BL
			JE short _00482CC0
			_00482C6C :
		CMP EBP, 3h
			JE short _00482CC0
			CMP CL, 0Fh
			JE short _00482C89
			MOV EAX, DWORD PTR DS : [74079Ch]
			MOV DWORD PTR DS : [74079Ch] , 0h
			MOV DWORD PTR SS : [ESP + 14h] , EAX
			_00482C89 :
		MOV EAX, DWORD PTR DS : [EDI + 158h]
			MOV ECX, DWORD PTR SS : [ESP + 2Ch]
			MOV EDX, DWORD PTR DS : [ESI]
			PUSH EAX
			MOV EAX, DWORD PTR SS : [ESP + 2Ch]
			PUSH ECX
			MOV ECX, DWORD PTR SS : [ESP + 2Ch]
			PUSH EAX
			PUSH ECX
			MOV ECX, ESI
			CALL DWORD PTR DS : [EDX + 0Ch]
			CMP BYTE PTR SS : [ESP + 34h] , 0Fh
			JE _00482D5D
			MOV EDX, DWORD PTR SS : [ESP + 14h]
			MOV DWORD PTR DS : [74079Ch] , EDX
			JMP _00482D5D
			_00482CC0 :
		CMP CL, 80h
			JE short _00482CCD
			MOV AL, BYTE PTR SS : [ESP + 13h]
			TEST AL, AL
			JE short _00482D44
			_00482CCD :
		CMP EBP, 3h
			JNZ short _00482D00
			MOV EAX, DWORD PTR DS : [EDI + 8Ch]
			MOV EDI, DWORD PTR DS : [EDI + 9Ch]
			MOVSX EDX, WORD PTR DS : [EAX + 94h]
			MOV EAX, DWORD PTR DS : [EAX + 4Ch]
			MOV EDX, DWORD PTR DS : [EAX + EDX * 4h]
			MOV EAX, DWORD PTR DS : [EDX + EDI * 4h + 0FCh]
			TEST EAX, EAX
			JE short _00482D44
			MOV EAX, DWORD PTR DS : [ESI]
			MOV ECX, DWORD PTR DS : [ESI + 0ACh]
			JMP short _00482D0C
			_00482D00 :
		TEST EBP, EBP
			JE short _00482D23
			MOV EAX, DWORD PTR DS : [ESI]
			MOV ECX, DWORD PTR DS : [EDI + 158h]
			_00482D0C :
			MOV EDX, DWORD PTR SS : [ESP + 2Ch]
			PUSH ECX
			MOV ECX, DWORD PTR SS : [ESP + 2Ch]
			PUSH EDX
			MOV EDX, DWORD PTR SS : [ESP + 2Ch]
			PUSH ECX
			PUSH EDX
			MOV ECX, ESI
			CALL DWORD PTR DS : [EAX + 0Ch]
			JMP short _00482D40
			_00482D23 :
		MOV AL, BYTE PTR DS : [ESI + 36h]
			TEST AL, AL
			JE short _00482D44
			MOV EAX, DWORD PTR SS : [ESP + 2Ch]
			MOV ECX, DWORD PTR SS : [ESP + 28h]
			MOV EDX, DWORD PTR SS : [ESP + 24h]
			PUSH EAX
			PUSH ECX
			PUSH EDX
			MOV ECX, ESI
			CALL _00527AE0
			_00482D40 :
		MOV CL, BYTE PTR SS : [ESP + 34h]
			_00482D44 :
			MOV AL, BYTE PTR SS : [ESP + 12h]
			TEST AL, AL
			JE short _00482D5D
			TEST CL, CL
			JNZ short _00482D5D
			MOV ECX, DWORD PTR SS : [ESP + 30h]
			PUSH 5h
			PUSH 0h
			CALL _005DC550// empires2.005DC550
			_00482D5D :
		MOV ECX, DWORD PTR SS : [ESP + 20h]
			MOV EAX, DWORD PTR SS : [ESP + 18h]
			XOR EDX, EDX
			INC EAX
			MOV DL, BYTE PTR DS : [ECX + 0Dh]
			MOV DWORD PTR SS : [ESP + 18h] , EAX
			CMP EAX, EDX
			JL _00482BD0
			POP EDI
			POP ESI
			POP EBP
			POP EBX
			_00482D7B :
		ADD ESP, 0Ch
			RETN 18h


	}
}
//005C4925  |> 8B8E 00010000  MOV ECX,DWORD PTR DS:[ESI+100]
// 005C4932 
DWORD _005C4932 = 0x05C4932;
DWORD _005C493C = 0x05C493C;
void __declspec(naked)  FixRecordingExploreStateBug005C4925()
{
	__asm {

		MOV ECX, DWORD PTR DS : [ESI + 100h]
		CMP BYTE PTR DS : [ECX + 8ECEh] , 0h
		JNZ __005C493C
		JMP _005C4932
		__005C493C :
		JMP _005C493C
	}
}
//005D1E6F  |. 8B47 0C        MOV EAX,DWORD PTR DS:[EDI+C]
DWORD _005D1E7E = 0x05D1E7E;
void __declspec(naked)  FixRecordingExploreStateBug005D1E6F()
{
	__asm {
		MOV EAX, DWORD PTR DS : [EDI + 0Ch]
		MOV ECX, DWORD PTR DS : [ESI + 8h]
		MOV EDX, DWORD PTR DS : [EAX + 0A8h]
		FLD DWORD PTR DS : [EDX + ECX * 4h]
		JMP _005D1E7E
	}
}

//004DE3B5
DWORD _004DE3C4 = 0x04DE3C4;
void __declspec(naked)  FixRecordingExploreStateBug004DE3B5()
{
	__asm {
		MOV EDX, DWORD PTR DS : [ESI + 1200h]
		PUSH ECX
		XOR EAX, EAX
		MOV CL, BYTE PTR DS : [EDX + 214h]

		JMP _004DE3C4
	}
}
//004E0845
DWORD _004E086C = 0x04E086C;
DWORD ____005FCE14 = 0x05FCE14;
DWORD _004E0850 = 0x04E0850;
DWORD _004E0855 = 0x04E0855;
//004E084A  |>-E9 0165B20F    |JMP DSOUND.10006D50
void __declspec(naked)  FixRecordingExploreStateBug004E0845()
{
	__asm {
		//004E0845 | . 83C4 18 | ADD ESP, 18
		//004E0848 | .EB 22 | JMP SHORT empires2.004E086C
		//004E0848 | .EB 22 | JMP SHORT empires2.004E086C
		MOV ECX, DWORD PTR SS : [EBP + 4h]
		MOV EDX, DWORD PTR SS : [EBP]
		JMP _004E0855

	}
}
//004218C7  |> B8 9CDA6400    MOV EAX,empires2.0064DA9C                ;  ASCII "2.0"; Case 1 of switch 004218AF
char versionAOK[100] = "2.0k";
void __declspec(naked)  FixRecordingExploreStateBug004218C7()
{
	__asm {
		MOV EAX, offset versionAOK
		RETN 4
	}
}
//DWORD _004F6F8F = 0x04F6F8F;
DWORD _004AF9F0 = 0x04AF9F0;
DWORD _004F6E6F = 0x04F6E6F;
void __declspec(naked)  FixRecordingExploreState0x04F6F8F()
{
	__asm {

		CMP AL, BYTE PTR DS : [64D4ACh]
		//MOV  BYTE PTR DS : [64D4ACh] , 4h
		CALL _004AF9F0
		CMP EAX, 1h
		JNZ change
		MOV  BYTE PTR DS : [64D4ACh] , 1h
		TEST EAX, EAX
		JMP _004F6E6F
		change :
		MOV  BYTE PTR DS : [64D4ACh] , 4h

			TEST EAX, EAX
			JMP _004F6E6F
	}
}
//004F5EEB  |. A0 ACD46400    |MOV AL,BYTE PTR DS:[64D4AC]
//004F5DA0  |. 8B0D C4456600  MOV ECX,DWORD PTR DS:[6645C4]


//004F0BD1 | > 8B0D 20456600  MOV ECX, DWORD PTR DS : [664520]

DWORD _004F0BD7 = 0x04F0BD7;
void __declspec(naked)  FixRecordingExploreState004F0BD1()
{
	__asm {
		MOV ECX, DWORD PTR DS : [664520h]
		MOV  BYTE PTR DS : [64D4ACh] , 1h
		JMP _004F0BD7
	}
}
//004F58BF  |. E8 5C0CFBFF    CALL empires2.004A6520
DWORD _004A6520 = 0x04A6520;
DWORD _004F58C4 = 0x04F58C4;
void __declspec(naked)  FixRecordingExploreState004F58BF()
{
	__asm {
		CALL _004A6520
		MOV  BYTE PTR DS : [64D4ACh] , 1h
		JMP _004F58C4
	}
}
//0042188D | .D1E8           SHR EAX, 1
//0042188F     C2 0400        RETN 4


DWORD _0042D490 = 0x042D490;
DWORD FixRec_EAX;
DWORD FixRec_ECX;
DWORD FixRec_EDX;
DWORD FixRec_EBX;
DWORD FixRec_ESP;
DWORD FixRec_EBP;
DWORD FixRec_ESI;
DWORD FixRec_EDI;
DWORD _0042188F = 0x042188F;
void __declspec(naked)  FixRecordingExploreState0042188F()
{
	__asm {


		//save
		MOV FixRec_EAX, EAX
		MOV FixRec_ECX, ECX
		MOV FixRec_EDX, EDX
		MOV FixRec_EBX, EBX
		MOV FixRec_ESP, ESP
		MOV FixRec_EBP, EBP
		MOV FixRec_ESI, ESI
		MOV FixRec_EDI, EDI

		MOV ECX, DWORD PTR DS : [664520h]
		CALL _0042D490
		TEST EAX, EAX
		JE normale
		MOV  BYTE PTR DS : [64D4ACh] , 1h
		MOV EAX, 1h
		normale :
		//MOV  BYTE PTR DS : [64D4ACh] , 4h
		//MOV EAX, 4h
		//restaure
		//MOV EAX, FixRec_EAX
		MOV ECX, FixRec_ECX
			MOV EDX, FixRec_EDX
			MOV EBX, FixRec_EBX
			MOV ESP, FixRec_ESP
			MOV EBP, FixRec_EBP
			MOV ESI, FixRec_ESI
			MOV EDI, FixRec_EDI
			MOV AL, BYTE PTR DS : [EDX + ECX + 9B5h]
			SHR EAX, 1h
			JMP _0042188F



	}
}



void FixRecordingExploreStateBug()
{
	InjectHook((void*)0x04E4A80, FixRecordingExploreStateBug004E4A80,PATCH_JUMP);
	//004DD8E4     8BF6           MOV ESI,ESI
	BYTE _004DD8E4[] = { 0x8B,0xF2,0x89,0x54,0x24,0x14 };
	writeData(0x04DD8E4, _004DD8E4, 6);
	//004DD8F3     33F6           XOR ESI,ESI
	BYTE _004DD8F3[] = { 0x33,0xF6 };
	writeData(0x04DD8F3, _004DD8F3, 2);
	//004E4AD3     33F9           XOR EDI,ECX
	BYTE _004E4AD3[] = { 0x33,0xF9,0x33,0xE9 };
	writeData(0x04E4AD3, _004E4AD3, 4);
	//004E4ADC     33FF           XOR EDI,EDI
	BYTE _004E4ADC[] = { 0x33,0xFF,0xBD,0x01,0x00,0x00,0x00 };
	writeData(0x04E4ADC, _004E4ADC, 7);
	//005D7451  |. E8 5AB7EAFF    ||CALL empires2.00482BB0                                ; \empires2.00482BB0
	setHookCall((void*)0x05D7451, FixRecordingExploreStateBug00482BD6);
	//005C4925  |> 8B8E 00010000  MOV ECX,DWORD PTR DS:[ESI+100]

	InjectHook((void*)0x05C4925, FixRecordingExploreStateBug005C4925, PATCH_JUMP);

	InjectHook((void*)0x05D1E6F, FixRecordingExploreStateBug005D1E6F, PATCH_JUMP);
	InjectHook((void*)0x04DE3B5, FixRecordingExploreStateBug004DE3B5, PATCH_JUMP);
	//setHook((void*)0x04E084A, FixRecordingExploreStateBug004E0845);

	//004BA60B  |> 803E 00        CMP BYTE PTR DS:[ESI],0

	//004218C7 | > B8 9CDA6400    MOV EAX, empires2.0064DA9C 
	//	004218CC | .C2 0400        RETN 4
	//setHook((void*)0x04218C7, FixRecordingExploreStateBug004218C7);
	//004218B8     EB 25          JMP SHORT empires2.004218DF

	//BYTE _004218B8[] = { 0xEB,0x25 };
	//writeData(0x04218B8, _004218B8, 2);
	//MOV CL, BYTE PTR DS : [64D4AC]

	//004F6F89   . 3A05 ACD46400  CMP AL, BYTE PTR DS : [64D4AC]
	InjectHook((void*)0x04F6E68, FixRecordingExploreState0x04F6F8F, PATCH_JUMP);
	//004F0BD1 | > 8B0D 20456600  MOV ECX, DWORD PTR DS : [664520]
	//setHook((void*)0x04F0BD1, FixRecordingExploreState004F0BD1);



	//host avoid 
	//setHook((void*)0x04F81AC , FixRecordingExploreState004F81AC);
	//writeByte(0x04F81B2, 0x90);
	//writeByte(0x04F81B3, 0x90);
	//004F81B2     90             NOP
	//	004F81B3     90             NOP


	//0x04F5DA0 todo push only for host
	//setHook((void*)0x04F58BF, FixRecordingExploreState004F58BF);


	//return 1 if host else return 0
	//004F5783 | > 8B0D 20456600  MOV ECX, DWORD PTR DS : [664520h]
	//004F5789 | .E8 027DF3FF    CALL empires2.0042D490
	//setHook((void*)0x0421886, FixRecordingExploreState0042188F);


}
 

#pragma region Mini map color
//0058D0F0   .-E9 2E302400    JMP Empires2.007D0123
DWORD _0058D0F7;
void __declspec(naked)  MiniMapColor58D0F0()
{
	__asm {

		MOV CL, BYTE PTR SS : [EBP + 1Ch]
		MOV BYTE PTR DS : [EDI + 30h] , CL
		MOV ECX, DWORD PTR SS : [ESP + 10h]
		MOV EDX, DWORD PTR DS : [ECX + 4h]
		JMP[_0058D0F7]
	}
}


//005C3F12   . 84C0           TEST AL,AL
//005C3F14   .-0F84 29C22000  JE Empires2.007D0143
DWORD _005C3F26;
void __declspec(naked)  MiniMapColor5C3F12()
{
	__asm {
		MOVSX ECX, BYTE PTR DS : [EDI + 30h]
		MOV EAX, DWORD PTR DS : [ESI + 0F8h]
		MOV EAX, DWORD PTR DS : [EAX + 4Ch]
		MOV ECX, DWORD PTR DS : [EAX + ECX * 4h]
		MOV EDX, DWORD PTR DS : [ECX + 158h]
		MOV EAX, DWORD PTR DS : [EDX + 10h]
		JMP[_005C3F26]
	}
}
//00461222   >-E9 DCED3600    JMP Empires2.007D0003

DWORD _00461227;
void __declspec(naked)  MiniMapColor461222()
{
	__asm {
		DEC EBP
		DEC EDI
		MOV EAX, DWORD PTR DS : [ECX + 8h]
		TEST EAX, EAX
		JMP[_00461227]
	}
}
//0046123C   >-E9 D2ED3600    JMP Empires2.007D0013
DWORD _00461241;
void __declspec(naked)  MiniMapColor46123C()
{
	__asm {
		MOV EDX, DWORD PTR DS : [ECX + 30h]
		SUB EDX, 2h
		CMP EDI, EDX
		JMP[_00461241]
	}
}
//00461249   .-E9 D5ED3600    JMP Empires2.007D0023
DWORD _46124E;
void __declspec(naked)  MiniMapColor461249()
{
	__asm {
		MOV EAX, DWORD PTR DS : [ECX + 30h]
		SUB EAX, 2h
		CMP EBP, EAX
		JMP[_46124E]
	}
}

BYTE c_4612E0[] =
{
	0xC7,0x44,0x24,0x20,0x00,0x00,0x00,0x00,0xDA,0x74,0x24,0x14,0xD9,0x5C,0x24,0x18,0xD9,0x44,0x24,0x18,0xD8,0x05,0x88,0xC5,0x61,0x00,0xE8,0x15,0xB7,0x19,0x00,0xB9
	,0x00,0x00,0x00,0x00,0x90,0x83,0xC1,0x03,0x89,0x4C,0x24,0x1C,0x66,0x66,0x90,0x3B,0xFD,0x7E,0x0A,0xD9,0x44,0x24,0x18,0xD9,0xE0,0xD9,0x5C,0x24,0x18,0x8B,0x6C,0x24
	,0x14,0x85,0xED,0x7E,0x35,0x8B,0x7C,0x24,0x24,0x81,0xE7,0xFF,0x00,0x00,0x00,0x8B,0x4C,0x24,0x1C,0xD9,0x44,0x24,0x20,0x51,0x57,0xE8,0xD6,0xB6,0x19,0x00,0x03,0xC6
	,0x50,0xE8,0x5A,0xD0,0x19,0x00,0xD9,0x44,0x24,0x2C,0xD8,0x44,0x24,0x24,0x83,0xC4,0x0C,0x03,0xF3,0x4D,0xD9,0x5C,0x24,0x20,0x75,0xD5,0x5F,0x5E,0x5D,0x5B,0xC2,0x14
	,0x00,0x20,0x75,0xD1,0x5F,0x5E,0x5D,0x5B,0xC2,0x14,0x00
};
BYTE c_5C3F29[] =
{
0x6A, 0x06
};

//005C5244 | > 8B0D C4456600  MOV ECX, DWORD PTR DS : [0x6645C4]

BYTE c_5C5244[] =
{
 0x8B,0x0D,0xD4,0x33,0x66,0x00
};
BYTE c_5C3839[] =
{
0x8D,0x8E,0x7C,0x01,0x00,0x00,0x89,0x41,0xFC,0x31,0xC0,0x38,0x01,0x0F,0x94,0x01,0x74,0x07,0x38,0x41,0x01,0x0F,0x94,0x41,0x01
};
//005C3F3D   . E8 BEA02000    CALL Empires2.007CE000
DWORD _5FCA14;
DWORD _4611D0;
void __declspec(naked)  MiniMapColor7CE000()
{
	__asm {
		PUSH EBX
		PUSH EBP
		PUSH ESI
		MOV ESI, ECX
		MOV ECX, DWORD PTR SS : [ESP + 10h]
		PUSH EDI
		MOVSX EAX, WORD PTR DS : [ESI + 134h]
		MOVSX EDX, CX
		SUB EAX, EDX
		MOV EDX, DWORD PTR SS : [ESP + 18h]
		MOVSX EDI, DX
		ADD EAX, EDI
		MOV EDI, DWORD PTR DS : [ESI + 130h]
		CMP CX, DX
		LEA EAX, DWORD PTR DS : [EAX + EAX * 8h]
		LEA EDI, DWORD PTR DS : [EDI + EAX * 4h - 24h]
		JL _007CE033
		MOV ECX, EDX
		_007CE033 :
		FLD DWORD PTR DS : [EDI + 20h]
			FCOMP DWORD PTR DS : [61C598h]
			FSTSW AX
			TEST AH, 1h
			JE _007CE053
			MOVSX ECX, CX
			MOV DWORD PTR SS : [ESP + 14h] , ECX
			FILD DWORD PTR SS : [ESP + 14h]
			FMUL DWORD PTR DS : [EDI + 20h]
			JMP _007CE061
			_007CE053 :
		MOVSX EDX, CX
			MOV DWORD PTR SS : [ESP + 14h] , EDX
			FILD DWORD PTR SS : [ESP + 14h]
			FMUL DWORD PTR DS : [EDI + 18h]
			_007CE061 :
			CALL  _5FCA14
			MOV DX, WORD PTR DS : [EDI]
			MOV EDI, DWORD PTR DS : [ESI + 12Ch]
			MOVSX ECX, DX
			PUSH 0h
			LEA ECX, DWORD PTR DS : [ECX + ECX * 2h]
			MOV CX, WORD PTR DS : [EDI + ECX * 2h + 2h]
			ADD CX, WORD PTR DS : [ESI + 0Ch]
			ADD ECX, EAX
			MOV AX, WORD PTR DS : [ESI + 138h]
			ADD AX, WORD PTR DS : [ESI + 10h]
			MOV EDI, ECX
			ADD EAX, EDX
			MOV EDX, DWORD PTR SS : [ESP + 24h]
			MOV EBX, EAX
			SUB EDI, EDX
			SUB EBX, EDX
			LEA EBP, DWORD PTR DS : [ECX + EDX]
			ADD EAX, EDX
			MOVSX EDX, BX
			MOV DWORD PTR SS : [ESP + 1Ch] , EAX
			MOV DWORD PTR SS : [ESP + 18h] , EDX
			MOVSX EAX, AX
			MOVSX ECX, BP
			MOVSX EDX, DI
			PUSH EAX
			MOV EAX, DWORD PTR SS : [ESP + 1Ch]
			INC ECX
			MOV DWORD PTR SS : [ESP + 28h] , EDX
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 20h]
			INC EDX
			PUSH EAX
			PUSH EDX
			CALL _4611D0
			MOVSX EAX, WORD PTR SS : [ESP + 18h]
			MOV ECX, DWORD PTR SS : [ESP + 1Ch]
			MOV EDX, DWORD PTR SS : [ESP + 14h]
			PUSH ECX
			PUSH EAX
			MOV ECX, DWORD PTR DS : [ESI + 20h]
			MOVSX EAX, BP
			PUSH EAX
			MOV EAX, DWORD PTR SS : [ESP + 2Ch]
			PUSH EDX
			PUSH EAX
			CALL _4611D0
			MOVSX EAX, WORD PTR SS : [ESP + 18h]
			MOVSX EDI, DI
			MOVSX EBP, BP
			MOVSX EBX, BX
			PUSH 0h
			LEA ECX, DWORD PTR DS : [EDI + 1h]
			PUSH EAX
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 20h]
			LEA EDX, DWORD PTR SS : [EBP + 1h]
			PUSH EBX
			PUSH EDX
			MOV DWORD PTR SS : [ESP + 28h] , EAX
			CALL _4611D0
			MOV EAX, DWORD PTR SS : [ESP + 1Ch]
			MOV ECX, DWORD PTR SS : [ESP + 14h]
			PUSH EAX
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 20h]
			PUSH EDI
			PUSH EBX
			PUSH EBP
			CALL _4611D0
			POP EDI
			POP ESI
			POP EBP
			POP EBX
			RETN 10h
	}
}
//005C3F3D   . E8 BEA02000    CALL Empires2.007CE000
//005C3F42   > 83C5 04        ADD EBP,0x4
DWORD _5C3F42;
void __declspec(naked)  MiniMapColor5C3F3D()
{
	__asm {
		CALL MiniMapColor7CE000
		JMP[_5C3F42]
	}
}
//005C3F12   . 84C0               TEST AL, AL
BYTE c_005C3F12[] =
{
0x84,0xC0
};
//005C3F1A 
BYTE c_005C3F1A[] =
{
0xC1,0xE8,0x08,0x84,0xC0,0x74,0x05,0xA0,0x0A,0xDD,0x66,0x00,0xD9,0x47,0x3C,0x6A,0x06
};
BYTE NOPE[]
{
	0x66,0x90
};
#pragma endregion

void miniMapColorAOK20()
{
	////0058D0F0   .-E9 2E302400    JMP Empires2.007D0123
	_0058D0F7 = 0x058D0F7;
	InjectHook((void*)0x0058D0F0, MiniMapColor58D0F0,PATCH_JUMP);
	//0058D0F5  
	writeData(0x058D0F5, NOPE, 2);
	//005C3F12  
	_005C3F26 = 0x05C3F26;
	//setHook((void*)0x05C3F12, MiniMapColor5C3F12);
	writeData(0x05C3F12, c_005C3F12, 2);
	setHookJE((void*)0x05C3F14, MiniMapColor5C3F12);
	writeData(0x05C3F1A, c_005C3F1A, 17);
	//00461222
	_00461227 = 0x0461227;
	InjectHook((void*)0x0461222, MiniMapColor461222, PATCH_JUMP);
	//0046123C 
	_00461241 = 0x0461241;
	InjectHook((void*)0x046123C, MiniMapColor46123C, PATCH_JUMP);
	//0x461249
	_46124E = 0x046124E;
	InjectHook((void*)0x461249, MiniMapColor461249, PATCH_JUMP);
	//0x4612E0
	writeData(0x4612E0, c_4612E0, 139);
	//005C3F29   . 6A 04          PUSH 0x4
	writeData(0x05C3F29, c_5C3F29, 2);
	//0x5C5221
	//005C5233  |> 8B0D C4456600  MOV ECX,DWORD PTR DS:[0x6645C4]
	writeData(0x05C5233, c_5C5244, 6);
	//0x5C3839
	//writeData(0x5C3839, c_5C3839, 25);
	//005C3F3D   . E8 BEA02000    CALL Empires2.007CE000

	_5FCA14 = 0x05FCA14;
	_4611D0 = 0x04611D0;
	_5C3F42 = 0x5C3F42;
	//setHook((void*)0x05C3F3D, MiniMapColor5C3F3D);
	//setHookCall((void*)0x05C3F3D, MiniMapColor7CE000);
	InjectHook((void*)0x05C3F3D, MiniMapColor7CE000,PATCH_CALL);
}

 
#pragma region Add unit button formation
//0x4DEE9A 
DWORD _004E6070;

void __declspec(naked)  AddunitFormation4DEE9A()
{
	__asm {
		MOV ECX, 51h
		XOR EDX, EDX
		MOV DL, BYTE PTR DS : [ECX + 4DF018h]
		CMP EAX, 0AEh
		PUSH 5h  //fusion formation
		MOV ECX, ESI
		CALL _004E6070
		MOV ECX, DWORD PTR SS : [ESP + 4h]
		MOV DWORD PTR FS : [0h] , ECX
		POP ESI
		ADD ESP, 0Ch
		RETN 0Ch
	}
}
//4E5C57
DWORD _004E5C5C;
DWORD _004DFF50;
void __declspec(naked)  AddunitFormation4E5C57()
{
	__asm {
		CALL _004DFF50
		PUSH 0h
		PUSH 0h
		MOV EDX, DWORD PTR DS : [ESI + 101Ch]
		PUSH 0h
		PUSH 0h
		PUSH 0h
		PUSH - 1h
		PUSH 9C59h//0A03Fh
		PUSH 0h
		PUSH 0AFh
		PUSH 2Ch
		PUSH 0Eh
		PUSH EDX
		MOV ECX, ESI
		CALL _004DFF50
		JMP[_004E5C5C]
	}
}
//0x5B30BD
void __declspec(naked)  AddunitFormation5B30BD()
{
	__asm {
		CMP EDX, 0AFh
		JNZ SHORT _007E5119
		MOV EDX, DWORD PTR SS : [ESP + 20h]
		MOV EAX, DWORD PTR DS : [ECX]
		PUSH EDX
		PUSH ESI
		PUSH 9C59h
		CALL DWORD PTR DS : [EAX + 24h]
		POP EDI
		POP ESI
		POP EBP
		RETN 14h
		_007E5119 :
		MOV BYTE PTR DS : [EBP + ESI - 1h] , 0h
			MOV EAX, ESI
			POP EDI
			POP ESI
			POP EBP
			RETN 14h
	}
}
//0053AE42
DWORD _00472E50;
DWORD __0041F840 = 0x041F840;
void __declspec(naked)  AddunitFormation53AE42()
{
	__asm {
		/*MOV EDX, DWORD PTR DS : [6645C4h]
		call __0041F840
		MOV EAX, dword ptr[ecx + 0A2h]
		ADD EAX, 0198h
		MOV EAX, dword ptr[EAX]*/

		CMP EDX, 0AFh
		JNZ _007E5175
		LEA EAX, DWORD PTR SS : [ESP + 3h]
		LEA EDX, DWORD PTR SS : [ESP + 3h]
		PUSH EAX
		LEA EAX, DWORD PTR SS : [ESP + 7h]
		PUSH EDX
		PUSH EAX
		PUSH 6h
		PUSH 0Ch
		CALL _00472E50
		POP ECX
		RETN 4h
		_007E5175 :
		XOR EAX, EAX
			POP ECX
			RETN 4h
	}
}
//0045E259   > 8180 07000000 >ADD DWORD PTR DS:[EAX+0x7],0x38811675


#pragma endregion


void AddNewBittonFormationAOK20()
{

	//0x04E5C57  
	_004E5C5C = 0x04E5C5C;
	_004DFF50 = 0x04DFF50;
	InjectHook((void*)0x04E5C57, AddunitFormation4E5C57,PATCH_JUMP);
	//0x4DEE9A
	_004E6070 = 0x04E6070;
	InjectHook((void*)0x04DEE9A, AddunitFormation4DEE9A, PATCH_JUMP);
	//0x05B30BD
	setHookJA((void*)0x05B30BD, AddunitFormation5B30BD);
	//0053AE42
	_00472E50 = 0x0472E50;
	setHookJA((void*)0x053AE42, AddunitFormation53AE42);

}
 
#pragma region Add Rms
DWORD _782A00;
DWORD _004B2940;
DWORD _7829F0;
DWORD _7829E0;
DWORD _7829D0;
DWORD _782A10;
DWORD _782A20;
DWORD _004FD755;
void __declspec(naked)  AddRMS4FD743()
{
	__asm {
		MOV _782A00, 16h
		MOV ECX, DWORD PTR DS : [ESI + 0AF4h]
		PUSH 18h
		PUSH 02A8Ah
		CALL _004B2940
		MOV _7829F0, EAX
		MOV _7829E0, ECX
		MOV _7829D0, EDX
		MOV _782A10, 018h
		MOV _782A20, 02A7Bh//  10875, 	"Arabia"
		_007E0E3D :
		MOV EDX, _782A00
			MOV EAX, _782A10
			MOV ECX, _782A20
			ADD EAX, 01h
			DEC ECX
			MOV _782A10, EAX
			MOV _782A20, ECX
			PUSH EAX
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI + 0AF4h]
			DEC EDX
			MOV _782A00, EDX
			CALL _004B2940
			CMP _782A00, 0h
			JNZ _007E0E3D
			JMP[_004FD755]
	}
}
//when start game 
//0x05996AD
DWORD _00599729;
void __declspec(naked)  AddRMS5996AD()
{
	__asm {
		JA SHORT _007E0F00
		JMP DWORD PTR DS : [EAX * 4h + 05997D8h]
		_007E0F00 :
		MOV _782A00, 16h
		MOV _7829F0, EAX
		MOV _7829E0, ECX
		MOV _7829D0, EDX
		MOV ECX, 02710h
		ADD ECX, _782A00
		SUB EAX, 0Fh
		SUB ECX, EAX
		MOV ESI, ECX
		PUSH 02F98Ch// PUSH 2F98C                               ;  Default case of switch 005996A7
		JMP[_00599729]
	}
}
//0x506878
DWORD _0050687D;
void __declspec(naked)  AddRMS506878()
{
	__asm {
		MOV _782A00, 16h
		CALL _004B2940
		MOV _7829F0, EAX
		MOV _7829E0, ECX
		MOV _7829D0, EDX
		MOV _782A10, 018h
		MOV _782A20, 02A7Bh//  10875, 	"Arabia"
		_007E102A :
		MOV EDX, _782A00
			MOV EAX, _782A10
			MOV ECX, _782A20
			ADD EAX, 01h
			DEC ECX
			MOV _782A10, EAX
			MOV _782A20, ECX
			PUSH EAX
			PUSH ECX
			MOV ECX, DWORD PTR DS : [ESI]
			DEC EDX
			MOV _782A00, EDX
			CALL _004B2940
			CMP _782A00, 0h
			JNZ _007E102A
			JMP[_0050687D]
	}
}
#pragma endregion


void AddRmsAOK20()
{
	//0x04FD743  
	_782A00 = 0x0782A00;
	_004B2940 = 0x04B2940;
	_7829F0 = 0x07829F0;
	_7829E0 = 0x07829E0;
	_7829D0 = 0x07829D0;
	_782A10 = 0x0782A10;
	_782A20 = 0x0782A20;
	_004FD755 = 0x04FD755;
	InjectHook((void*)0x04FD743, AddRMS4FD743,PATCH_JUMP);
	//688CF90200
	//00599724   > 68 8CF90200    PUSH 2F98C                               ;  Default case of switch 005996A7
	writeDwordF(0x0599724, 0x8CF90200);
	//0x05996AD
	_00599729 = 0x0599729;
	InjectHook((void*)0x05996AD, AddRMS5996AD, PATCH_JUMP);
	//0x506878
	//on scenario screen
	_0050687D = 0x050687D;
	InjectHook((void*)0x506878, AddRMS506878, PATCH_JUMP);
}

//0043C7F1  |. E8 2ADC1A00    CALL empires2.005EA420
DWORD _005EA420 = 0x05EA420;
DWORD _0043C8B1 = 0x043C8B1;
DWORD _0043C7F6 = 0x043C7F6;
void __declspec(naked)  FixActionLagCrashBug1()
{
	__asm {
		CALL _005EA420
		TEST EAX, EAX
		JE __0043C8B1
		JMP _0043C7F6

		__0043C8B1 :
		JMP _0043C8B1
	}
}
//0043C8D1  |. E8 4ADB1A00    CALL empires2.005EA420
DWORD _0043C99C = 0x043C99C;
DWORD _0043C8D6 = 0x043C8D6;
void __declspec(naked)  FixActionLagCrashBug2()
{
	__asm {
		CALL _005EA420
		TEST EAX, EAX
		JE __0043C99C
		JMP _0043C8D6

		__0043C99C :
		JMP _0043C99C
	}
}
//// Fix multiplayer network bugs
//Injection(0x5d476b, "38");
//Injection(0x5ccc1d, "24FA");
//Injection(0x5ccc34, "D007");
//Injection(0x5a69b0, "8B566C");
//Injection(0x5a69f5, "3B466C");
//Injection(0x5a6e8e, "EB");
//Injection(0x5a6edf, "E98A01000090");
//Injection(0x5a6dcb, "6690");
//Injection(0x5ca7a3, "7C");
//Injection(0x5a6ab8, "EB4A66666690");
//Injection(0x5a67eb, "09");
//Injection(0x5a6800, "535633DB578D73018B0DA012790056E8CC5004008BF885FF7E4D8B0D0012790056E82A2E030083F802743BA1A01279008B80240400008B484C8B0CB9E85FD6FAFF85C075228B15A01279008A84329D10000084C075118B0D0012790056E89EE2020085C07501434683FE097C9B5F8BC35E5BC390");
//Injection(0x5d7010, "31C0C3666690");
//Injection(0x5d7030, "C2040090");
//Injection(0x5d73d0, "C36690");
//Injection(0x5d7350, "C20800666690");
//Injection(0x5d7290, "C2080090");
//Injection(0x5d1a1f, "68040002008974243C8985EC150000E87D1D040083C4048944244439D8C744243802000000742668F01F5D0068D01F5D008D780468002000006A1057C70000200000E8EB4B04008BC76666669068040018008974243C8985DC1D0000E8301D040083C4048944244439D8C74424380300000074266840205D006820205D008D780468000001006A1857C70000000100E89E4B04008BC766666690");
//Injection(0x5d6f20, "535556578BF931ED31DB8BB7E01D000001DE8B0639E8740950E880C8030083C40483C318892E81FBE8FF1700896E04896E08896E0C896E10896E1476CD31DB8BB7DC1D000001DE8B0639E8740950E84BC8030083C40483C310892E81FBF0FF0100896E04896E08896E0C76D35F5E5D5BC390");
//Injection(0x5d6fb0, "535556578B44241431ED48C1E0108D04408B99E01D000031FF01C38D343B8B0639E8740950E8E4C7030083C404892E896E04896E08896E0C896E10896E1483C71881FF0000030072D25F5E5D5BC20400666690");
//Injection(0x5d7080, "568B81E41000005785C075055F5EC218008B4424208BF948C1E0108B97E01D00008D0C408B44240C01CA8BF025FF1F000053C1E0038D1C408B44241C01D38B54242089430C8B4424188953108BC889730489430885C0743F8B531439D07E248B0B5021C9740951E8D2C6030083C404E8BCC6030083C4048B4B08890385C07417894B148B3B8B7424148BD1C1E902F3A58BCA83E103F3A45B5F5EC21800");

//Injection(0x5d7180, "56578B81E41000008BF985C075055F5EC210008B44240C538BF025FF1F00008B9FDC1D0000C1E00401C38B4424188973048BC889430885C0743F8B530C39D07E248B0B5021C9740951E8F0C5030083C404E8DAC5030083C4048B4B08890385C07417894B0C8B3B8B7424148BD1C1E902F3A58BCA83E103F3A45B5F5EC2100090");
//Injection(0x5d7880, "5355568B5C24145731FF8BF139BC99481E00007408393D940F790075075F5E5D5BC20800FF15D85363008B5424148B8C9E3814000083FA647C7E8D7A0239CA7F108BAC9EB41400008BC829E983F964726789BC9E3814000089849EB41400004ABD02000000428BFA81E2FF1F00008B86DC1D0000C1E20401D039780475418B0D940F79008BF88B50088B07528B949E481E0000506A0052518BCEE821BCFFFF8B570801961C47000085C075060196C41200008B57044D7FAD5F5E5D5BC208004F89BC9E381400005F5E5D5BC20800");
//Injection(0x5d20f6, "EB5566666690");
//Injection(0x5d2165, "10");
//Injection(0x5d1fd0, "8BC131C9890889480489480889480CC36690");
//Injection(0x5d1ff0, "568BF18B0185C0740B50E8BF17040031C083C40489460889460489460C89065EC3");
//Injection(0x5d6ce0, "83EC085355568B81E41000005785C07410BB010000008BF1663999DC12000073085F5E5D5B83C408C3538BCEE8CF29000085C0745E3B9EE010000074568D43FF8B8EE01D0000C1E0108D04408B949EE41D000001C18D4201894C24148BE825FF1F00008B542414C1E0038D044001D0396804751F8BF88B50108B470C8B4F086A01528B175052518BCEE8C2C8FFFF458BC5EBCB4366399EDC120000738C5F5E5D5B83C408C36690");
//Injection(0x5d74c0, "83EC105355568BF18B81E41000005785C07412BB010000008D7C241866399EDC12000073085F5E5D5B83C410C3C70758000000FF15D853630089442410538BCEE8DB21000085C074613B9EE010000074598B949EE41D00008B8C9EE81300008D6A018B44241039CD75108BC88B949E1014000029D183F964723089AC9EE81300008B0D940F790089849E1014000021C97422896F046A088B849E481E0000576A0050518BCEE8D6BFFFFF4366399EDC12000073895F5E5D5B83C410C3");
//Injection(0x5d2063, "897E145F5EC3");
//Injection(0x5d4359, "766C8B8D341300008B9424C40300008B8424C003000041898D341300008B8C24B803000056528B5308505153528BCDE8F32C00005F5E5DB8010000005B81C4A4030000C214000F1F840000000000660F1F8400000000000F1F8400000000008B8C24C803000085C90F84C9290000");
//Injection(0x5d6d90, "8D50018D46FF8B8DE01D0000C1E0108D044001C18BC225FF1F0000C1E0038D044001C83950040F850BD6FFFF8D56FFC7049580527A0000000000E9F8D5FFFF6690");
//Injection(0x5d7e74, "01");
//Injection(0x5d7f5b, "00");
//Injection(0x5da8d8, "C0");
//Injection(0x5da8e2, "C0");
//Injection(0x5d077e, "C0");
//Injection(0x5d3bb4, "EB1190");
//Injection(0x5d42a5, "7D383C5874383C4375138A531C20D27529660F1F440000660F1F440000");
//Injection(0x5d433e, "5F5E5DB8010000005B81C4A4030000C21400");
//Injection(0x5d43e9, "8B85AC12000085C075398B8424C40300008B8C24C00300008B15A80F790050A1A40F790051668B4B01528A13508B4304518B8C24CC030000525056518BCDE8B40000005F5E5DB8010000005B81C4A4030000C2140066666690");
//Injection(0x5d7f67, "E947FFFFFF");
//Injection(0x5d7f2b, "EB86666690");
//Injection(0x5d7ea4, "E9C50000000F1F4400000F1F4400008D542424");
//Injection(0x5d7f6e, "8B8D3C13000041807C24383E898D3C130000752A8B4C24188B85E01000006AFF6A00668B51018B4C244852");
void __declspec(naked)  FixMultiplayerNetworkBugs()
{
	__asm {
		CALL _005EA420
		TEST EAX, EAX
		JE __0043C99C
		JMP _0043C8D6

		__0043C99C :
		JMP _0043C99C
	}
}
void FixLagHookAOK20()
{
	// Fix action lag crash bug
	InjectHook((void*)0x043C7F1, FixActionLagCrashBug1,PATCH_JUMP);
	InjectHook((void*)0x043C8D1, FixActionLagCrashBug2, PATCH_JUMP);
	/*// Fix multiplayer network bugs
	//0x428738  |. 8B4C24 20      MOV ECX,DWORD PTR SS:[ESP+38]
	BYTE _00428738[] = {0x8B,0x4C,0x24,0x38};
	writeData(0x0428738, _00428738, 4);
	//0043801B     81E6 24FAFFFF  AND ESI,FFFFFA24
	BYTE _0043801B[] = {0x81,0xE6,0x24,0xFA,0xFF,0xFF};
	writeData(0x043801B, _0043801B, 6);
	//00438032     81C6 D0070000  ADD ESI,7D0
	BYTE _00438032[] = {0x81,0xC6,0xD0,0x07,0x00,0x00};
	writeData(0x0438032, _00438032, 6);
	//0045C010     8B56 6C        MOV EDX,DWORD PTR DS:[ESI+6C]
	BYTE _0045C010[] = {0x8B,0x56,0x6C};
	writeData(0x045C010, _0045C010,3);
	//0045C055     3B46 6C        CMP EAX,DWORD PTR DS:[ESI+6C]
	BYTE _0045C055[] = {0x3B,0x46,0x6C};
	writeData(0x045C055, _0045C055, 3);
	//0045C4EE     EB 32          JMP SHORT empires2.0045C522
	writeByte(0x045C4EE, 0xEB);
	//0045C53F  |> 8DA9 E8080000  LEA EBP,DWORD PTR DS:[ECX+8E8]   -> jmp 0045C6CE  |> 5F             POP EDI
	BYTE _0045C53F[] = {0xE9,0x8A,0x01,0x00,0x00,0x90};
	writeData(0x045C53F, _0045C53F,6);
	//0045C42B     66:90          NOP
	BYTE _0045C42B[] = {0x66,0x90};
	writeData(0x045C42B, _0045C42B, 2);
	//0043A1B3    ^7C E9          JL SHORT empires2.0043A19E
	writeByte(0x043A1B3, 0x7C);
	//0045C118     EB 4A          JMP SHORT empires2.0045C164
	BYTE _0045C118[] = {0xEB,0x4A,0x66,0x66,0x66,0x90};
	writeData(0x045C118, _0045C118, 6);
	//0045BE49     83FE 09        CMP ESI,9
	BYTE _0045BE49[] = {0x83,0xFE,0x09};
	writeData(0x045BE49, _0045BE49, 3);
	//0045BE60
	BYTE _0045BE60[] = {0x53,0x56,0x33,0xDB,0x57,0x8D,0x73,0x01,0x8B,0x0D,0xC4,0x45,0x66,0x00,0x56,0xE8,0x9C,0x63,0xFC,0xFF,0x8B,0xF8,0x85,0xFF,0x7E,0x4D,0x8B,0x0D,0x20,0x45,0x66,0x00
	,0x56,0xE8,0xFA,0x16,0xFD,0xFF,0x83,0xF8,0x02,0x74,0x3B,0xA1,0xC4,0x45,0x66,0x00,0x8B,0x80,0x1C,0x04,0x00,0x00,0x8B,0x48,0x4C,0x8B,0x0C,0xB9,0xE8,0xCF,0x3A,0x03
	,0x00,0x85,0xC0,0x75,0x22,0x8B,0x15,0xC4,0x45,0x66,0x00,0x8A,0x84,0x32,0x95,0x10,0x00,0x00,0x84,0xC0,0x75,0x11,0x8B,0x0D,0x20,0x45,0x66,0x00,0x56,0xE8,0x1E,0xCC
	,0xFC,0xFF,0x85,0xC0,0x75,0x01,0x43,0x46,0x83,0xFE,0x09,0x7C,0x9B,0x5F,0x8B,0xC3,0x5E,0x5B,0xC3};
	writeData(0x045BE60, _0045BE60, 115);
	//0042AF40     33C0           XOR EAX,EAX
	BYTE _0042AF40[] = {0x33,0xC0,0xC3,0x66,0x66,0x90};
	writeData(0x042AF40, _0042AF40, 6);
	//0042AF60     C2 0400        RETN 4
	BYTE _0042AF60[] = {0xC2,0x04,0x00,0x90};
	writeData(0x042AF60, _0042AF60, 4);
	//0042B300     C3             RETN
	BYTE _0042B300[] = {0xC3,0x66,0x90};
	writeData(0x042B300, _0042B300, 4);
	//0042B280     C2 0800        RETN 8
	BYTE _0042B280[] = {0xC2,0x08,0x00,0x66,0x66,0x90};
	writeData(0x042B280, _0042B280,6);
	//00425ACC
	BYTE _00425ACC[] = {0x68,0x04,0x00,0x02,0x00,0x89,0x74,0x24,0x3C,0x89,0x85,0xE8,0x15,0x00,0x00,0xE8,0x80,0x34,0x1D,0x00,0x83,0xC4,0x04,0x89,0x44,0x24,0x44,0x3B,0xC3,0xC7,0x44,0x24
	,0x38,0x02,0x00,0x00,0x00,0x74,0x26,0x68,0x90,0x60,0x42,0x00,0x68,0x70,0x60,0x42,0x00,0x8D,0x78,0x04,0x68,0x00,0x20,0x00,0x00,0x6A,0x10,0x57,0xC7,0x00,0x00,0x20
	,0x00,0x00,0xE8,0x53,0x73,0x1D,0x00,0x8B,0xC7,0x66,0x66,0x66,0x90,0x68,0x04,0x00,0x18,0x00,0x89,0x74,0x24,0x3C,0x89,0x85,0xD8,0x1D,0x00,0x00,0xE8,0x33,0x34,0x1D
	,0x00,0x83,0xC4,0x04,0x89,0x44,0x24,0x44,0x3B,0xC3,0xC7,0x44,0x24,0x38,0x03,0x00,0x00,0x00,0x74,0x26,0x68,0xE0,0x60,0x42,0x00,0x68,0xC0,0x60,0x42,0x00,0x8D,0x78
	,0x04,0x68,0x00,0x00,0x01,0x00,0x6A,0x18,0x57,0xC7,0x00,0x00,0x00,0x01,0x00,0xE8,0x06,0x73,0x1D,0x00,0x8B,0xC7,0x66,0x66,0x66,0x90,0x8B,0xCD};
	writeData(0x0425ACC, _00425ACC, 156);
	//0042AE50  /$ 90             NOP
	BYTE _0042AE50[] = {0x90,0x53,0x55,0x56,0x57,0x8B,0xF9,0x33,0xED,0x33,0xDB,0x8B,0xB7,0xDC,0x1D,0x00,0x00,0x03,0xF3,0x8B,0x06,0x3B,0xC5,0x74,0x09,0x50,0xE8,0x41,0xE2,0x1C,0x00,0x83
	,0xC4,0x04,0x83,0xC3,0x18,0x89,0x2E,0x81,0xFB,0xE8,0xFF,0x17,0x00,0x89,0x6E,0x04,0x89,0x6E,0x08,0x89,0x6E,0x0C,0x89,0x6E,0x10,0x89,0x6E,0x14,0x76,0xCD,0x33,0xDB
	,0x8B,0xB7,0xD8,0x1D,0x00,0x00,0x03,0xF3,0x8B,0x06,0x3B,0xC5,0x74,0x09,0x50,0xE8,0x0C,0xE2,0x1C,0x00,0x83,0xC4,0x04,0x83,0xC3,0x10,0x89,0x2E,0x81,0xFB,0xF0,0xFF
	,0x01,0x00,0x89,0x6E,0x04,0x89,0x6E,0x08,0x89,0x6E,0x0C,0x76,0xD3,0x5F,0x5E,0x5D,0x5B,0xC3,0x90};
	writeData(0x042AE50, _0042AE50, 115);
	//0042AEE0  /$ 53             PUSH EBX
	BYTE _0042AEE0[] = {0x53,0x55,0x56,0x57,0x8B,0x44,0x24,0x14,0x33,0xED,0x48,0xC1,0xE0,0x10,0x8D,0x04,0x40,0x8B,0x9B,0xDC,0x1D,0x00,0x00,0x33,0xFF,0x03,0xD8,0x8D,0x34,0x3B,0x8B,0x06
	,0x3B,0xC5,0x74,0x09,0x50,0xE8,0xA6,0xE1,0x1C,0x00,0x83,0xC4,0x04,0x89,0x2E,0x89,0x6E,0x04,0x89,0x6E,0x08,0x89,0x6E,0x0C,0x89,0x6E,0x10,0x89,0x6E,0x14,0x83,0xC7
	,0x18,0x81,0xFF,0x00,0x00,0x03,0x00,0x72,0xD2,0x5F,0x5E,0x5D,0x5B,0xC2,0x04,0x00,0x66,0x66,0x90 };
	writeData(0x042AEE0, _0042AEE0,83 );

	//CALL 005F90B0   =  CALL 006137BE heap free
	//CALL 005F8F60   =  CALL 006137B0 heap alloc
	//0042AFB0  /$ 56             PUSH ESI
	BYTE _0042AFB0[] = {0x56,0x8B,0x81,0xE4,0x10,0x00,0x00,0x57,0x85,0xC0,0x75,0x05,0x5F,0x5E,0xC2,0x18,0x00,0x8B,0x44,0x24,0x20,0x8B,0xF9,0x48,0xC1,0xE0,0x10,0x8B,0x97,0xDC,0x1D,0x00
	,0x00,0x8D,0x0C,0x40,0x8B,0x44,0x24,0x0C,0x8B,0x44,0x24,0x0C,0x03,0xD1,0x8B,0xF0,0x25,0xFF,0x1F,0x00,0x00,0x53,0x53,0xC1,0xE0,0x03,0x8D,0x1C,0x40,0x8B,0x44,0x24
	,0x1C,0x03,0xDA,0x8B,0x54,0x24,0x20,0x89,0x43,0x0C,0x8B,0x44,0x24,0x18,0x89,0x53,0x10,0x8B,0xC8,0x89,0x73,0x04,0x89,0x43,0x08,0x85,0xC0,0x74,0x3F,0x8B,0x53,0x14
	,0x3B,0xC2,0x7E,0x24,0x8B,0x0B,0x50,0x21,0xC9,0x74,0x09,0x51,0xE8,0x8F,0xE0,0x1C,0x00,0x83,0xC4,0x04,0xE8,0x37,0xDF,0x1C,0x00,0x83,0xC4,0x04,0x8B,0x4B,0x08,0x89
	,0x03,0x85,0xC0,0x74,0x17,0x89,0x4B,0x14,0x8B,0x3B,0x8B,0x74,0x24,0x14,0x8B,0xD1,0xC1,0xE9,0x02,0xF3,0xA5,0x8B,0xCA,0x83,0xE1,0x03,0xF3,0xA4,0x5B,0x5F,0x5E,0xC2
	,0x18,0x00,0x8B,0x74,0x24,0x1C,0x8B,0xD1,0x8B,0xF8,0xC1,0xE9,0x02,0xF3,0xA5,0x8B,0x44,0x24,0x20,0x8B,0xCA,0x83,0xE1,0x03,0xF3,0xA4,0x8B,0x74,0x24,0x10,0x89,0x45
	,0x08,0x8B,0x8E,0xDC,0x1D,0x00,0x00,0x8B,0x54,0x24,0x18,0x5D,0x5F,0x89,0x54,0x19,0x04,0x8B,0x86,0xE0,0x1D,0x00,0x00,0x8B,0x4C,0x24,0x1C,0x89,0x4C,0x18,0x0C,0x8B
	,0x96,0xE0,0x1D,0x00,0x00,0x8B,0x44,0x24,0x20,0x5E,0x89,0x44,0x1A,0x10,0xB8,0x01,0x00,0x00,0x00,0x5B,0x59,0xC2,0x14,0x00};
	writeData(0x042AFB0, _0042AFB0,248 );*/

}

//DWORD _004DCA13 = 0x04DCA13;

//get player position
//00422A87 | . 8B9C24 0C0C0000     MOV EBX, DWORD PTR SS : [ESP + C0C]
//	00422A80
DWORD player_position;
DWORD _00422A86 = 0x0422A86;


void __declspec(naked)  getplayerPositionn()
{

	__asm {
		MOV EAX, DWORD PTR SS : [ESP + 0Ch]
		CMP EAX, -1
		JNZ normale
		MOV player_position, 1h
		SUB ESP, 0C00h
		JMP _00422A86

		normale :
		MOV player_position, EAX
			SUB ESP, 0C00h
			JMP _00422A86
	}
}

//room chat 
//other player send msg
//004287B2 | > 8D5D 11        LEA EBX, DWORD PTR SS : [EBP + 11]
//current player sending msg
//0042A87F  |. A1 58956600    MOV EAX,DWORD PTR DS:[669558]






//004DCA3B  |. 68 FF000000         |PUSH 0FF                                          ; |Arg3 = 000000FF

//004DCA3B  |. 68 FF000000         |PUSH 0FF                                          ; |Arg3 = 000000FF
//cpt--?
//004DCA37  |. 8D4C24 34           |LEA ECX,DWORD PTR SS:[ESP+34]                     ; |

DWORD h_EAX;
DWORD h_ECX;
DWORD h_EDX;
DWORD h_EBX;
DWORD h_ESP;
DWORD h_EBP;
DWORD h_ESI;
DWORD h_EDI;

DWORD _004DCA40 = 0x04DCA40;

DWORD colors[8];
DWORD cpt = 0;

DWORD pos;

void updateColor()
{

}
void __declspec(naked)  chatColor004DCA37()
{
	__asm {
		LEA ECX, DWORD PTR SS : [ESP + 34h]

		//save register
		MOV h_EAX, EAX
		MOV h_ECX, ECX
		MOV h_EDX, EDX
		MOV h_EBX, EBX
		//MOV h_ESP, ESP
		MOV h_EBP, EBP
		MOV h_ESI, ESI
		MOV h_EDI, EDI

		MOV EDX, 0h
		MOV EDX, DWORD PTR DS : [ESI]
		CMP EDX, 8h
		JG norm
		MOV pos, EDX

		MOV EDX, DWORD PTR DS : [6645C4h]
		MOV ECX, DWORD PTR DS : [EDX + 41Ch]
		MOV EDX, DWORD PTR DS : [ECX + 4Ch]
		MOV EAX, pos
		MOV ECX, DWORD PTR DS : [EDX + 4 * EAX]

		ADD ECX, 158h
		MOV ECX, DWORD PTR DS : [ECX]
		ADD ECX, 10h
		MOV EAX, 0h
		MOV al, BYTE PTR DS : [ECX]

		CMP EAX, 0F2h
		JNZ  standartColor
		MOV EAX, 15h
		standartColor :

		PUSH EAX//color

		//restaure register
			MOV  EAX, h_EAX
			MOV  ECX, h_ECX
			MOV  EDX, h_EDX
			MOV  EBX, h_EBX
			//MOV  ESP, h_ESP
			MOV  EBP, h_EBP
			MOV  ESI, h_ESI
			MOV  EDI, h_EDI

			JMP _004DCA40

			norm :
		push 0FFh
			//restaure register
			MOV  EAX, h_EAX
			MOV  ECX, h_ECX
			MOV  EDX, h_EDX
			MOV  EBX, h_EBX
			//MOV  ESP, h_ESP
			MOV  EBP, h_EBP
			MOV  ESI, h_ESI
			MOV  EDI, h_EDI

			JMP _004DCA40
	}
}
//  --Villager Created--
//set white
//005B5FF5  |> 8B0D 24456600  MOV ECX,DWORD PTR DS:[664524]                        ; |
DWORD _005B5FFB = 0x05B5FFB;
DWORD flagCreated = 0x0;
void __declspec(naked)  chatColor005B5FF5()
{
	__asm {
		MOV ECX, DWORD PTR DS : [664524h]
		MOV flagCreated, 1h
		JMP _005B5FFB
	}
}
//0x053D5AB
DWORD _00422A80 = 0x0422A80;
DWORD _0053D5B0 = 0x053D5B0;
void __declspec(naked)  chatColor053D5AB()
{
	__asm {
		CALL _00422A80; \empires2.00422A80
		MOV flagCreated, 1h
		JMP _0053D5B0
	}
}


//players structs MOV ECX,DWORD PTR DS:[6645C4]
//0041F840  /$ 8B81 1C040000           MOV EAX,DWORD PTR DS:[ECX+41C]
//004DC860 / $ 81EC 08010000             SUB ESP, 108
//fuction called when user or game user console


DWORD c_EAX;
DWORD c_ECX;
DWORD c_EDX;
DWORD c_EBX;
DWORD c_ESP;
DWORD c_EBP;
DWORD c_ESI;
DWORD c_EDI;

DWORD _0041F840 = 0x041F840;
DWORD* nameAdr;
char* name;
DWORD _004DCACA = 0x04DCACA;


//004DCAC1 | . 8D4C24 34      LEA ECX, DWORD PTR SS : [ESP + 34] ; |
//004DCAC5     68 F1000000    PUSH 0F1

DWORD basePlayersAdress;
BYTE color;


void __declspec(naked)  chatColor004DCAC1()
{
	__asm {


		//save register
		MOV c_EAX, EAX
		MOV c_ECX, ECX
		MOV c_EDX, EDX
		MOV c_EBX, EBX
		MOV c_ESP, ESP
		MOV c_EBP, EBP
		MOV c_ESI, ESI
		MOV c_EDI, EDI


		//CMP flagCreated, 1h
		//JE white

		MOV EDX, DWORD PTR DS : [6645C4h]
		MOV ECX, DWORD PTR DS : [EDX + 41Ch]
		MOV EDX, DWORD PTR DS : [ECX + 4Ch]
		MOV EAX, player_position
		MOV ECX, DWORD PTR DS : [EDX + 4 * EAX]

		ADD ECX, 158h
		MOV ECX, DWORD PTR DS : [ECX]
		ADD ECX, 10h
		MOV EAX, 0h
		MOV al, BYTE PTR DS : [ECX]
		MOV color, al
		//restaure register
		MOV  EAX, c_EAX
		MOV  ECX, c_ECX
		MOV  EDX, c_EDX
		MOV  EBX, c_EBX
		MOV  ESP, c_ESP
		MOV  EBP, c_EBP
		MOV  ESI, c_ESI
		MOV  EDI, c_EDI
		REP MOVS BYTE PTR ES : [EDI] , BYTE PTR DS : [ESI]
		MOV EAX, 0h
		MOV  EAX, player_position
		MOV player_position, 0h
		MOV BYTE PTR DS : [ESI] , AL
		MOV  EAX, c_EAX
		PUSH 0h
		PUSH 0h


		LEA ECX, DWORD PTR SS : [ESP + 34h]
		CMP color, 0F2h
		JNZ  standartColor
		MOV color, 15h
		standartColor :
		push color
			JMP _004DCACA
			//white:

			////restaure register
			//MOV  EAX, c_EAX
			//MOV  ECX, c_ECX
			//MOV  EDX, c_EDX
			//MOV  EBX, c_EBX
			//MOV  ESP, c_ESP
			//MOV  EBP, c_EBP
			//MOV  ESI, c_ESI
			//MOV  EDI, c_EDI
			//REP MOVS BYTE PTR ES : [EDI] , BYTE PTR DS : [ESI]
			//PUSH 0h
			//PUSH 0h


			//LEA ECX, DWORD PTR SS : [ESP + 34h]
			//push 0FFh
			//MOV flagCreated,0h
			//JMP _004DCACA


	}
}

//0044DFD7     90             NOP                                                  ; |Arg10
//0044DD72  |. 0F84 38050000  |JE empires2.0044E2B0

//0044DE42  |> 8B4424 10      |MOV EAX,DWORD PTR SS:[ESP+10]
//0040B55E > -E9 104C3A00    JMP age2_x1_.007B0173



//005E4D08  |> 8B0D C4456600  |MOV ECX,DWORD PTR DS:[6645C4]
DWORD _004217B0 = 0x04217B0;
DWORD _0042E360 = 0x042E360;
DWORD _00422220 = 0x0422220;
DWORD _005E4D3E = 0x05E4D3E;
DWORD _005E4D4F = 0x05E4D4F;
void __declspec(naked)  PannelColor005E4D08()
{
	__asm {
		//MOV ECX, DWORD PTR DS : [7912A0]
		MOV ECX, DWORD PTR DS : [6645C4h]
		MOV BYTE PTR SS : [ESP + EAX + 34h] , 0h
		//CALL age2_x1_.005EAE80
		CALL _004217B0
		TEST EAX, EAX
		JNZ short _007B0190
		MOV EAX, DWORD PTR SS : [ESP + 10h]
		CMP EAX, 4h
		JL short _007B01A1
		_007B0190 :
		LEA EDX, DWORD PTR SS : [ESP + 34h]
			//MOV ECX, DWORD PTR DS : [791200]
			MOV ECX, DWORD PTR DS : [664520]
			PUSH EDX
			PUSH EBX
			//CALL age2_x1_.005DA430
			CALL _0042E360
			_007B01A1 :
		MOV ECX, DWORD PTR SS : [ESP + 30h]
			PUSH ECX
			//MOV ECX, DWORD PTR DS : [7912A0]
			MOV ECX, DWORD PTR DS : [6645C4h]
			PUSH EBX
			//CALL age2_x1_.005EB8F0
			CALL _00422220
			//MOV ECX, DWORD PTR DS : [7912A0]
			MOV ECX, DWORD PTR DS : [6645C4h]
			//CALL age2_x1_.005EAE80
			CALL _004217B0
			TEST EAX, EAX
			JNZ _0040B594
			JMP _005E4D4F

			_0040B594 :
		JMP _005E4D3E
	}
}
//005B4911   .-E9 E2B71F00    JMP age2_x1_.007B00F8
//004FF1E4     EB 26          JMP SHORT age2_x1.004FF20C


//0042A860  |. 8B8424 2801000>MOV EAX,DWORD PTR SS:[ESP+128]
DWORD _0042A867 = 0x042A867;
void __declspec(naked) getplayerPosition0042A860()
{
	__asm {
		MOV EAX, DWORD PTR SS : [ESP + 128h]
		MOV player_position, ECX
		JMP _0042A867

	}
}
//00428791 | . 8B96 C8120000  MOV EDX, DWORD PTR DS : [ESI + 12C8]
//00428797 | . 33C9           XOR ECX, ECX
//00428799 | . 8A4D 00        MOV CL, BYTE PTR SS : [EBP]
//
DWORD _0042879C = 0x042879C;
void __declspec(naked)  getplayerPosition00428791()
{
	__asm {
		MOV EDX, DWORD PTR DS : [ESI + 12C8h]
		XOR ECX, ECX
		MOV CL, BYTE PTR SS : [EBP]
		MOV player_position, ECX
		JMP _0042879C

	}
}
//solo player
//0042A7F8  |. 8B8424 28010000  MOV EAX,DWORD PTR SS:[ESP+128]


DWORD _0042A7FF = 0x042A7FF;
void __declspec(naked)  getplayerPosition0042A7F8()
{
	__asm {
		MOV EAX, DWORD PTR SS : [ESP + 128h]
		MOV player_position, ECX
		JMP _0042A7FF

	}
}
//
//004F94DE | . 8B8E 080A0000  MOV ECX, DWORD PTR DS : [ESI + A08]
//004F94E4     68 FFFFFF00    PUSH 0FFFFFF
//004F94E9 | . 6A 00          PUSH 0
//004F94EB | . 6A 00          PUSH 0
//004F94ED     68 FFFF0000    PUSH 0FFFF
//004F94F2 | .E8 4939FCFF    CALL empires2.004BCE40


//004F94D6 | . 8B4424 10      MOV EAX, DWORD PTR SS : [ESP + 10]
//004F94DA | . 85C0           TEST EAX, EAX
//004F94DC | . 74 26          JE SHORT empires2.004F9504

DWORD ho_EAX;
DWORD ho_ECX;
DWORD ho_EDX;
DWORD ho_EBX;
DWORD ho_ESP;
DWORD ho_EBP;
DWORD ho_ESI;
DWORD ho_EDI;

DWORD _004F94F2 = 0x04F94F2;
DWORD _004F94E4 = 0x04F94E4;
void __declspec(naked)  getplayerPosition004F94DA()
{
	__asm {
		MOV EAX, DWORD PTR SS : [ESP + 10h]
		TEST EAX, EAX
		JE setcolor
		MOV ECX, DWORD PTR DS : [ESI + 0A08h]
		JMP _004F94E4
		setcolor :
		//save register
		MOV ho_EAX, EAX
			MOV ho_ECX, ECX
			MOV ho_EDX, EDX
			MOV ho_EBX, EBX
			MOV ho_ESP, ESP
			MOV ho_EBP, EBP
			MOV ho_ESI, ESI
			MOV ho_EDI, EDI

			MOV EDX, DWORD PTR DS : [6645C4h]
			MOV ECX, DWORD PTR DS : [EDX + 41Ch]
			MOV EDX, DWORD PTR DS : [ECX + 4Ch]
			MOV EAX, player_position
			MOV ECX, DWORD PTR DS : [EDX + 4 * EAX]

			ADD ECX, 158h
			MOV ECX, DWORD PTR DS : [ECX]
			ADD ECX, 10h
			MOV EAX, 0h
			MOV al, BYTE PTR DS : [ECX]
			MOV color, al

			//restaure register
			MOV  EAX, ho_EAX
			MOV  ECX, ho_ECX
			MOV  EDX, ho_EDX
			MOV  EBX, ho_EBX
			MOV  ESP, ho_ESP
			MOV  EBP, ho_EBP
			MOV  ESI, ho_ESI
			MOV  EDI, ho_EDI

			MOV ECX, DWORD PTR DS : [ESI + 0A08h]
			PUSH 0FFFFFFh
			PUSH 0h
			PUSH 0h
			PUSH color//color
			JMP _004F94F2


	}
}

//// Addresse -= 0x 512000;
////007C8920   50               PUSH EAX
//Injection(0x02B6920, "508B4424308B0DA01279008B404C8B118B04988B98A01200008B5B6021DB740B53E86AA3D9FFE975BEDEFF6A00E962BEDEFF");
//// 007B00F8   8B4424 18        MOV EAX, DWORD PTR SS:[ESP+18]
//Injection(0x029E0F8, "8B4424188B4C241C66406639C8894424180F8C8445E0FF8A54241E2854241CC644241E00E90548E0FF");
//
//Injection(0x5b479d, "E97E412100");
////005B4911   .-E9 E2B71F00    JMP age2_x1_.007B00F8
//Injection(0x5b4911, "E9E2B71F00");


//005B479D   .-E9 7E412100    JMP age2_x1_.007C8920
//005B479D   .-E9 7E412100    JMP age2_x1_.007C8920


//0044DCC7 | . 50 | PUSH EAX
DWORD _0044DCDE = 0x044DCDE;
DWORD _004A2140 = 0x04A2140;
DWORD _0044DCEA = 0x044DCEA;
void __declspec(naked)  setplayerPanelChatColor0044DCC7()
{
	__asm {
		PUSH EAX
		MOV EAX, DWORD PTR SS : [ESP + 20h]
		//MOV ECX, DWORD PTR DS : [7912A0]
		MOV ECX, DWORD PTR DS : [6645C4h]
		MOV EAX, DWORD PTR DS : [EAX + 4Ch]
		MOV EDX, DWORD PTR DS : [ECX]
		MOV EAX, DWORD PTR DS : [EAX + EBX * 4h]
		//MOV EBX, DWORD PTR DS : [EAX + 12A0h]
		MOV EBX, DWORD PTR DS : [EAX + 102Ch]
		MOV EBX, DWORD PTR DS : [EBX + 60h]
		AND EBX, EBX
		JE short _007C894B
		PUSH EBX
		CALL _004A2140
		JMP _0044DCEA
		_007C894B :
		PUSH 0
			JMP _0044DCDE


	}
}
//0044DE42  |> 8B4424 10       |MOV EAX,DWORD PTR SS:[ESP+10]
DWORD _0044DBBA = 0x044DBBA;
DWORD _0044DE57 = 0x044DE57;

void __declspec(naked)  setplayerPanelChatColor0044DE42()
{
	__asm {
		MOV EAX, DWORD PTR SS : [ESP + 10h]
		MOV ECX, DWORD PTR SS : [ESP + 1Ch]
		INC AX
		CMP AX, CX
		MOV DWORD PTR SS : [ESP + 10h] , EAX
		JL _005B4693
		MOV DL, BYTE PTR SS : [ESP + 1Eh]
		SUB BYTE PTR SS : [ESP + 1Ch] , DL
		MOV BYTE PTR SS : [ESP + 1Eh] , 0
		JMP _0044DE57



	_005B4693:
		JMP _0044DBBA

	}
}

void chatchatColorFixeAOK20()
{
	//direct message color
	InjectHook((void*)0x04DCABB, chatColor004DCAC1,PATCH_JUMP);
	// 004DCA37
	InjectHook((void*)0x04DCA37, chatColor004DCA37, PATCH_JUMP);
 

	InjectHook((void*)0x042A860, getplayerPosition0042A860,PATCH_JUMP);
	InjectHook((void*)0x0428791, getplayerPosition00428791,PATCH_JUMP);
	InjectHook((void*)0x042A7F8, getplayerPosition0042A7F8,PATCH_JUMP);
 
}
 
void popHookAOK20()
{
	writeByte(0x04FDA37, 0xFA);
	//writeByte(0x04FDA38,0x03);
}

void aok20AddAColor()
{
	//addmore color 
//004FC778     83FD 0A        CMP EBP,0A
	writeByte(0x04FC77A, 0x09);




	writeByte(0x05CD549, 0x90);
	writeByte(0x05CD54A, 0x90);
	writeByte(0x05CD54B, 0x90);
	writeByte(0x05CD54C, 0x90);
	writeByte(0x05CD54D, 0x90);
	writeByte(0x05CD54E, 0x90);
	writeByte(0x05CD54F, 0x90);
	writeByte(0x05CD550, 0x90);
}
 

//// Fix record restored game bug
//Injection(0x4426ee, "E927813800");
//Injection(0x43f67c, "E9AFB13800");


//004F44DD.A1 20456600    MOV EAX, DWORD PTR DS : [664520]
//004F44E2   . 8B0D C4456600  MOV ECX, DWORD PTR DS : [6645C4]
//004F44E8   . 05 CC260000    ADD EAX, 26CC
//004F44ED   . 50             PUSH EAX; / Arg1
//004F44EE.E8 9D380C00    CALL empires2.005B7D90; \empires2.005B7D90

//
//005B812A | > 8B8D B0010000  MOV ECX, DWORD PTR SS : [EBP + 1B0]
//005B8130 | . 8B75 00        MOV ESI, DWORD PTR SS : [EBP]
DWORD _00426F50 = 0x0426F50;
//005B9240  /$ 81EC 10090000  SUB ESP,910
DWORD _005B9240 = 0x05B9240;

DWORD _005B8130 = 0x05B8130;
void __declspec(naked)   FixRecordRestoredGame005B812A()
{
	__asm {
		//MOV ECX, DWORD PTR DS : [7912A0]
		//MOV ECX, DWORD PTR DS : [6645C4h]
		MOV ECX, DWORD PTR DS : [6645C4h]
		//call _00426F50// 00426F50 / $ 81EC 10090000  SUB ESP, 910
		call _005B9240
		MOV ECX, DWORD PTR SS : [EBP + 1B0h]
		JMP _005B8130

	}
}

//005B55BC | . 68 0CD96400    PUSH empires2.0064D90C;  ASCII "Status Screen"
DWORD _005B55C1 = 0x05B55C1;
void __declspec(naked)   FixRecordRestoredGame005B55BC()
{
	__asm {
		//PUSH 64D90Ch
		//MOV EBX, DWORD PTR DS : [7912A0]
		MOV EBX, DWORD PTR DS : [6645C4h]
		MOV EAX, DWORD PTR DS : [EBX + 1B0h]
		MOV ECX, DWORD PTR DS : [EAX + 4h]
		TEST ECX, ECX
		JE short _007CA850
		MOV EAX, DWORD PTR DS : [ECX]
		SHR EAX, 4h
		AND AL, 1h
		//MOV BYTE PTR DS : [EBX + 9D8h] , AL
		MOV BYTE PTR DS : [EBX + 9D0h] , AL
		_007CA850 :
		PUSH 64D90Ch; ASCII "Status Screen"
			JMP _005B55C1
	}
}

void FixRecordRestoredGameBugHookAOK20()
{
	//005B812A  |> 8B8D B0010000  MOV ECX,DWORD PTR SS:[EBP+1B0]
	InjectHook((void*)0x05B812A, FixRecordRestoredGame005B812A,PATCH_JUMP);
	//005B55BC | . 68 0CD96400    PUSH empires2.0064D90C;  ASCII "Status Screen"
	InjectHook((void*)0x05B55BC, FixRecordRestoredGame005B55BC, PATCH_JUMP);

	//005B921A | . 83FE 09        CMP ESI, 9
	//	005B921D | . ^ 7C E9          JL SHORT empires2.005B9208




}
 
//004E2CD0 / $ 51             PUSH ECX
//004E2CD1 | . 53             PUSH EBX
//004E2CD2 | . 55             PUSH EBP
//004E2CD3 | . 894C24 08      MOV DWORD PTR SS : [ESP + 8] , ECX
//004E2CD7 | . 56             PUSH ESI
//004E2CD8 | . 8B0D C4456600  MOV ECX, DWORD PTR DS : [6645C4]
//004E2CDE | . 57             PUSH EDI
//004E2CDF | .E8 5CCBF3FF    CALL empires2.0041F840




//004E2CD0  /$ 51             PUSH ECX
DWORD _2_0041F840 = 0x041F840;
DWORD _0058E080 = 0x058E080;
void __declspec(naked)  antiDelete004E2CD0()
{
	__asm {
		PUSH ECX
		PUSH EBX
		PUSH EBP
		MOV DWORD PTR SS : [ESP + 8h] , ECX
		PUSH ESI
		MOV ECX, DWORD PTR DS : [6645C4h]
		PUSH EDI
		CALL _2_0041F840
		MOV EDI, EAX
		XOR EBX, EBX
		LEA EBP, DWORD PTR DS : [EDI + 1A8h]
		_004E2CEE :
		MOV EAX, DWORD PTR DS : [EDI + 24Ch]
		TEST EAX, EAX
		JLE short _004E2D6F
		MOV ESI, DWORD PTR SS : [EBP]
		TEST ESI, ESI
		JE short _004E2D4D
		MOV ECX, DWORD PTR DS : [ESI + 0Ch]
		CMP ECX, EDI
		JE short _004E2D34
		CMP BYTE PTR DS : [ECX + 0A2h] , 2h
		JNZ short _004E2D4D
		MOV EDX, DWORD PTR DS : [EDI + 9Ch]
		MOV EAX, DWORD PTR DS : [ECX]
		PUSH EDX
		CALL DWORD PTR DS : [EAX + 1Ch]
		TEST EAX, EAX
		JE short _004E2D4D
		MOV ECX, DWORD PTR DS : [ESI + 0Ch]
		MOV EAX, DWORD PTR DS : [EDI]
		MOV EDX, DWORD PTR DS : [ECX + 9Ch]
		MOV ECX, EDI
		PUSH EDX
		CALL DWORD PTR DS : [EAX + 1Ch]
		TEST EAX, EAX
		//JMP SHORT empires2.004E2D56
		JE short _004E2D4D
		_004E2D34 :
		MOV EAX, DWORD PTR DS : [ESI + 8h]
			MOV AX, WORD PTR DS : [EAX + 16h]
			CMP AX, 3Ah
			JE short _004E2D4D
			CMP AX, 2Ah
			JE short _004E2D4D
			CMP AX, 1h
			JNZ short _004E2D5C
			_004E2D4D :
		INC EBX
			ADD EBP, 4h
			CMP EBX, 28h
			JL short _004E2CEE
			POP EDI
			POP ESI
			POP EBP
			POP EBX
			POP ECX
			RETN
			_004E2D5C :
		MOV ECX, DWORD PTR SS : [ESP + 10h]
			PUSH ESI
			MOV EDX, DWORD PTR DS : [ECX + 1200h]
			MOV ECX, DWORD PTR DS : [EDX + 68h]
			CALL _0058E080
			_004E2D6F :
		POP EDI
			POP ESI
			POP EBP
			POP EBX
			POP ECX
			RETN


	}
}

DWORD  _antiDelete004E2CD0 = (DWORD)antiDelete004E2CD0;
//anti load uberhack delete unit for play who use the patch
void antiDeleteHookAOK20()
{

	//004DD2BD   . E8 0E5A0000    CALL empires2.004E2CD0
	setHookCall((void*)0x04DD2BD, (void*)_antiDelete004E2CD0);
	//004DE297  |. E8 344A0000    CALL empires2.004E2CD0
	setHookCall((void*)0x04DE297, (void*)_antiDelete004E2CD0);
	//004DE7F6  |. E8 D5440000    CALL empires2.004E2CD0
	setHookCall((void*)0x04DE7F6, (void*)_antiDelete004E2CD0);

}
void gamedata20c()
{
	//0065D400  67 61 6D 65 64 61 74 61 32 30 63 2E 64 72 73 00  gamedata20c.drs.
	BYTE __0065D400[16] = {0x67,0x61,0x6D,0x65,0x64,0x61,0x74,0x61,0x32,0x30,0x63,0x2E,0x64,0x72,0x73,0x00};
	writeData(0x065D400, __0065D400,16);

}

//// Fix overwrite recording


DWORD aok20_005FCE14 = 0x05FCE14;
DWORD aok20_005B9341 = 0x05B9341 ;
void __declspec(naked)  Aok20_FixOverwriteRecording1()
{
	__asm {
		//CMP BYTE PTR DS : [ESI + 9D8h] , 0h
		CMP BYTE PTR DS : [ESI + 9D0h] , 0h
		JNZ short _007E800E
		ADD DWORD PTR SS : [ESP + 4h] , 5h
		_007E800E:
		CALL aok20_005FCE14
		JMP aok20_005B9341
	}
}
//005CD4BA  |. E8 F142E5FF    CALL empires2.004217B0

void __declspec(naked)  Aok20_FixOverwriteRecording2()
{
	__asm {
			XOR EAX,EAX
			//007E8052   8A81 B1090000    MOV AL,BYTE PTR DS:[ECX+9B1]
			MOV AL, BYTE PTR DS : [ECX + 9A9h]
			MOV EDX,DWORD PTR DS:[ECX]
			TEST EAX,EAX
			JE short _007E8061
			CALL DWORD PTR DS:[EDX+30h]
			_007E8061:
			RETN
	}
}
 //005CE10C  |. 68 2C080000    PUSH 82C
DWORD aok20_005FE04F = 0x05FE04F;
DWORD aok20_005CE111 = 0x05CE111 ;
void __declspec(naked)  Aok20_FixOverwriteRecording3()
{
	__asm {
		//MOV EDX, DWORD PTR DS : [791200]
		MOV EDX, DWORD PTR DS : [664520h]
		//MOV ECX, DWORD PTR DS : [EDX + 1614h]
		MOV ECX, DWORD PTR DS : [EDX + 1610h]
		CMP DWORD PTR DS : [ECX] , 0h
		JLE short _007E80BA
		//MOV EDX, DWORD PTR DS : [7912A0]
		MOV EDX, DWORD PTR DS : [6645C4h]
		SUB EAX, 0Ch
		MOV EDI, DWORD PTR DS : [EDX + 54h]
		PUSH 83Ch
		//MOV DWORD PTR SS : [ESP + 93Ch] , EDI
		MOV DWORD PTR SS : [ESP + 8CCh] , EDI
		MOV DWORD PTR DS : [EAX] , 1h
		MOV DWORD PTR DS : [EAX + 4h] , 830h
		MOV DWORD PTR DS : [EAX + 8h] , 0FFh
		MOV EDX, DWORD PTR DS : [ECX + 8h]
		PUSH EAX
		PUSH EDX
		CALL aok20_005FE04F//age2_x1_.006144E1
		ADD ESP, 0Ch
		_007E80BA:
		MOV ECX, DWORD PTR DS : [EBX + 68h]
		//LEA EAX, DWORD PTR SS : [ESP + 114h]
		LEA EAX, DWORD PTR SS : [ESP + 0A4h]
		PUSH 82Ch
		JMP aok20_005CE111


	}
}

DWORD aok20_0049F770 = 0x049F770;
DWORD aok20_005BC98E = 0x05BC98E;
DWORD aok20_005B55BC = 0x05B55BC;
void __declspec(naked)  Aok20_FixOverwriteRecording4()
{
	__asm {
		CALL aok20_0049F770//age2_x1_.00560320
		//MOV ECX, DWORD PTR DS : [791200]
		MOV ECX, DWORD PTR DS : [664520h]
		AND ECX, ECX
		JE short _007E80E4
		CALL aok20_005BC98E//age2_x1_.005D13E0
		_007E80E4:
		JMP aok20_005B55BC
	}
}

//0044D460   . 64:A1 00000000 MOV EAX,DWORD PTR FS:[0]
//005BA080  /$ 6A FF          PUSH -1
DWORD aok20_00505C60 = 0x0505C60;
void __declspec(naked)  Aok20_FixOverwriteRecording5()
{
	__asm {
			//MOV DWORD PTR DS:[ESI+9E0],0
			MOV DWORD PTR DS : [ESI + 9DCh] , 0
			JMP aok20_00505C60//age2_x1_.004ED650
	}
}
BYTE AOK20_7A52DC;
DWORD AOK20_004DBD22 = 0x04DBD22;
void __declspec(naked)  Aok20_FixOverwriteRecording6()
{
	__asm {
	XOR EAX, EAX
	CMP AL, AOK20_7A52DC// BYTE PTR DS : [7A52DC]
	SETNE AL
	//MOV ECX, DWORD PTR DS : [ESI + 11C0]
	MOV ECX, DWORD PTR DS : [ESI + 11A8h]
	ADD EAX, 2338h
	MOV EDX, DWORD PTR DS : [ECX]
	PUSH EAX
	CALL DWORD PTR DS : [EDX + 0F8h]
	JMP AOK20_004DBD22// age2_x1_.0051BB96


	}
}


void  FixOverwriteRecording()
{
	InjectHook((void*)0x05B933C, Aok20_FixOverwriteRecording1,PATCH_JUMP);
	InjectHook((void*)0x05CD4BA, Aok20_FixOverwriteRecording2,PATCH_CALL);
	InjectHook((void*)0x05CD509, Aok20_FixOverwriteRecording2,PATCH_CALL);//same
	InjectHook((void*)0x05CE10C, Aok20_FixOverwriteRecording3,PATCH_JUMP);
	InjectHook((void*)0x05B55B7, Aok20_FixOverwriteRecording4,PATCH_JUMP);
	InjectHook((void*)0x05BA104, Aok20_FixOverwriteRecording5,PATCH_CALL);
	//005CA3D1   . 8D8E 14020000  LEA ECX,DWORD PTR DS:[ESI+214]
	Patch(0x05CA3D1+2, (BYTE)0x16);
	//005CA3E3   . 8D96 15020000  LEA EDX,DWORD PTR DS:[ESI+215]
	Patch(0x05CA3E3 + 2, (BYTE)0x16);
	//004DBDEB  |. 74 4B          |JE SHORT empires2.004DBE38
	Patch(0x04DBDEB, (BYTE)0xEB);
	//004DBD0F   8B8E A8110000    |MOV ECX,DWORD PTR DS:[ESI+11A8]
	InjectHook((void*)0x04DBD0F, Aok20_FixOverwriteRecording6, PATCH_JUMP);
}
//// Fix default recording

void  __declspec(naked) aok20_FixDefaultRecording1()
{
	__asm
	{
		//MOV EDX, DWORD PTR DS : [ECX + 424h]
		MOV ECX, DWORD PTR DS : [ECX + 41Ch]
		XOR EAX, EAX
		//MOV DWORD PTR DS : [EDX + 2ACh] , EAX
		MOV DWORD PTR DS : [EDX + 2A4h] , EAX
		//MOV AL, BYTE PTR DS : [ECX + 9B2h]
		MOV AL, BYTE PTR DS : [ESI + 9AAh]
		TEST EAX, EAX
		JNZ short _007E803B
		MOV AL, 1h
		RETN
		_007E803B:
		//MOV AL, BYTE PTR DS : [ECX + 9D8h]
		MOV AL, BYTE PTR DS : [ECX + 9D0h]
		RETN
	}
}
//005B924A  |. E8 D185E6FF    CALL empires2.00421820
void  aok20_FixDefaultRecording()
{
	InjectHook((void*)0x04DBD0F, aok20_FixDefaultRecording1, PATCH_CALL);
	InjectHook((void*)0x05B9371, aok20_FixDefaultRecording1, PATCH_CALL);
	InjectHook((void*)0x05B93AF , aok20_FixDefaultRecording1, PATCH_CALL);
	InjectHook((void*)0x05B9402, aok20_FixDefaultRecording1, PATCH_CALL);
}

//0041C938  |. E8 A3710500    CALL empires2.00473AE0
//language dll id (replace id?? here )
//hard code some language ID
char aok20_FusinFOrmation[] = "fusion formation";
DWORD Aok20_0041C93D = 0x041C93D;
DWORD Aok20_00473AE0 = 0x0473AE0;
DWORD Aok20_004A2160 = 0x04A2160;

//2A65, "9 DE_Hillfort"
//2A66, "8 DE_Hideout"
//2A67, "7 DE_Cross"
//2A68, "6 DE_AcropolisAok"
//2A69, "5 BF LORD"
//2A6A, "4 Nomad"
//2A6B, "3 Green Arabia"
//2A6C, "21 ForestNothing"
//2A6D, "20 MICHI"
//2A6E, "2 ARENA"
//2A6F, "19 ES_The_Unknown"
//2A70, "18 SHERWOOD FOREST"
//2A71, "17 CDC_El_Dorado"
//2A72, "16 CDC_Arina"
//2A73, "15 BO_Scandinavia"
//2A74, "14 HC_Chaos_Pit"
//2A75, "13 NAC_Land_Madness"
//2A76, "12 DE_Golden_Pit"
//2A77, "11 DE_Valley"
//2A78, "10 DE_Lombardia"
//2A79, "1 !! G  A voobly"
//2A7A, "0 Kilimanjaro"
char _2A65[]= "9 DE_Hillfort"	  ;
char _2A66[]= "8 DE_Hideout"		  ;
char _2A67[]= "7 DE_Cross"		  ;
char _2A68[]= "6 DE_AcropolisAok"  ;
char _2A69[]= "5 BF LORD"		  ;
char _2A6A[]= "4 Nomad"			  ;
char _2A6B[]= "3 Green Arabia"	  ;
char _2A6C[]= "21 ForestNothing"	  ;
char _2A6D[]= "20 MICHI"			  ;
char _2A6E[]= "2 ARENA"			  ;
char _2A6F[]= "19 ES_The_Unknown"  ;
char _2A70[]= "18 SHERWOOD FOREST" ;
char _2A71[]= "17 CDC_El_Dorado"	  ;
char _2A72[]= "16 CDC_Arina"		  ;
char _2A73[]= "15 BO_Scandinavia"  ;
char _2A74[]= "14 HC_Chaos_Pit"	  ;
char _2A75[]= "13 NAC_Land_Madness";
char _2A76[]= "12 DE_Golden_Pit"	  ;
char _2A77[]= "11 DE_Valley"		  ;
char _2A78[]= "10 DE_Lombardia"	  ;
char _2A79[]= "1 !! G  A voobly"	  ;
char _2A7A[]= "0 Kilimanjaro"	  ;
char _9C58[]="Triangle Formation" ;
char _9C59[]="Fusion Formation"   ;
void __declspec(naked) languageIdAok20()
{
	__asm
	{
		//CMP EAX, 2A6Ah// 9C59h
		//JE _fusionFormation

		cmp eax,2A65h
		JE __2A65
		cmp eax,2A66h
		JE __2A66
		cmp eax,2A67h
		JE __2A67
		cmp eax,2A68h
		JE __2A68
		cmp eax,2A69h
		JE __2A69
		cmp eax,2A6Ah
		JE __2A6A
		cmp eax,2A6Bh
		JE	__2A6B
		cmp eax,2A6Ch
		JE __2A6C
		cmp eax,2A6Dh
		JE __2A6D
		cmp eax,2A6Eh
		JE __2A6E
		cmp eax,2A6Fh
		JE __2A6F
		cmp eax,2A70h
		JE __2A70
		cmp eax,2A71h
		JE __2A71
		cmp eax,2A72h
		JE __2A72
		cmp eax,2A73h
		JE __2A73
		cmp eax,2A74h
		JE __2A74
		cmp eax,2A75h
		JE __2A75
		cmp eax,2A76h
		JE  __2A75
		cmp eax,2A77h
		JE  __2A77
		cmp eax,2A78h
		JE  __2A78
		cmp eax,2A79h
		JE  __2A79
		cmp eax,2A7Ah
		JE  __2A7A
		cmp eax, 9C58h
		JE __9C58
		cmp eax, 9C59h
		JE __9C59

		CALL Aok20_00473AE0
		JMP Aok20_004A2160
		//_fusionFormation:
		//CALL Aok20_00473AE0
		////MOV ESI, offset aok20_FusinFOrmation
		////LEA ESI, DWORD PTR DS : [aok20_FusinFOrmation]

		//MOV EDI, ESI
		//LEA ESI, DWORD PTR DS : [aok20_FusinFOrmation]
		//JMP continueproc
		__2A65 :
		CALL Aok20_00473AE0
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A65]
		JMP continueproc
		__2A66 : 
		CALL Aok20_00473AE0
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A66]
		JMP continueproc
		__2A67 :
		CALL Aok20_00473AE0
		MOV EDI, ESI
		LEA ESI, DWORD PTR DS : [_2A67]
		JMP continueproc
		__2A68 : 
		CALL Aok20_00473AE0
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A68]
		JMP continueproc
		__2A69 :
		CALL Aok20_00473AE0  
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A69]
		JMP continueproc
		__2A6A :
		CALL Aok20_00473AE0 
		MOV EDI, ESI 
		LEA ESI, DWORD PTR DS : [_2A6A]
		JMP continueproc
		__2A6B : 
		CALL Aok20_00473AE0 
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A6B]
		JMP continueproc
		__2A6C :
		CALL Aok20_00473AE0 
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A6C]
		JMP continueproc
		__2A6D : 
		CALL Aok20_00473AE0 
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A6D]
		JMP continueproc
		__2A6E :
		CALL Aok20_00473AE0 
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A6E]
		JMP continueproc
		__2A6F : 
		CALL Aok20_00473AE0  
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A6F]
		JMP continueproc
		__2A70 : 
		CALL Aok20_00473AE0 
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A70]
		JMP continueproc
		__2A71 : 
		CALL Aok20_00473AE0
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A71]
		JMP continueproc
		__2A72 :
		CALL Aok20_00473AE0 
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A72]
		JMP continueproc
		__2A73 :
		CALL Aok20_00473AE0 
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A73]
		JMP continueproc
		__2A74 :
		CALL Aok20_00473AE0 
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A74]
		JMP continueproc
		__2A75 :
		CALL Aok20_00473AE0 
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A75]
		JMP continueproc
		__2A76 :
		CALL Aok20_00473AE0
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A76]
		JMP continueproc
		__2A77 :
		CALL Aok20_00473AE0
		MOV EDI, ESI 
		LEA ESI, DWORD PTR DS : [_2A77]
		JMP continueproc
		__2A78 :
		CALL Aok20_00473AE0 
		MOV EDI, ESI 
		LEA ESI, DWORD PTR DS : [_2A78]
		JMP continueproc
		__2A79 : 
		CALL Aok20_00473AE0 
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A79]
		JMP continueproc
		__2A7A :
		CALL Aok20_00473AE0  
		MOV EDI, ESI  
		LEA ESI, DWORD PTR DS : [_2A7A]
		JMP continueproc
		__9C58:
		CALL Aok20_00473AE0
		MOV EDI, ESI
		LEA ESI, DWORD PTR DS : [_9C58]
		JMP continueproc
		__9C59:
		CALL Aok20_00473AE0
		MOV EDI, ESI
		LEA ESI, DWORD PTR DS : [_9C59]
		JMP continueproc

		continueproc:
		MOV ECX, 5h//size of string?
		REP MOVS DWORD PTR ES : [ESI] , DWORD PTR DS : [EDI]
		MOV EAX, 1h
		JMP Aok20_004A2160
	}
}
//004BD298  |. 8D4C24 08        LEA ECX,DWORD PTR SS:[ESP+8]


//0041C924  |. 8B0D 10456600    MOV ECX,DWORD PTR DS:[664510]                                ;  language.10000000
//004A2151 | . 8B15 10456600    MOV EDX, DWORD PTR DS : [664510] ;  language.10000000
void Aok20_LoadLanguageId()
{
	//InjectHook((void*)0x041C938, languageIdAok20,PATCH_JUMP);
	InjectHook((void*)0x04A215B, languageIdAok20,PATCH_JUMP);
}

void Aoc20PatchHook(bool wideScreenCentred, bool windowed)
{
	widescreenAOk20(wideScreenCentred);
	nocdAok20();
	version();
	windowedModAok20(windowed);
	setPortForwardingHook();
	FixRecordingExploreStateBug();
	miniMapColorAOK20();
	AddNewBittonFormationAOK20();
	AddRmsAOK20();
	FixLagHookAOK20();
	chatchatColorFixeAOK20();
	popHookAOK20();
	aok20AddAColor();
	FixRecordRestoredGameBugHookAOK20();
	antiDeleteHookAOK20();
	gamedata20c();
	FixOverwriteRecording();
	aok20_FixDefaultRecording();
	Aok20_LoadLanguageId();
}