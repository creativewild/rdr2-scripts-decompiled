#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	BOOL bLocal_13 = 0;
	Hash hLocal_14 = 0;
	Any anLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	Hash hLocal_18 = 0;
	Hash hLocal_19 = 0;
	var uLocal_20 = 0;
	Hash hLocal_21 = 0;
	Hash hLocal_22 = 0;
	Hash hLocal_23 = 0;
	Hash hLocal_24 = 0;
	Hash hLocal_25 = 0;
	Hash hLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	Ped pedLocal_30 = 0;
	Ped pedLocal_31 = 0;
	BOOL bLocal_32 = 0;
	BOOL bLocal_33 = 0;
	BOOL bLocal_34 = 0;
	BOOL bLocal_35 = 0;
	BOOL bLocal_36 = 0;
	BOOL bLocal_37 = 0;
	BOOL bLocal_38 = 0;
	BOOL bLocal_39 = 0;
	BOOL bLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	Object obLocal_53 = 0;
	Object obLocal_54 = 0;
	Entity eLocal_55 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE11E8660 ^0xE1C2806D
{
	bLocal_13 = 1;
	anLocal_15 = anScriptParam_0;
	iLocal_16 = anScriptParam_0.f_1;
	iLocal_17 = anScriptParam_0.f_2;
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

void func_1() // Position - 0x56 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Position - 0x5E Hash - 0x43FBC4A8 ^0x4278D3E2
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_15);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x83 Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_14 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_14) == 0)
			return bLocal_13;
		else
			return true;

	return bLocal_13;
}

void func_4() // Position - 0xAC Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Position - 0xB4 Hash - 0x3D22DF46 ^0xED7FF9EC
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

void func_6() // Position - 0x10C Hash - 0x2362B730 ^0x66F2295F
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int num;
	Hash scenarioHash;
	float scenarioPointHeading;

	flag = func_12(pedLocal_30, 0);
	flag2 = func_13(iLocal_41);
	flag3 = ENTITY::DOES_ENTITY_EXIST(pedLocal_31);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_16))
	{
		iLocal_29 = 6;
		return;
	}

	if (iLocal_29 <= 1 && func_14(Global_34, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true)) >= 1600f)
		return;

	if (iLocal_29 <= 1 && ENTITY::GET_ENTITY_SPEED(Global_33) >= 8f)
		return;

	if (iLocal_29 > 1 && iLocal_29 != 6 && Global_1939959.f_51)
	{
		func_15();
		iLocal_29 = 2;
		bLocal_38 = true;
	}

	if (iLocal_29 > 1 && iLocal_29 != 6)
	{
		if (iLocal_29 != 5 && iLocal_29 != 2 && !flag)
		{
			func_15();
		
			if (bLocal_33)
			{
				iLocal_29 = 5;
				iLocal_28 = 0;
			}
			else
			{
				iLocal_29 = 2;
			}
		
			return;
		}
	
		if (!flag3)
		{
			iLocal_29 = 6;
			return;
		}
	
		if (PED::IS_PED_IN_COMBAT(pedLocal_31, 0))
		{
			iLocal_29 = 6;
			return;
		}
	}

	func_16();
	func_17(flag);

	switch (iLocal_29)
	{
		case 0:
			num = func_18();
			iLocal_52 = func_20(func_19(), num);
		
			if (iLocal_52 == -1)
				return;
		
			bLocal_32 = false;
			bLocal_39 = false;
			STREAMING::REQUEST_MODEL(joaat("p_coin01x"), false);
			bLocal_38 = false;
			iLocal_27 = 0;
		
			if (iLocal_17 == joaat("world_human_barcustomer_beer"))
			{
				STREAMING::REQUEST_MODEL(joaat("p_bottlebeer01x"), false);
				scenarioHash = joaat("world_human_bartender_beer");
				hLocal_18 = joaat("CUSTOMER_GRAB_BEER");
				hLocal_19 = joaat("CUSTOMER_GRAB_BEER_MALE_B");
				hLocal_21 = joaat("BARFRONT_TRANS_UNDER_BEER");
				hLocal_22 = joaat("UNDERBAR_TRANS_OVERBAR_BEER");
				hLocal_23 = joaat("BARTENDER_RETURN_TO_IDLE");
				hLocal_24 = joaat("BARTENDER_CLEAN_BEER_OVER_BAR");
				hLocal_25 = -1931194237;
				hLocal_26 = joaat("BARTENDER_CLEAN_BEER_UNDER_TRANS_BARFRONT");
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("world_human_bartender_beer"), 262144, 0, 0);
			}
			else
			{
				scenarioHash = joaat("world_human_bartender_whiskey");
				hLocal_18 = joaat("CUSTOMER_GRAB_WHISKEY");
				hLocal_19 = joaat("CUSTOMER_GRAB_WHISKEY_MALE_B");
				hLocal_21 = joaat("BARFRONT_TRANS_UNDER_WHISKEY");
				hLocal_22 = joaat("UNDER_TRANS_OVER_WHISKEY");
				hLocal_23 = joaat("UNDER_TRANS_BARFRONT_WHISKEY");
				hLocal_24 = joaat("BARTENDER_CLEAN_WHISKEY_OVER_BAR");
				hLocal_25 = joaat("BARTENDER_CLEAN_WHISKEY_OVER_TRANS_UNDER_BAR");
				hLocal_26 = joaat("BARTENDER_CLEAN_WHISKEY_UNDER_TRANS_BARFRONT");
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("world_human_bartender_whiskey"), 262144, 0, 0);
				STREAMING::REQUEST_MODEL(joaat("p_shotglass01x"), false);
				STREAMING::REQUEST_MODEL(joaat("p_bottlejd01x"), false);
			}
		
			scenarioPointHeading = TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true);
			iLocal_42 = TASK::CREATE_SCENARIO_POINT_HASH(scenarioHash, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), scenarioPointHeading, func_21()), scenarioPointHeading - 180f, 0, 0, false);
			TASK::_SET_SCENARIO_POINT_HEADING(iLocal_42, scenarioPointHeading - 180f, true);
			TASK::_0xA7479FB665361EDB(iLocal_42, 0);
			TASK::_0xE69FDA40AAC3EFC0(iLocal_42, 0);
			pedLocal_30 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_16);
			iLocal_41 = func_22(iLocal_52);
		
			if (func_23(iLocal_41))
				pedLocal_31 = func_24(iLocal_41);
		
			iLocal_29 = 1;
			func_25(&uLocal_46, true);
			break;
	
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_coin01x")))
				return;
		
			if (iLocal_17 == joaat("world_human_barcustomer_beer"))
			{
				if (!STREAMING::HAS_MODEL_LOADED(joaat("p_bottlebeer01x")))
					return;
			
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("world_human_bartender_beer"), false))
					return;
			}
			else
			{
				if (!STREAMING::HAS_MODEL_LOADED(joaat("p_shotglass01x")))
					return;
			
				if (!STREAMING::HAS_MODEL_LOADED(joaat("p_bottlejd01x")))
					return;
			
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("world_human_bartender_whiskey"), false))
					return;
			}
		
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_42))
				return;
		
			if (!func_12(pedLocal_30, 0))
			{
				pedLocal_30 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_16);
				return;
			}
		
			if (!flag3)
			{
				if (func_23(iLocal_41))
					pedLocal_31 = func_24(iLocal_41);
			
				return;
			}
		
			func_25(&uLocal_43, true);
			iLocal_28 = 0;
			iLocal_29 = 3;
			break;
	
		case 2:
			if (!func_26() && !flag2 && !Global_1939959.f_51 && flag)
			{
				iLocal_28 = 0;
				iLocal_29 = 3;
			
				if (bLocal_33)
					iLocal_29 = 5;
			}
			break;
	
		case 3:
			func_27(flag, flag2, flag3);
			break;
	
		case 4:
			func_28();
			break;
	
		case 5:
			func_29(flag, flag2, flag3);
			break;
	
		case 6:
			bLocal_13 = false;
			break;
	}

	return;
}

void func_7() // Position - 0x4C4 Hash - 0x935411CD ^0x8656AFC4
{
	func_15();
	TASK::_0x4161648394262FDF(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), 0.15f);

	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_42))
		TASK::_DELETE_SCENARIO_POINT(iLocal_42);

	return;
}

void func_8() // Position - 0x4EF Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x4FB Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_30(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x523 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_31(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x54B Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_32(&eventData);
	}

	return;
}

BOOL func_12(Ped pedParam0, int iParam1) // Position - 0x573 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_33(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_33(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_33(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_33(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_33(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_33(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_33(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_33(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

BOOL func_13(int iParam0) // Position - 0x672 Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_34(iParam0, 1);
}

float func_14(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x681 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_15() // Position - 0x69F Hash - 0xCC545AB4 ^0xB9BEDEA
{
	PersChar persChar;

	if (!Global_1939959.f_51)
	{
		if (Global_1939959.f_50 == SCRIPTS::GET_ID_OF_THIS_THREAD())
			Global_1939959.f_50 = 0;
	
		persChar = func_35(iLocal_41);
	
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		{
			PERSCHAR::_0xA2B18FF8D39F6D87(persChar);
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(persChar);
		}
	}
	else
	{
		Global_1939959.f_50 = 0;
	}

	return;
}

void func_16() // Position - 0x6EC Hash - 0x825C8122 ^0xC7A0EC73
{
	if (bLocal_34 && ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_31, -1342079302))
	{
		if (ENTITY::DOES_ENTITY_EXIST(eLocal_55))
			OBJECT::DELETE_OBJECT(&eLocal_55);
	
		bLocal_34 = false;
	}

	if (bLocal_35 && ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_31, 2131322378))
	{
		PED::_GIVE_PED_SCENARIO_PROP(pedLocal_31, obLocal_54, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_SERVE_WHISKEY_RETURN_GLASS_UNDER_BAR_MALE_A", true);
		bLocal_35 = false;
	}

	return;
}

void func_17(BOOL bParam0) // Position - 0x745 Hash - 0xE63F222C ^0x619EBE78
{
	Hash activeDynamicScenario;

	if (bLocal_37 && PED::_IS_PED_DOING_SCENARIO_TRANSITION(pedLocal_30))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedLocal_30, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pedLocal_30, false);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(pedLocal_30, 0, 1);
	}

	if (!bLocal_32 && bLocal_38 && ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_30, 864365833))
	{
		if (iLocal_17 == joaat("world_human_barcustomer_beer"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_53))
				obLocal_53 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
		
			if (PED::_GIVE_PED_SCENARIO_PROP(pedLocal_30, obLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", true))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_37 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_54))
				obLocal_54 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
		
			if (PED::_GIVE_PED_SCENARIO_PROP(pedLocal_30, obLocal_54, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", true))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_37 = false;
			}
		}
	}

	if (bLocal_36 && ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_30, 350240706))
	{
		obLocal_54 = PED::_GET_PED_REGISTER_PROP(pedLocal_30, "p_shotGlass01x_PH_L_Hand", true);
		bLocal_36 = false;
	}

	if (bParam0)
		activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(pedLocal_30);

	if (bLocal_40 && !bLocal_32 && !bLocal_33 && activeDynamicScenario == joaat("world_human_barcustomer_has_beer_male_a") || activeDynamicScenario == joaat("world_human_barcustomer_has_whiskey_glass_male_a"))
	{
		if (iLocal_17 == joaat("world_human_barcustomer_beer"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_53))
				obLocal_53 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
		
			if (PED::_GIVE_PED_SCENARIO_PROP(pedLocal_30, obLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", true))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_40 = false;
				bLocal_37 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_54))
				obLocal_54 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
		
			if (PED::_GIVE_PED_SCENARIO_PROP(pedLocal_30, obLocal_54, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", true))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_40 = false;
				bLocal_37 = false;
			}
		}
	}

	if (bLocal_40 && !bLocal_32 && !PED::_GET_IS_PED_COMMAND_HASH_PRESENT(pedLocal_30, hLocal_18) && !PED::_GET_IS_PED_COMMAND_HASH_PRESENT(pedLocal_30, hLocal_19))
	{
		PED::_ADD_SCENARIO_TRANSITION(pedLocal_30);
	
		if (activeDynamicScenario == joaat("world_human_barcustomer_no_drink_male_a"))
		{
			PED::_GIVE_PED_HASH_COMMAND(pedLocal_30, hLocal_18, 3f);
			bLocal_37 = true;
		}
		else if (activeDynamicScenario == joaat("world_human_barcustomer_no_drink_male_b"))
		{
			PED::_GIVE_PED_HASH_COMMAND(pedLocal_30, hLocal_19, 3f);
			bLocal_37 = true;
		}
	}

	return;
}

int func_18() // Position - 0x979 Hash - 0xCC8D2384 ^0x36CD3E2E
{
	switch (func_19())
	{
		case 5:
			if (func_37(func_36(2), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true)))
				return 2;
			else
				return 1;
			break;
	
		case 40:
		case 98:
		case 121:
		case 127:
			return 0;
	
		case 81:
			if (func_37(func_36(0), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true)))
				return 0;
			else
				return 1;
			break;
	
		case 111:
			return 2;
	}

	return -1;
}

int func_19() // Position - 0xA00 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

int func_20(int iParam0, int iParam1) // Position - 0xA0E Hash - 0x19643788 ^0x19643788
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 1:
					return 1;
			
				case 2:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				default:
					break;
			}
			break;
	
		case 81:
			switch (iParam1)
			{
				case 0:
					return 5;
			
				case 1:
					return 6;
			
				default:
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 0:
					return 8;
			
				default:
					break;
			}
			break;
	
		case 111:
			switch (iParam1)
			{
				case 2:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 121:
			switch (iParam1)
			{
				case 0:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 0:
					return 7;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

Vector3 func_21() // Position - 0xAF1 Hash - 0x8664ACB1 ^0x8664ACB1
{
	return -0.235327f, 1.850775f, 0f;
}

int func_22(int iParam0) // Position - 0xB04 Hash - 0x8E2DB910 ^0x2EDB8F73
{
	switch (iParam0)
	{
		case 0:
			return 502;
	
		case 1:
			return 138;
	
		case 2:
			return 137;
	
		case 3:
			return 69;
	
		case 4:
			return 345;
	
		case 5:
			return 1;
	
		case 6:
			return 2;
	
		case 7:
			return 426;
	
		case 8:
			return 437;
	
		default:
		
	}

	return -1;
}

BOOL func_23(int iParam0) // Position - 0xB7A Hash - 0x958B152F ^0x888D9460
{
	return iParam0 > -1 && iParam0 < 948;
}

Ped func_24(int iParam0) // Position - 0xB91 Hash - 0xEEC501EA ^0xEEC501EA
{
	if (!func_23(iParam0))
		return 0;

	if (!func_34(iParam0, 2))
		return 0;

	if (func_39(func_38(iParam0)))
		return func_40(iParam0);

	return PED::_0xE76687023D8C8505(func_41(iParam0), 0);
}

void func_25(var uParam0, BOOL bParam1) // Position - 0xBD7 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_42(uParam0))
		func_43(uParam0);

	return;
}

BOOL func_26() // Position - 0xBF7 Hash - 0xDB5DCF1A ^0x88F3AE13
{
	if (Global_1939959.f_50 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		if (Global_1939959.f_50 == 0)
			return false;
		else
			return true;

	if (Global_1939959.f_51)
		return true;

	return false;
}

void func_27(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC2F Hash - 0x560F73AE ^0xFD1DD7CC
{
	BOOL isPedUsingThisScenario;
	Hash activeDynamicScenario;
	BOOL isPedUsingThisScenario2;

	if (Global_1939959.f_51)
		return;

	switch (iLocal_28)
	{
		case 0:
			isPedUsingThisScenario = PED::IS_PED_USING_THIS_SCENARIO(pedLocal_30, iLocal_16);
		
			if (!isPedUsingThisScenario && !TASK::IS_PED_EXITING_SCENARIO(pedLocal_30, true))
			{
				func_15();
				iLocal_29 = 5;
				iLocal_28 = 0;
				return;
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(eLocal_55) && TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_30, 1))
			{
				eLocal_55 = PED::_GET_PED_REGISTER_PROP(pedLocal_30, "p_coin01x", true);
			
				if (ENTITY::DOES_ENTITY_EXIST(eLocal_55))
					ENTITY::_SET_ENTITY_CARRYING_FLAG(eLocal_55, 2, false);
			
				bLocal_34 = true;
			}
		
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_30, 0) && isPedUsingThisScenario)
			{
				if (bParam1 && !func_44(iLocal_41) || func_26())
				{
					iLocal_29 = 2;
					return;
				}
				else
				{
					func_45();
				}
			
				activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(pedLocal_30);
			
				if (activeDynamicScenario != joaat("world_human_barcustomer_no_drink_male_a") && activeDynamicScenario != joaat("world_human_barcustomer_no_drink_male_b") && activeDynamicScenario != joaat("world_human_barcustomer_no_drink_arthur"))
				{
					iLocal_29 = 5;
					iLocal_28 = 0;
					bLocal_33 = true;
					func_15();
					return;
				}
			
				if (!Global_1939959.f_51)
				{
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(pedLocal_31);
					TASK::TASK_USE_SCENARIO_POINT(pedLocal_31, iLocal_42, 0, 0, true, false, 0, false, -1082130432, false);
					iLocal_28 = 1;
				}
			}
			break;
	
		case 1:
			isPedUsingThisScenario2 = PED::IS_PED_USING_THIS_SCENARIO(pedLocal_31, iLocal_42);
		
			if (!isPedUsingThisScenario2 && !func_46(pedLocal_31, -76381094))
				iLocal_28 = 0;
		
			isPedUsingThisScenario = PED::IS_PED_USING_THIS_SCENARIO(pedLocal_30, iLocal_16);
		
			if (!isPedUsingThisScenario && !TASK::IS_PED_EXITING_SCENARIO(pedLocal_30, true))
			{
				func_15();
				iLocal_29 = 5;
				iLocal_28 = 0;
				return;
			}
		
			if (!isPedUsingThisScenario2 || !TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_31, 0))
				return;
		
			if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(pedLocal_31, hLocal_21))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_31);
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_31, hLocal_21, 3f);
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_31);
				iLocal_27 = iLocal_27 + 1;
			}
		
			if (iLocal_27 > 5)
			{
				func_15();
				iLocal_28 = 0;
			}
		
			if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(pedLocal_31))
			{
				func_25(&uLocal_49, true);
				iLocal_28 = 3;
			}
			break;
	
		case 3:
			if (func_47())
			{
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_31, hLocal_22, 3f);
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_31);
			
				if (iLocal_17 == joaat("world_human_barcustomer_whiskey"))
					hLocal_21 = joaat("OVER_TRANS_UNDER_WHISKEY");
			
				func_25(&uLocal_49, true);
				iLocal_28 = 4;
			}
			break;
	
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_31, 595016159) && !bLocal_39)
				func_48();
		
			if (func_47())
			{
				if (!bLocal_39)
					func_48();
			
				if (iLocal_17 == joaat("world_human_barcustomer_beer"))
				{
					iLocal_28 = 6;
					obLocal_53 = PED::_GET_PED_REGISTER_PROP(pedLocal_31, "p_bottleBeer01x_PH_R_HAND", false);
					ENTITY::DOES_ENTITY_EXIST(obLocal_54);
				}
				else
				{
					iLocal_28 = 5;
					obLocal_54 = PED::_GET_PED_REGISTER_PROP(pedLocal_31, "p_shotGlass01x_PH_L_HAND", false);
					ENTITY::DOES_ENTITY_EXIST(obLocal_54);
				}
			
				if (iLocal_17 == joaat("world_human_barcustomer_beer"))
					PED::_GIVE_PED_HASH_COMMAND(pedLocal_31, hLocal_23, 3f);
				else
					PED::_GIVE_PED_HASH_COMMAND(pedLocal_31, hLocal_21, 3f);
			
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_31);
				bLocal_38 = true;
				bLocal_40 = true;
				func_25(&uLocal_49, true);
			}
			break;
	
		case 5:
			if (func_47())
			{
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_31, hLocal_23, 3f);
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_31);
				func_25(&uLocal_49, true);
				iLocal_28 = 7;
			}
			break;
	
		case 6:
			if (func_49())
			{
				func_15();
				func_50(&uLocal_49);
				iLocal_29 = 5;
				iLocal_28 = 0;
				bLocal_33 = true;
			}
			break;
	
		case 7:
			if (func_49())
			{
				func_15();
				func_50(&uLocal_49);
				iLocal_29 = 5;
				iLocal_28 = 0;
				bLocal_33 = true;
			}
			break;
	}

	return;
}

void func_28() // Position - 0xF52 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_29(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF5A Hash - 0xEEC7779F ^0x5A65C69C
{
	BOOL isPedUsingThisScenario;

	if (Global_1939959.f_51)
		return;

	switch (iLocal_28)
	{
		case 0:
			if (bParam0)
				isPedUsingThisScenario = PED::IS_PED_USING_THIS_SCENARIO(pedLocal_30, iLocal_16);
			else
				isPedUsingThisScenario = false;
		
			if (bParam1 && !func_44(iLocal_41) || func_26())
			{
				iLocal_29 = 2;
				return;
			}
		
			if (!bLocal_36 && TASK::IS_PED_EXITING_SCENARIO(pedLocal_30, false))
				bLocal_36 = true;
		
			if (bParam0 && isPedUsingThisScenario && !bLocal_33)
			{
				iLocal_29 = 0;
				iLocal_28 = 0;
				return;
			}
		
			if (!isPedUsingThisScenario && !TASK::IS_PED_EXITING_SCENARIO(pedLocal_30, false))
			{
				if (iLocal_17 == joaat("world_human_barcustomer_beer"))
				{
					if (!TASK::_DOES_SCENARIO_POINT_HAVE_PROPS(iLocal_16))
					{
						iLocal_29 = 6;
						return;
					}
				}
				else if (!bLocal_33)
				{
					iLocal_29 = 6;
					return;
				}
			
				bLocal_35 = true;
			
				if (!Global_1939959.f_51)
				{
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(pedLocal_31);
					TASK::TASK_USE_SCENARIO_POINT(pedLocal_31, iLocal_42, 0, 0, true, false, 0, false, -1082130432, false);
					iLocal_28 = 1;
				}
			}
			break;
	
		case 1:
			if (bParam1 && !func_44(iLocal_41) || func_26())
			{
				iLocal_29 = 2;
				iLocal_28 = 0;
				return;
			}
		
			if (!PED::IS_PED_USING_THIS_SCENARIO(pedLocal_31, iLocal_42))
				return;
		
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_31, 0) && !PED::_GET_IS_PED_COMMAND_HASH_PRESENT(pedLocal_31, hLocal_24))
			{
				func_45();
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_31, hLocal_24, 3f);
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_31);
			}
		
			if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(pedLocal_31))
			{
				func_25(&uLocal_49, true);
				iLocal_28 = 2;
			}
			break;
	
		case 2:
			if (func_47())
			{
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_31, hLocal_25, 3f);
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_31);
				iLocal_28 = 3;
				func_25(&uLocal_49, true);
			}
			break;
	
		case 3:
			if (func_47())
			{
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_31, hLocal_26, 3f);
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_31);
				iLocal_28 = 7;
				func_25(&uLocal_49, true);
			}
			break;
	
		case 7:
			if (func_49())
			{
				func_15();
				iLocal_29 = 6;
			}
			break;
	}

	return;
}

void func_30(var uParam0) // Position - 0x1130 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_31(var uParam0) // Position - 0x1138 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_32(var uParam0) // Position - 0x1140 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_33(int iParam0, int iParam1) // Position - 0x1148 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_34(int iParam0, int iParam1) // Position - 0x1157 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_51() != -1)
		return false;

	if (!func_23(iParam0))
		return false;

	return Global_9899[iParam0 /*2*/] && iParam1 != false;
}

PersChar func_35(int iParam0) // Position - 0x1185 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_23(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/].f_1;
}

Volume func_36(int iParam0) // Position - 0x11A5 Hash - 0x4F4A4534 ^0x1E9521C1
{
	Volume aggregate;

	switch (func_19())
	{
		case 5:
			if (iParam0 == 2)
			{
				aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSaloonFancyInterior");
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2629.3962f, -1221.9052f, 54.832237f, 0f, 0f, -135.58002f, 3.110129f, 1.920147f, 4.694317f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2628.751f, -1228.0859f, 54.832237f, 0f, 0f, 179.41998f, 2.229593f, 11.711162f, 4.694317f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2635.5056f, -1227.1652f, 54.832237f, 0f, 0f, 179.41998f, 11.648682f, 13.721924f, 4.694317f);
				return aggregate;
			}
			else
			{
				return VOLUME::CREATE_VOLUME_BOX(2796.7048f, -1167.9714f, 48.561607f, 0f, 0f, -120.25001f, 13.490967f, 10.186265f, 3.324371f);
			}
			break;
	
		case 40:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volSaloonInterior");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -818.523f, -1319.681f, 46.59f, 0f, 0f, 90f, 15.6f, 16f, 8f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -809.672f, -1319.568f, 48.818f, 0f, 0f, 90f, 15.5f, 2f, 4f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -809.672f, -1324.85f, 44.569f, 0f, 0f, 90f, 5.2f, 2f, 3.8f);
			return aggregate;
	
		case 81:
			if (iParam0 == 0)
				return VOLUME::CREATE_VOLUME_BOX(-309.497f, 809.019f, 119.378f, 0f, 0f, 99.715f, 20.984f, 11.374f, 8.647388f);
			else
				return VOLUME::CREATE_VOLUME_BOX(-241.294f, 770f, 118.14f, 0f, 0f, 110.709f, 8.286f, 7.345f, 5f);
			break;
	
		case 98:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSaloonInterior");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2946.662f, 523.323f, 46.02f, 0f, 0f, 180f, 9.627f, 13.43f, 3.143f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2939.132f, 523.346f, 46.02f, 0f, 0f, 180f, 5.235f, 9.883f, 3.143f);
			return aggregate;
	
		case 111:
			return VOLUME::CREATE_VOLUME_BOX(1345.5344f, -1375.4001f, 81.161f, 0f, 0f, 80.2f, 11.601f, 14.755f, 3.376f);
	
		case 121:
			return VOLUME::CREATE_VOLUME_BOX(-5514.4536f, -2910.941f, 0.196263f, 0f, 0f, 28.00368f, 12.959498f, 18.614845f, 9.427321f);
	
		case 127:
			return VOLUME::CREATE_VOLUME_BOX(-3701.0564f, -2595.4563f, -14.373728f, 0f, 0f, 0f, 21.947664f, 22.090923f, 14.360381f);
	}

	return VOLUME::CREATE_VOLUME_BOX(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
}

BOOL func_37(Volume volParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x147F Hash - 0x23F7A048 ^0x52C55AC8
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return false;

	return VOLUME::IS_POINT_IN_VOLUME(volParam0, vParam1);
}

Hash func_38(int iParam0) // Position - 0x149F Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_23(iParam0))
		return 0;

	return Global_1893799[iParam0 /*3*/];
}

BOOL func_39(Hash hParam0) // Position - 0x14BD Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

Ped func_40(int iParam0) // Position - 0x14C9 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_35(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

Hash func_41(int iParam0) // Position - 0x14F7 Hash - 0xED567DFA ^0x7CDFEFC2
{
	if (!func_23(iParam0))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_MODEL_NAME(Global_1893799[iParam0 /*3*/]);
}

BOOL func_42(var uParam0) // Position - 0x1519 Hash - 0x5001E582 ^0x5001E582
{
	return func_52(*uParam0, 1);
}

void func_43(var uParam0) // Position - 0x1529 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_53(uParam0, 0f);
	return;
}

BOOL func_44(int iParam0) // Position - 0x1538 Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_23(iParam0))
		return false;

	return Global_1893799[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_45() // Position - 0x155D Hash - 0x186243D9 ^0x8E684841
{
	PersChar persChar;

	if (Global_1939959.f_51)
		return;

	Global_1939959.f_50 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	persChar = func_35(iLocal_41);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		PERSCHAR::_0x406808610220405B(func_35(iLocal_41));

	return;
}

BOOL func_46(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x1596 Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_47() // Position - 0x15EF Hash - 0xE8C032FC ^0x2517FE74
{
	if (!Global_1939959.f_51 && func_54(&uLocal_49) > 1250 && !TASK::IS_PED_SCENARIO_REACT_LOOKING(pedLocal_31, true) && !PED::_IS_PED_DOING_SCENARIO_TRANSITION(pedLocal_31) || ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_31, 1004907005))
		return true;

	return false;
}

void func_48() // Position - 0x163F Hash - 0xE7DE6A8B ^0x35AA876F
{
	if (!bLocal_39)
	{
		if (iLocal_17 == joaat("world_human_barcustomer_beer"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_53))
			{
				obLocal_53 = OBJECT::CREATE_OBJECT(joaat("p_bottlebeer01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
				PED::_GIVE_PED_SCENARIO_PROP(pedLocal_31, obLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARTENDER_BEER", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", true);
				bLocal_39 = true;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(obLocal_53) && !ENTITY::DOES_ENTITY_EXIST(obLocal_54))
		{
			obLocal_53 = OBJECT::CREATE_OBJECT(joaat("p_bottlejd01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
			obLocal_54 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_42, true), true, true, false, false, true);
			PED::_GIVE_PED_SCENARIO_PROP(pedLocal_31, obLocal_53, "p_bottleJD01x_ph_r_hand", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", true);
			PED::_GIVE_PED_SCENARIO_PROP(pedLocal_31, obLocal_54, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", true);
			bLocal_39 = true;
		}
	}

	return;
}

BOOL func_49() // Position - 0x1702 Hash - 0xB78322BC ^0xF8B1F7A9
{
	if (!PED::_IS_PED_DOING_SCENARIO_TRANSITION(pedLocal_31) || ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_31, 1004907005) && func_54(&uLocal_49) > 1250)
		return true;

	return false;
}

void func_50(var uParam0) // Position - 0x1739 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

int func_51() // Position - 0x174F Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_52(int iParam0, int iParam1) // Position - 0x175D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_53(var uParam0, float fParam1) // Position - 0x176C Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_55() - fParam1;
	func_56(uParam0, 1);
	func_57(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_54(var uParam0) // Position - 0x1792 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_42(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_58(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_59() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

float func_55() // Position - 0x17E5 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_56(var uParam0, int iParam1) // Position - 0x1817 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_57(var uParam0, int iParam1) // Position - 0x1828 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_58(var uParam0) // Position - 0x183D Hash - 0x39705408 ^0x39705408
{
	return func_52(*uParam0, 2);
}

int func_59() // Position - 0x184D Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

