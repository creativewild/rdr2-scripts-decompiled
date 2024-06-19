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
	int iLocal_15 = 0;
	var uLocal_16 = 1;
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
	Blip blLocal_27 = 0;
	Volume volLocal_28 = 0;
	Any anLocal_29 = 0;
	BOOL bLocal_30 = 0;
	int iLocal_31 = 0;
	char* sLocal_32 = 0;
	AnimScene ansLocal_33 = 0;
	BOOL bLocal_34 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xD83ED0F0 ^0x9FB3CCB7
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_23 = 3f;
	sLocal_32 = "script@common@cnv_camp@mini_games@five_finger_dynamic@intro";

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

void func_1() // Position - 0x3F Hash - 0x857CA849 ^0x6826343A
{
	func_3(3);

	if (func_4(iLocal_15))
		func_5(&iLocal_15, true, true);

	if (MAP::DOES_BLIP_EXIST(blLocal_27))
		MAP::REMOVE_BLIP(&blLocal_27);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_33))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_33, "PLAYER", Global_35);
		ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_33);
	}

	if (bLocal_30)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		func_6();
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_28))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(anLocal_29, false);
		VOLUME::DELETE_VOLUME(volLocal_28);
	}

	return;
}

BOOL func_2() // Position - 0xB1 Hash - 0xDAE0DC09 ^0xBA05F6DF
{
	BOOL flag;
	int clockHours;
	int weaponHash;
	int blipType;
	int num;
	Object object;
	int i;
	int j;
	int k;

	switch (iLocal_14)
	{
		case 0:
			if (func_7())
				iLocal_14 = 1;
			break;
	
		case 1:
			if (func_8(uLocal_19, 6f, 4, 1))
				flag = false;
			else
				flag = true;
		
			clockHours = CLOCK::GET_CLOCK_HOURS();
		
			if (!func_10(func_9()) || func_11(2, false, true) || !(clockHours < 2 || clockHours > 20))
				return true;
		
			if (func_12() != 1)
				return true;
		
			if (flag && !PED::IS_PED_CARRYING_SOMETHING(Global_35) && func_13(2) && !Global_1327590.f_19745 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && !(WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 0, true) && weaponHash == joaat("weapon_kit_camera") || weaponHash == joaat("weapon_kit_binoculars")))
			{
				if (!MAP::DOES_BLIP_EXIST(blLocal_27))
				{
					blLocal_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MINIGAME"), uLocal_19);
				
					switch (func_14())
					{
						case 1:
							MAP::SET_BLIP_SPRITE(blLocal_27, joaat("blip_mg_five_finger_fillet"), true);
							break;
					
						case 2:
							MAP::SET_BLIP_SPRITE(blLocal_27, joaat("blip_mg_five_finger_fillet_guts"), true);
							break;
					
						case 3:
							MAP::SET_BLIP_SPRITE(blLocal_27, joaat("blip_mg_five_finger_fillet_burnout"), true);
							break;
					
						default:
							MAP::SET_BLIP_SPRITE(blLocal_27, joaat("blip_mg_five_finger_fillet"), true);
							break;
					}
				
					blipType = func_15(-1511391406);
				
					if (blipType != 0)
						MAP::SET_BLIP_FLASH_TIMER(blLocal_27, blipType, -1);
				}
				else
				{
					MAP::BLIP_REMOVE_MODIFIER(blLocal_27, joaat("BLIP_MODIFIER_LOCKED"));
				}
			
				if (!func_4(iLocal_15))
				{
					iLocal_15 = func_17(func_16(-1511391406), joaat("INPUT_CONTEXT_X"), uLocal_19, fLocal_23, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false);
				}
				else
				{
					func_18(iLocal_15, true, true);
				
					if (func_19(171))
						func_20(171);
				}
			}
			else
			{
				if (MAP::DOES_BLIP_EXIST(blLocal_27))
					MAP::BLIP_ADD_MODIFIER(blLocal_27, joaat("BLIP_MODIFIER_LOCKED"));
			
				if (func_4(iLocal_15))
					func_18(iLocal_15, false, true);
			
				if (func_21(iLocal_15, true))
					if (!func_22(171))
						func_23(171, false);
			
				return false;
			}
		
			if (flag)
			{
				if (func_24(iLocal_15, true))
				{
					if (func_4(iLocal_15))
						func_5(&iLocal_15, true, true);
				
					if (MAP::DOES_BLIP_EXIST(blLocal_27))
						MAP::REMOVE_BLIP(&blLocal_27);
				
					if (!VOLUME::DOES_VOLUME_EXIST(volLocal_28))
					{
						volLocal_28 = VOLUME::CREATE_VOLUME_SPHERE(uLocal_19, 0f, 0f, 0f, 3f, 3f, 3f);
						anLocal_29 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volLocal_28, false, 15);
					}
				
					bLocal_30 = true;
					func_25(4);
				
					if (iLocal_18 < 1)
						func_25(25);
				
					if (iLocal_18 >= 1)
					{
						num = func_26(uLocal_16[0]);
						func_27(num, false);
					}
				
					WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
					iLocal_14 = 2;
				}
			}
			break;
	
		case 2:
			if (!func_29(func_28(func_26(uLocal_16[0]), false, 0, 0, 0, 0, 0, true, 1, false, false, false, 0, 0, false, false, false, true, true, true, false, false, true, false, true), 0))
				return false;
		
			if (!func_30(&uLocal_24))
			{
				func_31(&uLocal_24);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			
				if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_33, true, false))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_33, "PL_INTRO"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_33, "PLAYER", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(ansLocal_33, Global_36, 0f, 0f, 0f, 2);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
						ANIMSCENE::START_ANIM_SCENE(ansLocal_33);
						func_32(uLocal_19, 4f, 0);
						object = func_33(uLocal_19, joaat("p_bowl04x"), 4f, true);
					
						if (ENTITY::DOES_ENTITY_EXIST(object))
							OBJECT::DELETE_OBJECT(&object);
					
						object = func_33(uLocal_19, joaat("p_bowl04x_stew"), 4f, true);
					
						if (ENTITY::DOES_ENTITY_EXIST(object))
							OBJECT::DELETE_OBJECT(&object);
					
						func_34(Global_35, "MINIGAME_PLAYER_CAMP_CALLOVER_PLAYERS_FFF", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
						PED::SET_PED_LEG_IK_MODE(Global_35, 0);
						iLocal_31 = 0;
						func_35(3, ansLocal_33);
						iLocal_14 = 3;
					}
					else
					{
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_33, "PL_INTRO");
					}
				}
			}
			break;
	
		case 3:
			Global_1900325.f_36 = 1;
		
			if (func_36(14, func_9(), uLocal_19, fLocal_22, 0, &uLocal_16, 0, 1, 0))
			{
				func_31(&uLocal_24);
			
				for (i = 0; i < 27; i = i + 1)
				{
					if (func_37(i) && !func_39(func_38(i), &uLocal_16))
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_38(i), "Minigame_Non_Participant_Ped_group", 0);
				}
			
				iLocal_14 = 4;
			}
			break;
	
		case 4:
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
		
			if (!bLocal_34)
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					if (func_34(uLocal_16[0], "MINIGAME_COMPANION_CALLOVER_RESPONSE", joaat("SPEECH_PARAMS_FORCE_FRONTEND"), Global_35, 1, 0, 0, 1))
						bLocal_34 = true;
		
			if (iLocal_31 == 0 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_33))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_33, false) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(ansLocal_33))
				{
					func_40(3);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_33, "PLAYER", Global_35);
					ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_33);
					iLocal_31 = 1;
				}
			}
		
			if (!func_41(14))
			{
				TASK::CLEAR_PED_TASKS(uLocal_16[0], true, false);
				func_6();
				func_42(func_26(uLocal_16[0]), false, false, true, -1082130432, true, true, false, false, false, false);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(anLocal_29, false);
				VOLUME::DELETE_VOLUME(volLocal_28);
				iLocal_14 = 5;
			}
			break;
	
		case 5:
			func_31(&uLocal_24);
			func_43(14, true);
		
			for (j = 0; j < 27; j = j + 1)
			{
				if (func_37(j) && !func_39(func_38(j), &uLocal_16))
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(func_38(j), 0);
			}
		
			for (k = 0; k < 1; k = k + 1)
			{
				uLocal_16[k] = _INVALID_PLAYER_INDEX();
			}
		
			iLocal_18 = 0;
			iLocal_14 = 6;
			break;
	
		case 6:
			if (func_45(&uLocal_24, 90f))
			{
				func_46(&uLocal_24);
				iLocal_14 = 7;
			}
			break;
	
		case 7:
			iLocal_14 = 0;
			break;
	}

	return false;
}

void func_3(int iParam0) // Position - 0x65C Hash - 0x7E7973B3 ^0x7E7973B3
{
	if (func_47() != -1)
		return;

	func_48(iParam0, true);
	return;
}

BOOL func_4(int iParam0) // Position - 0x676 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_5(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6B5 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_4(*iParam0))
	{
		*iParam0 = 0;
		return;
	}

	num = func_49(*iParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}

	func_50(num);
	*iParam0 = 0;
	return;
}

void func_6() // Position - 0x709 Hash - 0x8C5749AA ^0x8C5749AA
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_51(i) && func_52(i, true))
			func_53(i);
	}

	return;
}

BOOL func_7() // Position - 0x73F Hash - 0x9F77E4D6 ^0x48D3CDAD
{
	if (!func_29(PLAYER::PLAYER_PED_ID(), 0))
		return false;

	ansLocal_33 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_32, 0, "PL_INTRO", false, true);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_33))
		ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_33);

	uLocal_19 = { func_54(func_14()) };
	fLocal_22 = func_55(func_14());
	return true;
}

BOOL func_8(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5) // Position - 0x78C Hash - 0xE63199E6 ^0x5F324E69
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

int func_9() // Position - 0x7CC Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

BOOL func_10(int iParam0) // Position - 0x7DC Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_57(iParam0))
		return false;

	return func_58(iParam0, 8);
}

BOOL func_11(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7FA Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_59())
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
		num = func_60(Global_1898164.f_1[0 /*5*/]);
	
		if (func_61(num) && func_62(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_63(Global_1898164.f_1[0 /*5*/]))
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

int func_12() // Position - 0x9FE Hash - 0xC5B83CF5 ^0xC3CA9E16
{
	return Global_40.f_4283.f_4;
}

BOOL func_13(int iParam0) // Position - 0xA0E Hash - 0x34BFCD75 ^0x2D1F63C1
{
	int num;
	BOOL flag;
	int clockHours;

	if (func_8(func_64(iParam0, func_14()), 6f, 4, 1))
		return false;

	if (func_65(&(Global_1391438.f_5), 2048))
		return false;

	if (func_66(iParam0) == 0)
		return false;

	num = func_14();

	if (num == 3 && !func_67(28))
		return false;

	switch (num)
	{
		case 1:
			if (func_68(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), true))
				flag = true;
			break;
	
		case 3:
			if (func_68(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), true))
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
			if (func_65(&(Global_1391438.f_5), 256))
				return false;
		
			if (!func_69(-1341684320))
				return false;
		
			if (!(clockHours < 2 || clockHours > 10))
				return false;
		
			if (func_70(-1341684320))
				return false;
			break;
	
		case 1:
			if (func_71(joaat("HAI_DOMINOES_01")) == false && func_14() == 2)
				return false;
		
			if (func_65(&(Global_1391438.f_5), 512))
				return false;
		
			if (func_68(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), true))
				return false;
		
			if (!func_69(-1567081107))
				return false;
		
			if (!(clockHours > 6 && clockHours < 20))
				return false;
		
			if (func_70(-1567081107))
				return false;
			break;
	
		case 2:
			if (!(func_71(joaat("HAI_FIVE_FINGER_FILLET_01")) || func_71(joaat("HAI_FIVE_FINGER_FILLET_02"))) && func_14() < 2)
				return false;
		
			if (func_65(&(Global_1391438.f_5), 1024))
				return false;
		
			if (!func_69(-1511391406))
				return false;
		
			if (!(clockHours < 2 || clockHours > 20))
				return false;
		
			if (func_70(-1511391406))
				return false;
			break;
	}

	return true;
}

int func_14() // Position - 0xC2C Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

int func_15(int iParam0) // Position - 0xC3A Hash - 0xE612AD88 ^0xE612AD88
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

char* func_16(int iParam0) // Position - 0xCAE Hash - 0x796CC513 ^0x50255068
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

int func_17(char* sParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, Hash hParam15, BOOL bParam16) // Position - 0xD8E Hash - 0x8FE94EEE ^0x148ED6A8
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
		if (func_72(i, 2))
		{
			if (func_73(uParam2, Global_1945188[i /*18*/].f_6, 0.01f, true) && hParam1 == Global_1945188[i /*18*/].f_4)
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
		func_74(num, hParam1, sParam0, 4, iParam6, iParam7, uParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, false, false, 0, hParam15, bParam16);
		return num;
	}

	return 0;
}

void func_18(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE6C Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_4(iParam0))
		return;

	num = func_49(iParam0);

	if (bParam1)
	{
		func_75(iParam0, 4);
		func_76(num, true);
		func_77(num, true);
	}
	else
	{
		func_78(iParam0, 4);
		func_77(num, false);
	}

	return;
}

BOOL func_19(int iParam0) // Position - 0xEBB Hash - 0xBDE4FECD ^0x461A2A8
{
	int num;
	int offset;
	int address;

	func_79(iParam0, &num, &offset);
	address = Global_1905944[num];
	return MISC::IS_BIT_SET(address, offset);
}

void func_20(int iParam0) // Position - 0xEDF Hash - 0xAD18F8AE ^0xAD18F8AE
{
	int num;
	int num2;

	func_79(iParam0, &num, &num2);
	func_80(num, num2);
	return;
}

BOOL func_21(int iParam0, BOOL bParam1) // Position - 0xEF9 Hash - 0xAAB142C4 ^0xDB043156
{
	int num;

	if (bParam1 && !func_4(iParam0))
		return false;

	num = func_49(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1945188[num /*18*/].f_3);
}

BOOL func_22(int iParam0) // Position - 0xF2C Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_47() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_23(int iParam0, BOOL bParam1) // Position - 0xF71 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_79(iParam0, &num, &num2);

	if (!func_81(iParam0, num, num2, bParam1))
		return;

	func_82(num, num2);
	return;
}

BOOL func_24(int iParam0, BOOL bParam1) // Position - 0xF9E Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_4(iParam0))
		return false;

	num = func_49(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

int func_25(int iParam0) // Position - 0xFF6 Hash - 0x63FBED7D ^0x63FBED7D
{
	Ped ped;
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = func_38(i);
	
		if (!func_29(uLocal_16[iLocal_18], 0))
		{
			if (func_83(ped))
			{
				uLocal_16[iLocal_18] = ped;
				iLocal_18 = iLocal_18 + 1;
			}
		}
	
		if (iLocal_18 >= 1)
			break;
	}

	return 1;
}

int func_26(Ped pedParam0) // Position - 0x1049 Hash - 0xA7BDC85E ^0xDF3706B0
{
	int i;
	Ped ped;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return -1;

	if (!func_84(pedParam0))
		return -1;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = Global_1360165[i /*1157*/];
	
		if (!ENTITY::IS_ENTITY_DEAD(ped) && pedParam0 == ped)
			return i;
	}

	return -1;
}

int func_27(int iParam0, BOOL bParam1) // Position - 0x10A5 Hash - 0x710FE6A ^0xFD7EC211
{
	int i;
	Ped playerPed;

	if (!func_51(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]))
		return 0;

	if (func_52(iParam0, false))
	{
		func_85(iParam0, true);
		return 1;
	}

	if (!func_86())
		return 0;

	if (bParam1)
		func_87(iParam0, false, "Adding to Group");

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1359489[i] == -1)
		{
			Global_1359489[i] = iParam0;
			break;
		}
	}

	func_85(iParam0, true);
	Global_1359489.f_15 = func_88(true);
	func_89(iParam0, 32, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_companion_group"));
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], BF_0xD36BCE94, true);
	PED::_SET_PED_COMBAT_BEHAVIOUR(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);

	if (COMPANION::_GET_COMPANION_ACTIVITY(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_38(iParam0), COMPANION::_GET_COMPANION_ACTIVITY(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_38(iParam0), Global_1391438.f_414.f_37);
	}

	PED::_0x89E59DBD15E21177(func_90(), 0);
	func_91(iParam0);
	playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	playerPed.f_12 = 3;
	playerPed.f_3 = Global_1360165[iParam0 /*1157*/];
	playerPed.f_7 = func_92();
	playerPed.f_8 = 0;
	playerPed.f_11 = 10;
	playerPed.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_CREATE_AI_MEMORY(&playerPed, 17);
	return 1;
}

Ped func_28(int iParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18, BOOL bParam19, BOOL bParam20, BOOL bParam21, BOOL bParam22, BOOL bParam23, BOOL bParam24) // Position - 0x1232 Hash - 0x79A2D2D9 ^0x5019CC83
{
	int num;
	BOOL flag;
	int num2;
	int i;

	if (!func_51(iParam0))
		return 0;

	num = iParam3;
	num.f_1 = iParam4;
	num.f_2 = iParam5;

	if (Global_1572864.f_13 || Global_1572864.f_14 || Global_1572864.f_8 != 0 || Global_1391438.f_5 & 8 != 0)
		flag = true;

	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_93(iParam0, 2, true))
				func_94(iParam0, 2, true);
		
			if (func_95(iParam0, 16, true))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_89(iParam0, 29, true);
						return 0;
					}
				
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_42(iParam0, false, 0, true, -1082130432, true, true, false, false, false, false);
					}
				
					return 0;
				}
				else if (func_29(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
		
			if (func_29(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
					if (bParam1)
						func_87(iParam0, true, "Stealing, but companion is a ragdoll");
					else
						return 0;
			
				func_89(iParam0, 44, true);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_96(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_89(iParam0, 44, true);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_96(iParam0, 1);
			}
			else
			{
				return 0;
			}
		
			[[fallthrough]];
	
		case 1:
			if (flag)
				if (iParam13 == 0)
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
		
			if (!func_93(iParam0, 44, false))
				func_89(iParam0, 44, false);
		
			if (func_97(iParam0, num, iParam13, false, true, bParam17, bParam20, -1, 1, false))
				func_96(iParam0, 2);
			break;
	
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
		
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
		
			func_94(iParam0, 18, true);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_gang_dutchs"));
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_98(iParam0, bParam9, true, false);
		
			if (bParam22)
				func_99(iParam0, false, false, true);
		
			func_94(iParam0, 33, true);
			func_94(iParam0, 34, true);
			func_94(iParam0, 29, true);
		
			if (!_IS_NULL_VECTOR(num) && bParam7)
				func_96(iParam0, 3);
			else if (iParam13 != 0)
				func_96(iParam0, 4);
			else
				func_96(iParam0, 5);
			break;
	
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_87(iParam0, true, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
			
				num2 = 2;
			
				if (bParam10)
					num2 = num2 | 4;
			
				func_100(Global_1360165[iParam0 /*1157*/], num, iParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[iParam0 /*1157*/], true))
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
			
				return 0;
			}
		
			if (iParam13 != 0)
				func_96(iParam0, 4);
			else
				func_96(iParam0, 5);
			break;
	
		case 4:
			if (iParam13 != 0 || flag)
			{
				if (flag)
					if (iParam13 == 0)
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
			
				if (func_101(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_102(iParam0, iParam13, false);
						func_103(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, true);
					
						if (func_93(iParam0, 25, false))
							func_94(iParam0, 25, false);
					
						func_89(iParam0, 66, false);
						func_96(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_96(iParam0, 5);
				}
			
				func_89(iParam0, 28, true);
			}
			else
			{
				func_96(iParam0, 5);
			}
			break;
	
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
				func_96(iParam0, 6);
			break;
	
		case 6:
			if (func_29(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
			
				if (bParam18)
				{
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
					{
						for (i = 0; i < 10; i = i + 1)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], i);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], i, "ALL");
						}
					
						PED::_SET_PED_DIRT_CLEANED(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
			
				if (bParam19)
					func_104(iParam0);
			
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_105(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
		
			func_96(iParam0, 7);
			[[fallthrough]];
	
		case 7:
			func_98(iParam0, bParam9, bParam15, false);
			func_106(iParam0, 4, bParam11);
			func_107(iParam0);
		
			if (bParam20)
				func_108(Global_1360165[iParam0 /*1157*/]);
		
			func_109(iParam0, Global_1360165[iParam0 /*1157*/]);
		
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
		
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			func_96(iParam0, 0);
			func_110(iParam0, 16, true);
			func_94(iParam0, 44, true);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}

	return 0;
}

BOOL func_29(Ped pedParam0, int iParam1) // Position - 0x18A2 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_111(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_111(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_111(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_111(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_111(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_111(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_111(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_111(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

BOOL func_30(var uParam0) // Position - 0x19A1 Hash - 0x5001E582 ^0x5001E582
{
	return func_112(*uParam0, 1);
}

void func_31(var uParam0) // Position - 0x19B1 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_113(uParam0, 0f);
	return;
}

void func_32(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4) // Position - 0x19C0 Hash - 0xE32603D9 ^0x11EEBBB1
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

Object func_33(var uParam0, var uParam1, var uParam2, Hash hParam3, float fParam4, BOOL bParam5) // Position - 0x1A2C Hash - 0xEC461A7E ^0x75CEC255
{
	Volume volume;
	Object objectFromIndexedItem;
	float num;
	int entitiesInVolume;
	int i;
	ItemSet itemSet;

	num = fParam4 * 2f;
	func_114(&volume, uParam0, 0f, 0f, 0f, num, num, num);

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
				func_115(volume);
			
				if (bParam5)
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(objectFromIndexedItem, true))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(objectFromIndexedItem, true, true);
			
				return objectFromIndexedItem;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	func_115(volume);
	return 0;
}

BOOL func_34(Ped pedParam0, char* sParam1, int iParam2, Ped pedParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1AD9 Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_116(pedParam0, &str);
}

void func_35(int iParam0, AnimScene ansParam1) // Position - 0x1B20 Hash - 0x35128648 ^0x5C115A46
{
	Global_1899528.f_61.f_4 = ansParam1;
	return;
}

BOOL func_36(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, var uParam7, int iParam8, int iParam9, int iParam10) // Position - 0x1B32 Hash - 0x13BE8156 ^0x59ABA923
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
	func_117(iParam0, &unk, 1);
	unk.f_2 = iParam1;

	if (unk.f_1 == -1)
		return false;

	scriptHash = func_118(unk.f_1, 1);
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(scriptHash);

	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(scriptHash))
	{
		if (!func_119(unk.f_1))
			func_120(unk.f_1);
	
		num2 = func_121(&unk, 0, iParam10);
	
		if (num2 == -1)
			return false;
	
		Global_1392915[num2 /*12*/].f_2 = iParam1;
		Global_1392915[num2 /*12*/].f_6 = { uParam2 };
		Global_1392915[num2 /*12*/].f_9 = fParam5;
		Global_1392915[num2 /*12*/].f_10 = iParam6;
		num = Global_1392915[num2 /*12*/].f_4;
	
		if (func_122(num) || !func_123(num) && func_124(0) != num)
		{
			num3 = func_125(num);
		
			if (num3 == -1)
				func_126(num);
		}
	
		if (func_123(num))
			func_127(num);
	
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(scriptHash) > 0)
		{
			if (iParam8 == 1)
				func_128(unk.f_1, 0);
		
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
	
		if (func_129(iParam0, &unk11, &unk45, 0, 1))
		{
			if (iParam8 == 1)
				func_128(unk.f_1, 0);
		
			return true;
		}
	}

	return false;
}

BOOL func_37(int iParam0) // Position - 0x1D04 Hash - 0xFEA2A378 ^0xFEA2A378
{
	if (func_51(iParam0))
		if (func_29(Global_1360165[iParam0 /*1157*/], 0))
			return true;

	return false;
}

Ped func_38(int iParam0) // Position - 0x1D2B Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_130(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

BOOL func_39(Ped pedParam0, var uParam1) // Position - 0x1D65 Hash - 0xDC7D3FF5 ^0xDC7D3FF5
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (pedParam0 == uParam1->[i])
			return true;
	}

	return false;
}

void func_40(int iParam0) // Position - 0x1D91 Hash - 0x61540473 ^0xBEDB557C
{
	Global_1899528.f_61.f_4 = -1;
	return;
}

BOOL func_41(int iParam0) // Position - 0x1DA2 Hash - 0xE99EDF0E ^0xE99EDF0E
{
	int num;

	num = func_131(iParam0);

	if (num == -1)
		return false;

	if (func_133(func_132(num)))
		return true;

	return false;
}

void func_42(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1DCE Hash - 0xA4706F79 ^0xAF27D1D3
{
	BOOL flag;
	PersChar persChar;
	BOOL flag2;

	if (!func_51(iParam0))
		return;

	if (func_134(iParam0))
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
			return;

	if (bParam10)
	{
		func_89(iParam0, 56, true);
		func_135(&(Global_1359489.f_40), true);
	}

	func_136(iParam0, false);
	func_106(iParam0, 4, false);
	func_137(iParam0);
	func_107(iParam0);
	func_94(iParam0, 37, true);
	flag = func_29(Global_1360165[iParam0 /*1157*/], 0);
	persChar = func_138(iParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);

	if (func_93(iParam0, 64, true))
		func_94(iParam0, 64, true);

	if (bParam3)
	{
		func_94(iParam0, 33, true);
		func_94(iParam0, 34, true);
		func_139(iParam0, 1056964608, -1, 1061158912);
		func_98(iParam0, true, true, false);
	
		if (bParam6)
			func_89(iParam0, 30, true);
	
		if (bParam7)
		{
			func_89(iParam0, 35, true);
		
			if (bParam8)
				func_89(iParam0, 62, true);
		}
	
		if (flag)
		{
			func_140(iParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_94(iParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
	
		func_89(iParam0, 33, true);
		func_98(iParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = iParam4;
			func_135(&(Global_1360165[iParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_46(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_89(iParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			func_141(iParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);

	if (func_93(iParam0, 45, true))
		func_94(iParam0, 45, true);

	func_142(iParam0, 16, true);
	func_94(iParam0, 44, true);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_29(func_143(iParam0), 0))
			func_144(0, iParam0, bParam3, 0, bParam2);

	return;
}

int func_43(int iParam0, BOOL bParam1) // Position - 0x2083 Hash - 0x1873E934 ^0x1873E934
{
	int num;

	num = func_131(iParam0);

	if (num == -1)
		return 0;

	func_145(iParam0, 1);
	func_146(num);

	if (bParam1)
		func_147(&Global_1899778, num);

	func_148(num);
	return 1;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x20C1 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_45(var uParam0, float fParam1) // Position - 0x20CA Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_149(uParam0, fParam1))
	{
		func_46(uParam0);
		return true;
	}

	return false;
}

void func_46(var uParam0) // Position - 0x20E8 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_47() // Position - 0x20FE Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_48(int iParam0, BOOL bParam1) // Position - 0x210C Hash - 0xDB580C75 ^0xDB580C75
{
	int i;
	int num;

	for (i = 0; i < Global_1392915; i = i + 1)
	{
		if (func_150(i) == iParam0)
		{
			num = func_151(i);
			func_145(num, 1);
			func_146(i);
		
			if (bParam1)
				func_147(&Global_1899778, i);
		
			func_148(i);
		}
	}

	return;
}

int func_49(int iParam0) // Position - 0x215F Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_50(int iParam0) // Position - 0x2169 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_152(iParam0))
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

BOOL func_51(int iParam0) // Position - 0x221C Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

BOOL func_52(int iParam0, BOOL bParam1) // Position - 0x223B Hash - 0xF6905B76 ^0x4F37D8F8
{
	Ped ped;

	ped = func_38(iParam0);

	if (bParam1)
		if (!func_29(ped, 0))
			return false;

	return PED::IS_PED_GROUP_MEMBER(ped, func_90(), true);
}

void func_53(int iParam0) // Position - 0x226A Hash - 0xF13081D5 ^0x7BCA5573
{
	int i;
	Ped playerPed;

	if (!func_51(iParam0))
		return;

	!func_52(iParam0, false);
	func_153(iParam0);
	Global_1359489.f_15 = func_88(true);

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1359489[i] == iParam0)
			Global_1359489[i] = -1;
	}

	func_154();
	func_94(iParam0, 32, true);

	if (func_29(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_gang_dutchs"));
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], BF_0xD36BCE94, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		playerPed.f_12 = 8;
		playerPed.f_3 = Global_1360165[iParam0 /*1157*/];
		playerPed.f_7 = func_92();
		playerPed.f_8 = 0;
		playerPed.f_11 = 10;
		playerPed.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_CREATE_AI_MEMORY(&playerPed, 17);
	}

	return;
}

Vector3 func_54(int iParam0) // Position - 0x2358 Hash - 0x890F3181 ^0x890F3181
{
	switch (iParam0)
	{
		case 1:
			return -118.119f, -27.6134f, 95.57f;
	
		case 2:
			return 665.5322f, -1243.9023f, 43.95f;
	
		case 3:
			return 1881.669f, -1874.0461f, 42.58f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

float func_55(int iParam0) // Position - 0x23B3 Hash - 0x6A8D0C6A ^0x6A8D0C6A
{
	switch (iParam0)
	{
		case 1:
			return 166.84f;
	
		case 2:
			return 225.55f;
	
		case 3:
			return 167.47f;
	
		default:
		
	}

	return 0f;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x23EE Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_57(int iParam0) // Position - 0x2418 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_58(int iParam0, BOOL bParam1) // Position - 0x242E Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_59() // Position - 0x2461 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_60(int iParam0) // Position - 0x24B4 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_63(iParam0))
		return -1;

	return func_156(func_155(iParam0));
}

BOOL func_61(int iParam0) // Position - 0x24D4 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_62(int iParam0, int iParam1) // Position - 0x24EA Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_63(int iParam0) // Position - 0x24F9 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

Vector3 func_64(int iParam0, int iParam1) // Position - 0x252C Hash - 0x6899A6AE ^0x6899A6AE
{
	switch (iParam0)
	{
		case 0:
			return func_157(iParam1);
	
		case 1:
		case 2:
			return func_158(iParam1);
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_65(int iParam0, int iParam1) // Position - 0x2563 Hash - 0x1A05E0F5 ^0x1A05E0F5
{
	if (*iParam0 && iParam1 != false)
		return true;

	return false;
}

int func_66(int iParam0) // Position - 0x257A Hash - 0xC5EEA772 ^0xD62F5EAA
{
	switch (iParam0)
	{
		case 0:
			if (func_159(21, true, true) && !func_68(joaat("CSTAG_FLOW_FIRST_VISIT_REV1_POST"), true) || func_159(17, true, true) || func_159(19, true, true) || func_159(9, true, true) || func_159(1, true, true) && !func_68(joaat("CSTAG_FLOW_JOHN_RECOVER"), true) || func_159(18, true, true) || func_159(4, true, true))
				return 1;
			break;
	
		case 1:
			if (func_159(22, true, true) || func_159(15, true, true) || func_159(13, true, true) || func_159(17, true, true) || func_159(5, true, true))
				return 1;
			break;
	
		case 2:
			if (func_159(2, true, true) || func_159(6, true, true) || func_159(9, true, true) || func_159(11, true, true) && func_160(Global_1347702[134 /*49*/].f_15, true))
				return 1;
			break;
	}

	return 0;
}

BOOL func_67(int iParam0) // Position - 0x26B8 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_160(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_68(int iParam0, BOOL bParam1) // Position - 0x2717 Hash - 0xB6F2B948 ^0x8948B8BB
{
	int i;

	if (bParam1)
		return func_161(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return true;
	}

	return false;
}

BOOL func_69(int iParam0) // Position - 0x2756 Hash - 0x9DE7A133 ^0x9DE7A133
{
	switch (iParam0)
	{
		case -2036347356:
		case -1567081107:
		case -1511391406:
		case -1341684320:
			return func_119(func_163(iParam0));
	
		case -919476462:
			return func_164(3);
	
		case 654481153:
			if (!func_162() || !func_67(16))
				return false;
		
			return true;
	
		case 1784895540:
			if (!func_67(15))
				return false;
		
			return true;
	
		default:
		
	}

	return true;
}

BOOL func_70(int iParam0) // Position - 0x27D5 Hash - 0x1EAA082B ^0x63AA4881
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (Global_1391438.f_7[i /*99*/].f_8 == iParam0)
			return true;
	}

	return false;
}

BOOL func_71(Hash hParam0) // Position - 0x2805 Hash - 0x8C3B6E7 ^0x8C3B6E7
{
	int num;

	num = func_165(func_14(), hParam0);
	return func_166(num) > 0;
}

BOOL func_72(int iParam0, int iParam1) // Position - 0x2821 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

BOOL func_73(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x2842 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_74(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, var uParam7, var uParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x2897 Hash - 0x1B501888 ^0x6546232B
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
	func_76(iParam0, true);
	func_77(iParam0, true);
	func_78(iParam0, 128);
	return;
}

void func_75(int iParam0, int iParam1) // Position - 0x2B3D Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_76(int iParam0, BOOL bParam1) // Position - 0x2B70 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_72(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_77(int iParam0, BOOL bParam1) // Position - 0x2BC8 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_78(int iParam0, int iParam1) // Position - 0x2BF1 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_79(int iParam0, var uParam1, var uParam2) // Position - 0x2C19 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

void func_80(int iParam0, int iParam1) // Position - 0x2C35 Hash - 0x978E21B ^0x703A4DC6
{
	int address;

	address = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_81(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2C59 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_167(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_168(iParam0))
		return false;

	if (func_169(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_170(iParam0, 1) || func_171(32768))
		if (!func_170(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_172())
		return false;

	return true;
}

void func_82(int iParam0, int iParam1) // Position - 0x2CFB Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_83(Ped pedParam0) // Position - 0x2D1F Hash - 0xC6A1AFB8 ^0xD233BADA
{
	BOOL flag;
	int num;

	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (func_39(pedParam0, &uLocal_16))
		return false;

	num = func_26(pedParam0);
	flag = func_130(num);

	if (flag)
	{
		if (!func_159(num, true, true))
			return false;
	
		switch (num)
		{
			case 2:
			case 6:
			case 9:
				return true;
		
			case 11:
				if (func_173(134))
					return true;
				break;
		}
	}

	return false;
}

BOOL func_84(Ped pedParam0) // Position - 0x2D9E Hash - 0xCA96D27A ^0x3802A466
{
	int i;
	Ped ped;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_47() != -1)
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = Global_1360165[i /*1157*/];
	
		if (!ENTITY::IS_ENTITY_DEAD(ped) && pedParam0 == ped)
			return true;
	}

	return false;
}

void func_85(int iParam0, BOOL bParam1) // Position - 0x2DF7 Hash - 0x6749A4DF ^0xA0D5EA05
{
	Ped ped;
	int playerGroup;

	ped = Global_1360165[iParam0 /*1157*/];

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (!func_51(iParam0))
		return;

	playerGroup = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());

	if (PED::IS_PED_GROUP_MEMBER(ped, playerGroup, false))
		return;

	COMPANION::_ACTIVATE_COMPANION_ANALYSIS(func_90());
	PED::SET_PED_CONFIG_FLAG(ped, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(ped, playerGroup);

	if (bParam1)
		func_174(iParam0, true, Global_35);

	return;
}

BOOL func_86() // Position - 0x2E72 Hash - 0xB9EF58B7 ^0xB9EF58B7
{
	return func_88(true) < 3;
}

void func_87(int iParam0, BOOL bParam1, char* sParam2) // Position - 0x2E81 Hash - 0x4393BBFF ^0x711C558C
{
	Ped ped;

	ped = func_38(iParam0);

	if (!func_51(iParam0) || ENTITY::IS_ENTITY_DEAD(ped))
		return;

	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(ped);

	if (bParam1)
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, false, true);
	else
		TASK::CLEAR_PED_TASKS(ped, true, false);

	return;
}

int func_88(BOOL bParam0) // Position - 0x2EC8 Hash - 0x7F08FD3B ^0xE97B69AA
{
	int num;
	int numberOfFollowers;
	var hasLeader;
	int i;
	Ped pedAsGroupMember;

	if (bParam0)
		return func_175(Global_1359489.f_4);

	PED::GET_GROUP_SIZE(func_90(), &hasLeader, &numberOfFollowers);

	if (numberOfFollowers == 0)
		return 0;

	for (i = 0; i < numberOfFollowers; i = i + 1)
	{
		pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_90(), i);
	
		if (func_84(pedAsGroupMember))
			num = num + 1;
	}

	return num;
}

void func_89(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2F28 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_130(iParam0))
			return;

	func_176(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

int func_90() // Position - 0x2F62 Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_91(int iParam0) // Position - 0x2F72 Hash - 0x6AEDC7B3 ^0x6AEDC7B3
{
	int num;
	int num2;

	if (func_51(iParam0))
	{
		num = 0;
		num2 = 0;
	
		switch (iParam0)
		{
			case 2:
				func_177(&num, 1);
				break;
		
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_177(&num, 8);
				func_177(&num, 5);
				func_177(&num2, 4);
				func_177(&num2, 0);
				break;
		
			case 14:
				func_177(&num, 8);
				func_177(&num2, 4);
				func_177(&num2, 5);
				func_177(&num2, 0);
				break;
		}
	
		COMPANION::_ADD_COMPANION_FLAG(func_38(iParam0), num);
		COMPANION::_REMOVE_COMPANION_FLAG(func_38(iParam0), num2);
	}

	return;
}

int func_92() // Position - 0x302F Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_93(int iParam0, int iParam1, BOOL bParam2) // Position - 0x303D Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_130(iParam0))
			return false;

	func_176(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

void func_94(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3078 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_130(iParam0))
			return;

	func_176(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_95(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x30B2 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_130(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

void func_96(int iParam0, int iParam1) // Position - 0x30DC Hash - 0x61FF61E0 ^0x2C6117ED
{
	if (!func_130(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_11 = iParam1;
	return;
}

BOOL func_97(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, BOOL bParam10, BOOL bParam11) // Position - 0x30FE Hash - 0x5B7A656E ^0x3AAC2B26
{
	if (!func_130(iParam0))
		return false;

	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("def_comp_brain")))
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("def_comp_brain"));
		
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
			[[fallthrough]];
	
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("def_comp_brain")))
				return false;
		
			if (Global_1359489.f_9 != -1)
				return false;
		
			Global_1359489.f_9 = iParam0;
		
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
					iParam4 = func_178(iParam0, iParam9, bParam7, true);
				else if (Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59 && func_123(Global_1360165[iParam0 /*1157*/].f_4.f_2) || func_133(Global_1360165[iParam0 /*1157*/].f_4.f_2))
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				else
					iParam4 = func_178(iParam0, Global_40.f_4283, bParam7, true);
			
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_179(Global_1360165[iParam0 /*1157*/].f_63))
					if (!func_180(iParam0, false))
						func_89(iParam0, 25, false);
			}
		
			Global_1360165[iParam0 /*1157*/].f_4 = { func_181(iParam0, iParam4, uParam1, bParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
		
			if (!bParam6)
				func_94(iParam0, 44, true);
		
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
			[[fallthrough]];
	
		case 2:
			if (!func_29(func_38(iParam0), 0))
				return false;
		
			if (bParam5 && bParam10)
				if (!func_29(func_143(iParam0), 0))
					return false;
		
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
			[[fallthrough]];
	
		case 3:
			return true;
	
		default:
		
	}

	return false;
}

void func_98(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x32E7 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_130(iParam0))
		return;

	if (bParam1)
	{
		func_94(iParam0, 50, true);
		func_94(iParam0, 48, true);
		func_94(iParam0, 49, true);
		func_94(iParam0, 51, true);
		func_94(iParam0, 52, true);
		func_94(iParam0, 54, true);
		func_94(iParam0, 55, true);
	}
	else
	{
		func_89(iParam0, 50, true);
		func_89(iParam0, 48, true);
		func_89(iParam0, 49, true);
		func_89(iParam0, 51, true);
	
		if (bParam3)
			func_89(iParam0, 54, true);
		else
			func_94(iParam0, 54, true);
	
		if (!bParam2)
		{
			func_89(iParam0, 52, true);
		
			if (bParam3)
				func_89(iParam0, 55, true);
		}
		else
		{
			func_94(iParam0, 52, true);
		
			if (!bParam3)
				func_94(iParam0, 55, true);
		}
	}

	return;
}

void func_99(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x33B9 Hash - 0xE11FEEB6 ^0xE11FEEB6
{
	if (!func_51(iParam0))
		return;

	if (bParam1)
		func_182(iParam0, bParam3);
	else
		func_183(iParam0, bParam3);

	if (bParam2)
		func_184(iParam0, bParam3);
	else
		func_185(iParam0, bParam3);

	return;
}

void func_100(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) // Position - 0x33FE Hash - 0xF46E0F16 ^0xED4BA72A
{
	Vehicle vehiclePedIsIn;
	Ped pedIndexFromEntityIndex;
	Ped mount;
	BOOL pedCrouchMovement;
	BOOL isEntityAPed;
	var height;
	Ped pedIndexFromEntityIndex2;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	isEntityAPed = ENTITY::IS_ENTITY_A_PED(pedParam0);

	if (isEntityAPed)
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
		pedCrouchMovement = PED::GET_PED_CROUCH_MOVEMENT(pedIndexFromEntityIndex);
	
		if (PED::IS_PED_RAGDOLL(pedIndexFromEntityIndex))
			PED::_SET_PED_TO_DISABLE_RAGDOLL(pedIndexFromEntityIndex, true);
	}

	pedParam0 == func_186(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_187(pedParam0))
		if (func_188(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
			PHYSICS::_UNHITCH_HORSE(pedParam0);

	if (func_111(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_100(vehiclePedIsIn, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_100(mount, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_111(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(pedParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), false, true);

	if (func_111(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_111(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_111(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pedParam0, false);
		}
	}
	else if (func_111(iParam5, 129))
	{
		if (func_111(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedParam0, vParam1, func_111(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(pedParam0, iParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, iParam4, true, func_111(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_111(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), pedCrouchMovement, 0, false);
	
		if (func_187(pedParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_111(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0) == Global_35 && !func_111(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

BOOL func_101(int iParam0, int iParam1) // Position - 0x3680 Hash - 0xB10CB915 ^0x7678EBC
{
	BOOL flag;

	if (!func_51(iParam0))
		return false;

	if (iParam1 == 296923297 || iParam1 == 1237718549)
		return true;

	flag = func_189(iParam0, iParam1);
	return flag;
}

void func_102(int iParam0, int iParam1, BOOL bParam2) // Position - 0x36BF Hash - 0xE34CA2E4 ^0x9C7D0427
{
	if (!func_51(iParam0))
		return;

	if (!func_101(iParam0, iParam1))
		return;

	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;

	if (bParam2)
		func_89(iParam0, 25, true);

	return;
}

void func_103(int iParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0x36FF Hash - 0x1300E8EE ^0xFBE7C64E
{
	Hash hash;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (func_190(iParam2))
		{
			hash = func_191(iParam2, -1);
		
			if (func_192(pedParam1, hash))
			{
				if (func_193(pedParam1, hash))
				{
					if (func_194(pedParam1, hash))
					{
						PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam1, "metaped_outfit_request"), pedParam1, true, false);
						func_195(pedParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(pedParam1, hash);
				}
			}
		}
	
		func_196(iParam0, pedParam1, false);
		PED::_UPDATE_PED_VARIATION(pedParam1, false, true, true, true, false);
		PED::_SET_PED_DIRT_CLEANED(pedParam1, 0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 9);
	
		if (bParam3)
			func_89(iParam0, 66, false);
	}

	return;
}

void func_104(int iParam0) // Position - 0x37D5 Hash - 0x73C1F6C ^0x73C1F6C
{
	func_197(iParam0);
	func_198(iParam0, false);
	return;
}

void func_105(Ped pedParam0, int iParam1) // Position - 0x37EA Hash - 0x7F605CB ^0x28CA17AF
{
	if (!PED::IS_PED_INJURED(pedParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(pedParam0, joaat("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(pedParam0, joaat("WEAPON_UNARMED"), true, 1, false, false);
	
		if (PED::IS_PED_A_PLAYER(pedParam0) && iParam1 == 1)
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), false);
	}

	return;
}

void func_106(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3845 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_130(iParam0))
		return;

	func_199(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_107(int iParam0) // Position - 0x386D Hash - 0x8577BCFD ^0x8577BCFD
{
	func_89(iParam0, 36, true);
	return;
}

BOOL func_108(Ped pedParam0) // Position - 0x387E Hash - 0x4E8A039F ^0x9F8FB293
{
	int i;
	Hash weaponHash;
	BOOL num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		weaponHash = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, i, true);
	
		if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
		{
		}
		else
		{
			num = 1;
			WEAPON::_SEND_WEAPON_TO_INVENTORY(pedParam0, weaponHash);
		}
	}

	return num;
}

void func_109(int iParam0, Ped pedParam1) // Position - 0x38FC Hash - 0x9D727A3E ^0xB12CD64B
{
	if (!func_130(iParam0))
		return;

	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_200(pedParam1, joaat("weapon_revolver_cattleman_sadie"), 0, false, 2, true, false, 1056964608, 1065353216, -1, false, false, false, false);
				func_200(pedParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), false, false, 3, true, true, 1056964608, 1065353216, -1, false, true, false, false);
			}
			break;
	}

	return;
}

void func_110(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3976 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_51(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] || bParam1;
	return;
}

BOOL func_111(int iParam0, int iParam1) // Position - 0x39A7 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_112(int iParam0, int iParam1) // Position - 0x39B6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_113(var uParam0, float fParam1) // Position - 0x39C5 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_201() - fParam1;
	func_202(uParam0, 1);
	func_203(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_114(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9) // Position - 0x39EB Hash - 0xCF0C48FE ^0xA0FA78C0
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, func_204());

	return;
}

void func_115(Volume volParam0) // Position - 0x3A15 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_116(Ped pedParam0, Any* panParam1) // Position - 0x3A2C Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

int func_117(int iParam0, var uParam1, int iParam2) // Position - 0x3A3C Hash - 0x16475DD ^0xEB53C9EA
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

Hash func_118(int iParam0, int iParam1) // Position - 0x43ED Hash - 0x5EC245B8 ^0xB8817543
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

BOOL func_119(int iParam0) // Position - 0x4478 Hash - 0xF87DE713 ^0x6B3C11CE
{
	if (!func_205(iParam0))
		return false;

	return !func_206() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0);
}

void func_120(int iParam0) // Position - 0x44A5 Hash - 0x5745781B ^0xC3E60D7F
{
	if (!func_205(iParam0))
		return;

	MISC::SET_BIT(&(Global_40.f_7854), iParam0);
	return;
}

int func_121(var uParam0, BOOL bParam1, int iParam2) // Position - 0x44C6 Hash - 0x4C78497B ^0xBAB851C7
{
	int num;
	BOOL flag;
	int num2;
	int num3;

	if (func_47() != -1)
		return -1;

	if (Global_1899528.f_211)
		return -1;

	num2 = -1;

	if (uParam0->f_2 == -1)
		return -1;

	if (uParam0->f_2 != func_92())
		return -1;

	if (!func_119(uParam0->f_1))
		return -1;

	if (func_207(uParam0->f_2))
		return -1;

	num2 = func_131(*uParam0);

	if (num2 == -1)
		if (!func_208(&num2))
			return -1;

	func_209(*uParam0, num2);
	flag = func_210(uParam0->f_1, 131072);
	func_211(uParam0->f_1);
	num3 = func_212(uParam0->f_1, *uParam0);
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
		func_213(uParam0->f_1, 65536);
	
		if (uParam0->f_1 == 1 || uParam0->f_1 == 2 || uParam0->f_1 == 0)
			func_213(uParam0->f_1, 2097152);
	}

	if (flag)
		func_213(uParam0->f_1, 131072);

	if (func_122(num3) || !func_123(num3) && func_124(0) != num3)
	{
		num = func_125(num3);
	
		if (num == -1)
			func_126(num3);
	}

	return num2;
}

BOOL func_122(int iParam0) // Position - 0x4729 Hash - 0x93C8DA75 ^0x93C8DA75
{
	return func_214(iParam0) == 0;
}

BOOL func_123(int iParam0) // Position - 0x4739 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_215(iParam0);
	}

	if (num == 1)
		return true;

	if (num == 2)
		return true;

	return false;
}

int func_124(int iParam0) // Position - 0x47A4 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_125(int iParam0) // Position - 0x47B6 Hash - 0x6B3238EF ^0x6B3238EF
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

int func_126(int iParam0) // Position - 0x47F7 Hash - 0x8157C348 ^0x8157C348
{
	int i;
	int num;
	int num2;
	var unk;

	if (Global_1898329 == 15)
		return -1;

	if (!func_122(iParam0))
		return -1;

	if (func_47() != -1)
	{
		num2 = func_125(iParam0);
	
		if (num2 >= 0)
		{
			func_216(iParam0, true);
			return num2;
		}
		else
		{
			num = Global_1898329;
			Global_1898330[num] = iParam0;
			Global_1898346[num /*6*/] = { unk };
			func_217(num, true);
			func_216(iParam0, true);
			Global_1898329 = Global_1898329 + 1;
		
			if (Global_1898329 > 15)
				Global_1898329 = 15;
		
			return num;
		}
	}
	else
	{
		num2 = func_125(iParam0);
	
		if (num2 >= 0)
		{
			func_216(iParam0, true);
			return num2;
		}
		else
		{
			for (i = 0; i < Global_1898330; i = i + 1)
			{
				if (!func_63(Global_1898330[i]))
				{
					Global_1898330[i] = iParam0;
					Global_1898346[i /*6*/] = { unk };
					func_217(i, true);
					func_216(iParam0, true);
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

void func_127(int iParam0) // Position - 0x4913 Hash - 0x195570A8 ^0x195570A8
{
	if (!func_63(iParam0))
		return;

	if (!func_123(iParam0))
		return;

	func_218(iParam0, 2);
	return;
}

void func_128(int iParam0, int iParam1) // Position - 0x493C Hash - 0xA4A03B21 ^0xA4A03B21
{
	if (iParam1 == 1)
	{
		if (func_210(iParam0, 2))
		{
			func_213(iParam0, 4);
			func_219(iParam0, 2);
		}
	}
	else
	{
		func_213(iParam0, 2);
	}

	return;
}

BOOL func_129(int iParam0, Any* panParam1, var uParam2, int iParam3, int iParam4) // Position - 0x496C Hash - 0x7820D259 ^0x9025309A
{
	int i;
	int num;
	Ped ped;
	var unk;
	int num2;
	Hash scriptHash;

	num = func_131(iParam0);

	if (num == -1)
		return false;

	num2 = func_150(num);

	if (num2 == -1)
		return false;

	scriptHash = func_118(num2, iParam4);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_DYNAMIC_SCENARIO"), true);
	PED::SET_PED_RESET_FLAG(Global_35, 219, true);
	PED::SET_PED_RESET_FLAG(Global_35, 220, true);
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);

	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(scriptHash))
	{
		func_211(num2);
	
		if (Global_1392915.f_121[num /*20*/].f_2)
			func_213(num2, 65536);
	
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
				if (func_220(num2, panParam1->f_14, panParam1->f_17, i, &ped, 0, 0))
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
			func_221(23, 1);
	
		WEAPON::_HIDE_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 2, false);
	
		if (panParam1->f_12 != 5 && panParam1->f_12 != 6)
			HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MINIGAME"));
	
		*uParam2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, panParam1, 34, 6500);
		func_222();
		func_223();
		func_224(Global_1392915[num /*12*/].f_4, true, false);
		Global_1899528.f_45[num2] = func_225();
		func_226(&Global_1899528.f_45[num2], 0, 0, Global_1899528.f_53[num2], 0, 0, 0, false);
		func_227(num);
		func_228(-1, false, 0, false, false);
	
		if (func_229(num2, &unk))
			func_230(unk);
	
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(scriptHash);
		return true;
	}

	return false;
}

BOOL func_130(int iParam0) // Position - 0x4B69 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

int func_131(int iParam0) // Position - 0x4B75 Hash - 0x3516A114 ^0xDECD073A
{
	if (iParam0 == -1 || iParam0 >= 33)
		return -1;

	return Global_1899528.f_11[iParam0];
}

int func_132(int iParam0) // Position - 0x4B9D Hash - 0x7647021A ^0xF771365
{
	return Global_1392915[iParam0 /*12*/].f_4;
}

BOOL func_133(int iParam0) // Position - 0x4BAF Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_214(iParam0);
	return num == 3 || num == 4;
}

BOOL func_134(int iParam0) // Position - 0x4BCD Hash - 0xDA629583 ^0xDA629583
{
	return func_95(iParam0, 16, true);
}

void func_135(var uParam0, BOOL bParam1) // Position - 0x4BDE Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_30(uParam0))
		func_31(uParam0);

	return;
}

void func_136(int iParam0, BOOL bParam1) // Position - 0x4BFE Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_130(iParam0))
		return;

	if (bParam1)
		if (func_231(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
			func_106(iParam0, 1, false);

	func_106(iParam0, 16, bParam1);
	return;
}

void func_137(int iParam0) // Position - 0x4C40 Hash - 0x7895582D ^0x7895582D
{
	func_106(iParam0, 8, false);
	return;
}

PersChar func_138(int iParam0, BOOL bParam1) // Position - 0x4C51 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_51(iParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
			func_232(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_1;
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4C90 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_51(iParam0))
	{
		ped = func_38(iParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_233(iParam0);
		}
	}

	if (func_93(iParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_38(iParam0), 137, true);

	return;
}

void func_140(int iParam0, BOOL bParam1) // Position - 0x4CE2 Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_130(iParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_38(iParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_38(iParam0), 204, false);

	return;
}

void func_141(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4D19 Hash - 0x6E8FD624 ^0x6E8FD624
{
	PersChar char;
	Ped ped;

	if (!func_51(iParam0))
		return;

	if (func_134(iParam0))
	{
		if (!func_234(iParam0))
			return;
	
		if (!bParam1)
			return;
	}

	if (func_93(iParam0, 32, true))
		if (!bParam2)
			return;

	char = func_138(iParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_38(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_235(iParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(ped) && ENTITY::IS_ENTITY_ATTACHED(ped))
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(ped, 1) || TASK::IS_PED_EXITING_SCENARIO(ped, true) || PED::IS_PED_ON_MOUNT(ped) || PED::IS_PED_IN_ANY_VEHICLE(ped, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(ped);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, true, true);
		}
	
		ENTITY::DETACH_ENTITY(ped, true, true);
	}

	if (bParam4)
	{
		func_89(iParam0, 2, true);
	}
	else
	{
		func_236(iParam0);
		func_89(iParam0, 1, true);
	}

	return;
}

void func_142(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4E27 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_51(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] - Global_40.f_4942[iParam0 /*60*/] && bParam1;
	return;
}

Ped func_143(int iParam0) // Position - 0x4E63 Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_51(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
		Global_1360165[iParam0 /*1157*/].f_70 = 0;

	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_144(int iParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x4EA3 Hash - 0xBD80856C ^0xBD80856C
{
	Ped ped;

	if (!func_130(iParam1))
		return;

	ped = func_143(iParam1);

	if (func_237(iParam1))
		if (!func_238(iParam1))
			return;

	func_94(iParam1, 39, true);
	func_239(iParam1, 64, false);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_239(iParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (!bParam2)
		{
			func_239(iParam1, 512, true);
			PED::SET_PED_KEEP_TASK(ped, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, false);
			func_89(iParam1, 43, true);
		}
	
		if (bParam4)
			func_240(iParam1, false, true, true, true);
	}

	return;
}

int func_145(int iParam0, int iParam1) // Position - 0x4F45 Hash - 0x8D759E81 ^0x8D759E81
{
	int num;
	int num2;
	int num3;

	num = func_131(iParam0);

	if (num == -1)
		return 0;

	num2 = func_150(num);

	if (num2 == -1)
		return 0;

	if (func_241(iParam0))
		return 1;

	func_242(iParam0);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[num /*20*/].f_7))
		VOLUME::DELETE_VOLUME(Global_1392915.f_121[num /*20*/].f_7);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[num /*20*/].f_8))
		VOLUME::DELETE_VOLUME(Global_1392915.f_121[num /*20*/].f_8);

	Global_1392915.f_121[num /*20*/].f_1 = 0;
	func_227(num);
	num3 = func_125(Global_1392915[num /*12*/].f_4);

	if (num3 != -1)
	{
		if (iParam1 == 1)
			func_243(Global_1392915[num /*12*/].f_4);
	
		if (MAP::DOES_BLIP_EXIST(Global_1898346[num3 /*6*/]))
			MAP::REMOVE_BLIP(&Global_1898346[num3 /*6*/]);
	
		func_244(num3, 0);
		return 1;
	}

	return 0;
}

void func_146(int iParam0) // Position - 0x502F Hash - 0xD2B2F412 ^0x6837BDDD
{
	int num;

	if (iParam0 == -1)
		return;

	num = Global_1392915[iParam0 /*12*/];

	if (func_245(iParam0))
		return;

	if (func_63(Global_1392915[iParam0 /*12*/].f_4))
		func_246(Global_1392915[iParam0 /*12*/].f_4, true, 2);

	Global_1392915[iParam0 /*12*/].f_1 = -1;
	func_209(num, -1);
	return;
}

void func_147(var uParam0, int iParam1) // Position - 0x5089 Hash - 0x7F892F74 ^0x5E2018BC
{
	int num;

	num = Global_1392915[iParam1 /*12*/];

	if (!func_247(num))
		return;

	if (func_248(uParam0->f_34[num]))
	{
		func_249(&uParam0->f_34[num], true);
		uParam0->f_34[num] = -1;
		uParam0->[num] = 0;
	}

	return;
}

void func_148(int iParam0) // Position - 0x50D4 Hash - 0xFC8C9409 ^0xE623F74F
{
	func_250(&Global_1392915[iParam0 /*12*/]);
	func_251(&Global_1392915.f_121[iParam0 /*20*/]);
	return;
}

BOOL func_149(var uParam0, float fParam1) // Position - 0x50F6 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_30(uParam0))
		return false;

	if (func_252(uParam0) > fParam1)
		return true;

	return false;
}

int func_150(int iParam0) // Position - 0x511D Hash - 0x7647021A ^0xF0097466
{
	return Global_1392915[iParam0 /*12*/].f_1;
}

int func_151(int iParam0) // Position - 0x512F Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1392915[iParam0 /*12*/];
}

BOOL func_152(int iParam0) // Position - 0x513F Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_72(iParam0, 2);
}

void func_153(int iParam0) // Position - 0x514E Hash - 0xF69B99CF ^0x21CDC007
{
	Ped ped;

	ped = Global_1360165[iParam0 /*1157*/];

	if (!ENTITY::DOES_ENTITY_EXIST(ped) || ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (!func_51(iParam0))
		return;

	if (!PED::IS_PED_IN_GROUP(ped))
		return;

	if (PED::GET_PED_GROUP_INDEX(ped) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
		return;

	if (PED::_IS_PED_LEADING_ANY_GROUP(ped))
		COMPANION::_0xD747979C053EFA7A(func_90());

	PED::SET_PED_CONFIG_FLAG(ped, 279, false);
	PED::REMOVE_PED_FROM_GROUP(ped);
	func_174(iParam0, false, 0);
	return;
}

void func_154() // Position - 0x51D1 Hash - 0xC0695FEA ^0xC0695FEA
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 2; i = i + 1)
	{
		num = func_253(i);
		num2 = func_253(i + 1);
	
		if (!func_51(num))
		{
			if (func_51(num2))
			{
				Global_1359489[i] = num2;
				Global_1359489[i + 1] = -1;
			}
		}
	}

	return;
}

BOOL func_155(int iParam0) // Position - 0x5225 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_156(BOOL bParam0) // Position - 0x5263 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

Vector3 func_157(int iParam0) // Position - 0x5276 Hash - 0x890F3181 ^0x890F3181
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

Vector3 func_158(int iParam0) // Position - 0x52D1 Hash - 0x890F3181 ^0x890F3181
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

BOOL func_159(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x532C Hash - 0x9D8E22CB ^0x9D8E22CB
{
	if (!func_130(iParam0))
		return false;

	if (bParam1)
		return func_93(iParam0, 26, true);

	if (bParam2)
		if (!func_29(func_38(iParam0), 0))
			return false;

	if (!func_254(iParam0, true, false))
		return false;

	if (func_93(iParam0, 44, true))
		return false;

	return true;
}

BOOL func_160(int iParam0, BOOL bParam1) // Position - 0x538C Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_214(iParam0))
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

BOOL func_161(int iParam0) // Position - 0x53BD Hash - 0x8232DC08 ^0x5AF1E79C
{
	int num;
	int offset;

	func_255(iParam0, &num, &offset);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[num], offset);
}

BOOL func_162() // Position - 0x53E1 Hash - 0x8E51E551 ^0x249B1CB6
{
	return WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, false);
}

int func_163(int iParam0) // Position - 0x53F7 Hash - 0xE1D6BB0D ^0xE1D6BB0D
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

BOOL func_164(int iParam0) // Position - 0x542C Hash - 0x3C41C28F ^0x53D6F4A2
{
	if (!func_256(iParam0))
		return false;

	if (func_47() == false)
		return true;

	return !func_206() || MISC::IS_BIT_SET(Global_40.f_7856, iParam0);
}

int func_165(int iParam0, Hash hParam1) // Position - 0x5465 Hash - 0xE769BAE7 ^0x9D2D6FC6
{
	if (hParam1 == joaat("HAI_BANK_ROBBERY_01"))
		return func_258(0, func_257(hParam1, 1), 11, joaat("cabr01"));

	return func_258(0, func_257(hParam1, 1), 11, hParam1);
}

int func_166(int iParam0) // Position - 0x549D Hash - 0xE67E3975 ^0x6B59BE69
{
	if (!func_63(iParam0))
		return -1;

	return BUILTIN::SHIFT_RIGHT(func_259(iParam0) & 2147418112, 16);
}

BOOL func_167(int iParam0, int iParam1) // Position - 0x54C5 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_47() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_168(int iParam0) // Position - 0x54F8 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_47() != -1)
		if (func_170(iParam0, 4))
			return false;
	else if (func_170(iParam0, 2))
		return false;

	return true;
}

BOOL func_169(int iParam0) // Position - 0x5528 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_170(iParam0, 65536) && !func_170(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_170(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_170(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_170(int iParam0, int iParam1) // Position - 0x55D4 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_171(int iParam0) // Position - 0x55ED Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_172() // Position - 0x5600 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_173(int iParam0) // Position - 0x560F Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_47() != -1)
		return false;

	if (!func_61(iParam0))
		return false;

	return func_160(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_174(int iParam0, BOOL bParam1, Ped pedParam2) // Position - 0x5640 Hash - 0xD8E274A1 ^0xE4E6335F
{
	Ped ped;

	if (!func_51(iParam0))
		return;

	if (!func_37(iParam0))
		return;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return;

	if (bParam1 && ENTITY::IS_ENTITY_DEAD(pedParam2))
		return;

	ped = func_38(iParam0);

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
		COMPANION::_0xD428C3F92FC3F6F8(ped, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0));
		PED::_SET_PED_COMBAT_BEHAVIOUR(ped, -1972074710);
		PED::_SET_PED_COMBAT_BEHAVIOUR(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(ped);
	
		if (!func_261())
			PED::_0x9A4AC116CC1EEE14(Global_35);
	}

	return;
}

int func_175(BOOL bParam0) // Position - 0x5722 Hash - 0xB9596906 ^0xEA13D3DB
{
	int num;
	BOOL flag;

	flag = bParam0;

	if (flag < false)
	{
		num = 1;
		func_262(&flag, -2147483648);
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

int func_176(int iParam0, var uParam1, var uParam2) // Position - 0x5762 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_177(var uParam0, int iParam1) // Position - 0x577F Hash - 0xDFED97A2 ^0x7CA9A462
{
	int bitShift;

	bitShift = iParam1;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1, bitShift);
	return;
}

int func_178(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5799 Hash - 0xEC801E93 ^0x8D937378
{
	int num;
	var unk;
	int endRange;
	int num2;
	BOOL flag;
	int i;
	int randomIntInRange;

	if (!func_130(iParam0))
		return 0;

	num = CLOCK::GET_CLOCK_HOURS() + 1;

	if (num == 25)
		num = 0;

	unk = 5;
	endRange = 0;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_160(Global_1835011[4 /*74*/].f_1, true))
						unk[0] = -695701225;
					else
						unk[0] = 404503428;
					break;
			
				default:
					unk[0] = 178615350;
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					unk[3] = 1818898449;
					endRange = 4;
					break;
			
				case 1:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					endRange = 3;
					break;
			
				case 2:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = 1818898449;
					endRange = 3;
					break;
			
				case 3:
					if (func_263(num, 9, 11))
					{
						unk[0] = 283037683;
					}
					else
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						unk[2] = -1862464078;
						endRange = 3;
					}
				
					if (!bParam2)
						unk[0] = -268604689;
					break;
			
				case 4:
					unk[0] = -268604689;
					break;
			
				case 5:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 6:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					unk[3] = 1818898449;
					endRange = 4;
					break;
			
				case 7:
					unk[0] = -268604689;
					unk[0] = -1632589543;
					unk[1] = 1818898449;
					endRange = 3;
					break;
			
				case 8:
					unk[0] = -268604689;
					break;
			
				case 9:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 10:
					if (func_160(Global_1347702[63 /*49*/].f_15, true) || func_133(Global_1347702[63 /*49*/].f_15))
						unk[0] = -268604689;
					else
						unk[0] = -310473775;
					break;
			
				case 11:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 13:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					endRange = 3;
					break;
			
				case 14:
					unk[0] = -268604689;
					break;
			
				case 15:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 16:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 17:
					if (func_263(num, 9, 12))
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						unk[2] = -1862464078;
						endRange = 3;
					}
					else
					{
						unk[0] = -268604689;
					}
					break;
			
				case 18:
					if (!func_160(Global_1835011[14 /*74*/].f_1, true))
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						endRange = 2;
					}
					else if (func_95(18, 134217728, true))
					{
						unk[0] = 961676983;
					}
					else
					{
						unk[0] = -1587546924;
					}
					break;
			
				case 19:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 20:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 21:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 22:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					endRange = 3;
					break;
			
				case 23:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -23947011;
					endRange = 3;
					break;
			
				default:
					unk[0] = -268604689;
					break;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 1:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 2:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 3:
					if (func_263(num, 9, 11))
					{
						unk[0] = 283037683;
					}
					else
					{
						unk[0] = -922193456;
						unk[1] = -2040275819;
						unk[2] = -1114682645;
						unk[3] = -1414977761;
						endRange = 4;
					}
				
					if (!bParam2)
						unk[0] = -922193456;
					break;
			
				case 4:
					unk[0] = -922193456;
					break;
			
				case 5:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 6:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 7:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 8:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 283037683;
					unk[3] = 1744281750;
					endRange = 4;
					break;
			
				case 9:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					unk[4] = 1744281750;
					endRange = 5;
					break;
			
				case 10:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 11:
					if (func_160(Global_1347702[134 /*49*/].f_15, true) || func_133(Global_1347702[134 /*49*/].f_15))
					{
						unk[0] = -2040275819;
						unk[1] = 1205492208;
						endRange = 2;
					}
					else
					{
						unk[0] = -922193456;
					}
					break;
			
				case 13:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 283037683;
					unk[3] = 1744281750;
					endRange = 4;
					break;
			
				case 14:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 15:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 16:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 17:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 18:
					unk[0] = -922193456;
					break;
			
				case 19:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 20:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 21:
					unk[0] = -922193456;
					unk[1] = 1744281750;
					endRange = 2;
					break;
			
				case 22:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 23:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 1744281750;
					endRange = 3;
					break;
			
				case 26:
					unk[0] = -268604689;
					break;
			
				default:
					unk[0] = -922193456;
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_160(Global_1835011[38 /*74*/].f_1, true))
						unk[0] = -1559986688;
					else
						unk[0] = -1874208704;
					break;
			
				default:
					unk[0] = 1593315648;
					break;
			}
			break;
	
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 1:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 2:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 3:
					if (func_263(num, 9, 11))
					{
						unk[0] = 283037683;
					}
					else
					{
						unk[0] = -922193456;
						unk[1] = -2040275819;
						unk[2] = -1114682645;
						unk[3] = -1414977761;
						endRange = 4;
					}
				
					if (!bParam2)
						unk[0] = -922193456;
					break;
			
				case 4:
					unk[0] = -922193456;
					break;
			
				case 6:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 7:
					unk[0] = 1295334688;
					endRange = 1;
					break;
			
				case 11:
					unk[0] = -2051275045;
					break;
			
				case 13:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 283037683;
					unk[3] = 1744281750;
					endRange = 4;
					break;
			
				case 14:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 15:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 16:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 17:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 18:
					unk[0] = -922193456;
					break;
			
				case 19:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 20:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 21:
					unk[0] = -922193456;
					unk[1] = 1744281750;
					endRange = 2;
					break;
			
				case 22:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 23:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 1744281750;
					endRange = 3;
					break;
			
				case 26:
					unk[0] = -268604689;
					break;
			
				default:
					unk[0] = -922193456;
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					if (func_68(joaat("CSTAG_FLOW_MAR8_POST"), true) && !func_160(Global_1347702[1 /*49*/].f_15, true))
						unk[0] = -1155031950;
					else
						unk[0] = -1341683964;
					break;
			
				case 13:
					unk[0] = -1341683964;
					unk[1] = 876797088;
					endRange = 2;
					break;
			
				case 14:
					unk[0] = -426171916;
					unk[1] = 1484386316;
					unk[2] = 1254970547;
					endRange = 3;
					break;
			
				default:
					unk[0] = -1341683964;
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 4:
					unk[0] = -1341683964;
					unk[1] = 867156718;
					endRange = 2;
					break;
			
				case 7:
					unk[0] = -1341683964;
					unk[1] = 1484386316;
					endRange = 2;
					break;
			
				case 13:
					unk[0] = -1341683964;
					unk[1] = 876797088;
					unk[2] = 1484386316;
					endRange = 3;
					break;
			
				case 14:
					unk[0] = -1092189504;
					unk[1] = 80515440;
					endRange = 2;
					break;
			
				default:
					unk[0] = -1341683964;
					break;
			}
			break;
	}

	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_38(iParam0)))
	{
		for (i = 0; i < endRange; i = i + 1)
		{
			if (unk[i] == Global_40.f_4942[iParam0 /*60*/].f_3)
			{
				flag = true;
				num2 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
		}
	}

	if (!flag)
	{
		randomIntInRange = 0;
	
		if (endRange > 0 && bParam2)
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	
		num2 = unk[randomIntInRange];
	}

	if (!func_101(iParam0, num2))
		num2 = Global_40.f_4942[iParam0 /*60*/].f_3;

	return num2;
}

BOOL func_179(int iParam0) // Position - 0x6581 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_180(int iParam0, BOOL bParam1) // Position - 0x65AE Hash - 0xAA2527A1 ^0x8C2C75CE
{
	int num;

	if (!func_130(iParam0))
		return false;

	if (!bParam1)
		if (func_134(iParam0) || func_93(iParam0, 44, true))
			return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
		return false;

	num = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
	return num == joaat("SLEEP");
}

struct<7> func_181(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, int iParam8, BOOL bParam9) // Position - 0x6637 Hash - 0xDA7D22BD ^0xF82EFD7F
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	num.f_3 = { uParam2 };
	num.f_2 = iParam8;
	num.f_6 = 0;

	if (bParam5)
		MISC::SET_BIT(&(num.f_6), 0);

	if (bParam6)
		MISC::SET_BIT(&(num.f_6), 1);

	if (bParam7)
		MISC::SET_BIT(&(num.f_6), 2);

	if (bParam9)
		MISC::SET_BIT(&(num.f_6), 3);

	return num;
}

void func_182(int iParam0, BOOL bParam1) // Position - 0x669A Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_130(iParam0))
		return;

	ped = func_38(iParam0);
	func_264(ped);
	func_89(iParam0, 60, true);

	if (bParam1)
		func_265(iParam0);

	return;
}

void func_183(int iParam0, BOOL bParam1) // Position - 0x66D1 Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_130(iParam0))
		return;

	ped = func_38(iParam0);
	func_266(ped);
	func_94(iParam0, 60, true);

	if (bParam1)
		func_267(iParam0);

	return;
}

void func_184(int iParam0, BOOL bParam1) // Position - 0x6708 Hash - 0xD602D5AC ^0xD602D5AC
{
	Ped ped;

	if (!func_130(iParam0))
		return;

	ped = func_38(iParam0);
	func_268(ped);

	if (iParam0 == 14)
		func_269(ped);

	func_89(iParam0, 61, true);

	if (bParam1)
		func_270(iParam0);

	return;
}

void func_185(int iParam0, BOOL bParam1) // Position - 0x674C Hash - 0x1364490 ^0x1364490
{
	Ped ped;

	if (!func_130(iParam0))
		return;

	ped = func_38(iParam0);
	func_271(ped);
	func_94(iParam0, 61, true);

	if (bParam1)
		func_272(iParam0);

	return;
}

Ped func_186(Ped pedParam0) // Position - 0x6783 Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_187(Ped pedParam0) // Position - 0x678D Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_188(Ped pedParam0) // Position - 0x67BF Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

BOOL func_189(int iParam0, int iParam1) // Position - 0x6801 Hash - 0xE0095B63 ^0x929CAC47
{
	int num;
	int offset;

	if (!func_130(iParam0))
		return false;

	func_273(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[num], offset);
}

BOOL func_190(int iParam0) // Position - 0x6837 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

Hash func_191(int iParam0, int iParam1) // Position - 0x684A Hash - 0xE1D12727 ^0x6E706E61
{
	int num;

	switch (iParam0)
	{
		case -2051275045:
			return -306710010;
	
		case -2040275819:
			return 464906090;
	
		case -1874208704:
			return 1680324116;
	
		case -1862464078:
			return 1895628185;
	
		case -1692022104:
			return -1851470579;
	
		case -1684458716:
			return 1976273473;
	
		case -1678882891:
			return -1638703055;
	
		case -1668922931:
			return -1915831038;
	
		case -1648322231:
			return 1074183062;
	
		case -1642335258:
			return -1491647079;
	
		case -1632589543:
			return 1052055818;
	
		case -1587546924:
			return -1303789247;
	
		case -1559986688:
			return 174754238;
	
		case -1532979576:
			return 1391951221;
	
		case -1414977761:
			return 1059434053;
	
		case -1394723994:
			return -1857650992;
	
		case -1341683964:
			return 1689938120;
	
		case -1335291723:
			return -1120526485;
	
		case -1268239471:
			return -1832874334;
	
		case -1248623443:
			return -1437962122;
	
		case -1205468859:
			return -757536090;
	
		case -1155031950:
			return 1883650185;
	
		case -1114682645:
			return 744097966;
	
		case -1092189504:
			return 389057251;
	
		case -1065026089:
			return 1087308308;
	
		case -973332710:
			return -2045878709;
	
		case -946772361:
			return 646599895;
	
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return joaat("META_OUTFIT_DEFAULT");
			
				default:
				
			}
		
			return joaat("META_OUTFIT_WARM_WEATHER");
	
		case -695701225:
			return -1090160065;
	
		case -571427255:
			return -251280159;
	
		case -481967001:
			return 1833893952;
	
		case -445211559:
			return -757536090;
	
		case -433615745:
			return 643643053;
	
		case -426171916:
			return joaat("META_OUTFIT_DEFAULT");
	
		case -310473775:
			return -877585857;
	
		case -301101630:
			return -1187204983;
	
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
	
		case -193269670:
			return -1774801049;
	
		case -23947011:
			return -456769142;
	
		case 6418928:
			return -211106360;
	
		case 80515440:
			return -2137653778;
	
		case 178615350:
			return joaat("META_OUTFIT_COLD_WEATHER");
	
		case 283037683:
			return 1996046145;
	
		case 296923297:
			num = func_274(296923297, iParam1);
			return func_275(num);
	
		case 350498312:
			return 1959714099;
	
		case 404503428:
			return -1704514526;
	
		case 431390894:
			return -20643141;
	
		case 513932985:
			return 505715365;
	
		case 707545953:
			return 890352471;
	
		case 713940276:
			return -1949892659;
	
		case 777603945:
			return joaat("META_OUTFIT_KIDNAPPED");
	
		case 837028314:
			return -20984612;
	
		case 867156718:
			return 241911854;
	
		case 876535472:
			return -1916145078;
	
		case 876797088:
			return 1309207681;
	
		case 928493661:
			return 861275228;
	
		case 961676983:
			return -1527307534;
	
		case 977450639:
			return 2111449038;
	
		case 1018353621:
			return 114272443;
	
		case 1046468203:
			return 393090546;
	
		case 1071744295:
			return -2065784734;
	
		case 1199580439:
			return -1443192745;
	
		case 1200878026:
			return 1560123389;
	
		case 1205492208:
			return 1598276604;
	
		case 1237718549:
			num = func_274(1237718549, iParam1);
			return func_275(num);
	
		case 1254970547:
			return -211106360;
	
		case 1295334688:
			return 869636257;
	
		case 1300659195:
			return -309158751;
	
		case 1484386316:
			return -800489594;
	
		case 1495063555:
			return -339275545;
	
		case 1593315648:
			return 989578874;
	
		case 1658153743:
			return -2072429185;
	
		case 1744281750:
			return joaat("META_OUTFIT_WARM_WEATHER_CASUAL");
	
		case 1818898449:
			return 30596609;
	
		case 1842975347:
			return 491764525;
	
		case 1901494236:
			return 1245083301;
	
		case 1950972546:
			return -1699183538;
	
		case 2062813606:
			return 1709174532;
	
		case 2094043703:
			return -1395382793;
	}

	return joaat("META_OUTFIT_DEFAULT");
}

BOOL func_192(Ped pedParam0, Hash hParam1) // Position - 0x6CEC Hash - 0x902FAF7B ^0x852CA371
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	flag = PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(hParam1, ENTITY::GET_ENTITY_MODEL(pedParam0));

	if (flag)
	{
	}

	return flag;
}

BOOL func_193(Ped pedParam0, Hash hParam1) // Position - 0x6D1A Hash - 0xA54F3032 ^0xE7FFD6D7
{
	Hash _int;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (_int == hParam1)
		return true;

	return false;
}

BOOL func_194(Ped pedParam0, Hash hParam1) // Position - 0x6D6B Hash - 0xA54F3032 ^0xE7FFD6D7
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_192(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_195(Ped pedParam0) // Position - 0x6DDD Hash - 0x446F1BDD ^0x1FA89317
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

void func_196(int iParam0, Ped pedParam1, BOOL bParam2) // Position - 0x6DFB Hash - 0xF8298322 ^0x7D3D3E5
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) || ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, joaat("wearable_masks")))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, joaat("wearable_masks"), 1);

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 494009478))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, 494009478, 1);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1 > 0 && func_192(pedParam1, 860729266))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 860729266);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4096 > 0 && func_192(pedParam1, 879715242))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 879715242);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 128 > 0 && func_192(pedParam1, 1606325429))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1606325429);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 256 > 0 && func_192(pedParam1, 1743550585))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1743550585);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 512 > 0 && func_192(pedParam1, 1064646155))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1064646155);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1024 > 0 && func_192(pedParam1, -536694793))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -536694793);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2048 > 0 && func_192(pedParam1, -1304053509))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1304053509);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & -2147483648 > 0 && func_192(pedParam1, 718939204))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 718939204);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 65536 > 0 && func_192(pedParam1, -972364774))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -972364774);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16384 > 0 && func_192(pedParam1, -1100875244))
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, -134124598))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, -134124598, 1);
	
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 2071466316))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, 2071466316, 1);
	
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1100875244);
	}

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 262144 > 0 && func_192(pedParam1, 1153596794))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1153596794);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 524288 > 0 && func_192(pedParam1, 1016389820))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1016389820);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1048576 > 0 && func_192(pedParam1, -726966617))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -726966617);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2097152 > 0 && func_192(pedParam1, 1365901568))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1365901568);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 32768 > 0 && func_192(pedParam1, -1658942149))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1658942149);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 131072 > 0 && func_192(pedParam1, -1980913856))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1980913856);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4194304 > 0 && func_192(pedParam1, 491764525))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 491764525);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8388608 > 0 && func_192(pedParam1, -76015264))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -76015264);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16777216 > 0 && func_192(pedParam1, 622113465))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 622113465);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 33554432 > 0 && func_192(pedParam1, 781533162))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 781533162);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 67108864 > 0 && func_192(pedParam1, -271415321))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -271415321);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 134217728 > 0 && func_192(pedParam1, -1683207356))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1683207356);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 268435456 > 0 && func_192(pedParam1, -254794762))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -254794762);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 536870912 > 0 && func_192(pedParam1, 609066278))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 609066278);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1073741824 > 0 && func_192(pedParam1, -1712783565))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1712783565);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8192 > 0 && func_192(pedParam1, 1544915253))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1544915253);

	if (bParam2)
		Global_1360165[iParam0 /*1157*/].f_57 = 1;

	return;
}

void func_197(int iParam0) // Position - 0x73D9 Hash - 0x83966A8E ^0x24FDDDED
{
	func_276(iParam0, 1);
	func_276(iParam0, 128);
	func_276(iParam0, 256);
	func_276(iParam0, 512);
	func_276(iParam0, 1024);
	func_276(iParam0, 2048);
	func_276(iParam0, 4096);
	func_276(iParam0, 65536);
	func_276(iParam0, 16384);
	func_276(iParam0, 262144);
	func_276(iParam0, 524288);
	func_276(iParam0, 1048576);
	func_276(iParam0, 2097152);
	func_276(iParam0, 32768);
	func_276(iParam0, 131072);
	func_276(iParam0, 134217728);
	func_276(iParam0, 1073741824);
	return;
}

void func_198(int iParam0, BOOL bParam1) // Position - 0x7482 Hash - 0xA7580A6E ^0xBC897F2A
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		return;

	if (!bParam1)
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);

	return;
}

void func_199(var uParam0, int iParam1, BOOL bParam2) // Position - 0x74F5 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*uParam0 = *uParam0 || iParam1;
	else
		*uParam0 = *uParam0 - *uParam0 && iParam1;

	return;
}

Hash func_200(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13) // Position - 0x751B Hash - 0xAB9CFACB ^0x8DB6D77C
{
	Hash weaponHash;
	Hash weapontypeGroup;
	Hash defaultPedWeaponCollection;
	Hash hashKey;
	Hash hash;
	var string1;
	BOOL flag;
	BOOL bIgnoreUnlocks;
	int pedAmmoByType;
	int num;
	float permanentDegradation;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	switch (hParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("group_revolver"):
		case joaat("group_repeater"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			weaponHash = WEAPON::_0xF8204EF17410BF43(hParam1, iParam7, iParam8, 0);
		
			if (!WEAPON::IS_WEAPON_VALID(weaponHash))
				weaponHash = joaat("WEAPON_UNARMED");
			break;
	
		default:
			if (!WEAPON::IS_WEAPON_VALID(hParam1))
				return hParam1;
		
			weaponHash = hParam1;
		
			if (WEAPON::IS_WEAPON_A_GUN(weaponHash) || WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0) == joaat("rel_gang_dutchs"))
			{
				TEXT_LABEL_ASSIGN_STRING(&string1, WEAPON::_GET_WEAPON_NAME(weaponHash), 128);
				defaultPedWeaponCollection = WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(ENTITY::GET_ENTITY_MODEL(pedParam0));
			
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&string1, "_DUALWIELD"))
				{
					TEXT_LABEL_ASSIGN_STRING(&string1, HUD::_0x806862E5D266CF38(&string1, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&string1) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD")), 128);
					hashKey = MISC::GET_HASH_KEY(&string1);
				
					if (func_277(hashKey) && WEAPON::_0xF252A85B8F3F8C58(defaultPedWeaponCollection, hashKey))
						flag = true;
				}
			
				if (!flag)
				{
					weapontypeGroup = WEAPON::GET_WEAPONTYPE_GROUP(weaponHash);
				
					if (weapontypeGroup != 0 && defaultPedWeaponCollection != 0)
					{
						hash = WEAPON::_0x9EEFD670F10656D7(defaultPedWeaponCollection, weapontypeGroup);
					
						if (!Global_43891)
							if (func_277(hash) && hash != weaponHash)
								weaponHash = hash;
						else
							hash == weaponHash;
					}
				}
			}
			break;
	}

	if (func_47() == -1 && !func_278(weaponHash))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(pedParam0, weaponHash, 0, false) && pedParam0 != Global_35)
		{
			bIgnoreUnlocks = true;
		}
		else if (hash == weaponHash && !Global_43891 && pedParam0 != Global_35 && PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0) == joaat("rel_gang_dutchs"))
		{
			bIgnoreUnlocks = true;
		}
		else
		{
			weaponHash = WEAPON::_0xF8204EF17410BF43(hParam1, iParam7, iParam8, 0);
		
			if (!WEAPON::IS_WEAPON_VALID(weaponHash))
				weaponHash = joaat("WEAPON_UNARMED");
		}
	}

	if (weaponHash == joaat("WEAPON_UNARMED") && hParam1 == joaat("WEAPON_UNARMED"))
	{
		return weaponHash;
	}
	else if (weaponHash == joaat("WEAPON_UNARMED"))
	{
		switch (hParam1)
		{
			case joaat("GROUP_SNIPER"):
			case joaat("group_repeater"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_278(joaat("weapon_repeater_carbine")))
					weaponHash = joaat("weapon_repeater_carbine");
				else
					weaponHash = joaat("weapon_revolver_cattleman");
				break;
		
			case joaat("group_revolver"):
			case joaat("GROUP_PISTOL"):
				weaponHash = joaat("weapon_revolver_cattleman");
				break;
		
			default:
				weaponHash = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (weaponHash == joaat("weapon_melee_lantern") && pedParam0 == Global_35)
	{
		weaponHash = joaat("weapon_melee_davy_lantern");
	}

	if (iParam9 < 0)
	{
		if (pedParam0 != Global_35 && func_277(weaponHash))
		{
			WEAPON::GET_MAX_AMMO(pedParam0, &iParam9, weaponHash);
		
			if (iParam9 < 0)
				iParam9 = 0;
		}
		else if (!WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash) && weaponHash != joaat("WEAPON_UNARMED") && !WEAPON::_IS_WEAPON_LANTERN(weaponHash))
		{
			pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(pedParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(pedParam0, weaponHash));
			num = WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 3;
			iParam9 = num - pedAmmoByType;
		
			if (iParam9 < 0)
				iParam9 = 0;
		}
		else
		{
			iParam9 = 0;
		}
	}

	if (bParam6 && bParam2)
		bParam5 = false;

	if (pedParam0 == Global_35)
	{
		func_279(weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 752097756, false);
	}
	else if (!bParam13)
	{
		permanentDegradation = 0f;
		func_280(pedParam0, &weaponHash, &permanentDegradation);
		weaponHash = WEAPON::GIVE_WEAPON_TO_PED(pedParam0, weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 1056964608, 1065353216, 752097756, bIgnoreUnlocks, permanentDegradation, false);
	}

	if (pedParam0 != Global_35)
		if (func_281(weaponHash))
			WEAPON::SET_PED_INFINITE_AMMO(pedParam0, bParam3, weaponHash);
	else if (bParam10)
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), weaponHash, bParam4);

	return weaponHash;
}

float func_201() // Position - 0x78C7 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_202(var uParam0, int iParam1) // Position - 0x78F9 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_203(var uParam0, int iParam1) // Position - 0x790A Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

char* func_204() // Position - 0x791F Hash - 0x306ACA3A ^0xD9900DE9
{
	return "unnamed";
}

BOOL func_205(int iParam0) // Position - 0x792B Hash - 0xE97E1B38 ^0xE97E1B38
{
	return iParam0 > -1 && iParam0 < 7;
}

BOOL func_206() // Position - 0x7940 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_207(int iParam0) // Position - 0x795F Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_57(iParam0))
		return false;

	return func_58(iParam0, 33554432);
}

BOOL func_208(var uParam0) // Position - 0x7980 Hash - 0xE9FA0BF0 ^0xE9FA0BF0
{
	int i;

	*uParam0 = -1;

	for (i = 0; i < Global_1392915; i = i + 1)
	{
		if (func_245(i))
		{
			*uParam0 = i;
			return true;
		}
	}

	return false;
}

void func_209(int iParam0, int iParam1) // Position - 0x79B4 Hash - 0x783CB6E7 ^0xC545C92C
{
	if (iParam0 == -1 || iParam0 >= 33)
		return;

	Global_1899528.f_11[iParam0] = iParam1;
	return;
}

BOOL func_210(int iParam0, BOOL bParam1) // Position - 0x79DD Hash - 0x9C3ED08F ^0xE9848133
{
	return Global_1899528.f_3[iParam0] && bParam1 != false;
}

void func_211(int iParam0) // Position - 0x79F4 Hash - 0xEF70193F ^0x89D7B4C3
{
	Global_1899528.f_3[iParam0] = false;
	return;
}

int func_212(int iParam0, int iParam1) // Position - 0x7A07 Hash - 0x9D1CE871 ^0x6377C92B
{
	return func_258(iParam0, iParam1, 4, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam1)));
}

void func_213(int iParam0, BOOL bParam1) // Position - 0x7A22 Hash - 0xBB5D5F2F ^0x1ACB2B49
{
	!func_210(iParam0, bParam1);
	Global_1899528.f_3[iParam0] = Global_1899528.f_3[iParam0] || bParam1;
	return;
}

int func_214(int iParam0) // Position - 0x7A4D Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_63(iParam0))
		return -1;

	return func_215(iParam0);
}

int func_215(int iParam0) // Position - 0x7A69 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_283(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_216(int iParam0, BOOL bParam1) // Position - 0x7AAA Hash - 0x3C4FA973 ^0x67C1D80B
{
	if (!func_63(iParam0))
		return;

	if (!func_122(iParam0))
		return;

	if (bParam1)
	{
		if (func_284(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_284(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_285(iParam0), func_60(iParam0), func_286(iParam0), func_284(iParam0), Global_36);
		}
	}

	func_218(iParam0, 1);
	bParam1 = bParam1;
	return;
}

void func_217(int iParam0, BOOL bParam1) // Position - 0x7B1B Hash - 0x23CB6788 ^0xB008F1A1
{
	if (Global_1898346[iParam0 /*6*/].f_2 == false || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_155(Global_1898330[iParam0]);
		func_287(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}

	return;
}

void func_218(int iParam0, int iParam1) // Position - 0x7B7C Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_63(iParam0))
		return;

	func_288(iParam0, iParam1);
	return;
}

void func_219(int iParam0, BOOL bParam1) // Position - 0x7B99 Hash - 0x39D95D03 ^0x411312B7
{
	func_210(iParam0, bParam1);
	Global_1899528.f_3[iParam0] = Global_1899528.f_3[iParam0] - Global_1899528.f_3[iParam0] && bParam1;
	return;
}

BOOL func_220(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, var uParam6, int iParam7, int iParam8) // Position - 0x7BCE Hash - 0x6033B7C1 ^0xE3342445
{
	var unk;
	Ped pedFromIndexedItem;
	ItemSet itemSet;
	Volume volume;
	int entitiesInVolume;
	int i;
	float num;

	num = 0.25f * 2f;

	if (!func_289(iParam0, uParam1, fParam4, iParam5, &unk, 1))
		return false;

	itemSet = ITEMSET::CREATE_ITEMSET(true);

	if (!ITEMSET::IS_ITEMSET_VALID(itemSet))
		return false;

	unk.f_2 = unk.f_2 + 0.9f;
	func_290(&volume, unk, 0f, 0f, 0f, num, num, 1.8f);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volume, itemSet, 1);

	for (i = 0; i < entitiesInVolume; i = i + 1)
	{
		pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet));
	
		if (func_291(iParam0, pedFromIndexedItem) || iParam8 == 1)
		{
			if (iParam7 == 0 || iParam7 == 1 && !PED::IS_PED_A_PLAYER(pedFromIndexedItem))
			{
				func_115(volume);
				ITEMSET::_CLEAR_ITEMSET(itemSet);
				ITEMSET::DESTROY_ITEMSET(itemSet);
				*uParam6 = pedFromIndexedItem;
				return true;
			}
		}
	}

	func_115(volume);
	ITEMSET::_CLEAR_ITEMSET(itemSet);
	ITEMSET::DESTROY_ITEMSET(itemSet);
	return false;
}

void func_221(int iParam0, int iParam1) // Position - 0x7CBD Hash - 0x3310CDA6 ^0x6278D98C
{
	int num;
	int num2;

	num = func_131(iParam0);

	if (num == -1)
		return;

	num2 = func_150(num);

	if (num2 == -1)
		return;

	Global_1392915.f_121[num /*20*/].f_19 = iParam1;
	return;
}

void func_222() // Position - 0x7CF5 Hash - 0x54676713 ^0xB7C54F4A
{
	Global_1899528.f_2 = 0;
	return;
}

void func_223() // Position - 0x7D04 Hash - 0x6CE209EF ^0x2C989E18
{
	if (Global_1899528.f_202 != 0)
	{
		if (Global_1899528.f_202 == UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1))
			func_292(true);
	
		Global_1899528.f_202 = 0;
		Global_1899528.f_203 = 0;
	}

	return;
}

void func_224(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7D37 Hash - 0x9F2D2B44 ^0xC32EBA43
{
	int num;
	int num2;

	if (!func_63(iParam0))
		return;

	if (!func_123(iParam0))
		return;

	num = func_285(iParam0);

	if (bParam1)
	{
		if (func_284(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_284(iParam0)))
		{
		}
		else
		{
			if (num == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
				func_293(func_60(iParam0));
		
			if (func_47() != false)
				STATS::STATSTRACKER_DEED_STARTED(func_284(iParam0), 0);
			else
				STATS::STATSTRACKER_DEED_STARTED(func_284(iParam0), Global_265073.f_73815.f_208.f_12);
		}
	}

	func_294(iParam0);

	if (!func_63(func_124(0)))
	{
		func_218(iParam0, 3);
		func_295(bParam2);
	
		if (func_47() == -1)
		{
			if (bParam2 == false)
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		
			func_296(true);
		}
	
		func_297(iParam0, -1);
	
		if (bParam1 && !func_171(2))
			func_298(&Global_0, 1024);
	
		if (func_47() == -1)
		{
			func_299(&(Global_1347343.f_11), 536870912);
			func_300(2);
			Global_1357515 = -1;
		
			if (num == 1)
				func_301(false);
		
			if (num == 1 || num == 8)
				func_302(false);
		}
	
		if (func_47() == -1)
		{
			num2 = func_303(iParam0);
		
			if (num2 != -1)
			{
				num2 = func_304();
			
				switch (num2)
				{
					case 0:
						func_305(0);
						break;
				
					case 1:
						func_305(1);
						break;
				
					case 2:
						func_305(2);
						break;
				
					case 3:
						func_305(3);
						break;
				
					case 4:
						func_305(4);
						break;
				
					case 5:
						func_305(5);
						break;
				
					case 6:
						func_305(5);
						break;
				
					case 7:
						func_305(7);
						break;
				
					case 8:
						func_305(8);
						break;
				}
			}
			else if (num == 1)
			{
				switch (func_60(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_305(11);
						break;
				}
			}
			else if (num == 8)
			{
				switch (func_60(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_305(11);
						break;
				
					default:
						num2 = func_304();
					
						if (num2 != -1)
						{
							switch (num2)
							{
								case 0:
									func_306(0);
									break;
							
								case 1:
									func_306(1);
									break;
							
								case 2:
									func_306(2);
									break;
							
								case 3:
									func_306(3);
									break;
							
								case 4:
									func_306(4);
									break;
							
								case 5:
									func_306(5);
									break;
							
								case 6:
									func_306(5);
									break;
							
								case 7:
									func_306(7);
									break;
							
								case 8:
									func_306(8);
									break;
							
								default:
									break;
							}
						}
						break;
				}
			}
		}
	
		func_307(true);
	}
	else
	{
		func_297(iParam0, -1);
		func_218(iParam0, 4);
	}

	func_308(iParam0, false);
	return;
}

int func_225() // Position - 0x804B Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_226(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x8057 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_309(*iParam0);
	i = func_310(*iParam0);
	num2 = func_311(*iParam0);
	j = func_312(*iParam0);
	k = func_313(*iParam0);
	l = func_314(*iParam0);

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

	for (m = func_315(i, num); num2 > m; m = func_315(i, num))
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

	func_316(iParam0, l, k, j, num2, i, num);
	return;
}

int func_227(int iParam0) // Position - 0x81DF Hash - 0xC3346FD4 ^0xEFA0E7FA
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

void func_228(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x8234 Hash - 0xEF5C52D ^0xEF5C52D
{
	int i;
	int num;

	bParam1;

	if (func_317() == 0 && !bParam1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		num = Global_1310750.f_13321[i /*9*/];
	
		if (func_318(num) && !func_319(num, iParam2) && !bParam3 || !func_320(num) && !bParam4 || !func_321(num))
			if (num != iParam0)
				func_322(i);
	}

	return;
}

BOOL func_229(int iParam0, var uParam1) // Position - 0x82C2 Hash - 0xC7402B08 ^0xC7402B08
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

void func_230(var uParam0) // Position - 0x830F Hash - 0x585CE456 ^0xD1BA98E4
{
	int num;
	int num2;

	if (Global_1898077.f_1 == 2 || Global_1898077.f_1 == 5 || Global_1898077.f_1 == 3)
		return;

	num = 0;

	if (func_47() != -1)
		num = 1;

	num2 = func_323(Global_1894899.f_2);
	Global_1898077.f_1 = 3;
	Global_1898077.f_2 = 0;
	Global_1898077.f_7 = num;
	Global_1898077.f_8 = uParam0;
	Global_1898077.f_9 = num2;
	func_324(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	return;
}

BOOL func_231(var uParam0, int iParam1) // Position - 0x8397 Hash - 0xE46677C2 ^0xE46677C2
{
	return *uParam0 && iParam1 != false;
}

void func_232(int iParam0) // Position - 0x83A7 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_130(iParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		hash = func_325(iParam0);
	
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

void func_233(int iParam0) // Position - 0x840F Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_51(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_38(iParam0)))
		{
			func_110(iParam0, 67108864, true);
			func_94(iParam0, 19, true);
		}
	}

	return;
}

BOOL func_234(int iParam0) // Position - 0x8442 Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_51(iParam0))
		return false;

	if (!func_134(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

float func_235(int iParam0) // Position - 0x8476 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_130(iParam0))
		return 0f;

	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_236(int iParam0) // Position - 0x8497 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_38(iParam0);
	persChar = func_138(iParam0, false);
	func_326(iParam0, ped);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(ped))
		{
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
			flag = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
		}
	
		PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	
		if (flag)
			PED::_UNRESERVE_AMBIENT_PEDS(1);
	}

	PERSCHAR::_0xFCC6DB8DBE709BC8(persChar);
	return;
}

BOOL func_237(int iParam0) // Position - 0x84F1 Hash - 0x6410553A ^0x46627D03
{
	if (!func_130(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_238(int iParam0) // Position - 0x853D Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_130(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_239(int iParam0, int iParam1, BOOL bParam2) // Position - 0x8565 Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_130(iParam0))
		return;

	if (bParam2)
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 - Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_240(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x85CA Hash - 0x9AECF115 ^0xB93A91A1
{
	Ped mount;
	int num;
	PersChar persChar;

	if (!func_130(iParam0))
		return 0;

	mount = func_143(iParam0);

	if (func_29(mount, 0))
	{
		if (func_29(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_237(iParam0) || func_238(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_327(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				num = func_328(iParam0, true);
			
				if (num != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_329(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_330(iParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_330(iParam0, false));
					func_331(iParam0);
				}
			}
			else
			{
				if (func_95(iParam0, 32768, true))
				{
					persChar = func_330(iParam0, false);
					PERSCHAR::_0xB65E7F733956CF25(persChar);
					PERSCHAR::_0xFCC6DB8DBE709BC8(persChar);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&mount);
				}
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(mount, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_29(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_95(iParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
			
				func_329(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_330(iParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_330(iParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_329(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_332(iParam0, 0);
	return 1;
}

BOOL func_241(int iParam0) // Position - 0x877B Hash - 0x9886D3BE ^0x52D3282
{
	int num;
	int num2;

	num = func_131(iParam0);

	if (num == -1)
		return false;

	num2 = func_150(num);

	if (num2 == -1)
		return false;

	return Global_1392915.f_121[num /*20*/].f_19;
}

void func_242(int iParam0) // Position - 0x87B3 Hash - 0xF37CE386 ^0x23C715D1
{
	int num;

	if (func_47() != -1)
		return;

	if (!func_333(iParam0, &num))
		return;

	Global_1392915.f_121[num /*20*/].f_15 == 1;
	Global_1392915.f_121[num /*20*/].f_15 = 0;
	return;
}

void func_243(int iParam0) // Position - 0x87F2 Hash - 0x248129F7 ^0x248129F7
{
	int num;
	int num2;
	var unk;

	if (Global_1898329 <= 0)
		return;

	if (!func_63(iParam0))
		return;

	if (func_123(iParam0))
		func_246(iParam0, false, 2);

	num = func_125(iParam0);

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

void func_244(int iParam0, int iParam1) // Position - 0x88BC Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_334(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 || iParam1;
	return;
}

BOOL func_245(int iParam0) // Position - 0x88E8 Hash - 0x1FF88625 ^0xB6A92286
{
	return Global_1392915[iParam0 /*12*/].f_1 == -1;
}

void func_246(int iParam0, BOOL bParam1, int iParam2) // Position - 0x88FC Hash - 0x9DD22E7 ^0x9DD22E7
{
	int num;

	if (!func_63(iParam0))
	{
		!bParam1;
		return;
	}

	if (!func_133(iParam0) && !func_123(iParam0))
	{
		!bParam1;
		return;
	}

	func_284(iParam0) == 0;

	if (iParam2 == 2 && !func_133(iParam0))
		iParam2 = -1;

	if (func_215(iParam0) == 3 || func_215(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_284(iParam0)))
	{
		func_335(func_285(iParam0), func_284(iParam0), iParam2);
	
		if (!func_63(Global_1572864.f_8) && !func_11(0, true, false) && !func_336(Global_1935630, 32768))
		{
			num = func_303(iParam0);
		
			if (num != -1)
			{
				func_337(false);
			}
			else if (func_285(iParam0) == 8)
			{
				num = func_304();
			
				if (num != -1)
					func_337(false);
			}
		}
	}

	func_218(iParam0, 0);

	if (func_124(0) == iParam0)
	{
		func_295(true);
		func_296(false);
		func_307(1);
	}

	func_308(iParam0, true);
	func_338(iParam0);
	return;
}

BOOL func_247(int iParam0) // Position - 0x8A21 Hash - 0x19E59B76 ^0x19E59B76
{
	if (iParam0 < 0 || iParam0 > 32)
		return false;

	return true;
}

BOOL func_248(int iParam0) // Position - 0x8A40 Hash - 0xC62F3EC7 ^0x941BF203
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);

	return false;
}

void func_249(int iParam0, BOOL bParam1) // Position - 0x8A69 Hash - 0x2A73BCD4 ^0xFA31BBCB
{
	if (*iParam0 != -1)
	{
		func_339(*iParam0, -1);
		func_340(*iParam0, 0);
		func_341(*iParam0, 0);
	
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

void func_250(int iParam0) // Position - 0x8AC0 Hash - 0x59858C56 ^0xA28E61FC
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

void func_251(int iParam0) // Position - 0x8AFD Hash - 0xA48AF811 ^0xB2136D4B
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

float func_252(var uParam0) // Position - 0x8B46 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_30(uParam0))
		return uParam0->f_1;

	if (func_342(uParam0))
		return uParam0->f_2;

	return func_201() - uParam0->f_1;
}

int func_253(int iParam0) // Position - 0x8B7B Hash - 0xD45AC883 ^0xD45AC883
{
	if (!func_130(iParam0))
		return -1;

	if (iParam0 >= func_88(true))
		return -1;

	if (iParam0 >= 3 || iParam0 < 0)
		return -1;

	return Global_1359489[iParam0];
}

BOOL func_254(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8BBC Hash - 0xE0196EFD ^0xE0196EFD
{
	if (!func_130(iParam0))
		return false;

	if (func_95(iParam0, 32, true))
		return false;

	if (!func_95(iParam0, 2, true))
		return false;

	if (!func_95(iParam0, 4, true))
		return false;

	if (func_93(iParam0, 33, true))
		return false;

	if (func_134(iParam0))
		return false;

	if (func_343(iParam0))
		if (!bParam2)
			return false;

	if (!bParam1)
		if (Global_1357549.f_1497 == iParam0)
			return false;

	return true;
}

int func_255(int iParam0, var uParam1, var uParam2) // Position - 0x8C49 Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_344(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_256(int iParam0) // Position - 0x8C6B Hash - 0x2F38AE1B ^0x2F38AE1B
{
	if (iParam0 <= -1 || iParam0 > 54)
		return false;

	return true;
}

int func_257(Hash hParam0, int iParam1) // Position - 0x8C8A Hash - 0x6EE84C5C ^0x6EE84C5C
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

int func_258(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x8D69 Hash - 0x71EF3E96 ^0x557A7961
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

	if (num2 >= func_345())
		num2 = func_345();

	flag = func_346(num3, num4, iParam2);

	if (Global_1572887.f_12 == -1)
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_155(num5) == flag)
				return num5;
		
			if (func_155(num5) == false)
				return func_347(num3, num4, iParam2, i, hParam3);
		}
	
		num = 751;
		num2 = 770;
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_155(num5) == flag)
				return num5;
		
			if (func_155(num5) == false)
				return func_347(num3, num4, iParam2, i, hParam3);
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
				return func_347(num3, num4, iParam2, i, 0);
		}
	}

	return -1;
}

int func_259(int iParam0) // Position - 0x9024 Hash - 0x6A809E0B ^0xD5C1247E
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_2;

	return -1;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x9043 Hash - 0xA17D549C ^0xF58223CE
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

BOOL func_261() // Position - 0x91B6 Hash - 0x1C71B0F ^0x1C71B0F
{
	if (func_47() != -1)
		return false;

	return func_88(true) > 0;
}

void func_262(var uParam0, int iParam1) // Position - 0x91D1 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_263(int iParam0, int iParam1, int iParam2) // Position - 0x91E6 Hash - 0xD8381BE7 ^0xD8381BE7
{
	BOOL flag;
	int num;
	int num2;

	if (iParam1 == 24)
		iParam1 = 0;

	if (iParam1 < 0 || iParam1 >= 24)
		return false;

	if (iParam2 == 24)
		iParam2 = 0;

	if (iParam2 < 0 || iParam2 >= 24)
		return false;

	if (iParam1 == iParam2)
		return true;

	flag = iParam2 < iParam1;
	num = iParam1;
	num2 = iParam2;

	if (flag)
		num2 = 24;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	if (!flag)
		return false;

	num = 0;
	num2 = iParam2;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	return false;
}

void func_264(Ped pedParam0) // Position - 0x928F Hash - 0x68A3D5AB ^0x62583FE3
{
	if (func_348(pedParam0, false))
		return;

	ENTITY::SET_ENTITY_INVINCIBLE(pedParam0, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(pedParam0, 127, false);

	if (FIRE::IS_ENTITY_ON_FIRE(pedParam0))
	{
		FIRE::STOP_ENTITY_FIRE(pedParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(pedParam0, ENTITY::GET_ENTITY_MAX_HEALTH(pedParam0, false), 0);
	}

	return;
}

void func_265(int iParam0) // Position - 0x92DB Hash - 0xB1E2E498 ^0xC7EBD371
{
	Ped ped;

	if (!func_130(iParam0))
		return;

	if (func_328(iParam0, false) == 0)
		return;

	ped = func_143(iParam0);
	func_264(ped);
	func_239(iParam0, 8192, true);
	return;
}

void func_266(Ped pedParam0) // Position - 0x9316 Hash - 0xB38DCC50 ^0x941BF21E
{
	if (func_348(pedParam0, false))
		return;

	ENTITY::SET_ENTITY_INVINCIBLE(pedParam0, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(pedParam0, 0, false);
	return;
}

void func_267(int iParam0) // Position - 0x9343 Hash - 0x28CD0E89 ^0xB9FC8A12
{
	Ped ped;

	if (!func_130(iParam0))
		return;

	if (func_328(iParam0, false) == 0)
		return;

	ped = func_143(iParam0);
	func_266(ped);
	func_239(iParam0, 8192, false);
	return;
}

void func_268(Ped pedParam0) // Position - 0x937E Hash - 0x26D51EE5 ^0xA25A14D9
{
	if (func_348(pedParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(pedParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(pedParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(pedParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedParam0, false);
	return;
}

void func_269(Ped pedParam0) // Position - 0x93B4 Hash - 0x6EDA2DDB ^0x823A87C9
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (func_134(14))
		return;

	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
		return;

	if (!ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, Global_1357549.f_3[4], true, 0))
		return;

	PED::SET_RAGDOLL_BLOCKING_FLAGS(pedParam0, 909522);
	return;
}

void func_270(int iParam0) // Position - 0x9433 Hash - 0xB1E2E498 ^0x545B1681
{
	Ped ped;

	if (!func_130(iParam0))
		return;

	if (func_328(iParam0, false) == 0)
		return;

	ped = func_143(iParam0);
	func_268(ped);
	func_239(iParam0, 16384, true);
	return;
}

void func_271(Ped pedParam0) // Position - 0x946E Hash - 0x972BAF6E ^0xD19596A6
{
	if (func_348(pedParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(pedParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(pedParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(pedParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedParam0, true);
	return;
}

void func_272(int iParam0) // Position - 0x94A2 Hash - 0x28CD0E89 ^0x67E48CA5
{
	Ped ped;

	if (!func_130(iParam0))
		return;

	if (func_328(iParam0, false) == 0)
		return;

	ped = func_143(iParam0);
	func_271(ped);
	func_239(iParam0, 16384, false);
	return;
}

int func_273(int iParam0, var uParam1, var uParam2) // Position - 0x94DD Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_349(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

int func_274(int iParam0, int iParam1) // Position - 0x94FF Hash - 0x2641680 ^0x6B70222B
{
	int randomIntInRange;
	int num;
	int num2;

	switch (iParam0)
	{
		case 296923297:
			num2 = -268604689;
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		
			switch (randomIntInRange)
			{
				case 0:
					num = -268604689;
					break;
			
				case 1:
					num = -1632589543;
					break;
			
				case 2:
					num = -1862464078;
					break;
			}
			break;
	
		case 1237718549:
			num2 = -922193456;
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		
			switch (randomIntInRange)
			{
				case 0:
					num = -922193456;
					break;
			
				case 1:
					num = -2040275819;
					break;
			
				case 2:
					num = -1114682645;
					break;
			
				case 3:
					num = -1414977761;
					break;
			}
			break;
	}

	if (iParam1 != -1)
		if (func_101(iParam1, num))
			num2 = num;

	return num2;
}

int func_275(int iParam0) // Position - 0x95D6 Hash - 0xDEAE5330 ^0x7DE1135D
{
	switch (iParam0)
	{
		case -2040275819:
			return 464906090;
	
		case -1862464078:
			return 1895628185;
	
		case -1632589543:
			return 1052055818;
	
		case -1414977761:
			return 1059434053;
	
		case -1114682645:
			return 744097966;
	
		case -922193456:
			return joaat("META_OUTFIT_WARM_WEATHER");
	
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
	
		default:
		
	}

	return joaat("META_OUTFIT_DEFAULT");
}

void func_276(int iParam0, int iParam1) // Position - 0x964D Hash - 0x319C37AC ^0x8ABBFC1F
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = Global_40.f_4942[iParam0 /*60*/].f_5 - Global_40.f_4942[iParam0 /*60*/].f_5 && iParam1;
	return;
}

BOOL func_277(Hash hParam0) // Position - 0x967D Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_278(Hash hParam0) // Position - 0x9698 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

int func_279(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x96C0 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_350(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_351(398 + i, 1);
		
			if (func_352(hParam0, &unk, hash, false))
			{
				if (func_353(hParam0, &unk6, hash))
				{
					unk28 = { func_354(hParam0, unk, hash, false) };
					func_355(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_356(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_357(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_358(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

void func_280(Ped pedParam0, var uParam1, var uParam2) // Position - 0x9812 Hash - 0x236D39D4 ^0x39F583A
{
	BOOL flag;
	Hash entityModel;

	flag = true;
	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (*uParam1 == joaat("weapon_revolver_cattleman_mexican") || *uParam1 == joaat("weapon_revolver_cattleman_pig") || *uParam1 == joaat("weapon_revolver_doubleaction_exotic") || *uParam1 == joaat("weapon_revolver_schofield_calloway") || *uParam1 == joaat("weapon_revolver_schofield_golden") || *uParam1 == joaat("weapon_pistol_mauser_drunk") || *uParam1 == joaat("weapon_shotgun_doublebarrel_exotic") || *uParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*uParam2 = 0f;
		return;
	}

	switch (entityModel)
	{
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
	
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
	
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
	
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
	
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
	
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
	
		case joaat("g_m_m_uniinbred_01"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
	
		default:
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
		
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0) == joaat("rel_gang_dutchs"))
				flag = false;
			break;
	}

	if (flag)
		PED::SET_PED_CONFIG_FLAG(pedParam0, 361, true);

	return;
}

BOOL func_281(Hash hParam0) // Position - 0x9A29 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x9A3B Hash - 0xA17D549C ^0xA81F3F20
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

int func_283(int iParam0) // Position - 0x9BFC Hash - 0x6EC15CF9 ^0xE613EBE0
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

Hash func_284(int iParam0) // Position - 0x9C7D Hash - 0x2F57FA7D ^0x914B8AA9
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_5;

	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_285(int iParam0) // Position - 0x9CA8 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_63(iParam0))
		return 0;

	return func_359(func_155(iParam0));
}

int func_286(int iParam0) // Position - 0x9CC8 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_63(iParam0))
		return -1;

	return func_360(func_155(iParam0));
}

void func_287(BOOL bParam0, var uParam1, var uParam2, int iParam3) // Position - 0x9CE8 Hash - 0x4C217CF1 ^0x4C217CF1
{
	*iParam3 = func_359(bParam0);
	*uParam1 = func_156(bParam0);
	*uParam2 = func_360(bParam0);
	return;
}

void func_288(int iParam0, int iParam1) // Position - 0x9D0B Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_361(iParam0);
	else
		func_362(iParam0, iParam1);

	func_363();
	return;
}

BOOL func_289(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, var uParam6, int iParam7) // Position - 0x9D53 Hash - 0x33F6843D ^0x3ABB8760
{
	Vector3 vector;
	var groundZ;

	if (!func_205(iParam0))
		return false;

	if (!func_364(iParam0, iParam5, &vector))
		return false;

	*uParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, vector) };

	if (iParam7 == 1)
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + { 0.1f, 0f, 0f }, &groundZ, false))
			uParam6->f_2 = groundZ;

	return true;
}

void func_290(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9) // Position - 0x9DB0 Hash - 0xCF0C48FE ^0x615ED286
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, func_204());

	return;
}

BOOL func_291(int iParam0, Ped pedParam1) // Position - 0x9DDA Hash - 0xA9FB82C9 ^0xFB0AC409
{
	int i;
	var animDict;

	if (func_365(pedParam1))
		return false;

	if (func_366(pedParam1))
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
	
		if (func_367(pedParam1))
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
	
		return func_367(pedParam1);
	}
	else if (iParam0 == 0)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedParam1, 0))
			if (PED::IS_PED_USING_SCENARIO_HASH(pedParam1, joaat("MINIGAME_BLACKJACK_PLAYER")))
				return true;
	
		if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(pedParam1, -1))
			return true;
	
		return func_367(pedParam1);
	}

	return true;
}

void func_292(BOOL bParam0) // Position - 0x9FBC Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

void func_293(int iParam0) // Position - 0x9FCC Hash - 0x353ECB1E ^0x7492E51F
{
	const char* str;
	Hash hashKey;
	Vector3 vector;
	var unk3;
	var unk11;
	Any any;

	if (!func_368(iParam0))
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

void func_294(int iParam0) // Position - 0xA084 Hash - 0x84E45CF3 ^0x84E45CF3
{
	if (!func_63(iParam0))
		return;

	func_369(iParam0, func_259(iParam0) + 1);
	return;
}

void func_295(BOOL bParam0) // Position - 0xA0A7 Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_370(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_371(&Global_1935630, 4194304);
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

int func_296(BOOL bParam0) // Position - 0xA14A Hash - 0x595E3BEF ^0x853F0831
{
	if (!bParam0 && func_372(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

int func_297(int iParam0, int iParam1) // Position - 0xA177 Hash - 0xD0889B29 ^0xA908D477
{
	int num;

	num = func_373(iParam0);

	if (num >= 0)
		return num;

	if (Global_1898164.f_162 >= 32)
		return -1;

	num = Global_1898164.f_162;
	func_374(iParam0, num);
	Global_1898164.f_162 = Global_1898164.f_162 + 1;

	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
		return num;

	func_375(num, iParam1);
	return iParam1;
}

void func_298(Hash hParam0, int iParam1) // Position - 0xA1E4 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_299(var uParam0, int iParam1) // Position - 0xA1F7 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_300(int iParam0) // Position - 0xA20C Hash - 0xDD4F2B2E ^0x9E400283
{
	Global_1572864.f_3 = Global_1572864.f_3 - Global_1572864.f_3 && iParam0;
	return;
}

void func_301(BOOL bParam0) // Position - 0xA22A Hash - 0xB3088780 ^0xB3088780
{
	func_376(bParam0);
	func_377(bParam0);
	func_378(bParam0);
	func_379(bParam0);
	func_380(bParam0);
	func_381(bParam0);
	func_382(bParam0);
	func_383(bParam0);
	return;
}

void func_302(BOOL bParam0) // Position - 0xA262 Hash - 0x9114E741 ^0x8984E174
{
	if (func_47() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_23(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_23(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_384(1, bParam0, true);
	func_385();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

int func_303(int iParam0) // Position - 0xA2D0 Hash - 0xF4AFA201 ^0x156AC308
{
	int num;
	int num2;

	switch (func_285(iParam0))
	{
		case 1:
			num = func_60(iParam0);
			return func_386(num);
	
		case 8:
			num2 = func_60(iParam0);
		
			if (func_62(Global_1347702[num2 /*49*/].f_12, 1))
				return func_387(num2);
			break;
	}

	return -1;
}

int func_304() // Position - 0xA32B Hash - 0xF04428FF ^0xD9AF5F7C
{
	if (!func_160(Global_1835011[4 /*74*/].f_1, true))
		return 0;
	else if (!func_160(Global_1347702[66 /*49*/].f_15, true))
		return 1;
	else if (!func_160(Global_1347702[67 /*49*/].f_15, true))
		return 2;
	else if (!func_160(Global_1835011[38 /*74*/].f_1, true))
		return 3;
	else if (!func_160(Global_1347702[68 /*49*/].f_15, true))
		return 4;
	else if (!func_160(Global_1835011[59 /*74*/].f_1, true))
		return 5;
	else if (!func_160(Global_1835011[67 /*74*/].f_1, true))
		return 7;
	else
		return 8;

	return -1;
}

void func_305(int iParam0) // Position - 0xA3EE Hash - 0x72B3FC21 ^0x3909C54
{
	int num;

	num = 0;

	if (func_47() != -1)
		num = 1;

	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = num;
	func_388(Global_1898077.f_7, Global_1898077.f_3);
	return;
}

void func_306(int iParam0) // Position - 0xA432 Hash - 0x6D69048D ^0xDB432840
{
	int num;

	if (Global_1898077.f_1 == 2)
		return;

	num = 0;

	if (func_47() != -1)
		num = 1;

	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = num;
	func_389(Global_1898077.f_7, Global_1898077.f_4);
	return;
}

void func_307(BOOL bParam0) // Position - 0xA483 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898164 = Global_1898164 || bParam0;
	return;
}

void func_308(int iParam0, BOOL bParam1) // Position - 0xA496 Hash - 0x7075D2FF ^0xF0E29EF6
{
	if (func_47() != -1)
		return;

	if (func_124(0) != iParam0)
		return;

	if (func_390(iParam0))
		if (bParam1)
			func_391(-525676072);
		else
			func_392(-525676072);

	return;
}

int func_309(int iParam0) // Position - 0xA4D9 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_310(int iParam0) // Position - 0xA4FE Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_311(int iParam0) // Position - 0xA511 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_312(int iParam0) // Position - 0xA524 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_313(int iParam0) // Position - 0xA537 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_314(int iParam0) // Position - 0xA549 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_315(int iParam0, int iParam1) // Position - 0xA55B Hash - 0x893AC59E ^0x893AC59E
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

void func_316(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA5F5 Hash - 0xA65AB937 ^0xA65AB937
{
	func_394(iParam0, iParam6);
	func_395(iParam0, iParam5);
	func_396(iParam0, iParam4);
	func_397(iParam0, iParam3);
	func_398(iParam0, iParam2);
	func_399(iParam0, iParam1);
	return;
}

int func_317() // Position - 0xA62D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1310750.f_16037;
}

BOOL func_318(int iParam0) // Position - 0xA63C Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

BOOL func_319(int iParam0, int iParam1) // Position - 0xA652 Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_318(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

BOOL func_320(int iParam0) // Position - 0xA675 Hash - 0x23BA4BD8 ^0x6ABCB1DC
{
	if (!func_318(iParam0))
		return false;

	if (func_400(64) && func_401(iParam0))
		return true;

	return Global_1310750[iParam0 /*111*/].f_46;
}

BOOL func_321(int iParam0) // Position - 0xA6AD Hash - 0xE4DA9E55 ^0x745EA523
{
	if (!func_318(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_322(int iParam0) // Position - 0xA6CD Hash - 0xA37733A1 ^0x23C2C6AE
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_318(Global_1310750.f_13321[iParam0 /*9*/]))
		return;

	num = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[num /*111*/].f_48 = 0;
	func_402(iParam0);
	Global_1310750.f_16037 = Global_1310750.f_16037 - 1;
	return;
}

int func_323(int iParam0) // Position - 0xA736 Hash - 0x6761E6A0 ^0x6761E6A0
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

void func_324(var uParam0, var uParam1, var uParam2) // Position - 0xAB4B Hash - 0xD64E984D ^0x9D3A2521
{
	var unk;

	unk = uParam0;
	unk.f_1 = uParam1;
	unk.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &unk, 3, 3);
	return;
}

Hash func_325(int iParam0) // Position - 0xAB6C Hash - 0xBA965109 ^0xCB1D208B
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

void func_326(int iParam0, Ped pedParam1) // Position - 0xAD48 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_403(pedParam1);

	return;
}

float func_327(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0xAD62 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));

	return func_404(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));
}

Hash func_328(int iParam0, BOOL bParam1) // Position - 0xADB9 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_130(iParam0))
		return 0;

	if (Global_1360165[iParam0 /*1157*/].f_127 != 0)
		return Global_1360165[iParam0 /*1157*/].f_127;

	switch (iParam0)
	{
		case 0:
			return joaat("perschar_comp_horse_dutch");
	
		case 1:
			return joaat("perschar_comp_horse_john");
	
		case 2:
			return joaat("perschar_comp_horse_javier");
	
		case 3:
			return joaat("perschar_comp_horse_bill");
	
		case 4:
			return joaat("perschar_comp_horse_uncle");
	
		case 5:
			return joaat("perschar_comp_horse_hosea");
	
		case 6:
			return joaat("perschar_comp_horse_micah");
	
		case 7:
			return joaat("perschar_comp_horse_charles");
	
		case 8:
			return joaat("perschar_comp_horse_sean");
	
		case 9:
			return joaat("perschar_comp_horse_lenny");
	
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
	
		case 11:
			return joaat("perschar_comp_horse_sadie");
	
		case 12:
		case 14:
			return 0;
	
		case 20:
			return joaat("perschar_comp_horse_karen");
	
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
	
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
	
		default:
		
	}

	if (bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_127 = func_405(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_329(int iParam0) // Position - 0xAEFE Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Ped ped;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	ped = func_143(iParam0);

	if (!PED::IS_PED_CARRYING_SOMETHING(ped))
		return;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(ped, itemset);

	for (i = 0; i < ITEMSET::GET_ITEMSET_SIZE(itemset); i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entityFromItem))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entityFromItem, true, true);
		
			ENTITY::_DELETE_CARRIABLE(&entityFromItem);
		}
	}

	return;
}

PersChar func_330(int iParam0, BOOL bParam1) // Position - 0xAF74 Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_130(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[iParam0 /*1157*/].f_126 = func_406(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_331(int iParam0) // Position - 0xAFC0 Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_130(iParam0))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1357549.f_1675[i /*5*/].f_1 == iParam0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = -1;
			Global_1360165[iParam0 /*1157*/].f_127 = 0;
		}
	}

	return;
}

void func_332(int iParam0, int iParam1) // Position - 0xB013 Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_130(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

BOOL func_333(int iParam0, var uParam1) // Position - 0xB037 Hash - 0x51CBA313 ^0xAF93626D
{
	*uParam1 = -1;

	if (iParam0 == -1 || iParam0 >= 33)
		return false;

	*uParam1 = Global_1899528.f_11[iParam0];
	return *uParam1 != -1;
}

BOOL func_334(int iParam0) // Position - 0xB06B Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

void func_335(int iParam0, Hash hParam1, int iParam2) // Position - 0xB08A Hash - 0xF39224E1 ^0xD56E494F
{
	int data;

	data.f_1 = 0;
	data = 0;
	data.f_2 = 0;

	if (func_47() == false)
		data = Global_265073.f_73815.f_208.f_12;

	STATS::_STATSTRACKER_DEED_STATUS(iParam0, hParam1, iParam2, &data);
	return;
}

BOOL func_336(int iParam0, int iParam1) // Position - 0xB0C2 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_337(BOOL bParam0) // Position - 0xB0D1 Hash - 0x7B48571 ^0xD88AE50B
{
	int num;

	if (Global_1898077.f_1 == 0 && !bParam0)
		return;

	num = 0;

	if (func_47() != -1)
		num = 1;

	if (Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13 && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_407(num, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = num;
		Global_1898077.f_8 = func_408();
		Global_1898077.f_9 = func_323(Global_1894899.f_2);
		func_324(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}

	Global_1898077.f_2 = 0;
	return;
}

int func_338(int iParam0) // Position - 0xB18F Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_409(func_373(iParam0));
}

void func_339(int iParam0, int iParam1) // Position - 0xB1A1 Hash - 0x3A863EAC ^0xECB3FAF8
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_340(int iParam0, int iParam1) // Position - 0xB1CE Hash - 0x90093024 ^0xBB5CF78A
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_341(int iParam0, int iParam1) // Position - 0xB1FF Hash - 0x90093024 ^0x830112D0
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

BOOL func_342(var uParam0) // Position - 0xB230 Hash - 0x39705408 ^0x39705408
{
	return func_112(*uParam0, 2);
}

BOOL func_343(int iParam0) // Position - 0xB240 Hash - 0x29FCCE6A ^0xA230F605
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
		return true;

	return false;
}

int func_344(int iParam0, int iParam1) // Position - 0xB25D Hash - 0x99A93628 ^0x27AE8C83
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

int func_345() // Position - 0xC96C Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

BOOL func_346(int iParam0, int iParam1, int iParam2) // Position - 0xC987 Hash - 0x932A04D5 ^0x39A8988D
{
	return iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

int func_347(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0xC9AD Hash - 0x4E72835D ^0x57C5ACE0
{
	BOOL flag;
	int num;

	if (!func_410(iParam2))
		return -1;

	if (iParam0 < 0 || iParam0 > 511)
		return -1;

	if (iParam1 < 0 || iParam1 > 255)
		return -1;

	if (iParam3 < 0 || iParam3 > func_345())
		return -1;

	flag = func_346(iParam0, iParam1, iParam2);
	num = iParam3;
	func_288(num, 0);
	func_369(num, 0);
	func_411(num, 0);
	func_412(num, 0);
	func_413(num, flag);

	if (hParam4 != 0)
		func_414(num, hParam4);

	return num;
}

BOOL func_348(Ped pedParam0, BOOL bParam1) // Position - 0xCA4C Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

int func_349(int iParam0, int iParam1) // Position - 0xCA79 Hash - 0xB7443904 ^0xB7443904
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
	
		case -2040275819:
			return 46;
	
		case -1874208704:
			return 5;
	
		case -1862464078:
			return 44;
	
		case -1692022104:
			return 63;
	
		case -1684458716:
			return 31;
	
		case -1678882891:
			return 36;
	
		case -1668922931:
			return 20;
	
		case -1648322231:
			return 72;
	
		case -1642335258:
			return 66;
	
		case -1632589543:
			return 43;
	
		case -1587546924:
			return 54;
	
		case -1559986688:
			return 7;
	
		case -1532979576:
			return 65;
	
		case -1414977761:
			return 48;
	
		case -1394723994:
			return 59;
	
		case -1341683964:
			return 21;
	
		case -1335291723:
			return 60;
	
		case -1268239471:
			return 68;
	
		case -1256711921:
			return 35;
	
		case -1248623443:
			return 26;
	
		case -1205468859:
			return 76;
	
		case -1155031950:
			return 25;
	
		case -1114682645:
			return 47;
	
		case -1092189504:
			return 69;
	
		case -1065026089:
			return 73;
	
		case -973332710:
			return 32;
	
		case -946772361:
			return 62;
	
		case -922193456:
			return 39;
	
		case -695701225:
			return 3;
	
		case -571427255:
			return 57;
	
		case -481967001:
			return 28;
	
		case -445211559:
			return 61;
	
		case -433615745:
			return 18;
	
		case -426171916:
			return 80;
	
		case -310473775:
			return 42;
	
		case -301101630:
			return 24;
	
		case -268604689:
			return 37;
	
		case -193269670:
			return 30;
	
		case -23947011:
			return 50;
	
		case 0:
			return 0;
	
		case 6418928:
			return 71;
	
		case 80515440:
			return 70;
	
		case 178615350:
			return 1;
	
		case 283037683:
			return 13;
	
		case 296923297:
			return 45;
	
		case 350498312:
			return 27;
	
		case 404503428:
			return 4;
	
		case 431390894:
			return 23;
	
		case 513932985:
			return 29;
	
		case 707545953:
			return 64;
	
		case 713940276:
			return 11;
	
		case 777603945:
			return 19;
	
		case 837028314:
			return 58;
	
		case 867156718:
			return 79;
	
		case 876535472:
			return 75;
	
		case 876797088:
			return 53;
	
		case 928493661:
			return 22;
	
		case 961676983:
			return 55;
	
		case 977450639:
			return 9;
	
		case 1018353621:
			return 17;
	
		case 1046468203:
			return 16;
	
		case 1071744295:
			return 8;
	
		case 1199580439:
			return 41;
	
		case 1200878026:
			return 52;
	
		case 1205492208:
			return 40;
	
		case 1237718549:
			return 49;
	
		case 1254970547:
			return 78;
	
		case 1295334688:
			return 51;
	
		case 1300659195:
			return 56;
	
		case 1484386316:
			return 77;
	
		case 1495063555:
			return 15;
	
		case 1593315648:
			return 6;
	
		case 1658153743:
			return 33;
	
		case 1744281750:
			return 12;
	
		case 1818898449:
			return 38;
	
		case 1842975347:
			return 34;
	
		case 1901494236:
			return 10;
	
		case 1950972546:
			return 67;
	
		case 2062813606:
			return 74;
	
		case 2094043703:
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

struct<5> func_350(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCE0D Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_415(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_416(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_421(hParam0, -1823706425))
			{
				unk = { func_354(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_421(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_354(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_419(bParam1) };
		
			switch (func_420(hParam0))
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
				unk = { func_354(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_417(bParam1) };
		
			if (bParam2 && func_418(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_352(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_352(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_353(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_422(unk, &unk28, bParam1, false))
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

Hash func_351(int iParam0, int iParam1) // Position - 0xD0CA Hash - 0xE1D12727 ^0x71D656A6
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

BOOL func_352(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0xF214 Hash - 0x4285A587 ^0x4285A587
{
	return func_423(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_353(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xF22C Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_424(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_354(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xF24D Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_425(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_426(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_355(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0xF27E Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_427(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_422(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_356(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_426(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_356(BOOL bParam0) // Position - 0xF30E Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_47() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_426(bParam0));
}

int func_357(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xF32C Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return 1;

	if (!func_428(hParam0))
		return 0;

	if (!func_356(false))
		return 0;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return 1;
}

void func_358(Hash hParam0, int iParam1) // Position - 0xF367 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_429(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

int func_359(BOOL bParam0) // Position - 0xF3AF Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_360(BOOL bParam0) // Position - 0xF3BC Hash - 0xFA7B3D3 ^0x826FC8D8
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 15) & 16383;
}

int func_361(int iParam0) // Position - 0xF3D0 Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_283(iParam0);

	if (num < 0)
		return 0;

	return func_430(num);
}

int func_362(int iParam0, int iParam1) // Position - 0xF3F0 Hash - 0xF3EA5EAF ^0xA48F5774
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
			func_431(num2);
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

void func_363() // Position - 0xF560 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

BOOL func_364(int iParam0, int iParam1, var uParam2) // Position - 0xF583 Hash - 0x3B42F46B ^0x3B42F46B
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

BOOL func_365(Ped pedParam0) // Position - 0xF7D4 Hash - 0xE1D21FC5 ^0xFFD4767
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

BOOL func_366(Ped pedParam0) // Position - 0xF929 Hash - 0x9D91F255 ^0x5F24085C
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "PedSeatedForMinigame"))
		return DECORATOR::DECOR_GET_BOOL(pedParam0, "PedSeatedForMinigame");

	return false;
}

BOOL func_367(Ped pedParam0) // Position - 0xF967 Hash - 0x46E89286 ^0xB40AFB8A
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
	num = func_432(unk[2 /*3*/] - unk[1 /*3*/], unk[1 /*3*/] - unk[0 /*3*/]);

	if (num < -0.173648f && num > 0.173648f)
		return false;

	unk[0 /*3*/] = { PED::GET_PED_BONE_COORDS(pedParam0, 6884, 0f, 0f, 0f) };
	unk[1 /*3*/] = { PED::GET_PED_BONE_COORDS(pedParam0, 43312, 0f, 0f, 0f) };
	unk[2 /*3*/] = { PED::GET_PED_BONE_COORDS(pedParam0, 33646, 0f, 0f, 0f) };
	num = func_432(unk[2 /*3*/] - unk[1 /*3*/], unk[1 /*3*/] - unk[0 /*3*/]);

	if (num < -0.173648f && num > 0.173648f)
		return false;

	return true;
}

BOOL func_368(int iParam0) // Position - 0xFB05 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

void func_369(int iParam0, int iParam1) // Position - 0xFB1B Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_370(int iParam0, int iParam1) // Position - 0xFB3B Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_371(int iParam0, int iParam1) // Position - 0xFB50 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_372(int iParam0) // Position - 0xFB61 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_433(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

int func_373(int iParam0) // Position - 0xFBB0 Hash - 0xBA803397 ^0x906286B5
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

void func_374(int iParam0, int iParam1) // Position - 0xFBF8 Hash - 0xCE0BB2C4 ^0x23B010DC
{
	var unk;

	if (iParam0 == -1 || iParam0 == 0)
	{
		Global_1898164.f_1[iParam1 /*5*/] = { unk };
	}
	else
	{
		Global_1898164.f_1[iParam1 /*5*/] = iParam0;
		Global_1898164.f_1[iParam1 /*5*/].f_1 = func_155(iParam0);
		func_287(Global_1898164.f_1[iParam1 /*5*/].f_1, &(Global_1898164.f_1[iParam1 /*5*/].f_3), &(Global_1898164.f_1[iParam1 /*5*/].f_4), &(Global_1898164.f_1[iParam1 /*5*/].f_2));
	}

	return;
}

void func_375(int iParam0, int iParam1) // Position - 0xFC76 Hash - 0x6861752C ^0x6861752C
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_434(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_434(i, i + 1);
		}
	}

	if (func_63(Global_1898164.f_1[0 /*5*/]))
		func_218(Global_1898164.f_1[0 /*5*/], 3);

	return;
}

void func_376(BOOL bParam0) // Position - 0xFCEC Hash - 0xABC71D04 ^0x7FAB5AFE
{
	int i;

	for (i = 0; i < 153; i = i + 1)
	{
		if (Global_1914319.f_15936[i /*6*/].f_5)
			Global_1914319.f_15936[i /*6*/].f_5 = 0;
	
		func_249(&Global_1914319.f_15936[i /*6*/], bParam0);
	}

	return;
}

void func_377(BOOL bParam0) // Position - 0xFD36 Hash - 0x75A38704 ^0x669CA416
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		func_249(&Global_1934051.f_23[i], bParam0);
	}

	return;
}

void func_378(BOOL bParam0) // Position - 0xFD61 Hash - 0xEE9EF61F ^0x6F45D5CB
{
	int i;

	for (i = 0; i < 33; i = i + 1)
	{
		func_249(&Global_1899778.f_34[i], bParam0);
		Global_1899778[i] = 0;
	}

	return;
}

void func_379(BOOL bParam0) // Position - 0xFD95 Hash - 0x990D8E53 ^0x990D8E53
{
	func_249(&Global_1955864, bParam0);
	return;
}

void func_380(BOOL bParam0) // Position - 0xFDA7 Hash - 0x44C39101 ^0xB6988EF7
{
	func_249(&(Global_1415412.f_3), bParam0);
	return;
}

void func_381(BOOL bParam0) // Position - 0xFDBB Hash - 0x15F28904 ^0x5BE4C56F
{
	if (func_248(Global_1934051.f_33))
		func_435(Global_1934051.f_33, joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));

	func_249(&(Global_1934051.f_33), bParam0);
	return;
}

void func_382(BOOL bParam0) // Position - 0xFDEA Hash - 0xB1376D99 ^0x20D49D2D
{
	int i;
	Hash hash;

	for (i = 0; i < 11; i = i + 1)
	{
		hash = func_437(func_436(i));
	
		if (hash != 0)
			func_435(Global_1934051[i /*2*/], hash);
	
		if (Global_1934051[i /*2*/].f_1)
			Global_1934051[i /*2*/].f_1 = 0;
	
		func_249(&Global_1934051[i /*2*/], bParam0);
	}

	return;
}

void func_383(BOOL bParam0) // Position - 0xFE4B Hash - 0x2B0F2EE5 ^0xCD361E26
{
	int i;

	for (i = 0; i < Global_36308; i = i + 1)
	{
		func_339(i, -1);
		func_340(i, 0);
		func_341(i, 0);
	
		if (MAP::DOES_BLIP_EXIST(Global_36308[i]))
		{
			if (bParam0)
				MAP::SET_RADAR_ZOOM(Global_36308[i]);
		
			MAP::REMOVE_BLIP(&Global_36308[i]);
		}
	}

	return;
}

void func_384(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xFEA5 Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

void func_385() // Position - 0xFED5 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_438();
	func_439();
	func_440();
	return;
}

int func_386(int iParam0) // Position - 0xFEEC Hash - 0x899A1C9C ^0x899A1C9C
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

int func_387(int iParam0) // Position - 0x10200 Hash - 0xBC835308 ^0xBC835308
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

void func_388(var uParam0, var uParam1) // Position - 0x10308 Hash - 0x852438A3 ^0xED82E692
{
	var unk;

	unk = uParam0;
	unk.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &unk, 2, 2);
	return;
}

void func_389(var uParam0, var uParam1) // Position - 0x10323 Hash - 0x3F2FCA40 ^0x9574484A
{
	var unk;

	unk = uParam0;
	unk.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &unk, 2, 2);
	return;
}

BOOL func_390(int iParam0) // Position - 0x1033E Hash - 0x18F20B33 ^0x18F20B33
{
	if (!func_63(iParam0))
		return false;

	switch (func_285(iParam0))
	{
		case 1:
			switch (func_60(iParam0))
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
			switch (func_60(iParam0))
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

void func_391(int iParam0) // Position - 0x10417 Hash - 0xF69051DC ^0xF3C89D36
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_426(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_420(item) == iParam0)
			INVENTORY::_INVENTORY_ENABLE_ITEM(inventoryId, item);
	}

	func_442(func_441(iParam0), 6);
	return;
}

void func_392(int iParam0) // Position - 0x1046B Hash - 0xF11E3100 ^0x54576133
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_426(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_420(item) == iParam0)
			INVENTORY::_INVENTORY_DISABLE_ITEM(inventoryId, item, 0);
	}

	func_443(func_441(iParam0), 6);
	return;
}

var func_393(BOOL bParam0, var uParam1, var uParam2) // Position - 0x104C0 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_394(int iParam0, int iParam1) // Position - 0x104D7 Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*iParam0 = *iParam0 - *iParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*iParam0 = *iParam0 | -2147483648;
	}
	else
	{
		*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*iParam0 = *iParam0 - *iParam0 & -2147483648;
	}

	return;
}

void func_395(int iParam0, int iParam1) // Position - 0x1055D Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*iParam0 = *iParam0 - *iParam0 & 62914560;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_396(int iParam0, int iParam1) // Position - 0x10599 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_310(*iParam0);
	num2 = func_309(*iParam0);

	if (iParam1 < 1 || iParam1 > func_315(num, num2))
		return;

	*iParam0 = *iParam0 - *iParam0 & 4063232;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_397(int iParam0, int iParam1) // Position - 0x105EC Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*iParam0 = *iParam0 - *iParam0 & 126976;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_398(int iParam0, int iParam1) // Position - 0x10627 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 4032;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_399(int iParam0, int iParam1) // Position - 0x10660 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 63;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_400(int iParam0) // Position - 0x10698 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

BOOL func_401(int iParam0) // Position - 0x106AC Hash - 0x169E8D3F ^0x169E8D3F
{
	return func_319(iParam0, Global_1310750.f_16072 | 64);
}

void func_402(int iParam0) // Position - 0x106C4 Hash - 0x3D0B339A ^0xB87B2B3D
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

void func_403(Ped pedParam0) // Position - 0x10751 Hash - 0xE7050FE7 ^0x1D37CA9A
{
	int _int;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");

	if (PED::_IS_META_PED_OUTFIT_REQUEST_VALID(_int))
		PED::_RELEASE_META_PED_OUTFIT_REQUEST(_int);

	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

float func_404(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x107B9 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_405(int iParam0) // Position - 0x107D7 Hash - 0xEB890713 ^0xB40CD388
{
	int num;
	int i;

	num = 0;

	if (!func_130(iParam0))
	{
		for (i = 0; i < 3; i = i + 1)
		{
			if (Global_1357549.f_1675[i /*5*/].f_1 == iParam0)
			{
				Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
				return Global_1357549.f_1675[i /*5*/];
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1357549.f_1675[i /*5*/] != 0 && Global_1357549.f_1675[i /*5*/].f_1 == -1)
		{
			num = Global_1357549.f_1675[i /*5*/];
			break;
		}
	}

	if (!func_130(iParam0))
	{
		if (num != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return num;
}

PersChar func_406(int iParam0) // Position - 0x108B8 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_130(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		persCharHash = func_328(iParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[iParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[iParam0 /*60*/].f_7);
	
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}

	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_407(int iParam0, var uParam1) // Position - 0x10954 Hash - 0x86BC6E12 ^0x31271D44
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &num, 2, 2);
	return;
}

int func_408() // Position - 0x1096F Hash - 0xD5B66211 ^0x9B76C225
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

int func_409(int iParam0) // Position - 0x109D4 Hash - 0xD83A1109 ^0x154A194E
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
	func_375(iParam0, Global_1898164.f_162);
	return 1;
}

BOOL func_410(int iParam0) // Position - 0x10A43 Hash - 0x2BF73E21 ^0x2BF73E21
{
	return iParam0 > 0 && iParam0 < 13;
}

void func_411(int iParam0, int iParam1) // Position - 0x10A59 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

void func_412(int iParam0, int iParam1) // Position - 0x10A79 Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = iParam1;
	return;
}

void func_413(int iParam0, BOOL bParam1) // Position - 0x10A99 Hash - 0x5CF9514E ^0x8B449709
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = bParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/] = bParam1;
	return;
}

void func_414(int iParam0, Hash hParam1) // Position - 0x10AC4 Hash - 0x634DE727 ^0xC7F71E9D
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = hParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/].f_1 = hParam1;
	return;
}

struct<4> func_415(BOOL bParam0) // Position - 0x10AF3 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_354(joaat("character"), func_444(), joaat("SLOTID_NONE"), bParam0);
}

int func_416(Hash hParam0) // Position - 0x10B0F Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_425(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_417(BOOL bParam0) // Position - 0x10B3A Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_426(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_354(923904168, func_415(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_354(923904168, func_415(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_354(923904168, func_415(bParam0), -740156546, false);
}

BOOL func_418(Hash hParam0, BOOL bParam1) // Position - 0x10BCF Hash - 0x62864AB ^0xBC339691
{
	if (func_420(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_445(24);
		else
			return true;

	return false;
}

struct<4> func_419(BOOL bParam0) // Position - 0x10C08 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_426(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_354(271701509, func_415(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_354(271701509, func_415(bParam0), 12999093, false);
}

Hash func_420(Hash hParam0) // Position - 0x10C6C Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_425(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_421(Hash hParam0, Hash hParam1) // Position - 0x10C97 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_420(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_422(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x10CF6 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_426(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

int func_423(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x10D26 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_425(hParam0, 0))
		return 0;

	guid = { func_354(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_426(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_424(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x10D6E Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_426(false);
	*panParam1 = { func_354(hParam0, func_417(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_425(Hash hParam0, int iParam1) // Position - 0x10DB3 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_426(BOOL bParam0) // Position - 0x10DCD Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_47() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_427(Hash hParam0) // Position - 0x10E0E Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_428(Hash hParam0) // Position - 0x10E24 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_429(int iParam0, int iParam1) // Position - 0x10E32 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

int func_430(int iParam0) // Position - 0x10E48 Hash - 0x78E19743 ^0x6ACC64F5
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

int func_431(int iParam0) // Position - 0x10EFC Hash - 0x6DD34799 ^0x352A62D8
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

float func_432(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x10F9D Hash - 0x596BEA29 ^0x5FBCDBE5
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

int func_433(int iParam0, int iParam1) // Position - 0x10FBE Hash - 0x8FA0E29 ^0xC3F68E87
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

void func_434(int iParam0, int iParam1) // Position - 0x120D7 Hash - 0x676FADFF ^0x1734896
{
	var unk;

	unk = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { unk };
	return;
}

void func_435(int iParam0, Hash hParam1) // Position - 0x12117 Hash - 0x24A4BE93 ^0x70B16AB7
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], hParam1);

	return;
}

int func_436(int iParam0) // Position - 0x1214D Hash - 0xB26DA715 ^0xB26DA715
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

Hash func_437(int iParam0) // Position - 0x121D5 Hash - 0xB8EC44B7 ^0xFC24309D
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

float func_438() // Position - 0x122BD Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_446())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_447(2);

	if (Global_1347477.f_119)
		return func_447(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_448();
	num3 = func_449();
	num4 = func_450();
	num5 = func_451();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_452());
	num8 = func_447(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_453(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_454(3, num9, num9 > 100f);
	return func_455(num8, -100f, 100f);
}

float func_439() // Position - 0x123E6 Hash - 0x951B1CCC ^0x7B312694
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

	if (func_446())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_447(1);

	if (Global_1347477.f_119)
		return func_447(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_448();
	num3 = func_449();
	num4 = func_450();
	num5 = func_451();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_452());
	num8 = func_447(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_453(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_454(2, num9, num9 > 100f);
	return func_455(num8, -100f, 100f);
}

float func_440() // Position - 0x1250F Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_446())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_447(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_456())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_457())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_447(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_448();
	num3 = func_449();
	num4 = func_450();
	num5 = func_451();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_452());
	num8 = func_447(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_453(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_454(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_447(0);

	return func_455(num8, -100f, 100f);
}

int func_441(int iParam0) // Position - 0x126B6 Hash - 0x497B15BA ^0x497B15BA
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

void func_442(int iParam0, int iParam1) // Position - 0x12706 Hash - 0x2FE2A1EE ^0xFDF1F02E
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 - Global_1946054.f_2657.f_26.f_6 && iParam0;
	return;
}

void func_443(int iParam0, int iParam1) // Position - 0x12733 Hash - 0xB0EA57B9 ^0x395CD962
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 || iParam0;
	return;
}

struct<4> func_444() // Position - 0x12754 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_445(int iParam0) // Position - 0x12760 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_458(iParam0))
		return false;

	return func_459(iParam0);
}

BOOL func_446() // Position - 0x1277C Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_447(int iParam0) // Position - 0x12798 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_448() // Position - 0x127AA Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_460(13);
	num2 = func_461(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_449() // Position - 0x127ED Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_450() // Position - 0x12808 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_462())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_451() // Position - 0x12827 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_452() // Position - 0x12869 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_453(int iParam0, int iParam1, BOOL bParam2) // Position - 0x12877 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_463(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_454(int iParam0, float fParam1, BOOL bParam2) // Position - 0x128C3 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_463(iParam0, 2, false, false);
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

float func_455(float fParam0, float fParam1, float fParam2) // Position - 0x12A09 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_456() // Position - 0x12A30 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_460(12) <= -99f;
}

BOOL func_457() // Position - 0x12A44 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_460(12) >= 99f;
}

BOOL func_458(int iParam0) // Position - 0x12A58 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_459(int iParam0) // Position - 0x12A6B Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

float func_460(int iParam0) // Position - 0x12A95 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_461(float fParam0) // Position - 0x12AA9 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

BOOL func_462() // Position - 0x12AC4 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

char* func_463(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x12AD5 Hash - 0xC24B5846 ^0x84938471
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

var func_464(BOOL bParam0, var uParam1, var uParam2) // Position - 0x12B7E Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

