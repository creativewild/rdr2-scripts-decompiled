#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	BOOL bLocal_15 = 0;
	var uLocal_16 = 7;
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
	var uLocal_37 = -1;
	var uLocal_38 = 1;
	var uLocal_39 = 1;
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
	var uLocal_52 = 1;
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 4;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 4;
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
	var uLocal_73 = 1;
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
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
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

void main() // Position - 0x0 Hash - 0x558EB209 ^0xBEF2A92F
{
	BOOL flag;
	BOOL flag2;

	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (func_1(0, false, true) && !func_2() || func_3(false))
	{
		Global_1911914.f_1582 = 0;
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	flag = uScriptParam_0.f_3;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		iLocal_14 = 3;

	while (true)
	{
		if (func_4())
			iLocal_14 = 3;
	
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HITCH_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_EXIT"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_JUMP"), false);
	
		switch (iLocal_14)
		{
			case 0:
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
				uLocal_16.f_33 = 1;
				uLocal_16.f_34 = 1;
				func_5(&uLocal_16, 2);
				iLocal_14 = 2;
				break;
		
			case 1:
				if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("showMenu")) && !func_6(Global_35))
				{
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
				
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
					{
						if (func_6(Global_35))
						{
							WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
							bLocal_15 = true;
							iLocal_14 = 2;
						}
						else if (!PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_FOOT(Global_35))
						{
							if (flag)
							{
								iLocal_14 = 3;
							}
							else if (!func_7(Global_35, SCRIPT_TASK_START_SCENARIO_IN_PLACE))
							{
								flag2 = true;
							
								if (func_8(0) || func_8(1))
									flag2 = false;
							
								if (flag2)
									PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("DYNAMIC_KNEEL_QUICK_ENTER"), 2f);
							
								TASK::TASK_START_SCENARIO_IN_PLACE_HASH(Global_35, joaat("world_player_dynamic_kneel"), 0, true, joaat("WORLD_PLAYER_DYNAMIC_KNEEL_ARTHUR"), -1082130432, false);
							}
						}
					}
				}
				else
				{
					bLocal_15 = true;
					iLocal_14 = 2;
				}
				break;
		
			case 2:
				func_9(&uLocal_16, 0);
			
				if (func_10(&uLocal_16) == 0)
				{
					iLocal_14 = 3;
				}
				else if (func_10(&uLocal_16) != 12)
				{
				}
				else if (!bLocal_15 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("showMenu")) && !func_6(Global_35))
				{
					iLocal_14 = 1;
				}
				else
				{
					bLocal_15 = true;
				}
				break;
		
			case 3:
				func_11(&uLocal_16, false);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL func_1(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x252 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_12())
			return true;
	
		if (Global_1058888.f_3 && !Global_1572887.f_8)
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1898164.f_163;
		else
			return Global_1898164.f_164;
	}

	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		num = func_13(Global_1898164.f_1[0 /*5*/]);
	
		if (func_14(num) && func_15(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_16(Global_1898164.f_1[0 /*5*/]))
		return true;

	if (Global_1935630 && 40959 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1898438)
			return true;

	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
	
		case 1:
			return iParam0 & 1 == 0;
	
		case 2:
			return iParam0 & 16 == 0;
	
		case 3:
			return iParam0 & 128 == 0;
	
		case 4:
			return iParam0 & 2 == 0;
	
		case 5:
			return iParam0 & 32 == 0;
	
		case 6:
			return iParam0 & 4 == 0;
	
		case 8:
			return iParam0 & 8 == 0;
	
		case 9:
			return iParam0 & 64 == 0;
	
		case 10:
			return iParam0 & 512 == 0;
	
		case 11:
			return iParam0 & 256 == 0;
	
		default:
		
	}

	return false;
}

BOOL func_2() // Position - 0x456 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1911914.f_1578;
}

BOOL func_3(BOOL bParam0) // Position - 0x465 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1914319.f_17370;

	return Global_1914319.f_17370 || Global_1914319.f_18996.f_1;
}

BOOL func_4() // Position - 0x495 Hash - 0x5EA2C565 ^0x905B31C
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return true;

	if (func_3(false))
		return true;

	if (func_1(0, false, true) && !func_2())
		return true;

	if (func_17())
		return true;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		return true;

	if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
		return true;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		return true;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(PLAYER::PLAYER_PED_ID()))
		return true;

	if (MISC::GET_FRAME_COUNT() % 10 == 0)
		if (func_18())
			return true;

	if (func_19())
		return true;

	if (bLocal_15)
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
			if (!func_6(PLAYER::PLAYER_PED_ID()))
				return true;
		else if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(PLAYER::PLAYER_PED_ID(), 1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("showMenu")))
			return true;

	return false;
}

void func_5(var uParam0, int iParam1) // Position - 0x57C Hash - 0x78EEA7AE ^0xE95C8DA9
{
	if (uParam0->f_8 != iParam1)
	{
		uParam0->f_8 = iParam1;
		func_20(uParam0);
	}

	return;
}

BOOL func_6(Ped pedParam0) // Position - 0x599 Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_7(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x5B6 Hash - 0xBA023B92 ^0x16E0B707
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

int func_8(int iParam0) // Position - 0x60F Hash - 0xE53F5651 ^0xA0757BD
{
	Hash weaponHash;

	weaponHash = 0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, iParam0, false))
		if (func_21(weaponHash, 0))
			if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) || func_22(weaponHash))
				return 1;

	return 0;
}

void func_9(var uParam0, int iParam1) // Position - 0x64E Hash - 0x849E01D4 ^0x1D86E997
{
	var unk;
	int num;
	Hash hash;
	int eventData;
	Hash activeDynamicScenario2;
	int num2;
	BOOL flag;
	Hash activeDynamicScenario;
	AnimScene animScene;
	AnimScene animScene2;
	AnimScene animScene3;
	Hash activeDynamicScenario2;

	unk = 1;
	unk[0] = uParam0->[1];

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		func_11(uParam0, false);

	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);

	if (func_23() != -1 && func_24() || func_25())
	{
		if (func_26(uParam0->[0], false))
		{
			func_27(uParam0);
			func_20(uParam0);
		}
	
		return;
	}

	if (uParam0->f_58)
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_CRAFTING_SEQUENCE"));

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();

	switch (func_10(uParam0))
	{
		case 0:
			if (func_33())
				func_34(false);
		
			if (func_28(uParam0))
			{
				func_27(uParam0);
				func_31(uParam0);
			}
			break;
	
		case 1:
			if (func_33())
				func_34(false);
		
			if (func_28(uParam0))
			{
				if (func_70(uParam0->[0]))
					func_49(uParam0->[0], false, true);
			
				func_31(uParam0);
			}
			break;
	
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_28(uParam0))
			{
				func_29(uParam0);
				func_30(uParam0);
				func_31(uParam0);
			}
		
			if (func_32(uParam0))
				func_5(uParam0, 3);
			break;
	
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_23() == false && CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
			{
				func_27(uParam0);
				return;
			}
		
			if (func_28(uParam0))
			{
				func_27(uParam0);
				func_31(uParam0);
			
				if (func_33())
					func_34(false);
			}
		
			if (uParam0->f_34 || func_35(uParam0->[0], true) || func_36(8192) || uParam0->f_35)
				func_37(uParam0);
			break;
	
		case 4:
			if (!uParam0->f_58)
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_38(uParam0))
			{
				uParam0->f_62 = 1;
			
				if (func_36(4096))
					uParam0->f_52 = 0;
				else if (func_36(8192))
					uParam0->f_52 = 4;
			
				func_5(uParam0, 5);
			}
			break;
	
		case 5:
			if (!uParam0->f_58)
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_39(uParam0))
				func_5(uParam0, 6);
			break;
	
		case 6:
			if (!uParam0->f_58)
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_40(uParam0))
				func_5(uParam0, 7);
			break;
	
		case 7:
			if (!uParam0->f_58)
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_28(uParam0))
			{
				func_41(uParam0);
				func_31(uParam0);
				return;
			}
		
			if (func_42(uParam0, false))
				if (func_43(uParam0, false))
					func_5(uParam0, 8);
				else if (uParam0->f_31)
					func_5(uParam0, 1);
				else
					func_5(uParam0, 0);
			break;
	
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("crafting")))
			{
				if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(joaat("crafting")))
				{
					Global_1911914.f_1580 = 0;
					func_5(uParam0, 10);
				}
			}
			break;
	
		case 9:
			if (!uParam0->f_58)
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_28(uParam0))
			{
				func_41(uParam0);
				func_31(uParam0);
				return;
			}
		
			if (func_42(uParam0, true))
				func_5(uParam0, 10);
			break;
	
		case 10:
			func_45(false);
		
			if (func_23() == false && CAM::IS_INTERPOLATING_TO_SCRIPT_CAMS())
			{
				func_27(uParam0);
				return;
			}
		
			if (func_28(uParam0))
			{
				func_27(uParam0);
				func_46(uParam0, true);
				uParam0->[2] = func_47("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			
				if (func_48(32))
					func_49(uParam0->[2], false, true);
				else
					func_49(uParam0->[2], true, true);
			
				uParam0->[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			
				if (func_21(uParam0->f_75, 0))
				{
					uParam0->f_77 = uParam0->f_75;
					uParam0->f_78 = uParam0->f_76;
					func_50(uParam0, &(uParam0->f_74));
				}
				else
				{
					uParam0->f_77 = 0;
				}
			
				if (func_51(uParam0->f_75))
					func_52(uParam0->[1], "CAMP_REC_COOK", true);
				else if (func_53(uParam0->f_75, -1636519629) == -701492487)
					func_52(uParam0->[1], "CAMP_REC_BREW", true);
				else
					func_52(uParam0->[1], "CAMP_REC_MAKE", true);
			
				uParam0->[3] = func_47(func_54(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
				uParam0->[5] = func_55("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
				func_56(uParam0->[5], joaat("INPUT_GAME_MENU_LEFT"));
				func_56(uParam0->[5], joaat("INPUT_GAME_MENU_RIGHT"));
			
				if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_73))
					num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants");
			
				if (num > 1 && func_21(uParam0->f_77, 0))
					func_49(uParam0->[5], true, true);
				else
					func_49(uParam0->[5], false, true);
			
				uParam0->[6] = func_47("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			
				if (!uParam0->f_82)
					func_52(uParam0->[6], "INFO", true);
				else
					func_52(uParam0->[6], "INGREDIENTS", true);
			
				if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_40) == 0)
				{
					func_57(uParam0);
					func_49(uParam0->[6], false, true);
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_NO_REC_TIP"));
				}
			
				func_58(uParam0, uParam0->f_77, uParam0->f_78);
				func_31(uParam0);
			}
		
			if (Global_1911914.f_1580)
			{
				Global_1911914.f_1580 = 0;
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				func_57(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_58(uParam0, 0, 0);
				func_49(uParam0->[5], false, true);
				func_5(uParam0, 9);
			}
			else if (func_59(uParam0->[2], true))
			{
				if (uParam0->f_34)
				{
					func_5(uParam0, 16);
				}
				else
				{
					func_60(uParam0, false);
					func_61("Exit", "SSCRFT_Sounds");
				
					if (uParam0->f_35)
					{
						uParam0->f_35 = 0;
						func_5(uParam0, 1);
					}
					else
					{
						func_5(uParam0, 3);
					}
				}
			}
			else if (func_35(uParam0->[1], true))
			{
				func_62(uParam0);
			}
			else if (func_35(uParam0->[3], true))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				uParam0->f_57 = !uParam0->f_57;
				func_57(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_58(uParam0, 0, 0);
				func_49(uParam0->[5], false, true);
				func_5(uParam0, 9);
			}
			else if (func_63(uParam0->[5], 0, true))
			{
				if (uParam0->f_79)
				{
					func_61("Nav_Left", "SSCRFT_Sounds");
					func_64(uParam0, false);
				}
			}
			else if (func_63(uParam0->[5], 1, true))
			{
				if (uParam0->f_79)
				{
					func_61("Nav_Right", "SSCRFT_Sounds");
					func_64(uParam0, true);
				}
			}
			else if (func_35(uParam0->[6], true))
			{
				func_65(uParam0, true);
			}
			else
			{
				hash = joaat("crafting_menu");
			
				while (UIEVENTS::EVENTS_UI_IS_PENDING(hash))
				{
					if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hash, &eventData))
					{
						if (eventData == 703281244 || eventData == -722926211)
							func_66(uParam0);
						else if (eventData == -1740156697)
							func_67(uParam0, &eventData);
						else if (eventData == -1203660660)
							if (func_26(uParam0->[1], false))
								func_62(uParam0);
					
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
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_45(false);
			activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_35);
			num2 = func_53(uParam0->f_77, -1636519629);
		
			if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
			{
				if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_35, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1")))
				{
					PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 6f);
					PED::_ADD_SCENARIO_TRANSITION(Global_35);
				}
			
				return;
			}
		
			if (num2 != -715814988)
			{
				if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
				{
					if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_35, joaat("KNIFE1_TRANS_KNEEL1")))
					{
						PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("KNIFE1_TRANS_KNEEL1"), 6f);
						PED::_ADD_SCENARIO_TRANSITION(Global_35);
					}
				
					return;
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
			
				if (num2 == 414472632 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_63, true, false) || num2 == -1136843638 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_66, true, false) || uParam0->f_88 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_88) || num2 == -732326901 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_68, true, false) || num2 == 786205940 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_67, true, false) || num2 == -1141771998 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_69, true, false) || num2 == 364689687 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_70, true, false) || num2 == -842117252 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_71, true, false) || num2 == -1610298873 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_72, true, false))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_68(uParam0);
					uParam0->f_64 = 0;
				}
			}
			else
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_65, true, false) || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_68(uParam0);
					uParam0->f_64 = 0;
				}
			
				if (activeDynamicScenario2 != joaat("world_player_dynamic_kneel_knife"))
				{
					if (uParam0->f_31)
					{
						if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_35, joaat("KNEEL1_TRANS_KNIFE1")))
						{
							PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("KNEEL1_TRANS_KNIFE1"), 2f);
							PED::_ADD_SCENARIO_TRANSITION(Global_35);
						}
					
						return;
					}
				}
			}
		
			if (func_28(uParam0))
			{
				func_31(uParam0);
				func_69(uParam0, false, &unk);
				func_68(uParam0);
			
				if (func_70(uParam0->[1]))
					func_71(&uParam0->[1], true, true);
			
				if (func_72(num2))
				{
					uParam0->f_53 = 250;
					uParam0->[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_58(uParam0, uParam0->f_77, uParam0->f_78);
					func_73(uParam0->[1], -1067771379, 0, true);
					func_74(uParam0->[1], 10, true, true);
					func_74(uParam0->[1], 11, true, true);
					func_49(uParam0->[1], false, true);
				}
				else
				{
					uParam0->[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_73(uParam0->[1], -1067771379, 0, true);
					func_75(uParam0->[1], true, true);
					func_74(uParam0->[1], 10, true, true);
					func_74(uParam0->[1], 11, true, true);
					func_49(uParam0->[1], false, true);
				}
			
				return;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -563455375))
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
		
			if (func_72(num2))
			{
				if (!uParam0->f_36)
				{
					if (func_26(uParam0->[1], false))
					{
						if (func_76(uParam0->[1], true) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							uParam0->f_36 = 1;
							func_49(uParam0->[1], false, true);
							func_49(uParam0->[4], false, true);
						}
					}
				}
			
				if (num2 == -1136843638 || num2 == -732326901 || num2 == 786205940 || num2 == -1141771998 || num2 == 364689687 || num2 == -842117252 || num2 == -1610298873)
				{
					if (uParam0->f_88 != 0)
					{
						if (uParam0->f_88 == joaat("s_cft_arrow_smallgame") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1011038463) || uParam0->f_88 != joaat("s_cft_arrow_smallgame") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2024314131))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
								OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						
							if (func_77(uParam0->f_77, -1588156645) && num2 != -842117252)
							{
								uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(func_78(uParam0->f_77, false), 1, Global_36, true, 1065353216);
								ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
							
								if (num2 == -1610298873)
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_79(uParam0, num2), "DYNAMITE", uParam0->f_86, 0);
							}
							else
							{
								uParam0->f_86 = OBJECT::CREATE_OBJECT(uParam0->f_88, Global_36, true, true, false, false, false);
								ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
							}
						
							if (num2 == 786205940)
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							else if (num2 == -1141771998 || num2 == -1610298873)
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							else if (num2 == -842117252)
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							else
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
					}
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
					
						if (num2 == -732326901 || num2 == 364689687)
						{
							uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_36, true, 1065353216);
						}
						else if (num2 == -1141771998)
						{
							uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_tomahawk"), 1, Global_36, true, 1065353216);
						}
						else if (num2 == -842117252)
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("p_molotovempty01x"), Global_36, true, true, false, false, true);
						}
						else if (num2 == -1610298873)
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("w_stick_dynamite01"), Global_36, true, true, false, false, true);
						
							if (num2 == -1610298873)
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_79(uParam0, num2), "DYNAMITE", uParam0->f_86, 0);
						}
						else
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("s_cft_arrow"), Global_36, true, true, false, false, false);
						}
					
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
					
						if (num2 == 786205940)
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						else if (num2 == -1141771998 || num2 == -1610298873 || num2 == -842117252)
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						else
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
					}
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1394836706))
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1471149551))
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_87))
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_87, true);
				}
				else if (num2 == 414472632 || num2 == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_85, true);
				}
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -61921192))
				{
					if (!func_80(false))
					{
						if (uParam0->f_21 == -1)
						{
							uParam0->f_21 = func_81(uParam0->f_77, uParam0->f_78);
						
							if (uParam0->f_21 == -1)
								func_82(uParam0, num2, false);
						
							return;
						}
						else if (func_83(uParam0->f_21))
						{
							return;
						}
					
						uParam0->f_21 = -1;
					}
					else
					{
						func_85(uParam0->f_77, uParam0->f_78, true, func_84(), 0);
						func_86(uParam0->f_77, 1, false, true, 0);
					
						if (uParam0->f_31)
							func_87();
					}
				
					if (num2 == -842117252)
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				
					uParam0->f_20 = uParam0->f_20 + 1;
					uParam0->f_38 = uParam0->f_38 + 1;
				
					if (!func_88(uParam0->f_77, uParam0->f_78, false, func_84(), 0, false) || func_89(uParam0->f_77, 1, false) || uParam0->f_20 >= uParam0->f_37)
					{
						func_82(uParam0, num2, false);
						return;
					}
				}
			
				if (!uParam0->f_36)
					if (!(func_26(uParam0->[1], false) && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_ACCEPT"))))
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("safetobreakout")))
							func_82(uParam0, num2, true);
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1290366555) && uParam0->f_20 < uParam0->f_37 - 1)
				{
					func_49(uParam0->[1], true, true);
					func_49(uParam0->[4], true, true);
					uParam0->f_36 = 0;
				}
			
				if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(func_79(uParam0, num2), "player"))
					func_82(uParam0, num2, false);
			}
			else if (func_90(&(uParam0->f_89), (float)uParam0->f_53 / 1000f))
			{
				if (!func_80(false))
				{
					if (uParam0->f_21 == -1)
					{
						uParam0->f_21 = func_81(uParam0->f_77, uParam0->f_78);
					
						if (uParam0->f_21 == -1)
							func_82(uParam0, num2, false);
					
						return;
					}
					else if (func_83(uParam0->f_21))
					{
						return;
					}
				
					uParam0->f_21 = -1;
				}
				else
				{
					func_85(uParam0->f_77, uParam0->f_78, true, func_84(), 0);
					func_86(uParam0->f_77, 1, true, true, 0);
				
					if (uParam0->f_31)
						func_87();
				}
			
				uParam0->f_37 = -1;
				uParam0->f_38 = 0;
				func_91(131072);
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
			
				uParam0->f_55 = 0;
				flag = true;
			
				if (!func_88(uParam0->f_77, uParam0->f_78, false, func_84(), 0, false) || func_89(uParam0->f_77, 1, false))
					flag = false;
			
				func_82(uParam0, num2, flag);
			}
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_45(false);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
		
			if (!func_48(128))
			{
				if (!func_26(uParam0->[2], false))
				{
					func_49(uParam0->[2], true, true);
					func_75(uParam0->[2], false, true);
				}
			
				if (!func_26(uParam0->[4], false))
				{
					func_49(uParam0->[4], true, true);
					func_75(uParam0->[4], true, true);
				}
			}
		
			if (func_59(uParam0->[2], true))
			{
				func_27(uParam0);
				func_92(&(uParam0->f_89));
				func_5(uParam0, 14);
				return;
			}
			else if (func_93(uParam0->[4], true))
			{
				func_27(uParam0);
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
					OBJECT::DELETE_OBJECT(&(uParam0->f_85));
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
			
				activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_35);
			
				if (activeDynamicScenario != joaat("world_player_dynamic_kneel_knife"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			
				num2 = func_53(uParam0->f_77, -1636519629);
				animScene = func_79(uParam0, num2);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(animScene, "player", Global_35);
				func_60(uParam0, false);
				func_61("Exit", "SSCRFT_Sounds");
			
				if (uParam0->f_31)
					func_5(uParam0, 1);
				else
					func_5(uParam0, 0);
			
				return;
			}
			else if (func_35(uParam0->[1], true))
			{
				func_49(uParam0->[4], false, true);
				func_49(uParam0->[2], false, true);
				func_49(uParam0->[1], false, true);
				num2 = func_53(uParam0->f_77, -1636519629);
				animScene2 = func_79(uParam0, num2);
			
				if (animScene2 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(animScene2, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(animScene2);
				}
			
				func_92(&(uParam0->f_89));
				uParam0->f_36 = 0;
				func_5(uParam0, 12);
				return;
			}
		
			if (func_94(uParam0->[4], true))
			{
				if (!func_95(&(uParam0->f_89)))
					func_96(&(uParam0->f_89));
				else if (func_90(&(uParam0->f_89), 0.1f))
					func_52(uParam0->[4], "CAMP_REC_QUIT", true);
			}
			else
			{
				if (func_95(&(uParam0->f_89)))
					func_92(&(uParam0->f_89));
			
				func_52(uParam0->[4], "CAMP_REC_BACK", true);
			}
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_45(false);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
		
			num2 = func_53(uParam0->f_77, -1636519629);
			animScene3 = func_79(uParam0, num2);
		
			if (animScene3 == 0 || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(animScene3) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(animScene3, false) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("showMenu")))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
					OBJECT::DELETE_OBJECT(&(uParam0->f_85));
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
			
				activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_35);
			
				if (activeDynamicScenario2 != joaat("world_player_dynamic_kneel_knife"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(animScene3, "player", Global_35);
				func_5(uParam0, 15);
			}
			break;
	
		case 15:
			if (!uParam0->f_58)
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (!uParam0->f_62)
			{
				func_5(uParam0, 4);
				return;
			}
		
			if (func_44(uParam0))
			{
				func_43(uParam0, true);
				func_5(uParam0, 8);
			}
			break;
	
		case 16:
			if (func_33())
				func_34(false);
		
			if (func_28(uParam0))
				func_31(uParam0);
		
			func_60(uParam0, false);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_39);
			Global_1911914.f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}

	return;
}

int func_10(var uParam0) // Position - 0x1C53 Hash - 0xD73B9827 ^0x8E05EC78
{
	return uParam0->f_8;
}

void func_11(var uParam0, BOOL bParam1) // Position - 0x1C5F Hash - 0xF62B23DA ^0x1DEF6F4F
{
	func_27(uParam0);
	func_60(uParam0, false);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_39);

	if (func_33())
		func_34(false);

	if (bParam1)
	{
		func_97(uParam0);
		return;
	}

	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_17)))
		HUD::_TEXT_BLOCK_DELETE(&(uParam0->f_17));

	if (uParam0->f_22)
	{
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
	}

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_63))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_63);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_65))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_65);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_66))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_67))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_67);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_68))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_68);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_69))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_69);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_70))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_70);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_71))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_71);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_72))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_72);

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
		OBJECT::DELETE_OBJECT(&(uParam0->f_87));

	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1911914.f_1576 = 0;

	if (func_23() == -1)
	{
		func_5(uParam0, 16);
	}
	else
	{
		if (uParam0->f_8 == 11)
		{
			if (uParam0->f_21 == -1)
			{
				func_81(uParam0->f_77, uParam0->f_78);
				func_98(uParam0->f_77, uParam0->f_20);
			}
		}
	
		uParam0->f_21 = -1;
		func_5(uParam0, 0);
	}

	return;
}

BOOL func_12() // Position - 0x1E14 Hash - 0x2C13EB06 ^0x38F12C8A
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_4)
		return true;

	if (Global_524298)
		return true;

	if (Global_1048577)
		return true;

	if (Global_1051043 == -1 && Global_1572887.f_6 & true != 0)
		return true;

	return false;
}

int func_13(int iParam0) // Position - 0x1E67 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_16(iParam0))
		return -1;

	return func_100(func_99(iParam0));
}

BOOL func_14(int iParam0) // Position - 0x1E87 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_15(int iParam0, int iParam1) // Position - 0x1E9D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_16(int iParam0) // Position - 0x1EAC Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_17() // Position - 0x1EDF Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

BOOL func_18() // Position - 0x1EFB Hash - 0x58084EE7 ^0xBF593B34
{
	int num;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
		return false;

	num = func_101(Global_36, false);

	if (num >= 8 && num <= 12)
		return true;

	return false;
}

BOOL func_19() // Position - 0x1F35 Hash - 0xC43E5A88 ^0x7B6E2EFE
{
	int scenarioPointTypePedIsUsing;
	int num;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		num = scenarioPointTypePedIsUsing;
	
		if (num != joaat("world_player_dynamic_kneel") && num != joaat("world_player_camp_fire_kneel1") && num != joaat("world_player_camp_fire_kneel2") && num != joaat("world_player_camp_fire_kneel3") && num != joaat("world_player_camp_fire_kneel4"))
			return true;
	}

	return false;
}

void func_20(var uParam0) // Position - 0x1F98 Hash - 0x86FD8689 ^0xA845F33D
{
	uParam0->f_18 = 1;
	return;
}

BOOL func_21(Hash hParam0, int iParam1) // Position - 0x1FA5 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_22(Hash hParam0) // Position - 0x1FBF Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

BOOL func_23() // Position - 0x1FCD Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_24() // Position - 0x1FDB Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1898068;
}

BOOL func_25() // Position - 0x1FE7 Hash - 0x35A4808D ^0x7E542F56
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("doc_player_journal")) > 0;
}

BOOL func_26(int iParam0, BOOL bParam1) // Position - 0x1FFA Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_70(iParam0))
		return false;

	return !func_102(iParam0, 4);
}

void func_27(var uParam0) // Position - 0x201F Hash - 0xB8190D6C ^0xB8190D6C
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_71(&uParam0->[i], true, true);
	}

	return;
}

BOOL func_28(var uParam0) // Position - 0x2047 Hash - 0xD73B9827 ^0x372EC0B
{
	return uParam0->f_18;
}

void func_29(var uParam0) // Position - 0x2053 Hash - 0x70C0BBF4 ^0x58D8A9F5
{
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_17), "CAMP", 8);
	return;
}

void func_30(var uParam0) // Position - 0x2064 Hash - 0xEC27F175 ^0xB2D751BC
{
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_17)))
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_17));

	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
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
	func_103(uParam0);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);

	if (uParam0->f_31)
	{
		STREAMING::REQUEST_MODEL(joaat("p_whitefishfilet01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_redfishfilet01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_whitefleshymeat01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_redbirdbreast01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_redefleshymeat01xb"), false);
	}

	return;
}

void func_31(var uParam0) // Position - 0x2150 Hash - 0xBA5A1D5A ^0x56E80C6
{
	uParam0->f_18 = 0;
	return;
}

BOOL func_32(var uParam0) // Position - 0x215D Hash - 0x35DC48AC ^0x9C4E1275
{
	if (func_104(&(uParam0->f_17)))
		if (!HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_17)))
			return false;

	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
		return false;

	if (!func_105(uParam0, &(uParam0->f_63)))
		return false;

	if (!func_105(uParam0, &(uParam0->f_65)))
		return false;

	if (!func_105(uParam0, &(uParam0->f_66)))
		return false;

	if (!func_105(uParam0, &(uParam0->f_67)))
		return false;

	if (!func_105(uParam0, &(uParam0->f_68)))
		return false;

	if (!func_105(uParam0, &(uParam0->f_69)))
		return false;

	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
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

	if (uParam0->f_31)
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

BOOL func_33() // Position - 0x2333 Hash - 0xDC457EBB ^0x3B0D6F
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");

	return false;
}

void func_34(BOOL bParam0) // Position - 0x235A Hash - 0x941E7E7E ^0x8B3DA253
{
	if (bParam0)
	{
	}

	Global_1911914.f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_35, "player_crafting_active", bParam0);
	return;
}

BOOL func_35(int iParam0, BOOL bParam1) // Position - 0x2381 Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_70(iParam0))
		return false;

	num = func_106(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[num /*18*/].f_3);
}

BOOL func_36(BOOL bParam0) // Position - 0x23B4 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1392040 && bParam0 != false;
}

void func_37(var uParam0) // Position - 0x23C5 Hash - 0xD45265C9 ^0xD45265C9
{
	func_34(true);
	func_5(uParam0, 4);
	return;
}

BOOL func_38(var uParam0) // Position - 0x23D9 Hash - 0x98661462 ^0xA82ED6D1
{
	if (uParam0->f_54 == 0)
	{
		Global_1911914.f_1576 = 0;
		uParam0->f_55 = 0;
		func_107(uParam0, 600942249);
		uParam0->f_54 = uParam0->f_54 + 1;
		return false;
	}
	else if (uParam0->f_54 == 1)
	{
		func_107(uParam0, -257768755);
		uParam0->f_54 = uParam0->f_54 + 1;
		return false;
	}
	else
	{
		func_107(uParam0, -214678071);
		uParam0->f_54 = 0;
	}

	uParam0->f_55 = 0;
	return true;
}

BOOL func_39(var uParam0) // Position - 0x244F Hash - 0x16A3D3E9 ^0x65D10338
{
	int i;
	var unk;

	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_39, "filter", func_108(uParam0->f_52));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "filterCount", 5 + 1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "filterIndex", uParam0->f_52);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_39, "tipText", "");
	uParam0->f_51 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_39, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_39, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_39, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowIngredients", true);

	for (i = 0; i < 4; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ingredient", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_109(&uParam0->f_41[i], &unk, uParam0);
		TEXT_LABEL_ASSIGN_STRING(&unk, "tip", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		uParam0->f_46[i] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_39, &unk);
		TEXT_LABEL_ASSIGN_STRING(&unk, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_46[i], &unk, "");
		TEXT_LABEL_ASSIGN_STRING(&unk, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_46[i], &unk, 0);
	}

	return true;
}

BOOL func_40(var uParam0) // Position - 0x25CC Hash - 0xD901A9F7 ^0x243760EF
{
	Hash i;
	int num;
	BOOL flag;

	flag = func_84();

	for (i = uParam0->f_55; i <= Global_1911914.f_1576 - 1; i = i + 1)
	{
		if (func_21(Global_1911914[i /*9*/].f_6, 0))
		{
			func_110(uParam0, false, i, flag, true, false);
		
			if (num >= 30)
			{
				uParam0->f_55 = i + 1;
				return false;
			}
		
			num = num + 1;
		}
	}

	uParam0->f_55 = 0;

	if (uParam0->f_60 == 0)
		uParam0->f_57 = 0;

	uParam0->f_56 = 0;
	return true;
}

void func_41(var uParam0) // Position - 0x2647 Hash - 0x7B631005 ^0x8E471196
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_40))
		uParam0->f_40 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_39, "recipes");
	else
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_40);

	uParam0->f_76 = 600942249;
	uParam0->f_75 = 0;
	uParam0->f_74 = 0;
	return;
}

BOOL func_42(var uParam0, BOOL bParam1) // Position - 0x2689 Hash - 0x5D096E3F ^0x7AAC5DC7
{
	Hash i;
	int num;
	BOOL flag;
	BOOL flag2;

	flag = func_84();

	for (i = uParam0->f_55; i <= Global_1911914.f_1576 - 1; i = i + 1)
	{
		if (uParam0->f_57 && Global_1911914[i /*9*/].f_2 || !uParam0->f_57)
		{
			if (Global_1911914.f_1585 != 0)
			{
				flag2 = func_77(Global_1911914[i /*9*/].f_6, Global_1911914.f_1585);
			
				if (uParam0->f_81 == flag2)
				{
				}
				else
				{
					func_110(uParam0, true, i, flag, false, bParam1);
				
					if (num >= 50)
					{
						uParam0->f_55 = i + 1;
						return false;
					}
				
					num = num + 1;
				}
			}
		
			func_110(uParam0, true, i, flag, false, bParam1);
		
			if (num >= 50)
			{
				uParam0->f_55 = i + 1;
				return false;
			}
		
			num = num + 1;
		}
	}

	uParam0->f_55 = 0;

	if (!uParam0->f_81 && Global_1911914.f_1585 != 0)
	{
		uParam0->f_81 = 1;
		return false;
	}

	uParam0->f_56 = 0;
	uParam0->f_81 = 0;
	return true;
}

BOOL func_43(var uParam0, BOOL bParam1) // Position - 0x2759 Hash - 0x377D2D9A ^0xEF9CB40F
{
	int num;

	uParam0->f_58 = 1;

	if (bParam1 && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("crafting")))
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("crafting"), 1014850361))
		{
			func_111(1);
			func_112(8);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		num = UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("crafting"));
	
		if (num == 0)
		{
			func_112(8);
			func_111(1);
			func_113(0, -100);
			func_113(2, -100);
			func_113(1, -100);
			return true;
		}
	}

	return false;
}

BOOL func_44(var uParam0) // Position - 0x27DC Hash - 0x1B1EEE6C ^0x4A5E63A0
{
	int i;
	int num;
	BOOL flag;

	flag = func_84();

	for (i = uParam0->f_55; i <= Global_1911914.f_1576 - 1; i = i + 1)
	{
		func_114(uParam0, i, flag, 0, true, false, true);
	
		if (num >= 50)
		{
			uParam0->f_55 = i + 1;
			return false;
		}
	
		num = num + 1;
	}

	uParam0->f_61 = 0;
	uParam0->f_55 = 0;
	return true;
}

void func_45(BOOL bParam0) // Position - 0x2839 Hash - 0xAD6A0552 ^0x4C19ACDB
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
	ped = func_115(Global_35);

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

void func_46(var uParam0, BOOL bParam1) // Position - 0x291B Hash - 0x15B6CFE3 ^0xA4EF50C1
{
	Entity scenarioPointEntity;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
		scenarioPointEntity = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_9);

	if (ENTITY::DOES_ENTITY_EXIST(scenarioPointEntity))
		ENTITY::SET_ENTITY_COLLISION(scenarioPointEntity, bParam1, false);

	return;
}

int func_47(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, BOOL bParam11) // Position - 0x294A Hash - 0xBB16F284 ^0x81C5F899
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_102(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_116(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, bParam11);
		return num;
	}

	return 0;
}

BOOL func_48(BOOL bParam0) // Position - 0x29D3 Hash - 0xC67CC87B ^0x88ADC254
{
	return Global_1392040.f_1 && bParam0 != false;
}

void func_49(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x29E6 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_70(iParam0))
		return;

	num = func_106(iParam0);

	if (bParam1)
	{
		func_117(iParam0, 4);
		func_118(num, true);
		func_119(num, true);
	}
	else
	{
		func_120(iParam0, 4);
		func_119(num, false);
	}

	return;
}

void func_50(var uParam0, var uParam1) // Position - 0x2A35 Hash - 0xB6330D35 ^0xBE25BAFE
{
	Hash hash;
	Any any;
	Hash hash2;
	int num;
	int num2;
	int num3;
	Hash hash3;

	hash = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	hash2 = hash;
	ATTRIBUTE::STOP_ITEM_PREVIEW();

	if (func_21(hash2, 0) && func_121(hash2, uParam0->f_52))
	{
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		uParam0->f_77 = hash2;
		uParam0->f_78 = any;
		func_71(&uParam0->[1], true, true);
		num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
	
		if (num > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", true);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "variantText", MISC::VAR_STRING(0, uParam0->f_77));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantCount", num);
			num2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			num3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
		
			if (num3 >= 0 && num3 < Global_1911914)
				hash3 = Global_1911914[num3 /*9*/].f_8;
		
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantIndex", (num2 + 1) - hash3);
			uParam0->f_79 = 1;
			func_49(uParam0->[5], true, true);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", false);
			uParam0->f_79 = 0;
			func_49(uParam0->[5], false, true);
		}
	
		uParam0->f_53 = BUILTIN::ROUND(ENTITY::GET_ANIM_DURATION(func_122(uParam0->f_77), func_123(uParam0->f_77)) * 1000f);
		uParam0->f_80 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting");
		uParam0->f_73 = *uParam1;
		uParam0->[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		func_58(uParam0, uParam0->f_77, uParam0->f_78);
		func_74(uParam0->[1], 11, true, true);
	
		if (Global_1911914.f_1579 || !func_124(uParam0->f_77, uParam0->f_78, true))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", func_125(hash2));
			func_65(uParam0, false);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", 0);
		}
	
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription"))
			if (Global_1911914.f_1579 || !func_124(uParam0->f_77, uParam0->f_78, true))
				func_126(uParam0);
	}

	return;
}

BOOL func_51(Hash hParam0) // Position - 0x2C4C Hash - 0xA3EEED9 ^0x97FF85C3
{
	if (func_127(hParam0) == joaat("consumable") && INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, 16777216))
		return true;

	return false;
}

void func_52(int iParam0, char* sParam1, BOOL bParam2) // Position - 0x2C78 Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_70(iParam0))
		return;

	num = func_106(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, sParam1);
	return;
}

int func_53(Hash hParam0, int iParam1) // Position - 0x2CC1 Hash - 0x7A1C2599 ^0xFF9B5634
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

char* func_54(var uParam0) // Position - 0x2D0B Hash - 0x9EEF998B ^0x496CF958
{
	if (uParam0->f_57)
		return "CAMP_REC_ALL";

	return "CAMP_REC_AVL";
}

int func_55(char* sParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x2D28 Hash - 0x82E2A46D ^0x46776D02
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_102(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_116(num, hParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, false, false, hParam2, joaat("SHORT_TIMED_EVENT"), false);
		return num;
	}

	return 0;
}

void func_56(int iParam0, Hash hParam1) // Position - 0x2DB6 Hash - 0xDEF73F31 ^0x53A5E4BF
{
	int num;

	if (!func_70(iParam0))
		return;

	num = func_106(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1945188[num /*18*/].f_3, hParam1);
	return;
}

void func_57(var uParam0) // Position - 0x2DF8 Hash - 0x4B96053 ^0x91EAF552
{
	int i;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_51);

	for (i = 0; i < 4; i = i + 1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_41[i], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_41[i], "inUse", false);
	}

	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", false);
	return;
}

void func_58(var uParam0, Hash hParam1, Hash hParam2) // Position - 0x2E58 Hash - 0x3BD8D92F ^0x3BD8D92F
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

	if (!func_21(hParam1, 0))
	{
		if (func_70(uParam0->[1]))
			func_49(uParam0->[1], false, true);
	
		return;
	}

	flag = func_84();
	flag2 = true;
	flag3 = false;

	if (!Global_1911914.f_1579 && func_124(hParam1, hParam2, true))
	{
		flag3 = true;
		flag2 = false;
	}
	else if (!func_128(hParam1, hParam2, &unk2, &unk, &entity, false, flag, 0, true))
	{
		flag2 = false;
	}
	else if (func_23() == -1)
	{
		if (func_36(4096))
			if (func_53(hParam1, 1697966752) != 337650881)
				flag2 = false;
		else if (func_36(8192))
			if (hParam1 != joaat("consumable_potent_predator_bait"))
				flag2 = false;
	}

	if (flag2)
	{
		if (func_89(hParam1, 1, false) || !uParam0->f_83 || uParam0->f_84 > 0 && func_53(hParam1, -1636519629) == -701492487 || !uParam0->f_31 && uParam0->f_80 || hParam2 == -214678071 || hParam2 == joaat("cost_crafting_grill") || !uParam0->f_32 && hParam2 == joaat("cost_crafting_grill"))
		{
			flag2 = false;
		}
		else if (uParam0->f_37 == -1)
		{
			num = func_129(hParam1, false, false);
			num2 = func_130(hParam1, false);
			num3 = func_131(hParam1, hParam2, flag, false);
		
			if (num2 == -1)
				num2 = num3;
			else
				num2 = num2 - num;
		
			uParam0->f_37 = func_132(num2, num3);
		}
	}

	if (func_70(uParam0->[1]))
	{
		if (func_51(hParam1))
			func_52(uParam0->[1], "CAMP_REC_COOK", true);
		else if (func_53(hParam1, -1636519629) == -701492487)
			func_52(uParam0->[1], "CAMP_REC_BREW", true);
		else
			func_52(uParam0->[1], "CAMP_REC_MAKE", true);
	
		func_49(uParam0->[1], flag2, true);
	}

	func_133(hParam1, hParam2, uParam0, entity, flag3);

	if (func_70(uParam0->[6]))
		func_49(uParam0->[6], !flag3, true);

	return;
}

BOOL func_59(int iParam0, BOOL bParam1) // Position - 0x306E Hash - 0xAAB142C4 ^0x152C664A
{
	int num;

	if (bParam1 && !func_70(iParam0))
		return false;

	num = func_106(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_RELEASED(Global_1945188[num /*18*/].f_3);
}

void func_60(var uParam0, BOOL bParam1) // Position - 0x30A1 Hash - 0x7BF8DC6E ^0xD29B6CCF
{
	func_111(0);

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

	uParam0->f_58 = 0;
	func_91(8);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return;
}

void func_61(char* sParam0, char* sParam1) // Position - 0x30EB Hash - 0xEC3E3845 ^0x55B7F2F
{
	int soundId;

	soundId = AUDIO::GET_SOUND_ID();

	if (soundId != -1)
	{
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(soundId, sParam0, sParam1, true);
		Global_1955838[Global_1955838.f_25] = soundId;
		Global_1955838.f_25 = (Global_1955838.f_25 + 1) % 24;
	}

	return;
}

void func_62(var uParam0) // Position - 0x3129 Hash - 0xAA7F5F3E ^0x1BD635DF
{
	int num;
	AnimScene animScene;

	if (func_53(uParam0->f_77, -1636519629) == -701492487)
		func_60(uParam0, false);
	else
		func_60(uParam0, true);

	func_71(&uParam0->[1], true, true);
	func_71(&uParam0->[5], true, true);
	func_71(&uParam0->[6], true, true);
	func_71(&uParam0->[3], true, true);
	uParam0->f_36 = 1;

	if (!uParam0->f_80 && !func_51(uParam0->f_77))
	{
		func_112(131072);
		num = func_53(uParam0->f_77, -1636519629);
		animScene = func_79(uParam0, num);
	
		if (animScene != 0)
		{
			uParam0->f_36 = 0;
			ANIMSCENE::RESET_ANIM_SCENE(animScene, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(animScene);
			uParam0->f_88 = 0;
		
			if (num != -1610298873)
				if (num == -842117252)
					uParam0->f_88 = joaat("s_cft_molotov01");
				else if (func_77(uParam0->f_77, -1588156645))
					uParam0->f_88 = func_134(func_78(uParam0->f_77, false));
				else if (func_77(uParam0->f_77, 457423347))
					uParam0->f_88 = joaat("s_cft_arrow_dynamite");
				else if (func_77(uParam0->f_77, -1846429632))
					uParam0->f_88 = joaat("s_cft_arrow_fire");
				else if (func_77(uParam0->f_77, -1067199465))
					uParam0->f_88 = joaat("s_cft_arrow_smallgame");
				else
					uParam0->f_88 = func_134(uParam0->f_77);
		
			if (uParam0->f_88 != 0)
				STREAMING::REQUEST_MODEL(uParam0->f_88, false);
		}
	
		func_52(uParam0->[2], "CAMP_REC_BACK", true);
		func_73(uParam0->[2], -1067771379, 0, true);
		func_49(uParam0->[2], false, true);
		func_75(uParam0->[2], false, true);
		uParam0->[4] = func_47("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, 1073741824, joaat("MEDIUM_TIMED_EVENT"), false);
		func_135(&uParam0->[4], "INPUT_PCRAFT_EXIT");
		func_73(uParam0->[4], -1067771379, 0, true);
		func_49(uParam0->[4], false, true);
		func_74(uParam0->[4], 19, true, true);
		func_74(uParam0->[4], 20, true, true);
		func_74(uParam0->[4], 13, true, true);
		func_74(uParam0->[2], 13, true, true);
	
		if (func_70(uParam0->[2]))
			func_73(uParam0->[2], -1067771379, 0, true);
	
		func_5(uParam0, 12);
	}
	else
	{
		func_5(uParam0, 11);
	}

	return;
}

BOOL func_63(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3379 Hash - 0x312C05AC ^0xFB549D9B
{
	int num;

	if (bParam2 && !func_70(iParam0))
		return false;

	num = func_106(iParam0);
	return HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3, iParam1);
}

void func_64(var uParam0, BOOL bParam1) // Position - 0x33AE Hash - 0xEB7632C ^0x2A8902BC
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

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_73))
	{
		num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iCurCostVariant");
		num2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants");
		flag = false;
	
		if (uParam0->f_78 == -214678071 || uParam0->f_78 == joaat("cost_crafting_grill"))
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
				unk = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, -214678071, 0, -1, func_53(uParam0->f_77, 1697966752), 0) };
			
				if (func_137(unk, &num3, &num4, 0))
				{
					if (num4 > 0)
					{
						uParam0->f_78 = -214678071;
						uParam0->f_77 = func_138(0, num3);
						flag = true;
					}
				
					func_139(num3);
				}
			}
			else
			{
				unk = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("cost_crafting_grill"), 0, -1, func_53(uParam0->f_77, 1697966752), 0) };
			
				if (func_137(unk, &num3, &num4, 0))
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
							hash2 = func_138(i, num3);
						
							if (func_77(hash2, hash))
							{
								uParam0->f_78 = joaat("cost_crafting_grill");
								uParam0->f_77 = hash2;
								flag = true;
								break;
							}
						}
					}
				
					func_139(num3);
				}
			}
		}
		else
		{
			acquireCostsCount = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_77);
			outData.f_4 = 15;
			outData.f_36 = 10;
		
			while (outData.f_2 != joaat("cost_type_craft") || outData == -489628648 || !Global_1911914.f_1579 && func_124(uParam0->f_77, outData, true) && num5 < acquireCostsCount)
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
			
				ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(uParam0->f_77, num, &outData);
			}
		
			uParam0->f_78 = outData;
		}
	
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "eCost", uParam0->f_78);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "eOutputItem", uParam0->f_77);
		num6 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iIndex");
	
		if (num6 >= 0 && num6 < Global_1911914)
			hash3 = Global_1911914[num6 /*9*/].f_8;
	
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "iCurCostVariant", num);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantIndex", (num + 1) - hash3);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "variantText", MISC::VAR_STRING(0, uParam0->f_77));
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
	
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription"))
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_77, 1);
	
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", func_125(uParam0->f_77));
		func_114(uParam0, -1, func_84(), uParam0->f_73, false, flag, false);
		func_58(uParam0, uParam0->f_77, uParam0->f_78);
	}

	return;
}

void func_65(var uParam0, BOOL bParam1) // Position - 0x3704 Hash - 0xC48CBE99 ^0xFD09AF78
{
	int num;

	if (bParam1)
		uParam0->f_82 = !uParam0->f_82;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription", uParam0->f_82);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowIngredients", !uParam0->f_82);

	if (!uParam0->f_82)
	{
		func_52(uParam0->[6], "INFO", true);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		func_140(uParam0);
	}
	else
	{
		func_52(uParam0->[6], "INGREDIENTS", true);
		func_126(uParam0);
	}

	if (uParam0->f_78 == -214678071)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants") <= 1 && uParam0->f_82)
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				num = func_131(uParam0->f_77, uParam0->f_78, func_84(), false);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", num));
			}
		}
	}

	return;
}

void func_66(var uParam0) // Position - 0x37E5 Hash - 0xE9F9A6C7 ^0xE4AEA312
{
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	func_141(uParam0);
	func_57(uParam0);
	func_140(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowIngredients", false);
	uParam0->f_77 = 0;
	uParam0->f_78 = 0;
	func_58(uParam0, 0, 0);
	func_5(uParam0, 9);
	return;
}

void func_67(var uParam0, var uParam1) // Position - 0x3837 Hash - 0x1003DF0E ^0x1B76BC65
{
	func_57(uParam0);
	func_140(uParam0);
	func_50(uParam0, &(uParam1->f_3));
	return;
}

void func_68(var uParam0) // Position - 0x3855 Hash - 0xA97CE04D ^0xF774D6DC
{
	int num;
	Hash modelHash;
	Hash modelHash2;

	num = func_53(uParam0->f_77, -1636519629);

	if (num == 414472632)
	{
		uParam0->f_53 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		{
			modelHash = func_142(uParam0->f_77);
		
			if (modelHash != 0)
			{
				uParam0->f_85 = OBJECT::CREATE_OBJECT(modelHash, Global_36, true, true, false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_85, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_85, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_63, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_63);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_63, "pl_craft", true);
	}
	else if (num == -1136843638)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "arrow" /*ARROW*/, uParam0->f_86, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_66);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_66, "pl_craft", true);
	}
	else if (num == 786205940)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_67, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_67);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_67, "pl_craft", true);
	}
	else if (num == -715814988)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "player", Global_35, 0);
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		{
			modelHash2 = func_142(uParam0->f_77);
		
			if (modelHash2 != 0)
			{
				uParam0->f_85 = OBJECT::CREATE_OBJECT(modelHash2, Global_36, true, true, false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_85, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_85, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_85, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), func_143(uParam0->f_77), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "bullet" /*Bullet*/, uParam0->f_85, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_65);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_65, "pl_craft", true);
	}
	else if (num == -732326901)
	{
		uParam0->f_53 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_36, true, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_68);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_68, "pl_craft", true);
	}
	else if (num == -1141771998)
	{
		uParam0->f_53 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_tomahawk"), 1, Global_36, true, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_69, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_69);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_69, "pl_craft", true);
	}
	else if (num == 364689687)
	{
		uParam0->f_53 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_36, true, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
		{
			uParam0->f_87 = OBJECT::CREATE_OBJECT(joaat("p_cs_rag01x"), Global_36, true, true, false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_87, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_87, false, false);
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_70, "RAG", uParam0->f_87, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_70, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_70);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_70, "pl_craft", true);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_69, "pl_craft", true);
	}
	else if (num == -842117252)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_71, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_71);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_71, "pl_craft", true);
	}
	else if (num == -1610298873)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_72, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_72);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_72, "pl_craft", true);
	}
	else
	{
		uParam0->f_53 = BUILTIN::ROUND(ENTITY::GET_ANIM_DURATION(func_122(uParam0->f_77), func_123(uParam0->f_77)) * 1000f);
		func_96(&(uParam0->f_89));
		TASK::TASK_PLAY_ANIM(Global_35, func_122(uParam0->f_77), func_123(uParam0->f_77), 1090519040, -1056964608, -1, 67108880, 0, false, 4096, false, "Satchel_Only_filter", false);
	}

	return;
}

void func_69(var uParam0, BOOL bParam1, var uParam2) // Position - 0x3C95 Hash - 0x366CDE71 ^0x366CDE71
{
	int i;
	int j;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_70(uParam0->[i]))
		{
			for (j = 0; j < *uParam2; j = j + 1)
			{
				if (func_70(uParam2->[j]))
				{
					if (uParam0->[i] == uParam2->[j])
					{
					}
				}
			}
		
			func_49(uParam0->[i], bParam1, true);
		}
	}

	return;
}

BOOL func_70(int iParam0) // Position - 0x3CFE Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_71(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3D3D Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_70(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_106(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_144(num);
	*uParam0 = 0;
	return;
}

BOOL func_72(int iParam0) // Position - 0x3D91 Hash - 0x1DB3839 ^0xDB3801F4
{
	if (iParam0 == -715814988 || iParam0 == -1136843638 || iParam0 == -732326901 || iParam0 == 786205940 || iParam0 == -1141771998 || iParam0 == 364689687 || iParam0 == 414472632 || iParam0 == -842117252 || iParam0 == -1610298873)
		return true;

	return false;
}

void func_73(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x3E19 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_70(iParam0))
		return;

	num = func_106(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, iParam1, iParam2);
	return;
}

void func_74(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3E64 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_70(iParam0))
		return;

	num = func_106(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_75(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3EAF Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_70(iParam0))
		return;

	num = func_106(iParam0);
	func_118(num, bParam1);
	return;
}

BOOL func_76(int iParam0, BOOL bParam1) // Position - 0x3EDB Hash - 0xAAB142C4 ^0xBB29AF2
{
	int num;

	if (bParam1 && !func_70(iParam0))
		return false;

	num = func_106(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[num /*18*/].f_3);
}

BOOL func_77(Hash hParam0, Hash hParam1) // Position - 0x3F0E Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

Hash func_78(Hash hParam0, BOOL bParam1) // Position - 0x3F3F Hash - 0x27CC99BE ^0x9BD61A93
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
	
		case joaat("ammo_throwing_knives_improved"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_tomahawk"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("AMMO_MOLOTOV"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_hatchet_double_bit"):
			hash = joaat("weapon_melee_hatchet_double_bit");
			break;
	
		case joaat("ammo_throwing_knives_poison"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		default:
			break;
	}

	if (func_21(hash, 0))
		if (bParam1)
			if (func_145(hash) || func_146(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

AnimScene func_79(var uParam0, int iParam1) // Position - 0x40C5 Hash - 0x10E222E7 ^0xAFCCF99A
{
	switch (iParam1)
	{
		case -1610298873:
			return uParam0->f_72;
	
		case -1141771998:
			return uParam0->f_69;
	
		case -1136843638:
			return uParam0->f_66;
	
		case -842117252:
			return uParam0->f_71;
	
		case -732326901:
			return uParam0->f_68;
	
		case -715814988:
			return uParam0->f_65;
	
		case 364689687:
			return uParam0->f_70;
	
		case 414472632:
			return uParam0->f_63;
	
		case 786205940:
			return uParam0->f_67;
	
		default:
		
	}

	return 0;
}

BOOL func_80(BOOL bParam0) // Position - 0x414B Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_23() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_147(bParam0));
}

int func_81(Hash hParam0, Hash hParam1) // Position - 0x4169 Hash - 0xD742FBCB ^0xD742FBCB
{
	var unk;
	var unk6;
	int num;
	var unk23;
	var statId;

	if (!func_21(hParam0, 0))
		return -1;

	if (!func_88(hParam0, hParam1, false, false, 0, true))
		return -1;

	unk = { func_148(hParam0, true, false) };

	if (func_149(hParam0, &unk, 1, false, true))
		return -1;

	unk6 = { func_150(hParam0, unk, unk.f_4, 1) };
	unk6.f_13 = hParam1;
	unk6.f_12 = 1248274121;
	num = func_151(2113164098, &unk6, true);

	if (num == -1)
		return -1;

	unk23.f_1 = 1;
	func_152(num, unk23);
	statId = { func_153(hParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, 1);
	return num;
}

void func_82(var uParam0, int iParam1, BOOL bParam2) // Position - 0x420F Hash - 0xB154D6F8 ^0xC743CE28
{
	AnimScene animScene;

	uParam0->f_55 = 0;
	func_112(262144);

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));

	animScene = func_79(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(animScene, "bStopLoop", true, false);

	if (!func_48(128))
	{
		func_49(uParam0->[2], true, true);
		func_49(uParam0->[4], true, true);
	}

	func_75(uParam0->[2], false, true);
	func_75(uParam0->[4], true, true);
	func_154(uParam0->[1], true);
	func_71(&uParam0->[1], true, true);
	uParam0->[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	func_74(uParam0->[1], 11, true, true);
	func_74(uParam0->[1], 19, true, true);
	func_73(uParam0->[1], -1067771379, 0, true);
	func_49(uParam0->[1], bParam2, true);
	func_5(uParam0, 13);
	return;
}

BOOL func_83(int iParam0) // Position - 0x4314 Hash - 0x2597F7C7 ^0x2597F7C7
{
	int num;

	num = func_155(iParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

BOOL func_84() // Position - 0x433A Hash - 0x24E38A73 ^0x7BEA4359
{
	Ped ped;
	int num;

	ped = func_156(7);

	if (!PED::IS_PED_INJURED(ped))
		if (func_157(Global_35, ped, true) < 400f)
			num = 1;

	return num;
}

int func_85(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x436B Hash - 0xD873C269 ^0x2E97B532
{
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(hParam0, hParam1, 0, 1);
	return func_158(hParam0, hParam1, bParam2, bParam3, iParam4);
}

void func_86(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x438B Hash - 0x487FABA ^0x842DF3A2
{
	Hash weaponHash;
	var statId;
	var outData;
	int num;

	if (!func_21(hParam0, 0))
		return;

	func_160(func_159(joaat("items_crafted")), iParam1);

	if (bParam3 && hParam0 != joaat("consumable_coffee"))
	{
		if (func_23() == -1)
		{
			if (func_77(hParam0, -1588156645))
			{
				weaponHash = func_161(func_78(hParam0, false), false);
			
				if (WEAPON::IS_WEAPON_VALID(weaponHash))
					func_162(weaponHash);
			}
		}
	
		if (iParam4 == 0)
			if (func_127(hParam0) == joaat("horse_equipment"))
				if (func_163(hParam0, false))
					func_164(hParam0, 1, false, true, false);
			else
				func_165(hParam0, iParam1, false, false, false, 752097756, 0, 0, 0, false);
		else
			func_166(hParam0, iParam4, iParam1);
	}

	statId = { func_153(hParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);

	if (func_121(hParam0, 0))
		statId = { func_167(joaat("made_recipe_type"), joaat("FOOD")) };
	else if (func_121(hParam0, 2))
		statId = { func_167(joaat("made_recipe_type"), joaat("AMMO")) };
	else if (func_121(hParam0, 5))
		statId = { func_167(joaat("made_recipe_type"), joaat("horse_care")) };
	else if (func_121(hParam0, 1))
		statId = { func_167(joaat("made_recipe_type"), joaat("remedies")) };
	else if (func_121(hParam0, 3))
		statId = { func_167(joaat("made_recipe_type"), joaat("WEAPONS")) };
	else if (func_121(hParam0, 4))
		statId = { func_167(joaat("made_recipe_type"), joaat("Hunting")) };

	STATS::_STAT_ID_INCREMENT_INT(&statId, 1);

	if (func_23() == false)
	{
		Global_1051039 = hParam0;
		return;
	}

	if (bParam2)
		if (func_121(hParam0, 0))
			func_168(40);
		else
			func_168(39);

	num = 0;

	if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) && outData.f_2 == joaat("CLOTHING") && func_169(Global_35, hParam0, &num))
		func_170(Global_35, hParam0, 0, -358215195, true, true, true, false, true, false);

	return;
}

void func_87() // Position - 0x4585 Hash - 0xD68DA6F1 ^0xD68DA6F1
{
	if (func_171())
		func_172(1);

	return;
}

BOOL func_88(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x4599 Hash - 0x775608 ^0x775608
{
	var unk;
	var unk2;
	var unk3;

	return func_128(hParam0, hParam1, &unk, &unk2, &unk3, bParam2, bParam3, iParam4, bParam5);
}

BOOL func_89(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x45B7 Hash - 0xA192589E ^0xA192589E
{
	var unk;

	unk = { func_148(hParam0, false, false) };
	return func_149(hParam0, &unk, iParam1, false, bParam2);
}

BOOL func_90(var uParam0, float fParam1) // Position - 0x45D8 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_95(uParam0))
		return false;

	if (func_173(uParam0) > fParam1)
		return true;

	return false;
}

void func_91(BOOL bParam0) // Position - 0x45FF Hash - 0x210BBB81 ^0x210BBB81
{
	if (func_36(bParam0))
		Global_1392040 = Global_1392040 - Global_1392040 && bParam0;

	return;
}

void func_92(var uParam0) // Position - 0x4620 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_93(int iParam0, BOOL bParam1) // Position - 0x4636 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_70(iParam0))
		return false;

	num = func_106(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

BOOL func_94(int iParam0, BOOL bParam1) // Position - 0x468E Hash - 0x21336878 ^0xD8C1D129
{
	int num;

	if (bParam1 && !func_70(iParam0))
		return false;

	num = func_106(iParam0);

	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1945188[num /*18*/].f_3))
		return PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_1945188[num /*18*/].f_4);

	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1945188[num /*18*/].f_3);
}

BOOL func_95(var uParam0) // Position - 0x46E5 Hash - 0x5001E582 ^0x5001E582
{
	return func_174(*uParam0, 1);
}

void func_96(var uParam0) // Position - 0x46F5 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_175(uParam0, 0f);
	return;
}

void func_97(var uParam0) // Position - 0x4704 Hash - 0x821EA126 ^0x3BB75305
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_63))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_63, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_65))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_65, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_66))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_66, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_67))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_67, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_68))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_68, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_69))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_69, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_70))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_70, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_71))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_71, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_72))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_72, 0);

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
		OBJECT::DELETE_OBJECT(&(uParam0->f_87));

	return;
}

void func_98(Hash hParam0, int iParam1) // Position - 0x47F9 Hash - 0x78C9A5D2 ^0x78C9A5D2
{
	int i;

	for (i = 0; i < iParam1; i = i + 1)
	{
		func_176(11, true, 0);
	}

	if (func_121(hParam0, 0))
		func_177(40);
	else
		func_177(39);

	return;
}

BOOL func_99(int iParam0) // Position - 0x4838 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_100(BOOL bParam0) // Position - 0x4876 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_101(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x4889 Hash - 0x6C0BC7C7 ^0x6C0BC7C7
{
	int i;
	int num;
	float num2;
	float num3;

	num = -1;
	num2 = 100000000f;

	for (i = 0; i < 12; i = i + 1)
	{
		if (!bParam3 || func_178(i))
		{
			num3 = func_179(i, uParam0);
		
			if (num3 < num2)
			{
				num = i;
				num2 = num3;
			}
		}
	}

	return num;
}

BOOL func_102(int iParam0, int iParam1) // Position - 0x48DE Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_103(var uParam0) // Position - 0x48FF Hash - 0x134A277F ^0x7242F0C4
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_63);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_65);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_66);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_67);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_68);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_69))
	{
		uParam0->f_69 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_69);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_70))
	{
		uParam0->f_70 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_70);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_71))
	{
		uParam0->f_71 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_71);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_72))
	{
		uParam0->f_72 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_72);
	}

	return;
}

BOOL func_104(const char* sParam0) // Position - 0x4A5D Hash - 0x38726239 ^0x48BDE31D
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

BOOL func_105(var uParam0, var uParam1) // Position - 0x4A6C Hash - 0xCF1CBCB4 ^0xBBBBD5D9
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
		func_103(uParam0);
		return false;
	}

	return true;
}

int func_106(int iParam0) // Position - 0x4AB6 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

int func_107(var uParam0, int iParam1) // Position - 0x4AC0 Hash - 0x55C2A1B3 ^0xA4CE5F7D
{
	var unk;
	int num;
	int num2;
	int i;
	Hash hash;

	unk = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, iParam1, 0, -1, Global_1911914.f_1584, 0) };

	if (func_137(unk, &num, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			hash = func_138(i, num);
		
			if (func_21(hash, 0))
			{
				if (uParam0->f_55 >= 175)
					break;
			
				if (Global_1911914.f_1584 == 0 && func_77(hash, 302810039))
				{
					if (!(Global_1911914.f_1585 != 0 && func_77(hash, Global_1911914.f_1585)))
					{
					}
					else if (func_77(hash, 266762988))
					{
					}
					else
					{
						func_180(uParam0, hash, iParam1);
						func_181(uParam0, hash, iParam1);
					}
				}
			
				if (func_77(hash, 266762988))
				{
				}
				else
				{
					func_180(uParam0, hash, iParam1);
					func_181(uParam0, hash, iParam1);
				}
			}
		}
	
		func_182(&num);
		return 1;
	}

	return 0;
}

Hash func_108(int iParam0) // Position - 0x4B9E Hash - 0xD9CACD5C ^0xC5E4F827
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

void func_109(var uParam0, const char* sParam1, var uParam2) // Position - 0x4C03 Hash - 0xAF661474 ^0x14E18F92
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_39, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
	return;
}

void func_110(var uParam0, BOOL bParam1, Hash hParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x4C6C Hash - 0xEA985CC9 ^0x769B0F99
{
	Hash hash;

	hash = Global_1911914[hParam2 /*9*/].f_6;

	if (bParam4 || func_121(hash, uParam0->f_52))
	{
		if (bParam1)
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1911914[hParam2 /*9*/].f_1))
			{
				if (bParam5)
					func_114(uParam0, -1, bParam3, Global_1911914[hParam2 /*9*/].f_1, true, false, true);
			
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_40, uParam0->f_56, joaat("crafting_list_item"), Global_1911914[hParam2 /*9*/].f_1);
			}
			else
			{
				func_183(uParam0, hParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1911914[hParam2 /*9*/].f_1))
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1911914[hParam2 /*9*/].f_1);
		
			func_183(uParam0, hParam2, false, bParam3);
		}
	
		if (uParam0->f_56 == 0)
		{
			uParam0->f_75 = Global_1911914[hParam2 /*9*/].f_6;
			uParam0->f_76 = Global_1911914[hParam2 /*9*/].f_5;
			uParam0->f_74 = Global_1911914[hParam2 /*9*/].f_1;
		}
	
		uParam0->f_56 = uParam0->f_56 + 1;
	}

	return;
}

void func_111(int iParam0) // Position - 0x4D59 Hash - 0x407EDD13 ^0x2C8A0432
{
	Global_1347477.f_118 = iParam0;
	Global_1347477.f_6 = iParam0;
	return;
}

void func_112(BOOL bParam0) // Position - 0x4D71 Hash - 0xA895CE6F ^0xA895CE6F
{
	if (!func_36(bParam0))
		Global_1392040 = Global_1392040 || bParam0;

	return;
}

void func_113(int iParam0, int iParam1) // Position - 0x4D8E Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_114(var uParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x4DA7 Hash - 0xCD6168C8 ^0xD1E30079
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

	entryId = Global_1911914[iParam1 /*9*/].f_1;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(entryId))
		return;

	hash = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(entryId, "eOutputItem");
	hash2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(entryId, "eCost");
	key = hash;
	hash3 = hash2;
	num = func_131(key, hash3, bParam2, false);
	num2 = func_129(key, false, false);
	num3 = func_130(key, false);

	if (num3 != -1)
		num3 = num3 - num2;
	else
		num3 = num;

	TEXT_LABEL_APPEND_INT(&unk, func_132(num3, num), 8);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(entryId, "count", &unk);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(entryId, "visible", false);

	if (func_36(4096))
		num4 = num3 > 0 && num > 0 && func_53(key, 1697966752) == 337650881 ? 1 : 0;
	else if (func_36(8192))
		num4 = num3 > 0 && num > 0 && key == joaat("consumable_potent_predator_bait") ? 1 : 0;
	else
		num4 = num3 > 0 && num > 0 ? 1 : 0;

	flag = false;

	if (num4 == 0 && func_185(key))
	{
		if (func_186(key, hash3, uParam0, bParam2, &hash4, &hash5, &num5))
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

	if (!uParam0->f_31)
		if (hash3 == -214678071 || hash3 == joaat("cost_crafting_grill") || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(entryId, "bFireCrafting"))
			num4 = 0;
	else if (!uParam0->f_32 && hash3 == joaat("cost_crafting_grill"))
		num4 = 0;

	if (!Global_1911914.f_1579 && func_124(key, hash3, true))
	{
		num4 = 0;
		flag2 = true;
	}

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(entryId, "lockVisible", flag2);

	if (num4 == 1)
	{
		if (!uParam0->f_83 || uParam0->f_84 > 0 && func_53(key, -1636519629) == -701492487)
		{
			Global_1911914[iParam1 /*9*/].f_2 = 0;
			num4 = 0;
		}
		else
		{
			Global_1911914[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		if (uParam0->f_57 && num4 == 0 && Global_1911914[iParam1 /*9*/].f_2 && bParam4)
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_40, entryId);
	
		Global_1911914[iParam1 /*9*/].f_2 = 0;
	}

	if (bParam5)
	{
		if (func_187(key, &str, joaat("Inventory"), 0, 0, 0))
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

	if (!uParam0->f_31)
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(entryId, "bFireCrafting"))
			num4 = 0;

	if (flag && !bParam6)
		num4 = 0;

	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "enabled", num4);
	return;
}

Ped func_115(Ped pedParam0) // Position - 0x53B5 Hash - 0x2F4187EE ^0xDD4F0EB9
{
	if (!PED::IS_PED_INJURED(pedParam0))
		return PED::GET_MOUNT(pedParam0);

	return 0;
}

void func_116(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x53D1 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = volParam11;
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_5 = iParam12;
	Global_1945188[iParam0 /*18*/].f_1 = 2;
	Global_1945188[iParam0 /*18*/].f_17 = -1;
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
			HUD::_UI_PROMPT_SET_MASH_MODE(prompt, iParam17);
			break;
	
		case 8:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, iParam16, iParam17);
			break;
	
		case 9:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 11:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, iParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 10, true);
			break;
	
		case 15:
			HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, 0.5f, 0.1f, 0);
			break;
	}

	HUD::_UI_PROMPT_REGISTER_END(prompt);
	Global_1945188[iParam0 /*18*/].f_3 = prompt;
	func_118(iParam0, true);
	func_119(iParam0, true);
	func_120(iParam0, 128);
	return;
}

void func_117(int iParam0, int iParam1) // Position - 0x5677 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_118(int iParam0, BOOL bParam1) // Position - 0x56AA Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_102(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_119(int iParam0, BOOL bParam1) // Position - 0x5702 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_120(int iParam0, int iParam1) // Position - 0x572B Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

BOOL func_121(Hash hParam0, int iParam1) // Position - 0x5753 Hash - 0xB51BEA17 ^0xA0420D6A
{
	int num;

	if (!func_21(hParam0, 0))
		return false;

	num = func_127(hParam0);

	switch (iParam1)
	{
		case 0:
			if (func_51(hParam0) || func_53(hParam0, -1636519629) == -701492487)
				return true;
			break;
	
		case 1:
			if (func_77(hParam0, -537818634) || func_77(hParam0, -458578204) && !func_77(hParam0, -1242251796))
				return true;
			break;
	
		case 2:
			if (num == joaat("AMMO"))
			{
				if (func_77(hParam0, -1588156645))
					return false;
			
				return true;
			}
			break;
	
		case 3:
			if (num == joaat("WEAPON"))
				return true;
			else if (num == joaat("AMMO"))
				if (func_77(hParam0, -1588156645))
					return true;
			break;
	
		case 4:
			if (func_77(hParam0, 127710288))
				return true;
			break;
	
		case 5:
			if (func_77(hParam0, -1242251796))
				return true;
			break;
	}

	return false;
}

char* func_122(var uParam0) // Position - 0x587A Hash - 0x5686B447 ^0x5686B447
{
	return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
}

char* func_123(var uParam0) // Position - 0x5885 Hash - 0xEB40D7A4 ^0xC0ABDC26
{
	return "craft_trans_stow";
}

BOOL func_124(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x5891 Hash - 0xEAB06984 ^0xE37CC970
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	unk = 10;

	if (bParam2 && func_23() == false && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return false;

	if (!func_188(hParam0, hParam1, &unk, &num) || num < 1)
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

Hash func_125(Hash hParam0) // Position - 0x5910 Hash - 0xA730B7B8 ^0x90C575E3
{
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
		return outData.f_1;

	return 0;
}

void func_126(var uParam0) // Position - 0x593B Hash - 0xE11C13ED ^0x543FF68C
{
	if (func_77(uParam0->f_77, 1147021565) && !func_77(uParam0->f_77, 1919582297))
	{
		if (func_121(uParam0->f_77, 5))
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_77, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", false);
		}
		else
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_77, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", true);
		}
	}
	else
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", false);
	}

	return;
}

int func_127(Hash hParam0) // Position - 0x59DC Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_21(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_128(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x5A07 Hash - 0x9A4CDF09 ^0x9A4CDF09
{
	var unk;

	*uParam2 = 0;
	*uParam3 = 0;

	if (!func_21(hParam0, 0))
		return 0;

	if (!Global_1911914.f_1579 && func_124(hParam0, hParam1, true) && !bParam5)
		return 0;

	if (!func_189(hParam0, 1, hParam1, &unk, uParam4, bParam6, iParam7, bParam8))
	{
		*uParam2 = unk;
		*uParam3 = unk.f_1;
		return 0;
	}

	return 1;
}

int func_129(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5A73 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_21(hParam0, 0))
		return 0;

	num = func_127(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_190(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_191(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_147(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

int func_130(Hash hParam0, BOOL bParam1) // Position - 0x5AF5 Hash - 0x71A176E6 ^0x71A176E6
{
	var unk;

	unk = { func_148(hParam0, false, false) };
	return func_192(hParam0, &unk, false, bParam1);
}

int func_131(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5B14 Hash - 0x16BA3146 ^0x16BA3146
{
	var unk;
	int num;
	int i;
	BOOL flag;
	int num2;
	int num3;
	int num4;

	unk = 15;

	if (!func_193(hParam0, hParam1, &unk, &num, bParam3, false))
		return 0;

	flag = func_80(false);
	num2 = -1;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		num3 = func_129(unk[i /*2*/], false, false);
	
		if (flag)
		{
			if (func_194(unk[i /*2*/]) || func_195(unk[i /*2*/]))
			{
				num3 = num3 + func_196(unk[i /*2*/], 0);
			
				if (bParam2)
				{
					num4 = 0;
					num3 = num3 + func_197(7, unk[i /*2*/], &num4);
				}
			}
			else if (bParam2)
			{
				num3 = num3 + func_198(7, unk[i /*2*/]) + func_199(unk[i /*2*/]);
			}
		}
	
		if (num3 < unk[i /*2*/].f_1)
			return 0;
	
		num3 = num3 / unk[i /*2*/].f_1;
	
		if (num2 == -1 || num3 < num2)
			num2 = num3;
	}

	return num2;
}

int func_132(int iParam0, int iParam1) // Position - 0x5C19 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_133(Hash hParam0, Hash hParam1, var uParam2, Entity eParam3, BOOL bParam4) // Position - 0x5C2F Hash - 0x61416B57 ^0xD7512144
{
	var unk;
	Hash hash;
	int num;
	int i;
	BOOL flag;
	BOOL flag2;
	const char* str;
	int num2;
	BOOL flag3;
	int num3;
	const char* str2;
	var unk34;
	int num4;
	int num5;
	int num6;
	var unk36;
	int num7;

	unk = 15;
	flag = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_51);

	for (i = 0; i < 4; i = i + 1)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_51, uParam2->f_46[i]);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[i], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[i], "inUse", false);
	}

	if (!bParam4 && func_193(hParam0, hParam1, &unk, &num, true, false))
	{
		flag2 = func_84();
	
		for (i = 0; i < num; i = i + 1)
		{
			if (i >= 4)
				break;
		
			hash = unk[i /*2*/];
		
			if (func_21(hash, 0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[i], "visible", true);
			
				if (func_187(hash, &str, joaat("Inventory"), 0, 0, 0))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_41[i], "texture", str);
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_41[i], "textureDictionary", str.f_1);
				}
			
				num2 = func_129(hash, false, false);
			
				if (func_194(hash) || func_195(hash))
				{
					if (flag2)
					{
						num3 = 0;
						num2 = num2 + func_197(7, hash, &num3);
					}
				
					num2 = num2 + func_196(hash, 0);
				}
			
				flag3 = num2 >= unk[i /*2*/].f_1;
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_41[i], "count", num2);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_41[i], "enabled", flag3 ? 1 : 0);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[i], "inUse", true);
			
				if (!flag3)
					flag = false;
			
				str2 = MISC::VAR_STRING(10, "CRFT_ING_LIST", MISC::VAR_STRING(0, unk[i /*2*/]), unk[i /*2*/].f_1);
				TEXT_LABEL_ASSIGN_STRING(&unk34, "Text", 16);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_46[i], &unk34, str2);
				TEXT_LABEL_ASSIGN_STRING(&unk34, "Enabled", 16);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_46[i], &unk34, flag3 ? 1 : 0);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_51, -1, joaat("crafting_recipe_line"), uParam2->f_46[i]);
			}
		}
	}

	if (flag)
	{
		if (!uParam2->f_31 && uParam2->f_80 || uParam2->f_78 == -214678071 || uParam2->f_78 == joaat("cost_crafting_grill"))
		{
			flag = false;
		
			if (func_51(hParam0))
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			else
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
		}
		else if (!uParam2->f_32 && uParam2->f_78 == joaat("cost_crafting_grill"))
		{
			flag = false;
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_GRLL_CK"));
		}
		else
		{
			num4 = func_129(hParam0, false, false);
			num5 = func_130(hParam0, false);
		
			if (num5 - num4 > 0 || num5 == -1)
			{
				num6 = func_53(hParam0, -1636519629);
			
				if (!uParam2->f_83 && num6 == -701492487)
				{
					flag = false;
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_PERC"));
				}
				else if (num6 == -701492487 && uParam2->f_84 > 0)
				{
					flag = false;
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_PERC_FULL"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(eParam3))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(34, "CRFT_BREAK", 1, MISC::VAR_STRING(0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(eParam3, &unk36))));
				}
				else
				{
					num7 = func_131(hParam0, uParam2->f_78, func_84(), false);
				
					if (uParam2->f_78 == -214678071)
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_73, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_39, "ShowRpgDescription"))
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
						else
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", num7));
					else if (uParam2->f_78 == joaat("cost_crafting_grill"))
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", num7));
					else if (num6 == -701492487)
						if (num7 == 1)
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE1", num7));
						else
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE", num7));
					else
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_HAVE", num7));
				}
			}
			else
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(130, "CRFT_ING_MAX", num4, num5, MISC::VAR_STRING(0, hParam0)));
				flag = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!uParam2->f_31 && uParam2->f_80 || uParam2->f_78 == -214678071 || uParam2->f_78 == joaat("cost_crafting_grill"))
	{
		flag = false;
	
		if (func_51(hParam0))
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		else
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
	}
	else if (!uParam2->f_32 && uParam2->f_78 == joaat("cost_crafting_grill"))
	{
		flag = false;
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_GRLL_CK"));
	}
	else
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_NEED"));
	}

	return flag;
}

int func_134(Hash hParam0) // Position - 0x6167 Hash - 0x5CCC10A7 ^0x7EE6802B
{
	var outData;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_4;
}

void func_135(var uParam0, char* sParam1) // Position - 0x6183 Hash - 0x51CAA743 ^0xF09D0482
{
	int num;

	if (func_70(*uParam0))
	{
		num = func_106(*uParam0);
	
		if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
			HUD::_UI_PROMPT_SET_TAG(Global_1945188[num /*18*/].f_3, sParam1);
	}

	return;
}

struct<10> func_136(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x61BF Hash - 0x440EE211 ^0xAE2816F9
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

	if (hParam4 != 0)
		num.f_4 = hParam4;

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

BOOL func_137(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x6293 Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

Hash func_138(int iParam0, int iParam1) // Position - 0x62B4 Hash - 0x3644D28E ^0x6DB2088F
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

int func_139(int iParam0) // Position - 0x62F7 Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_140(var uParam0) // Position - 0x6318 Hash - 0xFC240FAD ^0x14E7E567
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", false);
	return;
}

void func_141(var uParam0) // Position - 0x633A Hash - 0xB5418D4E ^0xB732267F
{
	Any any;

	any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_39, "filterIndex");
	uParam0->f_52 = any;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "filter", func_108(uParam0->f_52));
	return;
}

Hash func_142(Hash hParam0) // Position - 0x636A Hash - 0xC7D3E371 ^0x1A86A7E7
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

Vector3 func_143(Hash hParam0) // Position - 0x63DC Hash - 0x5EE95BA7 ^0x439E1731
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

void func_144(int iParam0) // Position - 0x6452 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_200(iParam0))
		return;

	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_DELETE(Global_1945188[iParam0 /*18*/].f_3);

	Global_1945188[iParam0 /*18*/].f_4 = 0;
	Global_1945188[iParam0 /*18*/] = 1;
	Global_1945188[iParam0 /*18*/].f_16 = 0;
	Global_1945188[iParam0 /*18*/].f_1 = 0;
	Global_1945188[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_9 = 0f;
	Global_1945188[iParam0 /*18*/].f_10 = 0;
	Global_1945188[iParam0 /*18*/].f_11 = 0;
	Global_1945188[iParam0 /*18*/].f_2 = 1;
	Global_1945188[iParam0 /*18*/].f_15 = -1f;
	return;
}

BOOL func_145(Hash hParam0) // Position - 0x6505 Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_146(Hash hParam0) // Position - 0x652D Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return 0;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return 1;

	return 0;
}

int func_147(BOOL bParam0) // Position - 0x6555 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_23() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<5> func_148(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6596 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_201(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_127(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_209(hParam0, -1823706425))
			{
				unk = { func_202(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_209(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_202(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
		
			[[fallthrough]];
	
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -813824107;
			unk = { func_207(bParam1) };
		
			switch (func_208(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case 664784405:
					unk.f_4 = -1150938404;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_DANCES"):
					unk.f_4 = -1756997214;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk = { func_202(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_203(bParam1) };
		
			if (bParam2 && func_204(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_205(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_205(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_206(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_210(unk, &unk28, bParam1, false))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
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

BOOL func_149(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6853 Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_211(&hParam0);

	if (!func_21(hParam0, 0))
		return false;

	if (!func_80(false))
		bParam3 = true;

	if (func_212(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_203(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_205(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return false;
			else if (func_206(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return false;
		
			if (func_204(hParam0, true))
				if (!func_205(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return false;
				else if (func_206(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return false;
		}
		else if (!func_213(hParam0, &unk27, false))
		{
			return false;
		}
	
		return true;
	}

	num = func_192(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return false;
	else if (num == 0)
		return true;

	if (bParam3 || !func_214(hParam0))
		inventoryItemCountWithItemid = func_215(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_147(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return true;

	return false;
}

struct<17> func_150(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6) // Position - 0x6998 Hash - 0x2CC323E3 ^0xBABDE2C6
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk.f_4 = { uParam1 };
	unk = { func_202(hParam0, unk.f_4, hParam5, true) };
	unk.f_8 = hParam0;
	unk.f_9 = iParam6;
	unk.f_11 = hParam5;
	return unk;
}

int func_151(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x69E7 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_216(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_217(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_217(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17))
	{
		func_217(num, 1);
		return num;
	}

	return -1;
}

void func_152(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x6A6E Hash - 0xB03E660F ^0x8AE6A7CA
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1223212; i = i + 1)
	{
		if (Global_1223212.f_1[i /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[i /*9*/].f_1 == 1 || Global_1223212.f_1[i /*9*/].f_1 == 5)
				Global_1223212.f_1[i /*9*/].f_2 = { uParam1 };
		
			return;
		}
	}

	return;
}

struct<2> func_153(Hash hParam0) // Position - 0x6AE0 Hash - 0x8E94575A ^0xD328884E
{
	return func_167(joaat("MADE"), hParam0);
}

void func_154(int iParam0, BOOL bParam1) // Position - 0x6AF3 Hash - 0x23556CE7 ^0xE508C6D9
{
	int num;

	if (bParam1 && !func_70(iParam0))
		return;

	num = func_106(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[num /*18*/].f_3);
	return;
}

int func_155(int iParam0) // Position - 0x6B25 Hash - 0x84332977 ^0x8811826E
{
	int i;

	if (iParam0 == -1)
		return 0;

	for (i = 0; i < Global_1223212; i = i + 1)
	{
		if (Global_1223212.f_1[i /*9*/] == iParam0)
			return Global_1223212.f_1[i /*9*/].f_1;
	}

	return 0;
}

Ped func_156(int iParam0) // Position - 0x6B6B Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_218(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

float func_157(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x6B97 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));

	return func_219(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));
}

int func_158(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x6BEE Hash - 0x7DBC2191 ^0x7DBC2191
{
	var unk;
	Hash hash;
	Hash hash2;
	int num;
	var unk33;
	int i;
	int num2;
	int num3;
	Hash hash3;

	if (!func_80(false))
		return 0;

	if (iParam4 != 0)
		bParam3 = false;

	unk = 15;

	if (!func_189(hParam0, 1, hParam1, &hash, &unk33, bParam3, iParam4, true))
	{
		hash2 = hash;
		return 0;
	}

	if (func_193(hParam0, hParam1, &unk, &num, true, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			hash2 = unk[i /*2*/];
		
			if (func_21(hash2, 0))
			{
				if (hash2 == joaat("currency_cash"))
				{
					func_220(unk[i /*2*/].f_1, 0, 0, bParam2, 1);
				}
				else if (bParam3)
				{
					if (func_194(hash2) || func_195(hash2))
					{
						if (!func_221(hash2, unk[i /*2*/].f_1, false))
							num2 = func_222(7, hash2, unk[i /*2*/].f_1);
					
						func_223(hash2, num2, 562618531, false, false);
						unk[i /*2*/].f_1 = unk[i /*2*/].f_1 - num2;
					
						if (unk[i /*2*/].f_1 > 0)
						{
							if (!func_221(hash2, unk[i /*2*/].f_1, false))
								func_224(hash2, unk[i /*2*/].f_1);
						
							if (func_221(hash2, unk[i /*2*/].f_1, false))
								func_225(hash2, unk[i /*2*/].f_1, bParam2, -142743235, false);
						}
					}
					else
					{
						if (func_199(hash2) > 0)
						{
							func_226(hash2);
							unk[i /*2*/].f_1 = unk[i /*2*/].f_1 - 1;
						}
					
						if (unk[i /*2*/].f_1 > 0)
						{
							if (func_198(7, hash2) > 0)
							{
								func_227(7, hash2, unk[i /*2*/].f_1);
								unk[i /*2*/].f_1 = unk[i /*2*/].f_1 - func_227(7, hash2, unk[i /*2*/].f_1);
							}
						}
					
						if (unk[i /*2*/].f_1 > 0)
							func_225(hash2, unk[i /*2*/].f_1, bParam2, 562618531, false);
					}
				}
				else if (iParam4 == 0)
				{
					if (func_194(hash2) || func_195(hash2))
						if (!func_221(hash2, unk[i /*2*/].f_1, false))
							func_224(hash2, unk[i /*2*/].f_1);
				
					func_225(hash2, unk[i /*2*/].f_1, bParam2, 562618531, false);
				}
				else
				{
					func_228(hash2, iParam4, unk[i /*2*/].f_1, 562618531);
				}
			
				num3 = func_229(&hash2);
			
				if (func_230(num3))
				{
					hash3 = func_231(num3);
					func_160(func_167(joaat("used_in_recipe"), hash3), unk[i /*2*/].f_1);
				}
			}
		}
	
		return 1;
	}

	return 0;
}

struct<2> func_159(int iParam0) // Position - 0x6E6E Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_160(var uParam0, var uParam1, int iParam2) // Position - 0x6E80 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

Hash func_161(Hash hParam0, BOOL bParam1) // Position - 0x6E90 Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_21(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_162(Hash hParam0) // Position - 0x6EBC Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_232(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_163(Hash hParam0, BOOL bParam1) // Position - 0x6EF6 Hash - 0x148943C8 ^0x2BF2CC5F
{
	var unk;
	var unk6;
	var unk10;
	var unk11;
	var unk16;

	if (!func_21(hParam0, 0))
		return false;

	if (!func_233(hParam0, 856287005, &unk10, &unk6, &unk, true, 0))
		return false;

	unk11 = { func_234() };
	unk11.f_4 = unk10;

	if (func_235(hParam0, &unk16, &unk11, 1, 752097756, false))
	{
		if (bParam1)
			!func_236(hParam0, 1);
	
		if (func_237(hParam0))
			func_163(func_238(hParam0), true);
	
		func_239();
		return true;
	}

	return false;
}

void func_164(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6F79 Hash - 0xB6CF78C ^0x845E9244
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	char* str;
	Hash hash;
	int num3;
	int num4;
	char* str2;
	int num5;
	const char* str3;

	if (hParam0 == joaat("ammo_moonshinejug"))
		return;

	if (!func_21(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_240())
	{
		func_241(hParam0, iParam1, bParam2, bParam4);
		return;
	}

	flag = false;
	num = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
			TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		else if (bParam2 && func_243(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_127(hParam0);
	hash = 0;
	num3 = joaat("Inventory");

	if (num2 == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver"))
	{
		hash = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	if (num2 == joaat("weapon_mod") || num2 == joaat("weapon_decoration"))
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_187(hParam0, &str, num3, hash, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num4 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	num5 = 0;

	if (flag)
	{
		num4 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num5 = 1;
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_rpg_special_1");
		else
			num4 = joaat("color_yellowdark");

	str3 = func_245(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_244(hParam0)), num), num4);

	if (iParam1 == 1 || func_77(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_244(hParam0));

	func_246(str3, str.f_1, MISC::GET_HASH_KEY(str), num5, num4, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

int func_165(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0x71CE Hash - 0x11449F01 ^0x11449F01
{
	int value;
	Hash ammoTypeForWeapon;
	Hash lootTableKey;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	Hash collectableSubcategory;
	int num;
	Hash hash2;
	Hash hash3;
	Hash hash4;
	int num2;
	int i;
	var statId;
	BOOL flag3;

	if (!func_21(hParam0, 0))
		return 0;

	if (!func_247(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_248(hParam0, &value, iParam1))
		return 0;

	func_249(hParam0, bParam2);
	lootTableKey = 0;

	if (func_129(hParam0, false, false) == 0)
	{
		if (func_250(hParam0))
		{
			hash = func_251(hParam0);
			collectableSubcategory = func_252(hash);
			num = func_253(collectableSubcategory) + 1;
			func_254(hash);
		
			if (func_255(38))
				func_256(483, false);
			else
				func_256(482, false);
		
			if (num == func_257(collectableSubcategory))
			{
				func_165(func_258(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_259() && func_260(4))
				{
					if (func_259() && func_261(38) || func_255(38))
					{
						func_263(38, func_258(collectableSubcategory), 0, 0, func_262(), false, -1, false);
						func_264(2);
					}
					else
					{
						func_263(38, func_258(collectableSubcategory), 0, 0, func_262(), false, -1, false);
						func_264(1);
					}
				}
			}
			else if (func_259() && func_260(4))
			{
				if (func_259() && func_261(38) || func_255(38))
				{
					func_263(38, 0, 0, 0, func_262(), false, -1, false);
					func_264(2);
				}
				else
				{
					func_263(38, 0, 0, 0, func_262(), false, -1, false);
					func_264(1);
				}
			}
		
			if (func_259() && func_260(4))
				if (!Global_1914319.f_17376)
					if (func_259() && func_261(38) || func_255(38))
						func_265(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_265(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_127(hParam0) == joaat("CLOTHING"))
		if (!func_77(hParam0, 866047851) && !func_77(hParam0, -1979000645) && !func_77(hParam0, 1248798204))
			flag = true;

	if (func_243(hParam0, 8388608) && !func_266(28))
		func_267(28);

	if (!flag)
	{
		if (func_77(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_208(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_161(func_78(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_23() == -1)
						func_162(ammoTypeForWeapon);
				
					if (func_80(false) && func_268(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_269(hParam0, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
			else
			{
				ammoTypeForWeapon = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
			
				if (WEAPON::_IS_AMMO_VALID(ammoTypeForWeapon))
				{
					if (func_23() == -1)
						func_162(hParam0);
				
					if (func_80(false) && func_268(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_269(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_127(hParam0) == joaat("WEAPON"))
		{
			if (!func_270(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_127(hParam0) == joaat("AMMO") && func_271(hParam0))
		{
			if (!func_272(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_77(hParam0, 866047851))
		{
			func_273(hParam0);
		}
		else if (func_77(hParam0, 2000026003))
		{
			func_274(hParam0);
		}
		else if (func_77(hParam0, -103750053))
		{
			func_160(func_159(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_160(func_167(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_77(hParam0, -121341956) && !func_77(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_275(Global_1835011[4 /*74*/].f_1, true))
					func_256(498, false);
		
			if (func_77(hParam0, -2017733358) || func_77(hParam0, -1369131378))
				func_276(hParam0);
		}
		else if (func_77(hParam0, -136654233))
		{
			if (func_77(hParam0, -1021472396))
			{
			}
		}
		else if (func_77(hParam0, -1466706512) && func_77(hParam0, 1147021565))
		{
			func_256(484, false);
		}
		else if (func_77(hParam0, 1147021565) && func_77(hParam0, -524514947))
		{
		}
		else if (func_77(hParam0, 554195525))
		{
		}
		else if (func_77(hParam0, 589988438))
		{
			if (func_277())
			{
				func_278(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_77(hParam0, 787083290) && func_77(hParam0, 949916894))
		{
			func_279(hParam0);
		}
		else if (func_77(hParam0, -1718133314))
		{
			func_280(hParam0);
		}
		else if (func_77(hParam0, -1738650224))
		{
			func_281(hParam0);
		}
		else if (func_77(hParam0, -1112814642) && func_77(hParam0, 949916894))
		{
			func_282(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_77(hParam0, 1841149704))
		{
			func_283();
		}
		else if (func_77(hParam0, 606799272))
		{
			func_284(hParam0, iParam1);
			func_285(hParam0);
		}
		else if (func_77(hParam0, -1112814642) && func_77(hParam0, -1697809989))
		{
			func_286(hParam0, 0, false, false);
		}
		else if (func_77(hParam0, -2017733358) || func_77(hParam0, -1369131378))
		{
			func_276(hParam0);
		}
		else if (func_77(hParam0, -1921346699))
		{
			if (func_23() != -1)
				return 0;
		
			func_287(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_77(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_221(471514780, 1, false))
						func_165(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_221(526074061, 1, false))
						func_165(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_221(-967317137, 1, false))
						func_165(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_221(670273567, 1, false))
						func_165(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_221(215778062, 1, false))
						func_165(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_221(-1045488665, 1, false))
						func_165(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_77(hParam0, -839724752) && func_243(hParam0, 4))
		{
			if (!func_255(42))
				func_288(hParam0);
		}
		else if (func_77(hParam0, 1399091007))
		{
			func_289(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_77(hParam0, 1248798204))
		{
			hash2 = 0;
		
			switch (hParam0)
			{
				case joaat("clothing_hl_player_satchel_005_1"):
					hash2 = joaat("kit_pouch_provisions");
					break;
			
				case joaat("clothing_hl_player_satchel_002_1"):
					hash2 = joaat("kit_pouch_remedies");
					break;
			
				case joaat("clothing_hl_player_satchel_003_1"):
					hash2 = joaat("kit_pouch_ingredients");
					break;
			
				case joaat("clothing_hl_player_satchel_008_1"):
					hash2 = joaat("kit_pouch_legendary");
					break;
			
				case joaat("clothing_hl_player_satchel_004_1"):
					hash2 = joaat("kit_pouch_kit");
					break;
			
				case joaat("clothing_hl_player_satchel_006_1"):
					hash2 = joaat("kit_pouch_materials");
					break;
			
				case joaat("clothing_hl_player_satchel_007_1"):
					hash2 = joaat("kit_pouch_valuables");
					break;
			}
		
			if (hash2 != 0)
				func_165(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_23() == -1)
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
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_305(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_305(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_305(&func_1, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_296(499813453, joaat("treasure_hunt_loot_01"), false);
				func_297(499813453, false);
				func_298(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_296(390004462, joaat("treasure_hunt_loot_17"), false);
				func_297(390004462, false);
				func_302(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_296(6410548, joaat("treasure_hunt_loot_23"), false);
				func_297(6410548, false);
				func_303(8);
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
		
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_296(6410548, joaat("treasure_hunt_loot_22"), false);
				func_297(6410548, false);
				func_303(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_267(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_170(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_290(&hash3, false))
					func_268(hash3, 0, false, bParam4, 3, false, 752097756, false);
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
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_305(&func_1, 1934060482, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
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
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_305(&func_1, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_256(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_296(6410548, joaat("treasure_hunt_loot_21"), false);
				func_297(6410548, false);
				func_303(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_256(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_165(func_306(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_165(func_307(), 1, false, false, false, 752097756, 0, 0, 0, false);
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
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_305(&func_1, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_296(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_297(-220219788, false);
				func_300(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_266(1))
					func_256(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_296(666607663, joaat("treasure_hunt_loot_07"), false);
				func_297(666607663, false);
				func_299(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_304(241, func_244(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_296(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_297(-220219788, false);
				func_300(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_304(242, func_244(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_256(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_304(240, func_244(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_296(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_297(-220219788, false);
				func_300(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_296(390004462, joaat("treasure_hunt_loot_16"), false);
				func_297(390004462, false);
				func_302(1);
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
		
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_296(499813453, joaat("treasure_hunt_loot_03"), false);
				func_297(499813453, false);
				func_298(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_296(666607663, joaat("treasure_hunt_loot_06"), false);
				func_297(666607663, false);
				func_299(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_296(218622660, joaat("treasure_hunt_loot_14"), false);
				func_297(218622660, false);
				func_301(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_296(666607663, joaat("treasure_hunt_loot_05"), false);
				func_297(666607663, false);
				func_299(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_23() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_170(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_296(218622660, joaat("treasure_hunt_loot_13"), false);
				func_297(218622660, false);
				func_301(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_296(6410548, joaat("treasure_hunt_loot_20"), false);
				func_297(6410548, false);
				func_303(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_256(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_256(491, false);
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
		
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_296(499813453, joaat("treasure_hunt_loot_02"), false);
				func_297(499813453, false);
				func_298(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_256(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_291();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_292();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_293();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_294();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_295();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_296(390004462, joaat("treasure_hunt_loot_18"), false);
				func_297(390004462, false);
				func_302(4);
				break;
		
			default:
				break;
		}
	}

	if (!flag2)
	{
		if (value <= 0)
			return 0;
	
		hash4 = hParam0;
		func_308(&hash4);
	
		if (!func_309(hash4, value, hParam5))
			return 0;
		else if (!func_80(false))
			return 1;
	
		if (func_127(hParam0) == joaat("CLOTHING"))
			func_310(hParam0);
	
		if (func_77(hParam0, -1979000645))
			func_311(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_80(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_165(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_312(lootTableKey, 0);
		}
	}

	statId = { func_313(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_314(hParam0);

	if (iParam6 > 0f)
	{
		if (func_77(hParam0, -839724752))
			func_315(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_164(hParam0, value, false, flag3, false);
	}

	return 1;
}

int func_166(Hash hParam0, int iParam1, int iParam2) // Position - 0x846A Hash - 0xC758F57F ^0x801747D0
{
	int num;
	var unk;
	var unk6;

	if (!func_316(hParam0, iParam1))
		return 0;

	if (iParam1 == 1)
	{
		if (func_317(hParam0) && func_318(hParam0))
		{
			num = 0;
		
			if (func_319(hParam0, 369710026, &num))
				iParam2 = num;
		}
	}

	unk.f_4 = func_320(iParam1);
	unk = { func_201(false) };

	if (!func_235(hParam0, &unk6, &unk, iParam2, 752097756, true))
		return 0;

	return 1;
}

struct<2> func_167(int iParam0, Hash hParam1) // Position - 0x84E1 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = hParam1;
	return num;
}

void func_168(int iParam0) // Position - 0x84F7 Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_23() != -1)
		return;

	num = func_321(iParam0);
	value = func_322(iParam0);

	if (Global_1347477.f_117 || !func_266(31) || !func_323(num))
		return;

	if (value <= 0f)
		return;

	if (func_324(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_325(num, Global_40.f_11095.f_11[num] + value, false);
	func_246(MISC::VAR_STRING(6, func_326(iParam0), value), "itemtype_textures", func_327(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

BOOL func_169(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x85F6 Hash - 0x4FC4FA99 ^0x540DBE26
{
	var unk;
	BOOL isMP;
	BOOL metaPedType;
	Hash hash;
	int num;
	int num2;
	int num3;
	BOOL flag;
	Hash componentHash;
	int num4;
	int num5;
	int numComponentsInPed;

	if (!func_21(hParam1, 0))
		return false;

	if (func_127(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_23() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_208(hParam1) == -999503751)
		return true;

	num = func_328(hParam1);

	if (num == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_77(hParam1, 866047851))
	{
		num2 = func_329(num, 1);
	
		if (func_330(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num2 /*3*/] != componentHash)
		{
			*uParam2 = -265166256;
			return false;
		}
	
		flag = true;
	}

	switch (num)
	{
		case -1944638739:
			num2 = 35;
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_77(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_331(1868067663, &unk))
			{
				*uParam2 = 939463734;
				return false;
			}
		
			[[fallthrough]];
	
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!flag)
				break;
		
			numComponentsInPed = PED::_GET_NUM_COMPONENTS_IN_PED(pedParam0);
			num5 = func_332(componentHash, num, metaPedType, isMP);
			num4 = func_332(Global_1946054.f_1497.f_1[num2 /*3*/], num, metaPedType, isMP);
		
			if ((numComponentsInPed + num5) - num4 > 31)
			{
				*uParam2 = -1608241763;
				return false;
			}
			break;
	
		case 1742327865:
			if (PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(componentHash, metaPedType, isMP) == joaat("neckties") && PED::_IS_META_PED_USING_COMPONENT(pedParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
		
			num2 = 10;
			hash = func_208(Global_1946054.f_1497.f_1[num2 /*3*/]);
		
			if (flag && hash == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
	
		case 1900541263:
			num2 = 36;
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
		
			if (PED::_IS_META_PED_USING_COMPONENT(pedParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
	
		case 1958421083:
			hash = func_208(hParam1);
			num2 = 36;
			num3 = 35;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_77(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_333(Global_1946054.f_1497.f_1[num2 /*3*/]))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			break;
	}

	*uParam2 = 0;
	return true;
}

int func_170(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x8906 Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_148(hParam1, true, false) };
		iParam3 = func_334(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_335(hParam1, hParam2, func_329(iParam3, 1), bParam4, bParam9))
		return 0;

	func_336(true, func_23() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_338(32768) && hParam1 != Global_1946054.f_57[func_329(iParam3, 1) /*11*/])
			{
				func_339();
				func_337(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_329(iParam3, 1) /*11*/])
				func_337(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_337(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_340(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_337(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_341(0);
			func_342(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_337(19, 0, num, pedParam0, false);
	}

	return 1;
}

BOOL func_171() // Position - 0x8A75 Hash - 0x340E4DFD ^0xEE72B432
{
	return func_343(512);
}

void func_172(int iParam0) // Position - 0x8A84 Hash - 0x78EB69E7 ^0x966F4F68
{
	if (iParam0 <= 0)
		return;

	if (!func_344(471747275))
	{
		Global_40.f_4283.f_307.f_1 = Global_40.f_4283.f_307.f_1 + iParam0;
	
		if (Global_40.f_4283.f_307.f_1 >= 3)
			func_345(471747275);
	}

	return;
}

float func_173(var uParam0) // Position - 0x8AD3 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_95(uParam0))
		return uParam0->f_1;

	if (func_346(uParam0))
		return uParam0->f_2;

	return func_347() - uParam0->f_1;
}

BOOL func_174(int iParam0, int iParam1) // Position - 0x8B08 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_175(var uParam0, float fParam1) // Position - 0x8B17 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_347() - fParam1;
	func_348(uParam0, 1);
	func_349(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_176(int iParam0, BOOL bParam1, int iParam2) // Position - 0x8B3D Hash - 0x3DD75313 ^0x4F77747
{
	if (func_350(255))
		return 1;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_XP")))
		return 0;

	if (!func_351(iParam0))
		return 0;

	if (!func_353(func_352(iParam0), !bParam1, iParam2, 0))
		return 0;

	return 1;
}

int func_177(int iParam0) // Position - 0x8B8A Hash - 0x27E22F13 ^0x27E22F13
{
	if (func_354())
		return 1;

	if (!func_353(func_355(iParam0), false, 255, 0))
		return 0;

	return 1;
}

BOOL func_178(int iParam0) // Position - 0x8BB4 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}

	return false;
}

float func_179(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x8BEA Hash - 0xA3FC3EE3 ^0xE0E564B4
{
	if (func_356(iParam0))
		return BUILTIN::VDIST(VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1), vParam1);

	return 100000000f;
}

void func_180(var uParam0, Hash hParam1, int iParam2) // Position - 0x8C1A Hash - 0xEB834D03 ^0x9E597BFA
{
	Global_1911914[uParam0->f_55 /*9*/].f_5 = iParam2;
	Global_1911914[uParam0->f_55 /*9*/].f_6 = hParam1;
	Global_1911914[uParam0->f_55 /*9*/].f_7 = 1;
	Global_1911914[uParam0->f_55 /*9*/].f_8 = 0;
	Global_1911914.f_1576 = Global_1911914.f_1576 + 1;
	uParam0->f_55 = uParam0->f_55 + 1;

	if (iParam2 == 600942249 || iParam2 == -257768755)
		func_357(uParam0, hParam1, iParam2);
	else if (iParam2 == -214678071)
		func_358(uParam0, hParam1);

	return;
}

void func_181(var uParam0, Hash hParam1, int iParam2) // Position - 0x8CAA Hash - 0x8D770326 ^0x14D0BF12
{
	int num;
	int num2;
	int num3;
	var unk;
	int i;
	Hash hash;

	num3 = func_53(hParam1, -1859264326);

	if (num3 == 0)
		return;

	unk = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num3, 0) };

	if (func_137(unk, &num, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (uParam0->f_55 >= 175)
				break;
		
			hash = func_138(i, num);
		
			if (func_21(hash, 0) && hash != hParam1)
				func_180(uParam0, hash, iParam2);
		}
	
		func_139(num);
	}

	return;
}

void func_182(var uParam0) // Position - 0x8D42 Hash - 0xF0728FFC ^0xF0728FFC
{
	func_139(*uParam0);
	*uParam0 = -1;
	return;
}

void func_183(var uParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8D56 Hash - 0xE8AAFAC7 ^0xA2C13119
{
	Hash key;
	var unk;
	Hash hash;
	Hash hash2;
	int num;
	int num2;
	int num3;
	const char* str;
	BOOL flag;
	var unk7;
	Hash hash3;
	BOOL flag2;
	Hash hash4;
	Hash hash5;
	int num4;
	int outData;
	BOOL flag3;
	int i;
	var outData2;
	Hash hash6;

	key = Global_1911914[hParam1 /*9*/].f_6;
	TEXT_LABEL_ASSIGN_STRING(&unk, "r_", 32);
	TEXT_LABEL_APPEND_INT(&unk, key, 32);
	TEXT_LABEL_APPEND_INT(&unk, hParam1, 32);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1911914[hParam1 /*9*/].f_1))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1911914[hParam1 /*9*/].f_1);

	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_40, &unk);
	Global_1911914[hParam1 /*9*/].f_1 = hash;
	hash2 = Global_1911914[hParam1 /*9*/].f_5;
	num = func_131(key, hash2, bParam3, false);
	num2 = func_129(key, false, false);
	num3 = func_130(key, false);

	if (num3 != -1)
		num3 = num3 - num2;
	else
		num3 = num;

	if (func_187(key, &str, joaat("Inventory"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, "texture", str);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, "textureDictionary", str.f_1);
	}

	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "name", key);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "eOutputItem", key);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "eCost", hash2);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "iIndex", hParam1);

	if (!Global_1911914.f_1579 && func_124(key, hash2, true))
	{
		flag = true;
		Global_1911914[hParam1 /*9*/].f_7 = 0;
	}

	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "iCurCostVariant", Global_1911914[hParam1 /*9*/].f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "iNumCostVariants", Global_1911914[hParam1 /*9*/].f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "bFireCrafting", hash2 == -257768755);
	TEXT_LABEL_APPEND_INT(&unk7, func_132(num3, num), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, "count", &unk7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "visible", false);
	flag2 = false;

	if (func_36(4096))
		hash3 = num3 > 0 && num > 0 && func_53(key, 1697966752) == 337650881 ? 1 : 0;
	else if (func_36(8192))
		hash3 = num3 > 0 && num > 0 && key == joaat("consumable_potent_predator_bait") ? 1 : 0;
	else
		hash3 = num3 > 0 && num > 0 && !flag ? 1 : 0;

	if (hash3 == 0 && func_185(key))
	{
		if (func_186(key, hash2, uParam0, bParam3, &hash4, &hash5, &num4))
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

	if (!uParam0->f_31)
		if (hash2 == -214678071 || hash2 == joaat("cost_crafting_grill") || hash2 == -257768755)
			hash3 = 0;
	else if (!uParam0->f_32 && hash2 == joaat("cost_crafting_grill"))
		hash3 = 0;

	if (hash3 == 1)
	{
		if (!uParam0->f_83 || uParam0->f_84 > 0 && func_53(key, -1636519629) == -701492487)
		{
			hash3 = 0;
			Global_1911914[hParam1 /*9*/].f_2 = 0;
		}
		else
		{
			uParam0->f_59 = uParam0->f_59 + 1;
		
			if (func_121(key, uParam0->f_52))
				uParam0->f_60 = uParam0->f_60 + 1;
		
			Global_1911914[hParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		Global_1911914[hParam1 /*9*/].f_2 = 0;
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
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_40, -1, joaat("crafting_list_item"), hash);

	return;
}

var func_184(BOOL bParam0, var uParam1, var uParam2) // Position - 0x93E5 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_185(Hash hParam0) // Position - 0x93FC Hash - 0xC3FDD1EA ^0xE5C6403C
{
	if (func_36(4096))
		if (func_53(hParam0, 1697966752) != 337650881)
			return false;
	else if (func_36(8192))
		if (hParam0 != joaat("consumable_potent_predator_bait"))
			return false;

	return true;
}

BOOL func_186(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, var uParam4, var uParam5, var uParam6) // Position - 0x9441 Hash - 0xBC72BCAF ^0x2D5E0DA5
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

	if (!func_21(hParam0, 0))
		return false;

	if (!Global_1911914.f_1579 && func_124(hParam0, hParam1, true))
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
		num3 = func_53(hParam0, 1697966752);
	
		if (num3 == 0)
			return false;
	
		if (uParam2->f_32)
		{
			unk = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("cost_crafting_grill"), 0, -1, num3, 0) };
		
			if (func_137(unk, &num, &num2, 0))
			{
				for (i = 0; i < num2; i = i + 1)
				{
					hash = func_138(i, num);
				
					if (hParam0 == hash)
					{
					}
					else if (!Global_1911914.f_1579 && func_124(hash, joaat("cost_crafting_grill"), true))
					{
					}
					else if (func_88(hash, joaat("cost_crafting_grill"), false, bParam3, 0, false) && !func_89(hash, 1, false))
					{
						func_139(num);
						*uParam4 = hash;
						*uParam5 = joaat("cost_crafting_grill");
						*uParam6 = i;
						return true;
					}
				}
			
				func_139(num);
			}
		}
	
		if (hParam1 == joaat("cost_crafting_grill"))
		{
			unk = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, -214678071, 0, -1, num3, 0) };
		
			if (func_137(unk, &num, &num2, 0))
			{
				for (j = 0; j < num2; j = j + 1)
				{
					hash2 = func_138(j, num);
				
					if (hParam0 == hash2)
					{
					}
					else if (!Global_1911914.f_1579 && func_124(hash2, -214678071, true))
					{
					}
					else if (func_88(hash2, -214678071, false, bParam3, 0, false) && !func_89(hash2, 1, false))
					{
						func_139(num);
						*uParam4 = hash2;
						*uParam5 = -214678071;
						*uParam6 = j;
						return true;
					}
				}
			
				func_139(num);
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
					if (outData != -489628648 && Global_1911914.f_1579 || !func_124(hParam0, outData, true))
					{
						if (func_88(hParam0, outData, false, bParam3, 0, false) && !func_89(hParam0, 1, false))
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
BOOL func_187(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x9704 Hash - 0x92B705D3 ^0xB783F681
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

BOOL func_188(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x97F7 Hash - 0xE87847ED ^0xAF7DC6D
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_21(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return false;

	*uParam3 = outData.f_35;

	for (i = 0; i < outData.f_35; i = i + 1)
	{
		uParam2->[i] = outData.f_36[i];
	}

	return true;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_189(Hash hParam0, int iParam1, Hash hParam2, var uParam3, var uParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x986C Hash - 0xE3A6DFAD ^0xE3A6DFAD
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;
	Entity entity;
	int num4;
	int num5;

	unk = 15;

	if (!func_193(hParam0, hParam2, &unk, &num, bParam7, false))
		return false;

	if (func_23() == false && iParam6 != 0)
		return false;

	if (iParam6 != 0)
		bParam5 = false;

	flag = func_80(false);

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && func_359(num2))
			goto 0x186;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && func_360(num2))
		{
		}
		else
		{
			if (iParam6 != 0)
				num3 = func_361(unk[i /*2*/], iParam6);
			else
				num3 = func_129(unk[i /*2*/], false, false);
		
			if (num3 >= num2)
			{
			}
			else
			{
				if (flag)
				{
					if (func_194(unk[i /*2*/]) || func_195(unk[i /*2*/]))
					{
						entity = 0;
					
						if (bParam5)
							num4 = func_197(7, unk[i /*2*/], &entity);
					
						num5 = func_196(unk[i /*2*/], iParam6);
					
						if (num3 + num4 + num5 >= num2)
							if (num3 + num5 < num2 && ENTITY::DOES_ENTITY_EXIST(entity))
								*uParam4 = entity;
						else
							goto 0x176;
					}
				
					if (bParam5 && num3 + func_198(7, unk[i /*2*/]) + func_199(unk[i /*2*/]) >= num2)
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

Hash func_190(Hash hParam0, int iParam1) // Position - 0x99FF Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_21(hParam0, 0))
		return 0;

	num = func_127(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_77(hParam0, 1399091007))
	{
		func_362(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_191(Hash hParam0, BOOL bParam1) // Position - 0x9A79 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_363(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_364(&unk, func_203(false));

	if (!func_365(&unk, &num, &num2, false))
		return 0;

	func_366(num);
	return num2;
}

int func_192(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9AD7 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_21(hParam0, 0))
		return 0;

	if (!func_80(false))
		bParam2 = true;

	if (bParam2 || !func_214(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_147(bParam3), hParam0);
}

BOOL func_193(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x9B25 Hash - 0x72399051 ^0x6D1C1C66
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_21(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam5;
		return false;
	}

	!bParam5;
	*uParam3 = outData.f_3;

	for (i = 0; i < outData.f_3; i = i + 1)
	{
		!bParam5;
		uParam2->[i /*2*/] = { outData.f_4[i /*2*/] };
	}

	if (bParam4)
		func_367(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_194(Hash hParam0) // Position - 0x9BC2 Hash - 0x7A41F8FA ^0x4ED5CABB
{
	if (!func_21(hParam0, 0))
		return false;

	if (func_77(hParam0, joaat("ci_tag_item_meat_animal")))
		return true;

	return func_195(hParam0);
}

BOOL func_195(Hash hParam0) // Position - 0x9BF1 Hash - 0x1FFCC90D ^0xF5D25358
{
	if (!func_21(hParam0, 0))
		return 0;

	if (func_77(hParam0, -839724752))
		return 1;

	return 0;
}

int func_196(Hash hParam0, int iParam1) // Position - 0x9C1B Hash - 0x7A47071E ^0x7A47071E
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

	if (!func_21(hParam0, 0))
		return 0;

	if (!func_194(hParam0) && !func_195(hParam0))
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
	num4 = func_53(hParam0, 1697966752);

	if (num4 == 0)
		return 0;

	unk = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 235313564, 0, 0, -1, num4, 0) };

	if (func_137(unk, &num2, &num3, 0))
	{
		for (i = 0; i < num3; i = i + 1)
		{
			hash = func_138(i, num2);
		
			if (func_21(hash, 0) && hParam0 != hash)
			{
				hash2 = func_368(hash);
			
				if (hash2 != 0)
				{
					if (iParam1 != 0)
						num5 = func_361(hash, iParam1);
					else
						num5 = func_129(hash, false, false);
				
					if (num5 > 0)
						num = num + (num5 * func_370(hash2, func_369(hash), hParam0));
				}
			}
		}
	
		func_139(num2);
	}

	return num;
}

int func_197(int iParam0, Hash hParam1, var uParam2) // Position - 0x9D4B Hash - 0xFBFC702 ^0xFBFC702
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

	iParam0 = func_218(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_21(hParam1, 0))
		return 0;

	if (!func_371(iParam0))
		return 0;

	ped = func_156(iParam0);

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
	
		if (!func_372(entityFromItem))
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

int func_198(int iParam0, Hash hParam1) // Position - 0x9E78 Hash - 0x9B281D8A ^0x9B281D8A
{
	Ped horse;
	Hash hash;
	int num;
	int i;

	iParam0 = func_218(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_21(hParam1, 0))
		return 0;

	if (!func_371(iParam0))
		return 0;

	horse = func_156(iParam0);
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

int func_199(Hash hParam0) // Position - 0x9F16 Hash - 0x3CFC8FF5 ^0xC9DF94B0
{
	int num;
	Entity firstEntityPedIsCarrying;

	if (!func_21(hParam0, 0))
		return 0;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) && !ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
			if (hParam0 == ENTITY::_GET_CARRIABLE_FROM_ENTITY(firstEntityPedIsCarrying))
				num = num + 1;
	}

	return num;
}

BOOL func_200(int iParam0) // Position - 0x9F68 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_102(iParam0, 2);
}

struct<4> func_201(BOOL bParam0) // Position - 0x9F77 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_202(joaat("character"), func_373(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_202(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x9F93 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_21(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_147(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_203(BOOL bParam0) // Position - 0x9FC4 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_147(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_202(923904168, func_201(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_202(923904168, func_201(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_202(923904168, func_201(bParam0), -740156546, false);
}

BOOL func_204(Hash hParam0, BOOL bParam1) // Position - 0xA059 Hash - 0x62864AB ^0xBC339691
{
	if (func_208(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_266(24);
		else
			return true;

	return false;
}

BOOL func_205(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0xA092 Hash - 0x4285A587 ^0x4285A587
{
	return func_215(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_206(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xA0AA Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_374(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_207(BOOL bParam0) // Position - 0xA0CB Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_147(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_202(271701509, func_201(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_202(271701509, func_201(bParam0), 12999093, false);
}

Hash func_208(Hash hParam0) // Position - 0xA12F Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_21(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_209(Hash hParam0, Hash hParam1) // Position - 0xA15A Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_208(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_210(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0xA1B9 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_147(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

int func_211(var uParam0) // Position - 0xA1E9 Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_21(*uParam0, 0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			return 1;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			return 1;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			return 1;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			return 1;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_212(Hash hParam0) // Position - 0xA265 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_127(hParam0) == joaat("WEAPON");
}

BOOL func_213(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0xA279 Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_21(hParam0, 0))
		return false;

	unk = { func_148(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_375(398 + i, 1);
	
		if (func_205(hParam0, &unk, hash, false))
		{
			flag = func_206(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

BOOL func_214(Hash hParam0) // Position - 0xA30D Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_376(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_215(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xA329 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_21(hParam0, 0))
		return 0;

	guid = { func_202(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_147(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_216(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xA371 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

void func_217(int iParam0, int iParam1) // Position - 0xA388 Hash - 0x18C74423 ^0xA1132A0
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1223212; i = i + 1)
	{
		if (Global_1223212.f_1[i /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[i /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1223212.f_1[i /*9*/].f_1 = iParam1;
			}
		
			return;
		}
	}

	func_377(iParam0, iParam1);
	return;
}

int func_218(int iParam0) // Position - 0xA3EA Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

float func_219(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xA403 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_220(int iParam0, const char* sParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xA421 Hash - 0x144F6B91 ^0x144F6B91
{
	func_378(iParam0);

	if (bParam3)
		func_379(iParam0, sParam1, iParam2);

	return;
}

BOOL func_221(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xA43E Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_21(hParam0, 0))
		return false;

	num = func_127(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_380(hParam0, 1))
			return false;

	return func_129(hParam0, false, bParam2) >= iParam1;
}

int func_222(int iParam0, Hash hParam1, int iParam2) // Position - 0xA4A8 Hash - 0xFBFC702 ^0xFBFC702
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

	iParam0 = func_218(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_21(hParam1, 0))
		return 0;

	if (!func_371(iParam0))
		return 0;

	ped = func_156(iParam0);

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
	
		if (!func_372(entityFromItem))
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
					func_309(hParam1, 1, 752097756);
				
					if (ENTITY::DOES_ENTITY_EXIST(entityFromItem))
					{
						hash2 = func_381(entityFromItem);
					
						if (!func_21(hash2, 0))
							hash2 = func_382(entityFromItem);
					
						if (func_21(hash2, 0))
							func_383(hash2, 1, true, -142743235, false);
					
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

BOOL func_223(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA61B Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_21(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_148(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_384(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_202(hParam0, unk, unk.f_4, bParam4) };
	return func_385(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

void func_224(Hash hParam0, int iParam1) // Position - 0xA68C Hash - 0xF788DCE ^0xB69D967B
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
		num3 = func_53(hParam0, 1697966752);
	
		if (num3 == 0)
			return;
	
		unk = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 235313564, 0, 0, -1, num3, 0) };
	
		if (func_137(unk, &num, &num2, 0))
		{
			for (i = 0; i < num2; i = i + 1)
			{
				if (iParam1 <= 0)
					break;
			
				hash = func_138(i, num);
			
				if (func_21(hash, 0) && hParam0 != hash)
				{
					for (j = func_129(hash, false, false); j > 0 && iParam1 > 0; j = j - 1)
					{
						iParam1 = iParam1 - func_386(hash, hParam0);
					}
				}
			}
		
			func_139(num);
		}
	}

	return;
}

BOOL func_225(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0xA788 Hash - 0x3C2EC293 ^0xC2A7C7CB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_21(hParam0, 0))
		return false;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_190(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return false;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_164(hParam0, -iParam1, flag, flag2, flag3);
	
		return false;
	}

	if (!func_221(hParam0, 1, bParam4))
		return false;

	statId = { func_313(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_129(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_129(hParam0, false, false) - iParam1 < 0)
		{
			func_225(hParam0, func_129(hParam0, false, false), bParam2, hParam3, bParam4);
			return false;
		}
	}

	if (func_127(hParam0) == joaat("WEAPON"))
		if (!func_387(hParam0, iParam1, false, hParam3))
			return false;
	else if (!func_223(hParam0, iParam1, hParam3, bParam2, bParam4))
		return false;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_80(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_164(hParam0, -iParam1, flag, flag2, flag3);

	func_388(hParam0, iParam1);
	return true;
}

void func_226(Hash hParam0) // Position - 0xA8FC Hash - 0x4C927607 ^0x7C031F72
{
	Entity firstEntityPedIsCarrying;
	Ped pedIndexFromEntityIndex;
	var unk;
	int num;
	int i;
	Hash hash;
	int num2;
	var unk12;
	var unk13;
	var unk14;

	!func_21(hParam0, 0);

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying);
		
			if (ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
			{
				unk = 10;
				num = func_389(pedIndexFromEntityIndex, &unk);
			
				for (i = 0; i < num; i = i + 1)
				{
					if (unk[i] == hParam0)
					{
						ENTITY::_DELETE_CARRIABLE(&firstEntityPedIsCarrying);
						break;
					}
				}
			}
			else
			{
				func_390(pedIndexFromEntityIndex, &unk12, &unk13, &num2, &unk14);
			
				if (func_391(&hash, pedIndexFromEntityIndex, num2, unk12) && hash == hParam0)
					ENTITY::_DELETE_CARRIABLE(&firstEntityPedIsCarrying);
			}
		}
	}

	return;
}

int func_227(int iParam0, Hash hParam1, int iParam2) // Position - 0xA9A3 Hash - 0xFBFC702 ^0xFBFC702
{
	Ped horse;
	Hash hash;
	int num;
	int i;

	iParam0 = func_218(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_21(hParam1, 0))
		return 0;

	if (!func_371(iParam0))
		return 0;

	horse = func_156(iParam0);
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
		else if (func_392(hParam1, iParam2, true, -142743235))
		{
			num = num + 1;
		}
	}

	return num;
}

int func_228(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0xAA59 Hash - 0x4DB90AB5 ^0x4DB90AB5
{
	var unk;
	var unk6;

	if (func_23() == false)
		return 0;

	if (!func_21(hParam0, 0))
		return 0;

	if (iParam2 < 1)
		return 0;

	unk = { func_201(false) };
	unk.f_4 = func_320(iParam1);
	unk6 = { func_202(hParam0, unk, unk.f_4, false) };

	if (!func_385(hParam0, &unk6, &unk, iParam2, hParam3, false, false))
		return 0;

	return 1;
}

int func_229(var uParam0) // Position - 0xAAC5 Hash - 0x19D4C5AC ^0x19D4C5AC
{
	switch (*uParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
			return 11;
	
		case joaat("consumable_herb_oleander_sage"):
			return 26;
	
		case joaat("consumable_herb_parasol_mushroom"):
			return 28;
	
		case joaat("consumable_herb_black_berry"):
			return 5;
	
		case joaat("consumable_herb_sage"):
			return 34;
	
		case joaat("consumable_herb_evergreen_huckleberry"):
			return 16;
	
		case joaat("consumable_herb_english_mace"):
			return 15;
	
		case joaat("consumable_herb_bay_bolete"):
			return 4;
	
		case joaat("provision_ro_flower_clamshell"):
			return 10;
	
		case joaat("consumable_herb_chanterelles"):
			return 8;
	
		case joaat("consumable_herb_rams_head"):
			return 31;
	
		case joaat("provision_ro_flower_acunas_star"):
			return 1;
	
		case joaat("consumable_herb_wintergreen_berry"):
			return 42;
	
		case joaat("consumable_herb_indian_tobacco"):
			return 20;
	
		case joaat("consumable_herb_yarrow"):
			return 43;
	
		case joaat("consumable_herb_wild_mint"):
			return 41;
	
		case joaat("provision_ro_flower_cigar"):
			return 9;
	
		case joaat("consumable_herb_burdock_root"):
			return 7;
	
		case joaat("provision_ro_flower_rat_tail"):
			return 32;
	
		case joaat("provision_ro_flower_night_scented"):
			return 25;
	
		case joaat("consumable_herb_violet_snowdrop"):
			return 38;
	
		case joaat("consumable_herb_milkweed"):
			return 23;
	
		case joaat("consumable_herb_prairie_poppy"):
			return 29;
	
		case joaat("consumable_herb_oregano"):
			return 27;
	
		case joaat("consumable_herb_red_raspberry"):
			return 33;
	
		case joaat("provision_ro_flower_lady_of_night"):
			return 21;
	
		case joaat("consumable_herb_wild_feverfew"):
			return 40;
	
		case joaat("provision_ro_flower_sparrows"):
			return 35;
	
		case joaat("provision_ro_flower_queens"):
			return 30;
	
		case joaat("consumable_herb_currant"):
			return 6;
	
		case joaat("consumable_herb_wild_carrots"):
			return 39;
	
		case joaat("consumable_herb_ginseng"):
			return 2;
	
		case joaat("provision_ro_flower_spider"):
			return 36;
	
		case joaat("provision_ro_flower_dragons"):
			return 14;
	
		case joaat("provision_ro_flower_lady_slipper"):
			return 22;
	
		case joaat("provision_ro_flower_moccasin"):
			return 24;
	
		case joaat("consumable_herb_vanilla_flower"):
			return 37;
	
		case joaat("consumable_herb_creeping_thyme"):
			return 12;
	
		case joaat("provision_ro_flower_ghost"):
			return 17;
	}

	return 0;
}

BOOL func_230(int iParam0) // Position - 0xACF3 Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

Hash func_231(int iParam0) // Position - 0xAD00 Hash - 0xBA965109 ^0xDF65C4FE
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
			return joaat("herb_hummingbird_sage");
	
		case 20:
			return joaat("herb_indian_tobacco");
	
		case 21:
			return joaat("herb_lady_of_night_orchid");
	
		case 22:
			return joaat("herb_lady_slipper_orchid");
	
		case 23:
			return joaat("herb_milkweed");
	
		case 24:
			return joaat("herb_moccasin_flower_orchid");
	
		case 25:
			return joaat("herb_night_scented_orchid");
	
		case 26:
			return joaat("herb_oleander_sage");
	
		case 27:
			return joaat("herb_oregano");
	
		case 28:
			return joaat("herb_parasol_mushroom");
	
		case 29:
			return joaat("herb_prairie_poppy");
	
		case 30:
			return joaat("herb_queens_orchid");
	
		case 31:
			return joaat("herb_rams_head");
	
		case 32:
			return joaat("herb_rat_tail_orchid");
	
		case 33:
			return joaat("herb_red_raspberry");
	
		case 34:
			return joaat("herb_red_sage");
	
		case 35:
			return joaat("herb_sparrows_egg_orchid");
	
		case 36:
			return joaat("herb_spider_orchid");
	
		case 37:
			return joaat("herb_vanilla_flower");
	
		case 38:
			return joaat("herb_violet_snowdrop");
	
		case 39:
			return joaat("herb_wild_carrots");
	
		case 40:
			return joaat("herb_wild_feverfew");
	
		case 41:
			return joaat("herb_wild_mint");
	
		case 42:
			return joaat("herb_wintergreen_berry");
	
		case 43:
			return joaat("herb_yarrow");
	}

	return 0;
}

BOOL func_232(Hash hParam0) // Position - 0xAFEC Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_233(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, int iParam6) // Position - 0xB007 Hash - 0x47A4DDC0 ^0xD98F8579
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
		category = func_208(hParam1);
		hasSlotCount = func_393(hParam1);
	
		for (i = 0; i < hasSlotCount; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
			{
				if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, category, outSlotId))
				{
					*uParam4 = { func_148(hParam1, false, false) };
				
					if (iParam6 != 0)
						uParam4->f_4 = iParam6;
				
					*uParam3 = { func_202(hParam1, *uParam4, uParam4->f_4, false) };
					*uParam2 = outSlotId;
					return true;
				}
			}
		}
	
		if (bParam5)
		{
			outInventoryItem.f_9 = joaat("SLOTID_NONE");
			unk16.f_9 = joaat("SLOTID_NONE");
			inventoryId = func_147(false);
			unk30 = { func_148(hParam1, false, false) };
		
			if (iParam6 != 0)
				unk30.f_4 = iParam6;
		
			parentGuid = { func_202(hParam1, unk30, unk30.f_4, false) };
			childrenCount = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(inventoryId, &parentGuid);
		
			for (j = 0; j < childrenCount; j = j + 1)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(inventoryId, &parentGuid, j, &outInventoryItem))
				{
					category = func_208(outInventoryItem.f_4);
					hasSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
				
					for (i = 0; i < hasSlotCount; i = i + 1)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
						{
							if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, category, outSlotId))
							{
								if (func_394(parentGuid, outInventoryItem.f_9, &unk16, false))
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

struct<4> func_234() // Position - 0xB186 Hash - 0xF51D0C3D ^0xA1188D4B
{
	var unk;

	unk = { func_201(false) };
	return func_202(856287005, unk, -218846335, false);
}

BOOL func_235(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0xB1AA Hash - 0x86E39CDA ^0xCF922D1
{
	!func_21(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_149(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_80(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_147(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

BOOL func_236(Hash hParam0, int iParam1) // Position - 0xB20C Hash - 0x148943C8 ^0x2BF2CC5F
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

	if (!func_21(hParam0, 0))
		return false;

	if (!func_233(hParam0, 856287005, &hash, &unk6, &unk, true, 0))
		return false;

	unk10 = { func_234() };
	unk14 = { func_202(hParam0, unk10, hash, false) };

	if (func_395(unk14, iParam1))
	{
		if (func_396(hParam0))
		{
			if (func_397(joaat("SLOTID_HORSE_HORN"), &hash2))
				func_236(hash2, 0);
		}
		else if (func_237(hParam0))
		{
			if (func_397(joaat("SLOTID_HORSE_HORN"), &hash3))
				func_236(hash3, 0);
		
			if (func_397(joaat("SLOTID_HORSE_STIRRUP"), &hash4))
				func_236(hash4, 0);
		
			hash5 = func_238(hParam0);
		
			if (func_21(hash5, 0))
				func_236(hash5, 1);
		}
	
		func_239();
		return true;
	}

	return false;
}

BOOL func_237(Hash hParam0) // Position - 0xB2E7 Hash - 0x1FFCC90D ^0x9E730FBF
{
	if (!func_21(hParam0, 0))
		return false;

	if (func_77(hParam0, -251515357))
		return true;

	return false;
}

Hash func_238(Hash hParam0) // Position - 0xB311 Hash - 0xBD10D1A2 ^0xB99ADD5C
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
int func_239() // Position - 0xB377 Hash - 0x79A7BF3 ^0x80B436A4
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

	unk = { func_148(856287005, false, false) };
	unk6 = { func_202(856287005, unk, unk.f_4, false) };
	category = func_208(856287005);

	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, 0, &outSlotId))
		hash = func_398(unk6, joaat("SLOTID_HORSE_SADDLE"), false);

	if (!func_21(hash, 0))
		return 0;

	flag = false;
	num = func_393(856287005);

	for (i = 0; i < num; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
		{
			flag = false;
			hash2 = func_398(unk6, outSlotId, false);
		
			if (!func_21(hash2, 0))
			{
				if (outSlotId == joaat("SLOTID_HORSE_HORN"))
				{
					if (func_237(hash) || func_396(hash))
					{
					}
					else
					{
						goto 0xDB;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_STIRRUP"))
				{
					if (func_237(hash))
					{
					}
					else
					{
						flag = true;
						goto 0x103;
					}
				}
			
				flag = true;
			}
			else if (outSlotId == joaat("SLOTID_HORSE_BLANKET"))
			{
				if (!func_237(hash) && func_399(hash2))
					flag = true;
			}
		
			if (flag)
			{
				if (func_400(outSlotId, &unk12, true))
				{
					if (!func_395(unk12, true))
					{
					}
				}
			}
		}
	}

	return 1;
}

BOOL func_240() // Position - 0xB4AB Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_241(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB4B8 Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_242(BOOL bParam0, var uParam1, var uParam2) // Position - 0xB522 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_243(Hash hParam0, int iParam1) // Position - 0xB539 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_21(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

eBlipSprite func_244(Hash hParam0) // Position - 0xB558 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_21(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

const char* func_245(const char* sParam0, int iParam1) // Position - 0xB571 Hash - 0x9E99F03 ^0xBBE5B65B
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_246(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0xB58B Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_401(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_247(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0xB5EE Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_23() == -1)
	{
		if (func_212(hParam0) && func_402(hParam0))
		{
			func_403(hParam0, iParam1, true, &bParam2, iParam3);
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

BOOL func_248(Hash hParam0, var uParam1, int iParam2) // Position - 0xB645 Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_404(hParam0, uParam1);
	unk = { func_148(hParam0, false, true) };
	num = func_192(hParam0, &unk, false, false);
	num2 = func_405(hParam0, false);

	if (num > 1 && !func_406() && num2 + iParam2 >= num)
		if (func_77(hParam0, -2051813666))
			func_256(583, true);
		else
			func_256(582, false);

	if (func_149(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_249(Hash hParam0, BOOL bParam1) // Position - 0xB6E1 Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_53(hParam0, -949239683))
	{
		case -1565009253:
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
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = hParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}

	return;
}

BOOL func_250(Hash hParam0) // Position - 0xB78D Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_23() != -1)
		return false;

	return func_251(hParam0) != 0;
}

Hash func_251(Hash hParam0) // Position - 0xB7A9 Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_407(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_408(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_252(Hash hParam0) // Position - 0xB7E5 Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_253(Hash hParam0) // Position - 0xB7F3 Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_407(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_252(collectableItemHash))
			if (func_221(func_408(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_254(Hash hParam0) // Position - 0xB840 Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_168(48);
	func_409(false, -1);
	return;
}

BOOL func_255(int iParam0) // Position - 0xB85B Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_23() != -1)
		return false;

	return func_275(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_256(int iParam0, BOOL bParam1) // Position - 0xB87E Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_410(iParam0, &num, &num2);

	if (!func_411(iParam0, num, num2, bParam1))
		return;

	func_412(num, num2);
	return;
}

int func_257(Hash hParam0) // Position - 0xB8AB Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_258(Hash hParam0) // Position - 0xB8BE Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_259() // Position - 0xB8D1 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_260(int iParam0) // Position - 0xB8F0 Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_23() != -1)
		return false;

	return func_275(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_261(int iParam0) // Position - 0xB913 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_23() != -1)
		return false;

	if (!func_14(iParam0))
		return false;

	return func_413(Global_1347702[iParam0 /*49*/].f_15);
}

int func_262() // Position - 0xB943 Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_221(func_414(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_263(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0xB978 Hash - 0x2D6CF941 ^0x912465E6
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	char* str5;
	char* str6;
	var unk;
	int num;
	int num2;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	Hash hash2;

	switch (iParam0)
	{
		case 38:
			str = "MISSION_RCCIG";
			str2 = "SP_MISSIONS_13";
		
			if (func_259() && func_261(38) || func_255(38))
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				str6 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				hash = joaat("col_cc_intro");
			}
			else
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				str6 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				hash = joaat("col_cc_intro_pre");
			}
		
			str5 = "COL_CC_TITLE";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = 12;
			hash2 = joaat("CIGARETTE_CARDS");
			break;
	
		case 39:
			if (func_259() && func_261(39) || func_255(39))
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_02";
				str6 = "COL_DB_INTRO";
				num = 3;
				hashKey = joaat("blip_rc_deborah");
				hash = joaat("col_db_intro");
			}
			else
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_01";
				str6 = "COL_DB_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				hash = joaat("col_db_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_DB_TITLE";
			unk = { 122.7758f, -185.4978f, 116.4383f };
			num2 = 30;
			hash2 = joaat("dino_bones");
			break;
	
		case 41:
			if (func_259() && func_261(41) || func_255(41))
				str = "MISSION_RCFSH2";
			else
				str = "MISSION_RCFSH1";
		
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_RARE_FISH_01";
			str5 = "COL_LF_TITLE";
			str6 = "COL_LF_INTRO";
			unk = { 337.3075f, -684.5404f, 41.8362f };
			num = 13;
			hash2 = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
			if (hParam3 == joaat("exotic_stage_01"))
			{
				str = "MISSION_RCEXO1";
				str4 = "RCEXO1_DESC";
				num2 = 30;
			}
			else if (hParam3 == joaat("exotic_stage_02"))
			{
				str = "MISSION_RCEXO2";
				str4 = "RCEXO2_DESC";
				num2 = 37;
			}
			else if (hParam3 == joaat("exotic_stage_03"))
			{
				str = "MISSION_RCEXO3";
				str4 = "RCEXO3_DESC";
				num2 = 40;
			}
			else if (hParam3 == joaat("exotic_stage_04"))
			{
				str = "MISSION_RCEXO4";
				str4 = "RCEXO4_DESC";
				num2 = 50;
			}
			else if (hParam3 == joaat("exotic_stage_05"))
			{
				str = "MISSION_RCEXO5";
				str4 = "RCEXO5_DESC";
				num2 = 25;
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_EX_TITLE";
			str6 = "COL_EX_INTRO";
			unk = { 2585.6682f, -1009.6161f, 44.979717f };
			num = func_415(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_259() && func_261(49) || func_255(49))
			{
				str = "MISSION_RCRKF2";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				str6 = "COL_RC_INTRO";
				num = 3;
				hashKey = joaat("blip_scm_frances");
				hash = joaat("col_rc_intro");
			}
			else
			{
				str = "MISSION_RCRKF1";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				str6 = "COL_RC_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				hash = joaat("col_rc_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_RC_TITLE";
			unk = { -2178.646f, -245.6886f, 191.1569f };
			num2 = 10;
			hash2 = joaat("rock_carvings");
			break;
	
		case 51:
			str = "MISSION_RCTAX1";
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			str5 = "COL_TX_TITLE";
			str6 = "COL_TX_INTRO";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = func_415(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_416(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_417(iParam0, hash, hash2);
	func_418(iParam0, hash, unk, str5, str4);
	func_419(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_420(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_421(iParam0, hash, hash2, iParam6);
	func_422(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_264(int iParam0) // Position - 0xBDB5 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

void func_265(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0xBDCC Hash - 0xD806FABF ^0xFD011C4F
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	int num;

	switch (iParam0)
	{
		case 38:
			str = "COL_CC_TITLE";
			str4 = "COL_CC_CARD_FOUND";
			num = joaat("CIGARETTE_CARDS");
		
			if (func_259() && func_261(38) || func_255(38))
			{
				str2 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				str2 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
		
			hash = joaat("col_cc_intro");
			break;
	
		case 39:
			str = "COL_DB_TITLE";
			str4 = "COL_DB_FOUND";
			num = joaat("dino_bones");
		
			if (func_259() && func_261(39) || func_255(39))
			{
				str2 = "COL_DB_INTRO";
				hashKey = joaat("blip_rc_deborah");
			}
			else
			{
				str2 = "COL_DB_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
		
			hash = joaat("col_db_intro");
			break;
	
		case 41:
			str = "COL_LF_TITLE";
			str4 = "COL_LF_CAUGHT";
			str2 = "COL_LF_INTRO";
			num = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			str = "COL_EX_TITLE";
			str4 = "COL_EX_ITEMS_COLLECTED";
			str2 = "COL_EX_INTRO";
			num = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			str = "COL_RC_TITLE";
			str4 = "COL_RC_FOUND";
			num = joaat("rock_carvings");
		
			if (func_259() && func_261(49) || func_255(49))
			{
				str2 = "COL_RC_INTRO";
				hashKey = joaat("blip_scm_frances");
			}
			else
			{
				str2 = "COL_RC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
		
			hash = joaat("col_rc_intro");
			break;
	
		case 51:
			str = "COL_TX_TITLE";
			str4 = "COL_TX_CARCASS_COLLECTED";
			str2 = "COL_TX_INTRO";
			num = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	if (iParam5 == 2)
	{
		str = "MISSION_COMPLETE";
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
		str2 = "COL_ALL_LOG_UPDATED";
	}

	str3 = "COL_CTX_PLAYER_LOG";

	if (num == joaat("CIGARETTE_CARDS"))
	{
		if (func_259() && func_261(38) || func_255(38))
			hash = joaat("col_cc_intro");
		else
			hash = joaat("col_cc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 0)
		{
			hashKey2 = hParam1;
			hashKey = hParam2;
		}
	
		if (iParam5 == 2)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_425(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_258(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_259() && func_261(39) || func_255(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_259() && func_261(49) || func_255(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

BOOL func_266(int iParam0) // Position - 0xC37A Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_426(iParam0))
		return false;

	return func_427(iParam0);
}

void func_267(int iParam0) // Position - 0xC396 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_426(iParam0))
		return;

	func_428(iParam0);
	func_429(iParam0);
	return;
}

BOOL func_268(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0xC3B7 Hash - 0x61DE9CAE ^0x4ADCEE54
{
	var unk;
	Hash hash;
	var unk6;
	int i;
	var unk28;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0) && iParam1 > 0)
		iParam1 = 0;

	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
	{
		unk = { func_148(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_375(398 + i, 1);
		
			if (func_205(hParam0, &unk, hash, false))
			{
				if (func_206(hParam0, &unk6, hash))
				{
					unk28 = { func_202(hParam0, unk, hash, false) };
					func_385(hParam0, &unk28, &unk, 1, -142743235, true, false);
					break;
				}
			}
		}
	}

	if (func_80(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_269(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_430(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_269(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xC509 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_271(hParam0))
		return false;

	if (!func_80(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_270(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC544 Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_161(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_23() == -1)
		{
			func_162(weaponHash);
		
			if (hParam1 == 1248274121)
				func_431(weaponHash);
		}
	
		if (!func_149(hParam0, &unk, 1, false, false))
		{
			func_403(hParam0, 1, false, uParam2, hParam1);
			num = func_432(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_268(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_268(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_268(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_433())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_434(weaponHash))
				{
					func_268(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_268(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_435(Global_35, 2, false, true);
			
				if (func_232(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_266(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_232(weaponHash2) && func_266(24))
					if (!func_268(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_268(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_268(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_256(480, true);

	return true;
}

BOOL func_271(Hash hParam0) // Position - 0xC750 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_272(Hash hParam0, var uParam1, Hash hParam2) // Position - 0xC75E Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_271(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_232(weaponTypeFromAmmoType))
		WEAPON::GET_MAX_AMMO(Global_35, &ammo, weaponTypeFromAmmoType);

	num2 = ammo - pedAmmoByType;

	if (WEAPON::IS_WEAPON_BOW(weaponTypeFromAmmoType))
		weaponClipSize = 5;
	else
		weaponClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(weaponTypeFromAmmoType);

	if (*uParam1 > 0)
		num3 = *uParam1;
	else if (*uParam1 < 0)
		num3 = weaponClipSize * MISC::ABSI(*uParam1);

	if (func_221(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
		num3 = BUILTIN::CEIL((float)num3 * 1.1f);

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
		func_304(func_436(hParam0), func_244(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_23() == -1)
			if (func_275(Global_1835011[14 /*74*/].f_1, true))
				func_256(416, false);

	if (num == 0)
		return false;

	if (func_80(false))
	{
		if (func_269(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_309(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_273(Hash hParam0) // Position - 0xC8A7 Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_437() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_169(Global_35, hParam0, &unk))
			func_170(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_295();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_295();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_293();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_291();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_295();
			break;
	}

	return;
}

void func_274(Hash hParam0) // Position - 0xC9AE Hash - 0xA92CE7CF ^0x8CEA2EC6
{
	switch (hParam0)
	{
		case joaat("provision_trinket_shark_tooth"):
			Global_40.f_11095.f_68 = Global_40.f_11095.f_68 + 0.1f;
			break;
	
		case joaat("provision_trinket_cat_eye"):
			Global_40.f_11095.f_70 = Global_40.f_11095.f_70 + 0.2f;
			break;
	
		case joaat("provision_trinket_turtle_shell"):
			Global_40.f_11095.f_69 = Global_40.f_11095.f_69 + 0.1f;
			func_439();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_293();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_438();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_291();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_294();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_292();
			break;
	
		case joaat("provision_trinket_lion_paw"):
			Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
			break;
	
		case joaat("provision_trinket_cougar_fang"):
			Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
			break;
	
		case joaat("provision_trinket_moose_antler"):
			Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
			break;
	
		case joaat("provision_trinket_owl_feather"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.15f;
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.15f;
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.15f;
			func_295();
			break;
	}

	return;
}

BOOL func_275(int iParam0, BOOL bParam1) // Position - 0xCB99 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_440(iParam0))
	{
		case 5:
			return 1;
	
		case 6:
			if (bParam1)
				return 1;
			break;
	}

	return 0;
}

void func_276(Hash hParam0) // Position - 0xCBCA Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_77(hParam0, -2017733358);

	if (func_441() < 3)
		if (flag)
			if (func_443(func_442(hParam0), hParam0))
				func_304(79, func_244(func_442(hParam0)), true);
			else
				func_304(78, func_244(func_442(hParam0)), true);
		else
			func_304(80, func_244(func_444(hParam0)), true);

	return;
}

BOOL func_277() // Position - 0xCC37 Hash - 0x452521BB ^0x7FA3002C
{
	if (func_445(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_445(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_445(joaat("document_arthur_high_bounty_1"), 400) || func_445(joaat("document_arthur_high_bounty_2"), 400) || func_445(joaat("document_arthur_has_poster_1"), 400) || func_445(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_278(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0xCCAD Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_446(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_447(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_448(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_279(Hash hParam0) // Position - 0xCCF4 Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_263(43, 0, 0, joaat("exotic_stage_01"), func_453(1), false, -1, false);
			func_454(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_263(39, 0, 0, 0, 0, false, 1, false);
			func_265(39, 0, 0, 0, 0, -1, 0);
			func_450(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_263(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_265(51, 0, 0, 0, 0, -1, 0);
			func_449(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_263(43, 0, 0, joaat("exotic_stage_02"), func_453(2), false, -1, false);
			func_454(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_263(43, 0, 0, joaat("exotic_stage_03"), func_453(4), false, -1, false);
			func_454(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_263(49, 0, 0, 0, 0, false, 1, false);
			func_265(49, 0, 0, 0, 0, -1, 0);
			func_452(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_263(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_265(51, 0, 0, 0, 0, -1, 0);
			func_449(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_263(41, 0, 0, 0, 0, false, 1, false);
			func_265(41, 0, 0, 0, 0, -1, 0);
			func_451(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_263(43, 0, 0, joaat("exotic_stage_05"), func_453(16), false, -1, false);
			func_454(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_263(43, 0, 0, joaat("exotic_stage_04"), func_453(8), false, -1, false);
			func_454(8);
			break;
	}

	return;
}

void func_280(Hash hParam0) // Position - 0xCE8A Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_455() == 1)
	{
		if (func_255(39))
		{
			func_256(342, false);
		}
		else
		{
			func_256(343, false);
			func_450(1);
		}
	}

	if (func_455() >= 30)
		func_256(344, false);

	func_263(39, 0, 0, 0, 0, false, -1, false);
	func_265(39, 0, 0, func_455(), 30, 1, 0);
	return;
}

void func_281(Hash hParam0) // Position - 0xCEE9 Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_456() == 1)
	{
		if (func_255(49))
		{
			func_256(409, false);
		}
		else
		{
			func_256(410, false);
			func_452(1);
		}
	}

	if (func_456() >= 10)
		func_256(411, false);

	func_263(49, 0, 0, 0, 0, false, -1, false);
	func_265(49, 0, 0, func_456(), 10, 1, 0);
	return;
}

void func_282(Hash hParam0) // Position - 0xCF48 Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_256(438, false);
			func_457(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_263(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_265(51, 0, 0, num, func_415(joaat("taxidermy_order_05"), 20), 1, 0);
			func_449(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_457(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_263(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_265(51, 0, 0, num, func_415(joaat("taxidermy_order_04"), 20), 1, 0);
			func_449(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_457(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_263(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_265(51, 0, 0, num, func_415(joaat("taxidermy_order_03"), 20), 1, 0);
			func_449(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_256(437, false);
			func_256(440, false);
			func_457(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_263(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_265(51, 0, 0, num, func_415(joaat("taxidermy_order_01"), 20), 1, 0);
			func_449(1);
			func_458(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_457(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_263(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_265(51, 0, 0, num, func_415(joaat("taxidermy_order_02"), 20), 1, 0);
			func_449(8);
			break;
	
		default:
			func_256(439, false);
			break;
	}

	return;
}

void func_283() // Position - 0xD136 Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_284(Hash hParam0, int iParam1) // Position - 0xD15A Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_23() == -1)
	{
		if (!func_255(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_256(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_256(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_256(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_256(400, false);
		}
		else if (func_77(hParam0, 412399755))
		{
			func_459(joaat("exotic_stage_01"));
		
			if (func_460() == 0)
			{
				func_409(false, 10);
				num2 = func_461(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_462(hParam0) < func_463(hParam0))
					{
						func_263(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_265(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_255(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_256(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_256(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_256(401, false);
		}
		else if (func_77(hParam0, 709057512))
		{
			func_459(joaat("exotic_stage_02"));
		
			if (func_460() == 1)
			{
				func_409(false, 10);
				num2 = func_461(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_462(hParam0) < func_463(hParam0))
					{
						func_263(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_265(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_255(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_256(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_256(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_256(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_256(398, false);
		}
		else if (func_77(hParam0, -1478961327))
		{
			func_459(joaat("exotic_stage_03"));
		
			if (func_460() == 2)
			{
				func_409(false, 10);
				num2 = func_461(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_464(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_465(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_168(48);
					}
				
					if (func_462(hParam0) < func_463(hParam0))
					{
						func_263(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_265(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_462(hParam0) < func_463(hParam0))
					{
						func_263(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_265(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_255(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_256(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_256(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_256(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_256(406, false);
		}
		else if (func_77(hParam0, -1238404098))
		{
			func_459(joaat("exotic_stage_04"));
		
			if (func_460() == 3)
			{
				func_409(false, 10);
				num2 = func_461(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_462(hParam0) < func_463(hParam0))
					{
						func_263(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_265(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_255(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_256(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_256(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_256(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_256(403, false);
		}
		else if (func_77(hParam0, 1160548794))
		{
			func_459(joaat("exotic_stage_05"));
		
			if (func_460() == 4)
			{
				func_409(false, 10);
				num2 = func_461(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_462(hParam0) < func_463(hParam0))
					{
						func_263(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_265(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_285(Hash hParam0) // Position - 0xD673 Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_464(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_465(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_168(48);
		}
	}

	return;
}

void func_286(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD6B3 Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_221(func_466(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_467(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_468(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_287(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0xD713 Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_23() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_278(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_278(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_278(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_278(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_278(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_278(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_278(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_469())
				func_278(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_278(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_278(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_278(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_278(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_278(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_278(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_278(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_278(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_278(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_278(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_278(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_278(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_278(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_278(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

void func_288(Hash hParam0) // Position - 0xDAEB Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_255(41))
		func_256(363, false);
	else
		func_256(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_470(joaat("legendary_fish_02"));
			func_471(joaat("legendary_fishing_spot_02"));
			func_472(joaat("legendary_fishing_spot_02"));
			func_409(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_470(joaat("legendary_fish_06"));
			func_471(joaat("legendary_fishing_spot_06"));
			func_472(joaat("legendary_fishing_spot_06"));
			func_409(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_470(joaat("legendary_fish_13"));
			func_471(joaat("legendary_fishing_spot_13"));
			func_472(joaat("legendary_fishing_spot_13"));
			func_409(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_470(joaat("legendary_fish_03"));
			func_471(joaat("legendary_fishing_spot_03"));
			func_472(joaat("legendary_fishing_spot_03"));
			func_409(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_470(joaat("legendary_fish_08"));
			func_471(joaat("legendary_fishing_spot_08"));
			func_472(joaat("legendary_fishing_spot_08"));
			func_409(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_470(joaat("legendary_fish_12"));
			func_471(joaat("legendary_fishing_spot_12"));
			func_472(joaat("legendary_fishing_spot_12"));
			func_409(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_470(joaat("legendary_fish_05"));
			func_471(joaat("legendary_fishing_spot_05"));
			func_472(joaat("legendary_fishing_spot_05"));
			func_409(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_470(joaat("legendary_fish_04"));
			func_471(joaat("legendary_fishing_spot_04"));
			func_472(joaat("legendary_fishing_spot_04"));
			func_409(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_470(joaat("legendary_fish_14"));
			func_471(joaat("legendary_fishing_spot_14"));
			func_472(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_470(joaat("legendary_fish_09"));
			func_471(joaat("legendary_fishing_spot_09"));
			func_472(joaat("legendary_fishing_spot_09"));
			func_409(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_470(joaat("legendary_fish_07"));
			func_471(joaat("legendary_fishing_spot_07"));
			func_472(joaat("legendary_fishing_spot_07"));
			func_409(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_470(joaat("legendary_fish_01"));
			func_471(joaat("legendary_fishing_spot_01"));
			func_472(joaat("legendary_fishing_spot_01"));
			func_409(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_470(joaat("legendary_fish_11"));
			func_471(joaat("legendary_fishing_spot_11"));
			func_472(joaat("legendary_fishing_spot_11"));
			func_409(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_470(joaat("legendary_fish_10"));
			func_471(joaat("legendary_fishing_spot_10"));
			func_472(joaat("legendary_fishing_spot_10"));
			func_409(false, 10);
			break;
	}

	return;
}

void func_289(Hash hParam0, var uParam1) // Position - 0xDD6A Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_362(hParam0, uParam1, &unk);
	return;
}

BOOL func_290(var uParam0, BOOL bParam1) // Position - 0xDD7C Hash - 0x2DC8D50 ^0x79739B7E
{
	int num;
	int num2;
	int i;
	var unk;
	BOOL flag;
	Hash hash;
	Hash hash2;

	unk.f_9 = joaat("SLOTID_NONE");
	flag = false;
	*uParam0 = 0;
	hash = func_435(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_435(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_473("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_474(&unk, i, num, num2))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(unk.f_4))
				{
					if (!bParam1)
					{
						if (unk.f_4 == hash || unk.f_4 == hash2)
						{
						}
						else if (!flag)
						{
							*uParam0 = unk.f_4;
							flag = true;
						}
					}
				
					if (!flag)
					{
						*uParam0 = unk.f_4;
						flag = true;
					}
				}
			}
		}
	
		func_366(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_291() // Position - 0xDE45 Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_292() // Position - 0xDE5F Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_293() // Position - 0xDE94 Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_294() // Position - 0xDEB0 Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_295() // Position - 0xDECA Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_475();
	func_476();
	func_477();
	return;
}

void func_296(int iParam0, int iParam1, BOOL bParam2) // Position - 0xDEE1 Hash - 0x968DA278 ^0xEFDC433
{
	Hash hash;
	char* str;
	char* str2;
	char* str3;
	Vector3 vector;

	switch (iParam0)
	{
		case -220219788:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_poisonous_trail");
			break;
	
		case 6410548:
			str3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_landmarks_of_riches");
			break;
	
		case 218622660:
			str3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_tresor_des_morts");
			break;
	
		case 390004462:
			str3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_elemental_trail");
			break;
	
		case 499813453:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_JACK_HALL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_jack_hall");
			break;
	
		case 666607663:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_HIGH_STAKES";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_high_stakes");
			break;
	}

	switch (iParam1)
	{
		case joaat("treasure_hunt_loot_12"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
	
		case joaat("treasure_hunt_loot_13"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
	
		case joaat("treasure_hunt_loot_02"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
	
		case joaat("treasure_hunt_loot_18"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
	
		case joaat("treasure_hunt_loot_03"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
	
		case joaat("treasure_hunt_loot_19"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
	
		case joaat("treasure_hunt_loot_04"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
	
		case joaat("treasure_hunt_loot_16"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
	
		case joaat("treasure_hunt_loot_17"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
	
		case joaat("treasure_hunt_loot_05"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
	
		case joaat("treasure_hunt_loot_10"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
	
		case joaat("treasure_hunt_loot_07"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
	
		case joaat("treasure_hunt_loot_21"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
	
		case joaat("treasure_hunt_loot_01"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
	
		case joaat("treasure_hunt_loot_11"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
	
		case joaat("treasure_hunt_loot_06"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
	
		case joaat("treasure_hunt_loot_24"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	
		case joaat("treasure_hunt_loot_20"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
	
		case joaat("treasure_hunt_loot_09"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
	
		case joaat("treasure_hunt_loot_23"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
	
		case joaat("treasure_hunt_loot_22"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
	
		case joaat("treasure_hunt_loot_08"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
	
		case joaat("treasure_hunt_loot_14"):
			str = "COL_TH_OBJ_RDL";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
	
		case joaat("treasure_hunt_loot_15"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
	}

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_REMOVE_ENTRY(3, hash);

	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hash, vector, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(str2), 0);

	if (bParam2)
	{
		switch (iParam0)
		{
			case -220219788:
				str = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
		
			case 6410548:
				str = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		
			case 218622660:
				str = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
		
			case 390004462:
				str = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
		
			case 499813453:
				str = "COL_TH_JACK_HALL_COMPLETE";
				break;
		
			case 666607663:
				str = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
		}
	}

	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hash, MISC::GET_HASH_KEY(str), str, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hash, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hash, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hash, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hash, MISC::VAR_STRING(2, str3));
	return;
}

void func_297(int iParam0, BOOL bParam1) // Position - 0xE2B9 Hash - 0x922C415B ^0xC09B2446
{
	Hash hash;
	char* str;
	char* str2;
	char* str3;

	switch (iParam0)
	{
		case -220219788:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_POISONOUS_TRAIL";
			hash = joaat("col_th_sub_poisonous_trail");
			break;
	
		case 6410548:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			hash = joaat("col_th_sub_landmarks_of_riches");
			break;
	
		case 218622660:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			hash = joaat("col_th_sub_tresor_des_morts");
			break;
	
		case 390004462:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			hash = joaat("col_th_sub_elemental_trail");
			break;
	
		case 499813453:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_JACK_HALL";
			hash = joaat("col_th_sub_jack_hall");
			break;
	
		case 666607663:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_HIGH_STAKES";
			hash = joaat("col_th_sub_high_stakes");
			break;
	}

	str3 = "COL_CTX_PLAYER_LOG";

	if (bParam1)
		str = "MISSION_COMPLETE";

	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_298(int iParam0) // Position - 0xE3D0 Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_299(int iParam0) // Position - 0xE3EB Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_300(int iParam0) // Position - 0xE406 Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_301(int iParam0) // Position - 0xE421 Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_302(int iParam0) // Position - 0xE43C Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_303(int iParam0) // Position - 0xE457 Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

void func_304(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0xE472 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_410(iParam0, &num, &num2);

	if (!func_411(iParam0, num, num2, bParam2))
		return;

	if (!func_478(iParam0, 1024))
		return;

	func_412(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_305(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE4D2 Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_410(iParam0, &num, &num2);

	if (!func_411(iParam0, num, num2, bParam2))
		return;

	if (!func_478(iParam0, 1024))
		return;

	func_412(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_306() // Position - 0xE54D Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_407())
		return func_307();

	endRange = func_407() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_407(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_479(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_408(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_307() // Position - 0xE5C7 Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_407());
	return func_408(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_308(var uParam0) // Position - 0xE5EA Hash - 0x26E9B20B ^0x108E1842
{
	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			break;
	
		case joaat("consumable_cigarette_box_cheap_used"):
			*uParam0 = joaat("consumable_cigarette_box_cheap");
			break;
	}

	return;
}

BOOL func_309(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xE63F Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_21(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_148(hParam0, false, true) };
	unk6 = { func_202(hParam0, unk, unk.f_4, false) };
	return func_235(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_310(Hash hParam0) // Position - 0xE68E Hash - 0x90E372CB ^0xEE55522E
{
	eStackSize stackSize;
	Hash hash;
	Hash hash2;

	if (func_23() != -1)
		return;

	switch (func_208(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_337(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			stackSize = func_481(hParam0);
		
			if (func_482(stackSize))
				func_483(stackSize, stackSize >= 0 && stackSize <= 5, true);
			else
				func_337(30, hParam0, 0, 0, false);
		
			if (func_484() == -2125499975 || func_484() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_337(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_484() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_337(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_485(-525676072, false))
				if (func_486(-525676072, &hash))
					func_337(33, hash, 0, 0, false);
		
			func_337(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_480(81053684, false) <= 0)
				func_337(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_487(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_170(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_267(24);
	
		if (func_290(&hash2, false))
			func_268(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_311(Hash hParam0) // Position - 0xE860 Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_77(hParam0, 943695443))
		func_488(0, hParam0);
	else if (func_77(hParam0, -2096528786))
		func_488(1, hParam0);
	else if (func_77(hParam0, -1094167013))
		func_488(2, hParam0);
	else if (func_77(hParam0, 1936654645))
		func_488(3, hParam0);
	else if (func_77(hParam0, 1306489306))
		func_488(4, hParam0);
	else if (func_77(hParam0, 435762317))
		func_488(5, hParam0);
	else if (func_77(hParam0, 1259363210))
		func_488(6, hParam0);
	else if (func_77(hParam0, 881398259))
		func_488(7, hParam0);
	else if (func_77(hParam0, -541549214))
		func_488(8, hParam0);
	else if (func_77(hParam0, 130796156))
		func_488(-1, hParam0);

	return;
}

int func_312(Hash hParam0, int iParam1) // Position - 0xE956 Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_489(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_490(hParam0, &unk5, &unk, iParam1);
}

struct<2> func_313(Hash hParam0) // Position - 0xE97F Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_21(hParam0, 0))
		return unk;

	if (func_77(hParam0, -305066475))
		if (func_23() == -1)
			if (func_77(hParam0, -537818634))
				return func_491(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_491(joaat("deadeye_items"));
	else if (func_77(hParam0, -537818634))
		return func_491(joaat("medicine_items"));

	if (func_77(hParam0, 2084895747))
		return func_491(joaat("lock_breaker_items"));

	return unk3;
}

void func_314(Hash hParam0) // Position - 0xEA13 Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_23() == -1)
				if (func_275(Global_1835011[4 /*74*/].f_1, true))
					func_256(109, true);
			break;
	}

	return;
}

void func_315(Hash hParam0, int iParam1) // Position - 0xEA4C Hash - 0x3053C451 ^0x5BD204F1
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_492(0));
	func_246(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_494(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

BOOL func_316(Hash hParam0, int iParam1) // Position - 0xEA8C Hash - 0xD7B4F3C5 ^0x943C8C22
{
	var unk;
	int num;
	int num2;

	if (!func_21(hParam0, 0))
		return false;

	unk.f_4 = func_320(iParam1);

	if (!func_495(hParam0, unk.f_4))
		return false;

	num = func_192(hParam0, &unk, true, false);
	num2 = func_405(hParam0, false);

	if (num >= 0 && num2 > num)
		return false;

	return true;
}

BOOL func_317(Hash hParam0) // Position - 0xEAEA Hash - 0x5E6E1858 ^0x84C97687
{
	!func_21(hParam0, 0);

	if (func_77(hParam0, 173360570))
		return true;

	return false;
}

BOOL func_318(Hash hParam0) // Position - 0xEB10 Hash - 0x33F7D399 ^0xEB534519
{
	if (!func_21(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(hParam0);
}

BOOL func_319(Hash hParam0, Hash hParam1, var uParam2) // Position - 0xEB2D Hash - 0x49B3EF5C ^0x9505D01C
{
	var data;
	int size;
	int collectionId;
	int i;
	Hash outKey;
	var unk10;
	int num;
	int j;

	if (!func_21(hParam0, 0))
		return false;

	*uParam2 = 0;
	data = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, hParam1, 0, -1, 0, 0) };
	collectionId = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&data, &size, 1);

	if (collectionId != -1)
	{
		unk10 = 15;
	
		for (i = 0; i < size; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey))
			{
				if (func_193(outKey, hParam1, &unk10, &num, true, false))
				{
					for (j = 0; j < num; j = j + 1)
					{
						if (hParam0 == unk10[j /*2*/])
							*uParam2 = *uParam2 + unk10[j /*2*/].f_1;
					}
				}
			}
		}
	
		ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(collectionId);
	}

	return true;
}

int func_320(int iParam0) // Position - 0xEBE0 Hash - 0xF3DAE918 ^0xA65130AC
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_SATCHEL");
	
		case 1:
			return -1360128126;
	
		case 2:
			return 1426626782;
	
		case 3:
			return 1227915917;
	
		default:
		
	}

	return joaat("SLOTID_SATCHEL");
}

int func_321(int iParam0) // Position - 0xEC2D Hash - 0x92F940EE ^0x92F940EE
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

float func_322(int iParam0) // Position - 0xEC81 Hash - 0xBAFBA316 ^0xBAFBA316
{
	switch (iParam0)
	{
		case 1:
			return 5f;
	
		case 2:
			return 20f;
	
		case 3:
			return 10f;
	
		case 4:
			return 10f;
	
		case 5:
			return 20f;
	
		case 6:
			return 10f;
	
		case 7:
			return 15f;
	
		case 8:
			return 15f;
	
		case 9:
			return 20f;
	
		case 10:
			return 5f;
	
		case 11:
			return 5f;
	
		case 12:
			return 10f;
	
		case 13:
			return 20f;
	
		case 14:
			return 30f;
	
		case 15:
			return 5f;
	
		case 16:
			return 5f;
	
		case 17:
			return 3f;
	
		case 18:
			return 20f;
	
		case 19:
			return func_496(iParam0);
	
		case 20:
			return 25f;
	
		case 21:
			return 50f;
	
		case 22:
			return 100f;
	
		case 23:
			return 150f;
	
		case 24:
			return 20f;
	
		case 25:
			return 10f;
	
		case 26:
			return 20f;
	
		case 27:
			return 20f;
	
		case 28:
			return 20f;
	
		case 29:
			return 20f;
	
		case 30:
			return func_496(iParam0);
	
		case 31:
			return 25f;
	
		case 32:
			return 50f;
	
		case 33:
			return 100f;
	
		case 34:
			return 150f;
	
		case 35:
			return 1f;
	
		case 36:
			return 5f;
	
		case 37:
			return 1f;
	
		case 38:
			return 3f;
	
		case 39:
			return 1f;
	
		case 40:
			return 1f;
	
		case 41:
			return 1f;
	
		case 42:
			return 5f;
	
		case 43:
			return 10f;
	
		case 44:
			return 5f;
	
		case 45:
			return 5f;
	
		case 46:
			return 10f;
	
		case 47:
			return 10f;
	
		case 48:
			return 5f;
	
		case 49:
			return 20f;
	
		case 50:
			return func_496(iParam0);
	
		case 51:
			return 25f;
	
		case 52:
			return 50f;
	
		case 53:
			return 100f;
	
		case 54:
			return 150f;
	
		case 55:
			return 5f;
	
		default:
		
	}

	return 0f;
}

BOOL func_323(int iParam0) // Position - 0xEF4F Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_266(18);
	
		case 1:
			return func_266(19);
	
		case 2:
			return func_266(20);
	
		default:
		
	}

	return true;
}

int func_324(int iParam0) // Position - 0xEF8D Hash - 0xBCE241D5 ^0x339AC097
{
	return func_497(Global_40.f_11095.f_11[iParam0]);
}

void func_325(int iParam0, float fParam1, BOOL bParam2) // Position - 0xEFA5 Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_23() != -1)
		return;

	if (Global_1347477.f_117 || !func_266(31))
		return;

	num = func_324(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_324(iParam0);

	if (func_498(iParam0) && func_499(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_500(num2, fParam1);
		
			if (fParam1 > (float)func_501(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_256(func_502(iParam0), false);
				
					func_503(iParam0, num3, num4);
					func_113(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_326(int iParam0) // Position - 0xF0A7 Hash - 0xEB40D7A4 ^0xF53633C4
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_327(int iParam0) // Position - 0xF0B3 Hash - 0x21FAF347 ^0xAF7D8F21
{
	switch (iParam0)
	{
		case 0:
			return joaat("itemtype_player_health");
	
		case 1:
			return joaat("itemtype_player_stamina");
	
		case 2:
			return joaat("itemtype_player_deadeye");
	
		default:
		
	}

	return 0;
}

int func_328(Hash hParam0) // Position - 0xF0EE Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_148(hParam0, true, false) };
	return func_334(unk.f_4);
}

int func_329(int iParam0, int iParam1) // Position - 0xF10A Hash - 0x9D981F95 ^0x9D981F95
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
	
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
	
		case -1884748965:
			return 32;
	
		case -1586649372:
			return 33;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
	
		case -1505978566:
			return 22;
	
		case -1489346253:
			return 38;
	
		case -1364808185:
			return 19;
	
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
	
		case -1197751823:
			return 20;
	
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
	
		case -1130865351:
			return 31;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
	
		case -893163968:
			return 17;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
	
		case -450913544:
			return 18;
	
		case -426430150:
			return 29;
	
		case -358215195:
			return 39;
	
		case -338487716:
			return 11;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
	
		case 304805134:
			return 21;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
	
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
	
		case 788010710:
			return 34;
	
		case 1108822547:
			return 10;
	
		case 1145151482:
			return 23;
	
		case 1250092473:
			return 16;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
	
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
	
		case 1600962399:
			return 13;
	
		case 1672288269:
			return 15;
	
		case 1742327865:
			return 12;
	
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
	
		case 1788623170:
			return 30;
	
		case 1849504272:
			return 14;
	
		case 1900541263:
			return 37;
	
		case 1958421083:
			return 35;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_330(Hash hParam0) // Position - 0xF2DB Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_77(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_77(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_77(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_77(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_77(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_77(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

BOOL func_331(Hash hParam0, var uParam1) // Position - 0xF42C Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_329(func_504(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_208(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_332(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF4A3 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_329(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_338(524288))
	{
		switch (iParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				num = num + 1;
				break;
		
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				num = num + 1;
				break;
		}
	}

	num = num + PED::_0x31B2E7F2E3C58B89(hParam0, joaat("base"), bParam2, bParam3);
	return num;
}

BOOL func_333(Hash hParam0) // Position - 0xF50E Hash - 0xDEBEF6D4 ^0xDEBEF6D4
{
	switch (hParam0)
	{
		case joaat("clothing_hl_player_boot_007_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_2"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_3"):
			return true;
	
		case joaat("clothing_hl_player_boot_009_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_4"):
			return true;
	
		default:
		
	}

	return false;
}

int func_334(var uParam0) // Position - 0xF551 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_505(i, 1);
	}

	return -358215195;
}

BOOL func_335(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xF58C Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_506();

	if (iParam2 == 39)
	{
		unk = { func_148(hParam0, true, false) };
		iParam2 = func_329(func_334(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_77(hParam0, 866047851) && func_330(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_338(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_507(func_505(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_508(iParam2);
	func_509(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_510(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_510(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_511(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_512(hParam0, iParam2, hParam1, func_23() != -1);

	if (bParam4)
		func_513(&(Global_1946054.f_1378), true, 3);
	else
		func_513(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_514(func_505(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_336(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF799 Hash - 0x5AF76643 ^0x5AF76643
{
	func_515(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_337(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0xF7B2 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_516(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_517(num);
	return;
}

BOOL func_338(BOOL bParam0) // Position - 0xF7E4 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_339() // Position - 0xF7F5 Hash - 0xB6203BF0 ^0x217DD714
{
	func_518(&(Global_1946054.f_2776));
	func_519(32768);
	func_514(1108822547, 8, 6);
	return;
}

int func_340(int iParam0) // Position - 0xF81C Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_329(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_341(int iParam0) // Position - 0xF880 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_520(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_521(num);
	return;
}

void func_342(int iParam0, int iParam1, int iParam2) // Position - 0xF8C4 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_521(num);
	return;
}

BOOL func_343(int iParam0) // Position - 0xF8E4 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_23())
	{
		case -1:
			return Global_1357549.f_1495 && iParam0 != false;
	}

	return false;
}

BOOL func_344(int iParam0) // Position - 0xF90F Hash - 0x3FBD8F15 ^0xE5437CE8
{
	if (!func_522(iParam0))
		return false;

	return MISC::IS_BIT_SET(Global_40.f_4283.f_307, func_523(iParam0, 1));
}

void func_345(int iParam0) // Position - 0xF939 Hash - 0x9F8F0F90 ^0x2EEF429D
{
	if (!func_522(iParam0))
		return;

	MISC::SET_BIT(&(Global_40.f_4283.f_307), func_523(iParam0, 1));
	return;
}

BOOL func_346(var uParam0) // Position - 0xF962 Hash - 0x39705408 ^0x39705408
{
	return func_174(*uParam0, 2);
}

float func_347() // Position - 0xF972 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_348(var uParam0, int iParam1) // Position - 0xF9A4 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_349(var uParam0, int iParam1) // Position - 0xF9B5 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_350(int iParam0) // Position - 0xF9CA Hash - 0xB11233B9 ^0x48EE22B7
{
	if (Global_1572887.f_12 == -1)
		return false;

	return func_524(32, iParam0);
}

BOOL func_351(int iParam0) // Position - 0xF9E8 Hash - 0x5D034E98 ^0x5D034E98
{
	if (iParam0 >= 1 && iParam0 <= 183)
		return true;

	return false;
}

int func_352(int iParam0) // Position - 0xFA06 Hash - 0x49256A88 ^0x2B8FFDBA
{
	if (!func_351(iParam0))
		return 0;

	return Global_1131585.f_12[iParam0 /*3*/].f_2;
}

BOOL func_353(int iParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0xFA28 Hash - 0xA90653C8 ^0xA90653C8
{
	var unk;

	return func_525(iParam0, &unk, bParam1, iParam2, iParam3);
}

BOOL func_354() // Position - 0xFA3E Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1954819.f_866;
}

int func_355(int iParam0) // Position - 0xFA4D Hash - 0xB8EC44B7 ^0x10011532
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

BOOL func_356(int iParam0) // Position - 0xFC1E Hash - 0x96EC57 ^0x2A07EA1A
{
	if (func_526(iParam0))
		return VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1);

	return false;
}

void func_357(var uParam0, Hash hParam1, Hash hParam2) // Position - 0xFC42 Hash - 0x8560B5D8 ^0x6EB0FF3E
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
				if (outData.f_2 == joaat("cost_type_craft") && outData != -489628648 && Global_1911914.f_1579 || !func_124(hParam1, outData, true))
					Global_1911914[uParam0->f_55 - 1 /*9*/].f_7 = Global_1911914[uParam0->f_55 - 1 /*9*/].f_7 + 1;
			else
				Global_1911914[uParam0->f_55 - 1 /*9*/].f_8 = i;
	}

	return;
}

void func_358(var uParam0, Hash hParam1) // Position - 0xFCF1 Hash - 0x73D38B14 ^0x6EBCB5A9
{
	int num;
	int num2;
	int num3;
	var unk;
	int i;
	Hash hash;

	num3 = func_53(hParam1, 1697966752);

	if (num3 == 0)
		return;

	unk = { func_136(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("cost_crafting_grill"), 0, -1, num3, 0) };

	if (func_137(unk, &num, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			hash = func_138(i, num);
		
			if (func_21(hash, 0))
				if (Global_1911914.f_1579 || !func_124(hash, joaat("cost_crafting_grill"), true))
					Global_1911914[uParam0->f_55 - 1 /*9*/].f_7 = Global_1911914[uParam0->f_55 - 1 /*9*/].f_7 + 1;
		}
	
		func_139(num);
	}

	return;
}

BOOL func_359(int iParam0) // Position - 0xFDA8 Hash - 0x891F222E ^0x891F222E
{
	if (iParam0 < 0)
		return false;

	return iParam0 <= func_527(1);
}

BOOL func_360(int iParam0) // Position - 0xFDC2 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

int func_361(Hash hParam0, int iParam1) // Position - 0xFDCB Hash - 0x3B4883DD ^0xBE4A62CA
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_21(hParam0, 0))
		return 0;

	unk = { func_201(false) };
	unk.f_4 = func_320(iParam1);
	guid = { func_202(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_147(false), &guid, false);
	return inventoryItemCountWithGuid;
}

void func_362(Hash hParam0, var uParam1, var uParam2) // Position - 0xFE26 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_363(Hash hParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x10034 Hash - 0x84700F53 ^0xB9E7AA96
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

	return hash;
}

void func_364(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x10106 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_365(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x10121 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_147(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_366(int iParam0) // Position - 0x10146 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_367(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x10167 Hash - 0x7EFAC478 ^0x4E4217E0
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
		unk13[i /*2*/] = uParam2->[i /*2*/];
		unk13[i /*2*/].f_1 = 1f;
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
							if (unk13[i /*2*/] == outData2)
							{
								unk13[i /*2*/].f_1 = unk13[i /*2*/].f_1 - outData2.f_1;
								break;
							}
						}
					}
				}
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i /*2*/].f_1 != 1f)
			uParam2->[i /*2*/].f_1 = BUILTIN::FLOOR((float)uParam2->[i /*2*/].f_1 * (unk13[i /*2*/].f_1 / 1f));
	}

	return;
}

Hash func_368(Hash hParam0) // Position - 0x102CE Hash - 0x5FB59AC3 ^0xF8EA047B
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

int func_369(Hash hParam0) // Position - 0x10640 Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_77(hParam0, 1064293907))
		return 2;
	else if (func_77(hParam0, -1218707194))
		return 1;
	else if (func_77(hParam0, 1888974372))
		return 0;

	return 1;
}

int func_370(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x10685 Hash - 0x97BDF54F ^0xE45E1733
{
	var unk;
	int num;
	int i;

	unk = 15;
	PED::_0xB29C553BA582D09E(&unk, hParam0, iParam1, 1);
	num = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_21(unk[i], 0) && hParam2 == unk[i])
			num = num + 1;
	}

	return num;
}

BOOL func_371(int iParam0) // Position - 0x106D9 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_218(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_372(Entity eParam0) // Position - 0x10711 Hash - 0xF5A7D53A ^0xBECE42FF
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

struct<4> func_373() // Position - 0x10774 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_374(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x10780 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_147(false);
	*panParam1 = { func_202(hParam0, func_203(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

Hash func_375(int iParam0, int iParam1) // Position - 0x107C5 Hash - 0xE1D12727 ^0x71D656A6
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
	
		case 1:
			return -1783281882;
	
		case 2:
			return 1704602624;
	
		case 3:
			return 1214181762;
	
		case 4:
			return 1520605650;
	
		case 5:
			return 551482925;
	
		case 6:
			return 843929315;
	
		case 7:
			return 1974334822;
	
		case 8:
			return -1963435638;
	
		case 9:
			return -430578371;
	
		case 10:
			return -730381952;
	
		case 11:
			return -1500304973;
	
		case 12:
			return -253503777;
	
		case 13:
			return 1352275534;
	
		case 14:
			return 1666399168;
	
		case 15:
			return -1911121386;
	
		case 16:
			return 1756656691;
	
		case 17:
			return -1774867076;
	
		case 18:
			return -421952220;
	
		case 19:
			return -1087003323;
	
		case 20:
			return 1231618917;
	
		case 21:
			return -1183777174;
	
		case 22:
			return -841767082;
	
		case 23:
			return 1043717005;
	
		case 24:
			return 142663787;
	
		case 25:
			return 1718143051;
	
		case 26:
			return -6605744;
	
		case 27:
			return 953047564;
	
		case 28:
			return 769706682;
	
		case 29:
			return 1635590003;
	
		case 30:
			return -2047978619;
	
		case 31:
			return -586319254;
	
		case 32:
			return 249896112;
	
		case 33:
			return -1060513333;
	
		case 34:
			return 1317351007;
	
		case 35:
			return -500478573;
	
		case 36:
			return -806573802;
	
		case 37:
			return -1109949204;
	
		case 38:
			return -740156546;
	
		case 39:
			return -684532710;
	
		case 40:
			return 1158805436;
	
		case 41:
			return -559473670;
	
		case 42:
			return -797147251;
	
		case 43:
			return -382216265;
	
		case 44:
			return 1419177114;
	
		case 45:
			return 1704297235;
	
		case 46:
			return -1139016418;
	
		case 47:
			return 897705377;
	
		case 48:
			return 17961769;
	
		case 49:
			return 205582207;
	
		case 50:
			return 900740963;
	
		case 51:
			return -1369589344;
	
		case 52:
			return -1695823795;
	
		case 53:
			return -41453074;
	
		case 54:
			return 539767227;
	
		case 55:
			return 1210490314;
	
		case 56:
			return -399684751;
	
		case 57:
			return 2138893455;
	
		case 58:
			return -1617010487;
	
		case 59:
			return -832377028;
	
		case 60:
			return -428040245;
	
		case 61:
			return 1279288897;
	
		case 62:
			return -594897905;
	
		case 63:
			return -1360459240;
	
		case 64:
			return 1838428396;
	
		case 65:
			return -1467846997;
	
		case 66:
			return -490610263;
	
		case 67:
			return -1885413079;
	
		case 68:
			return 708884155;
	
		case 69:
			return joaat("BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS") /* collision: BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS */;
	
		case 70:
			return -1912136700;
	
		case 71:
			return -1268031552;
	
		case 72:
			return 1177953227;
	
		case 73:
			return 2130805296;
	
		case 74:
			return 38093490;
	
		case 75:
			return -269153218;
	
		case 76:
			return -1995068011;
	
		case 77:
			return -164284834;
	
		case 78:
			return 1446463345;
	
		case 79:
			return 1501315823;
	
		case 80:
			return -750379482;
	
		case 81:
			return -929560937;
	
		case 82:
			return 608323241;
	
		case 83:
			return 1030796013;
	
		case 84:
			return 1915057434;
	
		case 85:
			return -1582276476;
	
		case 86:
			return 692059311;
	
		case 87:
			return 2062839241;
	
		case 88:
			return -1884531872;
	
		case 89:
			return -866434534;
	
		case 90:
			return -1252192421;
	
		case 91:
			return 1243288963;
	
		case 92:
			return -1953772189;
	
		case 93:
			return 754411745;
	
		case 94:
			return 545309006;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

int func_376(Hash hParam0, Hash hParam1) // Position - 0x1290F Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

void func_377(int iParam0, int iParam1) // Position - 0x12929 Hash - 0x26256B16 ^0x79A35F4E
{
	int i;
	int num;

	if (iParam0 == -1)
		return;

	if (Global_1223212 < 20)
	{
		Global_1223212 = Global_1223212 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223212.f_1[i /*9*/] = { Global_1223212.f_1[i + 1 /*9*/] };
		}
	}

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;
	Global_1223212.f_1[Global_1223212 - 1 /*9*/] = { num };
	return;
}

void func_378(int iParam0) // Position - 0x129A6 Hash - 0xEA427C10 ^0xAE8C4401
{
	var statId;

	if (iParam0 <= 0)
		return;

	if (func_527(1) < iParam0)
		iParam0 = func_527(1);

	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	statId = { func_491(joaat("CAREER_CASH")) };
	STATS::_STAT_ID_DECREMENT_INT(&statId, iParam0);
	return;
}

void func_379(int iParam0, const char* sParam1, int iParam2) // Position - 0x129E4 Hash - 0xA31E0DC ^0xA5977793
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_SPEND";

	func_246(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 1, joaat("COLOR_RED"), 0, 0, 0, true);
	return;
}

BOOL func_380(Hash hParam0, int iParam1) // Position - 0x12A25 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_21(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_190(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_473("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_474(&unk, i, num, num2))
			{
			}
			else if (!func_232(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_366(num);
				return true;
			}
		}
	
		func_366(num);
	}

	return false;
}

Hash func_381(Entity eParam0) // Position - 0x12ACD Hash - 0xC81C18F9 ^0xACAAEE80
{
	Ped pedIndexFromEntityIndex;
	var unk;
	var unk2;
	var unk3;
	var unk4;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
		return 0;

	func_390(pedIndexFromEntityIndex, &unk2, &unk3, &unk, &unk4);

	if (func_391(&num, pedIndexFromEntityIndex, unk, unk2))
	{
	}

	return num;
}

Hash func_382(Entity eParam0) // Position - 0x12B29 Hash - 0x715B29E5 ^0xAF0BC29E
{
	Hash carriableFromEntity;
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	carriableFromEntity = ENTITY::_GET_CARRIABLE_FROM_ENTITY(eParam0);

	if (carriableFromEntity == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(eParam0))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);
			carriableFromEntity = func_528(pedIndexFromEntityIndex);
		}
	}

	return carriableFromEntity;
}

int func_383(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0x12B68 Hash - 0xD56AECBD ^0x2416076C
{
	Ped ped;

	if (!bParam4)
	{
		iParam1 = func_529(hParam0, iParam1, true, true, -142743235);
	}
	else
	{
		ped = func_530(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(ped))
			func_531(&ped, hParam0, &iParam1, bParam2, hParam3);
	}

	if (iParam1 <= 0)
		return 1;

	return func_532(hParam0, iParam1, bParam2, hParam3);
}

BOOL func_384(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x12BBF Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_533(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_80(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_147(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

BOOL func_385(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0x12C0B Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_533(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_210(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_80(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_147(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

int func_386(Hash hParam0, Hash hParam1) // Position - 0x12C9B Hash - 0xD1D2F01F ^0xAD322AEB
{
	int num;
	int num2;
	Hash hash;

	num = -1;
	num2 = 1;
	hash = 0;
	num2 = func_369(hParam0);
	hash = func_368(hParam0);

	if (hash != 0)
	{
		func_225(hParam0, 1, true, -142743235, false);
		num = func_534(hash, num2, hParam0, hParam1);
	}

	return num;
}

BOOL func_387(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x12CE1 Hash - 0x17E58D7C ^0xB0311DE1
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

	unk = { func_363(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_364(&unk, func_203(false));

	if (!func_365(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_474(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_385(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_366(num);
	num3 < iParam1;
	return true;
}

void func_388(Hash hParam0, int iParam1) // Position - 0x12DAC Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_77(hParam0, 606799272))
			func_535(hParam0, iParam1);
	
		if (func_77(hParam0, -1112814642) && func_77(hParam0, -1697809989))
			func_286(hParam0, iParam1, true, false);
	}

	return;
}

int func_389(Ped pedParam0, Any* panParam1) // Position - 0x12DFF Hash - 0xC08B2C8D ^0x93715860
{
	int damageCleanliness;
	int skinningQuality;
	var unk;
	var unk2;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::GET_IS_ANIMAL(pedParam0) && !ENTITY::_GET_IS_BIRD(pedParam0))
		return 0;

	func_390(pedParam0, &skinningQuality, &unk, &damageCleanliness, &unk2);
	num = PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(panParam1, pedParam0, damageCleanliness, skinningQuality);
	return num;
}

void func_390(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x12E4D Hash - 0x125E1FB8 ^0x58C5F328
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(pedParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(pedParam0);

	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(pedParam0);
	
		switch (*uParam4)
		{
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		
			case 0:
				*uParam1 = 0;
				break;
		
			case 1:
				*uParam1 = 1;
				break;
		}
	}

	return;
}

BOOL func_391(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x12EC2 Hash - 0xF684EE16 ^0xD8F147D7
{
	int num;
	var unk;
	BOOL flag;

	num = uParam3;
	unk = iParam2;

	if (num < unk)
		iParam2 = num;

	flag = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(anParam0, pedParam1, iParam2);
	return flag;
}

BOOL func_392(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x12EEB Hash - 0x1DFD4C48 ^0x2E953DF6
{
	var unk;
	var unk6;

	if (!func_21(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_201(false) };
	unk.f_4 = 724026534;
	unk6 = { func_202(hParam0, unk, unk.f_4, false) };
	return func_385(hParam0, &unk6, &unk, iParam1, hParam3, bParam2, false);
}

int func_393(Hash hParam0) // Position - 0x12F42 Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_21(hParam0, 0))
		return 0;

	category = func_208(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

BOOL func_394(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6) // Position - 0x12F71 Hash - 0x80B0B89C ^0x78EC1C55
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_147(bParam6), &uParam0, hParam4, &outGuid))
		return false;

	if (!func_210(outGuid, panParam5, bParam6, false))
		return false;

	return true;
}

BOOL func_395(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x12FB5 Hash - 0x1DD1BE14 ^0x90608F32
{
	var unk;

	if (!func_80(false))
		return func_536(uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_210(uParam0, &unk, false, false))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_147(false), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_396(Hash hParam0) // Position - 0x13028 Hash - 0x5E6E1858 ^0x6F4DE1DC
{
	!func_21(hParam0, 0);

	if (func_77(hParam0, 162787671))
		return true;

	return false;
}

BOOL func_397(Hash hParam0, var uParam1) // Position - 0x1304E Hash - 0x9965E721 ^0x4526F41
{
	var unk;

	if (!func_537(856287005, hParam0))
		return false;

	unk = { func_234() };
	*uParam1 = func_398(unk, hParam0, false);

	if (!func_21(*uParam1, 0))
		return false;

	return true;
}

Hash func_398(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5) // Position - 0x13090 Hash - 0x730D74FA ^0xBEE364CC
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_394(uParam0, hParam4, &unk, bParam5))
		return unk.f_4;

	return 0;
}

BOOL func_399(Hash hParam0) // Position - 0x130BE Hash - 0x37EEAC8A ^0x201FD0EE
{
	if (hParam0 == 263080063 || hParam0 == -34331381 || hParam0 == -993578318 || hParam0 == 579268144 || hParam0 == 1104489688)
		return true;

	return false;
}

BOOL func_400(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x1310E Hash - 0x7D2A9D5F ^0xA6A7295C
{
	int num;
	int num2;
	var unk;
	var unk19;
	int i;

	if (hParam0 == 0)
		return false;

	unk = { func_363(0, hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };
	func_364(&unk, func_234());

	if (func_365(&unk, &num, &num2, false))
	{
		unk19.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_474(&unk19, i, num, num2))
			{
				if (func_21(unk19.f_4, 0) && !unk19.f_10)
				{
					if (bParam2 && func_399(unk19.f_4))
					{
					}
					else
					{
						*uParam1 = { unk19 };
						func_366(num);
						return true;
					}
				}
			}
		}
	
		func_366(num);
	}

	return false;
}

void func_401(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x131C5 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_402(Hash hParam0) // Position - 0x131F6 Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_23() != -1)
		return false;

	if (func_243(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_149(hParam0, &unk, 1, false, false);

	return func_221(hParam0, 1, false);
}

void func_403(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x1323A Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_127(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_161(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_146(weaponHash))
	{
		if (func_23() == -1)
			func_162(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_129(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_164(hParam0, iParam1, false, false, false);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_404(Hash hParam0, var uParam1) // Position - 0x132E1 Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_77(hParam0, 58855631))
	{
		func_538(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

int func_405(Hash hParam0, BOOL bParam1) // Position - 0x1330F Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_271(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_147(bParam1), hParam0, false);
}

BOOL func_406() // Position - 0x13339 Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_23() != -1)
		return false;

	if (!func_259())
		return false;

	if (!func_275(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_275(Global_1835011[2 /*74*/].f_1, true) && func_275(Global_1347702[120 /*49*/].f_15, true) && !func_275(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_275(Global_1835011[37 /*74*/].f_1, true) && !func_275(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_275(Global_1835011[57 /*74*/].f_1, true) && !func_275(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_275(Global_1835011[26 /*74*/].f_1, true) && !func_275(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_275(Global_1835011[62 /*74*/].f_1, true) && func_275(Global_1835011[63 /*74*/].f_1, true) && !func_275(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_275(Global_1835011[75 /*74*/].f_1, true) && !func_275(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_275(Global_1835011[76 /*74*/].f_1, true) && !func_275(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_275(Global_1835011[40 /*74*/].f_1, true) && func_275(Global_1835011[41 /*74*/].f_1, true) && !func_275(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_275(Global_1835011[62 /*74*/].f_1, true) && func_275(Global_1835011[63 /*74*/].f_1, true) && !func_275(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_275(Global_1835011[65 /*74*/].f_1, true) && func_275(Global_1835011[66 /*74*/].f_1, true) && !func_275(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

int func_407() // Position - 0x1357F Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_408(Hash hParam0) // Position - 0x13591 Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_409(BOOL bParam0, int iParam1) // Position - 0x1359F Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_539(&Global_0, 8);

	if (!func_259() || func_23() != -1)
		return;

	func_539(&Global_0, 1);
	return;
}

void func_410(int iParam0, var uParam1, var uParam2) // Position - 0x135E5 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_411(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x13601 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_540(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_541(iParam0))
		return false;

	if (func_542(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_478(iParam0, 1) || func_543(32768))
		if (!func_478(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_544())
		return false;

	return true;
}

void func_412(int iParam0, int iParam1) // Position - 0x136A3 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_413(int iParam0) // Position - 0x136C7 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_440(iParam0);
	return num == 3 || num == 4;
}

Hash func_414(int iParam0) // Position - 0x136E5 Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

int func_415(Hash hParam0, int iParam1) // Position - 0x1379E Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_545(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_416(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x137CD Hash - 0xF20034E5 ^0xCC975048
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_262() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_546(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_547(), 12);
			break;
	
		case -1531394072:
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_EX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", iParam4, iParam5);
			break;
	
		case joaat("dino_bones"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_DB_COMPLETE";
			else if (func_455() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_548(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_455(), 30);
			break;
	
		case joaat("taxidermy"):
			if (iParam2 == 3)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 4)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_VACATION");
			else if (iParam2 == 5)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_ON_VACATION");
			else if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			else if (iParam2 == 8)
				sParam3 = "COL_TX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_415(iParam6, 20));
			break;
	
		case 1995362678:
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_LF_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_549(), 13);
			break;
	
		case joaat("rock_carvings"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_RC_COMPLETE";
			else if (func_456() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_550(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_456(), 10);
			break;
	}

	return sParam3;
}

BOOL func_417(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x13ABA Hash - 0xC978E890 ^0x1621426E
{
	if (hParam2 == joaat("CIGARETTE_CARDS"))
		if (hParam1 == joaat("col_cc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_cc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_cc_intro_pre"));
	else if (hParam2 == joaat("dino_bones"))
		if (hParam1 == joaat("col_db_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_db_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_db_intro_pre"));
	else if (hParam2 == joaat("rock_carvings"))
		if (hParam1 == joaat("col_rc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_rc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_rc_intro_pre"));

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_REMOVE_ENTRY(3, hParam1);

	return true;
}

BOOL func_418(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x13B67 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_419(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x13B93 Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_420(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x13BE2 Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_551(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_221(hash, 1, false) || func_553(func_552(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_551(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_551(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_455() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_554(i)), func_554(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_548() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_554(i)), func_554(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_554(i)), func_554(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_466(iParam3, func_555(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_462(hash) - iParam7 >= func_415(iParam3, func_556(i));
				else
					flag = func_462(hash) >= func_415(iParam3, func_556(i));
			else if (hParam4 == hash)
				flag = func_462(hash) + iParam7 >= func_415(iParam3, func_556(i));
			else
				flag = func_462(hash) >= func_415(iParam3, func_556(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_558(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
				flag = true;
			else if (iParam5 == 8)
				flag = true;
			else
				flag = false;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0)), flag, true, false);
		}
	
		if (hParam2 == joaat("rock_carvings"))
		{
			if (i == 0)
			{
				flag = func_456() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_560(i)), func_560(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_550() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_560(i)), func_560(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_560(i)), func_560(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_466(iParam3, func_555(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_462(hash) - iParam7 >= 1;
				else
					flag = func_561(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_561(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_562(hash)), func_562(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_421(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x13F57 Hash - 0x3C34F826 ^0xAAA0D7D5
{
	BOOL flag;

	flag = false;

	if (iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("CIGARETTE_CARDS"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == -1531394072)
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == 1995362678)
	{
		if (func_549() >= 13)
			flag = true;
		else
			flag = false;
	
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", flag, true, false);
	}

	if (iParam3 == 7 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 || iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("taxidermy"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", flag, true, false);

	return true;
}

BOOL func_422(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x14062 Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_16(func_563(0)) && func_564(0) == 1 || func_564(0) == 8 || func_564(0) == 6)
		iParam3 = 7;

	if (hParam2 == joaat("dino_bones") || hParam2 == 1995362678 || hParam2 == joaat("rock_carvings"))
	{
		if (iParam3 == 7)
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
	}
	else if (hParam2 == joaat("taxidermy"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
			}
		}
	}

	return true;
}

int func_423(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, const char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x14104 Hash - 0x51CE9407 ^0x19439D00
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam7;
	num.f_1 = sParam8;
	num.f_2 = sParam9;
	num.f_3 = iParam11;
	num.f_4 = iParam4;
	num.f_4.f_1 = iParam6;
	num.f_4.f_2 = sParam5;
	num2.f_7 = 1;
	num2 = iParam10;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam12, bParam13);
	return num3;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Hash hParam0) // Position - 0x1417B Hash - 0xA17D549C ^0x2000EADC
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return "COL_CC_INV_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return "COL_CC_ACT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return "COL_CC_GRL_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return "COL_CC_ART_SET";
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return "COL_CC_LND_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return "COL_CC_PAM_SET";
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return "COL_CC_SPT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return "COL_CC_AML_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return "COL_CC_PLT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return "COL_CC_GUN_SET";
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return "COL_CC_HOR_SET";
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return "COL_CC_VEH_SET";
	
		default:
		
	}

	return "";
}

int func_425(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1422B Hash - 0xB88D7AA5 ^0x36259347
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
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam9, bParam10);
	return num3;
}

BOOL func_426(int iParam0) // Position - 0x1428C Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_427(int iParam0) // Position - 0x1429F Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_428(int iParam0) // Position - 0x142C9 Hash - 0x48EBE6BD ^0x358C7E90
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_40.f_7857[num2];
	MISC::SET_BIT(&address, offset);
	Global_40.f_7857[num2] = address;
	return;
}

void func_429(int iParam0) // Position - 0x14303 Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_259() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_256(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_259() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_256(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_259() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_256(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_259() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_256(589, false);
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
			func_565(true);
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
			break;
	
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_566(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_566(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_566(3);
			break;
	
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
	
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
	
		case 23:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
	
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
		
			if (func_23() == -1)
			{
				if (!func_487(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_573(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_433())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_221(hash, 1, false))
						func_309(hash, 1, 752097756);
				
					func_170(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
				}
			}
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
			break;
	
		case 33:
			func_567(true);
			break;
	
		case 34:
			func_568(true);
			break;
	
		case 35:
			func_569(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_570(false);
			break;
	
		case 38:
			func_571(false);
			break;
	
		case 39:
			func_572(false);
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
			break;
	
		case 45:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
	
		case 46:
			func_574();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_23() == -1)
				if (!func_221(1013902307, 1, false))
					func_309(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_23() == -1)
				if (!func_221(786809402, 1, false))
					func_309(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_23() == -1)
			{
				if (!func_221(1013902307, 1, false))
					func_309(1013902307, 1, 752097756);
			
				if (!func_221(142640135, 1, false))
					func_309(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_23() == -1)
			{
				if (!func_221(786809402, 1, false))
					func_309(786809402, 1, 752097756);
			
				if (!func_221(-518019409, 1, false))
					func_309(-518019409, 1, 752097756);
			}
			break;
	
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
	
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
	
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
	
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
	
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}

	return;
}

void func_430(Hash hParam0, int iParam1) // Position - 0x1492B Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_132(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_431(Hash hParam0) // Position - 0x14973 Hash - 0x708BD33E ^0xC1ACC2ED
{
	char* propertyName;
	char* propertyName2;
	eStackSize value;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
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

	DECORATOR::DECOR_SET_INT(Global_35, propertyName, hParam0);
	value = func_575();
	func_576(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_432(Hash hParam0) // Position - 0x14A42 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_22(hParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("ammo_arrow")) <= 0)
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
	
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
	
		if (pedAmmoByType >= num)
			num = 0;
		else if (pedAmmoByType > 0)
			num = num - pedAmmoByType;
	}

	return num;
}

BOOL func_433() // Position - 0x14ABE Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_23() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_434(Hash hParam0) // Position - 0x14AE3 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_435(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x14AF5 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_436(Hash hParam0) // Position - 0x14B1B Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_266(50))
			{
				if (!func_266(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_266(51))
			{
				if (!func_266(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_437() // Position - 0x14B87 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_438() // Position - 0x14B98 Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_439() // Position - 0x14BB9 Hash - 0xDC6E219D ^0xBD2A18DD
{
	float num;
	float num2;

	num = Global_40.f_11095.f_44;
	num2 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num - Global_40.f_11095.f_69);
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num2);
	return;
}

int func_440(int iParam0) // Position - 0x14C0E Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_16(iParam0))
		return -1;

	return func_577(iParam0);
}

int func_441() // Position - 0x14C2A Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_221(func_578(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_442(Hash hParam0) // Position - 0x14C5C Hash - 0xBD10D1A2 ^0xAD2FE305
{
	switch (hParam0)
	{
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("provision_earring_silver"):
		case joaat("provision_rs_abalone_shell_fragment"):
			return joaat("provision_talisman_buffalo_horn");
	
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("provision_bracelet_silver"):
		case joaat("provision_rc_quartz_chunk"):
			return joaat("provision_talisman_bear_claw");
	
		case joaat("provision_bracelet_gold"):
		case joaat("provision_cc_vintage_handcuffs"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("provision_talisman_alligator_tooth");
	
		case joaat("provision_rf_wood_cobalt"):
		case joaat("provision_earring_gold"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("provision_talisman_boar_tusk");
	
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("provision_talisman_raven_claw");
	}

	return 0;
}

BOOL func_443(int iParam0, Hash hParam1) // Position - 0x14CF2 Hash - 0x33707815 ^0xEA5B7C5C
{
	Hash hash;
	Hash hash2;

	switch (iParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			if (hParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				hash = joaat("provision_rs_abalone_shell_fragment");
				hash2 = joaat("provision_earring_silver");
			}
			else if (hParam1 == joaat("provision_rs_abalone_shell_fragment"))
			{
				hash = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				hash2 = joaat("provision_earring_silver");
			}
			else
			{
				hash = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				hash2 = joaat("provision_rs_abalone_shell_fragment");
			}
			break;
	
		case joaat("provision_talisman_bear_claw"):
			if (hParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				hash = joaat("provision_rc_quartz_chunk");
				hash2 = joaat("provision_bracelet_silver");
			}
			else if (hParam1 == joaat("provision_rc_quartz_chunk"))
			{
				hash = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				hash2 = joaat("provision_bracelet_silver");
			}
			else
			{
				hash = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				hash2 = joaat("provision_rc_quartz_chunk");
			}
			break;
	
		case joaat("provision_talisman_boar_tusk"):
			if (hParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				hash = joaat("provision_rf_wood_cobalt");
				hash2 = joaat("provision_earring_gold");
			}
			else if (hParam1 == joaat("provision_rf_wood_cobalt"))
			{
				hash = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				hash2 = joaat("provision_earring_gold");
			}
			else
			{
				hash = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				hash2 = joaat("provision_rf_wood_cobalt");
			}
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			if (hParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				hash = joaat("provision_cc_vintage_handcuffs");
				hash2 = joaat("provision_bracelet_gold");
			}
			else if (hParam1 == joaat("provision_cc_vintage_handcuffs"))
			{
				hash = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				hash2 = joaat("provision_bracelet_gold");
			}
			else
			{
				hash = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				hash2 = joaat("provision_cc_vintage_handcuffs");
			}
			break;
	}

	if (func_221(hash, 1, false) && func_221(hash2, 1, false))
		return true;

	return false;
}

Hash func_444(Hash hParam0) // Position - 0x14E53 Hash - 0xB8EC44B7 ^0x8CFD1640
{
	switch (hParam0)
	{
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("provision_trinket_wolf_heart");
	
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_pronghorn_antler");
	
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("provision_trinket_fox_claw");
	
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("provision_trinket_coyote_fang");
	
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("provision_trinket_ram_horn");
	
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_buck_antler");
	
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_elk_antler");
	
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("provision_trinket_cougar_fang");
	
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("provision_trinket_bison_horn");
	
		case joaat("provision_lions_paw"):
			return joaat("provision_trinket_lion_paw");
	
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_moose_antler");
	
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("provision_trinket_beaver_tooth");
	
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("provision_trinket_panther_eye");
	
		default:
		
	}

	return 0;
}

BOOL func_445(Hash hParam0, int iParam1) // Position - 0x14F1A Hash - 0xB78A2FC ^0x6E3EB1C7
{
	int num;

	num = func_579(hParam0);

	if (num != -15)
	{
		func_576(&num, 0, iParam1, 0, 0, 0, 0, false);
		return !func_580(num, true);
	}

	return false;
}

int func_446(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x14F4C Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_221(joaat("provision_trinket_elk_antler"), 1, false))
		num = num + 0.1f;

	num2.f_1 = 10;
	num2.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_35, true, true, hParam0, &num2, 0);

	for (i = 0; i < num2; i = i + 1)
	{
		if (num2.f_1[i] == joaat("currency_cash"))
		{
			return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
		else
		{
			hash = num2.f_1[i];
		
			if (func_21(hash, 0) && func_77(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_447(int iParam0, const char* sParam1, int iParam2) // Position - 0x15011 Hash - 0x4DF85B80 ^0x58C763F0
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_246(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_448(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x15052 Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_581())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_246(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_582(num);
			func_583(num, 0, 0);
		}
	
		func_246(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_160(func_491(joaat("CAREER_CASH")), value);
	}

	return;
}

void func_449(int iParam0) // Position - 0x1512E Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

void func_450(int iParam0) // Position - 0x15149 Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

void func_451(int iParam0) // Position - 0x15164 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

void func_452(int iParam0) // Position - 0x1517F Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

int func_453(int iParam0) // Position - 0x1519A Hash - 0xC69F7374 ^0xCEC8F963
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam0)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_462(hash);
	num3 = func_462(hash2);
	num4 = func_462(hash3);
	num6 = func_463(hash);
	num7 = func_463(hash2);
	num8 = func_463(hash3);

	if (iParam0 != 2)
	{
		num5 = func_462(hash4);
		num9 = func_463(hash4);
	}

	if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam0 != 2)
		if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

void func_454(int iParam0) // Position - 0x1530D Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_455() // Position - 0x15328 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_584(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_456() // Position - 0x15361 Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_457(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x15373 Hash - 0x9548C303 ^0x2CDF6383
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	switch (hParam0)
	{
		case joaat("taxidermy_order_05"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_02"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_01"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			break;
	
		case joaat("taxidermy_order_04"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_03"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
	}

	if (hParam0 == joaat("taxidermy_order_01"))
	{
		if (bParam3)
			if (func_561(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_561(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_561(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_561(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_561(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_561(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_561(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_561(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_561(hash) && func_561(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_561(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_561(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_561(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_561(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_561(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_561(hash) && func_561(hash2) && func_561(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_561(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_561(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_561(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_561(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_561(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_561(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_561(hash) && func_561(hash2) && func_561(hash3) && func_561(hash4))
			return true;
	}

	return false;
}

void func_458(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x15838 Hash - 0x5A64C5C8 ^0x6D52F178
{
	!bParam2;

	switch (iParam0)
	{
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_587();
			func_585(iParam0);
			break;
	
		case -1925798111:
			func_585(-1925798111);
			func_586(-919512195);
			func_586(420709909);
			func_586(1703426636);
			break;
	
		case -1838352012:
			func_586(-1674179981);
			func_586(-1835851517);
			func_585(-1838352012);
			break;
	
		case -1835851517:
			func_586(-1674179981);
			func_586(-1838352012);
			func_585(-1835851517);
			break;
	
		case -1738165526:
			func_585(-1738165526);
			func_586(0);
			func_586(473295046);
			break;
	
		case -1717960576:
			func_586(210001842);
			func_585(-1717960576);
			break;
	
		case -1674179981:
			func_586(-1835851517);
			func_586(-1838352012);
			func_585(-1674179981);
			break;
	
		case -1612662716:
			func_586(1822001510);
			func_585(-1612662716);
			break;
	
		case -1414537028:
			func_586(38162571);
			func_586(1350391819);
			func_586(54073871);
			func_585(-1414537028);
			break;
	
		case -1311865656:
			func_585(-1311865656);
			func_586(1509509592);
			func_586(-959357075);
			func_586(405586984);
			break;
	
		case -1271608261:
			func_586(-150493654);
			func_586(1846061697);
			func_586(-1145519186);
			func_585(-1271608261);
			break;
	
		case -1223121209:
			func_585(-1223121209);
			func_586(630808005);
			break;
	
		case -1145519186:
			func_586(-150493654);
			func_586(-1271608261);
			func_586(1846061697);
			func_585(-1145519186);
			break;
	
		case -1124061431:
			func_586(198200492);
			func_585(-1124061431);
			func_586(52706132);
			func_586(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_585(-1080627546);
			else
				func_586(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_586(-538889627);
			func_586(-538880323);
			func_586(-1056767524);
			func_585(iParam0);
			break;
	
		case -959357075:
			func_585(-959357075);
			func_586(1509509592);
			func_586(405586984);
			func_586(-1311865656);
			break;
	
		case -919512195:
			func_585(-919512195);
			func_586(-1925798111);
			func_586(420709909);
			func_586(1703426636);
			break;
	
		case -664252410:
			func_586(2019386373);
			func_586(2109952320);
			func_585(-664252410);
			break;
	
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_588();
			func_585(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_585(-524145696);
			else
				func_586(-524145696);
		
			func_586(1626481264);
			func_586(282809459);
			break;
	
		case -502324015:
			func_586(1497516462);
			func_586(2016141805);
			func_586(1010885152);
			func_585(-502324015);
			break;
	
		case -434590080:
			func_586(1376646519);
			func_586(931649776);
			func_586(1743048395);
			func_586(449774763);
			func_585(-434590080);
			break;
	
		case -404698347:
			func_586(1306158345);
			func_586(1952610440);
			func_586(-223469678);
			func_586(1517904467);
			func_585(-404698347);
			break;
	
		case -259123672:
			func_586(198200492);
			func_586(-1124061431);
			func_586(52706132);
			func_585(-259123672);
			break;
	
		case -223469678:
			func_586(1306158345);
			func_586(1952610440);
			func_586(-404698347);
			func_586(1517904467);
			func_585(-223469678);
			break;
	
		case -150493654:
			func_586(-1271608261);
			func_586(1846061697);
			func_586(-1145519186);
			func_585(-150493654);
			break;
	
		case 0:
			func_585(0);
			func_586(473295046);
			func_586(-1738165526);
			break;
	
		case 38162571:
			func_586(-1414537028);
			func_586(1350391819);
			func_586(54073871);
			func_585(38162571);
			break;
	
		case 52706132:
			func_586(198200492);
			func_586(-1124061431);
			func_585(52706132);
			func_586(-259123672);
			break;
	
		case 54073871:
			func_586(-1414537028);
			func_586(38162571);
			func_586(1350391819);
			func_585(54073871);
			break;
	
		case 198200492:
			func_585(198200492);
			func_586(-1124061431);
			func_586(52706132);
			func_586(-259123672);
			break;
	
		case 210001842:
			func_586(-1717960576);
			func_585(210001842);
			break;
	
		case 280705402:
			func_586(1766284049);
			func_586(1926308480);
			func_585(280705402);
			break;
	
		case 282809459:
			func_585(282809459);
			func_586(1626481264);
			func_586(-524145696);
			break;
	
		case 405586984:
			func_585(405586984);
			func_586(1509509592);
			func_586(-959357075);
			func_586(-1311865656);
			break;
	
		case 420709909:
			func_585(420709909);
			func_586(-919512195);
			func_586(-1925798111);
			func_586(1703426636);
			break;
	
		case 439465264:
			if (func_589(1609506757))
				if (bParam1)
					func_585(439465264);
				else
					func_586(439465264);
			break;
	
		case 449774763:
			func_586(1376646519);
			func_586(931649776);
			func_586(-434590080);
			func_586(1743048395);
			func_585(449774763);
			break;
	
		case 473295046:
			func_585(473295046);
			func_586(0);
			func_586(-1738165526);
			break;
	
		case 630808005:
			func_585(630808005);
			func_586(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_585(885203519);
			else
				func_586(885203519);
			break;
	
		case 931649776:
			func_586(1376646519);
			func_586(-434590080);
			func_586(1743048395);
			func_586(449774763);
			func_585(931649776);
			break;
	
		case 932909855:
			func_585(932909855);
			func_586(2051822093);
			break;
	
		case 1010885152:
			func_586(1497516462);
			func_586(2016141805);
			func_585(1010885152);
			func_586(-502324015);
			break;
	
		case 1306158345:
			func_586(1952610440);
			func_586(-223469678);
			func_586(-404698347);
			func_586(1517904467);
			func_585(1306158345);
			break;
	
		case 1350391819:
			func_586(-1414537028);
			func_586(38162571);
			func_586(54073871);
			func_585(1350391819);
			break;
	
		case 1376646519:
			func_586(931649776);
			func_586(-434590080);
			func_586(1743048395);
			func_586(449774763);
			func_585(1376646519);
			break;
	
		case 1453909576:
			func_585(1453909576);
			func_586(1643531967);
			break;
	
		case 1497516462:
			func_585(1497516462);
			func_586(2016141805);
			func_586(1010885152);
			func_586(-502324015);
			break;
	
		case 1509509592:
			func_585(1509509592);
			func_586(405586984);
			func_586(-959357075);
			func_586(-1311865656);
			break;
	
		case 1517904467:
			func_586(1306158345);
			func_586(1952610440);
			func_586(-223469678);
			func_586(-404698347);
			func_585(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_586(439465264);
				func_585(1609506757);
			}
			else
			{
				func_586(1609506757);
				func_586(439465264);
			}
			break;
	
		case 1626481264:
			func_585(1626481264);
			func_586(-524145696);
			func_586(282809459);
			break;
	
		case 1643531967:
			func_585(1643531967);
			func_586(1453909576);
			break;
	
		case 1703426636:
			func_585(1703426636);
			func_586(-919512195);
			func_586(-1925798111);
			func_586(420709909);
			break;
	
		case 1743048395:
			func_586(1376646519);
			func_586(931649776);
			func_586(-434590080);
			func_586(449774763);
			func_585(1743048395);
			break;
	
		case 1766284049:
			func_586(280705402);
			func_586(1926308480);
			func_585(1766284049);
			break;
	
		case 1822001510:
			func_586(-1612662716);
			func_585(1822001510);
			break;
	
		case 1846061697:
			func_586(-150493654);
			func_586(-1271608261);
			func_586(-1145519186);
			func_585(1846061697);
			break;
	
		case 1926308480:
			func_586(1766284049);
			func_586(280705402);
			func_585(1926308480);
			break;
	
		case 1952610440:
			func_586(1306158345);
			func_586(-223469678);
			func_586(-404698347);
			func_586(1517904467);
			func_585(1952610440);
			break;
	
		case 2016141805:
			func_586(1497516462);
			func_585(2016141805);
			func_586(1010885152);
			func_586(-502324015);
			break;
	
		case 2019386373:
			func_586(-664252410);
			func_586(2109952320);
			func_585(2019386373);
			break;
	
		case 2051822093:
			func_585(2051822093);
			func_586(932909855);
			break;
	
		case 2109952320:
			func_586(2019386373);
			func_586(-664252410);
			func_585(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_589(iParam0))
					func_585(iParam0);
			else if (func_589(iParam0))
				func_586(iParam0);
			break;
	}

	return;
}

void func_459(Hash hParam0) // Position - 0x1635B Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_590(hParam0))
		func_592(func_591(hParam0));

	return;
}

int func_460() // Position - 0x16377 Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_590(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_461(Hash hParam0, int iParam1, int iParam2) // Position - 0x163AF Hash - 0xED49A216 ^0x75828FFF
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam2)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_462(hash);
	num3 = func_462(hash2);
	num4 = func_462(hash3);
	num6 = func_463(hash);
	num7 = func_463(hash2);
	num8 = func_463(hash3);

	if (iParam2 != 2)
	{
		num5 = func_462(hash4);
		num9 = func_463(hash4);
	}

	if (hParam0 == hash)
		if (num2 + iParam1 >= num6)
			num = num + num6;
		else
			num = num + num2 + iParam1;
	else if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (hParam0 == hash2)
		if (num3 + iParam1 >= num7)
			num = num + num7;
		else
			num = num + num3 + iParam1;
	else if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (hParam0 == hash3)
		if (num4 + iParam1 >= num8)
			num = num + num8;
		else
			num = num + num4 + iParam1;
	else if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam2 != 2)
		if (hParam0 == hash4)
			if (num5 + iParam1 >= num9)
				num = num + num9;
			else
				num = num + num5 + iParam1;
		else if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

int func_462(Hash hParam0) // Position - 0x165C2 Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_221(hParam0, 1, false))
		num = func_129(hParam0, false, false);

	return num;
}

int func_463(Hash hParam0) // Position - 0x165E1 Hash - 0xEED5739D ^0xEED5739D
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
	
		case joaat("provision_ro_flower_acunas_star"):
			return 3;
	
		case joaat("provision_ro_flower_cigar"):
			return 7;
	
		case joaat("provision_ro_flower_rat_tail"):
			return 10;
	
		case joaat("PROVISION_HERON_FEATHER"):
			return 20;
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
	
		case joaat("provision_ro_flower_night_scented"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
	
		case joaat("provision_ro_flower_lady_of_night"):
			return 15;
	
		case joaat("provision_ro_flower_sparrows"):
			return 10;
	
		case joaat("provision_ro_flower_queens"):
			return 5;
	
		case joaat("provision_ro_flower_spider"):
			return 5;
	
		case joaat("provision_ro_flower_dragons"):
			return 5;
	
		case joaat("provision_ro_flower_lady_slipper"):
			return 7;
	
		case joaat("provision_ro_flower_moccasin"):
			return 10;
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 30;
	
		case joaat("provision_ro_flower_ghost"):
			return 5;
	
		case joaat("PROVISION_GATOR_EGG"):
			return 25;
	
		default:
		
	}

	return 0;
}

int func_464(Hash hParam0) // Position - 0x166BA Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_465(Hash hParam0, int iParam1) // Position - 0x166C8 Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_466(Hash hParam0, int iParam1) // Position - 0x166D8 Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_545(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_467(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x16707 Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_466(hParam1, 5) || hParam0 == func_466(hParam1, 6) || hParam0 == func_466(hParam1, 7) || hParam0 == func_466(hParam1, 8) || hParam0 == func_466(hParam1, 9))
	{
		func_457(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_263(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_265(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_468(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x16789 Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_466(hParam1, 5) || hParam0 == func_466(hParam1, 6) || hParam0 == func_466(hParam1, 7) || hParam0 == func_466(hParam1, 8) || hParam0 == func_466(hParam1, 9))
	{
		if (func_457(hParam1, hParam0, &num, false, 0, false))
		{
			func_263(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_265(51, 0, 0, num, func_415(hParam1, 20), 1, 0);
		}
		else
		{
			func_263(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_265(51, 0, 0, num, func_415(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_469() // Position - 0x1684A Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_413(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

void func_470(Hash hParam0) // Position - 0x16873 Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_471(Hash hParam0) // Position - 0x16882 Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_593(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_472(Hash hParam0) // Position - 0x1689B Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

BOOL func_473(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x168AA Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_147(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_474(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x168D1 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

float func_475() // Position - 0x1690C Hash - 0xB0642BCC ^0x4D6FEEA4
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_594())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_595(2);

	if (Global_1347477.f_119)
		return func_595(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_596();
	num3 = func_597();
	num4 = func_598();
	num5 = func_599();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_600());
	num8 = func_595(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_601(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_602(3, num9, num9 > 100f);
	return func_603(num8, -100f, 100f);
}

float func_476() // Position - 0x16A35 Hash - 0x951B1CCC ^0x7B312694
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_594())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_595(1);

	if (Global_1347477.f_119)
		return func_595(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_596();
	num3 = func_597();
	num4 = func_598();
	num5 = func_599();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_600());
	num8 = func_595(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_601(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_602(2, num9, num9 > 100f);
	return func_603(num8, -100f, 100f);
}

float func_477() // Position - 0x16B5E Hash - 0x4D146F4A ^0xFC60D2FE
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_594())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_595(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_604())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_605())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_595(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_596();
	num3 = func_597();
	num4 = func_598();
	num5 = func_599();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_600());
	num8 = func_595(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_601(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_602(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_595(0);

	return func_603(num8, -100f, 100f);
}

BOOL func_478(int iParam0, int iParam1) // Position - 0x16D05 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_479(Hash hParam0) // Position - 0x16D1E Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_480(int iParam0, BOOL bParam1) // Position - 0x16D2E Hash - 0x6C404ADF ^0x7D516F33
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946054.f_2657.f_21;
	
		case -1719060085:
			return Global_1946054.f_2657.f_24;
	
		case -999503751:
			if (bParam1)
				return Global_1946054.f_2657.f_20;
			else
				return func_606();
			break;
	
		case -525676072:
			return Global_1946054.f_2657.f_22;
	
		case -413129408:
			return Global_1946054.f_2657.f_25;
	
		case 81053684:
			return Global_1946054.f_2657.f_23;
	}

	return 0;
}

eStackSize func_481(Hash hParam0) // Position - 0x16DBD Hash - 0x9830D1FB ^0x9830D1FB
{
	switch (hParam0)
	{
		case -2114499732:
			return 18;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
	
		case -1951220140:
			return 78;
	
		case -1914506115:
			return 71;
	
		case -1826731591:
			return 24;
	
		case -1725704631:
			return 81;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
	
		case -1611873049:
			return 91;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
	
		case -1476781101:
			return 10;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
	
		case -1303643297:
			return 86;
	
		case -1300731953:
			return 74;
	
		case -1243402388:
			return 66;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
	
		case -1205612021:
			return 70;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
	
		case -978578725:
			return 94;
	
		case -926815459:
			return 72;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
	
		case -769081407:
			return 16;
	
		case -659341240:
			return 85;
	
		case -535599244:
			return 89;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
	
		case -409616653:
			return 65;
	
		case -389591806:
			return 73;
	
		case -361635024:
			return 62;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
	
		case -291256376:
			return 23;
	
		case -272211555:
			return 61;
	
		case -55563408:
			return 64;
	
		case -19271249:
			return 82;
	
		case 65931886:
			return 67;
	
		case 162509669:
			return 3;
	
		case 166243423:
			return 0;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
	
		case 214175524:
			return 84;
	
		case 274995506:
			return 5;
	
		case 294553332:
			return 11;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
	
		case 411856831:
			return 88;
	
		case 439606975:
			return 14;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
	
		case 523337834:
			return 80;
	
		case 594312243:
			return 92;
	
		case 624063935:
			return 9;
	
		case 635948769:
			return 4;
	
		case 688004210:
			return 20;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
	
		case 800827126:
			return 19;
	
		case 802495462:
			return 75;
	
		case 842905332:
			return 77;
	
		case 890706995:
			return 93;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
	
		case 1156438275:
			return 90;
	
		case 1160643979:
			return 8;
	
		case 1164374808:
			return 7;
	
		case 1201189539:
			return 28;
	
		case 1257427489:
			return 83;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
	
		case 1351927599:
			return 21;
	
		case 1352942778:
			return 26;
	
		case 1371678229:
			return 68;
	
		case 1383300684:
			return 1;
	
		case 1389254668:
			return 58;
	
		case 1460520700:
			return 76;
	
		case 1511551084:
			return 79;
	
		case 1560492757:
			return 15;
	
		case 1661121390:
			return 6;
	
		case 1784889667:
			return 13;
	
		case 1788874135:
			return 12;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
	
		case 1902428294:
			return 17;
	
		case 1964379549:
			return 27;
	
		case 2032023096:
			return 22;
	
		case 2038771525:
			return 87;
	
		case 2051441678:
			return 2;
	
		case 2102263084:
			return 69;
	
		case 2119049229:
			return 25;
	
		default:
		
	}

	return -1;
}

BOOL func_482(eStackSize essParam0) // Position - 0x171D0 Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (essParam0 < 0 || essParam0 >= 95)
		return false;

	return true;
}

void func_483(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x171EF Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_482(essParam0))
		return;

	if (func_607(essParam0))
		return;

	if (!func_608(essParam0))
		func_609(essParam0, true, false);

	hash = func_610(essParam0);

	if (hash != 0 && !(essParam0 >= 0 && essParam0 <= 5))
		if (func_611(essParam0, 512))
			func_337(30, hash, 0, 0, false);

	if (!func_612() && !bParam1 && !func_1(0, false, true))
		func_613(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_614(essParam0, 6);

	if (bParam2)
		if (!func_1(0, false, true))
			func_409(true, 4);

	return;
}

int func_484() // Position - 0x172B5 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

BOOL func_485(int iParam0, BOOL bParam1) // Position - 0x172C3 Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_480(iParam0, false) < func_615(iParam0, bParam1);
}

BOOL func_486(Hash hParam0, var uParam1) // Position - 0x172DB Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_208(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_487(int iParam0) // Position - 0x1731F Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_329(iParam0, 1) /*3*/] != Global_1946054.f_57[func_329(iParam0, 1) /*11*/];
}

void func_488(int iParam0, Hash hParam1) // Position - 0x17357 Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_77(hParam1, 130796156))
	{
		func_616(hParam1, false);
	}
	else if (func_77(hParam1, 930141731))
	{
		func_616(hParam1, true);
		func_617(iParam0);
	}

	return;
}

void func_489(var uParam0, int iParam1) // Position - 0x17392 Hash - 0x84556899 ^0xA18AFCFA
{
	int i;

	if (iParam1 == 0)
		return;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->f_1[i] == iParam1)
			return;
	
		if (iParam1 == joaat("LOOTER_PED_IS_MALE") && uParam0->f_1[i] == joaat("LOOTER_PED_IS_FEMALE") || iParam1 == joaat("LOOTER_PED_IS_FEMALE") && uParam0->f_1[i] == joaat("LOOTER_PED_IS_MALE") || iParam1 == joaat("LOOT_TYPE_NORMAL") && uParam0->f_1[i] == joaat("LOOT_TYPE_SKINNING") || iParam1 == joaat("LOOT_TYPE_SKINNING") && uParam0->f_1[i] == joaat("LOOT_TYPE_NORMAL"))
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

int func_490(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x17473 Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_618(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_619(anParam2, hParam0, num);
	return 1;
}

struct<2> func_491(int iParam0) // Position - 0x174DC Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_492(int iParam0) // Position - 0x174EC Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x174FE Hash - 0xA17D549C ^0x8C2B7C39
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

Hash func_494(Hash hParam0) // Position - 0x175D5 Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_620(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

BOOL func_495(Hash hParam0, var uParam1) // Position - 0x175FF Hash - 0x6C0FFC3B ^0xB2795CB6
{
	int i;
	var outSlotId;
	var unk;
	Hash category;
	int num;

	if (hParam0 != 0)
	{
		category = func_208(hParam0);
	
		if (category != 0)
		{
			num = func_621(hParam0);
		
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

float func_496(int iParam0) // Position - 0x17653 Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_321(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_497(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_622(num7) - func_622(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_497(float fParam0) // Position - 0x176BD Hash - 0x3E9B0DE9 ^0x3E9B0DE9
{
	if (fParam0 <= (float)-1)
		return -1;

	if (fParam0 < (float)50)
		return 0;

	if (fParam0 < (float)100)
		return 1;

	if (fParam0 < (float)200)
		return 2;

	if (fParam0 < (float)350)
		return 3;

	if (fParam0 < (float)550)
		return 4;

	if (fParam0 < (float)800)
		return 5;

	if (fParam0 < (float)1100)
		return 6;

	return 7;
}

int func_498(int iParam0) // Position - 0x17749 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_499(int iParam0) // Position - 0x17782 Hash - 0xB8632262 ^0xB8632262
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 16:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_500(float fParam0, float fParam1) // Position - 0x17801 Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_497(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_622(num));
	num3 = BUILTIN::TO_FLOAT(func_622(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_501(int iParam0) // Position - 0x17874 Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_623(iParam0, &num))
		return func_622(num);

	switch (iParam0)
	{
		case 0:
			if (func_624())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_624())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_624())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_502(int iParam0) // Position - 0x17900 Hash - 0xEE6D3E20 ^0xEE6D3E20
{
	switch (iParam0)
	{
		case 0:
			return 246;
	
		case 1:
			return 248;
	
		case 2:
			return 247;
	
		default:
		
	}

	return -1;
}

void func_503(int iParam0, int iParam1, int iParam2) // Position - 0x17932 Hash - 0x29688DE6 ^0x6029DD8C
{
	char* str;
	const char* str2;
	BOOL flag;
	int num;
	const char* str3;
	char* str4;
	char* str5;
	const char* str6;
	Hash hash;
	Hash hashKey;
	const char* data;

	if (iParam1 == 0)
		return;

	num = iParam1 + 1;

	if (iParam2 != 0)
	{
		str = "RPG_LEVEL_PROGRESS_TOAST";
		str2 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, num + 1);
	}
	else
	{
		str = "RPG_LEVEL_INCREASED_TOAST";
		str2 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", num);
		flag = true;
	}

	num = num + func_625(iParam0);
	str3 = func_627(func_626(num, iParam2));
	str5 = func_628(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_629(iParam0));
	hash = func_630(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = hash;
		data.f_4 = 1;
		data.f_5 = func_631(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_423(str6, str2, hash, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_632(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

int func_504(Hash hParam0) // Position - 0x17A2A Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_334(outSlotId);
}

int func_505(int iParam0, int iParam1) // Position - 0x17A4D Hash - 0xE1D12727 ^0xA46110B3
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
	
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
	
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
	
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
	
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
	
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
	
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
	
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
	
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
	
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
	
		case 10:
			return 1108822547;
	
		case 11:
			return -338487716;
	
		case 12:
			return 1742327865;
	
		case 13:
			return 1600962399;
	
		case 14:
			return 1849504272;
	
		case 15:
			return 1672288269;
	
		case 16:
			return 1250092473;
	
		case 17:
			return -893163968;
	
		case 18:
			return -450913544;
	
		case 19:
			return -1364808185;
	
		case 20:
			return -1197751823;
	
		case 21:
			return 304805134;
	
		case 22:
			return -1505978566;
	
		case 23:
			return 1145151482;
	
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
	
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
	
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
	
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
	
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
	
		case 29:
			return -426430150;
	
		case 30:
			return 1788623170;
	
		case 31:
			return -1130865351;
	
		case 32:
			return -1884748965;
	
		case 33:
			return -1586649372;
	
		case 34:
			return 788010710;
	
		case 35:
			return 1958421083;
	
		case 36:
			return -1944638739;
	
		case 37:
			return 1900541263;
	
		case 38:
			return -1489346253;
	
		case 39:
			return -358215195;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_506() // Position - 0x17C9C Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

void func_507(int iParam0) // Position - 0x17CE3 Hash - 0x65A082AE ^0x65A082AE
{
	func_514(iParam0, 8, 6);
	return;
}

void func_508(int iParam0) // Position - 0x17CF4 Hash - 0x20214C72 ^0x20214C72
{
	func_633(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_509(int iParam0, int iParam1) // Position - 0x17D09 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_634(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_510(Hash hParam0, int iParam1, int iParam2) // Position - 0x17D20 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_511(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x17D33 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_208(hParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_635(iParam2, 65536) && hParam0->f_1[num2 /*3*/] == -452402570)
	{
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_509(num2, num3);
	}

	if (func_487(-1586649372) && func_635(iParam2, 524288))
	{
		num2 = 33;
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_509(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_636(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_636(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (hParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				hParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_509(num2, num3);
			}
		
			if (hParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_509(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_509(num2, num3);
			}
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_333(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_77(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_509(num2, num3);
			}
			break;
	
		case -839140560:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 37;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_509(num2, num3);
				}
			
				num2 = 38;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_509(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_208(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_509(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_333(hParam1) && hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_208(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_509(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_636(hParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_636(hParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (hParam0->f_1[num /*3*/].f_1 == joaat("base") || hParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_509(num2, num3);
			}
			break;
	
		case 698653232:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 12;
			
				if (hParam0->f_1[num2 /*3*/] == joaat("clothing_hl_player_necktie_004_3"))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_509(num2, num3);
				}
			}
		
			func_636(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_77(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_509(num2, num3);
			}
			break;
	
		case 1868067663:
			func_636(hParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_509(num2, num3);
			}
			break;
	}

	switch (func_208(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_208(hParam0->f_1[num2 /*3*/]) || func_77(hParam0->f_1[num2 /*3*/], 866047851))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_509(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_208(hParam0->f_1[num2 /*3*/]))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_509(num2, num3);
			}
			break;
	}

	return;
}

Hash func_512(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x18379 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_637(0);

	if (hParam2 != 0 && func_638(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_639(hParam0, func_505(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_513(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x183BF Hash - 0xE06CF505 ^0xBC49746F
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	BOOL flag2;
	int num6;

	flag = func_23() != -1;
	flag2 = func_637(0);

	if (func_338(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_505(num, 1);
		
			if (func_640(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_640(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_332(hParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_641(hParam0);

	if (num3 > 0)
	{
		if (!func_338(524288))
		{
			func_516(524288);
			num2 = num2 - num6;
		}
	
		for (i = num3; i <= 38; i = i + 1)
		{
			num = Global_1946054.f_57.f_430[i];
		
			if (num <= -1 || num >= 39)
			{
			}
			else
			{
				num5 = func_505(num, 1);
			
				if (func_640(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_640(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_332(hParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						hParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						hParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_509(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_519(524288);

	return;
}

void func_514(int iParam0, int iParam1, int iParam2) // Position - 0x185DC Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_329(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_329(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_329(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_515(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1861B Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_642(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_23() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_643(2, Global_26796.f_776) || Global_1946054.f_1497 != func_610(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_610(Global_40.f_7729);
				Global_1946054.f_1378 = func_610(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_644(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_645(false, true);

	return;
}

void func_516(BOOL bParam0) // Position - 0x1873A Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_517(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1874D Hash - 0x21CB5355 ^0x21CB5355
{
	int i;
	int num;

	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946054.f_850 >= 25)
				return;
		
			if (func_646(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_647(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_516(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_646(iParam0))
				return;
		
			func_647(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_516(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_342(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_518(var uParam0) // Position - 0x18959 Hash - 0x7C3D914C ^0xB1998A7B
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;

	if (uParam0->f_12)
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_13);

	uParam0->f_12 = 0;
	return;
}

void func_519(BOOL bParam0) // Position - 0x189B7 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_520(int iParam0, int iParam1) // Position - 0x189CF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_521(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x189DE Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_646(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_646(20))
				return;
		}
	}

	func_647(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_516(8);
	return;
}

BOOL func_522(int iParam0) // Position - 0x18AE2 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return true;
	
		default:
		
	}

	return false;
}

int func_523(int iParam0, int iParam1) // Position - 0x18B33 Hash - 0x69E301C1 ^0x69E301C1
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
	
		case -1784068921:
			return 7;
	
		case -1642438278:
			return 2;
	
		case -1349086674:
			return 8;
	
		case 310186733:
			return 5;
	
		case 456315479:
			return 9;
	
		case 471747275:
			return 3;
	
		case 1166592425:
			return 4;
	
		case 1486898918:
			return 0;
	
		case 1500419820:
			return 1;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_524(int iParam0, int iParam1) // Position - 0x18BBA Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_648(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_649())
		return func_648(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_648(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

BOOL func_525(int iParam0, Any anParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x18C2E Hash - 0xF71B1012 ^0xEF7F4820
{
	var unk;
	var unk2;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
		return 1;

	SECURE_STORE(&unk, iParam0);

	if (!NETWORK::_0x271F95E55C663B8B(&unk, anParam1))
		return 0;

	unk2.f_1 = 10;
	unk2.f_14 = 255;
	unk2.f_12 = bParam2;
	unk2.f_14 = iParam3;
	unk2.f_13 = iParam4;
	func_650(anParam1, iParam0, unk2);
	return 1;
}

BOOL func_526(int iParam0) // Position - 0x18CA1 Hash - 0xB32B029D ^0xB32B029D
{
	if (iParam0 <= -1 || iParam0 >= 13)
		return false;

	return true;
}

int func_527(int iParam0) // Position - 0x18CC0 Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

Hash func_528(Ped pedParam0) // Position - 0x18CCC Hash - 0xF32C828D ^0x75879223
{
	int num;
	var unk;
	var unk2;
	var unk3;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::GET_IS_ANIMAL(pedParam0) && !ENTITY::_GET_IS_BIRD(pedParam0))
		return 0;

	func_390(pedParam0, &unk, &unk2, &num, &unk3);
	func_391(&num2, pedParam0, num, unk);

	if (num2 != 0)
		return num2;

	switch (num)
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

int func_529(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x18D59 Hash - 0x423274ED ^0x50A2C4A6
{
	Ped ped;

	iParam1 = func_651(PLAYER::PLAYER_PED_ID(), hParam0, iParam1, bParam2);

	if (iParam1 <= 0)
		return iParam1;

	ped = func_530(0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		func_531(&ped, hParam0, &iParam1, bParam3, hParam4);

	return iParam1;
}

Ped func_530(int iParam0) // Position - 0x18D9D Hash - 0x992FCD8C ^0xAA6462C3
{
	Ped lastMount;

	if (func_652(iParam0))
	{
		if (func_23() == -1)
		{
			lastMount = PED::_GET_LAST_MOUNT(Global_35);
		
			if (!ENTITY::DOES_ENTITY_EXIST(lastMount))
				lastMount = func_156(func_218(0));
		}
		else
		{
			lastMount = PED::_GET_LAST_MOUNT(func_653());
		}
	}
	else if (func_23() == -1)
	{
		lastMount = func_156(0);
	}
	else
	{
		lastMount = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}

	return lastMount;
}

int func_531(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4) // Position - 0x18E02 Hash - 0x69EE725C ^0x4869D6F1
{
	int inventoryIdFromPed;
	int num;
	var statId;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(*uParam0);
	num = func_654(inventoryIdFromPed, hParam1);

	if (func_655(*uParam0, hParam1, *uParam2, bParam3, hParam4))
	{
		statId = { func_313(hParam1) };
	
		if (STATS::STAT_ID_IS_VALID(&statId))
			STATS::_STAT_ID_DECREMENT_INT(&statId, *uParam2);
	
		if (func_656(hParam1))
		{
			func_657(*uParam0, hParam1, *uParam2);
		}
		else
		{
			func_657(*uParam0, hParam1, *uParam2);
			func_651(*uParam0, hParam1, *uParam2, true);
		}
	
		num2 = num - func_654(inventoryIdFromPed, hParam1);
		*uParam2 = *uParam2 - num2;
		return 1;
	}

	return 0;
}

int func_532(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x18EAA Hash - 0x5AC5E89C ^0x5AC5E89C
{
	int num;
	int num2;
	int num3;

	num = func_129(hParam0, false, false);

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
		if (!func_225(hParam0, num2, bParam2, hParam3, false))
			return 0;

	if (num3 > 0)
	{
		if (!func_658(hParam0, num3, bParam2, hParam3))
			return 0;
	
		if (!bParam2)
			func_613("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, true);
	}

	return 1;
}

BOOL func_533(Hash hParam0) // Position - 0x18F21 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_534(Hash hParam0, int iParam1, Hash hParam2, Hash hParam3) // Position - 0x18F37 Hash - 0x19A1917A ^0x160C1647
{
	var unk;
	int i;
	int num;

	unk = 15;
	PED::_0xB29C553BA582D09E(&unk, hParam0, iParam1, func_659(hParam2));

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_21(unk[i], 0) && !func_77(unk[i], 1286414894) && !(unk[i] == hParam2))
		{
			func_165(unk[i], 1, false, 0, 0, 752097756, 0, 0, 0, 0);
		
			if (hParam3 != 0)
				if (hParam3 == unk[i])
					num = num + 1;
			else
				num = num + 1;
		}
	}

	func_660(func_80(false), true, 0);
	return num;
}

void func_535(Hash hParam0, int iParam1) // Position - 0x18FE0 Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_23() == -1)
	{
		if (func_255(43))
		{
			if (func_77(hParam0, 412399755))
			{
				func_459(joaat("exotic_stage_01"));
			
				if (func_460() == 0)
				{
					func_409(false, 10);
					num = func_661(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_462(hParam0) < func_463(hParam0))
							func_263(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_255(44))
		{
			if (func_77(hParam0, 709057512))
			{
				func_459(joaat("exotic_stage_02"));
			
				if (func_460() == 1)
				{
					func_409(false, 10);
					num = func_661(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_462(hParam0) < func_463(hParam0))
							func_263(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_255(45))
		{
			if (func_77(hParam0, -1478961327))
			{
				func_459(joaat("exotic_stage_03"));
			
				if (func_460() == 2)
				{
					func_409(false, 10);
					num = func_661(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_462(hParam0) < func_463(hParam0))
							func_263(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_255(46))
		{
			if (func_77(hParam0, -1238404098))
			{
				func_459(joaat("exotic_stage_04"));
			
				if (func_460() == 3)
				{
					func_409(false, 10);
					num = func_661(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_462(hParam0) < func_463(hParam0))
							func_263(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_255(47))
		{
			if (func_77(hParam0, 1160548794))
			{
				func_459(joaat("exotic_stage_05"));
			
				if (func_460() == 4)
				{
					func_409(false, 10);
					num = func_661(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_462(hParam0) < func_463(hParam0))
							func_263(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

int func_536(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x192C4 Hash - 0x4C6CAF1 ^0xEE857D47
{
	int num;
	var unk;
	int num2;
	var unk15;
	var unk44;
	var unk62;

	num = -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return num;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_210(uParam0, &unk, true, false))
		return num;

	if (unk.f_10 == iParam4)
		return num;

	num2 = func_127(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_662(uParam0, true) };
		unk15.f_10 = iParam4;
		num = func_663(joaat("UPDATE"), &unk15, bParam5);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk44 = { func_664(uParam0, true) };
		unk44.f_10 = iParam4;
		num = func_665(joaat("UPDATE"), &unk44, bParam5);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk62 = { func_666(&unk) };
		unk62.f_10 = iParam4;
		num = func_151(joaat("UPDATE"), &unk62, bParam5);
	
		if (num == -1)
			return num;
	}

	return num;
}

BOOL func_537(Hash hParam0, int iParam1) // Position - 0x193BB Hash - 0xD9D79AE0 ^0x7D4DF544
{
	int i;
	int outSlotId;
	int num;
	Hash category;
	int num2;

	if (hParam0 != 0)
	{
		category = func_208(hParam0);
	
		if (category != 0)
		{
			num2 = func_393(hParam0);
		
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

int func_538(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x1940F Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_21(hParam0, 0))
		return 0;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam3;
		return 0;
	}

	!bParam3;
	*uParam2 = outData.f_1;
	return 1;
}

void func_539(Hash hParam0, int iParam1) // Position - 0x1945D Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_540(int iParam0, int iParam1) // Position - 0x19470 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_23() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_541(int iParam0) // Position - 0x194A3 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_23() != -1)
		if (func_478(iParam0, 4))
			return false;
	else if (func_478(iParam0, 2))
		return false;

	return true;
}

BOOL func_542(int iParam0) // Position - 0x194D3 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_478(iParam0, 65536) && !func_478(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_478(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_478(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_543(int iParam0) // Position - 0x1957F Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_544() // Position - 0x19592 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_545(int iParam0, var uParam1) // Position - 0x195A1 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_667(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_546() // Position - 0x195CE Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_668(Global_40.f_12019);
}

int func_547() // Position - 0x195E0 Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_414(i);
	
		if (func_221(hash, 1, false) || func_553(func_552(hash)))
			num = num + 1;
	}

	return num;
}

int func_548() // Position - 0x19629 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_669(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_549() // Position - 0x19662 Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_558(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_550() // Position - 0x1969B Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_551(int iParam0) // Position - 0x196AD Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

BOOL func_552(Hash hParam0) // Position - 0x19766 Hash - 0x6931DCCD ^0x96AB98B4
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return true;
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return 1024;
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return 512;
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return 2048;
	
		default:
		
	}

	return false;
}

BOOL func_553(BOOL bParam0) // Position - 0x197FC Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_554(int iParam0) // Position - 0x1980F Hash - 0x21CE226B ^0xD7560C24
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
	
		case 1:
			return "COL_DB_SEND";
	
		case 2:
			return "COL_DB_COLLECT";
	
		default:
		
	}

	return "";
}

int func_555(int iParam0) // Position - 0x1984A Hash - 0xDD8DC1C4 ^0xDD8DC1C4
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 1:
			return 6;
	
		case 2:
			return 7;
	
		case 3:
			return 8;
	
		case 4:
			return 9;
	
		default:
		
	}

	return 5;
}

int func_556(int iParam0) // Position - 0x1988F Hash - 0x499196F8 ^0x499196F8
{
	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 16;
	
		case 2:
			return 17;
	
		case 3:
			return 18;
	
		case 4:
			return 19;
	
		default:
		
	}

	return 15;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Hash hParam0) // Position - 0x198D8 Hash - 0xA17D549C ^0xFC79F6B3
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return "COL_RO_CLAMSHELL_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
	
		case joaat("provision_ro_flower_acunas_star"):
			return "COL_RO_ACUNAS_STAR_FOUND";
	
		case joaat("provision_ro_flower_cigar"):
			return "COL_RO_CIGAR_FOUND";
	
		case joaat("provision_ro_flower_rat_tail"):
			return "COL_RO_RAT_TAIL_FOUND";
	
		case joaat("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
	
		case joaat("provision_ro_flower_night_scented"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
	
		case joaat("provision_ro_flower_lady_of_night"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
	
		case joaat("provision_ro_flower_sparrows"):
			return "COL_RO_SPARROWS_FOUND";
	
		case joaat("provision_ro_flower_queens"):
			return "COL_RO_QUEENS_FOUND";
	
		case joaat("provision_ro_flower_spider"):
			return "COL_RO_SPIDER_FOUND";
	
		case joaat("provision_ro_flower_dragons"):
			return "COL_RO_DRAGONS_FOUND";
	
		case joaat("provision_ro_flower_lady_slipper"):
			return "COL_RO_LADY_SLIPPER_FOUND";
	
		case joaat("provision_ro_flower_moccasin"):
			return "COL_RO_MOCCASIN_FOUND";
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
	
		case joaat("provision_ro_flower_ghost"):
			return "COL_RO_GHOST_FOUND";
	
		case joaat("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
	
		default:
		
	}

	return "";
}

BOOL func_558(Hash hParam0) // Position - 0x199E6 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x199F6 Hash - 0xA17D549C ^0xC70A8234
{
	switch (hParam0)
	{
		case joaat("legendary_fish_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
	
		case joaat("legendary_fish_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
	
		case joaat("legendary_fish_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
	
		case joaat("legendary_fish_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
	
		case joaat("legendary_fish_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
	
		case joaat("legendary_fish_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
	
		case joaat("legendary_fish_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
	
		case joaat("legendary_fish_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
	
		case joaat("legendary_fish_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
	
		case joaat("legendary_fish_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
	
		case joaat("legendary_fish_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
	
		default:
		
	}

	return "";
}

char* func_560(int iParam0) // Position - 0x19AB3 Hash - 0x21CE226B ^0xE335BCF
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
	
		case 1:
			return "COL_RC_SEND";
	
		case 2:
			return "COL_RC_COLLECT";
	
		default:
		
	}

	return "";
}

BOOL func_561(Hash hParam0) // Position - 0x19AEE Hash - 0x5C411CF ^0x5C411CF
{
	if (func_670(hParam0) && func_221(hParam0, 1, false))
		return 1;
	else if (func_671(hParam0) && func_672(hParam0))
		return 1;

	return 0;
}

char* func_562(Hash hParam0) // Position - 0x19B2C Hash - 0x9E507475 ^0x67D64F24
{
	if (!func_21(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_244(hParam0));
}

int func_563(int iParam0) // Position - 0x19B50 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_564(int iParam0) // Position - 0x19B62 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_565(BOOL bParam0) // Position - 0x19B76 Hash - 0xB584A39F ^0xFC4CA802
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
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

void func_566(int iParam0) // Position - 0x19BB4 Hash - 0x2EDDC601 ^0xD5F96979
{
	Hash itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1954819.f_5.f_1))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954819.f_5.f_1) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954819.f_5.f_1, iParam0);
	
		if (itemContextByIndex == Global_1954819.f_5.f_2[iParam0 /*36*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_1, iParam0, "pause_info_panel_list", Global_1954819.f_5.f_2[iParam0 /*36*/]);
	return;
}

void func_567(BOOL bParam0) // Position - 0x19C22 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_568(BOOL bParam0) // Position - 0x19C5C Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_569(BOOL bParam0) // Position - 0x19C96 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_570(BOOL bParam0) // Position - 0x19CD0 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_571(BOOL bParam0) // Position - 0x19CF3 Hash - 0x15EA8A2D ^0x6EE74130
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

void func_572(BOOL bParam0) // Position - 0x19D35 Hash - 0xBAD014C9 ^0x3FDE3E28
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

Hash func_573(int iParam0) // Position - 0x19D77 Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_329(iParam0, 1) /*3*/];
}

void func_574() // Position - 0x19D9F Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_673();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_162(joaat("weapon_revolver_cattleman_john"));
		func_309(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_162(joaat("weapon_melee_knife_john"));
		func_309(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

eStackSize func_575() // Position - 0x19E17 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_576(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x19E23 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_674(*uParam0);
	i = func_675(*uParam0);
	num2 = func_676(*uParam0);
	j = func_677(*uParam0);
	k = func_678(*uParam0);
	l = func_679(*uParam0);

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

	for (m = func_680(i, num); num2 > m; m = func_680(i, num))
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

	func_681(uParam0, l, k, j, num2, i, num);
	return;
}

int func_577(int iParam0) // Position - 0x19FAB Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_682(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

Hash func_578(int iParam0) // Position - 0x19FEC Hash - 0xB8EC44B7 ^0xD4FF48D5
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
	
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
	
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
	
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
	
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
	
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
	
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
	
		case 7:
			return joaat("provision_lions_paw");
	
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
	
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
	
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
	
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
	
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
	
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
	
		case 14:
			return joaat("provision_cc_vintage_handcuffs");
	
		case 15:
			return joaat("provision_bracelet_gold");
	
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
	
		case 17:
			return joaat("provision_rc_quartz_chunk");
	
		case 18:
			return joaat("provision_bracelet_silver");
	
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
	
		case 20:
			return joaat("provision_rf_wood_cobalt");
	
		case 21:
			return joaat("provision_earring_gold");
	
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
	
		case 23:
			return joaat("provision_rs_abalone_shell_fragment");
	
		case 24:
			return joaat("provision_earring_silver");
	
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
	
		default:
		
	}

	return 0;
}

int func_579(Hash hParam0) // Position - 0x1A169 Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_683(hParam0, -1);
}

BOOL func_580(int iParam0, BOOL bParam1) // Position - 0x1A178 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_684(func_575(), iParam0, bParam1);
}

BOOL func_581() // Position - 0x1A18C Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_437())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_582(int iParam0) // Position - 0x1A1A3 Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_685(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_583(int iParam0, const char* sParam1, int iParam2) // Position - 0x1A1D7 Hash - 0x56940320 ^0x2032CCEA
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_581())
		func_246(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_246(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_584(Hash hParam0) // Position - 0x1A243 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_585(int iParam0) // Position - 0x1A253 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_686(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::SET_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::SET_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	
		MISC::SET_BIT(&Global_1058888.f_40497[num2], offset);
	}

	Global_1934765 = 0;
	return;
}

void func_586(int iParam0) // Position - 0x1A2EC Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_686(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	}

	Global_1934765 = 0;
	return;
}

void func_587() // Position - 0x1A372 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_586(-939420910);
	func_586(-1187950766);
	func_586(356365161);
	func_586(753127042);
	func_586(-2038424081);
	func_586(1884271742);
	func_586(459290420);
	return;
}

void func_588() // Position - 0x1A3B9 Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_586(704802028);
	func_586(588987611);
	func_586(2008888900);
	func_586(1649996811);
	func_586(227918160);
	func_586(168171957);
	func_586(1193080109);
	func_586(-491981251);
	func_586(-639037538);
	func_586(-618620429);
	return;
}

BOOL func_589(int iParam0) // Position - 0x1A41B Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_686(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_590(Hash hParam0) // Position - 0x1A46A Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_591(Hash hParam0) // Position - 0x1A47A Hash - 0xEAAB2463 ^0xEAAB2463
{
	switch (hParam0)
	{
		case joaat("exotic_stage_02"):
			return 2;
	
		case joaat("exotic_stage_01"):
			return 1;
	
		case joaat("exotic_stage_05"):
			return 16;
	
		case joaat("exotic_stage_04"):
			return 8;
	
		case joaat("exotic_stage_03"):
			return 4;
	
		default:
		
	}

	return 0;
}

void func_592(int iParam0) // Position - 0x1A4BF Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_593(Hash hParam0) // Position - 0x1A4DA Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_594() // Position - 0x1A4EA Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_595(int iParam0) // Position - 0x1A506 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_596() // Position - 0x1A518 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_687(13);
	num2 = func_688(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_597() // Position - 0x1A55B Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_598() // Position - 0x1A576 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_437())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_599() // Position - 0x1A595 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_600() // Position - 0x1A5D7 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_601(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1A5E5 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_689(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_602(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1A631 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_689(iParam0, 2, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[2], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);

	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}

	return;
}

float func_603(float fParam0, float fParam1, float fParam2) // Position - 0x1A777 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_604() // Position - 0x1A79E Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_687(12) <= -99f;
}

BOOL func_605() // Position - 0x1A7B2 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_687(12) >= 99f;
}

int func_606() // Position - 0x1A7C6 Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_208(hash) == -999503751)
			if (func_690() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_607(eStackSize essParam0) // Position - 0x1A817 Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_482(essParam0))
		return false;

	if (func_611(essParam0, 4))
		return true;

	return false;
}

BOOL func_608(eStackSize essParam0) // Position - 0x1A83C Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_482(essParam0))
		return false;

	if (func_611(essParam0, 2))
		return true;

	return false;
}

void func_609(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A861 Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_482(essParam0))
		return;

	if (!func_608(essParam0))
	{
		func_614(essParam0, 2);
	
		if (bParam2)
			if (!func_1(0, false, true))
				func_409(true, 4);
	
		if (!func_612() && !bParam1 && !func_1(0, false, true))
			func_613(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_691(essParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

Hash func_610(eStackSize essParam0) // Position - 0x1A8D6 Hash - 0xB8EC44B7 ^0xE877E9C4
{
	switch (essParam0)
	{
		case 0:
			return 166243423;
	
		case 1:
			return 1383300684;
	
		case 2:
			return 2051441678;
	
		case 3:
			return 162509669;
	
		case 4:
			return 635948769;
	
		case 5:
			return 274995506;
	
		case 6:
			return 1661121390;
	
		case 7:
			return 1164374808;
	
		case 8:
			return 1160643979;
	
		case 9:
			return 624063935;
	
		case 10:
			return -1476781101;
	
		case 11:
			return 294553332;
	
		case 12:
			return 1788874135;
	
		case 13:
			return 1784889667;
	
		case 14:
			return 439606975;
	
		case 15:
			return 1560492757;
	
		case 16:
			return -769081407;
	
		case 17:
			return 1902428294;
	
		case 18:
			return -2114499732;
	
		case 19:
			return 800827126;
	
		case 20:
			return 688004210;
	
		case 21:
			return 1351927599;
	
		case 22:
			return 2032023096;
	
		case 23:
			return -291256376;
	
		case 24:
			return -1826731591;
	
		case 25:
			return 2119049229;
	
		case 26:
			return 1352942778;
	
		case 27:
			return 1964379549;
	
		case 28:
			return 1201189539;
	
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
	
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
	
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
	
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
	
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
	
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
	
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
	
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
	
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
	
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
	
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
	
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
	
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
	
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
	
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
	
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
	
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
	
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
	
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
	
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
	
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
	
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
	
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
	
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
	
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
	
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
	
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
	
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
	
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
	
		case 58:
			return 1389254668;
	
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
	
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
	
		case 61:
			return -272211555;
	
		case 62:
			return -361635024;
	
		case 64:
			return -55563408;
	
		case 65:
			return -409616653;
	
		case 66:
			return -1243402388;
	
		case 67:
			return 65931886;
	
		case 68:
			return 1371678229;
	
		case 69:
			return 2102263084;
	
		case 70:
			return -1205612021;
	
		case 71:
			return -1914506115;
	
		case 72:
			return -926815459;
	
		case 73:
			return -389591806;
	
		case 74:
			return -1300731953;
	
		case 75:
			return 802495462;
	
		case 76:
			return 1460520700;
	
		case 77:
			return 842905332;
	
		case 78:
			return -1951220140;
	
		case 79:
			return 1511551084;
	
		case 80:
			return 523337834;
	
		case 81:
			return -1725704631;
	
		case 82:
			return -19271249;
	
		case 83:
			return 1257427489;
	
		case 84:
			return 214175524;
	
		case 85:
			return -659341240;
	
		case 86:
			return -1303643297;
	
		case 87:
			return 2038771525;
	
		case 88:
			return 411856831;
	
		case 89:
			return -535599244;
	
		case 90:
			return 1156438275;
	
		case 91:
			return -1611873049;
	
		case 92:
			return 594312243;
	
		case 93:
			return 890706995;
	
		case 94:
			return -978578725;
	
		default:
		
	}

	return 0;
}

BOOL func_611(eStackSize essParam0, BOOL bParam1) // Position - 0x1AE0B Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_482(essParam0))
		return false;

	return Global_40.f_7157[essParam0 /*3*/] && bParam1 != false;
}

BOOL func_612() // Position - 0x1AE30 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

int func_613(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1AE50 Hash - 0x8EBD6187 ^0x42F0F0AC
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

void func_614(eStackSize essParam0, BOOL bParam1) // Position - 0x1AE8B Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_482(essParam0))
		return;

	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] || bParam1;
	return;
}

int func_615(int iParam0, BOOL bParam1) // Position - 0x1AEB7 Hash - 0x14DDA26B ^0xFFF4A8D0
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -2061583405:
			num = Global_1946054.f_2657.f_26.f_1;
			break;
	
		case -1719060085:
			num = 1;
			break;
	
		case -999503751:
			num = Global_1946054.f_2657.f_26;
			break;
	
		case -525676072:
			num = Global_1946054.f_2657.f_26.f_2;
			break;
	
		case -413129408:
			num = 1;
			break;
	
		case 81053684:
			num = 1;
			break;
	
		default:
			return 0;
	}

	switch (iParam0)
	{
		case -999503751:
			if (num > 0 && !bParam1)
				num = num - 1;
			break;
	}

	return num;
}

void func_616(Hash hParam0, BOOL bParam1) // Position - 0x1AF5A Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_692(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_267(50);
			else
				func_267(48);
			break;
	
		case 1:
			if (bParam1)
				func_267(51);
			else
				func_267(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_693(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_291();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_291();
			}
			break;
	
		case 3:
			func_267(24);
		
			if (bParam1)
			{
				if (!func_693(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_291();
				}
			}
			break;
	}

	return;
}

void func_617(int iParam0) // Position - 0x1B039 Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_694(0))
				num = num + 1;
		
			if (func_694(2))
				num = num + 1;
		
			if (func_694(4))
				num = num + 1;
		
			if (!func_695(16))
			{
				if (num == 1)
				{
					func_696();
					func_256(456, true);
					func_697(16);
				}
			}
		
			if (!func_695(32))
			{
				if (num >= 3)
				{
					func_696();
					func_256(456, true);
					func_697(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_694(1))
				num = num + 1;
		
			if (func_694(3))
				num = num + 1;
		
			if (func_694(7))
				num = num + 1;
		
			if (!func_695(1))
			{
				if (num == 1)
				{
					func_698();
					func_256(457, true);
					func_697(1);
				}
			}
		
			if (!func_695(2))
			{
				if (num >= 3)
				{
					func_698();
					func_256(457, true);
					func_697(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_694(5))
				num = num + 1;
		
			if (func_694(6))
				num = num + 1;
		
			if (func_694(8))
				num = num + 1;
		
			if (!func_695(4))
			{
				if (num == 1)
				{
					func_699();
					func_256(455, true);
					func_697(4);
				}
			}
		
			if (!func_695(8))
			{
				if (num >= 3)
				{
					func_699();
					func_256(455, true);
					func_697(8);
				}
			}
			break;
	}

	return;
}

void func_618(var uParam0) // Position - 0x1B1D0 Hash - 0x2CE00B72 ^0x958A4727
{
	func_489(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_489(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_489(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_619(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x1B20A Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_700(anParam0))
		return;

	if (Global_1223851 < 20)
	{
		Global_1223851 = Global_1223851 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223851.f_1[i /*21*/] = { Global_1223851.f_1[i + 1 /*21*/] };
		}
	}

	unk.f_7.f_2.f_1 = 10;
	unk = { *anParam0 };
	unk.f_4 = hParam1;
	unk.f_6 = 1;
	unk.f_7 = { uParam2 };
	Global_1223851.f_1[Global_1223851 - 1 /*21*/] = { unk };
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_620(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x1B2AB Hash - 0x92B705D3 ^0xB783F681
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

int func_621(Hash hParam0) // Position - 0x1B3A1 Hash - 0xF4E671A6 ^0x338FA446
{
	Hash category;

	if (!func_21(hParam0, 0))
		return 0;

	category = func_208(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);
}

int func_622(int iParam0) // Position - 0x1B3D0 Hash - 0xD14E7A6C ^0x65ACC420
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 0;
	
		case 1:
			return 50;
	
		case 2:
			return 100;
	
		case 3:
			return 200;
	
		case 4:
			return 350;
	
		case 5:
			return 550;
	
		case 6:
			return 800;
	
		case 7:
			return 1100;
	
		default:
		
	}

	return 0;
}

BOOL func_623(int iParam0, var uParam1) // Position - 0x1B446 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_624() // Position - 0x1B44F Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_625(int iParam0) // Position - 0x1B458 Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_147(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_147(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_147(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_626(int iParam0, int iParam1) // Position - 0x1B4BA Hash - 0xD5391B76 ^0x613EF06B
{
	var unk;

	if (iParam0 >= 10)
		iParam1 = 0;

	TEXT_LABEL_ASSIGN_STRING(&unk, "TOAST_RPG_LEVEL_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 32);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam1, 32);
	return unk;
}

const char* func_627(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1B4EC Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_628(int iParam0) // Position - 0x1B500 Hash - 0x21CE226B ^0xFA54D6DF
{
	switch (iParam0)
	{
		case 0:
			return "stamina" /*Stamina*/;
	
		case 1:
			return "health";
	
		case 2:
			return "dead_eye_level_up";
	
		default:
		
	}

	return "";
}

char* func_629(int iParam0) // Position - 0x1B53B Hash - 0x21CE226B ^0x494D2B6B
{
	switch (iParam0)
	{
		case 0:
			return "RPG_HEALTH";
	
		case 1:
			return "RPG_STAMINA";
	
		case 2:
			return "RPG_DEADEYE";
	
		default:
		
	}

	return "";
}

int func_630(int iParam0) // Position - 0x1B576 Hash - 0x21FAF347 ^0x467E3BE5
{
	switch (iParam0)
	{
		case 0:
			return joaat("toast_rpg_level_health");
	
		case 1:
			return joaat("toast_rpg_level_stamina");
	
		case 2:
			return joaat("toast_rpg_level_deadeye");
	
		default:
		
	}

	return 0;
}

int func_631(int iParam0) // Position - 0x1B5B1 Hash - 0x5163992 ^0x5163992
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 3;
	
		default:
		
	}

	return 0;
}

int func_632(int iParam0) // Position - 0x1B5E0 Hash - 0x21FAF347 ^0xA8C8F0DA
{
	switch (iParam0)
	{
		case 0:
			return joaat("stats_health");
	
		case 1:
			return joaat("stats_stamina");
	
		case 2:
			return joaat("stats_deadeye");
	
		default:
		
	}

	return 0;
}

void func_633(int iParam0, int iParam1) // Position - 0x1B61B Hash - 0x19A9221A ^0x79EEA925
{
	int i;
	int num;
	var unk;
	var unk3;

	unk = 39;
	unk3 = 10;
	unk3.f_1 = 39;
	unk3.f_1.f_2 = 39;
	unk3.f_1.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;

	for (i = 0; i < 10; i = i + 1)
	{
		if (i < *iParam0)
		{
			if (func_701(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_701(&iParam0->f_2[i /*2*/], 1))
					func_702(&iParam0->f_2[i /*2*/], 2, 6);
			
				unk3[num /*2*/] = { iParam0->f_2[i /*2*/] };
				num = num + 1;
				iParam0->f_2[i /*2*/] = { unk };
			}
		}
	
		iParam0->f_2[i /*2*/] = { unk };
	}

	for (i = 0; i < num; i = i + 1)
	{
		iParam0->f_2[i /*2*/] = { unk3[i /*2*/] };
	}

	*iParam0 = num;
	return;
}

void func_634(int iParam0, int iParam1, int iParam2) // Position - 0x1B747 Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_703(iParam0, 1))
		func_704(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_635(int iParam0, Hash hParam1) // Position - 0x1B78E Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && hParam1 != false;
}

void func_636(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1B7A7 Hash - 0xE34B9CEC ^0xAFBB60FB
{
	int num;
	int num2;
	int num3;
	int num4;

	num = 0;

	if (bParam4)
		num = 3;

	num2 = 12;
	num3 = 20;
	num4 = 16;

	if (hParam0->f_1[num4 /*3*/].f_1 == 1216705912 || hParam0->f_1[num4 /*3*/].f_1 == 654181853)
	{
		if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
		{
			hParam0->f_1[num4 /*3*/].f_1 = 1334603721;
		}
		else
		{
			hParam0->f_1[num4 /*3*/].f_1 = -1539589426;
			hParam0->f_1[num2 /*3*/].f_1 = joaat("base");
		}
	
		if (bParam2)
			func_509(num2, num);
	
		if (bParam1)
			func_509(num4, num);
	}

	if (hParam0->f_1[num3 /*3*/].f_1 == -1333118809 || hParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		hParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_509(num3, num);
	}

	return;
}

BOOL func_637(int iParam0) // Position - 0x1B893 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_484();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_638(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x1B8B9 Hash - 0x3A135443 ^0x969430D9
{
	int i;

	if (hParam2 == 0)
		return -1;

	for (i = 0; i < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(hParam0, bParam1, bParam3); i = i + 1)
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(hParam0, i, bParam1, bParam3) == hParam2)
			return i;
	}

	return -1;
}

BOOL func_639(Hash hParam0, int iParam1, var uParam2) // Position - 0x1B8FD Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_640(int iParam0, int iParam1) // Position - 0x1B90E Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_329(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_641(Hash hParam0) // Position - 0x1B92C Hash - 0x3AB81F84 ^0x2BD03E57
{
	int num;
	int num2;

	num = 25;
	num2 = 0;

	if (hParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	num = 26;

	if (hParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	return num2;
}

void func_642(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B977 Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_23() == -1)
		func_705(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_706(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_643(BOOL bParam0, eStackSize essParam1) // Position - 0x1B9ED Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_23() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			return Global_26796.f_26[essParam1 /*120*/] && bParam0 != false;
	
		return false;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		return Global_36638.f_45.f_350.f_26[essParam1 /*120*/] && bParam0 != false;

	return false;
}

void func_644(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x1BA6A Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_707(&(Global_1946054.f_1378), essParam0);
	func_708(2, essParam0, 6);

	if (bParam1)
		func_645(false, true);

	return;
}

void func_645(BOOL bParam0, BOOL bParam1) // Position - 0x1BA92 Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_709(0);

	if (bParam0)
	{
		func_516(8);
		func_516(512);
	}
	else
	{
		func_516(8);
		func_516(16);
	}

	return;
}

BOOL func_646(int iParam0) // Position - 0x1BAC5 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_647(int iParam0) // Position - 0x1BADA Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

BOOL func_648(var uParam0, int iParam1, int iParam2) // Position - 0x1BAFA Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_649() // Position - 0x1BB31 Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

void func_650(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x1BB3F Hash - 0xA1405822 ^0xA302E777
{
	int i;
	var unk;

	if (!func_700(anParam0))
		return;

	if (Global_1223409 < 20)
	{
		Global_1223409 = Global_1223409 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223409.f_1[i /*22*/] = { Global_1223409.f_1[i + 1 /*22*/] };
		}
	}

	unk.f_7.f_1 = 10;
	unk.f_7.f_14 = 255;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_7 = { uParam2 };
	unk.f_6 = 1;
	Global_1223409.f_1[Global_1223409 - 1 /*22*/] = { unk };
	return;
}

int func_651(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0x1BBE5 Hash - 0x83735129 ^0x5FB639F3
{
	Hash hash;
	ItemSet itemset;
	Entity entityFromItem;
	int i;
	int itemsetSize;
	int num;
	var unk;
	var unk2;
	var unk3;
	Ped pedIndexFromEntityIndex;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return iParam2;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		if (iParam2 == 0)
			break;
	
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_PED(entityFromItem))
			{
				pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
				func_390(pedIndexFromEntityIndex, &unk, &unk2, &num, &unk3);
				func_391(&hash, pedIndexFromEntityIndex, num, unk);
			
				if (!func_21(hash, 0))
					hash = func_382(entityFromItem);
			}
			else
			{
				hash = func_382(entityFromItem);
			}
		
			if (hash == hParam1)
			{
				PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, false);
			
				if (bParam3)
				{
					func_710(entityFromItem);
					ENTITY::_DELETE_CARRIABLE(&entityFromItem);
				}
			
				iParam2 = iParam2 - 1;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return iParam2;
}

BOOL func_652(BOOL bParam0) // Position - 0x1BCC5 Hash - 0x96106777 ^0x8FA2F1AF
{
	Ped lastMount;

	if (func_23() == -1)
	{
		if (Global_1914319.f_17370 || bParam0 || Global_1914319.f_16855 == 2)
		{
			lastMount = PED::_GET_LAST_MOUNT(Global_35);
		
			if (lastMount != func_156(7))
				return true;
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			lastMount = PED::GET_MOUNT(Global_35);
		
			if (lastMount != func_156(7))
				return true;
		}
	}
	else
	{
		lastMount = PED::_GET_LAST_MOUNT(func_653());
	
		if (lastMount != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()))
			return true;
	}

	return false;
}

Ped func_653() // Position - 0x1BD50 Hash - 0x14A4F660 ^0xC2F042AC
{
	return PLAYER::GET_PLAYER_PED(255);
}

int func_654(int iParam0, Hash hParam1) // Position - 0x1BD5E Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_21(hParam1, 0))
		return 0;

	guid = { func_711(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_655(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x1BD9C Hash - 0x4239382B ^0xCA53D4CD
{
	int inventoryIdFromPed;
	int num;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0);

	if (func_712(pedParam0))
	{
		num = func_713(pedParam0);
	
		if (func_21(hParam1, 0))
			if (func_656(hParam1))
				func_714(num, hParam1, iParam2);
	}

	return func_715(inventoryIdFromPed, hParam1, iParam2, bParam3, hParam4);
}

BOOL func_656(Hash hParam0) // Position - 0x1BDE8 Hash - 0x32CFAC25 ^0x32CFAC25
{
	int i;
	int num;
	Hash hash;

	if (!func_318(hParam0))
		return false;

	for (i = 0; i < 57; i = i + 1)
	{
		num = func_716(i, 1);
		hash = num;
	
		if (hParam0 == hash)
			return true;
	}

	return false;
}

int func_657(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0x1BE2A Hash - 0x40489E01 ^0xFB04AC2C
{
	int i;
	Hash peltId;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return iParam2;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	peltId = hParam1;

	for (i = 2; i >= 0; i = i + -1)
	{
		if (PED::_GET_PELT_FROM_HORSE(pedParam0, i) == peltId)
		{
			PED::_CLEAR_PELT_FROM_HORSE(pedParam0, peltId);
			iParam2 = iParam2 - 1;
		}
	
		if (iParam2 <= 0)
			break;
	}

	return iParam2;
}

BOOL func_658(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1BE92 Hash - 0xD12DD6C0 ^0x9850E73C
{
	var statId;

	statId = { func_313(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);

	func_717(hParam0, iParam1);
	return func_392(hParam0, iParam1, bParam2, hParam3);
}

int func_659(Hash hParam0) // Position - 0x1BEC9 Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_77(hParam0, 1064293907))
		return 2;
	else if (func_77(hParam0, -1218707194))
		return 1;
	else if (func_77(hParam0, 1888974372))
		return 0;

	return 1;
}

void func_660(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x1BF0E Hash - 0x26A1604D ^0x9E4BDD24
{
	Global_1935689.f_4 = bParam0;
	Global_1935689.f_15 = iParam2;

	if (bParam0)
		Global_1935689.f_5 = 0;

	if (bParam1 || func_718() && iParam2 == 0)
	{
		func_719(1);
		func_720(1);
	}

	return;
}

int func_661(Hash hParam0, int iParam1, int iParam2) // Position - 0x1BF54 Hash - 0xED49A216 ^0x75828FFF
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam2)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_462(hash);
	num3 = func_462(hash2);
	num4 = func_462(hash3);

	if (iParam2 != 2)
		num5 = func_462(hash4);

	num6 = func_463(hash);
	num7 = func_463(hash2);
	num8 = func_463(hash3);

	if (iParam2 != 2)
		num9 = func_463(hash4);

	if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam2 != 2)
		if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

struct<29> func_662(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1C0CF Hash - 0xD34D8048 ^0xAE0F4AAB
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_147(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_666(&unk30) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_663(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1C168 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_721(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_217(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_217(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29))
	{
		func_217(num, 1);
		return num;
	}

	return -1;
}

struct<18> func_664(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1C1EF Hash - 0x3EBED8E9 ^0x3FFB16B
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_147(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_666(&unk19) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_665(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1C262 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_722(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_217(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_217(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18))
	{
		func_217(num, 1);
		return num;
	}

	return -1;
}

struct<17> func_666(var uParam0) // Position - 0x1C2E9 Hash - 0x4CD39800 ^0x7DC5804
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
	return unk;
}

BOOL func_667(int iParam0) // Position - 0x1C33D Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_668(BOOL bParam0) // Position - 0x1C353 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_669(Hash hParam0) // Position - 0x1C378 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_670(Hash hParam0) // Position - 0x1C388 Hash - 0xB8632262 ^0xB8632262
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return true;
	
		default:
		
	}

	return false;
}

int func_671(Hash hParam0) // Position - 0x1C42F Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_672(Hash hParam0) // Position - 0x1C468 Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_723(&entity, 0, i, &model) && !func_723(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_724(entity, &model);
		
			if (func_21(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

void func_673() // Position - 0x1C4D4 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_725(Global_35, &unk);
	unk31 = { func_201(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_726(false);
	func_727(7);
	func_728(joaat("kit_bandana"), true, true, false);

	if (func_484() == 1160113249)
	{
		func_728(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_728(-361635024, true, true, true);
	}

	func_729(Global_35, &unk);
	return;
}

int func_674(int iParam0) // Position - 0x1C55D Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_675(int iParam0) // Position - 0x1C582 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_676(int iParam0) // Position - 0x1C595 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_677(int iParam0) // Position - 0x1C5A8 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_678(int iParam0) // Position - 0x1C5BB Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_679(int iParam0) // Position - 0x1C5CD Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_680(int iParam0, int iParam1) // Position - 0x1C5DF Hash - 0x893AC59E ^0x893AC59E
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

void func_681(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1C679 Hash - 0xA65AB937 ^0xA65AB937
{
	func_730(uParam0, iParam6);
	func_731(uParam0, iParam5);
	func_732(uParam0, iParam4);
	func_733(uParam0, iParam3);
	func_734(uParam0, iParam2);
	func_735(uParam0, iParam1);
	return;
}

int func_682(int iParam0) // Position - 0x1C6B1 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_683(Hash hParam0, int iParam1) // Position - 0x1C732 Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_147(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_730(&num, year);
	func_731(&num, month);
	func_732(&num, day);
	func_733(&num, hour);
	func_734(&num, minute);
	func_735(&num, second);
	return num;
}

BOOL func_684(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x1C797 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_736(essParam1) || !func_736(essParam0))
			return true;

	return essParam0 > essParam1;
}

void func_685(int iParam0) // Position - 0x1C7C4 Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_491(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

int func_686(int iParam0, int iParam1) // Position - 0x1C7F7 Hash - 0x8FA0E29 ^0xC3F68E87
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
	
		case -2106214197:
			return 104;
	
		case -2101264851:
			return 195;
	
		case -2073072369:
			return 59;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
	
		case -2058120606:
			return 197;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 92;
	
		case -2022369555:
			return 265;
	
		case -2021582629:
			return 112;
	
		case -2020023971:
			return 278;
	
		case -1957523409:
			return 208;
	
		case -1952856164:
			return 165;
	
		case -1949204933:
			return 276;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
	
		case -1852605133:
			return 10;
	
		case -1847672446:
			return 376;
	
		case -1840704908:
			return 289;
	
		case -1838712533:
			return 26;
	
		case -1838352012:
			return 57;
	
		case -1835851517:
			return 56;
	
		case -1831552326:
			return 123;
	
		case -1825294305:
			return 266;
	
		case -1824738758:
			return 277;
	
		case -1818850842:
			return 253;
	
		case -1799960545:
			return 257;
	
		case -1764522338:
			return 372;
	
		case -1763509974:
			return 141;
	
		case -1741667789:
			return 64;
	
		case -1738165526:
			return 3;
	
		case -1718674470:
			return 23;
	
		case -1717960576:
			return 61;
	
		case -1711895055:
			return 13;
	
		case -1706438978:
			return 233;
	
		case -1700452710:
			return 53;
	
		case -1674179981:
			return 55;
	
		case -1666278201:
			return 33;
	
		case -1612662716:
			return 201;
	
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
	
		case -1582926490:
			return 146;
	
		case -1579419919:
			return 147;
	
		case -1558439474:
			return 301;
	
		case -1556423728:
			return 218;
	
		case -1532284567:
			return 116;
	
		case -1530132748:
			return 311;
	
		case -1524512402:
			return 209;
	
		case -1523910291:
			return 155;
	
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
	
		case -1447311849:
			return 215;
	
		case -1436021162:
			return 172;
	
		case -1433686245:
			return 12;
	
		case -1425209566:
			return 32;
	
		case -1419919497:
			return 22;
	
		case -1414537028:
			return 73;
	
		case -1405998267:
			return 105;
	
		case -1344601768:
			return 314;
	
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
	
		case -1329135070:
			return 140;
	
		case -1318987693:
			return 222;
	
		case -1311865656:
			return 37;
	
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
	
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
	
		case -1282804314:
			return 270;
	
		case -1278074582:
			return 171;
	
		case -1271608261:
			return 98;
	
		case -1257057567:
			return 21;
	
		case -1241340344:
			return 300;
	
		case -1236261996:
			return 235;
	
		case -1232809834:
			return 113;
	
		case -1230112817:
			return 170;
	
		case -1223121209:
			return 126;
	
		case -1215445344:
			return 131;
	
		case -1209597203:
			return 333;
	
		case -1206122982:
			return 156;
	
		case -1187950766:
			return 45;
	
		case -1179948750:
			return 136;
	
		case -1170496998:
			return 46;
	
		case -1164215952:
			return 234;
	
		case -1151084372:
			return 124;
	
		case -1145519186:
			return 100;
	
		case -1124061431:
			return 242;
	
		case -1123615607:
			return 29;
	
		case -1080627546:
			return 378;
	
		case -1077783786:
			return 194;
	
		case -1063147448:
			return 151;
	
		case -1062490780:
			return 79;
	
		case -1060078174:
			return 239;
	
		case -1056767524:
			return 176;
	
		case -1053549743:
			return 58;
	
		case -1029225159:
			return 106;
	
		case -1014145132:
			return 288;
	
		case -978957786:
			return 251;
	
		case -959357075:
			return 36;
	
		case -950054349:
			return 152;
	
		case -939420910:
			return 44;
	
		case -939114198:
			return 221;
	
		case -919512195:
			return 40;
	
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
	
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
	
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
	
		case -879507474:
			return 236;
	
		case -868076593:
			return 84;
	
		case -857964358:
			return 83;
	
		case -853383233:
			return 65;
	
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
	
		case -828139293:
			return 260;
	
		case -811637947:
			return 245;
	
		case -796902762:
			return 88;
	
		case -792853067:
			return 254;
	
		case -789397228:
			return 262;
	
		case -785605431:
			return 250;
	
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
	
		case -764163380:
			return 228;
	
		case -748969569:
			return 78;
	
		case -741351766:
			return 60;
	
		case -736853952:
			return 366;
	
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
	
		case -699277634:
			return 4;
	
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
	
		case -683458244:
			return 80;
	
		case -666014935:
			return 157;
	
		case -664512648:
			return 67;
	
		case -664252410:
			return 191;
	
		case -644722288:
			return 261;
	
		case -640663440:
			return 214;
	
		case -639037538:
			return 185;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

float func_687(int iParam0) // Position - 0x1D910 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_688(float fParam0) // Position - 0x1D924 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

char* func_689(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1D93F Hash - 0xC24B5846 ^0x3DD7FF45
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					else
						return bParam3 ? "PMPLAYER_CONDITION_TEMPERATURE_COLD" : "PMPLAYER_CONDITION_TEMPERATURE_HOT";
					break;
			
				case 2:
					return bParam2 ? "PMPLAYER_CONDITION_HONOR_GOOD" : "PMPLAYER_CONDITION_HONOR_BAD";
			}
			break;
	
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
			
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
			
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
			
				default:
					break;
			}
			break;
	}

	return "";
}

Hash func_690() // Position - 0x1D9E8 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

char* func_691(eStackSize essParam0) // Position - 0x1D9F7 Hash - 0xCCDB3731 ^0x6DF6679A
{
	Hash hash;

	hash = func_610(essParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_562(hash);
}

int func_692(Hash hParam0) // Position - 0x1DA1A Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_737(hParam0))
		num = 0;
	else if (func_738(hParam0))
		num = 1;
	else if (func_739(hParam0))
		num = 2;
	else if (func_740(hParam0))
		num = 3;

	return num;
}

BOOL func_693(int iParam0) // Position - 0x1DA5D Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_221(func_741(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_694(int iParam0) // Position - 0x1DA9D Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_221(func_742(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_695(int iParam0) // Position - 0x1DADC Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_696() // Position - 0x1DAEF Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_23() != -1)
		return;

	func_309(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_324(1);
	func_503(1, num, 0);
	return;
}

void func_697(int iParam0) // Position - 0x1DB21 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_698() // Position - 0x1DB38 Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_23() != -1)
		return;

	func_309(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_324(2);
	func_503(2, num, 0);
	return;
}

void func_699() // Position - 0x1DB6A Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_23() != -1)
		return;

	func_309(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_324(0);
	func_503(0, num, 0);
	return;
}

BOOL func_700(Any anParam0) // Position - 0x1DB9C Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_701(var uParam0, int iParam1) // Position - 0x1DBD2 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_702(var uParam0, int iParam1, int iParam2) // Position - 0x1DBE3 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_703(int iParam0, int iParam1) // Position - 0x1DBF6 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_704(int iParam0, int iParam1) // Position - 0x1DC07 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_705(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x1DC1A Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_706(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x1DC75 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_707(Hash hParam0, eStackSize essParam1) // Position - 0x1DCDF Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_23() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *hParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_705(&hParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *hParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_706(&hParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_708(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x1DD7A Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_23() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			Global_26796.f_26[essParam1 /*120*/] = Global_26796.f_26[essParam1 /*120*/] || bParam0;
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		Global_36638.f_45.f_350.f_26[essParam1 /*120*/] = Global_36638.f_45.f_350.f_26[essParam1 /*120*/] || bParam0;

	return;
}

void func_709(int iParam0) // Position - 0x1DE02 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

void func_710(Entity eParam0) // Position - 0x1DE13 Hash - 0xC5AA53DE ^0x680DD5A
{
	Ped pedIndexFromEntityIndex;
	int num;
	eStackSize stackSize;
	var unk;
	int num2;
	int i;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);
	num = 878851736;
	stackSize = Global_40.f_4283;

	if (func_743(ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex), stackSize))
	{
		num = -1708424762;
	}
	else
	{
		unk = 10;
		func_389(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0), &unk);
	
		for (i = 0; i < 10; i = i + 1)
		{
			if (!func_21(unk[i], 0))
			{
			}
			else if (!func_744(unk[i]))
			{
			}
			else
			{
				num2 = func_745(unk[i], stackSize);
			
				if (func_746(num2, num))
					num = num2;
			}
		}
	}

	func_747(&num);

	if (func_746(num, Global_1357549.f_1492))
		Global_1357549.f_1492 = num;

	return;
}

struct<4> func_711(int iParam0, Hash hParam1) // Position - 0x1DEDD Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_748(iParam0) };
	return func_749(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_712(Ped pedParam0) // Position - 0x1DEFF Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_713(pedParam0);

	if (num == -1)
		return false;

	return true;
}

int func_713(Ped pedParam0) // Position - 0x1DF3D Hash - 0xD44AE303 ^0xA29D7F05
{
	int i;

	if (pedParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (pedParam0 == Global_1900383[i /*45*/])
			return i;
	}

	return -1;
}

void func_714(int iParam0, Hash hParam1, int iParam2) // Position - 0x1DF82 Hash - 0xAC28FF72 ^0xA969E0AB
{
	Hash hash;
	int num;

	iParam0 = func_218(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	hash = func_750(hParam1);
	num = func_751(hash, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] - iParam2;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = func_752(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num], 0, 10);
	return;
}

BOOL func_715(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x1E00F Hash - 0x58967A60 ^0x975E68C3
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var statId;

	if (!func_21(hParam1, 0))
		return 0;

	flag = hParam4 == 562618531;
	flag2 = hParam4 == 1992602754;
	flag3 = hParam4 == -1387038764;

	if (!func_753(iParam0, hParam1, 1))
		return 0;

	statId = { func_313(hParam1) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_654(iParam0, hParam1) - iParam2 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam2);
		}
		else if (func_654(iParam0, hParam1) - iParam2 < 0)
		{
			func_715(iParam0, hParam1, func_129(hParam1, false, false), bParam3, hParam4);
			return 0;
		}
	}

	if (!func_754(iParam0, hParam1, iParam2, hParam4, bParam3))
		return 0;

	if (!func_80(false))
		bParam3 = true;

	if (!bParam3 && hParam1 != 1309979101)
		func_164(hParam1, -iParam2, flag, flag2, flag3);

	return 1;
}

int func_716(int iParam0, int iParam1) // Position - 0x1E0F2 Hash - 0xE1D12727 ^0xC55B8D95
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_beaver_fur");
	
		case 1:
			return joaat("PROVISION_BEAVER_FUR_POOR");
	
		case 2:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
	
		case 3:
			return joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE");
	
		case 4:
			return joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE");
	
		case 5:
			return joaat("provision_boar_skin");
	
		case 6:
			return joaat("PROVISION_BOAR_SKIN_POOR");
	
		case 7:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
	
		case 8:
			return joaat("provision_buck_fur");
	
		case 9:
			return joaat("PROVISION_BUCK_FUR_POOR");
	
		case 10:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
	
		case 11:
			return joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE");
	
		case 12:
			return joaat("provision_cougar_fur");
	
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
	
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
	
		case 15:
			return joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE");
	
		case 16:
			return joaat("provision_coyote_fur");
	
		case 17:
			return joaat("PROVISION_COYOTE_FUR_POOR");
	
		case 18:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
	
		case 19:
			return joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE");
	
		case 20:
			return joaat("provision_deer_hide");
	
		case 21:
			return joaat("PROVISION_DEER_HIDE_POOR");
	
		case 22:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
	
		case 23:
			return joaat("provision_fox_fur");
	
		case 24:
			return joaat("PROVISION_FOX_FUR_POOR");
	
		case 25:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
	
		case 26:
			return joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE");
	
		case 27:
			return joaat("provision_goat_hair");
	
		case 28:
			return joaat("PROVISION_GOAT_HAIR_POOR");
	
		case 29:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
	
		case 30:
			return joaat("provision_javelina_skin");
	
		case 31:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
	
		case 32:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
	
		case 33:
			return joaat("provision_loanshark_skins");
	
		case 34:
			return joaat("provision_panther_fur");
	
		case 35:
			return joaat("PROVISION_PANTHER_FUR_POOR");
	
		case 36:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
	
		case 37:
			return joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE");
	
		case 38:
			return joaat("provision_pig_skin");
	
		case 39:
			return joaat("PROVISION_PIG_SKIN_POOR");
	
		case 40:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
	
		case 41:
			return joaat("provision_pronghorn_fur");
	
		case 42:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
	
		case 43:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
	
		case 44:
			return joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE");
	
		case 45:
			return joaat("provision_ram_hide");
	
		case 46:
			return joaat("PROVISION_RAM_HIDE_POOR");
	
		case 47:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
	
		case 48:
			return joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE");
	
		case 49:
			return joaat("provision_sheep_wool");
	
		case 50:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
	
		case 51:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
	
		case 52:
			return joaat("provision_wolf_fur");
	
		case 53:
			return joaat("PROVISION_WOLF_FUR_POOR");
	
		case 54:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
	
		case 55:
			return joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE");
	
		case 56:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_717(Hash hParam0, int iParam1) // Position - 0x1E42B Hash - 0xE499CB2B ^0xBF16EE8A
{
	Ped mountOwnedByPlayer;

	if (func_23() == -1)
		mountOwnedByPlayer = func_156(7);
	else
		mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	func_657(mountOwnedByPlayer, hParam0, iParam1);
	return;
}

BOOL func_718() // Position - 0x1E45A Hash - 0x79BF13D1 ^0xA856906C
{
	if (Global_1935689.f_9445 != Global_1935689.f_19.f_203 - 1 || func_755(func_530(0), Global_1935689.f_9440, false) > 0 || Global_1935689.f_9445 == 15)
		return true;

	return false;
}

void func_719(int iParam0) // Position - 0x1E4A5 Hash - 0x29A8F290 ^0x82294867
{
	Global_1935689.f_11 = iParam0;
	return;
}

void func_720(int iParam0) // Position - 0x1E4B5 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1935689.f_10 = iParam0;
	return;
}

BOOL func_721(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1E4C5 Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_722(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1E4DC Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_723(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x1E4F3 Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_371(iParam1) && !func_756(iParam1))
		ped = func_156(iParam1);
	else
		return false;

	func_757(uParam3);
	num = func_758(iParam2);

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, ped, num, 0))
		return false;

	*uParam0 = unk.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(*uParam0))
		return false;

	*uParam3 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*uParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*uParam0);
	return true;
}

void func_724(Entity eParam0, var uParam1) // Position - 0x1E592 Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_390(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_391(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

void func_725(Ped pedParam0, Any* panParam1) // Position - 0x1E5DC Hash - 0x2B5AFE28 ^0xF454BB04
{
	var src;
	int i;
	Hash weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	src = 29;
	MISC::COPY_SCRIPT_STRUCT(panParam1, &src, 30);

	for (i = 0; i < 29; i = i + 1)
	{
		weaponHash = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
	
		if (func_232(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_726(BOOL bParam0) // Position - 0x1E641 Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_21(hash, 0))
			func_759(hash, false, bParam0);
	
		Global_1946054.f_2657[i] = 0;
	}

	Global_1946054.f_2657.f_20 = 0;
	Global_1946054.f_2657.f_21 = 0;
	Global_1946054.f_2657.f_22 = 0;
	Global_1946054.f_2657.f_23 = 0;
	Global_1946054.f_2657.f_24 = 0;
	Global_1946054.f_2657.f_25 = 0;
	Global_1946054.f_2657.f_19 = 0;
	Global_1946054.f_2657.f_26.f_6 = 0;
	return;
}

void func_727(int iParam0) // Position - 0x1E6DA Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_23() == -1)
	{
		func_760(352481484);
	
		for (i = 0; i < Global_26796.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_26796[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_26796.f_20;
		Global_1946054.f_2657.f_21 = Global_26796.f_21;
		Global_1946054.f_2657.f_22 = Global_26796.f_22;
		Global_1946054.f_2657.f_23 = Global_26796.f_23;
		Global_1946054.f_2657.f_24 = Global_26796.f_24;
		Global_1946054.f_2657.f_25 = Global_26796.f_25;
		Global_1946054.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		for (i = 0; i < Global_36638.f_45.f_350.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_36638.f_45.f_350[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946054.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946054.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946054.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946054.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946054.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946054.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_208(hash) != -999503751)
			func_761(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_762(hash, false))
			func_763(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_728(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1E8CA Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_764(hParam0))
		return;

	hash = func_208(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_765(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_765(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_765(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_765(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_765(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_765(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_766(0))
	{
		func_767(hParam0, true);
	
		if (func_484() == 1160113249)
			func_767(func_766(-2125499975), false);
		else
			func_767(func_766(1160113249), false);
	}

	func_768();

	if (func_769(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_147(false), hParam0, 0);

	func_763(hParam0, bParam3);

	if (bParam2)
		func_645(false, false);

	return;
}

void func_729(Ped pedParam0, var uParam1) // Position - 0x1EA30 Hash - 0xEFD384E2 ^0xD2D4DFA3
{
	int i;
	int weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	for (i = 0; i < 29; i = i + 1)
	{
		if (uParam1->[i] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam1->[i], 0, false))
				if (func_146(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

void func_730(var uParam0, int iParam1) // Position - 0x1EAD9 Hash - 0xD05180BA ^0x39589262
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

void func_731(var uParam0, int iParam1) // Position - 0x1EB5F Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_732(var uParam0, int iParam1) // Position - 0x1EB9B Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_675(*uParam0);
	num2 = func_674(*uParam0);

	if (iParam1 < 1 || iParam1 > func_680(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_733(var uParam0, int iParam1) // Position - 0x1EBEE Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_734(var uParam0, int iParam1) // Position - 0x1EC29 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_735(var uParam0, int iParam1) // Position - 0x1EC62 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_736(eStackSize essParam0) // Position - 0x1EC9A Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (essParam0 == -15)
		return false;

	num = func_679(essParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_678(essParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_677(essParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_674(essParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_675(essParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_676(essParam0);

	if (num6 < 1 || num6 > func_680(num5, num4))
		return false;

	return true;
}

BOOL func_737(Hash hParam0) // Position - 0x1ED76 Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_21(hParam0, 0))
		return false;

	if (func_77(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_738(Hash hParam0) // Position - 0x1EDA0 Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_21(hParam0, 0))
		return false;

	if (func_77(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_739(Hash hParam0) // Position - 0x1EDCA Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_21(hParam0, 0))
		return false;

	if (func_77(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_740(Hash hParam0) // Position - 0x1EDF4 Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_21(hParam0, 0))
		return false;

	if (func_77(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_741(int iParam0, int iParam1) // Position - 0x1EE1E Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_770(iParam0);
	
		case 1:
			return func_771(iParam0);
	
		case 2:
			return func_772(iParam0);
	
		case 3:
			return func_773(iParam0);
	}

	return 0;
}

Hash func_742(int iParam0, int iParam1) // Position - 0x1EE77 Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_774(iParam0);
	
		case 1:
			return func_775(iParam0);
	
		case 2:
			return func_776(iParam0);
	
		case 3:
			return func_777(iParam0);
	
		case 4:
			return func_778(iParam0);
	
		case 5:
			return func_779(iParam0);
	
		case 6:
			return func_780(iParam0);
	
		case 7:
			return func_781(iParam0);
	
		case 8:
			return func_782(iParam0);
	}

	return 0;
}

BOOL func_743(Hash hParam0, eStackSize essParam1) // Position - 0x1EF2A Hash - 0xF5E57FDF ^0xF5E57FDF
{
	switch (essParam1)
	{
		case 1:
			switch (hParam0)
			{
				case joaat("a_c_duck_01"):
				case joaat("A_C_Rabbit_01"):
				case joaat("a_c_pronghorn_01"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (hParam0)
			{
				case joaat("a_c_buck_01"):
				case joaat("a_c_turkey_01"):
				case joaat("a_c_turkey_02"):
				case joaat("a_c_fishrainbowtrout_01_lg"):
				case joaat("a_c_fishrainbowtrout_01_ms"):
				case joaat("a_c_deer_01"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (hParam0)
			{
				case joaat("a_c_alligator_01"):
				case joaat("a_c_alligator_02"):
				case joaat("a_c_alligator_03"):
				case joaat("a_c_fishlargemouthbass_01_ms"):
				case joaat("a_c_fishlargemouthbass_01_lg"):
				case joaat("a_c_carolinaparakeet_01"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (hParam0)
			{
				case joaat("a_c_elk_01"):
				case joaat("a_c_fishsalmonsockeye_01_ms"):
				case joaat("a_c_fishsalmonsockeye_01_lg"):
				case joaat("a_c_fishsalmonsockeye_01_ml"):
				case joaat("a_c_quail_01"):
					return true;
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_744(Hash hParam0) // Position - 0x1F007 Hash - 0x6BAA9EF6 ^0x42D7C39C
{
	if (func_77(hParam0, -839724752) || func_77(hParam0, joaat("ci_tag_item_meat_animal")) || func_77(hParam0, 1286414894))
		return true;

	return false;
}

int func_745(Hash hParam0, eStackSize essParam1) // Position - 0x1F044 Hash - 0xC5733D28 ^0xFB197C4
{
	if (!func_21(hParam0, 0))
		return 878851736;

	if (!func_744(hParam0))
		return 878851736;

	if (func_783(hParam0, essParam1))
		return -1708424762;
	else if (func_77(hParam0, -1690954218))
		return -1760041550;
	else if (func_77(hParam0, 1149630095))
		return -1760041550;
	else if (func_77(hParam0, 194498509))
		return 116793994;
	else if (func_77(hParam0, 43251425))
		return 1869130580;

	return 1869130580;
}

BOOL func_746(int iParam0, int iParam1) // Position - 0x1F0ED Hash - 0xD4119D7E ^0x719C18FD
{
	var unk;
	int num;
	int num2;
	int i;

	unk = 10;
	unk[0] = 878851736;
	unk[1] = 1762298001;
	unk[2] = 1869130580;
	unk[3] = 1336518004;
	unk[4] = 116793994;
	unk[5] = 515084529;
	unk[6] = -1760041550;
	unk[7] = -1977068039;
	unk[8] = -1708424762;
	unk[9] = -399865011;
	num = -1;
	num2 = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (unk[i] == iParam0)
		{
			num = i;
			break;
		}
	}

	if (num == -1)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (unk[i] == iParam1)
		{
			num2 = i;
			break;
		}
	}

	if (num2 == -1)
		return false;

	return num > num2;
}

void func_747(var uParam0) // Position - 0x1F1CA Hash - 0x4298C46 ^0x74410755
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*uParam0)
		{
			case -1760041550:
				*uParam0 = -1977068039;
				break;
		
			case -1708424762:
				*uParam0 = -399865011;
				break;
		
			case 116793994:
				*uParam0 = 515084529;
				break;
		
			case 878851736:
				*uParam0 = 1762298001;
				break;
		
			case 1869130580:
				*uParam0 = 1336518004;
				break;
		}
	}

	return;
}

struct<5> func_748(int iParam0) // Position - 0x1F23D Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_749(iParam0, joaat("character"), func_373(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_749(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x1F26A Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_21(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

Hash func_750(Hash hParam0) // Position - 0x1F297 Hash - 0x2D6C03B6 ^0x2D6C03B6
{
	if (!func_656(hParam0))
		return 0;

	return hParam0;
}

int func_751(Hash hParam0, int iParam1) // Position - 0x1F2AF Hash - 0x5E5FF029 ^0x5E5FF029
{
	switch (hParam0)
	{
		case joaat("provision_beaver_fur"):
			return 0;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 7;
	
		case joaat("provision_deer_hide"):
			return 20;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 29;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 1;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 17;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 43;
	
		case joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE"):
			return 19;
	
		case joaat("provision_javelina_skin"):
			return 30;
	
		case joaat("provision_sheep_wool"):
			return 49;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 40;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 22;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 42;
	
		case joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE"):
			return 11;
	
		case joaat("provision_buck_fur"):
			return 8;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 18;
	
		case joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE"):
			return 48;
	
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 10;
	
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 21;
	
		case joaat("provision_ram_hide"):
			return 45;
	
		case joaat("provision_panther_fur"):
			return 34;
	
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 39;
	
		case joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE"):
			return 3;
	
		case joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE"):
			return 44;
	
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 31;
	
		case joaat("provision_pig_skin"):
			return 38;
	
		case 0:
			return 56;
	
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 53;
	
		case joaat("provision_fox_fur"):
			return 23;
	
		case joaat("provision_cougar_fur"):
			return 12;
	
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 25;
	
		case joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE"):
			return 55;
	
		case joaat("provision_pronghorn_fur"):
			return 41;
	
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 54;
	
		case joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE"):
			return 37;
	
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 28;
	
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 2;
	
		case joaat("provision_wolf_fur"):
			return 52;
	
		case joaat("provision_coyote_fur"):
			return 16;
	
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 6;
	
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 51;
	
		case joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE"):
			return 15;
	
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 35;
	
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 9;
	
		case joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE"):
			return 26;
	
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 24;
	
		case joaat("provision_goat_hair"):
			return 27;
	
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 50;
	
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 47;
	
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 46;
	
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
	
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 32;
	
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 36;
	
		case joaat("provision_loanshark_skins"):
			return 33;
	
		case joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE"):
			return 4;
	
		case joaat("provision_boar_skin"):
			return 5;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_752(int iParam0, int iParam1, int iParam2) // Position - 0x1F53B Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_753(int iParam0, Hash hParam1, int iParam2) // Position - 0x1F560 Hash - 0x5E31EF6C ^0x5E31EF6C
{
	if (!func_21(hParam1, 0))
		return false;

	return func_654(iParam0, hParam1) >= iParam2;
}

BOOL func_754(int iParam0, Hash hParam1, int iParam2, Hash hParam3, BOOL bParam4) // Position - 0x1F582 Hash - 0x1ABECC38 ^0x1ABECC38
{
	var unk;
	var unk6;

	if (!func_21(hParam1, 0))
		return false;

	if (iParam2 < 1)
		return false;

	unk = { func_748(iParam0) };
	unk6 = { func_749(iParam0, hParam1, unk, unk.f_4) };
	return func_784(iParam0, hParam1, &unk6, iParam2, hParam3, bParam4);
}

int func_755(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x1F5D1 Hash - 0x13E952EA ^0xE3E4C426
{
	int num;

	if (func_785())
	{
		num = func_786(hParam1, false);
	}
	else
	{
		num = func_129(hParam1, bParam2, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
			num = num + func_654(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);
	}

	if (hParam1 == Global_1935689.f_1224)
		num = num + 1;

	return num;
}

BOOL func_756(int iParam0) // Position - 0x1F625 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_218(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_371(iParam0))
		return false;

	ped = func_156(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

void func_757(var uParam0) // Position - 0x1F679 Hash - 0x6843C143 ^0xA531F0D1
{
	int i;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		uParam0->f_10[i /*8*/] = 0;
		uParam0->f_10[i /*8*/].f_1 = 0;
		uParam0->f_10[i /*8*/].f_2 = 0;
		uParam0->f_10[i /*8*/].f_3 = 0;
		uParam0->f_10[i /*8*/].f_4 = 0;
		uParam0->f_10[i /*8*/].f_5 = 0;
		uParam0->f_10[i /*8*/].f_6 = 0;
		uParam0->f_10[i /*8*/].f_7 = 0;
	}

	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
	return;
}

int func_758(int iParam0) // Position - 0x1F720 Hash - 0x1B64DC55 ^0x1B64DC55
{
	switch (iParam0)
	{
		case 0:
			return 4;
	
		case 1:
			return 5;
	
		case 2:
			return 6;
	}

	return 0;
}

void func_759(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1F758 Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_208(hParam0))
	{
		case -2061583405:
			flag = func_787(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_787(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_787(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_787(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_787(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_787(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_768();

	if (bParam1)
		func_645(false, false);

	return;
}

void func_760(int iParam0) // Position - 0x1F825 Hash - 0x958E8FB2 ^0x9CA4541C
{
	int num;
	int num2;
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk = { func_363(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_365(&unk, &num, &num2, false))
	{
		if (num2 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946054.f_2657.f_26.f_2 = 5;
					Global_1946054.f_2657.f_26.f_1 = 5;
					Global_1946054.f_2657.f_26 = 5;
					break;
			}
		}
	
		func_366(num);
	}

	return;
}

void func_761(var uParam0, Hash hParam1, int iParam2) // Position - 0x1F8EF Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_788(iParam2, *uParam0);
	func_789(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_762(Hash hParam0, BOOL bParam1) // Position - 0x1F925 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_148(hParam0, false, false) };
	guid = { func_202(hParam0, unk, unk.f_4, false) };

	if (func_215(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_147(false), &guid, bParam1);
	return true;
}

void func_763(Hash hParam0, BOOL bParam1) // Position - 0x1F971 Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_148(hParam0, false, false) };
	guid = { func_202(hParam0, unk, unk.f_4, false) };

	if (func_215(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_147(false), &guid, bParam1);
	return;
}

BOOL func_764(Hash hParam0) // Position - 0x1F9BB Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_23() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_765(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1F9E4 Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_790(hash, &unk))
		return 0;

	if (bParam3 && !func_762(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_208(hParam0) != -999503751)
		func_761(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

Hash func_766(int iParam0) // Position - 0x1FA8C Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_484();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

int func_767(Hash hParam0, BOOL bParam1) // Position - 0x1FAB7 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_148(hParam0, false, false) };
	guid = { func_202(hParam0, unk, unk.f_4, false) };

	if (func_215(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_147(false), &guid);
	return 1;
}

void func_768() // Position - 0x1FB03 Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_23() == -1)
	{
		for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
		{
			Global_26796[i] = Global_1946054.f_2657[i];
		}
	
		Global_26796.f_20 = Global_1946054.f_2657.f_20;
		Global_26796.f_21 = Global_1946054.f_2657.f_21;
		Global_26796.f_22 = Global_1946054.f_2657.f_22;
		Global_26796.f_23 = Global_1946054.f_2657.f_23;
		Global_26796.f_24 = Global_1946054.f_2657.f_24;
		Global_26796.f_19 = Global_1946054.f_2657.f_19;
		return;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		Global_36638.f_45.f_350[i] = Global_1946054.f_2657[i];
	}

	Global_36638.f_45.f_350.f_20 = Global_1946054.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946054.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946054.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946054.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946054.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946054.f_2657.f_19;
	return;
}

BOOL func_769(Hash hParam0) // Position - 0x1FC39 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_792(func_791(hParam0));
}

Hash func_770(int iParam0) // Position - 0x1FC4B Hash - 0xC02FF737 ^0xE6E3E291
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_gator");
	
		case 1:
			return joaat("provision_reinforced_bandolier_bear");
	
		case 2:
			return joaat("provision_reinforced_bandolier_boar");
	
		case 3:
			return joaat("provision_reinforced_bandolier_buffalo");
	
		case 4:
			return joaat("provision_reinforced_bandolier_cougar");
	
		case 5:
			return joaat("provision_reinforced_bandolier_deer");
	
		case 6:
			return joaat("provision_reinforced_bandolier_panther");
	
		case 7:
			return joaat("provision_reinforced_bandolier_rabbit");
	
		case 8:
			return joaat("provision_reinforced_bandolier_snake");
	
		default:
		
	}

	return 0;
}

Hash func_771(int iParam0) // Position - 0x1FCDA Hash - 0xC02FF737 ^0x9CC78C98
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_gunbelt_gator");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_bear");
	
		case 2:
			return joaat("provision_reinforced_gunbelt_boar");
	
		case 3:
			return joaat("provision_reinforced_gunbelt_buffalo");
	
		case 4:
			return joaat("provision_reinforced_gunbelt_cougar");
	
		case 5:
			return joaat("provision_reinforced_gunbelt_deer");
	
		case 6:
			return joaat("provision_reinforced_gunbelt_panther");
	
		case 7:
			return joaat("provision_reinforced_gunbelt_rabbit");
	
		case 8:
			return joaat("provision_reinforced_gunbelt_snake");
	
		default:
		
	}

	return 0;
}

Hash func_772(int iParam0) // Position - 0x1FD69 Hash - 0xC02FF737 ^0x26BFE76B
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_holster_gator");
	
		case 1:
			return joaat("provision_reinforced_holster_bear");
	
		case 2:
			return joaat("provision_reinforced_holster_boar");
	
		case 3:
			return joaat("provision_reinforced_holster_buffalo");
	
		case 4:
			return joaat("provision_reinforced_holster_cougar");
	
		case 5:
			return joaat("provision_reinforced_holster_deer");
	
		case 6:
			return joaat("provision_reinforced_holster_panther");
	
		case 7:
			return joaat("provision_reinforced_holster_rabbit");
	
		case 8:
			return joaat("provision_reinforced_holster_snake");
	
		default:
		
	}

	return 0;
}

Hash func_773(int iParam0) // Position - 0x1FDF8 Hash - 0xC02FF737 ^0xC89D76B1
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_offhand_gator");
	
		case 1:
			return joaat("provision_reinforced_offhand_bear");
	
		case 2:
			return joaat("provision_reinforced_offhand_boar");
	
		case 3:
			return joaat("provision_reinforced_offhand_buffalo");
	
		case 4:
			return joaat("provision_reinforced_offhand_cougar");
	
		case 5:
			return joaat("provision_reinforced_offhand_deer");
	
		case 6:
			return joaat("provision_reinforced_offhand_panther");
	
		case 7:
			return joaat("provision_reinforced_offhand_rabbit");
	
		case 8:
			return joaat("provision_reinforced_offhand_snake");
	
		default:
		
	}

	return 0;
}

Hash func_774(int iParam0) // Position - 0x1FE87 Hash - 0x51E02475 ^0x6FAD83C9
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_gator");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_gator");
	
		case 2:
			return joaat("provision_reinforced_holster_gator");
	
		case 3:
			return joaat("provision_reinforced_offhand_gator");
	
		default:
		
	}

	return 0;
}

Hash func_775(int iParam0) // Position - 0x1FED0 Hash - 0x51E02475 ^0x73BA00BD
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_bear");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_bear");
	
		case 2:
			return joaat("provision_reinforced_holster_bear");
	
		case 3:
			return joaat("provision_reinforced_offhand_bear");
	
		default:
		
	}

	return 0;
}

Hash func_776(int iParam0) // Position - 0x1FF19 Hash - 0x51E02475 ^0xD39CAF97
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_boar");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_boar");
	
		case 2:
			return joaat("provision_reinforced_holster_boar");
	
		case 3:
			return joaat("provision_reinforced_offhand_boar");
	
		default:
		
	}

	return 0;
}

Hash func_777(int iParam0) // Position - 0x1FF62 Hash - 0x51E02475 ^0xB8F3F001
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_buffalo");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_buffalo");
	
		case 2:
			return joaat("provision_reinforced_holster_buffalo");
	
		case 3:
			return joaat("provision_reinforced_offhand_buffalo");
	
		default:
		
	}

	return 0;
}

Hash func_778(int iParam0) // Position - 0x1FFAB Hash - 0x51E02475 ^0xCED8E5FA
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_cougar");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_cougar");
	
		case 2:
			return joaat("provision_reinforced_holster_cougar");
	
		case 3:
			return joaat("provision_reinforced_offhand_cougar");
	
		default:
		
	}

	return 0;
}

Hash func_779(int iParam0) // Position - 0x1FFF4 Hash - 0x838B9E5D ^0xF099F5BB
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_deer");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_deer");
	
		case 2:
			return joaat("provision_reinforced_holster_deer");
	
		case 3:
			return joaat("provision_reinforced_offhand_deer");
	
		default:
		
	}

	return 0;
}

Hash func_780(int iParam0) // Position - 0x20042 Hash - 0x51E02475 ^0xE0DEBCEF
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_panther");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_panther");
	
		case 2:
			return joaat("provision_reinforced_holster_panther");
	
		case 3:
			return joaat("provision_reinforced_offhand_panther");
	
		default:
		
	}

	return 0;
}

Hash func_781(int iParam0) // Position - 0x2008B Hash - 0x51E02475 ^0x50FB5131
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_rabbit");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_rabbit");
	
		case 2:
			return joaat("provision_reinforced_holster_rabbit");
	
		case 3:
			return joaat("provision_reinforced_offhand_rabbit");
	
		default:
		
	}

	return 0;
}

Hash func_782(int iParam0) // Position - 0x200D4 Hash - 0x51E02475 ^0x8656D204
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_snake");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_snake");
	
		case 2:
			return joaat("provision_reinforced_holster_snake");
	
		case 3:
			return joaat("provision_reinforced_offhand_snake");
	
		default:
		
	}

	return 0;
}

BOOL func_783(Hash hParam0, eStackSize essParam1) // Position - 0x2011D Hash - 0xF5E57FDF ^0xF5E57FDF
{
	switch (essParam1)
	{
		case 1:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
				case joaat("provision_fish_steelhead_trout_poor"):
				case joaat("provision_fish_steelhead_trout"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
				case joaat("provision_fish_largemouth_bass"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
				case joaat("provision_fish_largemouth_bass_poor"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
				case joaat("provision_fish_sockeye_salmon_poor"):
				case joaat("PROVISION_MATURE_VENISON"):
				case joaat("provision_fish_sockeye_salmon"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
					return true;
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_784(int iParam0, Hash hParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x2024E Hash - 0xBC47E790 ^0xD04171B4
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_533(hParam1))
		return 0;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_793(iParam0, *panParam2, &unk, false))
		return 0;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, panParam2, iParam3, hParam4))
		return 0;

	return 1;
}

BOOL func_785() // Position - 0x202C6 Hash - 0x41DEC386 ^0x41DEC386
{
	if (func_794(Global_1935689.f_9436, 1) || func_794(Global_1935689.f_9436, 2) || func_794(Global_1935689.f_9436, 4))
		return true;

	return false;
}

int func_786(Hash hParam0, BOOL bParam1) // Position - 0x20306 Hash - 0xDC5E36FA ^0x81D9138B
{
	Ped ped;
	int num;

	num = func_129(hParam0, bParam1, false);

	if (func_794(Global_1935689.f_9436, 1))
	{
		ped = func_156(func_218(0));
		num = num + func_654(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), hParam0);
	}

	if (func_794(Global_1935689.f_9436, 2))
	{
		ped = func_156(func_218(1));
		num = num + func_654(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), hParam0);
	}

	if (func_794(Global_1935689.f_9436, 4))
	{
		ped = func_156(func_218(6));
		num = num + func_654(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), hParam0);
	}

	return num;
}

BOOL func_787(Hash hParam0, int iParam1) // Position - 0x2039C Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_790(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_208(hParam0) != -999503751)
			func_795(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_208(hParam0) != -999503751)
		func_795(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_762(hParam0, true);
	return 1;
}

void func_788(int iParam0, int iParam1) // Position - 0x20482 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_789(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x2049B Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_796(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_329(func_328(hParam1), 1);
		uParam0->f_1 == -1;
	}
	else
	{
		uParam0->f_1 = iParam2;
	}

	uParam0->f_2 = iParam4;
	*uParam0 = hParam1;
	uParam0->f_3 = 0;

	if (bParam3)
		func_797(uParam0);

	return;
}

BOOL func_790(Hash hParam0, var uParam1) // Position - 0x204F7 Hash - 0x4A27386E ^0xBC93C855
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (hParam0 == Global_1946054.f_2657[*uParam1])
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

int func_791(Hash hParam0) // Position - 0x20537 Hash - 0x497B15BA ^0x497B15BA
{
	switch (hParam0)
	{
		case -2061583405:
			return 2;
	
		case -1719060085:
			return 16;
	
		case -999503751:
			return 1;
	
		case -525676072:
			return 4;
	
		case -413129408:
			return 32;
	
		case 81053684:
			return 8;
	
		default:
		
	}

	return 0;
}

BOOL func_792(int iParam0) // Position - 0x20587 Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

BOOL func_793(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, Any* panParam5, BOOL bParam6) // Position - 0x2059F Hash - 0x9301D070 ^0x96DC8844
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, panParam5, !bParam6))
		return false;

	return true;
}

BOOL func_794(Object obParam0, Object obParam1) // Position - 0x205CB Hash - 0x178D9C09 ^0x178D9C09
{
	return obParam0 && obParam1 != false;
}

void func_795(int iParam0, int iParam1, int iParam2) // Position - 0x205DA Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_798(iParam1);
	func_799(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_800(&(iParam0->f_26), num2);
	
		if (func_801(iParam0->f_26, &num))
			func_802(num, num2);
	}

	return;
}

void func_796(var uParam0) // Position - 0x20623 Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_803(&(uParam0->f_3));
	return;
}

void func_797(var uParam0) // Position - 0x20641 Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_804(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

int func_798(int iParam0) // Position - 0x20662 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_799(int iParam0, int iParam1) // Position - 0x20679 Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_800(var uParam0, int iParam1) // Position - 0x206C1 Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_796(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_801(int iParam0, var uParam1) // Position - 0x206F2 Hash - 0xE231A73F ^0x924E070C
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (Global_1946054.f_2657.f_26.f_7[*uParam1] == iParam0)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

void func_802(int iParam0, int iParam1) // Position - 0x20736 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_803(var uParam0) // Position - 0x2074F Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_804(var uParam0, Any anParam1, int iParam2) // Position - 0x2077B Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_805(func_484());

	if (*uParam0)
		func_803(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_23() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_805(int iParam0) // Position - 0x207B2 Hash - 0xB4860741 ^0xB4860741
{
	if (func_23() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
		
			case -449205311:
				return 0;
		
			case 1160113249:
				return 0;
		
			default:
			
		}
	
		return 0;
	}

	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
	
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
	
		default:
		
	}

	return 0;
}

