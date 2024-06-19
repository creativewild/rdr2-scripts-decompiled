#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	Hash hLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	BOOL bLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	var uLocal_36 = 1;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = -1;
	var uLocal_47 = 1;
	var uLocal_48 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xCBC46615 ^0xA1B2D050
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	hLocal_20 = joaat("s_ufo01x");
	fLocal_27 = 15f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1();

	while (true)
	{
		switch (iLocal_14)
		{
			case 0:
				iLocal_14 = 1;
				break;
		
			case 1:
				if (func_2())
					iLocal_14 = 2;
				break;
		
			case 2:
				func_1();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x74 Hash - 0xCB64A438 ^0x5914CEDB
{
	if (bLocal_31)
		return;

	OBJECT::DELETE_OBJECT(&(uLocal_36[0 /*12*/].f_8));
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2() // Position - 0x93 Hash - 0x7388D222 ^0xD46B8D10
{
	if (func_3() != -1)
		return true;

	if (func_4(128, false, true))
		return true;

	switch (iLocal_15)
	{
		case 0:
			if (func_6(func_5()))
				return true;
		
			STREAMING::REQUEST_MODEL(hLocal_20, false);
			uLocal_36[0 /*12*/].f_7 = hLocal_20;
			uLocal_36[0 /*12*/] = { func_7() };
			uLocal_36[0 /*12*/].f_10 = 0;
			iLocal_15 = 1;
			break;
	
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(hLocal_20))
				iLocal_15 = 2;
			break;
	
		case 2:
			func_8(0f, 0f, 0f, &uLocal_36, 0, false, 0, -1, false);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_36[0 /*12*/].f_8, true);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_36[0 /*12*/].f_8, false);
			iLocal_15 = 3;
			break;
	
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT())
				return false;
		
			if (func_9())
			{
				iLocal_15 = 4;
				return true;
			}
			break;
	
		case 4:
			return true;
	}

	return false;
}

BOOL func_3() // Position - 0x174 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_4(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x182 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_10())
			return true;
	
		if (Global_1058888.f_3 && !Global_1572887.f_8)
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1898164.f_163;
		else
			return Global_1898164.f_164;
	}

	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		num = func_11(Global_1898164.f_1[0 /*5*/]);
	
		if (func_12(num) && func_13(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_14(Global_1898164.f_1[0 /*5*/]))
		return true;

	if (Global_1935630 && 40959 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1898438)
			return true;

	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
	
		case 1:
			return iParam0 & 1 == 0;
	
		case 2:
			return iParam0 & 16 == 0;
	
		case 3:
			return iParam0 & 128 == 0;
	
		case 4:
			return iParam0 & 2 == 0;
	
		case 5:
			return iParam0 & 32 == 0;
	
		case 6:
			return iParam0 & 4 == 0;
	
		case 8:
			return iParam0 & 8 == 0;
	
		case 9:
			return iParam0 & 64 == 0;
	
		case 10:
			return iParam0 & 512 == 0;
	
		case 11:
			return iParam0 & 256 == 0;
	
		default:
		
	}

	return false;
}

int func_5() // Position - 0x386 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return 0;
}

BOOL func_6(int iParam0) // Position - 0x38F Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_15(iParam0, 2);
}

Vector3 func_7() // Position - 0x39E Hash - 0x21158019 ^0x21158019
{
	return -1947.0764f, -128.2895f, 500f;
}

int func_8(float fParam0, float fParam1, float fParam2, var uParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0x3B5 Hash - 0xAF0AE2FF ^0xAF0AE2FF
{
	int i;
	Vector3 vector;
	int num;
	Vector3 offsetFromEntityInWorldCoords;
	int num2;
	var entityCoords;

	num = 1;

	if (iParam7 < 0 || iParam7 >= *uParam3)
		iParam7 = *uParam3 - 1;

	for (i = iParam6; i <= iParam7; i = i + 1)
	{
		if (bParam8 && ENTITY::DOES_ENTITY_EXIST(uParam3->[i /*12*/].f_8))
		{
		}
		else if (uParam3->[i /*12*/].f_7 != 0 && !func_16(uParam3->[i /*12*/].f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam3->[i /*12*/].f_7))
			{
				num = 0;
			}
			else
			{
				if (uParam3->[i /*12*/].f_9 != -1)
				{
					num2 = uParam3->[i /*12*/].f_9;
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam3->[num2 /*12*/].f_8, uParam3->[i /*12*/]) };
				
					if (func_16(uParam3->[i /*12*/].f_11, 64))
						uParam3->[i /*12*/].f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam3->[i /*12*/].f_7, offsetFromEntityInWorldCoords, true, true, false, false);
					else
						uParam3->[i /*12*/].f_8 = OBJECT::CREATE_OBJECT(uParam3->[i /*12*/].f_7, offsetFromEntityInWorldCoords, true, true, false, false, true);
				
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam3->[i /*12*/].f_8, uParam3->[num2 /*12*/].f_8, 0, uParam3->[i /*12*/], uParam3->[i /*12*/].f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_16(uParam3->[i /*12*/].f_11, 8))
						offsetFromEntityInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(fParam0, iParam4, uParam3->[i /*12*/]) };
					else
						offsetFromEntityInWorldCoords = { uParam3->[i /*12*/] };
				
					if (!func_16(uParam3->[i /*12*/].f_11, 128))
						func_17(&offsetFromEntityInWorldCoords, uParam3->[i /*12*/].f_10);
				
					if (func_16(uParam3->[i /*12*/].f_11, 64))
						uParam3->[i /*12*/].f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam3->[i /*12*/].f_7, offsetFromEntityInWorldCoords, true, true, false, false);
					else
						uParam3->[i /*12*/].f_8 = OBJECT::CREATE_OBJECT(uParam3->[i /*12*/].f_7, offsetFromEntityInWorldCoords, true, true, false, false, true);
				
					if (_IS_NULL_VECTOR(uParam3->[i /*12*/].f_4))
						vector = { 0f, 0f, uParam3->[i /*12*/].f_3 };
					else
						vector = { uParam3->[i /*12*/].f_4 };
				
					if (func_16(uParam3->[i /*12*/].f_11, 4))
						vector.f_2 = func_19(vector.f_2 + iParam4);
				
					ENTITY::SET_ENTITY_ROTATION(uParam3->[i /*12*/].f_8, vector, 2, true);
				
					if (!func_16(uParam3->[i /*12*/].f_11, 128))
						if (uParam3->[i /*12*/].f_10)
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uParam3->[i /*12*/].f_8, false);
				}
			
				if (func_16(uParam3->[i /*12*/].f_11, 2))
					ENTITY::FREEZE_ENTITY_POSITION(uParam3->[i /*12*/].f_8, true);
			
				if (func_16(uParam3->[i /*12*/].f_11, 32))
					ENTITY::SET_ENTITY_VISIBLE(uParam3->[i /*12*/].f_8, false);
			
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam3->[i /*12*/].f_8, true);
					PHYSICS::ACTIVATE_PHYSICS(uParam3->[i /*12*/].f_8);
				}
			
				ENTITY::_SET_ENTITY_FADE_IN(uParam3->[i /*12*/].f_8);
				entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam3->[i /*12*/].f_8, true, false) };
			}
		}
	}

	return num;
}

BOOL func_9() // Position - 0x694 Hash - 0x2BDE2A09 ^0xF91BE04C
{
	func_20();

	switch (iLocal_16)
	{
		case 0:
			if (func_21() && func_22(2048) && func_24(func_23(), true) < 14f)
			{
				Global_40.f_9020.f_7 = func_25();
				bLocal_31 = true;
				ENTITY::SET_ENTITY_VISIBLE(uLocal_36[0 /*12*/].f_8, true);
				fLocal_28 = -1.5f;
				iLocal_16 = 1;
			}
			break;
	
		case 1:
			if (356.9597f + 25f > uLocal_32.f_2)
			{
				fLocal_27 = fLocal_27 - 0.75f;
				fLocal_29 = 0.1f;
				iLocal_16 = 2;
			}
			break;
	
		case 2:
			if (fLocal_27 > 0.4f)
				fLocal_27 = fLocal_27 - 0.075f;
		
			if (fLocal_28 > -1f * 0.25f)
				fLocal_29 = 0f;
		
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_32, func_26(), true) < 1f)
				iLocal_16 = 3;
			break;
	
		case 3:
			func_27();
		
			if (fLocal_27 > 0.4f)
				fLocal_27 = fLocal_27 - 0.075f;
		
			if (!func_28(&uLocal_17))
			{
				if (func_29(uLocal_36[0 /*12*/].f_8, &uLocal_21, &uLocal_26, &uLocal_30, 1f, 250f, 0, false, 1092616192, 1))
				{
					func_30(func_5());
					func_31(&uLocal_17);
					iLocal_16 = 4;
				}
				else if (!func_22(2048))
				{
					iLocal_16 = 4;
				}
			}
			break;
	
		case 4:
			func_27();
		
			if (func_32(&uLocal_17, 12f))
				if (fLocal_27 < 15f)
					fLocal_27 = fLocal_27 + 0.075f;
		
			if (fLocal_27 >= 15f)
			{
				fLocal_29 = 0.1f;
				iLocal_16 = 5;
			}
			break;
	
		case 5:
			if (fLocal_28 >= 3.333f)
				fLocal_29 = 0f;
		
			if (func_33(uLocal_36[0 /*12*/].f_8, true, true) > 1000f)
			{
				bLocal_31 = false;
				iLocal_16 = 6;
			}
			break;
	
		case 6:
			return true;
	}

	return false;
}

BOOL func_10() // Position - 0x866 Hash - 0x2C13EB06 ^0x38F12C8A
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_4)
		return true;

	if (Global_524298)
		return true;

	if (Global_1048577)
		return true;

	if (Global_1051043 == -1 && Global_1572887.f_6 & true != 0)
		return true;

	return false;
}

int func_11(int iParam0) // Position - 0x8B9 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_14(iParam0))
		return -1;

	return func_35(func_34(iParam0));
}

BOOL func_12(int iParam0) // Position - 0x8D9 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_13(int iParam0, int iParam1) // Position - 0x8EF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_14(int iParam0) // Position - 0x8FE Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_15(int iParam0, BOOL bParam1) // Position - 0x931 Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_36(iParam0))
		return false;

	return Global_40.f_9020[iParam0] && bParam1 != false;
}

BOOL func_16(int iParam0, int iParam1) // Position - 0x956 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_17(var uParam0, BOOL bParam1) // Position - 0x965 Hash - 0x48E1E2DA ^0xDFE370FB
{
	var unk;

	unk = { *uParam0 };
	unk.f_2 = unk.f_2 + 5f;

	if (bParam1)
	{
		if (!func_37(&unk, 50, 10, false))
		{
		}
		else
		{
			*uParam0 = { unk };
		}
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x99D Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

float func_19(float fParam0) // Position - 0x9C7 Hash - 0xAEA651F2 ^0xAEA651F2
{
	float num;

	num = fParam0;

	if (fParam0 < 0f)
		num = num + 360f;
	else if (fParam0 >= 360f)
		num = num - 360f;

	return num;
}

void func_20() // Position - 0x9FE Hash - 0x530B4F9 ^0x844669F0
{
	fLocal_35 = ENTITY::GET_ENTITY_HEADING(uLocal_36[0 /*12*/].f_8);
	fLocal_35 = fLocal_35 + fLocal_27;
	ENTITY::SET_ENTITY_HEADING(uLocal_36[0 /*12*/].f_8, fLocal_35);
	uLocal_32 = { ENTITY::GET_ENTITY_COORDS(uLocal_36[0 /*12*/].f_8, true, false) };
	fLocal_28 = fLocal_28 + fLocal_29;
	uLocal_32.f_2 = uLocal_32.f_2 + fLocal_28;
	ENTITY::SET_ENTITY_COORDS(uLocal_36[0 /*12*/].f_8, uLocal_32, true, false, true, true);
	return;
}

BOOL func_21() // Position - 0xA5D Hash - 0x9EA33C13 ^0x2FCD617C
{
	eStackSize stackSize;
	int num;
	int num2;
	var unk;
	var unk2;
	var unk3;
	int num3;
	int num4;
	int num5;

	stackSize = Global_40.f_9020.f_7;
	num = func_38(stackSize);
	num2 = func_38(func_25());
	func_39(stackSize, &unk, &unk2, &unk3, &num3, &num4, &num5);

	if (!func_40(stackSize) || num == num2 && num3 >= 1 || num4 >= 1 || num5 >= 1)
		return true;

	return false;
}

BOOL func_22(int iParam0) // Position - 0xACA Hash - 0x259E3CFD ^0x259E3CFD
{
	int num;

	if (iParam0 == -1)
		return 1;

	if (iParam0 == 0)
		return 0;

	num = func_41(func_25());

	if (func_42(iParam0, 1))
		if (num >= 6 && num < 12)
			return 1;

	if (func_42(iParam0, 2))
		if (num >= 12 && num < 18)
			return 1;

	if (func_42(iParam0, 4096))
		if (num >= 11 && num < 14)
			return 1;

	if (func_42(iParam0, 4))
		if (num >= 18 && num < 24)
			return 1;

	if (func_42(iParam0, 8))
		if (num >= 0 && num < 6)
			return 1;

	if (func_42(iParam0, 16))
		if (num >= 20 || num < 7)
			return 1;

	if (func_42(iParam0, 1024))
		if (num >= 5 && num < 12)
			return 1;

	if (func_42(iParam0, 32))
		if (num >= 5 && num < 22)
			return 1;

	if (func_42(iParam0, 64))
		if (num >= 6 && num < 20)
			return 1;

	if (func_42(iParam0, 128))
		if (num >= 21 || num < 5)
			return 1;

	if (func_42(iParam0, 256))
		if (num >= 22 && num < 24)
			return 1;

	if (func_42(iParam0, 512))
		if (num >= 0 && num < 5)
			return 1;

	if (func_42(iParam0, 8192))
		if (num >= 6 && num < 20)
			return 1;

	if (func_42(iParam0, 2048))
		if (num >= 1 && num < 3)
			return 1;

	if (func_42(iParam0, 16384))
		if (num >= 6 && num < 24)
			return 1;

	if (func_42(iParam0, 32768))
		if (num >= 21 || num < 6)
			return 1;

	if (func_42(iParam0, 65536))
		if (num >= 18 && num < 19)
			return 1;

	return 0;
}

Vector3 func_23() // Position - 0xD1E Hash - 0x21158019 ^0x21158019
{
	return -1982.8f, 22.3f, 330.8452f;
}

float func_24(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0xD35 Hash - 0xBEF31EF9 ^0xBEF31EF9
{
	return func_43(Global_35, uParam0, bParam3);
}

eStackSize func_25() // Position - 0xD4A Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

Vector3 func_26() // Position - 0xD56 Hash - 0x21158019 ^0x21158019
{
	return -1947.0764f, -128.2895f, 356.9597f;
}

void func_27() // Position - 0xD6D Hash - 0xF6F1844 ^0xD0FCF7DF
{
	if (356.9597f + 0.05f < uLocal_32.f_2)
		if (fLocal_28 <= -1f * 0.25f)
			fLocal_29 = 0f;
		else
			fLocal_29 = -1f * 0.005f;
	else if (356.9597f - 0.05f > uLocal_32.f_2)
		if (fLocal_28 >= 0.25f)
			fLocal_29 = 0f;
		else
			fLocal_29 = 0.005f;

	return;
}

BOOL func_28(var uParam0) // Position - 0xDD2 Hash - 0x5001E582 ^0x5001E582
{
	return func_44(*uParam0, 1);
}

BOOL func_29(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0xDE2 Hash - 0xD3E821A ^0x20FB174B
{
	var unk;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		return false;

	if (func_45(PLAYER::PLAYER_PED_ID(), pedParam0, true) < iParam8 * iParam8)
	{
		*uParam2 = 0f;
		return true;
	}

	if (iParam6 > 0f)
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > iParam6)
			return false;

	if (func_46(pedParam0, fParam5))
		if (func_47(unk, pedParam0, uParam1, uParam2, uParam3, fParam4, fParam5, bParam7, iParam9))
			return true;
	else if (!bParam7)
		*uParam2 = 0f;

	return false;
}

void func_30(int iParam0) // Position - 0xE72 Hash - 0xCF51B75C ^0xCF51B75C
{
	func_48(iParam0, 2);
	return;
}

void func_31(var uParam0) // Position - 0xE81 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_49(uParam0, 0f);
	return;
}

BOOL func_32(var uParam0, float fParam1) // Position - 0xE90 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_28(uParam0))
		return false;

	if (func_50(uParam0) > fParam1)
		return true;

	return false;
}

float func_33(Entity eParam0, BOOL bParam1, BOOL bParam2) // Position - 0xEB7 Hash - 0x2753566D ^0x575C60D0
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(eParam0))
		return -1f;

	return func_51(Global_35, eParam0, bParam1, bParam2);
}

BOOL func_34(int iParam0) // Position - 0xEE0 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_35(BOOL bParam0) // Position - 0xF1E Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_36(int iParam0) // Position - 0xF31 Hash - 0x75AD7F8B ^0x75AD7F8B
{
	return iParam0 > -1 && iParam0 < 4;
}

BOOL func_37(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xF46 Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_52(*uParam0, 0f, 0f, 0f))
		return true;

	num = 0;
	flag = false;
	flag2 = false;
	vector = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vector);

	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag)
	{
		if (num < iParam2)
		{
			num = num + 1;
			vector.f_2 = vector.f_2 + (float)iParam1;
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
		}
		else
		{
			flag = true;
		}
	}

	if (flag)
	{
		num = 1;
		vector.f_2 = vector.f_2 - (float)iParam1;
		STREAMING::REQUEST_COLLISION_AT_COORD(vector);
	
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag2)
		{
			if (num < iParam2)
			{
				num = num + 1;
				vector.f_2 = vector.f_2 - (float)iParam1;
				STREAMING::REQUEST_COLLISION_AT_COORD(vector);
			}
			else
			{
				flag2 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = groundZ;
		return true;
	}

	if (flag && flag2)
		return false;

	uParam0->f_2 = groundZ;
	return true;
}

int func_38(eStackSize essParam0) // Position - 0x103D Hash - 0xA5D24CE0 ^0x75A5D92
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (essParam0 == -15 || essParam0 == 0)
		return 0;

	num = func_53(essParam0);

	switch (func_54(essParam0))
	{
		case 0:
			num2 = 11;
			break;
	
		case 1:
			num2 = 12;
			break;
	
		case 2:
			num2 = 1;
			break;
	
		case 3:
			num2 = 2;
			break;
	
		case 4:
			num2 = 3;
			break;
	
		case 5:
			num2 = 4;
			break;
	
		case 6:
			num2 = 5;
			break;
	
		case 7:
			num2 = 6;
			break;
	
		case 8:
			num2 = 7;
			break;
	
		case 9:
			num2 = 8;
			break;
	
		case 10:
			num2 = 9;
			break;
	
		case 11:
			num2 = 10;
			break;
	}

	num3 = func_55(essParam0);
	num4 = num3 % 100;
	num5 = num3 / 100;
	num6 = (num + (((13 * num2) - 1) / 5) + num4 + (num4 / 4) + (num5 / 4)) - (2 * num5);
	num7 = num6 % 7;

	if (num7 < 0)
		num7 = num7 + 7;

	switch (num7)
	{
		case 0:
			num8 = 0;
			break;
	
		case 1:
			num8 = 1;
			break;
	
		case 2:
			num8 = 2;
			break;
	
		case 3:
			num8 = 3;
			break;
	
		case 4:
			num8 = 4;
			break;
	
		case 5:
			num8 = 5;
			break;
	
		case 6:
			num8 = 6;
			break;
	}

	return num8;
}

void func_39(eStackSize essParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x11AB Hash - 0x2BEE335D ^0x2BEE335D
{
	func_56(func_25(), essParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

BOOL func_40(eStackSize essParam0) // Position - 0x11C9 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (essParam0 == -15)
		return false;

	num = func_57(essParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_58(essParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_41(essParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_55(essParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_54(essParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_53(essParam0);

	if (num6 < 1 || num6 > func_59(num5, num4))
		return false;

	return true;
}

int func_41(eStackSize essParam0) // Position - 0x12A5 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

BOOL func_42(int iParam0, int iParam1) // Position - 0x12B8 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

float func_43(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x12C7 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

BOOL func_44(int iParam0, int iParam1) // Position - 0x12EF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

float func_45(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x12FE Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));

	return func_60(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));
}

BOOL func_46(Ped pedParam0, float fParam1) // Position - 0x1355 Hash - 0xB374718F ^0xACE03F4D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (!ENTITY::IS_ENTITY_OCCLUDED(pedParam0) && ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
			if (func_45(PLAYER::PLAYER_PED_ID(), pedParam0, true) < fParam1 * fParam1)
				return true;

	return false;
}

BOOL func_47(var uParam0, var uParam1, var uParam2, Ped pedParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, BOOL bParam9, int iParam10) // Position - 0x1395 Hash - 0x7A24755C ^0x9C42B91A
{
	BOOL flag;
	Ped pedIndexFromEntityIndex;
	float percent;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(pedParam3))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam3);
		
			if (!PED::_IS_PED_VISIBILITY_TRACKED(pedIndexFromEntityIndex))
				PED::REQUEST_PED_VISIBILITY_TRACKING(pedIndexFromEntityIndex);
		
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				percent = func_61(iParam10);
			
				if (percent < 0f)
					if (PED::IS_TRACKED_PED_VISIBLE(pedIndexFromEntityIndex))
						flag = true;
				else if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(pedIndexFromEntityIndex, percent))
					flag = true;
			}
		}
		else
		{
			flag = func_62(uParam4, PLAYER::PLAYER_PED_ID(), pedParam3);
		}
	}
	else
	{
		flag = func_63(uParam4, PLAYER::PLAYER_PED_ID(), uParam0);
	}

	if (flag)
	{
		*uParam6 = 1;
		*uParam5 != 0f;
	
		if (*uParam5 <= 0f)
		{
			*uParam5 = func_64();
		}
		else if (func_64() - *uParam5 > fParam7)
		{
			*uParam5 = 0f;
			return true;
		}
	}
	else if (*uParam4 == 2 && uParam4->f_4)
	{
		if (!bParam9)
			*uParam5 = 0f;
	}
	else
	{
		*uParam6 = 1;
	}

	return false;
}

void func_48(int iParam0, BOOL bParam1) // Position - 0x147D Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_36(iParam0))
		return;

	Global_40.f_9020[iParam0] = Global_40.f_9020[iParam0] || bParam1;
	return;
}

void func_49(var uParam0, float fParam1) // Position - 0x14A9 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_64() - fParam1;
	func_65(uParam0, 1);
	func_66(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

float func_50(var uParam0) // Position - 0x14CF Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_28(uParam0))
		return uParam0->f_1;

	if (func_67(uParam0))
		return uParam0->f_2;

	return func_64() - uParam0->f_1;
}

float func_51(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1504 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(eParam1, false, false), bParam2);
}

BOOL func_52(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x154C Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

int func_53(eStackSize essParam0) // Position - 0x1575 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 17) & 31;
}

int func_54(eStackSize essParam0) // Position - 0x1588 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 22) & 15;
}

int func_55(eStackSize essParam0) // Position - 0x159B Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(essParam0, 26) & 31 * MISC::IS_BIT_SET(essParam0, 31) ? -1 : 1) + 1898;
}

void func_56(eStackSize essParam0, eStackSize essParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x15C0 Hash - 0x38DA000F ^0x38DA000F
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_69(essParam0, essParam1, true))
	{
		num = func_54(essParam1);
		num2 = func_55(essParam0);
		num3 = func_55(essParam0) - func_55(essParam1);
		num4 = func_54(essParam0) - func_54(essParam1);
		num5 = func_53(essParam0) - func_53(essParam1);
		num6 = func_41(essParam0) - func_41(essParam1);
		num7 = func_58(essParam0) - func_58(essParam1);
		num8 = func_57(essParam0) - func_57(essParam1);
	}
	else
	{
		num = func_54(essParam0);
		num2 = func_55(essParam1);
		num3 = func_55(essParam1) - func_55(essParam0);
		num4 = func_54(essParam1) - func_54(essParam0);
		num5 = func_53(essParam1) - func_53(essParam0);
		num6 = func_41(essParam1) - func_41(essParam0);
		num7 = func_58(essParam1) - func_58(essParam0);
		num8 = func_57(essParam1) - func_57(essParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_59(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_70(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

int func_57(eStackSize essParam0) // Position - 0x17C2 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 0) & 63;
}

int func_58(eStackSize essParam0) // Position - 0x17D4 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 6) & 63;
}

int func_59(int iParam0, int iParam1) // Position - 0x17E6 Hash - 0x893AC59E ^0x893AC59E
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		default:
		
	}

	return 30;
}

float func_60(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1880 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

float func_61(int iParam0) // Position - 0x189E Hash - 0x95A17D38 ^0x95A17D38
{
	switch (iParam0)
	{
		case 0:
			return -1f;
	
		case 1:
			return 30f;
	
		case 2:
			return 80f;
	
		default:
		
	}

	return -1f;
}

BOOL func_62(var uParam0, Ped pedParam1, Ped pedParam2) // Position - 0x18D5 Hash - 0x1C365E8 ^0x2292A173
{
	var unk;
	var unk4;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return 0;

	unk = { func_71(pedParam1) };
	unk4 = { func_71(pedParam2) };
	return func_72(uParam0, unk, unk4, pedParam2);
}

BOOL func_63(var uParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0x191D Hash - 0x13C5D169 ^0xD20B8715
{
	var unk;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return 0;

	unk = { func_71(pedParam1) };
	return func_72(uParam0, unk, uParam2, 0);
}

float func_64() // Position - 0x194B Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_65(var uParam0, int iParam1) // Position - 0x197D Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_66(var uParam0, int iParam1) // Position - 0x198E Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_67(var uParam0) // Position - 0x19A3 Hash - 0x39705408 ^0x39705408
{
	return func_44(*uParam0, 2);
}

var func_68(BOOL bParam0, var uParam1, var uParam2) // Position - 0x19B3 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_69(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x19CA Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_40(essParam1) || !func_40(essParam0))
			return true;

	return essParam0 > essParam1;
}

float func_70(float fParam0, float fParam1, float fParam2) // Position - 0x19F7 Hash - 0xDB08F514 ^0x78C0BF6F
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

Vector3 func_71(Ped pedParam0) // Position - 0x1A39 Hash - 0x8BC4D2C5 ^0xCBC3320A
{
	float pedBoneCoords;
	float offsetFromEntityInWorldCoords;
	Vector3 offsetFromEntityInWorldCoords2;
	Ped pedIndexFromEntityIndex;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(pedParam0))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			pedBoneCoords = { PED::GET_PED_BONE_COORDS(pedIndexFromEntityIndex, 21030, 0f, 0f, 0f) };
			pedBoneCoords.f_2 = pedBoneCoords.f_2 + 0.25f;
		}
		else
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
			MISC::GET_MODEL_DIMENSIONS(entityModel, &offsetFromEntityInWorldCoords, &offsetFromEntityInWorldCoords2);
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedParam0, offsetFromEntityInWorldCoords) };
			offsetFromEntityInWorldCoords2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedParam0, offsetFromEntityInWorldCoords2) };
			pedBoneCoords = (offsetFromEntityInWorldCoords + offsetFromEntityInWorldCoords2) / 2f;
			pedBoneCoords.f_1 = (offsetFromEntityInWorldCoords.f_1 + offsetFromEntityInWorldCoords2.f_1) / 2f;
			pedBoneCoords.f_2 = func_73(offsetFromEntityInWorldCoords.f_2, offsetFromEntityInWorldCoords2.f_2, 0.75f);
		}
	}

	_IS_NULL_VECTOR(pedBoneCoords);
	return pedBoneCoords;
}

int func_72(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6, Ped pedParam7) // Position - 0x1AE6 Hash - 0xDFB5B5D9 ^0x7CCDBB2A
{
	var endCoords;
	var surfaceNormal;
	var entityHit;

	uParam0->f_4 = 0;

	switch (*uParam0)
	{
		case 0:
			func_74(uParam0);
			uParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, pedParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
	
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &endCoords, &surfaceNormal, &entityHit) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &endCoords, &surfaceNormal, &entityHit) == 0)
			{
				*uParam0 = 3;
			}
			break;
	
		case 3:
			*uParam0 = 0;
			break;
	}

	return 0;
}

float func_73(var uParam0, var uParam1, float fParam2) // Position - 0x1B99 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * uParam0) + (fParam2 * uParam1);
}

void func_74(var uParam0) // Position - 0x1BAE Hash - 0x3F9B0B8A ^0x1F9EDB21
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	return;
}

