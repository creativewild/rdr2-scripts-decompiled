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
	var uLocal_15 = 2;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	Blip blLocal_30 = 0;
	Volume volLocal_31 = 0;
	Any anLocal_32 = 0;
	BOOL bLocal_33 = 0;
	BOOL bLocal_34 = 0;
	BOOL bLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	Cam caLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	float fLocal_42 = 0f;
	char* sLocal_43 = 0;
	AnimScene ansLocal_44 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x26BAD1FD ^0xC64384D8
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_23 = 3f;
	fLocal_42 = 33.6376f;
	sLocal_43 = "script@common@cnv_camp@mini_games@dominoes_dynamic@intro";

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}

	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x46 Hash - 0x7F6641E3 ^0x66AFE25F
{
	func_3(1);

	if (func_4(iLocal_14))
		func_5(&iLocal_14, true, true);

	if (MAP::DOES_BLIP_EXIST(blLocal_30))
		MAP::REMOVE_BLIP(&blLocal_30);

	if (CAM::DOES_CAM_EXIST(caLocal_38))
		CAM::DESTROY_CAM(caLocal_38, false);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_44))
	{
		ANIMSCENE::RESET_ANIM_SCENE(ansLocal_44, 0);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_44, "PLAYER", Global_35);
		ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_44);
	}

	if (bLocal_33)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		func_6();
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_31))
	{
		func_7(volLocal_31);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(anLocal_32, false);
		VOLUME::DELETE_VOLUME(volLocal_31);
	}

	return;
}

BOOL func_2() // Position - 0xD5 Hash - 0x8479928F ^0xD06F732A
{
	BOOL flag;
	int clockHours;
	int weaponHash;
	int blipType;
	int i;
	Object object;
	int j;
	int k;
	int l;

	switch (iLocal_37)
	{
		case 0:
			if (func_8())
				func_9(1);
			break;
	
		case 1:
			if (func_10(uLocal_19, 6f, 4, 1))
				flag = false;
			else
				flag = true;
		
			clockHours = CLOCK::GET_CLOCK_HOURS();
		
			if (!func_12(func_11()) || func_13(2, false, true) || !(clockHours > 6 && clockHours < 20))
				return true;
		
			if (func_14() != 1)
				return true;
		
			if (flag && !PED::IS_PED_CARRYING_SOMETHING(Global_35) && func_15(1) && !Global_1327590.f_19745 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && !(WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 0, true) && weaponHash == joaat("weapon_kit_camera") || weaponHash == joaat("weapon_kit_binoculars")))
			{
				if (!MAP::DOES_BLIP_EXIST(blLocal_30))
				{
					blLocal_30 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MINIGAME"), uLocal_19);
				
					switch (func_16())
					{
						case 1:
							MAP::SET_BLIP_SPRITE(blLocal_30, joaat("blip_mg_dominoes"), true);
							break;
					
						case 2:
							MAP::SET_BLIP_SPRITE(blLocal_30, joaat("blip_mg_dominoes_all5s"), true);
							break;
					
						case 3:
							MAP::SET_BLIP_SPRITE(blLocal_30, joaat("blip_mg_dominoes_all3s"), true);
							break;
					
						default:
							MAP::SET_BLIP_SPRITE(blLocal_30, joaat("blip_mg_dominoes"), true);
							break;
					}
				
					func_17(blLocal_30, func_11());
					blipType = func_18(-1567081107);
				
					if (blipType != 0)
						MAP::SET_BLIP_FLASH_TIMER(blLocal_30, blipType, -1);
				}
				else
				{
					MAP::BLIP_REMOVE_MODIFIER(blLocal_30, joaat("BLIP_MODIFIER_LOCKED"));
				}
			
				if (!func_4(iLocal_14))
				{
					iLocal_14 = func_20(func_19(-1567081107), joaat("INPUT_CONTEXT_X"), uLocal_19, fLocal_23, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false);
				}
				else
				{
					func_21(iLocal_14, true, true);
				
					if (func_22(171))
						func_23(171);
				}
			}
			else
			{
				if (MAP::DOES_BLIP_EXIST(blLocal_30))
					MAP::BLIP_ADD_MODIFIER(blLocal_30, joaat("BLIP_MODIFIER_LOCKED"));
			
				if (func_4(iLocal_14))
					func_21(iLocal_14, false, true);
			
				if (func_24(iLocal_14, true))
					if (!func_25(171))
						func_26(171, false);
			
				return false;
			}
		
			if (flag)
			{
				if (func_27(iLocal_14, true))
				{
					if (func_4(iLocal_14))
						func_5(&iLocal_14, true, true);
				
					if (!VOLUME::DOES_VOLUME_EXIST(volLocal_31))
					{
						volLocal_31 = VOLUME::CREATE_VOLUME_SPHERE(uLocal_19, 0f, 0f, 0f, 3f, 3f, 3f);
						anLocal_32 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volLocal_31, false, 15);
						func_28(volLocal_31, "TABLE", true, 0, 0, false, -1082130432);
					}
				
					for (i = 0; i < 27; i = i + 1)
					{
						if (func_29(i) && func_31(func_30(i), volLocal_31, true, 0))
							func_32(i, 68, true);
					}
				
					if (MAP::DOES_BLIP_EXIST(blLocal_30))
						MAP::REMOVE_BLIP(&blLocal_30);
				
					if (!CAM::DOES_CAM_EXIST(caLocal_38))
					{
						uLocal_39 = { func_33(func_16()) };
						uLocal_39.f_2 = uLocal_39.f_2 + 1.1f;
						caLocal_38 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), uLocal_39, 0f, 0f, 0f, fLocal_42, false, 2);
					}
				
					bLocal_33 = true;
					func_34(4);
				
					if (iLocal_18 < 2)
						func_34(25);
				
					WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
					func_35(&uLocal_27);
					func_9(3);
				}
			}
			break;
	
		case 3:
			if (!func_36(&uLocal_24))
			{
				func_35(&uLocal_24);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			
				if (func_37(&volLocal_31, uLocal_36))
				{
					if (func_38(&uLocal_27) > 8f)
					{
						func_39(&volLocal_31, uLocal_36);
						func_40(&uLocal_27);
					}
					else
					{
						return false;
					}
				}
			
				if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_44, true, false))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_44, "PL_INTRO"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_44, "PLAYER", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(ansLocal_44, func_41(func_16()), func_42(func_16()), 2);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
						ANIMSCENE::START_ANIM_SCENE(ansLocal_44);
						func_43(uLocal_19, 4f, 0);
						object = func_44(uLocal_19, joaat("p_bowl04x"), 4f, true);
					
						if (ENTITY::DOES_ENTITY_EXIST(object))
							OBJECT::DELETE_OBJECT(&object);
					
						object = func_44(uLocal_19, joaat("p_bowl04x_stew"), 4f, true);
					
						if (ENTITY::DOES_ENTITY_EXIST(object))
							OBJECT::DELETE_OBJECT(&object);
					
						func_45(Global_35, "MINIGAME_PLAYER_CAMP_CALLOVER_PLAYERS_DOMINOES", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
						func_46(1, ansLocal_44);
						func_9(4);
					}
					else
					{
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_44, "PL_INTRO");
					}
				}
			}
			break;
	
		case 4:
			if (func_47(7, func_11(), uLocal_19, fLocal_22, 0, &uLocal_15, 0, 1, 0))
			{
				for (j = 0; j < 27; j = j + 1)
				{
					if (func_29(j) && !func_48(func_30(j), &uLocal_15))
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_30(j), "Minigame_Non_Participant_Ped_group", 0);
				}
			
				func_35(&uLocal_24);
				func_9(5);
			}
			break;
	
		case 5:
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
		
			if (!bLocal_35)
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					if (func_45(uLocal_15[1], "MINIGAME_COMPANION_CALLOVER_RESPONSE", joaat("SPEECH_PARAMS_FORCE_FRONTEND"), Global_35, 1, 0, 0, 1))
						bLocal_35 = true;
		
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_44, false))
			{
				if (!bLocal_34)
				{
					bLocal_34 = true;
					ANIMSCENE::RESET_ANIM_SCENE(ansLocal_44, 0);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_44, "PLAYER", Global_35);
					ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_44);
					func_49(1);
				}
			}
		
			if (!func_50(7))
			{
				TASK::CLEAR_PED_TASKS(uLocal_15[1], true, false);
				func_6();
				PED::REMOVE_SCENARIO_BLOCKING_AREA(anLocal_32, false);
				VOLUME::DELETE_VOLUME(volLocal_31);
				func_9(6);
			}
			break;
	
		case 6:
			func_35(&uLocal_24);
			func_51(7, true);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		
			for (k = 0; k < 27; k = k + 1)
			{
				if (func_29(k) && !func_48(func_30(k), &uLocal_15))
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(func_30(k), 0);
			}
		
			for (l = 0; l < 2; l = l + 1)
			{
				uLocal_15[l] = _INVALID_PLAYER_INDEX();
			}
		
			iLocal_18 = 0;
			func_9(7);
			break;
	
		case 7:
			if (func_53(&uLocal_24, 90f))
			{
				func_40(&uLocal_24);
				func_9(8);
			}
			break;
	
		case 8:
			func_9(0);
			break;
	}

	return false;
}

void func_3(int iParam0) // Position - 0x6D8 Hash - 0x7E7973B3 ^0x7E7973B3
{
	if (func_54() != -1)
		return;

	func_55(iParam0, true);
	return;
}

BOOL func_4(int iParam0) // Position - 0x6F2 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_5(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x731 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_4(*iParam0))
	{
		*iParam0 = 0;
		return;
	}

	num = func_56(*iParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}

	func_57(num);
	*iParam0 = 0;
	return;
}

void func_6() // Position - 0x785 Hash - 0x8C5749AA ^0x8C5749AA
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_58(i) && func_59(i, true))
			func_60(i);
	}

	return;
}

void func_7(Volume volParam0) // Position - 0x7BB Hash - 0x4A7DD833 ^0xF771448B
{
	var volumeCoords;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	func_61(volumeCoords, 0);
	return;
}

BOOL func_8() // Position - 0x7E3 Hash - 0xD85FB863 ^0xE4A85417
{
	if (!func_62(PLAYER::PLAYER_PED_ID(), 0))
		return false;

	ansLocal_44 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_43, 0, "PL_INTRO", false, true);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_44))
		ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_44);

	uLocal_19 = { func_33(func_16()) };
	fLocal_22 = func_63(func_16());
	return true;
}

void func_9(int iParam0) // Position - 0x830 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_37 = iParam0;
	return;
}

BOOL func_10(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5) // Position - 0x83C Hash - 0xE63199E6 ^0x5F324E69
{
	var unk;
	var unk6;

	if (_IS_NULL_VECTOR(uParam0))
		return false;

	unk = 4;
	unk6 = 4;
	unk6[0] = 16384;
	unk6[1] = iParam4;
	return VOLUME::_0x51E52C9687FCDEEC(uParam0, fParam3, &unk, &unk6, iParam5);
}

int func_11() // Position - 0x87C Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

BOOL func_12(int iParam0) // Position - 0x88C Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_65(iParam0))
		return false;

	return func_66(iParam0, 8);
}

BOOL func_13(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8AA Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_67())
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
		num = func_68(Global_1898164.f_1[0 /*5*/]);
	
		if (func_69(num) && func_70(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_71(Global_1898164.f_1[0 /*5*/]))
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

int func_14() // Position - 0xAAE Hash - 0xC5B83CF5 ^0xC3CA9E16
{
	return Global_40.f_4283.f_4;
}

BOOL func_15(int iParam0) // Position - 0xABE Hash - 0x34BFCD75 ^0x2D1F63C1
{
	int num;
	BOOL flag;
	int clockHours;

	if (func_10(func_72(iParam0, func_16()), 6f, 4, 1))
		return false;

	if (func_73(&(Global_1391438.f_5), 2048))
		return false;

	if (func_74(iParam0) == 0)
		return false;

	num = func_16();

	if (num == 3 && !func_75(28))
		return false;

	switch (num)
	{
		case 1:
			if (func_76(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), true))
				flag = true;
			break;
	
		case 3:
			if (func_76(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), true))
				flag = true;
			break;
	}

	if (flag)
		return false;

	clockHours = CLOCK::GET_CLOCK_HOURS();

	if (clockHours >= 17 && clockHours < 21)
		return false;

	switch (iParam0)
	{
		case 0:
			if (func_73(&(Global_1391438.f_5), 256))
				return false;
		
			if (!func_77(-1341684320))
				return false;
		
			if (!(clockHours < 2 || clockHours > 10))
				return false;
		
			if (func_78(-1341684320))
				return false;
			break;
	
		case 1:
			if (func_79(joaat("HAI_DOMINOES_01")) == false && func_16() == 2)
				return false;
		
			if (func_73(&(Global_1391438.f_5), 512))
				return false;
		
			if (func_76(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), true))
				return false;
		
			if (!func_77(-1567081107))
				return false;
		
			if (!(clockHours > 6 && clockHours < 20))
				return false;
		
			if (func_78(-1567081107))
				return false;
			break;
	
		case 2:
			if (!(func_79(joaat("HAI_FIVE_FINGER_FILLET_01")) || func_79(joaat("HAI_FIVE_FINGER_FILLET_02"))) && func_16() < 2)
				return false;
		
			if (func_73(&(Global_1391438.f_5), 1024))
				return false;
		
			if (!func_77(-1511391406))
				return false;
		
			if (!(clockHours < 2 || clockHours > 20))
				return false;
		
			if (func_78(-1511391406))
				return false;
			break;
	}

	return true;
}

int func_16() // Position - 0xCDC Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

void func_17(Blip blParam0, int iParam1) // Position - 0xCEA Hash - 0xCF9822EC ^0xB9C38F1C
{
	Hash modifierHash;

	if (func_65(iParam1))
	{
		if (func_80(Global_1934051.f_33))
		{
			modifierHash = func_81(iParam1);
		
			if (modifierHash != 0)
				MAP::BLIP_ADD_MODIFIER(blParam0, modifierHash);
		}
	}

	return;
}

int func_18(int iParam0) // Position - 0xD1F Hash - 0xE612AD88 ^0xE612AD88
{
	switch (iParam0)
	{
		case -1670940721:
			return 79;
	
		case -1567081107:
			return 74;
	
		case -1511391406:
			return 73;
	
		case -1341684320:
			return 72;
	
		case -919476462:
			return 77;
	
		case 565221344:
			return 78;
	
		case 654481153:
			return 76;
	
		case 754620122:
			return 81;
	
		case 1784895540:
			return 75;
	
		default:
		
	}

	return 0;
}

char* func_19(int iParam0) // Position - 0xD93 Hash - 0x28DEF592 ^0x11CCDEE2
{
	switch (iParam0)
	{
		case -2036347356:
			return "ACT_POKER_PROMPT";
	
		case -1739349092:
			return "ACT_RETURN_PROMPT";
	
		case -1700356309:
			return "ACT_BLACKJACK_PROMPT";
	
		case -1670940721:
			return "ACT_BANK_PROMPT";
	
		case -1567081107:
			return "ACT_DOMINOES_PROMPT";
	
		case -1511391406:
			return "ACT_FFF_CAMP_PROMPT";
	
		case -1341684320:
			return "ACT_POKER_CAMP_PROMPT";
	
		case -919476462:
			return "ACT_COACH_PROMPT";
	
		case -301635006:
			return "ACT_MISSION_PROMPT";
	
		case 380107708:
			return "ACT_TRAIN_PROMPT";
	
		case 565221344:
			return "ACT_HOMEROB_PROMPT";
	
		case 654481153:
			return "ACT_FISHING_PROMPT";
	
		case 754620122:
			return "ACT_RUSTLING_PROMPT";
	
		case 1523333387:
			return "ACT_CRAPS_PROMPT";
	
		case 1744128959:
			return "ACT_HIDEOUT_PROMPT";
	
		case 1784895540:
			return "ACT_HUNTING_PROMPT";
	
		default:
		
	}

	return "ACT_INVALID_PROMPT";
}

int func_20(char* sParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, Hash hParam15, BOOL bParam16) // Position - 0xE74 Hash - 0x8FE94EEE ^0x148ED6A8
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

	if (fParam5 <= 0f)
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_82(i, 2))
		{
			if (func_83(uParam2, Global_1945188[i /*18*/].f_6, 0.01f, true) && hParam1 == Global_1945188[i /*18*/].f_4)
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
		func_84(num, hParam1, sParam0, 4, iParam6, iParam7, uParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, false, false, 0, hParam15, bParam16);
		return num;
	}

	return 0;
}

void func_21(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF52 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_4(iParam0))
		return;

	num = func_56(iParam0);

	if (bParam1)
	{
		func_85(iParam0, 4);
		func_86(num, true);
		func_87(num, true);
	}
	else
	{
		func_88(iParam0, 4);
		func_87(num, false);
	}

	return;
}

BOOL func_22(int iParam0) // Position - 0xFA1 Hash - 0xBDE4FECD ^0x461A2A8
{
	int num;
	int offset;
	int address;

	func_89(iParam0, &num, &offset);
	address = Global_1905944[num];
	return MISC::IS_BIT_SET(address, offset);
}

void func_23(int iParam0) // Position - 0xFC5 Hash - 0xAD18F8AE ^0xAD18F8AE
{
	int num;
	int num2;

	func_89(iParam0, &num, &num2);
	func_90(num, num2);
	return;
}

BOOL func_24(int iParam0, BOOL bParam1) // Position - 0xFDF Hash - 0xAAB142C4 ^0xDB043156
{
	int num;

	if (bParam1 && !func_4(iParam0))
		return false;

	num = func_56(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1945188[num /*18*/].f_3);
}

BOOL func_25(int iParam0) // Position - 0x1012 Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_54() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_26(int iParam0, BOOL bParam1) // Position - 0x1057 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_89(iParam0, &num, &num2);

	if (!func_91(iParam0, num, num2, bParam1))
		return;

	func_92(num, num2);
	return;
}

BOOL func_27(int iParam0, BOOL bParam1) // Position - 0x1084 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_4(iParam0))
		return false;

	num = func_56(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

Volume func_28(Volume volParam0, char* sParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x10DC Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_93(volumeCoords, volumeScale, sParam1, bParam2, eParam3, iParam4, bParam5, iParam6);
	return volume;
}

BOOL func_29(int iParam0) // Position - 0x1120 Hash - 0xFEA2A378 ^0xFEA2A378
{
	if (func_58(iParam0))
		if (func_62(Global_1360165[iParam0 /*1157*/], 0))
			return true;

	return false;
}

Ped func_30(int iParam0) // Position - 0x1147 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_94(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

BOOL func_31(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x1181 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

void func_32(int iParam0, int iParam1, BOOL bParam2) // Position - 0x11B7 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_94(iParam0))
			return;

	func_95(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

Vector3 func_33(int iParam0) // Position - 0x11F1 Hash - 0x890F3181 ^0x890F3181
{
	switch (iParam0)
	{
		case 1:
			return -118.119f, -27.6134f, 94.804f;
	
		case 2:
			return 665.5017f, -1243.8619f, 43.143f;
	
		case 3:
			return 1881.669f, -1874.0461f, 41.8096f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_34(int iParam0) // Position - 0x124C Hash - 0x78351DFC ^0x78351DFC
{
	int i;

	uLocal_15[0] = Global_35;

	for (i = 0; i < 27; i = i + 1)
	{
		if (iLocal_18 >= 1)
			break;
	
		if (func_96(i))
		{
			uLocal_15[iLocal_18 + 1] = func_30(i);
			func_97(i, 2, true, -1);
			func_99(&uLocal_36, func_98(i));
			iLocal_18 = iLocal_18 + 1;
		}
	}

	return 1;
}

void func_35(var uParam0) // Position - 0x12AC Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_100(uParam0, 0f);
	return;
}

BOOL func_36(var uParam0) // Position - 0x12BB Hash - 0x5001E582 ^0x5001E582
{
	return func_101(*uParam0, 1);
}

BOOL func_37(var uParam0, var uParam1) // Position - 0x12CB Hash - 0x6147E0EA ^0xAECD99A9
{
	BOOL num;
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_102(i, &uParam1))
		{
		}
		else if (func_29(i))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(func_30(i), *uParam0, true, 0))
				num = 1;
		}
	}

	return num;
}

float func_38(var uParam0) // Position - 0x1314 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_36(uParam0))
		return uParam0->f_1;

	if (func_103(uParam0))
		return uParam0->f_2;

	return func_104() - uParam0->f_1;
}

void func_39(var uParam0, var uParam1) // Position - 0x1349 Hash - 0x680796C1 ^0x680796C1
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_102(i, &uParam1))
		{
		}
		else if (func_29(i) && !func_105(i))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(func_30(i), *uParam0, true, 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_30(i), false, true);
				PERSCHAR::_0xD4B614179BCD0654(func_106(i, false));
				PERSCHAR::_RETASK_PERSISTENT_CHARACTER(func_106(i, false));
			}
		}
	}

	return;
}

void func_40(var uParam0) // Position - 0x13C1 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

Vector3 func_41(int iParam0) // Position - 0x13D7 Hash - 0x890F3181 ^0x890F3181
{
	switch (iParam0)
	{
		case 1:
			return -117.95f, -27.3f, 94.804f;
	
		case 2:
			return 665.6985f, -1244.2f, 43.143f;
	
		case 3:
			return 1881.6f, -1874.302f, 41.8096f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Vector3 func_42(int iParam0) // Position - 0x1432 Hash - 0x1FE09657 ^0x1FE09657
{
	switch (iParam0)
	{
		case 1:
			return 0f, 0f, -105.25f;
	
		case 2:
			return 0f, 0f, 135f;
	
		case 3:
			return 0f, 0f, 80f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

void func_43(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4) // Position - 0x1475 Hash - 0xE32603D9 ^0x11EEBBB1
{
	int num;

	num = 512;

	if (iParam4 & 1 != 0)
		num = num | 524288;

	if (iParam4 & 2 != 0)
		num = num | 1536;

	if (iParam4 & 4 != 0)
		num = num | 2560;

	if (iParam4 & 8 != 0)
		num = num | 4608;

	if (iParam4 & 16 != 0)
		num = num | 8704;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

Object func_44(var uParam0, var uParam1, var uParam2, Hash hParam3, float fParam4, BOOL bParam5) // Position - 0x14E1 Hash - 0xEC461A7E ^0x75CEC255
{
	Volume volume;
	Object objectFromIndexedItem;
	float num;
	int entitiesInVolume;
	int i;
	ItemSet itemSet;

	num = fParam4 * 2f;
	func_107(&volume, uParam0, 0f, 0f, 0f, num, num, num);

	if (!VOLUME::DOES_VOLUME_EXIST(volume))
		return 0;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volume, itemSet, 3);

	for (i = 0; i < entitiesInVolume; i = i + 1)
	{
		objectFromIndexedItem = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet));
	
		if (!ENTITY::IS_ENTITY_DEAD(objectFromIndexedItem))
		{
			if (ENTITY::GET_ENTITY_MODEL(objectFromIndexedItem) == hParam3)
			{
				ITEMSET::DESTROY_ITEMSET(itemSet);
				func_108(volume);
			
				if (bParam5)
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(objectFromIndexedItem, true))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(objectFromIndexedItem, true, true);
			
				return objectFromIndexedItem;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	func_108(volume);
	return 0;
}

BOOL func_45(Ped pedParam0, char* sParam1, int iParam2, Ped pedParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x158E Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = iParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = pedParam3;
	str.f_5 = iParam4;
	str.f_6 = iParam7;
	return func_109(pedParam0, &str);
}

void func_46(int iParam0, AnimScene ansParam1) // Position - 0x15D5 Hash - 0x35128648 ^0x5C115A46
{
	Global_1899528.f_61.f_4 = ansParam1;
	return;
}

BOOL func_47(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, var uParam7, int iParam8, int iParam9, int iParam10) // Position - 0x15E7 Hash - 0x13BE8156 ^0x59ABA923
{
	int num;
	int num2;
	int num3;
	int i;
	var unk;
	Hash scriptHash;
	var unk11;
	var unk45;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	func_110(iParam0, &unk, 1);
	unk.f_2 = iParam1;

	if (unk.f_1 == -1)
		return false;

	scriptHash = func_111(unk.f_1, 1);
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(scriptHash);

	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(scriptHash))
	{
		if (!func_112(unk.f_1))
			func_113(unk.f_1);
	
		num2 = func_114(&unk, 0, iParam10);
	
		if (num2 == -1)
			return false;
	
		Global_1392915[num2 /*12*/].f_2 = iParam1;
		Global_1392915[num2 /*12*/].f_6 = { uParam2 };
		Global_1392915[num2 /*12*/].f_9 = fParam5;
		Global_1392915[num2 /*12*/].f_10 = iParam6;
		num = Global_1392915[num2 /*12*/].f_4;
	
		if (func_115(num) || !func_116(num) && func_117(0) != num)
		{
			num3 = func_118(num);
		
			if (num3 == -1)
				func_119(num);
		}
	
		if (func_116(num))
			func_120(num);
	
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(scriptHash) > 0)
		{
			if (iParam8 == 1)
				func_121(unk.f_1, 0);
		
			return true;
		}
	
		unk11 = -1;
		unk11.f_1 = -1;
		unk11.f_2 = -1;
		unk11.f_4 = -1;
		unk11.f_11 = -1;
		unk11.f_12 = -1;
		unk11.f_23 = 6;
		unk11.f_30 = -1;
		unk11.f_31 = 255;
	
		if (*uParam7 > unk11.f_23)
			return false;
	
		for (i = 0; i < unk11.f_23; i = i + 1)
		{
			unk11.f_23[i] = 0;
		}
	
		for (i = 0; i < *uParam7; i = i + 1)
		{
			unk11.f_23[i] = uParam7->[i];
		}
	
		unk11.f_13 = iParam9;
	
		if (func_122(iParam0, &unk11, &unk45, 0, 1))
		{
			if (iParam8 == 1)
				func_121(unk.f_1, 0);
		
			return true;
		}
	}

	return false;
}

BOOL func_48(Ped pedParam0, var uParam1) // Position - 0x17B9 Hash - 0xDC7D3FF5 ^0xDC7D3FF5
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (pedParam0 == uParam1->[i])
			return true;
	}

	return false;
}

void func_49(int iParam0) // Position - 0x17E5 Hash - 0x61540473 ^0xBEDB557C
{
	Global_1899528.f_61.f_4 = -1;
	return;
}

BOOL func_50(int iParam0) // Position - 0x17F6 Hash - 0xE99EDF0E ^0xE99EDF0E
{
	int num;

	num = func_123(iParam0);

	if (num == -1)
		return false;

	if (func_125(func_124(num)))
		return true;

	return false;
}

int func_51(int iParam0, BOOL bParam1) // Position - 0x1822 Hash - 0x1873E934 ^0x1873E934
{
	int num;

	num = func_123(iParam0);

	if (num == -1)
		return 0;

	func_126(iParam0, 1);
	func_127(num);

	if (bParam1)
		func_128(&Global_1899778, num);

	func_129(num);
	return 1;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x1860 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_53(var uParam0, float fParam1) // Position - 0x1869 Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_130(uParam0, fParam1))
	{
		func_40(uParam0);
		return true;
	}

	return false;
}

BOOL func_54() // Position - 0x1887 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_55(int iParam0, BOOL bParam1) // Position - 0x1895 Hash - 0xDB580C75 ^0xDB580C75
{
	int i;
	int num;

	for (i = 0; i < Global_1392915; i = i + 1)
	{
		if (func_131(i) == iParam0)
		{
			num = func_132(i);
			func_126(num, 1);
			func_127(i);
		
			if (bParam1)
				func_128(&Global_1899778, i);
		
			func_129(i);
		}
	}

	return;
}

int func_56(int iParam0) // Position - 0x18E8 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_57(int iParam0) // Position - 0x18F2 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_133(iParam0))
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

BOOL func_58(int iParam0) // Position - 0x19A5 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

BOOL func_59(int iParam0, BOOL bParam1) // Position - 0x19C4 Hash - 0xF6905B76 ^0x4F37D8F8
{
	Ped ped;

	ped = func_30(iParam0);

	if (bParam1)
		if (!func_62(ped, 0))
			return false;

	return PED::IS_PED_GROUP_MEMBER(ped, func_134(), true);
}

void func_60(int iParam0) // Position - 0x19F3 Hash - 0xF13081D5 ^0x7BCA5573
{
	int i;
	Ped playerPed;

	if (!func_58(iParam0))
		return;

	!func_59(iParam0, false);
	func_135(iParam0);
	Global_1359489.f_15 = func_136(true);

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1359489[i] == iParam0)
			Global_1359489[i] = -1;
	}

	func_137();
	func_138(iParam0, 32, true);

	if (func_62(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_gang_dutchs"));
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], BF_0xD36BCE94, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		playerPed.f_12 = 8;
		playerPed.f_3 = Global_1360165[iParam0 /*1157*/];
		playerPed.f_7 = func_139();
		playerPed.f_8 = 0;
		playerPed.f_11 = 10;
		playerPed.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_CREATE_AI_MEMORY(&playerPed, 17);
	}

	return;
}

void func_61(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1AE1 Hash - 0x303BFB8D ^0xBCF80455
{
	int i;
	int volLockRequestId;
	Vector3 vector;

	if (_IS_NULL_VECTOR(uParam0))
		return;

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
		{
			vector = { VOLUME::_0xC4019CF9AE8E931A(volLockRequestId) };
		
			if (func_83(vector, uParam0, 2f, true))
			{
				if (iParam3 == 0 || VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vector, 2f, 0, iParam3, 16384))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
					Global_1911670[i] = 0;
				}
			}
		}
	}

	return;
}

BOOL func_62(Ped pedParam0, int iParam1) // Position - 0x1B65 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_140(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_140(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_140(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_140(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_140(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_140(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_140(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_140(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

float func_63(int iParam0) // Position - 0x1C64 Hash - 0x6A8D0C6A ^0x6A8D0C6A
{
	switch (iParam0)
	{
		case 1:
			return 110.99f;
	
		case 2:
			return -10f;
	
		case 3:
			return -67.66f;
	
		default:
		
	}

	return 0f;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1C9F Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_65(int iParam0) // Position - 0x1CC9 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_66(int iParam0, BOOL bParam1) // Position - 0x1CDF Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_67() // Position - 0x1D12 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_68(int iParam0) // Position - 0x1D65 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_71(iParam0))
		return -1;

	return func_142(func_141(iParam0));
}

BOOL func_69(int iParam0) // Position - 0x1D85 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_70(int iParam0, int iParam1) // Position - 0x1D9B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_71(int iParam0) // Position - 0x1DAA Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

Vector3 func_72(int iParam0, int iParam1) // Position - 0x1DDD Hash - 0x6899A6AE ^0x6899A6AE
{
	switch (iParam0)
	{
		case 0:
			return func_143(iParam1);
	
		case 1:
		case 2:
			return func_33(iParam1);
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_73(var uParam0, int iParam1) // Position - 0x1E14 Hash - 0x1A05E0F5 ^0x1A05E0F5
{
	if (*uParam0 && iParam1 != false)
		return true;

	return false;
}

int func_74(int iParam0) // Position - 0x1E2B Hash - 0xC5EEA772 ^0xD62F5EAA
{
	switch (iParam0)
	{
		case 0:
			if (func_144(21, true, true) && !func_76(joaat("CSTAG_FLOW_FIRST_VISIT_REV1_POST"), true) || func_144(17, true, true) || func_144(19, true, true) || func_144(9, true, true) || func_144(1, true, true) && !func_76(joaat("CSTAG_FLOW_JOHN_RECOVER"), true) || func_144(18, true, true) || func_144(4, true, true))
				return 1;
			break;
	
		case 1:
			if (func_144(22, true, true) || func_144(15, true, true) || func_144(13, true, true) || func_144(17, true, true) || func_144(5, true, true))
				return 1;
			break;
	
		case 2:
			if (func_144(2, true, true) || func_144(6, true, true) || func_144(9, true, true) || func_144(11, true, true) && func_145(Global_1347702[134 /*49*/].f_15, true))
				return 1;
			break;
	}

	return 0;
}

BOOL func_75(int iParam0) // Position - 0x1F69 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_145(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_76(int iParam0, BOOL bParam1) // Position - 0x1FC8 Hash - 0xB6F2B948 ^0x8948B8BB
{
	int i;

	if (bParam1)
		return func_146(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return true;
	}

	return false;
}

BOOL func_77(int iParam0) // Position - 0x2007 Hash - 0x9DE7A133 ^0x9DE7A133
{
	switch (iParam0)
	{
		case -2036347356:
		case -1567081107:
		case -1511391406:
		case -1341684320:
			return func_112(func_148(iParam0));
	
		case -919476462:
			return func_149(3);
	
		case 654481153:
			if (!func_147() || !func_75(16))
				return false;
		
			return true;
	
		case 1784895540:
			if (!func_75(15))
				return false;
		
			return true;
	
		default:
		
	}

	return true;
}

BOOL func_78(int iParam0) // Position - 0x2086 Hash - 0x1EAA082B ^0x63AA4881
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (Global_1391438.f_7[i /*99*/].f_8 == iParam0)
			return true;
	}

	return false;
}

BOOL func_79(Hash hParam0) // Position - 0x20B6 Hash - 0x8C3B6E7 ^0x8C3B6E7
{
	int num;

	num = func_150(func_16(), hParam0);
	return func_151(num) > 0;
}

BOOL func_80(int iParam0) // Position - 0x20D2 Hash - 0xC62F3EC7 ^0x941BF203
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);

	return false;
}

Hash func_81(int iParam0) // Position - 0x20FB Hash - 0xB8EC44B7 ^0x78D467F9
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_MODIFIER_GROUPING_LAGRAS_FOLLOWER");
	
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_FOLLOWER");
	
		case 5:
			return joaat("BLIP_MODIFIER_GROUPING_SAINT_DENIS_FOLLOWER");
	
		case 26:
			return joaat("BLIP_MODIFIER_GROUPING_STRAWBERRY_FOLLOWER");
	
		case 38:
			return joaat("BLIP_MODIFIER_GROUPING_BLACKWATER_FOLLOWER");
	
		case 69:
			return joaat("BLIP_MODIFIER_GROUPING_EMERALD_RANCH_FOLLOWER");
	
		case 76:
			return joaat("BLIP_MODIFIER_GROUPING_VALENTINE_FOLLOWER");
	
		case 78:
			return joaat("BLIP_MODIFIER_GROUPING_ANNESBURG_FOLLOWER");
	
		case 92:
			return joaat("BLIP_MODIFIER_GROUPING_VAN_HORN_FOLLOWER");
	
		case 105:
			return joaat("BLIP_MODIFIER_GROUPING_RHODES_FOLLOWER");
	
		case 115:
			return joaat("BLIP_MODIFIER_GROUPING_TUMBLEWEED_FOLLOWER");
	
		case 120:
			return joaat("BLIP_MODIFIER_GROUPING_ARMADILLO_FOLLOWER");
	
		default:
		
	}

	return 0;
}

BOOL func_82(int iParam0, int iParam1) // Position - 0x21E4 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

BOOL func_83(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x2205 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_84(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, var uParam7, var uParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x225A Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { vParam6 };
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
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, vParam6);
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
	func_86(iParam0, true);
	func_87(iParam0, true);
	func_88(iParam0, 128);
	return;
}

void func_85(int iParam0, int iParam1) // Position - 0x2500 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_86(int iParam0, BOOL bParam1) // Position - 0x2533 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_82(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_87(int iParam0, BOOL bParam1) // Position - 0x258B Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_88(int iParam0, int iParam1) // Position - 0x25B4 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_89(int iParam0, var uParam1, var uParam2) // Position - 0x25DC Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

void func_90(int iParam0, int iParam1) // Position - 0x25F8 Hash - 0x978E21B ^0x703A4DC6
{
	int address;

	address = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_91(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x261C Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_152(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_153(iParam0))
		return false;

	if (func_154(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_155(iParam0, 1) || func_156(32768))
		if (!func_155(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_157())
		return false;

	return true;
}

void func_92(int iParam0, int iParam1) // Position - 0x26BE Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

Volume func_93(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x26E2 Hash - 0xC1E3A062 ^0xD42263D3
{
	Volume volume;
	int num;
	var entityCoords;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	if (fParam3 <= 0.1f)
		return 0;

	if (_IS_NULL_VECTOR(vParam0))
		return 0;

	num = 0;

	if (!bParam5)
		num = num | 2;

	num = num | 1;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam6))
	{
		if (func_158(vParam0))
			return 0;
	
		volume = VOLUME::_CREATE_VOLUME_LOCK(vParam0, fParam3, num, 0);
	}
	else
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam6, false, false) };
		volume = VOLUME::_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY(eParam6, fParam3, num, 0);
	}

	if (iParam7 != 0)
		VOLUME::_0xB440F4E35393FC39(volume, iParam7);

	if (iParam9 >= 0f)
		VOLUME::_0xD460135C98940274(volume, iParam9);

	func_159(volume, bParam8);
	return volume;
}

BOOL func_94(int iParam0) // Position - 0x279C Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

int func_95(int iParam0, var uParam1, var uParam2) // Position - 0x27A8 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_96(int iParam0) // Position - 0x27C5 Hash - 0x57322C69 ^0x28C0CF11
{
	BOOL flag;
	Ped ped;

	flag = func_94(iParam0);

	if (flag)
	{
		if (!func_144(iParam0, true, true))
			return false;
	
		ped = func_30(iParam0);
	
		if (ENTITY::DOES_ENTITY_EXIST(ped) && INTERIOR::GET_INTERIOR_FROM_ENTITY(ped) != 0)
			return false;
	
		switch (iParam0)
		{
			case 5:
			case 13:
			case 15:
			case 17:
			case 22:
				return true;
		
			default:
			
		}
	}

	return false;
}

int func_97(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x2837 Hash - 0xC4851E36 ^0xA22D3B6E
{
	if (!func_58(iParam0))
		return 0;

	if (!bParam2)
		if (func_160(iParam0, iParam1, false))
			return 0;

	if (iParam3 == -1)
	{
		Global_1360165[iParam0 /*1157*/].f_140 = Global_1360165[iParam0 /*1157*/].f_140 || iParam1;
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_141 = Global_1360165[iParam0 /*1157*/].f_141 || iParam1;
		Global_1360165[iParam0 /*1157*/].f_142 = Global_1899515;
		func_161(&(Global_1360165[iParam0 /*1157*/].f_142), 0, 0, iParam3, 0, 0, 0, false);
	}

	return 1;
}

int func_98(int iParam0) // Position - 0x28C5 Hash - 0xBE2A032D ^0xE6F2CF3B
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_99(var uParam0, int iParam1) // Position - 0x28D4 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_100(var uParam0, float fParam1) // Position - 0x28E5 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_104() - fParam1;
	func_162(uParam0, 1);
	func_163(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_101(int iParam0, int iParam1) // Position - 0x290B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_102(int iParam0, var uParam1) // Position - 0x291A Hash - 0x997B939E ^0x997B939E
{
	int num;

	if (!func_58(iParam0))
		return false;

	num = func_98(iParam0);
	return *uParam1 && num != false;
}

BOOL func_103(var uParam0) // Position - 0x2940 Hash - 0x39705408 ^0x39705408
{
	return func_101(*uParam0, 2);
}

float func_104() // Position - 0x2950 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_105(int iParam0) // Position - 0x2982 Hash - 0xDA629583 ^0xDA629583
{
	return func_164(iParam0, 16, true);
}

PersChar func_106(int iParam0, BOOL bParam1) // Position - 0x2993 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_58(iParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
			func_165(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_1;
}

void func_107(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9) // Position - 0x29D2 Hash - 0xCF0C48FE ^0xA0FA78C0
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, func_166());

	return;
}

void func_108(Volume volParam0) // Position - 0x29FC Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_109(Ped pedParam0, Any* panParam1) // Position - 0x2A13 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

int func_110(int iParam0, var uParam1, int iParam2) // Position - 0x2A23 Hash - 0x16475DD ^0xEB53C9EA
{
	*uParam1 = iParam0;

	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.2848f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.5615f, -1372.1733f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.5818f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
	
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
		
			if (Global_1899848.f_3 < 0 || Global_1899848.f_3 >= 6)
				Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		
			if (Global_1899848.f_3 == 0 || Global_1899848.f_3 == 1)
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			else if (Global_1899848.f_3 == 2 || Global_1899848.f_3 == 3)
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			else
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
		
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
	
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.92618f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
		
			return 0;
	
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.9968f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
	
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.0842f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.8619f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.0048f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.7432f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.0461f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.9417f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
	
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 665.5322f, -1243.9023f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.572914f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -1826.2151f, -433.9676f, 159.73857f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 1881.669f, -1874.0461f, 42.580814f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.884895f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { 2946.4443f, 500.1154f, 45.539986f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
	
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.9436f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
	
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.5474f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 25:
			return 0;
	
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.2505f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.4475f, -1318.0038f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
		
			return 0;
	
		case 29:
			return 0;
	
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.3945f, -2913.7637f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
	
		default:
		
	}

	return 0;
}

Hash func_111(int iParam0, int iParam1) // Position - 0x33D3 Hash - 0x5EC245B8 ^0xB8817543
{
	if (iParam1 == 1 && iParam0 == 2)
		return joaat("poker_sp");

	switch (iParam0)
	{
		case 0:
			return joaat("bjack_sp");
	
		case 1:
			return joaat("dominoes_sp");
	
		case 2:
			return joaat("poker_sp");
	
		case 3:
			return joaat("fillet_sp");
	
		case 4:
			return joaat("milking_cow");
	
		case 5:
			return joaat("es_clean_stalls");
	
		case 6:
			return joaat("es_activity_building");
	
		default:
		
	}

	return 0;
}

BOOL func_112(int iParam0) // Position - 0x345E Hash - 0xF87DE713 ^0x6B3C11CE
{
	if (!func_167(iParam0))
		return false;

	return !func_168() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0);
}

void func_113(int iParam0) // Position - 0x348B Hash - 0x5745781B ^0xC3E60D7F
{
	if (!func_167(iParam0))
		return;

	MISC::SET_BIT(&(Global_40.f_7854), iParam0);
	return;
}

int func_114(var uParam0, BOOL bParam1, int iParam2) // Position - 0x34AC Hash - 0x4C78497B ^0xBAB851C7
{
	int num;
	BOOL flag;
	int num2;
	int num3;

	if (func_54() != -1)
		return -1;

	if (Global_1899528.f_211)
		return -1;

	num2 = -1;

	if (uParam0->f_2 == -1)
		return -1;

	if (uParam0->f_2 != func_139())
		return -1;

	if (!func_112(uParam0->f_1))
		return -1;

	if (func_169(uParam0->f_2))
		return -1;

	num2 = func_123(*uParam0);

	if (num2 == -1)
		if (!func_170(&num2))
			return -1;

	func_171(*uParam0, num2);
	flag = func_172(uParam0->f_1, 131072);
	func_173(uParam0->f_1);
	num3 = func_174(uParam0->f_1, *uParam0);
	Global_1392915[num2 /*12*/] = *uParam0;
	Global_1392915[num2 /*12*/].f_1 = uParam0->f_1;
	Global_1392915[num2 /*12*/].f_2 = uParam0->f_2;
	Global_1392915[num2 /*12*/].f_3 = uParam0->f_3;
	Global_1392915[num2 /*12*/].f_4 = num3;
	Global_1392915[num2 /*12*/].f_5 = uParam0->f_9;
	Global_1392915[num2 /*12*/].f_6 = { uParam0->f_5 };
	Global_1392915[num2 /*12*/].f_9 = uParam0->f_8;
	Global_1392915[num2 /*12*/].f_10 = BUILTIN::FLOOR(uParam0->f_4);
	Global_1392915[num2 /*12*/].f_11 = num2;
	Global_1392915.f_121[num2 /*20*/] = 0;
	Global_1392915.f_121[num2 /*20*/].f_2 = bParam1;
	Global_1392915.f_121[num2 /*20*/].f_17 = iParam2;
	Global_1392915.f_121[num2 /*20*/].f_1 = 0;
	Global_1392915.f_121[num2 /*20*/].f_6 = 0;
	Global_1392915.f_121[num2 /*20*/].f_12 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_5);
	Global_1392915.f_121[num2 /*20*/].f_16 = 0;

	if (Global_1392915.f_121[num2 /*20*/].f_12 != 0)
		Global_1392915.f_121[num2 /*20*/].f_9 = { INTERIOR::_GET_INTERIOR_POSITION(Global_1392915.f_121[num2 /*20*/].f_12) };
	else
		Global_1392915.f_121[num2 /*20*/].f_9 = { 0f, 0f, 0f };

	if (bParam1)
	{
		func_175(uParam0->f_1, 65536);
	
		if (uParam0->f_1 == 1 || uParam0->f_1 == 2 || uParam0->f_1 == 0)
			func_175(uParam0->f_1, 2097152);
	}

	if (flag)
		func_175(uParam0->f_1, 131072);

	if (func_115(num3) || !func_116(num3) && func_117(0) != num3)
	{
		num = func_118(num3);
	
		if (num == -1)
			func_119(num3);
	}

	return num2;
}

BOOL func_115(int iParam0) // Position - 0x370F Hash - 0x93C8DA75 ^0x93C8DA75
{
	return func_176(iParam0) == 0;
}

BOOL func_116(int iParam0) // Position - 0x371F Hash - 0x8EF26C67 ^0x9855652A
{
	int num;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
			return false;
	
		num = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
			return false;
	
		num = func_177(iParam0);
	}

	if (num == 1)
		return true;

	if (num == 2)
		return true;

	return false;
}

int func_117(int iParam0) // Position - 0x378A Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_118(int iParam0) // Position - 0x379C Hash - 0x6B3238EF ^0x6B3238EF
{
	int i;

	if (Global_1898329 <= 0)
		return -1;

	i = 0;

	for (i = 0; i <= Global_1898329 - 1; i = i + 1)
	{
		if (Global_1898330[i] == iParam0)
			return i;
	}

	return -1;
}

int func_119(int iParam0) // Position - 0x37DD Hash - 0x8157C348 ^0x8157C348
{
	int i;
	int num;
	int num2;
	var unk;

	if (Global_1898329 == 15)
		return -1;

	if (!func_115(iParam0))
		return -1;

	if (func_54() != -1)
	{
		num2 = func_118(iParam0);
	
		if (num2 >= 0)
		{
			func_178(iParam0, true);
			return num2;
		}
		else
		{
			num = Global_1898329;
			Global_1898330[num] = iParam0;
			Global_1898346[num /*6*/] = { unk };
			func_179(num, true);
			func_178(iParam0, true);
			Global_1898329 = Global_1898329 + 1;
		
			if (Global_1898329 > 15)
				Global_1898329 = 15;
		
			return num;
		}
	}
	else
	{
		num2 = func_118(iParam0);
	
		if (num2 >= 0)
		{
			func_178(iParam0, true);
			return num2;
		}
		else
		{
			for (i = 0; i < Global_1898330; i = i + 1)
			{
				if (!func_71(Global_1898330[i]))
				{
					Global_1898330[i] = iParam0;
					Global_1898346[i /*6*/] = { unk };
					func_179(i, true);
					func_178(iParam0, true);
					Global_1898329 = Global_1898329 + 1;
				
					if (Global_1898329 > 15)
						Global_1898329 = 15;
				
					return i;
				}
			}
		}
	}

	return -1;
}

void func_120(int iParam0) // Position - 0x38F9 Hash - 0x195570A8 ^0x195570A8
{
	if (!func_71(iParam0))
		return;

	if (!func_116(iParam0))
		return;

	func_180(iParam0, 2);
	return;
}

void func_121(int iParam0, int iParam1) // Position - 0x3922 Hash - 0xA4A03B21 ^0xA4A03B21
{
	if (iParam1 == 1)
	{
		if (func_172(iParam0, 2))
		{
			func_175(iParam0, 4);
			func_181(iParam0, 2);
		}
	}
	else
	{
		func_175(iParam0, 2);
	}

	return;
}

BOOL func_122(int iParam0, Any* panParam1, var uParam2, int iParam3, int iParam4) // Position - 0x3952 Hash - 0x7820D259 ^0x9025309A
{
	int i;
	int num;
	Ped ped;
	var unk;
	int num2;
	Hash scriptHash;

	num = func_123(iParam0);

	if (num == -1)
		return false;

	num2 = func_131(num);

	if (num2 == -1)
		return false;

	scriptHash = func_111(num2, iParam4);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_DYNAMIC_SCENARIO"), true);
	PED::SET_PED_RESET_FLAG(Global_35, 219, true);
	PED::SET_PED_RESET_FLAG(Global_35, 220, true);
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);

	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(scriptHash))
	{
		func_173(num2);
	
		if (Global_1392915.f_121[num /*20*/].f_2)
			func_175(num2, 65536);
	
		*panParam1 = { Global_1392915[num /*12*/] };
		panParam1->f_11 = num;
		panParam1->f_12 = num2;
		panParam1->f_14 = { panParam1->f_6 };
		panParam1->f_17 = panParam1->f_9;
		panParam1->f_18 = BUILTIN::TO_FLOAT(panParam1->f_10);
	
		if (iParam3 == 1)
		{
			for (i = 0; i < panParam1->f_23; i = i + 1)
			{
				if (func_182(num2, panParam1->f_14, panParam1->f_17, i, &ped, 0, 0))
				{
					panParam1->f_23[i] = ped;
				
					if (ped == Global_35)
						panParam1->f_30 = i;
				}
			}
		}
	
		for (i = 0; i < panParam1->f_23; i = i + 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(panParam1->f_23[i]))
				if (panParam1->f_23[i] == Global_35)
					panParam1->f_30 = i;
		}
	
		if (iParam0 == 0)
			func_183(23, 1);
	
		WEAPON::_HIDE_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 2, false);
	
		if (panParam1->f_12 != 5 && panParam1->f_12 != 6)
			HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MINIGAME"));
	
		*uParam2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, panParam1, 34, 6500);
		func_184();
		func_185();
		func_186(Global_1392915[num /*12*/].f_4, true, false);
		Global_1899528.f_45[num2] = func_187();
		func_161(&Global_1899528.f_45[num2], 0, 0, Global_1899528.f_53[num2], 0, 0, 0, false);
		func_188(num);
		func_189(-1, false, 0, false, false);
	
		if (func_190(num2, &unk))
			func_191(unk);
	
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(scriptHash);
		return true;
	}

	return false;
}

int func_123(int iParam0) // Position - 0x3B4F Hash - 0x3516A114 ^0xDECD073A
{
	if (iParam0 == -1 || iParam0 >= 33)
		return -1;

	return Global_1899528.f_11[iParam0];
}

int func_124(int iParam0) // Position - 0x3B77 Hash - 0x7647021A ^0xF771365
{
	return Global_1392915[iParam0 /*12*/].f_4;
}

BOOL func_125(int iParam0) // Position - 0x3B89 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_176(iParam0);
	return num == 3 || num == 4;
}

int func_126(int iParam0, int iParam1) // Position - 0x3BA7 Hash - 0x8D759E81 ^0x8D759E81
{
	int num;
	int num2;
	int num3;

	num = func_123(iParam0);

	if (num == -1)
		return 0;

	num2 = func_131(num);

	if (num2 == -1)
		return 0;

	if (func_192(iParam0))
		return 1;

	func_193(iParam0);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[num /*20*/].f_7))
		VOLUME::DELETE_VOLUME(Global_1392915.f_121[num /*20*/].f_7);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[num /*20*/].f_8))
		VOLUME::DELETE_VOLUME(Global_1392915.f_121[num /*20*/].f_8);

	Global_1392915.f_121[num /*20*/].f_1 = 0;
	func_188(num);
	num3 = func_118(Global_1392915[num /*12*/].f_4);

	if (num3 != -1)
	{
		if (iParam1 == 1)
			func_194(Global_1392915[num /*12*/].f_4);
	
		if (MAP::DOES_BLIP_EXIST(Global_1898346[num3 /*6*/]))
			MAP::REMOVE_BLIP(&Global_1898346[num3 /*6*/]);
	
		func_195(num3, 0);
		return 1;
	}

	return 0;
}

void func_127(int iParam0) // Position - 0x3C91 Hash - 0xD2B2F412 ^0x6837BDDD
{
	int num;

	if (iParam0 == -1)
		return;

	num = Global_1392915[iParam0 /*12*/];

	if (func_196(iParam0))
		return;

	if (func_71(Global_1392915[iParam0 /*12*/].f_4))
		func_197(Global_1392915[iParam0 /*12*/].f_4, true, 2);

	Global_1392915[iParam0 /*12*/].f_1 = -1;
	func_171(num, -1);
	return;
}

void func_128(var uParam0, int iParam1) // Position - 0x3CEB Hash - 0x7F892F74 ^0x5E2018BC
{
	int num;

	num = Global_1392915[iParam1 /*12*/];

	if (!func_198(num))
		return;

	if (func_80(uParam0->f_34[num]))
	{
		func_199(&uParam0->f_34[num], true);
		uParam0->f_34[num] = -1;
		uParam0->[num] = 0;
	}

	return;
}

void func_129(int iParam0) // Position - 0x3D36 Hash - 0xFC8C9409 ^0xE623F74F
{
	func_200(&Global_1392915[iParam0 /*12*/]);
	func_201(&Global_1392915.f_121[iParam0 /*20*/]);
	return;
}

BOOL func_130(var uParam0, float fParam1) // Position - 0x3D58 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_36(uParam0))
		return false;

	if (func_38(uParam0) > fParam1)
		return true;

	return false;
}

int func_131(int iParam0) // Position - 0x3D7F Hash - 0x7647021A ^0xF0097466
{
	return Global_1392915[iParam0 /*12*/].f_1;
}

int func_132(int iParam0) // Position - 0x3D91 Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1392915[iParam0 /*12*/];
}

BOOL func_133(int iParam0) // Position - 0x3DA1 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_82(iParam0, 2);
}

int func_134() // Position - 0x3DB0 Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_135(int iParam0) // Position - 0x3DC0 Hash - 0xF69B99CF ^0x21CDC007
{
	Ped ped;

	ped = Global_1360165[iParam0 /*1157*/];

	if (!ENTITY::DOES_ENTITY_EXIST(ped) || ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (!func_58(iParam0))
		return;

	if (!PED::IS_PED_IN_GROUP(ped))
		return;

	if (PED::GET_PED_GROUP_INDEX(ped) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
		return;

	if (PED::_IS_PED_LEADING_ANY_GROUP(ped))
		COMPANION::_0xD747979C053EFA7A(func_134());

	PED::SET_PED_CONFIG_FLAG(ped, 279, false);
	PED::REMOVE_PED_FROM_GROUP(ped);
	func_202(iParam0, false, 0);
	return;
}

int func_136(BOOL bParam0) // Position - 0x3E43 Hash - 0x7F08FD3B ^0xE97B69AA
{
	int num;
	int numberOfFollowers;
	var hasLeader;
	int i;
	Ped pedAsGroupMember;

	if (bParam0)
		return func_203(Global_1359489.f_4);

	PED::GET_GROUP_SIZE(func_134(), &hasLeader, &numberOfFollowers);

	if (numberOfFollowers == 0)
		return 0;

	for (i = 0; i < numberOfFollowers; i = i + 1)
	{
		pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_134(), i);
	
		if (func_204(pedAsGroupMember))
			num = num + 1;
	}

	return num;
}

void func_137() // Position - 0x3EA3 Hash - 0xC0695FEA ^0xC0695FEA
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 2; i = i + 1)
	{
		num = func_205(i);
		num2 = func_205(i + 1);
	
		if (!func_58(num))
		{
			if (func_58(num2))
			{
				Global_1359489[i] = num2;
				Global_1359489[i + 1] = -1;
			}
		}
	}

	return;
}

void func_138(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3EF7 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_94(iParam0))
			return;

	func_95(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

int func_139() // Position - 0x3F31 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_140(int iParam0, int iParam1) // Position - 0x3F3F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_141(int iParam0) // Position - 0x3F4E Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_142(BOOL bParam0) // Position - 0x3F8C Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

Vector3 func_143(int iParam0) // Position - 0x3F9F Hash - 0x890F3181 ^0x890F3181
{
	switch (iParam0)
	{
		case 1:
			return -138.7686f, -27.4923f, 95.0878f;
	
		case 2:
			return 663.2041f, -1266.6099f, 42.8666f;
	
		case 3:
			return 1871.7058f, -1863.1827f, 41.8185f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_144(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3FFA Hash - 0x91122EE7 ^0x91122EE7
{
	if (!func_94(iParam0))
		return false;

	if (bParam1)
		return func_206(iParam0, 26, true);

	if (bParam2)
		if (!func_62(func_30(iParam0), 0))
			return false;

	if (!func_207(iParam0, true, false))
		return false;

	if (func_206(iParam0, 44, true))
		return false;

	return true;
}

BOOL func_145(int iParam0, BOOL bParam1) // Position - 0x405B Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_176(iParam0))
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

BOOL func_146(int iParam0) // Position - 0x408C Hash - 0x8232DC08 ^0x5AF1E79C
{
	int num;
	int offset;

	func_208(iParam0, &num, &offset);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[num], offset);
}

BOOL func_147() // Position - 0x40B0 Hash - 0x8E51E551 ^0x249B1CB6
{
	return WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, false);
}

int func_148(int iParam0) // Position - 0x40C6 Hash - 0xE1D6BB0D ^0xE1D6BB0D
{
	switch (iParam0)
	{
		case -2036347356:
		case -1341684320:
			return 2;
	
		case -1567081107:
			return 1;
	
		case -1511391406:
			return 3;
	
		default:
		
	}

	return -1;
}

BOOL func_149(int iParam0) // Position - 0x40FB Hash - 0x3C41C28F ^0x53D6F4A2
{
	if (!func_209(iParam0))
		return false;

	if (func_54() == false)
		return true;

	return !func_168() || MISC::IS_BIT_SET(Global_40.f_7856, iParam0);
}

int func_150(int iParam0, Hash hParam1) // Position - 0x4134 Hash - 0xE769BAE7 ^0x9D2D6FC6
{
	if (hParam1 == joaat("HAI_BANK_ROBBERY_01"))
		return func_211(0, func_210(hParam1, 1), 11, joaat("cabr01"));

	return func_211(0, func_210(hParam1, 1), 11, hParam1);
}

int func_151(int iParam0) // Position - 0x416C Hash - 0xE67E3975 ^0x6B59BE69
{
	if (!func_71(iParam0))
		return -1;

	return BUILTIN::SHIFT_RIGHT(func_212(iParam0) & 2147418112, 16);
}

BOOL func_152(int iParam0, int iParam1) // Position - 0x4194 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_54() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_153(int iParam0) // Position - 0x41C7 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_54() != -1)
		if (func_155(iParam0, 4))
			return false;
	else if (func_155(iParam0, 2))
		return false;

	return true;
}

BOOL func_154(int iParam0) // Position - 0x41F7 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_155(iParam0, 65536) && !func_155(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_155(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_155(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_155(int iParam0, int iParam1) // Position - 0x42A3 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_156(int iParam0) // Position - 0x42BC Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_157() // Position - 0x42CF Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_158(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x42DE Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_159(Volume volParam0, BOOL bParam1) // Position - 0x42F8 Hash - 0xEA796703 ^0x695D7925
{
	Volume volLockRequestId;
	int i;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volParam0);

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId) || volLockRequestId == volParam0)
		{
			Global_1911670[i] = volParam0;
			return 1;
		}
	}

	return 0;
}

BOOL func_160(int iParam0, int iParam1, BOOL bParam2) // Position - 0x4360 Hash - 0x9ED60A40 ^0xCA8A0302
{
	int num;

	if (!func_94(iParam0))
		return false;

	if (!func_213(iParam0))
		return false;

	if (func_214(iParam0, -2147483648))
		return true;

	if (func_214(iParam0, 1073741824))
		return true;

	num = func_215(iParam1);

	if (num < Global_1360165[iParam0 /*1157*/].f_22)
		return true;

	if (num == Global_1360165[iParam0 /*1157*/].f_22)
	{
		if (bParam2)
			return true;
	
		if (!func_214(iParam0, iParam1))
			return true;
	}

	return false;
}

void func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x43EE Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_216(*iParam0);
	i = func_217(*iParam0);
	num2 = func_218(*iParam0);
	j = func_219(*iParam0);
	k = func_220(*iParam0);
	l = func_221(*iParam0);

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

	for (m = func_222(i, num); num2 > m; m = func_222(i, num))
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

	func_223(iParam0, l, k, j, num2, i, num);
	return;
}

void func_162(var uParam0, int iParam1) // Position - 0x4576 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_163(var uParam0, int iParam1) // Position - 0x4587 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_164(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x459C Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_94(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

void func_165(int iParam0) // Position - 0x45C6 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_94(iParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		hash = func_224(iParam0);
	
		if (hash != 0)
		{
			Global_1360165[iParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(hash);
			PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_1);
		}
		else
		{
			Global_1360165[iParam0 /*1157*/].f_1 = 0;
		}
	}

	return;
}

char* func_166() // Position - 0x462E Hash - 0x306ACA3A ^0x2A8748F2
{
	return "unnamed";
}

BOOL func_167(int iParam0) // Position - 0x463A Hash - 0xE97E1B38 ^0xE97E1B38
{
	return iParam0 > -1 && iParam0 < 7;
}

BOOL func_168() // Position - 0x464F Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_169(int iParam0) // Position - 0x466E Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_65(iParam0))
		return false;

	return func_66(iParam0, 33554432);
}

BOOL func_170(var uParam0) // Position - 0x468F Hash - 0xE9FA0BF0 ^0xE9FA0BF0
{
	int i;

	*uParam0 = -1;

	for (i = 0; i < Global_1392915; i = i + 1)
	{
		if (func_196(i))
		{
			*uParam0 = i;
			return true;
		}
	}

	return false;
}

void func_171(int iParam0, int iParam1) // Position - 0x46C3 Hash - 0x783CB6E7 ^0xC545C92C
{
	if (iParam0 == -1 || iParam0 >= 33)
		return;

	Global_1899528.f_11[iParam0] = iParam1;
	return;
}

BOOL func_172(int iParam0, BOOL bParam1) // Position - 0x46EC Hash - 0x9C3ED08F ^0xE9848133
{
	return Global_1899528.f_3[iParam0] && bParam1 != false;
}

void func_173(int iParam0) // Position - 0x4703 Hash - 0xEF70193F ^0x89D7B4C3
{
	Global_1899528.f_3[iParam0] = false;
	return;
}

int func_174(int iParam0, int iParam1) // Position - 0x4716 Hash - 0x9D1CE871 ^0x6377C92B
{
	return func_211(iParam0, iParam1, 4, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam1)));
}

void func_175(int iParam0, BOOL bParam1) // Position - 0x4731 Hash - 0xBB5D5F2F ^0x1ACB2B49
{
	!func_172(iParam0, bParam1);
	Global_1899528.f_3[iParam0] = Global_1899528.f_3[iParam0] || bParam1;
	return;
}

int func_176(int iParam0) // Position - 0x475C Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_71(iParam0))
		return -1;

	return func_177(iParam0);
}

int func_177(int iParam0) // Position - 0x4778 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_226(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_178(int iParam0, BOOL bParam1) // Position - 0x47B9 Hash - 0x3C4FA973 ^0x67C1D80B
{
	if (!func_71(iParam0))
		return;

	if (!func_115(iParam0))
		return;

	if (bParam1)
	{
		if (func_227(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_227(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_228(iParam0), func_68(iParam0), func_229(iParam0), func_227(iParam0), Global_36);
		}
	}

	func_180(iParam0, 1);
	bParam1 = bParam1;
	return;
}

void func_179(int iParam0, BOOL bParam1) // Position - 0x482A Hash - 0x23CB6788 ^0xB008F1A1
{
	if (Global_1898346[iParam0 /*6*/].f_2 == false || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_141(Global_1898330[iParam0]);
		func_230(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}

	return;
}

void func_180(int iParam0, int iParam1) // Position - 0x488B Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_71(iParam0))
		return;

	func_231(iParam0, iParam1);
	return;
}

void func_181(int iParam0, BOOL bParam1) // Position - 0x48A8 Hash - 0x39D95D03 ^0x411312B7
{
	func_172(iParam0, bParam1);
	Global_1899528.f_3[iParam0] = Global_1899528.f_3[iParam0] - Global_1899528.f_3[iParam0] && bParam1;
	return;
}

BOOL func_182(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, var uParam6, int iParam7, int iParam8) // Position - 0x48DD Hash - 0x6033B7C1 ^0xE3342445
{
	var unk;
	Ped pedFromIndexedItem;
	ItemSet itemSet;
	Volume volume;
	int entitiesInVolume;
	int i;
	float num;

	num = 0.25f * 2f;

	if (!func_232(iParam0, uParam1, fParam4, iParam5, &unk, 1))
		return false;

	itemSet = ITEMSET::CREATE_ITEMSET(true);

	if (!ITEMSET::IS_ITEMSET_VALID(itemSet))
		return false;

	unk.f_2 = unk.f_2 + 0.9f;
	func_233(&volume, unk, 0f, 0f, 0f, num, num, 1.8f);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volume, itemSet, 1);

	for (i = 0; i < entitiesInVolume; i = i + 1)
	{
		pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet));
	
		if (func_234(iParam0, pedFromIndexedItem) || iParam8 == 1)
		{
			if (iParam7 == 0 || iParam7 == 1 && !PED::IS_PED_A_PLAYER(pedFromIndexedItem))
			{
				func_108(volume);
				ITEMSET::_CLEAR_ITEMSET(itemSet);
				ITEMSET::DESTROY_ITEMSET(itemSet);
				*uParam6 = pedFromIndexedItem;
				return true;
			}
		}
	}

	func_108(volume);
	ITEMSET::_CLEAR_ITEMSET(itemSet);
	ITEMSET::DESTROY_ITEMSET(itemSet);
	return false;
}

void func_183(int iParam0, int iParam1) // Position - 0x49CC Hash - 0x3310CDA6 ^0x6278D98C
{
	int num;
	int num2;

	num = func_123(iParam0);

	if (num == -1)
		return;

	num2 = func_131(num);

	if (num2 == -1)
		return;

	Global_1392915.f_121[num /*20*/].f_19 = iParam1;
	return;
}

void func_184() // Position - 0x4A04 Hash - 0x54676713 ^0xB7C54F4A
{
	Global_1899528.f_2 = 0;
	return;
}

void func_185() // Position - 0x4A13 Hash - 0x6CE209EF ^0x2C989E18
{
	if (Global_1899528.f_202 != 0)
	{
		if (Global_1899528.f_202 == UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1))
			func_235(true);
	
		Global_1899528.f_202 = 0;
		Global_1899528.f_203 = 0;
	}

	return;
}

void func_186(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4A46 Hash - 0x9F2D2B44 ^0xC32EBA43
{
	int num;
	int num2;

	if (!func_71(iParam0))
		return;

	if (!func_116(iParam0))
		return;

	num = func_228(iParam0);

	if (bParam1)
	{
		if (func_227(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_227(iParam0)))
		{
		}
		else
		{
			if (num == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
				func_236(func_68(iParam0));
		
			if (func_54() != false)
				STATS::STATSTRACKER_DEED_STARTED(func_227(iParam0), 0);
			else
				STATS::STATSTRACKER_DEED_STARTED(func_227(iParam0), Global_265073.f_73815.f_208.f_12);
		}
	}

	func_237(iParam0);

	if (!func_71(func_117(0)))
	{
		func_180(iParam0, 3);
		func_238(bParam2);
	
		if (func_54() == -1)
		{
			if (bParam2 == false)
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		
			func_239(true);
		}
	
		func_240(iParam0, -1);
	
		if (bParam1 && !func_156(2))
			func_241(&Global_0, 1024);
	
		if (func_54() == -1)
		{
			func_242(&(Global_1347343.f_11), 536870912);
			func_243(2);
			Global_1357515 = -1;
		
			if (num == 1)
				func_244(false);
		
			if (num == 1 || num == 8)
				func_245(false);
		}
	
		if (func_54() == -1)
		{
			num2 = func_246(iParam0);
		
			if (num2 != -1)
			{
				num2 = func_247();
			
				switch (num2)
				{
					case 0:
						func_248(0);
						break;
				
					case 1:
						func_248(1);
						break;
				
					case 2:
						func_248(2);
						break;
				
					case 3:
						func_248(3);
						break;
				
					case 4:
						func_248(4);
						break;
				
					case 5:
						func_248(5);
						break;
				
					case 6:
						func_248(5);
						break;
				
					case 7:
						func_248(7);
						break;
				
					case 8:
						func_248(8);
						break;
				}
			}
			else if (num == 1)
			{
				switch (func_68(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_248(11);
						break;
				}
			}
			else if (num == 8)
			{
				switch (func_68(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_248(11);
						break;
				
					default:
						num2 = func_247();
					
						if (num2 != -1)
						{
							switch (num2)
							{
								case 0:
									func_249(0);
									break;
							
								case 1:
									func_249(1);
									break;
							
								case 2:
									func_249(2);
									break;
							
								case 3:
									func_249(3);
									break;
							
								case 4:
									func_249(4);
									break;
							
								case 5:
									func_249(5);
									break;
							
								case 6:
									func_249(5);
									break;
							
								case 7:
									func_249(7);
									break;
							
								case 8:
									func_249(8);
									break;
							
								default:
									break;
							}
						}
						break;
				}
			}
		}
	
		func_250(true);
	}
	else
	{
		func_240(iParam0, -1);
		func_180(iParam0, 4);
	}

	func_251(iParam0, false);
	return;
}

int func_187() // Position - 0x4D59 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_188(int iParam0) // Position - 0x4D65 Hash - 0xC3346FD4 ^0xEFA0E7FA
{
	if (func_4(Global_1392915.f_121[iParam0 /*20*/].f_3))
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_PROMPT_MONEY"));
		func_5(&(Global_1392915.f_121[iParam0 /*20*/].f_3), true, false);
		Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
		return 1;
	}

	Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
	return 0;
}

void func_189(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4DBA Hash - 0xEF5C52D ^0xEF5C52D
{
	int i;
	int num;

	bParam1;

	if (func_252() == 0 && !bParam1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		num = Global_1310750.f_13321[i /*9*/];
	
		if (func_253(num) && !func_254(num, iParam2) && !bParam3 || !func_255(num) && !bParam4 || !func_256(num))
			if (num != iParam0)
				func_257(i);
	}

	return;
}

BOOL func_190(int iParam0, var uParam1) // Position - 0x4E48 Hash - 0xC7402B08 ^0xC7402B08
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 11;
			return true;
	
		case 1:
			*uParam1 = 12;
			return true;
	
		case 2:
			*uParam1 = 9;
			return true;
	
		case 3:
			*uParam1 = 14;
			return true;
	
		default:
		
	}

	return false;
}

void func_191(var uParam0) // Position - 0x4E95 Hash - 0x585CE456 ^0xD1BA98E4
{
	int num;
	int num2;

	if (Global_1898077.f_1 == 2 || Global_1898077.f_1 == 5 || Global_1898077.f_1 == 3)
		return;

	num = 0;

	if (func_54() != -1)
		num = 1;

	num2 = func_258(Global_1894899.f_2);
	Global_1898077.f_1 = 3;
	Global_1898077.f_2 = 0;
	Global_1898077.f_7 = num;
	Global_1898077.f_8 = uParam0;
	Global_1898077.f_9 = num2;
	func_259(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	return;
}

BOOL func_192(int iParam0) // Position - 0x4F1D Hash - 0x9886D3BE ^0x52D3282
{
	int num;
	int num2;

	num = func_123(iParam0);

	if (num == -1)
		return false;

	num2 = func_131(num);

	if (num2 == -1)
		return false;

	return Global_1392915.f_121[num /*20*/].f_19;
}

void func_193(int iParam0) // Position - 0x4F55 Hash - 0xF37CE386 ^0x23C715D1
{
	int num;

	if (func_54() != -1)
		return;

	if (!func_260(iParam0, &num))
		return;

	Global_1392915.f_121[num /*20*/].f_15 == 1;
	Global_1392915.f_121[num /*20*/].f_15 = 0;
	return;
}

void func_194(int iParam0) // Position - 0x4F94 Hash - 0x248129F7 ^0x248129F7
{
	int num;
	int num2;
	var unk;

	if (Global_1898329 <= 0)
		return;

	if (!func_71(iParam0))
		return;

	if (func_116(iParam0))
		func_197(iParam0, false, 2);

	num = func_118(iParam0);

	if (num < 0)
		return;

	num2 = num;

	if (Global_1898329 > 1)
	{
		Global_1898330[num2] = Global_1898330[Global_1898329 - 1];
		Global_1898346[num2 /*6*/] = { Global_1898346[Global_1898329 - 1 /*6*/] };
		Global_1898330[Global_1898329 - 1] = -1;
		Global_1898346[Global_1898329 - 1 /*6*/] = { unk };
	}
	else
	{
		Global_1898330[num2] = -1;
		Global_1898346[num2 /*6*/] = { unk };
	}

	Global_1898329 = Global_1898329 - 1;

	if (Global_1898329 < 0)
		Global_1898329 = 0;

	return;
}

void func_195(int iParam0, int iParam1) // Position - 0x505E Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_261(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 || iParam1;
	return;
}

BOOL func_196(int iParam0) // Position - 0x508A Hash - 0x1FF88625 ^0xB6A92286
{
	return Global_1392915[iParam0 /*12*/].f_1 == -1;
}

void func_197(int iParam0, BOOL bParam1, int iParam2) // Position - 0x509E Hash - 0x9DD22E7 ^0x9DD22E7
{
	int num;

	if (!func_71(iParam0))
	{
		!bParam1;
		return;
	}

	if (!func_125(iParam0) && !func_116(iParam0))
	{
		!bParam1;
		return;
	}

	func_227(iParam0) == 0;

	if (iParam2 == 2 && !func_125(iParam0))
		iParam2 = -1;

	if (func_177(iParam0) == 3 || func_177(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_227(iParam0)))
	{
		func_262(func_228(iParam0), func_227(iParam0), iParam2);
	
		if (!func_71(Global_1572864.f_8) && !func_13(0, true, false) && !func_263(Global_1935630, 32768))
		{
			num = func_246(iParam0);
		
			if (num != -1)
			{
				func_264(false);
			}
			else if (func_228(iParam0) == 8)
			{
				num = func_247();
			
				if (num != -1)
					func_264(false);
			}
		}
	}

	func_180(iParam0, 0);

	if (func_117(0) == iParam0)
	{
		func_238(true);
		func_239(false);
		func_250(1);
	}

	func_251(iParam0, true);
	func_265(iParam0);
	return;
}

BOOL func_198(int iParam0) // Position - 0x51C3 Hash - 0x19E59B76 ^0x19E59B76
{
	if (iParam0 < 0 || iParam0 > 32)
		return false;

	return true;
}

void func_199(int iParam0, BOOL bParam1) // Position - 0x51E2 Hash - 0x2A73BCD4 ^0xFA31BBCB
{
	if (*iParam0 != -1)
	{
		func_266(*iParam0, -1);
		func_267(*iParam0, 0);
		func_268(*iParam0, 0);
	
		if (MAP::DOES_BLIP_EXIST(Global_36308[*iParam0]))
		{
			if (bParam1)
				MAP::SET_RADAR_ZOOM(Global_36308[*iParam0]);
		
			MAP::REMOVE_BLIP(&Global_36308[*iParam0]);
		}
	}

	*iParam0 = -1;
	return;
}

void func_200(int iParam0) // Position - 0x5239 Hash - 0x59858C56 ^0xA28E61FC
{
	*iParam0 = -1;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
	iParam0->f_3 = 0;
	iParam0->f_4 = -1;
	iParam0->f_6 = { 0f, 0f, 0f };
	iParam0->f_9 = 0f;
	iParam0->f_10 = 0;
	iParam0->f_5 = 0f;
	iParam0->f_11 = -1;
	return;
}

void func_201(int iParam0) // Position - 0x5276 Hash - 0xA48AF811 ^0xB2136D4B
{
	if (func_4(iParam0->f_3))
		func_5(&(iParam0->f_3), true, false);

	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 0;
	iParam0->f_9 = { 0f, 0f, 0f };
	iParam0->f_6 = 0;
	iParam0->f_15 = 0;
	iParam0->f_16 = 0;
	return;
}

void func_202(int iParam0, BOOL bParam1, Ped pedParam2) // Position - 0x52BF Hash - 0xD8E274A1 ^0xE4E6335F
{
	Ped ped;

	if (!func_58(iParam0))
		return;

	if (!func_29(iParam0))
		return;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return;

	if (bParam1 && ENTITY::IS_ENTITY_DEAD(pedParam2))
		return;

	ped = func_30(iParam0);

	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(pedParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, true);
	}

	PED::SET_PED_CONFIG_FLAG(ped, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(ped, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(ped, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(ped, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(ped, BF_0x07A6E531, bParam1);

	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(ped, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam0));
		PED::_SET_PED_COMBAT_BEHAVIOUR(ped, -1972074710);
		PED::_SET_PED_COMBAT_BEHAVIOUR(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(ped);
	
		if (!func_270())
			PED::_0x9A4AC116CC1EEE14(Global_35);
	}

	return;
}

int func_203(BOOL bParam0) // Position - 0x53A1 Hash - 0xB9596906 ^0xEA13D3DB
{
	int num;
	BOOL flag;

	flag = bParam0;

	if (flag < false)
	{
		num = 1;
		func_271(&flag, -2147483648);
	}
	else
	{
		num = 0;
	}

	while (flag > false)
	{
		flag = flag && flag - 1;
		num = num + 1;
	}

	return num;
}

BOOL func_204(Ped pedParam0) // Position - 0x53E1 Hash - 0xCA96D27A ^0x3802A466
{
	int i;
	Ped ped;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_54() != -1)
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = Global_1360165[i /*1157*/];
	
		if (!ENTITY::IS_ENTITY_DEAD(ped) && pedParam0 == ped)
			return true;
	}

	return false;
}

int func_205(int iParam0) // Position - 0x543A Hash - 0xD45AC883 ^0xD45AC883
{
	if (!func_94(iParam0))
		return -1;

	if (iParam0 >= func_136(true))
		return -1;

	if (iParam0 >= 3 || iParam0 < 0)
		return -1;

	return Global_1359489[iParam0];
}

BOOL func_206(int iParam0, int iParam1, BOOL bParam2) // Position - 0x547B Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_94(iParam0))
			return false;

	func_95(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

BOOL func_207(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x54B6 Hash - 0xE0196EFD ^0xE0196EFD
{
	if (!func_94(iParam0))
		return false;

	if (func_164(iParam0, 32, true))
		return false;

	if (!func_164(iParam0, 2, true))
		return false;

	if (!func_164(iParam0, 4, true))
		return false;

	if (func_206(iParam0, 33, true))
		return false;

	if (func_105(iParam0))
		return false;

	if (func_272(iParam0))
		if (!bParam2)
			return false;

	if (!bParam1)
		if (Global_1357549.f_1497 == iParam0)
			return false;

	return true;
}

int func_208(int iParam0, var uParam1, var uParam2) // Position - 0x5543 Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_273(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_209(int iParam0) // Position - 0x5565 Hash - 0x2F38AE1B ^0x2F38AE1B
{
	if (iParam0 <= -1 || iParam0 > 54)
		return false;

	return true;
}

int func_210(Hash hParam0, int iParam1) // Position - 0x5584 Hash - 0x6EE84C5C ^0x6EE84C5C
{
	switch (hParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return 1;
	
		case joaat("HAI_BANK_ROBBERY_01"):
			return 10;
	
		case -1348173149:
			return 17;
	
		case joaat("HAI_HOME_ROBBERY_01"):
			return 14;
	
		case joaat("HAI_COACH_ROBBERY_01"):
			return 7;
	
		case -709866131:
			return 16;
	
		case joaat("HAI_COACH_ROBBERY_03"):
			return 11;
	
		case -589165916:
			return 0;
	
		case joaat("HAI_COACH_ROBBERY_02"):
			return 8;
	
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return 4;
	
		case joaat("HAI_COACH_ROBBERY_04"):
			return 12;
	
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return 9;
	
		case joaat("HAI_FISHING_01"):
			return 2;
	
		case joaat("HAI_RUSTLING_02"):
			return 13;
	
		case joaat("HAI_FISHING_02"):
			return 3;
	
		case joaat("HAI_HUNTING_06"):
			return 5;
	
		case joaat("HAI_DOMINOES_01"):
			return 6;
	
		case 2061320468:
			return 15;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_211(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x5663 Hash - 0x71EF3E96 ^0x557A7961
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	BOOL flag;
	int num5;

	num3 = iParam0;
	num4 = iParam1;

	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 100;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
		
			case 2:
				num = 101;
				num2 = 170;
				break;
		
			case 3:
				num = 171;
				num2 = 190;
				break;
		
			case 4:
				num = 191;
				num2 = 230;
				break;
		
			case 5:
				num = 231;
				num2 = 260;
				break;
		
			case 6:
				num = 261;
				num2 = 290;
				break;
		
			case 7:
				num = 291;
				num2 = 370;
				break;
		
			case 8:
				num = 371;
				num2 = 570;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
		
			case 9:
				num = 571;
				num2 = 650;
				break;
		
			case 10:
				return -1;
		
			case 11:
				num = 651;
				num2 = 750;
				break;
		
			case 12:
				return -1;
		
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 200;
				break;
		
			case 2:
				num = 201;
				num2 = 15700;
				break;
		
			case 4:
				num = 15701;
				num2 = 16200;
				break;
		
			case 6:
				return -1;
		
			case 7:
				return -1;
		
			case 8:
				return -1;
		
			case 10:
				num = 19201;
				num2 = 20000;
				break;
		
			case 12:
				num = 16201;
				num2 = 19200;
				break;
		
			default:
				return -1;
		}
	}

	if (num2 >= func_274())
		num2 = func_274();

	flag = func_275(num3, num4, iParam2);

	if (Global_1572887.f_12 == -1)
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_141(num5) == flag)
				return num5;
		
			if (func_141(num5) == false)
				return func_276(num3, num4, iParam2, i, hParam3);
		}
	
		num = 751;
		num2 = 770;
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_141(num5) == flag)
				return num5;
		
			if (func_141(num5) == false)
				return func_276(num3, num4, iParam2, i, hParam3);
		}
	}
	else
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == flag)
				return i;
		}
	
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == false)
				return func_276(num3, num4, iParam2, i, 0);
		}
	}

	return -1;
}

int func_212(int iParam0) // Position - 0x591E Hash - 0x6A809E0B ^0xD5C1247E
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_2;

	return -1;
}

BOOL func_213(int iParam0) // Position - 0x593D Hash - 0x8230F59D ^0x236A0FDB
{
	if (!func_94(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_140 != 0 || Global_1360165[iParam0 /*1157*/].f_141 != 0)
		return true;

	return false;
}

BOOL func_214(int iParam0, int iParam1) // Position - 0x597B Hash - 0x981D3D03 ^0xFA6AD872
{
	if (!func_94(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_140 && iParam1 != false)
		return true;

	if (Global_1360165[iParam0 /*1157*/].f_141 && iParam1 != false)
		return true;

	return false;
}

int func_215(int iParam0) // Position - 0x59BE Hash - 0x7A7437C7 ^0x7A7437C7
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
	
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
	
		case 2:
		case 64:
			return 3;
	
		case 4:
		case 8:
		case 128:
			return 2;
	
		case 512:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_216(int iParam0) // Position - 0x5A37 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_217(int iParam0) // Position - 0x5A5C Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_218(int iParam0) // Position - 0x5A6F Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_219(int iParam0) // Position - 0x5A82 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_220(int iParam0) // Position - 0x5A95 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_221(int iParam0) // Position - 0x5AA7 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_222(int iParam0, int iParam1) // Position - 0x5AB9 Hash - 0x893AC59E ^0x893AC59E
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

void func_223(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x5B53 Hash - 0xA65AB937 ^0xA65AB937
{
	func_278(uParam0, iParam6);
	func_279(uParam0, iParam5);
	func_280(uParam0, iParam4);
	func_281(uParam0, iParam3);
	func_282(uParam0, iParam2);
	func_283(uParam0, iParam1);
	return;
}

Hash func_224(int iParam0) // Position - 0x5B8B Hash - 0xBA965109 ^0xCB1D208B
{
	switch (iParam0)
	{
		case 0:
			return joaat("perschar_comp_dutch");
	
		case 1:
			return joaat("perschar_comp_john");
	
		case 2:
			return joaat("perschar_comp_javier");
	
		case 3:
			return joaat("perschar_comp_bill");
	
		case 4:
			return joaat("perschar_comp_uncle");
	
		case 5:
			return joaat("perschar_comp_hosea");
	
		case 6:
			return joaat("perschar_comp_micah");
	
		case 7:
			return joaat("perschar_comp_charles");
	
		case 8:
			return joaat("perschar_comp_sean");
	
		case 9:
			return joaat("perschar_comp_lenny");
	
		case 10:
			return joaat("perschar_comp_kieran");
	
		case 11:
			return joaat("PERSCHAR_COMP_sadie");
	
		case 12:
			return joaat("PERSCHAR_COMP_DOG");
	
		case 13:
			return joaat("perschar_comp_abigail");
	
		case 14:
			return joaat("perschar_comp_jack");
	
		case 15:
			return joaat("perschar_comp_marybeth");
	
		case 16:
			return joaat("perschar_comp_molly");
	
		case 17:
			return joaat("perschar_comp_pearson");
	
		case 18:
			return joaat("perschar_comp_strauss");
	
		case 19:
			return joaat("perschar_comp_grimshaw");
	
		case 20:
			return joaat("perschar_comp_karen");
	
		case 21:
			return joaat("perschar_comp_swanson");
	
		case 22:
			return joaat("perschar_comp_tilly");
	
		case 23:
			return joaat("perschar_comp_trelawny");
	
		case 24:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_1");
	
		case 25:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_2");
	
		case 26:
			return joaat("perschar_comp_eagleflies");
	}

	return 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x5D67 Hash - 0xA17D549C ^0xF5ABFE65
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
	
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
	
		case 2:
			return "MINIGAME_SP_BLACKJACK_VANHORN";
	
		case 3:
			return "MINIGAME_SP_CLEANSTALLS_BEECHERS_HOPE";
	
		case 4:
			return "MINIGAME_SP_CLEANSTALLS_HORSESHOE_OVERLOOK";
	
		case 5:
			return "MINIGAME_SP_CLEANSTALLS_PRONGHORN_RANCH";
	
		case 6:
			return "MINIGAME_SP_DOMINOES_BLACKWATER";
	
		case 7:
			return "MINIGAME_SP_DOMINOES_CAMP";
	
		case 8:
			return "MINIGAME_SP_DOMINOES_CLEMENS_POINT";
	
		case 9:
			return "MINIGAME_SP_DOMINOES_EMERALD_RANCH";
	
		case 10:
			return "MINIGAME_SP_DOMINOES_HORSESHOE_OVERLOOK";
	
		case 11:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
	
		case 12:
			return "MINIGAME_SP_DOMINOES_SHADY_BELLE";
	
		case 13:
			return "MINIGAME_SP_FENCEBUILDING_PRONGHORN_RANCH";
	
		case 14:
			return "MINIGAME_SP_FILLET_CAMP";
	
		case 15:
			return "MINIGAME_SP_FILLET_CLEMENS_POINT";
	
		case 16:
			return "MINIGAME_SP_FILLET_HORSESHOE_OVERLOOK";
	
		case 17:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
	
		case 18:
			return "MINIGAME_SP_FILLET_SHADY_BELLE";
	
		case 19:
			return "MINIGAME_SP_FILLET_VALENTINE";
	
		case 20:
			return "MINIGAME_SP_FILLET_VAN_HORN";
	
		case 21:
			return "MINIGAME_SP_MILKCOW_BEECHERS_HOPE";
	
		case 22:
			return "MINIGAME_SP_MILKCOW_PRONGHORN_RANCH";
	
		case 23:
			return "MINIGAME_SP_POKER_BLACKWATER";
	
		case 24:
			return "MINIGAME_SP_POKER_CAMP";
	
		case 25:
			return "MINIGAME_SP_POKER_CLEMENS_POINT";
	
		case 26:
			return "MINIGAME_SP_POKER_HORSESHOE_OVERLOOK";
	
		case 27:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
	
		case 28:
			return "MINIGAME_SP_POKER_SERENDIPITY_IND3";
	
		case 29:
			return "MINIGAME_SP_POKER_SHADY_BELLE";
	
		case 30:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
	
		case 31:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
	
		case 32:
			return "MINIGAME_SP_POKER_VALENTINE";
	
		default:
		
	}

	return "";
}

int func_226(int iParam0) // Position - 0x5F28 Hash - 0x6EC15CF9 ^0xE613EBE0
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

Hash func_227(int iParam0) // Position - 0x5FA9 Hash - 0x2F57FA7D ^0x914B8AA9
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_5;

	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_228(int iParam0) // Position - 0x5FD4 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_71(iParam0))
		return 0;

	return func_284(func_141(iParam0));
}

int func_229(int iParam0) // Position - 0x5FF4 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_71(iParam0))
		return -1;

	return func_285(func_141(iParam0));
}

void func_230(BOOL bParam0, var uParam1, var uParam2, int iParam3) // Position - 0x6014 Hash - 0x4C217CF1 ^0x4C217CF1
{
	*iParam3 = func_284(bParam0);
	*uParam1 = func_142(bParam0);
	*uParam2 = func_285(bParam0);
	return;
}

void func_231(int iParam0, int iParam1) // Position - 0x6037 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_286(iParam0);
	else
		func_287(iParam0, iParam1);

	func_288();
	return;
}

BOOL func_232(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, var uParam6, int iParam7) // Position - 0x607F Hash - 0x33F6843D ^0x3ABB8760
{
	Vector3 vector;
	var groundZ;

	if (!func_167(iParam0))
		return false;

	if (!func_289(iParam0, iParam5, &vector))
		return false;

	*uParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, vector) };

	if (iParam7 == 1)
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + { 0.1f, 0f, 0f }, &groundZ, false))
			uParam6->f_2 = groundZ;

	return true;
}

void func_233(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9) // Position - 0x60DC Hash - 0xCF0C48FE ^0x615ED286
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, func_166());

	return;
}

BOOL func_234(int iParam0, Ped pedParam1) // Position - 0x6106 Hash - 0xA9FB82C9 ^0xFB0AC409
{
	int i;
	var animDict;

	if (func_290(pedParam1))
		return false;

	if (func_291(pedParam1))
		return true;

	if (iParam0 == 2)
	{
		if (!PED::IS_PED_MALE(pedParam1))
			return false;
	
		if (PED::_0xBD0E4F52F6D95242(pedParam1))
			return false;
	
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedParam1, 0))
		{
			if (PED::IS_PED_USING_SCENARIO_HASH(pedParam1, joaat("MINIGAME_POKER_PLAYER")))
				return true;
		
			if (PED::IS_PED_USING_SCENARIO_HASH(pedParam1, joaat("MINIGAME_POKER_CAMP_PLAYER")))
				return true;
		
			if (PED::IS_PED_USING_SCENARIO_HASH(pedParam1, joaat("PROP_HUMAN_SEAT_CHAIR")))
				return true;
		}
	
		if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(pedParam1, -1))
			return true;
	
		if (func_292(pedParam1))
			return true;
	
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam1, "mini_games@poker_mg@base", "no_cards_idle_a", 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam1, "mini_games@poker_mg@base", "no_cards_idle_b", 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam1, "mini_games@poker_mg@base", "no_cards_idle_c", 1) && !(TASK::IS_TASK_MOVE_NETWORK_ACTIVE(pedParam1) && TASK::_GET_TASK_MOVE_NETWORK_ID(pedParam1) == joaat("taskmovepoker")))
			return false;
	}
	else if (iParam0 == 1)
	{
		if (PED::_0xBD0E4F52F6D95242(pedParam1))
			return false;
	
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedParam1, 0))
			if (PED::IS_PED_USING_SCENARIO_HASH(pedParam1, joaat("MINIGAME_DOMINOES_PLAYER")))
				return true;
	
		for (i = 0; i < 4; i = i + 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&animDict, "mini_games@dominoes@enter_exit@player_0", 64);
			TEXT_LABEL_APPEND_INT(&animDict, i, 64);
		
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam1, &animDict, "player_00_idle", 1))
				return true;
		
			TEXT_LABEL_ASSIGN_STRING(&animDict, "mini_games@dominoes@game@player_0", 64);
			TEXT_LABEL_APPEND_INT(&animDict, i, 64);
		
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam1, &animDict, "player_00_idle", 1))
				return true;
		}
	
		if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(pedParam1))
			return TASK::_GET_TASK_MOVE_NETWORK_ID(pedParam1) == joaat("script_mini_game_dominoes");
	
		return func_292(pedParam1);
	}
	else if (iParam0 == 0)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedParam1, 0))
			if (PED::IS_PED_USING_SCENARIO_HASH(pedParam1, joaat("MINIGAME_BLACKJACK_PLAYER")))
				return true;
	
		if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(pedParam1, -1))
			return true;
	
		return func_292(pedParam1);
	}

	return true;
}

void func_235(BOOL bParam0) // Position - 0x62E8 Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

void func_236(int iParam0) // Position - 0x62F8 Hash - 0x353ECB1E ^0x7492E51F
{
	const char* str;
	Hash hashKey;
	Vector3 vector;
	var unk3;
	var unk11;
	Any any;

	if (!func_293(iParam0))
		return;

	str = Global_1835011[iParam0 /*74*/].f_8;
	hashKey = MISC::GET_HASH_KEY(&str);

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, hashKey))
		UILOG::_UILOG_REMOVE_ENTRY(1, hashKey);

	if (iParam0 == 77 || iParam0 == 38)
		return;

	vector = { Global_1835011[iParam0 /*74*/].f_18 };
	TEXT_LABEL_COPY(&unk3, { Global_1835011[iParam0 /*74*/].f_8 }, 8);
	unk11 = { unk3 };
	TEXT_LABEL_APPEND_STRING(&unk11, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, hashKey, vector, Global_1835011[iParam0 /*74*/].f_26, MISC::GET_HASH_KEY(&unk11), any);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, hashKey, Global_1835011[iParam0 /*74*/].f_26, joaat("toast_log_blips"));
	return;
}

void func_237(int iParam0) // Position - 0x63B0 Hash - 0x84E45CF3 ^0x84E45CF3
{
	if (!func_71(iParam0))
		return;

	func_294(iParam0, func_212(iParam0) + 1);
	return;
}

void func_238(BOOL bParam0) // Position - 0x63D3 Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_295(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_296(&Global_1935630, 4194304);
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

int func_239(BOOL bParam0) // Position - 0x6476 Hash - 0x595E3BEF ^0x853F0831
{
	if (!bParam0 && func_297(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

int func_240(int iParam0, int iParam1) // Position - 0x64A3 Hash - 0xD0889B29 ^0xA908D477
{
	int num;

	num = func_298(iParam0);

	if (num >= 0)
		return num;

	if (Global_1898164.f_162 >= 32)
		return -1;

	num = Global_1898164.f_162;
	func_299(iParam0, num);
	Global_1898164.f_162 = Global_1898164.f_162 + 1;

	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
		return num;

	func_300(num, iParam1);
	return iParam1;
}

void func_241(Hash hParam0, int iParam1) // Position - 0x6510 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_242(var uParam0, int iParam1) // Position - 0x6523 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_243(int iParam0) // Position - 0x6538 Hash - 0xDD4F2B2E ^0x9E400283
{
	Global_1572864.f_3 = Global_1572864.f_3 - Global_1572864.f_3 && iParam0;
	return;
}

void func_244(BOOL bParam0) // Position - 0x6556 Hash - 0xB3088780 ^0xB3088780
{
	func_301(bParam0);
	func_302(bParam0);
	func_303(bParam0);
	func_304(bParam0);
	func_305(bParam0);
	func_306(bParam0);
	func_307(bParam0);
	func_308(bParam0);
	return;
}

void func_245(BOOL bParam0) // Position - 0x658E Hash - 0x9114E741 ^0x8984E174
{
	if (func_54() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_26(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_26(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_309(1, bParam0, true);
	func_310();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

int func_246(int iParam0) // Position - 0x65FC Hash - 0xF4AFA201 ^0x156AC308
{
	int num;
	int num2;

	switch (func_228(iParam0))
	{
		case 1:
			num = func_68(iParam0);
			return func_311(num);
	
		case 8:
			num2 = func_68(iParam0);
		
			if (func_70(Global_1347702[num2 /*49*/].f_12, 1))
				return func_312(num2);
			break;
	}

	return -1;
}

int func_247() // Position - 0x6657 Hash - 0xF04428FF ^0xD9AF5F7C
{
	if (!func_145(Global_1835011[4 /*74*/].f_1, true))
		return 0;
	else if (!func_145(Global_1347702[66 /*49*/].f_15, true))
		return 1;
	else if (!func_145(Global_1347702[67 /*49*/].f_15, true))
		return 2;
	else if (!func_145(Global_1835011[38 /*74*/].f_1, true))
		return 3;
	else if (!func_145(Global_1347702[68 /*49*/].f_15, true))
		return 4;
	else if (!func_145(Global_1835011[59 /*74*/].f_1, true))
		return 5;
	else if (!func_145(Global_1835011[67 /*74*/].f_1, true))
		return 7;
	else
		return 8;

	return -1;
}

void func_248(int iParam0) // Position - 0x671A Hash - 0x72B3FC21 ^0x3909C54
{
	int num;

	num = 0;

	if (func_54() != -1)
		num = 1;

	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = num;
	func_313(Global_1898077.f_7, Global_1898077.f_3);
	return;
}

void func_249(int iParam0) // Position - 0x675E Hash - 0x6D69048D ^0xDB432840
{
	int num;

	if (Global_1898077.f_1 == 2)
		return;

	num = 0;

	if (func_54() != -1)
		num = 1;

	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = num;
	func_314(Global_1898077.f_7, Global_1898077.f_4);
	return;
}

void func_250(BOOL bParam0) // Position - 0x67AF Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898164 = Global_1898164 || bParam0;
	return;
}

void func_251(int iParam0, BOOL bParam1) // Position - 0x67C2 Hash - 0x7075D2FF ^0xF0E29EF6
{
	if (func_54() != -1)
		return;

	if (func_117(0) != iParam0)
		return;

	if (func_315(iParam0))
		if (bParam1)
			func_316(-525676072);
		else
			func_317(-525676072);

	return;
}

int func_252() // Position - 0x6805 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1310750.f_16037;
}

BOOL func_253(int iParam0) // Position - 0x6814 Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

BOOL func_254(int iParam0, int iParam1) // Position - 0x682A Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_253(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

BOOL func_255(int iParam0) // Position - 0x684D Hash - 0x23BA4BD8 ^0x6ABCB1DC
{
	if (!func_253(iParam0))
		return false;

	if (func_318(64) && func_319(iParam0))
		return true;

	return Global_1310750[iParam0 /*111*/].f_46;
}

BOOL func_256(int iParam0) // Position - 0x6885 Hash - 0xE4DA9E55 ^0x745EA523
{
	if (!func_253(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_257(int iParam0) // Position - 0x68A5 Hash - 0xA37733A1 ^0x23C2C6AE
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_253(Global_1310750.f_13321[iParam0 /*9*/]))
		return;

	num = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[num /*111*/].f_48 = 0;
	func_320(iParam0);
	Global_1310750.f_16037 = Global_1310750.f_16037 - 1;
	return;
}

int func_258(int iParam0) // Position - 0x690E Hash - 0x6761E6A0 ^0x6761E6A0
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 112;
	
		case 2:
			return 113;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
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
	
		case 15:
			return 12;
	
		case 16:
			return 13;
	
		case 17:
			return 15;
	
		case 19:
			return 17;
	
		case 20:
			return 18;
	
		case 21:
			return 19;
	
		case 22:
			return 20;
	
		case 23:
			return 21;
	
		case 25:
			return 23;
	
		case 26:
			return 25;
	
		case 27:
			return 26;
	
		case 28:
			return 62;
	
		case 29:
			return 27;
	
		case 30:
			return 29;
	
		case 31:
			return 30;
	
		case 32:
			return 31;
	
		case 33:
			return 35;
	
		case 35:
			return 42;
	
		case 36:
			return 43;
	
		case 37:
			return 47;
	
		case 38:
			return 48;
	
		case 39:
			return 49;
	
		case 40:
			return 50;
	
		case 42:
			return 52;
	
		case 43:
			return 54;
	
		case 45:
			return 57;
	
		case 48:
			return 61;
	
		case 49:
			return 28;
	
		case 50:
			return 51;
	
		case 52:
			return 53;
	
		case 56:
			return 63;
	
		case 57:
			return 64;
	
		case 58:
			return 65;
	
		case 59:
			return 66;
	
		case 60:
			return 67;
	
		case 61:
			return 68;
	
		case 62:
			return 71;
	
		case 64:
			return 73;
	
		case 65:
			return 74;
	
		case 67:
			return 76;
	
		case 68:
			return 78;
	
		case 69:
			return 79;
	
		case 70:
			return 80;
	
		case 71:
			return 81;
	
		case 72:
			return 82;
	
		case 75:
			return 84;
	
		case 76:
			return 85;
	
		case 77:
			return 72;
	
		case 78:
			return 87;
	
		case 79:
			return 88;
	
		case 80:
			return 90;
	
		case 81:
			return 91;
	
		case 82:
			return 92;
	
		case 83:
			return 40;
	
		case 87:
			return 96;
	
		case 88:
			return 97;
	
		case 89:
			return 44;
	
		case 91:
			return 98;
	
		case 92:
			return 99;
	
		case 93:
			return 100;
	
		case 94:
			return 101;
	
		case 95:
			return 102;
	
		case 96:
			return 103;
	
		case 97:
			return 104;
	
		case 98:
			return 105;
	
		case 99:
			return 106;
	
		case 100:
			return 107;
	
		case 104:
			return 114;
	
		case 105:
			return 115;
	
		case 107:
			return 118;
	
		case 109:
			return 119;
	
		case 110:
			return 120;
	
		case 111:
			return 121;
	
		case 112:
			return 122;
	
		case 115:
			return 46;
	
		case 117:
			return 86;
	
		case 120:
			return 32;
	
		case 124:
			return 33;
	
		case 125:
			return 34;
	
		case 126:
			return 69;
	
		case 127:
			return 70;
	
		case 128:
			return 123;
	
		default:
		
	}

	return 0;
}

void func_259(var uParam0, var uParam1, var uParam2) // Position - 0x6D23 Hash - 0xD64E984D ^0x9D3A2521
{
	var unk;

	unk = uParam0;
	unk.f_1 = uParam1;
	unk.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &unk, 3, 3);
	return;
}

BOOL func_260(int iParam0, var uParam1) // Position - 0x6D44 Hash - 0x51CBA313 ^0xAF93626D
{
	*uParam1 = -1;

	if (iParam0 == -1 || iParam0 >= 33)
		return false;

	*uParam1 = Global_1899528.f_11[iParam0];
	return *uParam1 != -1;
}

BOOL func_261(int iParam0) // Position - 0x6D78 Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

void func_262(int iParam0, Hash hParam1, int iParam2) // Position - 0x6D97 Hash - 0xF39224E1 ^0xD56E494F
{
	int data;

	data.f_1 = 0;
	data = 0;
	data.f_2 = 0;

	if (func_54() == false)
		data = Global_265073.f_73815.f_208.f_12;

	STATS::_STATSTRACKER_DEED_STATUS(iParam0, hParam1, iParam2, &data);
	return;
}

BOOL func_263(int iParam0, int iParam1) // Position - 0x6DCF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_264(BOOL bParam0) // Position - 0x6DDE Hash - 0x7B48571 ^0xD88AE50B
{
	int num;

	if (Global_1898077.f_1 == 0 && !bParam0)
		return;

	num = 0;

	if (func_54() != -1)
		num = 1;

	if (Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13 && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_321(num, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = num;
		Global_1898077.f_8 = func_322();
		Global_1898077.f_9 = func_258(Global_1894899.f_2);
		func_259(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}

	Global_1898077.f_2 = 0;
	return;
}

int func_265(int iParam0) // Position - 0x6E9C Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_323(func_298(iParam0));
}

void func_266(int iParam0, int iParam1) // Position - 0x6EAE Hash - 0x3A863EAC ^0xECB3FAF8
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_267(int iParam0, int iParam1) // Position - 0x6EDB Hash - 0x90093024 ^0xBB5CF78A
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_268(int iParam0, int iParam1) // Position - 0x6F0C Hash - 0x90093024 ^0x830112D0
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x6F3D Hash - 0xA17D549C ^0xD83DBD6C
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
	
		case 1:
			return "JOHN";
	
		case 2:
			return "JAVIER";
	
		case 3:
			return "BILL";
	
		case 4:
			return "UNCLE";
	
		case 5:
			return "HOSEA";
	
		case 6:
			return "MICAH";
	
		case 7:
			return "CHARLES";
	
		case 8:
			return "SEAN";
	
		case 9:
			return "LENNY";
	
		case 10:
			return "KIERAN";
	
		case 11:
			return "SADIE";
	
		case 12:
			return "DOG";
	
		case 13:
			return "ABIGAIL";
	
		case 14:
			return "JACK";
	
		case 15:
			return "MARYBETH";
	
		case 16:
			return "MOLLY";
	
		case 17:
			return "PEARSON";
	
		case 18:
			return "STRAUSS";
	
		case 19:
			return "GRIMSHAW";
	
		case 20:
			return "KAREN";
	
		case 21:
			return "SWANSON";
	
		case 22:
			return "TILLY";
	
		case 23:
			return "TRELAWNY";
	
		case 24:
			return "CLEET";
	
		case 25:
			return "JOE";
	
		case 26:
			return "EAGLEFLIES";
	
		default:
		
	}

	return "Companion unknown";
}

BOOL func_270() // Position - 0x70B0 Hash - 0x1C71B0F ^0x1C71B0F
{
	if (func_54() != -1)
		return false;

	return func_136(true) > 0;
}

void func_271(var uParam0, int iParam1) // Position - 0x70CB Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_272(int iParam0) // Position - 0x70E0 Hash - 0x29FCCE6A ^0xA230F605
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
		return true;

	return false;
}

int func_273(int iParam0, int iParam1) // Position - 0x70FD Hash - 0x99A93628 ^0x27AE8C83
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
	
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
	
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
	
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
	
		case -2104294676:
			return 83;
	
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
	
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
	
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
	
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
	
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
	
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
	
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
	
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
	
		case -2033572567:
			return 92;
	
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
	
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
	
		case -2006082799:
			return 56;
	
		case -1994410205:
			return 499;
	
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
	
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
	
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
	
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
	
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
	
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
	
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
	
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
	
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
	
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
	
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
	
		case -1885734028:
			return 110;
	
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
	
		case -1856459307:
			return 219;
	
		case -1837343824:
			return 496;
	
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
	
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
	
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
	
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
	
		case -1818590041:
			return 246;
	
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
	
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
	
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
	
		case joaat("CSTAG_BCH_BASE"):
			return 10;
	
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
	
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
	
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
	
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
	
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
	
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
	
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
	
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
	
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
	
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
	
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
	
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
	
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
	
		case -1584659518:
			return 210;
	
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
	
		case -1565979762:
			return 507;
	
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
	
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
	
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
	
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
	
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
	
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
	
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
	
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
	
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
	
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
	
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
	
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
	
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
	
		case -1426009748:
			return 119;
	
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
	
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
	
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
	
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
	
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
	
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
	
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
	
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
	
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
	
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
	
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
	
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
	
		case -1333840726:
			return 236;
	
		case -1318290630:
			return 254;
	
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
	
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
	
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
	
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
	
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
	
		case -1235200494:
			return 165;
	
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
	
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
	
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
	
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
	
		case joaat("CSTAG_PRG_BASE"):
			return 9;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
	
		case -1171086122:
			return 41;
	
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
	
		case -1152282847:
			return 33;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
	
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
	
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
	
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
	
		case -1061998329:
			return 164;
	
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
	
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
	
		case -1045864225:
			return 510;
	
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
	
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
	
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
	
		case -978287173:
			return 12;
	
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
	
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
	
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
	
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
	
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
	
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
	
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
	
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
	
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
	
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
	
		case joaat("CSTAG_COL_BASE"):
			return 2;
	
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
	
		case -830432609:
			return 492;
	
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
	
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
	
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
	
		case -818926670:
			return 200;
	
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
	
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
	
		case joaat("CSTAG_HSO_BASE"):
			return 3;
	
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
	
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
	
		case -803062666:
			return 65;
	
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
	
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
	
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
	
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
	
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
	
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
	
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
	
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
	
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
	
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
	
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
	
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
	
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
	
		case -671103079:
			return 504;
	
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
	
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
	
		case -650501093:
			return 509;
	
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
	
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
	
		case -636774257:
			return 146;
	
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
	
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
	
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
	
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
	
		case -604891653:
			return 237;
	
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
	
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return 424;
	
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
	
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
	
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
	
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
	
		case -534913305:
			return 174;
	
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
	
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
	
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
	
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
	
		case -453449739:
			return 182;
	
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
	
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
	
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
	
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
	
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
	
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
	
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
	
		case -399703928:
			return 155;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
	
		case -381477663:
			return 37;
	
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
	
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
	
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
	
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
	
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
	
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
	
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
	
		case -317452243:
			return 128;
	
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
	
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
	
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
	
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
	
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
	
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
	
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
	
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
	
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
	
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
	
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
	
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
	
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
	
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
	
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
	
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
	
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
	
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
	
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
	
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
	
		case -170673728:
			return 156;
	
		case -165538585:
			return 127;
	
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
	
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
	
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
	
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
	
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
	
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
	
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
	
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
	
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
	
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
	
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
	
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
	
		case -98209688:
			return 55;
	
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
	
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
	
		case -58291054:
			return 201;
	
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
	
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
	
		case -21372580:
			return 46;
	
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
	
		case -8269375:
			return 137;
	
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_274() // Position - 0x880C Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

BOOL func_275(int iParam0, int iParam1, int iParam2) // Position - 0x8827 Hash - 0x932A04D5 ^0x39A8988D
{
	return iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

int func_276(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x884D Hash - 0x4E72835D ^0x57C5ACE0
{
	BOOL flag;
	int num;

	if (!func_324(iParam2))
		return -1;

	if (iParam0 < 0 || iParam0 > 511)
		return -1;

	if (iParam1 < 0 || iParam1 > 255)
		return -1;

	if (iParam3 < 0 || iParam3 > func_274())
		return -1;

	flag = func_275(iParam0, iParam1, iParam2);
	num = iParam3;
	func_231(num, 0);
	func_294(num, 0);
	func_325(num, 0);
	func_326(num, 0);
	func_327(num, flag);

	if (hParam4 != 0)
		func_328(num, hParam4);

	return num;
}

var func_277(BOOL bParam0, var uParam1, var uParam2) // Position - 0x88EC Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_278(var uParam0, int iParam1) // Position - 0x8903 Hash - 0xD05180BA ^0x39589262
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

void func_279(var uParam0, int iParam1) // Position - 0x8989 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_280(var uParam0, int iParam1) // Position - 0x89C5 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_217(*uParam0);
	num2 = func_216(*uParam0);

	if (iParam1 < 1 || iParam1 > func_222(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_281(var uParam0, int iParam1) // Position - 0x8A18 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_282(var uParam0, int iParam1) // Position - 0x8A53 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_283(var uParam0, int iParam1) // Position - 0x8A8C Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

int func_284(BOOL bParam0) // Position - 0x8AC4 Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_285(BOOL bParam0) // Position - 0x8AD1 Hash - 0xFA7B3D3 ^0x826FC8D8
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 15) & 16383;
}

int func_286(int iParam0) // Position - 0x8AE5 Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_226(iParam0);

	if (num < 0)
		return 0;

	return func_329(num);
}

int func_287(int iParam0, int iParam1) // Position - 0x8B05 Hash - 0xF3EA5EAF ^0xA48F5774
{
	int num;
	int num2;

	if (*Global_1058888.f_40431 >= 32)
		return -1;

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;

	if (*Global_1058888.f_40431 == 0)
	{
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
		return 0;
	}

	num2 = 0;

	while (num2 < *Global_1058888.f_40431)
	{
		if (iParam0 == Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
		else if (iParam0 > Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			num2 = num2 + 1;
		}
		else if (iParam0 < Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			func_330(num2);
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
	}

	if (*Global_1058888.f_40431 < 31)
	{
		num2 = *Global_1058888.f_40431;
		Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
	
		if (*Global_1058888.f_40431 > 32)
			Global_1058888.f_40431 = 32;
	
		return num2;
	}

	return -1;
}

void func_288() // Position - 0x8C75 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

BOOL func_289(int iParam0, int iParam1, var uParam2) // Position - 0x8C98 Hash - 0x3B42F46B ^0x3B42F46B
{
	float num;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { { 50f, -7.9116f, 112.52191f } / { 100f, 100f, 100f } };
					return true;
			
				case 1:
					*uParam2 = { { 50f, -73.55062f, 45.94575f } / { 100f, 100f, 100f } };
					return true;
			
				case 2:
					*uParam2 = { { 50f, -72.85871f, -47.61618f } / { 100f, 100f, 100f } };
					return true;
			
				case 3:
					*uParam2 = { { 50f, -6.31211f, -113.1842f } / { 100f, 100f, 100f } };
					return true;
			
				case 4:
					*uParam2 = { { 50f, 82.1513f, 0.8654f } / { 100f, 100f, 100f } };
					return true;
			
				default:
				
			}
		
			return false;
	
		case 1:
			num = 0.98f;
		
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0f, 0.66f, num };
					return true;
			
				case 1:
					*uParam2 = { 0f, -0.66f, num };
					return true;
			
				case 2:
					*uParam2 = { 0.66f, 0f, num };
					return true;
			
				case 3:
					*uParam2 = { -0.66f, 0f, num };
					return true;
			
				default:
				
			}
		
			return false;
	
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
				return false;
		
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.008654f, 1.1715133f, 0.4999996f };
					return true;
			
				case 1:
					*uParam2 = { 1.0188873f, 0.5782621f, 0.4999996f };
					return true;
			
				case 2:
					*uParam2 = { 1.0102333f, -0.5932513f, 0.4999996f };
					return true;
			
				case 3:
					*uParam2 = { -0.008654f, -1.1715133f, 0.4999996f };
					return true;
			
				case 4:
					*uParam2 = { -1.0188873f, -0.5782621f, 0.4999996f };
					return true;
			
				case 5:
					*uParam2 = { -1.0102333f, 0.5932513f, 0.4999996f };
					return true;
			
				default:
				
			}
		
			return true;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1f, 0f, 0f };
					return true;
			
				case 1:
					*uParam2 = { 1f, 0f, 0f };
					return true;
			
				default:
				
			}
		
			return true;
	
		default:
		
	}

	return true;
}

BOOL func_290(Ped pedParam0) // Position - 0x8EE9 Hash - 0xE1D21FC5 ^0xFFD4767
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return true;

	if (PED::IS_PED_INJURED(pedParam0))
		return true;

	if (!PED::IS_PED_HUMAN(pedParam0))
		return true;

	if (PED::IS_PED_ON_MOUNT(pedParam0))
		return true;

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		return true;

	if (PED::IS_PED_DEAD_OR_DYING(pedParam0, true))
		return true;

	if (PED::_IS_PED_COWERING(pedParam0))
		return true;

	if (PED::IS_PED_IN_COMBAT(pedParam0, 0))
		return true;

	if (PED::IS_PED_LASSOED(pedParam0) || PED::IS_PED_HOGTIED(pedParam0))
		return true;

	if (PED::IS_PED_SHOOTING(pedParam0))
		return true;

	if (PED::IS_PED_FLEEING(pedParam0))
		return true;

	if (!ENTITY::IS_ENTITY_UPRIGHT(pedParam0, 1119092736) || ENTITY::IS_ENTITY_UPSIDEDOWN(pedParam0))
		return true;

	if (PED::IS_PED_FALLING_OVER(pedParam0) || PED::IS_PED_FALLING(pedParam0))
		return true;

	if (TASK::IS_PED_GETTING_UP(pedParam0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(pedParam0))
		return true;

	if (PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return true;

	if (PED::GET_PED_IS_GRAPPLING(pedParam0) || PED::GET_PED_IS_BEING_GRAPPLED(pedParam0))
		return true;

	if (PED::IS_PED_IN_COVER(pedParam0, false, false))
		return true;

	if (PED::IS_PED_DIVING(pedParam0))
		return true;

	if (PED::GET_PED_IS_DOING_COMBAT_ROLL(pedParam0))
		return true;

	if (PED::IS_PED_CLIMBING(pedParam0))
		return true;

	return false;
}

BOOL func_291(Ped pedParam0) // Position - 0x903E Hash - 0x9D91F255 ^0x33FB62ED
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "PedSeatedForMinigame"))
		return DECORATOR::DECOR_GET_BOOL(pedParam0, "PedSeatedForMinigame");

	return false;
}

BOOL func_292(Ped pedParam0) // Position - 0x907C Hash - 0x46E89286 ^0xB40AFB8A
{
	var unk;
	var pedBoneCoords;
	float num;

	unk = 3;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(pedParam0))
		return true;

	if (!TASK::IS_PED_STILL(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_UPRIGHT(pedParam0, 1119092736))
		return false;

	if (PED::GET_PED_CROUCH_MOVEMENT(pedParam0))
		return false;

	if (PED::GET_PED_STEALTH_MOVEMENT(pedParam0))
		return false;

	if (PED::IS_PED_JUMPING(pedParam0))
		return false;

	if (PED::IS_PED_RAGDOLL(pedParam0))
		return false;

	pedBoneCoords = { PED::GET_PED_BONE_COORDS(pedParam0, 56200, 0f, 0f, 0f) };
	unk[2 /*3*/] = { PED::GET_PED_BONE_COORDS(pedParam0, 45454, 0f, 0f, 0f) };

	if (pedBoneCoords.f_2 - unk[2 /*3*/].f_2 > 0.7f)
		return false;

	unk[0 /*3*/] = { PED::GET_PED_BONE_COORDS(pedParam0, 65478, 0f, 0f, 0f) };
	unk[1 /*3*/] = { PED::GET_PED_BONE_COORDS(pedParam0, 55120, 0f, 0f, 0f) };
	num = func_331(unk[2 /*3*/] - unk[1 /*3*/], unk[1 /*3*/] - unk[0 /*3*/]);

	if (num < -0.173648f && num > 0.173648f)
		return false;

	unk[0 /*3*/] = { PED::GET_PED_BONE_COORDS(pedParam0, 6884, 0f, 0f, 0f) };
	unk[1 /*3*/] = { PED::GET_PED_BONE_COORDS(pedParam0, 43312, 0f, 0f, 0f) };
	unk[2 /*3*/] = { PED::GET_PED_BONE_COORDS(pedParam0, 33646, 0f, 0f, 0f) };
	num = func_331(unk[2 /*3*/] - unk[1 /*3*/], unk[1 /*3*/] - unk[0 /*3*/]);

	if (num < -0.173648f && num > 0.173648f)
		return false;

	return true;
}

BOOL func_293(int iParam0) // Position - 0x921A Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

void func_294(int iParam0, int iParam1) // Position - 0x9230 Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_295(int iParam0, int iParam1) // Position - 0x9250 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_296(int iParam0, int iParam1) // Position - 0x9265 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_297(int iParam0) // Position - 0x9276 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_332(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

int func_298(int iParam0) // Position - 0x92C5 Hash - 0xBA803397 ^0x906286B5
{
	int i;

	if (iParam0 == 0 || iParam0 == -1)
		return -1;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1898164.f_1[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

void func_299(int iParam0, int iParam1) // Position - 0x930D Hash - 0xCE0BB2C4 ^0x23B010DC
{
	var unk;

	if (iParam0 == -1 || iParam0 == 0)
	{
		Global_1898164.f_1[iParam1 /*5*/] = { unk };
	}
	else
	{
		Global_1898164.f_1[iParam1 /*5*/] = iParam0;
		Global_1898164.f_1[iParam1 /*5*/].f_1 = func_141(iParam0);
		func_230(Global_1898164.f_1[iParam1 /*5*/].f_1, &(Global_1898164.f_1[iParam1 /*5*/].f_3), &(Global_1898164.f_1[iParam1 /*5*/].f_4), &(Global_1898164.f_1[iParam1 /*5*/].f_2));
	}

	return;
}

void func_300(int iParam0, int iParam1) // Position - 0x938B Hash - 0x6861752C ^0x6861752C
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_333(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_333(i, i + 1);
		}
	}

	if (func_71(Global_1898164.f_1[0 /*5*/]))
		func_180(Global_1898164.f_1[0 /*5*/], 3);

	return;
}

void func_301(BOOL bParam0) // Position - 0x9401 Hash - 0xABC71D04 ^0x7FAB5AFE
{
	int i;

	for (i = 0; i < 153; i = i + 1)
	{
		if (Global_1914319.f_15936[i /*6*/].f_5)
			Global_1914319.f_15936[i /*6*/].f_5 = 0;
	
		func_199(&Global_1914319.f_15936[i /*6*/], bParam0);
	}

	return;
}

void func_302(BOOL bParam0) // Position - 0x944B Hash - 0x75A38704 ^0x669CA416
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		func_199(&Global_1934051.f_23[i], bParam0);
	}

	return;
}

void func_303(BOOL bParam0) // Position - 0x9476 Hash - 0xEE9EF61F ^0x6F45D5CB
{
	int i;

	for (i = 0; i < 33; i = i + 1)
	{
		func_199(&Global_1899778.f_34[i], bParam0);
		Global_1899778[i] = 0;
	}

	return;
}

void func_304(BOOL bParam0) // Position - 0x94AA Hash - 0x990D8E53 ^0x990D8E53
{
	func_199(&Global_1955864, bParam0);
	return;
}

void func_305(BOOL bParam0) // Position - 0x94BC Hash - 0x44C39101 ^0xB6988EF7
{
	func_199(&(Global_1415412.f_3), bParam0);
	return;
}

void func_306(BOOL bParam0) // Position - 0x94D0 Hash - 0x15F28904 ^0x5BE4C56F
{
	if (func_80(Global_1934051.f_33))
		func_334(Global_1934051.f_33, joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));

	func_199(&(Global_1934051.f_33), bParam0);
	return;
}

void func_307(BOOL bParam0) // Position - 0x94FF Hash - 0xB1376D99 ^0x20D49D2D
{
	int i;
	Hash hash;

	for (i = 0; i < 11; i = i + 1)
	{
		hash = func_336(func_335(i));
	
		if (hash != 0)
			func_334(Global_1934051[i /*2*/], hash);
	
		if (Global_1934051[i /*2*/].f_1)
			Global_1934051[i /*2*/].f_1 = 0;
	
		func_199(&Global_1934051[i /*2*/], bParam0);
	}

	return;
}

void func_308(BOOL bParam0) // Position - 0x9560 Hash - 0x2B0F2EE5 ^0xCD361E26
{
	int i;

	for (i = 0; i < Global_36308; i = i + 1)
	{
		func_266(i, -1);
		func_267(i, 0);
		func_268(i, 0);
	
		if (MAP::DOES_BLIP_EXIST(Global_36308[i]))
		{
			if (bParam0)
				MAP::SET_RADAR_ZOOM(Global_36308[i]);
		
			MAP::REMOVE_BLIP(&Global_36308[i]);
		}
	}

	return;
}

void func_309(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x95BA Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

void func_310() // Position - 0x95EA Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_337();
	func_338();
	func_339();
	return;
}

int func_311(int iParam0) // Position - 0x9601 Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
	
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
	
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
	
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
	
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
	
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
	
		case 59:
			return 6;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
	
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}

	return -1;
}

int func_312(int iParam0) // Position - 0x9808 Hash - 0xBC835308 ^0xBC835308
{
	switch (iParam0)
	{
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
	
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
	
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
	
		case 115:
		case 116:
			return 3;
	
		case 120:
			return 0;
	}

	return -1;
}

void func_313(var uParam0, var uParam1) // Position - 0x9910 Hash - 0x852438A3 ^0xED82E692
{
	var unk;

	unk = uParam0;
	unk.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &unk, 2, 2);
	return;
}

void func_314(var uParam0, var uParam1) // Position - 0x992B Hash - 0x3F2FCA40 ^0x9574484A
{
	var unk;

	unk = uParam0;
	unk.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &unk, 2, 2);
	return;
}

BOOL func_315(int iParam0) // Position - 0x9946 Hash - 0x18F20B33 ^0x18F20B33
{
	if (!func_71(iParam0))
		return false;

	switch (func_228(iParam0))
	{
		case 1:
			switch (func_68(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
	
		case 8:
			switch (func_68(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}

	return false;
}

void func_316(int iParam0) // Position - 0x9A1F Hash - 0xF69051DC ^0xF3C89D36
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_340(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_341(item) == iParam0)
			INVENTORY::_INVENTORY_ENABLE_ITEM(inventoryId, item);
	}

	func_343(func_342(iParam0), 6);
	return;
}

void func_317(int iParam0) // Position - 0x9A73 Hash - 0xF11E3100 ^0x54576133
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_340(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_341(item) == iParam0)
			INVENTORY::_INVENTORY_DISABLE_ITEM(inventoryId, item, 0);
	}

	func_344(func_342(iParam0), 6);
	return;
}

BOOL func_318(int iParam0) // Position - 0x9AC8 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

BOOL func_319(int iParam0) // Position - 0x9ADC Hash - 0x169E8D3F ^0x169E8D3F
{
	return func_254(iParam0, Global_1310750.f_16072 | 64);
}

void func_320(int iParam0) // Position - 0x9AF4 Hash - 0x3D0B339A ^0xB87B2B3D
{
	int i;

	if (Global_1310750.f_13321[iParam0 /*9*/] != -1)
		Global_1310750[Global_1310750.f_13321[iParam0 /*9*/] /*111*/].f_48 = 0;

	Global_1310750.f_13321[iParam0 /*9*/] = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_1 = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_2 = { 0f, 0f, 0f };
	Global_1310750.f_13321[iParam0 /*9*/].f_5 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_1310750.f_13321[iParam0 /*9*/].f_6[i] = -1881652455;
	}

	return;
}

void func_321(int iParam0, var uParam1) // Position - 0x9B81 Hash - 0x86BC6E12 ^0x31271D44
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &num, 2, 2);
	return;
}

int func_322() // Position - 0x9B9C Hash - 0xD5B66211 ^0x9B76C225
{
	float randomFloatInRange;

	randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216);

	if (randomFloatInRange < 0.01f)
		return 19;

	if (randomFloatInRange < 0.16f)
		return 15;

	if (randomFloatInRange < 0.31f)
		return 17;

	if (randomFloatInRange < 0.46f)
		return 16;

	if (randomFloatInRange < 0.61f)
		return 18;

	return 0;
}

int func_323(int iParam0) // Position - 0x9C01 Hash - 0xD83A1109 ^0x154A194E
{
	var unk;

	if (iParam0 < 0)
		return 0;

	if (Global_1898164.f_162 == 0)
		return 0;

	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { unk };
		return 1;
	}

	Global_1898164.f_1[iParam0 /*5*/] = { unk };
	Global_1898164.f_162 = Global_1898164.f_162 - 1;
	func_300(iParam0, Global_1898164.f_162);
	return 1;
}

BOOL func_324(int iParam0) // Position - 0x9C70 Hash - 0x2BF73E21 ^0x2BF73E21
{
	return iParam0 > 0 && iParam0 < 13;
}

void func_325(int iParam0, int iParam1) // Position - 0x9C86 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

void func_326(int iParam0, int iParam1) // Position - 0x9CA6 Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = iParam1;
	return;
}

void func_327(int iParam0, BOOL bParam1) // Position - 0x9CC6 Hash - 0x5CF9514E ^0x8B449709
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = bParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/] = bParam1;
	return;
}

void func_328(int iParam0, Hash hParam1) // Position - 0x9CF1 Hash - 0x634DE727 ^0xC7F71E9D
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = hParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/].f_1 = hParam1;
	return;
}

int func_329(int iParam0) // Position - 0x9D20 Hash - 0x78E19743 ^0x6ACC64F5
{
	int i;
	var unk;

	for (i = iParam0; i < *Global_1058888.f_40431; i = i + 1)
	{
		if (i + 1 < 32)
			Global_1058888.f_40431.f_1[i /*2*/] = { Global_1058888.f_40431.f_1[i + 1 /*2*/] };
	}

	unk = -1;

	if (*Global_1058888.f_40431 < 32)
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { unk };

	Global_1058888.f_40431 = *Global_1058888.f_40431 - 1;

	if (*Global_1058888.f_40431 < 0)
		Global_1058888.f_40431 = 0;

	return 1;
}

int func_330(int iParam0) // Position - 0x9DD4 Hash - 0x6DD34799 ^0x352A62D8
{
	int num;
	var unk;

	num = *Global_1058888.f_40431 - 1;
	unk = -1;

	while (num >= iParam0)
	{
		if (num + 1 < 32)
			Global_1058888.f_40431.f_1[num + 1 /*2*/] = { Global_1058888.f_40431.f_1[num /*2*/] };
	
		num = num - 1;
	}

	Global_1058888.f_40431.f_1[iParam0 /*2*/] = { unk };
	Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;

	if (*Global_1058888.f_40431 > 32)
		Global_1058888.f_40431 = 32;

	return 1;
}

float func_331(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x9E75 Hash - 0x596BEA29 ^0x5FBCDBE5
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

int func_332(int iParam0, int iParam1) // Position - 0x9E96 Hash - 0x8FA0E29 ^0xC3F68E87
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

void func_333(int iParam0, int iParam1) // Position - 0xAFAF Hash - 0x676FADFF ^0x1734896
{
	var unk;

	unk = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { unk };
	return;
}

void func_334(int iParam0, Hash hParam1) // Position - 0xAFEF Hash - 0x24A4BE93 ^0x70B16AB7
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], hParam1);

	return;
}

int func_335(int iParam0) // Position - 0xB025 Hash - 0xB26DA715 ^0xB26DA715
{
	switch (iParam0)
	{
		case 0:
			return 3;
	
		case 1:
			return 5;
	
		case 2:
			return 26;
	
		case 3:
			return 38;
	
		case 4:
			return 69;
	
		case 5:
			return 76;
	
		case 6:
			return 78;
	
		case 7:
			return 92;
	
		case 8:
			return 105;
	
		case 9:
			return 115;
	
		case 10:
			return 120;
	
		default:
		
	}

	return -1;
}

Hash func_336(int iParam0) // Position - 0xB0AD Hash - 0xB8EC44B7 ^0xFC24309D
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_MODIFIER_GROUPING_LAGRAS_LEADER");
	
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER");
	
		case 5:
			return joaat("BLIP_MODIFIER_GROUPING_SAINT_DENIS_LEADER");
	
		case 26:
			return joaat("BLIP_MODIFIER_GROUPING_STRAWBERRY_LEADER");
	
		case 38:
			return joaat("BLIP_MODIFIER_GROUPING_BLACKWATER_LEADER");
	
		case 69:
			return joaat("BLIP_MODIFIER_GROUPING_EMERALD_RANCH_LEADER");
	
		case 76:
			return joaat("BLIP_MODIFIER_GROUPING_VALENTINE_LEADER");
	
		case 78:
			return joaat("BLIP_MODIFIER_GROUPING_ANNESBURG_LEADER");
	
		case 92:
			return joaat("BLIP_MODIFIER_GROUPING_VAN_HORN_LEADER");
	
		case 105:
			return joaat("BLIP_MODIFIER_GROUPING_RHODES_LEADER");
	
		case 115:
			return joaat("BLIP_MODIFIER_GROUPING_TUMBLEWEED_LEADER");
	
		case 120:
			return joaat("BLIP_MODIFIER_GROUPING_ARMADILLO_LEADER");
	
		default:
		
	}

	return 0;
}

float func_337() // Position - 0xB195 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_345())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_346(2);

	if (Global_1347477.f_119)
		return func_346(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_347();
	num3 = func_348();
	num4 = func_349();
	num5 = func_350();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_351());
	num8 = func_346(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_352(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_353(3, num9, num9 > 100f);
	return func_354(num8, -100f, 100f);
}

float func_338() // Position - 0xB2BE Hash - 0x951B1CCC ^0x7B312694
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

	if (func_345())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_346(1);

	if (Global_1347477.f_119)
		return func_346(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_347();
	num3 = func_348();
	num4 = func_349();
	num5 = func_350();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_351());
	num8 = func_346(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_352(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_353(2, num9, num9 > 100f);
	return func_354(num8, -100f, 100f);
}

float func_339() // Position - 0xB3E7 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_345())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_346(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_355())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_356())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_346(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_347();
	num3 = func_348();
	num4 = func_349();
	num5 = func_350();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_351());
	num8 = func_346(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_352(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_353(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_346(0);

	return func_354(num8, -100f, 100f);
}

int func_340(BOOL bParam0) // Position - 0xB58E Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_54() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_341(Hash hParam0) // Position - 0xB5CF Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_357(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_342(int iParam0) // Position - 0xB5FA Hash - 0x497B15BA ^0x497B15BA
{
	switch (iParam0)
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

void func_343(int iParam0, int iParam1) // Position - 0xB64A Hash - 0x2FE2A1EE ^0xFDF1F02E
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 - Global_1946054.f_2657.f_26.f_6 && iParam0;
	return;
}

void func_344(int iParam0, int iParam1) // Position - 0xB677 Hash - 0xB0EA57B9 ^0x395CD962
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 || iParam0;
	return;
}

BOOL func_345() // Position - 0xB698 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_346(int iParam0) // Position - 0xB6B4 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_347() // Position - 0xB6C6 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_358(13);
	num2 = func_359(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_348() // Position - 0xB709 Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_349() // Position - 0xB724 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_360())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_350() // Position - 0xB743 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_351() // Position - 0xB785 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_352(int iParam0, int iParam1, BOOL bParam2) // Position - 0xB793 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_361(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_353(int iParam0, float fParam1, BOOL bParam2) // Position - 0xB7DF Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_361(iParam0, 2, false, false);
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

float func_354(float fParam0, float fParam1, float fParam2) // Position - 0xB925 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_355() // Position - 0xB94C Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_358(12) <= -99f;
}

BOOL func_356() // Position - 0xB960 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_358(12) >= 99f;
}

BOOL func_357(Hash hParam0, int iParam1) // Position - 0xB974 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

float func_358(int iParam0) // Position - 0xB98E Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_359(float fParam0) // Position - 0xB9A2 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

BOOL func_360() // Position - 0xB9BD Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

char* func_361(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB9CE Hash - 0xC24B5846 ^0x37A6A015
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

var func_362(BOOL bParam0, var uParam1, var uParam2) // Position - 0xBA77 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

