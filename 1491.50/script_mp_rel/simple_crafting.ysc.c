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
	int iLocal_19 = 0;
	BOOL bLocal_20 = 0;
	var uLocal_21 = 192;
	var uLocal_22 = 9;
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
	var uLocal_45 = -1;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = -1;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 4;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 4;
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
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xA9007095 ^0x7D6D0A96
{
	BOOL flag;
	BOOL flag2;

	fLocal_14 = 1f;
	fLocal_15 = 1f;

	if (func_1(0, false, true) && !func_2() || func_3(false) || func_4(false, false))
	{
		Global_1913634.f_1582 = 0;
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	flag = uScriptParam_0.f_3;

	if (uScriptParam_0.f_4)
	{
		uLocal_21.f_12 = 0;
		func_5(&uLocal_21, 2);
	}
	else
	{
		uLocal_21.f_12 = -1640690034;
		func_6(&uLocal_21, 2);
	}

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		iLocal_19 = 3;

	while (true)
	{
		if (func_7())
			iLocal_19 = 3;
	
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HITCH_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_EXIT"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_JUMP"), false);
	
		switch (iLocal_19)
		{
			case 0:
				if (uLocal_21.f_12 == -1640690034)
					NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(2);
			
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
				func_5(&uLocal_21, 8);
				func_5(&uLocal_21, 16);
				func_8(&uLocal_21, 2);
				iLocal_19 = 2;
				break;
		
			case 1:
				if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("showMenu")) && !func_9(Global_33))
				{
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
				
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
					{
						if (func_9(Global_33))
						{
							WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, false);
							bLocal_20 = true;
							iLocal_19 = 2;
						}
						else if (!PED::IS_PED_ON_MOUNT(Global_33) && PED::IS_PED_ON_FOOT(Global_33))
						{
							if (flag)
							{
								iLocal_19 = 3;
							}
							else if (!func_10(Global_33, SCRIPT_TASK_START_SCENARIO_IN_PLACE))
							{
								flag2 = true;
							
								if (func_11(0) || func_11(1))
									flag2 = false;
							
								if (flag2)
									PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("DYNAMIC_KNEEL_QUICK_ENTER"), 2f);
							
								if (PED::IS_PED_MALE(Global_33))
									TASK::TASK_START_SCENARIO_IN_PLACE_HASH(Global_33, joaat("world_player_dynamic_kneel"), 0, true, joaat("WORLD_PLAYER_DYNAMIC_KNEEL_ARTHUR"), -1082130432, false);
								else
									TASK::TASK_START_SCENARIO_IN_PLACE_HASH(Global_33, joaat("world_player_dynamic_kneel"), 0, true, joaat("WORLD_PLAYER_DYNAMIC_KNEEL_MP_FEMALE_A"), -1082130432, false);
							}
						}
					}
				}
				else
				{
					bLocal_20 = true;
					iLocal_19 = 2;
				}
				break;
		
			case 2:
				func_12(&uLocal_21, 0);
			
				if (func_13(&uLocal_21) == 0)
					iLocal_19 = 3;
				else if (func_13(&uLocal_21) == 12)
					if (!bLocal_20 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("showMenu")) && !func_9(Global_33))
						iLocal_19 = 1;
					else
						bLocal_20 = true;
				break;
		
			case 3:
				func_14(&uLocal_21, false, true);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL func_1(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2BF Hash - 0xB13E2226 ^0x3E0E04BA
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_15())
			return true;
	
		if (Global_1072759.f_3 && !Global_1572887.f_10)
			if (Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1900460.f_67;
		else
			return Global_1900460.f_68;
	}

	if (iParam0 == 0 && func_17(func_16(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_18(func_16(0)))
	{
		case -1:
			return false;
	
		case 2:
			return iParam0 & 1 == 0;
	
		case 3:
			return iParam0 & 16 == 0;
	
		case 4:
			return iParam0 & 32 == 0;
	
		case 5:
			return iParam0 & 2 == 0;
	
		case 7:
			return iParam0 & 1024 == 0;
	
		default:
		
	}

	return false;
}

BOOL func_2() // Position - 0x435 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1913634.f_1578;
}

BOOL func_3(BOOL bParam0) // Position - 0x444 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_4(BOOL bParam0, BOOL bParam1) // Position - 0x474 Hash - 0x8CDC02F2 ^0xDB4E8541
{
	int i;

	if (Global_1572887.f_13)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
		
			case 1:
				return true;
		
			case 2:
				if (!bParam0)
					return true;
				break;
		
			case 3:
				return true;
		
			case 4:
				return true;
		
			default:
				return true;
		}
	}

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return true;
	}

	return false;
}

void func_5(var uParam0, int iParam1) // Position - 0x554 Hash - 0xF55E891F ^0xF55E891F
{
	func_19(uParam0, iParam1);
	return;
}

void func_6(var uParam0, int iParam1) // Position - 0x564 Hash - 0xF55E891F ^0xF55E891F
{
	func_20(uParam0, iParam1);
	return;
}

BOOL func_7() // Position - 0x574 Hash - 0xCAAC23FC ^0xCAAC23FC
{
	if (func_4(false, false))
		return true;

	if (func_3(false))
		return true;

	if (func_1(0, false, true) && !func_2())
		return true;

	if (func_21())
		return true;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		return true;

	if (PED::IS_PED_HOGTIED(PLAYER::PLAYER_PED_ID()))
		return true;

	if (PED::IS_PED_LASSOED(PLAYER::PLAYER_PED_ID()))
		return true;

	if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
		return true;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		return true;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(PLAYER::PLAYER_PED_ID()))
		return true;

	if (MISC::GET_FRAME_COUNT() % 10 == 0)
		if (func_22())
			return true;

	if (func_23())
		return true;

	if (bLocal_20)
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
			if (!func_9(PLAYER::PLAYER_PED_ID()))
				return true;
		else if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(PLAYER::PLAYER_PED_ID(), 1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("showMenu")))
			return true;

	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		return true;

	return false;
}

void func_8(var uParam0, int iParam1) // Position - 0x68A Hash - 0x78EEA7AE ^0xF814F543
{
	if (uParam0->f_11 != iParam1)
	{
		uParam0->f_11 = iParam1;
		func_24(uParam0);
	}

	return;
}

BOOL func_9(Ped pedParam0) // Position - 0x6A7 Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_10(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x6C4 Hash - 0xBA023B92 ^0x16E0B707
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

int func_11(int iParam0) // Position - 0x71D Hash - 0xE53F5651 ^0xA0757BD
{
	Hash weaponHash;

	weaponHash = 0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &weaponHash, true, iParam0, false))
		if (func_25(weaponHash, 0))
			if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) || func_26(weaponHash))
				return 1;

	return 0;
}

void func_12(var uParam0, int iParam1) // Position - 0x75C Hash - 0x89621294 ^0xD9508B3B
{
	var unk;
	Hash hash;
	int eventData;
	Hash activeDynamicScenario2;
	int num;
	BOOL flag;
	Hash activeDynamicScenario;
	AnimScene animScene;
	AnimScene animScene2;
	AnimScene animScene3;
	Hash activeDynamicScenario2;
	Player player;

	unk = 1;
	unk[0] = uParam0->f_1[1];

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940199.f_6)
		func_14(uParam0, false, true);

	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_33, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_33, 0, 1);

	if (func_27() != -1 && func_28())
	{
		if (func_29(uParam0->f_1[0], false))
		{
			func_30(uParam0);
			func_24(uParam0);
		}
	
		return;
	}

	if (func_31(uParam0, 256))
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_CRAFTING_SEQUENCE"));

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();

	switch (func_13(uParam0))
	{
		case 0:
			if (func_37())
				func_38(false);
		
			if (func_32(uParam0))
			{
				func_30(uParam0);
				func_35(uParam0);
			}
			break;
	
		case 1:
			if (func_37())
				func_38(false);
		
			if (func_32(uParam0))
			{
				if (func_68(uParam0->f_1[0]))
					func_54(uParam0->f_1[0], false, true, true);
			
				func_35(uParam0);
			}
			break;
	
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_32(uParam0))
			{
				func_33(uParam0);
				func_34(uParam0);
				func_35(uParam0);
			}
		
			if (func_36(uParam0))
				func_8(uParam0, 3);
			break;
	
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_27() == 0 && CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
			{
				func_30(uParam0);
				return;
			}
		
			if (func_32(uParam0))
			{
				func_30(uParam0);
				func_35(uParam0);
			
				if (func_37())
					func_38(false);
			}
		
			if (func_31(uParam0, 16) || func_39(uParam0->f_1[0], true) || func_31(uParam0, 32))
				func_40(uParam0);
			break;
	
		case 4:
			if (!func_31(uParam0, 256))
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_41(uParam0))
			{
				func_5(uParam0, 1024);
				func_8(uParam0, 5);
			}
			break;
	
		case 5:
			if (!func_31(uParam0, 256))
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_42(uParam0))
				func_8(uParam0, 6);
			break;
	
		case 6:
			if (!func_31(uParam0, 256))
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_43(uParam0))
				func_8(uParam0, 7);
			break;
	
		case 7:
			if (!func_31(uParam0, 256))
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_32(uParam0))
			{
				func_44(uParam0);
				func_35(uParam0);
				return;
			}
		
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("pause_menu")) || UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("pause_menu")))
				return;
		
			if (func_45(uParam0, false))
			{
				if (func_46(uParam0, func_31(uParam0, 65536)) || func_31(uParam0, 2) || func_31(uParam0, 65536) && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("crafting")))
				{
					func_6(uParam0, 65536);
					func_8(uParam0, 8);
				}
				else if (func_31(uParam0, 4))
				{
					func_8(uParam0, 1);
				}
				else
				{
					func_8(uParam0, 0);
				}
			}
			break;
	
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("crafting")))
			{
				if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(joaat("crafting")))
				{
					Global_1913634.f_1580 = 0;
					func_8(uParam0, 10);
				}
			}
			break;
	
		case 9:
			if (!func_31(uParam0, 256))
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("pause_menu")) || UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("pause_menu")))
				return;
		
			if (func_32(uParam0))
			{
				func_44(uParam0);
				func_35(uParam0);
				return;
			}
		
			if (func_45(uParam0, true))
				func_8(uParam0, 10);
			break;
	
		case 10:
			func_48(false);
		
			if (func_32(uParam0))
			{
				func_49(uParam0);
				func_35(uParam0);
			}
		
			if (func_50(uParam0) || func_51(uParam0))
				return;
		
			if (Global_1913634.f_1580)
			{
				Global_1913634.f_1580 = 0;
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				func_52(uParam0);
				uParam0->f_62 = 0;
				uParam0->f_63 = 0;
				func_53(uParam0, 0, 0);
				func_54(uParam0->f_1[5], false, true, true);
				func_8(uParam0, 9);
			}
			else if (func_55(uParam0->f_1[2], true) || !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("crafting")))
			{
				if (func_31(uParam0, 16))
				{
					func_8(uParam0, 18);
				}
				else
				{
					func_56(uParam0, false);
					func_57("Exit", "SSCRFT_Sounds", true);
				
					if (func_31(uParam0, 32))
					{
						func_6(uParam0, 32);
						func_8(uParam0, 1);
					}
					else
					{
						func_8(uParam0, 3);
					}
				}
			}
			else if (func_39(uParam0->f_1[7], true))
			{
				func_58(uParam0);
			}
			else if (func_39(uParam0->f_1[1], true))
			{
				func_59(uParam0);
			}
			else if (func_39(uParam0->f_1[3], true))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
			
				if (func_31(uParam0, 128))
					func_6(uParam0, 128);
				else
					func_5(uParam0, 128);
			
				func_52(uParam0);
				func_57("toggle_craftable_all", "SSCRFT_Sounds", true);
				uParam0->f_62 = 0;
				uParam0->f_63 = 0;
				func_53(uParam0, 0, 0);
				func_54(uParam0->f_1[5], false, true, true);
				func_8(uParam0, 9);
			}
			else if (func_60(uParam0->f_1[5], 0, true))
			{
				if (func_31(uParam0, 4096))
				{
					func_57("Nav_Left", "SSCRFT_Sounds", true);
					func_61(uParam0, false);
				}
			}
			else if (func_60(uParam0->f_1[5], 1, true))
			{
				if (func_31(uParam0, 4096))
				{
					func_57("Nav_Right", "SSCRFT_Sounds", true);
					func_61(uParam0, true);
				}
			}
			else if (func_55(uParam0->f_1[6], true))
			{
				func_57("toggle_ingredients_effects", "SSCRFT_Sounds", true);
				func_62(uParam0, true);
			}
			else if (func_39(uParam0->f_1[8], true))
			{
				func_57("toggle_craftable_all", "SSCRFT_Sounds", true);
			
				if (func_31(uParam0, 131072))
					func_6(uParam0, 131072);
				else
					func_5(uParam0, 131072);
			
				func_53(uParam0, uParam0->f_62, uParam0->f_63);
			}
			else
			{
				hash = joaat("crafting_menu");
			
				while (UIEVENTS::EVENTS_UI_IS_PENDING(hash))
				{
					if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hash, &eventData))
					{
						if (eventData == 703281244 || eventData == -722926211)
							func_63(uParam0);
						else if (eventData == -1740156697)
							func_64(uParam0, &eventData);
						else if (eventData == -1203660660)
							if (eventData.f_2 == -2127505795)
								func_59(uParam0);
					
						UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					}
				}
			}
			break;
	
		case 11:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MULTIPLAYER_INFO"), false);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_62), 1, 0, 0, 0);
			func_48(false);
			activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);
			num = func_65(uParam0->f_62, -1636519629);
		
			if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
			{
				if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1")))
				{
					PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 6f);
					PED::_ADD_SCENARIO_TRANSITION(Global_33);
				}
			
				return;
			}
		
			if (num != -715814988)
			{
				if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33) || PED::_0x2DC0E8DCBD3546E9(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1944546609))
					return;
			
				if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, joaat("KNIFE1_TRANS_KNEEL1")))
					{
						PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("KNIFE1_TRANS_KNEEL1"), 6f);
						PED::_ADD_SCENARIO_TRANSITION(Global_33);
					}
				
					return;
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, false);
				}
			
				if (num == 414472632 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_49, true, false) || num == -1136843638 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_51, true, false) || uParam0->f_70 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_70) || num == -732326901 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_53, true, false) || num == 786205940 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_52, true, false) || num == -1141771998 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_54, true, false) || num == 364689687 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_55, true, false) || num == -842117252 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_56, true, false) || num == -1610298873 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_57, true, false))
				{
					return;
				}
				else if (func_31(uParam0, 2048))
				{
					func_66(uParam0);
					func_6(uParam0, 2048);
				}
			}
			else
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_50, true, false) || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0))
				{
					return;
				}
				else if (func_31(uParam0, 2048))
				{
					func_66(uParam0);
					func_6(uParam0, 2048);
				}
			
				if (activeDynamicScenario2 != joaat("world_player_dynamic_kneel_knife") && activeDynamicScenario2 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					if (func_31(uParam0, 4))
					{
						if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33) || PED::_0x2DC0E8DCBD3546E9(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1944546609))
							return;
					
						if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, joaat("KNEEL1_TRANS_KNIFE1")))
						{
							PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("KNEEL1_TRANS_KNIFE1"), 2f);
							PED::_ADD_SCENARIO_TRANSITION(Global_33);
						}
					
						return;
					}
				}
			}
		
			if (func_32(uParam0))
			{
				func_35(uParam0);
				func_67(uParam0, false, &unk);
				func_66(uParam0);
			
				if (func_68(uParam0->f_1[1]))
					func_69(&uParam0->f_1[1], true, true);
			
				if (func_70(num))
				{
					uParam0->f_43 = 250;
					uParam0->f_1[1] = func_71("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_43, uParam0->f_43 + 1, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
					func_53(uParam0, uParam0->f_62, uParam0->f_63);
					func_72(uParam0->f_1[1], -1067771379, 0, true);
					func_73(uParam0->f_1[1], 10, true, true);
					func_73(uParam0->f_1[1], 11, true, true);
					func_54(uParam0->f_1[1], false, true, true);
				}
				else
				{
					uParam0->f_1[1] = func_71("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
					func_72(uParam0->f_1[1], -1067771379, 0, true);
					func_74(uParam0->f_1[1], true, true);
					func_73(uParam0->f_1[1], 10, true, true);
					func_73(uParam0->f_1[1], 11, true, true);
					func_54(uParam0->f_1[1], false, true, true);
				}
			
				return;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -563455375))
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
		
			if (func_70(num))
			{
				if (!func_31(uParam0, 64))
				{
					if (func_29(uParam0->f_1[1], false))
					{
						if (func_75(uParam0->f_1[1], true) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							func_5(uParam0, 64);
							func_54(uParam0->f_1[1], false, true, true);
							func_54(uParam0->f_1[4], false, true, true);
						}
					}
				}
			
				if (num == -1136843638 || num == -732326901 || num == 786205940 || num == -1141771998 || num == 364689687 || num == -842117252 || num == -1610298873)
				{
					if (uParam0->f_70 != 0)
					{
						if (uParam0->f_70 == joaat("s_cft_arrow_smallgame") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1011038463) || uParam0->f_70 != joaat("s_cft_arrow_smallgame") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2024314131))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_66))
									OBJECT::DELETE_OBJECT(&(uParam0->f_66));
								else
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_66);
						
							if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
							{
								if (func_76(uParam0->f_62, -1588156645) && num != -842117252)
								{
									uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(func_77(uParam0->f_62, false), 1, Global_34, true, 1065353216);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
								
									if (num == -1610298873)
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_78(uParam0, num), "DYNAMITE", uParam0->f_66, 0);
								}
								else
								{
									uParam0->f_66 = OBJECT::CREATE_OBJECT(uParam0->f_70, Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
								}
							
								if (num == 786205940)
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								else if (num == -1141771998 || num == -1610298873)
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								else if (num == -842117252)
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								else if (num == -1136843638 && !PED::IS_PED_MALE(Global_33))
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								else
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
						}
					}
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_66))
								OBJECT::DELETE_OBJECT(&(uParam0->f_66));
							else
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_66);
					
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
						{
							if (num == -732326901 || num == 364689687)
							{
								uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_34, true, 1065353216);
							}
							else if (num == -1141771998)
							{
								uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_tomahawk"), 1, Global_34, true, 1065353216);
							}
							else if (num == -842117252)
							{
								if (uParam0->f_62 == joaat("ammo_poisonbottle"))
									uParam0->f_66 = OBJECT::CREATE_OBJECT(400517539, Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								else
									uParam0->f_66 = OBJECT::CREATE_OBJECT(joaat("p_molotovempty01x"), Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
							}
							else if (num == -1610298873)
							{
								uParam0->f_66 = OBJECT::CREATE_OBJECT(joaat("w_stick_dynamite01"), Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
							
								if (num == -1610298873)
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_78(uParam0, num), "DYNAMITE", uParam0->f_66, 0);
							}
							else
							{
								uParam0->f_66 = OBJECT::CREATE_OBJECT(joaat("s_cft_arrow"), Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
							}
						}
					
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
					
						if (num == 786205940)
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						else if (num == -1141771998 || num == -1610298873 || num == -842117252)
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						else if (num == -1136843638 && !PED::IS_PED_MALE(Global_33))
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						else
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
					}
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1394836706))
						func_79(&(uParam0->f_66), &(uParam0->f_67));
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1471149551))
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_68))
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_68, true);
				}
				else if (num == 414472632 || num == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 966057053))
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_64, true);
				}
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -61921192))
				{
					if (func_80(false) && !func_81())
					{
						func_83(uParam0->f_62, uParam0->f_63, true, func_82(), uParam0->f_12);
						func_84(uParam0->f_62, 1, 0, true, 0);
					}
				
					if (num == -842117252)
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
							func_79(&(uParam0->f_66), &(uParam0->f_67));
				
					uParam0->f_23 = uParam0->f_23 + 1;
					uParam0->f_28 = uParam0->f_28 + 1;
				
					if (!func_85(uParam0->f_62, uParam0->f_63, false, func_82(), false) || func_86(uParam0->f_62, 1, false) || uParam0->f_23 >= uParam0->f_27)
					{
						if (!func_80(false) || func_81())
						{
							uParam0->f_24 = func_87(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
						
							if (uParam0->f_12 == 2133510819)
								func_89(func_88(joaat("MADE"), -444296448), uParam0->f_28);
						
							uParam0->f_28 = 0;
						}
					
						func_90(uParam0, num, false);
						return;
					}
				}
			
				if (!func_31(uParam0, 64))
				{
					if (!(func_29(uParam0->f_1[1], false) && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_ACCEPT"))))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("safetobreakout")))
						{
							if (!func_80(false) || func_81())
							{
								uParam0->f_24 = func_87(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
							
								if (uParam0->f_12 == 2133510819)
									func_89(func_88(joaat("MADE"), -444296448), uParam0->f_28);
							
								uParam0->f_28 = 0;
							}
						
							func_90(uParam0, num, true);
						}
					}
				}
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1290366555) && uParam0->f_23 < uParam0->f_27 - 1)
				{
					func_54(uParam0->f_1[1], true, true, true);
					func_54(uParam0->f_1[4], true, true, true);
					func_6(uParam0, 64);
				}
			
				if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(func_78(uParam0, num), "player"))
				{
					if (!func_80(false) || func_81())
					{
						uParam0->f_24 = func_87(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
					
						if (uParam0->f_12 == 2133510819)
							func_89(func_88(joaat("MADE"), -444296448), uParam0->f_28);
					
						uParam0->f_28 = 0;
					}
				
					func_90(uParam0, num, false);
				}
			}
			else if (func_91(&(uParam0->f_71), (float)uParam0->f_43 / 1000f))
			{
				if (!func_80(false) || func_81())
				{
					if (uParam0->f_24 == -1)
					{
						uParam0->f_24 = func_87(uParam0->f_62, uParam0->f_63, 1, uParam0->f_12);
					
						if (uParam0->f_12 == 2133510819)
							func_89(func_88(joaat("MADE"), -444296448), 1);
					
						if (uParam0->f_24 == -1)
							func_90(uParam0, num, false);
					}
					else
					{
						func_92(uParam0->f_24);
					}
				
					uParam0->f_24 = -1;
				}
				else
				{
					func_83(uParam0->f_62, uParam0->f_63, true, func_82(), uParam0->f_12);
					func_84(uParam0->f_62, 1, 1, true, 0);
				}
			
				uParam0->f_27 = -1;
				uParam0->f_28 = 0;
				func_79(&(uParam0->f_66), &(uParam0->f_67));
				uParam0->f_45 = 0;
				flag = true;
			
				if (!func_85(uParam0->f_62, uParam0->f_63, false, func_82(), false) || func_86(uParam0->f_62, 1, false))
					flag = false;
			
				func_90(uParam0, num, flag);
			}
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_62), 1, 0, 0, 0);
			func_48(false);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68))
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2015667492))
					func_79(&(uParam0->f_68), &(uParam0->f_69));
		
			if (!func_29(uParam0->f_1[2], false))
			{
				func_54(uParam0->f_1[2], true, true, true);
				func_74(uParam0->f_1[2], false, true);
			}
		
			if (!func_29(uParam0->f_1[4], false))
			{
				func_54(uParam0->f_1[4], true, true, true);
				func_74(uParam0->f_1[4], true, true);
			}
		
			if (func_55(uParam0->f_1[2], true))
			{
				func_30(uParam0);
				func_93(&(uParam0->f_71));
				func_8(uParam0, 14);
				return;
			}
			else if (func_94(uParam0->f_1[4], true))
			{
				func_30(uParam0);
				func_79(&(uParam0->f_66), &(uParam0->f_67));
				func_79(&(uParam0->f_64), &(uParam0->f_65));
				func_79(&(uParam0->f_68), &(uParam0->f_69));
				activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33);
			
				if (activeDynamicScenario != joaat("world_player_dynamic_kneel_knife") && activeDynamicScenario != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			
				num = func_65(uParam0->f_62, -1636519629);
				animScene = func_78(uParam0, num);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(animScene, "player", Global_33);
				func_56(uParam0, false);
				func_57("Exit", "SSCRFT_Sounds", true);
			
				if (func_31(uParam0, 4))
					func_8(uParam0, 1);
				else
					func_8(uParam0, 0);
			
				return;
			}
			else if (func_39(uParam0->f_1[1], true))
			{
				func_54(uParam0->f_1[4], false, true, true);
				func_54(uParam0->f_1[2], false, true, true);
				func_54(uParam0->f_1[1], false, true, true);
				num = func_65(uParam0->f_62, -1636519629);
				animScene2 = func_78(uParam0, num);
			
				if (animScene2 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(animScene2, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(animScene2);
				}
			
				func_93(&(uParam0->f_71));
				func_6(uParam0, 64);
				func_8(uParam0, 12);
				return;
			}
		
			if (func_95(uParam0->f_1[4], true))
			{
				if (!func_96(&(uParam0->f_71)))
					func_97(&(uParam0->f_71));
				else if (func_91(&(uParam0->f_71), 0.1f))
					func_98(uParam0->f_1[4], "CAMP_REC_QUIT", true);
			}
			else
			{
				if (func_96(&(uParam0->f_71)))
					func_93(&(uParam0->f_71));
			
				func_98(uParam0->f_1[4], "CAMP_REC_BACK", true);
			}
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_62), 1, 0, 0, 0);
			func_48(false);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68))
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2015667492))
					func_79(&(uParam0->f_68), &(uParam0->f_69));
		
			num = func_65(uParam0->f_62, -1636519629);
			animScene3 = func_78(uParam0, num);
		
			if (animScene3 == 0 || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(animScene3) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(animScene3, false) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("showMenu")))
			{
				func_79(&(uParam0->f_66), &(uParam0->f_67));
				func_79(&(uParam0->f_64), &(uParam0->f_65));
				func_79(&(uParam0->f_68), &(uParam0->f_69));
				activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33);
			
				if (activeDynamicScenario2 != joaat("world_player_dynamic_kneel_knife") && activeDynamicScenario2 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(animScene3, "player", Global_33);
			
				if (!func_51(uParam0))
					func_8(uParam0, 15);
			}
			break;
	
		case 15:
			if (!func_31(uParam0, 256))
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (!func_31(uParam0, 1024))
			{
				func_8(uParam0, 4);
				return;
			}
		
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("pause_menu")) || UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("pause_menu")))
				return;
		
			if (func_47(uParam0))
			{
				func_46(uParam0, true);
				func_8(uParam0, 8);
			}
			break;
	
		case 16:
			player = func_99();
		
			if (player == PLAYER::PLAYER_ID())
			{
				uParam0->f_24 = func_87(uParam0->f_62, uParam0->f_63, 1, uParam0->f_12);
				func_8(uParam0, 17);
			}
			else if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			{
				func_8(uParam0, 10);
			}
			else if (func_91(&(uParam0->f_71), 5f))
			{
				func_93(&(uParam0->f_71));
				func_8(uParam0, 10);
			}
			break;
	
		case 17:
			if (!func_92(uParam0->f_24) && func_100(true))
			{
				if (func_101(uParam0->f_24) != 3)
				{
					func_102(false);
				}
				else
				{
					func_103(uParam0->f_62);
					PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("STEWPOT_ACTION"), 1f);
					func_104(uParam0->f_62, 1);
					func_105(uParam0);
				
					if (func_76(uParam0->f_62, -2011345500))
						func_106(-1266356243, false, 255, 0, false);
				
					uParam0->f_26 = uParam0->f_62;
				}
			
				func_8(uParam0, 15);
			}
			else
			{
				func_107(1);
				HUD::_UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME();
				PAD::DISABLE_ALL_CONTROL_ACTIONS(FRONTEND_CONTROL);
			}
			break;
	
		case 18:
			if (func_37())
				func_38(false);
		
			if (func_32(uParam0))
				func_35(uParam0);
		
			if (func_31(uParam0, 2))
				TASK::CLEAR_PED_TASKS(Global_33, true, false);
		
			func_56(uParam0, false);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_29);
			Global_1913634.f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}

	return;
}

int func_13(var uParam0) // Position - 0x20C1 Hash - 0xD73B9827 ^0xB0CA2F10
{
	return uParam0->f_11;
}

void func_14(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x20CD Hash - 0xBD6378D ^0x3A96DB60
{
	func_30(uParam0);

	if (bParam2)
	{
		func_56(uParam0, false);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_29);
	}

	if (func_37())
		func_38(false);

	if (bParam1)
	{
		func_108(uParam0);
		return;
	}

	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_21)))
		HUD::_TEXT_BLOCK_DELETE(&(uParam0->f_21));

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_49))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_49);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_50))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_50);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_51))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_51);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_52))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_52);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_53))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_53);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_54))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_54);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_55))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_55);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_56))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_56);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_57))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_57);

	func_79(&(uParam0->f_64), &(uParam0->f_65));
	func_79(&(uParam0->f_66), &(uParam0->f_67));
	func_79(&(uParam0->f_68), &(uParam0->f_69));
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1913634.f_1576 = 0;

	if (func_31(uParam0, 2))
		TASK::CLEAR_PED_TASKS(Global_33, true, false);

	if (func_27() == -1)
	{
		func_8(uParam0, 18);
	}
	else
	{
		if (uParam0->f_11 == 11)
		{
			if (uParam0->f_24 == -1)
			{
				func_87(uParam0->f_62, uParam0->f_63, 1, uParam0->f_12);
				func_109(uParam0->f_62, uParam0->f_23);
			}
		}
	
		if (!func_80(false) || func_81())
		{
			if (uParam0->f_28 > 0 && func_25(uParam0->f_62, 0))
			{
				uParam0->f_24 = func_87(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
			
				if (uParam0->f_12 == 2133510819)
					func_89(func_88(joaat("MADE"), -444296448), uParam0->f_28);
			
				uParam0->f_28 = 0;
			}
		}
	
		uParam0->f_24 = -1;
		func_8(uParam0, 0);
	}

	return;
}

BOOL func_15() // Position - 0x22C7 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_17(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

struct<2> func_16(int iParam0) // Position - 0x231F Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_17(var uParam0, var uParam1) // Position - 0x2333 Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_110(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_111(uParam0))
		return false;

	return true;
}

int func_18(var uParam0, var uParam1) // Position - 0x2367 Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

void func_19(var uParam0, int iParam1) // Position - 0x2371 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_20(var uParam0, int iParam1) // Position - 0x2382 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_21() // Position - 0x2397 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

BOOL func_22() // Position - 0x23B3 Hash - 0x68C4D93B ^0x1CEB8A28
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_33))
		return false;

	return false;
}

BOOL func_23() // Position - 0x23DA Hash - 0xC1143497 ^0x6DF3C037
{
	int scenarioPointTypePedIsUsing;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
	{
		scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
		num = scenarioPointTypePedIsUsing;
	
		if (num != joaat("world_player_dynamic_kneel") && num != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"))
			return true;
	}

	return false;
}

void func_24(var uParam0) // Position - 0x2425 Hash - 0x7A1F391A ^0x7A1F391A
{
	func_5(uParam0, 1);
	return;
}

BOOL func_25(Hash hParam0, int iParam1) // Position - 0x2434 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_26(Hash hParam0) // Position - 0x244E Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_27() // Position - 0x245C Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_28() // Position - 0x246A Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1896762.f_352;
}

BOOL func_29(int iParam0, BOOL bParam1) // Position - 0x2479 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_68(iParam0))
		return false;

	return !func_112(iParam0, 4);
}

void func_30(var uParam0) // Position - 0x249E Hash - 0xFABF32AB ^0x5BDBDAC7
{
	int i;

	for (i = 0; i < uParam0->f_1; i = i + 1)
	{
		func_69(&uParam0->f_1[i], true, true);
	}

	return;
}

BOOL func_31(var uParam0, int iParam1) // Position - 0x24C9 Hash - 0x320397CF ^0x320397CF
{
	return func_113(*uParam0, iParam1);
}

BOOL func_32(var uParam0) // Position - 0x24DA Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_31(uParam0, 1);
}

void func_33(var uParam0) // Position - 0x24E9 Hash - 0xACFE8459 ^0x361D6163
{
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_21), "CAMP", 8);
	return;
}

void func_34(var uParam0) // Position - 0x24FA Hash - 0x8D0FB90A ^0x7082BAB4
{
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_21)))
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_21));

	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);

	if (func_31(uParam0, 2))
		return;

	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A");
	STREAMING::REQUEST_MODEL(joaat("s_ammo_rifle"), false);
	STREAMING::REQUEST_MODEL(joaat("s_ammo_repeater"), false);
	STREAMING::REQUEST_MODEL(joaat("s_ammo_45mm"), false);
	STREAMING::REQUEST_MODEL(joaat("s_ammo_9mm"), false);
	STREAMING::REQUEST_MODEL(joaat("s_ammo_shotgun"), false);
	STREAMING::REQUEST_MODEL(joaat("s_cft_arrow"), false);
	STREAMING::REQUEST_MODEL(joaat("w_melee_tomahawk01"), false);
	STREAMING::REQUEST_MODEL(joaat("w_melee_knife05"), false);
	STREAMING::REQUEST_MODEL(joaat("p_cs_rag01x"), false);
	STREAMING::REQUEST_MODEL(joaat("s_cft_molotov01"), false);
	STREAMING::REQUEST_MODEL(joaat("s_cft_molotov02"), false);
	STREAMING::REQUEST_MODEL(joaat("p_molotovempty01x"), false);
	STREAMING::REQUEST_MODEL(joaat("w_stick_dynamite01"), false);
	STREAMING::REQUEST_MODEL(400517539, false);
	STREAMING::REQUEST_MODEL(joaat("mp006_s_cft_poisonbottle01"), false);
	func_114(uParam0);

	if (func_31(uParam0, 4))
	{
		STREAMING::REQUEST_MODEL(joaat("p_whitefishfilet01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_redfishfilet01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_whitefleshymeat01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_redbirdbreast01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_redefleshymeat01xb"), false);
	}

	return;
}

void func_35(var uParam0) // Position - 0x2611 Hash - 0x7A1F391A ^0x7A1F391A
{
	func_6(uParam0, 1);
	return;
}

BOOL func_36(var uParam0) // Position - 0x2620 Hash - 0xC1B28E7B ^0xEFA2D955
{
	if (func_115(&(uParam0->f_21)))
		if (!HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_21)))
			return false;

	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
		return false;

	if (func_31(uParam0, 2))
		return true;

	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
		return false;

	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A"))
		return false;

	if (!func_116(uParam0, &(uParam0->f_49)))
		return false;

	if (!func_116(uParam0, &(uParam0->f_50)))
		return false;

	if (!func_116(uParam0, &(uParam0->f_51)))
		return false;

	if (!func_116(uParam0, &(uParam0->f_52)))
		return false;

	if (!func_116(uParam0, &(uParam0->f_53)))
		return false;

	if (!func_116(uParam0, &(uParam0->f_54)))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_ammo_rifle")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_ammo_repeater")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_ammo_45mm")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_ammo_9mm")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_cft_arrow")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("w_melee_tomahawk01")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("w_melee_knife05")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_ammo_shotgun")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_molotovempty01x")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_cft_molotov01")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_cft_molotov02")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("w_stick_dynamite01")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(400517539))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("mp006_s_cft_poisonbottle01")))
		return false;

	if (func_31(uParam0, 4))
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("p_whitefishfilet01xb")))
			return false;
	
		if (!STREAMING::HAS_MODEL_LOADED(joaat("p_redfishfilet01xb")))
			return false;
	
		if (!STREAMING::HAS_MODEL_LOADED(joaat("p_whitefleshymeat01xb")))
			return false;
	
		if (!STREAMING::HAS_MODEL_LOADED(joaat("p_redbirdbreast01xb")))
			return false;
	
		if (!STREAMING::HAS_MODEL_LOADED(joaat("p_redefleshymeat01xb")))
			return false;
	}

	return true;
}

BOOL func_37() // Position - 0x2838 Hash - 0xDC457EBB ^0x10738F70
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");

	return false;
}

void func_38(BOOL bParam0) // Position - 0x285F Hash - 0x941E7E7E ^0x394DAC05
{
	if (bParam0)
	{
	}

	Global_1913634.f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_33, "player_crafting_active", bParam0);
	return;
}

BOOL func_39(int iParam0, BOOL bParam1) // Position - 0x2886 Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_68(iParam0))
		return false;

	num = func_117(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951910[num /*23*/].f_3);
}

void func_40(var uParam0) // Position - 0x28B9 Hash - 0xD45265C9 ^0xD45265C9
{
	func_38(true);
	func_8(uParam0, 4);
	return;
}

BOOL func_41(var uParam0) // Position - 0x28CD Hash - 0x17468415 ^0x64173575
{
	Player gangLeader;

	uParam0->f_75 = Global_1913634.f_1584;
	uParam0->f_74 = Global_1913634.f_1585;

	if (func_31(uParam0, 2))
	{
		Global_1913634.f_1576 = 0;
		uParam0->f_45 = 0;
		gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913634[0 /*9*/].f_1))
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913634[0 /*9*/].f_1);
	
		uParam0->f_25 = func_118(gangLeader);
		uParam0->f_26 = func_119(gangLeader);
		func_120(uParam0, uParam0->f_25, 1472825031);
		func_120(uParam0, -1171462349, 1472825031);
		func_120(uParam0, 1689071181, 1472825031);
		func_120(uParam0, -1612693182, 1472825031);
		func_120(uParam0, 1856073229, 1472825031);
		return true;
	}

	if (uParam0->f_44 == 0)
	{
		Global_1913634.f_1576 = 0;
		uParam0->f_45 = 0;
		func_121(uParam0, 600942249);
		uParam0->f_44 = uParam0->f_44 + 1;
		return false;
	}
	else if (uParam0->f_44 == 1)
	{
		func_121(uParam0, -257768755);
		uParam0->f_44 = uParam0->f_44 + 1;
		return false;
	}
	else
	{
		func_121(uParam0, -214678071);
		uParam0->f_44 = 0;
	}

	uParam0->f_45 = 0;
	return true;
}

BOOL func_42(var uParam0) // Position - 0x2A02 Hash - 0x96BFA256 ^0x46AC0B50
{
	int i;
	var unk;

	uParam0->f_47 = 0;
	uParam0->f_48 = 0;

	if (func_31(uParam0, 2) || func_31(uParam0, 65536) && DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_29))
		return true;

	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_29, "filter", func_31(uParam0, 2) ? joaat("recipes") : func_122(uParam0->f_42));

	if (func_31(uParam0, 2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterCount", 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterIndex", 0);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_29, "headerText", -1710561039);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterCount", 5 + 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterIndex", uParam0->f_42);
	}

	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_29, "tipText", "");
	uParam0->f_41 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_29, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_29, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_29, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowIngredients", true);

	for (i = 0; i < 4; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ingredient", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_124(&uParam0->f_31[i], &unk, uParam0);
		TEXT_LABEL_ASSIGN_STRING(&unk, "tip", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		uParam0->f_36[i] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_29, &unk);
		TEXT_LABEL_ASSIGN_STRING(&unk, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_36[i], &unk, "");
		TEXT_LABEL_ASSIGN_STRING(&unk, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_36[i], &unk, 0);
	}

	return true;
}

BOOL func_43(var uParam0) // Position - 0x2BF6 Hash - 0xD901A9F7 ^0xCC3AE599
{
	Hash i;
	int num;
	BOOL flag;

	flag = func_82();

	for (i = uParam0->f_45; i <= Global_1913634.f_1576 - 1; i = i + 1)
	{
		if (func_25(Global_1913634[i /*9*/].f_6, 0))
		{
			func_125(uParam0, false, i, flag, true, false);
		
			if (num >= 10)
			{
				uParam0->f_45 = i + 1;
				return false;
			}
		
			num = num + 1;
		}
	}

	uParam0->f_45 = 0;

	if (uParam0->f_48 == 0)
		func_6(uParam0, 128);

	uParam0->f_46 = 0;
	return true;
}

void func_44(var uParam0) // Position - 0x2C74 Hash - 0x7B631005 ^0xD1298ABE
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_30))
		uParam0->f_30 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_29, "recipes");
	else
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_30);

	uParam0->f_61 = 600942249;
	uParam0->f_60 = 0;
	uParam0->f_59 = 0;
	return;
}

BOOL func_45(var uParam0, BOOL bParam1) // Position - 0x2CB6 Hash - 0x3DFFDEF2 ^0x43709C1C
{
	Hash i;
	int num;
	BOOL flag;
	BOOL flag2;

	flag = func_82();

	for (i = uParam0->f_45; i <= Global_1913634.f_1576 - 1; i = i + 1)
	{
		if (func_31(uParam0, 128) && Global_1913634[i /*9*/].f_2 || !func_31(uParam0, 128))
		{
			if (Global_1913634.f_1585 != 0)
			{
				uParam0->f_74 = Global_1913634.f_1585;
				flag2 = func_76(Global_1913634[i /*9*/].f_6, Global_1913634.f_1585);
			
				if (func_31(uParam0, 16384) == flag2)
				{
				}
				else
				{
					func_125(uParam0, true, i, flag, false, bParam1);
				
					if (num >= 50)
					{
						uParam0->f_45 = i + 1;
						return false;
					}
				
					num = num + 1;
				}
			}
		
			func_125(uParam0, true, i, flag, false, bParam1);
		
			if (num >= 50)
			{
				uParam0->f_45 = i + 1;
				return false;
			}
		
			num = num + 1;
		}
	}

	uParam0->f_45 = 0;

	if (!func_31(uParam0, 16384) && Global_1913634.f_1585 != 0)
	{
		func_5(uParam0, 16384);
		return false;
	}

	uParam0->f_46 = 0;
	func_6(uParam0, 16384);
	return true;
}

BOOL func_46(var uParam0, BOOL bParam1) // Position - 0x2DAB Hash - 0xCE3BFA7B ^0xD0E044D5
{
	int num;

	func_5(uParam0, 256);

	if (bParam1 && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("crafting")))
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("crafting"), 1014850361))
			return true;
		else
			return false;
	}
	else
	{
		num = UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("crafting"));
	
		if (num == 0)
			return true;
	}

	return false;
}

BOOL func_47(var uParam0) // Position - 0x2E04 Hash - 0x1B1EEE6C ^0xCDB945B6
{
	int i;
	int num;
	BOOL flag;

	flag = func_82();

	for (i = uParam0->f_45; i <= Global_1913634.f_1576 - 1; i = i + 1)
	{
		func_126(uParam0, i, flag, 0, true, false, true);
	
		if (num >= 50)
		{
			uParam0->f_45 = i + 1;
			return false;
		}
	
		num = num + 1;
	}

	func_6(uParam0, 512);
	uParam0->f_45 = 0;
	return true;
}

void func_48(BOOL bParam0) // Position - 0x2E65 Hash - 0xAD6A0552 ^0x4C19ACDB
{
	Ped ped;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_TOGGLE_HOLSTER"), false);
	ped = func_127(Global_33);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(ped, 1f);

	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_UP"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_LS"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_STICK_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_STICK_UP"), false);
	}

	return;
}

void func_49(var uParam0) // Position - 0x2F47 Hash - 0x65499869 ^0xFA24BC44
{
	int num;

	func_30(uParam0);
	func_128(uParam0, true);
	uParam0->f_1[2] = func_71("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
	func_54(uParam0->f_1[2], true, true, true);
	uParam0->f_1[1] = func_71("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);

	if (!func_31(uParam0, 2))
	{
		if (func_25(uParam0->f_60, 0))
		{
			uParam0->f_62 = uParam0->f_60;
			uParam0->f_63 = uParam0->f_61;
			func_129(uParam0, &(uParam0->f_59));
		}
		else
		{
			uParam0->f_62 = 0;
		}
	
		if (func_25(uParam0->f_60, 0))
			if (func_130(uParam0->f_60))
				func_98(uParam0->f_1[1], "CAMP_REC_COOK", true);
			else if (func_65(uParam0->f_60, -1636519629) == -701492487)
				func_98(uParam0->f_1[1], "CAMP_REC_BREW", true);
			else
				func_98(uParam0->f_1[1], "CAMP_REC_MAKE", true);
	
		uParam0->f_1[3] = func_71(func_131(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		uParam0->f_1[7] = func_71("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
	}

	uParam0->f_1[5] = func_132("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
	func_133(uParam0->f_1[5], joaat("INPUT_GAME_MENU_LEFT"));
	func_133(uParam0->f_1[5], joaat("INPUT_GAME_MENU_RIGHT"));

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_58))
		num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iNumCostVariants");

	if (num > 1 && func_25(uParam0->f_62, 0))
		func_54(uParam0->f_1[5], true, true, true);
	else
		func_54(uParam0->f_1[5], false, true, true);

	uParam0->f_1[6] = func_71("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 2, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);

	if (!func_31(uParam0, 32768))
		func_98(uParam0->f_1[6], "INFO", true);
	else
		func_98(uParam0->f_1[6], "INGREDIENTS", true);

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_30) == 0)
	{
		func_52(uParam0);
		func_54(uParam0->f_1[6], false, true, true);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_NO_REC_TIP"));
	}

	func_53(uParam0, uParam0->f_62, uParam0->f_63);
	return;
}

BOOL func_50(var uParam0) // Position - 0x31D9 Hash - 0x8F324979 ^0xAAE5528D
{
	Player gangLeader;

	if (!func_31(uParam0, 2))
		return false;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (uParam0->f_26 != func_119(gangLeader))
	{
		uParam0->f_26 = func_119(gangLeader);
		func_8(uParam0, 15);
		return true;
	}

	if (uParam0->f_25 != func_118(gangLeader))
	{
		func_8(uParam0, 4);
		return true;
	}

	return false;
}

BOOL func_51(var uParam0) // Position - 0x323A Hash - 0xBF68E3F2 ^0x6D27E536
{
	if (Global_1913634.f_1584 != uParam0->f_75 || Global_1913634.f_1585 != uParam0->f_74)
	{
		uParam0->f_75 = Global_1913634.f_1584;
		uParam0->f_74 = Global_1913634.f_1585;
		func_5(uParam0, 65536);
		func_8(uParam0, 4);
		return 1;
	}

	return 0;
}

void func_52(var uParam0) // Position - 0x328F Hash - 0x4B96053 ^0x33C370FB
{
	int i;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_41);

	for (i = 0; i < 4; i = i + 1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_31[i], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_31[i], "inUse", false);
	}

	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "variantVisible", false);
	return;
}

void func_53(var uParam0, Hash hParam1, Hash hParam2) // Position - 0x32F0 Hash - 0xEB524898 ^0xCF253B2A
{
	var unk;
	var unk2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Entity entity;
	int num;
	int num2;
	int num3;

	if (!func_25(hParam1, 0))
	{
		if (func_68(uParam0->f_1[1]))
			func_54(uParam0->f_1[1], false, true, true);
	
		return;
	}

	flag = func_82();
	flag2 = true;
	flag3 = false;

	if (!Global_1913634.f_1579 && func_134(hParam1, hParam2, true))
	{
		flag3 = true;
		flag2 = false;
	}
	else if (!func_135(hParam1, hParam2, &unk2, &unk, &entity, false, flag, false) || func_92(uParam0->f_24))
	{
		flag2 = false;
	}
	else if (func_31(uParam0, 2) && !func_136(hParam1))
	{
		flag2 = false;
	}

	if (flag2)
	{
		if (hParam1 != joaat("consumable_coffee") && func_86(hParam1, 1, false) || !func_31(uParam0, 4) && func_31(uParam0, 8192) || hParam2 == -214678071 || hParam2 == joaat("cost_crafting_grill"))
		{
			flag2 = false;
		}
		else if (!func_137(2) && func_65(hParam1, -1636519629) == -701492487)
		{
			flag2 = false;
		}
		else if (uParam0->f_27 == -1)
		{
			num = func_138(hParam1, false, false, false);
			num2 = func_139(hParam1, false);
			num3 = func_140(hParam1, hParam2, flag, false);
		
			if (num2 == -1)
				num2 = num3;
			else
				num2 = num2 - num;
		
			uParam0->f_27 = func_141(num2, num3);
		}
	}

	if (func_142(uParam0, hParam1) && uParam0->f_27 > 1)
		if (!func_68(uParam0->f_1[8]))
			uParam0->f_1[8] = func_71("CAMP_REC_BATCH", joaat("INPUT_GAME_MENU_LS"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
	else if (func_68(uParam0->f_1[8]))
		func_69(&uParam0->f_1[8], true, true);

	if (func_68(uParam0->f_1[1]))
	{
		if (func_31(uParam0, 2))
			func_98(uParam0->f_1[1], "DONATE_ING", true);
		else if (func_130(hParam1))
			if (func_31(uParam0, 131072) && uParam0->f_27 > 1)
				func_98(uParam0->f_1[1], MISC::VAR_STRING(2, "CAMP_REC_COOK_MLT", func_141(uParam0->f_27, 3)), true);
			else
				func_98(uParam0->f_1[1], "CAMP_REC_COOK", true);
		else if (func_65(hParam1, -1636519629) == -701492487)
			func_98(uParam0->f_1[1], "CAMP_REC_BREW", true);
		else
			func_98(uParam0->f_1[1], "CAMP_REC_MAKE", true);
	
		func_54(uParam0->f_1[1], flag2, true, true);
	}

	func_143(hParam1, hParam2, uParam0, entity, flag3);

	if (func_68(uParam0->f_1[6]))
		func_54(uParam0->f_1[6], !flag3, true, true);

	func_144(uParam0);
	return;
}

void func_54(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x35C5 Hash - 0x90451281 ^0x90451281
{
	int num;

	if (bParam2 && !func_68(iParam0))
		return;

	num = func_117(iParam0);

	if (bParam1)
	{
		func_145(iParam0, 4);
	
		if (bParam3)
			func_146(num, true);
	
		func_147(num, true);
	}
	else
	{
		func_148(iParam0, 4);
		func_147(num, false);
	}

	return;
}

BOOL func_55(int iParam0, BOOL bParam1) // Position - 0x3619 Hash - 0xAAB142C4 ^0x152C664A
{
	int num;

	if (bParam1 && !func_68(iParam0))
		return false;

	num = func_117(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_RELEASED(Global_1951910[num /*23*/].f_3);
}

void func_56(var uParam0, BOOL bParam1) // Position - 0x364C Hash - 0x85722DF4 ^0xE7F8C758
{
	if (bParam1)
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("crafting"), 1383188602))
		{
		}
		else
		{
			UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("crafting"));
		}
	}
	else
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("crafting"));
	}

	func_6(uParam0, 256);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return;
}

void func_57(char* sParam0, char* sParam1, BOOL bParam2) // Position - 0x368F Hash - 0xC649C280 ^0xBF0E7B5A
{
	int soundId;

	soundId = AUDIO::GET_SOUND_ID();

	if (soundId != -1)
	{
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(soundId, sParam0, sParam1, bParam2);
		Global_1958642[Global_1958642.f_25] = soundId;
		Global_1958642.f_25 = (Global_1958642.f_25 + 1) % 24;
	}

	return;
}

void func_58(var uParam0) // Position - 0x36CE Hash - 0xC3940CF9 ^0x36B231BB
{
	int num;
	var unk;
	int num2;
	int i;
	Hash hash;
	const char* str;
	int num3;
	BOOL flag;
	Hash icon;
	const char* str2;

	if (func_25(uParam0->f_62, 0))
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(7, uParam0->f_62))
			return;
	
		UILOG::_UILOG_ADD_ENTRY_HASH(7, uParam0->f_62, Global_34, uParam0->f_62, -2136842124, 0);
		unk = 15;
		func_149(uParam0->f_62, uParam0->f_63, &unk, &num, true, false);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, uParam0->f_62, 0, "CAMP_RECIPE_LOG_ALL_OBJ", false, true, false);
	
		for (i = 0; i < num; i = i + 1)
		{
			if (i >= 4)
				break;
		
			hash = unk[i /*2*/];
		
			if (func_25(hash, 0))
			{
				num3 = func_138(hash, false, false, false);
				str = MISC::VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", num3, unk[i /*2*/].f_1, MISC::VAR_STRING(0, hash));
				flag = func_150(hash, unk[i /*2*/].f_1);
			
				if (flag)
					num2 = num2 + 1;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, uParam0->f_62, hash, str, flag, true, true);
			}
		}
	
		if (func_151(uParam0->f_62, &icon, joaat("Inventory"), 0, 0, 0))
		{
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(7, uParam0->f_62, icon, icon.f_1);
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(7, uParam0->f_62, icon, icon.f_1);
		}
	
		Global_1147183.f_339.f_16 = uParam0->f_62;
		Global_1147183.f_339.f_17 = uParam0->f_63;
		str2 = MISC::VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", num2, num);
		UILOG::_0x763637F9B838B0A7(7, uParam0->f_62, str2);
		AUDIO::PLAY_SOUND_FRONTEND("add_to_log", "SSCRFT_Sounds", true, 0);
	}

	func_144(uParam0);
	return;
}

void func_59(var uParam0) // Position - 0x382E Hash - 0x55260421 ^0x61A1B350
{
	int num;
	AnimScene animScene;

	if (!func_29(uParam0->f_1[1], false))
		return;

	if (func_31(uParam0, 2))
	{
		if (func_25(uParam0->f_62, 0))
		{
			func_102(true);
			func_97(&(uParam0->f_71));
			func_8(uParam0, 16);
		}
	
		return;
	}

	func_56(uParam0, true);
	func_69(&uParam0->f_1[1], true, true);
	func_69(&uParam0->f_1[5], true, true);
	func_69(&uParam0->f_1[6], true, true);
	func_69(&uParam0->f_1[3], true, true);
	func_69(&uParam0->f_1[7], true, true);
	func_5(uParam0, 64);

	if (!func_31(uParam0, 8192) && !func_130(uParam0->f_62))
	{
		num = func_65(uParam0->f_62, -1636519629);
		animScene = func_78(uParam0, num);
	
		if (animScene != 0)
		{
			func_6(uParam0, 64);
			ANIMSCENE::RESET_ANIM_SCENE(animScene, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(animScene);
			uParam0->f_70 = 0;
		
			if (num != -1610298873)
				if (num == -842117252)
					if (uParam0->f_62 == joaat("ammo_poisonbottle"))
						uParam0->f_70 = joaat("mp006_s_cft_poisonbottle01");
					else
						uParam0->f_70 = joaat("s_cft_molotov01");
				else if (func_76(uParam0->f_62, -1588156645))
					uParam0->f_70 = func_152(func_77(uParam0->f_62, false));
				else if (func_76(uParam0->f_62, 457423347))
					uParam0->f_70 = joaat("s_cft_arrow_dynamite");
				else if (func_76(uParam0->f_62, -1846429632))
					uParam0->f_70 = joaat("s_cft_arrow_fire");
				else if (func_76(uParam0->f_62, -1067199465))
					uParam0->f_70 = joaat("s_cft_arrow_smallgame");
				else
					uParam0->f_70 = func_152(uParam0->f_62);
		
			if (uParam0->f_70 != 0)
				STREAMING::REQUEST_MODEL(uParam0->f_70, false);
		}
	
		func_98(uParam0->f_1[2], "CAMP_REC_BACK", true);
		func_72(uParam0->f_1[2], -1067771379, 0, true);
		func_54(uParam0->f_1[2], false, true, true);
		func_74(uParam0->f_1[2], false, true);
		uParam0->f_1[4] = func_71("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, 1073741824, joaat("MEDIUM_TIMED_EVENT"), 0);
		func_153(&uParam0->f_1[4], "INPUT_PCRAFT_EXIT");
		func_72(uParam0->f_1[4], -1067771379, 0, true);
		func_54(uParam0->f_1[4], false, true, true);
		func_73(uParam0->f_1[4], 19, true, true);
		func_73(uParam0->f_1[4], 20, true, true);
		func_73(uParam0->f_1[4], 13, true, true);
		func_73(uParam0->f_1[2], 13, true, true);
	
		if (func_68(uParam0->f_1[2]))
			func_72(uParam0->f_1[2], -1067771379, 0, true);
	
		uParam0->f_28 = 0;
		func_8(uParam0, 12);
	}
	else
	{
		func_8(uParam0, 11);
	}

	return;
}

BOOL func_60(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3AF3 Hash - 0x312C05AC ^0xFB549D9B
{
	int num;

	if (bParam2 && !func_68(iParam0))
		return false;

	num = func_117(iParam0);
	return HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1951910[num /*23*/].f_3, iParam1);
}

void func_61(var uParam0, BOOL bParam1) // Position - 0x3B28 Hash - 0x6787FEFE ^0xECF274C3
{
	int num;
	int num2;
	BOOL flag;
	int num3;
	int num4;
	var unk;
	Hash hash;
	int i;
	Hash hash2;
	int acquireCostsCount;
	Hash outData;
	int num5;
	int num6;
	Hash hash3;

	ATTRIBUTE::STOP_ITEM_PREVIEW();

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_58))
	{
		num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iCurCostVariant");
		num2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iNumCostVariants");
		flag = false;
	
		if (uParam0->f_63 == -214678071 || uParam0->f_63 == joaat("cost_crafting_grill"))
		{
			if (bParam1)
				num = num + 1;
			else
				num = num - 1;
		
			if (num < 0)
				num = num2 - 1;
			else if (num >= num2)
				num = 0;
		
			unk = -1;
			unk.f_1 = -1;
			unk.f_2 = -1;
			unk.f_3 = -1;
			unk.f_4 = -1;
			unk.f_5 = -1;
			unk.f_6 = -1;
			unk.f_7 = -1;
			unk.f_8 = -1;
		
			if (num == 0)
			{
				unk = { func_154(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, -214678071, 0, -1, func_65(uParam0->f_62, 1697966752), 0) };
			
				if (func_155(unk, &num3, &num4, 0))
				{
					if (num4 > 0)
					{
						uParam0->f_63 = -214678071;
						uParam0->f_62 = func_156(0, num3);
						flag = true;
					}
				
					func_157(num3);
				}
			}
			else
			{
				unk = { func_154(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("cost_crafting_grill"), 0, -1, func_65(uParam0->f_62, 1697966752), 0) };
			
				if (func_155(unk, &num3, &num4, 0))
				{
					if (num4 > 0)
					{
						if (num == 1)
							hash = 2127114599;
						else if (num == 2)
							hash = -1864584831;
						else if (num == 3)
							hash = 1967571132;
					
						for (i = 0; i < num4; i = i + 1)
						{
							hash2 = func_156(i, num3);
						
							if (func_76(hash2, hash))
							{
								uParam0->f_63 = joaat("cost_crafting_grill");
								uParam0->f_62 = hash2;
								flag = true;
								break;
							}
						}
					}
				
					func_157(num3);
				}
			}
		}
		else
		{
			acquireCostsCount = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_62);
			outData.f_4 = 15;
			outData.f_36 = 10;
		
			while (outData.f_2 != joaat("cost_type_craft") || outData == -489628648 || outData == -2141192156 || !Global_1913634.f_1579 && func_134(uParam0->f_62, outData, true) && num5 < acquireCostsCount)
			{
				num5 = num5 + 1;
			
				if (bParam1)
					num = num + 1;
				else
					num = num - 1;
			
				if (num < 0)
					num = acquireCostsCount - 1;
				else if (num >= acquireCostsCount)
					num = 0;
			
				ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(uParam0->f_62, num, &outData);
			}
		
			uParam0->f_63 = outData;
		}
	
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_58, "eCost", uParam0->f_63);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_58, "eOutputItem", uParam0->f_62);
		num6 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iIndex");
	
		if (num6 >= 0 && num6 < Global_1913634)
			hash3 = Global_1913634[num6 /*9*/].f_8;
	
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_58, "iCurCostVariant", num);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_29, "variantIndex", (num + 1) - hash3);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "variantText", MISC::VAR_STRING(0, uParam0->f_62));
		uParam0->f_27 = -1;
		uParam0->f_23 = 0;
	
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription"))
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_62, 1);
	
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "RPGDescription", func_158(uParam0->f_62));
		func_126(uParam0, -1, func_82(), uParam0->f_58, false, flag, false);
		func_53(uParam0, uParam0->f_62, uParam0->f_63);
	}

	return;
}

void func_62(var uParam0, BOOL bParam1) // Position - 0x3E8D Hash - 0x20C736CE ^0x9C234290
{
	int num;

	if (bParam1)
		if (func_31(uParam0, 32768))
			func_6(uParam0, 32768);
		else
			func_5(uParam0, 32768);

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription", func_31(uParam0, 32768));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowIngredients", !func_31(uParam0, 32768));

	if (!func_31(uParam0, 32768))
	{
		if (func_68(uParam0->f_1[6]))
			func_98(uParam0->f_1[6], "INFO", true);
	
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		func_159(uParam0);
	}
	else
	{
		if (func_68(uParam0->f_1[6]))
			func_98(uParam0->f_1[6], "INGREDIENTS", true);
	
		func_160(uParam0);
	}

	if (uParam0->f_63 == -214678071)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iNumCostVariants") <= 1 && func_31(uParam0, 32768))
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				num = func_140(uParam0->f_62, uParam0->f_63, func_82(), false);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", num));
			}
		}
	}

	return;
}

void func_63(var uParam0) // Position - 0x3FC6 Hash - 0x3ABC463A ^0x6A02F03
{
	if (func_31(uParam0, 2))
		return;

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	func_161(uParam0);
	func_52(uParam0);
	func_159(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowIngredients", false);
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	func_53(uParam0, 0, 0);
	func_8(uParam0, 9);
	return;
}

void func_64(var uParam0, var uParam1) // Position - 0x4026 Hash - 0x1003DF0E ^0x1B76BC65
{
	func_52(uParam0);
	func_159(uParam0);
	func_129(uParam0, &(uParam1->f_3));
	return;
}

int func_65(Hash hParam0, int iParam1) // Position - 0x4044 Hash - 0x7A1C2599 ^0xFF9B5634
{
	var outData;
	int outIndex;
	int i;

	outData = 20;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &outData, &outIndex, 20))
	{
		for (i = 0; i < outIndex; i = i + 1)
		{
			if (outData[i /*2*/].f_1 == iParam1)
				return outData[i /*2*/];
		}
	}

	return 0;
}

void func_66(var uParam0) // Position - 0x408E Hash - 0xA97CE04D ^0xF99DFED3
{
	int num;
	Hash modelHash;
	Hash modelHash2;

	num = func_65(uParam0->f_62, -1636519629);

	if (num == 414472632)
	{
		uParam0->f_43 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_64))
		{
			modelHash = func_162(uParam0->f_62);
		
			if (modelHash != 0)
			{
				uParam0->f_64 = OBJECT::CREATE_OBJECT(modelHash, Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_64, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_64, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_49, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_49);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_49, "pl_craft", true);
	}
	else if (num == -1136843638)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_51, "arrow" /*ARROW*/, uParam0->f_66, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_51, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_51);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_51, "pl_craft", true);
	}
	else if (num == 786205940)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_52, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_52);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_52, "pl_craft", true);
	}
	else if (num == -715814988)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_50, "player", Global_33, 0);
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_64))
		{
			modelHash2 = func_162(uParam0->f_62);
		
			if (modelHash2 != 0)
			{
				uParam0->f_64 = OBJECT::CREATE_OBJECT(modelHash2, Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_64, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_64, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_64, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), func_163(uParam0->f_62), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_50, "bullet" /*Bullet*/, uParam0->f_64, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_50);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_50, "pl_craft", true);
	}
	else if (num == -732326901)
	{
		uParam0->f_43 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
		{
			uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_34, true, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_66, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_53, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_53);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_53, "pl_craft", true);
	}
	else if (num == -1141771998)
	{
		uParam0->f_43 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
		{
			uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_tomahawk"), 1, Global_34, true, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_66, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_54, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_54);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_54, "pl_craft", true);
	}
	else if (num == 364689687)
	{
		uParam0->f_43 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
		{
			uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_34, true, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_66, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_68))
		{
			uParam0->f_68 = OBJECT::CREATE_OBJECT(joaat("p_cs_rag01x"), Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_68, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_68, false, false);
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55, "RAG", uParam0->f_68, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_55);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_55, "pl_craft", true);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_54, "pl_craft", true);
	}
	else if (num == -842117252)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_56, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_56);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_56, "pl_craft", true);
	}
	else if (num == -1610298873)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_57, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_57);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_57, "pl_craft", true);
	}
	else
	{
		uParam0->f_43 = BUILTIN::ROUND(ENTITY::GET_ANIM_DURATION(func_164(uParam0->f_62), func_165(uParam0->f_62)) * 1000f);
		func_97(&(uParam0->f_71));
		TASK::TASK_PLAY_ANIM(Global_33, func_164(uParam0->f_62), func_165(uParam0->f_62), 1090519040, -1056964608, -1, 67108880, 0, false, 4096, false, "Satchel_Only_filter", false);
	}

	return;
}

void func_67(var uParam0, BOOL bParam1, var uParam2) // Position - 0x44F2 Hash - 0x52322DA2 ^0x387413C5
{
	int i;
	int j;

	for (i = 0; i < uParam0->f_1; i = i + 1)
	{
		if (func_68(uParam0->f_1[i]))
		{
			for (j = 0; j < *uParam2; j = j + 1)
			{
				if (func_68(uParam2->[j]))
				{
					if (uParam0->f_1[i] == uParam2->[j])
					{
					}
				}
			}
		
			func_54(uParam0->f_1[i], bParam1, true, true);
		}
	}

	return;
}

BOOL func_68(int iParam0) // Position - 0x4563 Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

void func_69(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x45A2 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_68(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_117(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_166(num);
	*uParam0 = 0;
	return;
}

BOOL func_70(int iParam0) // Position - 0x45F6 Hash - 0x1DB3839 ^0xDB3801F4
{
	if (iParam0 == -715814988 || iParam0 == -1136843638 || iParam0 == -732326901 || iParam0 == 786205940 || iParam0 == -1141771998 || iParam0 == 364689687 || iParam0 == 414472632 || iParam0 == -842117252 || iParam0 == -1610298873)
		return true;

	return false;
}

int func_71(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, int iParam11) // Position - 0x467E Hash - 0x7D233416 ^0xA5F2EB21
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_112(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_167(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, iParam11);
		return num;
	}

	return 0;
}

void func_72(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4707 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_68(iParam0))
		return;

	num = func_117(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_GROUP(Global_1951910[num /*23*/].f_3, iParam1, iParam2);
	return;
}

void func_73(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4752 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_68(iParam0))
		return;

	num = func_117(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951910[num /*23*/].f_3, iParam1, bParam2);
	return;
}

void func_74(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x479D Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_68(iParam0))
		return;

	num = func_117(iParam0);
	func_146(num, bParam1);
	return;
}

BOOL func_75(int iParam0, BOOL bParam1) // Position - 0x47C9 Hash - 0xAAB142C4 ^0xBB29AF2
{
	int num;

	if (bParam1 && !func_68(iParam0))
		return false;

	num = func_117(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951910[num /*23*/].f_3);
}

BOOL func_76(Hash hParam0, Hash hParam1) // Position - 0x47FC Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_25(hParam0, 0))
		return func_169(func_168(hParam0), hParam1);

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

Hash func_77(Hash hParam0, BOOL bParam1) // Position - 0x483D Hash - 0x27CC99BE ^0xBF8437DD
{
	Hash hash;

	switch (hParam0)
	{
		case joaat("ammo_hatchet_hewing"):
			hash = joaat("weapon_melee_hatchet_hewing");
			break;
	
		case joaat("ammo_molotov_volatile"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_throwing_knives_confuse"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_throwing_knives_wound"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_throwing_knives"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_hatchet_ancient"):
			hash = joaat("weapon_melee_ancient_hatchet");
			break;
	
		case joaat("ammo_tomahawk_homing"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_cleaver"):
			hash = joaat("weapon_melee_cleaver");
			break;
	
		case joaat("ammo_hatchet_hunter_rusted"):
			hash = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
	
		case joaat("ammo_hatchet_double_bit_rusted"):
			hash = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
	
		case joaat("ammo_tomahawk_improved"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_viking"):
			hash = joaat("weapon_melee_hatchet_viking");
			break;
	
		case joaat("ammo_tomahawk_ancient"):
			hash = joaat("weapon_thrown_tomahawk_ancient");
			break;
	
		case joaat("ammo_bolas"):
			hash = joaat("weapon_thrown_bolas");
			break;
	
		case joaat("ammo_hatchet"):
			hash = joaat("weapon_melee_hatchet");
			break;
	
		case joaat("ammo_hatchet_hunter"):
			hash = joaat("weapon_melee_hatchet_hunter");
			break;
	
		case joaat("ammo_dynamite"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_dynamite_volatile"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_poisonbottle"):
			hash = joaat("weapon_thrown_poisonbottle");
			break;
	
		case joaat("ammo_throwing_knives_improved"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_tomahawk"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_throwing_knives_trail"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("AMMO_MOLOTOV"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_throwing_knives_disorient"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_hatchet_double_bit"):
			hash = joaat("weapon_melee_hatchet_double_bit");
			break;
	
		case joaat("ammo_throwing_knives_drain"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_throwing_knives_poison"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		default:
			break;
	}

	if (func_25(hash, 0))
		if (bParam1)
			if (func_170(hash) || func_171(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

AnimScene func_78(var uParam0, int iParam1) // Position - 0x4A33 Hash - 0x10E222E7 ^0xE426B9D6
{
	switch (iParam1)
	{
		case -1610298873:
			return uParam0->f_57;
	
		case -1141771998:
			return uParam0->f_54;
	
		case -1136843638:
			return uParam0->f_51;
	
		case -842117252:
			return uParam0->f_56;
	
		case -732326901:
			return uParam0->f_53;
	
		case -715814988:
			return uParam0->f_50;
	
		case 364689687:
			return uParam0->f_55;
	
		case 414472632:
			return uParam0->f_49;
	
		case 786205940:
			return uParam0->f_52;
	
		default:
		
	}

	return 0;
}

int func_79(Object* pobParam0, var uParam1) // Position - 0x4AB9 Hash - 0x42F592B1 ^0x52A7812A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pobParam0))
		return 1;

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*pobParam0))
	{
		OBJECT::DELETE_OBJECT(pobParam0);
		return 1;
	}

	*uParam1 = 1;
	NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*pobParam0);
	return 0;
}

BOOL func_80(BOOL bParam0) // Position - 0x4AF1 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_27() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_172(bParam0));
}

BOOL func_81() // Position - 0x4B0F Hash - 0xD3E48215 ^0xDBA46110
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

BOOL func_82() // Position - 0x4B2B Hash - 0x24E38A73 ^0x7BEA4359
{
	Ped ped;
	int num;

	ped = func_173(7);

	if (!PED::IS_PED_INJURED(ped))
		if (func_174(Global_33, ped, true) < 400f)
			num = 1;

	return num;
}

int func_83(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, Any anParam4) // Position - 0x4B5C Hash - 0xD7816F68 ^0xCFBA9562
{
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(hParam0, hParam1, anParam4, 1);
	return func_175(hParam0, hParam1, bParam2, bParam3);
}

void func_84(ePedType eptParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x4B7B Hash - 0x6437DE94 ^0x86BCBBAD
{
	Hash weaponHash;

	if (!func_80(false) || func_81())
		return;

	if (!func_25(eptParam0, 0))
		return;

	func_89(func_176(joaat("items_crafted")), iParam1);

	if (bParam3)
	{
		if (func_27() == -1)
		{
			if (func_76(eptParam0, -1588156645))
			{
				weaponHash = func_177(func_77(eptParam0, false), false);
			
				if (WEAPON::IS_WEAPON_VALID(weaponHash))
					func_178(weaponHash);
			}
		}
	
		if (iParam4 == 0)
			if (func_179(eptParam0) == joaat("horse_equipment"))
				if (func_180(eptParam0, false))
					func_181(eptParam0, 1, false, true, false, false, false);
			else
				func_182(eptParam0, iParam1, false, false, false, 752097756, 0, 0, 0, false);
		else
			func_183(eptParam0, iParam4, iParam1);
	}

	func_104(eptParam0, iParam1);
	Global_1051188 = eptParam0;
	return;
}

BOOL func_85(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4C4C Hash - 0xD005D684 ^0xD005D684
{
	var unk;
	var unk2;
	var unk3;

	return func_135(hParam0, hParam1, &unk, &unk2, &unk3, bParam2, bParam3, bParam4);
}

BOOL func_86(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x4C68 Hash - 0x6E9628EE ^0x6E9628EE
{
	var unk;

	unk = { func_184(hParam0, false, 0) };
	return func_185(hParam0, &unk, iParam1, false, bParam2, -1, false);
}

int func_87(Hash hParam0, Hash hParam1, int iParam2, Any anParam3) // Position - 0x4C8B Hash - 0x2B91DAE0 ^0x2B91DAE0
{
	var unk;
	var unk3;
	int num;
	Hash hash;
	var unk8;
	var unk18;
	var unk36;
	var unk53;

	if (!func_25(hParam0, 0))
		return -1;

	if (func_186(hParam0))
		if (!func_188(func_187(hParam0), hParam1, &unk, false, false))
			return -1;
	else if (func_140(hParam0, hParam1, false, false) < iParam2)
		return -1;

	unk3 = { func_184(hParam0, true, 0) };

	if (func_185(hParam0, &unk3, iParam2, false, true, -1, false))
		return -1;

	num = -1;
	hash = func_189(hParam0);

	if (hash == 1388422710)
	{
		num = func_190(hParam0, "SPEND STEW FEE", 1, true, false, hParam1);
	}
	else
	{
		unk8 = -1;
		unk8.f_1 = -1;
	
		if (func_186(hParam0))
		{
			unk18.f_9 = 1;
			unk18.f_11 = joaat("SLOTID_NONE");
		
			if (!func_191(&unk8, func_187(hParam0), &unk18, true, hParam1, -1, false, false))
				return -1;
		}
		else
		{
			unk36.f_9 = 1;
			unk36.f_11 = joaat("SLOTID_NONE");
		
			if (!func_192(&unk8, hParam0, unk3, unk3.f_4, iParam2, &unk36, true, hParam1, -1, true))
				return -1;
		}
	
		num = unk8.f_1;
	}

	if (num == -1)
		return -1;

	unk53.f_7 = -142743235;
	unk53.f_16 = -1;
	unk53.f_1 = 1;

	if (hParam0 == -1283929968)
		unk53.f_1 = 0;

	if (func_186(hParam0))
		if (func_193(func_187(hParam0), hParam1) == 1400824947)
			unk53.f_1 = 0;
	else if (func_194(hParam0, hParam1) == 1400824947)
		unk53.f_1 = 0;

	func_195(num, unk53);
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(hParam0, hParam1, anParam3, iParam2);
	return num;
}

struct<2> func_88(int iParam0, Hash hParam1) // Position - 0x4E2B Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = hParam1;
	return num;
}

void func_89(var uParam0, var uParam1, int iParam2) // Position - 0x4E41 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_90(var uParam0, int iParam1, BOOL bParam2) // Position - 0x4E5E Hash - 0xC93993C6 ^0xC36D1FA9
{
	AnimScene animScene;

	uParam0->f_45 = 0;
	func_79(&(uParam0->f_66), &(uParam0->f_67));
	func_79(&(uParam0->f_64), &(uParam0->f_65));
	animScene = func_78(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(animScene, "bStopLoop", true, false);
	func_54(uParam0->f_1[2], true, true, true);
	func_54(uParam0->f_1[4], true, true, true);
	func_74(uParam0->f_1[2], false, true);
	func_74(uParam0->f_1[4], true, true);
	func_196(uParam0->f_1[1], true);
	func_69(&uParam0->f_1[1], true, true);
	uParam0->f_1[1] = func_71("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_43, uParam0->f_43 + 1, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
	func_73(uParam0->f_1[1], 11, true, true);
	func_73(uParam0->f_1[1], 19, true, true);
	func_72(uParam0->f_1[1], -1067771379, 0, true);
	func_54(uParam0->f_1[1], bParam2, true, true);
	func_8(uParam0, 13);
	return;
}

BOOL func_91(var uParam0, float fParam1) // Position - 0x4F5E Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_96(uParam0))
		return false;

	if (func_197(uParam0) > fParam1)
		return true;

	return false;
}

BOOL func_92(int iParam0) // Position - 0x4F85 Hash - 0x2597F7C7 ^0x2597F7C7
{
	int num;

	num = func_101(iParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

void func_93(var uParam0) // Position - 0x4FAB Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_94(int iParam0, BOOL bParam1) // Position - 0x4FC1 Hash - 0x1C19B2F4 ^0xAAE134BB
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_68(iParam0))
		return false;

	num = func_117(iParam0);

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

BOOL func_95(int iParam0, BOOL bParam1) // Position - 0x50BB Hash - 0x21336878 ^0xD8C1D129
{
	int num;

	if (bParam1 && !func_68(iParam0))
		return false;

	num = func_117(iParam0);

	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1951910[num /*23*/].f_3))
		return PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_1951910[num /*23*/].f_4);

	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1951910[num /*23*/].f_3);
}

BOOL func_96(var uParam0) // Position - 0x5112 Hash - 0x5001E582 ^0x5001E582
{
	return func_198(*uParam0, 1);
}

void func_97(var uParam0) // Position - 0x5122 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_199(uParam0, 0f);
	return;
}

void func_98(int iParam0, char* sParam1, BOOL bParam2) // Position - 0x5131 Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_68(iParam0))
		return;

	num = func_117(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1951910[num /*23*/].f_3, sParam1);
	return;
}

Player func_99() // Position - 0x517A Hash - 0xC931529D ^0x9BAFB5AF
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return Global_1144526[gangLeader /*83*/].f_38.f_28.f_2;

	return 255;
}

BOOL func_100(BOOL bParam0) // Position - 0x51AC Hash - 0x337008A1 ^0x237E825
{
	if (bParam0)
		if (Global_1142424.f_2050 == 0 || MISC::GET_SYSTEM_TIME() - Global_1142424.f_2050 >= 1000)
			return true;
		else
			return false;

	if (Global_1142424.f_2050 == 0)
		Global_1142424.f_2050 = MISC::GET_SYSTEM_TIME();
	else if (MISC::GET_SYSTEM_TIME() - Global_1142424.f_2050 >= 1000)
		Global_1142424.f_2050 = MISC::GET_SYSTEM_TIME();
	else
		return false;

	return true;
}

int func_101(int iParam0) // Position - 0x5224 Hash - 0xD52E0195 ^0x6C5F51BC
{
	int i;

	if (iParam0 == -1)
		return 0;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
			return Global_1292143.f_20.f_1[i /*21*/].f_1;
	}

	return 0;
}

void func_102(BOOL bParam0) // Position - 0x5270 Hash - 0xA350DB9E ^0xFA414598
{
	var unk;
	int num;

	if (bParam0)
		num = 14;
	else
		num = 15;

	func_201(num, unk, func_200(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))));
	return;
}

void func_103(var uParam0) // Position - 0x52A3 Hash - 0x42939312 ^0xADF284F1
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (gangLeader == PLAYER::PLAYER_ID())
	{
		func_202(gangLeader, true);
		func_203(gangLeader, uParam0);
		func_205(func_204(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())), uParam0);
	}
	else
	{
		func_206(uParam0);
	}

	return;
}

void func_104(Hash hParam0, int iParam1) // Position - 0x52EC Hash - 0x31149EC0 ^0x2BE47449
{
	var statId;

	statId = { func_207(hParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);

	if (!func_76(hParam0, 1714518167))
	{
		statId = { func_208(hParam0) };
	
		if (statId.f_1 != 0)
			STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	}

	return;
}

void func_105(var uParam0) // Position - 0x5332 Hash - 0xAC9AC15F ^0x57C1DD49
{
	var requestId;
	var unk4;
	int num;
	BOOL flag;
	int num2;
	var unk7;

	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(uParam0->f_24, &requestId))
	{
		unk4 = { func_209(Global_1295666) };
		num = 0;
		flag = func_76(uParam0->f_62, -2011345500);
	
		if (!flag)
		{
			unk7 = 15;
		
			if (func_149(uParam0->f_62, uParam0->f_63, &unk7, &num2, true, false) && num2 > 0)
				num = unk7[0 /*2*/];
		}
	
		TELEMETRY::TELEMETRY_CAMP_DONATE(&requestId, num, unk4.f_2, 0, 1, joaat("SLOTID_SATCHEL"), joaat("stew_pot"), uParam0->f_62, flag);
	}

	return;
}

BOOL func_106(int iParam0, BOOL bParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x53B4 Hash - 0xC51EFF01 ^0xD252B7CC
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_210(iParam0, &unk26, &unk13, &unk, bParam1, iParam2, iParam3, bParam4);
}

void func_107(int iParam0) // Position - 0x53E4 Hash - 0xF3562505 ^0x47CA22E2
{
	if (Global_1940085.f_105.f_2 >= iParam0)
		return;

	Global_1940085.f_105.f_2 = iParam0;
	return;
}

void func_108(var uParam0) // Position - 0x5406 Hash - 0x821EA126 ^0xAC01B85F
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_49))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_49, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_50))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_50, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_51))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_51, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_52))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_52, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_53))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_53, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_54))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_54, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_55))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_55, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_56))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_56, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_57))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_57, 0);

	func_79(&(uParam0->f_64), &(uParam0->f_65));
	func_79(&(uParam0->f_66), &(uParam0->f_67));
	func_79(&(uParam0->f_68), &(uParam0->f_69));
	return;
}

void func_109(Hash hParam0, int iParam1) // Position - 0x54E9 Hash - 0x78C9A5D2 ^0x78C9A5D2
{
	int i;

	for (i = 0; i < iParam1; i = i + 1)
	{
		func_211(11, true, 0);
	}

	if (func_212(hParam0, 0))
		func_213(40);
	else
		func_213(39);

	return;
}

BOOL func_110(int iParam0) // Position - 0x5528 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
	
		default:
		
	}

	return false;
}

int func_111(int iParam0) // Position - 0x5567 Hash - 0xE34A477A ^0xE34A477A
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
	
		case 3:
			return Global_1072759.f_573.f_2103;
	
		case 4:
			return Global_1072759.f_573.f_12605;
	
		case 5:
			return Global_1072759.f_573.f_12907;
	
		case 6:
			return Global_1072759.f_573.f_15909;
	
		case 7:
			return Global_1072759.f_573.f_16511;
	
		case 8:
			return Global_1072759.f_573.f_18913;
	
		default:
		
	}

	return -1;
}

BOOL func_112(int iParam0, int iParam1) // Position - 0x55FD Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

BOOL func_113(int iParam0, int iParam1) // Position - 0x561E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_114(var uParam0) // Position - 0x562D Hash - 0x2A39F97D ^0xC0CD750A
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_49 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		else
			uParam0->f_49 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_49);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_50 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		else
			uParam0->f_50 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_50);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_51 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		else
			uParam0->f_51 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_51);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_52 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		else
			uParam0->f_52 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_52);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_53 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		else
			uParam0->f_53 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_53);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_54 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		else
			uParam0->f_54 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_54);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_55 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		else
			uParam0->f_55 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_55);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_56 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		else
			uParam0->f_56 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_56);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_57))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_57 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		else
			uParam0->f_57 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_57);
	}

	return;
}

BOOL func_115(const char* sParam0) // Position - 0x58A2 Hash - 0x38726239 ^0x48BDE31D
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

BOOL func_116(var uParam0, var uParam1) // Position - 0x58B1 Hash - 0xCF1CBCB4 ^0xBBBBD5D9
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, true))
			{
				return false;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return false;
			}
		}
	}
	else
	{
		func_114(uParam0);
		return false;
	}

	return true;
}

int func_117(int iParam0) // Position - 0x58FB Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

int func_118(Player plParam0) // Position - 0x5905 Hash - 0x444BF7D7 ^0x8FDBB14C
{
	if (plParam0 < 0 || plParam0 >= 32)
		return 0;

	return Global_1144526[plParam0 /*83*/].f_38.f_28;
}

Hash func_119(Player plParam0) // Position - 0x592F Hash - 0xA9CB276 ^0xD5300595
{
	if (plParam0 < 0 || plParam0 >= 32)
		return 0;

	return Global_1144526[plParam0 /*83*/].f_38.f_28.f_1;
}

void func_120(var uParam0, Hash hParam1, int iParam2) // Position - 0x595B Hash - 0xEB834D03 ^0xCC686083
{
	Global_1913634[uParam0->f_45 /*9*/].f_5 = iParam2;
	Global_1913634[uParam0->f_45 /*9*/].f_6 = hParam1;
	Global_1913634[uParam0->f_45 /*9*/].f_7 = 1;
	Global_1913634[uParam0->f_45 /*9*/].f_8 = 0;
	Global_1913634.f_1576 = Global_1913634.f_1576 + 1;
	uParam0->f_45 = uParam0->f_45 + 1;

	if (iParam2 == 600942249 || iParam2 == -257768755 || iParam2 == 1472825031)
		func_214(uParam0, hParam1, iParam2);
	else if (iParam2 == -214678071)
		func_215(uParam0, hParam1);

	return;
}

int func_121(var uParam0, int iParam1) // Position - 0x59F9 Hash - 0x55C2A1B3 ^0xA4CE5F7D
{
	var unk;
	int num;
	int num2;
	int i;
	Hash hash;

	unk = { func_154(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, iParam1, 0, -1, Global_1913634.f_1584, 0) };

	if (func_155(unk, &num, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			hash = func_156(i, num);
		
			if (func_25(hash, 0))
			{
				if (uParam0->f_45 >= 175)
					break;
			
				if (Global_1913634.f_1584 == 0 && func_76(hash, 302810039))
				{
					if (!(Global_1913634.f_1585 != 0 && func_76(hash, Global_1913634.f_1585)))
					{
					}
					else if (func_76(hash, 266762988))
					{
					}
					else
					{
						func_120(uParam0, hash, iParam1);
						func_216(uParam0, hash, iParam1);
					}
				}
			
				if (func_76(hash, 266762988))
				{
				}
				else
				{
					func_120(uParam0, hash, iParam1);
					func_216(uParam0, hash, iParam1);
				}
			}
		}
	
		func_217(&num);
		return 1;
	}

	return 0;
}

Hash func_122(int iParam0) // Position - 0x5AD7 Hash - 0xD9CACD5C ^0xC5E4F827
{
	switch (iParam0)
	{
		case 0:
			return 1795740370;
	
		case 1:
			return 461149715;
	
		case 2:
			return 210507310;
	
		case 3:
			return -1182908601;
	
		case 4:
			return 1647118377;
	
		case 5:
			return -867280435;
	
		default:
		
	}

	return 0;
}

var func_123(BOOL bParam0, var uParam1, var uParam2) // Position - 0x5B3C Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_124(var uParam0, const char* sParam1, var uParam2) // Position - 0x5B53 Hash - 0xAF661474 ^0xD3B90D69
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_29, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
	return;
}

void func_125(var uParam0, BOOL bParam1, Hash hParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x5BBC Hash - 0x7DBDF2D6 ^0xA8FCA29D
{
	Hash hash;

	hash = Global_1913634[hParam2 /*9*/].f_6;

	if (bParam4 || func_31(uParam0, 2) || func_212(hash, uParam0->f_42))
	{
		if (bParam1)
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913634[hParam2 /*9*/].f_1))
			{
				if (bParam5)
					func_126(uParam0, -1, bParam3, Global_1913634[hParam2 /*9*/].f_1, true, false, true);
			
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_30, uParam0->f_46, joaat("crafting_list_item"), Global_1913634[hParam2 /*9*/].f_1);
			}
			else
			{
				func_218(uParam0, hParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913634[hParam2 /*9*/].f_1))
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913634[hParam2 /*9*/].f_1);
		
			func_218(uParam0, hParam2, false, bParam3);
		}
	
		if (uParam0->f_46 == 0)
		{
			uParam0->f_60 = Global_1913634[hParam2 /*9*/].f_6;
			uParam0->f_61 = Global_1913634[hParam2 /*9*/].f_5;
			uParam0->f_59 = Global_1913634[hParam2 /*9*/].f_1;
		}
	
		uParam0->f_46 = uParam0->f_46 + 1;
	}

	return;
}

void func_126(var uParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x5CB6 Hash - 0xCD6168C8 ^0x1BF6F402
{
	Hash entryId;
	Hash hash;
	Hash hash2;
	Hash key;
	Hash hash3;
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	BOOL flag;
	Hash hash4;
	Hash hash5;
	int num5;
	BOOL flag2;
	const char* str;
	int outData;
	BOOL flag3;
	int i;
	var outData2;
	int num6;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam3))
		iParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(hParam3, "iIndex");

	entryId = Global_1913634[iParam1 /*9*/].f_1;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(entryId))
		return;

	hash = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(entryId, "eOutputItem");
	hash2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(entryId, "eCost");
	key = hash;
	hash3 = hash2;
	num = func_140(key, hash3, bParam2, false);
	num2 = func_138(key, false, false, false);
	num3 = func_139(key, false);

	if (num3 != -1)
		num3 = num3 - num2;
	else
		num3 = num;

	TEXT_LABEL_APPEND_INT(&unk, func_141(num3, num), 8);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(entryId, "count", &unk);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(entryId, "visible", false);

	if (func_31(uParam0, 2))
		num4 = num > 0 && func_136(key) ? 1 : 0;
	else
		num4 = num3 > 0 && num > 0 ? 1 : 0;

	flag = false;

	if (num4 == 0 && func_219(key))
	{
		if (func_220(key, hash3, uParam0, bParam2, &hash4, &hash5, &num5))
		{
			num4 = 1;
			flag = true;
		
			if (bParam6)
			{
				key = hash4;
				hash3 = hash5;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "name", hash4);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "eOutputItem", hash4);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "eCost", hash5);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "iCurCostVariant", num5);
				bParam5 = true;
			}
		}
	}

	if (!func_31(uParam0, 4))
		if (hash3 == -214678071 || hash3 == joaat("cost_crafting_grill") || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(entryId, "bFireCrafting"))
			num4 = 0;

	if (!Global_1913634.f_1579 && func_134(key, hash3, true))
	{
		num4 = 0;
		flag2 = true;
	}

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(entryId, "lockVisible", flag2);

	if (num4 == 1)
	{
		if (!func_137(2) && func_65(key, -1636519629) == -701492487)
		{
			Global_1913634[iParam1 /*9*/].f_2 = 0;
			num4 = 0;
		}
		else
		{
			Global_1913634[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		if (func_31(uParam0, 128) && num4 == 0 && Global_1913634[iParam1 /*9*/].f_2 && bParam4)
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_30, entryId);
	
		Global_1913634[iParam1 /*9*/].f_2 = 0;
	}

	if (bParam5)
	{
		if (func_221(key, &str, joaat("Inventory"), 0, 0, 0))
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(entryId, "texture", str);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(entryId, "textureDictionary", str.f_1);
		}
	
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "name", key);
		outData.f_1 = 20;
		flag3 = false;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "deadeyeCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "deadeyeDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaHorseDurationCategory", 0);
	
		if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(key, &outData))
		{
			for (i = 0; i < outData; i = i + 1)
			{
				if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2))
				{
					num6 = outData2.f_2;
				
					switch (outData2.f_1)
					{
						case joaat("EFFECT_HORSE_HEALTH_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "healthCoreHorse", num6);
							break;
					
						case -1240225157:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "stamina" /*Stamina*/, 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaDurationCategory", outData2.f_6);
							break;
					
						case joaat("Effect_Stamina_Core_Gold"):
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "staminaCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaCoreDurationCategory", outData2.f_6);
							break;
					
						case -1104847406:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "deadeye", num6);
							break;
					
						case -943921969:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "health", num6);
							break;
					
						case joaat("Effect_Deadeye_Core_Gold"):
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "deadeyeCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "deadeyeCoreDurationCategory", outData2.f_6);
							break;
					
						case -778289619:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthHorseDurationCategory", outData2.f_6);
							break;
					
						case joaat("EFFECT_HEALTH_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "healthCore", num6);
							break;
					
						case 381158954:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "stamina" /*Stamina*/, num6);
							break;
					
						case 855745648:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "staminaCoreHorse", num6);
							break;
					
						case 978049229:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "healthHorse", num6);
							break;
					
						case 1136630075:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthCoreHorseDurationCategory", outData2.f_6);
							break;
					
						case 1342237631:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "deadeye", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "deadeyeDurationCategory", outData2.f_6);
							break;
					
						case 1365603835:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "staminaCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaCoreHorseDurationCategory", outData2.f_6);
							break;
					
						case 1497139093:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "staminaHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaHorseDurationCategory", outData2.f_6);
							break;
					
						case joaat("EFFECT_STAMINA_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "staminaCore", num6);
							break;
					
						case joaat("EFFECT_DEADEYE_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "deadeyeCore", num6);
							break;
					
						case 1869697234:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthDurationCategory", outData2.f_6);
							break;
					
						case joaat("Effect_Health_Core_Gold"):
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthCoreDurationCategory", outData2.f_6);
							break;
					}
				}
			}
		}
	
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(entryId, "overpower", flag3);
	}

	if (!func_31(uParam0, 4) && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(entryId, "bFireCrafting"))
		num4 = 0;

	if (flag && !bParam6)
		num4 = 0;

	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "enabled", num4);
	return;
}

Ped func_127(Ped pedParam0) // Position - 0x6268 Hash - 0x2F4187EE ^0xDD4F0EB9
{
	if (!PED::IS_PED_INJURED(pedParam0))
		return PED::GET_MOUNT(pedParam0);

	return 0;
}

void func_128(var uParam0, BOOL bParam1) // Position - 0x6284 Hash - 0x15B6CFE3 ^0xB622BAFB
{
	Entity scenarioPointEntity;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_13))
		scenarioPointEntity = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_13);

	if (ENTITY::DOES_ENTITY_EXIST(scenarioPointEntity))
		ENTITY::SET_ENTITY_COLLISION(scenarioPointEntity, bParam1, false);

	return;
}

void func_129(var uParam0, var uParam1) // Position - 0x62B3 Hash - 0x4B041FA7 ^0x9E5D7009
{
	Hash hash;
	Any any;
	Hash hash2;
	int num;
	int num2;
	int num3;
	Hash hash3;

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	hash = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	hash2 = hash;
	ATTRIBUTE::STOP_ITEM_PREVIEW();

	if (func_25(hash2, 0) && func_31(uParam0, 2) || func_212(hash2, uParam0->f_42))
	{
		uParam0->f_27 = -1;
		uParam0->f_23 = 0;
		uParam0->f_62 = hash2;
		uParam0->f_63 = any;
		func_69(&uParam0->f_1[1], true, true);
		num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
	
		if (num > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "variantVisible", true);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "variantText", MISC::VAR_STRING(0, uParam0->f_62));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_29, "variantCount", num);
			num2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			num3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
		
			if (num3 >= 0 && num3 < Global_1913634)
				hash3 = Global_1913634[num3 /*9*/].f_8;
		
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_29, "variantIndex", (num2 + 1) - hash3);
			func_5(uParam0, 4096);
		
			if (func_68(uParam0->f_1[5]))
				func_54(uParam0->f_1[5], true, true, true);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "variantVisible", false);
			func_6(uParam0, 4096);
		
			if (func_68(uParam0->f_1[5]))
				func_54(uParam0->f_1[5], false, true, true);
		}
	
		if (!func_31(uParam0, 2))
			uParam0->f_43 = BUILTIN::ROUND(ENTITY::GET_ANIM_DURATION(func_164(uParam0->f_62), func_165(uParam0->f_62)) * 1000f);
	
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting"))
			func_5(uParam0, 8192);
		else
			func_6(uParam0, 8192);
	
		uParam0->f_58 = *uParam1;
		uParam0->f_1[1] = func_71("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
		func_53(uParam0, uParam0->f_62, uParam0->f_63);
		func_73(uParam0->f_1[1], 11, true, true);
	
		if (Global_1913634.f_1579 || !func_134(uParam0->f_62, uParam0->f_63, true))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "RPGDescription", func_158(hash2));
			func_62(uParam0, false);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "RPGDescription", 0);
		}
	
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription"))
			if (Global_1913634.f_1579 || !func_134(uParam0->f_62, uParam0->f_63, true))
				func_160(uParam0);
	}

	return;
}

BOOL func_130(Hash hParam0) // Position - 0x652B Hash - 0xA3EEED9 ^0x97FF85C3
{
	if (func_179(hParam0) == joaat("consumable") && INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, 16777216))
		return true;

	return false;
}

char* func_131(var uParam0) // Position - 0x6557 Hash - 0xE9AA7646 ^0xF9186951
{
	if (func_31(uParam0, 128))
		return "CAMP_REC_ALL";

	return "CAMP_REC_AVL";
}

int func_132(char* sParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x6578 Hash - 0xF0D966D6 ^0xB09CFACC
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_112(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_167(num, hParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, false, false, hParam2, joaat("SHORT_TIMED_EVENT"), false);
		return num;
	}

	return 0;
}

void func_133(int iParam0, Hash hParam1) // Position - 0x6606 Hash - 0xDEF73F31 ^0x53A5E4BF
{
	int num;

	if (!func_68(iParam0))
		return;

	num = func_117(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1951910[num /*23*/].f_3, hParam1);
	return;
}

BOOL func_134(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x6648 Hash - 0x1244E24C ^0xA4727049
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_25(hParam0, 0))
		return func_222(func_168(hParam0), hParam1, bParam2);

	if (func_223(hParam0) || func_76(hParam0, 1077060302))
		return func_225(func_224(hParam0, true), hParam1);

	unk = 10;

	if (bParam2 && func_27() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return true;

	if (!func_226(hParam0, hParam1, &unk, &num) || num < 1)
		return false;

	for (i = 0; i < num; i = i + 1)
	{
		unlockHash = unk[i];
	
		if (unlockHash == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		{
			return true;
		}
	}

	return false;
}

BOOL func_135(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x670D Hash - 0xA25BE96 ^0xA25BE96
{
	var unk;

	*uParam2 = 0;
	*uParam3 = 0;

	if (!func_25(hParam0, 0))
		return 0;

	if (!Global_1913634.f_1579 && !bParam5)
		if (func_186(hParam0))
			if (func_225(func_187(hParam0), hParam1))
				return 0;
		else if (func_134(hParam0, hParam1, true))
			return 0;

	if (func_186(hParam0))
		if (func_188(func_187(hParam0), hParam1, &unk, false, bParam7))
			return 1;
	else if (func_227(hParam0, 1, hParam1, &unk, uParam4, bParam6, false, bParam7))
		return 1;

	*uParam2 = unk;
	*uParam3 = unk.f_1;
	return 0;
}

BOOL func_136(Hash hParam0) // Position - 0x67B8 Hash - 0x881DF5F7 ^0x881DF5F7
{
	int num;
	int num2;

	num = func_229(func_228());
	num2 = func_229(hParam0);
	return num2 > num;
}

BOOL func_137(int iParam0) // Position - 0x67D7 Hash - 0xA059D395 ^0x8E0849E2
{
	return func_230(Global_1940085.f_38, iParam0);
}

int func_138(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x67EB Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_25(hParam0, 0))
		return 0;

	num = func_179(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_231(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_232(hParam0, false);
	}

	if (func_233(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_172(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_234(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_172(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

int func_139(Hash hParam0, BOOL bParam1) // Position - 0x68AD Hash - 0x71A176E6 ^0x71A176E6
{
	var unk;

	unk = { func_184(hParam0, false, 0) };
	return func_235(hParam0, &unk, false, bParam1);
}

int func_140(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x68CC Hash - 0xEC7BE68C ^0xEC7BE68C
{
	var unk;
	int num;
	int i;
	BOOL flag;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	unk = 15;

	if (!func_149(hParam0, hParam1, &unk, &num, true, false))
		return 0;

	flag = !bParam3 && func_80(false) && !func_81();
	num2 = -1;
	num3 = -1;

	if (Global_1915656.f_20638)
		num3 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		num4 = func_236(num3, unk[i /*2*/]);
	
		if (num4 != 0)
		{
			bParam2 = false;
			num5 = func_237(unk[i /*2*/], num4);
		}
		else
		{
			num5 = func_138(unk[i /*2*/], false, !flag, true);
		}
	
		if (flag)
		{
			if (func_238(unk[i /*2*/]) || func_239(unk[i /*2*/]))
			{
				num5 = num5 + func_240(unk[i /*2*/], 0);
			
				if (bParam2)
				{
					num6 = 0;
					num5 = num5 + func_241(7, unk[i /*2*/], &num6);
				}
			}
			else if (bParam2)
			{
				num5 = num5 + func_242(7, unk[i /*2*/]) + func_243(unk[i /*2*/]);
			}
		}
	
		if (num5 < unk[i /*2*/].f_1)
			return 0;
	
		num5 = num5 / unk[i /*2*/].f_1;
	
		if (num2 == -1 || num5 < num2)
			num2 = num5;
	}

	return num2;
}

int func_141(int iParam0, int iParam1) // Position - 0x6A23 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_142(var uParam0, Hash hParam1) // Position - 0x6A39 Hash - 0x836526C3 ^0x836526C3
{
	if (!func_31(uParam0, 4))
		return false;

	if (func_130(hParam1) && func_244())
		return true;

	return false;
}

BOOL func_143(Hash hParam0, Hash hParam1, var uParam2, Entity eParam3, BOOL bParam4) // Position - 0x6A67 Hash - 0x61416B57 ^0x29193E9F
{
	var unk;
	Hash hash;
	int num;
	int i;
	BOOL flag;
	const char* str;
	int num2;
	BOOL flag2;
	const char* str2;
	var unk34;
	int num3;
	int num4;
	Hash hash2;
	int num5;
	var unk36;
	int num6;
	Hash hash3;

	unk = 15;
	flag = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_41);

	for (i = 0; i < 4; i = i + 1)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_41, uParam2->f_36[i]);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[i], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[i], "inUse", false);
	}

	if (!bParam4 && func_149(hParam0, hParam1, &unk, &num, true, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			if (i >= 4)
				break;
		
			hash = unk[i /*2*/];
		
			if (func_25(hash, 0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[i], "visible", true);
			
				if (func_221(hash, &str, joaat("Inventory"), 0, 0, 0))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_31[i], "texture", str);
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_31[i], "textureDictionary", str.f_1);
				}
			
				num2 = func_138(hash, false, false, false);
				flag2 = num2 >= unk[i /*2*/].f_1;
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_31[i], "count", num2);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_31[i], "enabled", flag2 ? 1 : 0);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[i], "inUse", true);
			
				if (!flag2)
					flag = false;
			
				str2 = MISC::VAR_STRING(10, "CRFT_ING_LIST", MISC::VAR_STRING(0, unk[i /*2*/]), func_31(uParam2, 131072) && uParam2->f_27 > 1 ? func_141(3, uParam2->f_27) : unk[i /*2*/].f_1);
				TEXT_LABEL_ASSIGN_STRING(&unk34, "Text", 16);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_36[i], &unk34, str2);
				TEXT_LABEL_ASSIGN_STRING(&unk34, "Enabled", 16);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_36[i], &unk34, flag2 ? 1 : 0);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_41, -1, joaat("crafting_recipe_line"), uParam2->f_36[i]);
			}
		}
	}

	if (flag)
	{
		if (!func_31(uParam2, 4) && func_31(uParam2, 8192) || uParam2->f_63 == -214678071 || uParam2->f_63 == joaat("cost_crafting_grill"))
		{
			flag = false;
		
			if (func_130(hParam0))
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			else
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
		}
		else
		{
			num3 = func_138(hParam0, false, false, false);
			num4 = func_139(hParam0, false);
		
			if (func_31(uParam2, 2) && !func_136(hParam0))
			{
				flag = false;
				hash2 = func_228();
			
				if (hParam0 == hash2)
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE"));
				else
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE_BETTER"));
			}
			else if (num4 - num3 > 0 || num4 == -1)
			{
				num5 = func_65(hParam0, -1636519629);
			
				if (!func_137(2) && num5 == -701492487)
				{
					flag = false;
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_CONS"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(eParam3))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(34, "CRFT_BREAK", 1, MISC::VAR_STRING(0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(eParam3, &unk36))));
				}
				else
				{
					num6 = func_140(hParam0, uParam2->f_63, func_82(), false);
				
					if (func_31(uParam2, 2))
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, func_245(hParam0)));
					else if (uParam2->f_63 == -214678071)
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_58, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_29, "ShowRpgDescription"))
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
						else
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", num6));
					else if (uParam2->f_63 == joaat("cost_crafting_grill"))
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", num6));
					else if (num5 == -701492487)
						if (num6 == 1)
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE1", num6));
						else
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE", num6));
					else
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_HAVE", num6));
				}
			}
			else
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(130, "CRFT_ING_MAX", num3, num4, MISC::VAR_STRING(0, hParam0)));
				flag = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!func_31(uParam2, 4) && func_31(uParam2, 8192) || uParam2->f_63 == -214678071 || uParam2->f_63 == joaat("cost_crafting_grill"))
	{
		flag = false;
	
		if (func_130(hParam0))
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		else
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
	}
	else if (func_31(uParam2, 2) && !func_136(hParam0))
	{
		hash3 = func_228();
	
		if (hParam0 == hash3)
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE"));
		else
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE_BETTER"));
	}
	else
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_NEED"));
	}

	return flag;
}

void func_144(var uParam0) // Position - 0x6FE2 Hash - 0xB87F3DDE ^0x80B38484
{
	if (func_31(uParam0, 2))
	{
		if (!func_76(uParam0->f_62, -2011345500))
		{
			func_69(&uParam0->f_1[7], true, true);
			return;
		}
	
		if (!func_68(uParam0->f_1[7]))
			uParam0->f_1[7] = func_71("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), 0);
	
		if (uParam0->f_27 > 0 || uParam0->f_62 == Global_1147183.f_339.f_16 || !func_136(uParam0->f_62))
			func_54(uParam0->f_1[7], false, true, true);
		else
			func_54(uParam0->f_1[7], true, true, true);
	}

	return;
}

void func_145(int iParam0, int iParam1) // Position - 0x709A Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_146(int iParam0, BOOL bParam1) // Position - 0x70CD Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_112(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_147(int iParam0, BOOL bParam1) // Position - 0x7125 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_148(int iParam0, int iParam1) // Position - 0x714E Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_149(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x7176 Hash - 0x18E9762 ^0x852B384E
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_25(hParam0, 0))
		return false;

	*uParam3 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_246(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_150(Hash hParam0, int iParam1) // Position - 0x7206 Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_25(hParam0, 0))
		return false;

	num = func_179(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_248(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_247(hParam0, 1))
				return false;
			break;
	}

	return func_138(hParam0, false, false, false) >= iParam1;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_151(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x7289 Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE6;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE6;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE6;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE6;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = hashKey;
					uParam1->f_1 = hashKey2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
		}
	}

	return false;
}

int func_152(Hash hParam0) // Position - 0x737F Hash - 0x5CCC10A7 ^0x7EE6802B
{
	var outData;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_4;
}

void func_153(var uParam0, char* sParam1) // Position - 0x739B Hash - 0x51CAA743 ^0xF09D0482
{
	int num;

	if (func_68(*uParam0))
	{
		num = func_117(*uParam0);
	
		if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
			HUD::_UI_PROMPT_SET_TAG(Global_1951910[num /*23*/].f_3, sParam1);
	}

	return;
}

struct<10> func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x73D7 Hash - 0x440EE211 ^0xAE2816F9
{
	int num;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_4 = -1;
	num.f_5 = -1;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;

	if (iParam0 != 0 && iParam0 != joaat("SLOTID_NONE"))
		num = iParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1)
		num.f_2 = iParam2;

	if (iParam3 != 0)
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != -1)
		num.f_6 = iParam6;

	if (iParam7 != 0)
		num.f_8 = iParam7;

	if (iParam8 != 0)
		num.f_7 = iParam8;

	return num;
}

BOOL func_155(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x74AB Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

Hash func_156(int iParam0, int iParam1) // Position - 0x74CC Hash - 0x3644D28E ^0x6DB2088F
{
	int outKey;

	if (iParam1 < 0)
		return 0;

	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(iParam1))
		return 0;

	outKey = 0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iParam1, iParam0, &outKey))
		return 0;

	return outKey;
}

int func_157(int iParam0) // Position - 0x750F Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

Hash func_158(Hash hParam0) // Position - 0x7530 Hash - 0xA730B7B8 ^0x90C575E3
{
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
		return outData.f_1;

	return 0;
}

void func_159(var uParam0) // Position - 0x755B Hash - 0xFC240FAD ^0xFE32DD38
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", false);
	return;
}

void func_160(var uParam0) // Position - 0x757D Hash - 0xCE961D48 ^0xD0DB4109
{
	if (func_76(uParam0->f_62, 1147021565) || func_31(uParam0, 2) && !func_76(uParam0->f_62, 1919582297))
	{
		if (func_212(uParam0->f_62, 5))
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_62, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", false);
		}
		else
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_62, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", true);
		}
	}
	else
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", false);
	}

	return;
}

void func_161(var uParam0) // Position - 0x762B Hash - 0xB5418D4E ^0x9E9618D2
{
	Any any;

	any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_29, "filterIndex");
	uParam0->f_42 = any;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "filter", func_122(uParam0->f_42));
	return;
}

Hash func_162(Hash hParam0) // Position - 0x765B Hash - 0xC7D3E371 ^0x1A86A7E7
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_PISTOL(weaponTypeFromAmmoType))
		return joaat("s_ammo_9mm");
	else if (WEAPON::IS_WEAPON_REVOLVER(weaponTypeFromAmmoType))
		return joaat("s_ammo_45mm");
	else if (WEAPON::IS_WEAPON_RIFLE(weaponTypeFromAmmoType))
		return joaat("s_ammo_rifle");
	else if (WEAPON::IS_WEAPON_REPEATER(weaponTypeFromAmmoType))
		return joaat("s_ammo_repeater");
	else if (WEAPON::IS_WEAPON_SHOTGUN(weaponTypeFromAmmoType))
		return joaat("s_ammo_shotgun");

	return 0;
}

Vector3 func_163(Hash hParam0) // Position - 0x76CD Hash - 0x5EE95BA7 ^0x439E1731
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_PISTOL(weaponTypeFromAmmoType))
		return 0f, 0f, 0f;
	else if (WEAPON::IS_WEAPON_REVOLVER(weaponTypeFromAmmoType))
		return -0.005f, 0f, 0f;
	else if (WEAPON::IS_WEAPON_RIFLE(weaponTypeFromAmmoType))
		return -0.03f, 0f, 0f;
	else if (WEAPON::IS_WEAPON_REPEATER(weaponTypeFromAmmoType))
		return 0.005f, 0f, 0f;
	else if (WEAPON::IS_WEAPON_SHOTGUN(weaponTypeFromAmmoType))
		return 0f, 0f, 0f;

	return 0f, 0f, 0f;
}

char* func_164(var uParam0) // Position - 0x7743 Hash - 0x4FD06573 ^0x29EAFF42
{
	if (PED::IS_PED_MALE(Global_33))
		return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";

	return "MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A";
}

char* func_165(var uParam0) // Position - 0x7761 Hash - 0xEB40D7A4 ^0x1DF1E20B
{
	return "craft_trans_stow";
}

void func_166(int iParam0) // Position - 0x776D Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_249(iParam0))
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

void func_167(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x7820 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1951910[iParam0 /*23*/].f_4 = hParam1;
	Global_1951910[iParam0 /*23*/] = iParam4;
	Global_1951910[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951910[iParam0 /*23*/].f_2 = iParam5;
	Global_1951910[iParam0 /*23*/].f_6 = { fParam6 };
	Global_1951910[iParam0 /*23*/].f_9 = fParam9;
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
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, fParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
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
	func_146(iParam0, true);
	func_147(iParam0, true);
	func_148(iParam0, 128);
	return;
}

Hash func_168(Hash hParam0) // Position - 0x7B3A Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_169(Hash hParam0, Hash hParam1) // Position - 0x7B44 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_250(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

BOOL func_170(Hash hParam0) // Position - 0x7B7A Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_171(Hash hParam0) // Position - 0x7BA2 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return 0;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return 1;

	return 0;
}

int func_172(BOOL bParam0) // Position - 0x7BCA Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_27() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

Ped func_173(int iParam0) // Position - 0x7C0B Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_251(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/];
}

float func_174(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x7C37 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));

	return func_252(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));
}

int func_175(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7C8E Hash - 0x8B4B8FA8 ^0x8B4B8FA8
{
	int num;
	var unk;
	Hash hash;
	Hash hash2;
	int num2;
	var unk33;
	int num3;
	int i;
	int num4;
	int num5;
	int num6;

	if (!func_80(false))
		return 0;
	else if (func_81())
		return 0;

	num = -1;

	if (Global_1915656.f_20638)
		num = Global_1915656.f_20241;

	unk = 15;

	if (!func_227(hParam0, 1, hParam1, &hash, &unk33, bParam3, false, false))
	{
		hash2 = hash;
		return 0;
	}

	if (func_149(hParam0, hParam1, &unk, &num2, true, false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			hash2 = unk[i /*2*/];
			num3 = func_236(num, hash2);
		
			if (num3 != 0)
				bParam3 = false;
		
			if (func_25(hash2, 0))
			{
				if (hash2 == joaat("currency_cash"))
				{
					func_253(unk[i /*2*/].f_1, 0, 0, bParam2, false);
				}
				else if (bParam3)
				{
					if (func_238(hash2) || func_239(hash2))
					{
						if (!func_150(hash2, unk[i /*2*/].f_1))
							num4 = func_254(7, hash2, unk[i /*2*/].f_1);
					
						func_255(hash2, num4, 562618531, false, false);
						unk[i /*2*/].f_1 = unk[i /*2*/].f_1 - num4;
					
						if (unk[i /*2*/].f_1 > 0)
						{
							if (!func_150(hash2, unk[i /*2*/].f_1))
								func_256(hash2, unk[i /*2*/].f_1);
						
							if (func_150(hash2, unk[i /*2*/].f_1))
								func_257(hash2, unk[i /*2*/].f_1, bParam2, -142743235);
						}
					}
					else
					{
						if (func_243(hash2) > 0)
						{
							func_258(hash2);
							unk[i /*2*/].f_1 = unk[i /*2*/].f_1 - 1;
						}
					
						if (unk[i /*2*/].f_1 > 0)
						{
							if (func_242(7, hash2) > 0)
							{
								func_259(7, hash2, unk[i /*2*/].f_1);
								unk[i /*2*/].f_1 = unk[i /*2*/].f_1 - func_259(7, hash2, unk[i /*2*/].f_1);
							}
						}
					
						if (unk[i /*2*/].f_1 > 0)
							func_257(hash2, unk[i /*2*/].f_1, bParam2, 562618531);
					}
				}
				else if (num3 == 0)
				{
					if (func_238(hash2) || func_239(hash2))
						if (!func_150(hash2, unk[i /*2*/].f_1))
							func_256(hash2, unk[i /*2*/].f_1);
				
					func_257(hash2, unk[i /*2*/].f_1, bParam2, 562618531);
				}
				else
				{
					func_260(hash2, num3, unk[i /*2*/].f_1, 562618531);
				}
			
				num5 = func_261(hash2);
			
				if (func_262(num5))
				{
					num6 = func_263(num5);
					func_89(func_88(joaat("used_in_recipe"), num6), unk[i /*2*/].f_1);
				}
			}
		}
	
		return 1;
	}

	return 0;
}

struct<2> func_176(int iParam0) // Position - 0x7F34 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

Hash func_177(Hash hParam0, BOOL bParam1) // Position - 0x7F46 Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_25(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_178(Hash hParam0) // Position - 0x7F72 Hash - 0x6D90E810 ^0x1F802071
{
	Hash weaponUnlock;

	if (Global_1572887.f_14 != -1)
		return;

	if (!func_264(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

int func_179(Hash hParam0) // Position - 0x7FAC Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_25(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_180(Hash hParam0, BOOL bParam1) // Position - 0x7FD7 Hash - 0xD2262421 ^0x1B5D1406
{
	var unk;
	var unk6;
	var unk10;
	var unk11;
	var unk16;

	if (!func_25(hParam0, 0))
		return false;

	if (!func_265(hParam0, 856287005, &unk10, &unk6, &unk, true, 0))
		return false;

	unk11 = { func_266() };
	unk11.f_4 = unk10;

	if (func_267(hParam0, &unk16, &unk11, 1, 752097756, false))
	{
		if (bParam1)
			!func_268(hParam0, 1);
	
		if (func_269(hParam0))
			func_180(func_270(hParam0), true);
	
		func_271();
		return true;
	}

	return false;
}

void func_181(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x805B Hash - 0x81C6837 ^0x21B516A3
{
	BOOL flag;
	int value;
	var unk;
	int num;
	char* str;
	Hash hash;
	int num2;
	Hash hash2;
	int num3;
	char* str2;
	char* str3;
	int num4;
	char* str4;
	Hash hash3;
	Hash hash4;
	int value2;
	const char* str5;
	var unk7;

	if (!func_25(hParam0, 0))
		return;
	else if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;
	else if (iParam1 == 0)
		return;

	if (!func_272() || bParam6)
	{
		func_273(hParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}

	flag = false;
	value = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (hParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_GET_PUMP", 32);

	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		flag = true;
	}
	else if (bParam2 && func_275(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_179(hParam0);
	hash = 0;
	num2 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_76(hParam0, -1982291600) && !func_76(hParam0, 137764179))
	{
		hash = joaat("ammo_types");
		num2 = joaat("ammo_types");
	}

	hash2 = func_189(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || hash2 == -1674363638 || hash2 == 252325943 || hash2 == 829857647 || hash2 == -636562458 || hash2 == 1341188928 || hash2 == 1216664798)
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_221(hParam0, &str, num2, hash, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (bParam5)
	{
		str = "ITEMTYPE_ORDERED_ITEM";
		str.f_1 = "itemtype_textures";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num3 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	str3 = "Transaction_Feed_Sounds";
	num4 = 0;

	if (flag)
	{
		num3 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num4 = 1;
	}

	if (func_76(hParam0, 474910316))
	{
		str4 = func_276(hParam0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(str4))
		{
			str2 = str4;
			str3 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num3 = joaat("color_rpg_special_1");
		else
			num3 = joaat("color_yellowdark");

	if (func_76(hParam0, 1816585950))
		num3 = joaat("color_objective");

	if (func_277(hParam0))
		if (!flag && !bParam2)
			num3 = joaat("color_yellow");
		else
			num3 = joaat("color_yellowdark");

	hash3 = func_278(hParam0, false);

	if (func_279(hash2) && func_76(hParam0, -306684263) && hash3 != 0)
	{
		hash3 = func_280(hParam0);
	}
	else if (func_179(hParam0) == joaat("CLOTHING"))
	{
		hash4 = func_281(hParam0);
	
		if (func_25(hash4, 0))
			hash3 = func_278(hash4, false);
	}

	if (func_282(hParam0, 1443104131) && bParam3)
	{
		value2 = 1;
		func_283(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str5 = func_284(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash3), value), num3);

	if (iParam1 == 1)
		str5 = MISC::VAR_STRING(0, hash3);

	if (hash2 == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || hash2 == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || hash2 == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || hash2 == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str5 = MISC::VAR_STRING(0, func_285(hParam0, -442898163));

	if (hash2 == -126813555 || hash2 == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_286(hParam0, &unk7))
			str5 = func_288(func_287(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_289(str5, str.f_1, MISC::GET_HASH_KEY(str), num4, num3, str3, str2, 0, true);
	return;
}

int func_182(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x8536 Hash - 0x11449F01 ^0x11449F01
{
	int value;
	Hash weaponHash;
	Hash lootTableKey;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	int num;
	int i;
	var statId;
	BOOL flag3;

	if (!func_25(hParam0, 0))
		return 0;

	if (!func_290(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_291(hParam0, &value, iParam1))
		return 0;

	func_292(hParam0, bParam2);
	lootTableKey = 0;

	if (func_179(hParam0) == joaat("CLOTHING"))
		if (!func_76(hParam0, 866047851) && !func_76(hParam0, -1979000645))
			flag = true;

	if (func_275(hParam0, 8388608) && !func_293(27))
		func_294(27);

	func_295(hParam0);

	if (!flag)
	{
		if (func_76(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
			weaponHash = func_177(func_77(hParam0, true), false);
		
			if (WEAPON::IS_WEAPON_VALID(weaponHash))
			{
				if (func_27() == -1)
					func_178(weaponHash);
			
				if (func_80(false) && func_296(weaponHash, 0, false, true, 0, false, hParam5, false))
				{
					func_297(hParam0, value, hParam5);
				
					if (!bParam9)
						bParam2 = false;
				}
				else
				{
					func_298(hParam0, value, hParam5);
				}
			}
		}
		else if (func_179(hParam0) == joaat("WEAPON"))
		{
			if (!func_299(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_179(hParam0) == joaat("AMMO") && func_300(hParam0))
		{
			if (!func_301(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_76(hParam0, -103750053))
		{
			func_89(func_176(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_89(func_88(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_76(hParam0, -121341956) && !func_76(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector"))
				func_302(536, false);
		
			func_76(hParam0, -2017733358) || func_76(hParam0, -1369131378);
		}
		else if (func_76(hParam0, -136654233))
		{
			if (func_76(hParam0, -1021472396))
			{
			}
		}
		else if (func_76(hParam0, -1466706512) && func_76(hParam0, 1147021565))
		{
			func_302(519, false);
		}
		else if (func_76(hParam0, 1147021565) && func_76(hParam0, -524514947))
		{
		}
		else if (func_76(hParam0, 554195525))
		{
		}
		else if (func_76(hParam0, 589988438))
		{
			if (func_303())
			{
				func_304(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_76(hParam0, 787083290) && func_76(hParam0, 949916894))
		{
			func_305(hParam0);
		}
		else if (func_76(hParam0, -1718133314))
		{
			func_306(hParam0);
		}
		else if (func_76(hParam0, -1738650224))
		{
			func_307(hParam0);
		}
		else if (func_76(hParam0, -1112814642) && func_76(hParam0, 949916894))
		{
			func_308(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1940085.f_21 = 0;
		}
		else if (func_76(hParam0, 1841149704))
		{
			func_309();
		}
		else if (func_76(hParam0, -1979000645))
		{
		}
		else if (func_76(hParam0, 606799272))
		{
		}
		else if (func_76(hParam0, -1112814642) && func_76(hParam0, -1697809989))
		{
		}
		else if (func_76(hParam0, -2017733358) || func_76(hParam0, -1369131378))
		{
		}
		else if (func_76(hParam0, -1921346699))
		{
			return 0;
		}
		else if (func_76(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_150(471514780, 1))
						func_182(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_150(526074061, 1))
						func_182(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_150(-967317137, 1))
						func_182(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_150(670273567, 1))
						func_182(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_150(215778062, 1))
						func_182(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_150(-1045488665, 1))
						func_182(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_76(hParam0, -839724752) && func_275(hParam0, 4))
		{
		}
		else if (func_76(hParam0, 1399091007))
		{
			func_310(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_27() == -1)
					hParam0 = -1448210800;
				break;
		
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_312(686, -103579, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_312(686, -1531530025, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_312(685, -1228016946, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case -1080874779:
			case joaat("consumable_potent_medicine"):
			case joaat("consumable_medicine"):
			case joaat("consumable_moonshine"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_312(685, 1934060482, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("upgrade_fsh_bait_cricket_tin"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_crickets");
				break;
		
			case joaat("consumable_potent_restorative"):
			case joaat("consumable_cocaine_chewing_gum_used"):
			case joaat("consumable_cocaine_chewing_gum"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("consumable_restorative"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_312(685, 1110018439, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_302(521, false);
				break;
		
			case joaat("consumable_cigarette_box"):
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("consumable_snake_oil"):
			case joaat("consumable_potent_snake_oil"):
			case joaat("consumable_chewing_tobacco"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("consumable_chewing_tobacco_used"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_312(685, 1408511260, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_293(1))
					func_302(522, false);
				break;
		
			case joaat("consumable_valerian_root"):
				func_311(271, func_278(joaat("consumable_valerian_root"), false), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
			case joaat("weapon_kit_binoculars_improved"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_311(272, func_278(joaat("consumable_aged_pirate_rum"), false), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_302(526, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_311(270, func_278(joaat("consumable_ginseng_elixier"), false), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("reward_abandoned_loot_male");
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_302(534, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_302(529, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("upgrade_fsh_bait_worm_can"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_worms");
				break;
		
			default:
				break;
		}
	}

	if (!flag2)
	{
		if (value <= 0)
			return 0;
	
		hash = hParam0;
		func_313(&hash);
	
		if (!func_298(hash, value, hParam5))
			return 0;
		else if (!func_80(false))
			return 1;
	
		if (func_179(hParam0) == joaat("CLOTHING"))
			func_314(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_80(false) && !func_81())
		{
			num.f_1 = 10;
			num.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_33, false, false, lootTableKey, &num, 0);
		
			for (i = 0; i < num; i = i + 1)
			{
				func_182(num.f_1[i], num.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_315(lootTableKey, 0);
		}
	}

	statId = { func_316(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_317(hParam0);

	if (iParam6 > 0f)
	{
		if (func_76(hParam0, -839724752))
			func_318(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_181(hParam0, value, false, flag3, false, false, false);
	}

	return 1;
}

int func_183(Hash hParam0, int iParam1, int iParam2) // Position - 0x8FEA Hash - 0x27DE9B28 ^0x198DA06
{
	var unk;
	var unk6;

	if (!func_319(hParam0, iParam1))
		return 0;

	unk.f_4 = func_320(iParam1);
	unk = { func_321(false) };

	if (!func_267(hParam0, &unk6, &unk, iParam2, 752097756, true))
		return 0;

	return 1;
}

struct<5> func_184(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x9030 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_321(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_179(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_328(hParam0, -1823706425))
			{
				unk = { func_322(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_328(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_322(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_322(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_328(hParam0, -1653629781))
			{
				unk = { func_322(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_327(bParam1) };
		
			switch (func_189(hParam0))
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
			unk = { func_322(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_323(bParam1) };
		
			if (iParam2 && func_324(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_325(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_325(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_326(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_329(unk, &unk28, bParam1, false, -1))
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
			else if (func_328(hParam0, -1653629781))
			{
				unk = { func_322(1384535894, unk, 1784584921, bParam1) };
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

BOOL func_185(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6) // Position - 0x93A4 Hash - 0x83727B4C ^0xA6F6F598
{
	var unk;
	var unk5;
	int num;
	int num2;

	func_330(&hParam0);

	if (!func_25(hParam0, 0) && !func_250(func_168(hParam0), 2))
		return false;

	if (!bParam3 && func_233(hParam0, joaat("DEFAULT")) == 0)
		bParam3 = true;

	if (func_331(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		unk = { func_323(false) };
		unk5.f_9 = joaat("SLOTID_NONE");
	
		if (!func_325(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
			return false;
		else if (func_326(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
			return false;
	
		if (func_324(hParam0, true))
			if (!func_325(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
				return false;
			else if (func_326(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
				return false;
	
		return true;
	}

	num = iParam5;

	if (iParam5 < 0)
		num = func_235(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return false;
	else if (num == 0)
		return true;

	num2 = func_332(hParam0, *panParam1, panParam1->f_4, bParam4, bParam3, bParam6);

	if (num2 + iParam2 > num)
		return true;

	return false;
}

BOOL func_186(Hash hParam0) // Position - 0x94D8 Hash - 0x6942A5C5 ^0xFA5CB2EF
{
	return func_333(hParam0) && func_76(hParam0, 1584357097);
}

Hash func_187(Hash hParam0) // Position - 0x94F6 Hash - 0xDDBFAC08 ^0x5ECDEB23
{
	if (!func_186(hParam0))
		return 0;

	switch (hParam0)
	{
		case -2109461640:
			return -1533903180;
	
		case -2050900874:
			return -856521084;
	
		case -2027203194:
			return 2081091619;
	
		case -1975194892:
			return 73453226;
	
		case -1894668475:
			return 1957000738;
	
		case -1815586685:
			return -412238982;
	
		case -1806184545:
			return 1874334976;
	
		case -1617589234:
			return -431273312;
	
		case -1617179117:
			return 862573726;
	
		case -1615607679:
			return 1686296029;
	
		case -1593520704:
			return -769187178;
	
		case -1382149068:
			return -240893062;
	
		case -1278925815:
			return 1640403026;
	
		case -1179959034:
			return -146516808;
	
		case -1085571851:
			return 1934791288;
	
		case -1053842899:
			return -2015093177;
	
		case -1042952050:
			return -1111852673;
	
		case -1029170414:
			return 1651235889;
	
		case -997271222:
			return 1353200767;
	
		case -878058438:
			return -668553641;
	
		case -873142887:
			return -337101316;
	
		case -862677113:
			return -1633818354;
	
		case -840486512:
			return -526428006;
	
		case -831411723:
			return -882484202;
	
		case -781656240:
			return -2040374903;
	
		case -755677768:
			return -1841483015;
	
		case -609641686:
			return 516107635;
	
		case -533360838:
			return 1220617347;
	
		case -464283790:
			return -553725692;
	
		case -452048774:
			return 974561281;
	
		case -429434400:
			return 1973137538;
	
		case -320325540:
			return 1029354793;
	
		case -297375678:
			return 2100623539;
	
		case -260985198:
			return -354862110;
	
		case -188079477:
			return -547676440;
	
		case -186533746:
			return -1123513064;
	
		case -142781743:
			return -99130340;
	
		case -131203731:
			return -1830556910;
	
		case -80071950:
			return -1229833684;
	
		case -51500315:
			return -260158053;
	
		case -28339930:
			return -2035393948;
	
		case 154924622:
			return 207980728;
	
		case 245915270:
			return 518337236;
	
		case 507515628:
			return -284580868;
	
		case 525029001:
			return 463034341;
	
		case 532885562:
			return 1728467402;
	
		case 538640747:
			return 677332424;
	
		case 550403966:
			return -1219424121;
	
		case 560856018:
			return 9691481;
	
		case 731907282:
			return 195889874;
	
		case 767294276:
			return -600422706;
	
		case 844146134:
			return 966617156;
	
		case 856007660:
			return 1019812717;
	
		case 919634467:
			return -1729036567;
	
		case 948647349:
			return -1058723344;
	
		case 1034120186:
			return 2091613460;
	
		case 1103717282:
			return 1767482612;
	
		case 1156363443:
			return 387193715;
	
		case 1254834984:
			return -311177636;
	
		case 1260724738:
			return -1889559288;
	
		case 1311814185:
			return -229245945;
	
		case 1332088703:
			return 1366042262;
	
		case 1348094862:
			return 863949896;
	
		case 1386939749:
			return 2105724242;
	
		case 1464921218:
			return -979751655;
	
		case 1502511939:
			return 1942551232;
	
		case 1561454517:
			return 465087209;
	
		case 1578729681:
			return 526083803;
	
		case 1646522145:
			return 1693169437;
	
		case 1701653225:
			return -1303234828;
	
		case 1717296181:
			return 149336704;
	
		case 1784374159:
			return 1100771587;
	
		case 1800445393:
			return 596295460;
	
		case 1809065934:
			return 518344954;
	
		case 1829957287:
			return 857944907;
	
		case 1864875333:
			return 1682604808;
	
		case 1879581870:
			return -1364982418;
	
		case 1890828381:
			return -1707282708;
	
		case 1894117705:
			return 1146825064;
	
		case 1952092069:
			return -1816797957;
	
		case 2039957913:
			return 329215271;
	
		case 2047228732:
			return 290265769;
	
		case 2081818376:
			return 1455922005;
	
		case 2095710966:
			return 1656345167;
	
		default:
		
	}

	return 0;
}

BOOL func_188(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x99AC Hash - 0xE8CB342E ^0xE8CB342E
{
	var unk;
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	unk = 15;

	if (!func_334(hParam0, hParam1, &unk, &num, false, true))
		return false;

	num3 = -1;

	if (Global_1915656.f_20638)
		num3 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		if (unk[i /*2*/] == joaat("currency_cash"))
		{
			if (!bParam4 && !func_335(unk[i /*2*/].f_1))
				return false;
		}
		else if (unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (!bParam4 && !func_336(unk[i /*2*/].f_1))
				return false;
		}
		else
		{
			num2 = func_236(num3, unk[i /*2*/]);
		
			if (num2 != 0)
				num4 = func_237(unk[i /*2*/], num2);
			else
				num4 = func_138(unk[i /*2*/], false, bParam3, true);
		
			if (num4 < unk[i /*2*/].f_1)
			{
				*uParam2 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

Hash func_189(Hash hParam0) // Position - 0x9AB3 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_25(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_190(Hash hParam0, char* sParam1, int iParam2, BOOL bParam3, BOOL bParam4, Hash hParam5) // Position - 0x9ADE Hash - 0x8994BB7F ^0xDE1269F5
{
	int cashBalance;
	int goldBarBalance;
	var unk;
	int num;
	int num2;
	int i;
	var unk32;
	int num3;
	var unk49;

	if (!func_25(hParam0, 0))
		return -1;

	if (func_179(hParam0) != joaat("fee"))
		return -1;

	if (func_81())
		bParam3 = true;

	unk = 15;

	if (hParam5 == -570078785 || hParam5 == -915411861)
	{
		cashBalance = func_337(hParam0, hParam5, true, false, true, joaat("currency_cash")) * iParam2;
		goldBarBalance = 0;
	
		if (cashBalance <= 0)
		{
			goldBarBalance = func_337(hParam0, hParam5, true, false, true, joaat("currency_gold_bar")) * iParam2;
		
			if (goldBarBalance <= 0)
				return -1;
		}
	
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, goldBarBalance))
			return -1;
	}
	else if (func_149(hParam0, hParam5, &unk, &num, true, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = unk[i /*2*/].f_1 * iParam2;
		
			if (!(func_138(unk[i /*2*/], false, bParam3, false) >= num2))
				return -1;
		}
	}
	else
	{
		return -1;
	}

	if (!bParam3 && func_80(false))
	{
		if (cashBalance > 0)
		{
			func_255(joaat("currency_cash"), cashBalance, -142743235, 0, false);
		}
		else if (goldBarBalance > 0)
		{
			func_255(joaat("currency_gold_bar"), goldBarBalance, -142743235, 0, false);
		}
		else if (func_338(hParam5))
		{
			for (i = 0; i < num; i = i + 1)
			{
				num2 = unk[i /*2*/].f_1 * iParam2;
				func_255(unk[i /*2*/], num2, -142743235, 0, false);
			}
		}
	
		return -1;
	}

	unk32.f_9 = 1;
	unk32.f_11 = joaat("SLOTID_NONE");
	unk32.f_8 = hParam0;
	unk32.f_9 = iParam2;
	unk32.f_13 = hParam5;
	unk32.f_12 = -142743235;
	num3 = func_339(joaat("spend"), &unk32, bParam4);

	if (num3 == -1)
	{
	}
	else
	{
		unk49.f_7 = -142743235;
		unk49.f_16 = -1;
		TEXT_LABEL_ASSIGN_STRING(&(unk49.f_12), sParam1, 32);
		func_195(num3, unk49);
	}

	return num3;
}

BOOL func_191(int* piParam0, Hash hParam1, Any* panParam2, BOOL bParam3, Hash hParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x9CCE Hash - 0xB79F2DE9 ^0xB79F2DE9
{
	Hash hash;

	if (!func_340(piParam0, false))
		return false;

	if (hParam4 == 0)
		hParam4 = func_341(hParam1, 0, true, iParam5, bParam6);

	if (!func_342(hParam1, hParam4, iParam5))
		return false;

	panParam2->f_17 = hParam1;
	panParam2->f_8 = hParam1;
	panParam2->f_9 = 1;
	panParam2->f_13 = hParam4;
	panParam2->f_12 = 1248274121;
	hash = 541670136;

	if (bParam7)
		hash = joaat("batch");

	if (!func_343(piParam0, panParam2, hash, hParam4, bParam3))
		return false;

	return true;
}

BOOL func_192(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, int iParam7, var uParam8, BOOL bParam9, Hash hParam10, int iParam11, BOOL bParam12) // Position - 0x9D55 Hash - 0xB722E8D ^0xB722E8D
{
	var unk;

	if (!func_340(piParam0, false))
		return false;

	if (!func_344(piParam0, hParam1, uParam2, hParam6, hParam10, iParam7, iParam11, bParam12))
		return false;

	unk = { func_345(hParam1, uParam2, hParam6, iParam7, bParam12) };
	unk.f_13 = hParam10;
	unk.f_12 = 1248274121;
	*uParam8 = { unk };

	if (!func_346(piParam0, &unk, 2113164098, bParam9, iParam11))
		return false;

	return true;
}

int func_193(Hash hParam0, Hash hParam1) // Position - 0x9DD2 Hash - 0x19C351C8 ^0x40F6A58B
{
	Hash outData;
	int awardAcquireCostCount;
	int i;

	outData.f_4 = 15;
	outData.f_36 = 10;
	awardAcquireCostCount = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT(hParam0);

	if (awardAcquireCostCount == 0)
		return 0;

	for (i = 0; i < awardAcquireCostCount; i = i + 1)
	{
		if (ITEMDATABASE::_0x1FC25AEB5F76B38D(hParam0, i, &outData) && outData == hParam1)
			return outData.f_2;
	}

	return 0;
}

int func_194(Hash hParam0, Hash hParam1) // Position - 0x9E2F Hash - 0x3A2C8450 ^0x3C621176
{
	var outData;

	if (func_223(hParam0) || func_76(hParam0, 1077060302))
		return func_193(func_224(hParam0, true), hParam1);

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return 0;

	return outData.f_2;
}

void func_195(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x9E88 Hash - 0x4EE39F09 ^0x4C62B7DF
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == 1 || Global_1292143.f_20.f_1[i /*21*/].f_1 == 5)
				Global_1292143.f_20.f_1[i /*21*/].f_4 = { uParam1 };
		
			return;
		}
	}

	return;
}

void func_196(int iParam0, BOOL bParam1) // Position - 0x9F06 Hash - 0x23556CE7 ^0xE508C6D9
{
	int num;

	if (bParam1 && !func_68(iParam0))
		return;

	num = func_117(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1951910[num /*23*/].f_3);
	return;
}

float func_197(var uParam0) // Position - 0x9F38 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_96(uParam0))
		return uParam0->f_1;

	if (func_347(uParam0))
		return uParam0->f_2;

	return func_348() - uParam0->f_1;
}

BOOL func_198(int iParam0, int iParam1) // Position - 0x9F6D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_199(var uParam0, float fParam1) // Position - 0x9F7C Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_348() - fParam1;
	func_349(uParam0, 1);
	func_350(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

var func_200(Player plParam0) // Position - 0x9FA2 Hash - 0x76D96CB1 ^0x9EF34143
{
	var value;

	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, plParam0);
	return value;
}

void func_201(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x9FB4 Hash - 0xE9C78D03 ^0xA59196A5
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam15))
		return;

	if (!func_100(false))
		return;

	iParam1 = 10;
	iParam1.f_1 = PLAYER::PLAYER_ID();
	iParam1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iParam1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam1, 14, 13, &uParam15);
	return;
}

void func_202(Player plParam0, BOOL bParam1) // Position - 0x9FFC Hash - 0x62CDA5 ^0x8AD58E5C
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1144526[gangLeader /*83*/].f_38.f_28.f_2) || Global_1144526[gangLeader /*83*/].f_38.f_28.f_2 == plParam0 || bParam1)
		{
			Global_1144526[gangLeader /*83*/].f_38.f_28.f_2 = 255;
			Global_1144526[gangLeader /*83*/].f_38.f_28.f_3 = -1;
		}
	}

	return;
}

void func_203(Player plParam0, var uParam1) // Position - 0xA06F Hash - 0xF061BB09 ^0x6B4176C0
{
	var outTime;
	var timeToAdd;

	if (plParam0 < 0 || plParam0 >= 32)
		return;

	CLOCK::_GET_POSIX_TIME_STRUCT(&outTime);
	timeToAdd.f_3 = 2;
	timeToAdd.f_4 = 24;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&outTime, &timeToAdd, &outTime);
	Global_1144526[plParam0 /*83*/].f_38.f_28.f_1 = uParam1;
	Global_1147183.f_339.f_1 = uParam1;
	Global_1147183.f_339.f_9 = { outTime };
	return;
}

int func_204(Any anParam0) // Position - 0xA0D1 Hash - 0x76E7BE82 ^0xFEC3730C
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return -1;

	if (anParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
		return func_351(PLAYER::PLAYER_ID());

	return func_352(GANG::NETWORK_GET_GANG_LEADER(anParam0));
}

void func_205(int iParam0, var uParam1) // Position - 0xA109 Hash - 0x1ECBEB44 ^0xB5190F6A
{
	var unk;

	unk.f_8 = iParam0;
	unk.f_12 = uParam1;
	func_201(17, unk, func_353(0, 8));
	return;
}

void func_206(var uParam0) // Position - 0xA12E Hash - 0x5ED6FAF7 ^0xC8098BF4
{
	var unk;

	unk.f_12 = uParam0;
	func_201(13, unk, func_200(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))));
	return;
}

struct<2> func_207(Hash hParam0) // Position - 0xA156 Hash - 0x8E94575A ^0xD328884E
{
	return func_88(joaat("MADE"), hParam0);
}

struct<2> func_208(Hash hParam0) // Position - 0xA169 Hash - 0x1A31B43B ^0x46504F07
{
	var unk;

	if (func_212(hParam0, 0))
		unk = { func_88(joaat("made_recipe_type"), joaat("FOOD")) };
	else if (func_212(hParam0, 2))
		unk = { func_88(joaat("made_recipe_type"), joaat("AMMO")) };
	else if (func_212(hParam0, 5))
		unk = { func_88(joaat("made_recipe_type"), joaat("horse_care")) };
	else if (func_212(hParam0, 1))
		unk = { func_88(joaat("made_recipe_type"), joaat("remedies")) };
	else if (func_212(hParam0, 3))
		unk = { func_88(joaat("made_recipe_type"), joaat("WEAPONS")) };
	else if (func_212(hParam0, 4))
		unk = { func_88(joaat("made_recipe_type"), joaat("Hunting")) };

	return unk;
}

Vector3 func_209(Player plParam0) // Position - 0xA22C Hash - 0x4168FF99 ^0xE3960051
{
	if (plParam0 == 255)
		return Global_1144526[func_354() /*83*/].f_38;

	return Global_1144526[plParam0 /*83*/].f_38;
}

BOOL func_210(int iParam0, Any anParam1, int iParam2, var uParam3, BOOL bParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0xA258 Hash - 0x72C1A759 ^0xD848AFAA
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
		func_355(iParam2, -372840566);

	SECURE_STORE(&unk, iParam0);

	if (!bParam7)
		if (!NETWORK::_0x64A36BA85CE01A81(&unk, &(uParam3->f_1), &(iParam2->f_1), anParam1))
			return 0;
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&unk, &(iParam2->f_1), anParam1))
		return 0;

	unk2.f_1 = 11;
	unk2.f_16 = 255;
	unk2.f_13 = bParam4;
	unk2.f_16 = iParam5;
	unk2.f_14 = iParam6;
	unk2 = { *iParam2 };
	func_356(anParam1, iParam0, unk2);
	return 1;
}

int func_211(int iParam0, BOOL bParam1, int iParam2) // Position - 0xA339 Hash - 0x3DD75313 ^0x4F77747
{
	if (func_357(255))
		return 1;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_XP")))
		return 0;

	if (!func_358(iParam0))
		return 0;

	if (!func_106(func_359(iParam0), !bParam1, iParam2, 0, false))
		return 0;

	return 1;
}

BOOL func_212(Hash hParam0, int iParam1) // Position - 0xA387 Hash - 0xB51BEA17 ^0xA0420D6A
{
	int num;

	if (!func_25(hParam0, 0))
		return false;

	num = func_179(hParam0);

	switch (iParam1)
	{
		case 0:
			if (func_130(hParam0) || func_65(hParam0, -1636519629) == -701492487 || hParam0 == joaat("provision_moonshine_poison"))
				return true;
			break;
	
		case 1:
			if (func_76(hParam0, -537818634) || func_76(hParam0, -458578204) && !func_76(hParam0, -1242251796) && !func_76(hParam0, 127710288))
				return true;
			break;
	
		case 2:
			if (num == joaat("AMMO"))
			{
				if (func_76(hParam0, -1588156645))
					return false;
			
				return true;
			}
			break;
	
		case 3:
			if (num == joaat("WEAPON"))
				return true;
			else if (num == joaat("AMMO"))
				if (func_76(hParam0, -1588156645))
					return true;
			break;
	
		case 4:
			if (func_76(hParam0, 127710288))
				return true;
			break;
	
		case 5:
			if (func_76(hParam0, -1242251796))
				return true;
			break;
	}

	return false;
}

int func_213(int iParam0) // Position - 0xA4CD Hash - 0xCC8E274D ^0x5A12C894
{
	int num;
	int num2;

	if (func_360())
		return 0;

	if (!NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return 0;

	if (func_361())
		return 0;

	num = func_362(iParam0);
	num2 = func_363(num, 2);

	if (num2 >= 5)
		return 0;

	if (!func_106(func_364(iParam0), false, 255, 0, false))
		return 0;

	return 1;
}

void func_214(var uParam0, Hash hParam1, Hash hParam2) // Position - 0xA52A Hash - 0x8560B5D8 ^0x6EB0FF3E
{
	int acquireCostsCount;
	Hash outData;
	int i;

	acquireCostsCount = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(hParam1);
	outData.f_4 = 15;
	outData.f_36 = 10;

	for (i = 0; i < acquireCostsCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(hParam1, i, &outData))
			if (outData != hParam2)
				if (outData.f_2 == joaat("cost_type_craft") && outData != -489628648 && outData != -2141192156 && Global_1913634.f_1579 || !func_134(hParam1, outData, true))
					Global_1913634[uParam0->f_45 - 1 /*9*/].f_7 = Global_1913634[uParam0->f_45 - 1 /*9*/].f_7 + 1;
			else
				Global_1913634[uParam0->f_45 - 1 /*9*/].f_8 = i;
	}

	return;
}

void func_215(var uParam0, Hash hParam1) // Position - 0xA5E6 Hash - 0x73D38B14 ^0x6EBCB5A9
{
	int num;
	int num2;
	int num3;
	var unk;
	int i;
	Hash hash;

	num3 = func_65(hParam1, 1697966752);

	if (num3 == 0)
		return;

	unk = { func_154(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("cost_crafting_grill"), 0, -1, num3, 0) };

	if (func_155(unk, &num, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			hash = func_156(i, num);
		
			if (func_25(hash, 0))
				if (Global_1913634.f_1579 || !func_134(hash, joaat("cost_crafting_grill"), true))
					Global_1913634[uParam0->f_45 - 1 /*9*/].f_7 = Global_1913634[uParam0->f_45 - 1 /*9*/].f_7 + 1;
		}
	
		func_157(num);
	}

	return;
}

void func_216(var uParam0, Hash hParam1, int iParam2) // Position - 0xA69D Hash - 0x8D770326 ^0x14D0BF12
{
	int num;
	int num2;
	int num3;
	var unk;
	int i;
	Hash hash;

	num3 = func_65(hParam1, -1859264326);

	if (num3 == 0)
		return;

	unk = { func_154(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num3, 0) };

	if (func_155(unk, &num, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (uParam0->f_45 >= 175)
				break;
		
			hash = func_156(i, num);
		
			if (func_25(hash, 0) && hash != hParam1)
				func_120(uParam0, hash, iParam2);
		}
	
		func_157(num);
	}

	return;
}

void func_217(var uParam0) // Position - 0xA735 Hash - 0xF0728FFC ^0xF0728FFC
{
	func_157(*uParam0);
	*uParam0 = -1;
	return;
}

void func_218(var uParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA749 Hash - 0xE8AAFAC7 ^0x6F4EA24F
{
	Hash key;
	var unk;
	Hash hash;
	Hash hash2;
	int num;
	int num2;
	int num3;
	BOOL flag;
	var unk5;
	Hash hash3;
	BOOL flag2;
	Hash hash4;
	Hash hash5;
	int num4;
	const char* str;
	int outData;
	BOOL flag3;
	int i;
	var outData2;
	Hash hash6;

	key = Global_1913634[hParam1 /*9*/].f_6;
	TEXT_LABEL_ASSIGN_STRING(&unk, "r_", 32);
	TEXT_LABEL_APPEND_INT(&unk, key, 32);
	TEXT_LABEL_APPEND_INT(&unk, hParam1, 32);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913634[hParam1 /*9*/].f_1))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913634[hParam1 /*9*/].f_1);

	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_30, &unk);
	Global_1913634[hParam1 /*9*/].f_1 = hash;
	hash2 = Global_1913634[hParam1 /*9*/].f_5;
	num = func_140(key, hash2, bParam3, false);
	num2 = func_138(key, false, false, false);
	num3 = func_139(key, false);

	if (num3 != -1)
		num3 = num3 - num2;
	else
		num3 = num;

	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "name", key);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "eOutputItem", key);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "eCost", hash2);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "iIndex", hParam1);

	if (!Global_1913634.f_1579 && func_134(key, hash2, true))
	{
		flag = true;
		Global_1913634[hParam1 /*9*/].f_7 = 0;
	}

	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "iCurCostVariant", Global_1913634[hParam1 /*9*/].f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "iNumCostVariants", Global_1913634[hParam1 /*9*/].f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "bFireCrafting", hash2 == -257768755);
	TEXT_LABEL_APPEND_INT(&unk5, func_141(num3, num), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, "count", &unk5);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "visible", false);
	flag2 = false;

	if (func_31(uParam0, 2))
		hash3 = num > 0 && func_136(key) && !flag ? 1 : 0;
	else
		hash3 = num3 > 0 && num > 0 && !flag ? 1 : 0;

	if (hash3 == 0 && func_219(key))
	{
		if (func_220(key, hash2, uParam0, bParam3, &hash4, &hash5, &num4))
		{
			hash3 = 1;
			flag2 = true;
			key = hash4;
			hash2 = hash5;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "name", hash4);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(hash, "eOutputItem", hash4);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(hash, "eCost", hash5);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(hash, "iCurCostVariant", num4);
		}
	}

	if (func_221(key, &str, joaat("Inventory"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, "texture", str);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, "textureDictionary", str.f_1);
	}

	if (!func_31(uParam0, 4))
		if (hash2 == -214678071 || hash2 == joaat("cost_crafting_grill") || hash2 == -257768755)
			hash3 = 0;

	if (hash3 == 1)
	{
		if (!func_137(2) && func_65(key, -1636519629) == -701492487)
		{
			Global_1913634[hParam1 /*9*/].f_2 = 0;
			hash3 = 0;
		}
		else
		{
			uParam0->f_47 = uParam0->f_47 + 1;
		
			if (func_212(key, uParam0->f_42))
				uParam0->f_48 = uParam0->f_48 + 1;
		
			Global_1913634[hParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		Global_1913634[hParam1 /*9*/].f_2 = 0;
	}

	flag2;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "lockVisible", flag);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "enabled", hash3);
	outData.f_1 = 20;
	flag3 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "deadeyeCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "deadeyeDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "healthDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "healthCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "staminaCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "staminaDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "healthHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "healthCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "staminaCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "staminaHorseDurationCategory", 0);

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(key, &outData))
	{
		for (i = 0; i < outData; i = i + 1)
		{
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2))
			{
				hash6 = outData2.f_2;
			
				switch (outData2.f_1)
				{
					case joaat("EFFECT_HORSE_HEALTH_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "healthCoreHorse", hash6);
						break;
				
					case -1240225157:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "stamina" /*Stamina*/, 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "staminaDurationCategory", outData2.f_6);
						break;
				
					case joaat("Effect_Stamina_Core_Gold"):
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "staminaCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "staminaCoreDurationCategory", outData2.f_6);
						break;
				
					case -1104847406:
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "deadeye", hash6);
						break;
				
					case -943921969:
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "health", hash6);
						break;
				
					case joaat("Effect_Deadeye_Core_Gold"):
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "deadeyeCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "deadeyeCoreDurationCategory", outData2.f_6);
						break;
				
					case -778289619:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "healthHorseDurationCategory", outData2.f_6);
						break;
				
					case joaat("EFFECT_HEALTH_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "healthCore", hash6);
						break;
				
					case 381158954:
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "stamina" /*Stamina*/, hash6);
						break;
				
					case 855745648:
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "staminaCoreHorse", hash6);
						break;
				
					case 978049229:
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "healthHorse", hash6);
						break;
				
					case 1136630075:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "healthCoreHorseDurationCategory", outData2.f_6);
						break;
				
					case 1342237631:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "deadeye", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "deadeyeDurationCategory", outData2.f_6);
						break;
				
					case 1365603835:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "staminaCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "staminaCoreHorseDurationCategory", outData2.f_6);
						break;
				
					case 1497139093:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "staminaHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "staminaHorseDurationCategory", outData2.f_6);
						break;
				
					case joaat("EFFECT_STAMINA_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "staminaCore", hash6);
						break;
				
					case joaat("EFFECT_DEADEYE_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "deadeyeCore", hash6);
						break;
				
					case 1869697234:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "healthDurationCategory", outData2.f_6);
						break;
				
					case joaat("Effect_Health_Core_Gold"):
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "healthCoreDurationCategory", outData2.f_6);
						break;
				}
			}
		}
	}

	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "overpower", flag3);

	if (bParam2)
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_30, -1, joaat("crafting_list_item"), hash);

	return;
}

BOOL func_219(Hash hParam0) // Position - 0xAD7C Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_220(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, var uParam4, var uParam5, var uParam6) // Position - 0xAD85 Hash - 0x2B10BFBA ^0x2B10BFBA
{
	int num;
	int num2;
	var unk;
	int num3;
	int i;
	Hash hash;
	int j;
	Hash hash2;
	int acquireCostsCount;
	Hash outData;
	int k;

	if (!func_25(hParam0, 0))
		return false;

	if (!Global_1913634.f_1579 && func_134(hParam0, hParam1, true))
		return false;

	if (func_31(uParam2, 2) && !func_136(hParam0))
		return false;

	if (hParam1 == -214678071 || hParam1 == joaat("cost_crafting_grill"))
	{
		unk = -1;
		unk.f_1 = -1;
		unk.f_2 = -1;
		unk.f_3 = -1;
		unk.f_4 = -1;
		unk.f_5 = -1;
		unk.f_6 = -1;
		unk.f_7 = -1;
		unk.f_8 = -1;
		num3 = func_65(hParam0, 1697966752);
	
		if (num3 == 0)
			return false;
	
		unk = { func_154(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("cost_crafting_grill"), 0, -1, num3, 0) };
	
		if (func_155(unk, &num, &num2, 0))
		{
			for (i = 0; i < num2; i = i + 1)
			{
				hash = func_156(i, num);
			
				if (hParam0 == hash)
				{
				}
				else if (!Global_1913634.f_1579 && func_134(hash, joaat("cost_crafting_grill"), true))
				{
				}
				else if (func_85(hash, joaat("cost_crafting_grill"), false, bParam3, false) && !func_86(hash, 1, false))
				{
					func_157(num);
					*uParam4 = hash;
					*uParam5 = joaat("cost_crafting_grill");
					*uParam6 = i;
				
					if (func_76(*uParam4, 2127114599))
						*uParam6 = 1;
					else if (func_76(*uParam4, -1864584831))
						*uParam6 = 2;
					else if (func_76(*uParam4, 1967571132))
						*uParam6 = 3;
				
					return true;
				}
			}
		
			func_157(num);
		}
	
		if (hParam1 == joaat("cost_crafting_grill"))
		{
			unk = { func_154(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, -214678071, 0, -1, num3, 0) };
		
			if (func_155(unk, &num, &num2, 0))
			{
				for (j = 0; j < num2; j = j + 1)
				{
					hash2 = func_156(j, num);
				
					if (hParam0 == hash2)
					{
					}
					else if (!Global_1913634.f_1579 && func_134(hash2, -214678071, true))
					{
					}
					else if (func_85(hash2, -214678071, false, bParam3, false) && !func_86(hash2, 1, false))
					{
						func_157(num);
						*uParam4 = hash2;
						*uParam5 = -214678071;
						*uParam6 = j;
						return true;
					}
				}
			
				func_157(num);
			}
		}
	}
	else
	{
		acquireCostsCount = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(hParam0);
		outData.f_4 = 15;
		outData.f_36 = 10;
	
		for (k = 0; k < acquireCostsCount; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(hParam0, k, &outData))
			{
				if (outData.f_2 == joaat("cost_type_craft"))
				{
					if (outData != -489628648 && outData != -2141192156 && Global_1913634.f_1579 || !func_134(hParam0, outData, true))
					{
						if (func_85(hParam0, outData, false, bParam3, false) && !func_86(hParam0, 1, false))
						{
							*uParam4 = hParam0;
							*uParam5 = outData;
							*uParam6 = k;
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_221(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0xB0A4 Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE3;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE3;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE3;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE3;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = { outData.f_2[i /*3*/] };
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_222(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xB197 Hash - 0x5E278D9E ^0x9ED660B8
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_250(hParam0, 2))
		return 0;

	unk = 10;

	if (bParam2 && func_27() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return 1;

	if (!func_365(hParam0, hParam1, &unk, &num) || num < 1)
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		unlockHash = unk[i];
	
		if (unlockHash == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		{
			return 1;
		}
	}

	return 0;
}

BOOL func_223(Hash hParam0) // Position - 0xB225 Hash - 0x672E565C ^0xD531C7FC
{
	if (func_76(hParam0, 75135761))
		return true;

	return false;
}

Hash func_224(Hash hParam0, BOOL bParam1) // Position - 0xB240 Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_25(hParam0, 0))
		return func_366(func_168(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

BOOL func_225(Hash hParam0, Hash hParam1) // Position - 0xB298 Hash - 0x86D562BB ^0xB258F193
{
	var outData;
	int outUnk;
	Hash unlockHash;
	int num;
	int i;
	int j;

	outData = 10;
	outData.f_1.f_4 = 15;
	outData.f_1.f_36 = 10;
	outData.f_1.f_47.f_4 = 15;
	outData.f_1.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(hParam0, &outData, &outUnk, 10) || outUnk == 0)
		return false;

	num = 0;

	for (i = 0; i < outUnk; i = i + 1)
	{
		if (outData[i /*47*/] == hParam1)
		{
			num = outData[i /*47*/].f_35;
		
			for (j = 0; j < num; j = j + 1)
			{
				unlockHash = outData[i /*47*/].f_36[j];
			
				if (unlockHash == 0)
				{
				}
				else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
				{
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_226(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0xB3E1 Hash - 0xE87847ED ^0xAF7DC6D
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_25(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return false;

	if (outData.f_35 > 10)
		outData.f_35 = 10;

	*uParam3 = outData.f_35;

	for (i = 0; i < outData.f_35; i = i + 1)
	{
		uParam2->[i] = outData.f_36[i];
	}

	return true;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_227(Hash hParam0, int iParam1, Hash hParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0xB465 Hash - 0x9BC46265 ^0xEE2DD19E
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;
	int num4;
	int num5;
	Entity entity;
	int num6;
	int num7;

	if (func_223(hParam0) || func_76(hParam0, 1077060302))
		return func_188(func_224(hParam0, true), hParam2, uParam3, true, false);

	unk = 15;

	if (!func_149(hParam0, hParam2, &unk, &num, true, false))
		return false;

	flag = !bParam6 && func_80(false) && !func_81();
	num5 = -1;

	if (Global_1915656.f_20638)
		num5 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0 || unk[i /*2*/] == 1412640604)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && bParam7 || func_335(num2))
			goto 0x1F3;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && bParam7 || func_336(num2))
		{
		}
		else
		{
			num4 = func_236(num5, unk[i /*2*/]);
		
			if (num4 != 0)
			{
				bParam5 = false;
				num3 = func_237(unk[i /*2*/], num4);
			}
			else
			{
				num3 = func_138(unk[i /*2*/], false, !flag, true);
			}
		
			if (num3 >= num2)
			{
			}
			else
			{
				if (flag)
				{
					if (func_238(unk[i /*2*/]) || func_239(unk[i /*2*/]))
					{
						entity = 0;
					
						if (bParam5)
							num6 = func_241(7, unk[i /*2*/], &entity);
					
						num7 = func_240(unk[i /*2*/], num4);
					
						if (num3 + num6 + num7 >= num2)
							if (num3 + num7 < num2 && ENTITY::DOES_ENTITY_EXIST(entity))
								*uParam4 = entity;
						else
							goto 0x1E3;
					}
				
					if (bParam5 && num3 + func_242(7, unk[i /*2*/]) + func_243(unk[i /*2*/]) >= num2)
					{
					}
					else
					{
						*uParam3 = { unk[i /*2*/] };
						return false;
					}
				}
			
				*uParam3 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

Hash func_228() // Position - 0xB665 Hash - 0x974F0551 ^0x57E78BB0
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	return func_119(gangLeader);
}

int func_229(Hash hParam0) // Position - 0xB681 Hash - 0x72F100A6 ^0xB841B60C
{
	switch (hParam0)
	{
		case -1612693182:
			return 2;
	
		case -1171462349:
			return 4;
	
		case 1046181202:
			return 0;
	
		case 1689071181:
			return 3;
	
		case 1856073229:
			return 1;
	
		default:
		
	}

	if (func_76(hParam0, -2011345500))
		return 5;

	return 0;
}

BOOL func_230(BOOL bParam0, int iParam1) // Position - 0xB6D9 Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && iParam1 != false;
}

Hash func_231(Hash hParam0, int iParam1) // Position - 0xB6E8 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_25(hParam0, 0))
		return 0;

	num = func_179(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_76(hParam0, 1399091007))
	{
		func_367(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_232(Hash hParam0, BOOL bParam1) // Position - 0xB762 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_368(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_369(&unk, func_323(false));

	if (!func_370(&unk, &num, &num2, false))
		return 0;

	func_371(num);
	return num2;
}

int func_233(Hash hParam0, Hash hParam1) // Position - 0xB7C1 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_250(func_168(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

struct<4> func_234(Hash hParam0, BOOL bParam1) // Position - 0xB7ED Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_184(hParam0, bParam1, false) };
	return func_322(hParam0, unk, unk.f_4, bParam1);
}

int func_235(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB812 Hash - 0xFE9D5798 ^0xDB9F4CF5
{
	if (!func_25(hParam0, 0))
	{
		if (func_250(func_168(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_179(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_233(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_172(bParam3), hParam0);
}

int func_236(int iParam0, Hash hParam1) // Position - 0xB886 Hash - 0x3911B2FD ^0x13C4D79B
{
	if (iParam0 == 15 && func_76(hParam1, -2051813666))
		return 1;

	return 0;
}

int func_237(Hash hParam0, int iParam1) // Position - 0xB8AB Hash - 0x3B4883DD ^0xBE4A62CA
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_25(hParam0, 0))
		return 0;

	unk = { func_321(false) };
	unk.f_4 = func_320(iParam1);
	guid = { func_322(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_172(false), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_238(Hash hParam0) // Position - 0xB906 Hash - 0x7A41F8FA ^0x4ED5CABB
{
	if (!func_25(hParam0, 0))
		return false;

	if (func_76(hParam0, joaat("ci_tag_item_meat_animal")))
		return true;

	return func_239(hParam0);
}

BOOL func_239(Hash hParam0) // Position - 0xB935 Hash - 0x1FFCC90D ^0xF5D25358
{
	if (!func_25(hParam0, 0))
		return 0;

	if (func_76(hParam0, -839724752))
		return 1;

	return 0;
}

int func_240(Hash hParam0, int iParam1) // Position - 0xB95F Hash - 0x7A47071E ^0x7A47071E
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	Hash hash;
	int i;
	Hash hash2;
	int num5;

	if (!func_25(hParam0, 0))
		return 0;

	if (!func_238(hParam0) && !func_239(hParam0))
		return 0;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	num4 = func_65(hParam0, 1697966752);

	if (num4 == 0)
		return 0;

	unk = { func_154(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 235313564, 0, 0, -1, num4, 0) };

	if (func_155(unk, &num2, &num3, 0))
	{
		for (i = 0; i < num3; i = i + 1)
		{
			hash = func_156(i, num2);
		
			if (func_25(hash, 0) && hParam0 != hash)
			{
				hash2 = func_372(hash);
			
				if (hash2 != 0)
				{
					num5 = func_237(hash, iParam1);
				
					if (num5 > 0)
						num = num + (num5 * func_374(hash2, func_373(hash), hParam0));
				}
			}
		}
	
		func_157(num2);
	}

	return num;
}

int func_241(int iParam0, Hash hParam1, var uParam2) // Position - 0xBA7C Hash - 0xFBFC702 ^0xFBFC702
{
	Ped ped;
	ItemSet itemset;
	int itemsetSize;
	var unk;
	int num;
	int i;
	Entity entityFromItem;
	int j;
	Hash hash;

	iParam0 = func_251(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_25(hParam1, 0))
		return 0;

	if (!func_375(iParam0))
		return 0;

	ped = func_173(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return 0;

	if (PED::IS_PED_INJURED(ped))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return 0;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(ped, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	unk.f_1 = 10;
	unk.f_12 = 10;
	num = 0;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!func_376(entityFromItem))
		{
		}
		else
		{
			MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), true, true, ENTITY::GET_ENTITY_MODEL(entityFromItem), &unk, 0);
		
			for (j = 0; j < 10; j = j + 1)
			{
				hash = unk.f_1[j];
			
				if (hash == hParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
						*uParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
				
					num = num + 1;
				}
			}
		}
	}

	if (ITEMSET::IS_ITEMSET_VALID(itemset))
		ITEMSET::DESTROY_ITEMSET(itemset);

	return num;
}

int func_242(int iParam0, Hash hParam1) // Position - 0xBBA9 Hash - 0x9B281D8A ^0x9B281D8A
{
	Ped horse;
	Hash hash;
	int num;
	int i;

	iParam0 = func_251(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_25(hParam1, 0))
		return 0;

	if (!func_375(iParam0))
		return 0;

	horse = func_173(iParam0);
	hash = hParam1;

	if (ENTITY::IS_ENTITY_DEAD(horse))
		return 0;

	if (PED::IS_PED_INJURED(horse))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(horse))
		return 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (PED::_GET_PELT_FROM_HORSE(horse, i) != hash)
		{
		}
		else
		{
			num = num + 1;
		}
	}

	return num;
}

int func_243(Hash hParam0) // Position - 0xBC47 Hash - 0x3CFC8FF5 ^0xC9DF94B0
{
	int num;
	Entity firstEntityPedIsCarrying;

	if (!func_25(hParam0, 0))
		return 0;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) && !ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
			if (hParam0 == ENTITY::_GET_CARRIABLE_FROM_ENTITY(firstEntityPedIsCarrying))
				num = num + 1;
	}

	return num;
}

BOOL func_244() // Position - 0xBC99 Hash - 0x11DC3931 ^0xD7F905DE
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-768274665);
}

char* func_245(Hash hParam0) // Position - 0xBCAA Hash - 0x33FCA2DF ^0xD2A71B7A
{
	switch (func_229(hParam0))
	{
		case 1:
			return "STEW_TIP_LOW";
	
		case 2:
			return "STEW_TIP_MED";
	
		case 3:
			return "STEW_TIP_HIGH";
	
		case 4:
			return "STEW_TIP_BEST";
	
		case 5:
			return "STEW_TIP_DAILY";
	
		default:
		
	}

	return "STEW_TIP_LOW";
}

void func_246(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0xBD03 Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_189(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_247(Hash hParam0, int iParam1) // Position - 0xBED9 Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_25(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_231(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_377("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_378(&unk, i, num, num2))
			{
			}
			else if (!func_264(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_371(num);
				return true;
			}
		}
	
		func_371(num);
	}

	return false;
}

BOOL func_248(Hash hParam0) // Position - 0xBF81 Hash - 0x52397408 ^0x52397408
{
	Hash hash;
	int num;
	int num2;

	if (!func_25(hParam0, 0))
		return false;

	hash = func_189(hParam0);

	switch (hash)
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

	num = func_379(hParam0);

	if (!(num == 0))
	{
		num2 = func_380(&(Global_17418.f_55.f_664.f_1354.f_5), num);
	
		if (num2 == -1)
			return true;
	}

	num = func_381(hParam0);
	num2 = func_380(&(Global_17418.f_55.f_664.f_1354.f_5), num);

	if (num2 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num2 /*17*/];
}

BOOL func_249(int iParam0) // Position - 0xC03E Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_112(iParam0, 2);
}

BOOL func_250(Hash hParam0, int iParam1) // Position - 0xC04D Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

int func_251(int iParam0) // Position - 0xC067 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_38.f_289;

	return iParam0;
}

float func_252(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xC080 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_253(int iParam0, char* sParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC09E Hash - 0x21661D27 ^0x8D9AE15F
{
	int num;

	if (func_27() == 0)
	{
		num = func_382();
	
		if (num < iParam0)
			iParam0 = num;
	
		func_383(iParam0, sParam1, -142743235, bParam4);
	}
	else
	{
		func_384(iParam0);
	
		if (bParam3)
			func_385(iParam0, sParam1, iParam2);
	}

	return;
}

int func_254(int iParam0, Hash hParam1, int iParam2) // Position - 0xC0E7 Hash - 0xFBFC702 ^0xFBFC702
{
	Ped ped;
	ItemSet itemset;
	int itemsetSize;
	var unk;
	int num;
	int i;
	Entity entityFromItem;
	int j;
	Hash hash;
	Hash hash2;

	iParam0 = func_251(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_25(hParam1, 0))
		return 0;

	if (!func_375(iParam0))
		return 0;

	ped = func_173(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return 0;

	if (PED::IS_PED_INJURED(ped))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return 0;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(ped, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	unk.f_1 = 10;
	unk.f_12 = 10;
	num = 0;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		if (num >= iParam2)
			break;
	
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!func_376(entityFromItem))
		{
		}
		else
		{
			MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), true, true, ENTITY::GET_ENTITY_MODEL(entityFromItem), &unk, 0);
		
			for (j = 0; j < 10; j = j + 1)
			{
				hash = unk.f_1[j];
			
				if (hash == hParam1)
				{
					func_298(hParam1, 1, 752097756);
				
					if (ENTITY::DOES_ENTITY_EXIST(entityFromItem))
					{
						hash2 = func_386(&entityFromItem);
					
						if (!func_25(hash2, 0))
							hash2 = func_387(entityFromItem);
					
						if (func_25(hash2, 0))
							func_388(hash2, 1, ped, true, -142743235);
					
						ENTITY::_DELETE_CARRIABLE(&entityFromItem);
					}
				
					num = num + 1;
				}
			}
		}
	}

	if (ITEMSET::IS_ITEMSET_VALID(itemset))
		ITEMSET::DESTROY_ITEMSET(itemset);

	return num;
}

BOOL func_255(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC25B Hash - 0xDDC024C0 ^0x60000BA4
{
	int num;
	var unk;
	var unk6;

	if (!func_25(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_233(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_389(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk = { func_184(hParam0, bParam4, 0) };
	unk6 = { func_322(hParam0, unk, unk.f_4, bParam4) };
	return func_390(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

void func_256(Hash hParam0, int iParam1) // Position - 0xC2D3 Hash - 0xF788DCE ^0xB69D967B
{
	int num;
	int num2;
	var unk;
	int num3;
	Hash hash;
	int i;
	int j;

	if (iParam1 > 0)
	{
		unk = -1;
		unk.f_1 = -1;
		unk.f_2 = -1;
		unk.f_3 = -1;
		unk.f_4 = -1;
		unk.f_5 = -1;
		unk.f_6 = -1;
		unk.f_7 = -1;
		unk.f_8 = -1;
		num3 = func_65(hParam0, 1697966752);
	
		if (num3 == 0)
			return;
	
		unk = { func_154(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 235313564, 0, 0, -1, num3, 0) };
	
		if (func_155(unk, &num, &num2, 0))
		{
			for (i = 0; i < num2; i = i + 1)
			{
				if (iParam1 <= 0)
					break;
			
				hash = func_156(i, num);
			
				if (func_25(hash, 0) && hParam0 != hash)
				{
					for (j = func_138(hash, false, false, false); j > 0 && iParam1 > 0; j = j - 1)
					{
						iParam1 = iParam1 - func_391(hash, hParam0, false);
					}
				}
			}
		
			func_157(num);
		}
	}

	return;
}

BOOL func_257(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0xC3D1 Hash - 0x6E56F3C0 ^0x23695AE
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;
	var unk2;

	if (!func_25(hParam0, 0))
		return false;

	if (hParam3 == -142743235)
		if (func_392(hParam0))
			hParam3 = 562618531;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_231(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return false;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_181(hParam0, -iParam1, flag, flag2, flag3, false, false);
	
		return false;
	}

	if (!func_150(hParam0, 1))
		return false;

	statId = { func_316(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_138(hParam0, false, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_138(hParam0, false, false, false) - iParam1 < 0)
		{
			func_257(hParam0, func_138(hParam0, false, false, false), bParam2, hParam3);
			return false;
		}
	}

	if (func_179(hParam0) == joaat("WEAPON"))
	{
		if (!func_393(hParam0, iParam1, false, hParam3))
			return false;
	}
	else if (!func_255(hParam0, iParam1, hParam3, bParam2, false))
	{
		return false;
	}
	else
	{
		unk2 = { func_184(hParam0, false, 0) };
	
		if (func_80(false) && unk2.f_4 == joaat("SLOTID_SATCHEL"))
			func_394(1, false, 0);
	}

	if (hParam0 == joaat("document_player_journal"))
		Global_1940085.f_21 = 0;

	if (!func_80(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_181(hParam0, -iParam1, flag, flag2, flag3, false, false);

	return true;
}

void func_258(Hash hParam0) // Position - 0xC583 Hash - 0x4C927607 ^0x7C031F72
{
	Entity firstEntityPedIsCarrying;
	Ped pedIndexFromEntityIndex;
	var unk;
	int num;
	int i;
	Hash hash;

	!func_25(hParam0, 0);

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying);
		
			if (ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
			{
				unk = 10;
				num = func_395(pedIndexFromEntityIndex, &unk);
			
				for (i = 0; i < num; i = i + 1)
				{
					if (unk[i] == hParam0)
					{
						ENTITY::_DELETE_CARRIABLE(&firstEntityPedIsCarrying);
						break;
					}
				}
			}
			else if (PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&hash, pedIndexFromEntityIndex, PED::_GET_PED_DAMAGE_CLEANLINESS(pedIndexFromEntityIndex)) && hash == hParam0)
			{
				ENTITY::_DELETE_CARRIABLE(&firstEntityPedIsCarrying);
			}
		}
	}

	return;
}

int func_259(int iParam0, Hash hParam1, int iParam2) // Position - 0xC61E Hash - 0xFBFC702 ^0xFBFC702
{
	Ped horse;
	Hash hash;
	int num;
	int i;

	iParam0 = func_251(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_25(hParam1, 0))
		return 0;

	if (!func_375(iParam0))
		return 0;

	horse = func_173(iParam0);
	hash = hParam1;

	if (ENTITY::IS_ENTITY_DEAD(horse))
		return 0;

	if (PED::IS_PED_INJURED(horse))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(horse))
		return 0;

	num = 0;

	for (i = 0; i < iParam2; i = i + 1)
	{
		if (PED::_GET_PELT_FROM_HORSE(horse, i) != hash)
		{
		}
		else if (func_396(hParam1, iParam2, true, -142743235))
		{
			num = num + 1;
		}
	}

	return num;
}

int func_260(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0xC6D4 Hash - 0x4DB90AB5 ^0x4DB90AB5
{
	var unk;
	var unk6;

	if (func_27() == 0)
		return 0;

	if (!func_25(hParam0, 0))
		return 0;

	if (iParam2 < 1)
		return 0;

	unk = { func_321(false) };
	unk.f_4 = func_320(iParam1);
	unk6 = { func_322(hParam0, unk, unk.f_4, false) };

	if (!func_390(hParam0, &unk6, &unk, iParam2, hParam3, false, false))
		return 0;

	return 1;
}

int func_261(Hash hParam0) // Position - 0xC740 Hash - 0x4DAA6E6F ^0x4DAA6E6F
{
	switch (hParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
			return 11;
	
		case joaat("consumable_herb_oleander_sage"):
			return 27;
	
		case joaat("consumable_herb_parasol_mushroom"):
			return 29;
	
		case joaat("consumable_herb_black_berry"):
			return 5;
	
		case joaat("provision_wldflwr_cardinal_flower"):
			return 44;
	
		case joaat("consumable_herb_sage"):
			return 35;
	
		case joaat("provision_wldflwr_creek_plum"):
			return 46;
	
		case joaat("consumable_herb_evergreen_huckleberry"):
			return 16;
	
		case joaat("consumable_herb_english_mace"):
			return 15;
	
		case joaat("consumable_herb_bay_bolete"):
			return 4;
	
		case joaat("provision_wldflwr_blood_flower"):
			return 43;
	
		case joaat("consumable_herb_chanterelles"):
			return 8;
	
		case joaat("consumable_herb_rams_head"):
			return 32;
	
		case joaat("consumable_herb_wintergreen_berry"):
			return 52;
	
		case joaat("consumable_herb_indian_tobacco"):
			return 21;
	
		case joaat("provision_wldflwr_chocolate_daisy"):
			return 45;
	
		case joaat("consumable_herb_yarrow"):
			return 53;
	
		case joaat("consumable_herb_wild_mint"):
			return 51;
	
		case joaat("consumable_herb_burdock_root"):
			return 7;
	
		case joaat("provision_wldflwr_wisteria"):
			return 48;
	
		case joaat("consumable_herb_violet_snowdrop"):
			return 39;
	
		case joaat("provision_wldflwr_texas_blue_bonnet"):
			return 41;
	
		case joaat("consumable_herb_milkweed"):
			return 24;
	
		case joaat("consumable_herb_prairie_poppy"):
			return 30;
	
		case joaat("consumable_herb_oregano"):
			return 28;
	
		case joaat("consumable_herb_red_raspberry"):
			return 34;
	
		case joaat("consumable_herb_wild_feverfew"):
			return 50;
	
		case joaat("consumable_herb_currant"):
			return 6;
	
		case joaat("provision_wldflwr_bitterweed"):
			return 42;
	
		case joaat("consumable_herb_wild_carrots"):
			return 49;
	
		case joaat("provision_wldflwr_agarita"):
			return 40;
	
		case joaat("consumable_herb_ginseng"):
			return 2;
	
		case joaat("provision_wldflwr_wild_rhubarb"):
			return 47;
	
		case joaat("consumable_herb_vanilla_flower"):
			return 38;
	
		case joaat("consumable_herb_creeping_thyme"):
			return 12;
	}

	return 0;
}

BOOL func_262(int iParam0) // Position - 0xC91B Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

int func_263(int iParam0) // Position - 0xC928 Hash - 0xBA965109 ^0xDF65C4FE
{
	switch (iParam0)
	{
		case 1:
			return joaat("herb_acunas_star_orchid");
	
		case 2:
			return joaat("herb_alaskan_ginseng");
	
		case 3:
			return joaat("herb_american_ginseng");
	
		case 4:
			return joaat("herb_bay_bolete");
	
		case 5:
			return joaat("herb_black_berry");
	
		case 6:
			return joaat("herb_black_currant");
	
		case 7:
			return joaat("herb_burdock_root");
	
		case 8:
			return joaat("herb_chanterelles");
	
		case 9:
			return joaat("herb_cigar_orchid");
	
		case 10:
			return joaat("herb_clamshell_orchid");
	
		case 11:
			return joaat("herb_common_bulrush");
	
		case 12:
			return joaat("herb_creeping_thyme");
	
		case 13:
			return joaat("herb_desert_sage");
	
		case 14:
			return joaat("herb_dragons_mouth_orchid");
	
		case 15:
			return joaat("herb_english_mace");
	
		case 16:
			return joaat("herb_evergreen_huckleberry");
	
		case 17:
			return joaat("herb_ghost_orchid");
	
		case 18:
			return joaat("herb_golden_currant");
	
		case 19:
			return 1516353659;
	
		case 20:
			return joaat("herb_hummingbird_sage");
	
		case 21:
			return joaat("herb_indian_tobacco");
	
		case 22:
			return joaat("herb_lady_of_night_orchid");
	
		case 23:
			return joaat("herb_lady_slipper_orchid");
	
		case 24:
			return joaat("herb_milkweed");
	
		case 25:
			return joaat("herb_moccasin_flower_orchid");
	
		case 26:
			return joaat("herb_night_scented_orchid");
	
		case 27:
			return joaat("herb_oleander_sage");
	
		case 28:
			return joaat("herb_oregano");
	
		case 29:
			return joaat("herb_parasol_mushroom");
	
		case 30:
			return joaat("herb_prairie_poppy");
	
		case 31:
			return joaat("herb_queens_orchid");
	
		case 32:
			return joaat("herb_rams_head");
	
		case 33:
			return joaat("herb_rat_tail_orchid");
	
		case 34:
			return joaat("herb_red_raspberry");
	
		case 35:
			return joaat("herb_red_sage");
	
		case 36:
			return joaat("herb_sparrows_egg_orchid");
	
		case 37:
			return joaat("herb_spider_orchid");
	
		case 38:
			return joaat("herb_vanilla_flower");
	
		case 39:
			return joaat("herb_violet_snowdrop");
	
		case 40:
			return joaat("herb_wild_flwr_agarita");
	
		case 41:
			return joaat("herb_wild_flwr_blue_bonnet");
	
		case 42:
			return joaat("herb_wild_flwr_bitterweed");
	
		case 43:
			return joaat("herb_wild_flwr_blood_flower");
	
		case 44:
			return joaat("herb_wild_flwr_cardinal_flower");
	
		case 45:
			return joaat("herb_wild_flwr_chocolate_daisy");
	
		case 46:
			return joaat("herb_wild_flwr_creek_plum");
	
		case 47:
			return joaat("herb_wild_flwr_rhubarb");
	
		case 48:
			return joaat("herb_wild_flwr_wisteria");
	
		case 49:
			return joaat("herb_wild_carrots");
	
		case 50:
			return joaat("herb_wild_feverfew");
	
		case 51:
			return joaat("herb_wild_mint");
	
		case 52:
			return joaat("herb_wintergreen_berry");
	
		case 53:
			return joaat("herb_yarrow");
	}

	return 0;
}

BOOL func_264(Hash hParam0) // Position - 0xCCBE Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_265(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, int iParam6) // Position - 0xCCD9 Hash - 0x47A4DDC0 ^0xD98F8579
{
	int i;
	Hash category;
	Hash outSlotId;
	int hasSlotCount;
	var outInventoryItem;
	var unk16;
	int inventoryId;
	int childrenCount;
	int j;
	var unk30;
	var parentGuid;

	if (hParam0 != 0 && hParam1 != 0)
	{
		category = func_189(hParam1);
		hasSlotCount = func_397(hParam1);
	
		for (i = 0; i < hasSlotCount; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
			{
				if (func_398(hParam0, category, outSlotId))
				{
					*uParam4 = { func_184(hParam1, false, 0) };
				
					if (iParam6 != 0)
						uParam4->f_4 = iParam6;
				
					*uParam3 = { func_322(hParam1, *uParam4, uParam4->f_4, false) };
					*uParam2 = outSlotId;
					return true;
				}
			}
		}
	
		if (bParam5)
		{
			outInventoryItem.f_9 = joaat("SLOTID_NONE");
			unk16.f_9 = joaat("SLOTID_NONE");
			inventoryId = func_172(false);
			unk30 = { func_184(hParam1, false, 0) };
		
			if (iParam6 != 0)
				unk30.f_4 = iParam6;
		
			parentGuid = { func_322(hParam1, unk30, unk30.f_4, false) };
			childrenCount = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(inventoryId, &parentGuid);
		
			for (j = 0; j < childrenCount; j = j + 1)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(inventoryId, &parentGuid, j, &outInventoryItem))
				{
					category = func_189(outInventoryItem.f_4);
					hasSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
				
					for (i = 0; i < hasSlotCount; i = i + 1)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
						{
							if (func_398(hParam0, category, outSlotId))
							{
								if (func_399(parentGuid, outInventoryItem.f_9, &unk16, false, -1))
								{
									uParam4->f_4 = outInventoryItem.f_9;
									*uParam4 = { outInventoryItem.f_5 };
									*uParam3 = { unk16 };
									*uParam2 = outSlotId;
									return true;
								}
							}
						}
					}
				}
			}
		}
	}

	*uParam2 = 0;
	return false;
}

struct<4> func_266() // Position - 0xCE59 Hash - 0xF51D0C3D ^0xA1188D4B
{
	var unk;

	unk = { func_321(false) };
	return func_322(856287005, unk, -218846335, false);
}

BOOL func_267(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0xCE7D Hash - 0x740B8A62 ^0x5C694353
{
	if (!func_25(hParam0, 0))
		return 0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_185(hParam0, panParam2, iParam3, bParam5, false, -1, false))
		return 0;

	if (!func_80(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_172(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

BOOL func_268(Hash hParam0, int iParam1) // Position - 0xCEE5 Hash - 0x148943C8 ^0x2BF2CC5F
{
	var unk;
	var unk6;
	Hash hash;
	var unk10;
	var unk14;
	Hash hash2;
	Hash hash3;
	Hash hash4;
	Hash hash5;
	Hash hash6;
	Hash hash7;
	Hash hash8;
	Hash hash9;
	Hash hash10;
	Hash hash11;
	Hash hash12;
	Hash hash13;
	Hash hash14;
	Hash hash15;

	if (!func_25(hParam0, 0))
		return false;

	if (!func_265(hParam0, 856287005, &hash, &unk6, &unk, true, 0))
		return false;

	unk10 = { func_266() };
	unk14 = { func_322(hParam0, unk10, hash, false) };

	if (func_400(unk14, iParam1, false))
	{
		if (func_401(hParam0))
		{
			if (func_402(joaat("SLOTID_HORSE_HORN"), &hash2))
				func_268(hash2, 0);
		}
		else if (func_403(hParam0))
		{
			if (func_402(joaat("SLOTID_HORSE_HORN"), &hash3))
				func_268(hash3, 0);
		
			if (func_402(joaat("SLOTID_HORSE_BLANKET"), &hash4))
				func_268(hash4, 0);
		}
		else if (func_404(hParam0))
		{
			if (func_402(joaat("SLOTID_HORSE_HORN"), &hash5))
				func_268(hash5, 0);
		
			if (func_402(joaat("SLOTID_HORSE_BLANKET"), &hash6))
				func_268(hash6, 0);
		
			if (func_402(joaat("SLOTID_HORSE_BEDROLL"), &hash7))
				func_268(hash7, 0);
		}
		else if (func_405(hParam0))
		{
			if (func_402(joaat("SLOTID_HORSE_HORN"), &hash8))
				func_268(hash8, 0);
		
			if (func_402(joaat("SLOTID_HORSE_BLANKET"), &hash9))
				func_268(hash9, 0);
		
			if (func_402(joaat("SLOTID_HORSE_BEDROLL"), &hash10))
				func_268(hash10, 0);
		
			if (func_402(joaat("SLOTID_HORSE_STIRRUP"), &hash11))
				func_268(hash11, 0);
		
			if (func_402(joaat("SLOTID_HORSE_SADDLEBAG"), &hash12))
				func_268(hash12, 0);
		}
		else if (func_269(hParam0))
		{
			if (func_402(joaat("SLOTID_HORSE_HORN"), &hash13))
				func_268(hash13, 0);
		
			if (func_402(joaat("SLOTID_HORSE_STIRRUP"), &hash14))
				func_268(hash14, 0);
		
			hash15 = func_270(hParam0);
		
			if (func_25(hash15, 0))
				func_268(hash15, 1);
		}
	
		func_271();
		return true;
	}

	return false;
}

BOOL func_269(Hash hParam0) // Position - 0xD0D5 Hash - 0x1FFCC90D ^0x9E730FBF
{
	if (!func_25(hParam0, 0))
		return false;

	if (func_76(hParam0, -251515357))
		return true;

	return false;
}

Hash func_270(Hash hParam0) // Position - 0xD0FF Hash - 0xBD10D1A2 ^0xB99ADD5C
{
	switch (hParam0)
	{
		case joaat("horse_equipment_western_01_special_new_saddle_000"):
			return 263080063;
	
		case joaat("horse_equipment_western_04_special_new_saddle_000"):
			return 1104489688;
	
		case joaat("horse_equipment_motherhubbard_01_special_new_saddle_000"):
			return -34331381;
	
		case joaat("horse_equipment_western_03_special_new_saddle_000"):
			return 579268144;
	
		case joaat("horse_equipment_mcclellan_01_special_new_saddle_000"):
			return -993578318;
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
int func_271() // Position - 0xD165 Hash - 0x79A7BF3 ^0x80B436A4
{
	var unk;
	var unk6;
	int i;
	Hash category;
	Hash outSlotId;
	Hash hash;
	BOOL flag;
	var unk12;
	int num;
	Hash hash2;

	unk = { func_184(856287005, false, 0) };
	unk6 = { func_322(856287005, unk, unk.f_4, false) };
	category = func_189(856287005);

	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, 0, &outSlotId))
		hash = func_406(unk6, joaat("SLOTID_HORSE_SADDLE"), false, -1);

	if (!func_25(hash, 0))
		return 0;

	flag = false;
	num = func_397(856287005);

	for (i = 0; i < num; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
		{
			flag = false;
			hash2 = func_406(unk6, outSlotId, false, -1);
		
			if (!func_25(hash2, 0))
			{
				if (outSlotId == joaat("SLOTID_HORSE_HORN"))
				{
					if (func_269(hash) || func_401(hash) || func_403(hash) || func_404(hash) || func_405(hash))
					{
					}
					else
					{
						goto 0x195;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_BLANKET"))
				{
					if (func_403(hash) || func_404(hash) || func_405(hash))
					{
					}
					else
					{
						goto 0x195;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_BEDROLL"))
				{
					if (func_404(hash) || func_405(hash))
					{
					}
					else
					{
						goto 0x195;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_STIRRUP"))
				{
					if (func_269(hash) || func_405(hash))
					{
					}
					else
					{
						goto 0x195;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_BEDROLL"))
				{
					if (func_405(hash))
					{
					}
					else
					{
						goto 0x195;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_SADDLEBAG"))
				{
					if (func_405(hash))
					{
					}
					else
					{
						flag = true;
						goto 0x1BD;
					}
				}
			
				flag = true;
			}
			else if (outSlotId == joaat("SLOTID_HORSE_BLANKET"))
			{
				if (!func_269(hash) && func_407(hash2))
					flag = true;
			}
		
			if (flag)
			{
				if (func_408(outSlotId, &unk12, true))
				{
					if (!func_400(unk12, true, false))
					{
					}
				}
			}
		}
	}

	return 1;
}

BOOL func_272() // Position - 0xD354 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1913444;
}

void func_273(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0xD361 Hash - 0x3B7A5BE9 ^0xEE7A100D
{
	int i;

	for (i = 0; i < Global_1913444.f_3; i = i + 1)
	{
		if (Global_1913444.f_4[i /*6*/] == hParam0 && Global_1913444.f_4[i /*6*/].f_2 == bParam2 && Global_1913444.f_4[i /*6*/].f_3 == bParam3 && Global_1913444.f_4[i /*6*/].f_4 == bParam4 && Global_1913444.f_4[i /*6*/].f_5 == bParam5)
		{
			Global_1913444.f_4[i /*6*/].f_1 = Global_1913444.f_4[i /*6*/].f_1 + iParam1;
			return;
		}
	}

	if (Global_1913444.f_3 < 19)
	{
		Global_1913444.f_4[Global_1913444.f_3 /*6*/] = hParam0;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_1 = iParam1;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_2 = bParam2;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_3 = bParam3;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_4 = bParam4;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_5 = bParam5;
		Global_1913444.f_3 = Global_1913444.f_3 + 1;
	}

	return;
}

var func_274(BOOL bParam0, var uParam1, var uParam2) // Position - 0xD484 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_275(Hash hParam0, int iParam1) // Position - 0xD49B Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_25(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

char* func_276(Hash hParam0) // Position - 0xD4BA Hash - 0xFBA883FB ^0xF3170A4C
{
	if (func_76(hParam0, -1995062316))
		return "collectible_arrowheads";

	if (func_76(hParam0, 1239889275))
		return "collectible_liquor_bottles";

	if (func_76(hParam0, 143267379))
		return "collectible_coins";

	if (func_76(hParam0, -944041124))
		return "colectible_heirlooms";

	if (func_76(hParam0, 1562621600))
		return "collectible_jewelry";

	if (func_76(hParam0, -149719013))
		return "collectible_bird_eggs";

	if (func_76(hParam0, 1940829793))
		return "collectible_tarot_cards";

	if (func_76(hParam0, 781094263))
		return "collectible_flowers";

	if (func_76(hParam0, -352095726) || func_76(hParam0, -2014783736) || func_76(hParam0, -545064757) || func_76(hParam0, 679186220))
		return "collectible_found_fossil";

	return "";
}

BOOL func_277(Hash hParam0) // Position - 0xD5B6 Hash - 0x12CDDB68 ^0xF31C74A7
{
	if (func_76(hParam0, -189374246))
		if (func_409(hParam0, -1305775593) || func_409(hParam0, 1384151091) || func_409(hParam0, 2075388272) || func_409(hParam0, -1738780413))
			return true;

	if (func_76(hParam0, -753854379) || func_76(hParam0, 173360570))
		return true;

	return false;
}

Hash func_278(Hash hParam0, BOOL bParam1) // Position - 0xD635 Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_25(hParam0, 0))
		return 0;

	hash = func_410(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

BOOL func_279(Hash hParam0) // Position - 0xD663 Hash - 0x339D45CE ^0x339D45CE
{
	switch (hParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
	
		default:
		
	}

	return true;
}

Hash func_280(Hash hParam0) // Position - 0xD68A Hash - 0x9C7FC6B8 ^0x60951C4B
{
	var outData;
	int i;

	if (!func_25(hParam0, 0))
		return 0;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (outData.f_18[i /*2*/].f_1 == 14460646)
				if (outData.f_18[i /*2*/] != 0)
					return outData.f_18[i /*2*/];
		}
	}

	return 0;
}

Hash func_281(Hash hParam0) // Position - 0xD6F8 Hash - 0xD046EEF0 ^0xB8E66C21
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash outKey;

	num = func_411(hParam0);

	if (num == 0)
		return 0;

	unk = { func_154(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num, 0) };

	if (func_155(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey) && func_412(outKey))
			{
				func_157(collectionId);
				return outKey;
			}
		}
	
		func_157(collectionId);
	}

	return 0;
}

BOOL func_282(Hash hParam0, Hash hParam1) // Position - 0xD77D Hash - 0x34B85114 ^0x6986CE99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return true;

	return false;
}

BOOL func_283(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0xD7AE Hash - 0x6E96D276 ^0x9A3B0071
{
	var outData;

	if (!func_25(hParam0, 0) && !func_250(func_168(hParam0), 2))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam3;
		return false;
	}

	!bParam3;
	*uParam2 = outData.f_1;
	return true;
}

const char* func_284(const char* sParam0, int iParam1) // Position - 0xD80D Hash - 0x9E99F03 ^0xE00E797
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

 func_285(Hash hParam0, int iParam1) // Position - 0xD827 Hash - 0x7C967237 ^0x7C967237
{
	 num;

	num = func_413(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_286(Hash hParam0, char* sParam1) // Position - 0xD845 Hash - 0xE779657E ^0x44FD4FF7
{
	int lengthOfLiteralString;
	var unk;

	if (!func_25(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_414(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_415(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_416(hParam0), 128);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return false;

	TEXT_LABEL_APPEND_STRING(&unk, " - ", 128);
	lengthOfLiteralString = lengthOfLiteralString + HUD::GET_LENGTH_OF_LITERAL_STRING(&unk);
	TEXT_LABEL_APPEND_STRING(&unk, sParam1, 128);

	if (lengthOfLiteralString >= 127)
		return false;

	*sParam1 = { unk };
	return true;
}

const char* func_287(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0xD8C2 Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_288(const char* sParam0, int iParam1) // Position - 0xD8D6 Hash - 0xB0CFF0C3 ^0x3E75338D
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_284(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_289(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0xD90C Hash - 0x72075C17 ^0x3AC6D3FB
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = sParam5;
	num.f_2 = sParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_417(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_290(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0xD96F Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_27() == -1)
	{
		if (func_331(hParam0) && func_418(hParam0))
		{
			func_419(hParam0, iParam1, true, &bParam2, hParam3);
			return false;
		}
	}
	else if (hParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (hParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}

	return true;
}

BOOL func_291(Hash hParam0, var uParam1, int iParam2) // Position - 0xD9C6 Hash - 0x8ABA0690 ^0x8ABA0690
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_420(hParam0, uParam1);
	unk = { func_184(hParam0, false, 1) };
	num = func_235(hParam0, &unk, false, false);
	num2 = func_421(hParam0, false, false, false);

	if (num > 1 && num2 + iParam2 >= num)
		if (func_76(hParam0, -2051813666))
			func_302(674, true);
		else if (func_27() == -1)
			func_302(673, false);

	if (func_185(hParam0, &unk, *uParam1, false, false, -1, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_292(Hash hParam0, BOOL bParam1) // Position - 0xDA64 Hash - 0x86DCB18E ^0x6098B664
{
	if (bParam1)
		return;

	if (!func_422())
		return;

	switch (func_65(hParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1940085.f_70.f_5 = 1;
			Global_1940085.f_70.f_6 = 0;
			Global_1940085.f_70.f_1 = hParam0;
			break;
	}

	return;
}

BOOL func_293(int iParam0) // Position - 0xDB15 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_423(iParam0))
		return false;

	return func_424(iParam0);
}

void func_294(int iParam0) // Position - 0xDB31 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_423(iParam0))
		return;

	func_425(iParam0);
	func_426(iParam0);
	return;
}

void func_295(Hash hParam0) // Position - 0xDB52 Hash - 0xB0B39801 ^0xC789CDD0
{
	if (func_76(hParam0, -1522723129))
		func_106(-848633709, false, 255, 0, false);
	else if (func_76(hParam0, -283942357))
		func_106(-981153234, false, 255, 0, false);
	else if (func_76(hParam0, 683680997))
		func_106(-756350192, false, 255, 0, false);
	else if (func_76(hParam0, 1307628809))
		func_106(603094518, false, 255, 0, false);

	return;
}

BOOL func_296(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0xDBD7 Hash - 0x61DE9CAE ^0x4ADCEE54
{
	var unk;
	var unk6;
	var unk28;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0) && iParam1 > 0)
		iParam1 = 0;

	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
	{
		unk = { func_184(hParam0, false, 1) };
	
		if (func_325(hParam0, &unk, unk.f_4, false, false))
		{
			unk6.f_9 = joaat("SLOTID_NONE");
		
			if (func_326(hParam0, &unk6, unk.f_4))
			{
				unk28 = { func_322(hParam0, unk, unk.f_4, false) };
				func_390(hParam0, &unk28, &unk, 1, -142743235, true, false);
			}
		}
	}

	if (func_80(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
			return 0;
	
		func_297(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_427(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_297(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xDD07 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_300(hParam0))
		return false;

	if (!func_80(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_298(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xDD42 Hash - 0x452D8154 ^0x10C1EA46
{
	int num;
	var unk;
	var unk6;

	if (!func_25(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_233(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_428(hParam0, iParam1, hParam2);

	unk = { func_184(hParam0, false, 1) };
	unk6 = { func_322(hParam0, unk, unk.f_4, false) };
	return func_267(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

BOOL func_299(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0xDDB1 Hash - 0xF555C517 ^0x702518D6
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;

	weaponHash = func_177(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_27() == -1)
		{
			func_178(weaponHash);
		
			if (hParam1 == 1248274121)
				func_429(weaponHash);
		}
	
		if (!func_185(hParam0, &unk, 1, false, false, -1, false))
		{
			func_419(hParam0, 1, false, uParam2, hParam1);
			num = func_430(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_296(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || WEAPON::_IS_WEAPON_BINOCULARS(weaponHash))
			{
				func_296(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(weaponHash))
			{
				func_296(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_431())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_432(weaponHash))
				{
					func_296(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_296(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_433(Global_33, 2, false, true);
			
				if (func_264(weaponHash2) && !Global_26688 && weaponHash2 != weaponHash && !func_150(joaat("upgrade_offhand_holster"), 1) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, weaponHash2);
			
				if (func_264(weaponHash2) && func_150(joaat("upgrade_offhand_holster"), 1))
					if (!func_296(weaponHash, num, bParam3, bParam4, 3, true, hParam1, false))
						return false;
				else if (!func_296(weaponHash, num, bParam3, bParam4, 0, true, hParam1, false))
					return false;
			}
			else if (!func_296(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}

	if (WEAPON::_0x9F0E1892C7F228A8(true) != 0 && hParam1 == 1248274121)
		func_302(515, true);

	return true;
}

BOOL func_300(Hash hParam0) // Position - 0xDFBF Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_301(Hash hParam0, var uParam1, Hash hParam2) // Position - 0xDFCD Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_300(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	if (func_264(weaponTypeFromAmmoType))
		WEAPON::GET_MAX_AMMO(Global_33, &ammo, weaponTypeFromAmmoType);

	num2 = ammo - pedAmmoByType;

	if (WEAPON::IS_WEAPON_BOW(weaponTypeFromAmmoType))
		weaponClipSize = 5;
	else
		weaponClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(weaponTypeFromAmmoType);

	if (*uParam1 > 0)
		num3 = *uParam1;
	else if (*uParam1 < 0)
		num3 = weaponClipSize * MISC::ABSI(*uParam1);

	if (num2 >= num3)
	{
		num = num3;
	}
	else if (num2 < num3 && num2 >= 1)
	{
		num = num2;
	}
	else
	{
		func_311(func_434(hParam0), func_278(hParam0, false), true);
		return false;
	}

	ammo == pedAmmoByType + num;

	if (num == 0)
		return false;

	if (func_80(false))
	{
		if (func_297(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_298(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_302(int iParam0, BOOL bParam1) // Position - 0xE0CB Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_435(iParam0, &num, &num2);

	if (!func_436(iParam0, num, num2, bParam1))
		return;

	func_437(num, num2);
	return;
}

BOOL func_303() // Position - 0xE0F8 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_304(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0xE101 Hash - 0x6AA1931B ^0x6AA1931B
{
	int num;

	if (func_27() == 0)
	{
		func_315(hParam0, 0);
		return 0;
	}

	num = func_438(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_439(num, sParam4, iParam5, false);

	func_440(num, bParam1, iParam2, iParam3);
	return num;
}

void func_305(Hash hParam0) // Position - 0xE148 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_306(Hash hParam0) // Position - 0xE150 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_307(Hash hParam0) // Position - 0xE158 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_308(Hash hParam0) // Position - 0xE160 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_309() // Position - 0xE168 Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_310(Hash hParam0, var uParam1) // Position - 0xE18C Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_367(hParam0, uParam1, &unk);
	return;
}

void func_311(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0xE19E Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_435(iParam0, &num, &num2);

	if (!func_436(iParam0, num, num2, bParam2))
		return;

	if (!func_441(iParam0, 1024))
		return;

	func_437(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_312(int iParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE1FE Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_435(iParam0, &num, &num2);

	if (!func_436(iParam0, num, num2, bParam2))
		return;

	if (!func_441(iParam0, 1024))
		return;

	func_437(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;

	if (!bParam3)
		Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

void func_313(var uParam0) // Position - 0xE279 Hash - 0xE1DD92C1 ^0x7C7DCFDC
{
	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_cigarette_box_cheap_used"):
			*uParam0 = joaat("consumable_cigarette_box_cheap");
			break;
	}

	return;
}

void func_314(Hash hParam0) // Position - 0xE2BD Hash - 0xC34F92EA ^0xC34F92EA
{
	if (func_27() != -1)
		return;

	return;
}

BOOL func_315(Hash hParam0, int iParam1) // Position - 0xE2D0 Hash - 0x10BA6DD6 ^0xD79E06BF
{
	var unk;
	var unk5;

	if (0 == hParam0)
		return false;

	unk5.f_1 = 10;
	func_442(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_443(hParam0, &unk5, &unk, iParam1, 0);
}

struct<2> func_316(Hash hParam0) // Position - 0xE304 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_25(hParam0, 0))
		return unk;

	if (func_76(hParam0, -305066475))
		if (func_27() == -1)
			if (func_76(hParam0, -537818634))
				return func_444(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_444(joaat("deadeye_items"));
	else if (func_76(hParam0, -537818634))
		return func_444(joaat("medicine_items"));

	if (func_76(hParam0, 2084895747))
		return func_444(joaat("lock_breaker_items"));

	return unk3;
}

void func_317(Hash hParam0) // Position - 0xE398 Hash - 0xD6BB2A12 ^0xD6BB2A12
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			break;
	}

	return;
}

void func_318(Hash hParam0, int iParam1) // Position - 0xE3B1 Hash - 0x81B514EF ^0x19ED4233
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Global_1902822.f_37);
	func_289(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_446(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

BOOL func_319(Hash hParam0, int iParam1) // Position - 0xE3F2 Hash - 0xA5C34C52 ^0x329DB4E0
{
	var unk;
	int num;
	int num2;

	if (!func_25(hParam0, 0))
		return false;

	unk.f_4 = func_320(iParam1);

	if (!func_447(hParam0, unk.f_4))
		return false;

	num = func_235(hParam0, &unk, false, false);
	num2 = func_421(hParam0, false, false, false);

	if (num >= 0 && num2 > num)
		return false;

	return true;
}

int func_320(int iParam0) // Position - 0xE452 Hash - 0xF00685F3 ^0x39EB3A7D
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_SATCHEL");
	
		case 1:
			return -1360128126;
	
		default:
		
	}

	return joaat("SLOTID_SATCHEL");
}

struct<4> func_321(BOOL bParam0) // Position - 0xE483 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_172(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_322(joaat("character"), func_448(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_322(joaat("character"), func_448(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_322(joaat("character"), func_448(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_322(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xE523 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_25(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_172(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_323(BOOL bParam0) // Position - 0xE554 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_172(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_322(923904168, func_321(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_322(923904168, func_321(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_322(923904168, func_321(bParam0), -740156546, false);
}

BOOL func_324(Hash hParam0, BOOL bParam1) // Position - 0xE5F5 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_189(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_449();
		else
			return 1;

	return 0;
}

BOOL func_325(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE62C Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_332(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_326(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xE647 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_450(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_327(BOOL bParam0) // Position - 0xE668 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_172(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_322(271701509, func_321(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_322(271701509, func_321(bParam0), 12999093, false);
}

BOOL func_328(Hash hParam0, Hash hParam1) // Position - 0xE6D2 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_189(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_398(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_329(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0xE73F Hash - 0x113CD144 ^0x113CD144
{
	return func_451(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_330(var uParam0) // Position - 0xE755 Hash - 0x8D760BCC ^0xB90089A3
{
	if (!func_25(*uParam0, 0))
		return 0;

	if (!func_452(*uParam0))
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

BOOL func_331(Hash hParam0) // Position - 0xE7DF Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_179(hParam0) == joaat("WEAPON");
}

int func_332(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0xE7F3 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_25(hParam0, 0))
		return 0;

	if (!bParam7 && func_233(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_322(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_172(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_172(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_333(Hash hParam0) // Position - 0xE872 Hash - 0x1B551CF7 ^0x61950700
{
	return func_189(hParam0) == 1868067663;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_334(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xE886 Hash - 0x8AAE9761 ^0xF5D9C5DD
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_453(hParam0))
		return false;

	*uParam3 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam4;
		return false;
	}

	!bParam4;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ACQUIRE_COST(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x70;
	
		!bParam4;
	}

	if (bParam5)
		func_454(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_335(int iParam0) // Position - 0xE915 Hash - 0x65331643 ^0x65331643
{
	if (iParam0 < 0)
		return false;

	if (func_27() == 0)
		return func_455(iParam0);

	return iParam0 <= func_382();
}

BOOL func_336(int iParam0) // Position - 0xE942 Hash - 0x9186FF7C ^0xD4141850
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

// Unhandled jump detected. Output should be considered invalid
int func_337(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0xE965 Hash - 0x8D867191 ^0xF02772A4
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_456(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_223(hParam0) || func_76(hParam0, 1077060302))
		return func_457(func_224(hParam0, false), hParam1, bParam3, true);

	if (!func_149(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (iParam5 != 0 && unk[i /*2*/] != iParam5)
			{
			}
			else
			{
				return unk[i /*2*/].f_1;
				goto 0xDD;
			}
		}
	
		if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

BOOL func_338(Hash hParam0) // Position - 0xEA55 Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
	
		default:
		
	}

	return false;
}

int func_339(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xEA82 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_458(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_460(func_459(num, hParam0, panParam1), num, panParam1);
	else
		return func_461(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

BOOL func_340(int* piParam0, BOOL bParam1) // Position - 0xEAEC Hash - 0x7D3BA1EA ^0x8B940399
{
	if (!bParam1)
		if (func_462(piParam0))
			return false;

	if (func_463(&(piParam0->f_6)))
		if (NETWORK::_0xE10F2D7715ABABEC(&(piParam0->f_6)))
			return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("Sell")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("use")))
		return false;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return false;

	if (NETSHOPPING::CASHINVENTORY_IS_CONNECTION_FAULTED())
		return false;

	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
		return false;

	return true;
}

Hash func_341(Hash hParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0xEB88 Hash - 0x6E5FA253 ^0x344F4256
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (!func_453(hParam0))
		return 0;

	flag = func_113(iParam3, 2);
	flag2 = func_464(hParam0, -570078785, flag);
	flag3 = func_464(hParam0, -915411861, flag);

	if (func_464(hParam0, 997808187, flag))
		iParam1 = 997808187;
	else if (bParam4 && func_465(hParam0, &num) || func_466(hParam0, &num))
		iParam1 = num;
	else if (flag2 && !flag3)
		iParam1 = -570078785;
	else if (flag2 && flag3)
		if (func_467())
			iParam1 = -570078785;
		else
			iParam1 = -915411861;
	else if (flag3)
		iParam1 = -915411861;
	else if (func_468(15) && func_464(hParam0, 369710026, flag))
		iParam1 = 369710026;

	if (iParam1 == 0 && bParam2)
		return -915411861;

	return iParam1;
}

BOOL func_342(Hash hParam0, Hash hParam1, int iParam2) // Position - 0xEC8D Hash - 0x67DCAB3C ^0x67DCAB3C
{
	if (hParam0 == 0)
		return false;

	if (!func_464(hParam0, hParam1, false))
		return false;

	if (func_113(iParam2, 2))
		if (func_225(hParam0, hParam1))
			return false;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hParam0))
		return false;

	if (func_113(iParam2, 8))
		return func_469(hParam0, hParam1);

	return true;
}

BOOL func_343(int* piParam0, Any* panParam1, Hash hParam2, Hash hParam3, BOOL bParam4) // Position - 0xECED Hash - 0xF0597DAC ^0x3CBF97D5
{
	var unk;
	int num;

	unk = 15;

	if (!func_334(panParam1->f_17, hParam3, &unk, &num, false, true))
		return false;

	switch (num)
	{
		case 1:
			return func_470(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 2:
			return func_471(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 3:
			return func_472(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 4:
			return func_473(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 5:
			return func_474(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 6:
			return func_475(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 7:
			return func_476(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 8:
			return func_477(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 9:
			return func_478(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 10:
			return func_479(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 11:
			return func_480(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 12:
			return func_481(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 13:
			return func_482(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 14:
			return func_483(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 15:
			return func_484(piParam0, panParam1, hParam2, &unk, bParam4);
	
		default:
		
	}

	return false;
}

BOOL func_344(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0xEE75 Hash - 0xCDB04DC0 ^0xCDB04DC0
{
	Hash hash;

	if (func_485(hParam1))
	{
		hash = func_168(hParam1);
		return func_486(piParam0, hash, hParam7, iParam8, iParam9);
	}

	if (func_113(iParam9, 32))
		if (!func_487(hParam1, uParam2, hParam6))
			return false;

	if (!func_488(hParam1, hParam7, iParam9))
		return false;

	if (func_113(iParam9, 4))
		if (!func_489(piParam0, hParam1, uParam2, hParam6, hParam7, iParam8, false, bParam10))
			return false;

	if (func_113(iParam9, 8))
		return func_490(piParam0, hParam1, hParam7, iParam8);

	return true;
}

struct<17> func_345(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, BOOL bParam7) // Position - 0xEF12 Hash - 0x442F1CC9 ^0x744DB9CB
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk.f_4 = { uParam1 };
	unk = { func_322(hParam0, unk.f_4, hParam5, true) };
	unk.f_8 = hParam0;
	unk.f_9 = iParam6;
	unk.f_11 = hParam5;

	if (bParam7)
	{
		unk.f_15 = func_233(hParam0, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_448() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

BOOL func_346(int* piParam0, Any* panParam1, Hash hParam2, BOOL bParam3, int iParam4) // Position - 0xEF8C Hash - 0x3AC44E6C ^0xC544632E
{
	var unk;
	int num;

	unk = 15;

	if (!func_149(panParam1->f_8, panParam1->f_13, &unk, &num, true, false))
		return false;

	switch (num)
	{
		case 1:
			return func_491(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 2:
			return func_492(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 3:
			return func_493(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 4:
			return func_494(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 5:
			return func_495(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 6:
			return func_496(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 7:
			return func_497(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 8:
			return func_498(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 9:
			return func_499(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 10:
			return func_500(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 11:
			return func_501(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 12:
			return func_502(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 13:
			return func_503(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 14:
			return func_504(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 15:
			return func_505(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		default:
		
	}

	return false;
}

BOOL func_347(var uParam0) // Position - 0xF134 Hash - 0x39705408 ^0x39705408
{
	return func_198(*uParam0, 2);
}

float func_348() // Position - 0xF144 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_349(var uParam0, int iParam1) // Position - 0xF176 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_350(var uParam0, int iParam1) // Position - 0xF187 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_351(Player plParam0) // Position - 0xF19C Hash - 0xA7E5BCA7 ^0x9018D80B
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

int func_352(Player plParam0) // Position - 0xF1CC Hash - 0xC91C7790 ^0xF91500D
{
	int i;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return -1;

	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1141332.f_1091), plParam0))
		return -1;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1141332[i /*27*/].f_9 == plParam0 && Global_1141332[i /*27*/] != 3)
			return i;
	}

	return -1;
}

var func_353(int iParam0, int iParam1) // Position - 0xF22F Hash - 0x42C305C ^0x81DF2F42
{
	return func_506(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

int func_354() // Position - 0xF24D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_355(int iParam0, int iParam1) // Position - 0xF25C Hash - 0xC00BEAB5 ^0x728D99B1
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_356(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0xF28C Hash - 0xE040F56 ^0xE040F56
{
	int i;
	var unk;

	if (!func_463(anParam0))
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

BOOL func_357(int iParam0) // Position - 0xF347 Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_507(36, iParam0);
}

BOOL func_358(int iParam0) // Position - 0xF365 Hash - 0x1B64C3A9 ^0x1B64C3A9
{
	if (iParam0 >= 1 && iParam0 <= 184)
		return true;

	return false;
}

int func_359(int iParam0) // Position - 0xF383 Hash - 0x49256A88 ^0x727DF76F
{
	if (!func_358(iParam0))
		return 0;

	return Global_1149432.f_11[iParam0 /*3*/].f_2;
}

BOOL func_360() // Position - 0xF3A5 Hash - 0xCD6F2F82 ^0xCD6F2F82
{
	return func_508(0) && func_508(1);
}

BOOL func_361() // Position - 0xF3BC Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

int func_362(int iParam0) // Position - 0xF3E1 Hash - 0x92F940EE ^0x92F940EE
{
	int num;

	num = iParam0;

	if (num >= 1 && num <= 23)
		return 0;
	else if (num >= 24 && num <= 34)
		return 1;
	else if (num >= 35 && num <= 55)
		return 2;

	return 0;
}

int func_363(int iParam0, int iParam1) // Position - 0xF435 Hash - 0x933F71D8 ^0xFEF70CA7
{
	if (iParam1 == 2)
		iParam1 = func_509(1);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_50[iParam0];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_50[iParam0];
	
		default:
		
	}

	return 1;
}

int func_364(int iParam0) // Position - 0xF481 Hash - 0xB8EC44B7 ^0x10011532
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
	
		case 2:
			return -1789085602;
	
		case 3:
			return -593725333;
	
		case 4:
			return 1619211297;
	
		case 5:
			return -1448204146;
	
		case 6:
			return -1918007793;
	
		case 7:
			return -2108757294;
	
		case 8:
			return -787840584;
	
		case 9:
			return -7905424;
	
		case 10:
			return -376205482;
	
		case 11:
			return -1753179328;
	
		case 12:
			return -1876855008;
	
		case 13:
			return 550082662;
	
		case 14:
			return -1964113;
	
		case 15:
			return 196458601;
	
		case 16:
			return 22941087;
	
		case 17:
			return 2017633379;
	
		case 24:
			return 253945992;
	
		case 25:
			return -1689046118;
	
		case 26:
			return -483357612;
	
		case 27:
			return -430722038;
	
		case 28:
			return 64082831;
	
		case 35:
			return -1498321291;
	
		case 36:
			return 1654907663;
	
		case 37:
			return 1059449568;
	
		case 38:
			return 2073287291;
	
		case 39:
			return 1110270789;
	
		case 40:
			return 417802449;
	
		case 41:
			return 2136672177;
	
		case 42:
			return -1930911028;
	
		case 43:
			return -739528491;
	
		case 55:
			return 2075984360;
	
		default:
		
	}

	return 0;
}

BOOL func_365(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0xF652 Hash - 0x8EAA10FC ^0x9E3F883B
{
	var unk;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_250(hParam0, 2))
		return false;

	unk.f_4 = 15;
	unk.f_36 = 10;

	if (!func_510(hParam0, hParam1, &unk))
		return false;

	if (unk.f_35 > 10)
		unk.f_35 = 10;

	*uParam3 = unk.f_35;

	for (i = 0; i < unk.f_35; i = i + 1)
	{
		uParam2->[i] = unk.f_36[i];
	}

	return true;
}

Hash func_366(Hash hParam0, BOOL bParam1) // Position - 0xF6D6 Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_250(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

void func_367(Hash hParam0, var uParam1, var uParam2) // Position - 0xF70F Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_368(Hash hParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xF91B Hash - 0x90CCF0F4 ^0xA5F3D799
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

	if (hParam1 != 0 && hParam1 != joaat("SLOTID_NONE"))
		hash.f_1 = hParam1;

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

void func_369(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xF9F9 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_370(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0xFA14 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_172(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_371(int iParam0) // Position - 0xFA39 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

Hash func_372(Hash hParam0) // Position - 0xFA5A Hash - 0x5FB59AC3 ^0xF8EA047B
{
	int num;

	num = 0;

	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			num = joaat("a_c_toad_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			num = joaat("a_c_bluejay_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			num = joaat("A_C_Pigeon");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			num = joaat("a_c_cardinal_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			num = joaat("a_c_carolinaparakeet_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			num = joaat("a_c_rat_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			num = joaat("a_c_crow_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			num = joaat("a_c_crab_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			num = joaat("a_c_frogbull_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			num = joaat("a_c_sparrow_01");
			break;
	
		case joaat("provision_fish_chain_pickerel_poor"):
		case joaat("provision_fish_chain_pickerel"):
			num = joaat("a_c_fishchainpickerel_01_sm");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			num = joaat("a_c_quail_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			num = joaat("a_c_chipmunk_01");
			break;
	
		case joaat("provision_fish_muskie"):
		case joaat("provision_fish_muskie_poor"):
			num = joaat("a_c_fishmuskie_01_lg");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			num = joaat("a_c_oriole_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			num = joaat("a_c_bat_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			num = joaat("a_c_woodpecker_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			num = joaat("a_c_cedarwaxwing_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			num = joaat("a_c_robin_01");
			break;
	
		case joaat("provision_fish_smallmouth_bass_poor"):
		case joaat("provision_fish_smallmouth_bass"):
			num = joaat("a_c_fishsmallmouthbass_01_ms");
			break;
	
		case joaat("provision_fish_perch_poor"):
		case joaat("provision_fish_perch"):
			num = joaat("a_c_fishperch_01_sm");
			break;
	
		case joaat("provision_fish_lake_sturgeon"):
		case joaat("provision_fish_lake_sturgeon_poor"):
			num = joaat("a_c_fishlakesturgeon_01_lg");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			num = joaat("a_c_songbird_01");
			break;
	
		case joaat("provision_fish_bluegill_poor"):
		case joaat("provision_fish_bluegill"):
			num = joaat("a_c_fishbluegil_01_sm");
			break;
	
		case joaat("provision_fish_largemouth_bass"):
		case joaat("provision_fish_largemouth_bass_poor"):
			num = joaat("a_c_fishlargemouthbass_01_ms");
			break;
	
		case joaat("provision_fish_northern_pike"):
		case joaat("provision_fish_northern_pike_poor"):
			num = joaat("a_c_fishnorthernpike_01_lg");
			break;
	
		case joaat("provision_fish_bullhead_catfish"):
		case joaat("provision_fish_bullhead_catfish_poor"):
			num = joaat("a_c_fishbullheadcat_01_sm");
			break;
	
		case joaat("provision_fish_redfin_pickerel_poor"):
		case joaat("provision_fish_redfin_pickerel"):
			num = joaat("a_c_fishredfinpickerel_01_sm");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			num = joaat("a_c_squirrel_01");
			break;
	
		case joaat("provision_fish_sockeye_salmon_poor"):
		case joaat("provision_fish_sockeye_salmon"):
			num = joaat("a_c_fishsalmonsockeye_01_ms");
			break;
	
		case joaat("provision_fish_rock_bass_poor"):
		case joaat("provision_fish_rock_bass"):
			num = joaat("a_c_fishrockbass_01_sm");
			break;
	
		case joaat("provision_fish_steelhead_trout_poor"):
		case joaat("provision_fish_steelhead_trout"):
			num = joaat("a_c_fishrainbowtrout_01_ms");
			break;
	
		case joaat("provision_fish_channel_catfish_poor"):
		case joaat("provision_fish_channel_catfish"):
			num = joaat("a_c_fishchannelcatfish_01_lg");
			break;
	
		case joaat("provision_fish_longnose_gar_poor"):
		case joaat("provision_fish_longnose_gar"):
			num = joaat("a_c_fishlongnosegar_01_lg");
			break;
	}

	return num;
}

int func_373(Hash hParam0) // Position - 0xFDCC Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_76(hParam0, 1064293907))
		return 2;
	else if (func_76(hParam0, -1218707194))
		return 1;
	else if (func_76(hParam0, 1888974372))
		return 0;

	return 1;
}

int func_374(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xFE11 Hash - 0x97BDF54F ^0xE45E1733
{
	var unk;
	int num;
	int i;

	unk = 15;
	PED::_0xB29C553BA582D09E(&unk, hParam0, iParam1, 1);
	num = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_25(unk[i], 0) && hParam2 == unk[i])
			num = num + 1;
	}

	return num;
}

BOOL func_375(int iParam0) // Position - 0xFE65 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_251(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1902887[iParam0 /*43*/]))
		return true;

	return false;
}

BOOL func_376(Entity eParam0) // Position - 0xFE9D Hash - 0xF5A7D53A ^0xBECE42FF
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (!ENTITY::GET_IS_ANIMAL(pedIndexFromEntityIndex))
		return false;

	if (FLOCK::_GET_ANIMAL_RARITY(pedIndexFromEntityIndex) == 2)
		return false;

	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(eParam0))
		return false;

	if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(eParam0))
		return false;

	return true;
}

BOOL func_377(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0xFF00 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_172(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_378(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0xFF27 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_379(Hash hParam0) // Position - 0xFF62 Hash - 0x701E9AA4 ^0xCB06A949
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

int func_380(var uParam0, int iParam1) // Position - 0x10047 Hash - 0x6AC2726E ^0xDB215040
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

int func_381(Hash hParam0) // Position - 0x10084 Hash - 0xD114ACC1 ^0x3428F85C
{
	Hash hash;

	hash = func_189(hParam0);

	switch (hash)
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

int func_382() // Position - 0x100F1 Hash - 0xD56F3AB7 ^0x4ED7D083
{
	if (func_27() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_383(int iParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x1010C Hash - 0x269D15B1 ^0x92B12EEC
{
	int num;
	var unk;
	var unk6;
	var unk23;

	num = -1;
	unk = { func_184(joaat("currency_cash"), true, 0) };
	unk6 = { func_511(joaat("currency_cash"), unk, unk.f_4, iParam0, true) };
	unk6.f_12 = iParam2;
	num = func_339(joaat("use"), &unk6, bParam3);

	if (num == -1)
	{
	}
	else
	{
		unk23.f_7 = -142743235;
		unk23.f_16 = -1;
		TEXT_LABEL_ASSIGN_STRING(&(unk23.f_12), sParam1, 32);
		func_195(num, unk23);
	}

	return num;
}

void func_384(int iParam0) // Position - 0x10185 Hash - 0xB563B4BE ^0xBC9B33CC
{
	var statId;

	if (iParam0 <= 0)
		return;

	if (func_382() < iParam0)
		iParam0 = func_382();

	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	statId = { func_444(joaat("CAREER_CASH")) };
	STATS::_STAT_ID_DECREMENT_INT(&statId, iParam0);
	return;
}

void func_385(int iParam0, char* sParam1, int iParam2) // Position - 0x101C1 Hash - 0xA31E0DC ^0xE519E1DE
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_SPEND";

	func_289(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 1, joaat("COLOR_RED"), 0, 0, 0, true);
	return;
}

Hash func_386(var uParam0) // Position - 0x10202 Hash - 0xDAEBAE6 ^0xFAD9C5D0
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0);
	return func_512(pedIndexFromEntityIndex);
}

Hash func_387(Entity eParam0) // Position - 0x10228 Hash - 0xB3A7ACD3 ^0xEF2020CA
{
	Hash carriableFromEntity;

	carriableFromEntity = 0;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (ENTITY::IS_ENTITY_A_PED(eParam0) && TASK::_0x6DAC799857EF3F11(PLAYER::PLAYER_PED_ID(), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0)))
		return 0;

	carriableFromEntity = ENTITY::_GET_CARRIABLE_FROM_ENTITY(eParam0);

	if (carriableFromEntity == 0)
		if (ENTITY::IS_ENTITY_A_PED(eParam0))
			carriableFromEntity = func_512(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0));

	return carriableFromEntity;
}

int func_388(Hash hParam0, int iParam1, Ped pedParam2, BOOL bParam3, Hash hParam4) // Position - 0x10286 Hash - 0x789B46BC ^0x72B9E423
{
	iParam1 = func_513(hParam0, iParam1, pedParam2, true, true, -142743235, 0, 1);

	if (iParam1 <= 0)
		return 1;

	return func_514(hParam0, iParam1, bParam3, hParam4);
}

BOOL func_389(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x102B9 Hash - 0x1D349B48 ^0xBDB6885B
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	int num4;

	if (func_515(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_233(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_80(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_516(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_517(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_339(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			num4.f_7 = -142743235;
			num4.f_16 = -1;
			num4 = iParam3;
			num4.f_7 = hParam2;
			func_195(num3, num4);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_172(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

BOOL func_390(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0x103D1 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_515(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_329(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_80(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_27() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = joaat("SLOTID_NONE");
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_339(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = bParam5;
				num2.f_7 = hParam4;
				func_195(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_172(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

int func_391(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x104EF Hash - 0xC397F4D3 ^0xB04EEF70
{
	int num;
	int num2;
	Hash hash;
	var unk;
	var unk6;
	int num3;
	int num4;

	num = -1;
	num2 = func_373(hParam0);
	hash = func_372(hParam0);

	if (hash != 0)
	{
		if (!func_80(false) || func_81())
		{
			if (bParam2)
			{
				func_89(func_88(joaat("broken_down"), joaat("small_animals")), 1);
				return func_518(hash, num2, hParam0, hParam1);
			}
		
			unk = { func_184(hParam0, true, 0) };
			unk6 = { func_322(hParam0, unk, unk.f_4, true) };
			num3 = func_519(hParam0, &unk6, 1, -142743235, false, true);
		
			if (num3 != -1)
			{
				num4.f_7 = -142743235;
				num4.f_16 = -1;
				num4 = 1;
				num4.f_3 = 1;
				func_195(num3, num4);
			}
		
			return 0;
		}
	
		if (func_257(hParam0, 1, true, -142743235))
			num = func_518(hash, num2, hParam0, hParam1);
	}

	return num;
}

BOOL func_392(Hash hParam0) // Position - 0x105CB Hash - 0x1B551CF7 ^0xD3BB1F31
{
	return func_179(hParam0) == joaat("consumable");
}

BOOL func_393(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x105DF Hash - 0x4C808C39 ^0x99CF3799
{
	var unk;
	int num;
	int num2;
	var unk19;
	var unk33;
	int i;
	int num3;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return false;

	unk = { func_368(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam2)
		func_369(&unk, func_323(false));

	if (!func_370(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_378(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_390(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_371(num);
	num3 < iParam1;
	return true;
}

void func_394(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x106AB Hash - 0x2B098F6F ^0x2F7D859F
{
	Global_1940252.f_5 = bParam0;
	Global_1940252.f_37 = iParam2;

	if (bParam1 || func_520() && iParam2 == 0)
	{
		func_521(1);
		func_522(1);
	}

	return;
}

int func_395(Ped pedParam0, Any* panParam1) // Position - 0x106E5 Hash - 0xBB5BB774 ^0xFE621BC6
{
	int pedDamageCleanliness;
	int animalRarity;
	int skinningQuality;
	int pedQuality;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::GET_IS_ANIMAL(pedParam0) && !ENTITY::_GET_IS_BIRD(pedParam0))
		return 0;

	pedDamageCleanliness = PED::_GET_PED_DAMAGE_CLEANLINESS(pedParam0);
	animalRarity = FLOCK::_GET_ANIMAL_RARITY(pedParam0);

	if (animalRarity == 2)
	{
		skinningQuality = 4;
	}
	else if (animalRarity == 1)
	{
		skinningQuality = 3;
	}
	else
	{
		pedQuality = PED::_GET_PED_QUALITY(pedParam0);
	
		switch (pedQuality)
		{
			case -1:
			case 2:
				skinningQuality = 2;
				break;
		
			case 0:
				skinningQuality = 0;
				break;
		
			case 1:
				skinningQuality = 1;
				break;
		}
	}

	if (Global_17340.f_2 != 3)
		animalRarity = Global_17340.f_2;

	num = PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(panParam1, pedParam0, pedDamageCleanliness, skinningQuality);
	return num;
}

BOOL func_396(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x10797 Hash - 0x1DFD4C48 ^0x2E953DF6
{
	var unk;
	var unk6;

	if (!func_25(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_321(false) };
	unk.f_4 = 724026534;
	unk6 = { func_322(hParam0, unk, unk.f_4, false) };
	return func_390(hParam0, &unk6, &unk, iParam1, hParam3, bParam2, false);
}

int func_397(Hash hParam0) // Position - 0x107EE Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_25(hParam0, 0))
		return 0;

	category = func_189(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

BOOL func_398(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x1081D Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_399(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6, int iParam7) // Position - 0x10850 Hash - 0x113CD144 ^0x113CD144
{
	return func_523(&uParam0, hParam4, panParam5, bParam6, iParam7);
}

BOOL func_400(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x10866 Hash - 0x7D75927B ^0xD259228E
{
	var unk;

	if (!func_80(false))
		return func_524(&uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_329(uParam0, &unk, bParam5, false, -1))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_172(bParam5), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_401(Hash hParam0) // Position - 0x108DA Hash - 0x5E6E1858 ^0x6F4DE1DC
{
	!func_25(hParam0, 0);

	if (func_76(hParam0, 162787671))
		return true;

	return false;
}

BOOL func_402(Hash hParam0, var uParam1) // Position - 0x10900 Hash - 0x5707A863 ^0xE95FAC31
{
	var unk;

	if (!func_525(856287005, hParam0))
		return false;

	unk = { func_266() };
	*uParam1 = func_406(unk, hParam0, false, -1);

	if (!func_25(*uParam1, 0))
		return false;

	return true;
}

BOOL func_403(Hash hParam0) // Position - 0x10943 Hash - 0xFE7E2AF0 ^0xD9E8AFF
{
	!func_25(hParam0, 0);
	return hParam0 == 1362183957 || hParam0 == 563996796 || hParam0 == joaat("horse_equipment_moonshinersaddle_001_improved_new_saddle_000");
}

BOOL func_404(Hash hParam0) // Position - 0x1097A Hash - 0xE73A5858 ^0x53D14ED5
{
	!func_25(hParam0, 0);
	return hParam0 == 2031387366 || hParam0 == 1270980548;
}

BOOL func_405(Hash hParam0) // Position - 0x109A3 Hash - 0x1814AD50 ^0xEA253034
{
	!func_25(hParam0, 0);
	return hParam0 == -1731781873;
}

Hash func_406(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0x109BE Hash - 0x67107E64 ^0x67107E64
{
	return func_526(&uParam0, hParam4, bParam5, iParam6);
}

BOOL func_407(Hash hParam0) // Position - 0x109D2 Hash - 0x37EEAC8A ^0x201FD0EE
{
	if (hParam0 == 263080063 || hParam0 == -34331381 || hParam0 == -993578318 || hParam0 == 579268144 || hParam0 == 1104489688)
		return true;

	return false;
}

BOOL func_408(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x10A22 Hash - 0x73B59486 ^0xBF979BF0
{
	int num;
	int num2;
	var unk;
	var unk19;
	int i;

	if (hParam0 == 0)
		return false;

	unk = { func_368(0, hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };
	func_369(&unk, func_266());

	if (func_370(&unk, &num, &num2, false))
	{
		unk19.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_378(&unk19, i, num, num2))
			{
				if (func_25(unk19.f_4, 0) && !unk19.f_10)
				{
					if (bParam2 && func_407(unk19.f_4))
					{
					}
					else
					{
						*uParam1 = { unk19 };
						func_371(num);
						return true;
					}
				}
			}
		}
	
		func_371(num);
	}

	return false;
}

BOOL func_409(Hash hParam0, Hash hParam1) // Position - 0x10ADA Hash - 0xCB56AA2F ^0x760BB648
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

Hash func_410(Hash hParam0, BOOL bParam1) // Position - 0x10B01 Hash - 0xBBDA5425 ^0xB2995F96
{
	switch (hParam0)
	{
		case joaat("kit_pouch_kit"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
	
		case joaat("kit_pouch_valuables"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
	
		case joaat("kit_pouch_provisions"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	
		case joaat("kit_pouch_remedies"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
	
		case 239629152:
			if (bParam1)
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			break;
	
		case joaat("kit_pouch_materials"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
	
		case joaat("kit_pouch_ingredients"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
	}

	return 0;
}

int func_411(Hash hParam0) // Position - 0x10BA3 Hash - 0xE1F3DDAE ^0xC8D3B326
{
	var outData;
	int num;

	if (!func_25(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

BOOL func_412(Hash hParam0) // Position - 0x10BDD Hash - 0x5E6E1858 ^0xE905275C
{
	!func_25(hParam0, 0);

	if (func_76(hParam0, -393037696))
		return true;

	return false;
}

int func_413(Hash hParam0, int iParam1) // Position - 0x10C03 Hash - 0x193BF536 ^0xD3271214
{
	var outData;
	int num;
	int outIndex;
	int i;

	outData = 20;
	num = 0;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &outData, &outIndex, 20))
	{
		for (i = 0; i < outIndex; i = i + 1)
		{
			if (outData[i /*2*/].f_1 == iParam1)
			{
				num = outData[i /*2*/];
				return num;
			}
		}
	}

	return 0;
}

char* func_414(Hash hParam0) // Position - 0x10C51 Hash - 0x40E070C8 ^0xE8F2044F
{
	Hash labelHash;

	if (!func_25(hParam0, 0))
		return "";

	labelHash = func_278(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_415(Hash hParam0) // Position - 0x10C87 Hash - 0xB0090776 ^0x189C4477
{
	if (func_189(hParam0) == -126813555 || func_189(hParam0) == 1946043663)
		return true;

	return false;
}

char* func_416(Hash hParam0) // Position - 0x10CB5 Hash - 0xB15BC7E7 ^0xE94F4C7B
{
	Hash labelHash;

	if (!func_25(hParam0, 0))
		return "";

	labelHash = func_280(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

void func_417(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x10CEA Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_418(Hash hParam0) // Position - 0x10D1B Hash - 0xCD05DF70 ^0x86E370D6
{
	var unk;

	if (func_27() != -1)
		return false;

	if (func_275(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_185(hParam0, &unk, 1, false, false, -1, false);

	return func_150(hParam0, 1);
}

void func_419(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x10D60 Hash - 0x4ACBF8C5 ^0x4A0F082E
{
	Hash weaponHash;

	if (func_179(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_177(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_171(weaponHash))
	{
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_33, weaponHash, 0, false) && func_138(hParam0, false, false, false) == 0)
		{
			if (func_27() == -1)
				func_178(weaponHash);
		
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_181(hParam0, iParam1, false, false, false, false, false);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_420(Hash hParam0, var uParam1) // Position - 0x10E0A Hash - 0xE8F09939 ^0xD0796490
{
	if (func_76(hParam0, 58855631))
		func_283(hParam0, -915411861, uParam1, true);

	return;
}

int func_421(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10E2F Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_300(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_172(bParam1), hParam0, bParam3);
}

BOOL func_422() // Position - 0x10E62 Hash - 0xB8876D40 ^0xFAD3D5CE
{
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33) && !func_527(Global_33, 1369124074) && !func_527(Global_33, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		return true;

	return false;
}

BOOL func_423(int iParam0) // Position - 0x10EC7 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_424(int iParam0) // Position - 0x10EDA Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

void func_425(int iParam0) // Position - 0x10F04 Hash - 0x48EBE6BD ^0x358C7E90
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_38.f_3651[num2];
	MISC::SET_BIT(&address, offset);
	Global_38.f_3651[num2] = address;
	return;
}

void func_426(int iParam0) // Position - 0x10F3E Hash - 0xB25DF9C2 ^0xF6204414
{
	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (func_536() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_537("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_302(677, false);
			break;
	
		case 3:
			if (func_536() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_537("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_302(678, false);
			break;
	
		case 4:
			if (func_536() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_537("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_302(679, false);
			break;
	
		case 5:
			if (func_536() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_537("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_302(680, false);
			break;
	
		case 6:
			break;
	
		case 7:
			break;
	
		case 8:
			break;
	
		case 9:
			break;
	
		case 10:
			break;
	
		case 11:
			func_528(true);
			break;
	
		case 12:
			break;
	
		case 13:
			break;
	
		case 14:
			break;
	
		case 15:
			break;
	
		case 16:
			break;
	
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_529(1);
			break;
	
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_529(2);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_529(3);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
	
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
	
		case 22:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
	
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
	
		case 24:
			break;
	
		case 25:
			break;
	
		case 26:
			break;
	
		case 27:
			break;
	
		case 28:
			break;
	
		case 29:
			break;
	
		case 30:
			break;
	
		case 31:
			break;
	
		case 32:
			func_530(true);
			break;
	
		case 33:
			func_531(true);
			break;
	
		case 34:
			func_532(true);
			break;
	
		case 35:
			break;
	
		case 36:
			func_533(false);
			break;
	
		case 37:
			func_534(false);
			break;
	
		case 38:
			func_535(false);
			break;
	
		case 39:
			break;
	
		case 40:
			break;
	
		case 41:
			break;
	
		case 42:
			break;
	
		case 43:
			break;
	
		case 44:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940199.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
	
		case 45:
			break;
	
		case 46:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 47:
			if (func_27() == -1)
				if (!func_150(1013902307, 1))
					func_298(1013902307, 1, 752097756);
			break;
	
		case 48:
			if (func_27() == -1)
				if (!func_150(786809402, 1))
					func_298(786809402, 1, 752097756);
			break;
	
		case 49:
			if (func_27() == -1)
			{
				if (!func_150(1013902307, 1))
					func_298(1013902307, 1, 752097756);
			
				if (!func_150(142640135, 1))
					func_298(142640135, 1, 752097756);
			}
			break;
	
		case 50:
			if (func_27() == -1)
			{
				if (!func_150(786809402, 1))
					func_298(786809402, 1, 752097756);
			
				if (!func_150(-518019409, 1))
					func_298(-518019409, 1, 752097756);
			}
			break;
	
		case 51:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
	
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
	
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
	
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
	
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}

	return;
}

void func_427(Hash hParam0, int iParam1) // Position - 0x114BA Hash - 0xC6BCDC43 ^0xB7300BA8
{
	int ammo;
	int ammo2;
	int ammo3;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_33, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo3 = func_141(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, hParam0, ammo3);
	
		if (WEAPON::GET_MAX_AMMO(Global_33, &ammo2, hParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, hParam0) > ammo2)
			WEAPON::SET_PED_AMMO(Global_33, hParam0, ammo2);
	}

	return;
}

BOOL func_428(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1152C Hash - 0x8DB88FC7 ^0xD6CAC1F
{
	int num;
	var guid2;
	var guid1;

	if (!func_25(hParam0, 0))
		return 0;

	num = func_233(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	guid2 = { func_184(hParam0, false, 0) };

	if (func_185(hParam0, &guid2, iParam1, false, false, -1, false))
		return 0;

	if (!func_80(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_172(false), &guid1, &guid2, hParam0, guid2.f_4, iParam1, hParam2))
		return 0;

	return 1;
}

void func_429(Hash hParam0) // Position - 0x115A8 Hash - 0x708BD33E ^0xB1D88C37
{
	char* propertyName;
	char* propertyName2;
	int value;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940199.f_6)
		return;

	if (WEAPON::IS_WEAPON_BOW(hParam0))
		return;

	propertyName = "player_newWeaponType";
	propertyName2 = "player_newWeaponTime";

	if (WEAPON::IS_WEAPON_PISTOL(hParam0))
	{
		propertyName = "player_newPistolWeaponType";
		propertyName2 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(hParam0))
	{
		propertyName = "player_newRevolverWeaponType";
		propertyName2 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(hParam0))
	{
		propertyName = "player_newRifleWeaponType";
		propertyName2 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(hParam0))
	{
		propertyName = "player_newShotgunWeaponType";
		propertyName2 = "player_newShotgunWeaponTime";
	}

	DECORATOR::DECOR_SET_INT(Global_33, propertyName, hParam0);
	value = func_538();
	func_539(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_33, propertyName2, value);
	return;
}

int func_430(Hash hParam0) // Position - 0x11677 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_26(hParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, joaat("ammo_arrow")) <= 0)
			num = 10;
		else
			num = 0;
	}
	else if (WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(hParam0))
			num = 12;
		else
			num = WEAPON::GET_WEAPON_CLIP_SIZE(hParam0) * 4;
	
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
	
		if (pedAmmoByType >= num)
			num = 0;
		else if (pedAmmoByType > 0)
			num = num - pedAmmoByType;
	}

	return num;
}

BOOL func_431() // Position - 0x116F3 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_432(Hash hParam0) // Position - 0x116FC Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_433(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1170E Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_434(Hash hParam0) // Position - 0x11734 Hash - 0xBA04765D ^0x454D110B
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_293(49))
			{
				if (!func_293(47))
					return 149;
			
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_293(50))
			{
				if (!func_293(48))
					return 150;
			
				return 152;
			}
		}
	}

	return 153;
}

void func_435(int iParam0, var uParam1, var uParam2) // Position - 0x117A0 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_436(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x117BC Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_540(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_541(iParam0))
		return false;

	if (func_542(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_441(iParam0, 1) || func_543(32768))
		if (!func_441(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_544())
		return false;

	return true;
}

void func_437(int iParam0, int iParam1) // Position - 0x1185E Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

int func_438(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x11882 Hash - 0x88B97E84 ^0x896726CB
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (func_27() == 0)
		return 0;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_150(joaat("provision_trinket_elk_antler"), 1))
		num = num + 0.1f;

	num2.f_1 = 10;
	num2.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_33, true, true, hParam0, &num2, 0);

	for (i = 0; i < num2; i = i + 1)
	{
		if (num2.f_1[i] == joaat("currency_cash"))
		{
			return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
		else
		{
			hash = num2.f_1[i];
		
			if (func_25(hash, 0) && func_76(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_439(int iParam0, const char* sParam1, int iParam2, BOOL bParam3) // Position - 0x11952 Hash - 0x6EA86F5A ^0x2E9D5598
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_545(iParam0, 1000);
			return;
		}
	
		sParam1 = "FEED_MONEY_EARN";
	}

	func_289(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_440(int iParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x119A4 Hash - 0x7435A573 ^0x3E04C000
{
	int num;
	int value;
	int num2;

	if (iParam0 <= 0)
		return;

	if (bParam1)
	{
		num = BUILTIN::ROUND(BUILTIN::TO_FLOAT(iParam0) * iParam2);
		value = (iParam0 - num) / iParam3;
	
		if (func_546() || func_547())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_289(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
		num > 0;
		func_289(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, 752097756);
		func_89(func_444(joaat("CAREER_CASH")), value);
	}

	return;
}

BOOL func_441(int iParam0, int iParam1) // Position - 0x11A7F Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_442(var uParam0, int iParam1) // Position - 0x11A98 Hash - 0x624BD2B7 ^0x9DA59487
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

BOOL func_443(Hash hParam0, var uParam1, Any anParam2, int iParam3, int iParam4) // Position - 0x11BC4 Hash - 0x4F430DA4 ^0x658D22B6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_548(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_3.f_1 = 10;
	num = iParam3;
	num.f_3 = { *uParam1 };
	num.f_2 = iParam4;
	func_549(anParam2, hParam0, num);
	return 1;
}

struct<2> func_444(int iParam0) // Position - 0x11C33 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x11C43 Hash - 0xA17D549C ^0xDD3DC8D1
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
	
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
	
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
	
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
	
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
	
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
	
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
	
		case 7:
			return "PROVISION_FISH_MUSKIE";
	
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
	
		case 9:
			return "PROVISION_FISH_PERCH";
	
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
	
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
	
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
	
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
	
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
	
		default:
		
	}

	return "FISHTYPE_UNKNOWN";
}

Hash func_446(Hash hParam0) // Position - 0x11D1A Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_151(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

BOOL func_447(Hash hParam0, var uParam1) // Position - 0x11D44 Hash - 0x6C0FFC3B ^0xB2795CB6
{
	int i;
	var outSlotId;
	var unk;
	Hash category;
	int num;

	if (hParam0 != 0)
	{
		category = func_189(hParam0);
	
		if (category != 0)
		{
			num = func_550(hParam0);
		
			for (i = 0; i < num; i = i + 1)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
				{
					unk = outSlotId;
				
					if (unk == uParam1)
						return true;
				}
			}
		}
	}

	return false;
}

struct<4> func_448() // Position - 0x11D98 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_449() // Position - 0x11DA4 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_421(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_450(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x11DC1 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_172(false);
	*panParam1 = { func_322(hParam0, func_323(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_451(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x11E06 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_172(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_452(Hash hParam0) // Position - 0x11E40 Hash - 0xD47FBCD ^0xAB7C7E88
{
	return func_76(hParam0, 1279601681);
}

BOOL func_453(Hash hParam0) // Position - 0x11E53 Hash - 0x3FD9EF89 ^0x3FC8CAC6
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(hParam0);
}

void func_454(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x11E6B Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_189(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_455(int iParam0) // Position - 0x12041 Hash - 0x6C22F57C ^0x1F3736DE
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

BOOL func_456(Hash hParam0, Hash hParam1) // Position - 0x12064 Hash - 0xFB5CB038 ^0x83BB35B8
{
	if (!func_25(hParam0, 0))
		return false;

	if (func_223(hParam0) || func_76(hParam0, 1077060302))
		return func_464(func_224(hParam0, false), hParam1, false);

	return ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1) > 0;
}

int func_457(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x120B0 Hash - 0x45FFEF5A ^0x45FFEF5A
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_334(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar") || unk[i /*2*/] == joaat("character_role_token"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

BOOL func_458(Hash hParam0, Any* panParam1) // Position - 0x12144 Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_551(panParam1->f_8, hParam0, num, 2048) || func_551(panParam1->f_8, hParam0, num, 32768) || func_551(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_551(panParam1->f_8, hParam0, num, 4) || func_551(panParam1->f_8, hParam0, num, 256) || func_551(panParam1->f_8, hParam0, num, 65536) || func_551(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_551(panParam1->f_8, hParam0, num, 1) || func_551(panParam1->f_8, hParam0, num, 8) || func_551(panParam1->f_8, hParam0, num, 65536) || func_551(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_551(panParam1->f_8, hParam0, num, 1) || func_551(panParam1->f_8, hParam0, num, 16) || func_551(panParam1->f_8, hParam0, num, 2) || func_551(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_551(panParam1->f_8, hParam0, num, 8) || func_551(panParam1->f_8, hParam0, num, 4096) || func_551(panParam1->f_8, hParam0, num, 256) || func_551(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_459(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1231A Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_460(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x12331 Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_552(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_552(iParam1, 2, 0, 0);
	return -1;
}

int func_461(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x1237A Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_552(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

BOOL func_462(int* piParam0) // Position - 0x12396 Hash - 0xF95E1119 ^0x322602AD
{
	int num;

	if (piParam0->f_1 == -1)
		return false;

	num = func_553(piParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

BOOL func_463(Any anParam0) // Position - 0x123C8 Hash - 0x36229A1B ^0x2A9934D3
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_464(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x1240E Hash - 0xDFD4B035 ^0x7F7C43A6
{
	if (!func_453(hParam0))
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_225(hParam0, hParam1);

	return true;
}

BOOL func_465(Hash hParam0, var uParam1) // Position - 0x12446 Hash - 0x4D07B4AD ^0x4D07B4AD
{
	*uParam1 = func_554(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_466(Hash hParam0, var uParam1) // Position - 0x1245D Hash - 0xA213590B ^0xA213590B
{
	*uParam1 = func_555(hParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_467() // Position - 0x12475 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_22477;
}

BOOL func_468(int iParam0) // Position - 0x12484 Hash - 0x16518DC6 ^0xD6363784
{
	if (iParam0 == 34 && Global_1915656.f_22504.f_1)
		return true;

	if (func_3(true))
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

BOOL func_469(Hash hParam0, Hash hParam1) // Position - 0x124BF Hash - 0xB71B0B73 ^0xC03A81D
{
	int num;
	int num2;
	var unk;

	if (hParam1 == -570078785)
	{
		num = func_457(hParam0, -570078785, false, true);
		num == 0;
	
		if (!func_336(num))
		{
			if (Global_1915656.f_20644)
				func_557(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_556(num)));
		
			return 0;
		}
	}
	else if (hParam1 == -915411861)
	{
		num2 = func_457(hParam0, -915411861, false, true);
		num2 == 0;
	
		if (!func_335(num2))
		{
			if (Global_1915656.f_20644)
				func_557("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam1 == 997808187)
	{
		return 1;
	}

	if (!func_188(hParam0, hParam1, &unk, true, false))
		return 0;

	return 1;
}

BOOL func_470(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x12579 Hash - 0x4801AC33 ^0x977B4A54
{
	var unk;

	unk = 1;
	unk.f_1.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, unk, &unk, bParam4);
}

BOOL func_471(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x125A5 Hash - 0x79BD6891 ^0x6EEFD0DD
{
	int num;

	num = 2;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_472(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x125DA Hash - 0x50B8B41C ^0x57F7DD8D
{
	int num;

	num = 3;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_473(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x12618 Hash - 0x95B6482C ^0xD86BD1B3
{
	int num;

	num = 4;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_474(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1265F Hash - 0xA71C5094 ^0xD7710400
{
	int num;

	num = 5;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_475(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x126AF Hash - 0xA70AFF4C ^0x87A14E1A
{
	int num;

	num = 6;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_476(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x12708 Hash - 0x9D241613 ^0x5206EC63
{
	int num;

	num = 7;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_477(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1276A Hash - 0xD3D82136 ^0x2BD9FD92
{
	int num;

	num = 8;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_478(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x127D6 Hash - 0xB89E9756 ^0xC7E4B9B7
{
	int num;

	num = 9;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_479(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1284B Hash - 0xAF93960A ^0x4FD34C17
{
	int num;

	num = 10;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_480(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x128C9 Hash - 0xA7BE52A0 ^0x83098350
{
	int num;

	num = 11;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_481(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x12950 Hash - 0x78A25486 ^0xE1D6F33B
{
	int num;

	num = 12;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_482(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x129E0 Hash - 0x41DDF9C2 ^0x5DB4EE85
{
	int num;

	num = 13;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_483(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x12A79 Hash - 0x69651352 ^0x3F210A96
{
	int num;

	num = 14;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_484(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x12B1B Hash - 0xD2B02045 ^0xF05687F5
{
	int num;

	num = 15;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_485(Hash hParam0) // Position - 0x12BC6 Hash - 0xA7C375F ^0xA7C375F
{
	Hash hash;

	hash = func_168(hParam0);

	if (func_250(hash, 2))
		return true;

	return false;
}

BOOL func_486(int* piParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0x12BE5 Hash - 0x48FFE57F ^0x48FFE57F
{
	int num;
	var unk;
	var unk2;
	int i;
	var unk4;
	Hash hash;
	var unk85;
	var unk89;

	if (!func_250(hParam1, 2))
		return 0;

	unk2 = 1;
	unk4 = 16;
	func_559(hParam1, &unk2, &unk, &unk4, &num);

	if (func_113(iParam4, 8) && !func_560(hParam1, hParam2, iParam3))
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk4[i /*5*/].f_1 == joaat("SLOTID_NONE"))
		{
			hash = unk4[i /*5*/];
		
			if (func_113(iParam4, 4))
				if (!func_489(piParam0, hash, unk85, unk89, hParam2, iParam3 * unk4[i /*5*/].f_4, true, true))
					return 0;
		}
	}

	return 1;
}

BOOL func_487(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5) // Position - 0x12C90 Hash - 0x7947EF49 ^0x975F946
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_329(uParam1, &unk, true, false, -1))
		return false;

	if (!func_398(hParam0, func_189(unk.f_4), hParam5))
		return false;

	return true;
}

BOOL func_488(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x12CE1 Hash - 0xAE4FAB93 ^0xAE4FAB93
{
	if (func_113(iParam2, 1))
		if (!func_561(hParam0))
			return false;

	if (func_113(iParam2, 2))
		if (func_134(hParam0, hParam1, true))
			return false;

	return true;
}

BOOL func_489(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x12D1C Hash - 0xFE04F182 ^0x2B0693EE
{
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (!bParam10 && !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2))
		return false;

	unk.f_4 = hParam6;
	unk = { uParam2 };
	num = func_332(hParam1, uParam2, hParam6, true, !bParam10, false);
	num2 = func_235(hParam1, &unk, !bParam10, true);

	if (bParam9)
		num3 = 1;
	else
		func_283(hParam1, hParam7, &num3, false);

	num4 = func_562(piParam0, hParam1) * num3;
	num4 > 0;

	if (num2 >= 0)
	{
		num5 = num2 - (num + num4);
		num6 = iParam8 * num3;
	
		if (num6 > num2)
			num6 = num2;
	
		if (num5 <= 0)
			return false;
		else if (num6 - num5 >= num3)
			return false;
	}

	return true;
}

BOOL func_490(int* piParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x12DD3 Hash - 0xB3A38359 ^0x7DB653C4
{
	int num;
	int num2;
	int num3;
	int num4;
	var unk;
	var unk3;

	if (func_563(hParam1, true) && !func_564(hParam1, true))
	{
		if (Global_1915656.f_20644)
			func_557(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
	
		return 0;
	}

	if (hParam2 == -570078785)
	{
		num = func_337(hParam1, -570078785, true, false, true, 0);
		num == 0;
		num2 = num * iParam3;
	
		if (!func_336(num2 + func_565(piParam0, hParam2)))
		{
			if (Global_1915656.f_20644)
				func_557(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", num2 / 100));
		
			return 0;
		}
	}
	else if (hParam2 == -915411861)
	{
		num3 = func_337(hParam1, -915411861, true, false, true, 0);
		num3 == 0;
		num4 = num3 * iParam3;
	
		if (!func_335(num4 + func_565(piParam0, hParam2)))
		{
			if (Global_1915656.f_20644)
				func_557("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam2 == 997808187)
	{
		return 1;
	}

	if (func_250(func_168(hParam1), 2))
		if (!func_566(func_168(hParam1), iParam3, hParam2, &unk, true))
			return 0;
	else if (func_25(hParam1, 0))
		if (!func_227(hParam1, iParam3, hParam2, &unk, &unk3, false, true, false))
			return 0;

	return 1;
}

BOOL func_491(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x12F1B Hash - 0x6C19C4AE ^0xD83B353E
{
	var unk;

	unk = 1;
	unk.f_1.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, unk, &unk, bParam4, iParam5);
}

BOOL func_492(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x12F49 Hash - 0x8B27BE2E ^0xAADA8B60
{
	int num;

	num = 2;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_493(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x12F80 Hash - 0xD4CDEBBB ^0xBF2724AE
{
	int num;

	num = 3;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_494(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x12FC0 Hash - 0xD685F3D ^0x43E0AB59
{
	int num;

	num = 4;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_495(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13009 Hash - 0xDF565364 ^0x91E17214
{
	int num;

	num = 5;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_496(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1305B Hash - 0x34514D80 ^0x4B6EF0F8
{
	int num;

	num = 6;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_497(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x130B6 Hash - 0xCAE539AC ^0xECCA6C83
{
	int num;

	num = 7;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_498(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1311A Hash - 0x56AD96CC ^0x971EFE86
{
	int num;

	num = 8;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_499(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13188 Hash - 0x1B3CBC5E ^0x508721F5
{
	int num;

	num = 9;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_500(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x131FF Hash - 0xA29DCDA ^0xEDD5D2BE
{
	int num;

	num = 10;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_501(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1327F Hash - 0x4B3D6141 ^0xF7C4BBFB
{
	int num;

	num = 11;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_502(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13308 Hash - 0xCE26321D ^0xE0369832
{
	int num;

	num = 12;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_503(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1339A Hash - 0x72FA62DD ^0x50977A79
{
	int num;

	num = 13;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_504(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x13435 Hash - 0xCE2A63CA ^0x257C4997
{
	int num;

	num = 14;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_505(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x134D9 Hash - 0x9E474A42 ^0x2D85E611
{
	int num;

	num = 15;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

var func_506(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x13586 Hash - 0x63C3F71D ^0x3019B977
{
	var value;
	Player bitIndex;
	int i;
	BOOL flag;
	BOOL flag2;
	Player player;
	int num;
	BOOL flag3;
	Volume volume;
	BOOL flag4;
	Player player2;
	Ped playerPed;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return value;

	if (func_568() != 0)
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
	num = Global_1295666.f_10;
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_569());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_569());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_569());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_570(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_357(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_571(i) != 1)
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
					if (GANG::NETWORK_GET_GANG_ID(player2) != num)
						flag = true;
		
			if (!flag)
				if (flag4 & 65536 != 0)
					if (!func_572(player2))
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

BOOL func_507(int iParam0, int iParam1) // Position - 0x13919 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_573(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_354())
		return func_573(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_573(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_508(int iParam0) // Position - 0x1398D Hash - 0x745CE6FE ^0x745CE6FE
{
	return func_573(&(Global_1956875.f_1565), iParam0, 1);
}

int func_509(int iParam0) // Position - 0x139A3 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_574(func_508(iParam0));
}

BOOL func_510(Hash hParam0, Hash hParam1, Any anParam2) // Position - 0x139B5 Hash - 0x29542237 ^0x85ED2DB5
{
	int i;
	int num;

	num = ITEMDATABASE::_0x7A35A72A692BE9DB(hParam0);

	for (i = 0; i < num; i = i + 1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(hParam0, i, anParam2) && *anParam2 == hParam1)
			return true;
	}

	return false;
}

struct<17> func_511(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, BOOL bParam7) // Position - 0x139F5 Hash - 0x442F1CC9 ^0x744DB9CB
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk.f_4 = { uParam1 };
	unk = { func_322(hParam0, unk.f_4, hParam5, true) };
	unk.f_8 = hParam0;
	unk.f_9 = iParam6;
	unk.f_11 = hParam5;

	if (bParam7)
	{
		unk.f_15 = func_233(hParam0, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_448() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

Hash func_512(Ped pedParam0) // Position - 0x13A6F Hash - 0x159F0730 ^0x5BA63351
{
	Ped pedAttached;
	int pedDamageCleanliness;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	pedAttached = pedParam0;
	pedDamageCleanliness = PED::_GET_PED_DAMAGE_CLEANLINESS(pedAttached);
	num = func_575(pedAttached);

	if (!ENTITY::DOES_ENTITY_EXIST(pedAttached))
		return 0;

	if (TASK::_0x7CB99FADDE73CD1B(pedAttached))
		return 0;

	num2 = pedDamageCleanliness;
	num3 = num;

	if (num3 < num2)
		pedDamageCleanliness = num3;

	if (!PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&num4, pedAttached, pedDamageCleanliness))
		return 0;

	if (num4 != 0)
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedAttached, 43391475) || ENTITY::_IS_ENTITY_FULLY_LOOTED(pedAttached))
		{
			num5 = func_576(num4);
			return num5;
		}
	
		return num4;
	}

	switch (pedDamageCleanliness)
	{
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
	
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
	
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
	
		default:
		
	}

	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

int func_513(Hash hParam0, int iParam1, Ped pedParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7) // Position - 0x13B42 Hash - 0xBFFE30FD ^0x69B34B6A
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam2))
	{
		num = func_577(pedParam2, hParam0);
	
		if (num > 0)
		{
			if (iParam1 < num)
				num = iParam1;
		
			iParam1 = iParam1 - num;
			func_578(&pedParam2, hParam0, &num, bParam4, hParam5, iParam6);
			iParam1 = iParam1 + num;
		}
	}

	iParam1 = func_579(PLAYER::PLAYER_PED_ID(), hParam0, iParam1, bParam3, iParam6);

	if (iParam1 <= 0)
		return iParam1;

	return iParam1;
}

int func_514(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x13BAC Hash - 0xE0E24551 ^0xE0E24551
{
	int num;
	int num2;
	int num3;

	num = func_138(hParam0, false, false, false);

	if (num >= iParam1)
	{
		num2 = iParam1;
	}
	else
	{
		num2 = num;
		num3 = iParam1 - num2;
	}

	if (num2 > 0)
		if (!func_257(hParam0, num2, bParam2, hParam3))
			return 0;
		else
			func_580(hParam0, num2, false);

	if (num3 > 0)
	{
		if (!func_581(hParam0, num3, bParam2, hParam3))
			return 0;
		else
			func_580(hParam0, num2, false);
	
		if (!bParam2)
			func_582("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, true);
	}

	return 1;
}

BOOL func_515(Hash hParam0) // Position - 0x13C3B Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_516(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x13C51 Hash - 0xF48E6FC8 ^0xA8BADD49
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_233(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_583(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_517(Hash hParam0, var uParam1) // Position - 0x13CBE Hash - 0x692393AE ^0xF1DF31F2
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { func_322(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

int func_518(Hash hParam0, int iParam1, Hash hParam2, Hash hParam3) // Position - 0x13D11 Hash - 0xB286F3DC ^0xFA2F06E4
{
	Hash hash;
	var unk;
	var unk13;
	int i;
	int num;

	if (!func_80(false) || func_81())
	{
		hash = hParam0;
		unk.f_1 = 10;
		func_585(iParam1, func_584(hParam2), &unk, true);
		func_586(hash, &unk, 0, 0);
		func_302(501, false);
		return 0;
	}

	unk13 = 15;
	PED::_0xB29C553BA582D09E(&unk13, hParam0, iParam1, func_584(hParam2));

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_25(unk13[i], 0) && !func_76(unk13[i], 1286414894) && !(unk13[i] == hParam2))
		{
			func_182(unk13[i], 1, false, false, false, 752097756, 0, 0, 0, false);
		
			if (hParam3 != 0)
				if (hParam3 == unk13[i])
					num = num + 1;
			else
				num = num + 1;
		}
	}

	func_394(func_80(false), false, 0);
	return num;
}

int func_519(Hash hParam0, Any* panParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x13E0F Hash - 0xCB093BA8 ^0x12CB551
{
	var unk;
	var unk15;
	int num;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return -1;

	if (func_515(hParam0))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_329(*panParam1, &unk, true, false, -1))
		return -1;

	if (unk.f_13)
		return -1;

	if (iParam2 < 0)
		iParam2 = unk.f_11;
	else if (iParam2 > unk.f_11)
		iParam2 = unk.f_11;

	unk15 = { func_587(&unk, false) };
	unk15.f_9 = iParam2;
	unk15.f_12 = iParam3;
	num = -1;
	num = func_339(joaat("use"), &unk15, bParam5);

	if (bParam4 && num != -1)
	{
		num2.f_7 = -142743235;
		num2.f_16 = -1;
		num2 = 1;
		func_195(num, num2);
	}

	return num;
}

BOOL func_520() // Position - 0x13ED8 Hash - 0xA30B23E7 ^0xAB29D7A2
{
	if (Global_1940252.f_11596 != Global_1940252.f_41.f_203 - 1 || func_589(func_588(0), Global_1940252.f_11588, false, true, true) > 0 || Global_1940252.f_11596 == 15)
		return true;

	func_590(0);

	if (Global_1940252.f_7)
		return true;

	return false;
}

void func_521(int iParam0) // Position - 0x13F37 Hash - 0x29A8F290 ^0x82294867
{
	Global_1940252.f_11 = iParam0;
	return;
}

void func_522(int iParam0) // Position - 0x13F47 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1940252.f_10 = iParam0;
	return;
}

BOOL func_523(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0x13F57 Hash - 0xDB9E5F ^0x558F176F
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_172(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return 0;

	if (!func_451(&outGuid, panParam2, bParam3, false, iParam4))
		return 0;

	return 1;
}

int func_524(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0x13FA5 Hash - 0x85BC54D5 ^0xA60D4F06
{
	int num;
	var unk;
	int num2;
	var unk15;
	var unk44;
	var unk70;
	var unk88;

	num = -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return num;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_329(*panParam0, &unk, true, false, -1))
		return num;

	if (unk.f_10 == iParam1)
		return num;

	if (unk.f_13)
		return num;

	num2 = func_179(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_591(*panParam0, true, false) };
		unk15.f_10 = iParam1;
		num = func_592(joaat("UPDATE"), &unk15, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("coach"))
	{
		unk44 = { func_593(*panParam0, true, false) };
		unk44.f_10 = iParam1;
		num = func_594(joaat("UPDATE"), &unk44, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk70 = { func_595(*panParam0, true, false) };
		unk70.f_10 = iParam1;
		num = func_596(joaat("UPDATE"), &unk70, bParam2);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk88 = { func_587(&unk, false) };
		unk88.f_10 = iParam1;
		num = func_339(joaat("UPDATE"), &unk88, bParam2);
	
		if (num == -1)
			return num;
	}

	return num;
}

BOOL func_525(Hash hParam0, int iParam1) // Position - 0x140EB Hash - 0xD9D79AE0 ^0x7D4DF544
{
	int i;
	int outSlotId;
	int num;
	Hash category;
	int num2;

	if (hParam0 != 0)
	{
		category = func_189(hParam0);
	
		if (category != 0)
		{
			num2 = func_397(hParam0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
				{
					num = outSlotId;
				
					if (num == iParam1)
						return true;
				}
			}
		}
	}

	return false;
}

int func_526(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0x1413F Hash - 0xCBDD84FC ^0x74C2D9B6
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_523(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

BOOL func_527(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x1416D Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

void func_528(BOOL bParam0) // Position - 0x14196 Hash - 0xB584A39F ^0xFC4CA802
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}

	return;
}

void func_529(int iParam0) // Position - 0x141D4 Hash - 0x2EDDC601 ^0x8923AAAC
{
	Hash itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1956875.f_5.f_7))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956875.f_5.f_7) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956875.f_5.f_7, iParam0);
	
		if (itemContextByIndex == Global_1956875.f_5.f_14[iParam0 /*102*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956875.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956875.f_5.f_14[iParam0 /*102*/]);
	return;
}

void func_530(BOOL bParam0) // Position - 0x14242 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 440, !bParam0);
	return;
}

void func_531(BOOL bParam0) // Position - 0x1427C Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 439, !bParam0);
	return;
}

void func_532(BOOL bParam0) // Position - 0x142B6 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 438, !bParam0);
	return;
}

void func_533(BOOL bParam0) // Position - 0x142F0 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_534(BOOL bParam0) // Position - 0x14313 Hash - 0x15EA8A2D ^0x6EE74130
{
	int promptType;
	Player player;

	promptType = 50;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

void func_535(BOOL bParam0) // Position - 0x14355 Hash - 0xBAD014C9 ^0x3FDE3E28
{
	int promptType;
	Player player;

	promptType = 49;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

BOOL func_536() // Position - 0x14397 Hash - 0x65674CA9 ^0xC0D8F466
{
	return true;
}

int func_537(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x143B6 Hash - 0xB88D7AA5 ^0x36259347
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam4;
	num.f_1 = iParam5;
	num.f_2 = iParam6;
	num.f_3 = iParam8;
	num2.f_7 = 1;
	num2 = iParam7;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = iParam2;
	num2.f_5 = iParam3;
	num2.f_7 = 1;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam9, bParam10);
	return num3;
}

int func_538() // Position - 0x1441C Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

void func_539(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x14428 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_597(*uParam0);
	i = func_598(*uParam0);
	num2 = func_599(*uParam0);
	j = func_600(*uParam0);
	k = func_601(*uParam0);
	l = func_602(*uParam0);

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

	for (m = func_603(i, num); num2 > m; m = func_603(i, num))
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

	func_604(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_540(int iParam0, int iParam1) // Position - 0x145B0 Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_541(int iParam0) // Position - 0x145C8 Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_441(iParam0, 4))
		return false;

	return true;
}

BOOL func_542(int iParam0) // Position - 0x145DF Hash - 0x7F4C96B ^0x650690F6
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
		return false;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	for (i = 0; i < Global_38.f_3542; i = i + 1)
	{
		if (Global_38.f_3542[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
				num2 = 2;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
				num2 = 5;
		
			num = cloudTimeAsInt - Global_38.f_3542[i /*3*/];
		
			if (Global_38.f_3542[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && Global_1904402.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
				return true;
		}
	}

	return false;
}

BOOL func_543(int iParam0) // Position - 0x146AB Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_544() // Position - 0x146BE Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_605())
		return false;

	return Global_1904402.f_8873;
}

void func_545(int iParam0, int iParam1) // Position - 0x146D9 Hash - 0x74C9983D ^0x6478FDCA
{
	if (iParam0 <= 0)
		return;

	if (func_606())
	{
		Global_1913444.f_125 = MISC::GET_GAME_TIMER();
		Global_1913444.f_126 = iParam1;
	}

	Global_1913444.f_127 = Global_1913444.f_127 + iParam0;
	return;
}

BOOL func_546() // Position - 0x14715 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_547() // Position - 0x14726 Hash - 0x11DC3931 ^0xA685465E
{
	return DLC::IS_DLC_PRESENT(joaat("dlc_ultimateedition"));
}

void func_548(var uParam0) // Position - 0x14737 Hash - 0x333BC7D4 ^0xCB2892E1
{
	func_442(uParam0, joaat("MULTIPLAYER_GAME"));

	if (func_607() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_442(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_442(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_549(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x1476F Hash - 0x15598973 ^0x15598973
{
	int i;
	var unk;

	if (!func_463(anParam0))
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
	unk.f_4 = hParam1;
	unk.f_6 = 1;
	unk.f_7 = { uParam2 };
	Global_1292143.f_2539.f_1[Global_1292143.f_2539 - 1 /*22*/] = { unk };
	return;
}

int func_550(Hash hParam0) // Position - 0x14825 Hash - 0xF4E671A6 ^0x338FA446
{
	Hash category;

	if (!func_25(hParam0, 0))
		return 0;

	category = func_189(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);
}

BOOL func_551(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x14854 Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_230(iParam2, iParam3))
		return true;

	return false;
}

void func_552(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1486C Hash - 0x3169A239 ^0x47E831EC
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292143.f_20.f_1[i /*21*/].f_1 = iParam1;
			}
		
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292143.f_20.f_1[i /*21*/].f_2 = iParam2;
				Global_1292143.f_20.f_1[i /*21*/].f_3 = iParam3;
			}
		
			return;
		}
	}

	func_608(iParam0, iParam1, iParam2, iParam3);
	return;
}

int func_553(int* piParam0) // Position - 0x1490A Hash - 0xAC4ACAD7 ^0x53A8C861
{
	return func_609(piParam0->f_1);
}

Hash func_554(Hash hParam0, BOOL bParam1) // Position - 0x1491A Hash - 0x73CC7FFA ^0x73CC7FFA
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_610(i, true, false);
	
		if (!func_334(hParam0, hash, &unk, &num, false, true))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_611(unk[j /*2*/]))
				{
					if (!bParam1 || func_138(unk[j /*2*/], false, true, true) > 0)
						return hash;
				
					break;
				}
			
				if (unk[j /*2*/] == 0)
					break;
			}
		}
	}

	return 0;
}

Hash func_555(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x149AD Hash - 0x2596799 ^0x2596799
{
	int i;
	int num;
	var unk;
	var unk2;
	Hash hash;
	Hash hash2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	Hash hash3;
	int j;

	unk3 = 15;

	for (i = 0; i < 5; i = i + 1)
	{
		hash3 = func_610(i, false, true);
	
		if (!func_334(hParam0, hash3, &unk3, &num, false, true))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_612(unk3[j /*2*/]))
				{
					if (!bParam1 || func_138(unk3[j /*2*/], false, true, true) > 0)
						flag3 = true;
				}
				else if (unk3[j /*2*/] == joaat("currency_cash") || unk3[j /*2*/] == joaat("currency_gold_bar"))
				{
					if (bParam2 && unk3[j /*2*/] == joaat("currency_cash") || !bParam2 && unk3[j /*2*/] == joaat("currency_gold_bar"))
					{
						if (hash == 0 || flag && unk3[j /*2*/].f_1 < unk)
						{
							hash2 = hash3;
							unk2 = unk3[j /*2*/].f_1;
							flag2 = 1;
						}
					}
					else if (hash == 0 || unk3[j /*2*/].f_1 < unk)
					{
						hash2 = hash3;
						unk2 = unk3[j /*2*/].f_1;
						flag2 = 0;
					}
				}
				else if (unk3[j /*2*/] == 0)
				{
					break;
				}
			}
		
			if (flag3 && hash2 != 0)
			{
				hash = hash2;
				unk = unk2;
				flag = flag2;
			}
		}
	}

	return hash;
}

int func_556(int iParam0) // Position - 0x14B0C Hash - 0x15FBACEE ^0x15FBACEE
{
	return iParam0 / 100;
}

void func_557(const char* sParam0) // Position - 0x14B19 Hash - 0x6D26E8EF ^0x36AA660D
{
	Global_1915656.f_22470 = func_582(sParam0, 10000, 0, 0, 0, true);
	return;
}

BOOL func_558(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, int iParam4, Any* panParam5, BOOL bParam6) // Position - 0x14B35 Hash - 0x131A2EB4 ^0xBB62EC7B
{
	int i;

	if (*panParam5 < iParam4)
		return false;

	for (i = 0; i < iParam4; i = i + 1)
	{
		if (uParam3->[i /*2*/] == 0 || uParam3->[i /*2*/].f_1 == 0)
			break;
	
		if (!func_613(uParam3->[i /*2*/], uParam3->[i /*2*/].f_1, &panParam5->[i /*42*/]))
			return false;
	}

	return func_614(piParam0, panParam1, panParam5, hParam2, bParam6);
}

int func_559(Hash hParam0, Any anParam1, var uParam2, var uParam3, var uParam4) // Position - 0x14BAB Hash - 0xBDBB6885 ^0xBDBB6885
{
	Hash key;
	Hash outData;
	int i;
	int j;
	int num;

	if (!func_250(hParam0, 2))
		return 0;

	if (*uParam2 > *anParam1)
		return 0;

	for (i = 0; i < *anParam1; i = i + 1)
	{
	}

	num = ITEMDATABASE::_0x799FCD53358ED5FA(hParam0, anParam1);

	for (j = 0; j < num; j = j + 1)
	{
		if (ITEMDATABASE::_0xC4146375D8A0B374(hParam0, anParam1, j, &key))
		{
			if (anParam1->[0] == 0)
			{
				anParam1->[0] = key;
			}
			else
			{
				*uParam2 = *uParam2 + 1;
				anParam1->[*uParam2] = key;
			}
		
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(key, &outData))
			{
				if (func_25(outData, 0))
				{
					if (*uParam4 >= 0 && *uParam4 < *uParam3)
					{
						uParam3->[*uParam4 /*5*/] = { key };
						*uParam4 = *uParam4 + 1;
					}
					else
					{
						return 0;
					}
				}
			}
		
			anParam1->[*uParam2] = 0;
		
			if (*uParam2 > 0)
				*uParam2 = *uParam2 - 1;
		}
	}

	return 1;
}

BOOL func_560(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x14C90 Hash - 0x35FADD37 ^0x52F2BABB
{
	var unk;
	var unk48;

	unk.f_4 = 15;
	unk.f_36 = 10;
	func_510(hParam0, hParam1, &unk);

	if (hParam1 == -570078785)
	{
		unk.f_3 == 0;
	
		if (!func_336(unk.f_3 * iParam2))
		{
			if (Global_1915656.f_20644)
				func_557(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_556(unk.f_3 * iParam2)));
		
			return false;
		}
	}
	else if (hParam1 == -915411861)
	{
		unk.f_3 == 0;
	
		if (!func_335(unk.f_3 * iParam2))
		{
			if (Global_1915656.f_20644)
				func_557("SHOP_H_TOO_POOR");
		
			return false;
		}
	}
	else if (hParam1 == 997808187)
	{
		return true;
	}

	if (!func_566(hParam0, iParam2, hParam1, &unk48, true))
		return false;

	return true;
}

BOOL func_561(Hash hParam0) // Position - 0x14D5C Hash - 0xBF9BC979 ^0x2C23A458
{
	BOOL flag;
	Hash weaponUnlock;

	if (hParam0 == 0)
		return false;

	flag = false;

	if (func_27() == -1)
	{
		if (func_331(hParam0))
		{
			weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);
			flag = UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock);
		}
		else
		{
			return true;
		}
	}
	else
	{
		flag = UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	}

	return flag;
}

int func_562(int* piParam0, Hash hParam1) // Position - 0x14DA6 Hash - 0xD6C7A024 ^0x8CD358DF
{
	int num;
	int i;
	int numOfItems;
	var itemInfo;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		numOfItems = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0);
		itemInfo.f_9 = 1;
		itemInfo.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < numOfItems; i = i + 1)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*piParam0, i, &itemInfo))
			{
			}
			else if (itemInfo.f_8 != hParam1)
			{
			}
			else
			{
				num = num + itemInfo.f_9;
			}
		}
	}

	return num;
}

BOOL func_563(Hash hParam0, BOOL bParam1) // Position - 0x14E10 Hash - 0xAB149130 ^0xE03110FF
{
	if (!func_76(hParam0, 947377998))
		return false;

	if (bParam1)
	{
		if (func_76(hParam0, -1090933859))
			return func_224(hParam0, true) != 0;
	
		if (func_134(hParam0, -915411861, false) || func_134(hParam0, 600942249, false) || func_134(hParam0, -570078785, false))
			return true;
		else
			return false;
	}

	return true;
}

BOOL func_564(Hash hParam0, BOOL bParam1) // Position - 0x14E89 Hash - 0x40576C2F ^0xED1B83AA
{
	Hash hash;
	var unk;

	hash = func_615(hParam0, true);

	if (hash == 0)
		return false;

	if (func_225(hash, -2141192156))
		return false;

	if (bParam1)
		if (!func_188(hash, -2141192156, &unk, false, false))
			return false;

	return true;
}

int func_565(int* piParam0, Hash hParam1) // Position - 0x14ED3 Hash - 0xD6C7A024 ^0x8CD358DF
{
	int num;
	int i;
	int numOfItems;
	var itemInfo;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		numOfItems = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0);
		itemInfo.f_9 = 1;
		itemInfo.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < numOfItems; i = i + 1)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*piParam0, i, &itemInfo))
			{
			}
			else if (hParam1 != itemInfo.f_13)
			{
			}
			else
			{
				num = num + (func_337(itemInfo.f_8, hParam1, true, false, true, 0) * itemInfo.f_9);
			}
		}
	}

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_566(Hash hParam0, int iParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x14F4C Hash - 0xC79E0D58 ^0xC79E0D58
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;

	unk = 15;

	if (!func_616(hParam0, hParam2, &unk, &num, true, false))
		return false;

	flag = !bParam4 && func_80(false) && !func_81();

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0 || unk[i /*2*/] == 1412640604)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && func_335(num2))
			goto 0xD9;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && func_336(num2))
		{
		}
		else
		{
			num3 = func_138(unk[i /*2*/], false, !flag, false);
		
			if (num3 >= num2)
			{
			}
			else
			{
				*uParam3 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

BOOL func_567(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, int iParam4, Any* panParam5, BOOL bParam6, int iParam7) // Position - 0x15032 Hash - 0x40864787 ^0xC8FD8850
{
	int i;

	if (*panParam5 < iParam4)
		return false;

	for (i = 0; i < iParam4; i = i + 1)
	{
		if (uParam3->[i /*2*/] == 0 || uParam3->[i /*2*/].f_1 == 0)
			break;
	
		if (!func_613(uParam3->[i /*2*/], uParam3->[i /*2*/].f_1 * panParam1->f_9, &panParam5->[i /*42*/]))
			return false;
	}

	return func_617(piParam0, panParam1, panParam5, hParam2, bParam6, iParam7);
}

int func_568() // Position - 0x150AF Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_569() // Position - 0x150BD Hash - 0x306ACA3A ^0xB661AD6C
{
	return "unnamed";
}

BOOL func_570(int iParam0) // Position - 0x150C9 Hash - 0xC360B8E6 ^0xCBE2AF9D
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

int func_571(int iParam0) // Position - 0x15158 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_572(Player plParam0) // Position - 0x151A3 Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_618(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_619(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_573(int* piParam0, int iParam1, int iParam2) // Position - 0x151E8 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(piParam0->[iParam1 / 31], iParam1 % 31);
}

int func_574(BOOL bParam0) // Position - 0x1521F Hash - 0x770A7C8B ^0x770A7C8B
{
	if (bParam0)
		return 1;

	return 0;
}

int func_575(Ped pedParam0) // Position - 0x15231 Hash - 0x32EB82AB ^0x786A6EFC
{
	int num;
	int pedQuality;

	num = 2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return num;

	pedQuality = PED::_GET_PED_QUALITY(pedParam0);

	switch (pedQuality)
	{
		case -1:
		case 2:
			num = 2;
			break;
	
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	}

	return num;
}

int func_576(int iParam0) // Position - 0x15287 Hash - 0xB8EC44B7 ^0x162CC37E
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT");
	
		case -2092697195:
			return 777641606;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT");
	
		case -2043601589:
			return 1815502722;
	
		case -2040849706:
			return -375348364;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR");
	
		case -1821314478:
			return 1135507073;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR");
	
		case -1638839614:
			return 213936563;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT");
	
		case -1434083213:
			return -1671125008;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR");
	
		case -1378208045:
			return 1586020612;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY");
	
		case -1282621313:
			return 1718756614;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY");
	
		case -885592109:
			return -132069363;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY");
	
		case -827518870:
			return -2115566177;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR");
	
		case -229670230:
			return -352805801;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
	
		case -70954328:
			return 616254818;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT");
	
		case 546758456:
			return 1491466288;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY");
	
		case 1367447057:
			return -1886936864;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR");
	
		case 1450608653:
			return 1892902297;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT");
	
		case 1493601140:
			return -438328437;
	
		case 1527400190:
			return 1020297399;
	
		case 1543592331:
			return 1920759986;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR");
	
		case 1705186999:
			return 897866285;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY");
	
		case 1758585485:
			return 1518910503;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR");
	
		case 1842740532:
			return 1683741809;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT");
	
		case 1888419655:
			return -1066678466;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR");
	
		case 2004357248:
			return 403588059;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR");
	
		case 2014346813:
			return -101301217;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR");
	
		default:
		
	}

	return 0;
}

int func_577(Ped pedParam0, Hash hParam1) // Position - 0x15CC4 Hash - 0x91F3FA3F ^0xBD14110A
{
	int i;
	int num;

	if (func_620(hParam1))
	{
		num = 0;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (Global_1903838.f_113[i /*96*/].f_1 == hParam1)
				if (ENTITY::DOES_ENTITY_EXIST(Global_1290271.f_1171.f_245[i /*4*/].f_3))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1290271.f_1171.f_245[i /*4*/].f_3))
						num = num + 1;
		}
	
		return num;
	}

	return func_621(pedParam0, hParam1);
}

int func_578(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4, int iParam5) // Position - 0x15D3A Hash - 0x8377688 ^0x33238043
{
	var statId;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	if (func_622(*uParam0, hParam1, *uParam2, bParam3, hParam4))
	{
		statId = { func_316(hParam1) };
	
		if (STATS::STAT_ID_IS_VALID(&statId))
			STATS::_STAT_ID_DECREMENT_INT(&statId, *uParam2);
	
		*uParam2 = func_579(*uParam0, hParam1, *uParam2, true, iParam5);
	
		if (*uParam2 > 0)
		{
			if (func_623(hParam1))
			{
				!func_624(0, hParam1, *uParam2);
			
				if (func_625(PLAYER::PLAYER_ID(), 1, false))
					ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 32, true);
				else
					ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 32, false);
			
				*uParam2 = func_626(*uParam0, hParam1, *uParam2);
			}
		}
	
		if (*uParam2 > 0)
		{
			num = func_627(*uParam0, hParam1);
		
			if (*uParam2 > num)
				*uParam2 = num;
		}
	
		func_394(1, false, 0);
		return 1;
	}

	return 0;
}

int func_579(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x15E0E Hash - 0xF5FF74D2 ^0xE44EB8D1
{
	Hash hash;
	ItemSet itemset;
	Ped entityFromItem;
	int i;
	int itemsetSize;
	int j;
	var unk;
	var unk97;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return iParam2;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	unk.f_10 = 10;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		if (iParam2 == 0)
			break;
	
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entityFromItem))
		{
		}
		else
		{
			hash = func_628(entityFromItem);
		
			if (!func_629(hash, &unk97))
			{
				if (ENTITY::IS_ENTITY_A_PED(entityFromItem))
				{
					if (iParam4 == 2 && ENTITY::_IS_ENTITY_FULLY_LOOTED(entityFromItem) || iParam4 == 1 && !ENTITY::_IS_ENTITY_FULLY_LOOTED(entityFromItem))
					{
					}
					else if (hash == hParam1)
					{
						if (pedParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()))
						{
							for (j = 0; j < 3; j = j + 1)
							{
								if (Global_1290271.f_1171.f_245[j /*4*/].f_3 == entityFromItem)
								{
									func_630(&unk, &Global_1903838.f_113[j /*96*/]);
									break;
								}
							}
						}
					
						if (bParam3)
						{
							if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1)
							{
								if (Global_1915656.f_20241 == 29 && ENTITY::IS_ENTITY_A_PED(entityFromItem))
								{
									if (func_76(hash, -753854379) || func_76(hash, 173360570))
										PED::_SET_PED_DAMAGE_CLEANLINESS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), 2);
								
									STATS::_STAT_CARRIED_SATCHEL_ITEM_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem));
								}
							
								if (pedParam0 == PLAYER::PLAYER_PED_ID())
									func_181(hash, -1, false, true, false, false, false);
							}
						
							ENTITY::_DELETE_CARRIABLE(&entityFromItem);
						}
						else
						{
							PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, false);
						}
					
						iParam2 = iParam2 - 1;
					}
				}
			}
		
			if (hash == hParam1)
			{
				if (pedParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()))
				{
					j = 0;
				
					if (j < 3)
						if (Global_1290271.f_1171.f_245[j /*4*/].f_3 == entityFromItem)
							func_630(&unk, &Global_1903838.f_113[j /*96*/]);
						else
							j = j + 1;
				}
			
				if (bParam3)
				{
					if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1)
					{
						if (Global_1915656.f_20241 == 29 && ENTITY::IS_ENTITY_A_PED(entityFromItem))
						{
							if (func_76(hash, -753854379) || func_76(hash, 173360570))
								PED::_SET_PED_DAMAGE_CLEANLINESS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), 2);
						
							STATS::_STAT_CARRIED_SATCHEL_ITEM_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem));
						}
					
						if (pedParam0 == PLAYER::PLAYER_PED_ID())
							func_181(hash, -1, false, true, false, false, false);
					}
				
					ENTITY::_DELETE_CARRIABLE(&entityFromItem);
				}
				else
				{
					PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, false);
				}
			
				iParam2 = iParam2 - 1;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return iParam2;
}

void func_580(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x15FC0 Hash - 0xB1DBEA4A ^0xB1DBEA4A
{
	int i;
	int slot;

	if (Global_1915656.f_20637)
	{
		if (Global_1915656.f_20241 == 29)
		{
			if (func_631(hParam0))
			{
				slot = 0;
			
				if (bParam2)
				{
					switch (func_632(hParam0))
					{
						case 2:
							slot = 1;
							break;
					
						case 4:
							slot = 3;
							break;
					
						case 8:
							slot = 4;
							break;
					}
				}
			
				for (i = 0; i <= iParam1 - 1; i = i + 1)
				{
					STATS::_STAT_DONATE_INCREMENT_ITEM(func_633(hParam0), slot, func_76(hParam0, 1064293907), 0);
				}
			}
		}
	}

	return;
}

BOOL func_581(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1604C Hash - 0xD12DD6C0 ^0x9850E73C
{
	var statId;

	statId = { func_316(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);

	func_634(hParam0, iParam1);
	return func_396(hParam0, iParam1, bParam2, hParam3);
}

int func_582(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x16083 Hash - 0x8EBD6187 ^0x42F0F0AC
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num = iParam1;
	num.f_1 = iParam2;
	num.f_2 = iParam3;
	num.f_3 = iParam4;
	unk13.f_1 = sParam0;
	num2 = UIFEED::_UI_FEED_POST_HELP_TEXT(&num, &unk13, bParam5);
	return num2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_583(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x160BE Hash - 0x8E6DB586 ^0xC3CF8308
{
	int i;

	*uParam1 = 0;

	if (*anParam0 != 10)
		return false;

	for (i = 0; i < 10; i = i + 1)
	{
		if (iParam2 < 1)
			break;
	
		if (anParam0->[i /*6*/].f_4 == 0)
			goto 0xF4;
	
		if (anParam0->[i /*6*/].f_5 == 0)
			goto 0xF4;
	
		if (func_635(&anParam0->[i /*6*/]))
		{
		}
		else
		{
			if (i != *uParam1)
			{
				anParam0->[*uParam1 /*6*/] = { anParam0->[i /*6*/] };
				anParam0->[*uParam1 /*6*/].f_4 = anParam0->[i /*6*/].f_4;
			}
		
			if (anParam0->[i /*6*/].f_5 > iParam2)
			{
				anParam0->[*uParam1 /*6*/].f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				anParam0->[*uParam1 /*6*/].f_5 = anParam0->[i /*6*/].f_5;
				iParam2 = iParam2 - anParam0->[*uParam1 /*6*/].f_5;
			}
		
			if (i > *uParam1)
			{
				anParam0->[i /*6*/] = { func_448() };
				anParam0->[i /*6*/].f_4 = 0;
				anParam0->[i /*6*/].f_5 = 0;
			}
		
			*uParam1 = *uParam1 + 1;
		}
	}

	if (bParam3 && iParam2 > 0)
	{
		*uParam1 = 0;
		return false;
	}

	return true;
}

int func_584(Hash hParam0) // Position - 0x161D5 Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_76(hParam0, 1064293907))
		return 2;
	else if (func_76(hParam0, -1218707194))
		return 1;
	else if (func_76(hParam0, 1888974372))
		return 0;

	return 1;
}

struct<12> func_585(int iParam0, int iParam1, var uParam2, BOOL bParam3) // Position - 0x1621A Hash - 0x1EEB145B ^0xCC3D6D4D
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_POOR");
					break;
			
				case 1:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_GOOD");
					break;
			
				case 2:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_PERFECT");
					break;
			
				case 3:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_RARE");
					break;
			
				case 4:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_LEGENDARY");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_POOR");
					break;
			
				case 1:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_GOOD");
					break;
			
				case 2:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_PERFECT");
					break;
			
				case 3:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_RARE");
					break;
			
				case 4:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_LEGENDARY");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_POOR");
					break;
			
				case 1:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_GOOD");
					break;
			
				case 2:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_PERFECT");
					break;
			
				case 3:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_RARE");
					break;
			
				case 4:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_LEGENDARY");
					break;
			}
			break;
	}

	if (bParam3)
		func_442(uParam2, joaat("LOOT_TYPE_BREAKDOWN"));
	else
		func_442(uParam2, joaat("LOOT_TYPE_SKINNING"));

	func_442(uParam2, num);
	return *uParam2;
}

BOOL func_586(Hash hParam0, var uParam1, int iParam2, int iParam3) // Position - 0x1637B Hash - 0xDE9FAFE8 ^0xDE9FAFE8
{
	var unk;

	if (0 == hParam0)
		return false;

	return func_443(hParam0, uParam1, &unk, iParam2, iParam3);
}

struct<17> func_587(var uParam0, BOOL bParam1) // Position - 0x1639B Hash - 0x76921103 ^0xA9DF955B
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { *uParam0 };
	unk.f_4 = { uParam0->f_5 };
	unk.f_8 = uParam0->f_4;
	unk.f_9 = uParam0->f_11;
	unk.f_11 = uParam0->f_9;
	unk.f_10 = uParam0->f_10;

	if (bParam1)
	{
		unk.f_15 = func_233(uParam0->f_4, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_448() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

Ped func_588(int iParam0) // Position - 0x1641C Hash - 0x829B7265 ^0xE21C4F30
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_589(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1642C Hash - 0x586BF778 ^0x586BF778
{
	int num;

	num = func_138(hParam1, bParam2, false, false);
	num = num + func_621(pedParam0, hParam1);

	if (bParam3)
		num = num + func_636(hParam1, bParam4);

	return num;
}

void func_590(int iParam0) // Position - 0x16461 Hash - 0x1B4614B0 ^0x73E476F0
{
	if (!func_25(Global_1940252.f_11588, 0))
		Global_1940252.f_7 = iParam0;
	else if (func_65(Global_1940252.f_11588, 1224357681) != 0 && Global_1940252.f_11587 != 0 && Global_1940252.f_11587 != -2074770370 && !Global_1915656.f_20638 && !Global_1915656.f_22504.f_1)
		Global_1940252.f_7 = 1;
	else
		Global_1940252.f_7 = 0;

	return;
}

struct<29> func_591(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x164E6 Hash - 0xAF17ACBD ^0xCD0691E1
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_172(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_587(&unk30, bParam5) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_592(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x16581 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_458(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_460(func_637(num, hParam0, panParam1), num, panParam1);
	else
		return func_461(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29), num, panParam1);

	return -1;
}

struct<26> func_593(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x165EB Hash - 0x614973B0 ^0xCAE61311
{
	var unk;
	var unk27;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk27.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_172(bParam4), &uParam0, &unk27, 24, 1))
		return unk;

	unk = { func_587(&unk27, bParam5) };
	unk.f_17 = { unk27.f_15 };
	unk.f_25 = unk27.f_23;
	return unk;
}

int func_594(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1666E Hash - 0xD42DE772 ^0x5BC8E38A
{
	int num;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_460(func_638(num, hParam0, panParam1), num, panParam1);
	else
		return func_461(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 26), num, panParam1);

	return -1;
}

struct<18> func_595(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x166BE Hash - 0x5B9BBF8B ^0x19F03106
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_172(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_587(&unk19, bParam5) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_596(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x16733 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_458(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_460(func_639(num, hParam0, panParam1), num, panParam1);
	else
		return func_461(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18), num, panParam1);

	return -1;
}

int func_597(int iParam0) // Position - 0x1679D Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_598(int iParam0) // Position - 0x167C2 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_599(int iParam0) // Position - 0x167D5 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_600(int iParam0) // Position - 0x167E8 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_601(int iParam0) // Position - 0x167FB Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_602(int iParam0) // Position - 0x1680D Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_603(int iParam0, int iParam1) // Position - 0x1681F Hash - 0x893AC59E ^0x893AC59E
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

void func_604(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x168B9 Hash - 0xA65AB937 ^0xA65AB937
{
	func_640(uParam0, iParam6);
	func_641(uParam0, iParam5);
	func_642(uParam0, iParam4);
	func_643(uParam0, iParam3);
	func_644(uParam0, iParam2);
	func_645(uParam0, iParam1);
	return;
}

BOOL func_605() // Position - 0x168F1 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_606() // Position - 0x16905 Hash - 0x977C1DDD ^0x1581CA55
{
	return Global_1913444.f_127 == 0;
}

int func_607() // Position - 0x16915 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1953292.f_1;
}

void func_608(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x16923 Hash - 0xBC161045 ^0xD3B33F74
{
	int i;

	if (iParam0 == -1)
		return;

	if (Global_1292143.f_20 < 20)
	{
		Global_1292143.f_20 = Global_1292143.f_20 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_20.f_1[i /*21*/] = { Global_1292143.f_20.f_1[i + 1 /*21*/] };
		}
	}

	func_646(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

int func_609(int iParam0) // Position - 0x169FF Hash - 0xA7E21081 ^0xBD28E742
{
	int num;
	int status;

	num = func_101(iParam0);

	if (num == 0 || num == 1 || num == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &status))
		{
			if (status == 4 || status == 2 || num == 0 && status != 0)
			{
				func_552(iParam0, status, 0, 0);
				num = status;
			}
		}
		else if (num == 1 || num == 5)
		{
			func_552(iParam0, 4, 0, 0);
		}
	}

	return num;
}

Hash func_610(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x16A89 Hash - 0xC67FD48A ^0x72A5971A
{
	int num;

	num = 0;

	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
		
			case 1:
				return 866168015;
		
			case 2:
				return -1103707655;
		
			default:
			
		}
	
		num = 3;
	}

	if (bParam2)
	{
		switch (iParam0 - num)
		{
			case 0:
				return 75922725;
		
			case 1:
				return 1070046552;
		
			case 2:
				return -1843707398;
		
			case 3:
				return -1571233163;
		
			case 4:
				return -1197011183;
		
			default:
			
		}
	}

	return 0;
}

BOOL func_611(Hash hParam0) // Position - 0x16B25 Hash - 0x1B551CF7 ^0x9235FF01
{
	return func_189(hParam0) == 1946043663;
}

BOOL func_612(Hash hParam0) // Position - 0x16B39 Hash - 0x1B551CF7 ^0xC792EAB9
{
	return func_189(hParam0) == -126813555;
}

BOOL func_613(Hash hParam0, int iParam1, var uParam2) // Position - 0x16B4D Hash - 0x373A2E12 ^0xF0869689
{
	var unk;
	int num;
	int num2;
	var unk6;
	int num3;
	int i;

	*uParam2 = hParam0;

	if (func_3(false))
	{
		num = func_236(func_647(), hParam0);
	
		if (num != 0)
		{
			unk = { func_321(true) };
			unk.f_4 = func_320(num);
			uParam2->f_1[0 /*4*/] = { func_322(hParam0, unk, unk.f_4, true) };
		
			if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[0 /*4*/]))
				return true;
		}
	}

	num2 = func_233(hParam0, joaat("DEFAULT"));

	if (num2 != 0)
	{
		unk6 = 10;
	
		if (!func_516(&unk6, &num3, hParam0, num2, iParam1, true) || num3 < 1)
			return false;
	
		for (i = 0; i < num3; i = i + 1)
		{
			uParam2->f_1[i /*4*/] = { func_322(hParam0, unk6[i /*6*/], unk6[i /*6*/].f_4, true) };
		
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[i /*4*/]))
				return false;
		}
	
		return true;
	}

	unk = { func_184(hParam0, true, 0) };
	uParam2->f_1[0 /*4*/] = { func_322(hParam0, unk, unk.f_4, true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[0 /*4*/]))
		return false;

	return true;
}

BOOL func_614(int* piParam0, Any* panParam1, Any* panParam2, Hash hParam3, BOOL bParam4) // Position - 0x16C6F Hash - 0xB36012C8 ^0xBC48CAED
{
	if (hParam3 != 541670136 && hParam3 != joaat("batch"))
		return false;

	if (!func_648(*panParam1))
		return false;

	if (!func_649(piParam0, hParam3))
		return false;

	if (NETSHOPPING::_0xA3B8D31C13CB4239(*piParam0, 541670136, panParam1, 18, panParam2, *panParam2))
	{
	}
	else
	{
		return false;
	}

	return func_650(piParam0, bParam4);
}

Hash func_615(Hash hParam0, BOOL bParam1) // Position - 0x16CDB Hash - 0xA9E35D6B ^0xBA3EB97
{
	if (!func_563(hParam0, bParam1))
		return 0;

	if (hParam0 == joaat("document_pamphlet_tracking_arrow"))
		return func_224(joaat("ammo_arrow_tracking"), true);
	else if (hParam0 == joaat("document_pamphlet_poison_bottle"))
		return func_224(joaat("ammo_poisonbottle"), true);
	else if (hParam0 == 318000298)
		return func_224(-1939515319, true);
	else if (hParam0 == -1771777013)
		return func_224(-1903059161, true);
	else if (hParam0 == 375366730)
		return func_224(-252071901, true);
	else if (hParam0 == -1309887827)
		return func_224(-611782825, true);

	return func_224(hParam0, true);
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_616(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x16D93 Hash - 0x583856CF ^0xF105F8D9
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_250(hParam0, 2))
		return false;

	*uParam3 = ITEMDATABASE::_0x388088BFF3681189(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUNDLE(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_651(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_617(int* piParam0, Any* panParam1, Any* panParam2, Hash hParam3, BOOL bParam4, int iParam5) // Position - 0x16E23 Hash - 0xA8760DB6 ^0xC89F5487
{
	if (hParam3 != 2113164098 && hParam3 != joaat("Sell") && hParam3 != joaat("use"))
		return false;

	if (!func_652(hParam3, panParam1, iParam5))
		return false;

	if (!func_649(piParam0, hParam3))
		return false;

	if (func_653(*piParam0, hParam3, panParam1, panParam2))
	{
	}
	else
	{
		return false;
	}

	return func_650(piParam0, bParam4);
}

BOOL func_618(Player plParam0) // Position - 0x16E95 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_619(Player plParam0) // Position - 0x16EB2 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_654(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_655(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_620(Hash hParam0) // Position - 0x16F35 Hash - 0xDB8363F2 ^0xB30A7F5C
{
	if (!func_282(hParam0, 1955773996))
		return false;

	if (!func_656(hParam0, 1))
		return false;

	return true;
}

int func_621(Ped pedParam0, Hash hParam1) // Position - 0x16F60 Hash - 0x83F00AF7 ^0x32031FF8
{
	int num;
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (func_620(hParam1))
		{
			num = 0;
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (Global_1903838.f_113[i /*96*/].f_1 == hParam1)
					num = num + 1;
			}
		
			return num;
		}
		else
		{
			return func_657(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);
		}
	}

	return 0;
}

BOOL func_622(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x16FBE Hash - 0xCC673625 ^0x5E579BC1
{
	return func_658(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1, iParam2, bParam3, hParam4);
}

BOOL func_623(Hash hParam0) // Position - 0x16FD8 Hash - 0x6AEB7416 ^0x6AEB7416
{
	int i;
	int num;
	Hash hash;

	if (!func_659(hParam0))
		return false;

	for (i = 0; i < 77; i = i + 1)
	{
		num = func_660(i, 1);
		hash = num;
	
		if (hParam0 == hash)
			return true;
	}

	return false;
}

BOOL func_624(int iParam0, Hash hParam1, int iParam2) // Position - 0x1701A Hash - 0x7AC6FD0E ^0x7AC6FD0E
{
	Hash hash;
	int num;
	int num2;
	int num3;

	iParam0 = func_251(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	hash = func_661(hParam1);

	if (hash != 0)
	{
		num = func_662(hash, 1);
	
		if (num > -1)
		{
			num2 = Global_1903838.f_402[num];
		
			if (num2 > 0)
			{
				num3 = iParam2;
			
				if (num3 > num2)
					num3 = num2;
			
				if (!func_663(num3, false))
				{
				}
			
				Global_1903838.f_402[num] = Global_1903838.f_402[num] - num3;
				return true;
			}
		}
	}

	return false;
}

BOOL func_625(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x170B2 Hash - 0x682F0821 ^0x8850637E
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return bParam1;

	player = plParam0;

	if (player < 0 || player >= 32)
		return bParam1;

	return func_664(player, bParam2) >= func_665(bParam2);
}

int func_626(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0x170F3 Hash - 0xD1389191 ^0xB4D3B5D7
{
	int i;
	Hash peltFromHorse;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return iParam2;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);

	for (i = 2; i >= 0; i = i + -1)
	{
		if (pedParam0 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam0))
		{
			peltFromHorse = PED::_GET_PELT_FROM_HORSE(pedParam0, i);
		
			if (peltFromHorse == hParam1)
			{
				PED::_CLEAR_PELT_FROM_HORSE(pedParam0, hParam1);
				iParam2 = iParam2 - 1;
			}
		}
		else
		{
			peltFromHorse = Global_1289643[PLAYER::PLAYER_ID() /*19*/].f_15[i];
		
			if (peltFromHorse == hParam1)
			{
				Global_1289643[PLAYER::PLAYER_ID() /*19*/].f_15[i] = 0;
				iParam2 = iParam2 - 1;
			}
		}
	
		if (iParam2 <= 0)
			break;
	}

	return iParam2;
}

int func_627(Ped pedParam0, Hash hParam1) // Position - 0x171A5 Hash - 0x1B707959 ^0x4034662C
{
	int num;
	ItemSet itemset;
	int itemsetSize;
	int i;
	Entity entityFromItem;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return 0;

	num = 0;
	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	i = 0;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (ENTITY::DOES_ENTITY_EXIST(entityFromItem) && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entityFromItem) && hParam1 == func_628(entityFromItem))
			num = num + 1;
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return num;
}

Hash func_628(Entity eParam0) // Position - 0x17243 Hash - 0xCBDF2AE2 ^0xCD5FF04E
{
	Hash hash;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (ENTITY::GET_IS_ANIMAL(eParam0) || ENTITY::_GET_IS_BIRD(eParam0))
	{
		hash = func_386(&eParam0);
	
		if (!func_25(hash, 0))
			hash = func_387(eParam0);
	}
	else
	{
		hash = func_387(eParam0);
	}

	return hash;
}

BOOL func_629(Hash hParam0, var uParam1) // Position - 0x17296 Hash - 0xC0DD27FA ^0xC0DD27FA
{
	*uParam1 = func_666(hParam0);
	return *uParam1 != 0;
}

void func_630(Any* panParam0, Hash hParam1) // Position - 0x172AC Hash - 0xBFEF95EB ^0x45C41A3B
{
	MISC::COPY_SCRIPT_STRUCT(hParam1, panParam0, 96);
	return;
}

BOOL func_631(Hash hParam0) // Position - 0x172BE Hash - 0x5E6E1858 ^0x5BD2FA9
{
	!func_25(hParam0, 0);

	if (func_76(hParam0, 1286414894))
		return true;

	return false;
}

int func_632(Hash hParam0) // Position - 0x172E4 Hash - 0x1C37ACD7 ^0x22120269
{
	int outSatchelItemSize;
	Hash hash;

	if (func_629(hParam0, &hash))
		hParam0 = hash;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &outSatchelItemSize))
		return -1;

	switch (outSatchelItemSize)
	{
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 4;
	
		case 4:
			return 8;
	
		default:
		
	}

	return -1;
}

int func_633(Hash hParam0) // Position - 0x1733D Hash - 0xB8EC44B7 ^0xD7A1073F
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("at_chicken");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return joaat("at_toad");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return joaat("at_bluejay");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("at_snake_copper_north");
	
		case -2047339431:
			return 1029100628;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("at_pheasant");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("at_californiacondor");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("at_skunk");
	
		case -2012326752:
			return -557726619;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return joaat("at_pigeon");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
			return joaat("at_crayfish");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return joaat("at_cardinal");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return joaat("at_carolinaparakeet");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("at_pronghorn");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return joaat("at_rat");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return joaat("at_crow");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return joaat("at_crab");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return joaat("at_bullfrog");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return joaat("at_sparrow");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("at_rabbit");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("at_muskrat");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("at_deer");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("at_turkey");
	
		case joaat("provision_fish_chain_pickerel_poor"):
			return joaat("at_fchainpickerel");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("at_redfootedbooby");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("at_ram_desert");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("at_possum");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("at_coyote");
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return joaat("at_quail");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("at_cougar");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("at_sheep");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("at_owl");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("at_gator");
	
		default:
		
	}

	return joaat("small_animals");
}

void func_634(Hash hParam0, int iParam1) // Position - 0x17E4E Hash - 0xE499CB2B ^0xBF16EE8A
{
	Ped mountOwnedByPlayer;

	if (func_27() == -1)
		mountOwnedByPlayer = func_173(7);
	else
		mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	func_626(mountOwnedByPlayer, hParam0, iParam1);
	return;
}

BOOL func_635(Any* panParam0) // Position - 0x17E7D Hash - 0x7865E948 ^0x92258F24
{
	if (!func_667(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

int func_636(Hash hParam0, BOOL bParam1) // Position - 0x17E99 Hash - 0x19ACB934 ^0xDEF82372
{
	if (!bParam1 || func_668())
		return func_332(hParam0, func_321(true), -2015960939, true, true, false);

	return 0;
}

BOOL func_637(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x17EC8 Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_638(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x17EDF Hash - 0xB063C902 ^0x8DB8ACCE
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 26, panParam2, 0);
}

BOOL func_639(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x17EF6 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

void func_640(var uParam0, int iParam1) // Position - 0x17F0D Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_641(var uParam0, int iParam1) // Position - 0x17F93 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_642(var uParam0, int iParam1) // Position - 0x17FCF Hash - 0x832E911B ^0x832E911B
{
	int num;
	int num2;

	num = func_598(*uParam0);
	num2 = func_597(*uParam0);

	if (iParam1 < 1 || iParam1 > func_603(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_643(var uParam0, int iParam1) // Position - 0x18024 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_644(var uParam0, int iParam1) // Position - 0x1805F Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_645(var uParam0, int iParam1) // Position - 0x18098 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

void func_646(int iParam0) // Position - 0x180D0 Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_669(&(iParam0->f_4));
	return;
}

int func_647() // Position - 0x180F3 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20241;
}

BOOL func_648(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x18102 Hash - 0x195DA727 ^0x43C01C6A
{
	if (!func_453(uParam0.f_17))
		return false;

	return true;
}

BOOL func_649(int* piParam0, Hash hParam1) // Position - 0x1811B Hash - 0x8DE7BD5B ^0x83B9042B
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
		if (!func_670(piParam0, hParam1))
			return false;

	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action != hParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) >= 50)
	{
		if (!func_671(piParam0))
			return false;
	
		if (!func_670(piParam0, hParam1))
			return false;
	}

	return true;
}

BOOL func_650(int* piParam0, BOOL bParam1) // Position - 0x1817E Hash - 0x5B4FA9A9 ^0x92224A48
{
	piParam0->f_2 = piParam0->f_2 + 1;

	if (bParam1)
		return func_671(piParam0);

	return true;
}

void func_651(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x1819F Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ACQUIRE_COST_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_189(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_652(Hash hParam0, Any* panParam1, int iParam2) // Position - 0x18375 Hash - 0xF56A9866 ^0x83AC84D6
{
	if (panParam1->f_9 < 1)
		return false;

	if (!func_25(panParam1->f_8, 0) && !func_250(func_168(panParam1->f_8), 2))
		return false;

	if (func_113(iParam2, 128))
		if (!func_250(func_168(panParam1->f_8), 2))
			if (func_189(panParam1->f_8) == 0)
				return false;

	if (func_113(iParam2, 16))
		if (!func_458(hParam0, panParam1))
			return false;

	return true;
}

BOOL func_653(int iParam0, Hash hParam1, Any* panParam2, Any* panParam3) // Position - 0x183F5 Hash - 0xA2FF6405 ^0x9144FDD7
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam3, *panParam3);
}

void func_654(Player plParam0) // Position - 0x1840E Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_655(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_655(Player plParam0) // Position - 0x1847A Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

BOOL func_656(Hash hParam0, int iParam1) // Position - 0x184B5 Hash - 0xC9BD5171 ^0xC9BD5171
{
	int num;

	num = func_672(hParam0);

	if (num == -1)
		return false;

	return num > iParam1;
}

int func_657(int iParam0, Hash hParam1) // Position - 0x184D4 Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_25(hParam1, 0))
		return 0;

	guid = { func_673(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_658(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x18512 Hash - 0x58967A60 ^0x975E68C3
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var statId;

	if (!func_25(hParam1, 0))
		return 0;

	flag = hParam4 == 562618531;
	flag2 = hParam4 == 1992602754;
	flag3 = hParam4 == -1387038764;

	if (!func_674(iParam0, hParam1, 1))
		return 0;

	statId = { func_316(hParam1) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_657(iParam0, hParam1) - iParam2 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam2);
		}
		else if (func_657(iParam0, hParam1) - iParam2 < 0)
		{
			func_658(iParam0, hParam1, func_138(hParam1, false, false, false), bParam3, hParam4);
			return 0;
		}
	}

	if (!func_675(iParam0, hParam1, iParam2, hParam4, bParam3))
		return 0;

	if (!bParam3 && hParam1 != 1309979101)
		func_181(hParam1, -iParam2, flag, flag2, flag3, false, false);

	return 1;
}

BOOL func_659(Hash hParam0) // Position - 0x185EC Hash - 0x8740500B ^0x17CABE34
{
	if (!func_25(hParam0, 0))
		return false;

	return func_76(hParam0, 1686880204) || INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(hParam0);
}

int func_660(int iParam0, int iParam1) // Position - 0x1861A Hash - 0xE1D12727 ^0xAE678AE7
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_alligator_skin");
	
		case 1:
			return joaat("PROVISION_ALLIGATOR_SKIN_POOR");
	
		case 2:
			return joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE");
	
		case 3:
			return joaat("provision_beaver_fur");
	
		case 4:
			return joaat("PROVISION_BEAVER_FUR_POOR");
	
		case 5:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
	
		case 6:
			return joaat("provision_boar_skin");
	
		case 7:
			return joaat("PROVISION_BOAR_SKIN_POOR");
	
		case 8:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
	
		case 9:
			return joaat("provision_buck_fur");
	
		case 10:
			return joaat("PROVISION_BUCK_FUR_POOR");
	
		case 11:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
	
		case 12:
			return joaat("provision_cougar_fur");
	
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
	
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
	
		case 15:
			return joaat("provision_coyote_fur");
	
		case 16:
			return joaat("PROVISION_COYOTE_FUR_POOR");
	
		case 17:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
	
		case 18:
			return joaat("provision_deer_hide");
	
		case 19:
			return joaat("PROVISION_DEER_HIDE_POOR");
	
		case 20:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
	
		case 21:
			return joaat("provision_fox_fur");
	
		case 22:
			return joaat("PROVISION_FOX_FUR_POOR");
	
		case 23:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
	
		case 24:
			return joaat("provision_goat_hair");
	
		case 25:
			return joaat("PROVISION_GOAT_HAIR_POOR");
	
		case 26:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
	
		case 27:
			return joaat("provision_javelina_skin");
	
		case 28:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
	
		case 29:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
	
		case 30:
			return joaat("provision_loanshark_skins");
	
		case 31:
			return joaat("provision_panther_fur");
	
		case 32:
			return joaat("PROVISION_PANTHER_FUR_POOR");
	
		case 33:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
	
		case 34:
			return joaat("provision_pig_skin");
	
		case 35:
			return joaat("PROVISION_PIG_SKIN_POOR");
	
		case 36:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
	
		case 37:
			return joaat("provision_pronghorn_fur");
	
		case 38:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
	
		case 39:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
	
		case 40:
			return joaat("provision_ram_hide");
	
		case 41:
			return joaat("PROVISION_RAM_HIDE_POOR");
	
		case 42:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
	
		case 43:
			return joaat("provision_sheep_wool");
	
		case 44:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
	
		case 45:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
	
		case 46:
			return joaat("provision_wolf_fur");
	
		case 47:
			return joaat("PROVISION_WOLF_FUR_POOR");
	
		case 48:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
	
		case 49:
			return 121494806;
	
		case 50:
			return -251416414;
	
		case 51:
			return -1787430524;
	
		case 52:
			return -1572330336;
	
		case 53:
			return -1249752300;
	
		case 54:
			return -940052481;
	
		case 55:
			return -308200059;
	
		case 56:
			return -1218522879;
	
		case 57:
			return 923422806;
	
		case 58:
			return 832214437;
	
		case 59:
			return 397926876;
	
		case 60:
			return 219794592;
	
		case 61:
			return -1061362634;
	
		case 62:
			return 1728819413;
	
		case 63:
			return 1009802015;
	
		case 64:
			return 1276143905;
	
		case 65:
			return -1262044528;
	
		case 66:
			return -963027403;
	
		case 67:
			return 2088901891;
	
		case 68:
			return 836208559;
	
		case 69:
			return 1600479946;
	
		case 70:
			return -675142890;
	
		case 71:
			return -906131571;
	
		case 72:
			return -591844128;
	
		case 73:
			return -1946740647;
	
		case 74:
			return -1548204069;
	
		case 75:
			return -907373381;
	
		case 76:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

Hash func_661(Hash hParam0) // Position - 0x18A6B Hash - 0x2D6C03B6 ^0x2D6C03B6
{
	if (!func_623(hParam0))
		return 0;

	return hParam0;
}

int func_662(Hash hParam0, int iParam1) // Position - 0x18A83 Hash - 0x9271BD12 ^0x9271BD12
{
	switch (hParam0)
	{
		case joaat("provision_beaver_fur"):
			return 3;
	
		case -1946740647:
			return 73;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 8;
	
		case joaat("provision_deer_hide"):
			return 18;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
	
		case -1787430524:
			return 51;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 26;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 2;
	
		case -1572330336:
			return 52;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 4;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 16;
	
		case -1548204069:
			return 74;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 39;
	
		case joaat("provision_javelina_skin"):
			return 27;
	
		case joaat("provision_sheep_wool"):
			return 43;
	
		case -1262044528:
			return 65;
	
		case -1249752300:
			return 53;
	
		case -1218522879:
			return 56;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 36;
	
		case -1061362634:
			return 61;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 20;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 38;
	
		case -963027403:
			return 66;
	
		case -940052481:
			return 54;
	
		case -907373381:
			return 75;
	
		case -906131571:
			return 71;
	
		case joaat("provision_buck_fur"):
			return 9;
	
		case joaat("provision_alligator_skin"):
			return 0;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 17;
	
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 11;
	
		case -675142890:
			return 70;
	
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 19;
	
		case -591844128:
			return 72;
	
		case joaat("provision_ram_hide"):
			return 40;
	
		case joaat("provision_panther_fur"):
			return 31;
	
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 35;
	
		case -308200059:
			return 55;
	
		case -251416414:
			return 50;
	
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 28;
	
		case joaat("provision_pig_skin"):
			return 34;
	
		case 0:
			return 76;
	
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 47;
	
		case 121494806:
			return 49;
	
		case 219794592:
			return 60;
	
		case joaat("provision_fox_fur"):
			return 21;
	
		case 397926876:
			return 59;
	
		case joaat("provision_cougar_fur"):
			return 12;
	
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 23;
	
		case joaat("provision_pronghorn_fur"):
			return 37;
	
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 48;
	
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 25;
	
		case 832214437:
			return 58;
	
		case 836208559:
			return 68;
	
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 5;
	
		case 923422806:
			return 57;
	
		case 1009802015:
			return 63;
	
		case joaat("provision_wolf_fur"):
			return 46;
	
		case joaat("provision_coyote_fur"):
			return 15;
	
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 7;
	
		case 1276143905:
			return 64;
	
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 45;
	
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 32;
	
		case 1600479946:
			return 69;
	
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 10;
	
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 22;
	
		case joaat("provision_goat_hair"):
			return 24;
	
		case 1728819413:
			return 62;
	
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 44;
	
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 42;
	
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 41;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 1;
	
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
	
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 29;
	
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 33;
	
		case joaat("provision_loanshark_skins"):
			return 30;
	
		case 2088901891:
			return 67;
	
		case joaat("provision_boar_skin"):
			return 6;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_663(int iParam0, BOOL bParam1) // Position - 0x18DEB Hash - 0x7B65B858 ^0xB5F74795
{
	Player player;
	Player player2;
	int num;

	player = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		return false;

	player2 = player;

	if (player2 < 0 || player2 >= 32)
		return false;

	if (func_664(player2, bParam1) == 0)
		return false;

	num = iParam0;

	if (num > func_664(player2, bParam1))
		num = func_664(player2, bParam1);

	if (!bParam1)
		Global_1289643[player2 /*19*/] = Global_1289643[player2 /*19*/] - num;
	else
		Global_1289643[player2 /*19*/].f_1 = Global_1289643[player2 /*19*/].f_1 - num;

	if (func_664(player2, bParam1) < 0)
		if (!bParam1)
			Global_1289643[player2 /*19*/] = 0;
		else
			Global_1289643[player2 /*19*/].f_1 = 0;
	else if (func_664(player2, bParam1) > func_665(bParam1))
		if (!bParam1)
			Global_1289643[player2 /*19*/] = func_665(bParam1);
		else
			Global_1289643[player2 /*19*/].f_1 = func_665(bParam1);

	return true;
}

int func_664(Player plParam0, BOOL bParam1) // Position - 0x18EE4 Hash - 0x5A8EAA13 ^0xC5357BF7
{
	return bParam1 ? Global_1289643[plParam0 /*19*/].f_1 : Global_1289643[plParam0 /*19*/];
}

int func_665(BOOL bParam0) // Position - 0x18F04 Hash - 0x929DFA50 ^0x5A58BCD2
{
	return bParam0 ? Global_1901671.f_701.f_30 : Global_1901671.f_701.f_29;
}

int func_666(Hash hParam0) // Position - 0x18F24 Hash - 0xB8EC44B7 ^0x34C82EA7
{
	switch (hParam0)
	{
		case joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR");
	
		case -2115566177:
			return -827518870;
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_OWL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR");
	
		case -1886936864:
			return 1367447057;
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY");
	
		case -1671125008:
			return -1434083213;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY");
	
		case -1066678466:
			return 1888419655;
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PIG_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_GILA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR");
	
		case -438328437:
			return 1493601140;
	
		case -375348364:
			return -2040849706;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY");
	
		case -352805801:
			return -229670230;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY");
	
		case -132069363:
			return -885592109;
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR");
	
		case -101301217:
			return 2014346813;
	
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY");
	
		case 213936563:
			return -1638839614;
	
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY");
	
		case 403588059:
			return 2004357248;
	
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY");
	
		case 616254818:
			return -70954328;
	
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY");
	
		case 777641606:
			return -2092697195;
	
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY");
	
		case 897866285:
			return 1705186999;
	
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY");
	
		case 1020297399:
			return 1527400190;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY");
	
		case 1135507073:
			return -1821314478;
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY");
	
		case 1491466288:
			return 546758456;
	
		case 1518910503:
			return 1758585485;
	
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT");
	
		case 1586020612:
			return -1378208045;
	
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
	
		case 1683741809:
			return 1842740532;
	
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY");
	
		case 1718756614:
			return -1282621313;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
	
		case 1815502722:
			return -2043601589;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR");
	
		case 1892902297:
			return 1450608653;
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY");
	
		case 1920759986:
			return 1543592331;
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT");
	
		default:
		
	}

	return 0;
}

BOOL func_667(Any* panParam0) // Position - 0x19960 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_668() // Position - 0x19996 Hash - 0xC82BB3B3 ^0x6740E474
{
	Vehicle vehicleOwnedByPlayer;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (!func_676(vehicleOwnedByPlayer))
		return false;

	return true;
}

void func_669(var uParam0) // Position - 0x199E5 Hash - 0x58FD8C3D ^0x7E71AD66
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
	return;
}

BOOL func_670(int* piParam0, Hash hParam1) // Position - 0x19A41 Hash - 0x8927A1A4 ^0x3C5C8B8F
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(piParam0, joaat("basket"), hParam1))
		return false;

	return true;
}

BOOL func_671(int* piParam0) // Position - 0x19A5F Hash - 0x7EABA512 ^0xD3B85449
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		func_552(*piParam0, 0, 0, 0);
		return true;
	}

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam0);
		func_552(*piParam0, 4, 0, 0);
		return true;
	}

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*piParam0))
	{
		func_552(*piParam0, 2, 0, 0);
		return false;
	}

	func_552(*piParam0, 1, 0, 0);
	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action == 2113164098 || action == 541670136)
		piParam0->f_3 = 1;

	piParam0->f_1 = *piParam0;
	*piParam0 = -1;
	piParam0->f_2 = 0;
	return true;
}

int func_672(Hash hParam0) // Position - 0x19AFC Hash - 0x1E74E236 ^0xF004CA87
{
	int outSatchelItemSize;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &outSatchelItemSize))
		return -1;

	return outSatchelItemSize;
}

struct<4> func_673(int iParam0, Hash hParam1) // Position - 0x19B16 Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_677(iParam0) };
	return func_678(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_674(int iParam0, Hash hParam1, int iParam2) // Position - 0x19B38 Hash - 0x5E31EF6C ^0x5E31EF6C
{
	if (!func_25(hParam1, 0))
		return false;

	return func_657(iParam0, hParam1) >= iParam2;
}

BOOL func_675(int iParam0, Hash hParam1, int iParam2, Hash hParam3, BOOL bParam4) // Position - 0x19B5A Hash - 0x1ABECC38 ^0x1ABECC38
{
	var unk;
	var unk6;

	if (!func_25(hParam1, 0))
		return false;

	if (iParam2 < 1)
		return false;

	unk = { func_677(iParam0) };
	unk6 = { func_678(iParam0, hParam1, unk, unk.f_4) };
	return func_679(iParam0, hParam1, &unk6, iParam2, hParam3, bParam4);
}

BOOL func_676(Vehicle veParam0) // Position - 0x19BA9 Hash - 0xDEF9F967 ^0x717FC3F4
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("huntercart01"):
			return true;
	
		default:
		
	}

	return false;
}

struct<5> func_677(int iParam0) // Position - 0x19BC8 Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_678(iParam0, joaat("character"), func_448(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_678(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x19BF5 Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_25(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

BOOL func_679(int iParam0, Hash hParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x19C22 Hash - 0xBC47E790 ^0xD04171B4
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_515(hParam1))
		return 0;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_680(iParam0, *panParam2, &unk, false))
		return 0;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, panParam2, iParam3, hParam4))
		return 0;

	return 1;
}

BOOL func_680(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, Any* panParam5, BOOL bParam6) // Position - 0x19C9A Hash - 0x9301D070 ^0x96DC8844
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, panParam5, !bParam6))
		return false;

	return true;
}

