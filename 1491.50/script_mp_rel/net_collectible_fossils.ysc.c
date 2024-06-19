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
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = -1082130432;
	var uLocal_53 = -1082130432;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_16.f_9))
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

void func_1(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x94 Hash - 0xE7D43625 ^0x7C11A0B2
{
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(4);
	uParam0->f_12 = func_9(uParam1);
	*uParam0 = func_10(uParam1, uParam0);
	func_11(uParam0, 2);
	uParam0->f_13 = "script@mech@treasure_hunting@grab";
	uParam0->f_14 = "PBL_GRAB_01";
	uParam0->f_2 = 0;
	uParam0->f_22 = func_12(uParam1, uParam0);
	uParam0->f_10 = uParam1;
	uParam0->f_9 = uParam1.f_1;
	uParam0->f_6 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_9, true) };
	func_13(&(uParam0->f_27), uParam0->f_6);
	func_14(*uParam0, uParam0->f_12);
	func_15();
	return;
}

int func_2() // Position - 0x11B Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

struct<2> func_3(int iParam0) // Position - 0x129 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_4(int iParam0, var uParam1) // Position - 0x13D Hash - 0x72C53F65 ^0x72C53F65
{
	return iParam0;
}

void func_5(var uParam0) // Position - 0x147 Hash - 0x385E8C14 ^0x5990D687
{
	func_16(&(uParam0->f_15), true, true);
	func_17(uParam0);
	func_18(uParam0->f_6);
	func_19(*uParam0, uParam0->f_12, 1);
	func_19(*uParam0, uParam0->f_12, 32);
	func_20();
	func_21();
	func_22(&(uParam0->f_27));
	func_23(false);
	func_24(&(uParam0->f_27));

	if (!func_25(uParam0, 4))
		SCRIPTS::_0xE7282390542F570D(uParam0->f_10);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_6(var uParam0) // Position - 0x1B7 Hash - 0x3F9A5B3E ^0xE1E8ABCC
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_5(uParam0);
		return false;
	}

	return true;
}

BOOL func_7() // Position - 0x1D1 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_8(var uParam0) // Position - 0x1DA Hash - 0x4F735A1C ^0x1A161207
{
	Hash hash;
	BOOL flag;
	BOOL flag2;
	int taskSequenceId;

	if (func_26(uParam0) < 10)
	{
		if (func_27(*uParam0) && func_28(uParam0))
		{
			func_29(uParam0, 11);
		
			if (func_30(uParam0->f_15))
				func_16(&(uParam0->f_15), true, true);
		
			func_21();
		}
	}

	flag = func_26(uParam0) <= 6 && !func_31(uParam0->f_15, true);
	flag2 = !func_25(uParam0, 32);

	if (func_32(func_25(uParam0, 2)) && func_33(uParam0))
		if (func_25(uParam0, 2))
			func_34(uParam0->f_15, uParam0->f_6);
		else
			func_35(&(uParam0->f_27), uParam0->f_6, flag, flag2, true, false);

	func_36(uParam0->f_15);
	func_37(uParam0->f_6, *uParam0, uParam0->f_12, 1092616192);
	func_38(uParam0);

	switch (func_26(uParam0))
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("mp005_p_collectorshovel01"), false);
		
			if (func_25(uParam0, 1))
				STREAMING::REQUEST_MODEL(uParam0->f_21, false);
		
			func_39(&(uParam0->f_27.f_6), uParam0->f_6, 1.5f, 1, 319, 0);
		
			if (func_25(uParam0, 32))
				func_29(uParam0, 1);
			else if (!func_40(uParam0->f_6))
				func_29(uParam0, 14);
			else
				func_29(uParam0, 1);
			break;
	
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("mp005_p_collectorshovel01")))
			{
				if (func_25(uParam0, 1))
				{
					if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_21))
						return false;
				
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
						uParam0->f_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_21, uParam0->f_6, true, true, false, true);
				
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
						return false;
				
					if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_6 + { 1f, 0f, 0f }, &(uParam0->f_26), &(uParam0->f_23)))
						return false;
				
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_20, func_41(uParam0->f_23, 0), 2, true);
				}
			
				func_29(uParam0, 2);
			}
			break;
	
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
				uParam0->f_11 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_13, 64, uParam0->f_14, true, true);
		
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
				return false;
		
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_11);
			func_29(uParam0, 3);
			break;
	
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_11, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
			
				if (func_25(uParam0, 1))
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "MOUND", uParam0->f_20, 0);
			
				func_42(uParam0);
				func_29(uParam0, 4);
			}
			break;
	
		case 4:
			if (func_32(func_25(uParam0, 2)) && func_33(uParam0))
			{
				if (func_25(uParam0, 1))
				{
					func_43(uParam0->f_20, uParam0->f_20, 0);
					MAP::_0x7563CBCA99253D1A(uParam0->f_20, joaat("blip_mp_role_collector_ilo"));
					func_29(uParam0, 5);
				}
				else
				{
					func_29(uParam0, 5);
				}
			}
			break;
	
		case 5:
			if (func_44(uParam0, 1097859072))
			{
				if (!func_30(uParam0->f_15))
					uParam0->f_15 = func_45("UC_CLT_DIG", joaat("INPUT_CONTEXT_X"), uParam0->f_6, 1070386381, 3, 1, 0, 4, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), 0);
			
				func_29(uParam0, 6);
			}
			break;
	
		case 6:
			if (func_30(uParam0->f_15))
			{
				if (!func_25(uParam0, 32))
					func_46(uParam0->f_15, &(uParam0->f_27.f_5));
			
				if (func_47(uParam0->f_15, true))
				{
					if (func_48(*uParam0, uParam0->f_12, 32))
					{
						func_23(true);
					
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
					
						func_16(&(uParam0->f_15), true, true);
						func_49(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_HIDE_PED_WEAPONS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, false);
						func_19(*uParam0, uParam0->f_12, 32);
						func_29(uParam0, 7);
					}
				}
				else if (func_28(uParam0))
				{
					if (func_50(uParam0->f_15, true) > 0f)
					{
						func_51();
						func_53(func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, true));
					}
					else if (func_50(uParam0->f_15, true) == 0f)
					{
						func_21();
					}
				}
			}
			break;
	
		case 7:
			func_51();
		
			if (func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, true, false) == joaat("WEAPON_UNARMED") && func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, true, false) == joaat("WEAPON_UNARMED") && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) && !PED::IS_PED_CARRYING_SOMETHING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) && !PED::IS_PED_USING_ANY_SCENARIO(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_17(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, func_55(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_6, 1), 2);
				func_29(uParam0, 8);
			}
			break;
	
		case 8:
			func_56();
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, uParam0->f_6, 0);
			TASK::TASK_ENTER_ANIM_SCENE(0, uParam0->f_11, "player", uParam0->f_14, 1069379748, true, 128, 20000, -1082130432);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), taskSequenceId);
			func_29(uParam0, 9);
			break;
	
		case 9:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_11, false))
				func_29(uParam0, 10);
			break;
	
		case 10:
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_11, false) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_11, false))
			{
				if (!func_57(uParam0))
					return false;
			
				func_58(uParam0->f_9);
				func_59(func_25(uParam0, 1), func_25(uParam0, 2));
				func_23(false);
				func_24(&(uParam0->f_27));
				func_18(uParam0->f_6);
				func_58(uParam0->f_9);
				func_21();
			
				if (func_25(uParam0, 2) && func_25(uParam0, 32))
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), joaat("weapon_kit_metal_detector"), false, 0, false, false);
			
				func_29(uParam0, 14);
			}
			break;
	
		case 11:
			if (func_48(*uParam0, uParam0->f_12, 1))
			{
				if (func_60())
				{
					func_19(*uParam0, uParam0->f_12, 1);
					func_29(uParam0, 12);
				}
				else if (!func_27(*uParam0))
				{
					func_29(uParam0, 4);
					func_19(*uParam0, uParam0->f_12, 1);
				}
			}
			break;
	
		case 12:
			if (func_30(uParam0->f_15))
				func_16(&(uParam0->f_15), true, true);
		
			hash = func_61();
		
			if (!func_62(hash, 0))
				return false;
		
			uParam0->f_5 = hash;
			uParam0->f_22 = func_63(uParam0->f_5);
		
			if (!func_25(uParam0, 16))
				func_11(uParam0, 16);
		
			func_19(*uParam0, uParam0->f_12, 1);
			func_29(uParam0, 4);
			break;
	}

	return false;
}

int func_9(var uParam0, var uParam1, var uParam2) // Position - 0x8C0 Hash - 0x74FBDAC8 ^0xE3E93340
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

int func_10(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x8F3 Hash - 0x93E47FD4 ^0x1D9C75EE
{
	int num;

	switch (uParam0.f_2)
	{
		case joaat("WB_DIG_BURIED_RANDOM_SNOW_DIRT"):
			num = 9;
			break;
	
		case joaat("WB_DIG_BURIED_RANDOM_WATER_FRESH"):
			num = 10;
			break;
	
		case joaat("WB_DIG_BURIED_RANDOM_SNOW"):
			num = 8;
			break;
	
		case joaat("WB_DIG_BURIED_RANDOM_MUD"):
			num = 7;
			break;
	}

	return num;
}

void func_11(var uParam0, int iParam1) // Position - 0x93A Hash - 0x1E39CB4 ^0x4D7FFBC3
{
	if (!func_64(uParam0->f_16, iParam1))
		func_65(&(uParam0->f_16), iParam1);

	return;
}

int func_12(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x95A Hash - 0x5FF6BBFF ^0x3080A8C7
{
	int num;
	BOOL flag;

	flag = UNLOCK::UNLOCK_IS_VISIBLE(-296143697);

	switch (uParam0.f_2)
	{
		case joaat("WB_DIG_BURIED_RANDOM_SNOW_DIRT"):
			if (flag)
				num = 1374885161;
			else
				num = -2106156849;
			break;
	
		case joaat("WB_DIG_BURIED_RANDOM_WATER_FRESH"):
			if (flag)
				num = 1391373953;
			else
				num = 2109394729;
			break;
	
		case joaat("WB_DIG_BURIED_RANDOM_SNOW"):
			if (flag)
				num = -2101458121;
			else
				num = 1197515594;
			break;
	
		case joaat("WB_DIG_BURIED_RANDOM_MUD"):
			if (flag)
				num = 918540366;
			else
				num = -710563358;
			break;
	}

	return num;
}

void func_13(var uParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x9F5 Hash - 0xFE3D7F20 ^0x4159D127
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		uParam0->f_7 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_7, 6, 0, 0, -1, -1, 0);
	}

	return;
}

void func_14(var uParam0, var uParam1) // Position - 0xA2C Hash - 0x7B40D540 ^0x20F480B6
{
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 = uParam0;
	return;
}

void func_15() // Position - 0xA42 Hash - 0x182FBE0F ^0x126D7F9C
{
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_7 = 0;
	return;
}

void func_16(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA71 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_30(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_66(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_67(num);
	*uParam0 = 0;
	return;
}

void func_17(var uParam0) // Position - 0xAC5 Hash - 0x5613A6CF ^0x45918580
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
		func_68(uParam0->f_20, uParam0->f_20, 0);

	return;
}

void func_18(var uParam0, var uParam1, var uParam2) // Position - 0xAE6 Hash - 0xAC508A8A ^0xAC508A8A
{
	if (func_69(Global_1222323, uParam0))
		Global_1222323 = { 0f, 0f, 0f };

	return;
}

void func_19(int iParam0, int iParam1, int iParam2) // Position - 0xB08 Hash - 0xBEB9F473 ^0xBEB9F473
{
	func_70(&Global_1222327[iParam0 /*251*/][iParam1], iParam2);
	return;
}

void func_20() // Position - 0xB22 Hash - 0x9370A593 ^0x37FC5A70
{
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
	return;
}

void func_21() // Position - 0xB5E Hash - 0xCBA3AB74 ^0x4F1079DA
{
	if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 = -1f;
	}

	return;
}

void func_22(var uParam0) // Position - 0xB9C Hash - 0x6197CFB5 ^0xB076B5A9
{
	func_71(uParam0);
	func_72(&(uParam0->f_6), 1);
	return;
}

void func_23(BOOL bParam0) // Position - 0xBB3 Hash - 0xEFDB7ACC ^0xEFDB7ACC
{
	if (bParam0)
		func_73(0, 6);
	else
		func_74(0, 6, false);

	return;
}

void func_24(var uParam0) // Position - 0xBD0 Hash - 0x530C41A5 ^0x73534952
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
		VOLUME::DELETE_VOLUME(uParam0->f_7);

	return;
}

BOOL func_25(var uParam0, int iParam1) // Position - 0xBEB Hash - 0xBD0B8CC9 ^0xDB2FFF80
{
	return func_64(uParam0->f_16, iParam1);
}

int func_26(var uParam0) // Position - 0xBFD Hash - 0xD73B9827 ^0x6B119A2B
{
	return uParam0->f_2;
}

BOOL func_27(int iParam0) // Position - 0xC09 Hash - 0xCBB67E45 ^0x94031C60
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
			if (!func_64(Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 1))
				func_65(&Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 1);
		
			return true;
		}
	
		if (!func_64(Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 32))
			func_65(&Global_1222327[Global_1222034[player3 /*9*/].f_1 /*251*/][Global_1222034[player3 /*9*/].f_2], 32);
	}

	return false;
}

BOOL func_28(var uParam0) // Position - 0xD7E Hash - 0xA6080C39 ^0xB22C0B77
{
	if (!func_25(uParam0, 32))
		return Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0;

	return Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 == *uParam0 && Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 == uParam0->f_12;
}

void func_29(var uParam0, int iParam1) // Position - 0xDCE Hash - 0x4F8BE4B5 ^0x5AE41537
{
	uParam0->f_2 = iParam1;
	return;
}

BOOL func_30(int iParam0) // Position - 0xDDC Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

BOOL func_31(int iParam0, BOOL bParam1) // Position - 0xE1B Hash - 0xAAB142C4 ^0xDB043156
{
	int num;

	if (bParam1 && !func_30(iParam0))
		return false;

	num = func_66(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3);
}

int func_32(BOOL bParam0) // Position - 0xE4E Hash - 0xD771AE35 ^0xC45666E8
{
	if (func_75(joaat("kit_collector_spade"), 1))
		if (bParam0)
			if (func_75(joaat("weapon_kit_metal_detector"), 1))
				return 1;
		else
			return 1;

	return 0;
}

int func_33(var uParam0) // Position - 0xE81 Hash - 0xD73B9827 ^0xEBA8FDB0
{
	return uParam0->f_39;
}

void func_34(var uParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xE8D Hash - 0x27AD60A1 ^0x27AD60A1
{
	if (!func_40(vParam1))
	{
		func_18(vParam1);
		return;
	}

	if (_IS_NULL_VECTOR(Global_1222323))
		Global_1222323 = { vParam1 };
	else if (!func_69(Global_1222323, vParam1))
		if (BUILTIN::VDIST2(Global_34, vParam1) < BUILTIN::VDIST2(Global_34, Global_1222323))
			Global_1222323 = { vParam1 };

	return;
}

void func_35(var uParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0xF02 Hash - 0x9EDD889C ^0xE38DDFD2
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

	flag2 = func_77(uParam0, bParam4, flag);

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
	num = num * (1f + func_78());

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
					
						func_79(uParam0, 1);
					}
				}
				else
				{
					func_79(uParam0, 1);
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
				func_80(250);
		
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, value, frequency);
			func_81(&(uParam0->f_1));
			func_79(uParam0, 2);
			break;
	
		case 2:
			if (uParam0->f_9 >= num + 5f || !bParam4 || flag)
			{
				if (bParam5)
					func_71(uParam0);
			
				func_79(uParam0, 0);
			}
			else if (func_82(&(uParam0->f_1)) >= 2f)
			{
				func_79(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_80(250);
			}
			break;
	}

	return;
}

void func_36(int iParam0) // Position - 0x112B Hash - 0xE4CB9F65 ^0x12B816AE
{
	Entity firstEntityPedIsCarrying;

	if (func_30(iParam0))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1295666.f_3);
	
		if (PED::IS_PED_CARRYING_SOMETHING(Global_1295666.f_3) || TASK::IS_PED_GETTING_UP(Global_1295666.f_3) || PED::IS_PED_RAGDOLL(Global_1295666.f_3) || !func_83() || Global_1102813.f_3664 || ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) || PED::IS_PED_JUMPING(Global_1295666.f_3) || PED::IS_PED_CLIMBING(Global_1295666.f_3) || PED::IS_PED_FALLING(Global_1295666.f_3) || PED::IS_PED_HOGTIED(Global_33) || func_84(Global_33) || PED::IS_PED_IN_MELEE_COMBAT(Global_33) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 1, 0))
			if (func_85(iParam0, false))
				func_86(iParam0, false, true, true);
		else if (!func_85(iParam0, false))
			func_86(iParam0, true, true, true);
	}

	return;
}

void func_37(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1229 Hash - 0x6C08AC8B ^0x276F2F16
{
	if (func_52(Global_33, uParam0, true) < iParam5)
	{
		if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 != iParam3)
			Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_1 = iParam3;
	
		if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 != iParam4)
			Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_2 = iParam4;
	}

	return;
}

void func_38(var uParam0) // Position - 0x1281 Hash - 0xB5CF2F99 ^0x24879AAD
{
	uParam0->f_39 = func_87();
	return;
}

void func_39(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1291 Hash - 0xA400C89E ^0xDFDC4B6A
{
	if (!func_88(iParam0))
	{
		*iParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
	
		if (func_88(iParam0))
		{
		}
	}

	return;
}

BOOL func_40(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x12C5 Hash - 0x430EB7DB ^0xA2691D59
{
	return !PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS(vParam0);
}

Vector3 func_41(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x12D6 Hash - 0x4451FC2 ^0x4451FC2
{
	var unk;
	float num;
	float num2;
	float num3;
	Vector3 vector;
	Vector3 vector2;
	float num4;

	unk = { func_89(uParam0) };
	num = { func_91(func_91(unk, func_90(iParam3 - 90f)), unk) };
	num2 = MISC::ATAN2(num.f_1, num);
	num3 = -MISC::ATAN2(num.f_2, BUILTIN::SQRT((num * num) + (num.f_1 * num.f_1)));
	vector = { -num.f_1, num, 0f };
	vector2 = { func_91(vector, num) };
	num4 = MISC::ATAN2(func_92(vector, unk) / BUILTIN::VMAG(vector), func_92(vector2, unk) / BUILTIN::VMAG(vector2)) + 180f;
	return num4, num3, num2;
}

void func_42(var uParam0) // Position - 0x138C Hash - 0x554F8257 ^0xDA5B5515
{
	int value;

	switch (*uParam0)
	{
		case 7:
			value = 1;
			break;
	
		case 8:
			value = 2;
			break;
	
		case 9:
			value = 2;
			break;
	
		case 10:
			value = 1;
			break;
	}

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
		ANIMSCENE::SET_ANIM_SCENE_INT(uParam0->f_11, "_terrain_type", value, false);

	return;
}

int func_43(Entity eParam0, Entity eParam1, int iParam2) // Position - 0x13E6 Hash - 0xF2B92A32 ^0xAD1DE34B
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_1296539.f_32))
		Global_1296539.f_32 = ITEMSET::CREATE_ITEMSET(true);

	if (!ITEMSET::IS_IN_ITEMSET(eParam0, Global_1296539.f_32))
		ITEMSET::ADD_TO_ITEMSET(eParam0, Global_1296539.f_32);

	if (!func_93(eParam0))
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

BOOL func_44(var uParam0, int iParam1) // Position - 0x1496 Hash - 0x2C12AD55 ^0x4072445F
{
	if (func_75(joaat("kit_collector_spade"), 1))
	{
		if (Global_1102813.f_3664)
			return false;
	
		if (func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, true) > iParam1)
			return false;
	
		if (func_25(uParam0, 4))
			if (func_25(uParam0, 2) && func_25(uParam0, 1) && func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, true) <= 1.6f)
				return true;
	
		if (func_25(uParam0, 2))
		{
			if (func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, true, false) == joaat("weapon_kit_metal_detector") || func_25(uParam0, 16) && func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, true) <= 1.6f)
			{
				func_11(uParam0, 16);
				return true;
			}
		}
		else
		{
			return true;
		}
	}

	return false;
}

int func_45(char* sParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, Hash hParam15, int iParam16) // Position - 0x157A Hash - 0x8FE94EEE ^0x148ED6A8
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
		if (func_94(i, 2))
		{
			if (func_95(uParam2, Global_1951910[i /*23*/].f_6, 0.01f, true) && hParam1 == Global_1951910[i /*23*/].f_4)
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
		func_96(num, hParam1, sParam0, 4, iParam6, iParam7, uParam2, iParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, false, false, 0, hParam15, iParam16);
		return num;
	}

	return 0;
}

void func_46(int iParam0, var uParam1) // Position - 0x1658 Hash - 0xA449914E ^0x951C211E
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (func_31(iParam0, true))
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

BOOL func_47(int iParam0, BOOL bParam1) // Position - 0x1699 Hash - 0x1C19B2F4 ^0xAAE134BB
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_30(iParam0))
		return false;

	num = func_66(iParam0);

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

BOOL func_48(int iParam0, int iParam1, int iParam2) // Position - 0x1793 Hash - 0xC821A3FC ^0xC821A3FC
{
	return func_64(Global_1222327[iParam0 /*251*/][iParam1], iParam2);
}

void func_49(Ped pedParam0) // Position - 0x17AD Hash - 0xC59238C2 ^0x33BE37F1
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

float func_50(int iParam0, BOOL bParam1) // Position - 0x17EF Hash - 0x376EA9F4 ^0xA7A80B21
{
	int num;

	if (bParam1 && !func_30(iParam0))
		return 0f;

	num = func_66(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
}

void func_51() // Position - 0x1847 Hash - 0x3C4FB117 ^0x6DE37149
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);
	return;
}

float func_52(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1870 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_53(float fParam0) // Position - 0x1898 Hash - 0xBE1CFE42 ^0xF8E8EB5D
{
	if (!Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4)
	{
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4 = 1;
	
		if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 < 0f)
			Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_8 = fParam0;
	}

	return;
}

int func_54(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x18DC Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

float func_55(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x1902 Hash - 0x9F66817B ^0xCA5C01B6
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

void func_56() // Position - 0x1967 Hash - 0x9F0B4E37 ^0x6923883A
{
	if (Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_4)
		Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_5 = 1;

	return;
}

BOOL func_57(var uParam0) // Position - 0x198B Hash - 0x23272C79 ^0xDA22FB87
{
	var unk;
	int i;
	var unk5;

	Global_1222034[PLAYER::PLAYER_ID() /*9*/].f_7 = 1;

	while (!func_97(uParam0->f_22, &unk))
	{
		return false;
	}

	unk5 = { uParam0->f_6 };

	for (i = 0; i < Global_17418.f_2992.f_1; i = i + 1)
	{
		if (func_95(unk5, Global_17418.f_2992.f_1[i /*5*/].f_1, 1056964608, true))
			Global_17418.f_2992.f_1[i /*5*/] = true;
	}

	func_99(func_98(joaat("collectibles_collected"), joaat("w_shovel")), 1);

	if (func_25(uParam0, 2))
		func_99(func_98(joaat("collectibles_collected"), joaat("w_metal_detector")), 1);

	return true;
}

void func_58(int iParam0) // Position - 0x1A37 Hash - 0x6ADFA38F ^0x3BC04BBD
{
	if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(iParam0))
		return;

	PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(iParam0);
	return;
}

void func_59(BOOL bParam0, BOOL bParam1) // Position - 0x1A51 Hash - 0x5538C6F1 ^0xAF1D7299
{
	if (bParam1)
		func_100(-753305330, 0, 255, 0, false);
	else if (bParam0)
		func_100(11389876, 0, 255, 0, false);

	return;
}

BOOL func_60() // Position - 0x1A83 Hash - 0x28C231E4 ^0xBECFB109
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

Hash func_61() // Position - 0x1B11 Hash - 0x3CBB73B4 ^0xC0EEE633
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

BOOL func_62(Hash hParam0, int iParam1) // Position - 0x1BAD Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_63(int iParam0) // Position - 0x1BC7 Hash - 0xB8EC44B7 ^0x4110ECDF
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

BOOL func_64(int iParam0, int iParam1) // Position - 0x21EE Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_65(int iParam0, int iParam1) // Position - 0x21FD Hash - 0xF55E891F ^0xF55E891F
{
	func_101(iParam0, iParam1);
	return;
}

int func_66(int iParam0) // Position - 0x220D Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_67(int iParam0) // Position - 0x2217 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_102(iParam0))
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

int func_68(Entity eParam0, Entity eParam1, int iParam2) // Position - 0x22CA Hash - 0xC1227CDD ^0xCCB24A9F
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

BOOL func_69(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x2374 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_70(int iParam0, int iParam1) // Position - 0x239D Hash - 0xF55E891F ^0xF55E891F
{
	func_103(iParam0, iParam1);
	return;
}

void func_71(var uParam0) // Position - 0x23AD Hash - 0xA2B61F96 ^0xF0977D78
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

void func_72(int iParam0, int iParam1) // Position - 0x23E0 Hash - 0x3ABC36EE ^0x53B64BE1
{
	if (func_88(iParam0))
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);

	return;
}

void func_73(int iParam0, int iParam1) // Position - 0x23F9 Hash - 0xA79B1A85 ^0x2E5A8FFD
{
	if (!func_104(iParam0, iParam1))
	{
		MISC::SET_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_105();
	}

	return;
}

void func_74(int iParam0, int iParam1, BOOL bParam2) // Position - 0x243D Hash - 0x8217C894 ^0xF71820D2
{
	if (func_104(iParam0, iParam1) && !bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		MISC::CLEAR_BIT(&Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_105();
	}

	return;
}

BOOL func_75(Hash hParam0, int iParam1) // Position - 0x24A4 Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_62(hParam0, 0))
		return false;

	num = func_106(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_108(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_107(hParam0, 1))
				return false;
			break;
	}

	return func_109(hParam0, false, false, false) >= iParam1;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x2527 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_77(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2551 Hash - 0x556D3123 ^0xD74EAB49
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_109(joaat("kit_collectors_bag"), false, false, false) <= 0)
				return 0;
			break;
	
		case 1:
			if (func_110(false))
				return 0;
			break;
	
		case 2:
			if (func_111())
				return 0;
			break;
	
		case 3:
			if (Global_1048576)
				return 0;
			break;
	
		case 4:
			if (func_112())
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

float func_78() // Position - 0x2650 Hash - 0x20414E16 ^0x28E659F3
{
	return Global_1156111.f_2169[89 /*205*/].f_201;
}

void func_79(var uParam0, int iParam1) // Position - 0x2665 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_80(int iParam0) // Position - 0x2672 Hash - 0x81B61271 ^0x22A3D4FE
{
	if (iParam0 <= 0)
		return;

	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
	return;
}

void func_81(var uParam0) // Position - 0x2699 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_113(uParam0, 0f);
	return;
}

float func_82(var uParam0) // Position - 0x26A8 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_114(uParam0))
		return uParam0->f_1;

	if (func_115(uParam0))
		return uParam0->f_2;

	return func_116() - uParam0->f_1;
}

BOOL func_83() // Position - 0x26DD Hash - 0xB8876D40 ^0xFAD3D5CE
{
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33) && !func_117(Global_33, 1369124074) && !func_117(Global_33, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		return true;

	return false;
}

BOOL func_84(Ped pedParam0) // Position - 0x2742 Hash - 0x65C15F ^0x65C15F
{
	if (func_118(pedParam0))
		return true;

	if (func_119(pedParam0))
		return true;

	if (func_120(pedParam0))
		return true;

	if (func_121(pedParam0))
		return true;

	if (func_122(pedParam0))
		return true;

	return false;
}

BOOL func_85(int iParam0, BOOL bParam1) // Position - 0x278C Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_30(iParam0))
		return false;

	return !func_94(iParam0, 4);
}

void func_86(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x27B1 Hash - 0x90451281 ^0x90451281
{
	int num;

	if (bParam2 && !func_30(iParam0))
		return;

	num = func_66(iParam0);

	if (bParam1)
	{
		func_123(iParam0, 4);
	
		if (bParam3)
			func_124(num, true);
	
		func_125(num, true);
	}
	else
	{
		func_126(iParam0, 4);
		func_125(num, false);
	}

	return;
}

int func_87() // Position - 0x2805 Hash - 0x4192543B ^0x401DE8CD
{
	if (!(UNLOCK::UNLOCK_IS_VISIBLE(-474252899) || UNLOCK::UNLOCK_IS_VISIBLE(294305054) || UNLOCK::UNLOCK_IS_VISIBLE(-296143697)))
		return 0;
	else if (!UNLOCK::UNLOCK_IS_VISIBLE(-1820411463))
		return 0;

	return 1;
}

BOOL func_88(int iParam0) // Position - 0x2851 Hash - 0x5499D461 ^0x5499D461
{
	if (*iParam0 == 0)
		return false;

	return *iParam0 != -1;
}

Vector3 func_89(float fParam0, var uParam1, var uParam2) // Position - 0x2869 Hash - 0xFB6A39D2 ^0x80C9C759
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

Vector3 func_90(float fParam0) // Position - 0x28A8 Hash - 0x22303A60 ^0x2A964B45
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_91(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x28BE Hash - 0xFED631D9 ^0x4FB6D3D3
{
	return (fParam0.f_1 * uParam3.f_2) - (fParam0.f_2 * uParam3.f_1), (fParam0.f_2 * uParam3) - (fParam0 * uParam3.f_2), (fParam0 * uParam3.f_1) - (fParam0.f_1 * uParam3);
}

float func_92(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x28F7 Hash - 0x596BEA29 ^0x5FBCDBE5
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

BOOL func_93(Entity eParam0) // Position - 0x2918 Hash - 0xE74E8D6A ^0xDC71868A
{
	int num;
	var unk5;
	Hash entityModel;
	int i;
	Hash hashKey;

	if (func_127() == 0)
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_127()))
		return false;

	num = func_127();
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

BOOL func_94(int iParam0, int iParam1) // Position - 0x29B2 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

BOOL func_95(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0x29D3 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
				return true;

	return false;
}

void func_96(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, var uParam7, var uParam8, int iParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x2A28 Hash - 0x1B501888 ^0x6546232B
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
	func_124(iParam0, true);
	func_125(iParam0, true);
	func_126(iParam0, 128);
	return;
}

BOOL func_97(int iParam0, Any anParam1) // Position - 0x2D42 Hash - 0xD4D5B736 ^0x6C5BEB38
{
	var unk;

	unk.f_1 = 10;
	func_128(&unk, joaat("LOOT_TYPE_NORMAL"));
	return func_129(iParam0, &unk, anParam1, 0, 0);
}

struct<2> func_98(int iParam0, int iParam1) // Position - 0x2D6B Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_99(var uParam0, var uParam1, int iParam2) // Position - 0x2D81 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_100(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x2D9E Hash - 0xC51EFF01 ^0xD252B7CC
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_130(iParam0, &unk26, &unk13, &unk, iParam1, iParam2, iParam3, bParam4);
}

void func_101(var uParam0, int iParam1) // Position - 0x2DCE Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_102(int iParam0) // Position - 0x2DDF Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_94(iParam0, 2);
}

void func_103(int iParam0, int iParam1) // Position - 0x2DEE Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_104(int iParam0, int iParam1) // Position - 0x2E03 Hash - 0x1876A9B8 ^0x3CC6BD5B
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_105() // Position - 0x2E1F Hash - 0x3A47228D ^0x15AE20E5
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
	return;
}

int func_106(Hash hParam0) // Position - 0x2E35 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_62(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_107(Hash hParam0, int iParam1) // Position - 0x2E60 Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_62(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_131(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_132("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_133(&unk, i, num, num2))
			{
			}
			else if (!func_134(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_135(num);
				return true;
			}
		}
	
		func_135(num);
	}

	return false;
}

BOOL func_108(Hash hParam0) // Position - 0x2F07 Hash - 0x52397408 ^0x52397408
{
	int num;
	int num2;
	int num3;

	if (!func_62(hParam0, 0))
		return false;

	num = func_136(hParam0);

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

	num2 = func_137(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_138(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_139(hParam0);
	num3 = func_138(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_109(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2FC3 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_62(hParam0, 0))
		return 0;

	num = func_106(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_131(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_140(hParam0, false);
	}

	if (func_141(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_142(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_143(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_142(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_110(BOOL bParam0) // Position - 0x3085 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_111() // Position - 0x30B5 Hash - 0x4B5A576F ^0x4B5A576F
{
	return func_144() != -1;
}

BOOL func_112() // Position - 0x30C3 Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_113(var uParam0, float fParam1) // Position - 0x30E8 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_116() - fParam1;
	func_145(uParam0, 1);
	func_146(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_114(var uParam0) // Position - 0x310E Hash - 0x5001E582 ^0x5001E582
{
	return func_147(*uParam0, 1);
}

BOOL func_115(var uParam0) // Position - 0x311E Hash - 0x39705408 ^0x39705408
{
	return func_147(*uParam0, 2);
}

float func_116() // Position - 0x312E Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_117(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x3160 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_118(Ped pedParam0) // Position - 0x3189 Hash - 0xE7BA92D6 ^0xE7BA92D6
{
	return func_148(pedParam0, 0);
}

BOOL func_119(Ped pedParam0) // Position - 0x3198 Hash - 0x605B6EA ^0x605B6EA
{
	return func_148(pedParam0, 3);
}

BOOL func_120(Ped pedParam0) // Position - 0x31A7 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_148(pedParam0, 4) || func_148(pedParam0, 5);
}

BOOL func_121(Ped pedParam0) // Position - 0x31C3 Hash - 0xC9A2E10A ^0xC9A2E10A
{
	return func_148(pedParam0, 6);
}

BOOL func_122(Ped pedParam0) // Position - 0x31D2 Hash - 0xE0409C42 ^0xE0409C42
{
	return func_148(pedParam0, 7);
}

void func_123(int iParam0, int iParam1) // Position - 0x31E1 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_124(int iParam0, BOOL bParam1) // Position - 0x3214 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_94(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_125(int iParam0, BOOL bParam1) // Position - 0x326C Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_126(int iParam0, int iParam1) // Position - 0x3295 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

int func_127() // Position - 0x32BD Hash - 0x14C87721 ^0x9AEBE8A8
{
	return Global_1072759.f_28418[47 /*4*/].f_3;
}

void func_128(var uParam0, int iParam1) // Position - 0x32D2 Hash - 0x624BD2B7 ^0x9DA59487
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

BOOL func_129(int iParam0, var uParam1, Any anParam2, int iParam3, int iParam4) // Position - 0x33FE Hash - 0x4F430DA4 ^0x658D22B6
{
	var unk;
	int num;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_149(uParam1);
	SECURE_STORE(&unk, iParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_3.f_1 = 10;
	num = iParam3;
	num.f_3 = { *uParam1 };
	num.f_2 = iParam4;
	func_150(anParam2, iParam0, num);
	return 1;
}

int func_130(int iParam0, Any anParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x346D Hash - 0x72C1A759 ^0xD848AFAA
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
		func_151(iParam2, -372840566);

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
	func_152(anParam1, iParam0, unk2);
	return 1;
}

Hash func_131(Hash hParam0, int iParam1) // Position - 0x354E Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_62(hParam0, 0))
		return 0;

	num = func_106(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_153(hParam0, 1399091007))
	{
		func_154(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_132(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x35C8 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_142(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_133(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x35EF Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_134(Hash hParam0) // Position - 0x362A Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_135(int iParam0) // Position - 0x3645 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

Hash func_136(Hash hParam0) // Position - 0x3666 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_62(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_137(Hash hParam0) // Position - 0x3691 Hash - 0xB8EC44B7 ^0x72487142
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

int func_138(var uParam0, int iParam1) // Position - 0x3774 Hash - 0x6AC2726E ^0xDB215040
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

int func_139(Hash hParam0) // Position - 0x37B1 Hash - 0xD114ACC1 ^0x3428F85C
{
	int num;

	num = func_136(hParam0);

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

int func_140(Hash hParam0, BOOL bParam1) // Position - 0x381E Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_155(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_157(&unk, func_156(false));

	if (!func_158(&unk, &num, &num2, false))
		return 0;

	func_135(num);
	return num2;
}

int func_141(Hash hParam0, Hash hParam1) // Position - 0x387D Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_160(func_159(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

int func_142(BOOL bParam0) // Position - 0x38A9 Hash - 0x58DE66BA ^0xF4629DE1
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

struct<4> func_143(Hash hParam0, BOOL bParam1) // Position - 0x38EA Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_161(hParam0, bParam1, 0) };
	return func_162(hParam0, unk, unk.f_4, bParam1);
}

int func_144() // Position - 0x390F Hash - 0x4228A1C2 ^0x247D3B40
{
	return Global_1149172.f_137;
}

void func_145(var uParam0, int iParam1) // Position - 0x391D Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_146(var uParam0, int iParam1) // Position - 0x392E Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_147(int iParam0, int iParam1) // Position - 0x3943 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_148(Ped pedParam0, int iParam1) // Position - 0x3952 Hash - 0x25D0971D ^0xF7D4E234
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

void func_149(var uParam0) // Position - 0x3991 Hash - 0x333BC7D4 ^0xCB2892E1
{
	func_128(uParam0, joaat("MULTIPLAYER_GAME"));

	if (func_163() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_128(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_128(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_150(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x39C9 Hash - 0x15598973 ^0x15598973
{
	int i;
	var unk;

	if (!func_164(anParam0))
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

void func_151(int iParam0, int iParam1) // Position - 0x3A7F Hash - 0xC00BEAB5 ^0x728D99B1
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_152(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x3AAF Hash - 0xE040F56 ^0xE040F56
{
	int i;
	var unk;

	if (!func_164(anParam0))
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

BOOL func_153(Hash hParam0, Hash hParam1) // Position - 0x3B6A Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_62(hParam0, 0))
		return func_165(func_159(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_154(Hash hParam0, var uParam1, var uParam2) // Position - 0x3BAB Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_155(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3DB7 Hash - 0x90CCF0F4 ^0xA5F3D799
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

struct<4> func_156(BOOL bParam0) // Position - 0x3E95 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_142(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_162(923904168, func_166(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_162(923904168, func_166(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_162(923904168, func_166(bParam0), -740156546, false);
}

void func_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x3F36 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_158(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x3F51 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_142(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

Hash func_159(Hash hParam0) // Position - 0x3F76 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_160(Hash hParam0, int iParam1) // Position - 0x3F80 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

struct<5> func_161(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x3F9A Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_166(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_106(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_171(hParam0, -1823706425))
			{
				unk = { func_162(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_171(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_162(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_162(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_171(hParam0, -1653629781))
			{
				unk = { func_162(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_170(bParam1) };
		
			switch (func_136(hParam0))
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
			unk = { func_162(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_156(bParam1) };
		
			if (iParam2 && func_167(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_168(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_168(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_169(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_172(unk, &unk28, bParam1, false, -1))
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
			else if (func_171(hParam0, -1653629781))
			{
				unk = { func_162(1384535894, unk, 1784584921, bParam1) };
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

struct<4> func_162(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x430E Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_62(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_142(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_163() // Position - 0x433F Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1953292.f_1;
}

BOOL func_164(Any anParam0) // Position - 0x434D Hash - 0x36229A1B ^0x2A9934D3
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_165(Hash hParam0, Hash hParam1) // Position - 0x4393 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_160(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

struct<4> func_166(BOOL bParam0) // Position - 0x43C9 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_142(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_162(joaat("character"), func_173(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_162(joaat("character"), func_173(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_162(joaat("character"), func_173(), joaat("SLOTID_NONE"), bParam0);
}

int func_167(Hash hParam0, BOOL bParam1) // Position - 0x4469 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_136(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_174();
		else
			return 1;

	return 0;
}

BOOL func_168(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x44A0 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_175(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_169(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x44BB Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_176(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_170(BOOL bParam0) // Position - 0x44DC Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_142(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_162(271701509, func_166(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_162(271701509, func_166(bParam0), 12999093, false);
}

BOOL func_171(Hash hParam0, Hash hParam1) // Position - 0x4546 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_136(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_177(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_172(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x45B3 Hash - 0x113CD144 ^0x113CD144
{
	return func_178(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

struct<4> func_173() // Position - 0x45C9 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_174() // Position - 0x45D5 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_179(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_175(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x45F2 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_62(hParam0, 0))
		return 0;

	if (!bParam7 && func_141(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_162(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_142(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_142(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_176(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x4671 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_142(false);
	*panParam1 = { func_162(hParam0, func_156(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_177(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x46B6 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_178(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x46E9 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_142(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_179(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4723 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_180(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_142(bParam1), hParam0, bParam3);
}

BOOL func_180(Hash hParam0) // Position - 0x4756 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

