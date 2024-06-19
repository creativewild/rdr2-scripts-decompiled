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
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
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
	var uLocal_51 = -1;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = -1082130432;
	var uLocal_57 = -1082130432;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x4E687596 ^0xDC163095
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(&uLocal_16, uScriptParam_0);

	if (func_2() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	
		if (func_4(func_3(0)) == 7)
			func_5(&uLocal_16);
	}

	if (func_2() == -1)
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
			func_5(&uLocal_16);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_16.f_10))
		func_5(&uLocal_16);

	while (func_6(&uLocal_16))
	{
		if (func_7())
			func_5(&uLocal_16);
	
		if (func_8(&uLocal_16))
			func_5(&uLocal_16);
	
		BUILTIN::WAIT(0);
	}

	func_5(&uLocal_16);
	return;
}

void func_1(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x94 Hash - 0x8F19F41E ^0x7C7C55CE
{
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(4);
	*uParam0 = 2;
	uParam0->f_1 = func_9(uParam1, uParam0);
	uParam0->f_6 = func_10(uParam1, uParam0);
	uParam0->f_27 = func_11(uParam0);
	func_12(uParam0);
	uParam0->f_28 = func_13();

	if (uParam0->f_1 == 211)
	{
		uParam0->f_13 = "script@mech@treasure_hunting@nothing";
		uParam0->f_14 = "PBL_NOTHING_01";
	}
	else
	{
		uParam0->f_13 = "script@mech@treasure_hunting@chest";
		uParam0->f_14 = "PBL_CHEST_01";
	
		if (!func_14(uParam0, 4))
			func_15(uParam0, 4);
	}

	uParam0->f_2 = 0;
	uParam0->f_11 = uParam1;
	uParam0->f_10 = uParam1.f_1;
	uParam0->f_7 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_10, true) };
	func_16(&(uParam0->f_31), uParam0->f_7);
	func_17(*uParam0, uParam0->f_1);
	uParam0->f_29 = func_18(uParam0);
	uParam0->f_5 = func_19(uParam0->f_29);

	if (!func_14(uParam0, 16))
		uParam0->f_29 = joaat("collectible_jewelry_all");

	uParam0->f_24 = func_20(false);
	uParam0->f_25 = func_21();
	func_22();

	if (func_23(uParam0->f_7))
		if (func_14(uParam0, 4))
			if (func_24())
				if (!func_14(uParam0, 64))
					func_15(uParam0, 64);

	return;
}

int func_2() // Position - 0x1BF Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

struct<2> func_3(int iParam0) // Position - 0x1CD Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_4(int iParam0, var uParam1) // Position - 0x1E1 Hash - 0x72C53F65 ^0x72C53F65
{
	return iParam0;
}

void func_5(var uParam0) // Position - 0x1EB Hash - 0x34349186 ^0x464A94D3
{
	func_25(&(uParam0->f_15), true, true);
	func_26(uParam0);

	if (func_14(uParam0, 2))
		func_27(uParam0->f_7);

	func_28(*uParam0, uParam0->f_1, 1);
	func_29(*uParam0, uParam0->f_1, 1);
	func_29(*uParam0, uParam0->f_1, 16);
	func_29(*uParam0, uParam0->f_1, 32);
	func_30();
	func_31();
	func_32(&(uParam0->f_31));

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_43))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_43, false);

	func_33(false);
	func_34(&(uParam0->f_31));
	SCRIPTS::_0xE7282390542F570D(uParam0->f_11);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_6(var uParam0) // Position - 0x287 Hash - 0x3F9A5B3E ^0xE1E8ABCC
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_5(uParam0);
		return false;
	}

	return true;
}

BOOL func_7() // Position - 0x2A1 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_8(var uParam0) // Position - 0x2AA Hash - 0x26635C10 ^0xD3D5B2FA
{
	Hash hash;
	BOOL flag;
	BOOL flag2;

	if (func_14(uParam0, 16) && func_14(uParam0, 8))
	{
		if (MISC::GET_FRAME_COUNT() % 5 == 0 && func_35(Global_33, uParam0->f_7, 3f, true, true))
		{
			if (!func_36(uParam0))
			{
				func_17(*uParam0, uParam0->f_1);
				Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = uParam0->f_1;
			}
		}
	}

	if (func_37(uParam0) < 10)
	{
		if (func_14(uParam0, 4))
			if (!func_38(*uParam0, uParam0->f_1, 16))
				if (func_39(uParam0->f_7, &(uParam0->f_21), &(uParam0->f_19), &(uParam0->f_20), func_14(uParam0, 1), 1073741824))
					func_40(*uParam0, uParam0->f_1, 16);
	
		if (func_41(*uParam0) && func_36(uParam0))
		{
			func_42(uParam0, 11);
		
			if (func_43(uParam0->f_15))
				func_25(&(uParam0->f_15), true, true);
		
			func_31();
		}
		else if (func_37(uParam0) <= 6 && func_37(uParam0) > 1)
		{
			if (func_38(*uParam0, uParam0->f_1, 16))
				func_42(uParam0, 12);
		}
	}

	flag = func_37(uParam0) <= 6 && !func_44(uParam0->f_15, true);
	flag2 = !func_14(uParam0, 16);

	if (func_45(func_14(uParam0, 2)))
		if (func_14(uParam0, 2))
			func_46(uParam0->f_15, uParam0->f_7);
		else
			func_47(&(uParam0->f_31), uParam0->f_7, flag, flag2, true, false);

	func_48(uParam0->f_15);
	func_49(uParam0->f_7, *uParam0, uParam0->f_1, 1092616192);

	switch (func_37(uParam0))
	{
		case 0:
			STREAMING::REQUEST_MODEL(uParam0->f_24, false);
			STREAMING::REQUEST_MODEL(uParam0->f_28, false);
			STREAMING::REQUEST_MODEL(uParam0->f_25, false);
		
			if (func_14(uParam0, 1))
				STREAMING::REQUEST_MODEL(uParam0->f_27, false);
		
			STREAMING::REQUEST_MODEL(joaat("mp005_p_collectorshovel01"), false);
			func_50(&(uParam0->f_31.f_6), uParam0->f_7, 1.5f, 1, 319, 0);
		
			if (func_14(uParam0, 16))
				if (!func_51(Global_1222327[*uParam0 /*251*/][uParam0->f_1], 16))
					func_42(uParam0, 1);
				else if (func_52(&(uParam0->f_12), uParam0->f_13, "PBL_LOOTED", uParam0->f_7, uParam0->f_21, uParam0->f_27, uParam0->f_19, uParam0->f_24, uParam0->f_20, uParam0->f_28, func_14(uParam0, 1)))
					func_42(uParam0, 12);
			else if (func_51(Global_1222327[*uParam0 /*251*/][uParam0->f_1], 16))
				if (func_52(&(uParam0->f_12), uParam0->f_13, "PBL_LOOTED", uParam0->f_7, uParam0->f_21, uParam0->f_27, uParam0->f_19, uParam0->f_24, uParam0->f_20, uParam0->f_28, func_14(uParam0, 1)))
					if (Global_1222327.f_2762 != uParam0->f_1)
						func_42(uParam0, 12);
					else
						func_42(uParam0, 15);
			else if (!func_23(uParam0->f_7))
				func_42(uParam0, 15);
			else if (!func_14(uParam0, 64))
				func_42(uParam0, 1);
			break;
	
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_24) && STREAMING::HAS_MODEL_LOADED(uParam0->f_28) && STREAMING::HAS_MODEL_LOADED(joaat("mp005_p_collectorshovel01")) && STREAMING::HAS_MODEL_LOADED(uParam0->f_25))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
					uParam0->f_19 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_24, uParam0->f_7 + { -10f, 0f, 0f }, true, true, false, true);
			
				if (func_14(uParam0, 1))
				{
					if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_27))
						return false;
				
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
						uParam0->f_21 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_27, uParam0->f_7, true, true, false, true);
				}
			
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					uParam0->f_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_28, uParam0->f_7 + { -20f, 0f, 0f }, true, true, false, true);
			
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
					return false;
			
				if (func_14(uParam0, 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
						return false;
				
					if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_7 + { 1f, 0f, 0f }, &(uParam0->f_47), &(uParam0->f_44)))
						return false;
				
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_21, func_53(uParam0->f_44, 0), 2, true);
				}
			
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					return false;
			
				func_42(uParam0, 2);
			}
			break;
	
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_12))
				uParam0->f_12 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_13, 64, uParam0->f_14, true, true);
		
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_12))
				return false;
		
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_12);
			func_42(uParam0, 3);
			break;
	
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_12, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_12, uParam0->f_7, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_12, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_12, "CHEST", uParam0->f_19, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_12, "DRESSING", uParam0->f_20, 0);
			
				if (func_14(uParam0, 1))
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_12, "MOUND", uParam0->f_21, 0);
			
				func_42(uParam0, 4);
			}
			break;
	
		case 4:
			if (func_45(func_14(uParam0, 2)))
			{
				if (func_14(uParam0, 1))
				{
					func_54(uParam0->f_21, uParam0->f_21, 0);
					MAP::_0x7563CBCA99253D1A(uParam0->f_21, joaat("blip_mp_role_collector_ilo"));
					func_42(uParam0, 5);
				}
				else
				{
					func_42(uParam0, 5);
				}
			}
			break;
	
		case 5:
			if (func_55(uParam0, 1097859072))
			{
				if (!func_43(uParam0->f_15))
					uParam0->f_15 = func_56("UC_CLT_DIG", joaat("INPUT_CONTEXT_X"), uParam0->f_7, 1070386381, 3, 1, 0, 4, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), 0);
			
				func_42(uParam0, 6);
			}
			break;
	
		case 6:
			if (func_43(uParam0->f_15))
			{
				if (!func_14(uParam0, 16))
					func_57(uParam0->f_15, &(uParam0->f_31.f_5));
			
				if (func_58(uParam0->f_15, true))
				{
					if (func_38(*uParam0, uParam0->f_1, 32))
					{
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
					
						func_25(&(uParam0->f_15), true, true);
						func_59(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_HIDE_PED_WEAPONS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, false);
						func_33(true);
						func_29(*uParam0, uParam0->f_1, 32);
						func_42(uParam0, 7);
					}
				}
				else if (func_36(uParam0))
				{
					if (func_60(uParam0->f_15, true) > 0f)
					{
						func_61();
						func_63(func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_7, true));
					}
					else if (func_60(uParam0->f_15, true) == 0f)
					{
						func_31();
					}
				}
			}
			break;
	
		case 7:
			func_61();
		
			if (func_64(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, true, false) == joaat("WEAPON_UNARMED") && func_64(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, true, false) == joaat("WEAPON_UNARMED") && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) && !PED::IS_PED_CARRYING_SOMETHING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) && !PED::IS_PED_USING_ANY_SCENARIO(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_26(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_12, uParam0->f_7, 0f, 0f, func_65(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_7, 1), 2);
				func_42(uParam0, 8);
			}
			break;
	
		case 8:
			func_66();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_12, "player", uParam0->f_14, 1069379748, true, 128, 20000, -1082130432);
			uParam0->f_43 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(VOLUME::CREATE_VOLUME_CYLINDER(uParam0->f_7, 0f, 0f, 0f, 1f, 1f, 1f), true, 16);
			func_42(uParam0, 9);
			break;
	
		case 9:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_12, false))
				func_42(uParam0, 10);
			break;
	
		case 10:
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_12, false) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_12, false) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_33, "mech_pickup@mp_treasure@chest_01", "exit", 1))
			{
				if (!func_67(uParam0))
					return false;
			
				func_68(uParam0->f_10);
				func_69(func_14(uParam0, 1), func_14(uParam0, 2));
				func_33(false);
				func_34(&(uParam0->f_31));
			
				if (func_14(uParam0, 2))
					func_27(uParam0->f_7);
			
				if (func_14(uParam0, 4))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_19, "ChestDugUp", true);
					func_40(*uParam0, uParam0->f_1, 16);
				}
			
				func_68(uParam0->f_10);
				func_31();
			
				if (func_14(uParam0, 2) && func_14(uParam0, 16))
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("weapon_kit_metal_detector"), false, 0, false, false);
			
				TASK::_SET_SCENARIO_CONTAINER_OPENING_STATE(uParam0->f_19, true);
				func_42(uParam0, 15);
			}
			break;
	
		case 11:
			if (func_38(*uParam0, uParam0->f_1, 1))
			{
				if (func_70())
				{
					func_29(*uParam0, uParam0->f_1, 1);
					func_42(uParam0, 12);
				}
				else if (!func_41(*uParam0))
				{
					func_42(uParam0, 4);
					func_29(*uParam0, uParam0->f_1, 1);
				}
			}
			break;
	
		case 12:
			if (func_43(uParam0->f_15))
				func_25(&(uParam0->f_15), true, true);
		
			hash = func_71();
		
			if (!func_72(hash, 0))
				return false;
		
			uParam0->f_5 = hash;
			uParam0->f_29 = func_73(uParam0->f_5);
		
			if (func_14(uParam0, 4))
			{
				uParam0->f_26 = func_74(uParam0->f_5);
				STREAMING::REQUEST_MODEL(uParam0->f_26, false);
			}
		
			func_29(*uParam0, uParam0->f_1, 1);
			func_42(uParam0, 13);
			break;
	
		case 13:
			if (!func_41(*uParam0))
			{
				if (STREAMING::HAS_MODEL_LOADED(uParam0->f_26))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
						uParam0->f_23 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_26, uParam0->f_7 + { 0.1f, 0f, 0f }, false, true, false, true);
				
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
						return false;
				
					MAP::_0x1726963E6049DB53(uParam0->f_23);
					func_42(uParam0, 14);
				}
			}
			break;
	
		case 14:
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_23) || !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_23))
			{
				uParam0->f_23 = 0;
				func_42(uParam0, 13);
				return false;
			}
		
			if (TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), true), uParam0->f_7, true) < 1.5f)
				{
					func_68(uParam0->f_10);
					Global_1222327.f_2762 = uParam0->f_1;
					func_42(uParam0, 15);
				}
			}
			break;
	}

	return false;
}

int func_9(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xD49 Hash - 0x16499F1C ^0x8871B762
{
	int num;
	int num2;
	int scenario;
	BOOL flag;

	scenario = uParam0.f_1;

	if (TASK::DOES_SCENARIO_POINT_EXIST(scenario))
	{
		num2 = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(scenario));
		num = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_HEADING(scenario, true));
		flag = num == 99;
	
		if (func_14(uParam3, 32))
		{
			num2 = Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2;
		}
		else if (num2 >= 200 || num2 == 0 || flag)
		{
			func_15(uParam3, 16);
		
			if (flag)
				func_15(uParam3, 8);
		}
	
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = num2;
	}

	switch (num2)
	{
		case 0:
			return 211;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 9;
	
		case 11:
			return 10;
	
		case 12:
			return 11;
	
		case 13:
			return 12;
	
		case 14:
			return 13;
	
		case 15:
			return 14;
	
		case 16:
			return 15;
	
		case 17:
			return 16;
	
		case 18:
			return 17;
	
		case 19:
			return 18;
	
		case 20:
			return 19;
	
		case 21:
			return 20;
	
		case 22:
			return 21;
	
		case 23:
			return 22;
	
		case 24:
			return 23;
	
		case 25:
			return 24;
	
		case 26:
			return 25;
	
		case 27:
			return 26;
	
		case 28:
			return 27;
	
		case 29:
			return 28;
	
		case 30:
			return 29;
	
		case 31:
			return 30;
	
		case 32:
			return 31;
	
		case 33:
			return 32;
	
		case 34:
			return 33;
	
		case 35:
			return 34;
	
		case 36:
			return 35;
	
		case 37:
			return 36;
	
		case 38:
			return 37;
	
		case 39:
			return 38;
	
		case 40:
			return 39;
	
		case 41:
			return 40;
	
		case 42:
			return 41;
	
		case 43:
			return 42;
	
		case 44:
			return 43;
	
		case 45:
			return 44;
	
		case 46:
			return 45;
	
		case 47:
			return 46;
	
		case 48:
			return 47;
	
		case 49:
			return 48;
	
		case 50:
			return 49;
	
		case 51:
			return 50;
	
		case 52:
			return 51;
	
		case 53:
			return 52;
	
		case 54:
			return 53;
	
		case 55:
			return 54;
	
		case 56:
			return 55;
	
		case 57:
			return 56;
	
		case 58:
			return 57;
	
		case 59:
			return 58;
	
		case 60:
			return 59;
	
		case 61:
			return 60;
	
		case 62:
			return 61;
	
		case 63:
			return 62;
	
		case 64:
			return 63;
	
		case 65:
			return 64;
	
		case 66:
			return 65;
	
		case 67:
			return 66;
	
		case 68:
			return 67;
	
		case 69:
			return 68;
	
		case 70:
			return 69;
	
		case 71:
			return 70;
	
		case 72:
			return 71;
	
		case 73:
			return 72;
	
		case 74:
			return 73;
	
		case 75:
			return 74;
	
		case 76:
			return 75;
	
		case 77:
			return 76;
	
		case 78:
			return 77;
	
		case 79:
			return 78;
	
		case 80:
			return 79;
	
		case 81:
			return 80;
	
		case 82:
			return 81;
	
		case 83:
			return 82;
	
		case 84:
			return 83;
	
		case 85:
			return 84;
	
		case 86:
			return 85;
	
		case 87:
			return 86;
	
		case 88:
			return 87;
	
		case 89:
			return 88;
	
		case 90:
			return 89;
	
		case 91:
			return 90;
	
		case 92:
			return 91;
	
		case 93:
			return 92;
	
		case 94:
			return 93;
	
		case 95:
			return 94;
	
		case 96:
			return 95;
	
		case 97:
			return 96;
	
		case 98:
			return 97;
	
		case 99:
			return 98;
	
		case 100:
			return 99;
	
		case 101:
			return 100;
	
		case 102:
			return 101;
	
		case 103:
			return 102;
	
		case 104:
			return 103;
	
		case 105:
			return 104;
	
		case 106:
			return 105;
	
		case 107:
			return 106;
	
		case 108:
			return 107;
	
		case 109:
			return 108;
	
		case 110:
			return 109;
	
		case 111:
			return 110;
	
		case 112:
			return 111;
	
		case 113:
			return 112;
	
		case 114:
			return 113;
	
		case 115:
			return 114;
	
		case 116:
			return 115;
	
		case 117:
			return 116;
	
		case 118:
			return 117;
	
		case 119:
			return 118;
	
		case 120:
			return 119;
	
		case 121:
			return 120;
	
		case 122:
			return 121;
	
		case 123:
			return 122;
	
		case 124:
			return 123;
	
		case 125:
			return 124;
	
		case 126:
			return 125;
	
		case 127:
			return 126;
	
		case 128:
			return 127;
	
		case 129:
			return 128;
	
		case 130:
			return 129;
	
		case 131:
			return 130;
	
		case 132:
			return 131;
	
		case 133:
			return 132;
	
		case 134:
			return 133;
	
		case 135:
			return 134;
	
		case 136:
			return 135;
	
		case 137:
			return 136;
	
		case 138:
			return 137;
	
		case 139:
			return 138;
	
		case 140:
			return 139;
	
		case 141:
			return 140;
	
		case 142:
			return 141;
	
		case 143:
			return 142;
	
		case 144:
			return 143;
	
		case 145:
			return 144;
	
		case 146:
			return 145;
	
		case 147:
			return 146;
	
		case 148:
			return 147;
	
		case 149:
			return 148;
	
		case 150:
			return 149;
	
		case 151:
			return 150;
	
		case 152:
			return 151;
	
		case 153:
			return 152;
	
		case 154:
			return 153;
	
		case 155:
			return 154;
	
		case 156:
			return 155;
	
		case 157:
			return 156;
	
		case 158:
			return 157;
	
		case 159:
			return 158;
	
		case 160:
			return 159;
	
		case 161:
			return 160;
	
		case 162:
			return 161;
	
		case 200:
			return 162;
	
		case 201:
			return 163;
	
		case 202:
			return 164;
	
		case 203:
			return 165;
	
		case 204:
			return 166;
	
		case 205:
			return 167;
	
		case 206:
			return 168;
	
		case 207:
			return 169;
	
		case 208:
			return 170;
	
		case 209:
			return 171;
	
		case 210:
			return 172;
	
		case 211:
			return 173;
	
		case 212:
			return 174;
	
		case 213:
			return 175;
	
		case 214:
			return 176;
	
		case 215:
			return 177;
	
		case 216:
			return 178;
	
		case 217:
			return 179;
	
		case 218:
			return 180;
	
		case 219:
			return 181;
	
		case 220:
			return 182;
	
		case 221:
			return 183;
	
		case 222:
			return 184;
	
		case 223:
			return 185;
	
		case 224:
			return 186;
	
		case 225:
			return 187;
	
		case 226:
			return 188;
	
		case 227:
			return 189;
	
		case 228:
			return 190;
	
		case 229:
			return 191;
	
		case 230:
			return 192;
	
		case 231:
			return 193;
	
		case 232:
			return 194;
	
		case 233:
			return 195;
	
		case 234:
			return 196;
	
		case 235:
			return 197;
	
		case 236:
			return 198;
	
		case 237:
			return 199;
	
		case 238:
			return 200;
	
		case 239:
			return 201;
	
		case 240:
			return 202;
	
		case 241:
			return 203;
	
		case 242:
			return 204;
	
		case 243:
			return 205;
	
		case 244:
			return 206;
	
		case 245:
			return 207;
	
		case 246:
			return 208;
	
		case 247:
			return 209;
	
		case 248:
			return 210;
	
		default:
		
	}

	return 67;
}

int func_10(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x16F7 Hash - 0xAE0C6C8D ^0x77414172
{
	int num;
	int scenario;

	scenario = uParam0.f_1;

	if (TASK::DOES_SCENARIO_POINT_EXIST(scenario))
	{
		num = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(scenario));
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = num;
	}

	return num;
}

int func_11(var uParam0) // Position - 0x172A Hash - 0xE8E7714 ^0x780F4567
{
	int num;

	switch (uParam0->f_1)
	{
		case 1:
			num = joaat("mp005_p_dirtpile_cum_buried");
			break;
	
		case 3:
			num = joaat("mp005_p_dirtpile_gen_buried");
			break;
	
		case 6:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 8:
			num = joaat("mp005_p_dirtpile_gen_buried");
			break;
	
		case 15:
			num = joaat("mp005_p_dirtpile_rio_buried");
			break;
	
		case 16:
			num = joaat("mp005_p_dirtpile_big01_buried");
			break;
	
		case 18:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 20:
			num = joaat("mp005_p_dirtpile_tall_buried");
			break;
	
		case 31:
			num = joaat("mp005_p_dirtpile_gen_buried");
			break;
	
		case 33:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 39:
			num = joaat("mp005_p_dirtpile_roa_buried");
			break;
	
		case 45:
			num = joaat("mp005_p_dirtpile_sca02_buried");
			break;
	
		case 211:
			num = joaat("mp005_p_dirtpile_tall_buried");
			break;
	}

	return num;
}

void func_12(var uParam0) // Position - 0x180E Hash - 0x87C13DB ^0x7F280450
{
	switch (uParam0->f_1)
	{
		case 1:
		case 3:
		case 6:
		case 8:
		case 15:
		case 16:
		case 18:
		case 20:
		case 31:
		case 33:
		case 39:
		case 45:
			func_15(uParam0, 1);
			break;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
			break;
	
		case 211:
			if (func_14(uParam0, 8))
				func_15(uParam0, 1);
			break;
	
		default:
			func_15(uParam0, 2);
			break;
	}

	return;
}

int func_13() // Position - 0x19C0 Hash - 0xC382F505 ^0x29B9121
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 40000);

	if (randomIntInRange > 30000)
		return joaat("mp005_p_dressinglbmhay04x");
	else if (randomIntInRange > 20000)
		return joaat("mp005_p_dressinglbmhay03x");
	else if (randomIntInRange > 10000)
		return joaat("mp005_p_dressinglbmhay02x");

	return joaat("mp005_p_dressinglbmhay01x");
}

BOOL func_14(var uParam0, int iParam1) // Position - 0x1A0E Hash - 0xBD0B8CC9 ^0xDB2FFF80
{
	return func_51(uParam0->f_16, iParam1);
}

void func_15(var uParam0, int iParam1) // Position - 0x1A20 Hash - 0x1E39CB4 ^0x4D7FFBC3
{
	if (!func_51(uParam0->f_16, iParam1))
		func_75(&(uParam0->f_16), iParam1);

	return;
}

void func_16(var uParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x1A40 Hash - 0x6056C146 ^0xA3F52791
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		uParam0->f_7 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_7, 6, 0, 0, -1, -1, 0);
	}

	return;
}

void func_17(var uParam0, var uParam1) // Position - 0x1A77 Hash - 0x7B40D540 ^0x20F480B6
{
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 = uParam0;
	return;
}

int func_18(var uParam0) // Position - 0x1A8D Hash - 0xE8E7714 ^0x1A6DE4B3
{
	int num;

	switch (uParam0->f_1)
	{
		case 0:
			num = joaat("collectible_jewelry_moon_ring");
			break;
	
		case 1:
			num = joaat("collectible_jewelry_moon_ring");
			break;
	
		case 2:
			num = joaat("collectible_jewelry_whtgld_dmnd_ring");
			break;
	
		case 3:
			num = joaat("collectible_jewelry_ylwgld_dmnd_ring");
			break;
	
		case 4:
			num = joaat("collectible_jewelry_ylwgld_dmnd_ring");
			break;
	
		case 5:
			num = joaat("collectible_jewelry_french_dmnd_ring");
			break;
	
		case 6:
			num = joaat("collectible_jewelry_turquoise_ring");
			break;
	
		case 7:
			num = joaat("collectible_jewelry_turquoise_ring");
			break;
	
		case 8:
			num = joaat("collectible_jewelry_topaz_ring");
			break;
	
		case 9:
			num = joaat("collectible_jewelry_pearl_ring");
			break;
	
		case 10:
			num = joaat("collectible_jewelry_onyx_ring");
			break;
	
		case 11:
			num = joaat("collectible_jewelry_onyx_ring");
			break;
	
		case 12:
			num = joaat("collectible_jewelry_emerald_ring");
			break;
	
		case 13:
			num = joaat("collectible_jewelry_emerald_ring");
			break;
	
		case 14:
			num = joaat("collectible_jewelry_emerald_ring");
			break;
	
		case 15:
			num = joaat("collectible_jewelry_pers_turq_ring");
			break;
	
		case 16:
			num = joaat("collectible_jewelry_coral_ring");
			break;
	
		case 17:
			num = joaat("collectible_jewelry_coral_ring");
			break;
	
		case 18:
			num = joaat("collectible_jewelry_emerald_earring");
			break;
	
		case 19:
			num = joaat("collectible_jewelry_emerald_earring");
			break;
	
		case 20:
			num = joaat("collectible_jewelry_qn_dmnd_earring");
			break;
	
		case 21:
			num = joaat("collectible_jewelry_qn_dmnd_earring");
			break;
	
		case 22:
			num = joaat("collectible_jewelry_qn_dmnd_earring");
			break;
	
		case 23:
			num = joaat("collectible_jewelry_wht_dmnd_earring");
			break;
	
		case 24:
			num = joaat("collectible_jewelry_wht_dmnd_earring");
			break;
	
		case 25:
			num = joaat("collectible_jewelry_wht_dmnd_earring");
			break;
	
		case 26:
			num = joaat("collectible_jewelry_rudy_dngl_earring");
			break;
	
		case 27:
			num = joaat("collectible_jewelry_rudy_dngl_earring");
			break;
	
		case 28:
			num = joaat("collectible_jewelry_rudy_dngl_earring");
			break;
	
		case 29:
			num = joaat("collectible_jewelry_drop_earring");
			break;
	
		case 30:
			num = joaat("collectible_jewelry_drop_earring");
			break;
	
		case 31:
			num = joaat("collectible_jewelry_drop_earring");
			break;
	
		case 32:
			num = joaat("collectible_jewelry_coral_dngl_earring");
			break;
	
		case 33:
			num = joaat("collectible_jewelry_coral_dngl_earring");
			break;
	
		case 34:
			num = joaat("collectible_jewelry_coral_dngl_earring");
			break;
	
		case 35:
			num = joaat("collectible_jewelry_turq_stud_earring");
			break;
	
		case 36:
			num = joaat("collectible_jewelry_turq_stud_earring");
			break;
	
		case 37:
			num = joaat("collectible_jewelry_elk_tooth_earring");
			break;
	
		case 38:
			num = joaat("collectible_jewelry_elk_tooth_earring");
			break;
	
		case 39:
			num = joaat("collectible_jewelry_elk_tooth_earring");
			break;
	
		case 40:
			num = joaat("collectible_jewelry_grnet_post_earring");
			break;
	
		case 41:
			num = joaat("collectible_jewelry_grnet_post_earring");
			break;
	
		case 42:
			num = joaat("collectible_jewelry_dmnd_pendt_earring");
			break;
	
		case 43:
			num = joaat("collectible_jewelry_dmnd_pendt_earring");
			break;
	
		case 44:
			num = joaat("collectible_jewelry_dmnd_pendt_earring");
			break;
	
		case 45:
			num = joaat("collectible_jewelry_pearl_earring");
			break;
	
		case 46:
			num = joaat("collectible_jewelry_pearl_earring");
			break;
	
		case 47:
			num = joaat("collectible_jewelry_carved_bracelet");
			break;
	
		case 48:
			num = joaat("collectible_jewelry_carved_bracelet");
			break;
	
		case 49:
			num = joaat("collectible_jewelry_carved_bracelet");
			break;
	
		case 50:
			num = joaat("collectible_jewelry_gld_bngle_bracelet");
			break;
	
		case 51:
			num = joaat("collectible_jewelry_grnet_bracelet");
			break;
	
		case 52:
			num = joaat("collectible_jewelry_turquoise_bracelet");
			break;
	
		case 53:
			num = joaat("collectible_jewelry_turquoise_bracelet");
			break;
	
		case 54:
			num = joaat("collectible_jewelry_sphr_bracelet");
			break;
	
		case 55:
			num = joaat("collectible_jewelry_sphr_bracelet");
			break;
	
		case 56:
			num = joaat("collectible_jewelry_dmnd_bngle_bracelet");
			break;
	
		case 57:
			num = joaat("collectible_jewelry_blck_pearl_necklace");
			break;
	
		case 58:
			num = joaat("collectible_jewelry_blck_pearl_necklace");
			break;
	
		case 59:
			num = joaat("collectible_jewelry_topaz_necklace");
			break;
	
		case 60:
			num = joaat("collectible_jewelry_topaz_necklace");
			break;
	
		case 61:
			num = joaat("collectible_jewelry_mthr_pearl_necklace");
			break;
	
		case 62:
			num = joaat("collectible_jewelry_mthr_pearl_necklace");
			break;
	
		case 63:
			num = joaat("collectible_jewelry_gld_pendt_necklace");
			break;
	
		case 64:
			num = joaat("collectible_jewelry_porcelain_necklace");
			break;
	
		case 65:
			num = joaat("collectible_jewelry_gld_cross_necklace");
			break;
	
		case 66:
			num = joaat("collectible_jewelry_gld_pearl_necklace");
			break;
	
		case 67:
			num = joaat("collectible_jewelry_gld_pearl_necklace");
			break;
	
		case 68:
			num = joaat("collectible_jewelry_moon_ring");
			break;
	
		case 69:
			num = joaat("collectible_jewelry_moon_ring");
			break;
	
		case 70:
			num = joaat("collectible_jewelry_whtgld_dmnd_ring");
			break;
	
		case 71:
			num = joaat("collectible_jewelry_whtgld_dmnd_ring");
			break;
	
		case 72:
			num = joaat("collectible_jewelry_ylwgld_dmnd_ring");
			break;
	
		case 73:
			num = joaat("collectible_jewelry_ylwgld_dmnd_ring");
			break;
	
		case 74:
			num = joaat("collectible_jewelry_french_dmnd_ring");
			break;
	
		case 75:
			num = joaat("collectible_jewelry_french_dmnd_ring");
			break;
	
		case 76:
			num = joaat("collectible_jewelry_turquoise_ring");
			break;
	
		case 77:
			num = joaat("collectible_jewelry_turquoise_ring");
			break;
	
		case 78:
			num = joaat("collectible_jewelry_topaz_ring");
			break;
	
		case 79:
			num = joaat("collectible_jewelry_pearl_ring");
			break;
	
		case 80:
			num = joaat("collectible_jewelry_pearl_ring");
			break;
	
		case 81:
			num = joaat("collectible_jewelry_onyx_ring");
			break;
	
		case 82:
			num = joaat("collectible_jewelry_onyx_ring");
			break;
	
		case 83:
			num = joaat("collectible_jewelry_emerald_ring");
			break;
	
		case 84:
			num = joaat("collectible_jewelry_emerald_ring");
			break;
	
		case 85:
			num = joaat("collectible_jewelry_emerald_ring");
			break;
	
		case 86:
			num = joaat("collectible_jewelry_pers_turq_ring");
			break;
	
		case 87:
			num = joaat("collectible_jewelry_pers_turq_ring");
			break;
	
		case 88:
			num = joaat("collectible_jewelry_coral_ring");
			break;
	
		case 89:
			num = joaat("collectible_jewelry_coral_ring");
			break;
	
		case 90:
			num = joaat("collectible_jewelry_coral_ring");
			break;
	
		case 91:
			num = joaat("collectible_jewelry_emerald_earring");
			break;
	
		case 92:
			num = joaat("collectible_jewelry_emerald_earring");
			break;
	
		case 93:
			num = joaat("collectible_jewelry_emerald_earring");
			break;
	
		case 94:
			num = joaat("collectible_jewelry_qn_dmnd_earring");
			break;
	
		case 95:
			num = joaat("collectible_jewelry_qn_dmnd_earring");
			break;
	
		case 96:
			num = joaat("collectible_jewelry_qn_dmnd_earring");
			break;
	
		case 97:
			num = joaat("collectible_jewelry_wht_dmnd_earring");
			break;
	
		case 98:
			num = joaat("collectible_jewelry_wht_dmnd_earring");
			break;
	
		case 99:
			num = joaat("collectible_jewelry_wht_dmnd_earring");
			break;
	
		case 100:
			num = joaat("collectible_jewelry_rudy_dngl_earring");
			break;
	
		case 101:
			num = joaat("collectible_jewelry_rudy_dngl_earring");
			break;
	
		case 102:
			num = joaat("collectible_jewelry_rudy_dngl_earring");
			break;
	
		case 103:
			num = joaat("collectible_jewelry_drop_earring");
			break;
	
		case 104:
			num = joaat("collectible_jewelry_drop_earring");
			break;
	
		case 105:
			num = joaat("collectible_jewelry_drop_earring");
			break;
	
		case 106:
			num = joaat("collectible_jewelry_coral_dngl_earring");
			break;
	
		case 107:
			num = joaat("collectible_jewelry_coral_dngl_earring");
			break;
	
		case 108:
			num = joaat("collectible_jewelry_coral_dngl_earring");
			break;
	
		case 109:
			num = joaat("collectible_jewelry_turq_stud_earring");
			break;
	
		case 110:
			num = joaat("collectible_jewelry_turq_stud_earring");
			break;
	
		case 111:
			num = joaat("collectible_jewelry_elk_tooth_earring");
			break;
	
		case 112:
			num = joaat("collectible_jewelry_elk_tooth_earring");
			break;
	
		case 113:
			num = joaat("collectible_jewelry_elk_tooth_earring");
			break;
	
		case 114:
			num = joaat("collectible_jewelry_grnet_post_earring");
			break;
	
		case 115:
			num = joaat("collectible_jewelry_grnet_post_earring");
			break;
	
		case 116:
			num = joaat("collectible_jewelry_grnet_post_earring");
			break;
	
		case 117:
			num = joaat("collectible_jewelry_dmnd_pendt_earring");
			break;
	
		case 118:
			num = joaat("collectible_jewelry_dmnd_pendt_earring");
			break;
	
		case 119:
			num = joaat("collectible_jewelry_dmnd_pendt_earring");
			break;
	
		case 120:
			num = joaat("collectible_jewelry_pearl_earring");
			break;
	
		case 121:
			num = joaat("collectible_jewelry_pearl_earring");
			break;
	
		case 122:
			num = joaat("collectible_jewelry_carved_bracelet");
			break;
	
		case 123:
			num = joaat("collectible_jewelry_carved_bracelet");
			break;
	
		case 124:
			num = joaat("collectible_jewelry_carved_bracelet");
			break;
	
		case 125:
			num = joaat("collectible_jewelry_gld_bngle_bracelet");
			break;
	
		case 126:
			num = joaat("collectible_jewelry_gld_bngle_bracelet");
			break;
	
		case 127:
			num = joaat("collectible_jewelry_pearl_bracelet");
			break;
	
		case 128:
			num = joaat("collectible_jewelry_pearl_bracelet");
			break;
	
		case 129:
			num = joaat("collectible_jewelry_grnet_bracelet");
			break;
	
		case 130:
			num = joaat("collectible_jewelry_grnet_bracelet");
			break;
	
		case 131:
			num = joaat("collectible_jewelry_grnet_bracelet");
			break;
	
		case 132:
			num = joaat("collectible_jewelry_turquoise_bracelet");
			break;
	
		case 133:
			num = joaat("collectible_jewelry_turquoise_bracelet");
			break;
	
		case 134:
			num = joaat("collectible_jewelry_turquoise_bracelet");
			break;
	
		case 135:
			num = joaat("collectible_jewelry_sphr_bngle_bracelet");
			break;
	
		case 136:
			num = joaat("collectible_jewelry_sphr_bngle_bracelet");
			break;
	
		case 137:
			num = joaat("collectible_jewelry_sphr_bngle_bracelet");
			break;
	
		case 138:
			num = joaat("collectible_jewelry_sphr_bracelet");
			break;
	
		case 139:
			num = joaat("collectible_jewelry_sphr_bracelet");
			break;
	
		case 140:
			num = joaat("collectible_jewelry_dmnd_bngle_bracelet");
			break;
	
		case 141:
			num = joaat("collectible_jewelry_dmnd_bngle_bracelet");
			break;
	
		case 142:
			num = joaat("collectible_jewelry_blck_pearl_necklace");
			break;
	
		case 143:
			num = joaat("collectible_jewelry_blck_pearl_necklace");
			break;
	
		case 144:
			num = joaat("collectible_jewelry_blck_pearl_necklace");
			break;
	
		case 145:
			num = joaat("collectible_jewelry_topaz_necklace");
			break;
	
		case 146:
			num = joaat("collectible_jewelry_topaz_necklace");
			break;
	
		case 147:
			num = joaat("collectible_jewelry_mthr_pearl_necklace");
			break;
	
		case 148:
			num = joaat("collectible_jewelry_mthr_pearl_necklace");
			break;
	
		case 149:
			num = joaat("collectible_jewelry_gld_pendt_necklace");
			break;
	
		case 150:
			num = joaat("collectible_jewelry_gld_pendt_necklace");
			break;
	
		case 151:
			num = joaat("collectible_jewelry_amethyst_necklace");
			break;
	
		case 152:
			num = joaat("collectible_jewelry_amethyst_necklace");
			break;
	
		case 153:
			num = joaat("collectible_jewelry_amethyst_necklace");
			break;
	
		case 154:
			num = joaat("collectible_jewelry_porcelain_necklace");
			break;
	
		case 155:
			num = joaat("collectible_jewelry_porcelain_necklace");
			break;
	
		case 156:
			num = joaat("collectible_jewelry_slvr_pearl_necklace");
			break;
	
		case 157:
			num = joaat("collectible_jewelry_slvr_pearl_necklace");
			break;
	
		case 158:
			num = joaat("collectible_jewelry_gld_cross_necklace");
			break;
	
		case 159:
			num = joaat("collectible_jewelry_gld_cross_necklace");
			break;
	
		case 160:
			num = joaat("collectible_jewelry_gld_pearl_necklace");
			break;
	
		case 161:
			num = joaat("collectible_jewelry_gld_pearl_necklace");
			break;
	
		case 162:
			num = joaat("collectible_jewelry_moon_ring");
			break;
	
		case 163:
			num = joaat("collectible_jewelry_whtgld_dmnd_ring");
			break;
	
		case 164:
			num = joaat("collectible_jewelry_ylwgld_dmnd_ring");
			break;
	
		case 165:
			num = joaat("collectible_jewelry_french_dmnd_ring");
			break;
	
		case 166:
			num = joaat("collectible_jewelry_turquoise_ring");
			break;
	
		case 167:
			num = joaat("collectible_jewelry_topaz_ring");
			break;
	
		case 168:
			num = joaat("collectible_jewelry_pearl_ring");
			break;
	
		case 169:
			num = joaat("collectible_jewelry_onyx_ring");
			break;
	
		case 170:
			num = joaat("collectible_jewelry_emerald_ring");
			break;
	
		case 171:
			num = joaat("collectible_jewelry_pers_turq_ring");
			break;
	
		case 172:
			num = joaat("collectible_jewelry_coral_ring");
			break;
	
		case 173:
			num = joaat("collectible_jewelry_emerald_earring");
			break;
	
		case 174:
			num = joaat("collectible_jewelry_qn_dmnd_earring");
			break;
	
		case 175:
			num = joaat("collectible_jewelry_wht_dmnd_earring");
			break;
	
		case 176:
			num = joaat("collectible_jewelry_rudy_dngl_earring");
			break;
	
		case 177:
			num = joaat("collectible_jewelry_drop_earring");
			break;
	
		case 178:
			num = joaat("collectible_jewelry_coral_dngl_earring");
			break;
	
		case 179:
			num = joaat("collectible_jewelry_turq_stud_earring");
			break;
	
		case 180:
			num = joaat("collectible_jewelry_elk_tooth_earring");
			break;
	
		case 181:
			num = joaat("collectible_jewelry_grnet_post_earring");
			break;
	
		case 182:
			num = joaat("collectible_jewelry_dmnd_pendt_earring");
			break;
	
		case 183:
			num = joaat("collectible_jewelry_pearl_earring");
			break;
	
		case 184:
			num = joaat("collectible_jewelry_carved_bracelet");
			break;
	
		case 185:
			num = joaat("collectible_jewelry_gld_bngle_bracelet");
			break;
	
		case 186:
			num = joaat("collectible_jewelry_pearl_bracelet");
			break;
	
		case 187:
			num = joaat("collectible_jewelry_grnet_bracelet");
			break;
	
		case 188:
			num = joaat("collectible_jewelry_turquoise_bracelet");
			break;
	
		case 189:
			num = joaat("collectible_jewelry_sphr_bngle_bracelet");
			break;
	
		case 190:
			num = joaat("collectible_jewelry_sphr_bracelet");
			break;
	
		case 191:
			num = joaat("collectible_jewelry_dmnd_bngle_bracelet");
			break;
	
		case 192:
			num = joaat("collectible_jewelry_blck_pearl_necklace");
			break;
	
		case 193:
			num = joaat("collectible_jewelry_topaz_necklace");
			break;
	
		case 194:
			num = joaat("collectible_jewelry_mthr_pearl_necklace");
			break;
	
		case 195:
			num = joaat("collectible_jewelry_gld_pendt_necklace");
			break;
	
		case 196:
			num = joaat("collectible_jewelry_amethyst_necklace");
			break;
	
		case 197:
			num = joaat("collectible_jewelry_porcelain_necklace");
			break;
	
		case 198:
			num = joaat("collectible_jewelry_slvr_pearl_necklace");
			break;
	
		case 199:
			num = joaat("collectible_jewelry_gld_cross_necklace");
			break;
	
		case 200:
			num = joaat("collectible_jewelry_gld_pearl_necklace");
			break;
	
		case 201:
			num = joaat("collectible_coin_1787_cent_tkn");
			break;
	
		case 202:
			num = joaat("collectible_coin_1800_five_dlr");
			break;
	
		case 203:
			num = joaat("collectible_coin_1798_slv_dlr");
			break;
	
		case 204:
			num = joaat("collectible_coin_1800_hlf_dime");
			break;
	
		case 205:
			num = joaat("collectible_coin_1794_slv_dlr");
			break;
	
		case 206:
			num = joaat("collectible_coin_1700_ny_tkn");
			break;
	
		case 207:
			num = joaat("collectible_coin_1800_gld_dlr");
			break;
	
		case 208:
			num = joaat("collectible_coin_1800_gld_qtr");
			break;
	
		case 209:
			num = joaat("collectible_coin_1797_gld_eag");
			break;
	
		case 210:
			num = joaat("collectible_coin_1792_lib_qtr");
			break;
	}

	return num;
}

int func_19(int iParam0) // Position - 0x27D1 Hash - 0xB8EC44B7 ^0x24036B85
{
	switch (iParam0)
	{
		case joaat("collectible_coin_1700_ny_tkn"):
			return joaat("provision_coin_1700_ny_tkn");
	
		case joaat("collectible_jewelry_blck_pearl_necklace"):
			return joaat("provision_jewelry_blck_pearl_necklace");
	
		case joaat("collectible_coin_1800_five_dlr"):
			return joaat("provision_coin_1800_five_dlr");
	
		case joaat("collectible_arrowhead_slate"):
			return joaat("provision_arrowhead_slate");
	
		case joaat("collectible_jewelry_rudy_dngl_earring"):
			return joaat("provision_jewelry_rudy_dngl_earring");
	
		case joaat("collectible_jewelry_moon_ring"):
			return joaat("provision_jewelry_moon_ring");
	
		case joaat("collectible_coin_1800_hlf_dime"):
			return joaat("provision_coin_1800_hlf_dime");
	
		case joaat("collectible_jewelry_drop_earring"):
			return joaat("provision_jewelry_drop_earring");
	
		case joaat("collectible_coin_1797_gld_eag"):
			return joaat("provision_coin_1797_gld_eag");
	
		case joaat("collectible_coin_1794_slv_dlr"):
			return joaat("provision_coin_1794_slv_dlr");
	
		case joaat("collectible_jewelry_coral_dngl_earring"):
			return joaat("provision_jewelry_coral_dngl_earring");
	
		case joaat("collectible_coin_1789_pny"):
			return joaat("provision_coin_1789_pny");
	
		case joaat("COLLECTIBLE_EGG_EAGLE"):
			return joaat("provision_eagle_egg");
	
		case joaat("collectible_jewelry_whtgld_dmnd_ring"):
			return joaat("provision_jewelry_whtgld_dmnd_ring");
	
		case joaat("collectible_hrlm_hairpin_wooden"):
			return joaat("provision_hrlm_hairpin_wooden");
	
		case joaat("collectible_jewelry_qn_dmnd_earring"):
			return joaat("provision_jewelry_qn_dmnd_earring");
	
		case joaat("COLLECTIBLE_HRLM_BRUSH_HORSEHAIR"):
			return joaat("provision_hrlm_brush_horsehair");
	
		case joaat("collectible_jewelry_emerald_ring"):
			return joaat("provision_jewelry_emerald_ring");
	
		case joaat("collectible_arrowhead_rough"):
			return joaat("provision_arrowhead_rough");
	
		case joaat("collectible_jewelry_pearl_bracelet"):
			return joaat("provision_jewelry_pearl_bracelet");
	
		case joaat("collectible_coin_1800_gld_dlr"):
			return joaat("provision_coin_1800_gld_dlr");
	
		case joaat("COLLECTIBLE_EGG_GOOSE"):
			return joaat("provision_goose_egg");
	
		case joaat("collectible_arrowhead_chipped"):
			return joaat("provision_arrowhead_chipped");
	
		case joaat("collectible_arrowhead_raw"):
			return joaat("provision_arrowhead_raw");
	
		case joaat("collectible_jewelry_gld_bngle_bracelet"):
			return joaat("provision_jewelry_gld_bngle_bracelet");
	
		case joaat("COLLECTIBLE_HRLM_COMB_BOXWOOD"):
			return joaat("provision_hrlm_comb_boxwood");
	
		case joaat("COLLECTIBLE_HRLM_BRUSH_BOAR"):
			return joaat("provision_hrlm_brush_boar");
	
		case joaat("collectible_jewelry_emerald_earring"):
			return joaat("provision_jewelry_emerald_earring");
	
		case joaat("collectible_jewelry_gld_cross_necklace"):
			return joaat("provision_jewelry_gld_cross_necklace");
	
		case joaat("collectible_jewelry_turq_stud_earring"):
			return joaat("provision_jewelry_turq_stud_earring");
	
		case joaat("COLLECTIBLE_EGG_VULTURE"):
			return joaat("provision_vulture_egg");
	
		case joaat("collectible_coin_1796_hlf_pny"):
			return joaat("provision_coin_1796_hlf_pny");
	
		case joaat("collectible_hrlm_hairpin_jade"):
			return joaat("provision_hrlm_hairpin_jade");
	
		case joaat("collectible_jewelry_sphr_bracelet"):
			return joaat("provision_jewelry_sphr_bracelet");
	
		case joaat("collectible_jewelry_grnet_bracelet"):
			return joaat("provision_jewelry_grnet_bracelet");
	
		case joaat("collectible_hrlm_hairpin_ivory"):
			return joaat("provision_hrlm_hairpin_ivory");
	
		case joaat("collectible_arrowhead_obsidian"):
			return joaat("provision_arrowhead_obsidian");
	
		case joaat("collectible_jewelry_coral_ring"):
			return joaat("provision_jewelry_coral_ring");
	
		case joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD_NG"):
			return joaat("provision_hrlm_brush_rosewood_ng");
	
		case joaat("collectible_jewelry_gld_pendt_necklace"):
			return joaat("provision_jewelry_gld_pendt_necklace");
	
		case joaat("collectible_arrowhead_splintered"):
			return joaat("provision_arrowhead_splintered");
	
		case joaat("COLLECTIBLE_EGG_SPOONBILL"):
			return joaat("provision_spoonbill_egg");
	
		case joaat("collectible_jewelry_french_dmnd_ring"):
			return joaat("provision_jewelry_french_dmnd_ring");
	
		case joaat("collectible_jewelry_pers_turq_ring"):
			return joaat("provision_jewelry_pers_turq_ring");
	
		case joaat("collectible_hrlm_hairpin_metal"):
			return joaat("provision_hrlm_hairpin_metal");
	
		case joaat("collectible_arrowhead_agate"):
			return joaat("provision_arrowhead_agate");
	
		case joaat("collectible_jewelry_dmnd_pendt_earring"):
			return joaat("provision_jewelry_dmnd_pendt_earring");
	
		case joaat("collectible_jewelry_amethyst_necklace"):
			return joaat("provision_jewelry_amethyst_necklace");
	
		case joaat("collectible_coin_1792_lib_qtr"):
			return joaat("provision_coin_1792_lib_qtr");
	
		case joaat("collectible_jewelry_turquoise_ring"):
			return joaat("provision_jewelry_turquoise_ring");
	
		case joaat("collectible_jewelry_topaz_necklace"):
			return joaat("provision_jewelry_topaz_necklace");
	
		case joaat("COLLECTIBLE_HRLM_COMB_CHERRYWOOD"):
			return joaat("provision_hrlm_comb_cherrywood");
	
		case joaat("collectible_jewelry_dmnd_bngle_bracelet"):
			return joaat("provision_jewelry_dmnd_bngle_bracelet");
	
		case joaat("collectible_jewelry_pearl_ring"):
			return joaat("provision_jewelry_pearl_ring");
	
		case joaat("collectible_coin_1795_hlf_eag"):
			return joaat("provision_coin_1795_hlf_eag");
	
		case joaat("COLLECTIBLE_EGG_HAWK"):
			return joaat("provision_hawk_egg");
	
		case joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD"):
			return joaat("provision_hrlm_brush_rosewood");
	
		case joaat("COLLECTIBLE_EGG_CONDOR"):
			return joaat("provision_condor_egg");
	
		case joaat("collectible_jewelry_mthr_pearl_necklace"):
			return joaat("provision_jewelry_mthr_pearl_necklace");
	
		case joaat("COLLECTIBLE_HRLM_BRUSH_GOATHAIR"):
			return joaat("provision_hrlm_brush_goathair");
	
		case joaat("collectible_hrlm_hairpin_ebony"):
			return joaat("provision_hrlm_hairpin_ebony");
	
		case joaat("collectible_jewelry_porcelain_necklace"):
			return joaat("provision_jewelry_porcelain_necklace");
	
		case joaat("collectible_jewelry_carved_bracelet"):
			return joaat("provision_jewelry_carved_bracelet");
	
		case joaat("collectible_jewelry_sphr_bngle_bracelet"):
			return joaat("provision_jewelry_sphr_bngle_bracelet");
	
		case joaat("collectible_jewelry_pearl_earring"):
			return joaat("provision_jewelry_pearl_earring");
	
		case joaat("collectible_arrowhead_quartz"):
			return joaat("provision_arrowhead_quartz");
	
		case joaat("collectible_jewelry_onyx_ring"):
			return joaat("provision_jewelry_onyx_ring");
	
		case joaat("collectible_jewelry_turquoise_bracelet"):
			return joaat("provision_jewelry_turquoise_bracelet");
	
		case joaat("collectible_jewelry_ylwgld_dmnd_ring"):
			return joaat("provision_jewelry_ylwgld_dmnd_ring");
	
		case joaat("COLLECTIBLE_EGG_EGRET"):
			return joaat("provision_egret_egg");
	
		case joaat("collectible_coin_1792_qtr"):
			return joaat("provision_coin_1792_qtr");
	
		case joaat("collectible_jewelry_slvr_pearl_necklace"):
			return joaat("provision_jewelry_slvr_pearl_necklace");
	
		case joaat("COLLECTIBLE_EGG_HERON"):
			return joaat("provision_heron_egg");
	
		case joaat("collectible_jewelry_elk_tooth_earring"):
			return joaat("provision_jewelry_elk_tooth_earring");
	
		case joaat("COLLECTIBLE_HRLM_COMB_IVORY"):
			return joaat("provision_hrlm_comb_ivory");
	
		case joaat("collectible_jewelry_gld_pearl_necklace"):
			return joaat("provision_jewelry_gld_pearl_necklace");
	
		case joaat("collectible_arrowhead_flint"):
			return joaat("provision_arrowhead_flint");
	
		case joaat("collectible_jewelry_grnet_post_earring"):
			return joaat("provision_jewelry_grnet_post_earring");
	
		case joaat("COLLECTIBLE_EGG_DUCK"):
			return joaat("provision_duck_egg");
	
		case joaat("collectible_coin_1800_gld_qtr"):
			return joaat("provision_coin_1800_gld_qtr");
	
		case joaat("collectible_coin_1787_cent_tkn"):
			return joaat("provision_coin_1787_cent_tkn");
	
		case joaat("COLLECTIBLE_HRLM_BRUSH_EBONY"):
			return joaat("provision_hrlm_brush_ebony");
	
		case joaat("COLLECTIBLE_HRLM_COMB_TORTOISESHELL"):
			return joaat("provision_hrlm_comb_tortoiseshell");
	
		case joaat("collectible_coin_1798_slv_dlr"):
			return joaat("provision_coin_1798_slv_dlr");
	
		case joaat("collectible_arrowhead_bone"):
			return joaat("provision_arrowhead_bone");
	
		case joaat("collectible_arrowhead_feldspar"):
			return joaat("provision_arrowhead_feldspar");
	
		case joaat("collectible_coin_1792_nickel"):
			return joaat("provision_coin_1792_nickel");
	
		case joaat("COLLECTIBLE_EGG_LOON"):
			return joaat("provision_loon_egg");
	
		case joaat("collectible_arrowhead_crude"):
			return joaat("provision_arrowhead_crude");
	
		case joaat("collectible_jewelry_topaz_ring"):
			return joaat("provision_jewelry_topaz_ring");
	
		case joaat("collectible_jewelry_wht_dmnd_earring"):
			return joaat("provision_jewelry_wht_dmnd_earring");
	
		default:
		
	}

	return 0;
}

int func_20(BOOL bParam0) // Position - 0x2CDC Hash - 0x25582C63 ^0xC46E3D2D
{
	int endRange;
	int randomIntInRange;

	endRange = 4;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	if (bParam0)
		return joaat("p_strongbox_snow_01x");

	switch (randomIntInRange)
	{
		case 0:
			return joaat("p_strongbox_muddy_01x");
	
		case 1:
			return joaat("p_strongbox_snow_01x");
	
		case 2:
			return joaat("p_strongbox_waterlogged_01x");
	
		case 3:
			return joaat("p_strongbox_rusted_01x");
	
		default:
		
	}

	return joaat("p_strongbox_muddy_01x");
}

int func_21() // Position - 0x2D42 Hash - 0x523747D5 ^0x2E8FE2FB
{
	int endRange;
	int randomIntInRange;

	endRange = 6;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	switch (randomIntInRange)
	{
		case 0:
			return joaat("s_jewlerybox_sm_fancy01x");
	
		case 1:
			return joaat("s_jewlerybox_sm_fancy02x");
	
		case 2:
			return joaat("s_jewlerybox_sm_plain01x");
	
		case 3:
			return joaat("s_jewlerybox_sm_plain02x");
	
		case 4:
			return joaat("s_jewlerybox_sm_poor01x");
	
		case 5:
			return joaat("s_jewlerybox_sm_poor02x");
	
		default:
		
	}

	return joaat("s_jewlerybox_sm_poor01x");
}

void func_22() // Position - 0x2DB7 Hash - 0x182FBE0F ^0x126D7F9C
{
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_7 = 0;
	return;
}

BOOL func_23(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x2DE6 Hash - 0x430EB7DB ^0xA2691D59
{
	return !PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS(vParam0);
}

BOOL func_24() // Position - 0x2DF7 Hash - 0x28C231E4 ^0xBECFB109
{
	int i;
	Player player;
	Player player2;
	Player player3;

	player2 = PLAYER::PLAYER_ID();

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else
		{
			player3 = player;
		
			if (player3 != player2)
				if (Global_1222034[player3 /*9*/].f_1 == Global_1222034[player2 /*9*/].f_1)
					if (Global_1222034[player3 /*9*/].f_2 == Global_1222034[player2 /*9*/].f_2)
						if (Global_1222034[player3 /*9*/].f_6)
							return true;
		}
	}

	return false;
}

void func_25(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2E85 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_43(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_76(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_77(num);
	*uParam0 = 0;
	return;
}

void func_26(var uParam0) // Position - 0x2ED9 Hash - 0x5613A6CF ^0xC1FD6F6D
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
		func_78(uParam0->f_21, uParam0->f_21, 0);

	return;
}

void func_27(var uParam0, var uParam1, var uParam2) // Position - 0x2EFA Hash - 0xAC508A8A ^0xAC508A8A
{
	if (func_79(Global_1222323, uParam0))
		Global_1222323 = { 0f, 0f, 0f };

	return;
}

void func_28(var uParam0, var uParam1, BOOL bParam2) // Position - 0x2F1C Hash - 0xD7DB9ABA ^0x7AB2D8E5
{
	var value;
	int num;
	int num2;

	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
		return;

	value = func_80(1, 8);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&value, PLAYER::PLAYER_ID());
	num.f_4 = 1;
	num = 40;
	num.f_4 = bParam2;
	num.f_5 = uParam0;
	num.f_6 = uParam1;
	num.f_1 = PLAYER::GET_PLAYER_INDEX();

	if (bParam2)
	{
		num2.f_12 = -1;
		num2.f_12.f_1 = -1;
		num2.f_14 = 255;
		num2.f_15 = 255;
		num2.f_14 = Global_1295666.f_149[Global_1295666];
		num2 = 0;
		num2.f_1 = PLAYER::GET_PLAYER_INDEX();
		num2.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		num2.f_4 = 103;
		func_82(num2, func_81(Global_34, 0f, 0f, 0f, 300f, 300f, 300f, joaat("volSphere"), false, 8), false, false);
	}

	func_83(&num, &value);
	return;
}

void func_29(int iParam0, int iParam1, int iParam2) // Position - 0x2FEC Hash - 0xBEB9F473 ^0xBEB9F473
{
	func_84(&Global_1222327[iParam0 /*251*/][iParam1], iParam2);
	return;
}

void func_30() // Position - 0x3006 Hash - 0x9370A593 ^0x37FC5A70
{
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
	return;
}

void func_31() // Position - 0x3042 Hash - 0xCBA3AB74 ^0x4F1079DA
{
	if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	}

	return;
}

void func_32(var uParam0) // Position - 0x3080 Hash - 0x6197CFB5 ^0xB076B5A9
{
	func_85(uParam0);
	func_86(&(uParam0->f_6), 1);
	return;
}

void func_33(BOOL bParam0) // Position - 0x3097 Hash - 0xEFDB7ACC ^0xEFDB7ACC
{
	if (bParam0)
		func_87(0, 6);
	else
		func_88(0, 6, false);

	return;
}

void func_34(var uParam0) // Position - 0x30B4 Hash - 0x530C41A5 ^0x73534952
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
		VOLUME::DELETE_VOLUME(uParam0->f_7);

	return;
}

BOOL func_35(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x30CF Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_89(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_36(var uParam0) // Position - 0x312A Hash - 0xD328367E ^0xDDDC7BCE
{
	if (!func_14(uParam0, 16))
		return Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0;

	return Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0 && Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 == uParam0->f_1;
}

int func_37(var uParam0) // Position - 0x317A Hash - 0xD73B9827 ^0x6B119A2B
{
	return uParam0->f_2;
}

BOOL func_38(int iParam0, int iParam1, int iParam2) // Position - 0x3186 Hash - 0xC821A3FC ^0xC821A3FC
{
	return func_51(Global_1222327[iParam0 /*251*/][iParam1], iParam2);
}

BOOL func_39(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, BOOL bParam6, int iParam7) // Position - 0x31A0 Hash - 0x3933E99B ^0x22F43E5E
{
	var unk;
	var unk3;
	var unk5;
	var unk7;
	var unk12;
	var unk17;

	unk = 1;
	unk3 = 1;
	unk5 = 1;
	unk7 = 4;
	unk7[0] = joaat("p_strongbox_muddy_01x");
	unk7[1] = joaat("p_strongbox_snow_01x");
	unk7[2] = joaat("p_strongbox_waterlogged_01x");
	unk7[3] = joaat("p_strongbox_rusted_01x");
	unk12 = 4;
	unk12[0] = joaat("mp005_p_dressinglbmhay04x");
	unk12[1] = joaat("mp005_p_dressinglbmhay03x");
	unk12[2] = joaat("mp005_p_dressinglbmhay02x");
	unk12[3] = joaat("mp005_p_dressinglbmhay01x");

	if (bParam6)
	{
		unk17 = 30;
		unk17[0] = joaat("mp005_p_dirtpile_hen_b_buried");
		unk17[1] = joaat("mp005_p_dirtpile_gen_buried");
		unk17[2] = joaat("mp005_p_dirtpile_sca03_buried");
		unk17[3] = joaat("mp005_p_dirtpile_bay_buried");
		unk17[4] = joaat("mp005_p_dirtpile_bay_unburied");
		unk17[5] = joaat("mp005_p_dirtpile_big01_buried");
		unk17[6] = joaat("mp005_p_dirtpile_big01_unburied");
		unk17[7] = joaat("mp005_p_dirtpile_big02_mine_buried");
		unk17[8] = joaat("mp005_p_dirtpile_big02_mine_unburied");
		unk17[9] = joaat("mp005_p_dirtpile_big03_buried");
		unk17[10] = joaat("mp005_p_dirtpile_big03_unburied");
		unk17[11] = joaat("mp005_p_dirtpile_cum_buried");
		unk17[12] = joaat("mp005_p_dirtpile_cum_unburied");
		unk17[13] = joaat("MP005_P_DIRTPILE_GRI_MINES_BURIED");
		unk17[14] = joaat("mp005_p_dirtpile_gri_mines_unburied");
		unk17[15] = joaat("mp005_p_dirtpile_hea_buried");
		unk17[16] = joaat("mp005_p_dirtpile_hea_unburied");
		unk17[17] = joaat("mp005_p_dirtpile_hen_buried");
		unk17[18] = joaat("mp005_p_dirtpile_hen_unburied");
		unk17[19] = joaat("mp005_p_dirtpile_rio_buried");
		unk17[20] = joaat("mp005_p_dirtpile_rio_unburied");
		unk17[21] = joaat("mp005_p_dirtpile_roa_buried");
		unk17[22] = joaat("mp005_p_dirtpile_roa_unburied");
		unk17[23] = joaat("mp005_p_dirtpile_sca01_buried");
		unk17[24] = joaat("mp005_p_dirtpile_sca01_unburied");
		unk17[25] = joaat("mp005_p_dirtpile_sca02_buried");
		unk17[26] = joaat("mp005_p_dirtpile_sca02_unburied");
		unk17[27] = joaat("mp005_p_dirtpile_shovel01x");
		unk17[28] = joaat("mp005_p_dirtpile_tall_buried");
		unk17[29] = joaat("mp005_p_dirtpile_tall_unburied");
	
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
			if (func_90(&unk, &unk17, 1, uParam0, iParam7) > 0)
				*uParam3 = unk[0];
	
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
			return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam5))
		if (func_90(&unk5, &unk12, 1, uParam0, iParam7) > 0)
			*uParam5 = unk5[0];

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam5))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		if (func_90(&unk3, &unk7, 1, uParam0, iParam7) > 0)
		{
			if (DECORATOR::DECOR_EXIST_ON(unk3[0], "ChestDugUp"))
			{
				*uParam4 = unk3[0];
				return true;
			}
		}
	}
	else if (func_90(&unk3, &unk7, 1, uParam0, iParam7) > 0)
	{
		if (DECORATOR::DECOR_EXIST_ON(unk3[0], "ChestDugUp"))
		{
			*uParam4 = unk3[0];
			return true;
		}
	}

	return false;
}

void func_40(int iParam0, int iParam1, int iParam2) // Position - 0x3433 Hash - 0xBEB9F473 ^0xBEB9F473
{
	func_75(&Global_1222327[iParam0 /*251*/][iParam1], iParam2);
	return;
}

BOOL func_41(int iParam0) // Position - 0x344D Hash - 0xCBB67E45 ^0x94031C60
{
	int i;
	Player player;
	float num;
	Player player2;
	Player player3;
	Player player4;

	num = -1f;
	player3 = PLAYER::PLAYER_ID();

	if (Global_1222034[player3 /*9*/].f_1 != iParam0)
		return false;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else
		{
			player4 = player;
		
			if (Global_1222034[player4 /*9*/].f_1 == Global_1222034[player3 /*9*/].f_1)
			{
				if (Global_1222034[player4 /*9*/].f_2 == Global_1222034[player3 /*9*/].f_2)
				{
					if (Global_1222034[player4 /*9*/].f_4)
					{
						if (num == -1f || num >= Global_1222034[player4 /*9*/].f_8)
						{
							num = Global_1222034[player4 /*9*/].f_8;
							player2 = player4;
						}
					}
				}
			}
		}
	}

	if (num > 0f)
	{
		if (Global_1295666.f_149[Global_1295666] != Global_1295666.f_149[player2])
		{
			if (!func_51(Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 1))
				func_75(&Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 1);
		
			return true;
		}
	
		if (!func_51(Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 32))
			func_75(&Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 32);
	}

	return false;
}

void func_42(var uParam0, int iParam1) // Position - 0x35C2 Hash - 0x4F8BE4B5 ^0x5AE41537
{
	uParam0->f_2 = iParam1;
	return;
}

BOOL func_43(int iParam0) // Position - 0x35D0 Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

BOOL func_44(int iParam0, BOOL bParam1) // Position - 0x360F Hash - 0xAAB142C4 ^0xDB043156
{
	int num;

	if (bParam1 && !func_43(iParam0))
		return false;

	num = func_76(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3);
}

BOOL func_45(BOOL bParam0) // Position - 0x3642 Hash - 0xD771AE35 ^0xC45666E8
{
	if (func_91(joaat("kit_collector_spade"), 1))
		if (bParam0)
			if (func_91(joaat("weapon_kit_metal_detector"), 1))
				return true;
		else
			return true;

	return false;
}

void func_46(var uParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x3675 Hash - 0x27AD60A1 ^0x27AD60A1
{
	if (!func_23(vParam1))
	{
		func_27(vParam1);
		return;
	}

	if (_IS_NULL_VECTOR(Global_1222323))
		Global_1222323 = { vParam1 };
	else if (!func_79(Global_1222323, vParam1))
		if (BUILTIN::VDIST2(Global_34, vParam1) < BUILTIN::VDIST2(Global_34, Global_1222323))
			Global_1222323 = { vParam1 };

	return;
}

void func_47(var uParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x36EA Hash - 0x9EDD889C ^0xE38DDFD2
{
	BOOL flag;
	BOOL flag2;
	float num;
	int value;
	int frequency;

	if (!_IS_NULL_VECTOR(Global_1222323))
	{
		if (MISC::GET_FRAME_COUNT() % 30 == 0 || uParam0->f_10 == -1f)
			uParam0->f_10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1222323, vParam1, true);
	
		if (uParam0->f_10 <= 5f)
			flag = true;
	}

	flag2 = func_93(uParam0, bParam4, flag);

	if (!flag2)
		if (uParam0->f_8)
			uParam0->f_8 = 0;

	if (uParam0->f_11 < 8)
		uParam0->f_11 = uParam0->f_11 + 1;
	else
		uParam0->f_11 = 0;

	if (!uParam0->f_8)
	{
		if (uParam0->f_11 == 0)
			uParam0->f_8 = 1;
	
		return;
	}

	if (MISC::GET_FRAME_COUNT() % 30 == 0 || uParam0->f_9 == -1f)
		uParam0->f_9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam1, true);

	num = 10f;
	num = num * (1f + func_94());

	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_9 < num)
			{
				if (bParam5)
				{
					if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
					{
						uParam0->f_4 = AUDIO::GET_SOUND_ID();
					
						if (Global_1940199.f_38 != joaat("weapon_kit_metal_detector"))
							AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(uParam0->f_4, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", false, 0, bParam6);
					
						func_95(uParam0, 1);
					}
				}
				else
				{
					func_95(uParam0, 1);
				}
			}
			break;
	
		case 1:
			value = BUILTIN::FLOOR(500f * ((num - uParam0->f_9) / num));
			frequency = BUILTIN::FLOOR(256f * ((num - uParam0->f_9) / num));
		
			if (value < 0)
				value = MISC::ABSI(value);
		
			if (value > 9999)
				value = 9999;
		
			if (uParam0->f_9 < 3f && bParam7)
				func_96(250);
		
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, value, frequency);
			func_97(&(uParam0->f_1));
			func_95(uParam0, 2);
			break;
	
		case 2:
			if (uParam0->f_9 >= num + 5f || !bParam4 || flag)
			{
				if (bParam5)
					func_85(uParam0);
			
				func_95(uParam0, 0);
			}
			else if (func_98(&(uParam0->f_1)) >= 2f)
			{
				func_95(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_96(250);
			}
			break;
	}

	return;
}

void func_48(int iParam0) // Position - 0x3914 Hash - 0xE4CB9F65 ^0x12B816AE
{
	Entity firstEntityPedIsCarrying;

	if (func_43(iParam0))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1295666.f_3);
	
		if (PED::IS_PED_CARRYING_SOMETHING(Global_1295666.f_3) || TASK::IS_PED_GETTING_UP(Global_1295666.f_3) || PED::IS_PED_RAGDOLL(Global_1295666.f_3) || !func_99() || Global_1102813.f_3664 || ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) || PED::IS_PED_JUMPING(Global_1295666.f_3) || PED::IS_PED_CLIMBING(Global_1295666.f_3) || PED::IS_PED_FALLING(Global_1295666.f_3) || PED::IS_PED_HOGTIED(Global_33) || func_100(Global_33) || PED::IS_PED_IN_MELEE_COMBAT(Global_33) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 1, 0))
			if (func_101(iParam0, false))
				func_102(iParam0, false, true, true);
		else if (!func_101(iParam0, false))
			func_102(iParam0, true, true, true);
	}

	return;
}

void func_49(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0x3A12 Hash - 0x6C08AC8B ^0x276F2F16
{
	if (func_62(Global_33, uParam0, true) < iParam5)
	{
		if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 != iParam3)
			Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 = iParam3;
	
		if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 != iParam4)
			Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = iParam4;
	}

	return;
}

void func_50(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, int iParam7) // Position - 0x3A6A Hash - 0xA400C89E ^0xDFDC4B6A
{
	if (!func_103(iParam0))
	{
		*iParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
	
		if (func_103(iParam0))
		{
		}
	}

	return;
}

BOOL func_51(int iParam0, int iParam1) // Position - 0x3A9E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_52(var uParam0, const char* sParam1, char* sParam2, Vector3 vParam3, var uParam4, var uParam5, Object obParam6, Hash hParam7, Object obParam8, Hash hParam9, Object obParam10, Hash hParam11, BOOL bParam12) // Position - 0x3AAD Hash - 0xFF607F3C ^0xD56AB299
{
	if (bParam12)
	{
		if (!STREAMING::HAS_MODEL_LOADED(hParam7))
		{
			STREAMING::REQUEST_MODEL(hParam7, false);
			return false;
		}
	}

	if (!STREAMING::HAS_MODEL_LOADED(hParam9))
	{
		STREAMING::REQUEST_MODEL(hParam9, false);
		return false;
	}

	if (!STREAMING::HAS_MODEL_LOADED(hParam11))
	{
		STREAMING::REQUEST_MODEL(hParam11, false);
		return false;
	}

	if (bParam12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(obParam6))
			obParam6 = OBJECT::CREATE_OBJECT_NO_OFFSET(hParam7, vParam3, true, true, false, true);
	
		if (!ENTITY::DOES_ENTITY_EXIST(obParam6))
			return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obParam8))
		obParam8 = OBJECT::CREATE_OBJECT_NO_OFFSET(hParam9, vParam3, true, true, false, true);

	if (!ENTITY::DOES_ENTITY_EXIST(obParam8))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam10))
		obParam10 = OBJECT::CREATE_OBJECT_NO_OFFSET(hParam11, vParam3, true, true, false, true);

	if (!ENTITY::DOES_ENTITY_EXIST(obParam10))
		return false;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 64, sParam2, false, true);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		return false;

	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, vParam3, 0f, 0f, 0f, 2);
	
		if (ENTITY::DOES_ENTITY_EXIST(obParam6))
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "MOUND", obParam6, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obParam8))
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "CHEST", obParam8, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obParam10))
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "DRESSING", obParam10, 0);
	
		if (ANIMSCENE::_GET_ANIM_SCENE_PED(*uParam0, "player", false) == Global_33)
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, "player", Global_33);
	
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam0, sParam2, true);
		ANIMSCENE::START_ANIM_SCENE(*uParam0);
		return true;
	}

	return false;
}

Vector3 func_53(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x3C55 Hash - 0x4451FC2 ^0x4451FC2
{
	var unk;
	float num;
	float num2;
	float num3;
	Vector3 vector;
	Vector3 vector2;
	float num4;

	unk = { func_104(uParam0) };
	num = { func_106(func_106(unk, func_105(iParam3 - 90f)), unk) };
	num2 = MISC::ATAN2(num.f_1, num);
	num3 = -MISC::ATAN2(num.f_2, BUILTIN::SQRT((num * num) + (num.f_1 * num.f_1)));
	vector = { -num.f_1, num, 0f };
	vector2 = { func_106(vector, num) };
	num4 = MISC::ATAN2(func_107(vector, unk) / BUILTIN::VMAG(vector), func_107(vector2, unk) / BUILTIN::VMAG(vector2)) + 180f;
	return num4, num3, num2;
}

int func_54(Entity eParam0, Entity eParam1, int iParam2) // Position - 0x3D0B Hash - 0xF2B92A32 ^0xAD1DE34B
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_1296539.f_32))
		Global_1296539.f_32 = ITEMSET::CREATE_ITEMSET(true);

	if (!ITEMSET::IS_IN_ITEMSET(eParam0, Global_1296539.f_32))
		ITEMSET::ADD_TO_ITEMSET(eParam0, Global_1296539.f_32);

	if (!func_108(eParam0))
	{
		PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), eParam0, false);
		PLAYER::_0x6ECFC621A168424C(eParam0, eParam1, iParam2, 0);
		PLAYER::_EAGLE_EYE_SET_CUSTOM_DISTANCE(eParam0, 500f);
		return 1;
	}

	for (i = 0; i < 10; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1296539[i /*2*/]))
		{
			Global_1296539[i /*2*/] = eParam0;
			return 1;
		}
	}

	return 0;
}

BOOL func_55(var uParam0, int iParam1) // Position - 0x3DBB Hash - 0x2C12AD55 ^0xA122F45E
{
	if (func_91(joaat("kit_collector_spade"), 1))
	{
		if (Global_1102813.f_3664)
			return false;
	
		if (func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_7, true) > iParam1)
			return false;
	
		if (func_14(uParam0, 16))
			if (func_109(uParam0->f_5))
				return false;
	
		if (func_14(uParam0, 2))
			if (func_64(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, true, false) == joaat("weapon_kit_metal_detector") && func_62(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_7, true) <= 1.6f)
				return true;
		else
			return true;
	}

	return false;
}

int func_56(char* sParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, Hash hParam15, int iParam16) // Position - 0x3E61 Hash - 0x8FE94EEE ^0x148ED6A8
{
	int i;
	int num;
	int num2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (_IS_NULL_VECTOR(uParam2))
		return 0;

	if (iParam5 <= 0f)
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_110(i, 2))
		{
			if (func_111(uParam2, Global_1951910[i /*23*/].f_6, 0.01f, true) && hParam1 == Global_1951910[i /*23*/].f_4)
			{
				num2 = i;
				return num2;
			}
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_112(num, hParam1, sParam0, 4, iParam6, iParam7, uParam2, iParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, false, false, 0, hParam15, iParam16);
		return num;
	}

	return 0;
}

void func_57(int iParam0, var uParam1) // Position - 0x3F3F Hash - 0x4F0FB712 ^0x5C95A2E0
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (func_44(iParam0, true))
		{
			if (!*uParam1)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam1 = 1;
			}
		}
		else if (*uParam1)
		{
			*uParam1 = 0;
		}
	}

	return;
}

BOOL func_58(int iParam0, BOOL bParam1) // Position - 0x3F81 Hash - 0x1C19B2F4 ^0xAAE134BB
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_43(iParam0))
		return false;

	num = func_76(iParam0);

	if (HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951910[num /*23*/].f_3))
	{
		if (Global_1951910[num /*23*/].f_20)
			gameTimer = MISC::GET_GAME_TIMER();
		else
			gameTimer = MISC::GET_SYSTEM_TIME();
	
		progress = HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
	
		if (!HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3))
		{
			num2 = gameTimer - Global_1951910[num /*23*/].f_21;
			num3 = BUILTIN::FLOOR((float)Global_1951910[num /*23*/].f_18 * (1f - Global_1951910[num /*23*/].f_22));
		
			if (num2 > num3)
				return true;
		}
		else
		{
			Global_1951910[num /*23*/].f_21 = gameTimer;
			Global_1951910[num /*23*/].f_22 = progress;
		}
	}

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);
}

void func_59(Ped pedParam0) // Position - 0x407C Hash - 0xC59238C2 ^0x33BE37F1
{
	Entity firstEntityPedIsCarrying;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(pedParam0);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) && !ENTITY::IS_ENTITY_DEAD(firstEntityPedIsCarrying) && ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
			PED::DETACH_CARRIABLE_ENTITY(firstEntityPedIsCarrying, false, false);
	}

	return;
}

float func_60(int iParam0, BOOL bParam1) // Position - 0x40BE Hash - 0x376EA9F4 ^0xA7A80B21
{
	int num;

	if (bParam1 && !func_43(iParam0))
		return 0f;

	num = func_76(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
}

void func_61() // Position - 0x4116 Hash - 0x3C4FB117 ^0x6DE37149
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);
	return;
}

float func_62(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x413F Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_63(float fParam0) // Position - 0x4167 Hash - 0xBE1CFE42 ^0xF8E8EB5D
{
	if (!Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4 = 1;
	
		if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 < 0f)
			Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 = fParam0;
	}

	return;
}

int func_64(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x41AB Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

float func_65(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x41D1 Hash - 0x9F66817B ^0xCA5C01B6
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - uParam0;
	num3 = fParam3.f_1 - uParam0.f_1;

	if (num3 != 0f)
		num = MISC::ATAN2(num2, num3);
	else if (num2 < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

void func_66() // Position - 0x4236 Hash - 0x9F0B4E37 ^0x6923883A
{
	if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4)
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_5 = 1;

	return;
}

BOOL func_67(var uParam0) // Position - 0x425A Hash - 0x3060FFB1 ^0x616A78E6
{
	var unk;
	int i;
	int num;

	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_7 = 1;

	while (!func_113(uParam0->f_29, &unk))
	{
		return false;
	}

	num = uParam0->f_5;

	for (i = 0; i < Global_17418.f_2992.f_1; i = i + 1)
	{
		if (num == Global_17418.f_2992.f_1[i /*5*/].f_4)
			Global_17418.f_2992.f_1[i /*5*/] = true;
	}

	func_115(func_114(joaat("collectibles_collected"), joaat("w_shovel")), 1);

	if (func_14(uParam0, 2))
		func_115(func_114(joaat("collectibles_collected"), joaat("w_metal_detector")), 1);

	return true;
}

void func_68(int iParam0) // Position - 0x42F4 Hash - 0x6ADFA38F ^0x3BC04BBD
{
	if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(iParam0))
		return;

	PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(iParam0);
	return;
}

void func_69(BOOL bParam0, BOOL bParam1) // Position - 0x430E Hash - 0x5538C6F1 ^0xAF1D7299
{
	if (bParam1)
		func_116(-753305330, 0, 255, 0, false);
	else if (bParam0)
		func_116(11389876, 0, 255, 0, false);

	return;
}

BOOL func_70() // Position - 0x4340 Hash - 0x28C231E4 ^0xBECFB109
{
	int i;
	Player player;
	Player player2;
	Player player3;

	player2 = PLAYER::PLAYER_ID();

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else
		{
			player3 = player;
		
			if (player3 != player2)
				if (Global_1222034[player3 /*9*/].f_1 == Global_1222034[player2 /*9*/].f_1)
					if (Global_1222034[player3 /*9*/].f_2 == Global_1222034[player2 /*9*/].f_2)
						if (Global_1222034[player3 /*9*/].f_5)
							return true;
		}
	}

	return false;
}

Hash func_71() // Position - 0x43CE Hash - 0x3CBB73B4 ^0xC0EEE633
{
	int i;
	var unk;
	Player player;
	Player player2;
	Player player3;

	player2 = PLAYER::PLAYER_ID();

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else
		{
			player3 = player;
		
			if (player3 != player2)
			{
				if (Global_1222034[player3 /*9*/].f_1 == Global_1222034[player2 /*9*/].f_1)
				{
					if (Global_1222034[player3 /*9*/].f_2 == Global_1222034[player2 /*9*/].f_2)
					{
						if (Global_1222034[player3 /*9*/].f_6)
						{
							unk = Global_1222034[player3 /*9*/].f_3;
							return unk;
						}
					}
				}
			}
		}
	}

	return unk;
}

BOOL func_72(Hash hParam0, int iParam1) // Position - 0x446A Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_73(int iParam0) // Position - 0x4484 Hash - 0xB8EC44B7 ^0x4110ECDF
{
	switch (iParam0)
	{
		case joaat("provision_hrlm_hairpin_ivory"):
			return joaat("collectible_hrlm_hairpin_ivory");
	
		case joaat("provision_arrowhead_slate"):
			return joaat("collectible_arrowhead_slate");
	
		case joaat("provision_coin_1800_gld_dlr"):
			return joaat("collectible_coin_1800_gld_dlr");
	
		case -1962391614:
			return 1736254176;
	
		case -1901964465:
			return 1925678741;
	
		case joaat("provision_jewelry_french_dmnd_ring"):
			return joaat("collectible_jewelry_french_dmnd_ring");
	
		case joaat("provision_hrlm_brush_rosewood"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD");
	
		case joaat("provision_coin_1792_nickel"):
			return joaat("collectible_coin_1792_nickel");
	
		case joaat("provision_hrlm_comb_tortoiseshell"):
			return joaat("COLLECTIBLE_HRLM_COMB_TORTOISESHELL");
	
		case joaat("provision_coin_1796_hlf_pny"):
			return joaat("collectible_coin_1796_hlf_pny");
	
		case joaat("provision_arrowhead_bone"):
			return joaat("collectible_arrowhead_bone");
	
		case joaat("provision_arrowhead_raw"):
			return joaat("collectible_arrowhead_raw");
	
		case joaat("provision_coin_1795_hlf_eag"):
			return joaat("collectible_coin_1795_hlf_eag");
	
		case joaat("provision_jewelry_grnet_post_earring"):
			return joaat("collectible_jewelry_grnet_post_earring");
	
		case joaat("provision_hrlm_comb_ivory"):
			return joaat("COLLECTIBLE_HRLM_COMB_IVORY");
	
		case -1695562218:
			return -14631498;
	
		case joaat("provision_hrlm_brush_horsehair"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_HORSEHAIR");
	
		case joaat("provision_arrowhead_obsidian"):
			return joaat("collectible_arrowhead_obsidian");
	
		case joaat("provision_jewelry_gld_pearl_necklace"):
			return joaat("collectible_jewelry_gld_pearl_necklace");
	
		case -1574273736:
			return 237248172;
	
		case joaat("provision_jewelry_turquoise_bracelet"):
			return joaat("collectible_jewelry_turquoise_bracelet");
	
		case joaat("provision_condor_egg"):
			return joaat("COLLECTIBLE_EGG_CONDOR");
	
		case -1471980896:
			return -930591306;
	
		case joaat("provision_jewelry_ylwgld_dmnd_ring"):
			return joaat("collectible_jewelry_ylwgld_dmnd_ring");
	
		case joaat("provision_jewelry_onyx_ring"):
			return joaat("collectible_jewelry_onyx_ring");
	
		case joaat("provision_jewelry_emerald_earring"):
			return joaat("collectible_jewelry_emerald_earring");
	
		case joaat("provision_jewelry_rudy_dngl_earring"):
			return joaat("collectible_jewelry_rudy_dngl_earring");
	
		case joaat("provision_jewelry_dmnd_pendt_earring"):
			return joaat("collectible_jewelry_dmnd_pendt_earring");
	
		case joaat("provision_coin_1797_gld_eag"):
			return joaat("collectible_coin_1797_gld_eag");
	
		case joaat("provision_egret_egg"):
			return joaat("COLLECTIBLE_EGG_EGRET");
	
		case joaat("provision_duck_egg"):
			return joaat("COLLECTIBLE_EGG_DUCK");
	
		case joaat("provision_arrowhead_quartz"):
			return joaat("collectible_arrowhead_quartz");
	
		case joaat("provision_jewelry_gld_pendt_necklace"):
			return joaat("collectible_jewelry_gld_pendt_necklace");
	
		case -925996336:
			return -408379377;
	
		case joaat("provision_arrowhead_flint"):
			return joaat("collectible_arrowhead_flint");
	
		case joaat("provision_jewelry_topaz_necklace"):
			return joaat("collectible_jewelry_topaz_necklace");
	
		case joaat("provision_jewelry_emerald_ring"):
			return joaat("collectible_jewelry_emerald_ring");
	
		case joaat("provision_hrlm_brush_boar"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_BOAR");
	
		case joaat("provision_coin_1792_lib_qtr"):
			return joaat("collectible_coin_1792_lib_qtr");
	
		case -669648037:
			return -1668855818;
	
		case joaat("provision_jewelry_pearl_earring"):
			return joaat("collectible_jewelry_pearl_earring");
	
		case joaat("provision_coin_1800_hlf_dime"):
			return joaat("collectible_coin_1800_hlf_dime");
	
		case -564862271:
			return 1798945032;
	
		case joaat("provision_jewelry_blck_pearl_necklace"):
			return joaat("collectible_jewelry_blck_pearl_necklace");
	
		case joaat("provision_jewelry_carved_bracelet"):
			return joaat("collectible_jewelry_carved_bracelet");
	
		case -488648162:
			return -1465903195;
	
		case -413279196:
			return -1189402959;
	
		case -399160143:
			return -14146038;
	
		case joaat("provision_coin_1789_pny"):
			return joaat("collectible_coin_1789_pny");
	
		case joaat("provision_jewelry_grnet_bracelet"):
			return joaat("collectible_jewelry_grnet_bracelet");
	
		case joaat("provision_jewelry_whtgld_dmnd_ring"):
			return joaat("collectible_jewelry_whtgld_dmnd_ring");
	
		case -282219948:
			return -1199922785;
	
		case joaat("provision_arrowhead_agate"):
			return joaat("collectible_arrowhead_agate");
	
		case joaat("provision_jewelry_turquoise_ring"):
			return joaat("collectible_jewelry_turquoise_ring");
	
		case joaat("provision_jewelry_coral_dngl_earring"):
			return joaat("collectible_jewelry_coral_dngl_earring");
	
		case joaat("provision_goose_egg"):
			return joaat("COLLECTIBLE_EGG_GOOSE");
	
		case joaat("provision_hrlm_brush_rosewood_ng"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_ROSEWOOD_NG");
	
		case joaat("provision_jewelry_coral_ring"):
			return joaat("collectible_jewelry_coral_ring");
	
		case joaat("provision_jewelry_porcelain_necklace"):
			return joaat("collectible_jewelry_porcelain_necklace");
	
		case joaat("provision_hrlm_hairpin_jade"):
			return joaat("collectible_hrlm_hairpin_jade");
	
		case joaat("provision_jewelry_slvr_pearl_necklace"):
			return joaat("collectible_jewelry_slvr_pearl_necklace");
	
		case 212472674:
			return -754054823;
	
		case joaat("provision_spoonbill_egg"):
			return joaat("COLLECTIBLE_EGG_SPOONBILL");
	
		case joaat("provision_jewelry_sphr_bracelet"):
			return joaat("collectible_jewelry_sphr_bracelet");
	
		case joaat("provision_hrlm_comb_cherrywood"):
			return joaat("COLLECTIBLE_HRLM_COMB_CHERRYWOOD");
	
		case joaat("provision_arrowhead_rough"):
			return joaat("collectible_arrowhead_rough");
	
		case joaat("provision_coin_1800_gld_qtr"):
			return joaat("collectible_coin_1800_gld_qtr");
	
		case joaat("provision_jewelry_pers_turq_ring"):
			return joaat("collectible_jewelry_pers_turq_ring");
	
		case joaat("provision_jewelry_dmnd_bngle_bracelet"):
			return joaat("collectible_jewelry_dmnd_bngle_bracelet");
	
		case joaat("provision_jewelry_moon_ring"):
			return joaat("collectible_jewelry_moon_ring");
	
		case joaat("provision_heron_egg"):
			return joaat("COLLECTIBLE_EGG_HERON");
	
		case joaat("provision_jewelry_drop_earring"):
			return joaat("collectible_jewelry_drop_earring");
	
		case joaat("provision_jewelry_qn_dmnd_earring"):
			return joaat("collectible_jewelry_qn_dmnd_earring");
	
		case joaat("provision_jewelry_pearl_ring"):
			return joaat("collectible_jewelry_pearl_ring");
	
		case joaat("provision_loon_egg"):
			return joaat("COLLECTIBLE_EGG_LOON");
	
		case joaat("provision_coin_1798_slv_dlr"):
			return joaat("collectible_coin_1798_slv_dlr");
	
		case joaat("provision_jewelry_mthr_pearl_necklace"):
			return joaat("collectible_jewelry_mthr_pearl_necklace");
	
		case joaat("provision_jewelry_gld_cross_necklace"):
			return joaat("collectible_jewelry_gld_cross_necklace");
	
		case joaat("provision_jewelry_gld_bngle_bracelet"):
			return joaat("collectible_jewelry_gld_bngle_bracelet");
	
		case joaat("provision_jewelry_amethyst_necklace"):
			return joaat("collectible_jewelry_amethyst_necklace");
	
		case 698668228:
			return 151002497;
	
		case joaat("provision_eagle_egg"):
			return joaat("COLLECTIBLE_EGG_EAGLE");
	
		case joaat("provision_arrowhead_splintered"):
			return joaat("collectible_arrowhead_splintered");
	
		case 866218183:
			return -1747721085;
	
		case 972001444:
			return -1926116512;
	
		case joaat("provision_jewelry_turq_stud_earring"):
			return joaat("collectible_jewelry_turq_stud_earring");
	
		case joaat("provision_hrlm_brush_ebony"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_EBONY");
	
		case joaat("provision_coin_1787_cent_tkn"):
			return joaat("collectible_coin_1787_cent_tkn");
	
		case 1051711290:
			return 1832068122;
	
		case joaat("provision_vulture_egg"):
			return joaat("COLLECTIBLE_EGG_VULTURE");
	
		case joaat("provision_arrowhead_crude"):
			return joaat("collectible_arrowhead_crude");
	
		case 1081670855:
			return 732479966;
	
		case joaat("provision_jewelry_sphr_bngle_bracelet"):
			return joaat("collectible_jewelry_sphr_bngle_bracelet");
	
		case joaat("provision_hrlm_hairpin_metal"):
			return joaat("collectible_hrlm_hairpin_metal");
	
		case joaat("provision_hrlm_hairpin_wooden"):
			return joaat("collectible_hrlm_hairpin_wooden");
	
		case 1287909434:
			return -1021507854;
	
		case joaat("provision_jewelry_wht_dmnd_earring"):
			return joaat("collectible_jewelry_wht_dmnd_earring");
	
		case joaat("provision_coin_1794_slv_dlr"):
			return joaat("collectible_coin_1794_slv_dlr");
	
		case joaat("provision_hrlm_comb_boxwood"):
			return joaat("COLLECTIBLE_HRLM_COMB_BOXWOOD");
	
		case joaat("provision_jewelry_elk_tooth_earring"):
			return joaat("collectible_jewelry_elk_tooth_earring");
	
		case joaat("provision_coin_1700_ny_tkn"):
			return joaat("collectible_coin_1700_ny_tkn");
	
		case joaat("provision_arrowhead_chipped"):
			return joaat("collectible_arrowhead_chipped");
	
		case joaat("provision_arrowhead_feldspar"):
			return joaat("collectible_arrowhead_feldspar");
	
		case joaat("provision_coin_1800_five_dlr"):
			return joaat("collectible_coin_1800_five_dlr");
	
		case joaat("provision_jewelry_pearl_bracelet"):
			return joaat("collectible_jewelry_pearl_bracelet");
	
		case joaat("provision_hrlm_brush_goathair"):
			return joaat("COLLECTIBLE_HRLM_BRUSH_GOATHAIR");
	
		case joaat("provision_jewelry_topaz_ring"):
			return joaat("collectible_jewelry_topaz_ring");
	
		case joaat("provision_hrlm_hairpin_ebony"):
			return joaat("collectible_hrlm_hairpin_ebony");
	
		case 2031475177:
			return 256108181;
	
		case joaat("provision_hawk_egg"):
			return joaat("COLLECTIBLE_EGG_HAWK");
	
		case joaat("provision_coin_1792_qtr"):
			return joaat("collectible_coin_1792_qtr");
	
		default:
		
	}

	return joaat("collectible_arrowhead_agate");
}

int func_74(Hash hParam0) // Position - 0x4AAB Hash - 0x5CCC10A7 ^0x7EE6802B
{
	var outData;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_4;
}

void func_75(int iParam0, int iParam1) // Position - 0x4AC7 Hash - 0xF55E891F ^0xF55E891F
{
	func_117(iParam0, iParam1);
	return;
}

int func_76(int iParam0) // Position - 0x4AD7 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_77(int iParam0) // Position - 0x4AE1 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_118(iParam0))
		return;

	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_DELETE(Global_1951910[iParam0 /*23*/].f_3);

	Global_1951910[iParam0 /*23*/].f_4 = 0;
	Global_1951910[iParam0 /*23*/] = 1;
	Global_1951910[iParam0 /*23*/].f_16 = 0;
	Global_1951910[iParam0 /*23*/].f_1 = 0;
	Global_1951910[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_9 = 0f;
	Global_1951910[iParam0 /*23*/].f_10 = 0;
	Global_1951910[iParam0 /*23*/].f_11 = 0;
	Global_1951910[iParam0 /*23*/].f_2 = 1;
	Global_1951910[iParam0 /*23*/].f_15 = -1f;
	return;
}

int func_78(Entity eParam0, Entity eParam1, int iParam2) // Position - 0x4B94 Hash - 0xC1227CDD ^0xCCB24A9F
{
	int i;
	var src;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (ITEMSET::IS_ITEMSET_VALID(Global_1296539.f_32) && ITEMSET::IS_IN_ITEMSET(eParam0, Global_1296539.f_32))
		ITEMSET::REMOVE_FROM_ITEMSET(eParam0, Global_1296539.f_32);

	PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), eParam0);
	PLAYER::_0xDC5E09D012D759C4(eParam0, eParam1, iParam2);
	src.f_1 = -1082130432;

	for (i = 0; i < 10; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1296539[i /*2*/]) && Global_1296539[i /*2*/] == eParam0)
		{
			MISC::COPY_SCRIPT_STRUCT(&Global_1296539[i /*2*/], &src, 2);
			return 1;
		}
	}

	return 0;
}

BOOL func_79(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x4C3E Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

var func_80(int iParam0, int iParam1) // Position - 0x4C67 Hash - 0x42C305C ^0x81DF2F42
{
	return func_81(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

var func_81(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x4C85 Hash - 0x63C3F71D ^0x3019B977
{
	var value;
	Player bitIndex;
	int i;
	BOOL flag;
	BOOL flag2;
	Player player;
	Any any;
	BOOL flag3;
	Volume volume;
	BOOL flag4;
	Player player2;
	Ped playerPed;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return value;

	if (func_119() != 0)
	{
		bitIndex = PLAYER::PLAYER_ID();
	
		if (bitIndex >= 0 && bitIndex < 32)
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, bitIndex);
	
		return value;
	}

	i = 0;
	flag = false;
	flag2 = false;
	player = Global_1295666.f_5;
	any = Global_1295666.f_10;
	flag3 = true;
	flag4 = bParam10;

	if (BUILTIN::VMAG2(fParam6) < 1f)
	{
		flag3 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("volBox"):
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_120());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_120());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_120());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_121(PLAYER::GET_PLAYER_TEAM(player));

	if (flag4 & 8 != 0 && flag4 & 32768 != 0)
	{
		flag4 = flag4 | 65536;
		flag4 = flag4 - flag4 & 40952;
	}

	if (flag4 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			flag4 = flag4 - flag4 & 4;
			flag4 = flag4 | false;
		}
	}

	for (i = 0; i < 32; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
		{
			player2 = Global_1295666.f_149[i];
			flag = false;
			flag2 = false;
		
			if (flag4 & true != 0 && player2 == player)
				flag = true;
		
			if (func_122(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_123(i) != 1)
					flag = true;
		
			if (!flag)
				if (flag4 & 16384 != 0 && PED::IS_PED_INCAPACITATED(playerPed))
					flag = true;
		
			if (!flag)
				if (flag4 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(player2))
					flag = true;
		
			if (!flag)
			{
				if (flag4 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(player2))
					{
						case -1:
							if (flag4 & 16 != 0)
								flag2 = true;
							break;
					
						case 0:
							if (flag4 & 32 != 0)
								flag2 = true;
							break;
					
						case 1:
							if (flag4 & 64 != 0)
								flag2 = true;
							break;
					
						case 2:
							if (flag4 & 128 != 0)
								flag2 = true;
							break;
					
						case 3:
							if (flag4 & 256 != 0)
								flag2 = true;
							break;
					
						case 4:
							if (flag4 & 512 != 0)
								flag2 = true;
							break;
					
						case 5:
							if (flag4 & 1024 != 0)
								flag2 = true;
							break;
					
						case 6:
							if (flag4 & 2048 != 0)
								flag2 = true;
							break;
					
						case 8:
							if (flag4 & 4096 != 0)
								flag2 = true;
							break;
					}
				
					if (!flag2)
						flag = true;
				}
			}
		
			if (!flag)
				if (flag4 & 32768 != 0)
					if (GANG::NETWORK_GET_GANG_ID(player2) != any)
						flag = true;
		
			if (!flag)
				if (flag4 & 65536 != 0)
					if (!func_124(player2))
						flag = true;
		
			if (!flag && flag3)
				if (!VOLUME::IS_POINT_IN_VOLUME(volume, ENTITY::GET_ENTITY_COORDS(playerPed, false, false)))
					flag = true;
		
			if (!flag)
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
		}
	}

	if (flag3)
		VOLUME::DELETE_VOLUME(volume);

	return value;
}

void func_82(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, BOOL bParam20, BOOL bParam21) // Position - 0x5018 Hash - 0x60237433 ^0x1CACDDD0
{
	var unk;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam19))
		return;

	iParam0 = 0;
	iParam0.f_1 = PLAYER::PLAYER_ID();
	iParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (!bParam20)
	{
		if (iParam0.f_18)
		{
			if (bParam21)
			{
				unk.f_12 = -1;
				unk.f_12.f_1 = -1;
				unk.f_14 = 255;
				unk.f_15 = 255;
				unk.f_20 = -1;
				unk = { iParam0 };
				unk.f_19 = uParam19;
				unk.f_20 = iParam0.f_2;
				func_125(&(Global_1072759.f_22981), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 19, 5, &uParam19);
	return;
}

void func_83(Any* panParam0, int* piParam1) // Position - 0x50B2 Hash - 0x46785048 ^0xC0630F6
{
	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(piParam1))
	{
		panParam0->f_1 = Global_1295666.f_149[Global_1295666];
		SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 7, 22, piParam1);
	}

	return;
}

void func_84(int iParam0, int iParam1) // Position - 0x50E3 Hash - 0xF55E891F ^0xF55E891F
{
	func_126(iParam0, iParam1);
	return;
}

void func_85(var uParam0) // Position - 0x50F3 Hash - 0xEE70AE76 ^0x5580DC7C
{
	if (uParam0->f_4 != -1)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		PAD::STOP_CONTROL_SHAKE(PLAYER_CONTROL);
		uParam0->f_4 = -1;
	}

	AUDIO::_RELEASE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman");
	return;
}

void func_86(int iParam0, int iParam1) // Position - 0x5127 Hash - 0x3ABC36EE ^0x53B64BE1
{
	if (func_103(iParam0))
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);

	return;
}

void func_87(int iParam0, int iParam1) // Position - 0x5140 Hash - 0xA79B1A85 ^0x2E5A8FFD
{
	if (!func_127(iParam0, iParam1))
	{
		MISC::SET_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_128();
	}

	return;
}

void func_88(int iParam0, int iParam1, BOOL bParam2) // Position - 0x5184 Hash - 0x8217C894 ^0xF71820D2
{
	if (func_127(iParam0, iParam1) && !bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		MISC::CLEAR_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_128();
	}

	return;
}

float func_89(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x51EB Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_90(var uParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, int iParam6) // Position - 0x5209 Hash - 0x76785467 ^0x34019397
{
	Volume volume;
	int num;

	volume = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	num = func_129(uParam0, uParam1, volume, iParam2);
	func_130(volume);
	return num;
}

BOOL func_91(Hash hParam0, int iParam1) // Position - 0x523A Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_72(hParam0, 0))
		return false;

	num = func_131(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_133(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_132(hParam0, 1))
				return false;
			break;
	}

	return func_134(hParam0, false, false, false) >= iParam1;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x52BD Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_93(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x52E7 Hash - 0x556D3123 ^0xD74EAB49
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_134(joaat("kit_collectors_bag"), false, false, false) <= 0)
				return 0;
			break;
	
		case 1:
			if (func_135(false))
				return 0;
			break;
	
		case 2:
			if (func_136())
				return 0;
			break;
	
		case 3:
			if (Global_1048576)
				return 0;
			break;
	
		case 4:
			if (func_137())
				return 0;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				return 0;
			break;
	
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Global_33) && TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
				return 0;
			break;
	
		case 7:
			if (!bParam1 && *uParam0 == 0)
				return 0;
			break;
	
		case 8:
			if (bParam2 && *uParam0 == 0)
				return 0;
			break;
	
		default:
			uParam0->f_11 = 0;
			break;
	}

	return 1;
}

float func_94() // Position - 0x53E6 Hash - 0x20414E16 ^0x28E659F3
{
	return Global_1156111.f_2169[89 /*205*/].f_201;
}

void func_95(var uParam0, int iParam1) // Position - 0x53FB Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_96(int iParam0) // Position - 0x5408 Hash - 0x81B61271 ^0x22A3D4FE
{
	if (iParam0 <= 0)
		return;

	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
	return;
}

void func_97(var uParam0) // Position - 0x542F Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_138(uParam0, 0f);
	return;
}

float func_98(var uParam0) // Position - 0x543E Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_139(uParam0))
		return uParam0->f_1;

	if (func_140(uParam0))
		return uParam0->f_2;

	return func_141() - uParam0->f_1;
}

BOOL func_99() // Position - 0x5473 Hash - 0xB8876D40 ^0xFAD3D5CE
{
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33) && !func_142(Global_33, 1369124074) && !func_142(Global_33, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		return true;

	return false;
}

BOOL func_100(Ped pedParam0) // Position - 0x54D8 Hash - 0x65C15F ^0x65C15F
{
	if (func_143(pedParam0))
		return true;

	if (func_144(pedParam0))
		return true;

	if (func_145(pedParam0))
		return true;

	if (func_146(pedParam0))
		return true;

	if (func_147(pedParam0))
		return true;

	return false;
}

BOOL func_101(int iParam0, BOOL bParam1) // Position - 0x5522 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_43(iParam0))
		return false;

	return !func_110(iParam0, 4);
}

void func_102(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5547 Hash - 0x90451281 ^0x90451281
{
	int num;

	if (bParam2 && !func_43(iParam0))
		return;

	num = func_76(iParam0);

	if (bParam1)
	{
		func_148(iParam0, 4);
	
		if (bParam3)
			func_149(num, true);
	
		func_150(num, true);
	}
	else
	{
		func_151(iParam0, 4);
		func_150(num, false);
	}

	return;
}

BOOL func_103(int iParam0) // Position - 0x559B Hash - 0x5499D461 ^0x5499D461
{
	if (*iParam0 == 0)
		return false;

	return *iParam0 != -1;
}

Vector3 func_104(float fParam0, var uParam1, var uParam2) // Position - 0x55B3 Hash - 0xFB6A39D2 ^0x80C9C759
{
	float num;
	float num2;

	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

Vector3 func_105(float fParam0) // Position - 0x55F2 Hash - 0x22303A60 ^0x2A964B45
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_106(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x5608 Hash - 0xFED631D9 ^0x4FB6D3D3
{
	return (fParam0.f_1 * uParam3.f_2) - (fParam0.f_2 * uParam3.f_1), (fParam0.f_2 * uParam3) - (fParam0 * uParam3.f_2), (fParam0 * uParam3.f_1) - (fParam0.f_1 * uParam3);
}

float func_107(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x5641 Hash - 0x596BEA29 ^0x5FBCDBE5
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

BOOL func_108(Entity eParam0) // Position - 0x5662 Hash - 0xE74E8D6A ^0xDC71868A
{
	int num;
	var unk5;
	Hash entityModel;
	int i;
	Hash hashKey;

	if (func_152() == 0)
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_152()))
		return false;

	num = func_152();
	num.f_2 = 0;
	num.f_3 = 0;
	num.f_4 = 0;
	num.f_1 = 0;
	entityModel = ENTITY::GET_ENTITY_MODEL(eParam0);

	for (i = 0; i < 30; i = i + 1)
	{
		num.f_1 = 0;
		num.f_3 = i;
		num.f_2 = 0;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		{
			num.f_2 = 1;
		
			if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk5, &num))
			{
				hashKey = MISC::GET_HASH_KEY(&unk5);
			
				if (entityModel == hashKey)
					return true;
			}
		}
	}

	return false;
}

BOOL func_109(Hash hParam0) // Position - 0x56FC Hash - 0x9DF7DBA6 ^0xFD33CB18
{
	var unk;

	unk.f_4 = joaat("SLOTID_SATCHEL");
	unk = { func_153(false) };
	return func_154(hParam0, &unk, 1, true, false, -1, false);
}

BOOL func_110(int iParam0, int iParam1) // Position - 0x5723 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

BOOL func_111(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x5744 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_112(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, var uParam7, var uParam8, int iParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x5799 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1951910[iParam0 /*23*/].f_4 = hParam1;
	Global_1951910[iParam0 /*23*/] = iParam4;
	Global_1951910[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951910[iParam0 /*23*/].f_2 = iParam5;
	Global_1951910[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951910[iParam0 /*23*/].f_9 = iParam9;
	Global_1951910[iParam0 /*23*/].f_10 = volParam10;
	Global_1951910[iParam0 /*23*/].f_11 = volParam11;
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_5 = iParam12;
	Global_1951910[iParam0 /*23*/].f_1 = 2;
	Global_1951910[iParam0 /*23*/].f_17 = -1;
	Global_1951910[iParam0 /*23*/].f_18 = iParam16;
	Global_1951910[iParam0 /*23*/].f_19 = iParam15;
	Global_1951910[iParam0 /*23*/].f_20 = bParam25;
	Global_1951910[iParam0 /*23*/].f_22 = 0f;

	if (bParam25)
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	else
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_SYSTEM_TIME();

	prompt = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam1);

	if (hParam23 != 0)
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam23);

	HUD::_UI_PROMPT_SET_TEXT(prompt, sParam2);

	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, vParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
	}

	HUD::_UI_PROMPT_SET_PRIORITY(prompt, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(prompt, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 18, true);

	if (bParam22)
		HUD::_0x53CE46C01A089DA1(prompt, true);

	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, false);
			break;
	
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(prompt, iParam16);
			break;
	
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, true);
			break;
	
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(prompt);
			break;
	
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(prompt, hParam24);
			break;
	
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 7:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 8:
			HUD::_UI_PROMPT_SET_MASH_MODE(prompt, iParam17);
			break;
	
		case 9:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, iParam16, iParam17);
			break;
	
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 11:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
			break;
	
		case 15:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, iParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 10, true);
			break;
	
		case 16:
			HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, 0.5f, 0.1f, 0);
			break;
	}

	HUD::_UI_PROMPT_REGISTER_END(prompt);
	Global_1951910[iParam0 /*23*/].f_3 = prompt;
	func_149(iParam0, true);
	func_150(iParam0, true);
	func_151(iParam0, 128);
	return;
}

BOOL func_113(int iParam0, Any anParam1) // Position - 0x5AB3 Hash - 0xD4D5B736 ^0x6C5BEB38
{
	var unk;

	unk.f_1 = 10;
	func_155(&unk, joaat("LOOT_TYPE_NORMAL"));
	return func_156(iParam0, &unk, anParam1, 0, 0);
}

struct<2> func_114(int iParam0, int iParam1) // Position - 0x5ADC Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_115(var uParam0, var uParam1, int iParam2) // Position - 0x5AF2 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_116(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x5B0F Hash - 0xC51EFF01 ^0xD252B7CC
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_157(iParam0, &unk26, &unk13, &unk, iParam1, iParam2, iParam3, bParam4);
}

void func_117(var uParam0, int iParam1) // Position - 0x5B3F Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_118(int iParam0) // Position - 0x5B50 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_110(iParam0, 2);
}

int func_119() // Position - 0x5B5F Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_120() // Position - 0x5B6D Hash - 0x306ACA3A ^0x9674E69B
{
	return "unnamed";
}

BOOL func_121(int iParam0) // Position - 0x5B79 Hash - 0xC360B8E6 ^0xCBE2AF9D
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -1:
			num = 16;
			break;
	
		case 0:
			num = 32;
			break;
	
		case 1:
			num = 64;
			break;
	
		case 2:
			num = 128;
			break;
	
		case 3:
			num = 256;
			break;
	
		case 4:
			num = 512;
			break;
	
		case 5:
			num = 1024;
			break;
	
		case 6:
			num = 2048;
			break;
	
		case 8:
			num = 4096;
			break;
	}

	return num;
}

BOOL func_122(int iParam0) // Position - 0x5C08 Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_158(36, iParam0);
}

int func_123(int iParam0) // Position - 0x5C26 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_124(Player plParam0) // Position - 0x5C71 Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_159(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_160(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

int func_125(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x5CB6 Hash - 0xDF93FBF9 ^0x193910B6
{
	if (!func_161(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*21*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

void func_126(int iParam0, int iParam1) // Position - 0x5CE6 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_127(int iParam0, int iParam1) // Position - 0x5CFB Hash - 0x1876A9B8 ^0x3CC6BD5B
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_128() // Position - 0x5D17 Hash - 0x3A47228D ^0x15AE20E5
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
	return;
}

int func_129(var uParam0, var uParam1, Volume volParam2, int iParam3) // Position - 0x5D2D Hash - 0xF4BE06E5 ^0x21E9A98D
{
	ItemSet itemSet;
	ScrHandle indexedItemInItemset;
	ScrHandle handle;
	int num;
	int i;
	int j;
	int entitiesInVolume;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volParam2, itemSet, 3);
	entitiesInVolume >= iParam3;

	for (i = 0; i < entitiesInVolume; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
		handle = indexedItemInItemset;
	
		if (ENTITY::IS_ENTITY_AN_OBJECT(handle))
		{
			for (j = 0; j < *uParam1; j = j + 1)
			{
				if (uParam1->[j] == 0)
				{
					uParam0->[num] = indexedItemInItemset;
					num = num + 1;
					j = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(handle) == uParam1->[j])
				{
					uParam0->[num] = indexedItemInItemset;
					num = num + 1;
					j = *uParam1;
				}
			}
		}
	
		if (num >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(itemSet);
			return iParam3;
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	return num;
}

void func_130(Volume volParam0) // Position - 0x5DE8 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

int func_131(Hash hParam0) // Position - 0x5DFF Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_72(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_132(Hash hParam0, int iParam1) // Position - 0x5E2A Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_72(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_162(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_163("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_164(&unk, i, num, num2))
			{
			}
			else if (!func_165(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_166(num);
				return true;
			}
		}
	
		func_166(num);
	}

	return false;
}

BOOL func_133(Hash hParam0) // Position - 0x5ED2 Hash - 0x52397408 ^0x52397408
{
	int num;
	int num2;
	int num3;

	if (!func_72(hParam0, 0))
		return false;

	num = func_167(hParam0);

	switch (num)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
	
		default:
			return false;
	}

	num2 = func_168(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_169(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_170(hParam0);
	num3 = func_169(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_134(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5F8E Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_72(hParam0, 0))
		return 0;

	num = func_131(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_162(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_171(hParam0, false);
	}

	if (func_172(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_173(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_174(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_173(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_135(BOOL bParam0) // Position - 0x6050 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_136() // Position - 0x6080 Hash - 0x4B5A576F ^0x4B5A576F
{
	return func_175() != -1;
}

BOOL func_137() // Position - 0x608E Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_138(var uParam0, float fParam1) // Position - 0x60B3 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_141() - fParam1;
	func_176(uParam0, 1);
	func_177(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_139(var uParam0) // Position - 0x60D9 Hash - 0x5001E582 ^0x5001E582
{
	return func_178(*uParam0, 1);
}

BOOL func_140(var uParam0) // Position - 0x60E9 Hash - 0x39705408 ^0x39705408
{
	return func_178(*uParam0, 2);
}

float func_141() // Position - 0x60F9 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_142(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x612B Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_143(Ped pedParam0) // Position - 0x6154 Hash - 0xE7BA92D6 ^0xE7BA92D6
{
	return func_179(pedParam0, 0);
}

BOOL func_144(Ped pedParam0) // Position - 0x6163 Hash - 0x605B6EA ^0x605B6EA
{
	return func_179(pedParam0, 3);
}

BOOL func_145(Ped pedParam0) // Position - 0x6172 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_179(pedParam0, 4) || func_179(pedParam0, 5);
}

BOOL func_146(Ped pedParam0) // Position - 0x618E Hash - 0xC9A2E10A ^0xC9A2E10A
{
	return func_179(pedParam0, 6);
}

BOOL func_147(Ped pedParam0) // Position - 0x619D Hash - 0xE0409C42 ^0xE0409C42
{
	return func_179(pedParam0, 7);
}

void func_148(int iParam0, int iParam1) // Position - 0x61AC Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_149(int iParam0, BOOL bParam1) // Position - 0x61DF Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_110(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_150(int iParam0, BOOL bParam1) // Position - 0x6237 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_151(int iParam0, int iParam1) // Position - 0x6260 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

int func_152() // Position - 0x6288 Hash - 0x14C87721 ^0x9AEBE8A8
{
	return Global_1072759.f_28418[47 /*4*/].f_3;
}

struct<4> func_153(BOOL bParam0) // Position - 0x629D Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_173(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_181(joaat("character"), func_180(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_181(joaat("character"), func_180(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_181(joaat("character"), func_180(), joaat("SLOTID_NONE"), bParam0);
}

BOOL func_154(Hash hParam0, var uParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6) // Position - 0x633D Hash - 0x83727B4C ^0xA6F6F598
{
	var unk;
	var unk5;
	int num;
	int num2;

	func_182(&hParam0);

	if (!func_72(hParam0, 0) && !func_184(func_183(hParam0), 2))
		return 0;

	if (!bParam3 && func_172(hParam0, joaat("DEFAULT")) == 0)
		bParam3 = true;

	if (func_185(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		unk = { func_186(false) };
		unk5.f_9 = joaat("SLOTID_NONE");
	
		if (!func_187(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
			return 0;
		else if (func_188(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
			return 0;
	
		if (func_189(hParam0, true))
			if (!func_187(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
				return 0;
			else if (func_188(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
				return 0;
	
		return 1;
	}

	num = iParam5;

	if (iParam5 < 0)
		num = func_190(hParam0, uParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	num2 = func_191(hParam0, *uParam1, uParam1->f_4, bParam4, bParam3, bParam6);

	if (num2 + iParam2 > num)
		return 1;

	return 0;
}

void func_155(var uParam0, int iParam1) // Position - 0x6471 Hash - 0x624BD2B7 ^0x9DA59487
{
	BOOL flag;
	int i;

	if (iParam1 == 0)
		return;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->f_1[i] == iParam1)
			return;
	
		switch (iParam1)
		{
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if (uParam0->f_1[i] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[i] == joaat("FISHING_RESULT_RUINED") || uParam0->f_1[i] == joaat("FISHING_RESULT_LEGENDARY"))
					flag = true;
				break;
		
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[i] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[i] == joaat("LOOTER_PED_IS_FEMALE"))
					flag = true;
				break;
		
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[i] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[i] == joaat("LOOT_TYPE_SKINNING"))
					flag = true;
				break;
		}
	
		if (flag)
		{
			uParam0->f_1[i] = iParam1;
			return;
		}
	}

	if (*uParam0 >= 10)
		return;

	uParam0->f_1[*uParam0] = iParam1;
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_156(int iParam0, var uParam1, Any anParam2, int iParam3, int iParam4) // Position - 0x659D Hash - 0x4F430DA4 ^0x658D22B6
{
	var unk;
	int num;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_192(uParam1);
	SECURE_STORE(&unk, iParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_3.f_1 = 10;
	num = iParam3;
	num.f_3 = { *uParam1 };
	num.f_2 = iParam4;
	func_193(anParam2, iParam0, num);
	return 1;
}

int func_157(int iParam0, Any anParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x660C Hash - 0x72C1A759 ^0xD848AFAA
{
	BOOL flag;
	int num;
	var unk;
	var unk2;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
		return 1;

	if (bParam7)
	{
		flag = GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		bParam7 = flag;
	}

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
		func_194(iParam2, -372840566);

	SECURE_STORE(&unk, iParam0);

	if (!bParam7)
		if (!NETWORK::_0x64A36BA85CE01A81(&unk, &(uParam3->f_1), &(iParam2->f_1), anParam1))
			return 0;
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&unk, &(iParam2->f_1), anParam1))
		return 0;

	unk2.f_1 = 11;
	unk2.f_16 = 255;
	unk2.f_13 = iParam4;
	unk2.f_16 = iParam5;
	unk2.f_14 = iParam6;
	unk2 = { *iParam2 };
	func_195(anParam1, iParam0, unk2);
	return 1;
}

BOOL func_158(int iParam0, int iParam1) // Position - 0x66ED Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_196(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_197())
		return func_196(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_196(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_159(Player plParam0) // Position - 0x6761 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_160(Player plParam0) // Position - 0x677E Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_198(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_199(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_161(var uParam0) // Position - 0x6801 Hash - 0xEF8B385D ^0xEF8B385D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

Hash func_162(Hash hParam0, int iParam1) // Position - 0x6816 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_72(hParam0, 0))
		return 0;

	num = func_131(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_200(hParam0, 1399091007))
	{
		func_201(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_163(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x6890 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_173(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_164(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x68B7 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_165(Hash hParam0) // Position - 0x68F2 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_166(int iParam0) // Position - 0x690D Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

Hash func_167(Hash hParam0) // Position - 0x692E Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_72(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_168(Hash hParam0) // Position - 0x6959 Hash - 0xB8EC44B7 ^0x72487142
{
	switch (hParam0)
	{
		case joaat("clothing_blend_eyeshadow_none"):
			return -875805376;
	
		case joaat("clothing_blend_foundation_none"):
			return -2056583192;
	
		case joaat("clothing_blend_complexion_none"):
			return -1180698265;
	
		case joaat("clothing_blend_complexion_2_none"):
			return -487028314;
	
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
	
		case joaat("clothing_blend_lipstick_none"):
			return -768760704;
	
		case joaat("clothing_blend_spots_none"):
			return 1301555144;
	
		case -643819742:
			return -559080197;
	
		case joaat("clothing_blend_freckles_none"):
			return 241235545;
	
		case -28107610:
			return -2118203104;
	
		case joaat("clothing_blend_moles_none"):
			return 1827902148;
	
		case joaat("clothing_blend_scar_none"):
			return 1858448324;
	
		case 1687431937:
			return -1811760631;
	
		case joaat("clothing_blend_blusher_none"):
			return 1015239729;
	
		case joaat("clothing_blend_eyeliner_none"):
			return -340627321;
	
		default:
		
	}

	return 0;
}

int func_169(var uParam0, int iParam1) // Position - 0x6A3C Hash - 0x6AC2726E ^0xDB215040
{
	int i;

	for (i = 0; i < 22; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_1 == -1)
			break;
	
		if (uParam0->[i /*17*/].f_16 == iParam1)
			return i;
	}

	return -1;
}

int func_170(Hash hParam0) // Position - 0x6A79 Hash - 0xD114ACC1 ^0x3428F85C
{
	int num;

	num = func_167(hParam0);

	switch (num)
	{
		case -636562458:
			return -875805376;
	
		case 252325943:
			return -768760704;
	
		case 829857647:
			return -340627321;
	
		case 1115104855:
			return -2118203104;
	
		case 1216664798:
			return 1015239729;
	
		case 1341188928:
			return -2056583192;
	
		default:
		
	}

	return 0;
}

int func_171(Hash hParam0, BOOL bParam1) // Position - 0x6AE6 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_202(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_203(&unk, func_186(false));

	if (!func_204(&unk, &num, &num2, false))
		return 0;

	func_166(num);
	return num2;
}

int func_172(Hash hParam0, Hash hParam1) // Position - 0x6B45 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_184(func_183(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

int func_173(BOOL bParam0) // Position - 0x6B71 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_2() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_174(Hash hParam0, BOOL bParam1) // Position - 0x6BB2 Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_205(hParam0, bParam1, false) };
	return func_181(hParam0, unk, unk.f_4, bParam1);
}

int func_175() // Position - 0x6BD7 Hash - 0x4228A1C2 ^0x247D3B40
{
	return Global_1149172.f_137;
}

void func_176(var uParam0, int iParam1) // Position - 0x6BE5 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_177(var uParam0, int iParam1) // Position - 0x6BF6 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_178(int iParam0, int iParam1) // Position - 0x6C0B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_179(Ped pedParam0, int iParam1) // Position - 0x6C1A Hash - 0x25D0971D ^0xF7D4E234
{
	var unk;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	num = PED::_0x4642182A298187D0(pedParam0, iParam1, &unk, 4, 1);

	if (num != 0)
		return 1;

	return 0;
}

struct<4> func_180() // Position - 0x6C59 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

struct<4> func_181(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x6C65 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_72(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_173(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_182(var uParam0) // Position - 0x6C96 Hash - 0x8D760BCC ^0xB90089A3
{
	if (!func_72(*uParam0, 0))
		return 0;

	if (!func_206(*uParam0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			break;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			break;
	
		default:
			return 0;
	}

	return 1;
}

Hash func_183(Hash hParam0) // Position - 0x6D20 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_184(Hash hParam0, int iParam1) // Position - 0x6D2A Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_185(Hash hParam0) // Position - 0x6D44 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_131(hParam0) == joaat("WEAPON");
}

struct<4> func_186(BOOL bParam0) // Position - 0x6D58 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_173(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_181(923904168, func_153(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_181(923904168, func_153(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_181(923904168, func_153(bParam0), -740156546, false);
}

BOOL func_187(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6DF9 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_191(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_188(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x6E14 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_207(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

BOOL func_189(Hash hParam0, BOOL bParam1) // Position - 0x6E35 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_167(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_208();
		else
			return 1;

	return 0;
}

int func_190(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6E6C Hash - 0xFE9D5798 ^0xDB9F4CF5
{
	if (!func_72(hParam0, 0))
	{
		if (func_184(func_183(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_131(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_172(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_173(bParam3), hParam0);
}

int func_191(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x6EE0 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_72(hParam0, 0))
		return 0;

	if (!bParam7 && func_172(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_181(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_173(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_173(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

void func_192(var uParam0) // Position - 0x6F5F Hash - 0x333BC7D4 ^0xCB2892E1
{
	func_155(uParam0, joaat("MULTIPLAYER_GAME"));

	if (func_209() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_155(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_155(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_193(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x6F97 Hash - 0x15598973 ^0x15598973
{
	int i;
	var unk;

	if (!func_210(anParam0))
		return;

	if (Global_1292143.f_2539 < 20)
	{
		Global_1292143.f_2539 = Global_1292143.f_2539 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2539.f_1[i /*22*/] = { Global_1292143.f_2539.f_1[i + 1 /*22*/] };
		}
	}

	unk.f_7.f_3.f_1 = 10;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_6 = 1;
	unk.f_7 = { uParam2 };
	Global_1292143.f_2539.f_1[Global_1292143.f_2539 - 1 /*22*/] = { unk };
	return;
}

void func_194(int iParam0, int iParam1) // Position - 0x704D Hash - 0xC00BEAB5 ^0x728D99B1
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_195(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x707D Hash - 0xE040F56 ^0xE040F56
{
	int i;
	var unk;

	if (!func_210(anParam0))
		return;

	if (Global_1292143.f_2012 < 20)
	{
		Global_1292143.f_2012 = Global_1292143.f_2012 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2012.f_1[i /*24*/] = { Global_1292143.f_2012.f_1[i + 1 /*24*/] };
		}
	}

	unk.f_7.f_1 = 11;
	unk.f_7.f_16 = 255;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_7 = { uParam2 };
	unk.f_6 = 1;
	Global_1292143.f_2012.f_1[Global_1292143.f_2012 - 1 /*24*/] = { unk };
	return;
}

BOOL func_196(Any* panParam0, int iParam1, int iParam2) // Position - 0x7138 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_197() // Position - 0x716F Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_198(Player plParam0) // Position - 0x717E Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_199(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_199(Player plParam0) // Position - 0x71EA Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

BOOL func_200(Hash hParam0, Hash hParam1) // Position - 0x7225 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_72(hParam0, 0))
		return func_211(func_183(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_201(Hash hParam0, var uParam1, var uParam2) // Position - 0x7266 Hash - 0x38E6C2DD ^0xA4FE6475
{
	*uParam1 = 0;
	*uParam2 = 0;

	switch (hParam0)
	{
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("repeater_ammo_box_express");
			*uParam2 = joaat("ammo_repeater_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("repeater_ammo_box");
			*uParam2 = joaat("ammo_repeater");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("revolver_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_revolver_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("pistol_ammo_box");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("revolver_ammo_box_used");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("shotgun_ammo_box_used");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("rifle_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_rifle_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("pistol_ammo_box_express");
			*uParam2 = joaat("ammo_pistol_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("rifle_ammo_box_express");
			*uParam2 = joaat("ammo_rifle_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("repeater_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_repeater_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("shotgun_ammo_box_slug");
			*uParam2 = joaat("ammo_shotgun_slug");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("rifle_ammo_box");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_ammo_box");
			*uParam2 = joaat("ammo_22");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("revolver_ammo_box");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("revolver_ammo_box_express");
			*uParam2 = joaat("ammo_revolver_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("rifle_ammo_box_used");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("pistol_ammo_box_used");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("pistol_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_pistol_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("shotgun_ammo_box");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("repeater_ammo_box_used");
			*uParam2 = joaat("ammo_repeater");
			break;
	}

	return;
}

struct<18> func_202(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x7472 Hash - 0x90CCF0F4 ^0xA5F3D799
{
	Hash hash;

	hash = -1;
	hash.f_1 = -1;
	hash.f_2 = -1;
	hash.f_3 = -1;
	hash.f_4 = -1;
	hash.f_5 = -1;
	hash.f_6 = -1;
	hash.f_7 = -1;
	hash.f_8 = -1;
	hash.f_13 = -1;
	hash.f_14 = -1;
	hash.f_15 = -1;
	hash.f_16 = -1;
	hash.f_17 = -1;

	if (hParam0 != 0)
		hash = hParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		hash.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
		hash.f_2 = iParam2;

	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
		hash.f_3 = iParam3;

	if (iParam4 != 0)
		hash.f_4 = iParam4;

	if (iParam5 != 0)
		hash.f_5 = iParam5;

	if (iParam6 != 0)
		hash.f_8 = iParam6;

	return hash;
}

void func_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x7550 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_204(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x756B Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_173(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

struct<5> func_205(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7590 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_153(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_131(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_213(hParam0, -1823706425))
			{
				unk = { func_181(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_213(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_181(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_181(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_213(hParam0, -1653629781))
			{
				unk = { func_181(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_212(bParam1) };
		
			switch (func_167(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case -1070622585:
					unk.f_4 = -6796437;
					break;
			
				case -1057349201:
					unk.f_4 = 1473261684;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			unk = { func_181(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_186(bParam1) };
		
			if (bParam2 && func_189(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_187(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_187(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_188(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else
					unk.f_4 = joaat("SLOTID_WEAPON_1");
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WEAPON_0");
			}
			break;
	
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_SATCHEL")))
			{
				unk.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_CURRENCY")))
			{
				unk28.f_9 = joaat("SLOTID_NONE");
			
				if (!func_214(unk, &unk28, bParam1, false, -1))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -718417579))
			{
				unk.f_4 = -718417579;
			}
			else if (func_213(hParam0, -1653629781))
			{
				unk = { func_181(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			else
			{
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("character"));
				unk.f_4 == 0;
			}
			break;
	}

	return unk;
}

BOOL func_206(Hash hParam0) // Position - 0x7904 Hash - 0xD47FBCD ^0xAB7C7E88
{
	return func_200(hParam0, 1279601681);
}

BOOL func_207(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x7917 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_173(false);
	*panParam1 = { func_181(hParam0, func_186(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

int func_208() // Position - 0x795C Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_215(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_209() // Position - 0x7979 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1953292.f_1;
}

BOOL func_210(Any anParam0) // Position - 0x7987 Hash - 0x36229A1B ^0x2A9934D3
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_211(Hash hParam0, Hash hParam1) // Position - 0x79CD Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_184(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

struct<4> func_212(BOOL bParam0) // Position - 0x7A03 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_173(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_181(271701509, func_153(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_181(271701509, func_153(bParam0), 12999093, false);
}

BOOL func_213(Hash hParam0, Hash hParam1) // Position - 0x7A6D Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_167(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_216(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_214(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x7ADA Hash - 0x113CD144 ^0x113CD144
{
	return func_217(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_215(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7AF0 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_218(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_173(bParam1), hParam0, bParam3);
}

BOOL func_216(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x7B23 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_217(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x7B56 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_173(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_218(Hash hParam0) // Position - 0x7B90 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

