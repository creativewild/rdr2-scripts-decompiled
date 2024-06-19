#region Local Var
	BOOL bLocal_0 = 0;
	Hash hLocal_1 = 0;
	Any anLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	Ped pedLocal_8 = 0;
	Hash hLocal_9 = 0;
	int iLocal_10 = 0;
	BOOL bLocal_11 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x7A4DA5F ^0xC844516B
{
	bLocal_0 = 1;
	iLocal_6 = -1;
	iLocal_7 = -1;
	anLocal_2 = anScriptParam_0;
	iLocal_3 = anScriptParam_0.f_1;
	uLocal_4 = anScriptParam_0.f_2;
	func_1();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2();

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}

	func_2();
	return;
}

void func_1() // Position - 0x5C Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Position - 0x64 Hash - 0x43FBC4A8 ^0x4278D3E2
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_2);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x89 Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_1 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_1) == 0)
			return bLocal_0;
		else
			return true;

	return bLocal_0;
}

void func_4() // Position - 0xB2 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Position - 0xBA Hash - 0x3D22DF46 ^0xED7FF9EC
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_ERRORS); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_ERRORS, i))
		{
			case -843555838:
				func_11(i);
				break;
		
			case -456923784:
				func_10(i);
				break;
		
			case -45008988:
				func_9(i);
				break;
		}
	}

	return;
}

void func_6() // Position - 0x112 Hash - 0x4AD5B382 ^0x80CA5EB0
{
	switch (iLocal_5)
	{
		case 0:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
			{
				iLocal_5 = 6;
				return;
			}
		
			bLocal_11 = func_12() == func_13();
			pedLocal_8 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
			hLocal_9 = TASK::_GET_SCENARIO_POINT_TYPE(iLocal_3);
		
			if (func_14(pedLocal_8, 0) && !PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(pedLocal_8)))
			{
				iLocal_5 = 6;
				return;
			}
		
			iLocal_5 = 1;
			break;
	
		case 1:
			if (func_15())
			{
				iLocal_5 = 6;
				return;
			}
		
			if (bLocal_11)
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_8, 0))
					iLocal_5 = 2;
			else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_8, 1))
				iLocal_5 = 2;
			break;
	
		case 2:
			if (func_15())
			{
				iLocal_5 = 6;
				return;
			}
		
			if (bLocal_11)
			{
				iLocal_7 = func_16(hLocal_9);
			}
			else
			{
				iLocal_6 = func_17(hLocal_9, pedLocal_8);
				iLocal_10 = func_18();
			
				if (iLocal_10 == -1)
				{
					iLocal_5 = 6;
					return;
				}
			}
		
			if (func_19(iLocal_6) || func_20(iLocal_7))
			{
				iLocal_5 = 3;
			}
			else
			{
				iLocal_5 = 6;
				return;
			}
			break;
	
		case 3:
			if (func_15())
			{
				iLocal_5 = 6;
				return;
			}
		
			if (bLocal_11)
			{
				func_21(iLocal_7, 1, 1, 0, 0);
				iLocal_5 = 6;
			}
			else if (func_22())
			{
				iLocal_5 = 4;
			}
			break;
	
		case 4:
			if (func_23())
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1415419.f_9721[iLocal_10 /*8*/].f_1, 523);
				iLocal_5 = 5;
				return;
			}
		
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1425179[iLocal_10 /*8*/].f_1, false))
				iLocal_5 = 5;
			break;
	
		case 5:
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1425179[iLocal_10 /*8*/].f_1, false))
			{
				func_24();
				iLocal_5 = 6;
			}
			break;
	
		case 6:
			bLocal_0 = false;
			return;
	}

	return;
}

void func_7() // Position - 0x2BC Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_8() // Position - 0x2C4 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x2D0 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_25(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x2F8 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_26(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x320 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_27(&eventData);
	}

	return;
}

eStackSize func_12() // Position - 0x348 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

eStackSize func_13() // Position - 0x356 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

BOOL func_14(Ped pedParam0, int iParam1) // Position - 0x366 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_28(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_28(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_28(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_28(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_28(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_28(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_28(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_28(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

BOOL func_15() // Position - 0x465 Hash - 0x48B7708F ^0x48B7708F
{
	if (func_29() && !func_30())
		return true;

	if (!func_14(Global_35, 0))
		return true;

	if (!func_14(pedLocal_8, 0))
		return true;

	if (!PED::IS_PED_USING_THIS_SCENARIO(pedLocal_8, iLocal_3))
		return true;

	if (!Global_1415419.f_4 && !bLocal_11)
		return true;

	return false;
}

int func_16(Hash hParam0) // Position - 0x4C8 Hash - 0x54EED401 ^0xB1A8EF85
{
	int randomIntInRange;

	switch (hParam0)
	{
		case joaat("SC_CAMP_VIG_SORE_JOINTS_MALE"):
			return 18;
	
		case joaat("SC_CAMP_VIG_DUTCH_START_PHONOGRAPH"):
			return 20;
	
		case joaat("sc_camp_vig_pearson_callover"):
		case joaat("world_human_cauldron"):
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(260, 265 + 1);
			return randomIntInRange;
	
		case joaat("SC_CAMP_VIG_FIRE_BLOW"):
			return 12;
	
		case joaat("SC_CAMP_VIG_FIRE_POKE"):
			return 13;
	}

	return -1;
}

int func_17(Hash hParam0, Ped pedParam1) // Position - 0x533 Hash - 0x78BBBD8D ^0xF995D10
{
	switch (hParam0)
	{
		case joaat("SC_AMB_VIG_VOMIT_WALL"):
			if (PED::IS_PED_MALE(pedParam1))
				return 26;
			else
				return 25;
			break;
	}

	return -1;
}

int func_18() // Position - 0x563 Hash - 0x39E63C22 ^0x8A7CAA32
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!Global_1425179[i /*8*/].f_2)
			return i;
	}

	return -1;
}

BOOL func_19(int iParam0) // Position - 0x591 Hash - 0xDC21AF4A ^0xDC21AF4A
{
	if (iParam0 != -1)
		return true;

	return false;
}

BOOL func_20(int iParam0) // Position - 0x5A4 Hash - 0x958B152F ^0xA6D6622D
{
	return iParam0 > -1 && iParam0 < 673;
}

int func_21(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x5BB Hash - 0xDACAB1B8 ^0xDACAB1B8
{
	int i;

	if (func_31(iParam0))
		return -1;

	for (i = 0; i < Global_1327590.f_19574; i = i + 1)
	{
		if (func_32(i))
		{
		}
		else
		{
			Global_1327590.f_19574[i /*8*/] = iParam0;
			Global_1327590.f_19574[i /*8*/].f_7 = iParam1;
			Global_1327590.f_19574[i /*8*/].f_3 = iParam2;
			Global_1327590.f_19574[i /*8*/].f_1 = iParam3;
			Global_1327590.f_19574[i /*8*/].f_2 = iParam4;
			return i;
		}
	}

	return -1;
}

BOOL func_22() // Position - 0x643 Hash - 0x78B2E2E1 ^0x33E6A06A
{
	struct<13> args;

	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(Global_1415419.f_19[iLocal_6 /*12*/]);

	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(Global_1415419.f_19[iLocal_6 /*12*/]))
	{
		func_33(iLocal_6);
		args = -1;
		args.f_11 = -1;
		args = iLocal_6;
		args.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true) };
		args.f_4 = { 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) };
		args.f_10 = 1;
		args.f_8 = pedLocal_8;
		Global_1425179[iLocal_10 /*8*/] = iLocal_6;
		Global_1425179[iLocal_10 /*8*/].f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Global_1415419.f_19[iLocal_6 /*12*/], &args, 13, 1024);
		Global_1425179[iLocal_10 /*8*/].f_2 = 1;
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_1415419.f_19[iLocal_6 /*12*/]);
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_23() // Position - 0x6F2 Hash - 0x9A21F4BF ^0x9A21F4BF
{
	if (func_29() && !func_30())
		return true;

	if (!func_14(Global_35, 0))
		return true;

	return false;
}

void func_24() // Position - 0x720 Hash - 0x382149F4 ^0x54A95917
{
	Global_1425179[iLocal_10 /*8*/] = -1;
	Global_1425179[iLocal_10 /*8*/].f_1 = 0;
	Global_1425179[iLocal_10 /*8*/].f_2 = 0;
	return;
}

void func_25(var uParam0) // Position - 0x747 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_26(var uParam0) // Position - 0x74F Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_27(var uParam0) // Position - 0x757 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_28(int iParam0, int iParam1) // Position - 0x75F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_29() // Position - 0x76E Hash - 0x4228A1C2 ^0x70D4FBDE
{
	return Global_1898164.f_163;
}

BOOL func_30() // Position - 0x77C Hash - 0xA5A53F42 ^0xC139876A
{
	return func_34(Global_1415419.f_3, 1);
}

BOOL func_31(int iParam0) // Position - 0x78F Hash - 0x50616E92 ^0x50616E92
{
	if (func_35(iParam0))
		return true;

	if (func_36() == iParam0)
		return true;

	if (func_37(iParam0))
		return true;

	return false;
}

BOOL func_32(int iParam0) // Position - 0x7BF Hash - 0x748C9E09 ^0x748C9E09
{
	if (!func_38(iParam0))
		return false;

	return Global_1327590.f_19574[iParam0 /*8*/] != -1;
}

void func_33(int iParam0) // Position - 0x7E2 Hash - 0x1C2F6C2A ^0xD358C172
{
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = func_39();

	if (iParam0 <= 74)
		Global_1415419.f_7 = MISC::GET_GAME_TIMER();
	else
		Global_1415419.f_8 = MISC::GET_GAME_TIMER();

	func_40(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 12, 0, 0, 0, 0, false);
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_1 = Global_32074.f_2697.f_6[iParam0 /*6*/].f_1 + 1;
	Global_32074.f_2697 = Global_32074.f_2697 + 1;
	return;
}

BOOL func_34(BOOL bParam0, BOOL bParam1) // Position - 0x860 Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && bParam1 != false;
}

BOOL func_35(int iParam0) // Position - 0x86F Hash - 0xC740AD9E ^0xC740AD9E
{
	int i;

	for (i = 0; i < Global_1327590.f_19574; i = i + 1)
	{
		if (func_41(i) == iParam0)
			return true;
	}

	return false;
}

int func_36() // Position - 0x89F Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1327590.f_19615;
}

BOOL func_37(int iParam0) // Position - 0x8AE Hash - 0x5D08574D ^0x5D08574D
{
	int i;

	for (i = 0; i < Global_1327590.f_19547; i = i + 1)
	{
		if (Global_1327590.f_19547[i /*5*/] == iParam0)
			return true;
	}

	return false;
}

BOOL func_38(int iParam0) // Position - 0x8E3 Hash - 0x2CD090E ^0x2CD090E
{
	return iParam0 >= 0 && iParam0 < Global_1327590.f_19574;
}

eStackSize func_39() // Position - 0x8FE Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_40(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x90A Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_42(*hParam0);
	i = func_43(*hParam0);
	num2 = func_44(*hParam0);
	j = func_45(*hParam0);
	k = func_46(*hParam0);
	l = func_47(*hParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_48(i, num); num2 > m; m = func_48(i, num))
	{
		iParam5 = iParam5 + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			iParam6 = iParam6 + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	if (!bParam7)
		num = num + iParam6;

	func_49(hParam0, l, k, j, num2, i, num);
	return;
}

int func_41(int iParam0) // Position - 0xA92 Hash - 0xF7F88B8A ^0xF7F88B8A
{
	if (!func_38(iParam0))
		return -1;

	return Global_1327590.f_19574[iParam0 /*8*/];
}

int func_42(int iParam0) // Position - 0xAB3 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_43(int iParam0) // Position - 0xAD8 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_44(int iParam0) // Position - 0xAEB Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_45(int iParam0) // Position - 0xAFE Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_46(int iParam0) // Position - 0xB11 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_47(int iParam0) // Position - 0xB23 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_48(int iParam0, int iParam1) // Position - 0xB35 Hash - 0x893AC59E ^0x893AC59E
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

void func_49(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xBCF Hash - 0xA65AB937 ^0xA65AB937
{
	func_51(hParam0, iParam6);
	func_52(hParam0, iParam5);
	func_53(hParam0, iParam4);
	func_54(hParam0, iParam3);
	func_55(hParam0, iParam2);
	func_56(hParam0, iParam1);
	return;
}

var func_50(BOOL bParam0, var uParam1, var uParam2) // Position - 0xC07 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_51(Hash hParam0, int iParam1) // Position - 0xC1E Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*hParam0 = *hParam0 - *hParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*hParam0 = *hParam0 | -2147483648;
	}
	else
	{
		*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*hParam0 = *hParam0 - *hParam0 & -2147483648;
	}

	return;
}

void func_52(Hash hParam0, int iParam1) // Position - 0xCA4 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*hParam0 = *hParam0 - *hParam0 & 62914560;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_53(Hash hParam0, int iParam1) // Position - 0xCE0 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_43(*hParam0);
	num2 = func_42(*hParam0);

	if (iParam1 < 1 || iParam1 > func_48(num, num2))
		return;

	*hParam0 = *hParam0 - *hParam0 & 4063232;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_54(Hash hParam0, int iParam1) // Position - 0xD33 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*hParam0 = *hParam0 - *hParam0 & 126976;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_55(Hash hParam0, int iParam1) // Position - 0xD6E Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*hParam0 = *hParam0 - *hParam0 & 4032;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_56(Hash hParam0, int iParam1) // Position - 0xDA7 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*hParam0 = *hParam0 - *hParam0 & 63;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

