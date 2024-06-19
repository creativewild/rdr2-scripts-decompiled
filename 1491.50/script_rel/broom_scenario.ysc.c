#region Local Var
	BOOL bLocal_0 = 0;
	Hash hLocal_1 = 0;
	Any anLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	var uLocal_6 = 5;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	Ped pedLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	float fLocal_78 = 0f;
	BOOL bLocal_79 = 0;
	var uLocal_80 = 1;
	var uLocal_81 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x6F694911 ^0xF78325E
{
	bLocal_0 = 1;
	iLocal_74 = 5;
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

void func_1() // Position - 0x59 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Position - 0x61 Hash - 0x43FBC4A8 ^0x4278D3E2
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_2);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x86 Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_1 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_1) == 0)
			return bLocal_0;
		else
			return true;

	return bLocal_0;
}

void func_4() // Position - 0xAF Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Position - 0xB7 Hash - 0x3D22DF46 ^0xED7FF9EC
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

void func_6() // Position - 0x10F Hash - 0x40B16DFD ^0x5CE9ADB9
{
	int num;
	int i;

	switch (iLocal_5)
	{
		case 0:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
			{
				iLocal_5 = 7;
				return;
			}
		
			pedLocal_72 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
		
			if (!func_12(pedLocal_72, 0))
			{
				iLocal_5 = 7;
				return;
			}
		
			bLocal_79 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(pedLocal_72));
		
			if (!bLocal_79)
			{
				TASK::_0xE7BBC4E56B989449(iLocal_3, &uLocal_80, 1);
			
				if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_80[0]))
				{
					iLocal_5 = 7;
					return;
				}
			}
		
			num = BUILTIN::FLOOR(TASK::_GET_SCENARIO_POINT_RADIUS(iLocal_3));
		
			if (!func_13(num, uLocal_4))
			{
				iLocal_5 = 7;
				return;
			}
		
			iLocal_5 = 1;
			break;
	
		case 1:
			if (!func_12(Global_35, 0))
			{
				iLocal_5 = 7;
				return;
			}
		
			if (!func_12(pedLocal_72, 0))
			{
				iLocal_5 = 7;
				return;
			}
		
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
			{
				iLocal_5 = 7;
				return;
			}
		
			if (!PED::IS_PED_USING_THIS_SCENARIO(pedLocal_72, iLocal_3))
			{
				iLocal_5 = 7;
				return;
			}
		
			if (func_14(Global_35, pedLocal_72, true) > 1225f)
			{
				return;
			}
			else if (ENTITY::GET_ENTITY_SPEED(Global_35) < 9.5f)
			{
				iLocal_5 = 2;
				return;
			}
			else
			{
				iLocal_5 = 7;
				return;
			}
			break;
	
		case 2:
			for (i = 0; i < 5; i = i + 1)
			{
				if (uLocal_6[i /*13*/].f_1 == 0)
				{
					iLocal_74 = i;
					break;
				}
			
				if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_6[i /*13*/]))
				{
					if (i > 0)
					{
						uLocal_6[i /*13*/].f_7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(uLocal_6[i - 1 /*13*/], true), TASK::_GET_SCENARIO_POINT_HEADING(uLocal_6[i - 1 /*13*/], true), uLocal_6[i /*13*/].f_4) };
						uLocal_6[i /*13*/].f_11 = TASK::_GET_SCENARIO_POINT_HEADING(uLocal_6[i - 1 /*13*/], true) + uLocal_6[i /*13*/].f_10;
					}
					else
					{
						uLocal_6[i /*13*/].f_7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), uLocal_6[i /*13*/].f_4) };
						uLocal_6[i /*13*/].f_11 = TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) + uLocal_6[i /*13*/].f_10;
					}
				
					uLocal_6[i /*13*/] = TASK::CREATE_SCENARIO_POINT_HASH(uLocal_6[i /*13*/].f_1, uLocal_6[i /*13*/].f_7, uLocal_6[i /*13*/].f_11, 0, 0, false);
					TASK::_0xE69FDA40AAC3EFC0(uLocal_6[i /*13*/], 0);
					TASK::_0xA7479FB665361EDB(uLocal_6[i /*13*/], 0);
				}
			}
		
			iLocal_5 = 3;
			break;
	
		case 3:
			if (func_15())
			{
				iLocal_5 = 7;
				return;
			}
		
			if (!func_16(&uLocal_75))
				func_17(&uLocal_75, false);
		
			if (func_18(&uLocal_75, fLocal_78) && TASK::_PED_IS_IN_SCENARIO_BASE(pedLocal_72))
				iLocal_5 = 4;
			break;
	
		case 4:
			if (func_15())
			{
				iLocal_5 = 7;
				return;
			}
		
			if (TASK::_0x79197F7D2BB5E73A(pedLocal_72, uLocal_6[iLocal_73 /*13*/], uLocal_6[iLocal_73 /*13*/].f_2, uLocal_6[iLocal_73 /*13*/].f_3, 0, 0))
			{
				if (PED::IS_PED_USING_THIS_SCENARIO(pedLocal_72, uLocal_6[iLocal_73 /*13*/]))
				{
					fLocal_78 = uLocal_6[iLocal_73 /*13*/].f_12;
					iLocal_73 = iLocal_73 + 1;
					func_19(&uLocal_75);
				
					if (iLocal_73 < iLocal_74)
						iLocal_5 = 3;
					else
						iLocal_5 = 5;
				}
			}
			break;
	
		case 5:
			if (func_15())
			{
				iLocal_5 = 7;
				return;
			}
		
			if (!func_16(&uLocal_75))
				func_17(&uLocal_75, false);
		
			if (func_18(&uLocal_75, fLocal_78) && TASK::_PED_IS_IN_SCENARIO_BASE(pedLocal_72))
				iLocal_5 = 6;
			break;
	
		case 6:
			if (func_15())
			{
				iLocal_5 = 7;
				return;
			}
		
			if (!bLocal_79)
			{
				if (!func_20(pedLocal_72, -76381094))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_72, true, false);
					TASK::TASK_USE_SCENARIO_POINT(pedLocal_72, uLocal_80[0], 0, 0, true, false, 0, false, -1082130432, false);
					PED::SET_PED_KEEP_TASK(pedLocal_72, true);
				}
			
				if (PED::IS_PED_USING_THIS_SCENARIO(pedLocal_72, uLocal_80[0]))
					iLocal_5 = 7;
			}
			else
			{
				iLocal_5 = 7;
			}
			break;
	
		case 7:
			bLocal_0 = false;
			return;
	}

	return;
}

void func_7() // Position - 0x49D Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_8() // Position - 0x4A5 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x4B1 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_21(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x4D9 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_22(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x501 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_23(&eventData);
	}

	return;
}

BOOL func_12(Ped pedParam0, int iParam1) // Position - 0x529 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_24(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_24(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_24(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_24(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_24(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_24(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_24(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_24(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

BOOL func_13(int iParam0, int iParam1) // Position - 0x628 Hash - 0x4583E307 ^0xC5CA044A
{
	switch (iParam1)
	{
		case joaat("SC_WORLD_HUMAN_PUSH_BROOM_WORKING"):
			switch (iParam0)
			{
				case 0:
					fLocal_78 = 10f;
					func_25(&uLocal_6[0 /*13*/], joaat("world_human_push_broom_working"), 3, 10f);
					func_25(&uLocal_6[1 /*13*/], joaat("world_human_push_broom_working"), 3, 10f);
					func_25(&uLocal_6[2 /*13*/], joaat("world_human_push_broom_working"), 3, 10f);
					func_25(&uLocal_6[3 /*13*/], joaat("world_human_push_broom_working"), 3, 10f);
					return true;
			
				case 1:
					fLocal_78 = 10f;
					func_25(&uLocal_6[0 /*13*/], joaat("world_human_push_broom_working"), 4, 10f);
					func_25(&uLocal_6[1 /*13*/], joaat("world_human_push_broom_working"), 4, 10f);
					func_25(&uLocal_6[2 /*13*/], joaat("world_human_push_broom_working"), 4, 10f);
					return true;
			}
			break;
	
		case joaat("SC_WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam0)
			{
				case 0:
					fLocal_78 = 10f;
				
					if (PED::IS_PED_MALE(pedLocal_72))
					{
						func_25(&uLocal_6[0 /*13*/], joaat("world_human_straw_broom_working"), 4, 10f);
						func_25(&uLocal_6[1 /*13*/], joaat("world_human_straw_broom_working"), 4, 10f);
						func_25(&uLocal_6[2 /*13*/], joaat("world_human_straw_broom_working"), 4, 10f);
					}
					else
					{
						func_25(&uLocal_6[0 /*13*/], joaat("world_human_straw_broom_working"), 5, 10f);
						func_25(&uLocal_6[1 /*13*/], joaat("world_human_straw_broom_working"), 5, 10f);
						func_25(&uLocal_6[2 /*13*/], joaat("world_human_straw_broom_working"), 5, 10f);
					}
				
					return true;
			
				case 1:
					fLocal_78 = 10f;
				
					if (PED::IS_PED_MALE(pedLocal_72))
					{
						func_25(&uLocal_6[0 /*13*/], joaat("world_human_straw_broom_working"), 1, 10f);
						func_25(&uLocal_6[1 /*13*/], joaat("world_human_straw_broom_working"), 1, 10f);
					}
					else
					{
						func_25(&uLocal_6[0 /*13*/], joaat("world_human_straw_broom_working"), 0, 10f);
						func_25(&uLocal_6[1 /*13*/], joaat("world_human_straw_broom_working"), 0, 10f);
					}
				
					return true;
			}
			break;
	}

	return false;
}

float func_14(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x817 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));

	return func_26(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));
}

BOOL func_15() // Position - 0x86E Hash - 0x78012285 ^0xEAFBC589
{
	if (!func_12(Global_35, 0))
		return true;

	if (!func_12(pedLocal_72, 0))
		return true;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
		return true;

	if (iLocal_73 <= 0)
		if (!PED::IS_PED_USING_THIS_SCENARIO(pedLocal_72, iLocal_3) && !PED::IS_PED_USING_THIS_SCENARIO(pedLocal_72, uLocal_6[iLocal_73 /*13*/]))
			return true;
	else if (iLocal_73 >= iLocal_74)
		if (!bLocal_79)
			if (!PED::IS_PED_USING_THIS_SCENARIO(pedLocal_72, uLocal_6[iLocal_73 - 1 /*13*/]) && !PED::IS_PED_USING_THIS_SCENARIO(pedLocal_72, uLocal_80[0]))
				return true;
	else if (!PED::IS_PED_USING_THIS_SCENARIO(pedLocal_72, uLocal_6[iLocal_73 - 1 /*13*/]) && !PED::IS_PED_USING_THIS_SCENARIO(pedLocal_72, uLocal_6[iLocal_73 /*13*/]))
		return true;

	return false;
}

BOOL func_16(var uParam0) // Position - 0x92E Hash - 0x5001E582 ^0x5001E582
{
	return func_27(*uParam0, 1);
}

void func_17(var uParam0, BOOL bParam1) // Position - 0x93E Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_16(uParam0))
		func_28(uParam0);

	return;
}

BOOL func_18(var uParam0, float fParam1) // Position - 0x95E Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_16(uParam0))
		return false;

	if (func_29(uParam0) > fParam1)
		return true;

	return false;
}

void func_19(var uParam0) // Position - 0x985 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_20(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x99B Hash - 0xBA023B92 ^0x16E0B707
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return true;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return true;
		}
	}

	return false;
}

void func_21(var uParam0) // Position - 0x9F4 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_22(var uParam0) // Position - 0x9FC Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_23(var uParam0) // Position - 0xA04 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_24(int iParam0, int iParam1) // Position - 0xA0C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_25(var uParam0, int iParam1, int iParam2, float fParam3) // Position - 0xA1B Hash - 0xCF5A9FF3 ^0x1EA2D3CE
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = func_30(iParam1, iParam2);
	uParam0->f_3 = func_31(iParam1, iParam2);
	uParam0->f_4 = { func_32(iParam1, iParam2) };
	uParam0->f_10 = func_33(iParam1, iParam2);
	uParam0->f_12 = fParam3;
	return;
}

float func_26(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xA61 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_27(int iParam0, int iParam1) // Position - 0xA7F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_28(var uParam0) // Position - 0xA8E Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_34(uParam0, 0f);
	return;
}

float func_29(var uParam0) // Position - 0xA9D Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_16(uParam0))
		return uParam0->f_1;

	if (func_35(uParam0))
		return uParam0->f_2;

	return func_36() - uParam0->f_1;
}

// Unhandled jump detected. Output should be considered invalid
char* func_30(int iParam0, int iParam1) // Position - 0xAD2 Hash - 0x1E802562 ^0x44224E74
{
	switch (iParam0)
	{
		case joaat("world_human_push_broom_working"):
			switch (iParam1)
			{
				case 0:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_LTURN_90";
			
				case 1:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RTURN_90";
			
				case 2:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_BACKRIGHT";
			
				case 3:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_FRONTRIGHT";
			
				case 4:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RIGHT";
			
				default:
					break;
			}
			break;
	
		case joaat("world_human_straw_broom_working"):
			if (PED::IS_PED_MALE(pedLocal_72))
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_LTURN_90";
				
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RTURN_90";
				
					case 2:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_BACKRIGHT";
				
					case 3:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_FRONTRIGHT";
				
					case 4:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RIGHT";
				
					default:
						goto 0xB2;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LTURN_90";
				
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_RTURN_90";
				
					case 5:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LEFT";
				
					case 6:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_BACKLEFT";
				
					case 7:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_FRONTLEFT";
				
					default:
						break;
				}
			}
			break;
	}

	return "";
}

char* func_31(int iParam0, int iParam1) // Position - 0xBDA Hash - 0xE9B3A818 ^0xD22C94F
{
	switch (iParam0)
	{
		case joaat("world_human_push_broom_working"):
		case joaat("world_human_straw_broom_working"):
			switch (iParam1)
			{
				case 0:
					return "BASE_TRANS_LTURN_90";
			
				case 1:
					return "BASE_TRANS_RTURN_90";
			
				case 2:
					return "BASE_TRANS_BACKRIGHT";
			
				case 3:
					return "BASE_TRANS_FRONTRIGHT";
			
				case 4:
					return "BASE_TRANS_RIGHT";
			
				case 5:
					return "BASE_TRANS_LEFT";
			
				case 6:
					return "BASE_TRANS_BACKLEFT";
			
				case 7:
					return "BASE_TRANS_FRONTLEFT";
			
				default:
					break;
			}
			break;
	}

	return "";
}

Vector3 func_32(int iParam0, int iParam1) // Position - 0xC6D Hash - 0xF1FB4833 ^0xF1FB4833
{
	switch (iParam0)
	{
		case joaat("world_human_push_broom_working"):
		case joaat("world_human_straw_broom_working"):
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				case 2:
					return 0.380574f, -0.380598f, 0f;
			
				case 3:
					return 0.380598f, 0.380574f, 0f;
			
				case 4:
					return 0.53823f, 0f, 0f;
			
				case 5:
					return -0.53823f, 0f, 0f;
			
				case 6:
					return -0.380574f, -0.380598f, 0f;
			
				case 7:
					return -0.380598f, 0.380574f, 0f;
			
				default:
					break;
			}
			break;
	}

	return 0f, 0f, 0f;
}

float func_33(int iParam0, int iParam1) // Position - 0xD1F Hash - 0x7ADB731F ^0x7ADB731F
{
	switch (iParam0)
	{
		case joaat("world_human_push_broom_working"):
		case joaat("world_human_straw_broom_working"):
			switch (iParam1)
			{
				case 0:
					return 90f;
			
				case 1:
					return -90f;
			
				case 2:
					return 0f;
			
				case 3:
					return 0f;
			
				case 4:
					return 0f;
			
				case 5:
					return 0f;
			
				case 6:
					return 0f;
			
				case 7:
					return 0f;
			
				default:
					break;
			}
			break;
	}

	return 0f;
}

void func_34(var uParam0, float fParam1) // Position - 0xD9F Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_36() - fParam1;
	func_37(uParam0, 1);
	func_38(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_35(var uParam0) // Position - 0xDC5 Hash - 0x39705408 ^0x39705408
{
	return func_27(*uParam0, 2);
}

float func_36() // Position - 0xDD5 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_37(var uParam0, int iParam1) // Position - 0xE07 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_38(var uParam0, int iParam1) // Position - 0xE18 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

