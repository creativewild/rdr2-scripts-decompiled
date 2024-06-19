#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = -1;
	var uLocal_4 = -1;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = -1;
	var uLocal_10 = -1;
	var uLocal_11 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xCD114B31 ^0xD4364083
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1(&uLocal_0);

	func_2(&uLocal_0, &uScriptParam_0);

	while (true)
	{
		if (func_3(&uLocal_0))
			func_1(&uLocal_0);
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0x45 Hash - 0x2D6D2CC4 ^0x7F87A408
{
	if (!func_4(uParam0->f_2.f_8))
	{
		func_5();
		func_6();
		func_7();
	}

	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2(var uParam0, var uParam1) // Position - 0x77 Hash - 0x1403051B ^0xD5AAD085
{
	uParam0->f_1 = 5;
	uParam0->f_2 = { *uParam1 };
	func_8(uParam0, 0);
	return;
}

BOOL func_3(var uParam0) // Position - 0x97 Hash - 0x478E80CB ^0x9A2B6D8E
{
	int num;

	if (func_9(uParam0))
		return true;

	num = func_10(uParam0->f_2.f_2);

	switch (*uParam0)
	{
		case 0:
			func_11(uParam0->f_2.f_2);
			func_12();
		
			if (uParam0->f_2.f_7 == 37)
				if (!func_13())
					return false;
		
			func_8(uParam0, 1);
			break;
	
		case 1:
			if (func_14(0, 0, 1))
			{
				func_11(uParam0->f_2.f_2);
				func_8(uParam0, 2);
			}
		
			func_15(num, Global_1899848.f_15.f_10);
			break;
	
		case 2:
			if (func_4(uParam0->f_2.f_8))
			{
				func_8(uParam0, 3);
				return false;
			}
			else
			{
				func_11(uParam0->f_2.f_2);
				func_15(num, Global_1899848.f_15.f_10);
			}
			break;
	
		case 3:
			if (!func_4(uParam0->f_2.f_8))
				func_8(uParam0, 1);
			break;
	}

	return false;
}

BOOL func_4(int iParam0) // Position - 0x183 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_16(iParam0);
	return num == 3 || num == 4;
}

int func_5() // Position - 0x1A1 Hash - 0xBA30DC9E ^0xEDA5A390
{
	int i;

	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		func_17(i);
		func_18(&(Global_1899848.f_32[i /*21*/].f_3), 0, 1);
		func_18(&(Global_1899848.f_32[i /*21*/].f_4), 0, 0);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1899848.f_201.f_14))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1899848.f_201.f_14);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1899848.f_201.f_14);
		VOLUME::DELETE_VOLUME(Global_1899848.f_201.f_14);
	}

	func_19();
	func_18(&(Global_1899848.f_201.f_12), 0, 1);
	func_18(&(Global_1899848.f_15.f_10), 0, 1);
	func_20(0);

	if (Global_1899848.f_217 == 0)
		func_21(1, 1);

	return 1;
}

void func_6() // Position - 0x252 Hash - 0xD34D6596 ^0x405356B5
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1899848.f_4);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1899848.f_5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1899848.f_6);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1899848.f_7);
	return;
}

void func_7() // Position - 0x282 Hash - 0xF80757A8 ^0x5F415266
{
	Global_1899848 = 0;
	Global_1899848.f_1 = 0;
	Global_1899848.f_2 = 0;
	Global_1899848.f_217 = 0;
	Global_1899848.f_218 = 0;
	Global_1899848.f_220 = 0;
	Global_1899848.f_221 = 0;
	Global_1899848.f_222 = 0;
	Global_1899848.f_223 = 0;
	Global_1899848.f_224 = 0;
	Global_1899848.f_14 = 0;
	func_22();
	return;
}

void func_8(var uParam0, int iParam1) // Position - 0x2D9 Hash - 0x6140DB6F ^0x6140DB6F
{
	if (*uParam0 != iParam1)
		*uParam0 = iParam1;

	return;
}

BOOL func_9(var uParam0) // Position - 0x2EE Hash - 0xFD5914E ^0x14137DB9
{
	float num;

	if (func_23() != -1)
		return true;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return true;

	if (func_4(uParam0->f_2.f_8))
		return true;

	if (!func_24(uParam0->f_1))
		return true;

	if (!func_25(uParam0->f_2.f_2))
		return true;

	if (Global_1899528.f_215 == true)
		return true;

	if (func_26(uParam0->f_2.f_7, 4194304))
		return true;

	if (Global_1935630.f_12 == false)
	{
		num = func_27(uParam0->f_1);
	
		if (BUILTIN::VDIST2(Global_36, uParam0->f_2.f_3) > num * num)
			return true;
	}

	return false;
}

int func_10(int iParam0) // Position - 0x399 Hash - 0x3516A114 ^0xDECD073A
{
	if (iParam0 == -1 || iParam0 >= 33)
		return -1;

	return Global_1899528.f_11[iParam0];
}

void func_11(int iParam0) // Position - 0x3C1 Hash - 0x2E883CF3 ^0x8B9A2B6
{
	int num;

	if (func_23() != -1)
		return;

	if (!func_28(iParam0, &num))
		return;

	if (Global_1392915.f_121[num /*20*/].f_15 == 0)
		Global_1392915.f_121[num /*20*/].f_15 = 1;

	return;
}

void func_12() // Position - 0x400 Hash - 0x382641D0 ^0xBD6A187C
{
	if (Global_1899848 == 1)
		return;

	func_29();
	Global_1899848.f_2 = 4;

	if (Global_1899848.f_3 < 0 || Global_1899848.f_3 >= 6)
		Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);

	if (Global_1899848.f_3 == 0 || Global_1899848.f_3 == 1)
	{
		Global_1899848.f_201 = { -1604.72f, -1422.11f, 80.76f };
		Global_1899848.f_201.f_3 = { 0f, 0f, 210f };
		Global_1899848.f_15.f_2 = { -1604f, -1419.09f, 80.92f };
		Global_1899848.f_15.f_5 = 330f;
		Global_1899848.f_15.f_6 = { 0f, 0f, 0f };
		Global_1899848.f_15.f_9 = 0f;
		Global_1899848.f_15.f_11 = { -1603.505f, -1418.235f, 82.495f };
		Global_1899848.f_15.f_14 = { 166.1f, 2.5f, 330f };
	}
	else if (Global_1899848.f_3 == 2 || Global_1899848.f_3 == 3)
	{
		Global_1899848.f_201 = { -1586.484f, -1411.6285f, 80.2817f };
		Global_1899848.f_201.f_3 = { 0f, 0f, 180f };
		Global_1899848.f_15.f_2 = { -1604f, -1419.09f, 80.92f };
		Global_1899848.f_15.f_5 = 330f;
		Global_1899848.f_15.f_6 = { 0f, 0f, 0f };
		Global_1899848.f_15.f_9 = 0f;
		Global_1899848.f_15.f_11 = { -1603.505f, -1418.235f, 82.495f };
		Global_1899848.f_15.f_14 = { 166.1f, 2.5f, 330f };
	}
	else
	{
		Global_1899848.f_201 = { -1603.35f, -1411.84f, 80.95f };
		Global_1899848.f_201.f_3 = { 0f, 0f, 230f };
		Global_1899848.f_15.f_2 = { -1603.35f, -1409f, 80.92f };
		Global_1899848.f_15.f_5 = 60f;
		Global_1899848.f_15.f_6 = { 0f, 0f, 0f };
		Global_1899848.f_15.f_9 = 0f;
		Global_1899848.f_15.f_11 = { -1604.202f, -1408.503f, 82.495f };
		Global_1899848.f_15.f_14 = { 166.1f, 2.5f, 60f };
	}

	if (Global_1899848.f_3 == 0)
	{
		Global_1899848.f_9 = 3;
		Global_1899848.f_32[0 /*21*/] = { -1605.0691f, -1418.5331f, 80.871f };
		Global_1899848.f_32[1 /*21*/] = { -1603.8264f, -1421.3405f, 80.7765f };
		Global_1899848.f_32[2 /*21*/] = { -1608.24f, -1418.22f, 80.96f };
	}
	else if (Global_1899848.f_3 == 1)
	{
		Global_1899848.f_9 = 3;
		Global_1899848.f_32[0 /*21*/] = { -1603.01f, -1420.13f, 80.84f };
		Global_1899848.f_32[1 /*21*/] = { -1606.3318f, -1421.3405f, 80.8483f };
		Global_1899848.f_32[2 /*21*/] = { -1608.3022f, -1417.6083f, 80.9513f };
	}
	else if (Global_1899848.f_3 == 2)
	{
		Global_1899848.f_9 = 6;
		Global_1899848.f_32[0 /*21*/] = { -1581.343f, -1408.9584f, 80.2649f };
		Global_1899848.f_32[1 /*21*/] = { -1585.9392f, -1416.1654f, 80.3239f };
		Global_1899848.f_32[2 /*21*/] = { -1576.1882f, -1418.9218f, 80.6635f };
		Global_1899848.f_32[3 /*21*/] = { -1565.435f, -1422.1835f, 81.0723f };
		Global_1899848.f_32[4 /*21*/] = { -1588.0586f, -1429.4911f, 80.3306f };
		Global_1899848.f_32[5 /*21*/] = { -1596.7102f, -1426.3688f, 80.4849f };
	}
	else if (Global_1899848.f_3 == 3)
	{
		Global_1899848.f_9 = 5;
		Global_1899848.f_32[0 /*21*/] = { -1588.5115f, -1411.5751f, 80.3268f };
		Global_1899848.f_32[1 /*21*/] = { -1581.7468f, -1409.2245f, 80.2775f };
		Global_1899848.f_32[2 /*21*/] = { -1572.3284f, -1417.0209f, 80.8312f };
		Global_1899848.f_32[3 /*21*/] = { -1567.3625f, -1423.642f, 81.0785f };
		Global_1899848.f_32[4 /*21*/] = { -1574.7385f, -1428.4506f, 80.7116f };
	}
	else if (Global_1899848.f_3 == 4)
	{
		Global_1899848.f_9 = 4;
		Global_1899848.f_32[0 /*21*/] = { -1597.65f, -1412.11f, 80.95f };
		Global_1899848.f_32[1 /*21*/] = { -1602.31f, -1407.28f, 80.94f };
		Global_1899848.f_32[2 /*21*/] = { -1599.93f, -1411.69f, 80.95f };
		Global_1899848.f_32[3 /*21*/] = { -1602.31f, -1414.33f, 80.95f };
	}
	else
	{
		Global_1899848.f_9 = 4;
		Global_1899848.f_32[0 /*21*/] = { -1600.13f, -1411.14f, 80.95f };
		Global_1899848.f_32[1 /*21*/] = { -1598.63f, -1414.08f, 80.95f };
		Global_1899848.f_32[2 /*21*/] = { -1602.22f, -1414.03f, 80.95f };
		Global_1899848.f_32[3 /*21*/] = { -1600.07f, -1417.74f, 80.93f };
	}

	Global_1899848 = 1;
	Global_1899848.f_1 = 0;
	return;
}

BOOL func_13() // Position - 0x93E Hash - 0x4B464C63 ^0x1A9E258C
{
	Hash scriptHash;

	scriptHash = joaat("beechers_cow");

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(scriptHash) > 0)
		return true;

	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(scriptHash);

	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(scriptHash))
	{
		SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(scriptHash, 256);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(scriptHash);
		return true;
	}

	return false;
}

BOOL func_14(int iParam0, int iParam1, int iParam2) // Position - 0x97F Hash - 0x42842762 ^0xFDB2AA17
{
	var unk;
	var unk4;
	int i;

	if (Global_1899848 == 0)
		return false;

	if (!func_30())
		return false;

	unk = { Global_1899848.f_201 };
	unk4 = { Global_1899848.f_201.f_3 };

	if (iParam1 == 1)
	{
		unk = { Global_1899848.f_201.f_6 };
		unk4 = { Global_1899848.f_201.f_9 };
	}

	if (!func_31(&(Global_1899848.f_201.f_12), Global_1899848.f_6, unk, unk4, 1, 1, 1))
		return false;

	if (iParam0 == 0)
		if (!func_32() || iParam2 == 0 && !func_33() || iParam2 == 0 && !func_34() || iParam2 == 1 && !func_31(&(Global_1899848.f_15.f_10), Global_1899848.f_7, Global_1899848.f_15.f_11, Global_1899848.f_15.f_14, 0, 0, 1))
			return false;

	i = 0;

	for (i = 0; i < Global_1899848.f_9; i = i + 1)
	{
		func_35(&(Global_1899848.f_32[i /*21*/].f_3));
	}

	func_35(&(Global_1899848.f_201.f_12));
	func_36(&(Global_1899848.f_15));

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1899848.f_201.f_14))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_201.f_12))
		{
			Global_1899848.f_201.f_14 = VOLUME::CREATE_VOLUME_CYLINDER(Global_1899848.f_201, 0f, 0f, 0f, 1.5f, 1.5f, 3f);
			PED::_ATTACH_VOLUME_TO_ENTITY(Global_1899848.f_201.f_14, Global_1899848.f_201.f_12, 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1899848.f_201.f_14, 2016, 0, 0, -1, -1, 2);
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1899848.f_201.f_14, 10208, 0, 0, -1, -1, 0);
		}
	}

	return true;
}

void func_15(int iParam0, Object* pobParam1) // Position - 0xB3C Hash - 0xCF7D517E ^0xF609B661
{
	Global_1392915.f_121[iParam0 /*20*/].f_13 = pobParam1;
	return;
}

int func_16(int iParam0) // Position - 0xB52 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_37(iParam0))
		return -1;

	return func_38(iParam0);
}

void func_17(int iParam0) // Position - 0xB6E Hash - 0xF0A43A87 ^0x2C37E6D0
{
	if (iParam0 < 0 || iParam0 >= 8)
		return;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1899848.f_32[iParam0 /*21*/].f_9))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1899848.f_32[iParam0 /*21*/].f_9);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1899848.f_32[iParam0 /*21*/].f_9);
		VOLUME::DELETE_VOLUME(Global_1899848.f_32[iParam0 /*21*/].f_9);
	}

	if (VOLUME::DOES_VOLUME_EXIST(Global_1899848.f_32[iParam0 /*21*/].f_10))
		VOLUME::DELETE_VOLUME(Global_1899848.f_32[iParam0 /*21*/].f_10);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1899848.f_32[iParam0 /*21*/].f_11))
		VOLUME::DELETE_VOLUME(Global_1899848.f_32[iParam0 /*21*/].f_11);

	return;
}

void func_18(Object* pobParam0, int iParam1, int iParam2) // Position - 0xC14 Hash - 0xB724F22C ^0x420646ED
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
	{
		func_35(pobParam0);
	
		if (iParam2 == 1 && ENTITY::_IS_ENTITY_FROZEN(*pobParam0))
			ENTITY::FREEZE_ENTITY_POSITION(*pobParam0, false);
	
		if (ENTITY::IS_ENTITY_ATTACHED(*pobParam0))
		{
			ENTITY::DETACH_ENTITY(*pobParam0, true, true);
			PHYSICS::ACTIVATE_PHYSICS(*pobParam0);
		}
	
		if (iParam1 == 1)
			OBJECT::DELETE_OBJECT(pobParam0);
		else
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(pobParam0);
	}

	return;
}

void func_19() // Position - 0xC76 Hash - 0xA907684 ^0x75FFC522
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1899848.f_201.f_15))
		VOLUME::DELETE_VOLUME(Global_1899848.f_201.f_15);

	return;
}

void func_20(int iParam0) // Position - 0xC99 Hash - 0x3A280D4B ^0x672ED58E
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1))
		if (iParam0 == 1)
			if (TASK::_IS_SCENARIO_POINT_FLAG_SET(Global_1899848.f_15.f_1, 8))
				TASK::_SET_SCENARIO_POINT_FLAG(Global_1899848.f_15.f_1, 8, false);
		else if (!TASK::_IS_SCENARIO_POINT_FLAG_SET(Global_1899848.f_15.f_1, 8))
			TASK::_SET_SCENARIO_POINT_FLAG(Global_1899848.f_15.f_1, 8, true);

	return;
}

void func_21(int iParam0, int iParam1) // Position - 0xCFA Hash - 0x1CA3B7FB ^0xDBF4EE0A
{
	if (iParam1 == 1)
		func_39();

	if (ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Global_1899848.f_15))
		{
			ENTITY::DETACH_ENTITY(Global_1899848.f_15, true, true);
			PHYSICS::ACTIVATE_PHYSICS(Global_1899848.f_15);
		}
	
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(Global_1899848.f_15));
	}

	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (iParam0 == 1)
			if (!func_40(4))
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	
		PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(Global_35);
	}

	Global_1899848.f_15 = 0;
	return;
}

void func_22() // Position - 0xD7E Hash - 0x1EDF8B10 ^0x26A524FC
{
	int i;

	Global_1899848.f_10 = 0;
	Global_1899848.f_11 = 0;
	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		Global_1899848.f_32[i /*21*/].f_5 = 0;
	}

	return;
}

BOOL func_23() // Position - 0xDB7 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_24(int iParam0) // Position - 0xDC5 Hash - 0xEA76DD3 ^0xEA76DD3
{
	int i;

	for (i = 0; i < Global_1898330; i = i + 1)
	{
		if (func_41(Global_1898330[i]) == iParam0)
			return true;
	}

	return false;
}

BOOL func_25(int iParam0) // Position - 0xDF8 Hash - 0x5F38ABE0 ^0x38C688B9
{
	int num;

	num = func_10(iParam0);

	if (num == -1)
		return false;

	if (func_42(Global_1392915[num /*12*/].f_2))
		return false;

	if (func_43(&(Global_1392915[num /*12*/].f_3), 60))
	{
		switch (func_44())
		{
			case 1:
				if (!func_43(&(Global_1392915[num /*12*/].f_3), 4))
					return false;
				break;
		
			case 2:
				if (!func_43(&(Global_1392915[num /*12*/].f_3), 8))
					return false;
				break;
		
			case 4:
				if (!func_43(&(Global_1392915[num /*12*/].f_3), 16))
					return false;
				break;
		
			case 8:
				if (!func_43(&(Global_1392915[num /*12*/].f_3), 32))
					return false;
				break;
		}
	}

	return true;
}

BOOL func_26(int iParam0, BOOL bParam1) // Position - 0xEC8 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

float func_27(int iParam0) // Position - 0xEFB Hash - 0xCDEBB006 ^0xCDEBB006
{
	switch (iParam0)
	{
		case 0:
			return 40f;
	
		case 1:
			return 70f;
	
		case 2:
			return 45f;
	
		case 3:
			return 90f;
	
		case 4:
			return 50f;
	
		case 5:
			return 90f;
	
		case 6:
			return 90f;
	
		default:
		
	}

	return 70f;
}

BOOL func_28(int iParam0, var uParam1) // Position - 0xF72 Hash - 0x51CBA313 ^0xAF93626D
{
	*uParam1 = -1;

	if (iParam0 == -1 || iParam0 >= 33)
		return false;

	*uParam1 = Global_1899528.f_11[iParam0];
	return *uParam1 != -1;
}

void func_29() // Position - 0xFA6 Hash - 0x74DE3842 ^0x7793C63B
{
	int i;

	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		Global_1899848.f_32[i /*21*/].f_12 = { 0f, 0f, 0f };
		Global_1899848.f_32[i /*21*/].f_15 = { 0f, 0f, 0f };
		Global_1899848.f_32[i /*21*/].f_18 = { 0f, 0f, 0f };
	}

	return;
}

BOOL func_30() // Position - 0xFF7 Hash - 0x4C05D90A ^0xC13BC069
{
	STREAMING::REQUEST_MODEL(Global_1899848.f_4, false);
	STREAMING::REQUEST_MODEL(Global_1899848.f_5, false);
	STREAMING::REQUEST_MODEL(Global_1899848.f_6, false);
	STREAMING::REQUEST_MODEL(Global_1899848.f_7, false);

	if (!STREAMING::HAS_MODEL_LOADED(Global_1899848.f_4) || !STREAMING::HAS_MODEL_LOADED(Global_1899848.f_5) || !STREAMING::HAS_MODEL_LOADED(Global_1899848.f_6) || !STREAMING::HAS_MODEL_LOADED(Global_1899848.f_7))
		return false;

	return true;
}

BOOL func_31(Object* pobParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10) // Position - 0x1071 Hash - 0x196A566B ^0x3416D33C
{
	if (_IS_NULL_VECTOR(vParam2))
		return false;

	if (iParam9 == 1 && !ENTITY::DOES_ENTITY_EXIST(*pobParam0))
	{
		*pobParam0 = func_46(vParam2, hParam1, 0.25f, true);
	
		if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
		{
			ENTITY::SET_ENTITY_ROTATION(*pobParam0, fParam5, 2, true);
		
			if (iParam8 == 1)
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(*pobParam0, false);
		
			ENTITY::FREEZE_ENTITY_POSITION(*pobParam0, true);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(*pobParam0))
	{
		STREAMING::REQUEST_MODEL(hParam1, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hParam1))
		{
			if (iParam10 == 1)
				func_47(vParam2, 0.25f, 2);
		
			*pobParam0 = OBJECT::CREATE_OBJECT(hParam1, vParam2, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*pobParam0, fParam5, 2, true);
		
			if (iParam8 == 1)
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(*pobParam0, false);
		
			ENTITY::FREEZE_ENTITY_POSITION(*pobParam0, true);
			ENTITY::SET_ENTITY_PROOFS(*pobParam0, 31, false);
		}
	}

	return ENTITY::DOES_ENTITY_EXIST(*pobParam0);
}

BOOL func_32() // Position - 0x1153 Hash - 0x4715D933 ^0x4FC1E255
{
	int i;

	for (i = 0; i < Global_1899848.f_9; i = i + 1)
	{
		if (!func_48(i))
			return false;
	}

	return true;
}

BOOL func_33() // Position - 0x1181 Hash - 0xADE7D0BE ^0x43D1E85F
{
	if (!TASK::DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1))
	{
		Global_1899848.f_15.f_1 = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_player_chores_pitch_fork_pickup_putdown"), Global_1899848.f_15.f_2, Global_1899848.f_15.f_5, 0f, 0, true);
	
		if (Global_1899848.f_2 == 1)
			func_20(0);
		else
			func_20(1);
	}

	return TASK::DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1);
}

BOOL func_34() // Position - 0x11E2 Hash - 0x8C55AFDD ^0xDF67BD59
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1))
		{
			Global_1899848.f_15 = TASK::GET_PROP_FOR_SCENARIO_POINT(Global_1899848.f_15.f_1, "p_pitchfork01x_PH_R_HAND");
		
			if (ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15))
			{
			}
		}
	}

	return ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15);
}

void func_35(Object* pobParam0) // Position - 0x1238 Hash - 0x381DB854 ^0x2D130DBF
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(*pobParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*pobParam0, true, true);

	return;
}

void func_36(Entity eParam0) // Position - 0x1260 Hash - 0x381DB854 ^0x2D130DBF
{
	if (ENTITY::DOES_ENTITY_EXIST(*eParam0) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(*eParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*eParam0, true, true);

	return;
}

BOOL func_37(int iParam0) // Position - 0x1288 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_38(int iParam0) // Position - 0x12BB Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_49(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_39() // Position - 0x12FC Hash - 0x253BF5D7 ^0xFF8CE1B7
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1) && ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15))
	{
		if (TASK::_DISASSOCIATE_PROP_FROM_SCENARIO(Global_1899848.f_15.f_1, "p_pitchfork01x_PH_R_HAND"))
		{
		}
	}

	return;
}

BOOL func_40(int iParam0) // Position - 0x1336 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_23())
	{
		case -1:
			return Global_1357549.f_1495 && iParam0 != false;
	}

	return false;
}

int func_41(int iParam0) // Position - 0x1361 Hash - 0x84E72643 ^0x84E72643
{
	if (func_50(iParam0) != 4)
		return -1;

	return func_51(iParam0);
}

BOOL func_42(int iParam0) // Position - 0x137D Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_52(iParam0))
		return false;

	return func_26(iParam0, 33554432);
}

BOOL func_43(var uParam0, int iParam1) // Position - 0x139E Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

int func_44() // Position - 0x13BE Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x13CA Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

Object func_46(var uParam0, var uParam1, var uParam2, Hash hParam3, float fParam4, BOOL bParam5) // Position - 0x13F4 Hash - 0xEC461A7E ^0x75CEC255
{
	Volume volume;
	Object objectFromIndexedItem;
	float num;
	int entitiesInVolume;
	int i;
	ItemSet itemSet;

	num = fParam4 * 2f;
	func_53(&volume, uParam0, 0f, 0f, 0f, num, num, num);

	if (!VOLUME::DOES_VOLUME_EXIST(volume))
		return 0;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volume, itemSet, 3);

	for (i = 0; i < entitiesInVolume; i = i + 1)
	{
		objectFromIndexedItem = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet));
	
		if (!ENTITY::IS_ENTITY_DEAD(objectFromIndexedItem))
		{
			if (ENTITY::GET_ENTITY_MODEL(objectFromIndexedItem) == hParam3)
			{
				ITEMSET::DESTROY_ITEMSET(itemSet);
				func_54(volume);
			
				if (bParam5)
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(objectFromIndexedItem, true))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(objectFromIndexedItem, true, true);
			
				return objectFromIndexedItem;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	func_54(volume);
	return 0;
}

void func_47(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4) // Position - 0x14A1 Hash - 0xE32603D9 ^0x11EEBBB1
{
	int num;

	num = 512;

	if (iParam4 & 1 != 0)
		num = num | 524288;

	if (iParam4 & 2 != 0)
		num = num | 1536;

	if (iParam4 & 4 != 0)
		num = num | 2560;

	if (iParam4 & 8 != 0)
		num = num | 4608;

	if (iParam4 & 16 != 0)
		num = num | 8704;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

BOOL func_48(int iParam0) // Position - 0x150D Hash - 0x3925AC5D ^0xF0080342
{
	if (!func_31(&(Global_1899848.f_32[iParam0 /*21*/].f_3), Global_1899848.f_4, Global_1899848.f_32[iParam0 /*21*/], 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 1, 1))
		return false;

	if (!func_31(&(Global_1899848.f_32[iParam0 /*21*/].f_4), Global_1899848.f_5, Global_1899848.f_32[iParam0 /*21*/], 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 1, 0))
		return false;

	if (Global_1899848.f_32[iParam0 /*21*/].f_5 == 0)
	{
		Global_1899848.f_32[iParam0 /*21*/].f_5 = 1;
	
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1899848.f_32[iParam0 /*21*/].f_9))
		{
			Global_1899848.f_32[iParam0 /*21*/].f_9 = VOLUME::CREATE_VOLUME_CYLINDER(Global_1899848.f_32[iParam0 /*21*/], 0f, 0f, 0f, 1.5f, 1.5f, 3f);
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1899848.f_32[iParam0 /*21*/].f_9, 2016, 0, 0, -1, -1, 2);
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1899848.f_32[iParam0 /*21*/].f_9, 10208, 0, 0, -1, -1, 0);
		}
	}

	return true;
}

int func_49(int iParam0) // Position - 0x1616 Hash - 0x6EC15CF9 ^0xE613EBE0
{
	int num;
	int num2;
	int num3;

	if (*Global_1058888.f_40431 <= 0)
		return -1;

	num = 0;
	num2 = *Global_1058888.f_40431 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
	
		if (Global_1058888.f_40431.f_1[num3 /*2*/] > iParam0)
			num2 = num3 - 1;
		else if (Global_1058888.f_40431.f_1[num3 /*2*/] < iParam0)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

int func_50(int iParam0) // Position - 0x1697 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_37(iParam0))
		return 0;

	return func_56(func_55(iParam0));
}

int func_51(int iParam0) // Position - 0x16B7 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_37(iParam0))
		return -1;

	return func_57(func_55(iParam0));
}

BOOL func_52(int iParam0) // Position - 0x16D7 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

void func_53(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9) // Position - 0x16ED Hash - 0xCF0C48FE ^0xA0FA78C0
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, func_58());

	return;
}

void func_54(Volume volParam0) // Position - 0x1717 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_55(int iParam0) // Position - 0x172E Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_56(BOOL bParam0) // Position - 0x176C Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_57(BOOL bParam0) // Position - 0x1779 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

char* func_58() // Position - 0x178C Hash - 0xDD7C3DFA ^0xDD7C3DFA
{
	return "unnamed";
}

