#region Local Var
	BOOL bLocal_0 = 0;
	Hash hLocal_1 = 0;
	Any anLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
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
	var uLocal_35 = 1;
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
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	BOOL bLocal_67 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE6EF425C ^0x54B44415
{
	bLocal_0 = 1;
	fLocal_57 = 1f;
	fLocal_58 = 1f;
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

void func_1() // Position - 0x5C Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Position - 0x64 Hash - 0x43FBC4A8 ^0x4278D3E2
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_2);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x89 Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_1 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_1) == 0)
			return bLocal_0;
		else
			return true;

	return bLocal_0;
}

void func_4() // Position - 0xB2 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Position - 0xBA Hash - 0x3D22DF46 ^0xED7FF9EC
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

void func_6() // Position - 0x112 Hash - 0xAC241CB9 ^0xD0BBB845
{
	var outEntity;
	BOOL isPedInCombat;

	func_12();

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		switch (iLocal_59)
		{
			case 0:
				PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 42, 0, true);
				func_13(&iLocal_59, 1);
				break;
		
			case 1:
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("showMenu")))
				{
					if (!PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) == 0)
					{
						HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
					
						if (!(func_14("simple_crafting") || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("simple_crafting")) > 0))
						{
							if (func_15(-1448210800, 1, false) && !func_16(0, false, true) || func_17())
							{
								if (!func_18())
								{
									iLocal_60 = func_19("CAMP_CRAFT", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
									func_20(iLocal_60, 342152817, 0, true);
								}
							}
						
							if (func_21(false, false) && !func_22(Global_1392040.f_1, 1) || func_22(Global_1392040.f_1, 512) && func_15(joaat("kit_camp"), 1, false) || func_15(joaat("kit_camp_simple"), 1, false))
							{
								iLocal_61 = func_19("SET_CAMP", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
								func_20(iLocal_61, 342152817, 0, true);
							}
						}
					
						MISC::SET_BIT(&(Global_1955830.f_1), 2);
						MISC::CLEAR_BIT(&(Global_1955830.f_1), 3);
						iLocal_62 = func_19("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 500, 4000, 10, 1073741824, joaat("MEDIUM_TIMED_EVENT"), false);
						func_23(iLocal_62, 17, true, true);
						func_20(iLocal_62, 342152817, 0, true);
						func_13(&iLocal_59, 2);
					}
				}
				break;
		
			case 2:
				if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
				{
					func_24();
					func_13(&iLocal_59, 1);
					return;
				}
			
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_USE_ITEM"), false);
				HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
				isPedInCombat = PED::IS_PED_IN_COMBAT(Global_35, 0);
			
				if (func_25(iLocal_60, true))
				{
					func_26(false);
					func_24();
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
					func_13(&iLocal_59, 3);
				}
				else if (func_25(iLocal_61, true))
				{
					if (func_15(joaat("kit_camp"), 1, false) && func_27(joaat("kit_camp"), 0, 0, 0, true, false, false) || func_15(joaat("kit_camp_simple"), 1, false) && func_27(joaat("kit_camp_simple"), 0, 0, 0, true, false, false))
					{
						func_24();
						MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
					}
				}
				else if (func_28(iLocal_62, true) || isPedInCombat)
				{
					if (!isPedInCombat)
						PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("DYNAMIC_KNEEL_SLOW_EXIT"), 2f);
				
					TASK::CLEAR_PED_TASKS(Global_35, false, false);
					func_24();
				}
			
				if (!func_29(&uLocal_64))
				{
					if (func_30())
						func_31(&uLocal_64);
				}
				else if (!func_30())
				{
					bLocal_67 = false;
					func_32(&uLocal_64);
				}
				else if (!func_33(&uLocal_64, 0.15f))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_SPRINT")))
						bLocal_67 = true;
				}
				else if (!bLocal_67)
				{
					PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("DYNAMIC_KNEEL_SLOW_EXIT"), 0.2f);
				}
			
				if (func_34(joaat("doc_player_journal")) && func_35())
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
					func_13(&iLocal_59, 4);
				}
				else if (func_14("simple_crafting") || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("simple_crafting")) > 0 || Global_1911914.f_1581)
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
					func_13(&iLocal_59, 3);
				}
				else if (func_36())
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
					func_13(&iLocal_59, 5);
				}
				else if (func_37())
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
					func_13(&iLocal_59, 6);
				}
				else if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
					func_13(&iLocal_59, 7);
				}
				break;
		
			case 3:
				if (!func_14("simple_crafting") && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("simple_crafting")) == 0 && !Global_1911914.f_1581)
					func_13(&iLocal_59, 1);
				break;
		
			case 4:
				if (!func_34(joaat("doc_player_journal")) && !func_35() && MISC::GET_GAME_TIMER() - uLocal_63 > 1000)
					func_13(&iLocal_59, 1);
				break;
		
			case 5:
				if (!func_36())
					func_13(&iLocal_59, 1);
				break;
		
			case 6:
				if (!func_37())
					func_13(&iLocal_59, 1);
				break;
		
			case 7:
				if (!TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
					func_13(&iLocal_59, 1);
				break;
		}
	
		if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35) || iLocal_59 > 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) != iLocal_3)
			bLocal_0 = false;
	}

	return;
}

void func_7() // Position - 0x649 Hash - 0xC10E1F3A ^0xF0ACBD99
{
	HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
	func_24();
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 42, 0, false);
	MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
	return;
}

void func_8() // Position - 0x67F Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x68B Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_38(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x6B3 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_39(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x6DB Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_40(&eventData);
	}

	return;
}

void func_12() // Position - 0x703 Hash - 0x850DE8C4 ^0x850DE8C4
{
	func_41(false);
	return;
}

void func_13(var uParam0, int iParam1) // Position - 0x710 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_14(char* sParam0) // Position - 0x71D Hash - 0x2124511C ^0xA40AAA4F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1934603.f_161; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1934603[i /*16*/].f_10), sParam0))
			return true;
	}

	return false;
}

BOOL func_15(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x757 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_42(hParam0, 0))
		return false;

	num = func_43(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_44(hParam0, 1))
			return false;

	return func_45(hParam0, false, bParam2) >= iParam1;
}

BOOL func_16(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7C1 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_46())
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
		num = func_47(Global_1898164.f_1[0 /*5*/]);
	
		if (func_48(num) && func_49(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_50(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_17() // Position - 0x9C5 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1911914.f_1578;
}

BOOL func_18() // Position - 0x9D4 Hash - 0x58084EE7 ^0xBF593B34
{
	int num;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
		return false;

	num = func_51(Global_36, false);

	if (num >= 8 && num <= 12)
		return true;

	return false;
}

int func_19(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, BOOL bParam11) // Position - 0xA0E Hash - 0xBB16F284 ^0x81C5F899
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_52(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_53(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, bParam11);
		return num;
	}

	return 0;
}

void func_20(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xA97 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_54(iParam0))
		return;

	num = func_55(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, iParam1, iParam2);
	return;
}

BOOL func_21(BOOL bParam0, BOOL bParam1) // Position - 0xAE2 Hash - 0x43A154D1 ^0xB89C134C
{
	Ped mount;

	if (func_56() == false)
		return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_2439.f_28.f_19);

	if (func_57())
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_59(Global_35))
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_60())
	{
		if (bParam0)
			if (func_61() != 8 && func_61() != 7)
				func_58("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, true);
			else
				func_58("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		mount = PED::GET_MOUNT(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(mount))
			if (!ENTITY::IS_ENTITY_DEAD(mount))
				if (ENTITY::IS_ENTITY_IN_AIR(mount, 1) || PED::IS_PED_SWIMMING(mount))
					return false;
	}
	else if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 1) || PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}

	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_62(PLAYER::PLAYER_ID(), true, true, false))
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (LAW::_0x26934083D3F2579C(PLAYER::PLAYER_ID()))
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (bParam1)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			if (bParam0)
				func_58("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (func_63(&Global_1393447, 16))
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_64())
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_34(joaat("simple_crafting")) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("simple_crafting")) > 0)
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || !PED::IS_PED_RAGDOLL(Global_35) && PED::IS_PED_ON_VEHICLE(Global_35, false) || PED::IS_PED_IN_ANY_BOAT(Global_35) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()) || PED::IS_PED_JACKING(Global_35))
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_16(0, true, true) && !func_65(1))
	{
		if (bParam0)
			if (func_66(15))
				func_58("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, true);
			else
				func_58("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_67() == 8)
		return false;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_68(8388608))
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_69(8388608))
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_71(func_70()))
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_72() || func_73(func_70()) == 9 || func_74(func_70()) && !func_75())
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_76(Global_35))
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_77())
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1935496.f_131, true) > 2f)
	{
		Global_1935496.f_128 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(Global_36) };
		Global_1935496.f_131 = { Global_36 };
	}

	if (func_78(Global_35, Global_1935496.f_128, 4f, true, true))
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_79(Global_36, 5f))
	{
		if (bParam0)
			func_58("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (BUILTIN::VDIST2(Global_36, Global_1347702[74 /*49*/].f_24) < 144f && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("rcm_evelyn_miller4")) > 0)
		return false;

	return true;
}

BOOL func_22(int iParam0, int iParam1) // Position - 0xFF4 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_23(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1003 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_54(iParam0))
		return;

	num = func_55(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_24() // Position - 0x104E Hash - 0xEC769C61 ^0xEC769C61
{
	if (func_54(iLocal_60))
		func_80(&iLocal_60, true, true);

	if (func_54(iLocal_61))
		func_80(&iLocal_61, true, true);

	if (func_54(iLocal_62))
		func_80(&iLocal_62, true, true);

	return;
}

BOOL func_25(int iParam0, BOOL bParam1) // Position - 0x1089 Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_54(iParam0))
		return false;

	num = func_55(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_26(BOOL bParam0) // Position - 0x10BC Hash - 0x306CC386 ^0x2C16B96B
{
	if (func_56() != -1 || !bParam0 || func_81(Global_35))
	{
		func_82();
		return;
	}

	if (func_69(8388608) && !func_22(Global_1392040.f_1, 2048))
	{
		func_83(16777216);
		return;
	}

	func_82();
	return;
}

BOOL func_27(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1118 Hash - 0x21D8E47F ^0xF74F2523
{
	int num;
	var unk10;
	Hash scriptHash;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	BOOL flag;
	int num7;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	if (func_84())
	{
		Global_1935689.f_9441 = hParam0;
		func_85(hParam0, 1, -142743235, 0, false);
		return 0;
	}

	if (func_86())
	{
		HUD::_0xBFFF81E12A745A5F();
		func_87(hParam0, 0);
		func_85(func_88(), 1, -142743235, 0, false);
		return 0;
	}

	if (!func_89(hParam0, bParam4))
		return 0;

	if (func_90(hParam0))
		return 0;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
		return 0;

	num6 = 0;
	flag = true;
	num7 = 1;
	flag2 = true;
	num.f_4 = iParam3;
	num.f_5 = 1;

	if (func_91(hParam0, -2081717885))
		func_92(hParam0, unk10, num, num4, flag, num7);
	else if (func_91(hParam0, -1909684001))
		func_93(hParam0, unk10, num, flag, num7);
	else if (func_91(hParam0, 587975446))
		func_94(hParam0, unk10);
	else if (func_91(hParam0, 566155764))
		if (!func_95(hParam0))
			return 0;

	if (func_96(hParam0, bParam5, bParam6))
	{
		Global_1911772 = hParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return 1;
	}

	if (func_91(hParam0, -1227898937))
	{
		num.f_2 = hParam0;
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "doc_newspaper", 32);
		unk10.f_14 = 1024;
		unk10.f_15 = 1;
		func_97(unk10, 1);
		num7 = 0;
		flag = false;
	}
	else if (func_91(hParam0, -1472964441) || func_91(hParam0, -228153877) || func_91(hParam0, 566155764))
	{
	}
	else if (func_91(hParam0, 1919582297))
	{
		if (func_98() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_35, true) || !PED::IS_PED_ON_FOOT(Global_35))
			return 0;
	
		switch (hParam0)
		{
			case joaat("consumable_predator_bait"):
			case joaat("consumable_potent_predator_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_predator", 32);
				break;
		
			case joaat("consumable_herbivore_bait"):
			case joaat("consumable_potent_herbivore_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_herbivore", 32);
				break;
		}
	
		num.f_1 = hParam0;
		num.f_3 = iParam1;
		unk10 = { num };
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_97(unk10, 0);
		flag = false;
	}
	else if (func_43(hParam0) == joaat("emote"))
	{
		num.f_3 = 0;
		num.f_1 = hParam0;
		num.f_2 = 0;
		num = func_99(Global_1058888.f_49051.f_4.f_31);
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "net_player_wheel_item_use", 32);
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_97(unk10, 0);
		num7 = 1;
	}
	else if (func_43(hParam0) == joaat("CLOTHING"))
	{
		if (func_100(hParam0) == -999503751)
		{
			if (func_56() != -1)
				return num7;
		
			if (!func_101(hParam0))
			{
				func_58("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, true);
				return num7;
			}
		
			flag3 = func_102(7, hParam0);
			flag4 = func_102(1, hParam0);
		
			if (flag4 && !flag3)
			{
				func_58("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, true);
				return num7;
			}
		
			if (!func_103(7))
			{
				func_58("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, true);
				return num7;
			}
		
			if (!flag3)
			{
				if (func_105(Global_35, func_104(7), false))
					func_58("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, true);
				else
					func_58("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, true);
			
				return num7;
			}
		
			num5 = func_106(hParam0);
		
			if (num5 == -1)
				func_107(20, hParam0, 8, 0, false);
			else
				func_107(20, hParam0, 0, 0, false);
		}
		else
		{
			switch (func_100(hParam0))
			{
				case -2061583405:
					func_109(hParam0);
					return 1;
			
				case -1719060085:
					if (hParam0 == Global_1946054.f_1497.f_1[23 /*3*/])
					{
						func_110(Global_35, 260271636, 0, -358215195, true, true, true, false, true, false);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipGlovesFidget", true, 15);
						func_111(hParam0, false);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipGlovesFidget", true, 15);
						func_111(hParam0, true);
					}
					break;
			
				case -525676072:
				case -68128151:
				case 81053684:
					func_108(hParam0, false);
					return num7;
			}
		
			func_110(Global_35, hParam0, 0, -358215195, true, true, true, false, false, false);
		}
	}
	else
	{
		switch (hParam0)
		{
			case joaat("kit_shaving_kit"):
				num2 = func_123(func_70());
				num3 = func_124();
			
				if (func_125(num2))
					if (num2 == num3 && !func_126())
						flag2 = false;
			
				if (flag2)
					func_58("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, true);
				break;
		
			case joaat("upgrade_upg_mortar_pestle"):
			case -1448210800:
				func_26(true);
				break;
		
			case joaat("kit_camp"):
			case joaat("kit_camp_simple"):
				if (!func_22(Global_1392040.f_1, 1) || func_22(Global_1392040.f_1, 512))
				{
					if (func_56() == -1)
					{
						if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
						{
						}
						else
						{
							TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "player_camp", 32);
							unk10.f_14 = 6096;
						
							if (func_114(120))
							{
								num6 = num6 | 8;
								num.f_6 = { -1407.4073f, 1508.3297f, 239f };
								num.f_6.f_3 = 260f;
							}
							else if (func_66(15))
							{
								num6 = num6 | 16;
								num.f_6 = { 1775.9026f, 1255.6472f, 189.6069f };
								num.f_6.f_3 = 90f;
							}
							else if (!func_101(hParam0) || !func_116(Global_35, func_104(7), func_115(7), true) || func_117() != 0 && !func_116(Global_35, Global_1900383.f_393, 5f, true))
							{
								num6 = num6 | 128 | 32;
							}
						
							if (func_22(num6, 128) && Global_1357522.f_10[1])
								Global_1357522.f_10[1] = false;
							else if (!func_22(num6, 128) && Global_1357522.f_10[0])
								Global_1357522.f_10[0] = false;
						
							num = num6;
							unk10 = { num };
							unk10.f_15 = 1;
							func_97(unk10, 2);
						}
					}
					else if (func_101(joaat("kit_camp")))
					{
						if (func_118(1))
						{
							func_119(2);
						}
						else if (func_120(1))
						{
							func_58("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, true);
						}
						else
						{
							if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
								func_58("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, true);
							else
								func_58("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
						
							func_121(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
						}
					}
					else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
					{
						func_58("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
						func_121(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
					}
					else
					{
						func_58("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, true);
					}
				}
				else
				{
					Global_1392040.f_1 = Global_1392040.f_1 | 2;
					num7 = 1;
				}
				break;
		
			case joaat("weapon_kit_camera"):
				if (func_122(Global_35, true, 0, false) != joaat("weapon_kit_camera"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
			
				return 1;
		
			case joaat("kit_gun_oil"):
			case joaat("upgrade_upg_coffee_kit"):
				func_128(497, true);
				break;
		
			case joaat("kit_wardrobe"):
				if (func_56() != -1)
					break;
			
				if (!func_101(hParam0))
				{
					func_58("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, true);
					break;
				}
			
				flag3 = func_102(7, hParam0);
				flag4 = func_102(1, hParam0);
			
				if (flag4 && !flag3)
				{
					if (MAP::DOES_BLIP_EXIST(Global_36559))
						MAP::REMOVE_BLIP(&Global_36559);
				
					Global_36559 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
					MAP::BLIP_ADD_MODIFIER(Global_36559, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
					func_58(MISC::VAR_STRING(0, -1680440926, Global_36559), 10000, 0, 0, 0, true);
					break;
				}
			
				if (!func_103(7))
				{
					func_58("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, true);
					break;
				}
			
				if (!flag3)
				{
					if (func_105(Global_35, func_104(7), false))
					{
						func_58("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, true);
					}
					else
					{
						if (MAP::DOES_BLIP_EXIST(Global_36559))
							MAP::REMOVE_BLIP(&Global_36559);
					
						Global_36559 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::BLIP_ADD_MODIFIER(Global_36559, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
						func_58(MISC::VAR_STRING(0, -482898802, Global_36559), 10000, 0, 0, 0, true);
					}
				
					break;
				}
			
				scriptHash = joaat("player_wardrobe");
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(scriptHash) > 0)
				{
				}
				else
				{
					num.f_1 = hParam0;
					num.f_2 = 51499045;
					unk10 = { num };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "player_wardrobe", 32);
					unk10.f_14 = 1024;
					unk10.f_15 = 1;
					func_97(unk10, 0);
				}
				break;
		
			case joaat("document_player_journal"):
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("document_player_journal"), 1928812891, 1, 0, -1082130432);
				flag = false;
				return 1;
		
			case joaat("weapon_kit_binoculars"):
				if (func_122(Global_35, true, 0, false) != joaat("weapon_kit_binoculars"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_binoculars"), true, 0, false, false);
			
				return 1;
		
			case -7337301:
				num.f_2 = -7337301;
				unk10 = { num };
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "native_american_journal", 32);
				unk10.f_14 = 512;
				unk10.f_15 = 1;
				func_97(unk10, 0);
				num7 = 0;
				flag = false;
				break;
		
			case joaat("provision_beaus_gift_1"):
				func_127(hParam0, 1, false, 562618531, false);
				func_129(joaat("provision_beaus_gift_2"), 1, false, 0, 0, 752097756, 0, 0, 0, 0);
				break;
		
			case 1259508039:
				func_112(true);
				break;
		
			case joaat("kit_lightning_conductor"):
				func_127(hParam0, 1, false, 562618531, false);
				break;
		
			case joaat("KIT_HANDHELD_CATALOG"):
				func_113();
				break;
		
			default:
				num7 = 0;
				break;
		}
	}

	if (flag)
		HUD::_0xBFFF81E12A745A5F();

	return num7;
}

BOOL func_28(int iParam0, BOOL bParam1) // Position - 0x1B13 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_54(iParam0))
		return false;

	num = func_55(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

BOOL func_29(var uParam0) // Position - 0x1B6B Hash - 0x5001E582 ^0x5001E582
{
	return func_130(*uParam0, 1);
}

BOOL func_30() // Position - 0x1B7B Hash - 0x24B9F73C ^0xBB1667FB
{
	float disabledControlNormal;
	float disabledControlNormal2;
	float num;

	disabledControlNormal = PAD::GET_DISABLED_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"));
	disabledControlNormal2 = PAD::GET_DISABLED_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"));
	num = (disabledControlNormal * disabledControlNormal) + (disabledControlNormal2 * disabledControlNormal2);

	if (num >= 0.1f * 0.1f)
		return true;

	return false;
}

void func_31(var uParam0) // Position - 0x1BBE Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_131(uParam0, 0f);
	return;
}

void func_32(var uParam0) // Position - 0x1BCD Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_33(var uParam0, float fParam1) // Position - 0x1BE3 Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_132(uParam0, fParam1))
	{
		func_32(uParam0);
		return true;
	}

	return false;
}

BOOL func_34(Hash hParam0) // Position - 0x1C01 Hash - 0xDF6FE81 ^0xAC897192
{
	int i;

	i = 0;

	for (i = 0; i < Global_1934603.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1934603[i /*16*/].f_10)))
			return true;
	}

	return false;
}

BOOL func_35() // Position - 0x1C3B Hash - 0x35A4808D ^0x7E542F56
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("doc_player_journal")) > 0;
}

BOOL func_36() // Position - 0x1C4E Hash - 0xC24BA3AE ^0xF178BF44
{
	return Global_1935689.f_1 || Global_1935689 == 1;
}

BOOL func_37() // Position - 0x1C68 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1898068;
}

void func_38(var uParam0) // Position - 0x1C74 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_39(var uParam0) // Position - 0x1C7C Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_40(var uParam0) // Position - 0x1C84 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_41(BOOL bParam0) // Position - 0x1C8C Hash - 0x67777C1C ^0xA5A55B03
{
	if (bParam0)
		func_133(4);

	func_133(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
	return;
}

BOOL func_42(Hash hParam0, int iParam1) // Position - 0x1CAE Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_43(Hash hParam0) // Position - 0x1CC8 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_42(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_44(Hash hParam0, int iParam1) // Position - 0x1CF3 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_42(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_134(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_135("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_136(&unk, i, num, num2))
			{
			}
			else if (!func_137(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_138(num);
				return true;
			}
		}
	
		func_138(num);
	}

	return false;
}

int func_45(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1D9B Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_42(hParam0, 0))
		return 0;

	num = func_43(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_134(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_139(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_140(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_46() // Position - 0x1E1D Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_47(int iParam0) // Position - 0x1E70 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_50(iParam0))
		return -1;

	return func_142(func_141(iParam0));
}

BOOL func_48(Hash hParam0) // Position - 0x1E90 Hash - 0x5A094C43 ^0x5A094C43
{
	return hParam0 > -1 && hParam0 < 200;
}

BOOL func_49(int iParam0, int iParam1) // Position - 0x1EA6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_50(int iParam0) // Position - 0x1EB5 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_51(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x1EE8 Hash - 0x6C0BC7C7 ^0x6C0BC7C7
{
	int i;
	int num;
	float num2;
	float num3;

	num = -1;
	num2 = 100000000f;

	for (i = 0; i < 12; i = i + 1)
	{
		if (!bParam3 || func_143(i))
		{
			num3 = func_144(i, uParam0);
		
			if (num3 < num2)
			{
				num = i;
				num2 = num3;
			}
		}
	}

	return num;
}

BOOL func_52(int iParam0, int iParam1) // Position - 0x1F3D Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_53(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x1F5E Hash - 0x1B501888 ^0x6546232B
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
	func_145(iParam0, true);
	func_146(iParam0, true);
	func_147(iParam0, 128);
	return;
}

BOOL func_54(int iParam0) // Position - 0x2204 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

int func_55(int iParam0) // Position - 0x2243 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

BOOL func_56() // Position - 0x224D Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_57() // Position - 0x225B Hash - 0x8FB36F20 ^0x8FB36F20
{
	return Global_1894899 & 4 != 0;
}

int func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x226B Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_59(Ped pedParam0) // Position - 0x22A6 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_148(pedParam0, 4) || func_148(pedParam0, 5);
}

BOOL func_60() // Position - 0x22C2 Hash - 0x340E4DFD ^0xEE72B432
{
	return func_149(512);
}

int func_61() // Position - 0x22D1 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

BOOL func_62(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x22DF Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_150(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
				return false;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return false;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return false;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return true;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return false;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return true;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return true;

	return false;
}

BOOL func_63(var uParam0, int iParam1) // Position - 0x2414 Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_64() // Position - 0x2425 Hash - 0x8650DF77 ^0x8650DF77
{
	return Global_1310750.f_16077 != 0;
}

BOOL func_65(int iParam0) // Position - 0x2436 Hash - 0xC67CC87B ^0x695B9936
{
	return Global_1914296.f_22 && iParam0 != false;
}

BOOL func_66(int iParam0) // Position - 0x2449 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_151(Global_1835011[iParam0 /*74*/].f_1);
}

int func_67() // Position - 0x2475 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

BOOL func_68(int iParam0) // Position - 0x2483 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_9419 && iParam0 != false;
}

BOOL func_69(BOOL bParam0) // Position - 0x2496 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1392040 && bParam0 != false;
}

int func_70() // Position - 0x24A7 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_71(int iParam0) // Position - 0x24B5 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_152(iParam0))
		return false;

	return func_153(iParam0, 33554432);
}

BOOL func_72() // Position - 0x24D6 Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_70() != -1;
}

int func_73(int iParam0) // Position - 0x24F1 Hash - 0xE4DA9E55 ^0xA7262997
{
	if (!func_152(iParam0))
		return 0;

	return Global_1888801[iParam0 /*35*/].f_20;
}

BOOL func_74(int iParam0) // Position - 0x2511 Hash - 0xF30C3D47 ^0xF30C3D47
{
	if (func_73(iParam0) != 5)
		return false;

	switch (iParam0)
	{
		case 28:
		case 33:
		case 75:
		case 117:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_75() // Position - 0x254C Hash - 0xD4692F94 ^0xD4692F94
{
	int num;

	num = func_70();

	switch (num)
	{
		case 0:
			return true;
	
		case 3:
			return true;
	
		case 7:
			return true;
	
		case 18:
			return true;
	
		case 24:
			return true;
	
		case 41:
			return true;
	
		case 44:
			return true;
	
		case 46:
			return true;
	
		case 47:
			return true;
	
		case 51:
			return true;
	
		case 53:
			return true;
	
		case 63:
			return true;
	
		case 73:
			return true;
	
		case 80:
			return true;
	
		case 82:
			return true;
	
		case 84:
			return true;
	
		case 85:
			return true;
	
		case 103:
			return true;
	
		case 106:
			return true;
	
		case 107:
			return true;
	
		case 108:
			return true;
	
		case 110:
			return true;
	
		case 120:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_76(Ped pedParam0) // Position - 0x2649 Hash - 0x8F7DFED5 ^0x8768F0B4
{
	var lootTarget;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 0, &lootTarget, 1, 1) != 0)
		return true;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 2, &lootTarget, 1, 1) != 0)
		return true;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 1, &lootTarget, 1, 1) != 0)
		return true;

	if (PED::_0x758F081DB204DDDE(pedParam0))
		return true;

	return false;
}

BOOL func_77() // Position - 0x26B3 Hash - 0x75C5C6BE ^0x75C5C6BE
{
	int num;
	Volume volume;
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;

	num = func_70();
	vector = { -3685.4233f, -2597.155f, -10f };
	vector2 = { 0f, 0f, -24.789701f };
	vector3 = { 116.63651f, 76.68949f, 15f };

	if (num != 120)
	{
		return false;
	}
	else
	{
		volume = VOLUME::CREATE_VOLUME_CYLINDER(vector, vector2, vector3);
	
		if (func_154(Global_35, volume, true, 0))
		{
			func_155(volume);
			return true;
		}
		else
		{
			func_155(volume);
			return false;
		}
	}

	return false;
}

BOOL func_78(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2738 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_156(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_79(var uParam0, var uParam1, var uParam2, float fParam3) // Position - 0x2793 Hash - 0x303D641D ^0x303D641D
{
	if (func_157(uParam0, fParam3))
		return true;

	if (func_158(uParam0, fParam3))
		return true;

	return false;
}

void func_80(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x27BE Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_54(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_55(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_159(num);
	*uParam0 = 0;
	return;
}

BOOL func_81(Ped pedParam0) // Position - 0x2812 Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

void func_82() // Position - 0x282D Hash - 0x5516EB92 ^0x96671886
{
	Global_1911914.f_1583 = MISC::GET_GAME_TIMER();
	Global_1911914.f_1581 = 1;
	return;
}

void func_83(BOOL bParam0) // Position - 0x2848 Hash - 0xA895CE6F ^0xA895CE6F
{
	if (!func_69(bParam0))
		Global_1392040 = Global_1392040 || bParam0;

	return;
}

BOOL func_84() // Position - 0x2865 Hash - 0x85414BC8 ^0x8421EC3E
{
	if (Global_1935689.f_17 == 3)
		return true;

	return false;
}

BOOL func_85(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x287C Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_42(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_160(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_161(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_162(hParam0, unk, unk.f_4, bParam4) };
	return func_163(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

BOOL func_86() // Position - 0x28ED Hash - 0x776DDE2 ^0x628739AB
{
	if (func_164(Global_35, 0))
		if (PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_OPEN_CASHBOX")))
			return true;

	return false;
}

void func_87(Hash hParam0, int iParam1) // Position - 0x2914 Hash - 0xD62C91CE ^0xD62C91CE
{
	Global_1357549.f_1672 = hParam0;
	Global_1357549.f_1673 = iParam1;
	return;
}

Hash func_88() // Position - 0x292E Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1357549.f_1672;
}

BOOL func_89(Hash hParam0, BOOL bParam1) // Position - 0x293D Hash - 0xEA6A22E1 ^0x80E77BB7
{
	int num;
	var unk;

	if (!func_42(hParam0, 0))
		return false;

	if (Global_1935689.f_8)
		return false;

	if (hParam0 != 1259508039 && hParam0 != joaat("kit_camp") && hParam0 != joaat("kit_camp_simple") && bParam1)
	{
		num = func_165(hParam0);
	
		if (func_91(hParam0, 1147021565))
			num = num | 64;
	
		if (!func_166(&unk, HUD::_0x0501D52D24EA8934(1), true, num))
			return false;
	}

	if (hParam0 == -1448210800 || hParam0 == joaat("upgrade_upg_mortar_pestle"))
		if (func_167())
			return false;

	if (!func_15(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_90(Hash hParam0) // Position - 0x29F9 Hash - 0xE1905D26 ^0xF533277C
{
	if (func_43(hParam0) == joaat("emote"))
		return false;

	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_140(false), hParam0, func_168(false)))
		return false;

	switch (hParam0)
	{
		case joaat("kit_camp"):
		case joaat("kit_camp_simple"):
			if (!Global_1392040.f_2)
			{
				func_21(true, true);
				TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
				return true;
			}
			else
			{
				return false;
			}
			break;
	
		case joaat("KIT_HANDHELD_CATALOG"):
			func_58(MISC::VAR_STRING(0, 163043886, Global_36559), 10000, 0, 0, 0, true);
			break;
	}

	return true;
}

BOOL func_91(Hash hParam0, Hash hParam1) // Position - 0x2A86 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_92(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, BOOL bParam28, int iParam29) // Position - 0x2AB7 Hash - 0xED0EB3AE ^0xA8675092
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2"):
			if (func_169())
				func_170(joaat("journal_rc_mayor4_ar"), 0);
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_mayor4_ar")))
				func_170(joaat("journal_rc_mayor4b_jn"), 0);
			break;
	
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2_JN"):
			func_170(joaat("journal_rc_mayor4a_jn"), 0);
			break;
	
		case joaat("DOCUMENT_TS_STR_MAYOR_LETTER"):
			break;
	
		case joaat("DOCUMENT_CATALOGUE_WMN_LETTER_01"):
			iParam27 = joaat("TP_CATALOGUE_LETTER_01");
			uParam17.f_1 = iParam27;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1.f_10), "respond_parcel", 32);
			iParam29 = 0;
			bParam28 = true;
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			if (func_173() && !func_174(40) && !func_180(32))
			{
				func_181(4);
				func_177(39, 0, 0, 0, 0, -1, 0);
				func_178(39, 0, 0, 0, 0, false, 2, false);
				func_182(32);
			}
			break;
	
		case joaat("DOCUMENT_RCM_FMA_LETTER"):
			func_171(Global_1347702[80 /*49*/].f_15, 1);
		
			if (func_169() == true)
				func_170(joaat("journal_rc_fma5_1_ar"), 0);
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_fma5_1_ar")))
				if (func_172(77))
					func_170(joaat("journal_rc_fma5_2_jn"), 0);
				else
					func_170(joaat("journal_rc_fma5_1_jn"), 0);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			if (func_173() && !func_174(51) && !func_175(16384))
			{
				func_176(1);
				func_177(51, 0, 0, 0, 0, -1, 0);
				func_178(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 5, false);
				func_179(16384);
			}
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			if (func_173() && !func_174(50) && !func_186(32))
			{
				func_187(4);
				func_177(49, 0, 0, 0, 0, -1, 0);
				func_178(49, 0, 0, 0, 0, false, 2, false);
				func_188(32);
			
				if (!func_189(Global_1347702[50 /*49*/].f_15, true))
					if (func_169() == true)
						func_170(joaat("journal_rc_rockcarv15_ar"), 0);
					else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_rockcarv15_ar")))
						func_170(joaat("journal_rc_rockcarv15_jn"), 0);
			}
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			if (func_173() && !func_174(51) && !func_175(1048576))
			{
				func_176(2);
				func_177(51, 0, 0, 0, 0, -1, 0);
				func_178(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 2, false);
				func_179(1048576);
			}
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			if (func_173() && !func_174(42) && !func_183(16))
			{
				func_184(8);
				func_177(41, 0, 0, 0, 0, -1, 0);
				func_178(41, 0, 0, 0, 0, false, 2, false);
				func_185(16);
			}
			break;
	
		case joaat("DOCUMENT_TS_RHD_FEUD_LETTER"):
			break;
	}

	return;
}

void func_93(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, BOOL bParam27, int iParam28) // Position - 0x2D67 Hash - 0x9E368772 ^0x9E368772
{
	switch (hParam0)
	{
		case joaat("document_field_manual"):
			func_184(16);
			break;
	}

	return;
}

void func_94(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x2D86 Hash - 0xD1346F27 ^0xF5A70CF4
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_GUNSLINGER_1_NOTE"):
		case -691125380:
		case -287018478:
		case 305626647:
			TEXT_LABEL_ASSIGN_STRING(&(uParam1.f_10), "gunslinger_notes", 32);
			break;
	}

	return;
}

BOOL func_95(Hash hParam0) // Position - 0x2DBB Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_96(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2DC4 Hash - 0x3A368F62 ^0x7DB4A593
{
	if (func_190(hParam0, bParam1, false, 0, -1082130432))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}

	switch (func_191(hParam0, -949239683))
	{
		case -1919515848:
			if (!bParam1)
			{
				func_206(hParam0);
				return true;
			}
			break;
	
		case -1915958659:
			if (!bParam1)
			{
				func_200(hParam0);
				return true;
			}
			break;
	
		case -1337515701:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("pocket_watch_inspect_unholster"), 1, 0, -1082130432);
				return true;
			}
			break;
	
		case -1239610997:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1087288635, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -809056541:
			if (!bParam1)
			{
				func_203(hParam0);
				return true;
			}
			break;
	
		case -793205628:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 136592566, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -273840653:
			if (!bParam1)
			{
				func_196(hParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
	
		case -262371497:
			if (!bParam1)
			{
				func_204(hParam0);
				return true;
			}
			break;
	
		case 89124942:
			if (!bParam1)
			{
				func_207(hParam0);
				return true;
			}
			break;
	
		case 238865292:
			if (!bParam1)
			{
				func_208(hParam0);
				return true;
			}
			break;
	
		case 632545869:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, -1401979141, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case 845883585:
			if (!bParam1)
			{
				if (!func_193())
				{
					if (func_194(&Global_35))
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_hat"), 1, 0, -1082130432);
					else
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_no_hat"), 1, 0, -1082130432);
				
					return true;
				}
				else
				{
					func_58("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, true);
				}
			}
			break;
	
		case 881567935:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1245009814, 1, 0, -1082130432);
				return true;
			}
			break;
	
		case 999632878:
			if (!bParam1)
			{
				func_197(hParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
	
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
					func_198(hParam0);
				else
					func_199(hParam0);
			
				return true;
			}
			break;
	
		case 1174751405:
			if (!bParam1)
			{
				func_192(hParam0);
				return true;
			}
			break;
	
		case 1177617310:
			if (!bParam1)
			{
				func_209(hParam0);
				return true;
			}
			break;
	
		case 1443104131:
			if (!bParam1)
			{
				func_205(hParam0);
				return true;
			}
			break;
	
		case 1451036371:
			if (!bParam1)
			{
				func_195(hParam0);
				return true;
			}
			break;
	
		case 1859991422:
			if (!bParam1)
			{
				func_201(hParam0);
				return true;
			}
			break;
	
		case 1891031775:
			if (!bParam1)
			{
				func_202(hParam0);
				return true;
			}
			break;
	}

	return false;
}

void func_97(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x3164 Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1934603.f_161 >= 10)
		return;

	if (!func_210(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_14(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[i /*16*/].f_10)))
		{
			Global_1934603[i /*16*/] = { uParam0 };
			Global_1934603.f_161 = Global_1934603.f_161 + 1;
			func_211(iParam16);
			return;
		}
	}

	return;
}

BOOL func_98() // Position - 0x3200 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

int func_99(int iParam0) // Position - 0x3210 Hash - 0x8F8D4E05 ^0x8F8D4E05
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 0;
	
		case 3:
			return 3;
	
		default:
		
	}

	return -1;
}

Hash func_100(Hash hParam0) // Position - 0x3249 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_42(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_101(Hash hParam0) // Position - 0x3274 Hash - 0xBFDBD794 ^0x724C9162
{
	int num;

	if (hParam0 == 0)
		return false;

	if (func_43(hParam0) == joaat("CLOTHING"))
	{
		if (func_100(hParam0) == -999503751)
		{
			num = func_106(hParam0);
		
			if (num != -1 && !func_212(num) || !func_15(hParam0, 1, false))
				return false;
		}
	}

	return true;
}

BOOL func_102(int iParam0, Hash hParam1) // Position - 0x32D1 Hash - 0xC8DEF152 ^0xBE9C015A
{
	Ped mount;

	iParam0 = func_213(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	mount = func_104(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
		return 0;

	if (PED::IS_PED_SWIMMING(Global_35) || PED::IS_PED_SWIMMING(mount))
		return 0;

	if (PED::IS_PED_ON_MOUNT(Global_35))
		if (PED::_GET_RIDER_OF_MOUNT(mount, false) == Global_35)
			if (hParam1 == joaat("kit_wardrobe"))
				return 0;
		else
			return 0;

	if (func_214(iParam0))
		return 1;

	return 0;
}

BOOL func_103(int iParam0) // Position - 0x3378 Hash - 0x9F2526C ^0x74A3693D
{
	Ped ped;

	iParam0 = func_213(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_104(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (iParam0 == func_215())
			return true;
	
		return false;
	}

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

Ped func_104(int iParam0) // Position - 0x33D1 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_213(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

BOOL func_105(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x33FD Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

int func_106(Hash hParam0) // Position - 0x3467 Hash - 0x9830D1FB ^0x9830D1FB
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

void func_107(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x387A Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_216(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_217(num);
	return;
}

int func_108(Hash hParam0, BOOL bParam1) // Position - 0x38AC Hash - 0xA79D5BF ^0xE827C189
{
	int num;

	if (!func_218())
		return 0;

	if (!func_219(hParam0))
		return 0;

	if (func_220(hParam0))
	{
		num = 0;
	
		if (func_100(hParam0) == 81053684)
			if (bParam1)
				func_221(&num, 2);
	
		return func_222(hParam0, num);
	}

	return 0;
}

void func_109(Hash hParam0) // Position - 0x3900 Hash - 0x6BEB4307 ^0x9796E815
{
	int num;
	Hash hash;

	num = 10;
	hash = Global_1946054.f_1497.f_1[num /*3*/];

	if (hash == hParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipHatFidget", true, 15);
		func_110(Global_35, -2065815962, 0, -358215195, true, true, true, false, true, false);
		func_111(hParam0, false);
		return;
	}

	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipHatFidget", true, 15);
	func_110(Global_35, hParam0, 0, -358215195, true, true, true, false, true, false);

	if (func_223(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
		func_224();
		func_216(128);
		return;
	}

	if (hash == Global_1946054.f_57[num /*11*/])
	{
		func_111(hParam0, true);
		return;
	}

	if (func_225(-2061583405, false))
	{
		if (func_226(hash))
			func_111(hash, false);
		else
			func_227(hash, true, true, false);
	
		func_111(hParam0, true);
		return;
	}

	if (func_226(hash))
	{
		func_111(hash, false);
		func_111(hParam0, true);
	}
	else if (func_226(hParam0))
	{
		if (hParam0 != func_228(0))
		{
			func_229(hParam0, hash);
			func_111(hParam0, false);
			func_111(hash, false);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			func_216(128);
			func_111(hParam0, true);
		}
	}

	return;
}

int func_110(Ped pedParam0, Hash hParam1, Hash hParam2, Hash hParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3A44 Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (hParam3 == -358215195)
	{
		unk = { func_160(hParam1, true, false) };
		hParam3 = func_230(unk.f_4);
	
		if (hParam3 == -358215195)
			return 0;
	}

	if (!func_232(hParam1, hParam2, func_231(hParam3, 1), bParam4, bParam9))
		return 0;

	func_233(true, func_56() == -1 && bParam5, true);

	switch (hParam3)
	{
		case 1108822547:
			if (func_223(32768) && hParam1 != Global_1946054.f_57[func_231(hParam3, 1) /*11*/])
			{
				func_224();
				func_107(22, hParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_231(hParam3, 1) /*11*/])
				func_107(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_107(22, hParam3, 0, 0, false);
	
		return 1;
	}

	num = func_234(hParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_107(19, 0, num, 0, false);
	
		if (hParam3 == 1742327865 || hParam3 == 1108822547 || hParam3 == 1145151482)
		{
			func_235(0);
			func_236(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_107(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_111(Hash hParam0, BOOL bParam1) // Position - 0x3BB3 Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_160(hParam0, false, false) };
	guid = { func_162(hParam0, unk, unk.f_4, false) };

	if (func_237(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_140(false), &guid, bParam1);
	return;
}

void func_112(BOOL bParam0) // Position - 0x3BFD Hash - 0xDA8F6A70 ^0xDA8F6A70
{
	if (bParam0)
		Global_1935689 = 1;
	else
		Global_1935689 = 2;

	return;
}

void func_113() // Position - 0x3C17 Hash - 0xC6CD68D ^0xAFD0A1CE
{
	if (func_238())
		return;

	if (func_239())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432);
		Global_1914319.f_18996.f_1 = 1;
	}
	else if (Global_1914319.f_18996.f_4 != 0)
	{
		func_58(func_240(), 10000, 0, 0, 0, true);
		Global_1914319.f_18996.f_4 = 0;
	}

	return;
}

BOOL func_114(Hash hParam0) // Position - 0x3C7D Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_56() != -1)
		return false;

	if (!func_48(hParam0))
		return false;

	return func_151(Global_1347702[hParam0 /*49*/].f_15);
}

float func_115(int iParam0) // Position - 0x3CAD Hash - 0x9BB7FBA3 ^0xA973C68A
{
	Ped model;
	int rank;
	int defaultMaxAttributeRank;
	float num;
	Any any;
	int rank2;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;

	iParam0 = func_213(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_241(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_242(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_242(iParam0) + 1;
	num2 = func_243(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_244(num, any, num7);
	return num8;
}

BOOL func_116(Ped pedParam0, Object* pobParam1, float fParam2, BOOL bParam3) // Position - 0x3D67 Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pobParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pobParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

int func_117() // Position - 0x3DAF Hash - 0xE835E19F ^0x141BD35D
{
	return Global_40.f_1095.f_3054.f_1;
}

BOOL func_118(int iParam0) // Position - 0x3DC2 Hash - 0x14AD85AF ^0xC4DF0BF6
{
	if (!func_245(32))
		return false;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
		return false;

	if (!func_246())
		return false;

	if (func_247(16))
		return false;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(Global_1224589.f_9) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::INT_TO_PLAYERINDEX(Global_1224589)))
		return false;

	if (iParam0 == 1 && func_248(Global_1130863.f_8, 1))
		return false;

	return true;
}

int func_119(int iParam0) // Position - 0x3E43 Hash - 0x14624C3D ^0x46CC355A
{
	if (!func_249())
		return 0;

	func_250(iParam0);
	Global_1898068.f_4 = 1;
	return 1;
}

BOOL func_120(int iParam0) // Position - 0x3E65 Hash - 0xA059D395 ^0xAFACF28D
{
	return func_248(Global_1130863.f_8, iParam0);
}

void func_121(Any anParam0) // Position - 0x3E79 Hash - 0x6C95107C ^0x7F4B8292
{
	var unk;

	unk.f_12 = 255;
	unk.f_13 = 255;
	unk.f_5 = anParam0;
	unk.f_3 = 94;
	func_252(unk, func_251(0, 15), false, false);
	return;
}

int func_122(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x3EB0 Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

int func_123(int iParam0) // Position - 0x3EF2 Hash - 0x5822495 ^0x141CE12F
{
	int i;

	if (!func_152(iParam0))
		return -1;

	for (i = 0; i < 17; i = i + 1)
	{
		if (Global_1395601.f_5[i /*28*/] == iParam0)
			return i;
	}

	return -1;
}

int func_124() // Position - 0x3F30 Hash - 0xAA084930 ^0xAA084930
{
	int num;

	num = func_61();

	switch (num)
	{
		case 0:
			return 1;
	
		case 1:
			return 4;
	
		case 2:
			return 2;
	
		case 3:
			return 6;
	
		case 4:
			return 3;
	
		case 5:
			return 5;
	
		case 6:
			return 0;
	
		case 7:
			return 7;
	
		case 8:
			return -1;
	}

	return -1;
}

BOOL func_125(int iParam0) // Position - 0x3FBC Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

BOOL func_126() // Position - 0x3FD2 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1395601;
}

int func_127(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0x3FDE Hash - 0xE4F3831B ^0x663CE870
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_42(hParam0, 0))
		return 0;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_134(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_253(hParam0, -iParam1, flag, flag2, flag3);
	
		return 0;
	}

	if (!func_15(hParam0, 1, bParam4))
		return 0;

	statId = { func_254(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_45(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_45(hParam0, false, false) - iParam1 < 0)
		{
			func_127(hParam0, func_45(hParam0, false, false), bParam2, hParam3, bParam4);
			return 0;
		}
	}

	if (func_43(hParam0) == joaat("WEAPON"))
		if (!func_255(hParam0, iParam1, false, hParam3))
			return 0;
	else if (!func_85(hParam0, iParam1, hParam3, bParam2, bParam4))
		return 0;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_256(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_253(hParam0, -iParam1, flag, flag2, flag3);

	func_257(hParam0, iParam1);
	return 1;
}

void func_128(int iParam0, BOOL bParam1) // Position - 0x4154 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_258(iParam0, &num, &num2);

	if (!func_259(iParam0, num, num2, bParam1))
		return;

	func_260(num, num2);
	return;
}

int func_129(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0x4181 Hash - 0x11449F01 ^0x11449F01
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

	if (!func_42(hParam0, 0))
		return 0;

	if (!func_261(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_262(hParam0, &value, iParam1))
		return 0;

	func_263(hParam0, bParam2);
	lootTableKey = 0;

	if (func_45(hParam0, false, false) == 0)
	{
		if (func_264(hParam0))
		{
			hash = func_265(hParam0);
			collectableSubcategory = func_266(hash);
			num = func_267(collectableSubcategory) + 1;
			func_268(hash);
		
			if (func_174(38))
				func_128(483, false);
			else
				func_128(482, false);
		
			if (num == func_269(collectableSubcategory))
			{
				func_129(func_270(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_173() && func_271(4))
				{
					if (func_173() && func_272(38) || func_174(38))
					{
						func_178(38, func_270(collectableSubcategory), 0, 0, func_273(), false, -1, false);
						func_274(2);
					}
					else
					{
						func_178(38, func_270(collectableSubcategory), 0, 0, func_273(), false, -1, false);
						func_274(1);
					}
				}
			}
			else if (func_173() && func_271(4))
			{
				if (func_173() && func_272(38) || func_174(38))
				{
					func_178(38, 0, 0, 0, func_273(), false, -1, false);
					func_274(2);
				}
				else
				{
					func_178(38, 0, 0, 0, func_273(), false, -1, false);
					func_274(1);
				}
			}
		
			if (func_173() && func_271(4))
				if (!Global_1914319.f_17376)
					if (func_173() && func_272(38) || func_174(38))
						func_177(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_177(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_43(hParam0) == joaat("CLOTHING"))
		if (!func_91(hParam0, 866047851) && !func_91(hParam0, -1979000645) && !func_91(hParam0, 1248798204))
			flag = true;

	if (func_275(hParam0, 8388608) && !func_276(28))
		func_277(28);

	if (!flag)
	{
		if (func_91(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_100(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_279(func_278(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_56() == -1)
						func_280(ammoTypeForWeapon);
				
					if (func_256(false) && func_281(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_282(hParam0, value, hParam5);
					
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
					if (func_56() == -1)
						func_280(hParam0);
				
					if (func_256(false) && func_281(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_282(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_43(hParam0) == joaat("WEAPON"))
		{
			if (!func_283(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_43(hParam0) == joaat("AMMO") && func_284(hParam0))
		{
			if (!func_285(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_91(hParam0, 866047851))
		{
			func_286(hParam0);
		}
		else if (func_91(hParam0, 2000026003))
		{
			func_287(hParam0);
		}
		else if (func_91(hParam0, -103750053))
		{
			func_289(func_288(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_289(func_290(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_91(hParam0, -121341956) && !func_91(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_189(Global_1835011[4 /*74*/].f_1, true))
					func_128(498, false);
		
			if (func_91(hParam0, -2017733358) || func_91(hParam0, -1369131378))
				func_291(hParam0);
		}
		else if (func_91(hParam0, -136654233))
		{
			if (func_91(hParam0, -1021472396))
			{
			}
		}
		else if (func_91(hParam0, -1466706512) && func_91(hParam0, 1147021565))
		{
			func_128(484, false);
		}
		else if (func_91(hParam0, 1147021565) && func_91(hParam0, -524514947))
		{
		}
		else if (func_91(hParam0, 554195525))
		{
		}
		else if (func_91(hParam0, 589988438))
		{
			if (func_292())
			{
				func_293(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_91(hParam0, 787083290) && func_91(hParam0, 949916894))
		{
			func_294(hParam0);
		}
		else if (func_91(hParam0, -1718133314))
		{
			func_295(hParam0);
		}
		else if (func_91(hParam0, -1738650224))
		{
			func_296(hParam0);
		}
		else if (func_91(hParam0, -1112814642) && func_91(hParam0, 949916894))
		{
			func_297(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_91(hParam0, 1841149704))
		{
			func_298();
		}
		else if (func_91(hParam0, 606799272))
		{
			func_299(hParam0, iParam1);
			func_300(hParam0);
		}
		else if (func_91(hParam0, -1112814642) && func_91(hParam0, -1697809989))
		{
			func_301(hParam0, 0, false, false);
		}
		else if (func_91(hParam0, -2017733358) || func_91(hParam0, -1369131378))
		{
			func_291(hParam0);
		}
		else if (func_91(hParam0, -1921346699))
		{
			if (func_56() != -1)
				return 0;
		
			func_302(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_91(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_15(471514780, 1, false))
						func_129(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_15(526074061, 1, false))
						func_129(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_15(-967317137, 1, false))
						func_129(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_15(670273567, 1, false))
						func_129(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_15(215778062, 1, false))
						func_129(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_15(-1045488665, 1, false))
						func_129(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_91(hParam0, -839724752) && func_275(hParam0, 4))
		{
			if (!func_174(42))
				func_303(hParam0);
		}
		else if (func_91(hParam0, 1399091007))
		{
			func_304(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_91(hParam0, 1248798204))
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
				func_129(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_56() == -1)
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
					func_321(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_321(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_321(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_311(499813453, joaat("treasure_hunt_loot_01"), false);
				func_312(499813453, false);
				func_313(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_311(390004462, joaat("treasure_hunt_loot_17"), false);
				func_312(390004462, false);
				func_317(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_311(6410548, joaat("treasure_hunt_loot_23"), false);
				func_312(6410548, false);
				func_318(8);
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
				func_311(6410548, joaat("treasure_hunt_loot_22"), false);
				func_312(6410548, false);
				func_318(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_277(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_110(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_305(&hash3, false))
					func_281(hash3, 0, false, bParam4, 3, false, 752097756, false);
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
					func_321(594, 1934060482, true, true);
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
					func_321(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_128(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_311(6410548, joaat("treasure_hunt_loot_21"), false);
				func_312(6410548, false);
				func_318(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_128(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_129(func_322(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_129(func_323(), 1, false, false, false, 752097756, 0, 0, 0, false);
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
					func_321(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_311(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_312(-220219788, false);
				func_315(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_276(1))
					func_128(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_311(666607663, joaat("treasure_hunt_loot_07"), false);
				func_312(666607663, false);
				func_314(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_320(241, func_319(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_311(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_312(-220219788, false);
				func_315(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_320(242, func_319(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_128(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_320(240, func_319(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_311(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_312(-220219788, false);
				func_315(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_311(390004462, joaat("treasure_hunt_loot_16"), false);
				func_312(390004462, false);
				func_317(1);
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
				func_311(499813453, joaat("treasure_hunt_loot_03"), false);
				func_312(499813453, false);
				func_313(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_311(666607663, joaat("treasure_hunt_loot_06"), false);
				func_312(666607663, false);
				func_314(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_311(218622660, joaat("treasure_hunt_loot_14"), false);
				func_312(218622660, false);
				func_316(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_311(666607663, joaat("treasure_hunt_loot_05"), false);
				func_312(666607663, false);
				func_314(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_56() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_110(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_311(218622660, joaat("treasure_hunt_loot_13"), false);
				func_312(218622660, false);
				func_316(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_311(6410548, joaat("treasure_hunt_loot_20"), false);
				func_312(6410548, false);
				func_318(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_128(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_128(491, false);
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
				func_311(499813453, joaat("treasure_hunt_loot_02"), false);
				func_312(499813453, false);
				func_313(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_128(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_306();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_307();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_308();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_309();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_310();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_311(390004462, joaat("treasure_hunt_loot_18"), false);
				func_312(390004462, false);
				func_317(4);
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
		func_324(&hash4);
	
		if (!func_325(hash4, value, hParam5))
			return 0;
		else if (!func_256(false))
			return 1;
	
		if (func_43(hParam0) == joaat("CLOTHING"))
			func_326(hParam0);
	
		if (func_91(hParam0, -1979000645))
			func_327(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_256(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_129(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_328(lootTableKey, 0);
		}
	}

	statId = { func_254(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_329(hParam0);

	if (iParam6 > 0f)
	{
		if (func_91(hParam0, -839724752))
			func_330(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_253(hParam0, value, false, flag3, false);
	}

	return 1;
}

BOOL func_130(int iParam0, int iParam1) // Position - 0x5419 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_131(var uParam0, float fParam1) // Position - 0x5428 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_331() - fParam1;
	func_332(uParam0, 1);
	func_333(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_132(var uParam0, float fParam1) // Position - 0x544E Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_29(uParam0))
		return false;

	if (func_334(uParam0) > fParam1)
		return true;

	return false;
}

void func_133(int iParam0) // Position - 0x5475 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1900383.f_316 = Global_1900383.f_316 || iParam0;
	return;
}

Hash func_134(Hash hParam0, int iParam1) // Position - 0x548E Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_42(hParam0, 0))
		return 0;

	num = func_43(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_91(hParam0, 1399091007))
	{
		func_335(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_135(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x5508 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_140(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_136(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x552F Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_137(Hash hParam0) // Position - 0x556A Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_138(int iParam0) // Position - 0x5585 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_139(Hash hParam0, BOOL bParam1) // Position - 0x55A6 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_336(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_338(&unk, func_337(false));

	if (!func_339(&unk, &num, &num2, false))
		return 0;

	func_138(num);
	return num2;
}

int func_140(BOOL bParam0) // Position - 0x5604 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_56() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_141(int iParam0) // Position - 0x5645 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_142(BOOL bParam0) // Position - 0x5683 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_143(int iParam0) // Position - 0x5696 Hash - 0xE48228D0 ^0xE48228D0
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

float func_144(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x56CC Hash - 0xA3FC3EE3 ^0xE0E564B4
{
	if (func_340(iParam0))
		return BUILTIN::VDIST(VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1), vParam1);

	return 100000000f;
}

void func_145(int iParam0, BOOL bParam1) // Position - 0x56FC Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_52(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_146(int iParam0, BOOL bParam1) // Position - 0x5754 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_147(int iParam0, int iParam1) // Position - 0x577D Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

BOOL func_148(Ped pedParam0, int iParam1) // Position - 0x57A5 Hash - 0x25D0971D ^0xF7D4E234
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

BOOL func_149(int iParam0) // Position - 0x57E4 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_56())
	{
		case -1:
			return Global_1357549.f_1495 && iParam0 != false;
	}

	return false;
}

BOOL func_150(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x580F Hash - 0xC9655EC3 ^0x88C9AFE1
{
	if (Global_1935630.f_18)
		if (bParam2 || Global_1935630.f_19 > 0 || Global_1935630.f_17 > 0)
			return 1;
	else if (bParam1 && !(Global_1935630.f_15 == 1370593166))
		return 0;

	if (Global_1935630.f_20 > 0 || bParam2 && Global_1935630.f_20 > -1)
		return 1;

	if (bParam0)
		if (Global_1935630.f_13)
			if (bParam2 || Global_1935630.f_21 > 0)
				return 1;

	return 0;
}

BOOL func_151(int iParam0) // Position - 0x58AD Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_341(iParam0);
	return num == 3 || num == 4;
}

BOOL func_152(int iParam0) // Position - 0x58CB Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_153(int iParam0, BOOL bParam1) // Position - 0x58E1 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_154(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x5914 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

void func_155(Volume volParam0) // Position - 0x594A Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

float func_156(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x5961 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_157(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x597F Hash - 0x97B2D4F4 ^0x726D5358
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (func_342(i))
			if (BUILTIN::VDIST(func_343(i), vParam0) < fParam3)
				return true;
	}

	return false;
}

BOOL func_158(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x59BB Hash - 0x79B25540 ^0x79B25540
{
	int i;

	for (i = 0; i < Global_40.f_450; i = i + 1)
	{
		if (Global_40.f_450[i] > -1 && Global_40.f_450[i] < 200)
			if (BUILTIN::VDIST(func_344(Global_40.f_450[i]), vParam0) < fParam3)
				return true;
		else
			break;
	}

	return false;
}

void func_159(int iParam0) // Position - 0x5A22 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_345(iParam0))
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

struct<5> func_160(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5AD5 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_346(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_43(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_351(hParam0, -1823706425))
			{
				unk = { func_162(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_351(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_162(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_350(bParam1) };
		
			switch (func_100(hParam0))
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
				unk = { func_162(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_337(bParam1) };
		
			if (bParam2 && func_347(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_348(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_348(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_349(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_352(unk, &unk28, bParam1, false))
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

BOOL func_161(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x5D92 Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_353(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_256(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_140(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

struct<4> func_162(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x5DDE Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_42(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_140(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_163(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x5E0F Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_353(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_352(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_256(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_140(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_164(Ped pedParam0, int iParam1) // Position - 0x5E9F Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_248(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_248(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_248(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_248(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_248(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_248(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_248(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_248(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

int func_165(Hash hParam0) // Position - 0x5F9E Hash - 0x229B2393 ^0x1B35F016
{
	if (func_91(hParam0, 1573112293))
		return func_354(hParam0);

	switch (func_100(hParam0))
	{
		case -2061583405:
		case -1719060085:
		case 81053684:
			return func_357();
	
		case -1823706425:
			return func_360();
	
		case -1393202694:
		case 2041469314:
			return func_354(hParam0);
	
		case -854348463:
			return func_361();
	
		case -525676072:
			return func_357();
	
		case -77448735:
			if (func_355(hParam0))
				return func_354(hParam0);
			break;
	
		case 1779021115:
			if (func_42(hParam0, 0))
				if (hParam0 == joaat("weapon_kit_camera"))
					return func_358();
		
			return func_359();
	
		case 1802292908:
			return func_356();
	
		default:
			if (func_42(hParam0, 0))
			{
				if (func_91(hParam0, 1192444843) || func_91(hParam0, -1540973036))
					return func_362();
				else if (func_91(hParam0, 1919582297))
					return func_363();
				else if (func_91(hParam0, 1147021565))
					return func_364();
			
				switch (hParam0)
				{
					case joaat("upgrade_upg_mortar_pestle"):
					case -1448210800:
						return func_365();
				
					case joaat("kit_horse_brush"):
						return func_366();
				}
			}
		
			return func_367();
	}

	return func_367();
}

BOOL func_166(var uParam0, Player plParam1, BOOL bParam2, int iParam3) // Position - 0x611F Hash - 0x4D17FACB ^0x3553DA46
{
	func_368(plParam1);

	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}

	if (Global_1935630.f_12 || *uParam0)
		return false;

	if (func_56() == false)
		if (Global_1935496.f_7 & 131072 != 0)
			return false;

	if (iParam3 & 1 == 0)
		if (Global_1935496.f_7 & 1024 != 0)
			return false;

	if (Global_1935630.f_22)
		return false;

	if (iParam3 & 2 == 0)
		if (Global_1935496.f_7 & 32 != 0)
			return false;

	if (iParam3 & 4 == 0)
		if (Global_1935496.f_7 & 4096 != 0)
			return false;

	if (iParam3 & 8 == 0)
		if (Global_1935496.f_7 & 512 != 0)
			return false;

	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = func_369(bParam2);
			uParam0->f_3 = 1;
		}
	
		if (!uParam0->f_2)
			return false;
	}

	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = func_370(bParam2);
			uParam0->f_5 = 1;
		}
	
		if (!uParam0->f_4)
			return false;
	}

	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = func_371(bParam2, iParam3, true);
			uParam0->f_7 = 1;
		}
	
		if (!uParam0->f_6)
			return false;
	}

	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_372(Global_35, SCRIPT_TASK_MOUNT_ANIMAL);
			uParam0->f_11 = 1;
		}
	
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_373(Global_35);
			uParam0->f_9 = 1;
		}
	
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
	
		if (uParam0->f_10 || uParam0->f_12 || uParam0->f_8)
		{
			if (bParam2)
				func_58("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_372(Global_35, SCRIPT_TASK_MOUNT_ANIMAL);
			uParam0->f_11 = 1;
		}
	
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_373(Global_35);
			uParam0->f_9 = 1;
		}
	
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = PED::IS_PED_SWIMMING(Global_1935630.f_40);
				uParam0->f_15 = 1;
			}
		
			if (uParam0->f_14)
				return false;
		}
	}

	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_373(Global_35);
			uParam0->f_9 = 1;
		}
	
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
	
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = func_374(Global_1935630.f_40, true);
					uParam0->f_17 = 1;
				}
			
				if (!uParam0->f_16)
				{
					if (bParam2)
						func_58("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, true);
				
					return false;
				}
			}
		}
	}

	if (iParam3 & 256 == 0)
		if (Global_1935496.f_7 & 8192 != 0)
			return false;

	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496.f_7 & 65536 != 0)
		{
			if (bParam2)
				func_58("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (iParam3 & 2048 == 0)
		if (Global_1935496.f_7 & 32768 != 0)
			return false;

	if (iParam3 & 4096 == 0)
		if (Global_1935496.f_7 & 16384 != 0)
			return false;

	if (iParam3 & 8192 == 0)
		if (Global_1935496.f_7 & 16 == 0)
			return false;

	if (iParam3 & 16384 == 0)
		if (Global_1935496.f_7 & 256 != 0)
			return false;

	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = func_36();
			uParam0->f_19 = 1;
		}
	
		if (uParam0->f_18)
		{
			if (bParam2)
				func_58("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (iParam3 & 131072 == 0)
		if (Global_1935496.f_7 & 524288 == 0)
			return false;

	if (iParam3 & 65536 == 0)
		if (Global_1935496.f_7 & 262144 == 0)
			return false;

	if (iParam3 & 524288 == 0)
		if (Global_1935496.f_7 & 2097152 == 0)
			return false;

	if (iParam3 & 1048576 == 0)
		if (Global_1935496.f_7 & 8388608 == 0)
			return false;

	if (iParam3 & 2097152 == 0)
		if (Global_1935496.f_7 & 33554432 != 0)
			return false;

	if (iParam3 & 4194304 == 0)
		if (Global_1935496.f_7 & 67108864 != 0)
			return false;

	if (iParam3 & 16777216 == 0)
		if (Global_1935496.f_7 & 134217728 == 0)
			return false;

	if (Global_1935496.f_7 & 17825988 != 0)
		return false;

	return true;
}

BOOL func_167() // Position - 0x65E9 Hash - 0xC43E5A88 ^0x7B6E2EFE
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

BOOL func_168(BOOL bParam0) // Position - 0x664C Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1914319.f_17370;

	return Global_1914319.f_17370 || Global_1914319.f_18996.f_1;
}

BOOL func_169() // Position - 0x667C Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_56() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

void func_170(int iParam0, int iParam1) // Position - 0x66A2 Hash - 0xF5E9551B ^0xF5E9551B
{
	int i;

	if (iParam1 == 1)
	{
		func_375(iParam0, 0);
	}
	else
	{
		for (i = 0; i < 20; i = i + 1)
		{
			if (Global_40.f_11922[i] == 0)
			{
				Global_40.f_11922[i] = iParam0;
				return;
			}
		}
	
		func_376(1);
		Global_40.f_11922[0] = iParam0;
	}

	return;
}

void func_171(int iParam0, int iParam1) // Position - 0x66FA Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_50(iParam0))
		return;

	func_377(iParam0, iParam1);
	return;
}

BOOL func_172(int iParam0) // Position - 0x6717 Hash - 0xBF2B4762 ^0xBF2B4762
{
	return Global_40.f_490.f_402[iParam0] & true != 0;
}

BOOL func_173() // Position - 0x6730 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_174(int iParam0) // Position - 0x674F Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_56() != -1)
		return false;

	return func_189(Global_1347702[iParam0 /*49*/].f_15, true);
}

BOOL func_175(int iParam0) // Position - 0x6772 Hash - 0x9921E361 ^0x80761F6A
{
	return Global_40.f_12004.f_6 && iParam0 != false;
}

void func_176(int iParam0) // Position - 0x6787 Hash - 0x25D46568 ^0xDB7BDC37
{
	Global_40.f_12019.f_26 = Global_40.f_12019.f_26 || iParam0;
	return;
}

void func_177(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0x67A2 Hash - 0xD806FABF ^0x93FC03F5
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
		
			if (func_173() && func_272(38) || func_174(38))
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
		
			if (func_173() && func_272(39) || func_174(39))
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
		
			if (func_173() && func_272(49) || func_174(49))
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
		if (func_173() && func_272(38) || func_174(38))
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
			func_378(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_378(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_380(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_270(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_378(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_378(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_173() && func_272(39) || func_174(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_378(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_378(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_173() && func_272(49) || func_174(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_378(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_378(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_378(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_378(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

void func_178(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x6D50 Hash - 0x2D6CF941 ^0x32C4D515
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
		
			if (func_173() && func_272(38) || func_174(38))
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
			if (func_173() && func_272(39) || func_174(39))
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
			if (func_173() && func_272(41) || func_174(41))
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
			num = func_381(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_173() && func_272(49) || func_174(49))
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
			num = func_381(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_382(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_383(iParam0, hash, hash2);
	func_384(iParam0, hash, unk, str5, str4);
	func_385(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_386(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_387(iParam0, hash, hash2, iParam6);
	func_388(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_179(int iParam0) // Position - 0x718D Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

BOOL func_180(int iParam0) // Position - 0x71A8 Hash - 0x9921E361 ^0x3BD1D7
{
	return Global_40.f_12004.f_1 && iParam0 != false;
}

void func_181(int iParam0) // Position - 0x71BD Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12019.f_3 = Global_40.f_12019.f_3 || iParam0;
	return;
}

void func_182(int iParam0) // Position - 0x71D8 Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

BOOL func_183(int iParam0) // Position - 0x71F3 Hash - 0x9921E361 ^0x9A354EEF
{
	return Global_40.f_12004.f_3 && iParam0 != false;
}

void func_184(int iParam0) // Position - 0x7208 Hash - 0x25D46568 ^0xB710C32B
{
	Global_40.f_12019.f_4 = Global_40.f_12019.f_4 || iParam0;
	return;
}

void func_185(int iParam0) // Position - 0x7223 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

BOOL func_186(int iParam0) // Position - 0x723E Hash - 0x9921E361 ^0x59BA6F7C
{
	return Global_40.f_12004.f_5 && iParam0 != false;
}

void func_187(int iParam0) // Position - 0x7253 Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12019.f_2 = Global_40.f_12019.f_2 || iParam0;
	return;
}

void func_188(int iParam0) // Position - 0x726E Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

BOOL func_189(int iParam0, BOOL bParam1) // Position - 0x7289 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_341(iParam0))
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

BOOL func_190(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x72BA Hash - 0x5AD1F9FD ^0x42FC5FEC
{
	Hash interactionAnimHash;

	switch (func_191(hParam0, -949239683))
	{
		case -1565009253:
			if (!bParam1)
			{
				interactionAnimHash = 1254219723;
			
				if (bParam2)
					interactionAnimHash = -2077441721;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1273369295:
			if (!bParam1)
			{
				interactionAnimHash = -27851152;
			
				if (bParam2)
					interactionAnimHash = -1340223099;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1229959999:
			if (!bParam1)
			{
				interactionAnimHash = 1159762194;
			
				if (bParam2)
					interactionAnimHash = -1791047090;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1050374492:
			if (!bParam1)
			{
				interactionAnimHash = 343713021;
			
				if (bParam2)
					interactionAnimHash = 760057945;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -873135685:
			if (!bParam1)
			{
				interactionAnimHash = -1418730365;
			
				if (bParam2)
					interactionAnimHash = -1570312122;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -164980960:
			if (!bParam1)
			{
				interactionAnimHash = -138141811;
			
				if (bParam2)
					interactionAnimHash = 2000759837;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 10252101:
			if (!bParam1)
			{
				interactionAnimHash = -1246302402;
			
				if (bParam2)
					interactionAnimHash = -487508500;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 24248412:
			if (!bParam1)
			{
				interactionAnimHash = 1014486005;
			
				if (bParam2)
					interactionAnimHash = 416212934;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 82200319:
			if (!bParam1)
			{
				interactionAnimHash = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
			
				if (bParam2)
					interactionAnimHash = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 733893097:
			if (!bParam1)
			{
				interactionAnimHash = 436157482;
			
				if (bParam2)
					interactionAnimHash = 1972630951;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 871191033:
			if (!bParam1)
			{
				interactionAnimHash = joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_INTRO");
			
				if (bParam2)
					interactionAnimHash = joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_BASE");
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1513351077:
			if (!bParam1)
			{
				interactionAnimHash = 889797228;
			
				if (bParam2)
					interactionAnimHash = -1043439814;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1712126263:
			if (!bParam1)
			{
				interactionAnimHash = 1589555562;
			
				if (bParam2)
					interactionAnimHash = -1424266966;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1894156335:
			if (!bParam1)
			{
				interactionAnimHash = 1801769345;
			
				if (bParam2)
					interactionAnimHash = 374699583;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	}

	return false;
}

int func_191(Hash hParam0, int iParam1) // Position - 0x75D6 Hash - 0x7A1C2599 ^0xFF9B5634
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

void func_192(Hash hParam0) // Position - 0x7620 Hash - 0x26CEB274 ^0x33203B5B
{
	Hash hash;

	hash = joaat("apply_lotion_left_hand");

	switch (func_389())
	{
		case 0:
			hash = joaat("apply_lotion_left_hand");
			break;
	
		case 1:
			hash = joaat("apply_lotion_both_hands");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("apply_lotion_left_hand_rifle");
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

BOOL func_193() // Position - 0x76A0 Hash - 0xB6A628E2 ^0xC1A3BB0C
{
	return 1 == Global_40.f_7748.f_3;
}

BOOL func_194(Ped pedParam0) // Position - 0x76B2 Hash - 0x224EC90C ^0x807A7E5C
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pedParam0) || ENTITY::IS_ENTITY_DEAD(*pedParam0))
		return false;

	if (func_392(*pedParam0, joaat("HATS"), false))
		return true;

	return false;
}

void func_195(Hash hParam0) // Position - 0x76EB Hash - 0x26CEB274 ^0x13CF482F
{
	Hash hash;

	hash = 16939881;

	switch (func_389())
	{
		case 0:
			hash = 16939881;
			break;
	
		case 1:
			hash = -1165614444;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = 968591133;
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_196(Hash hParam0, BOOL bParam1) // Position - 0x776B Hash - 0xE800B03C ^0x3799F51A
{
	Hash hash;

	hash = -45077177;

	switch (func_389())
	{
		case 0:
			if (bParam1)
				hash = -2137817968;
			else
				hash = -45077177;
			break;
	
		case 1:
			if (bParam1)
				hash = -1947358597;
			else
				hash = 36807409;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			if (bParam1)
				hash = -750686877;
			else
				hash = 1293288723;
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_197(Hash hParam0, BOOL bParam1) // Position - 0x7818 Hash - 0xE800B03C ^0xCB090F44
{
	Hash hash;

	hash = 1700817728;

	switch (func_389())
	{
		case 0:
			if (bParam1)
				hash = -447623645;
			else
				hash = 1700817728;
			break;
	
		case 1:
			if (bParam1)
				hash = 1880532390;
			else
				hash = -480771797;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			if (bParam1)
				hash = 468890170;
			else
				hash = 764367205;
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_198(Hash hParam0) // Position - 0x78C5 Hash - 0x26CEB274 ^0x4A49C80C
{
	Hash hash;

	hash = joaat("use_large_bottle_combat_left_hand");

	switch (func_389())
	{
		case 0:
			hash = joaat("use_large_bottle_combat_left_hand");
			break;
	
		case 1:
			hash = joaat("use_large_bottle_combat_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_large_bottle_combat_rifle");
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_199(Hash hParam0) // Position - 0x7945 Hash - 0x26CEB274 ^0xC6610213
{
	Hash hash;

	hash = -680642132;

	switch (func_389())
	{
		case 0:
			hash = -680642132;
			break;
	
		case 1:
			hash = -267849149;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = 1759003815;
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_200(Hash hParam0) // Position - 0x79C5 Hash - 0x26CEB274 ^0x806B3C6E
{
	Hash hash;

	hash = 2105609037;

	switch (func_389())
	{
		case 0:
			hash = 2105609037;
			break;
	
		case 1:
			hash = -1595716047;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -457187977;
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_201(Hash hParam0) // Position - 0x7A45 Hash - 0x26CEB274 ^0x76FE185
{
	Hash hash;

	hash = 1964324114;

	switch (func_389())
	{
		case 0:
			hash = 1964324114;
			break;
	
		case 1:
			hash = 1826089606;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -654111932;
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_202(Hash hParam0) // Position - 0x7AC5 Hash - 0x26CEB274 ^0x271E98F3
{
	Hash hash;

	hash = -1530144981;

	switch (func_389())
	{
		case 0:
			hash = -1530144981;
			break;
	
		case 1:
			hash = -312546963;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -389189374;
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_203(Hash hParam0) // Position - 0x7B45 Hash - 0x26CEB274 ^0x8287AC45
{
	Hash hash;

	hash = -1074475556;

	switch (func_389())
	{
		case 0:
			hash = -1074475556;
			break;
	
		case 1:
			hash = -1846586910;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = 392506445;
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_204(Hash hParam0) // Position - 0x7BC5 Hash - 0x26CEB274 ^0x26B03C92
{
	Hash hash;

	hash = joaat("use_stimulant_injection_quick_left_hand");

	switch (func_389())
	{
		case 0:
			hash = joaat("use_stimulant_injection_quick_left_hand");
			break;
	
		case 1:
			hash = joaat("use_stimulant_injection_quick_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_stimulant_injection_quick_left_hand_rifle");
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_205(Hash hParam0) // Position - 0x7C45 Hash - 0x26CEB274 ^0x5D3C7B2A
{
	Hash hash;

	hash = joaat("quick_smoke_cigarette_left_hand");

	switch (func_389())
	{
		case 0:
			hash = joaat("quick_smoke_cigarette_left_hand");
			break;
	
		case 1:
			hash = joaat("quick_smoke_cigarette_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("quick_smoke_cigarette_rifle");
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_206(Hash hParam0) // Position - 0x7CC5 Hash - 0x26CEB274 ^0xBFBE1D88
{
	Hash hash;

	hash = joaat("quick_smoke_cigar_left_hand");

	switch (func_389())
	{
		case 0:
			hash = joaat("quick_smoke_cigar_left_hand");
			break;
	
		case 1:
			hash = joaat("quick_smoke_cigar_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("quick_smoke_cigar_rifle");
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_207(Hash hParam0) // Position - 0x7D45 Hash - 0xA69012EC ^0xD86A3DAD
{
	Hash hash;

	hash = joaat("use_handfull_satchel_left_hand_quick");

	switch (func_389())
	{
		case 0:
			hash = joaat("use_handfull_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_handfull_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_handfull_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		if (func_91(hParam0, 1573112293))
			func_394(func_393(&hParam0), true, 1);
	
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_208(Hash hParam0) // Position - 0x7DDF Hash - 0x26CEB274 ^0x36AF879B
{
	Hash hash;

	hash = joaat("use_tonic_satchel_left_hand_quick");

	switch (func_389())
	{
		case 0:
			hash = joaat("use_tonic_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_tonic_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_tonic_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_209(Hash hParam0) // Position - 0x7E5F Hash - 0x26CEB274 ^0xF38E7004
{
	Hash hash;

	hash = joaat("use_tonic_potent_satchel_left_hand_quick");

	switch (func_389())
	{
		case 0:
			hash = joaat("use_tonic_potent_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_tonic_potent_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_tonic_potent_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		func_390(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_391(hParam0, true);
		func_127(hParam0, 1, false, -142743235, false);
	}

	return;
}

BOOL func_210(int iParam0, int iParam1) // Position - 0x7EDF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_211(int iParam0) // Position - 0x7EEE Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_210(iParam0, 1))
		func_395(1);

	return;
}

BOOL func_212(int iParam0) // Position - 0x7F05 Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_396(iParam0))
		return false;

	if (func_397(iParam0, 4))
		return true;

	return false;
}

int func_213(int iParam0) // Position - 0x7F2A Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_214(int iParam0) // Position - 0x7F43 Hash - 0x11215AF ^0x23164775
{
	Ped ped;

	iParam0 = func_213(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_104(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return false;

	if (func_398(ped))
		return true;

	return false;
}

int func_215() // Position - 0x7FA4 Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3054;
}

void func_216(BOOL bParam0) // Position - 0x7FB5 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_217(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x7FC8 Hash - 0x3760D786 ^0x3760D786
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
		
			if (func_399(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_400(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_216(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_399(iParam0))
				return;
		
			func_400(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_216(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_236(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

BOOL func_218() // Position - 0x8205 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_2792;
}

BOOL func_219(Hash hParam0) // Position - 0x8214 Hash - 0x2759F6FA ^0x4BDB091E
{
	if (func_401())
		return false;

	if (!func_42(hParam0, 0))
		return false;

	if (!func_15(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_220(Hash hParam0) // Position - 0x824B Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_402(hParam0);
}

void func_221(var uParam0, int iParam1) // Position - 0x8259 Hash - 0xF55E891F ^0xF55E891F
{
	func_403(uParam0, iParam1);
	return;
}

int func_222(Hash hParam0, int iParam1) // Position - 0x8269 Hash - 0x4FF8311F ^0x88E4CE75
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_404(hParam0);

	if (func_91(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_405(&hash))
			if (flag)
				interactionAnimHash = func_406();
			else
				interactionAnimHash = func_407();
		else if (func_248(iParam1, 1))
			interactionAnimHash = 0;
		else if (flag)
			interactionAnimHash = func_408();
		else
			interactionAnimHash = func_409();
	else if (func_410(&hash))
		if (func_91(hash, -1303648999))
			interactionAnimHash = func_406();
		else
			interactionAnimHash = func_407();
	else if (flag)
		interactionAnimHash = func_408();
	else
		interactionAnimHash = func_409();

	if (interactionAnimHash != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

BOOL func_223(BOOL bParam0) // Position - 0x833C Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_224() // Position - 0x834D Hash - 0xB6203BF0 ^0x217DD714
{
	func_411(&(Global_1946054.f_2776));
	func_412(32768);
	func_413(1108822547, 8, 6);
	return;
}

BOOL func_225(int iParam0, BOOL bParam1) // Position - 0x8374 Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_414(iParam0, false) < func_415(iParam0, bParam1);
}

BOOL func_226(Hash hParam0) // Position - 0x838C Hash - 0x4F6A761A ^0x4F6A761A
{
	var unk;

	return func_416(hParam0, &unk);
}

void func_227(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x839C Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_417(hParam0))
		return;

	hash = func_100(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_418(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_418(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_418(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_418(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_418(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_418(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_228(0))
	{
		func_419(hParam0, true);
	
		if (func_420() == 1160113249)
			func_419(func_228(-2125499975), false);
		else
			func_419(func_228(1160113249), false);
	}

	func_421();

	if (func_422(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_140(false), hParam0, 0);

	func_111(hParam0, bParam3);

	if (bParam2)
		func_423(false, false);

	return;
}

Hash func_228(int iParam0) // Position - 0x8502 Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_420();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

void func_229(Hash hParam0, Hash hParam1) // Position - 0x852D Hash - 0x4EAC6B69 ^0x4EAC6B69
{
	Hash hash;

	hash = func_100(hParam1);

	if (hash != func_100(hParam0))
		return;

	func_424(hParam0, hParam1, true);
	return;
}

Hash func_230(var uParam0) // Position - 0x8554 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_425(i, 1);
	}

	return -358215195;
}

int func_231(Hash hParam0, int iParam1) // Position - 0x858F Hash - 0x9D981F95 ^0x9D981F95
{
	switch (hParam0)
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

BOOL func_232(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x8760 Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_426();

	if (iParam2 == 39)
	{
		unk = { func_160(hParam0, true, false) };
		iParam2 = func_231(func_230(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_91(hParam0, 866047851) && func_427(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_223(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_428(func_425(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_429(iParam2);
	func_430(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_431(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_431(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_432(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_433(hParam0, iParam2, hParam1, func_56() != -1);

	if (bParam4)
		func_434(&(Global_1946054.f_1378), true, 3);
	else
		func_434(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_413(func_425(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_233(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x896D Hash - 0x5AF76643 ^0x5AF76643
{
	func_435(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

int func_234(Hash hParam0) // Position - 0x8986 Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_231(hParam0, 1);

	switch (hParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_235(int iParam0) // Position - 0x89EA Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_436(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_437(num);
	return;
}

void func_236(int iParam0, int iParam1, int iParam2) // Position - 0x8A2E Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_437(num);
	return;
}

int func_237(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x8A4E Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_42(hParam0, 0))
		return 0;

	guid = { func_162(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_140(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_238() // Position - 0x8A96 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1914319.f_18996.f_1;
}

BOOL func_239() // Position - 0x8AA7 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1914319.f_18996;
}

char* func_240() // Position - 0x8AB6 Hash - 0xC695042A ^0xB24D88DC
{
	switch (Global_1914319.f_18996.f_4)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
	
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
	
		case 2:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
	
		case 3:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
	
		case 4:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
	
		case 5:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
	
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
	
		case 7:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
	
		case 8:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
	
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
	
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
	
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
	
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
	
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
	
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
	
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
	
		default:
		
	}

	return "";
}

Ped func_241(int iParam0) // Position - 0x8BA1 Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_213(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_242(int iParam0) // Position - 0x8BD4 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_213(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

float func_243(int iParam0) // Position - 0x8C08 Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_213(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_244(float fParam0, Any anParam1, float fParam2) // Position - 0x8C3E Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

BOOL func_245(int iParam0) // Position - 0x8C53 Hash - 0x4D892971 ^0xAE6B238D
{
	return func_248(Global_1128974[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*59*/].f_58, iParam0);
}

BOOL func_246() // Position - 0x8C6D Hash - 0x4B44C4C9 ^0x4B44C4C9
{
	return !func_245(2);
}

BOOL func_247(int iParam0) // Position - 0x8C7B Hash - 0x863407EE ^0x2FA2F34D
{
	if (Global_1572887.f_12 == -1)
		return false;

	return Global_1146476.f_1 && iParam0 != false;
}

BOOL func_248(int iParam0, int iParam1) // Position - 0x8C9C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_249() // Position - 0x8CAB Hash - 0x8A1C1656 ^0x17C26F3D
{
	if (func_168(false) && !func_438() || func_439() || Global_1935689.f_1 || func_440())
		return false;

	return true;
}

void func_250(int iParam0) // Position - 0x8CEA Hash - 0x29A8F290 ^0x5B1674A8
{
	Global_1898068.f_8 = iParam0;
	return;
}

var func_251(int iParam0, int iParam1) // Position - 0x8CFA Hash - 0x42C305C ^0x81DF2F42
{
	return func_441(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_252(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, BOOL bParam17, BOOL bParam18) // Position - 0x8D18 Hash - 0xC0B30484 ^0xEDC09E5
{
	var unk;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam16))
		return;

	iParam0 = 0;
	iParam0.f_1 = PLAYER::PLAYER_ID();
	iParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (!bParam17)
	{
		if (iParam0.f_15)
		{
			if (bParam18)
			{
				unk.f_12 = 255;
				unk.f_13 = 255;
				unk.f_17 = -1;
				unk = { iParam0 };
				unk.f_16 = uParam16;
				unk.f_17 = iParam0.f_2;
				func_442(&(Global_1058888.f_43130), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 16, 4, &uParam16);
	return;
}

void func_253(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x8DA6 Hash - 0xB6CF78C ^0x845E9244
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	char* str;
	int num3;
	int num4;
	int num5;
	char* str2;
	int num6;
	const char* str3;

	if (hParam0 == joaat("ammo_moonshinejug"))
		return;

	if (!func_42(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_443())
	{
		func_444(hParam0, iParam1, bParam2, bParam4);
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
		else if (bParam2 && func_275(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_43(hParam0);
	num3 = 0;
	num4 = joaat("Inventory");

	if (num2 == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver"))
	{
		num3 = joaat("ammo_types");
		num4 = joaat("ammo_types");
	}

	if (num2 == joaat("weapon_mod") || num2 == joaat("weapon_decoration"))
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_446(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num5 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	num6 = 0;

	if (flag)
	{
		num5 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num6 = 1;
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_rpg_special_1");
		else
			num5 = joaat("color_yellowdark");

	str3 = func_447(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_319(hParam0)), num), num5);

	if (iParam1 == 1 || func_91(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_319(hParam0));

	func_448(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

struct<2> func_254(Hash hParam0) // Position - 0x8FFB Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_42(hParam0, 0))
		return unk;

	if (func_91(hParam0, -305066475))
		if (func_56() == -1)
			if (func_91(hParam0, -537818634))
				return func_449(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_449(joaat("deadeye_items"));
	else if (func_91(hParam0, -537818634))
		return func_449(joaat("medicine_items"));

	if (func_91(hParam0, 2084895747))
		return func_449(joaat("lock_breaker_items"));

	return unk3;
}

BOOL func_255(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x908F Hash - 0x17E58D7C ^0xB0311DE1
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

	unk = { func_336(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_338(&unk, func_337(false));

	if (!func_339(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_136(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_163(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_138(num);
	num3 < iParam1;
	return true;
}

BOOL func_256(BOOL bParam0) // Position - 0x915A Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_56() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_140(bParam0));
}

void func_257(Hash hParam0, int iParam1) // Position - 0x9178 Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_91(hParam0, 606799272))
			func_450(hParam0, iParam1);
	
		if (func_91(hParam0, -1112814642) && func_91(hParam0, -1697809989))
			func_301(hParam0, iParam1, true, false);
	}

	return;
}

void func_258(int iParam0, var uParam1, var uParam2) // Position - 0x91CB Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_259(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x91E7 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_451(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_452(iParam0))
		return false;

	if (func_453(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_454(iParam0, 1) || func_455(32768))
		if (!func_454(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_456())
		return false;

	return true;
}

void func_260(int iParam0, int iParam1) // Position - 0x9289 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_261(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x92AD Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_56() == -1)
	{
		if (func_457(hParam0) && func_458(hParam0))
		{
			func_459(hParam0, iParam1, true, &bParam2, iParam3);
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

BOOL func_262(Hash hParam0, var uParam1, int iParam2) // Position - 0x9304 Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_460(hParam0, uParam1);
	unk = { func_160(hParam0, false, true) };
	num = func_461(hParam0, &unk, false, false);
	num2 = func_462(hParam0, false);

	if (num > 1 && !func_463() && num2 + iParam2 >= num)
		if (func_91(hParam0, -2051813666))
			func_128(583, true);
		else
			func_128(582, false);

	if (func_464(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_263(Hash hParam0, BOOL bParam1) // Position - 0x93A0 Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_191(hParam0, -949239683))
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

BOOL func_264(Hash hParam0) // Position - 0x944C Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_56() != -1)
		return false;

	return func_265(hParam0) != 0;
}

Hash func_265(Hash hParam0) // Position - 0x9468 Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_465(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_466(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_266(Hash hParam0) // Position - 0x94A4 Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_267(Hash hParam0) // Position - 0x94B2 Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_465(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_266(collectableItemHash))
			if (func_15(func_466(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_268(Hash hParam0) // Position - 0x94FF Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_467(48);
	func_468(false, -1);
	return;
}

int func_269(Hash hParam0) // Position - 0x951A Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_270(Hash hParam0) // Position - 0x952D Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_271(int iParam0) // Position - 0x9540 Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_56() != -1)
		return false;

	return func_189(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_272(Hash hParam0) // Position - 0x9563 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_56() != -1)
		return false;

	if (!func_48(hParam0))
		return false;

	return func_151(Global_1347702[hParam0 /*49*/].f_15);
}

int func_273() // Position - 0x9593 Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_15(func_469(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_274(int iParam0) // Position - 0x95C8 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

BOOL func_275(Hash hParam0, int iParam1) // Position - 0x95DF Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_42(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

BOOL func_276(int iParam0) // Position - 0x95FE Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_470(iParam0))
		return false;

	return func_471(iParam0);
}

void func_277(int iParam0) // Position - 0x961A Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_470(iParam0))
		return;

	func_472(iParam0);
	func_473(iParam0);
	return;
}

Hash func_278(Hash hParam0, BOOL bParam1) // Position - 0x963B Hash - 0x27CC99BE ^0x9BD61A93
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

	if (func_42(hash, 0))
		if (bParam1)
			if (func_474(hash) || func_475(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_279(Hash hParam0, BOOL bParam1) // Position - 0x97C1 Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_42(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_280(Hash hParam0) // Position - 0x97ED Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_137(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_281(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x9827 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_160(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_476(398 + i, 1);
		
			if (func_348(hParam0, &unk, hash, false))
			{
				if (func_349(hParam0, &unk6, hash))
				{
					unk28 = { func_162(hParam0, unk, hash, false) };
					func_163(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_256(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_282(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_477(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_282(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x9979 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_284(hParam0))
		return false;

	if (!func_256(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_283(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x99B4 Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_279(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_56() == -1)
		{
			func_280(weaponHash);
		
			if (hParam1 == 1248274121)
				func_478(weaponHash);
		}
	
		if (!func_464(hParam0, &unk, 1, false, false))
		{
			func_459(hParam0, 1, false, uParam2, hParam1);
			num = func_479(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_281(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_281(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_281(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_480())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_481(weaponHash))
				{
					func_281(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_281(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_482(Global_35, 2, false, true);
			
				if (func_137(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_276(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_137(weaponHash2) && func_276(24))
					if (!func_281(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_281(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_281(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_128(480, true);

	return true;
}

BOOL func_284(Hash hParam0) // Position - 0x9BC0 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_285(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x9BCE Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_284(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_137(weaponTypeFromAmmoType))
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

	if (func_15(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
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
		func_320(func_483(hParam0), func_319(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_56() == -1)
			if (func_189(Global_1835011[14 /*74*/].f_1, true))
				func_128(416, false);

	if (num == 0)
		return false;

	if (func_256(false))
	{
		if (func_282(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_325(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_286(Hash hParam0) // Position - 0x9D17 Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_484() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_485(Global_35, hParam0, &unk))
			func_110(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_310();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_310();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_308();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_306();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_310();
			break;
	}

	return;
}

void func_287(Hash hParam0) // Position - 0x9E1E Hash - 0xA92CE7CF ^0x8CEA2EC6
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
			func_487();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_308();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_486();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_306();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_309();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_307();
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
			func_310();
			break;
	}

	return;
}

struct<2> func_288(int iParam0) // Position - 0xA009 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_289(var uParam0, var uParam1, int iParam2) // Position - 0xA01B Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

struct<2> func_290(int iParam0, int iParam1) // Position - 0xA02B Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_291(Hash hParam0) // Position - 0xA041 Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_91(hParam0, -2017733358);

	if (func_488() < 3)
		if (flag)
			if (func_490(func_489(hParam0), hParam0))
				func_320(79, func_319(func_489(hParam0)), true);
			else
				func_320(78, func_319(func_489(hParam0)), true);
		else
			func_320(80, func_319(func_491(hParam0)), true);

	return;
}

BOOL func_292() // Position - 0xA0AE Hash - 0x452521BB ^0x7FA3002C
{
	if (func_492(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_492(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_492(joaat("document_arthur_high_bounty_1"), 400) || func_492(joaat("document_arthur_high_bounty_2"), 400) || func_492(joaat("document_arthur_has_poster_1"), 400) || func_492(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_293(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0xA124 Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_493(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_494(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_495(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_294(Hash hParam0) // Position - 0xA16B Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_178(43, 0, 0, joaat("exotic_stage_01"), func_496(1), false, -1, false);
			func_497(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_178(39, 0, 0, 0, 0, false, 1, false);
			func_177(39, 0, 0, 0, 0, -1, 0);
			func_182(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_178(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_177(51, 0, 0, 0, 0, -1, 0);
			func_179(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_178(43, 0, 0, joaat("exotic_stage_02"), func_496(2), false, -1, false);
			func_497(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_178(43, 0, 0, joaat("exotic_stage_03"), func_496(4), false, -1, false);
			func_497(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_178(49, 0, 0, 0, 0, false, 1, false);
			func_177(49, 0, 0, 0, 0, -1, 0);
			func_188(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_178(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_177(51, 0, 0, 0, 0, -1, 0);
			func_179(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_178(41, 0, 0, 0, 0, false, 1, false);
			func_177(41, 0, 0, 0, 0, -1, 0);
			func_185(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_178(43, 0, 0, joaat("exotic_stage_05"), func_496(16), false, -1, false);
			func_497(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_178(43, 0, 0, joaat("exotic_stage_04"), func_496(8), false, -1, false);
			func_497(8);
			break;
	}

	return;
}

void func_295(Hash hParam0) // Position - 0xA301 Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_498() == 1)
	{
		if (func_174(39))
		{
			func_128(342, false);
		}
		else
		{
			func_128(343, false);
			func_182(1);
		}
	}

	if (func_498() >= 30)
		func_128(344, false);

	func_178(39, 0, 0, 0, 0, false, -1, false);
	func_177(39, 0, 0, func_498(), 30, 1, 0);
	return;
}

void func_296(Hash hParam0) // Position - 0xA360 Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_499() == 1)
	{
		if (func_174(49))
		{
			func_128(409, false);
		}
		else
		{
			func_128(410, false);
			func_188(1);
		}
	}

	if (func_499() >= 10)
		func_128(411, false);

	func_178(49, 0, 0, 0, 0, false, -1, false);
	func_177(49, 0, 0, func_499(), 10, 1, 0);
	return;
}

void func_297(Hash hParam0) // Position - 0xA3BF Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_128(438, false);
			func_500(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_178(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_177(51, 0, 0, num, func_381(joaat("taxidermy_order_05"), 20), 1, 0);
			func_179(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_500(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_178(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_177(51, 0, 0, num, func_381(joaat("taxidermy_order_04"), 20), 1, 0);
			func_179(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_500(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_178(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_177(51, 0, 0, num, func_381(joaat("taxidermy_order_03"), 20), 1, 0);
			func_179(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_128(437, false);
			func_128(440, false);
			func_500(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_178(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_177(51, 0, 0, num, func_381(joaat("taxidermy_order_01"), 20), 1, 0);
			func_179(1);
			func_501(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_500(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_178(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_177(51, 0, 0, num, func_381(joaat("taxidermy_order_02"), 20), 1, 0);
			func_179(8);
			break;
	
		default:
			func_128(439, false);
			break;
	}

	return;
}

void func_298() // Position - 0xA5AD Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_299(Hash hParam0, int iParam1) // Position - 0xA5D1 Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_56() == -1)
	{
		if (!func_174(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_128(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_128(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_128(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_128(400, false);
		}
		else if (func_91(hParam0, 412399755))
		{
			func_502(joaat("exotic_stage_01"));
		
			if (func_503() == 0)
			{
				func_468(false, 10);
				num2 = func_504(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_505(hParam0) < func_506(hParam0))
					{
						func_178(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_177(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_174(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_128(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_128(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_128(401, false);
		}
		else if (func_91(hParam0, 709057512))
		{
			func_502(joaat("exotic_stage_02"));
		
			if (func_503() == 1)
			{
				func_468(false, 10);
				num2 = func_504(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_505(hParam0) < func_506(hParam0))
					{
						func_178(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_177(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_174(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_128(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_128(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_128(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_128(398, false);
		}
		else if (func_91(hParam0, -1478961327))
		{
			func_502(joaat("exotic_stage_03"));
		
			if (func_503() == 2)
			{
				func_468(false, 10);
				num2 = func_504(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_507(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_508(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_467(48);
					}
				
					if (func_505(hParam0) < func_506(hParam0))
					{
						func_178(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_177(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_505(hParam0) < func_506(hParam0))
					{
						func_178(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_177(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_174(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_128(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_128(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_128(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_128(406, false);
		}
		else if (func_91(hParam0, -1238404098))
		{
			func_502(joaat("exotic_stage_04"));
		
			if (func_503() == 3)
			{
				func_468(false, 10);
				num2 = func_504(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_505(hParam0) < func_506(hParam0))
					{
						func_178(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_177(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_174(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_128(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_128(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_128(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_128(403, false);
		}
		else if (func_91(hParam0, 1160548794))
		{
			func_502(joaat("exotic_stage_05"));
		
			if (func_503() == 4)
			{
				func_468(false, 10);
				num2 = func_504(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_505(hParam0) < func_506(hParam0))
					{
						func_178(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_177(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_300(Hash hParam0) // Position - 0xAAEA Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_507(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_508(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_467(48);
		}
	}

	return;
}

void func_301(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xAB2A Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_15(func_509(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_510(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_511(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_302(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0xAB8A Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_56() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_293(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_293(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_293(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_293(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_293(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_293(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_293(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_293(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_293(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_512())
				func_293(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_293(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_293(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_293(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_293(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_293(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_293(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_293(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_293(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_293(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_293(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_293(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_293(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_293(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_293(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_293(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_293(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_293(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

void func_303(Hash hParam0) // Position - 0xAF62 Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_174(41))
		func_128(363, false);
	else
		func_128(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_513(joaat("legendary_fish_02"));
			func_514(joaat("legendary_fishing_spot_02"));
			func_515(joaat("legendary_fishing_spot_02"));
			func_468(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_513(joaat("legendary_fish_06"));
			func_514(joaat("legendary_fishing_spot_06"));
			func_515(joaat("legendary_fishing_spot_06"));
			func_468(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_513(joaat("legendary_fish_13"));
			func_514(joaat("legendary_fishing_spot_13"));
			func_515(joaat("legendary_fishing_spot_13"));
			func_468(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_513(joaat("legendary_fish_03"));
			func_514(joaat("legendary_fishing_spot_03"));
			func_515(joaat("legendary_fishing_spot_03"));
			func_468(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_513(joaat("legendary_fish_08"));
			func_514(joaat("legendary_fishing_spot_08"));
			func_515(joaat("legendary_fishing_spot_08"));
			func_468(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_513(joaat("legendary_fish_12"));
			func_514(joaat("legendary_fishing_spot_12"));
			func_515(joaat("legendary_fishing_spot_12"));
			func_468(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_513(joaat("legendary_fish_05"));
			func_514(joaat("legendary_fishing_spot_05"));
			func_515(joaat("legendary_fishing_spot_05"));
			func_468(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_513(joaat("legendary_fish_04"));
			func_514(joaat("legendary_fishing_spot_04"));
			func_515(joaat("legendary_fishing_spot_04"));
			func_468(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_513(joaat("legendary_fish_14"));
			func_514(joaat("legendary_fishing_spot_14"));
			func_515(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_513(joaat("legendary_fish_09"));
			func_514(joaat("legendary_fishing_spot_09"));
			func_515(joaat("legendary_fishing_spot_09"));
			func_468(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_513(joaat("legendary_fish_07"));
			func_514(joaat("legendary_fishing_spot_07"));
			func_515(joaat("legendary_fishing_spot_07"));
			func_468(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_513(joaat("legendary_fish_01"));
			func_514(joaat("legendary_fishing_spot_01"));
			func_515(joaat("legendary_fishing_spot_01"));
			func_468(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_513(joaat("legendary_fish_11"));
			func_514(joaat("legendary_fishing_spot_11"));
			func_515(joaat("legendary_fishing_spot_11"));
			func_468(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_513(joaat("legendary_fish_10"));
			func_514(joaat("legendary_fishing_spot_10"));
			func_515(joaat("legendary_fishing_spot_10"));
			func_468(false, 10);
			break;
	}

	return;
}

void func_304(Hash hParam0, var uParam1) // Position - 0xB1E1 Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_335(hParam0, uParam1, &unk);
	return;
}

BOOL func_305(var uParam0, BOOL bParam1) // Position - 0xB1F3 Hash - 0x2DC8D50 ^0x79739B7E
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
	hash = func_482(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_482(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_135("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_136(&unk, i, num, num2))
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
	
		func_138(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_306() // Position - 0xB2BC Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_307() // Position - 0xB2D6 Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_308() // Position - 0xB30B Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_309() // Position - 0xB327 Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_310() // Position - 0xB341 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_516();
	func_517();
	func_518();
	return;
}

void func_311(int iParam0, int iParam1, BOOL bParam2) // Position - 0xB358 Hash - 0x968DA278 ^0xBDF0C5D8
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

void func_312(int iParam0, BOOL bParam1) // Position - 0xB730 Hash - 0x922C415B ^0xA6CF41B3
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
	func_378(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_313(int iParam0) // Position - 0xB847 Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_314(int iParam0) // Position - 0xB862 Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_315(int iParam0) // Position - 0xB87D Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_316(int iParam0) // Position - 0xB898 Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_317(int iParam0) // Position - 0xB8B3 Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_318(int iParam0) // Position - 0xB8CE Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

eBlipSprite func_319(Hash hParam0) // Position - 0xB8E9 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_42(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_320(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0xB902 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_258(iParam0, &num, &num2);

	if (!func_259(iParam0, num, num2, bParam2))
		return;

	if (!func_454(iParam0, 1024))
		return;

	func_260(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_321(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB962 Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_258(iParam0, &num, &num2);

	if (!func_259(iParam0, num, num2, bParam2))
		return;

	if (!func_454(iParam0, 1024))
		return;

	func_260(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_322() // Position - 0xB9DD Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_465())
		return func_323();

	endRange = func_465() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_465(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_519(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_466(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_323() // Position - 0xBA57 Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_465());
	return func_466(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_324(var uParam0) // Position - 0xBA7A Hash - 0x26E9B20B ^0x108E1842
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

BOOL func_325(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xBACF Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_42(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	unk = { func_160(hParam0, false, true) };
	unk6 = { func_162(hParam0, unk, unk.f_4, false) };
	return func_520(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_326(Hash hParam0) // Position - 0xBB1E Hash - 0x90E372CB ^0xEE55522E
{
	int num;
	Hash hash;
	Hash hash2;

	if (func_56() != -1)
		return;

	switch (func_100(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_107(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			num = func_106(hParam0);
		
			if (func_396(num))
				func_521(num, num >= 0 && num <= 5, true);
			else
				func_107(30, hParam0, 0, 0, false);
		
			if (func_420() == -2125499975 || func_420() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_107(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_420() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_107(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_225(-525676072, false))
				if (func_522(-525676072, &hash))
					func_107(33, hash, 0, 0, false);
		
			func_107(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_414(81053684, false) <= 0)
				func_107(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_523(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_110(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_277(24);
	
		if (func_305(&hash2, false))
			func_281(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_327(Hash hParam0) // Position - 0xBCF0 Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_91(hParam0, 943695443))
		func_524(0, hParam0);
	else if (func_91(hParam0, -2096528786))
		func_524(1, hParam0);
	else if (func_91(hParam0, -1094167013))
		func_524(2, hParam0);
	else if (func_91(hParam0, 1936654645))
		func_524(3, hParam0);
	else if (func_91(hParam0, 1306489306))
		func_524(4, hParam0);
	else if (func_91(hParam0, 435762317))
		func_524(5, hParam0);
	else if (func_91(hParam0, 1259363210))
		func_524(6, hParam0);
	else if (func_91(hParam0, 881398259))
		func_524(7, hParam0);
	else if (func_91(hParam0, -541549214))
		func_524(8, hParam0);
	else if (func_91(hParam0, 130796156))
		func_524(-1, hParam0);

	return;
}

int func_328(Hash hParam0, int iParam1) // Position - 0xBDE6 Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_525(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_526(hParam0, &unk5, &unk, iParam1);
}

void func_329(Hash hParam0) // Position - 0xBE0F Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_56() == -1)
				if (func_189(Global_1835011[4 /*74*/].f_1, true))
					func_128(109, true);
			break;
	}

	return;
}

void func_330(Hash hParam0, int iParam1) // Position - 0xBE48 Hash - 0x3053C451 ^0x97105256
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_527(0));
	func_448(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_529(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

float func_331() // Position - 0xBE88 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_332(var uParam0, int iParam1) // Position - 0xBEBA Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_333(var uParam0, int iParam1) // Position - 0xBECB Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_334(var uParam0) // Position - 0xBEE0 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_29(uParam0))
		return uParam0->f_1;

	if (func_530(uParam0))
		return uParam0->f_2;

	return func_331() - uParam0->f_1;
}

void func_335(Hash hParam0, var uParam1, var uParam2) // Position - 0xBF15 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_336(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xC123 Hash - 0x84700F53 ^0xB9E7AA96
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

	return hash;
}

struct<4> func_337(BOOL bParam0) // Position - 0xC1F5 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_140(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_162(923904168, func_346(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_162(923904168, func_346(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_162(923904168, func_346(bParam0), -740156546, false);
}

void func_338(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xC28A Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_339(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0xC2A5 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_140(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_340(int iParam0) // Position - 0xC2CA Hash - 0x96EC57 ^0x2A07EA1A
{
	if (func_531(iParam0))
		return VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1);

	return false;
}

int func_341(int iParam0) // Position - 0xC2EE Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_50(iParam0))
		return -1;

	return func_532(iParam0);
}

BOOL func_342(int iParam0) // Position - 0xC30A Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_533(Global_1835011[iParam0 /*74*/].f_1);
}

Vector3 func_343(int iParam0) // Position - 0xC336 Hash - 0x3E6E91A9 ^0x3E6E91A9
{
	return func_534(iParam0);
}

Vector3 func_344(Hash hParam0) // Position - 0xC344 Hash - 0xC80D35E3 ^0xC80D35E3
{
	var unk;

	if (!func_48(hParam0))
		return 0f, 0f, 0f;

	unk = { 0f, 0f, 0f };

	if (func_535(hParam0, &unk))
		Global_1347702[hParam0 /*49*/].f_24 = { unk };

	return Global_1347702[hParam0 /*49*/].f_24;
}

BOOL func_345(int iParam0) // Position - 0xC38A Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_52(iParam0, 2);
}

struct<4> func_346(BOOL bParam0) // Position - 0xC399 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_162(joaat("character"), func_536(), joaat("SLOTID_NONE"), bParam0);
}

BOOL func_347(Hash hParam0, BOOL bParam1) // Position - 0xC3B5 Hash - 0x62864AB ^0xBC339691
{
	if (func_100(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_276(24);
		else
			return true;

	return false;
}

BOOL func_348(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0xC3EE Hash - 0x4285A587 ^0x4285A587
{
	return func_237(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_349(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xC406 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_537(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_350(BOOL bParam0) // Position - 0xC427 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_140(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_162(271701509, func_346(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_162(271701509, func_346(bParam0), 12999093, false);
}

BOOL func_351(Hash hParam0, Hash hParam1) // Position - 0xC48B Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_100(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_352(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC4EA Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_140(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_353(Hash hParam0) // Position - 0xC51A Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_354(Hash hParam0) // Position - 0xC530 Hash - 0x5FC245A8 ^0x222CF07D
{
	if (func_42(hParam0, 0))
	{
		if (func_91(hParam0, -1242251796))
		{
			if (func_91(hParam0, 2060589226))
				return func_538();
		
			return func_539();
		}
		else if (func_91(hParam0, 1919582297))
		{
			return func_363();
		}
		else if (func_91(hParam0, 1147021565))
		{
			return func_364();
		}
	}

	if (Global_1935496.f_12)
		return func_539();
	else
		return func_364();

	return func_364();
}

BOOL func_355(Hash hParam0) // Position - 0xC5BA Hash - 0xE3FE29A5 ^0x72E17A42
{
	if (func_91(hParam0, 1147021565) || func_91(hParam0, -136654233) || func_91(hParam0, -524514947) || func_91(hParam0, -1238310989) || func_91(hParam0, 1765172170) || func_91(hParam0, 1490540191) || func_91(hParam0, 1573112293) || func_91(hParam0, -1242251796) || func_91(hParam0, 1919582297) || func_91(hParam0, -2085281117) || hParam0 == joaat("consumable_offal"))
		return true;

	return false;
}

int func_356() // Position - 0xC67C Hash - 0x9F572D68 ^0x6988BC7F
{
	return 33284224;
}

int func_357() // Position - 0xC689 Hash - 0x9F572D68 ^0x23F8B11F
{
	return 33537269;
}

int func_358() // Position - 0xC696 Hash - 0x9F572D68 ^0xB34E8DD9
{
	return 18589696;
}

int func_359() // Position - 0xC6A3 Hash - 0x9F572D68 ^0xA13B31FE
{
	return 26978448;
}

int func_360() // Position - 0xC6B0 Hash - 0x9F572D68 ^0x3789FFFE
{
	return 33529847;
}

int func_361() // Position - 0xC6BD Hash - 0x9F572D68 ^0x9FEEFCEA
{
	return 26978304;
}

int func_362() // Position - 0xC6CA Hash - 0x9F572D68 ^0xFD1849EE
{
	return 32505855;
}

int func_363() // Position - 0xC6D7 Hash - 0x9F572D68 ^0x2ABD6E9
{
	return 26983431;
}

int func_364() // Position - 0xC6E4 Hash - 0x9F572D68 ^0x99F2F35F
{
	return 33537239;
}

int func_365() // Position - 0xC6F1 Hash - 0x9F572D68 ^0x65E83B0A
{
	return 32713860;
}

int func_366() // Position - 0xC6FE Hash - 0x3CF9FC4B ^0x73CC3DF
{
	return 16400295;
}

int func_367() // Position - 0xC70A Hash - 0x9F572D68 ^0x6988BC7F
{
	return 33284224;
}

void func_368(Player plParam0) // Position - 0xC717 Hash - 0xF547F6A4 ^0xBF27B96B
{
	if (func_540(32))
		return;

	func_541(32);

	if (func_59(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 1;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 1;

	if (func_76(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 2;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 2;

	if (func_542(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
		Global_1935496.f_7 = Global_1935496.f_7 | 4;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 4;

	if (func_543(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 8;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 8;

	if (func_21(false, true))
		Global_1935496.f_7 = Global_1935496.f_7 | 16;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 16;

	if (!func_544(false))
		Global_1935496.f_7 = Global_1935496.f_7 | 32;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 32;

	if (!func_545(false))
		Global_1935496.f_7 = Global_1935496.f_7 | 512;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 512;

	if (!func_546(false))
		Global_1935496.f_7 = Global_1935496.f_7 | 8192;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 8192;

	if (PED::IS_PED_IN_COVER(Global_35, false, true))
		Global_1935496.f_7 = Global_1935496.f_7 | 16384;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 16384;

	if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 32768;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 32768;

	if (func_56() == false && PED::IS_PED_INCAPACITATED(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 131072;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 131072;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
		Global_1935496.f_7 = Global_1935496.f_7 | 256;
	else if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 256;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 256;

	if (Global_1935630.f_24 || TASK::_IS_PED_DUELLING(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 1024;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 1024;

	if (TASK::IS_PED_RUNNING(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 4096;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 4096;

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || func_542(Global_35, 1369124074))
		Global_1935496.f_7 = Global_1935496.f_7 | 128;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 128;

	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		Global_1935496.f_7 = Global_1935496.f_7 | 33554432;
	
		if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("world_player_dynamic_kneel"))
			Global_1935496.f_7 = Global_1935496.f_7 | 67108864;
		else
			Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 67108864;
	}
	else
	{
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 67108864;
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 33554432;
	}

	if (CAM::IS_CINEMATIC_CAM_RENDERING())
		Global_1935496.f_7 = Global_1935496.f_7 | 65536;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 65536;

	if (CAM::_0x1204EB53A5FBC63D())
		Global_1935496.f_7 = Global_1935496.f_7 | 64;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 64;

	if (TASK::IS_PED_GETTING_UP(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 1048576;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 1048576;

	if (func_547(plParam0, false))
		Global_1935496.f_7 = Global_1935496.f_7 | 524288;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 524288;

	if (func_548(plParam0, false))
		Global_1935496.f_7 = Global_1935496.f_7 | 262144;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 262144;

	if (func_549(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 4194304;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 4194304;

	if (func_550())
		Global_1935496.f_7 = Global_1935496.f_7 | 16777216;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 16777216;

	if (ENTITY::DOES_ENTITY_EXIST(plParam0))
	{
		if (func_551(plParam0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(plParam0))
			{
				case joaat("a_c_horsemule_01"):
				case joaat("a_c_horsemulepainted_01"):
				case joaat("a_c_donkey_01"):
					Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 134217728;
					break;
			
				default:
					Global_1935496.f_7 = Global_1935496.f_7 | 134217728;
					break;
			}
		}
	
		if (PED::_IS_META_PED_USING_COMPONENT(plParam0, 149557334))
			Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 134217728;
	
		if (PED::IS_PED_ON_VEHICLE(plParam0, false))
			Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 134217728;
	}
	else
	{
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 134217728;
	}

	if (func_56() == -1 && func_552(32768) || func_167() || func_18() || func_553() && !func_17() || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 2097152;
	else
		Global_1935496.f_7 = Global_1935496.f_7 | 2097152;

	if (Global_1900073.f_17 && func_122(Global_35, true, 0, false) == joaat("weapon_fishingrod"))
		Global_1935496.f_7 = Global_1935496.f_7 | 8388608;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 8388608;

	return;
}

int func_369(BOOL bParam0) // Position - 0xCE14 Hash - 0x3C563FFA ^0x6068CE2D
{
	Entity entity;

	if (func_554(1) && !Global_1392040.f_2)
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, true);
	
		return 0;
	}

	if (func_554(2) && !Global_1392040.f_2 && MISC::GET_GAME_TIMER() >= Global_36615)
	{
		if (bParam0)
		{
			entity = func_555(Global_35);
		
			if (entity != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(entity))
				{
					func_58("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, true);
					return 0;
				}
			}
		
			func_58("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
		}
	
		return 0;
	}

	if (func_554(4194304))
		return 0;

	return 1;
}

int func_370(BOOL bParam0) // Position - 0xCEBF Hash - 0x19762284 ^0x74CBBD36
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, true);
	
		return 0;
	}

	return 1;
}

int func_371(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0xCEF7 Hash - 0xB3520FCB ^0xE74487EC
{
	Vehicle vehiclePedIsUsing;
	Hash entityModel;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_35))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			return 0;
	
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);
	
		switch (entityModel)
		{
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				if (bParam0)
					func_58("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, true);
			
				return 0;
		
			case joaat("rowboat"):
			case joaat("handcart"):
				if (bParam0)
					func_58("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, true);
			
				return 0;
		}
	
		if (!func_22(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_35))
			if (VEHICLE::GET_DRIVER_OF_VEHICLE(vehiclePedIsUsing) == Global_35 || bParam2)
				return 0;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return 0;
	}

	return 1;
}

int func_372(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0xCFE4 Hash - 0xBA023B92 ^0x16E0B707
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return 1;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return 1;
		}
	}

	return 0;
}

BOOL func_373(Ped pedParam0) // Position - 0xD03D Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

int func_374(Ped pedParam0, BOOL bParam1) // Position - 0xD05A Hash - 0x6BE4D4B ^0xC7F6BBCD
{
	float entitySpeed;
	float num;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return 0;
	
		if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
			return 0;
	}

	entitySpeed = ENTITY::GET_ENTITY_SPEED(pedParam0);
	num = PED::_0xCA95924C893A0C91(pedParam0, entitySpeed);

	if (num <= 1.5f)
		return 1;

	return 0;
}

void func_375(int iParam0, int iParam1) // Position - 0xD0B0 Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_556(true);

	return;
}

void func_376(int iParam0) // Position - 0xD0C9 Hash - 0x23AE6B73 ^0x23AE6B73
{
	int i;
	int num;

	num = 0;

	if (iParam0 == 0 && Global_43891 == true)
		return;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_40.f_11922[i] == 0)
			break;
	
		func_375(Global_40.f_11922[i], 0);
		Global_40.f_11922[i] = 0;
		num = 1;
	}

	if (num == 1)
		func_556(true);

	return;
}

void func_377(int iParam0, int iParam1) // Position - 0xD137 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

int func_378(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, const char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0xD157 Hash - 0x51CE9407 ^0x19439D00
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0xD1CE Hash - 0xA17D549C ^0xBEB24D2A
{
	switch (iParam0)
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

int func_380(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0xD27E Hash - 0xB88D7AA5 ^0x36259347
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

int func_381(Hash hParam0, int iParam1) // Position - 0xD2DF Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_557(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_382(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0xD30E Hash - 0xF20034E5 ^0x962EDF98
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_273() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_558(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_559(), 12);
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
			else if (func_498() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_560(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_498(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_381(iParam6, 20));
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_561(), 13);
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
			else if (func_499() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_562(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_499(), 10);
			break;
	}

	return sParam3;
}

BOOL func_383(int iParam0, Hash hParam1, Hash hParam2) // Position - 0xD5FB Hash - 0xC978E890 ^0x1621426E
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

BOOL func_384(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0xD6A8 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_385(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0xD6D4 Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_386(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0xD723 Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_563(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_15(hash, 1, false) || func_565(func_564(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_563(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_563(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_498() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_566(i)), func_566(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_560() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_566(i)), func_566(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_566(i)), func_566(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_509(iParam3, func_567(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_505(hash) - iParam7 >= func_381(iParam3, func_568(i));
				else
					flag = func_505(hash) >= func_381(iParam3, func_568(i));
			else if (hParam4 == hash)
				flag = func_505(hash) + iParam7 >= func_381(iParam3, func_568(i));
			else
				flag = func_505(hash) >= func_381(iParam3, func_568(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_570(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
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
				flag = func_499() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_572(i)), func_572(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_562() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_572(i)), func_572(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_572(i)), func_572(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_509(iParam3, func_567(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_505(hash) - iParam7 >= 1;
				else
					flag = func_573(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_573(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_574(hash)), func_574(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_387(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0xDA98 Hash - 0x3C34F826 ^0x2A0618FB
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
		if (func_561() >= 13)
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

BOOL func_388(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0xDBA1 Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_50(func_575(0)) && func_576(0) == 1 || func_576(0) == 8 || func_576(0) == 6)
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

int func_389() // Position - 0xDC43 Hash - 0x6AC5469B ^0xEA730EC
{
	Hash weaponHash;
	int weaponHash2;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
		return 1;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash2, true, 1, false);

	if (weaponHash2 == joaat("WEAPON_UNARMED"))
		if (weaponHash == joaat("WEAPON_UNARMED"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_577(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (weaponHash == joaat("weapon_kit_binoculars"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_577(weaponHash) || weaponHash == joaat("WEAPON_LASSO"))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

void func_390(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0xDD39 Hash - 0x7DB16548 ^0xD430BAB
{
	if (!TASK::CAN_START_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3))
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	}
	else
	{
		TASK::START_TASK_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3, 0, -1082130432);
		Global_1935496.f_26 = 1;
	}

	return;
}

void func_391(Hash hParam0, BOOL bParam1) // Position - 0xDD71 Hash - 0x87EB26BF ^0x55136C8F
{
	int outData;
	var outData2;
	int i;
	float health;
	float deadeye;
	float stamina;
	float num;
	float num2;
	float num3;
	float num4;
	BOOL flag;
	var unk28;
	var unk29;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	outData.f_1 = 20;

	if (func_91(hParam0, 1573112293) || func_91(hParam0, 672467738) || func_91(hParam0, -550842268))
		flag = true;

	if (func_43(hParam0) == joaat("consumable"))
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam0, &outData);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	
		for (i = 0; i < outData; i = i + 1)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2))
			{
			}
			else if (-943921969 == outData2.f_1)
			{
				health = func_578(0, outData2.f_2);
				func_579(outData2.f_2, true);
				func_580(0, 7000);
				flag3 = true;
			}
			else if (-1104847406 == outData2.f_1)
			{
				deadeye = func_578(2, outData2.f_2);
				func_581(outData2.f_2);
				func_580(2, 7000);
				flag2 = true;
			}
			else if (381158954 == outData2.f_1)
			{
				stamina = func_578(1, outData2.f_2);
				func_582(outData2.f_2);
				func_580(1, 7000);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == outData2.f_1)
			{
				num = func_583(outData2.f_2, outData2.f_5);
			
				if (func_584(&unk28, &unk29, num))
				{
					func_585(num, true, flag, bParam1);
					func_580(0, 7000);
				}
			
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == outData2.f_1)
			{
				num2 = func_583(outData2.f_2, outData2.f_5);
			
				if (func_584(&unk28, &unk29, num2))
				{
					func_586(num2, true, flag, bParam1);
					func_580(2, 7000);
				}
			
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == outData2.f_1)
			{
				num3 = func_583(outData2.f_2, outData2.f_5);
			
				if (func_584(&unk28, &unk29, num3))
				{
					func_587(num3, true, flag, bParam1);
					func_580(1, 7000);
				}
			}
			else if (joaat("Effect_Health_Core_Gold") == outData2.f_1)
			{
				num4 = func_588(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_589(19, num4);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == outData2.f_1)
			{
				num4 = func_588(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_589(20, num4);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == outData2.f_1)
			{
				num4 = func_588(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_589(18, num4);
			}
			else if (1869697234 == outData2.f_1)
			{
				num4 = func_588(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_589(0, num4);
				flag3 = true;
			}
			else if (1342237631 == outData2.f_1)
			{
				num4 = func_588(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_589(2, num4);
				flag2 = true;
			}
			else if (-1240225157 == outData2.f_1)
			{
				num4 = func_588(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_589(1, num4);
			}
			else if (-816334026 == outData2.f_1)
			{
				func_590(BUILTIN::TO_FLOAT(outData2.f_2), true);
			}
		}
	
		if (flag3)
			if (num > 0f || health > 0f)
				flag4 = true;
	
		if (flag4 || func_91(hParam0, -537818634))
			func_289(func_449(joaat("medicine_items_used")), 1);
	
		if (func_91(hParam0, -1457797660))
			func_289(func_449(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_289(func_449(joaat("DEADEYE_ITEMS_USED")), 1);
	
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(num / 2f), BUILTIN::ROUND(num3 / 2f), BUILTIN::ROUND(num2 / 2f));
	}

	return;
}

BOOL func_392(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0xE0E1 Hash - 0xC5F24F4E ^0x107F90DC
{
	if (!bParam2)
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;

	return PED::_IS_META_PED_USING_COMPONENT(pedParam0, hParam1);
}

int func_393(var uParam0) // Position - 0xE105 Hash - 0x19D4C5AC ^0x19D4C5AC
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

void func_394(int iParam0, BOOL bParam1, int iParam2) // Position - 0xE333 Hash - 0x50964517 ^0x50964517
{
	int num;
	int num2;

	num = func_591(iParam0);
	num2 = func_393(&num);

	if (num2 != iParam0)
		func_592(num2, 4);

	if (!func_593(iParam0))
		return;

	if (func_594(iParam0))
		return;

	func_592(iParam0, 4);
	func_595(iParam0, bParam1);

	if (!func_596(iParam0))
		func_597(iParam0, true, false);

	if (bParam1)
		if (!func_16(0, false, true))
			func_468(true, 6);

	return;
}

void func_395(int iParam0) // Position - 0xE3A9 Hash - 0xF3266748 ^0xA6F9C33D
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

BOOL func_396(int iParam0) // Position - 0xE3EF Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (iParam0 < 0 || iParam0 >= 95)
		return false;

	return true;
}

BOOL func_397(int iParam0, BOOL bParam1) // Position - 0xE40E Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_396(iParam0))
		return false;

	return Global_40.f_7157[iParam0 /*3*/] && bParam1 != false;
}

BOOL func_398(Ped pedParam0) // Position - 0xE433 Hash - 0xD9604B15 ^0x3B7B69F4
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (func_598(Global_35, pedParam0, false, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, pedParam0))
		return true;

	return false;
}

BOOL func_399(int iParam0) // Position - 0xE46B Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_400(int iParam0) // Position - 0xE480 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

BOOL func_401() // Position - 0xE4A0 Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1946054.f_2793)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1946054.f_2791) < 1250)
		return true;

	if (func_599())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
		return true;

	return false;
}

BOOL func_402(Hash hParam0) // Position - 0xE4EA Hash - 0x76026CA6 ^0xF319C9CA
{
	Hash hash;

	hash = func_100(hParam0);

	if (hash == 81053684 || hash == -525676072)
		return 1;

	return 0;
}

void func_403(var uParam0, int iParam1) // Position - 0xE518 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_404(Hash hParam0) // Position - 0xE529 Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_410(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

BOOL func_405(var uParam0) // Position - 0xE553 Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_600(81053684))
		if (func_410(uParam0))
			return true;
	else if (func_601(-525676072, uParam0))
		if (func_410(uParam0))
			return true;

	return false;
}

Hash func_406() // Position - 0xE598 Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_389())
	{
		case 0:
			num = joaat("mask_off_left_hand");
			break;
	
		case 1:
			num = joaat("mask_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_407() // Position - 0xE5EF Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_389())
	{
		case 0:
			num = joaat("bandana_off_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_408() // Position - 0xE646 Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_389())
	{
		case 0:
			num = joaat("mask_on_left_hand");
			break;
	
		case 1:
			num = joaat("mask_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_on_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_409() // Position - 0xE69D Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_389())
	{
		case 0:
			num = joaat("bandana_on_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_on_left_hand_rifle");
			break;
	}

	return num;
}

BOOL func_410(var uParam0) // Position - 0xE6F4 Hash - 0x313F44CF ^0x6235E18A
{
	if (func_601(81053684, uParam0))
		return true;

	if (func_601(-525676072, uParam0))
		return true;

	return false;
}

void func_411(var uParam0) // Position - 0xE721 Hash - 0x7C3D914C ^0xB1998A7B
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

void func_412(BOOL bParam0) // Position - 0xE77F Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

void func_413(int iParam0, int iParam1, int iParam2) // Position - 0xE797 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_231(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_231(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_231(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

int func_414(int iParam0, BOOL bParam1) // Position - 0xE7D6 Hash - 0x6C404ADF ^0x7D516F33
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
				return func_602();
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

int func_415(int iParam0, BOOL bParam1) // Position - 0xE865 Hash - 0x14DDA26B ^0xFFF4A8D0
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

BOOL func_416(Hash hParam0, var uParam1) // Position - 0xE908 Hash - 0x4A27386E ^0xBC93C855
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (hParam0 == Global_1946054.f_2657[*uParam1])
			return 1;
	
		*uParam1 = *uParam1 + 1;
	}

	return 0;
}

BOOL func_417(Hash hParam0) // Position - 0xE948 Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_56() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_418(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xE971 Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_416(hash, &unk))
		return 0;

	if (bParam3 && !func_603(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_100(hParam0) != -999503751)
		func_604(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

int func_419(Hash hParam0, BOOL bParam1) // Position - 0xEA19 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_160(hParam0, false, false) };
	guid = { func_162(hParam0, unk, unk.f_4, false) };

	if (func_237(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_140(false), &guid);
	return 1;
}

int func_420() // Position - 0xEA65 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

void func_421() // Position - 0xEA73 Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_56() == -1)
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

BOOL func_422(Hash hParam0) // Position - 0xEBA9 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_606(func_605(hParam0));
}

void func_423(BOOL bParam0, BOOL bParam1) // Position - 0xEBBB Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_607(0);

	if (bParam0)
	{
		func_216(8);
		func_216(512);
	}
	else
	{
		func_216(8);
		func_216(16);
	}

	return;
}

void func_424(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xEBEE Hash - 0x50C09208 ^0x50C09208
{
	func_608(hParam0, false, false);
	func_227(hParam1, true, bParam2, false);
	return;
}

int func_425(int iParam0, int iParam1) // Position - 0xEC08 Hash - 0xE1D12727 ^0xA46110B3
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

void func_426() // Position - 0xEE57 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

int func_427(Hash hParam0) // Position - 0xEE9E Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_91(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_91(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_91(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_91(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_91(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_91(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

void func_428(int iParam0) // Position - 0xEFEF Hash - 0x65A082AE ^0x65A082AE
{
	func_413(iParam0, 8, 6);
	return;
}

void func_429(int iParam0) // Position - 0xF000 Hash - 0x20214C72 ^0x20214C72
{
	func_609(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_430(int iParam0, int iParam1) // Position - 0xF015 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_610(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_431(Hash hParam0, int iParam1, int iParam2) // Position - 0xF02C Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_432(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xF03F Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_100(uParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_611(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_430(num2, num3);
	}

	if (func_523(-1586649372) && func_611(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_430(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_612(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_612(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_430(num2, num3);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_430(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_430(num2, num3);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_613(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_91(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_430(num2, num3);
			}
			break;
	
		case -839140560:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 37;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_430(num2, num3);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_430(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_100(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_430(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_613(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_100(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_430(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_612(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_612(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_430(num2, num3);
			}
			break;
	
		case 698653232:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 12;
			
				if (uParam0->f_1[num2 /*3*/] == joaat("clothing_hl_player_necktie_004_3"))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_430(num2, num3);
				}
			}
		
			func_612(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_91(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_430(num2, num3);
			}
			break;
	
		case 1868067663:
			func_612(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_430(num2, num3);
			}
			break;
	}

	switch (func_100(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_100(uParam0->f_1[num2 /*3*/]) || func_91(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_430(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_100(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_430(num2, num3);
			}
			break;
	}

	return;
}

Hash func_433(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0xF683 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_614(0);

	if (hParam2 != 0 && func_615(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_616(hParam0, func_425(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_434(var uParam0, BOOL bParam1, int iParam2) // Position - 0xF6C9 Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_56() != -1;
	flag2 = func_614(0);

	if (func_223(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_425(num, 1);
		
			if (func_617(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_617(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_618(uParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_619(uParam0);

	if (num3 > 0)
	{
		if (!func_223(524288))
		{
			func_216(524288);
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
				num5 = func_425(num, 1);
			
				if (func_617(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_617(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_618(uParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_430(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_412(524288);

	return;
}

void func_435(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF8E6 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_620(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_56() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_621(2, Global_26796.f_776) || Global_1946054.f_1497 != func_622(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_622(Global_40.f_7729);
				Global_1946054.f_1378 = func_622(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_623(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_423(false, true);

	return;
}

BOOL func_436(int iParam0, int iParam1) // Position - 0xFA05 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_437(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xFA14 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_399(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_399(20))
				return;
		}
	}

	func_400(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_216(8);
	return;
}

BOOL func_438() // Position - 0xFB18 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1914319.f_17375;
}

BOOL func_439() // Position - 0xFB27 Hash - 0xF0382EDE ^0x243CDD32
{
	int ransackScenarioPointPedIsUsing;

	if (func_624())
	{
		ransackScenarioPointPedIsUsing = TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		return ransackScenarioPointPedIsUsing != 0;
	}

	return false;
}

BOOL func_440() // Position - 0xFB48 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1898068;
}

var func_441(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0xFB54 Hash - 0x63C3F71D ^0x3019B977
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

	if (func_625() != 0)
	{
		bitIndex = PLAYER::PLAYER_ID();
	
		if (bitIndex >= 0 && bitIndex < 32)
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, bitIndex);
	
		return value;
	}

	i = 0;
	flag = false;
	flag2 = false;
	player = Global_1224589.f_5;
	any = Global_1224589.f_9;
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_626());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_626());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_626());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_627(PLAYER::GET_PLAYER_TEAM(player));

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
		if (Global_1224589.f_16[i])
		{
			player2 = Global_1224589.f_115[i];
			flag = false;
			flag2 = false;
		
			if (flag4 & true != 0 && player2 == player)
				flag = true;
		
			if (func_628(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1224589.f_49[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_629(i) != 1)
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
					if (!func_630(player2))
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

int func_442(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0xFEE3 Hash - 0xDAC4446E ^0x51EF643B
{
	if (!func_631(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*18*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

BOOL func_443() // Position - 0xFF13 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_444(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFF20 Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_445(BOOL bParam0, var uParam1, var uParam2) // Position - 0xFF8A Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_446(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0xFFA1 Hash - 0x92B705D3 ^0xB783F681
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
				goto 0xE4;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE4;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE4;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE4;
			
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

const char* func_447(const char* sParam0, int iParam1) // Position - 0x10095 Hash - 0x9E99F03 ^0xBDFC8BDD
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_448(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x100AF Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_632(sParam0, sParam1, hParam2);
	return num2;
}

struct<2> func_449(int iParam0) // Position - 0x10112 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_450(Hash hParam0, int iParam1) // Position - 0x10122 Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_56() == -1)
	{
		if (func_174(43))
		{
			if (func_91(hParam0, 412399755))
			{
				func_502(joaat("exotic_stage_01"));
			
				if (func_503() == 0)
				{
					func_468(false, 10);
					num = func_633(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_505(hParam0) < func_506(hParam0))
							func_178(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_174(44))
		{
			if (func_91(hParam0, 709057512))
			{
				func_502(joaat("exotic_stage_02"));
			
				if (func_503() == 1)
				{
					func_468(false, 10);
					num = func_633(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_505(hParam0) < func_506(hParam0))
							func_178(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_174(45))
		{
			if (func_91(hParam0, -1478961327))
			{
				func_502(joaat("exotic_stage_03"));
			
				if (func_503() == 2)
				{
					func_468(false, 10);
					num = func_633(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_505(hParam0) < func_506(hParam0))
							func_178(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_174(46))
		{
			if (func_91(hParam0, -1238404098))
			{
				func_502(joaat("exotic_stage_04"));
			
				if (func_503() == 3)
				{
					func_468(false, 10);
					num = func_633(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_505(hParam0) < func_506(hParam0))
							func_178(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_174(47))
		{
			if (func_91(hParam0, 1160548794))
			{
				func_502(joaat("exotic_stage_05"));
			
				if (func_503() == 4)
				{
					func_468(false, 10);
					num = func_633(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_505(hParam0) < func_506(hParam0))
							func_178(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

BOOL func_451(int iParam0, int iParam1) // Position - 0x10406 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_56() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_452(int iParam0) // Position - 0x10439 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_56() != -1)
		if (func_454(iParam0, 4))
			return false;
	else if (func_454(iParam0, 2))
		return false;

	return true;
}

BOOL func_453(int iParam0) // Position - 0x10469 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_454(iParam0, 65536) && !func_454(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_454(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_454(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_454(int iParam0, int iParam1) // Position - 0x10515 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_455(int iParam0) // Position - 0x1052E Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_456() // Position - 0x10541 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_457(Hash hParam0) // Position - 0x10550 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_43(hParam0) == joaat("WEAPON");
}

BOOL func_458(Hash hParam0) // Position - 0x10564 Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_56() != -1)
		return false;

	if (func_275(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_464(hParam0, &unk, 1, false, false);

	return func_15(hParam0, 1, false);
}

void func_459(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x105A8 Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_43(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_279(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_475(weaponHash))
	{
		if (func_56() == -1)
			func_280(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_45(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_253(hParam0, iParam1, false, false, false);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_460(Hash hParam0, var uParam1) // Position - 0x1064F Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_91(hParam0, 58855631))
	{
		func_634(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

int func_461(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1067D Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_42(hParam0, 0))
		return 0;

	if (!func_256(false))
		bParam2 = true;

	if (bParam2 || !func_635(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_140(bParam3), hParam0);
}

int func_462(Hash hParam0, BOOL bParam1) // Position - 0x106CB Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_284(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_140(bParam1), hParam0, false);
}

BOOL func_463() // Position - 0x106F5 Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_56() != -1)
		return false;

	if (!func_173())
		return false;

	if (!func_189(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_189(Global_1835011[2 /*74*/].f_1, true) && func_189(Global_1347702[120 /*49*/].f_15, true) && !func_189(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_189(Global_1835011[37 /*74*/].f_1, true) && !func_189(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_189(Global_1835011[57 /*74*/].f_1, true) && !func_189(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_189(Global_1835011[26 /*74*/].f_1, true) && !func_189(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_189(Global_1835011[62 /*74*/].f_1, true) && func_189(Global_1835011[63 /*74*/].f_1, true) && !func_189(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_189(Global_1835011[75 /*74*/].f_1, true) && !func_189(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_189(Global_1835011[76 /*74*/].f_1, true) && !func_189(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_189(Global_1835011[40 /*74*/].f_1, true) && func_189(Global_1835011[41 /*74*/].f_1, true) && !func_189(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_189(Global_1835011[62 /*74*/].f_1, true) && func_189(Global_1835011[63 /*74*/].f_1, true) && !func_189(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_189(Global_1835011[65 /*74*/].f_1, true) && func_189(Global_1835011[66 /*74*/].f_1, true) && !func_189(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_464(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1093B Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_636(&hParam0);

	if (!func_42(hParam0, 0))
		return 0;

	if (!func_256(false))
		bParam3 = true;

	if (func_457(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_337(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_348(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return 0;
			else if (func_349(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return 0;
		
			if (func_347(hParam0, true))
				if (!func_348(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return 0;
				else if (func_349(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return 0;
		}
		else if (!func_637(hParam0, &unk27, false))
		{
			return 0;
		}
	
		return 1;
	}

	num = func_461(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	if (bParam3 || !func_635(hParam0))
		inventoryItemCountWithItemid = func_237(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_140(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return 1;

	return 0;
}

int func_465() // Position - 0x10A80 Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_466(Hash hParam0) // Position - 0x10A92 Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_467(int iParam0) // Position - 0x10AA0 Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_56() != -1)
		return;

	num = func_638(iParam0);
	value = func_639(iParam0);

	if (Global_1347477.f_117 || !func_276(31) || !func_640(num))
		return;

	if (value <= 0f)
		return;

	if (func_641(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_642(num, Global_40.f_11095.f_11[num] + value, false);
	func_448(MISC::VAR_STRING(6, func_643(iParam0), value), "itemtype_textures", func_644(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_468(BOOL bParam0, int iParam1) // Position - 0x10B9F Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_645(&Global_0, 8);

	if (!func_173() || func_56() != -1)
		return;

	func_645(&Global_0, 1);
	return;
}

Hash func_469(int iParam0) // Position - 0x10BE5 Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_470(int iParam0) // Position - 0x10C9E Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_471(int iParam0) // Position - 0x10CB1 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_472(int iParam0) // Position - 0x10CDB Hash - 0x48EBE6BD ^0x358C7E90
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

void func_473(int iParam0) // Position - 0x10D15 Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_173() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_380("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_128(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_173() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_380("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_128(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_173() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_380("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_128(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_173() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_380("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_128(589, false);
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
			func_646(true);
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
			func_647(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_647(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_647(3);
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
		
			if (func_56() == -1)
			{
				if (!func_523(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_654(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_480())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_15(hash, 1, false))
						func_325(hash, 1, 752097756);
				
					func_110(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
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
			func_648(true);
			break;
	
		case 34:
			func_649(true);
			break;
	
		case 35:
			func_650(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_651(false);
			break;
	
		case 38:
			func_652(false);
			break;
	
		case 39:
			func_653(false);
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
			func_655();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_56() == -1)
				if (!func_15(1013902307, 1, false))
					func_325(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_56() == -1)
				if (!func_15(786809402, 1, false))
					func_325(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_56() == -1)
			{
				if (!func_15(1013902307, 1, false))
					func_325(1013902307, 1, 752097756);
			
				if (!func_15(142640135, 1, false))
					func_325(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_56() == -1)
			{
				if (!func_15(786809402, 1, false))
					func_325(786809402, 1, 752097756);
			
				if (!func_15(-518019409, 1, false))
					func_325(-518019409, 1, 752097756);
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

BOOL func_474(Hash hParam0) // Position - 0x1133D Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_475(Hash hParam0) // Position - 0x11365 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

Hash func_476(int iParam0, int iParam1) // Position - 0x1138D Hash - 0xE1D12727 ^0x71D656A6
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

void func_477(Hash hParam0, int iParam1) // Position - 0x134D7 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_656(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_478(Hash hParam0) // Position - 0x1351F Hash - 0x708BD33E ^0xEEEB1B32
{
	char* propertyName;
	char* propertyName2;
	int value;

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
	value = func_657();
	func_658(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_479(Hash hParam0) // Position - 0x135EE Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_577(hParam0))
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

BOOL func_480() // Position - 0x1366A Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_56() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_481(Hash hParam0) // Position - 0x1368F Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_482(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x136A1 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_483(Hash hParam0) // Position - 0x136C7 Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_276(50))
			{
				if (!func_276(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_276(51))
			{
				if (!func_276(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_484() // Position - 0x13733 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_485(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x13744 Hash - 0x4FC4FA99 ^0x540DBE26
{
	var unk;
	BOOL isMP;
	BOOL metaPedType;
	Hash hash;
	Hash hash2;
	int num;
	int num2;
	BOOL flag;
	Hash componentHash;
	int num3;
	int num4;
	int numComponentsInPed;

	if (!func_42(hParam1, 0))
		return false;

	if (func_43(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_56() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_100(hParam1) == -999503751)
		return true;

	hash2 = func_659(hParam1);

	if (hash2 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_91(hParam1, 866047851))
	{
		num = func_231(hash2, 1);
	
		if (func_427(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num /*3*/] != componentHash)
		{
			*uParam2 = -265166256;
			return false;
		}
	
		flag = true;
	}

	switch (hash2)
	{
		case -1944638739:
			num = 35;
		
			if (Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/] && func_91(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_601(1868067663, &unk))
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
			num4 = func_618(componentHash, hash2, metaPedType, isMP);
			num3 = func_618(Global_1946054.f_1497.f_1[num /*3*/], hash2, metaPedType, isMP);
		
			if ((numComponentsInPed + num4) - num3 > 31)
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
		
			num = 10;
			hash = func_100(Global_1946054.f_1497.f_1[num /*3*/]);
		
			if (flag && hash == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
	
		case 1900541263:
			num = 36;
		
			if (Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
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
			hash = func_100(hParam1);
			num = 36;
			num2 = 35;
		
			if (hParam1 != Global_1946054.f_57[num2 /*11*/] && func_91(Global_1946054.f_1497.f_1[num /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num2 /*11*/] && func_613(Global_1946054.f_1497.f_1[num /*3*/]))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			break;
	}

	*uParam2 = 0;
	return true;
}

void func_486() // Position - 0x13A54 Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_487() // Position - 0x13A75 Hash - 0xDC6E219D ^0xBD2A18DD
{
	float num;
	var unk;

	num = Global_40.f_11095.f_44;
	unk = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num - Global_40.f_11095.f_69);
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - unk);
	return;
}

int func_488() // Position - 0x13ACA Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_15(func_660(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_489(Hash hParam0) // Position - 0x13AFC Hash - 0xBD10D1A2 ^0xAD2FE305
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

BOOL func_490(int iParam0, Hash hParam1) // Position - 0x13B92 Hash - 0x33707815 ^0xEA5B7C5C
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

	if (func_15(hash, 1, false) && func_15(hash2, 1, false))
		return true;

	return false;
}

Hash func_491(Hash hParam0) // Position - 0x13CF3 Hash - 0xB8EC44B7 ^0x8CFD1640
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

BOOL func_492(Hash hParam0, int iParam1) // Position - 0x13DBA Hash - 0xB78A2FC ^0x6E3EB1C7
{
	int num;

	num = func_661(hParam0);

	if (num != -15)
	{
		func_658(&num, 0, iParam1, 0, 0, 0, 0, false);
		return !func_662(num, true);
	}

	return false;
}

int func_493(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x13DEC Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_15(joaat("provision_trinket_elk_antler"), 1, false))
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
		
			if (func_42(hash, 0) && func_91(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_494(int iParam0, const char* sParam1, int iParam2) // Position - 0x13EB1 Hash - 0x4DF85B80 ^0x9C36BA55
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_448(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_495(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x13EF2 Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_663())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_448(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_664(num);
			func_665(num, 0, 0);
		}
	
		func_448(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_289(func_449(joaat("CAREER_CASH")), value);
	}

	return;
}

int func_496(int iParam0) // Position - 0x13FCE Hash - 0x96BD3E10 ^0xB6314385
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

	num2 = func_505(hash);
	num3 = func_505(hash2);
	num4 = func_505(hash3);
	num6 = func_506(hash);
	num7 = func_506(hash2);
	num8 = func_506(hash3);

	if (iParam0 != 2)
	{
		num5 = func_505(hash4);
		num9 = func_506(hash4);
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

void func_497(int iParam0) // Position - 0x14145 Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_498() // Position - 0x14160 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_666(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_499() // Position - 0x14199 Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_500(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x141AB Hash - 0x9548C303 ^0x2CDF6383
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
			if (func_573(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_573(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_573(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_573(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_573(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_573(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_573(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_573(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_573(hash) && func_573(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_573(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_573(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_573(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_573(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_573(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_573(hash) && func_573(hash2) && func_573(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_573(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_573(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_573(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_573(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_573(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_573(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_573(hash) && func_573(hash2) && func_573(hash3) && func_573(hash4))
			return true;
	}

	return false;
}

void func_501(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x14670 Hash - 0x5A64C5C8 ^0x6D52F178
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
			func_669();
			func_667(iParam0);
			break;
	
		case -1925798111:
			func_667(-1925798111);
			func_668(-919512195);
			func_668(420709909);
			func_668(1703426636);
			break;
	
		case -1838352012:
			func_668(-1674179981);
			func_668(-1835851517);
			func_667(-1838352012);
			break;
	
		case -1835851517:
			func_668(-1674179981);
			func_668(-1838352012);
			func_667(-1835851517);
			break;
	
		case -1738165526:
			func_667(-1738165526);
			func_668(0);
			func_668(473295046);
			break;
	
		case -1717960576:
			func_668(210001842);
			func_667(-1717960576);
			break;
	
		case -1674179981:
			func_668(-1835851517);
			func_668(-1838352012);
			func_667(-1674179981);
			break;
	
		case -1612662716:
			func_668(1822001510);
			func_667(-1612662716);
			break;
	
		case -1414537028:
			func_668(38162571);
			func_668(1350391819);
			func_668(54073871);
			func_667(-1414537028);
			break;
	
		case -1311865656:
			func_667(-1311865656);
			func_668(1509509592);
			func_668(-959357075);
			func_668(405586984);
			break;
	
		case -1271608261:
			func_668(-150493654);
			func_668(1846061697);
			func_668(-1145519186);
			func_667(-1271608261);
			break;
	
		case -1223121209:
			func_667(-1223121209);
			func_668(630808005);
			break;
	
		case -1145519186:
			func_668(-150493654);
			func_668(-1271608261);
			func_668(1846061697);
			func_667(-1145519186);
			break;
	
		case -1124061431:
			func_668(198200492);
			func_667(-1124061431);
			func_668(52706132);
			func_668(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_667(-1080627546);
			else
				func_668(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_668(-538889627);
			func_668(-538880323);
			func_668(-1056767524);
			func_667(iParam0);
			break;
	
		case -959357075:
			func_667(-959357075);
			func_668(1509509592);
			func_668(405586984);
			func_668(-1311865656);
			break;
	
		case -919512195:
			func_667(-919512195);
			func_668(-1925798111);
			func_668(420709909);
			func_668(1703426636);
			break;
	
		case -664252410:
			func_668(2019386373);
			func_668(2109952320);
			func_667(-664252410);
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
			func_670();
			func_667(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_667(-524145696);
			else
				func_668(-524145696);
		
			func_668(1626481264);
			func_668(282809459);
			break;
	
		case -502324015:
			func_668(1497516462);
			func_668(2016141805);
			func_668(1010885152);
			func_667(-502324015);
			break;
	
		case -434590080:
			func_668(1376646519);
			func_668(931649776);
			func_668(1743048395);
			func_668(449774763);
			func_667(-434590080);
			break;
	
		case -404698347:
			func_668(1306158345);
			func_668(1952610440);
			func_668(-223469678);
			func_668(1517904467);
			func_667(-404698347);
			break;
	
		case -259123672:
			func_668(198200492);
			func_668(-1124061431);
			func_668(52706132);
			func_667(-259123672);
			break;
	
		case -223469678:
			func_668(1306158345);
			func_668(1952610440);
			func_668(-404698347);
			func_668(1517904467);
			func_667(-223469678);
			break;
	
		case -150493654:
			func_668(-1271608261);
			func_668(1846061697);
			func_668(-1145519186);
			func_667(-150493654);
			break;
	
		case 0:
			func_667(0);
			func_668(473295046);
			func_668(-1738165526);
			break;
	
		case 38162571:
			func_668(-1414537028);
			func_668(1350391819);
			func_668(54073871);
			func_667(38162571);
			break;
	
		case 52706132:
			func_668(198200492);
			func_668(-1124061431);
			func_667(52706132);
			func_668(-259123672);
			break;
	
		case 54073871:
			func_668(-1414537028);
			func_668(38162571);
			func_668(1350391819);
			func_667(54073871);
			break;
	
		case 198200492:
			func_667(198200492);
			func_668(-1124061431);
			func_668(52706132);
			func_668(-259123672);
			break;
	
		case 210001842:
			func_668(-1717960576);
			func_667(210001842);
			break;
	
		case 280705402:
			func_668(1766284049);
			func_668(1926308480);
			func_667(280705402);
			break;
	
		case 282809459:
			func_667(282809459);
			func_668(1626481264);
			func_668(-524145696);
			break;
	
		case 405586984:
			func_667(405586984);
			func_668(1509509592);
			func_668(-959357075);
			func_668(-1311865656);
			break;
	
		case 420709909:
			func_667(420709909);
			func_668(-919512195);
			func_668(-1925798111);
			func_668(1703426636);
			break;
	
		case 439465264:
			if (func_671(1609506757))
				if (bParam1)
					func_667(439465264);
				else
					func_668(439465264);
			break;
	
		case 449774763:
			func_668(1376646519);
			func_668(931649776);
			func_668(-434590080);
			func_668(1743048395);
			func_667(449774763);
			break;
	
		case 473295046:
			func_667(473295046);
			func_668(0);
			func_668(-1738165526);
			break;
	
		case 630808005:
			func_667(630808005);
			func_668(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_667(885203519);
			else
				func_668(885203519);
			break;
	
		case 931649776:
			func_668(1376646519);
			func_668(-434590080);
			func_668(1743048395);
			func_668(449774763);
			func_667(931649776);
			break;
	
		case 932909855:
			func_667(932909855);
			func_668(2051822093);
			break;
	
		case 1010885152:
			func_668(1497516462);
			func_668(2016141805);
			func_667(1010885152);
			func_668(-502324015);
			break;
	
		case 1306158345:
			func_668(1952610440);
			func_668(-223469678);
			func_668(-404698347);
			func_668(1517904467);
			func_667(1306158345);
			break;
	
		case 1350391819:
			func_668(-1414537028);
			func_668(38162571);
			func_668(54073871);
			func_667(1350391819);
			break;
	
		case 1376646519:
			func_668(931649776);
			func_668(-434590080);
			func_668(1743048395);
			func_668(449774763);
			func_667(1376646519);
			break;
	
		case 1453909576:
			func_667(1453909576);
			func_668(1643531967);
			break;
	
		case 1497516462:
			func_667(1497516462);
			func_668(2016141805);
			func_668(1010885152);
			func_668(-502324015);
			break;
	
		case 1509509592:
			func_667(1509509592);
			func_668(405586984);
			func_668(-959357075);
			func_668(-1311865656);
			break;
	
		case 1517904467:
			func_668(1306158345);
			func_668(1952610440);
			func_668(-223469678);
			func_668(-404698347);
			func_667(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_668(439465264);
				func_667(1609506757);
			}
			else
			{
				func_668(1609506757);
				func_668(439465264);
			}
			break;
	
		case 1626481264:
			func_667(1626481264);
			func_668(-524145696);
			func_668(282809459);
			break;
	
		case 1643531967:
			func_667(1643531967);
			func_668(1453909576);
			break;
	
		case 1703426636:
			func_667(1703426636);
			func_668(-919512195);
			func_668(-1925798111);
			func_668(420709909);
			break;
	
		case 1743048395:
			func_668(1376646519);
			func_668(931649776);
			func_668(-434590080);
			func_668(449774763);
			func_667(1743048395);
			break;
	
		case 1766284049:
			func_668(280705402);
			func_668(1926308480);
			func_667(1766284049);
			break;
	
		case 1822001510:
			func_668(-1612662716);
			func_667(1822001510);
			break;
	
		case 1846061697:
			func_668(-150493654);
			func_668(-1271608261);
			func_668(-1145519186);
			func_667(1846061697);
			break;
	
		case 1926308480:
			func_668(1766284049);
			func_668(280705402);
			func_667(1926308480);
			break;
	
		case 1952610440:
			func_668(1306158345);
			func_668(-223469678);
			func_668(-404698347);
			func_668(1517904467);
			func_667(1952610440);
			break;
	
		case 2016141805:
			func_668(1497516462);
			func_667(2016141805);
			func_668(1010885152);
			func_668(-502324015);
			break;
	
		case 2019386373:
			func_668(-664252410);
			func_668(2109952320);
			func_667(2019386373);
			break;
	
		case 2051822093:
			func_667(2051822093);
			func_668(932909855);
			break;
	
		case 2109952320:
			func_668(2019386373);
			func_668(-664252410);
			func_667(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_671(iParam0))
					func_667(iParam0);
			else if (func_671(iParam0))
				func_668(iParam0);
			break;
	}

	return;
}

void func_502(Hash hParam0) // Position - 0x15193 Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_672(hParam0))
		func_674(func_673(hParam0));

	return;
}

int func_503() // Position - 0x151AF Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_672(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_504(Hash hParam0, int iParam1, int iParam2) // Position - 0x151E7 Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_505(hash);
	num3 = func_505(hash2);
	num4 = func_505(hash3);
	num6 = func_506(hash);
	num7 = func_506(hash2);
	num8 = func_506(hash3);

	if (iParam2 != 2)
	{
		num5 = func_505(hash4);
		num9 = func_506(hash4);
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

int func_505(Hash hParam0) // Position - 0x153FA Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_15(hParam0, 1, false))
		num = func_45(hParam0, false, false);

	return num;
}

int func_506(Hash hParam0) // Position - 0x15419 Hash - 0xEED5739D ^0xEED5739D
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

int func_507(Hash hParam0) // Position - 0x154F2 Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_508(Hash hParam0, int iParam1) // Position - 0x15500 Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_509(Hash hParam0, int iParam1) // Position - 0x15510 Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_557(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_510(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x1553F Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_509(hParam1, 5) || hParam0 == func_509(hParam1, 6) || hParam0 == func_509(hParam1, 7) || hParam0 == func_509(hParam1, 8) || hParam0 == func_509(hParam1, 9))
	{
		func_500(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_178(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_177(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_511(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x155C1 Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_509(hParam1, 5) || hParam0 == func_509(hParam1, 6) || hParam0 == func_509(hParam1, 7) || hParam0 == func_509(hParam1, 8) || hParam0 == func_509(hParam1, 9))
	{
		if (func_500(hParam1, hParam0, &num, false, 0, false))
		{
			func_178(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_177(51, 0, 0, num, func_381(hParam1, 20), 1, 0);
		}
		else
		{
			func_178(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_177(51, 0, 0, num, func_381(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_512() // Position - 0x15682 Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_151(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

void func_513(Hash hParam0) // Position - 0x156AB Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_514(Hash hParam0) // Position - 0x156BA Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_675(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_515(Hash hParam0) // Position - 0x156D3 Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

float func_516() // Position - 0x156E2 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_676())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_677(2);

	if (Global_1347477.f_119)
		return func_677(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_678();
	num3 = func_679();
	num4 = func_680();
	num5 = func_681();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_682());
	num8 = func_677(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_683(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_684(3, num9, num9 > 100f);
	return func_685(num8, -100f, 100f);
}

float func_517() // Position - 0x1580B Hash - 0x951B1CCC ^0x7B312694
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

	if (func_676())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_677(1);

	if (Global_1347477.f_119)
		return func_677(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_678();
	num3 = func_679();
	num4 = func_680();
	num5 = func_681();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_682());
	num8 = func_677(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_683(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_684(2, num9, num9 > 100f);
	return func_685(num8, -100f, 100f);
}

float func_518() // Position - 0x15934 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_676())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_677(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_686())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_687())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_677(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_678();
	num3 = func_679();
	num4 = func_680();
	num5 = func_681();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_682());
	num8 = func_677(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_683(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_684(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_677(0);

	return func_685(num8, -100f, 100f);
}

BOOL func_519(Hash hParam0) // Position - 0x15ADB Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_520(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x15AEB Hash - 0x86E39CDA ^0xCF922D1
{
	!func_42(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_464(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_256(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_140(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

void func_521(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x15B4D Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_396(iParam0))
		return;

	if (func_212(iParam0))
		return;

	if (!func_688(iParam0))
		func_689(iParam0, true, false);

	hash = func_622(iParam0);

	if (hash != 0 && !(iParam0 >= 0 && iParam0 <= 5))
		if (func_397(iParam0, 512))
			func_107(30, hash, 0, 0, false);

	if (!func_690() && !bParam1 && !func_16(0, false, true))
		func_58(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_691(iParam0, 6);

	if (bParam2)
		if (!func_16(0, false, true))
			func_468(true, 4);

	return;
}

BOOL func_522(Hash hParam0, var uParam1) // Position - 0x15C13 Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_100(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_523(int iParam0) // Position - 0x15C57 Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_231(iParam0, 1) /*3*/] != Global_1946054.f_57[func_231(iParam0, 1) /*11*/];
}

void func_524(int iParam0, Hash hParam1) // Position - 0x15C8F Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_91(hParam1, 130796156))
	{
		func_692(hParam1, false);
	}
	else if (func_91(hParam1, 930141731))
	{
		func_692(hParam1, true);
		func_693(iParam0);
	}

	return;
}

void func_525(var uParam0, int iParam1) // Position - 0x15CCA Hash - 0x84556899 ^0xA18AFCFA
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

int func_526(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x15DAB Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_694(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_695(anParam2, hParam0, num);
	return 1;
}

var func_527(int iParam0) // Position - 0x15E14 Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x15E26 Hash - 0xA17D549C ^0x361CF663
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

Hash func_529(Hash hParam0) // Position - 0x15EFD Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_696(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

BOOL func_530(var uParam0) // Position - 0x15F27 Hash - 0x39705408 ^0x39705408
{
	return func_130(*uParam0, 2);
}

BOOL func_531(int iParam0) // Position - 0x15F37 Hash - 0xB32B029D ^0xB32B029D
{
	if (iParam0 <= -1 || iParam0 >= 13)
		return false;

	return true;
}

int func_532(int iParam0) // Position - 0x15F56 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_697(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_533(int iParam0) // Position - 0x15F97 Hash - 0x8EF26C67 ^0x9855652A
{
	int num;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
			return 0;
	
		num = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
			return 0;
	
		num = func_532(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

Vector3 func_534(int iParam0) // Position - 0x16002 Hash - 0xACD6F870 ^0xDE230469
{
	if (func_698(iParam0))
		return func_699(iParam0);

	return Global_1835011[iParam0 /*74*/].f_18;
}

BOOL func_535(Hash hParam0, var uParam1) // Position - 0x16028 Hash - 0xF607B79C ^0x9512C6CD
{
	if (hParam0 == 90)
	{
		if (func_700(Global_1347702[hParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[hParam0 /*49*/].f_18 = 80f;
			*uParam1 = { 1015.1127f, 159.72952f, 103.01753f };
			return true;
		}
	}
	else if (hParam0 == 96)
	{
		if (Global_1347702[hParam0 /*49*/].f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.7104f, -1338.3771f, 82.0174f };
			return true;
		}
	}

	return false;
}

struct<4> func_536() // Position - 0x160BE Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_537(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x160CA Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_140(false);
	*panParam1 = { func_162(hParam0, func_337(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

int func_538() // Position - 0x1610F Hash - 0x3CF9FC4B ^0x3543A441
{
	return 16596983;
}

int func_539() // Position - 0x1611B Hash - 0x3CF9FC4B ^0x5CAD57E5
{
	return 16662519;
}

BOOL func_540(BOOL bParam0) // Position - 0x16127 Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_22 && bParam0 != false;
}

void func_541(BOOL bParam0) // Position - 0x16137 Hash - 0x88AD5D ^0x88AD5D
{
	Global_22 = Global_22 || bParam0;
	return;
}

BOOL func_542(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x16148 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_543(Ped pedParam0) // Position - 0x16171 Hash - 0xF2F988FE ^0xA63CD631
{
	Hash scenarioPointTypePedIsUsing;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!PED::IS_PED_USING_ANY_SCENARIO(pedParam0))
		return false;

	scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(pedParam0);

	if (scenarioPointTypePedIsUsing == 0)
		return false;

	if (scenarioPointTypePedIsUsing == joaat("world_player_sleep_ground") || scenarioPointTypePedIsUsing == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_arm") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_pillow") || scenarioPointTypePedIsUsing == joaat("world_animal_dog_sleeping") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow") || scenarioPointTypePedIsUsing == joaat("prop_player_prpty_save_game") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_left") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_right"))
		return true;

	if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_a_frame") || scenarioPointTypePedIsUsing == joaat("world_player_sleep_bedroll"))
	{
		scenarioPointTypePedIsUsing = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(pedParam0);
	
		if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_male_a"))
			return true;
	
		return false;
	}

	return false;
}

BOOL func_544(BOOL bParam0) // Position - 0x16259 Hash - 0xC93D526E ^0x6670320D
{
	if (PED::IS_PED_HOGTIED(Global_35))
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_HOGTYING(Global_35))
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_LASSOED(Global_35))
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_BEING_DRAGGED(Global_35))
		return false;

	if (!(PED::_GET_LASSO_TARGET(Global_35) == 0))
		return false;

	if (PED::_IS_PED_DRAGGING(Global_35))
		return false;

	if (PED::GET_PED_IS_BEING_GRAPPLED(Global_35))
		return false;

	if (PED::GET_PED_IS_GRAPPLING(Global_35) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 4096, 0))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
		return false;

	return true;
}

BOOL func_545(BOOL bParam0) // Position - 0x16338 Hash - 0xC93D526E ^0x7E17A12A
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_SWIMMING(Global_35))
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_CLIMBING(Global_35))
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_543(Global_35))
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_FALLING(Global_35))
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_FALLING_OVER(Global_35))
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_VAULTING(Global_35))
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_546(BOOL bParam0) // Position - 0x1647C Hash - 0x135152DF ^0x137B78D3
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		if (bParam0)
			func_58("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_547(Player plParam0, BOOL bParam1) // Position - 0x164A8 Hash - 0xFD261A1 ^0xC5E12AD4
{
	Player animal;

	animal = _INVALID_PLAYER_INDEX();

	if (TASK::_0x756C7B4C43DF0422(1))
		animal = TASK::_0x351F74ED6177EBE7();
	else
		animal = plParam0;

	if (!ENTITY::DOES_ENTITY_EXIST(animal))
	{
		if (bParam1)
			func_58("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!func_551(animal))
	{
		if (bParam1)
			func_58("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!TASK::IS_PED_IN_WRITHE(animal))
	{
		if (bParam1)
			func_58("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, animal))
	{
		if (bParam1)
			func_58("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_548(Player plParam0, BOOL bParam1) // Position - 0x1655B Hash - 0x76B65421 ^0x75003F88
{
	Player outEntity;
	Player animal;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return true;
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &outEntity, false, false))
	{
		if (!func_551(outEntity))
		{
			if (bParam1)
				func_58("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity)))
		{
			if (bParam1)
				func_58("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (func_702(outEntity, true, true) > 2f)
		{
			if (bParam1)
				func_58("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity)))
		{
			if (bParam1)
				func_58("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		return true;
	}

	animal = plParam0;

	if (!func_551(animal))
	{
		if (bParam1)
			func_58("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (TASK::IS_PED_IN_WRITHE(animal))
	{
		if (bParam1)
			func_58("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, animal))
	{
		if (bParam1)
			func_58("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_549(Ped pedParam0) // Position - 0x16690 Hash - 0xE0409C42 ^0xE0409C42
{
	return func_148(pedParam0, 7);
}

BOOL func_550() // Position - 0x1669F Hash - 0xA095694D ^0x506AFF8
{
	Ped ped;
	Ped ledHorseFromPed;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(ped, true))
		return false;

	if (!TASK::_IS_PED_LEADING_HORSE(ped))
		return false;

	ledHorseFromPed = TASK::_GET_LED_HORSE_FROM_PED(ped);

	if (!ENTITY::DOES_ENTITY_EXIST(ledHorseFromPed))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(ledHorseFromPed, true))
		return false;

	if (!PED::CAN_PED_BE_MOUNTED(ledHorseFromPed))
		return false;

	return true;
}

BOOL func_551(Player plParam0) // Position - 0x1670A Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(plParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(plParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_552(int iParam0) // Position - 0x1673C Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_56())
	{
		case -1:
			return Global_1357549.f_1494 && iParam0 != false;
	}

	return false;
}

BOOL func_553() // Position - 0x16767 Hash - 0x4228A1C2 ^0x70D4FBDE
{
	return Global_1898164.f_163;
}

BOOL func_554(int iParam0) // Position - 0x16775 Hash - 0xA059D395 ^0xE5C5C571
{
	return func_248(Global_1935496.f_7, iParam0);
}

Entity func_555(Ped pedParam0) // Position - 0x16789 Hash - 0x3D354C79 ^0x6A3F9034
{
	int lootTarget;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 0, &lootTarget, 1, 0) != 0)
		return lootTarget;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 2, &lootTarget, 1, 0) != 0)
		return lootTarget;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 1, &lootTarget, 1, 0) != 0)
		return lootTarget;

	return 0;
}

void func_556(BOOL bParam0) // Position - 0x167E9 Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_703(&(Global_40.f_12019.f_42), 1);
	else
		func_704(&(Global_40.f_12019.f_42), 1);

	return;
}

BOOL func_557(int iParam0, var uParam1) // Position - 0x16813 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_705(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_558() // Position - 0x16840 Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_706(Global_40.f_12019);
}

int func_559() // Position - 0x16852 Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_469(i);
	
		if (func_15(hash, 1, false) || func_565(func_564(hash)))
			num = num + 1;
	}

	return num;
}

int func_560() // Position - 0x1689B Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_707(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_561() // Position - 0x168D4 Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_570(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_562() // Position - 0x1690D Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_563(int iParam0) // Position - 0x1691F Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_564(Hash hParam0) // Position - 0x169D8 Hash - 0x6931DCCD ^0x96AB98B4
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

BOOL func_565(BOOL bParam0) // Position - 0x16A6E Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_566(int iParam0) // Position - 0x16A81 Hash - 0x21CE226B ^0x8D8D0725
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

int func_567(int iParam0) // Position - 0x16ABC Hash - 0xDD8DC1C4 ^0xDD8DC1C4
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

int func_568(int iParam0) // Position - 0x16B01 Hash - 0x499196F8 ^0x499196F8
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Hash hParam0) // Position - 0x16B4A Hash - 0xA17D549C ^0x915353A3
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

BOOL func_570(Hash hParam0) // Position - 0x16C58 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x16C68 Hash - 0xA17D549C ^0x13825893
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

char* func_572(int iParam0) // Position - 0x16D25 Hash - 0x21CE226B ^0xB741166F
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

BOOL func_573(Hash hParam0) // Position - 0x16D60 Hash - 0x5C411CF ^0x5C411CF
{
	if (func_708(hParam0) && func_15(hParam0, 1, false))
		return 1;
	else if (func_709(hParam0) && func_710(hParam0))
		return 1;

	return 0;
}

char* func_574(Hash hParam0) // Position - 0x16D9E Hash - 0x9E507475 ^0xFFE86B5F
{
	if (!func_42(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_319(hParam0));
}

int func_575(int iParam0) // Position - 0x16DC2 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_576(int iParam0) // Position - 0x16DD4 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

BOOL func_577(Hash hParam0) // Position - 0x16DE8 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

float func_578(int iParam0, int iParam1) // Position - 0x16DF6 Hash - 0x882BA7B3 ^0xDE52A593
{
	int num;
	float pedStamina;
	float pedMaxStamina;
	float num2;
	float num3;

	if (iParam1 == -1)
	{
		num2 = pedMaxStamina - pedStamina;
		return num2 / 2f;
	}

	switch (iParam0)
	{
		case 0:
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			num = 50;
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_35);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_35);
			num = 8;
			break;
	
		case 2:
			pedStamina = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			pedMaxStamina = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			num = 14;
			break;
	}

	num3 = (float)num * iParam1 + pedStamina;

	if (num3 > pedMaxStamina)
		num2 = pedMaxStamina - pedStamina;
	else
		num2 = num3 - pedStamina;

	return num2 / 2f;
}

void func_579(int iParam0, BOOL bParam1) // Position - 0x16EAB Hash - 0x9D46840B ^0xDAAD5146
{
	int value;
	int healthAmount;

	value = 50 * iParam0;
	healthAmount = value + ENTITY::GET_ENTITY_HEALTH(Global_35);

	if (bParam1 && value < 0)
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, BUILTIN::TO_FLOAT(value), 0, 0);
	else if (iParam0 <= 0 || healthAmount > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	else
		ENTITY::SET_ENTITY_HEALTH(Global_35, healthAmount, 0);

	return;
}

void func_580(int iParam0, int iParam1) // Position - 0x16F1C Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_581(int iParam0) // Position - 0x16F35 Hash - 0x3A3EA746 ^0x311B4E59
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
	return;
}

void func_582(int iParam0) // Position - 0x16F50 Hash - 0xD46386C8 ^0x5B34A14E
{
	int num;

	if (func_56() != -1)
		return;

	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		num = 8;
		PED::_CHANGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT(iParam0 * num));
	}

	return;
}

float func_583(int iParam0, float fParam1) // Position - 0x16F8D Hash - 0xDF35DF4B ^0x834D2C65
{
	return func_711(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

BOOL func_584(var uParam0, var uParam1, float fParam2) // Position - 0x16FA1 Hash - 0xEC9C2B00 ^0xEC9C2B00
{
	if (func_56() != -1)
		return true;

	if (!func_712(0))
		return true;

	if (fParam2 <= 0f)
		return true;

	if (*uParam0)
		return !*uParam1;

	*uParam0 = 1;

	if (!Global_1347477.f_191.f_3)
	{
		func_713(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}

	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
		Global_1347477.f_191.f_1 = 0;

	Global_1347477.f_191.f_1 = Global_1347477.f_191.f_1 + 1;

	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_128(0, true);
			Global_1347477.f_191.f_2 = MISC::GET_GAME_TIMER() + 480000;
		}
	
		func_713(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}

	Global_1347477.f_191 = MISC::GET_GAME_TIMER() + 480000;
	*uParam1 = 0;
	return true;
}

void func_585(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1708D Hash - 0x99A7D713 ^0x99A7D713
{
	float num;

	if (func_56() == false)
	{
		func_714(0, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_677(0);

	if (bParam1)
		func_715(num);

	if (num >= 100f - 1f)
		func_716();

	if (bParam2)
		fParam0 = func_717(0, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_718(0, func_685(fParam0, -100f, 100f), bParam1);
	return;
}

void func_586(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x170FF Hash - 0x2BA41710 ^0x2BA41710
{
	float num;

	if (func_56() == false)
	{
		func_714(2, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_677(2);

	if (bParam1)
		func_715(num);

	if (bParam2)
		fParam0 = func_717(2, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_718(2, func_685(fParam0, -100f, 100f), bParam1);
	return;
}

void func_587(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x17160 Hash - 0x5266CD64 ^0x5266CD64
{
	float num;

	if (func_56() == false)
	{
		func_714(1, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_677(1);

	if (bParam1)
		func_715(num);

	if (bParam2)
		fParam0 = func_717(1, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_718(1, func_685(fParam0, -100f, 100f), bParam1);
	return;
}

float func_588(float fParam0, int iParam1) // Position - 0x171C1 Hash - 0x4EDD98F5 ^0x4EDD98F5
{
	switch (iParam1)
	{
		case 0:
			return fParam0 * 0.033f;
	
		case 1:
			return fParam0 * 2f;
	
		case 2:
			return fParam0 * 120f;
	
		case 3:
			return fParam0 * 2880f;
	
		default:
		
	}

	return fParam0;
}

void func_589(int iParam0, float fParam1) // Position - 0x17213 Hash - 0xE703ECFF ^0xBDAEF876
{
	Ped ped;
	char* effectName;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_719(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return;

	fParam1 = fParam1 * (1f + Global_40.f_11095.f_70);

	switch (iParam0)
	{
		case 0:
			effectName = func_720(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_721(-1);
			func_722(false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
	
		case 1:
			effectName = func_720(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_723(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
	
		case 2:
			effectName = func_720(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_724(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_725(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_725(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_725(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_590(float fParam0, BOOL bParam1) // Position - 0x173A6 Hash - 0xDA7BE4BE ^0xDA7BE4BE
{
	float num;
	int num2;
	int num3;
	float num4;
	float num5;

	num = func_726(13);

	if (fParam0 > 10f)
		fParam0 = 10f;

	if (!func_276(17))
		return;

	if (func_727())
	{
		num2 = func_728(num);
		num = num + fParam0;
		num3 = func_728(num);
	
		if (num2 != num3)
		{
			Global_1347477.f_195 = func_657();
			func_658(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, false);
		}
	
		func_729(&num4, &num5);
		func_730(13, func_685(num, num4, num5));
	}

	if (bParam1)
	{
		Global_40.f_11095.f_66 = Global_40.f_11095.f_66 + 1;
	
		if (5 == Global_40.f_11095.f_66)
			func_128(94, false);
	}

	return;
}

int func_591(int iParam0) // Position - 0x17457 Hash - 0xBA965109 ^0xA132DCEE
{
	switch (iParam0)
	{
		case 1:
			return joaat("provision_ro_flower_acunas_star");
	
		case 2:
			return joaat("consumable_herb_ginseng");
	
		case 3:
			return joaat("consumable_herb_ginseng");
	
		case 4:
			return joaat("consumable_herb_bay_bolete");
	
		case 5:
			return joaat("consumable_herb_black_berry");
	
		case 6:
			return joaat("consumable_herb_currant");
	
		case 7:
			return joaat("consumable_herb_burdock_root");
	
		case 8:
			return joaat("consumable_herb_chanterelles");
	
		case 9:
			return joaat("provision_ro_flower_cigar");
	
		case 10:
			return joaat("provision_ro_flower_clamshell");
	
		case 11:
			return joaat("consumable_herb_common_bulrush");
	
		case 12:
			return joaat("consumable_herb_creeping_thyme");
	
		case 13:
			return joaat("consumable_herb_sage");
	
		case 14:
			return joaat("provision_ro_flower_dragons");
	
		case 15:
			return joaat("consumable_herb_english_mace");
	
		case 16:
			return joaat("consumable_herb_evergreen_huckleberry");
	
		case 17:
			return joaat("provision_ro_flower_ghost");
	
		case 18:
			return joaat("consumable_herb_currant");
	
		case 19:
			return joaat("consumable_herb_sage");
	
		case 20:
			return joaat("consumable_herb_indian_tobacco");
	
		case 21:
			return joaat("provision_ro_flower_lady_of_night");
	
		case 22:
			return joaat("provision_ro_flower_lady_slipper");
	
		case 23:
			return joaat("consumable_herb_milkweed");
	
		case 24:
			return joaat("provision_ro_flower_moccasin");
	
		case 25:
			return joaat("provision_ro_flower_night_scented");
	
		case 26:
			return joaat("consumable_herb_oleander_sage");
	
		case 27:
			return joaat("consumable_herb_oregano");
	
		case 28:
			return joaat("consumable_herb_parasol_mushroom");
	
		case 29:
			return joaat("consumable_herb_prairie_poppy");
	
		case 30:
			return joaat("provision_ro_flower_queens");
	
		case 31:
			return joaat("consumable_herb_rams_head");
	
		case 32:
			return joaat("provision_ro_flower_rat_tail");
	
		case 33:
			return joaat("consumable_herb_red_raspberry");
	
		case 34:
			return joaat("consumable_herb_sage");
	
		case 35:
			return joaat("provision_ro_flower_sparrows");
	
		case 36:
			return joaat("provision_ro_flower_spider");
	
		case 37:
			return joaat("consumable_herb_vanilla_flower");
	
		case 38:
			return joaat("consumable_herb_violet_snowdrop");
	
		case 39:
			return joaat("consumable_herb_wild_carrots");
	
		case 40:
			return joaat("consumable_herb_wild_feverfew");
	
		case 41:
			return joaat("consumable_herb_wild_mint");
	
		case 42:
			return joaat("consumable_herb_wintergreen_berry");
	
		case 43:
			return joaat("consumable_herb_yarrow");
	
		default:
			break;
	}

	return 0;
}

void func_592(int iParam0, BOOL bParam1) // Position - 0x17746 Hash - 0x94511870 ^0x94511870
{
	if (!func_593(iParam0))
		return;

	if (func_56() != -1)
	{
		Global_36638[iParam0] = Global_36638[iParam0] || bParam1;
		return;
	}

	Global_40.f_9274[iParam0] = Global_40.f_9274[iParam0] || bParam1;
	return;
}

BOOL func_593(int iParam0) // Position - 0x1778E Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

BOOL func_594(int iParam0) // Position - 0x1779B Hash - 0x49EE3EAE ^0x49EE3EAE
{
	if (!func_593(iParam0))
		return false;

	return func_731(iParam0, 4, true);
}

void func_595(int iParam0, BOOL bParam1) // Position - 0x177B9 Hash - 0x2762FC5A ^0x2762FC5A
{
	if (!func_593(iParam0))
		return;

	if (func_732(iParam0))
		return;

	func_592(iParam0, 2);

	if (bParam1)
		if (!func_16(0, false, true))
			func_468(true, 6);

	return;
}

BOOL func_596(int iParam0) // Position - 0x177F7 Hash - 0x94F42F3F ^0x94F42F3F
{
	if (!func_593(iParam0))
		return false;

	return func_731(iParam0, true, true);
}

void func_597(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x17815 Hash - 0xD71C2102 ^0xD71C2102
{
	if (!func_593(iParam0))
		return;

	if (func_596(iParam0))
		return;

	if (!bParam1)
		bParam1 = func_733(iParam0);

	if (!bParam1)
	{
		if (func_56() != -1)
		{
		}
		else
		{
			func_734(iParam0);
		}
	}

	func_592(iParam0, true);

	if (func_56() == -1)
		func_735(iParam0, func_169());

	func_595(iParam0, true);

	if (bParam2)
		if (!func_16(0, false, true))
			func_468(true, 6);

	return;
}

float func_598(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x17894 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_599() // Position - 0x178DC Hash - 0xFF29F962 ^0xFF29F962
{
	int num;

	num = Global_1946054.f_529[9];
	num = num + Global_1946054.f_529[4];
	num = num + Global_1946054.f_529[10];
	num = num + Global_1946054.f_529[1];
	num = num + Global_1946054.f_529[2];
	num = num + Global_1946054.f_529[6];
	num = num + Global_1946054.f_529[29];
	num = num + Global_1946054.f_529[26];
	num = num + Global_1946054.f_529[18];
	num = num + Global_1946054.f_529[19];
	return num > 0;
}

Hash func_600(Hash hParam0) // Position - 0x17981 Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_231(func_736(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_601(Hash hParam0, var uParam1) // Position - 0x179B0 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_231(func_736(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_100(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_602() // Position - 0x17A27 Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_100(hash) == -999503751)
			if (func_737() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_603(Hash hParam0, BOOL bParam1) // Position - 0x17A78 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_160(hParam0, false, false) };
	guid = { func_162(hParam0, unk, unk.f_4, false) };

	if (func_237(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_140(false), &guid, bParam1);
	return true;
}

void func_604(var uParam0, Hash hParam1, int iParam2) // Position - 0x17AC4 Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_738(iParam2, *uParam0);
	func_739(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

int func_605(Hash hParam0) // Position - 0x17AFA Hash - 0x497B15BA ^0x497B15BA
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

BOOL func_606(int iParam0) // Position - 0x17B4A Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

void func_607(int iParam0) // Position - 0x17B62 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

void func_608(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x17B73 Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_100(hParam0))
	{
		case -2061583405:
			flag = func_740(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_740(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_740(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_740(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_740(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_740(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_421();

	if (bParam1)
		func_423(false, false);

	return;
}

void func_609(int iParam0, int iParam1) // Position - 0x17C40 Hash - 0x19A9221A ^0x79EEA925
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
			if (func_741(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_741(&iParam0->f_2[i /*2*/], 1))
					func_742(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_610(int iParam0, int iParam1, int iParam2) // Position - 0x17D6C Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_743(iParam0, 1))
		func_744(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_611(int iParam0, int iParam1) // Position - 0x17DB3 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_612(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x17DCC Hash - 0xE34B9CEC ^0xAFBB60FB
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

	if (uParam0->f_1[num4 /*3*/].f_1 == 1216705912 || uParam0->f_1[num4 /*3*/].f_1 == 654181853)
	{
		if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
		{
			uParam0->f_1[num4 /*3*/].f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[num4 /*3*/].f_1 = -1539589426;
			uParam0->f_1[num2 /*3*/].f_1 = joaat("base");
		}
	
		if (bParam2)
			func_430(num2, num);
	
		if (bParam1)
			func_430(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_430(num3, num);
	}

	return;
}

BOOL func_613(Hash hParam0) // Position - 0x17EB8 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

BOOL func_614(int iParam0) // Position - 0x17EFB Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_420();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_615(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x17F21 Hash - 0x3A135443 ^0x969430D9
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

BOOL func_616(Hash hParam0, int iParam1, var uParam2) // Position - 0x17F65 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_617(int iParam0, int iParam1) // Position - 0x17F76 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_231(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_618(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x17F94 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_231(hParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_223(524288))
	{
		switch (hParam1)
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

int func_619(var uParam0) // Position - 0x17FFF Hash - 0x3AB81F84 ^0x2BD03E57
{
	int num;
	int num2;

	num = 25;
	num2 = 0;

	if (uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	num = 26;

	if (uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	return num2;
}

void func_620(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1804B Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_56() == -1)
		func_745(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_746(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_621(BOOL bParam0, int iParam1) // Position - 0x180C1 Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_56() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		if (iParam1 > -1 && iParam1 < 5)
			return Global_26796.f_26[iParam1 /*120*/] && bParam0 != false;
	
		return false;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	if (iParam1 > -1 && iParam1 < 5)
		return Global_36638.f_45.f_350.f_26[iParam1 /*120*/] && bParam0 != false;

	return false;
}

Hash func_622(int iParam0) // Position - 0x1813E Hash - 0xB8EC44B7 ^0xE877E9C4
{
	switch (iParam0)
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

void func_623(int iParam0, BOOL bParam1, int iParam2) // Position - 0x18673 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_747(&(Global_1946054.f_1378), iParam0);
	func_748(2, iParam0, 6);

	if (bParam1)
		func_423(false, true);

	return;
}

BOOL func_624() // Position - 0x1869B Hash - 0x7AD82543 ^0x1E438C72
{
	return Global_1914319.f_17369 || Global_1914319.f_18996.f_1;
}

int func_625() // Position - 0x186B9 Hash - 0x4228A1C2 ^0x4EB570BC
{
	return Global_1051081.f_11;
}

char* func_626() // Position - 0x186C7 Hash - 0x306ACA3A ^0xA9755183
{
	return "unnamed";
}

BOOL func_627(int iParam0) // Position - 0x186D3 Hash - 0xC360B8E6 ^0xCBE2AF9D
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

BOOL func_628(int iParam0) // Position - 0x18762 Hash - 0xB11233B9 ^0x48EE22B7
{
	if (Global_1572887.f_12 == -1)
		return false;

	return func_749(32, iParam0);
}

int func_629(int iParam0) // Position - 0x18780 Hash - 0x322F9962 ^0x249D071F
{
	if (iParam0 == 255)
		return Global_1109000.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 25;

	if (Global_1224589.f_16[iParam0])
		return Global_1108108[iParam0 /*27*/].f_1;

	return 25;
}

BOOL func_630(Player plParam0) // Position - 0x187CB Hash - 0x5FB1BEA6 ^0x62CB8856
{
	if (func_750(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, plParam0) != 1)
			func_751(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, plParam0) == 1;
}

BOOL func_631(var uParam0) // Position - 0x18804 Hash - 0xEF8B385D ^0xEF8B385D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

void func_632(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x18819 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

int func_633(Hash hParam0, int iParam1, int iParam2) // Position - 0x1884A Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_505(hash);
	num3 = func_505(hash2);
	num4 = func_505(hash3);

	if (iParam2 != 2)
		num5 = func_505(hash4);

	num6 = func_506(hash);
	num7 = func_506(hash2);
	num8 = func_506(hash3);

	if (iParam2 != 2)
		num9 = func_506(hash4);

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

int func_634(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x189C3 Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_42(hParam0, 0))
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

BOOL func_635(Hash hParam0) // Position - 0x18A11 Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_752(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_636(var uParam0) // Position - 0x18A2D Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_42(*uParam0, 0))
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

BOOL func_637(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x18AA9 Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_42(hParam0, 0))
		return false;

	unk = { func_160(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_476(398 + i, 1);
	
		if (func_348(hParam0, &unk, hash, false))
		{
			flag = func_349(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_638(int iParam0) // Position - 0x18B3D Hash - 0x92F940EE ^0x92F940EE
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

float func_639(int iParam0) // Position - 0x18B91 Hash - 0xBAFBA316 ^0xBAFBA316
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
			return func_753(iParam0);
	
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
			return func_753(iParam0);
	
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
			return func_753(iParam0);
	
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

BOOL func_640(int iParam0) // Position - 0x18E5F Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_276(18);
	
		case 1:
			return func_276(19);
	
		case 2:
			return func_276(20);
	
		default:
		
	}

	return true;
}

int func_641(int iParam0) // Position - 0x18E9D Hash - 0xBCE241D5 ^0x339AC097
{
	return func_754(Global_40.f_11095.f_11[iParam0]);
}

void func_642(int iParam0, float fParam1, BOOL bParam2) // Position - 0x18EB5 Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_56() != -1)
		return;

	if (Global_1347477.f_117 || !func_276(31))
		return;

	num = func_641(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_641(iParam0);

	if (func_755(iParam0) && func_756(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_757(num2, fParam1);
		
			if (fParam1 > (float)func_758(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_128(func_759(iParam0), false);
				
					func_760(iParam0, num3, num4);
					func_580(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_643(int iParam0) // Position - 0x18FB7 Hash - 0xEB40D7A4 ^0xB4051D89
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_644(int iParam0) // Position - 0x18FC3 Hash - 0x21FAF347 ^0xAF7D8F21
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

void func_645(Hash hParam0, int iParam1) // Position - 0x18FFE Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_646(BOOL bParam0) // Position - 0x19011 Hash - 0xB584A39F ^0xFC4CA802
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

void func_647(int iParam0) // Position - 0x1904F Hash - 0x2EDDC601 ^0xD5F96979
{
	Any itemContextByIndex;

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

void func_648(BOOL bParam0) // Position - 0x190BD Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_649(BOOL bParam0) // Position - 0x190F7 Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_650(BOOL bParam0) // Position - 0x19131 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_651(BOOL bParam0) // Position - 0x1916B Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_652(BOOL bParam0) // Position - 0x1918E Hash - 0x15EA8A2D ^0x6EE74130
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

void func_653(BOOL bParam0) // Position - 0x191D0 Hash - 0xBAD014C9 ^0x3FDE3E28
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

Hash func_654(Hash hParam0) // Position - 0x19212 Hash - 0x5B34E283 ^0x820CF35B
{
	if (hParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_231(hParam0, 1) /*3*/];
}

void func_655() // Position - 0x1923A Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_761();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_280(joaat("weapon_revolver_cattleman_john"));
		func_325(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_280(joaat("weapon_melee_knife_john"));
		func_325(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

int func_656(int iParam0, int iParam1) // Position - 0x192B2 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

int func_657() // Position - 0x192C8 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_658(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x192D4 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_762(*iParam0);
	i = func_763(*iParam0);
	num2 = func_764(*iParam0);
	j = func_765(*iParam0);
	k = func_766(*iParam0);
	l = func_767(*iParam0);

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

	for (m = func_768(i, num); num2 > m; m = func_768(i, num))
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

	func_769(iParam0, l, k, j, num2, i, num);
	return;
}

Hash func_659(Hash hParam0) // Position - 0x1945C Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_160(hParam0, true, false) };
	return func_230(unk.f_4);
}

Hash func_660(int iParam0) // Position - 0x19478 Hash - 0xB8EC44B7 ^0xD4FF48D5
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

int func_661(Hash hParam0) // Position - 0x195F5 Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_770(hParam0, -1);
}

BOOL func_662(int iParam0, BOOL bParam1) // Position - 0x19604 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_771(func_657(), iParam0, bParam1);
}

BOOL func_663() // Position - 0x19618 Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_484())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_664(int iParam0) // Position - 0x1962F Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_772(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_665(int iParam0, const char* sParam1, int iParam2) // Position - 0x19663 Hash - 0x56940320 ^0x38823A13
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_663())
		func_448(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_448(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_666(Hash hParam0) // Position - 0x196CF Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_667(int iParam0) // Position - 0x196DF Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_773(iParam0, 1);
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

void func_668(int iParam0) // Position - 0x19778 Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_773(iParam0, 1);
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

void func_669() // Position - 0x197FE Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_668(-939420910);
	func_668(-1187950766);
	func_668(356365161);
	func_668(753127042);
	func_668(-2038424081);
	func_668(1884271742);
	func_668(459290420);
	return;
}

void func_670() // Position - 0x19845 Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_668(704802028);
	func_668(588987611);
	func_668(2008888900);
	func_668(1649996811);
	func_668(227918160);
	func_668(168171957);
	func_668(1193080109);
	func_668(-491981251);
	func_668(-639037538);
	func_668(-618620429);
	return;
}

BOOL func_671(int iParam0) // Position - 0x198A7 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_773(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_672(Hash hParam0) // Position - 0x198F6 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_673(Hash hParam0) // Position - 0x19906 Hash - 0xEAAB2463 ^0xEAAB2463
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

void func_674(int iParam0) // Position - 0x1994B Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_675(Hash hParam0) // Position - 0x19966 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_676() // Position - 0x19976 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_677(int iParam0) // Position - 0x19992 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_678() // Position - 0x199A4 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_726(13);
	num2 = func_728(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_679() // Position - 0x199E7 Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_680() // Position - 0x19A02 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_484())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_681() // Position - 0x19A21 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_682() // Position - 0x19A63 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_683(int iParam0, int iParam1, BOOL bParam2) // Position - 0x19A71 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_774(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_684(int iParam0, float fParam1, BOOL bParam2) // Position - 0x19ABD Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_774(iParam0, 2, false, false);
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

float func_685(float fParam0, float fParam1, float fParam2) // Position - 0x19C03 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_686() // Position - 0x19C2A Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_726(12) <= -99f;
}

BOOL func_687() // Position - 0x19C3E Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_726(12) >= 99f;
}

BOOL func_688(int iParam0) // Position - 0x19C52 Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_396(iParam0))
		return false;

	if (func_397(iParam0, 2))
		return true;

	return false;
}

void func_689(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x19C77 Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_396(iParam0))
		return;

	if (!func_688(iParam0))
	{
		func_691(iParam0, 2);
	
		if (bParam2)
			if (!func_16(0, false, true))
				func_468(true, 4);
	
		if (!func_690() && !bParam1 && !func_16(0, false, true))
			func_58(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_775(iParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

BOOL func_690() // Position - 0x19CEC Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

void func_691(int iParam0, BOOL bParam1) // Position - 0x19D0C Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_396(iParam0))
		return;

	Global_40.f_7157[iParam0 /*3*/] = Global_40.f_7157[iParam0 /*3*/] || bParam1;
	return;
}

void func_692(Hash hParam0, BOOL bParam1) // Position - 0x19D38 Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_776(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_277(50);
			else
				func_277(48);
			break;
	
		case 1:
			if (bParam1)
				func_277(51);
			else
				func_277(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_777(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_306();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_306();
			}
			break;
	
		case 3:
			func_277(24);
		
			if (bParam1)
			{
				if (!func_777(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_306();
				}
			}
			break;
	}

	return;
}

void func_693(int iParam0) // Position - 0x19E17 Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_778(0))
				num = num + 1;
		
			if (func_778(2))
				num = num + 1;
		
			if (func_778(4))
				num = num + 1;
		
			if (!func_779(16))
			{
				if (num == 1)
				{
					func_780();
					func_128(456, true);
					func_781(16);
				}
			}
		
			if (!func_779(32))
			{
				if (num >= 3)
				{
					func_780();
					func_128(456, true);
					func_781(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_778(1))
				num = num + 1;
		
			if (func_778(3))
				num = num + 1;
		
			if (func_778(7))
				num = num + 1;
		
			if (!func_779(1))
			{
				if (num == 1)
				{
					func_782();
					func_128(457, true);
					func_781(1);
				}
			}
		
			if (!func_779(2))
			{
				if (num >= 3)
				{
					func_782();
					func_128(457, true);
					func_781(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_778(5))
				num = num + 1;
		
			if (func_778(6))
				num = num + 1;
		
			if (func_778(8))
				num = num + 1;
		
			if (!func_779(4))
			{
				if (num == 1)
				{
					func_783();
					func_128(455, true);
					func_781(4);
				}
			}
		
			if (!func_779(8))
			{
				if (num >= 3)
				{
					func_783();
					func_128(455, true);
					func_781(8);
				}
			}
			break;
	}

	return;
}

void func_694(var uParam0) // Position - 0x19FAE Hash - 0x2CE00B72 ^0x958A4727
{
	func_525(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_525(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_525(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_695(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x19FE8 Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_784(anParam0))
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
BOOL func_696(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x1A089 Hash - 0x92B705D3 ^0xB783F681
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

int func_697(int iParam0) // Position - 0x1A17F Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_698(int iParam0) // Position - 0x1A200 Hash - 0x67D822A ^0x67D822A
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_785(&Global_1835011[iParam0 /*74*/]);
	}

	return false;
}

Vector3 func_699(int iParam0) // Position - 0x1A230 Hash - 0x695A7658 ^0x6D3D4EDB
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
	
		case 34:
			return 2544.9822f, -1187.3444f, 52.3104f;
	}

	return Global_1835011[iParam0 /*74*/].f_18;
}

int func_700(int iParam0) // Position - 0x1A282 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_50(iParam0))
		return -1;

	return func_786(iParam0);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x1A29E Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

float func_702(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A2A7 Hash - 0x2753566D ^0x575C60D0
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(plParam0))
		return -1f;

	return func_598(Global_35, plParam0, bParam1, bParam2);
}

void func_703(int iParam0, int iParam1) // Position - 0x1A2D0 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_704(int iParam0, int iParam1) // Position - 0x1A2E1 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_705(int iParam0) // Position - 0x1A2F6 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_706(BOOL bParam0) // Position - 0x1A30C Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_707(Hash hParam0) // Position - 0x1A331 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_708(Hash hParam0) // Position - 0x1A341 Hash - 0xB8632262 ^0xB8632262
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

int func_709(Hash hParam0) // Position - 0x1A3E8 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_710(Hash hParam0) // Position - 0x1A421 Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_787(&entity, 0, i, &model) && !func_787(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_788(entity, &model);
		
			if (func_42(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

float func_711(float fParam0, float fParam1) // Position - 0x1A48D Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 200f;

	return (fParam0 / 8f) * 200f;
}

BOOL func_712(int iParam0) // Position - 0x1A4BB Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_480())
		return false;

	return func_189(Global_1347702[58 /*49*/].f_15, true);
}

BOOL func_713(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1A4DD Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = iParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = iParam3;
	str.f_5 = iParam4;
	str.f_6 = iParam7;
	return func_789(pedParam0, &str);
}

void func_714(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1A524 Hash - 0x6775E582 ^0x6775E582
{
	if (bParam4)
		fParam1 = func_717(iParam0, fParam1, true);

	func_791(iParam0, func_790(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

void func_715(float fParam0) // Position - 0x1A553 Hash - 0x92695771 ^0x90AC306A
{
	if (fParam0 >= 100f - 1f)
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	else
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	return;
}

void func_716() // Position - 0x1A587 Hash - 0xB36799A8 ^0x76458B55
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
	return;
}

float func_717(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1A5B4 Hash - 0xFB55A421 ^0xFB55A421
{
	int num;
	int num2;

	num = func_657();
	func_792(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_793(iParam0, 2);

	if (func_771(num, func_794(iParam0, 2), true))
	{
		func_795(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_128(88, bParam2);
		return 0f;
	}

	func_796(iParam0, func_657(), 2);
	func_795(iParam0, num2 + 1, 2);
	return fParam1;
}

void func_718(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1A61D Hash - 0x8FDCEA1F ^0x46BCD39D
{
	int value;
	char* variableName;

	if (func_56() != -1)
		return;

	if (!func_276(15))
		return;

	Global_40.f_11095[iParam0] = fParam1;
	value = func_797(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_798(iParam0), value);
	func_800(func_799(iParam0), 100f * (BUILTIN::TO_FLOAT(value) / 100f), false);

	if (fParam1 <= func_801(15) && iParam0 == 1 && PED::IS_PED_ON_FOOT(Global_35) && !PED::IS_PED_SWIMMING(Global_35))
		func_128(84, true);

	if (fParam1 <= -99.999f)
		func_128(func_802(iParam0), true);

	variableName = func_803(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, variableName, BUILTIN::TO_FLOAT(value), -1);

	return;
}

BOOL func_719(int iParam0) // Position - 0x1A6F6 Hash - 0x3FEE6090 ^0x3FEE6090
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		default:
		
	}

	return false;
}

char* func_720(int iParam0) // Position - 0x1A725 Hash - 0x21CE226B ^0xE5AE548F
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
	
		case 1:
			return "PlayerOverpower";
	
		case 2:
			return "PlayerOverpower";
	
		default:
		
	}

	return "";
}

void func_721(int iParam0) // Position - 0x1A760 Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_804(2);
	func_805(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_722(BOOL bParam0) // Position - 0x1A79D Hash - 0x9114E741 ^0x8984E174
{
	if (func_56() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_128(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_128(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_806(1, bParam0, true);
	func_310();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

void func_723(int iParam0) // Position - 0x1A80B Hash - 0x89FD216F ^0xA46E837F
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_807(2);
	func_808(BUILTIN::TO_FLOAT(iParam0 * num));
	return;
}

void func_724(int iParam0) // Position - 0x1A847 Hash - 0x265AFF44 ^0x6BC758B3
{
	Player player;
	int num;

	player = PLAYER::PLAYER_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PLAYER::_0x57D9991DC1334151(player);

	num = func_809(2);
	func_810(BUILTIN::TO_FLOAT(iParam0 * num), false);
	return;
}

void func_725(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A884 Hash - 0x5C29635D ^0x5C29635D
{
	func_791(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

float func_726(int iParam0) // Position - 0x1A89E Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

BOOL func_727() // Position - 0x1A8B2 Hash - 0xF6B2CBD4 ^0x78757C46
{
	if (func_56() != -1)
		return false;

	if (Global_1347477.f_200)
		return false;

	if (Global_1347477.f_195 == -15)
		return true;

	return func_662(Global_1347477.f_195, false);
}

int func_728(float fParam0) // Position - 0x1A8EE Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

void func_729(var uParam0, var uParam1) // Position - 0x1A909 Hash - 0x9E01892C ^0x3EC1D72C
{
	if (!func_173())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}

	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
	return;
}

void func_730(int iParam0, float fParam1) // Position - 0x1A942 Hash - 0x45CA0D9B ^0x427E9AC2
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_811(1, flag, true, str);
		func_812(!flag, fParam1 < 0f, flag);
		num = func_797(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_310();
	}
	else if (iParam0 == 10)
	{
		num = func_797(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_797(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

BOOL func_731(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1AA18 Hash - 0x77ECC81C ^0x6B9E3122
{
	if (bParam2)
		if (!func_593(iParam0))
			return false;

	if (Global_1572887.f_12 != -1)
		return Global_36638[iParam0] && bParam1 != false;

	return Global_40.f_9274[iParam0] && bParam1 != false;
}

BOOL func_732(int iParam0) // Position - 0x1AA5B Hash - 0xE139661B ^0xE139661B
{
	if (!func_593(iParam0))
		return false;

	return func_731(iParam0, 2, true);
}

BOOL func_733(int iParam0) // Position - 0x1AA79 Hash - 0xA376F75 ^0xA376F75
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
	
		default:
			return 0;
	}

	return 0;
}

void func_734(int iParam0) // Position - 0x1AAE6 Hash - 0xC5BA52D ^0xC5BA52D
{
	switch (iParam0)
	{
		case 2:
			func_128(214, false);
			break;
	
		case 3:
			func_128(215, false);
			break;
	
		case 4:
			func_128(233, false);
			break;
	
		case 5:
			func_128(210, false);
			break;
	
		case 6:
			func_128(229, false);
			break;
	
		case 7:
			func_128(226, false);
			break;
	
		case 8:
			func_128(234, false);
			break;
	
		case 11:
			break;
	
		case 12:
			func_128(237, false);
			break;
	
		case 13:
			func_128(221, false);
			break;
	
		case 15:
			func_128(217, false);
			break;
	
		case 16:
			func_128(211, false);
			break;
	
		case 18:
			func_128(228, false);
			break;
	
		case 19:
			func_128(222, false);
			break;
	
		case 20:
			func_128(227, false);
			break;
	
		case 23:
			func_128(218, false);
			break;
	
		case 26:
			func_128(220, false);
			break;
	
		case 27:
			func_128(238, false);
			break;
	
		case 28:
			func_128(235, false);
			break;
	
		case 29:
			func_128(230, false);
			break;
	
		case 31:
			func_128(236, false);
			break;
	
		case 33:
			func_128(212, false);
			break;
	
		case 34:
			func_128(223, false);
			break;
	
		case 37:
			func_128(219, false);
			break;
	
		case 38:
			func_128(224, false);
			break;
	
		case 39:
			func_128(231, false);
			break;
	
		case 40:
			func_128(225, false);
			break;
	
		case 41:
			func_128(239, false);
			break;
	
		case 42:
			func_128(213, false);
			break;
	
		case 43:
			func_128(216, false);
			break;
	}

	return;
}

void func_735(int iParam0, BOOL bParam1) // Position - 0x1ACCF Hash - 0xE05A2D67 ^0x31D6C1E4
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == true)
				func_170(joaat("journal_herb_acunas_star_orchid_ar"), 0);
			else
				func_170(joaat("journal_herb_acunas_star_orchid_jn"), 0);
			break;
	
		case 2:
			if (bParam1 == true)
				func_170(joaat("journal_herb_alaskan_ginseng_ar"), 0);
			else
				func_170(joaat("journal_herb_alaskan_ginseng_jn"), 0);
			break;
	
		case 3:
			if (bParam1 == true)
				func_170(joaat("journal_herb_american_ginseng_ar"), 0);
			else
				func_170(joaat("journal_herb_american_ginseng_jn"), 0);
			break;
	
		case 4:
			if (bParam1 == true)
				func_170(joaat("journal_herb_bay_bolete_ar"), 0);
			else
				func_170(joaat("journal_herb_bay_bolete_jn"), 0);
			break;
	
		case 5:
			if (bParam1 == true)
				func_170(joaat("journal_herb_blackberry_ar"), 0);
			else
				func_170(joaat("journal_herb_blackberry_jn"), 0);
			break;
	
		case 6:
			if (bParam1 == true)
				func_170(joaat("journal_herb_black_currant_ar"), 0);
			else
				func_170(joaat("journal_herb_black_currant_jn"), 0);
			break;
	
		case 7:
			if (bParam1 == true)
				func_170(joaat("journal_herb_burdock_root_ar"), 0);
			else
				func_170(joaat("journal_herb_burdock_root_jn"), 0);
			break;
	
		case 8:
			if (bParam1 == true)
				func_170(joaat("journal_herb_chanterelle_ar"), 0);
			else
				func_170(joaat("journal_herb_chanterelle_jn"), 0);
			break;
	
		case 9:
			if (bParam1 == true)
				func_170(joaat("journal_herb_cigar_orchid_ar"), 0);
			else
				func_170(joaat("journal_herb_cigar_orchid_jn"), 0);
			break;
	
		case 10:
			if (bParam1 == true)
				func_170(joaat("journal_herb_clamshell_orchid_ar"), 0);
			else
				func_170(joaat("journal_herb_clamshell_orchid_jn"), 0);
			break;
	
		case 11:
			if (bParam1 == true)
				func_170(joaat("journal_herb_bulrush_ar"), 0);
			else
				func_170(joaat("journal_herb_bulrush_jn"), 0);
			break;
	
		case 12:
			if (bParam1 == true)
				func_170(joaat("journal_herb_creeping_thyme_ar"), 0);
			else
				func_170(joaat("journal_herb_creeping_thyme_jn"), 0);
			break;
	
		case 13:
			if (bParam1 == true)
				func_170(joaat("journal_herb_desert_sage_ar"), 0);
			else
				func_170(joaat("journal_herb_desert_sage_jn"), 0);
			break;
	
		case 14:
			if (bParam1 == true)
				func_170(joaat("journal_herb_dragons_mouth_orchid_ar"), 0);
			else
				func_170(joaat("journal_herb_dragons_mouth_orchid_jn"), 0);
			break;
	
		case 15:
			if (bParam1 == true)
				func_170(joaat("journal_herb_english_mace_ar"), 0);
			else
				func_170(joaat("journal_herb_english_mace_jn"), 0);
			break;
	
		case 16:
			if (bParam1 == true)
				func_170(joaat("journal_herb_huckleberry_ar"), 0);
			else
				func_170(joaat("journal_herb_huckleberry_jn"), 0);
			break;
	
		case 17:
			if (bParam1 == true)
				func_170(joaat("journal_herb_ghost_orchid_ar"), 0);
			else
				func_170(joaat("journal_herb_ghost_orchid_jn"), 0);
			break;
	
		case 18:
			if (bParam1 == true)
				func_170(joaat("journal_herb_golden_currant_ar"), 0);
			else
				func_170(joaat("journal_herb_golden_currant_jn"), 0);
			break;
	
		case 19:
			if (bParam1 == true)
				func_170(joaat("journal_herb_hummingbird_sage_ar"), 0);
			else
				func_170(joaat("journal_herb_hummingbird_sage_jn"), 0);
			break;
	
		case 20:
			if (bParam1 == true)
				func_170(joaat("journal_herb_indian_tobacco_ar"), 0);
			else
				func_170(joaat("journal_herb_indian_tobacco_jn"), 0);
			break;
	
		case 21:
			if (bParam1 == true)
				func_170(joaat("journal_herb_lady_of_the_night_orchid_ar"), 0);
			else
				func_170(joaat("journal_herb_lady_of_the_night_orchid_jn"), 0);
			break;
	
		case 22:
			if (bParam1 == true)
				func_170(joaat("journal_herb_lady_slipper_orchid_ar"), 0);
			else
				func_170(joaat("journal_herb_lady_slipper_orchid_jn"), 0);
			break;
	
		case 23:
			if (bParam1 == true)
				func_170(joaat("journal_herb_milkweed_ar"), 0);
			else
				func_170(joaat("journal_herb_milkweed_jn"), 0);
			break;
	
		case 24:
			if (bParam1 == true)
				func_170(joaat("journal_herb_moccasin_orchid_ar"), 0);
			else
				func_170(joaat("journal_herb_moccasin_orchid_jn"), 0);
			break;
	
		case 25:
			if (bParam1 == true)
				func_170(joaat("journal_herb_night_scented_orchid_ar"), 0);
			else
				func_170(joaat("journal_herb_night_scented_orchid_jn"), 0);
			break;
	
		case 26:
			if (bParam1 == true)
				func_170(joaat("journal_herb_oleander_sage_ar"), 0);
			else
				func_170(joaat("journal_herb_oleander_sage_jn"), 0);
			break;
	
		case 27:
			if (bParam1 == true)
				func_170(joaat("journal_herb_oregano_ar"), 0);
			else
				func_170(joaat("journal_herb_oregano_jn"), 0);
			break;
	
		case 28:
			if (bParam1 == true)
				func_170(joaat("journal_herb_parasol_ar"), 0);
			else
				func_170(joaat("journal_herb_parasol_jn"), 0);
			break;
	
		case 29:
			if (bParam1 == true)
				func_170(joaat("journal_herb_prairie_poppy_ar"), 0);
			else
				func_170(joaat("journal_herb_prairie_poppy_jn"), 0);
			break;
	
		case 30:
			if (bParam1 == true)
				func_170(joaat("journal_herb_queens_orchids_ar"), 0);
			else
				func_170(joaat("journal_herb_queens_orchids_jn"), 0);
			break;
	
		case 31:
			if (bParam1 == true)
				func_170(joaat("journal_herb_ramshead_orchid_ar"), 0);
			else
				func_170(joaat("journal_herb_ramshead_orchid_jn"), 0);
			break;
	
		case 32:
			if (bParam1 == true)
				func_170(joaat("journal_herb_rat_tail_orchid_ar"), 0);
			else
				func_170(joaat("journal_herb_rat_tail_orchid_jn"), 0);
			break;
	
		case 33:
			if (bParam1 == true)
				func_170(joaat("journal_herb_raspberry_ar"), 0);
			else
				func_170(joaat("journal_herb_raspberry_jn"), 0);
			break;
	
		case 34:
			if (bParam1 == true)
				func_170(joaat("journal_herb_red_sage_ar"), 0);
			else
				func_170(joaat("journal_herb_red_sage_jn"), 0);
			break;
	
		case 35:
			if (bParam1 == true)
				func_170(joaat("journal_herb_sparrows_egg_orchid_ar"), 0);
			else
				func_170(joaat("journal_herb_sparrows_egg_orchid_jn"), 0);
			break;
	
		case 36:
			if (bParam1 == true)
				func_170(joaat("journal_herb_spider_orchid_ar"), 0);
			else
				func_170(joaat("journal_herb_spider_orchid_jn"), 0);
			break;
	
		case 37:
			if (bParam1 == true)
				func_170(joaat("journal_herb_vanilla_flower_ar"), 0);
			else
				func_170(joaat("journal_herb_vanilla_flower_jn"), 0);
			break;
	
		case 38:
			if (bParam1 == true)
				func_170(joaat("journal_herb_violet_snowdrop_ar"), 0);
			else
				func_170(joaat("journal_herb_violet_snowdrop_jn"), 0);
			break;
	
		case 39:
			if (bParam1 == true)
				func_170(joaat("journal_herb_carrot_ar"), 0);
			else
				func_170(joaat("journal_herb_carrot_jn"), 0);
			break;
	
		case 40:
			if (bParam1 == true)
				func_170(joaat("journal_herb_feverfew_ar"), 0);
			else
				func_170(joaat("journal_herb_feverfew_jn"), 0);
			break;
	
		case 41:
			if (bParam1 == true)
				func_170(joaat("journal_herb_mint_ar"), 0);
			else
				func_170(joaat("journal_herb_mint_jn"), 0);
			break;
	
		case 42:
			if (bParam1 == true)
				func_170(joaat("journal_herb_winterberry_ar"), 0);
			else
				func_170(joaat("journal_herb_winterberry_jn"), 0);
			break;
	
		case 43:
			if (bParam1 == true)
				func_170(joaat("journal_herb_yarrow_ar"), 0);
			else
				func_170(joaat("journal_herb_yarrow_jn"), 0);
			break;
	
		default:
			break;
	}

	return;
}

Hash func_736(Hash hParam0) // Position - 0x1B344 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_230(outSlotId);
}

Hash func_737() // Position - 0x1B367 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

void func_738(int iParam0, int iParam1) // Position - 0x1B376 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_739(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x1B38F Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_813(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_231(func_659(hParam1), 1);
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
		func_814(uParam0);

	return;
}

BOOL func_740(Hash hParam0, int iParam1) // Position - 0x1B3EB Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_416(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_100(hParam0) != -999503751)
			func_815(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_100(hParam0) != -999503751)
		func_815(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_603(hParam0, true);
	return 1;
}

BOOL func_741(var uParam0, int iParam1) // Position - 0x1B4D1 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_742(var uParam0, int iParam1, int iParam2) // Position - 0x1B4E2 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_743(int iParam0, int iParam1) // Position - 0x1B4F5 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_744(int iParam0, int iParam1) // Position - 0x1B506 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_745(Hash hParam0, int iParam1, int iParam2) // Position - 0x1B519 Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_746(Hash hParam0, int iParam1, int iParam2) // Position - 0x1B574 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_747(var uParam0, int iParam1) // Position - 0x1B5DE Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_56() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_745(&uParam0->f_1[i /*3*/], i, iParam1);
		}
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_746(&uParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_748(BOOL bParam0, int iParam1, int iParam2) // Position - 0x1B679 Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_56() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		if (iParam1 > -1 && iParam1 < 5)
			Global_26796.f_26[iParam1 /*120*/] = Global_26796.f_26[iParam1 /*120*/] || bParam0;
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	if (iParam1 > -1 && iParam1 < 5)
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] = Global_36638.f_45.f_350.f_26[iParam1 /*120*/] || bParam0;

	return;
}

BOOL func_749(int iParam0, int iParam1) // Position - 0x1B701 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_816(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_817())
		return func_816(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_816(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

BOOL func_750(Player plParam0) // Position - 0x1B775 Hash - 0x80018C76 ^0x60939258
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1058888.f_49041), plParam0))
		return true;

	return false;
}

void func_751(Player plParam0) // Position - 0x1B794 Hash - 0x3D7F326C ^0x47EF75AB
{
	Player player;

	if (func_818() != false || func_56() != false)
		return;

	player = plParam0;

	if (!Global_1224589.f_16[player])
	{
		func_819(plParam0);
		return;
	}

	if (Global_1058888.f_42287.f_1[player /*5*/] == 1)
		return;

	func_820(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1058888.f_42287.f_1[player /*5*/] = 1;
	return;
}

int func_752(Hash hParam0, Hash hParam1) // Position - 0x1B802 Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

float func_753(int iParam0) // Position - 0x1B81C Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_638(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_754(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_821(num7) - func_821(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_754(float fParam0) // Position - 0x1B886 Hash - 0x3E9B0DE9 ^0x3E9B0DE9
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

int func_755(int iParam0) // Position - 0x1B912 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_756(int iParam0) // Position - 0x1B94B Hash - 0xB8632262 ^0xB8632262
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

int func_757(float fParam0, float fParam1) // Position - 0x1B9CA Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_754(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_821(num));
	num3 = BUILTIN::TO_FLOAT(func_821(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_758(int iParam0) // Position - 0x1BA3D Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_822(iParam0, &num))
		return func_821(num);

	switch (iParam0)
	{
		case 0:
			if (func_823())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_823())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_823())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_759(int iParam0) // Position - 0x1BAC9 Hash - 0xEE6D3E20 ^0xEE6D3E20
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

void func_760(int iParam0, int iParam1, int iParam2) // Position - 0x1BAFB Hash - 0x29688DE6 ^0x55A14BFE
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

	num = num + func_824(iParam0);
	str3 = func_826(func_825(num, iParam2));
	str5 = func_827(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_828(iParam0));
	hash = func_829(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = hash;
		data.f_4 = 1;
		data.f_5 = func_830(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_378(str6, str2, hash, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_831(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_761() // Position - 0x1BBF3 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_832(Global_35, &unk);
	unk31 = { func_346(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_833(false);
	func_834(7);
	func_227(joaat("kit_bandana"), true, true, false);

	if (func_420() == 1160113249)
	{
		func_227(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_227(-361635024, true, true, true);
	}

	func_835(Global_35, &unk);
	return;
}

int func_762(int iParam0) // Position - 0x1BC7C Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_763(int iParam0) // Position - 0x1BCA1 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_764(int iParam0) // Position - 0x1BCB4 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_765(int iParam0) // Position - 0x1BCC7 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_766(int iParam0) // Position - 0x1BCDA Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_767(int iParam0) // Position - 0x1BCEC Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_768(int iParam0, int iParam1) // Position - 0x1BCFE Hash - 0x893AC59E ^0x893AC59E
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

void func_769(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1BD98 Hash - 0xA65AB937 ^0xA65AB937
{
	func_837(iParam0, iParam6);
	func_838(iParam0, iParam5);
	func_839(iParam0, iParam4);
	func_840(iParam0, iParam3);
	func_841(iParam0, iParam2);
	func_842(iParam0, iParam1);
	return;
}

int func_770(Hash hParam0, int iParam1) // Position - 0x1BDD0 Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_140(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_837(&num, year);
	func_838(&num, month);
	func_839(&num, day);
	func_840(&num, hour);
	func_841(&num, minute);
	func_842(&num, second);
	return num;
}

BOOL func_771(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1BE35 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_843(iParam1) || !func_843(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_772(int iParam0) // Position - 0x1BE62 Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_449(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

int func_773(int iParam0, int iParam1) // Position - 0x1BE95 Hash - 0xEA82FE59 ^0xEA82FE59
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

char* func_774(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1D112 Hash - 0xC24B5846 ^0x44D89E9D
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

char* func_775(int iParam0) // Position - 0x1D1BB Hash - 0xCCDB3731 ^0x5B0BD55B
{
	Hash hash;

	hash = func_622(iParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_574(hash);
}

int func_776(Hash hParam0) // Position - 0x1D1DE Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_844(hParam0))
		num = 0;
	else if (func_845(hParam0))
		num = 1;
	else if (func_846(hParam0))
		num = 2;
	else if (func_847(hParam0))
		num = 3;

	return num;
}

BOOL func_777(int iParam0) // Position - 0x1D221 Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_15(func_848(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_778(int iParam0) // Position - 0x1D261 Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_15(func_849(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_779(int iParam0) // Position - 0x1D2A0 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_780() // Position - 0x1D2B3 Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_56() != -1)
		return;

	func_325(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_641(1);
	func_760(1, num, 0);
	return;
}

void func_781(int iParam0) // Position - 0x1D2E5 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_782() // Position - 0x1D2FC Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_56() != -1)
		return;

	func_325(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_641(2);
	func_760(2, num, 0);
	return;
}

void func_783() // Position - 0x1D32E Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_56() != -1)
		return;

	func_325(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_641(0);
	func_760(0, num, 0);
	return;
}

BOOL func_784(Any anParam0) // Position - 0x1D360 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_785(int iParam0) // Position - 0x1D396 Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_850(&(iParam0->f_29), 62))
	{
		switch (func_851())
		{
			case 1:
				if (!func_850(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_850(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_850(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_850(&(iParam0->f_29), 32))
					if (func_850(&(iParam0->f_29), 2))
						if (func_765(func_657()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

int func_786(int iParam0) // Position - 0x1D440 Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

BOOL func_787(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x1D45F Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_852(iParam1) && !func_853(iParam1))
		ped = func_104(iParam1);
	else
		return false;

	func_854(uParam3);
	num = func_855(iParam2);

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

void func_788(Entity eParam0, var uParam1) // Position - 0x1D4FE Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_856(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_857(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

BOOL func_789(Ped pedParam0, Any* panParam1) // Position - 0x1D548 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

float func_790(int iParam0, int iParam1) // Position - 0x1D558 Hash - 0xB4BF1B35 ^0x79981B44
{
	if (iParam1 == 2)
		iParam1 = func_858();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/];
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/];
	
		default:
		
	}

	return -1f;
}

int func_791(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x1D5A3 Hash - 0xB3CE93F ^0x959FFBC5
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_858();

	ped = PLAYER::PLAYER_PED_ID();

	if (bParam2)
		if (fParam1 >= 100f)
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		else
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	if (bParam3)
		func_859(iParam0, 7000, iParam5);

	if (fParam1 > 100f)
		fParam1 = 100f;
	else if (fParam1 < 0f)
		fParam1 = 0f;

	func_860(ped, iParam0, fParam1);
	func_861(iParam0, fParam1, bParam4, iParam5);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(ped, func_798(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

void func_792(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1D659 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_762(*uParam0);
	i = func_763(*uParam0);
	j = func_764(*uParam0);
	k = func_765(*uParam0);
	l = func_766(*uParam0);
	m = func_767(*uParam0);

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

	for (m = m - iParam1; m < 0; m = m + 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (l = l - iParam2; l < 0; l = l + 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (k = k - iParam3; k < 0; k = k + 24)
	{
		iParam4 = iParam4 + 1;
	}

	for (j = j - iParam4; j <= 0; j = j + num3)
	{
		iParam5 = iParam5 + 1;
		num2 = i - 1;
	
		if (num2 < 0)
		{
			iParam6 = iParam6 + 1;
			i = i + 12;
		}
	
		num3 = func_768(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_769(uParam0, m, l, k, j, i, num);
	return;
}

int func_793(int iParam0, int iParam1) // Position - 0x1D7CC Hash - 0xAAC15258 ^0xF098E005
{
	if (iParam1 == 2)
		iParam1 = func_858();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_2;
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2;
	
		default:
		
	}

	return -1;
}

int func_794(int iParam0, int iParam1) // Position - 0x1D81B Hash - 0xAAC15258 ^0x5B988360
{
	if (iParam1 == 2)
		iParam1 = func_858();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_1;
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1;
	
		default:
		
	}

	return -15;
}

void func_795(int iParam0, int iParam1, int iParam2) // Position - 0x1D86C Hash - 0x8F2CCCF2 ^0x7EED1EE3
{
	if (iParam2 == 2)
		iParam2 = func_858();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_796(int iParam0, int iParam1, int iParam2) // Position - 0x1D8C1 Hash - 0x8F2CCCF2 ^0xDB456F85
{
	if (iParam2 == 2)
		iParam2 = func_858();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_797(int iParam0) // Position - 0x1D916 Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

int func_798(int iParam0) // Position - 0x1D93A Hash - 0x26AB94C2 ^0x26AB94C2
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		default:
		
	}

	return 0;
}

int func_799(int iParam0) // Position - 0x1D969 Hash - 0x5163992 ^0x5163992
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

void func_800(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1D998 Hash - 0x67180CD8 ^0x6965D1E9
{
	char* str;

	str = func_774(iParam0, 0, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
	return;
}

float func_801(int iParam0) // Position - 0x1D9E8 Hash - 0x56878B22 ^0xF716EA88
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0) / 100f;
	return (num * 200f) - 100f;
}

int func_802(int iParam0) // Position - 0x1DA0C Hash - 0x68BC9945 ^0x68BC9945
{
	switch (iParam0)
	{
		case 0:
			return 87;
	
		case 1:
			return 85;
	
		case 2:
			return 86;
	
		default:
		
	}

	return -1;
}

char* func_803(int iParam0) // Position - 0x1DA3E Hash - 0x21CE226B ^0x7A73FEC0
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
	
		case 1:
			return "StaminaCoreValue";
	
		case 2:
			return "DeadEyeCoreValue";
	
		default:
		
	}

	return "";
}

int func_804(int iParam0) // Position - 0x1DA79 Hash - 0x7401DE8A ^0xC8FAA995
{
	if (iParam0 == 2)
		iParam0 = func_858();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850;
	
		case 1:
			return Global_1954819.f_866.f_115;
	
		default:
		
	}

	return -1;
}

void func_805(float fParam0, Ped pedParam1) // Position - 0x1DAB8 Hash - 0x2062487E ^0xADB8AE45
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	ENTITY::_CHANGE_ENTITY_HEALTH(pedParam1, fParam0, 0, 0);
	return;
}

void func_806(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1DAFA Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

int func_807(int iParam0) // Position - 0x1DB2A Hash - 0x4B3CC2BE ^0x5B1CA90F
{
	if (iParam0 == 2)
		iParam0 = func_858();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_2;
	
		case 1:
			return Global_1954819.f_866.f_115.f_2;
	
		default:
		
	}

	return -1;
}

void func_808(float fParam0) // Position - 0x1DB6D Hash - 0xEBF0A2AB ^0x54370C29
{
	Ped ped;

	if (fParam0 == 0f)
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	PED::_CHANGE_PED_STAMINA(ped, fParam0);
	return;
}

int func_809(int iParam0) // Position - 0x1DBA7 Hash - 0x4B3CC2BE ^0x6D5E7BC6
{
	if (iParam0 == 2)
		iParam0 = func_858();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_1;
	
		case 1:
			return Global_1954819.f_866.f_115.f_1;
	
		default:
		
	}

	return -1;
}

void func_810(float fParam0, BOOL bParam1) // Position - 0x1DBEA Hash - 0x1FE7F29A ^0xE2FCD967
{
	Player player;
	Ped ped;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();
	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(player) && fParam0 > 0f)
		return;

	if (fParam0 == 0f)
		return;

	playerSpecialAbilityMultiplier = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(player);

	if (fParam0 < 0f && bParam1 == true)
		bParam1 = false;

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, 1f);

	if (fParam0 > 0f)
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(player, fParam0, 0, 0, 0);
	else
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(player, fParam0, 0);

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, playerSpecialAbilityMultiplier);

	return;
}

void func_811(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0x1DC7E Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_812(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1DCC2 Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_774(0, 1, bParam0, bParam1);
	str = MISC::VAR_STRING(2, str);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[1], bParam2);

	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}

	return;
}

void func_813(var uParam0) // Position - 0x1DDBA Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_862(&(uParam0->f_3));
	return;
}

void func_814(var uParam0) // Position - 0x1DDD8 Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_863(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

void func_815(int iParam0, int iParam1, int iParam2) // Position - 0x1DDF9 Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_864(iParam1);
	func_865(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_866(&(iParam0->f_26), num2);
	
		if (func_867(iParam0->f_26, &num))
			func_868(num, num2);
	}

	return;
}

BOOL func_816(var uParam0, int iParam1, int iParam2) // Position - 0x1DE42 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_817() // Position - 0x1DE79 Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

BOOL func_818() // Position - 0x1DE87 Hash - 0x4228A1C2 ^0x1EB92889
{
	return Global_1572887.f_13;
}

void func_819(Player plParam0) // Position - 0x1DE95 Hash - 0xB00E785D ^0x2BE12BE6
{
	Player player;

	if (Global_1572887.f_13 != false || Global_1572887.f_12 != false)
		return;

	player = plParam0;

	if (Global_1058888.f_42287.f_1[player /*5*/] == 0)
		return;

	func_820(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1058888.f_42287.f_1[player /*5*/] = 0;
	return;
}

void func_820(Player plParam0) // Position - 0x1DEF0 Hash - 0x803C3DC4 ^0x78AECBF
{
	if (Global_1058888.f_42287.f_1[plParam0 /*5*/].f_1 != 0)
	{
		Global_1058888.f_42287.f_1[plParam0 /*5*/].f_2 = 0;
		Global_1058888.f_42287.f_1[plParam0 /*5*/].f_1 = 0;
	}

	return;
}

int func_821(int iParam0) // Position - 0x1DF31 Hash - 0xD14E7A6C ^0x65ACC420
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

BOOL func_822(int iParam0, var uParam1) // Position - 0x1DFA7 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_823() // Position - 0x1DFB0 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_824(int iParam0) // Position - 0x1DFB9 Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_140(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_140(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_140(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_825(int iParam0, int iParam1) // Position - 0x1E01B Hash - 0xD5391B76 ^0xDBAA77CE
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

const char* func_826(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1E04D Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_827(int iParam0) // Position - 0x1E061 Hash - 0x21CE226B ^0x85832E9C
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

char* func_828(int iParam0) // Position - 0x1E09C Hash - 0x21CE226B ^0x4CD931B3
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

int func_829(int iParam0) // Position - 0x1E0D7 Hash - 0x21FAF347 ^0x467E3BE5
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

int func_830(int iParam0) // Position - 0x1E112 Hash - 0x5163992 ^0x5163992
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

int func_831(int iParam0) // Position - 0x1E141 Hash - 0x21FAF347 ^0xA8C8F0DA
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

void func_832(Ped pedParam0, Any* panParam1) // Position - 0x1E17C Hash - 0x2B5AFE28 ^0xF454BB04
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
	
		if (func_137(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_833(BOOL bParam0) // Position - 0x1E1E1 Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_42(hash, 0))
			func_608(hash, false, bParam0);
	
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

void func_834(int iParam0) // Position - 0x1E27A Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_56() == -1)
	{
		func_869(352481484);
	
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
	
		if (func_100(hash) != -999503751)
			func_604(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_603(hash, false))
			func_111(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_835(Ped pedParam0, var uParam1) // Position - 0x1E46A Hash - 0xEFD384E2 ^0xD2D4DFA3
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
				if (func_475(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

var func_836(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1E513 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_837(var uParam0, int iParam1) // Position - 0x1E52A Hash - 0xD05180BA ^0x39589262
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

void func_838(var uParam0, int iParam1) // Position - 0x1E5B0 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_839(var uParam0, int iParam1) // Position - 0x1E5EC Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_763(*uParam0);
	num2 = func_762(*uParam0);

	if (iParam1 < 1 || iParam1 > func_768(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_840(var uParam0, int iParam1) // Position - 0x1E63F Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_841(var uParam0, int iParam1) // Position - 0x1E67A Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_842(var uParam0, int iParam1) // Position - 0x1E6B3 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_843(int iParam0) // Position - 0x1E6EB Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_767(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_766(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_765(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_762(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_763(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_764(iParam0);

	if (num6 < 1 || num6 > func_768(num5, num4))
		return false;

	return true;
}

BOOL func_844(Hash hParam0) // Position - 0x1E7C7 Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_42(hParam0, 0))
		return false;

	if (func_91(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_845(Hash hParam0) // Position - 0x1E7F1 Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_42(hParam0, 0))
		return false;

	if (func_91(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_846(Hash hParam0) // Position - 0x1E81B Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_42(hParam0, 0))
		return false;

	if (func_91(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_847(Hash hParam0) // Position - 0x1E845 Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_42(hParam0, 0))
		return false;

	if (func_91(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_848(int iParam0, int iParam1) // Position - 0x1E86F Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_870(iParam0);
	
		case 1:
			return func_871(iParam0);
	
		case 2:
			return func_872(iParam0);
	
		case 3:
			return func_873(iParam0);
	}

	return 0;
}

Hash func_849(int iParam0, int iParam1) // Position - 0x1E8C8 Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_874(iParam0);
	
		case 1:
			return func_875(iParam0);
	
		case 2:
			return func_876(iParam0);
	
		case 3:
			return func_877(iParam0);
	
		case 4:
			return func_878(iParam0);
	
		case 5:
			return func_879(iParam0);
	
		case 6:
			return func_880(iParam0);
	
		case 7:
			return func_881(iParam0);
	
		case 8:
			return func_882(iParam0);
	}

	return 0;
}

BOOL func_850(var uParam0, int iParam1) // Position - 0x1E97B Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

int func_851() // Position - 0x1E99B Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

BOOL func_852(int iParam0) // Position - 0x1E9A7 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_213(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_853(int iParam0) // Position - 0x1E9DF Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_213(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_852(iParam0))
		return false;

	ped = func_104(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

void func_854(var uParam0) // Position - 0x1EA33 Hash - 0x6843C143 ^0xA531F0D1
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

int func_855(int iParam0) // Position - 0x1EADA Hash - 0x1B64DC55 ^0x1B64DC55
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

void func_856(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1EB12 Hash - 0x125E1FB8 ^0x58C5F328
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

BOOL func_857(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x1EB87 Hash - 0xF684EE16 ^0xD8F147D7
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

int func_858() // Position - 0x1EBB0 Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (func_883())
		return 1;

	return 0;
}

void func_859(int iParam0, int iParam1, int iParam2) // Position - 0x1EBC4 Hash - 0x22949E32 ^0xF7641F46
{
	if (iParam2 == 2)
		iParam2 = func_858();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_860(Ped pedParam0, int iParam1, float fParam2) // Position - 0x1EC15 Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_803(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_884(iParam1), fParam2, -1);

	return;
}

void func_861(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x1EC41 Hash - 0x31C6C7F2 ^0x7DF2B018
{
	int gameTimer;

	if (iParam3 == 2)
		iParam3 = func_858();

	gameTimer = MISC::GET_GAME_TIMER();
	func_885(iParam0, fParam1, iParam3);

	if (bParam2)
		func_886(iParam0, gameTimer, iParam3);

	return;
}

void func_862(var uParam0) // Position - 0x1EC74 Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_863(var uParam0, Any anParam1, int iParam2) // Position - 0x1ECA0 Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_887(func_420());

	if (*uParam0)
		func_862(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_56() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_864(int iParam0) // Position - 0x1ECD7 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_865(int iParam0, int iParam1) // Position - 0x1ECEE Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_866(var uParam0, int iParam1) // Position - 0x1ED36 Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_813(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_867(int iParam0, var uParam1) // Position - 0x1ED67 Hash - 0xE231A73F ^0x924E070C
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

void func_868(int iParam0, int iParam1) // Position - 0x1EDAB Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_869(int iParam0) // Position - 0x1EDC4 Hash - 0x958E8FB2 ^0x9CA4541C
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
	unk = { func_336(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_339(&unk, &num, &num2, false))
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
	
		func_138(num);
	}

	return;
}

Hash func_870(int iParam0) // Position - 0x1EE8E Hash - 0xC02FF737 ^0xE6E3E291
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

Hash func_871(int iParam0) // Position - 0x1EF1D Hash - 0xC02FF737 ^0x9CC78C98
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

Hash func_872(int iParam0) // Position - 0x1EFAC Hash - 0xC02FF737 ^0x26BFE76B
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

Hash func_873(int iParam0) // Position - 0x1F03B Hash - 0xC02FF737 ^0xC89D76B1
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

Hash func_874(int iParam0) // Position - 0x1F0CA Hash - 0x51E02475 ^0x6FAD83C9
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

Hash func_875(int iParam0) // Position - 0x1F113 Hash - 0x51E02475 ^0x73BA00BD
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

Hash func_876(int iParam0) // Position - 0x1F15C Hash - 0x51E02475 ^0xD39CAF97
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

Hash func_877(int iParam0) // Position - 0x1F1A5 Hash - 0x51E02475 ^0xB8F3F001
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

Hash func_878(int iParam0) // Position - 0x1F1EE Hash - 0x51E02475 ^0xCED8E5FA
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

Hash func_879(int iParam0) // Position - 0x1F237 Hash - 0x51E02475 ^0x25F7B61
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

Hash func_880(int iParam0) // Position - 0x1F280 Hash - 0x51E02475 ^0xE0DEBCEF
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

Hash func_881(int iParam0) // Position - 0x1F2C9 Hash - 0x51E02475 ^0x50FB5131
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

Hash func_882(int iParam0) // Position - 0x1F312 Hash - 0x51E02475 ^0x8656D204
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

BOOL func_883() // Position - 0x1F35B Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1954819.f_866;
}

char* func_884(int iParam0) // Position - 0x1F36A Hash - 0x21CE226B ^0xB3249BD5
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
	
		case 1:
			return "isLowStaminaCoreActive";
	
		case 2:
			return "isLowDeadEyeCoreActive";
	
		default:
		
	}

	return "";
}

void func_885(int iParam0, float fParam1, int iParam2) // Position - 0x1F3A5 Hash - 0x22949E32 ^0x7BF032F1
{
	if (iParam2 == 2)
		iParam2 = func_858();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_886(int iParam0, int iParam1, int iParam2) // Position - 0x1F3F6 Hash - 0x8F2CCCF2 ^0x17FB84D
{
	if (iParam2 == 2)
		iParam2 = func_858();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_887(int iParam0) // Position - 0x1F44B Hash - 0xB4860741 ^0xB4860741
{
	if (func_56() == -1)
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

