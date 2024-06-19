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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	Ped pedLocal_18 = 0;
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
	var uLocal_50 = 1;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = -1;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 2;
	var uLocal_61 = 1;
	var uLocal_62 = 1;
	var uLocal_63 = 1;
	var uLocal_64 = 0;
	var uLocal_65 = 1;
	var uLocal_66 = 2;
	var uLocal_67 = 2;
	var uLocal_68 = 3;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 3;
	var uLocal_72 = 1;
	var uLocal_73 = 3;
	var uLocal_74 = 3;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	Entity eLocal_77 = 0;
	Entity eLocal_78 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE11E8660 ^0xE1C2806D
{
	bLocal_13 = 1;
	anLocal_15 = anScriptParam_0;
	uLocal_16 = anScriptParam_0.f_1;
	uLocal_17 = anScriptParam_0.f_2;
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

void func_6() // Position - 0x10C Hash - 0xF5D79F7A ^0xB0E536C1
{
	Hash entityModel;
	float entityAnimCurrentTime;
	var entityCoords;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_18))
		return;

	if (PED::IS_PED_INJURED(pedLocal_18))
	{
		bLocal_13 = false;
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(pedLocal_18.f_25)) && !SCRIPTS::HAS_SCRIPT_LOADED(&(pedLocal_18.f_25)))
			if (func_12())
				func_13(0);
	
		return;
	}

	switch (func_14())
	{
		case 0:
			if (func_15())
			{
				pedLocal_18.f_30 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(pedLocal_18);
				TEXT_LABEL_ASSIGN_STRING(&(pedLocal_18.f_25), "doc_treasure_map", 32);
				TEXT_LABEL_ASSIGN_STRING(&(pedLocal_18.f_1), "MAP", 32);
				pedLocal_18.f_6 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(pedLocal_18, false);
				pedLocal_18.f_5 = TASK::GET_PROP_FOR_SCENARIO_POINT(pedLocal_18.f_6, &(pedLocal_18.f_1));
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_18.f_5))
				{
				}
			
				entityModel = ENTITY::GET_ENTITY_MODEL(pedLocal_18.f_5);
			
				switch (entityModel)
				{
					case joaat("s_maprolled02x"):
						break;
				
					case joaat("s_maprolled01x"):
						break;
				
					case joaat("s_maprolled03x"):
						break;
				
					default:
						break;
				}
			
				pedLocal_18.f_15.f_1 = pedLocal_18.f_6;
				pedLocal_18.f_15 = pedLocal_18.f_5;
				pedLocal_18.f_15.f_3 = 1;
				pedLocal_18.f_29 = 1024;
				func_16();
			}
		
			func_17(1);
			break;
	
		case 1:
			if (func_15())
			{
				SCRIPTS::REQUEST_SCRIPT(&(pedLocal_18.f_25));
				func_18();
				func_13(1);
				func_16();
			}
		
			func_17(2);
			break;
	
		case 2:
			if (func_15())
				func_16();
		
			if (SCRIPTS::HAS_SCRIPT_LOADED(&(pedLocal_18.f_25)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_18, 0) && func_19())
			{
				pedLocal_18.f_31 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(pedLocal_18.f_25), &(pedLocal_18.f_15), 10, pedLocal_18.f_29);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(pedLocal_18.f_25));
				func_17(3);
				entityAnimCurrentTime = 0f;
			
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_18, "script_re@murder_campfire@knife_note", "enter", 1))
					entityAnimCurrentTime = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_18, "script_re@murder_campfire@knife_note", "enter");
			
				eLocal_77 = TASK::GET_PROP_FOR_SCENARIO_POINT(pedLocal_18.f_6, "Knife");
				eLocal_78 = TASK::GET_PROP_FOR_SCENARIO_POINT(pedLocal_18.f_6, "Head");
			
				if (ENTITY::DOES_ENTITY_EXIST(eLocal_77))
				{
					if (TASK::_DISASSOCIATE_PROP_FROM_SCENARIO(pedLocal_18.f_6, "Knife"))
					{
						if (ENTITY::PLAY_ENTITY_ANIM(eLocal_77, "enter_knife", "script_re@murder_campfire@knife_note", 1000f, false, false, false, entityAnimCurrentTime, 32768))
						{
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(eLocal_78))
					{
						if (TASK::_DISASSOCIATE_PROP_FROM_SCENARIO(pedLocal_18.f_6, "Head"))
						{
							if (ENTITY::PLAY_ENTITY_ANIM(eLocal_78, "enter_head", "script_re@murder_campfire@knife_note", 1000f, false, false, false, entityAnimCurrentTime, 32768))
							{
							}
						}
					}
				}
				else if (func_20() == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(eLocal_78))
					{
						if (TASK::_DISASSOCIATE_PROP_FROM_SCENARIO(pedLocal_18.f_6, "Head"))
						{
							if (ENTITY::PLAY_ENTITY_ANIM(eLocal_78, "enter_head", "script_re@murder_campfire@head_note", 1000f, false, false, false, entityAnimCurrentTime, 32768))
							{
							}
						}
					}
				}
			}
			break;
	
		case 3:
			if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
				PAD::ENABLE_CONTROL_ACTION(CAMERA_CONTROL, joaat("INPUT_LOOK_LR"), true);
				PAD::ENABLE_CONTROL_ACTION(CAMERA_CONTROL, joaat("INPUT_LOOK_UD"), true);
				PAD::ENABLE_CONTROL_ACTION(CAMERA_CONTROL, joaat("INPUT_LOOK_UP_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(CAMERA_CONTROL, joaat("INPUT_LOOK_DOWN_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(CAMERA_CONTROL, joaat("INPUT_LOOK_LEFT_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(CAMERA_CONTROL, joaat("INPUT_LOOK_RIGHT_ONLY"), true);
			
				if (ENTITY::DOES_ENTITY_EXIST(eLocal_78))
				{
					entityCoords = { ENTITY::GET_ENTITY_COORDS(eLocal_78, true, false) };
					uLocal_52 = { entityCoords };
					uLocal_52.f_7 = 0;
					IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_33, &uLocal_52);
				}
			}
		
			if (func_15())
				func_16();
		
			if (ENTITY::DOES_ENTITY_EXIST(eLocal_78))
			{
				if (func_20() == 1 || func_20() == 9)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(eLocal_78, "script_re@murder_campfire@head_note", "enter_head", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(eLocal_78, "script_re@murder_campfire@head_note", "enter_head") > 0.49f || ENTITY::IS_ENTITY_PLAYING_ANIM(eLocal_78, "script_re@murder_campfire@knife_note", "enter_head", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(eLocal_78, "script_re@murder_campfire@head_note", "enter_head") > 0.9f)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(eLocal_78, "script_re@murder_campfire@head_note", "enter_head", 1))
							ENTITY::STOP_ENTITY_ANIM(eLocal_78, "enter_head", "script_re@murder_campfire@head_note", -1000f);
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(eLocal_78, "script_re@murder_campfire@knife_note", "enter_head", 1))
							ENTITY::STOP_ENTITY_ANIM(eLocal_78, "enter_head", "script_re@murder_campfire@knife_note", -1000f);
					
						ENTITY::FREEZE_ENTITY_POSITION(eLocal_78, false);
						PHYSICS::ACTIVATE_PHYSICS(eLocal_78);
						ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&eLocal_78);
					}
				}
			}
		
			if (!PED::IS_PED_USING_ANY_SCENARIO(pedLocal_18) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("doc_treasure_map")) == 0)
				bLocal_13 = false;
			break;
	}

	return;
}

void func_7() // Position - 0x4F4 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_8() // Position - 0x4FC Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x508 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_21(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x530 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_22(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x558 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_23(&eventData);
	}

	return;
}

BOOL func_12() // Position - 0x580 Hash - 0xBA0B7E94 ^0x198E4494
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
		return true;

	return false;
}

void func_13(int iParam0) // Position - 0x5A4 Hash - 0xF11D5382 ^0xBED1A44C
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

int func_14() // Position - 0x5E7 Hash - 0x345AD124 ^0x569C858E
{
	return pedLocal_18.f_33;
}

BOOL func_15() // Position - 0x5F3 Hash - 0x345AD124 ^0x70029C03
{
	return pedLocal_18.f_32;
}

void func_16() // Position - 0x5FF Hash - 0xC4FD9D65 ^0x5008F3F8
{
	pedLocal_18.f_32 = 0;
	return;
}

void func_17(int iParam0) // Position - 0x60C Hash - 0x7B99D1DD ^0xF786A270
{
	pedLocal_18.f_33 = iParam0;
	func_24();
	return;
}

void func_18() // Position - 0x61E Hash - 0xF20592E9 ^0xB4D8CBBF
{
	if (pedLocal_18.f_30 == joaat("PROP_PLAYER_RE_MURDER_CAMP_TREE_NOTE"))
		TEXT_LABEL_ASSIGN_STRING(&(pedLocal_18.f_7), "script_re@murder_campfire@knife_note", 64);
	else if (pedLocal_18.f_30 == joaat("PROP_PLAYER_RE_MURDER_CAMP_ROCK_NOTE"))
		TEXT_LABEL_ASSIGN_STRING(&(pedLocal_18.f_7), "script_re@murder_campfire@head_note", 64);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(pedLocal_18.f_7)))
		STREAMING::REQUEST_ANIM_DICT(&(pedLocal_18.f_7));

	return;
}

BOOL func_19() // Position - 0x667 Hash - 0x6AEB7373 ^0xACEFE34F
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(pedLocal_18.f_7)))
		if (STREAMING::HAS_ANIM_DICT_LOADED(&(pedLocal_18.f_7)))
			return true;
	else
		return true;

	return false;
}

int func_20() // Position - 0x695 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1896646.f_41;
}

void func_21(var uParam0) // Position - 0x6A3 Hash - 0x880617B1 ^0x9C6E4E0B
{
	pedLocal_18 = uParam0->f_1;
	return;
}

void func_22(var uParam0) // Position - 0x6B1 Hash - 0x2B99452 ^0xB492A580
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("doc_treasure_map")) == 0)
		bLocal_13 = false;

	return;
}

void func_23(var uParam0) // Position - 0x6C9 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_24() // Position - 0x6D1 Hash - 0xF9E49D28 ^0x795AF55B
{
	pedLocal_18.f_32 = 1;
	return;
}

