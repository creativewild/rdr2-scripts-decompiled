#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	Any anLocal_8 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE1B6FBCF ^0xA459DA17
{
	anLocal_8 = anScriptParam_0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || func_1() != -1)
		func_2(&uLocal_3);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
		func_2(&uLocal_3);

	uLocal_5 = { TASK::_GET_SCENARIO_POINT_COORDS(anScriptParam_0.f_1, true) };

	while (func_3())
	{
		if (func_4())
			func_2(&uLocal_3);
	
		if (func_5(0, false, true))
			func_2(&uLocal_3);
		else
			func_6(&uLocal_3);
	
		BUILTIN::WAIT(0);
	}

	func_2(&uLocal_3);
	return;
}

BOOL func_1() // Position - 0x85 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_2(var uParam0) // Position - 0x93 Hash - 0x5E7BCEF8 ^0x39C5CD79
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		MAP::REMOVE_BLIP(&(uParam0->f_1));

	SCRIPTS::_0xE7282390542F570D(anLocal_8);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_3() // Position - 0xB9 Hash - 0xBC5DFEF2 ^0x4AA877CF
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_2(&uLocal_3);
		return false;
	}

	return true;
}

BOOL func_4() // Position - 0xD3 Hash - 0x8EFCB348 ^0x907D7217
{
	if (PED::IS_PED_INJURED(Global_35))
		return true;

	return false;
}

BOOL func_5(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xEA Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_7())
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
		num = func_8(Global_1898164.f_1[0 /*5*/]);
	
		if (func_9(num) && func_10(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_11(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_6(var uParam0) // Position - 0x2EE Hash - 0xAC5B4280 ^0x23EC4A04
{
	switch (func_12(uParam0))
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
			{
				func_13(uParam0);
			}
			else
			{
				uParam0->f_1 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_PICKUP_OBJECT"), uLocal_5);
				func_13(uParam0);
			}
		
			func_14(uParam0, 1);
			break;
	
		case 1:
			if (func_15(Global_35, uLocal_5, false) < 25f)
				func_14(uParam0, 2);
			break;
	
		case 2:
			break;
	}

	return false;
}

BOOL func_7() // Position - 0x36C Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_8(int iParam0) // Position - 0x3BF Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_11(iParam0))
		return -1;

	return func_17(func_16(iParam0));
}

BOOL func_9(int iParam0) // Position - 0x3DF Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_10(int iParam0, int iParam1) // Position - 0x3F5 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_11(int iParam0) // Position - 0x404 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_12(var uParam0) // Position - 0x437 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

void func_13(var uParam0) // Position - 0x442 Hash - 0xE69F820D ^0x44424A13
{
	MAP::SET_BLIP_SPRITE(uParam0->f_1, joaat("blip_taxidermist"), true);
	return;
}

void func_14(var uParam0, int iParam1) // Position - 0x458 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

float func_15(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x465 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

BOOL func_16(int iParam0) // Position - 0x48D Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_17(BOOL bParam0) // Position - 0x4CB Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

