#region Local Var
	BOOL bLocal_0 = 0;
	Hash hLocal_1 = 0;
	Any anLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	Hash hLocal_5 = 0;
	Hash hLocal_6 = 0;
	var uLocal_7 = 0;
	Hash hLocal_8 = 0;
	Hash hLocal_9 = 0;
	Hash hLocal_10 = 0;
	Hash hLocal_11 = 0;
	Hash hLocal_12 = 0;
	Hash hLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	Ped pedLocal_17 = 0;
	Ped pedLocal_18 = 0;
	BOOL bLocal_19 = 0;
	BOOL bLocal_20 = 0;
	BOOL bLocal_21 = 0;
	BOOL bLocal_22 = 0;
	BOOL bLocal_23 = 0;
	BOOL bLocal_24 = 0;
	BOOL bLocal_25 = 0;
	BOOL bLocal_26 = 0;
	BOOL bLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	Object obLocal_40 = 0;
	Object obLocal_41 = 0;
	Entity eLocal_42 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE11E8660 ^0xE1C2806D
{
	bLocal_0 = 1;
	anLocal_2 = anScriptParam_0;
	iLocal_3 = anScriptParam_0.f_1;
	iLocal_4 = anScriptParam_0.f_2;
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
	SCRIPTS::_0xE7282390542F570D(anLocal_2);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x83 Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_1 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_1) == 0)
			return bLocal_0;
		else
			return true;

	return bLocal_0;
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

	flag = func_12(pedLocal_17, 0);
	flag2 = func_13(iLocal_28);
	flag3 = ENTITY::DOES_ENTITY_EXIST(pedLocal_18);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
	{
		iLocal_16 = 6;
		return;
	}

	if (iLocal_16 <= 1 && func_14(Global_36, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true)) >= 1600f)
		return;

	if (iLocal_16 <= 1 && ENTITY::GET_ENTITY_SPEED(Global_35) >= 8f)
		return;

	if (iLocal_16 > 1 && iLocal_16 != 6 && Global_1935369.f_51)
	{
		func_15();
		iLocal_16 = 2;
		bLocal_25 = true;
	}

	if (iLocal_16 > 1 && iLocal_16 != 6)
	{
		if (iLocal_16 != 5 && iLocal_16 != 2 && !flag)
		{
			func_15();
		
			if (bLocal_20)
			{
				iLocal_16 = 5;
				iLocal_15 = 0;
			}
			else
			{
				iLocal_16 = 2;
			}
		
			return;
		}
	
		if (!flag3)
		{
			iLocal_16 = 6;
			return;
		}
	
		if (PED::IS_PED_IN_COMBAT(pedLocal_18, 0))
		{
			iLocal_16 = 6;
			return;
		}
	}

	func_16();
	func_17(flag);

	switch (iLocal_16)
	{
		case 0:
			num = func_18();
			iLocal_39 = func_20(func_19(), num);
		
			if (iLocal_39 == -1)
				return;
		
			bLocal_19 = false;
			bLocal_26 = false;
			STREAMING::REQUEST_MODEL(joaat("p_coin01x"), false);
			bLocal_25 = false;
			iLocal_14 = 0;
		
			if (iLocal_4 == joaat("world_human_barcustomer_beer"))
			{
				STREAMING::REQUEST_MODEL(joaat("p_bottlebeer01x"), false);
				scenarioHash = joaat("world_human_bartender_beer");
				hLocal_5 = joaat("CUSTOMER_GRAB_BEER");
				hLocal_6 = joaat("CUSTOMER_GRAB_BEER_MALE_B");
				hLocal_8 = joaat("BARFRONT_TRANS_UNDER_BEER");
				hLocal_9 = joaat("UNDERBAR_TRANS_OVERBAR_BEER");
				hLocal_10 = joaat("BARTENDER_RETURN_TO_IDLE");
				hLocal_11 = joaat("BARTENDER_CLEAN_BEER_OVER_BAR");
				hLocal_12 = -1931194237;
				hLocal_13 = joaat("BARTENDER_CLEAN_BEER_UNDER_TRANS_BARFRONT");
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("world_human_bartender_beer"), 262144, 0, 0);
			}
			else
			{
				scenarioHash = joaat("world_human_bartender_whiskey");
				hLocal_5 = joaat("CUSTOMER_GRAB_WHISKEY");
				hLocal_6 = joaat("CUSTOMER_GRAB_WHISKEY_MALE_B");
				hLocal_8 = joaat("BARFRONT_TRANS_UNDER_WHISKEY");
				hLocal_9 = joaat("UNDER_TRANS_OVER_WHISKEY");
				hLocal_10 = joaat("UNDER_TRANS_BARFRONT_WHISKEY");
				hLocal_11 = joaat("BARTENDER_CLEAN_WHISKEY_OVER_BAR");
				hLocal_12 = joaat("BARTENDER_CLEAN_WHISKEY_OVER_TRANS_UNDER_BAR");
				hLocal_13 = joaat("BARTENDER_CLEAN_WHISKEY_UNDER_TRANS_BARFRONT");
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("world_human_bartender_whiskey"), 262144, 0, 0);
				STREAMING::REQUEST_MODEL(joaat("p_shotglass01x"), false);
				STREAMING::REQUEST_MODEL(joaat("p_bottlejd01x"), false);
			}
		
			scenarioPointHeading = TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true);
			iLocal_29 = TASK::CREATE_SCENARIO_POINT_HASH(scenarioHash, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), scenarioPointHeading, func_21()), scenarioPointHeading - 180f, 0, 0, false);
			TASK::_SET_SCENARIO_POINT_HEADING(iLocal_29, scenarioPointHeading - 180f, true);
			TASK::_0xA7479FB665361EDB(iLocal_29, 0);
			TASK::_0xE69FDA40AAC3EFC0(iLocal_29, 0);
			pedLocal_17 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
			iLocal_28 = func_22(iLocal_39);
		
			if (func_23(iLocal_28))
				pedLocal_18 = func_24(iLocal_28);
		
			iLocal_16 = 1;
			func_25(&uLocal_33, true);
			break;
	
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_coin01x")))
				return;
		
			if (iLocal_4 == joaat("world_human_barcustomer_beer"))
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
		
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_29))
				return;
		
			if (!func_12(pedLocal_17, 0))
			{
				pedLocal_17 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
				return;
			}
		
			if (!flag3)
			{
				if (func_23(iLocal_28))
					pedLocal_18 = func_24(iLocal_28);
			
				return;
			}
		
			func_25(&uLocal_30, true);
			iLocal_15 = 0;
			iLocal_16 = 3;
			break;
	
		case 2:
			if (!func_26() && !flag2 && !Global_1935369.f_51 && flag)
			{
				iLocal_15 = 0;
				iLocal_16 = 3;
			
				if (bLocal_20)
					iLocal_16 = 5;
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
			bLocal_0 = false;
			break;
	}

	return;
}

void func_7() // Position - 0x4C4 Hash - 0x1C772A36 ^0x36010DB3
{
	func_15();

	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
		TASK::_0x4161648394262FDF(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), 0.15f);

	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_29))
		TASK::_DELETE_SCENARIO_POINT(iLocal_29);

	return;
}

void func_8() // Position - 0x4F8 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x504 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_30(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x52C Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_31(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x554 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_32(&eventData);
	}

	return;
}

BOOL func_12(Ped pedParam0, int iParam1) // Position - 0x57C Hash - 0x9BD5E73F ^0xD367FD44
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

BOOL func_13(int iParam0) // Position - 0x67B Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_34(iParam0, 1);
}

float func_14(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x68A Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_15() // Position - 0x6A8 Hash - 0xDD07F907 ^0x13A4173D
{
	PersChar persChar;

	if (!Global_1935369.f_51)
	{
		if (Global_1935369.f_50 == SCRIPTS::GET_ID_OF_THIS_THREAD())
			Global_1935369.f_50 = 0;
	
		if (func_13(iLocal_28))
			return;
	
		persChar = func_35(iLocal_28);
	
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		{
			PERSCHAR::_0xA2B18FF8D39F6D87(persChar);
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(persChar);
		}
	}
	else
	{
		Global_1935369.f_50 = 0;
	}

	return;
}

void func_16() // Position - 0x701 Hash - 0x9EB13E11 ^0x35F1CC3
{
	if (bLocal_21 && ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_18, -1342079302))
	{
		if (ENTITY::DOES_ENTITY_EXIST(eLocal_42))
			OBJECT::DELETE_OBJECT(&eLocal_42);
	
		bLocal_21 = false;
	}

	if (bLocal_22 && ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_18, 2131322378))
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_41))
			PED::_GIVE_PED_SCENARIO_PROP(pedLocal_18, obLocal_41, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_SERVE_WHISKEY_RETURN_GLASS_UNDER_BAR_MALE_A", true);
	
		bLocal_22 = false;
	}

	return;
}

void func_17(BOOL bParam0) // Position - 0x763 Hash - 0xE63F222C ^0x619EBE78
{
	Hash activeDynamicScenario;

	if (bLocal_24 && PED::_IS_PED_DOING_SCENARIO_TRANSITION(pedLocal_17))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedLocal_17, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pedLocal_17, false);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(pedLocal_17, 0, 1);
	}

	if (!bLocal_19 && bLocal_25 && ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_17, 864365833))
	{
		if (iLocal_4 == joaat("world_human_barcustomer_beer"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_40))
				obLocal_40 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
		
			if (PED::_GIVE_PED_SCENARIO_PROP(pedLocal_17, obLocal_40, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", true))
			{
				bLocal_19 = true;
				bLocal_25 = false;
				bLocal_20 = true;
				bLocal_24 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_41))
				obLocal_41 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
		
			if (PED::_GIVE_PED_SCENARIO_PROP(pedLocal_17, obLocal_41, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", true))
			{
				bLocal_19 = true;
				bLocal_25 = false;
				bLocal_20 = true;
				bLocal_24 = false;
			}
		}
	}

	if (bLocal_23 && ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_17, 350240706))
	{
		obLocal_41 = PED::_GET_PED_REGISTER_PROP(pedLocal_17, "p_shotGlass01x_PH_L_Hand", true);
		bLocal_23 = false;
	}

	if (bParam0)
		activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(pedLocal_17);

	if (bLocal_27 && !bLocal_19 && !bLocal_20 && activeDynamicScenario == joaat("world_human_barcustomer_has_beer_male_a") || activeDynamicScenario == joaat("world_human_barcustomer_has_whiskey_glass_male_a"))
	{
		if (iLocal_4 == joaat("world_human_barcustomer_beer"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_40))
				obLocal_40 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
		
			if (PED::_GIVE_PED_SCENARIO_PROP(pedLocal_17, obLocal_40, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", true))
			{
				bLocal_19 = true;
				bLocal_25 = false;
				bLocal_20 = true;
				bLocal_27 = false;
				bLocal_24 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_41))
				obLocal_41 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
		
			if (PED::_GIVE_PED_SCENARIO_PROP(pedLocal_17, obLocal_41, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", true))
			{
				bLocal_19 = true;
				bLocal_25 = false;
				bLocal_20 = true;
				bLocal_27 = false;
				bLocal_24 = false;
			}
		}
	}

	if (bLocal_27 && !bLocal_19 && !PED::_GET_IS_PED_COMMAND_HASH_PRESENT(pedLocal_17, hLocal_5) && !PED::_GET_IS_PED_COMMAND_HASH_PRESENT(pedLocal_17, hLocal_6))
	{
		PED::_ADD_SCENARIO_TRANSITION(pedLocal_17);
	
		if (activeDynamicScenario == joaat("world_human_barcustomer_no_drink_male_a"))
		{
			PED::_GIVE_PED_HASH_COMMAND(pedLocal_17, hLocal_5, 3f);
			bLocal_24 = true;
		}
		else if (activeDynamicScenario == joaat("world_human_barcustomer_no_drink_male_b"))
		{
			PED::_GIVE_PED_HASH_COMMAND(pedLocal_17, hLocal_6, 3f);
			bLocal_24 = true;
		}
	}

	return;
}

int func_18() // Position - 0x997 Hash - 0xCC8D2384 ^0x36CD3E2E
{
	switch (func_19())
	{
		case 5:
			if (func_37(func_36(2), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true)))
				return 2;
			else
				return 1;
			break;
	
		case 38:
		case 92:
		case 115:
		case 120:
			return 0;
	
		case 76:
			if (func_37(func_36(0), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true)))
				return 0;
			else
				return 1;
			break;
	
		case 105:
			return 2;
	}

	return -1;
}

int func_19() // Position - 0xA1E Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

int func_20(int iParam0, int iParam1) // Position - 0xA2C Hash - 0x19643788 ^0x19643788
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
	
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				default:
					break;
			}
			break;
	
		case 76:
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
	
		case 92:
			switch (iParam1)
			{
				case 0:
					return 8;
			
				default:
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 2:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 0:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 120:
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

Vector3 func_21() // Position - 0xB0F Hash - 0x8664ACB1 ^0x8664ACB1
{
	return -0.235327f, 1.850775f, 0f;
}

int func_22(int iParam0) // Position - 0xB22 Hash - 0x8E2DB910 ^0x5D83EE17
{
	switch (iParam0)
	{
		case 0:
			return 508;
	
		case 1:
			return 138;
	
		case 2:
			return 137;
	
		case 3:
			return 69;
	
		case 4:
			return 351;
	
		case 5:
			return 1;
	
		case 6:
			return 2;
	
		case 7:
			return 432;
	
		case 8:
			return 443;
	
		default:
		
	}

	return -1;
}

BOOL func_23(int iParam0) // Position - 0xB98 Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

Ped func_24(int iParam0) // Position - 0xBAF Hash - 0xEEC501EA ^0xEEC501EA
{
	if (!func_23(iParam0))
		return 0;

	if (!func_34(iParam0, 2))
		return 0;

	if (func_39(func_38(iParam0)))
		return func_40(iParam0);

	return PED::_0xE76687023D8C8505(func_41(iParam0), 0);
}

void func_25(var uParam0, BOOL bParam1) // Position - 0xBF5 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_42(uParam0))
		func_43(uParam0);

	return;
}

BOOL func_26() // Position - 0xC15 Hash - 0xDB5DCF1A ^0x88F3AE13
{
	if (Global_1935369.f_50 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		if (Global_1935369.f_50 == 0)
			return false;
		else
			return true;

	if (Global_1935369.f_51)
		return true;

	return false;
}

void func_27(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC4D Hash - 0x560F73AE ^0xFD1DD7CC
{
	BOOL isPedUsingThisScenario;
	Hash activeDynamicScenario;
	BOOL isPedUsingThisScenario2;

	if (Global_1935369.f_51)
		return;

	switch (iLocal_15)
	{
		case 0:
			isPedUsingThisScenario = PED::IS_PED_USING_THIS_SCENARIO(pedLocal_17, iLocal_3);
		
			if (!isPedUsingThisScenario && !TASK::IS_PED_EXITING_SCENARIO(pedLocal_17, true))
			{
				func_15();
				iLocal_16 = 5;
				iLocal_15 = 0;
				return;
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(eLocal_42) && TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_17, 1))
			{
				eLocal_42 = PED::_GET_PED_REGISTER_PROP(pedLocal_17, "p_coin01x", true);
			
				if (ENTITY::DOES_ENTITY_EXIST(eLocal_42))
					ENTITY::_SET_ENTITY_CARRYING_FLAG(eLocal_42, 2, false);
			
				bLocal_21 = true;
			}
		
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_17, 0) && isPedUsingThisScenario)
			{
				if (bParam1 && !func_44(iLocal_28) || func_26())
				{
					iLocal_16 = 2;
					return;
				}
				else
				{
					func_45();
				}
			
				activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(pedLocal_17);
			
				if (activeDynamicScenario != joaat("world_human_barcustomer_no_drink_male_a") && activeDynamicScenario != joaat("world_human_barcustomer_no_drink_male_b") && activeDynamicScenario != joaat("world_human_barcustomer_no_drink_arthur"))
				{
					iLocal_16 = 5;
					iLocal_15 = 0;
					bLocal_20 = true;
					func_15();
					return;
				}
			
				if (!Global_1935369.f_51)
				{
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(pedLocal_18);
					TASK::TASK_USE_SCENARIO_POINT(pedLocal_18, iLocal_29, 0, 0, true, false, 0, false, -1082130432, false);
					iLocal_15 = 1;
				}
			}
			break;
	
		case 1:
			isPedUsingThisScenario2 = PED::IS_PED_USING_THIS_SCENARIO(pedLocal_18, iLocal_29);
		
			if (!isPedUsingThisScenario2 && !func_46(pedLocal_18, -76381094))
				iLocal_15 = 0;
		
			isPedUsingThisScenario = PED::IS_PED_USING_THIS_SCENARIO(pedLocal_17, iLocal_3);
		
			if (!isPedUsingThisScenario && !TASK::IS_PED_EXITING_SCENARIO(pedLocal_17, true))
			{
				func_15();
				iLocal_16 = 5;
				iLocal_15 = 0;
				return;
			}
		
			if (!isPedUsingThisScenario2 || !TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_18, 0))
				return;
		
			if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(pedLocal_18, hLocal_8))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_18);
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_18, hLocal_8, 3f);
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_18);
				iLocal_14 = iLocal_14 + 1;
			}
		
			if (iLocal_14 > 5)
			{
				func_15();
				iLocal_15 = 0;
			}
		
			if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(pedLocal_18))
			{
				func_25(&uLocal_36, true);
				iLocal_15 = 3;
			}
			break;
	
		case 3:
			if (func_47())
			{
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_18, hLocal_9, 3f);
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_18);
			
				if (iLocal_4 == joaat("world_human_barcustomer_whiskey"))
					hLocal_8 = joaat("OVER_TRANS_UNDER_WHISKEY");
			
				func_25(&uLocal_36, true);
				iLocal_15 = 4;
			}
			break;
	
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_18, 595016159) && !bLocal_26)
				func_48();
		
			if (func_47())
			{
				if (!bLocal_26)
					func_48();
			
				if (iLocal_4 == joaat("world_human_barcustomer_beer"))
				{
					iLocal_15 = 6;
					obLocal_40 = PED::_GET_PED_REGISTER_PROP(pedLocal_18, "p_bottleBeer01x_PH_R_HAND", false);
					ENTITY::DOES_ENTITY_EXIST(obLocal_41);
				}
				else
				{
					iLocal_15 = 5;
					obLocal_41 = PED::_GET_PED_REGISTER_PROP(pedLocal_18, "p_shotGlass01x_PH_L_HAND", false);
					ENTITY::DOES_ENTITY_EXIST(obLocal_41);
				}
			
				if (iLocal_4 == joaat("world_human_barcustomer_beer"))
					PED::_GIVE_PED_HASH_COMMAND(pedLocal_18, hLocal_10, 3f);
				else
					PED::_GIVE_PED_HASH_COMMAND(pedLocal_18, hLocal_8, 3f);
			
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_18);
				bLocal_25 = true;
				bLocal_27 = true;
				func_25(&uLocal_36, true);
			}
			break;
	
		case 5:
			if (func_47())
			{
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_18, hLocal_10, 3f);
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_18);
				func_25(&uLocal_36, true);
				iLocal_15 = 7;
			}
			break;
	
		case 6:
			if (func_49())
			{
				func_15();
				func_50(&uLocal_36);
				iLocal_16 = 5;
				iLocal_15 = 0;
				bLocal_20 = true;
			}
			break;
	
		case 7:
			if (func_49())
			{
				func_15();
				func_50(&uLocal_36);
				iLocal_16 = 5;
				iLocal_15 = 0;
				bLocal_20 = true;
			}
			break;
	}

	return;
}

void func_28() // Position - 0xF70 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_29(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF78 Hash - 0xEEC7779F ^0x5A65C69C
{
	BOOL isPedUsingThisScenario;

	if (Global_1935369.f_51)
		return;

	switch (iLocal_15)
	{
		case 0:
			if (bParam0)
				isPedUsingThisScenario = PED::IS_PED_USING_THIS_SCENARIO(pedLocal_17, iLocal_3);
			else
				isPedUsingThisScenario = false;
		
			if (bParam1 && !func_44(iLocal_28) || func_26())
			{
				iLocal_16 = 2;
				return;
			}
		
			if (!bLocal_23 && TASK::IS_PED_EXITING_SCENARIO(pedLocal_17, false))
				bLocal_23 = true;
		
			if (bParam0 && isPedUsingThisScenario && !bLocal_20)
			{
				iLocal_16 = 0;
				iLocal_15 = 0;
				return;
			}
		
			if (bParam0 && !isPedUsingThisScenario && !TASK::IS_PED_EXITING_SCENARIO(pedLocal_17, false))
			{
				if (iLocal_4 == joaat("world_human_barcustomer_beer"))
				{
					if (!TASK::_DOES_SCENARIO_POINT_HAVE_PROPS(iLocal_3))
					{
						iLocal_16 = 6;
						return;
					}
				}
				else if (!bLocal_20)
				{
					iLocal_16 = 6;
					return;
				}
			
				bLocal_22 = true;
			
				if (!Global_1935369.f_51)
				{
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(pedLocal_18);
					TASK::TASK_USE_SCENARIO_POINT(pedLocal_18, iLocal_29, 0, 0, true, false, 0, false, -1082130432, false);
					iLocal_15 = 1;
				}
			}
			break;
	
		case 1:
			if (bParam1 && !func_44(iLocal_28) || func_26())
			{
				iLocal_16 = 2;
				iLocal_15 = 0;
				return;
			}
		
			if (!PED::IS_PED_USING_THIS_SCENARIO(pedLocal_18, iLocal_29))
				return;
		
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_18, 0) && !PED::_GET_IS_PED_COMMAND_HASH_PRESENT(pedLocal_18, hLocal_11))
			{
				func_45();
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_18, hLocal_11, 3f);
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_18);
			}
		
			if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(pedLocal_18))
			{
				func_25(&uLocal_36, true);
				iLocal_15 = 2;
			}
			break;
	
		case 2:
			if (func_47())
			{
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_18, hLocal_12, 3f);
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_18);
				iLocal_15 = 3;
				func_25(&uLocal_36, true);
			}
			break;
	
		case 3:
			if (func_47())
			{
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_18, hLocal_13, 3f);
				PED::_ADD_SCENARIO_TRANSITION(pedLocal_18);
				iLocal_15 = 7;
				func_25(&uLocal_36, true);
			}
			break;
	
		case 7:
			if (func_49())
			{
				func_15();
				iLocal_16 = 6;
			}
			break;
	}

	return;
}

void func_30(var uParam0) // Position - 0x1155 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_31(var uParam0) // Position - 0x115D Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_32(var uParam0) // Position - 0x1165 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_33(int iParam0, int iParam1) // Position - 0x116D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_34(int iParam0, BOOL bParam1) // Position - 0x117C Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_51() != -1)
		return false;

	if (!func_23(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

PersChar func_35(int iParam0) // Position - 0x11AA Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_23(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

Volume func_36(int iParam0) // Position - 0x11CA Hash - 0x4F4A4534 ^0x1E9521C1
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
	
		case 38:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volSaloonInterior");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -818.523f, -1319.681f, 46.59f, 0f, 0f, 90f, 15.6f, 16f, 8f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -809.672f, -1319.568f, 48.818f, 0f, 0f, 90f, 15.5f, 2f, 4f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -809.672f, -1324.85f, 44.569f, 0f, 0f, 90f, 5.2f, 2f, 3.8f);
			return aggregate;
	
		case 76:
			if (iParam0 == 0)
				return VOLUME::CREATE_VOLUME_BOX(-309.497f, 809.019f, 119.378f, 0f, 0f, 99.715f, 20.984f, 11.374f, 8.647388f);
			else
				return VOLUME::CREATE_VOLUME_BOX(-241.294f, 770f, 118.14f, 0f, 0f, 110.709f, 8.286f, 7.345f, 5f);
			break;
	
		case 92:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSaloonInterior");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2946.662f, 523.323f, 46.02f, 0f, 0f, 180f, 9.627f, 13.43f, 3.143f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2939.132f, 523.346f, 46.02f, 0f, 0f, 180f, 5.235f, 9.883f, 3.143f);
			return aggregate;
	
		case 105:
			return VOLUME::CREATE_VOLUME_BOX(1345.5344f, -1375.4001f, 81.161f, 0f, 0f, 80.2f, 11.601f, 14.755f, 3.376f);
	
		case 115:
			return VOLUME::CREATE_VOLUME_BOX(-5514.4536f, -2910.941f, 0.196263f, 0f, 0f, 28.00368f, 12.959498f, 18.614845f, 9.427321f);
	
		case 120:
			return VOLUME::CREATE_VOLUME_BOX(-3701.0564f, -2595.4563f, -14.373728f, 0f, 0f, 0f, 21.947664f, 22.090923f, 14.360381f);
	}

	return VOLUME::CREATE_VOLUME_BOX(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
}

BOOL func_37(Volume volParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x14A4 Hash - 0x23F7A048 ^0x52C55AC8
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return false;

	return VOLUME::IS_POINT_IN_VOLUME(volParam0, vParam1);
}

Hash func_38(int iParam0) // Position - 0x14C4 Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_23(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

BOOL func_39(Hash hParam0) // Position - 0x14E2 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

Ped func_40(int iParam0) // Position - 0x14EE Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_35(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

Hash func_41(int iParam0) // Position - 0x151C Hash - 0xED567DFA ^0x7CDFEFC2
{
	if (!func_23(iParam0))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_MODEL_NAME(Global_1895087[iParam0 /*3*/]);
}

BOOL func_42(var uParam0) // Position - 0x153E Hash - 0x5001E582 ^0x5001E582
{
	return func_52(*uParam0, 1);
}

void func_43(var uParam0) // Position - 0x154E Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_53(uParam0, 0f);
	return;
}

BOOL func_44(int iParam0) // Position - 0x155D Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_23(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_45() // Position - 0x1582 Hash - 0x186243D9 ^0x8E684841
{
	PersChar persChar;

	if (Global_1935369.f_51)
		return;

	Global_1935369.f_50 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	persChar = func_35(iLocal_28);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		PERSCHAR::_0x406808610220405B(func_35(iLocal_28));

	return;
}

BOOL func_46(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x15BB Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_47() // Position - 0x1614 Hash - 0xE8C032FC ^0x2517FE74
{
	if (!Global_1935369.f_51 && func_54(&uLocal_36) > 1250 && !TASK::IS_PED_SCENARIO_REACT_LOOKING(pedLocal_18, true) && !PED::_IS_PED_DOING_SCENARIO_TRANSITION(pedLocal_18) || ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_18, 1004907005))
		return true;

	return false;
}

void func_48() // Position - 0x1664 Hash - 0xE7DE6A8B ^0x35AA876F
{
	if (!bLocal_26)
	{
		if (iLocal_4 == joaat("world_human_barcustomer_beer"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_40))
			{
				obLocal_40 = OBJECT::CREATE_OBJECT(joaat("p_bottlebeer01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
				PED::_GIVE_PED_SCENARIO_PROP(pedLocal_18, obLocal_40, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARTENDER_BEER", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", true);
				bLocal_26 = true;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(obLocal_40) && !ENTITY::DOES_ENTITY_EXIST(obLocal_41))
		{
			obLocal_40 = OBJECT::CREATE_OBJECT(joaat("p_bottlejd01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			obLocal_41 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_29, true), true, true, false, false, true);
			PED::_GIVE_PED_SCENARIO_PROP(pedLocal_18, obLocal_40, "p_bottleJD01x_ph_r_hand", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", true);
			PED::_GIVE_PED_SCENARIO_PROP(pedLocal_18, obLocal_41, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", true);
			bLocal_26 = true;
		}
	}

	return;
}

BOOL func_49() // Position - 0x1727 Hash - 0xB78322BC ^0xF8B1F7A9
{
	if (!PED::_IS_PED_DOING_SCENARIO_TRANSITION(pedLocal_18) || ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_18, 1004907005) && func_54(&uLocal_36) > 1250)
		return true;

	return false;
}

void func_50(var uParam0) // Position - 0x175E Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_51() // Position - 0x1774 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_52(int iParam0, int iParam1) // Position - 0x1782 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_53(var uParam0, float fParam1) // Position - 0x1791 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_55() - fParam1;
	func_56(uParam0, 1);
	func_57(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_54(var uParam0) // Position - 0x17B7 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_42(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_58(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_59() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

float func_55() // Position - 0x180A Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_56(var uParam0, int iParam1) // Position - 0x183C Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_57(var uParam0, int iParam1) // Position - 0x184D Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_58(var uParam0) // Position - 0x1862 Hash - 0x39705408 ^0x39705408
{
	return func_52(*uParam0, 2);
}

int func_59() // Position - 0x1872 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

