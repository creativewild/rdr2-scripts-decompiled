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
	var uLocal_50 = -1;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = -1082130432;
	var uLocal_56 = -1082130432;
	var uLocal_57 = 0;
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

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_16.f_7))
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

void func_1(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x94 Hash - 0x225B639B ^0x3E0F1094
{
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(4);
	*uParam0 = 6;
	uParam0->f_1 = func_9(uParam1);
	func_10(uParam0);

	if (func_11(uParam0, 1))
		uParam0->f_16 = func_12(uParam0->f_1);

	if (uParam0->f_1 <= 80)
		if (!func_11(uParam0, 8))
			func_13(uParam0, 8);

	if (func_11(uParam0, 8))
	{
		uParam0->f_10 = "script@mech@treasure_hunting@chest";
		uParam0->f_11 = "PBL_CHEST_01";
		uParam0->f_17 = func_14();
		uParam0->f_14 = func_15(false);
		uParam0->f_15 = func_16();
	}
	else
	{
		uParam0->f_10 = "script@mech@treasure_hunting@grab";
		uParam0->f_11 = "PBL_GRAB_01";
	}

	uParam0->f_2 = 0;

	if (func_11(uParam0, 1))
		uParam0->f_19 = joaat("COLLECTIBLE_ITEMS_BURIED_MOUNDS");
	else
		uParam0->f_19 = joaat("COLLECTIBLE_ITEMS_BURIED_FLAT_GROUND");

	uParam0->f_8 = uParam1;
	uParam0->f_7 = uParam1.f_1;
	uParam0->f_4 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_7, true) };
	func_17(&(uParam0->f_30), uParam0->f_4);
	func_18(*uParam0, uParam0->f_1);
	func_19();

	if (func_20(uParam0->f_4))
		if (func_11(uParam0, 8))
			if (func_21())
				if (!func_11(uParam0, 16))
					func_13(uParam0, 16);

	return;
}

int func_2() // Position - 0x1BD Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

struct<2> func_3(int iParam0) // Position - 0x1CB Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_4(int iParam0, var uParam1) // Position - 0x1DF Hash - 0x72C53F65 ^0x72C53F65
{
	return iParam0;
}

void func_5(var uParam0) // Position - 0x1E9 Hash - 0xD44DF197 ^0x7838226A
{
	Global_1222034[PLAYER::PLAYER_ID() /*9*/] = -1;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	func_22(&(uParam0->f_12), true, true);
	func_23(uParam0);

	if (func_11(uParam0, 2))
		func_24(uParam0->f_4);

	func_25(*uParam0, uParam0->f_1, 1);
	func_25(*uParam0, uParam0->f_1, 16);
	func_25(*uParam0, uParam0->f_1, 32);
	func_26();
	func_27();
	func_28(&(uParam0->f_30));

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_25))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_25, false);

	func_29(false);
	func_30(&(uParam0->f_30));
	SCRIPTS::_0xE7282390542F570D(uParam0->f_8);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_6(var uParam0) // Position - 0x29E Hash - 0x3F9A5B3E ^0xE1E8ABCC
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_5(uParam0);
		return false;
	}

	return true;
}

BOOL func_7() // Position - 0x2B8 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_8(var uParam0) // Position - 0x2C1 Hash - 0x5BF53B62 ^0xE61D4309
{
	Hash hash;
	BOOL flag;

	if (func_31(uParam0) < 10)
	{
		if (func_11(uParam0, 8))
			if (!func_32(*uParam0, uParam0->f_1, 16))
				if (func_33(uParam0->f_4, &(uParam0->f_22), &(uParam0->f_20), &(uParam0->f_21), func_11(uParam0, 1), 1073741824))
					func_34(*uParam0, uParam0->f_1, 16);
	
		if (func_35(*uParam0) && func_36(uParam0))
		{
			func_37(uParam0, 11);
		
			if (func_38(uParam0->f_12))
				func_22(&(uParam0->f_12), true, true);
		
			func_27();
		}
		else if (func_31(uParam0) <= 6 && func_31(uParam0) > 1)
		{
			if (func_32(*uParam0, uParam0->f_1, 16))
				func_37(uParam0, 12);
		}
	
		flag = func_31(uParam0) <= 6 && !func_39(uParam0->f_12, true);
	
		if (func_40(func_11(uParam0, 2)))
			if (func_11(uParam0, 2))
				func_41(uParam0->f_12, uParam0->f_4);
			else
				func_42(&(uParam0->f_30), uParam0->f_4, flag, true, true, false);
	
		func_43(uParam0->f_12);
		func_44(uParam0->f_4, *uParam0, uParam0->f_1, 1092616192);
	}

	switch (func_31(uParam0))
	{
		case 0:
			if (func_11(uParam0, 8))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_14, false);
				STREAMING::REQUEST_MODEL(uParam0->f_17, false);
				STREAMING::REQUEST_MODEL(uParam0->f_15, false);
			}
		
			if (func_11(uParam0, 1))
				STREAMING::REQUEST_MODEL(uParam0->f_16, false);
		
			func_45(&(uParam0->f_30.f_6), uParam0->f_4, 1.5f, 1, 319, 0);
		
			if (func_32(*uParam0, uParam0->f_1, 16))
				if (func_46(&(uParam0->f_9), uParam0->f_10, "PBL_LOOTED", uParam0->f_4, uParam0->f_22, uParam0->f_16, uParam0->f_20, uParam0->f_14, uParam0->f_21, uParam0->f_17, func_11(uParam0, 1)))
					if (Global_1222327.f_2764 != *uParam0)
						func_37(uParam0, 12);
					else
						func_37(uParam0, 15);
			else if (!func_20(uParam0->f_4))
				func_37(uParam0, 15);
			else if (!func_11(uParam0, 16))
				func_37(uParam0, 1);
			break;
	
		case 1:
			if (func_11(uParam0, 8))
			{
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_14))
					return false;
			
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_17))
					return false;
			
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_15))
					return false;
			
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					uParam0->f_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_14, uParam0->f_4 + { -10f, 0f, 0f }, true, true, false, true);
			
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
					uParam0->f_21 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_17, uParam0->f_4 + { -20f, 0f, 0f }, true, true, false, true);
			
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					return false;
			
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
					return false;
			}
		
			if (func_11(uParam0, 1))
			{
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_16))
					return false;
			
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					uParam0->f_22 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_16, uParam0->f_4, true, true, false, true);
			
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					return false;
			
				if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_4 + { 1f, 0f, 0f }, &(uParam0->f_29), &(uParam0->f_26)))
					return false;
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_22, func_47(uParam0->f_26, 0), 2, true);
			}
		
			func_37(uParam0, 2);
			break;
	
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_9))
				uParam0->f_9 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_10, 64, uParam0->f_11, true, true);
		
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_9))
				return false;
		
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_9);
			func_37(uParam0, 3);
			break;
	
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_9, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, uParam0->f_4, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
			
				if (func_11(uParam0, 8))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "CHEST", uParam0->f_20, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "DRESSING", uParam0->f_21, 0);
				}
			
				if (func_11(uParam0, 1))
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "MOUND", uParam0->f_22, 0);
			
				func_37(uParam0, 4);
			}
			break;
	
		case 4:
			if (func_40(func_11(uParam0, 2)))
			{
				if (func_11(uParam0, 1))
				{
					func_48(uParam0->f_22, uParam0->f_22, 0);
					func_37(uParam0, 5);
				}
				else
				{
					func_37(uParam0, 5);
				}
			}
			break;
	
		case 5:
			if (func_49(uParam0, 1097859072))
			{
				if (!func_38(uParam0->f_12))
					uParam0->f_12 = func_50("UC_CLT_DIG", joaat("INPUT_CONTEXT_X"), uParam0->f_4, 1070386381, 3, 1, 0, 4, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), 0);
			
				func_37(uParam0, 6);
			}
			break;
	
		case 6:
			if (func_38(uParam0->f_12))
			{
				func_51(uParam0->f_12, &(uParam0->f_30.f_5));
			
				if (func_52(uParam0->f_12, true))
				{
					if (func_32(*uParam0, uParam0->f_1, 32))
					{
						func_29(true);
					
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
					
						func_22(&(uParam0->f_12), true, true);
						func_53(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_HIDE_PED_WEAPONS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, false);
						func_25(*uParam0, uParam0->f_1, 32);
						func_37(uParam0, 7);
					}
				}
				else if (func_36(uParam0))
				{
					if (func_54(uParam0->f_12, true) > 0f)
					{
						func_55();
						func_57(func_56(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, true));
					}
					else if (func_54(uParam0->f_12, true) == 0f)
					{
						func_27();
					}
				}
			}
			break;
	
		case 7:
			func_55();
		
			if (func_58(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, true, false) == joaat("WEAPON_UNARMED") && func_58(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, true, false) == joaat("WEAPON_UNARMED") && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) && !PED::IS_PED_CARRYING_SOMETHING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) && !PED::IS_PED_USING_ANY_SCENARIO(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_23(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, uParam0->f_4, 0f, 0f, func_59(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_4, 1), 2);
				func_37(uParam0, 8);
			}
			break;
	
		case 8:
			func_60();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_9, "player", uParam0->f_11, 1069379748, true, 128, 20000, -1082130432);
			uParam0->f_25 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(VOLUME::CREATE_VOLUME_CYLINDER(uParam0->f_4, 0f, 0f, 0f, 1f, 1f, 1f), true, 16);
			func_37(uParam0, 9);
			break;
	
		case 9:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_9, false))
				func_37(uParam0, 10);
			break;
	
		case 10:
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_9, false) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_9, false))
			{
				if (!func_61(uParam0))
					return false;
			
				func_62(uParam0->f_7);
				func_63(func_11(uParam0, 1), func_11(uParam0, 2));
				func_29(false);
				func_30(&(uParam0->f_30));
			
				if (func_11(uParam0, 2))
					func_24(uParam0->f_4);
			
				if (func_11(uParam0, 8))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_20, "ChestDugUp", true);
					TASK::_SET_SCENARIO_CONTAINER_OPENING_STATE(uParam0->f_20, true);
					func_34(*uParam0, uParam0->f_1, 16);
				}
			
				func_62(uParam0->f_7);
				func_27();
			
				if (func_11(uParam0, 2))
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("weapon_kit_metal_detector"), false, 0, false, false);
			
				func_37(uParam0, 15);
			}
			break;
	
		case 11:
			if (func_32(*uParam0, uParam0->f_1, 1))
			{
				if (func_64())
				{
					func_25(*uParam0, uParam0->f_1, 1);
					func_37(uParam0, 12);
				}
				else if (!func_35(*uParam0))
				{
					func_37(uParam0, 4);
					func_25(*uParam0, uParam0->f_1, 1);
				}
			}
			break;
	
		case 12:
			if (func_38(uParam0->f_12))
				func_22(&(uParam0->f_12), true, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_9))
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_9, "LOOT", uParam0->f_23);
			
				OBJECT::DELETE_OBJECT(&(uParam0->f_23));
			}
		
			hash = func_65();
		
			if (!func_66(hash, 0))
				return false;
		
			uParam0->f_3 = hash;
			uParam0->f_19 = func_67(uParam0->f_3);
		
			if (!func_11(uParam0, 4))
				func_13(uParam0, 4);
		
			if (func_11(uParam0, 8))
			{
				uParam0->f_18 = func_68(uParam0->f_3);
				STREAMING::REQUEST_MODEL(uParam0->f_18, false);
			}
		
			func_25(*uParam0, uParam0->f_1, 1);
		
			if (func_11(uParam0, 8))
				func_37(uParam0, 13);
			else
				func_37(uParam0, 4);
			break;
	
		case 13:
			if (!func_35(*uParam0))
			{
				if (STREAMING::HAS_MODEL_LOADED(uParam0->f_18))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
						uParam0->f_24 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_18, uParam0->f_4 + { 0.1f, 0f, 0f }, false, true, false, true);
				
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
						return false;
				
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_24, true, true);
					MAP::_0x1726963E6049DB53(uParam0->f_24);
					func_37(uParam0, 14);
				}
			}
			break;
	
		case 14:
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_24) || !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_24))
			{
				uParam0->f_24 = 0;
				func_37(uParam0, 13);
				return false;
			}
		
			if (TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), true), uParam0->f_4, true) < 1.5f)
				{
					func_62(uParam0->f_7);
					Global_1222327.f_2764 = *uParam0;
					func_37(uParam0, 15);
				}
			}
			break;
	}

	return false;
}

int func_9(var uParam0, var uParam1, var uParam2) // Position - 0xCAE Hash - 0x74FBDAC8 ^0xE3E93340
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

void func_10(var uParam0) // Position - 0xCE1 Hash - 0xADC713F6 ^0xED65FC3F
{
	if (uParam0->f_1 <= 50)
		func_13(uParam0, 1);
	else
		func_13(uParam0, 2);

	return;
}

BOOL func_11(var uParam0, int iParam1) // Position - 0xD03 Hash - 0xBD0B8CC9 ^0x9B965ECB
{
	return func_69(uParam0->f_13, iParam1);
}

int func_12(int iParam0) // Position - 0xD15 Hash - 0x9C8621E4 ^0x3E66BC22
{
	int num;

	switch (iParam0)
	{
		case 1:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 2:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 3:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 4:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 5:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 6:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 7:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 8:
			num = joaat("mp005_p_dirtpile_rio_buried");
			break;
	
		case 9:
			num = joaat("mp005_p_dirtpile_rio_buried");
			break;
	
		case 10:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 11:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 12:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 13:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 14:
			num = joaat("mp005_p_dirtpile_rio_buried");
			break;
	
		case 15:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 16:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 17:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 18:
			num = joaat("mp005_p_dirtpile_gen_buried");
			break;
	
		case 19:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 20:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 21:
			num = joaat("mp005_p_dirtpile_big01_buried");
			break;
	
		case 22:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 23:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 24:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 25:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 26:
			num = joaat("mp005_p_dirtpile_bay_buried");
			break;
	
		case 27:
			num = joaat("mp005_p_dirtpile_gen_buried");
			break;
	
		case 28:
			num = joaat("mp005_p_dirtpile_big01_buried");
			break;
	
		case 29:
			num = joaat("mp005_p_dirtpile_sca02_buried");
			break;
	
		case 30:
			num = joaat("mp005_p_dirtpile_cum_buried");
			break;
	
		case 31:
			num = joaat("mp005_p_dirtpile_cum_buried");
			break;
	
		case 32:
			num = joaat("mp005_p_dirtpile_gen_buried");
			break;
	
		case 33:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 34:
			num = joaat("mp005_p_dirtpile_gen_buried");
			break;
	
		case 35:
			num = joaat("mp005_p_dirtpile_sca02_buried");
			break;
	
		case 36:
			num = joaat("mp005_p_dirtpile_sca01_buried");
			break;
	
		case 37:
			num = joaat("mp005_p_dirtpile_sca03_buried");
			break;
	
		case 38:
			num = joaat("mp005_p_dirtpile_sca03_buried");
			break;
	
		case 39:
			num = joaat("mp005_p_dirtpile_sca02_buried");
			break;
	
		case 40:
			num = joaat("mp005_p_dirtpile_bay_buried");
			break;
	
		case 41:
			num = joaat("mp005_p_dirtpile_sca02_buried");
			break;
	
		case 42:
			num = joaat("mp005_p_dirtpile_gen_buried");
			break;
	
		case 43:
			num = joaat("mp005_p_dirtpile_gen_buried");
			break;
	
		case 44:
			num = joaat("mp005_p_dirtpile_bay_buried");
			break;
	
		case 45:
			num = joaat("mp005_p_dirtpile_bay_buried");
			break;
	
		case 46:
			num = joaat("mp005_p_dirtpile_gen_buried");
			break;
	
		case 47:
			num = joaat("mp005_p_dirtpile_gen_buried");
			break;
	
		case 48:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 49:
			num = joaat("mp005_p_dirtpile_hen_b_buried");
			break;
	
		case 50:
			num = joaat("mp005_p_dirtpile_big01_buried");
			break;
	}

	return num;
}

void func_13(var uParam0, int iParam1) // Position - 0x1047 Hash - 0x1E39CB4 ^0x1D9E6509
{
	if (!func_69(uParam0->f_13, iParam1))
		func_70(&(uParam0->f_13), iParam1);

	return;
}

int func_14() // Position - 0x1067 Hash - 0xC382F505 ^0x29B9121
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

int func_15(BOOL bParam0) // Position - 0x10B5 Hash - 0x25582C63 ^0xC46E3D2D
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

int func_16() // Position - 0x111B Hash - 0x523747D5 ^0x2E8FE2FB
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

void func_17(var uParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x1190 Hash - 0x596055B3 ^0x789EC114
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		uParam0->f_7 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_7, 6, 0, 0, -1, -1, 0);
	}

	return;
}

void func_18(var uParam0, var uParam1) // Position - 0x11C7 Hash - 0x7B40D540 ^0x20F480B6
{
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 = uParam0;
	return;
}

void func_19() // Position - 0x11DD Hash - 0x182FBE0F ^0x126D7F9C
{
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_7 = 0;
	return;
}

BOOL func_20(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x120C Hash - 0x430EB7DB ^0xA2691D59
{
	return !PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS(vParam0);
}

BOOL func_21() // Position - 0x121D Hash - 0x28C231E4 ^0xBECFB109
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

void func_22(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x12AB Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_38(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_71(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_72(num);
	*uParam0 = 0;
	return;
}

void func_23(var uParam0) // Position - 0x12FF Hash - 0x5613A6CF ^0x97F2947D
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
		func_73(uParam0->f_22, uParam0->f_22, 0);

	return;
}

void func_24(var uParam0, var uParam1, var uParam2) // Position - 0x1320 Hash - 0xAC508A8A ^0xAC508A8A
{
	if (func_74(Global_1222323, uParam0))
		Global_1222323 = { 0f, 0f, 0f };

	return;
}

void func_25(int iParam0, int iParam1, int iParam2) // Position - 0x1342 Hash - 0xBEB9F473 ^0xBEB9F473
{
	func_75(&Global_1222327[iParam0 /*251*/][iParam1], iParam2);
	return;
}

void func_26() // Position - 0x135C Hash - 0x9370A593 ^0x37FC5A70
{
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
	return;
}

void func_27() // Position - 0x1398 Hash - 0xCBA3AB74 ^0x4F1079DA
{
	if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	}

	return;
}

void func_28(var uParam0) // Position - 0x13D6 Hash - 0x6197CFB5 ^0xB076B5A9
{
	func_76(uParam0);
	func_77(&(uParam0->f_6), 1);
	return;
}

void func_29(BOOL bParam0) // Position - 0x13ED Hash - 0xEFDB7ACC ^0xEFDB7ACC
{
	if (bParam0)
		func_78(0, 6);
	else
		func_79(0, 6, false);

	return;
}

void func_30(var uParam0) // Position - 0x140A Hash - 0x530C41A5 ^0x73534952
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
		VOLUME::DELETE_VOLUME(uParam0->f_7);

	return;
}

int func_31(var uParam0) // Position - 0x1425 Hash - 0xD73B9827 ^0x6B119A2B
{
	return uParam0->f_2;
}

BOOL func_32(int iParam0, int iParam1, int iParam2) // Position - 0x1431 Hash - 0xC821A3FC ^0xC821A3FC
{
	return func_69(Global_1222327[iParam0 /*251*/][iParam1], iParam2);
}

BOOL func_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, BOOL bParam6, int iParam7) // Position - 0x144B Hash - 0x3933E99B ^0x22F43E5E
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
			if (func_80(&unk, &unk17, 1, uParam0, iParam7) > 0)
				*uParam3 = unk[0];
	
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
			return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam5))
		if (func_80(&unk5, &unk12, 1, uParam0, iParam7) > 0)
			*uParam5 = unk5[0];

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam5))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		if (func_80(&unk3, &unk7, 1, uParam0, iParam7) > 0)
		{
			if (DECORATOR::DECOR_EXIST_ON(unk3[0], "ChestDugUp"))
			{
				*uParam4 = unk3[0];
				return true;
			}
		}
	}
	else if (func_80(&unk3, &unk7, 1, uParam0, iParam7) > 0)
	{
		if (DECORATOR::DECOR_EXIST_ON(unk3[0], "ChestDugUp"))
		{
			*uParam4 = unk3[0];
			return true;
		}
	}

	return false;
}

void func_34(int iParam0, int iParam1, int iParam2) // Position - 0x16DE Hash - 0xBEB9F473 ^0xBEB9F473
{
	func_70(&Global_1222327[iParam0 /*251*/][iParam1], iParam2);
	return;
}

BOOL func_35(int iParam0) // Position - 0x16F8 Hash - 0xCBB67E45 ^0x94031C60
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
			if (!func_69(Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 1))
				func_70(&Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 1);
		
			return true;
		}
	
		if (!func_69(Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 32))
			func_70(&Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 32);
	}

	return false;
}

BOOL func_36(var uParam0) // Position - 0x186D Hash - 0x28E4FDC5 ^0x8A05F7FB
{
	return Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0;
}

void func_37(var uParam0, int iParam1) // Position - 0x1885 Hash - 0x4F8BE4B5 ^0x5AE41537
{
	uParam0->f_2 = iParam1;
	return;
}

BOOL func_38(int iParam0) // Position - 0x1893 Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

BOOL func_39(int iParam0, BOOL bParam1) // Position - 0x18D2 Hash - 0xAAB142C4 ^0xDB043156
{
	int num;

	if (bParam1 && !func_38(iParam0))
		return false;

	num = func_71(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3);
}

BOOL func_40(BOOL bParam0) // Position - 0x1905 Hash - 0xD771AE35 ^0xC45666E8
{
	if (func_81(joaat("kit_collector_spade"), 1))
		if (bParam0)
			if (func_81(joaat("weapon_kit_metal_detector"), 1))
				return true;
		else
			return true;

	return false;
}

void func_41(var uParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x1938 Hash - 0x27AD60A1 ^0x27AD60A1
{
	if (!func_20(vParam1))
	{
		func_24(vParam1);
		return;
	}

	if (_IS_NULL_VECTOR(Global_1222323))
		Global_1222323 = { vParam1 };
	else if (!func_74(Global_1222323, vParam1))
		if (BUILTIN::VDIST2(Global_34, vParam1) < BUILTIN::VDIST2(Global_34, Global_1222323))
			Global_1222323 = { vParam1 };

	return;
}

void func_42(var uParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x19AD Hash - 0x9EDD889C ^0xE38DDFD2
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

	flag2 = func_83(uParam0, bParam4, flag);

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
	num = num * (1f + func_84());

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
					
						func_85(uParam0, 1);
					}
				}
				else
				{
					func_85(uParam0, 1);
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
				func_86(250);
		
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, value, frequency);
			func_87(&(uParam0->f_1));
			func_85(uParam0, 2);
			break;
	
		case 2:
			if (uParam0->f_9 >= num + 5f || !bParam4 || flag)
			{
				if (bParam5)
					func_76(uParam0);
			
				func_85(uParam0, 0);
			}
			else if (func_88(&(uParam0->f_1)) >= 2f)
			{
				func_85(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_86(250);
			}
			break;
	}

	return;
}

void func_43(int iParam0) // Position - 0x1BD6 Hash - 0xE4CB9F65 ^0x12B816AE
{
	Entity firstEntityPedIsCarrying;

	if (func_38(iParam0))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1295666.f_3);
	
		if (PED::IS_PED_CARRYING_SOMETHING(Global_1295666.f_3) || TASK::IS_PED_GETTING_UP(Global_1295666.f_3) || PED::IS_PED_RAGDOLL(Global_1295666.f_3) || !func_89() || Global_1102813.f_3664 || ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) || PED::IS_PED_JUMPING(Global_1295666.f_3) || PED::IS_PED_CLIMBING(Global_1295666.f_3) || PED::IS_PED_FALLING(Global_1295666.f_3) || PED::IS_PED_HOGTIED(Global_33) || func_90(Global_33) || PED::IS_PED_IN_MELEE_COMBAT(Global_33) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 1, 0))
			if (func_91(iParam0, false))
				func_92(iParam0, false, true, true);
		else if (!func_91(iParam0, false))
			func_92(iParam0, true, true, true);
	}

	return;
}

void func_44(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1CD4 Hash - 0x6C08AC8B ^0x276F2F16
{
	if (func_56(Global_33, uParam0, true) < iParam5)
	{
		if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 != iParam3)
			Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 = iParam3;
	
		if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 != iParam4)
			Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = iParam4;
	}

	return;
}

void func_45(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1D2C Hash - 0xA400C89E ^0xDFDC4B6A
{
	if (!func_93(iParam0))
	{
		*iParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
	
		if (func_93(iParam0))
		{
		}
	}

	return;
}

BOOL func_46(var uParam0, const char* sParam1, char* sParam2, Vector3 vParam3, var uParam4, var uParam5, Object obParam6, Hash hParam7, Object obParam8, Hash hParam9, Object obParam10, Hash hParam11, BOOL bParam12) // Position - 0x1D60 Hash - 0xFF607F3C ^0xD56AB299
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

Vector3 func_47(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1F08 Hash - 0x4451FC2 ^0x4451FC2
{
	var unk;
	float num;
	float num2;
	float num3;
	Vector3 vector;
	Vector3 vector2;
	float num4;

	unk = { func_94(uParam0) };
	num = { func_96(func_96(unk, func_95(iParam3 - 90f)), unk) };
	num2 = MISC::ATAN2(num.f_1, num);
	num3 = -MISC::ATAN2(num.f_2, BUILTIN::SQRT((num * num) + (num.f_1 * num.f_1)));
	vector = { -num.f_1, num, 0f };
	vector2 = { func_96(vector, num) };
	num4 = MISC::ATAN2(func_97(vector, unk) / BUILTIN::VMAG(vector), func_97(vector2, unk) / BUILTIN::VMAG(vector2)) + 180f;
	return num4, num3, num2;
}

int func_48(Entity eParam0, Entity eParam1, int iParam2) // Position - 0x1FBE Hash - 0xF2B92A32 ^0xAD1DE34B
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_1296539.f_32))
		Global_1296539.f_32 = ITEMSET::CREATE_ITEMSET(true);

	if (!ITEMSET::IS_IN_ITEMSET(eParam0, Global_1296539.f_32))
		ITEMSET::ADD_TO_ITEMSET(eParam0, Global_1296539.f_32);

	if (!func_98(eParam0))
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

BOOL func_49(var uParam0, int iParam1) // Position - 0x206E Hash - 0x2C12AD55 ^0xE784E821
{
	if (func_81(joaat("kit_collector_spade"), 1))
	{
		if (Global_1102813.f_3664)
			return false;
	
		if (func_56(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, true) > iParam1)
			return false;
	
		if (func_11(uParam0, 2))
			if (func_58(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, true, false) == joaat("weapon_kit_metal_detector") && func_56(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, true) <= 1.6f)
				return true;
		else
			return true;
	}

	return false;
}

int func_50(char* sParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, Hash hParam15, int iParam16) // Position - 0x20FA Hash - 0x8FE94EEE ^0x148ED6A8
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
		if (func_99(i, 2))
		{
			if (func_100(uParam2, Global_1951910[i /*23*/].f_6, 0.01f, true) && hParam1 == Global_1951910[i /*23*/].f_4)
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
		func_101(num, hParam1, sParam0, 4, iParam6, iParam7, uParam2, iParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, false, false, 0, hParam15, iParam16);
		return num;
	}

	return 0;
}

void func_51(int iParam0, var uParam1) // Position - 0x21D8 Hash - 0xE187089F ^0xB4EA2757
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (func_39(iParam0, true))
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

BOOL func_52(int iParam0, BOOL bParam1) // Position - 0x2219 Hash - 0x1C19B2F4 ^0xAAE134BB
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_38(iParam0))
		return false;

	num = func_71(iParam0);

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

void func_53(Ped pedParam0) // Position - 0x2313 Hash - 0xC59238C2 ^0x33BE37F1
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

float func_54(int iParam0, BOOL bParam1) // Position - 0x2355 Hash - 0x376EA9F4 ^0xA7A80B21
{
	int num;

	if (bParam1 && !func_38(iParam0))
		return 0f;

	num = func_71(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
}

void func_55() // Position - 0x23AD Hash - 0x3C4FB117 ^0x6DE37149
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);
	return;
}

float func_56(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x23D6 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_57(float fParam0) // Position - 0x23FE Hash - 0xBE1CFE42 ^0xF8E8EB5D
{
	if (!Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4 = 1;
	
		if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 < 0f)
			Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 = fParam0;
	}

	return;
}

int func_58(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2442 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

float func_59(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x2468 Hash - 0x9F66817B ^0xCA5C01B6
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

void func_60() // Position - 0x24CD Hash - 0x9F0B4E37 ^0x6923883A
{
	if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4)
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_5 = 1;

	return;
}

BOOL func_61(var uParam0) // Position - 0x24F1 Hash - 0x49079EB8 ^0x90558E5A
{
	var unk;

	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_7 = 1;

	while (!func_102(uParam0->f_19, &unk))
	{
		return false;
	}

	func_104(func_103(joaat("collectibles_collected"), joaat("w_shovel")), 1);

	if (func_11(uParam0, 2))
		func_104(func_103(joaat("collectibles_collected"), joaat("w_metal_detector")), 1);

	return true;
}

void func_62(int iParam0) // Position - 0x254C Hash - 0x6ADFA38F ^0x3BC04BBD
{
	if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(iParam0))
		return;

	PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(iParam0);
	return;
}

void func_63(BOOL bParam0, BOOL bParam1) // Position - 0x2566 Hash - 0x5538C6F1 ^0xAF1D7299
{
	if (bParam1)
		func_105(-753305330, 0, 255, 0, false);
	else if (bParam0)
		func_105(11389876, 0, 255, 0, false);

	return;
}

BOOL func_64() // Position - 0x2598 Hash - 0x28C231E4 ^0xBECFB109
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

Hash func_65() // Position - 0x2626 Hash - 0x3CBB73B4 ^0xC0EEE633
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

BOOL func_66(Hash hParam0, int iParam1) // Position - 0x26C2 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_67(int iParam0) // Position - 0x26DC Hash - 0xB8EC44B7 ^0x4110ECDF
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

int func_68(Hash hParam0) // Position - 0x2D03 Hash - 0x5CCC10A7 ^0x7EE6802B
{
	var outData;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_4;
}

BOOL func_69(int iParam0, int iParam1) // Position - 0x2D1F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_70(int iParam0, int iParam1) // Position - 0x2D2E Hash - 0xF55E891F ^0xF55E891F
{
	func_106(iParam0, iParam1);
	return;
}

int func_71(int iParam0) // Position - 0x2D3E Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_72(int iParam0) // Position - 0x2D48 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_107(iParam0))
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

int func_73(Entity eParam0, Entity eParam1, int iParam2) // Position - 0x2DFB Hash - 0xC1227CDD ^0xCCB24A9F
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

BOOL func_74(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x2EA5 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_75(int iParam0, int iParam1) // Position - 0x2ECE Hash - 0xF55E891F ^0xF55E891F
{
	func_108(iParam0, iParam1);
	return;
}

void func_76(var uParam0) // Position - 0x2EDE Hash - 0x7BC39ED8 ^0x8BD77CB5
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

void func_77(int iParam0, int iParam1) // Position - 0x2F11 Hash - 0x3ABC36EE ^0x53B64BE1
{
	if (func_93(iParam0))
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);

	return;
}

void func_78(int iParam0, int iParam1) // Position - 0x2F2A Hash - 0xA79B1A85 ^0x2E5A8FFD
{
	if (!func_109(iParam0, iParam1))
	{
		MISC::SET_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_110();
	}

	return;
}

void func_79(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2F6E Hash - 0x8217C894 ^0xF71820D2
{
	if (func_109(iParam0, iParam1) && !bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		MISC::CLEAR_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_110();
	}

	return;
}

int func_80(var uParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, int iParam6) // Position - 0x2FD5 Hash - 0x76785467 ^0x34019397
{
	Volume volume;
	int num;

	volume = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	num = func_111(uParam0, uParam1, volume, iParam2);
	func_112(volume);
	return num;
}

BOOL func_81(Hash hParam0, int iParam1) // Position - 0x3006 Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_66(hParam0, 0))
		return false;

	num = func_113(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_115(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_114(hParam0, 1))
				return false;
			break;
	}

	return func_116(hParam0, false, false, false) >= iParam1;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x3089 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_83(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x30B3 Hash - 0x556D3123 ^0xD74EAB49
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_116(joaat("kit_collectors_bag"), false, false, false) <= 0)
				return 0;
			break;
	
		case 1:
			if (func_117(false))
				return 0;
			break;
	
		case 2:
			if (func_118())
				return 0;
			break;
	
		case 3:
			if (Global_1048576)
				return 0;
			break;
	
		case 4:
			if (func_119())
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

float func_84() // Position - 0x31B2 Hash - 0x20414E16 ^0x28E659F3
{
	return Global_1156111.f_2169[89 /*205*/].f_201;
}

void func_85(var uParam0, int iParam1) // Position - 0x31C7 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_86(int iParam0) // Position - 0x31D4 Hash - 0x81B61271 ^0x22A3D4FE
{
	if (iParam0 <= 0)
		return;

	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
	return;
}

void func_87(var uParam0) // Position - 0x31FB Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_120(uParam0, 0f);
	return;
}

float func_88(var uParam0) // Position - 0x320A Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_121(uParam0))
		return uParam0->f_1;

	if (func_122(uParam0))
		return uParam0->f_2;

	return func_123() - uParam0->f_1;
}

BOOL func_89() // Position - 0x323F Hash - 0xB8876D40 ^0xFAD3D5CE
{
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33) && !func_124(Global_33, 1369124074) && !func_124(Global_33, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		return true;

	return false;
}

BOOL func_90(Ped pedParam0) // Position - 0x32A4 Hash - 0x65C15F ^0x65C15F
{
	if (func_125(pedParam0))
		return true;

	if (func_126(pedParam0))
		return true;

	if (func_127(pedParam0))
		return true;

	if (func_128(pedParam0))
		return true;

	if (func_129(pedParam0))
		return true;

	return false;
}

BOOL func_91(int iParam0, BOOL bParam1) // Position - 0x32EE Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_38(iParam0))
		return false;

	return !func_99(iParam0, 4);
}

void func_92(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3313 Hash - 0x90451281 ^0x90451281
{
	int num;

	if (bParam2 && !func_38(iParam0))
		return;

	num = func_71(iParam0);

	if (bParam1)
	{
		func_130(iParam0, 4);
	
		if (bParam3)
			func_131(num, true);
	
		func_132(num, true);
	}
	else
	{
		func_133(iParam0, 4);
		func_132(num, false);
	}

	return;
}

BOOL func_93(int iParam0) // Position - 0x3367 Hash - 0x5499D461 ^0x5499D461
{
	if (*iParam0 == 0)
		return false;

	return *iParam0 != -1;
}

Vector3 func_94(float fParam0, var uParam1, var uParam2) // Position - 0x337F Hash - 0xFB6A39D2 ^0x80C9C759
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

Vector3 func_95(float fParam0) // Position - 0x33BE Hash - 0x22303A60 ^0x2A964B45
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_96(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x33D4 Hash - 0xFED631D9 ^0x4FB6D3D3
{
	return (fParam0.f_1 * uParam3.f_2) - (fParam0.f_2 * uParam3.f_1), (fParam0.f_2 * uParam3) - (fParam0 * uParam3.f_2), (fParam0 * uParam3.f_1) - (fParam0.f_1 * uParam3);
}

float func_97(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x340D Hash - 0x596BEA29 ^0x5FBCDBE5
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

BOOL func_98(Entity eParam0) // Position - 0x342E Hash - 0xE74E8D6A ^0xDC71868A
{
	int num;
	var unk5;
	Hash entityModel;
	int i;
	Hash hashKey;

	if (func_134() == 0)
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_134()))
		return false;

	num = func_134();
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

BOOL func_99(int iParam0, int iParam1) // Position - 0x34C8 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

BOOL func_100(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x34E9 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_101(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, var uParam7, var uParam8, int iParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x353E Hash - 0x1B501888 ^0x6546232B
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
	func_131(iParam0, true);
	func_132(iParam0, true);
	func_133(iParam0, 128);
	return;
}

BOOL func_102(int iParam0, Any anParam1) // Position - 0x3858 Hash - 0xD4D5B736 ^0x6C5BEB38
{
	var unk;

	unk.f_1 = 10;
	func_135(&unk, joaat("LOOT_TYPE_NORMAL"));
	return func_136(iParam0, &unk, anParam1, 0, 0);
}

struct<2> func_103(int iParam0, int iParam1) // Position - 0x3881 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_104(var uParam0, var uParam1, int iParam2) // Position - 0x3897 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_105(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x38B4 Hash - 0xC51EFF01 ^0xD252B7CC
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_137(iParam0, &unk26, &unk13, &unk, iParam1, iParam2, iParam3, bParam4);
}

void func_106(var uParam0, int iParam1) // Position - 0x38E4 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_107(int iParam0) // Position - 0x38F5 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_99(iParam0, 2);
}

void func_108(int iParam0, int iParam1) // Position - 0x3904 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_109(int iParam0, int iParam1) // Position - 0x3919 Hash - 0x1876A9B8 ^0x3CC6BD5B
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_110() // Position - 0x3935 Hash - 0x3A47228D ^0x15AE20E5
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
	return;
}

int func_111(var uParam0, var uParam1, Volume volParam2, int iParam3) // Position - 0x394B Hash - 0xF4BE06E5 ^0x21E9A98D
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

void func_112(Volume volParam0) // Position - 0x3A06 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

int func_113(Hash hParam0) // Position - 0x3A1D Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_66(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_114(Hash hParam0, int iParam1) // Position - 0x3A48 Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_66(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_138(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_139("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_140(&unk, i, num, num2))
			{
			}
			else if (!func_141(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_142(num);
				return true;
			}
		}
	
		func_142(num);
	}

	return false;
}

BOOL func_115(Hash hParam0) // Position - 0x3AF0 Hash - 0x52397408 ^0x52397408
{
	int num;
	int num2;
	int num3;

	if (!func_66(hParam0, 0))
		return false;

	num = func_143(hParam0);

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

	num2 = func_144(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_145(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_146(hParam0);
	num3 = func_145(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_116(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3BAC Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_66(hParam0, 0))
		return 0;

	num = func_113(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_138(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_147(hParam0, false);
	}

	if (func_148(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_149(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_150(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_149(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_117(BOOL bParam0) // Position - 0x3C6E Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_118() // Position - 0x3C9E Hash - 0x4B5A576F ^0x4B5A576F
{
	return func_151() != -1;
}

BOOL func_119() // Position - 0x3CAC Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_120(var uParam0, float fParam1) // Position - 0x3CD1 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_123() - fParam1;
	func_152(uParam0, 1);
	func_153(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_121(var uParam0) // Position - 0x3CF7 Hash - 0x5001E582 ^0x5001E582
{
	return func_154(*uParam0, 1);
}

BOOL func_122(var uParam0) // Position - 0x3D07 Hash - 0x39705408 ^0x39705408
{
	return func_154(*uParam0, 2);
}

float func_123() // Position - 0x3D17 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_124(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x3D49 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_125(Ped pedParam0) // Position - 0x3D72 Hash - 0xE7BA92D6 ^0xE7BA92D6
{
	return func_155(pedParam0, 0);
}

BOOL func_126(Ped pedParam0) // Position - 0x3D81 Hash - 0x605B6EA ^0x605B6EA
{
	return func_155(pedParam0, 3);
}

BOOL func_127(Ped pedParam0) // Position - 0x3D90 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_155(pedParam0, 4) || func_155(pedParam0, 5);
}

BOOL func_128(Ped pedParam0) // Position - 0x3DAC Hash - 0xC9A2E10A ^0xC9A2E10A
{
	return func_155(pedParam0, 6);
}

BOOL func_129(Ped pedParam0) // Position - 0x3DBB Hash - 0xE0409C42 ^0xE0409C42
{
	return func_155(pedParam0, 7);
}

void func_130(int iParam0, int iParam1) // Position - 0x3DCA Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_131(int iParam0, BOOL bParam1) // Position - 0x3DFD Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_99(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_132(int iParam0, BOOL bParam1) // Position - 0x3E55 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_133(int iParam0, int iParam1) // Position - 0x3E7E Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

int func_134() // Position - 0x3EA6 Hash - 0x14C87721 ^0x9AEBE8A8
{
	return Global_1072759.f_28418[47 /*4*/].f_3;
}

void func_135(var uParam0, int iParam1) // Position - 0x3EBB Hash - 0x624BD2B7 ^0x9DA59487
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

BOOL func_136(int iParam0, var uParam1, Any anParam2, int iParam3, int iParam4) // Position - 0x3FE7 Hash - 0x38BE7457 ^0xAB071A56
{
	var unk;
	int num;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_156(uParam1);
	SECURE_STORE(&unk, iParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_3.f_1 = 10;
	num = iParam3;
	num.f_3 = { *uParam1 };
	num.f_2 = iParam4;
	func_157(anParam2, iParam0, num);
	return 1;
}

int func_137(int iParam0, Any anParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x4057 Hash - 0x72C1A759 ^0xD848AFAA
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
		func_158(iParam2, -372840566);

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
	func_159(anParam1, iParam0, unk2);
	return 1;
}

Hash func_138(Hash hParam0, int iParam1) // Position - 0x4138 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_66(hParam0, 0))
		return 0;

	num = func_113(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_160(hParam0, 1399091007))
	{
		func_161(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_139(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x41B2 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_149(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_140(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x41D9 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_141(Hash hParam0) // Position - 0x4214 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_142(int iParam0) // Position - 0x422F Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

Hash func_143(Hash hParam0) // Position - 0x4250 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_66(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_144(Hash hParam0) // Position - 0x427B Hash - 0xB8EC44B7 ^0x72487142
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

int func_145(var uParam0, int iParam1) // Position - 0x435E Hash - 0x6AC2726E ^0xDB215040
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

int func_146(Hash hParam0) // Position - 0x439B Hash - 0xD114ACC1 ^0x3428F85C
{
	int num;

	num = func_143(hParam0);

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

int func_147(Hash hParam0, BOOL bParam1) // Position - 0x4408 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_162(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_164(&unk, func_163(false));

	if (!func_165(&unk, &num, &num2, false))
		return 0;

	func_142(num);
	return num2;
}

int func_148(Hash hParam0, Hash hParam1) // Position - 0x4467 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_167(func_166(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

int func_149(BOOL bParam0) // Position - 0x4493 Hash - 0x58DE66BA ^0xF4629DE1
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

struct<4> func_150(Hash hParam0, BOOL bParam1) // Position - 0x44D4 Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_168(hParam0, bParam1, 0) };
	return func_169(hParam0, unk, unk.f_4, bParam1);
}

int func_151() // Position - 0x44F9 Hash - 0x4228A1C2 ^0x247D3B40
{
	return Global_1149172.f_137;
}

void func_152(var uParam0, int iParam1) // Position - 0x4507 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_153(var uParam0, int iParam1) // Position - 0x4518 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_154(int iParam0, int iParam1) // Position - 0x452D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_155(Ped pedParam0, int iParam1) // Position - 0x453C Hash - 0x25D0971D ^0xF7D4E234
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

void func_156(var uParam0) // Position - 0x457B Hash - 0x333BC7D4 ^0xCB2892E1
{
	func_135(uParam0, joaat("MULTIPLAYER_GAME"));

	if (func_170() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_135(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_135(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_157(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x45B3 Hash - 0x15598973 ^0x15598973
{
	int i;
	var unk;

	if (!func_171(anParam0))
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

void func_158(int iParam0, int iParam1) // Position - 0x4669 Hash - 0xC00BEAB5 ^0x728D99B1
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_159(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x4699 Hash - 0xE040F56 ^0xE040F56
{
	int i;
	var unk;

	if (!func_171(anParam0))
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

BOOL func_160(Hash hParam0, Hash hParam1) // Position - 0x4754 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_66(hParam0, 0))
		return func_172(func_166(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_161(Hash hParam0, var uParam1, var uParam2) // Position - 0x4795 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_162(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x49A1 Hash - 0x90CCF0F4 ^0xA5F3D799
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

struct<4> func_163(BOOL bParam0) // Position - 0x4A7F Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_149(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_169(923904168, func_173(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_169(923904168, func_173(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_169(923904168, func_173(bParam0), -740156546, false);
}

void func_164(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x4B20 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_165(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x4B3B Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_149(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

Hash func_166(Hash hParam0) // Position - 0x4B60 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_167(Hash hParam0, int iParam1) // Position - 0x4B6A Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

struct<5> func_168(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x4B84 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_173(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_113(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_178(hParam0, -1823706425))
			{
				unk = { func_169(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_178(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_169(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_169(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_178(hParam0, -1653629781))
			{
				unk = { func_169(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_177(bParam1) };
		
			switch (func_143(hParam0))
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
			unk = { func_169(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_163(bParam1) };
		
			if (iParam2 && func_174(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_175(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_175(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_176(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_179(unk, &unk28, bParam1, false, -1))
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
			else if (func_178(hParam0, -1653629781))
			{
				unk = { func_169(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_169(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x4EF8 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_66(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_149(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_170() // Position - 0x4F29 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1953292.f_1;
}

BOOL func_171(Any anParam0) // Position - 0x4F37 Hash - 0x36229A1B ^0x2A9934D3
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_172(Hash hParam0, Hash hParam1) // Position - 0x4F7D Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_167(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

struct<4> func_173(BOOL bParam0) // Position - 0x4FB3 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_149(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_169(joaat("character"), func_180(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_169(joaat("character"), func_180(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_169(joaat("character"), func_180(), joaat("SLOTID_NONE"), bParam0);
}

int func_174(Hash hParam0, BOOL bParam1) // Position - 0x5053 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_143(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_181();
		else
			return 1;

	return 0;
}

BOOL func_175(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x508A Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_182(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_176(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x50A5 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_183(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_177(BOOL bParam0) // Position - 0x50C6 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_149(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_169(271701509, func_173(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_169(271701509, func_173(bParam0), 12999093, false);
}

BOOL func_178(Hash hParam0, Hash hParam1) // Position - 0x5130 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_143(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_184(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_179(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x519D Hash - 0x113CD144 ^0x113CD144
{
	return func_185(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

struct<4> func_180() // Position - 0x51B3 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_181() // Position - 0x51BF Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_186(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_182(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x51DC Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_66(hParam0, 0))
		return 0;

	if (!bParam7 && func_148(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_169(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_149(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_149(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_183(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x525B Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_149(false);
	*panParam1 = { func_169(hParam0, func_163(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_184(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x52A0 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_185(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x52D3 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_149(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_186(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x530D Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_187(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_149(bParam1), hParam0, bParam3);
}

BOOL func_187(Hash hParam0) // Position - 0x5340 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

