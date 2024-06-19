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
	var uLocal_30 = 1;
	var uLocal_31 = 1;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xD9ED4176 ^0x55FE27C4
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	while (true)
	{
		switch (iLocal_14)
		{
			case 0:
				func_2(&iLocal_14);
				iLocal_14.f_4 = Global_40.f_9.f_1;
				iLocal_14.f_5 = { Global_40.f_9.f_2 };
				iLocal_14.f_8 = Global_40.f_9.f_5;
				PROPSET::_REQUEST_PROP_SET(iLocal_14.f_4);
				func_3(&(iLocal_14.f_12), iLocal_14.f_5, 0f, 0, 1, false, true, 0, 0, true, 1);
				func_4(&iLocal_14, 1);
				break;
		
			case 1:
				if (func_5(&(iLocal_14.f_12)))
				{
					iLocal_14.f_26 = MISC::GET_GAME_TIMER();
					func_4(&iLocal_14, 2);
				}
				break;
		
			case 2:
				func_2(&iLocal_14);
			
				if (PROPSET::_HAS_PROP_SET_LOADED(iLocal_14.f_4) || iLocal_14.f_26 + 5000 < MISC::GET_GAME_TIMER())
				{
					func_6(&(iLocal_14.f_10), iLocal_14.f_5, 4.5f);
					func_7(&(iLocal_14.f_11), iLocal_14.f_5, 4.5f, 0, false);
					iLocal_14.f_2 = PROPSET::_CREATE_PROP_SET(iLocal_14.f_4, iLocal_14.f_5, 1, iLocal_14.f_8, 1150681088, false, true);
					iLocal_14.f_26 = MISC::GET_GAME_TIMER();
					func_4(&iLocal_14, 3);
				}
				break;
		
			case 3:
				func_2(&iLocal_14);
				iLocal_14.f_3 = TASK::FIND_SCENARIO_OF_TYPE_HASH(iLocal_14.f_5, Global_40.f_9.f_6, 100f, 1, false);
			
				if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_14.f_3))
				{
					TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_14.f_3, 0, 0, false, true, 0, false, -1082130432, false);
					iLocal_14.f_26 = MISC::GET_GAME_TIMER();
					func_4(&iLocal_14, 4);
				}
				else if (5000 + iLocal_14.f_26 < MISC::GET_GAME_TIMER())
				{
					iLocal_14.f_26 = MISC::GET_GAME_TIMER();
					func_4(&iLocal_14, 4);
				}
				break;
		
			case 4:
				func_2(&iLocal_14);
			
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || 5000 + iLocal_14.f_26 < MISC::GET_GAME_TIMER())
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
					func_8(1024);
					func_9();
					AUDIO::PLAY_SOUND_FRONTEND("TITLE_SCREEN_EXIT", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
					CAM::DO_SCREEN_FADE_IN(500);
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
					HUD::_UI_PROMPT_FILTER_CLEAR();
					func_10(false);
					func_11();
					func_4(&iLocal_14, 5);
				}
				break;
		
			case 5:
				func_2(&iLocal_14);
				func_1();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x242 Hash - 0xD72887ED ^0xE240B40D
{
	func_12(&Global_1935630, 131072);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(var uParam0) // Position - 0x25A Hash - 0x8116D8F1 ^0x214588A
{
	if (uParam0->f_1)
	{
		uParam0->f_1 = 0;
		return true;
	}

	return false;
}

void func_3(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12) // Position - 0x273 Hash - 0xC4B7FDFA ^0xB5FED6F0
{
	var unk;
	int num;
	ItemSet itemset;
	BOOL flag;
	int i;
	ScrHandle indexedItemInItemset;
	Entity entityFromItem;

	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
	uParam0->f_4 = bParam5;
	uParam0->f_5 = bParam6;
	uParam0->f_6 = iParam9;
	uParam0->f_7 = iParam10;
	uParam0->f_8 = iParam12;

	if (func_13() != -1)
	{
		func_14(!bParam5);
		func_15(!bParam6);
		func_16(vParam1, fParam4, true);
		unk.f_12 = 255;
		unk.f_13 = 255;
		unk.f_3 = 51;
		func_18(unk, func_17(0, 15), false, false);
		return;
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
			return;
	
		CAM::DO_SCREEN_FADE_OUT(0);
		func_19(true);
		num = func_20(vParam1, true);
	
		if (bParam8)
			if (func_21(num) == 1 || func_21(num) == 2 || num == func_22(Global_40.f_4283))
				func_10(false);
	
		if (!bParam7)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
		
			if (PED::IS_PED_ON_MOUNT(Global_35))
				PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
		}
	
		if (bParam11)
		{
			itemset = ITEMSET::CREATE_ITEMSET(true);
			flag = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, itemset);
			i = 0;
		
			for (i = 0; i < ITEMSET::GET_ITEMSET_SIZE(itemset); i = i + 1)
			{
				indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset);
				entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset);
			
				if (ENTITY::DOES_ENTITY_EXIST(entityFromItem))
				{
					PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, true);
				
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(entityFromItem))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entityFromItem, true, true);
				
					ENTITY::DELETE_ENTITY(&entityFromItem);
					flag = true;
				}
			}
		
			if (flag && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			}
		
			ITEMSET::DESTROY_ITEMSET(itemset);
		}
	
		PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam1, fParam4, true, true, false, false);
	}

	return;
}

void func_4(var uParam0, int iParam1) // Position - 0x42A Hash - 0x7D831754 ^0x841E14CC
{
	*uParam0 = iParam1;
	uParam0->f_1 = 1;
	return;
}

BOOL func_5(var uParam0) // Position - 0x43C Hash - 0x24DF290 ^0x919DF0CA
{
	int num;

	if (func_13() != -1)
		return true;

	if (uParam0->f_12 == 0)
		uParam0->f_12 = MISC::GET_GAME_TIMER();

	num = func_20(*uParam0, true);

	if (func_23(num))
		if (Global_1888801[num /*35*/].f_12 != 0)
			PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1888801[num /*35*/].f_12);

	if (!PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::PLAYER_ID()))
	{
		if (uParam0->f_12 + 20000 < MISC::GET_GAME_TIMER())
			PLAYER::STOP_PLAYER_TELEPORT();
	
		return false;
	}

	if (uParam0->f_5)
	{
		func_24(1, 0);
		uParam0->f_5 = 0;
	}

	func_25();

	if (uParam0->f_10 == 0)
		uParam0->f_10 = MISC::GET_GAME_TIMER();

	if (uParam0->f_10 + 1000 > MISC::GET_GAME_TIMER())
		return false;

	switch (func_21(num))
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 8:
		case 9:
			if (!func_26(num) && uParam0->f_10 + 20000 + 1000 > MISC::GET_GAME_TIMER())
				return false;
		
			if (uParam0->f_11 == 0)
				uParam0->f_11 = MISC::GET_GAME_TIMER();
		
			if (uParam0->f_11 + 1000 > MISC::GET_GAME_TIMER())
				return false;
			break;
	}

	if (uParam0->f_8 && !uParam0->f_9)
	{
		TASK::_0x4161648394262FDF(Global_36, 60f);
		PED::INSTANTLY_FILL_PED_POPULATION();
		uParam0->f_9 = 1;
	}

	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);

	if (uParam0->f_6)
	{
		if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			STREAMING::LOAD_SCENE_START(*uParam0, CAM::GET_GAMEPLAY_CAM_ROT(2), 500f, 4);
			return false;
		}
	
		if (!STREAMING::IS_LOAD_SCENE_LOADED() && uParam0->f_11 + 20000 + 1000 > MISC::GET_GAME_TIMER())
		{
			if (!PED::IS_PED_INJURED(Global_35))
				BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), *uParam0) > 2500f;
		
			return false;
		}
	
		STREAMING::LOAD_SCENE_STOP();
	}

	if (uParam0->f_7)
	{
		if (uParam0->f_13 == 0)
			uParam0->f_13 = MISC::GET_GAME_TIMER();
	
		if (uParam0->f_13 + 20000 > MISC::GET_GAME_TIMER())
			if (!func_27())
				return false;
	}

	if (uParam0->f_8 && !PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED())
		return false;

	Global_36 = { *uParam0 };

	if (uParam0->f_4)
		CAM::DO_SCREEN_FADE_IN(500);

	return true;
}

void func_6(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x66D Hash - 0xDF70B23C ^0xE513F5B4
{
	int num;

	num = 258;
	func_28(uParam0, uParam1, fParam4, 2, num, 0);
	return;
}

void func_7(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6) // Position - 0x68A Hash - 0x8F06AC09 ^0xFB44C41
{
	int num;

	num = 61;

	if (bParam6)
		num = num | 2 | 256;

	func_28(uParam0, uParam1, fParam4, 1, num, 0);
	return;
}

void func_8(int iParam0) // Position - 0x6B5 Hash - 0x3410C012 ^0xB1BD83F0
{
	Global_1572864.f_3 = Global_1572864.f_3 || iParam0;
	return;
}

void func_9() // Position - 0x6CC Hash - 0x12FD943F ^0x7714E643
{
	if (Global_1935630.f_3 != 0)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1935630.f_3);
		Global_1935630.f_3 = 0;
	}

	return;
}

void func_10(BOOL bParam0) // Position - 0x6EF Hash - 0x6FC90683 ^0xF9E36F55
{
	int i;
	Hash weaponHash;

	if (Global_43891)
		return;

	for (i = 0; i < 30; i = i + 1)
	{
		weaponHash = func_29(Global_35, i, false, true);
	
		if (WEAPON::IS_WEAPON_VALID(weaponHash))
			if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) || func_30(weaponHash))
				if (!bParam0 || i != 7 && i != 9)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash);
	}

	return;
}

void func_11() // Position - 0x761 Hash - 0x31885132 ^0xE1BFCA93
{
	func_12(&Global_1935630, 4096);
	func_31();
	func_32(0, false);
	func_33();
	func_34(0f, 0f, 0f);
	Global_40.f_9.f_15 = -1;
	func_35(0);
	Global_1310720.f_1 = { 0f, 0f, 0f };
	Global_40.f_9.f_10 = -1;
	Global_40.f_9.f_12 = 0;
	Global_40.f_9.f_13 = 0f;
	Global_1310720.f_4 = 0;
	Global_1310720.f_6 = 0;
	Global_1310720.f_7 = 0;
	Global_1310720.f_8 = 1;
	Global_1310720.f_13 = 0;
	Global_1310720.f_14 = 0;
	Global_1310720.f_12 = 0;
	Global_1310720.f_27 = 0;
	Global_1310720.f_28 = 0;
	Global_1310720.f_29 = -1;
	Global_1935630.f_4 = 0;
	Global_1897952.f_40 = 0;
	Global_1310720.f_24 = joaat("WEAPON_UNARMED");
	Global_1310720.f_22 = -1;
	func_36(0);
	func_37(0);
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_38(true);
	func_39(false);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DEATH_SCENE"))
		AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DYING_SCENE"))
		AUDIO::STOP_AUDIO_SCENE("DYING_SCENE");

	return;
}

void func_12(int iParam0, int iParam1) // Position - 0x860 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_13() // Position - 0x875 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_14(BOOL bParam0) // Position - 0x883 Hash - 0x64468130 ^0x64468130
{
	if (!bParam0)
		func_40(17);
	else
		func_41(17);

	return;
}

void func_15(BOOL bParam0) // Position - 0x8A2 Hash - 0x7B646A1E ^0x7B646A1E
{
	if (!bParam0)
		func_40(23);
	else
		func_41(23);

	return;
}

void func_16(var uParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x8C1 Hash - 0x920DE2C2 ^0x920DE2C2
{
	if (func_42(uParam0, fParam3))
		func_43(true, bParam4);

	return;
}

var func_17(int iParam0, int iParam1) // Position - 0x8DD Hash - 0x42C305C ^0x81DF2F42
{
	return func_44(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_18(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, BOOL bParam17, BOOL bParam18) // Position - 0x8FB Hash - 0xC0B30484 ^0xEDC09E5
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
				func_45(&(Global_1058888.f_43130), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 16, 4, &uParam16);
	return;
}

void func_19(BOOL bParam0) // Position - 0x989 Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

int func_20(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x999 Hash - 0x25DFFF2C ^0x74CE6365
{
	int num;

	num = func_46();

	if (func_23(num))
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[num /*35*/].f_3, vParam0))
			return num;

	return func_47(vParam0, bParam3);
}

int func_21(int iParam0) // Position - 0x9D4 Hash - 0xE4DA9E55 ^0xA7262997
{
	if (!func_23(iParam0))
		return 0;

	return Global_1888801[iParam0 /*35*/].f_20;
}

int func_22(int iParam0) // Position - 0x9F4 Hash - 0x84838E68 ^0x84838E68
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 43;
	
		case 1:
			return 71;
	
		case 2:
			return 98;
	
		case 3:
			return 9;
	
		case 4:
			return 58;
	
		case 5:
			return 4;
	
		case 6:
			return 79;
	
		case 7:
			return 22;
	
		case 8:
			return 37;
	
		default:
		
	}

	iParam0 != -1;
	return -1;
}

BOOL func_23(int iParam0) // Position - 0xA77 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

void func_24(BOOL bParam0, int iParam1) // Position - 0xA8D Hash - 0x79C7FE3F ^0x6329E121
{
	BOOL flag;

	if (func_48())
		if (func_49(255))
			if (!func_50(36, 255))
				return;

	flag = bParam0;

	if (!bParam0)
	{
		if (func_23(Global_1894899.f_2) && func_26(Global_1894899.f_2))
		{
			func_51(Global_1894899.f_2, 0);
		
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				func_52(16);
			}
		}
		else if (func_23(Global_1894899.f_2) && !func_53(Global_1894899.f_2, 2))
		{
			bParam0 = true;
		}
	}

	if (bParam0)
	{
		!CAM::IS_SCREEN_FADED_OUT();
		Global_1894899.f_7 = 0;
		func_54(16);
		func_55();
	
		if (flag)
			func_54(true);
	}

	return;
}

void func_25() // Position - 0xB4B Hash - 0x23A2FC3A ^0x23A2FC3A
{
	func_54(8);
	return;
}

BOOL func_26(int iParam0) // Position - 0xB59 Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_23(iParam0))
		return false;

	return func_53(iParam0, 8);
}

BOOL func_27() // Position - 0xB77 Hash - 0x4C66D75D ^0xB06D9886
{
	if (Global_1879534.f_1 || Global_1879534)
		return false;

	if (Global_1935630.f_2 != Global_40.f_39 || ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39)
		return false;

	if (Global_40.f_7729 != Global_1905941)
		return false;

	return true;
}

void func_28(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, int iParam7) // Position - 0xBCE Hash - 0xA400C89E ^0xDFDC4B6A
{
	if (!func_56(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
	
		if (func_56(uParam0))
		{
		}
	}

	return;
}

Hash func_29(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC02 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

BOOL func_30(Hash hParam0) // Position - 0xC28 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

void func_31() // Position - 0xC36 Hash - 0x8CBEB066 ^0xDF7EC571
{
	Player player;
	BOOL flag;
	var crimeType;
	int i;
	Hash crimeType2;
	int num;

	player = func_57();
	flag = !func_58(Global_1935630, 4194304) || Global_1935630.f_17 > 0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (flag)
		{
			Global_1935630.f_13 = LAW::ARE_WITNESSES_ACTIVE(player) || LAW::_ARE_INVESTIGATORS_ACTIVE(player, false, 0);
			Global_1935630.f_15 = LAW::_0x148E7AC8141C9E64(player);
			Global_1935630.f_14 = LAW::_0x9945A3E2528A02E8(player);
			Global_1935630.f_16 = LAW::_0xF46108C50A22B029();
			Global_1935630.f_17 = LAW::GET_WANTED_SCORE(player);
			Global_1935630.f_26 = LAW::_0x9D5C9A5A3321B128(player);
			Global_1935630.f_21 = LAW::_0xDAEFDFDB2AEECE37(LAW::_GET_HUD_PLAYER_CRIME_TYPE(player), 0);
			Global_1935630.f_18 = LAW::IS_LAW_INCIDENT_ACTIVE(player);
		
			if (Global_1935630.f_18)
			{
				LAW::_0x9C5BD8C562565CE6(&crimeType);
				Global_1935630.f_19 = crimeType.f_10;
				Global_1935630.f_23 = crimeType.f_11 == 6;
			}
		
			Global_1935630.f_20 = -1;
		
			for (i = 0; i < 24; i = i + 1)
			{
				if (LAW::GET_PLAYER_REGISTERED_CRIME(player, i, &crimeType2))
				{
					if (crimeType2.f_10)
					{
						num = LAW::_0xDAEFDFDB2AEECE37(crimeType2, 0);
					
						if (num > Global_1935630.f_20)
							Global_1935630.f_20 = num;
					}
				}
			}
		}
		else
		{
			func_59();
		}
	}

	if (Global_1935630.f_40 != 0)
		Global_1935630.f_41 = Global_1935630.f_40;

	Global_1935630.f_22 = PLAYER::IS_PLAYER_BEING_ARRESTED(player, true);
	Global_1935630.f_12 = ENTITY::IS_ENTITY_DEAD(Global_35);

	if (!Global_1935630.f_12)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &(Global_1935630.f_44), false, 0, false);
		Global_1935630.f_40 = PED::GET_MOUNT(Global_35);
	
		if (Global_1572887.f_12 == -1 && Global_1935630 & 262144 != 0)
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
	
		if (Global_1572887.f_12 != -1)
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		else if (Global_1935630 & 65536 != 0)
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
	
		if (Global_1572887.f_12 == -1)
		{
			if (!func_60(9))
				PED::SET_PED_RESET_FLAG(Global_35, 135, true);
		
			if (!func_60(14))
				PED::SET_PED_RESET_FLAG(Global_35, 144, true);
		
			if (!func_60(36))
				HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
		
			if (CAM::IS_DEATH_FAIL_CAMERA_RUNNING())
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
				HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			}
			else if (CAM::IS_SCREEN_FADED_OUT() && func_61() && !func_62(0, false, true))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
		
			if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_SELECT_RADAR_MODE")))
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK2"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK2"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_BOAT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_BOAT_ATTACK2"), false);
			}
		
			if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44) && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SELECT_RADAR_MODE"), false);
		}
	}
	else
	{
		if (func_13() == -1 && CAM::IS_DEATH_FAIL_CAMERA_RUNNING())
			HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	
		Global_1935630.f_44 = 0;
		Global_1935630.f_40 = 0;
	}

	return;
}

void func_32(int iParam0, BOOL bParam1) // Position - 0xF6A Hash - 0x9D46840B ^0xDAAD5146
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

void func_33() // Position - 0xFDB Hash - 0x94D147DC ^0x94D147DC
{
	if (func_13() != -1)
		return;

	func_63();
	return;
}

void func_34(float fParam0, float fParam1, float fParam2) // Position - 0xFF2 Hash - 0xB20C33B1 ^0x8BCEF44A
{
	Global_40.f_9.f_7 = { fParam0 };
	return;
}

void func_35(int iParam0) // Position - 0x1007 Hash - 0x33B51C79 ^0xD9769E91
{
	Global_1572864.f_21 = iParam0;
	Global_1310720.f_4 = MISC::GET_GAME_TIMER();
	return;
}

void func_36(int iParam0) // Position - 0x1021 Hash - 0x29A8F290 ^0x870EAF89
{
	Global_1310720.f_9 = iParam0;
	return;
}

void func_37(int iParam0) // Position - 0x1031 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1310720.f_10 = iParam0;
	return;
}

void func_38(BOOL bParam0) // Position - 0x1041 Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_12(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_64(&Global_1935630, 4194304);
	}

	MISC::ENABLE_DISPATCH_SERVICE(DT_BikerBackup, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceRiders, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_FireDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_AmbulanceDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceVehicleRequest, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitPulledOver, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitCruising, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_Gangs, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceBoat, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_ArmyVehicle, bParam0);
	return;
}

int func_39(BOOL bParam0) // Position - 0x10E4 Hash - 0xE318106C ^0x60090061
{
	if (!bParam0 && func_65(373691918))
	{
		LAW::_0xE9AC8466ABE484BB(false, 0);
		LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), true, 0);
		return 0;
	}

	LAW::_0xE9AC8466ABE484BB(bParam0, 0);
	return 1;
}

int func_40(int iParam0) // Position - 0x111D Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_66(&(Global_1109000.f_4), iParam0, 5))
		return 1;

	return 0;
}

int func_41(int iParam0) // Position - 0x113A Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_67(&(Global_1109000.f_4), iParam0, 5))
		return 1;

	return 0;
}

BOOL func_42(var uParam0, var uParam1, var uParam2, float fParam3) // Position - 0x1157 Hash - 0x7393B760 ^0x7393B760
{
	if (_IS_NULL_VECTOR(uParam0))
		return false;

	if (func_69(255) == 4)
		return false;

	func_50(4, 255);
	func_41(4);
	func_70(&(Global_1109000.f_409));
	Global_1109000.f_409.f_6 = { uParam0 };
	Global_1109000.f_409 = fParam3;
	Global_1109000.f_409.f_5 = 1;
	Global_1109000.f_22.f_16 = 0;
	Global_1109000.f_22.f_17 = 0;
	func_71(Global_1109000.f_409, 42);
	return true;
}

void func_43(BOOL bParam0, BOOL bParam1) // Position - 0x11DC Hash - 0x2F17103B ^0x1C4D2C36
{
	if (func_69(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_40(0);
	}
	else
	{
		if (bParam1)
			func_72(0, false, 0, true);
	
		func_41(0);
		func_73(&(Global_1109000.f_379));
		Global_1109000.f_379 = 0f;
		Global_1109000.f_379.f_5 = 1;
		Global_1109000.f_379.f_16 = 0;
		Global_1109000.f_379.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1109000.f_379.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109000.f_379.f_17 = { Global_1899378.f_23.f_1, Global_1899378.f_23.f_1, Global_1899378.f_23.f_1 };
		Global_1109000.f_379.f_17.f_9 = joaat("volSphere");
		func_74(&(Global_1109000.f_418));
		Global_1109000.f_418.f_6 = { Global_1109000.f_379.f_17.f_6 };
		Global_1109000.f_418 = Global_1109000.f_379;
		Global_1109000.f_418.f_5 = 1;
	
		if (bParam1)
		{
			Global_1109000.f_22.f_16 = 0;
			Global_1109000.f_22.f_17 = 0;
		}
	}

	func_75(Global_1109000.f_379, 42);
	func_76(Global_1109000.f_418, 42);
	return;
}

var func_44(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x1325 Hash - 0x63C3F71D ^0x3019B977
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

	if (func_77() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_78());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_78());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_78());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_79(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_80(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1224589.f_49[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_69(i) != 1)
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
					if (!func_81(player2))
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

int func_45(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x16B4 Hash - 0xDAC4446E ^0x51EF643B
{
	if (!func_82(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*18*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

int func_46() // Position - 0x16E4 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

int func_47(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x16F2 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_83(vParam0);
	num2 = -1;

	if (Global_1894882[num] > 0)
	{
		num3 = Global_1894882[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1894065[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[num4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[num4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[num4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								num2 = num4;
								flag = true;
							}
							break;
					
						default:
							num2 = num4;
							flag = true;
							break;
					}
				}
			}
		
			num3 = num3 - 1;
		}
	}

	if (num2 != -1)
	{
	}

	return num2;
}

BOOL func_48() // Position - 0x17A9 Hash - 0x2C6DE8F6 ^0x14BC70A4
{
	if (Global_1572887.f_12 == -1)
		return false;

	return Global_1058888.f_4;
}

BOOL func_49(int iParam0) // Position - 0x17C5 Hash - 0xB1DD3D00 ^0xB1DD3D00
{
	return func_50(23, iParam0);
}

BOOL func_50(int iParam0, int iParam1) // Position - 0x17D5 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_84(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_85())
		return func_84(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_84(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

void func_51(int iParam0, int iParam1) // Position - 0x1849 Hash - 0x9642AD01 ^0xCF226DF6
{
	if (!func_23(iParam0))
		return;

	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
	return;
}

void func_52(BOOL bParam0) // Position - 0x186A Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1894899 = Global_1894899 || bParam0;
	return;
}

BOOL func_53(int iParam0, int iParam1) // Position - 0x187D Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && iParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && iParam1 != false;
}

void func_54(BOOL bParam0) // Position - 0x18B0 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1894899 = Global_1894899 - Global_1894899 && bParam0;
	return;
}

BOOL func_55() // Position - 0x18C8 Hash - 0xC95201B4 ^0xF2B2F83F
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i < 150; i = i + 1)
	{
		if (func_53(i, 1))
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1888801[i /*35*/].f_26)))
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1888801[i /*35*/].f_26));
	
		if (Global_1888801[i /*35*/].f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[i /*35*/].f_9, false))
				if (func_13() == -1)
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[i /*35*/].f_9, 523);
				else if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1888801[i /*35*/].f_9))
					SCRIPTS::_REQUEST_THREAD_EXIT(Global_1888801[i /*35*/].f_9);
			else if (func_53(i, 2))
				if (func_13() == -1)
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1888801[i /*35*/].f_26), 523);
				else
					SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(MISC::GET_HASH_KEY(&(Global_1888801[i /*35*/].f_26)));
		
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1888801[i /*35*/].f_9))
			{
				Global_1888801[i /*35*/].f_9 = 0;
				func_86(i, 11);
			}
			else
			{
				flag = true;
			}
		}
	}

	return !flag;
}

BOOL func_56(var uParam0) // Position - 0x19D4 Hash - 0x5499D461 ^0x5499D461
{
	if (*uParam0 == 0)
		return false;

	return *uParam0 != -1;
}

Player func_57() // Position - 0x19EC Hash - 0x7C4697AC ^0xA40D3BD2
{
	if (Global_1572887.f_12 != -1)
	{
		Global_35 = Global_1224589.f_3;
		Global_36 = { Global_1224589.f_11 };
		return Global_1224589.f_5;
	}

	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	return PLAYER::PLAYER_ID();
}

BOOL func_58(int iParam0, int iParam1) // Position - 0x1A3A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_59() // Position - 0x1A49 Hash - 0xA6EF402A ^0xAE403A6B
{
	Global_1935630.f_13 = 0;
	Global_1935630.f_14 = 0;
	Global_1935630.f_26 = 0;
	Global_1935630.f_15 = 0;
	Global_1935630.f_16 = 0;
	Global_1935630.f_17 = 0;
	Global_1935630.f_18 = 0;
	Global_1935630.f_19 = -1;
	Global_1935630.f_20 = -1;
	Global_1935630.f_21 = -1;
	Global_1935630.f_23 = 0;
	return;
}

BOOL func_60(int iParam0) // Position - 0x1A9E Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_87(iParam0))
		return false;

	return func_88(iParam0);
}

BOOL func_61() // Position - 0x1ABA Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_13() != -1)
		return false;

	if (!func_89())
		return false;

	if (!func_90(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_90(Global_1835011[2 /*74*/].f_1, true) && func_90(Global_1347702[120 /*49*/].f_15, true) && !func_90(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_90(Global_1835011[37 /*74*/].f_1, true) && !func_90(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_90(Global_1835011[57 /*74*/].f_1, true) && !func_90(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_90(Global_1835011[26 /*74*/].f_1, true) && !func_90(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_90(Global_1835011[62 /*74*/].f_1, true) && func_90(Global_1835011[63 /*74*/].f_1, true) && !func_90(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_90(Global_1835011[75 /*74*/].f_1, true) && !func_90(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_90(Global_1835011[76 /*74*/].f_1, true) && !func_90(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_90(Global_1835011[40 /*74*/].f_1, true) && func_90(Global_1835011[41 /*74*/].f_1, true) && !func_90(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_90(Global_1835011[62 /*74*/].f_1, true) && func_90(Global_1835011[63 /*74*/].f_1, true) && !func_90(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_90(Global_1835011[65 /*74*/].f_1, true) && func_90(Global_1835011[66 /*74*/].f_1, true) && !func_90(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_62(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1D00 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_91())
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
		num = func_92(Global_1898164.f_1[0 /*5*/]);
	
		if (func_93(num) && func_94(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_95(Global_1898164.f_1[0 /*5*/]))
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

void func_63() // Position - 0x1F04 Hash - 0xACDE207 ^0x2B185001
{
	PLAYER::_ENABLE_CUSTOM_DEADEYE_ABILITY(PLAYER::PLAYER_ID(), true);

	if (func_60(47))
		PLAYER::_ENABLE_EAGLEEYE(PLAYER::PLAYER_ID(), true);
	else
		PLAYER::_ENABLE_EAGLEEYE(PLAYER::PLAYER_ID(), false);

	return;
}

void func_64(int iParam0, int iParam1) // Position - 0x1F33 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_65(int iParam0) // Position - 0x1F44 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_96(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_66(var uParam0, int iParam1, int iParam2) // Position - 0x1F93 Hash - 0x8AC008A3 ^0x375BADC3
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::CLEAR_BIT(&uParam0->[num], offset);
	return isBitSet;
}

BOOL func_67(var uParam0, int iParam1, int iParam2) // Position - 0x1FC5 Hash - 0xA8F08582 ^0x9810C45C
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::SET_BIT(&uParam0->[num], offset);
	return !isBitSet;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1FF8 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_69(int iParam0) // Position - 0x2022 Hash - 0x322F9962 ^0x249D071F
{
	if (iParam0 == 255)
		return Global_1109000.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 25;

	if (Global_1224589.f_16[iParam0])
		return Global_1108108[iParam0 /*27*/].f_1;

	return 25;
}

void func_70(var uParam0) // Position - 0x206D Hash - 0xFBC3ACC8 ^0xFBC3ACC8
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_71(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x207F Hash - 0x6DF4F0B2 ^0x7B946ED1
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	return;
}

void func_72(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x20AC Hash - 0xD75278EF ^0x7B5AA68F
{
	func_97(iParam0);

	if (!func_98(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_99(128) && !func_100(18))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_101() == 4)
		func_40(17);

	func_102(512);
	return;
}

void func_73(var uParam0) // Position - 0x210E Hash - 0xCF95012E ^0xCF95012E
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_74(var uParam0) // Position - 0x2120 Hash - 0xFBC3ACC8 ^0xFBC3ACC8
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_75(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x2132 Hash - 0x63EE9672 ^0xDAC9325D
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0.f_4))
			{
			}
			break;
	}

	uParam0.f_16;
	VOLUME::DOES_VOLUME_EXIST(uParam0.f_27) && uParam0.f_28;
	return;
}

void func_76(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x2188 Hash - 0x6DF4F0B2 ^0x7B946ED1
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	return;
}

int func_77() // Position - 0x21B5 Hash - 0x4228A1C2 ^0x4EB570BC
{
	return Global_1051081.f_11;
}

char* func_78() // Position - 0x21C3 Hash - 0xD69A78DA ^0xD69A78DA
{
	return "unnamed";
}

BOOL func_79(int iParam0) // Position - 0x21CE Hash - 0xC360B8E6 ^0xCBE2AF9D
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

BOOL func_80(int iParam0) // Position - 0x225D Hash - 0xB11233B9 ^0x48EE22B7
{
	if (Global_1572887.f_12 == -1)
		return false;

	return func_50(32, iParam0);
}

BOOL func_81(Player plParam0) // Position - 0x227B Hash - 0x5FB1BEA6 ^0x62CB8856
{
	if (func_103(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, plParam0) != 1)
			func_104(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, plParam0) == 1;
}

BOOL func_82(var uParam0) // Position - 0x22B4 Hash - 0xEF8B385D ^0xEF8B385D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

int func_83(var uParam0, var uParam1, var uParam2) // Position - 0x22C9 Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_105(uParam0, 0f, 0f, 0, 2);
	return func_105(uParam0, Global_1894052[num /*3*/].f_1, Global_1894052[num /*3*/].f_2, Global_1894052[num /*3*/], 4);
}

BOOL func_84(var uParam0, int iParam1, int iParam2) // Position - 0x2304 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_85() // Position - 0x233B Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

void func_86(int iParam0, int iParam1) // Position - 0x2349 Hash - 0x2B17ED40 ^0x23FC9AA5
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = Global_23118[iParam0 /*11*/] - Global_23118[iParam0 /*11*/] && iParam1;
		return;
	}

	Global_1058888.f_40545[iParam0 /*11*/] = Global_1058888.f_40545[iParam0 /*11*/] - Global_1058888.f_40545[iParam0 /*11*/] && iParam1;
	return;
}

BOOL func_87(int iParam0) // Position - 0x23A2 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_88(int iParam0) // Position - 0x23B5 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL func_89() // Position - 0x23DF Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_90(int iParam0, BOOL bParam1) // Position - 0x23FE Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_106(iParam0))
	{
		case 5:
			return true;
	
		case 6:
			if (bParam1)
				return true;
			break;
	}

	return false;
}

BOOL func_91() // Position - 0x242F Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_92(int iParam0) // Position - 0x2482 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_95(iParam0))
		return -1;

	return func_108(func_107(iParam0));
}

BOOL func_93(int iParam0) // Position - 0x24A2 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_94(int iParam0, int iParam1) // Position - 0x24B8 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_95(int iParam0) // Position - 0x24C7 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_96(int iParam0, int iParam1) // Position - 0x24FA Hash - 0x8FA0E29 ^0xC3F68E87
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

void func_97(int iParam0) // Position - 0x3613 Hash - 0x42868A8 ^0x948BE552
{
	Global_1109000.f_22.f_10 = iParam0;
	return;
}

BOOL func_98(int iParam0) // Position - 0x3625 Hash - 0xA1D29AFD ^0xE01D16D
{
	return Global_1109000.f_22.f_6 && iParam0 != false;
}

BOOL func_99(int iParam0) // Position - 0x363A Hash - 0xA1D29AFD ^0xF1140B5D
{
	return Global_1109000.f_22.f_8 && iParam0 != false;
}

BOOL func_100(int iParam0) // Position - 0x364F Hash - 0x10DA64DD ^0x85E01D27
{
	return Global_1109000.f_4[Global_1109504[iParam0 /*2*/]] && Global_1109504[iParam0 /*2*/].f_1 == Global_1109504[iParam0 /*2*/].f_1;
}

int func_101() // Position - 0x367D Hash - 0x78958C45 ^0x78958C45
{
	if (Global_1109000 <= 5)
		return Global_1109000;

	if (Global_1109000 <= 21)
		return 4;

	if (Global_1109000 <= 24)
		return 3;

	return 25;
}

void func_102(int iParam0) // Position - 0x36B0 Hash - 0x5EB32340 ^0xCC3B9D16
{
	Global_1109000.f_22.f_8 = Global_1109000.f_22.f_8 || iParam0;
	return;
}

BOOL func_103(Player plParam0) // Position - 0x36CB Hash - 0x80018C76 ^0x60939258
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1058888.f_49041), plParam0))
		return true;

	return false;
}

void func_104(Player plParam0) // Position - 0x36EA Hash - 0x3D7F326C ^0x47EF75AB
{
	Player player;

	if (func_109() != false || func_13() != false)
		return;

	player = plParam0;

	if (!Global_1224589.f_16[player])
	{
		func_110(plParam0);
		return;
	}

	if (Global_1058888.f_42287.f_1[player /*5*/] == 1)
		return;

	func_111(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1058888.f_42287.f_1[player /*5*/] = 1;
	return;
}

int func_105(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x3758 Hash - 0xA452440E ^0xD3F785A1
{
	if (fParam0 < fParam3)
		if (fParam0.f_1 < fParam4)
			return iParam5 + iParam6;
		else
			return iParam5;

	if (fParam0.f_1 < fParam4)
		return iParam5 + iParam6 + 1;

	return iParam5 + 1;
}

int func_106(int iParam0) // Position - 0x37A0 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_95(iParam0))
		return -1;

	return func_112(iParam0);
}

int func_107(int iParam0) // Position - 0x37BC Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return 0;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_108(int iParam0) // Position - 0x37FA Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

BOOL func_109() // Position - 0x380D Hash - 0x4228A1C2 ^0x1EB92889
{
	return Global_1572887.f_13;
}

void func_110(Player plParam0) // Position - 0x381B Hash - 0xB00E785D ^0x2BE12BE6
{
	Player player;

	if (Global_1572887.f_13 != false || Global_1572887.f_12 != false)
		return;

	player = plParam0;

	if (Global_1058888.f_42287.f_1[player /*5*/] == 0)
		return;

	func_111(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1058888.f_42287.f_1[player /*5*/] = 0;
	return;
}

void func_111(Player plParam0) // Position - 0x3876 Hash - 0x803C3DC4 ^0x78AECBF
{
	if (Global_1058888.f_42287.f_1[plParam0 /*5*/].f_1 != 0)
	{
		Global_1058888.f_42287.f_1[plParam0 /*5*/].f_2 = 0;
		Global_1058888.f_42287.f_1[plParam0 /*5*/].f_1 = 0;
	}

	return;
}

int func_112(int iParam0) // Position - 0x38B7 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_113(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_113(int iParam0) // Position - 0x38F8 Hash - 0x6EC15CF9 ^0xE613EBE0
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

