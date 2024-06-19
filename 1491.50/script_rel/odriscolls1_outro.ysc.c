#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	BOOL bLocal_3 = 0;
	Interior inLocal_4 = 0;
	BOOL bLocal_5 = 0;
	BOOL bLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	AnimScene ansLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
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

void main() // Position - 0x0 Hash - 0x39971149 ^0x16C2A07E
{
	uLocal_7 = { -1318.1484f, 2436.259f, 309.3206f };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1(&uLocal_15);

	func_2(&uLocal_15, &uScriptParam_0);

	while (!func_3(&uLocal_15))
	{
		func_4(&uLocal_15);
	
		switch (func_5(uLocal_15))
		{
			case 0:
				if (func_6(&uLocal_15))
					func_7(&uLocal_15, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_15))
					func_7(&uLocal_15, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_15))
					func_7(&uLocal_15, 3);
				break;
		
			case 3:
				func_1(&uLocal_15);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_15);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0xBE Hash - 0x5C967931 ^0xE89D747F
{
	eStackSize i;
	eStackSize stackSize;
	Ped ped;

	func_10();
	func_11(uParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		stackSize = i;
	
		if (func_12(stackSize) && func_13(stackSize))
		{
			ped = Global_1360165[i /*1157*/];
		
			if (ENTITY::DOES_ENTITY_EXIST(ped))
				if (func_14(stackSize))
					func_15(stackSize, false, 0, true, -1082130432, true, true, false, false, false, false);
		}
	}

	if (func_16(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
		func_17(uParam0, 4);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_2(var uParam0, var uParam1) // Position - 0x156 Hash - 0x11824BFA ^0x305C042C
{
	uParam0->f_1 = uParam1->f_1;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		func_18(uParam0, 1);
	}

	if (uParam1->f_3)
		func_18(uParam0, 2);

	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

BOOL func_3(var uParam0) // Position - 0x1A3 Hash - 0xE6F09C07 ^0x349208FC
{
	if (func_20(Global_1935630, 16384))
		return true;

	if (!func_16(uParam0, 8))
		if (func_20(Global_1935630, 32768))
			return true;

	return false;
}

void func_4(var uParam0) // Position - 0x1DD Hash - 0xCC0866FC ^0x1CE74C37
{
	if (!func_16(uParam0, 4))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			MISC::SET_BIT(&(Global_1955830.f_1), 5);
			func_18(uParam0, 4);
		}
	}
	else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false) || CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
		func_17(uParam0, 4);
	}

	return;
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x260 Hash - 0xBE425958 ^0xBE425958
{
	return uParam0;
}

BOOL func_6(var uParam0) // Position - 0x26A Hash - 0xE84E0753 ^0x7717603D
{
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_10, true, false))
		return false;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_2, true, false))
		return false;

	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_2, "Intro");
	return ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_2, "Intro");
}

void func_7(var uParam0, int iParam1) // Position - 0x2A9 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_8(var uParam0) // Position - 0x2B6 Hash - 0xE70F011 ^0xCE61FB0
{
	if (!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
		return false;

	return func_21(uParam0);
}

BOOL func_9(var uParam0) // Position - 0x2EE Hash - 0xEDB66132 ^0xEDB66132
{
	BOOL num;

	num = 1;

	if (!func_22())
		num = 0;

	if (!func_23(uParam0))
		num = 0;

	return num;
}

void func_10() // Position - 0x313 Hash - 0xF2ADC204 ^0xF23F9A2E
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_12(i) && func_14(i))
			func_24(i, 56, true);
	}

	func_25(&(Global_1359489.f_40), true);
	return;
}

int func_11(var uParam0) // Position - 0x356 Hash - 0xEE5C1386 ^0xDB28D0BF
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2);

	func_26(&Global_1935630, 1048576);

	if (INTERIOR::IS_VALID_INTERIOR(inLocal_4) && bLocal_5)
		INTERIOR::UNPIN_INTERIOR(inLocal_4);

	func_27(false);
	return 1;
}

BOOL func_12(eStackSize essParam0) // Position - 0x399 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

BOOL func_13(eStackSize essParam0) // Position - 0x3B8 Hash - 0xDA629583 ^0xDA629583
{
	return func_28(essParam0, 16, true);
}

BOOL func_14(eStackSize essParam0) // Position - 0x3C9 Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_12(essParam0))
		return false;

	if (!func_13(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x3FD Hash - 0xA4706F79 ^0xAF27D1D3
{
	BOOL flag;
	PersChar persChar;
	BOOL flag2;

	if (!func_12(essParam0))
		return;

	if (func_13(essParam0))
		if (Global_1360165[essParam0 /*1157*/].f_129 != 0 && Global_1360165[essParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
			return;

	if (bParam10)
	{
		func_24(essParam0, 56, true);
		func_25(&(Global_1359489.f_40), true);
	}

	func_29(essParam0, false);
	func_30(essParam0, 4, false);
	func_31(essParam0);
	func_32(essParam0);
	func_33(essParam0, 37, true);
	flag = func_34(Global_1360165[essParam0 /*1157*/], 0);
	persChar = func_35(essParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, false);

	if (func_36(essParam0, 64, true))
		func_33(essParam0, 64, true);

	if (bParam3)
	{
		func_33(essParam0, 33, true);
		func_33(essParam0, 34, true);
		func_37(essParam0, 1056964608, -1, 1061158912);
		func_38(essParam0, true, true, false);
	
		if (bParam6)
			func_24(essParam0, 30, true);
	
		if (bParam7)
		{
			func_24(essParam0, 35, true);
		
			if (bParam8)
				func_24(essParam0, 62, true);
		}
	
		if (flag)
		{
			func_39(essParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[essParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_33(essParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
	
		func_24(essParam0, 33, true);
		func_38(essParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[essParam0 /*1157*/].f_133 = iParam4;
			func_25(&(Global_1360165[essParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_40(&(Global_1360165[essParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_24(essParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
			func_41(essParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], false);

	if (func_36(essParam0, 45, true))
		func_33(essParam0, 45, true);

	func_42(essParam0, 16, true);
	func_33(essParam0, 44, true);
	Global_1360165[essParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[essParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_34(func_43(essParam0), 0))
			func_44(0, essParam0, bParam3, 0, bParam2);

	return;
}

BOOL func_16(var uParam0, int iParam1) // Position - 0x6B2 Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x6C3 Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x6DB Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

void func_19(var uParam0) // Position - 0x6EE Hash - 0x4A5CE17B ^0x4559C073
{
	func_45(&Global_1935630, 1048576);
	ansLocal_10 = ANIMSCENE::_CREATE_ANIM_SCENE("script@titles@title_gen_fewdayslater_onblack", 2, 0, false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_10);
	uParam0->f_2 = ANIMSCENE::_CREATE_ANIM_SCENE("script@timelapse@wnt4camp_intro", 2, "Intro", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2);
	return;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x72C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_21(var uParam0) // Position - 0x73B Hash - 0xC4506078 ^0x8E9FF98F
{
	if (!func_46(&uLocal_11))
	{
		func_25(&uLocal_11, false);
		AUDIO::_START_AUDIO_SCENESET("FADE_TO_BLACK", "DEATH_FAIL_RESPAWN_SCENES");
		func_27(true);
	}
	else if (func_47(&uLocal_11) >= 1f)
	{
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false, true);
		CAM::DO_SCREEN_FADE_IN(0);
		ENTITY::SET_ENTITY_COORDS(Global_35, uLocal_7, false, false, true, true);
		ANIMSCENE::START_ANIM_SCENE(ansLocal_10);
		MISC::SET_BIT(&(Global_1955830.f_1), 5);
		AUDIO::_STOP_AUDIO_SCENESET("DEATH_FAIL_RESPAWN_SCENES");
		AUDIO::_START_AUDIO_SCENESET("Pass_Time", "Chapter_Screen_Scenes");
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
		STREAMING::PREFETCH_SRL("script@story@WNT4@PRE_INT");
		STREAMING::_0xEF1A8A484118735E();
		return 1;
	}

	return 0;
}

BOOL func_22() // Position - 0x7D9 Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_23(var uParam0) // Position - 0x7E6 Hash - 0x1AF91689 ^0x4680E53D
{
	HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, true);
	inLocal_4 = INTERIOR::GET_INTERIOR_AT_COORDS(uLocal_7);

	if (INTERIOR::IS_VALID_INTERIOR(inLocal_4))
	{
		if (!bLocal_5)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(inLocal_4);
			bLocal_5 = true;
		}
	}

	if (!bLocal_3)
	{
		func_48(3, false, false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_FRONTEND_PAUSE"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
	
		if (!bLocal_6 && func_49(true, 0, false))
		{
			bLocal_6 = true;
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-470125497, true);
		}
	
		if (STREAMING::IS_SRL_LOADED())
		{
		}
	
		if (func_50(Global_1835011[3 /*74*/].f_1) && func_52(func_51(Global_1835011[3 /*74*/].f_1), 4) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(ansLocal_10) >= ANIMSCENE::_GET_ANIM_SCENE_DURATION(ansLocal_10) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(ansLocal_10) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(ansLocal_10, false) && bLocal_6 && STREAMING::IS_SRL_LOADED())
		{
			HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
			ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_10);
			AUDIO::_STOP_AUDIO_SCENESET("Chapter_Screen_Scenes");
			MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2, "ARTHUR", Global_35, 0);
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_2);
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_2, "Intro", true);
			bLocal_3 = true;
			STREAMING::BEGIN_SRL();
			STREAMING::SET_SRL_TIME(0f);
		}
	}
	else
	{
		switch (iLocal_14)
		{
			case 0:
				if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false) && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_2, "Shot1", true))
				{
					MISC::SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0, false);
					CLOCK::SET_CLOCK_TIME(9, 0, 0);
					GRAPHICS::SET_TIMECYCLE_MODIFIER("winter4_introCMEmod");
					iLocal_14 = iLocal_14 + 1;
				}
				break;
		
			case 1:
				if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false) && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_2, "SHOT2", true))
				{
					MISC::SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0, false);
					CLOCK::SET_CLOCK_TIME(9, 0, 0);
					GRAPHICS::SET_TIMECYCLE_MODIFIER("winter4_introCMEmod");
					iLocal_14 = iLocal_14 + 1;
				}
				break;
		
			case 2:
				if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false) && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_2, "SHOT3", true))
				{
					MISC::_SET_WEATHER_VARIATION("snowclearing", "snowclearing_mud1");
					MISC::SET_WEATHER_TYPE(joaat("snowclearing"), true, true, false, 0, false);
					CLOCK::SET_CLOCK_TIME(7, 0, 0);
					GRAPHICS::SET_TIMECYCLE_MODIFIER("winter4_introCMEmod");
					iLocal_14 = iLocal_14 + 1;
				}
				break;
		}
	
		STREAMING::SET_SRL_TIME(ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_2) * 1000f);
	
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_2) >= ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_2) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_2) || ANIMSCENE::_0x73616E64696C132E(uParam0->f_2, true))
		{
			if (func_20(Global_1935630, 1048576))
			{
				func_26(&Global_1935630, 1048576);
				STREAMING::END_SRL();
			}
		
			if (func_53())
				return true;
		}
	}

	return false;
}

void func_24(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xA90 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_54(essParam0))
			return;

	func_55(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_25(var uParam0, BOOL bParam1) // Position - 0xACA Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_46(uParam0))
		func_56(uParam0);

	return;
}

void func_26(int iParam0, int iParam1) // Position - 0xAEA Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_27(BOOL bParam0) // Position - 0xAFF Hash - 0x11CDFD80 ^0xE82F4D9
{
	int i;
	Ped ped;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_12(i))
		{
			ped = func_57(i);
		
			if (ENTITY::DOES_ENTITY_EXIST(ped))
				AUDIO::STOP_PED_SPEAKING(ped, bParam0);
		}
	}

	return;
}

BOOL func_28(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB3C Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_54(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

void func_29(eStackSize essParam0, BOOL bParam1) // Position - 0xB66 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_54(essParam0))
		return;

	if (bParam1)
		if (func_58(&(Global_1360165[essParam0 /*1157*/].f_12), 1))
			func_30(essParam0, 1, false);

	func_30(essParam0, 16, bParam1);
	return;
}

void func_30(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xBA8 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_54(essParam0))
		return;

	func_59(&(Global_1360165[essParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_31(eStackSize essParam0) // Position - 0xBD0 Hash - 0x7895582D ^0x7895582D
{
	func_30(essParam0, 8, false);
	return;
}

void func_32(eStackSize essParam0) // Position - 0xBE1 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_24(essParam0, 36, true);
	return;
}

void func_33(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xBF2 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_54(essParam0))
			return;

	func_55(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_34(Ped pedParam0, int iParam1) // Position - 0xC2C Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_60(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_60(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_60(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_60(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_60(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_60(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_60(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_60(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_35(eStackSize essParam0, BOOL bParam1) // Position - 0xD2B Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_61(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

BOOL func_36(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xD6A Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_54(essParam0))
			return false;

	func_55(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_37(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0xDA5 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(essParam0))
	{
		ped = func_57(essParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_62(essParam0);
		}
	}

	if (func_36(essParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_57(essParam0), 137, true);

	return;
}

void func_38(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xDF7 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_54(essParam0))
		return;

	if (bParam1)
	{
		func_33(essParam0, 50, true);
		func_33(essParam0, 48, true);
		func_33(essParam0, 49, true);
		func_33(essParam0, 51, true);
		func_33(essParam0, 52, true);
		func_33(essParam0, 54, true);
		func_33(essParam0, 55, true);
	}
	else
	{
		func_24(essParam0, 50, true);
		func_24(essParam0, 48, true);
		func_24(essParam0, 49, true);
		func_24(essParam0, 51, true);
	
		if (bParam3)
			func_24(essParam0, 54, true);
		else
			func_33(essParam0, 54, true);
	
		if (!bParam2)
		{
			func_24(essParam0, 52, true);
		
			if (bParam3)
				func_24(essParam0, 55, true);
		}
		else
		{
			func_33(essParam0, 52, true);
		
			if (!bParam3)
				func_33(essParam0, 55, true);
		}
	}

	return;
}

void func_39(eStackSize essParam0, BOOL bParam1) // Position - 0xEC9 Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_54(essParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_57(essParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_57(essParam0), 204, false);

	return;
}

void func_40(var uParam0) // Position - 0xF00 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_41(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xF16 Hash - 0x6E8FD624 ^0x6E8FD624
{
	PersChar char;
	Ped ped;

	if (!func_12(essParam0))
		return;

	if (func_13(essParam0))
	{
		if (!func_14(essParam0))
			return;
	
		if (!bParam1)
			return;
	}

	if (func_36(essParam0, 32, true))
		if (!bParam2)
			return;

	char = func_35(essParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_57(essParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_63(essParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_24(essParam0, 2, true);
	}
	else
	{
		func_64(essParam0);
		func_24(essParam0, 1, true);
	}

	return;
}

void func_42(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1024 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

Player func_43(eStackSize essParam0) // Position - 0x1060 Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/].f_70))
		Global_1360165[essParam0 /*1157*/].f_70 = 0;

	return Global_1360165[essParam0 /*1157*/].f_70;
}

void func_44(int iParam0, eStackSize essParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x10A0 Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_54(essParam1))
		return;

	player = func_43(essParam1);

	if (func_65(essParam1))
		if (!func_66(essParam1))
			return;

	func_33(essParam1, 39, true);
	func_67(essParam1, 64, false);
	Global_1360165[essParam1 /*1157*/].f_70.f_11 = 0;
	func_67(essParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_67(essParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_24(essParam1, 43, true);
		}
	
		if (bParam4)
			func_68(essParam1, false, true, true, true);
	}

	return;
}

void func_45(int iParam0, int iParam1) // Position - 0x1142 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_46(var uParam0) // Position - 0x1153 Hash - 0x5001E582 ^0x5001E582
{
	return func_69(*uParam0, 1);
}

float func_47(var uParam0) // Position - 0x1163 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_46(uParam0))
		return uParam0->f_1;

	if (func_70(uParam0))
		return uParam0->f_2;

	return func_71() - uParam0->f_1;
}

int func_48(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1198 Hash - 0x495686EB ^0x978C707D
{
	int num;

	if (!func_72(essParam0))
		return 1;

	if (func_73(32768))
		return 1;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[essParam0 /*74*/].f_16, false))
		return 1;

	num = func_51(func_74(essParam0));

	if (Global_1835011[essParam0 /*74*/].f_71)
		return 1;

	if (!func_50(func_74(essParam0)))
		func_75(essParam0, false, false, -1);

	if (func_76(num))
	{
		if (!Global_1835011[essParam0 /*74*/].f_71)
		{
			if (bParam1)
				func_77(num, 256);
		
			if (bParam2)
				func_77(num, 512);
		
			Global_1835011[essParam0 /*74*/].f_71 = 1;
			return 1;
		}
	}

	return 0;
}

BOOL func_49(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x124E Hash - 0xC759219C ^0xC759219C
{
	BOOL num;
	eStackSize i;

	num = 1;

	for (i = 0; i < 27; i = i + 1)
	{
		if (!func_78(i, bParam0, iParam1, bParam2))
			num = 0;
	}

	return num;
}

BOOL func_50(int iParam0) // Position - 0x1281 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_79(iParam0);
	}

	if (num == 1)
		return true;

	if (num == 2)
		return true;

	return false;
}

int func_51(int iParam0) // Position - 0x12EC Hash - 0x6B3238EF ^0x6B3238EF
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

BOOL func_52(int iParam0, int iParam1) // Position - 0x132D Hash - 0x7572A314 ^0x4B13FBB8
{
	return func_76(iParam0) && Global_1898346[iParam0 /*6*/].f_1 && iParam1 != false;
}

BOOL func_53() // Position - 0x134F Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

BOOL func_54(eStackSize essParam0) // Position - 0x136B Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

int func_55(int iParam0, var uParam1, var uParam2) // Position - 0x1377 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_56(var uParam0) // Position - 0x1394 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_80(uParam0, 0f);
	return;
}

Ped func_57(eStackSize essParam0) // Position - 0x13A3 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_54(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

BOOL func_58(int iParam0, int iParam1) // Position - 0x13DD Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_59(int iParam0, int iParam1, BOOL bParam2) // Position - 0x13ED Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_60(int iParam0, int iParam1) // Position - 0x1413 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_61(eStackSize essParam0) // Position - 0x1422 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_54(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_81(essParam0);
	
		if (hash != 0)
		{
			Global_1360165[essParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(hash);
			PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_1);
		}
		else
		{
			Global_1360165[essParam0 /*1157*/].f_1 = 0;
		}
	}

	return;
}

void func_62(eStackSize essParam0) // Position - 0x148A Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(essParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_57(essParam0)))
		{
			func_82(essParam0, 67108864, true);
			func_33(essParam0, 19, true);
		}
	}

	return;
}

float func_63(eStackSize essParam0) // Position - 0x14BD Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_54(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_64(eStackSize essParam0) // Position - 0x14DE Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_57(essParam0);
	persChar = func_35(essParam0, false);
	func_83(essParam0, ped);

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

BOOL func_65(eStackSize essParam0) // Position - 0x1538 Hash - 0x6410553A ^0x46627D03
{
	if (!func_54(essParam0))
		return false;

	if (Global_1360165[essParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[essParam0 /*1157*/].f_70.f_11 == Global_1360165[essParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_66(eStackSize essParam0) // Position - 0x1584 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_54(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_67(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x15AC Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_54(essParam0))
		return;

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 - Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_68(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1611 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	Hash hash;
	PersChar persChar;

	if (!func_54(essParam0))
		return 0;

	mount = func_43(essParam0);

	if (func_34(mount, 0))
	{
		if (func_34(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_65(essParam0) || func_66(essParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_84(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				hash = func_85(essParam0, true);
			
				if (hash != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_86(essParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_87(essParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_87(essParam0, false));
					func_88(essParam0);
				}
			}
			else
			{
				if (func_28(essParam0, 32768, true))
				{
					persChar = func_87(essParam0, false);
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
		if (func_34(Global_1360165[essParam0 /*1157*/].f_124, 0))
		{
			if (func_28(essParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
			
				func_86(essParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_87(essParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_87(essParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				func_86(essParam0);
				PED::DELETE_PED(&(Global_1360165[essParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;
	func_89(essParam0, 0);
	return 1;
}

BOOL func_69(int iParam0, int iParam1) // Position - 0x17C2 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_70(var uParam0) // Position - 0x17D1 Hash - 0x39705408 ^0x39705408
{
	return func_69(*uParam0, 2);
}

float func_71() // Position - 0x17E1 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_72(eStackSize essParam0) // Position - 0x1813 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return essParam0 > -1 && essParam0 <= 80;
}

BOOL func_73(int iParam0) // Position - 0x1829 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

int func_74(eStackSize essParam0) // Position - 0x183C Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_72(essParam0))
		return 0;

	return Global_1835011[essParam0 /*74*/].f_1;
}

int func_75(eStackSize essParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x185C Hash - 0xCD2F5C8B ^0xD79ECC6F
{
	int num;

	if (!func_90(essParam0))
		return 0;

	if (func_91(Global_1347702[59 /*49*/].f_15, true) && !func_91(Global_1347702[61 /*49*/].f_15, true) && Global_40.f_9052.f_21 & 2 == 0)
		return 0;

	if (func_92(PLAYER::PLAYER_ID(), true, false))
	{
		if (!MAP::DOES_BLIP_EXIST(Global_1835011[essParam0 /*74*/].f_27) && !func_93(essParam0) && !Global_43891)
		{
			func_95(essParam0, BUILTIN::VDIST2(func_94(essParam0), Global_36), -1, true, true);
			func_96(&Global_1835011[essParam0 /*74*/], 2);
		}
	
		return 0;
	}

	if (bParam2)
	{
		if (!func_98(func_97(essParam0), func_74(essParam0), 0, Global_1835011[essParam0 /*74*/].f_21, iParam3))
			return 0;
	
		if (func_99(true) > 1)
		{
			if (Global_1835011[essParam0 /*74*/].f_73 <= 0)
				Global_1835011[essParam0 /*74*/].f_73 = MISC::GET_GAME_TIMER();
		
			if (MISC::GET_GAME_TIMER() - Global_1835011[essParam0 /*74*/].f_73 < 60000)
			{
				if (func_100(essParam0, false, true))
					return 0;
			
				if (essParam0 == 15 && Global_1357549.f_1494 & 32768 != 0 && func_102(Global_35, func_101(essParam0), 50f, true, true))
				{
					if (!GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[essParam0 /*74*/].f_72))
					{
						Global_1835011[essParam0 /*74*/].f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(Global_1835011[essParam0 /*74*/].f_72, func_101(essParam0), 5f);
					}
				
					if (CAM::IS_SCREEN_FADED_IN() && GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1835011[essParam0 /*74*/].f_72) || CAM::IS_SPHERE_VISIBLE(func_101(essParam0), 2.5f))
						return 0;
				}
			}
		}
	}

	num = func_103(Global_1835011[essParam0 /*74*/].f_1);

	if (!func_76(num))
	{
		return 0;
	}
	else if (Global_1835011[essParam0 /*74*/].f_73 != 0)
	{
		Global_1835011[essParam0 /*74*/].f_73 = 0;
		func_104(essParam0);
	
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[essParam0 /*74*/].f_72))
			GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[essParam0 /*74*/].f_72);
	}

	if (bParam1)
		func_105(Global_1835011[essParam0 /*74*/].f_1);
	else if (!Global_1879534)
		func_106(4);

	return 1;
}

BOOL func_76(int iParam0) // Position - 0x1AA2 Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

void func_77(int iParam0, int iParam1) // Position - 0x1AC1 Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_76(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 || iParam1;
	return;
}

BOOL func_78(eStackSize essParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x1AED Hash - 0xCE0148F8 ^0x79CFF653
{
	PersChar persChar;

	if (func_107(essParam0, true, false))
	{
		if (func_108(essParam0))
		{
			persChar = func_35(essParam0, false);
		
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(persChar))
					return false;
			
				if (bParam3 && !PED::IS_PED_READY_TO_RENDER(func_57(essParam0)))
					return false;
			
				if (bParam1 || !func_109(func_57(essParam0), 1116471296, -1082130432, -1082130432, -1082130432) || CAM::IS_SCREEN_FADED_OUT())
				{
					PERSCHAR::_0xD4B614179BCD0654(persChar);
					func_110(essParam0, false);
				
					if (iParam2 && func_111(Global_1360165[essParam0 /*1157*/].f_63))
						func_24(essParam0, 65, false);
				}
				else
				{
					return false;
				}
			}
		}
	}

	return true;
}

int func_79(int iParam0) // Position - 0x1BAD Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_112(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_80(var uParam0, float fParam1) // Position - 0x1BEE Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_71() - fParam1;
	func_113(uParam0, 1);
	func_114(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

Hash func_81(int iParam0) // Position - 0x1C14 Hash - 0xBA965109 ^0xCB1D208B
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

void func_82(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1DF0 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

void func_83(eStackSize essParam0, Ped pedParam1) // Position - 0x1E21 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_115(pedParam1);

	return;
}

float func_84(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x1E3B Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_116(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_85(eStackSize essParam0, BOOL bParam1) // Position - 0x1E92 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_54(essParam0))
		return 0;

	if (Global_1360165[essParam0 /*1157*/].f_127 != 0)
		return Global_1360165[essParam0 /*1157*/].f_127;

	switch (essParam0)
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
		Global_1360165[essParam0 /*1157*/].f_127 = func_117(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_86(eStackSize essParam0) // Position - 0x1FD7 Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_43(essParam0);

	if (!PED::IS_PED_CARRYING_SOMETHING(player))
		return;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(player, itemset);

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

PersChar func_87(eStackSize essParam0, BOOL bParam1) // Position - 0x204D Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_54(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[essParam0 /*1157*/].f_126 = func_118(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_88(eStackSize essParam0) // Position - 0x2099 Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_54(essParam0))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1357549.f_1675[i /*5*/].f_1 == essParam0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = -1;
			Global_1360165[essParam0 /*1157*/].f_127 = 0;
		}
	}

	return;
}

void func_89(eStackSize essParam0, int iParam1) // Position - 0x20EC Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_54(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

BOOL func_90(eStackSize essParam0) // Position - 0x2110 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(essParam0 > -1 && essParam0 <= 80))
		return false;

	return func_119(Global_1835011[essParam0 /*74*/].f_1);
}

BOOL func_91(int iParam0, BOOL bParam1) // Position - 0x213C Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_120(iParam0))
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

BOOL func_92(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x216D Hash - 0xCB9E150E ^0xCB9E150E
{
	if (func_121(plParam0, bParam1, bParam2, true))
		return true;

	return false;
}

BOOL func_93(Hash hParam0) // Position - 0x2188 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_122(hParam0);
}

Vector3 func_94(eStackSize essParam0) // Position - 0x2196 Hash - 0x6099830A ^0xA6B953C5
{
	switch (essParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
	
		default:
		
	}

	return Global_1835011[essParam0 /*74*/].f_18;
}

int func_95(eStackSize essParam0, float fParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x21CA Hash - 0xFE346E5F ^0x940BCCCD
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	eStackSize stackSize;
	BOOL flag5;
	BOOL flag6;
	var unk;

	if (func_73(32768))
		return 0;

	flag = func_123();

	if (bParam4 && func_124(&(Global_1835011[essParam0 /*74*/].f_29), 512) && !func_124(&(Global_1835011[essParam0 /*74*/].f_29), 1024))
		if (func_125())
			return 0;

	if (Global_1835011[essParam0 /*74*/].f_71)
		return 0;

	if (!func_126(essParam0))
		return 0;

	if (flag == -1)
		if (essParam0 == 19)
			if (func_91(Global_1835011[20 /*74*/].f_1, true) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1 && MISC::GET_GAME_TIMER() - func_127() <= 2000)
				return 0;
		else if (essParam0 == 20)
			if (func_91(Global_1835011[19 /*74*/].f_1, true) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1 && MISC::GET_GAME_TIMER() - func_127() <= 2000)
				return 0;
		else if (essParam0 == 14)
			if (!func_91(Global_1347702[62 /*49*/].f_15, true))
				return 0;

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[essParam0 /*74*/].f_27))
	{
		flag4 = Global_1835011[essParam0 /*74*/].f_70;
	
		if (func_128(essParam0, flag) && !flag4)
		{
			if (bParam3 || func_129(&Global_1835011[essParam0 /*74*/], 2))
			{
				if (func_130(essParam0))
				{
					Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_131(essParam0));
					flag3 = true;
				}
				else
				{
					Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_132(essParam0));
				}
			}
			else if (func_130(essParam0))
			{
				Global_1835011[essParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_AREA(joaat("BLIP_STYLE_MISSION"), func_131(essParam0), func_133(essParam0), func_134(essParam0));
				flag3 = true;
			}
			else
			{
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_RADIUS(joaat("BLIP_STYLE_MISSION"), func_135(essParam0), func_136(essParam0));
			}
		}
		else if (flag4)
		{
			if (!func_130(essParam0))
			{
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_94(essParam0));
			}
			else
			{
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_131(essParam0));
				flag3 = true;
			}
		}
		else if (func_93(essParam0))
		{
			if (essParam0 == 7)
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_RCM"), func_132(essParam0));
			else
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_132(essParam0));
		}
		else
		{
			Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_132(essParam0));
		}
	
		Global_1835011[essParam0 /*74*/].f_28 = joaat("BLIP_STYLE_MISSION");
		flag2 = true;
	
		if (iParam2 != -1)
			if (flag3 || func_130(essParam0))
				func_77(iParam2, 4194304);
			else
				func_137(iParam2, 4194304);
	
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[essParam0 /*74*/].f_27, 63, essParam0);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[essParam0 /*74*/].f_27))
		return 0;

	if (flag2)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[essParam0 /*74*/].f_27, Global_1835011[essParam0 /*74*/].f_26, true);
	
		if (flag != -1)
			MAP::_SET_BLIP_NAME(Global_1835011[essParam0 /*74*/].f_27, &(Global_1835011[essParam0 /*74*/].f_39));
	
		if (!func_124(&(Global_1835011[essParam0 /*74*/].f_29), 1024) && !func_93(essParam0))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[essParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_URGENT_ALERT"));
			func_138(&(Global_1835011[essParam0 /*74*/].f_29), 1024);
		}
	}

	if (flag != -1)
		return 1;

	if (!func_93(essParam0))
		MAP::BLIP_ADD_MODIFIER(Global_1835011[essParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));

	if (bParam3 || func_129(&Global_1835011[essParam0 /*74*/], 2))
		MAP::BLIP_ADD_MODIFIER(Global_1835011[essParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
	else
		MAP::BLIP_REMOVE_MODIFIER(Global_1835011[essParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));

	stackSize = func_139(Global_40.f_4283);

	if (func_140(stackSize) && func_141(Global_1888801[stackSize /*35*/].f_13))
	{
		flag5 = true;
		flag6 = func_142(stackSize);
	}

	if (func_143(essParam0, flag5, stackSize))
		func_144(Global_1835011[essParam0 /*74*/].f_1, flag6, flag5, stackSize);

	if (essParam0 == 7 && !func_145(579))
		func_146(579, Global_1835011[essParam0 /*74*/].f_27, false);

	if (essParam0 == 2)
		return 1;

	if (func_124(&(Global_1835011[essParam0 /*74*/].f_29), 4096) && !func_124(&(Global_1835011[essParam0 /*74*/].f_29), 8192) && (float)func_127() >= 10f && !Global_1935630.f_12 && !Global_16 && !func_147(Global_35, joaat("prop_player_sleep_tent_a_frame")) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED")) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("world_player_sleep_bedroll")))
	{
		if (!func_128(essParam0, flag) || fParam1 >= func_148(essParam0) * func_148(essParam0) && !Global_1835011[essParam0 /*74*/].f_70)
		{
			TEXT_LABEL_COPY(&unk, { Global_1835011[essParam0 /*74*/].f_8 }, 2);
			TEXT_LABEL_APPEND_STRING(&unk, "_FIRST", 16);
			func_149(&unk, 10000, 0, 0, 0, true);
			func_138(&(Global_1835011[essParam0 /*74*/].f_29), 8192);
		}
	}

	return 1;
}

void func_96(int iParam0, int iParam1) // Position - 0x274C Hash - 0x53A96DDB ^0x308B6379
{
	iParam0->f_63 = iParam0->f_63 || iParam1;
	return;
}

int func_97(eStackSize essParam0) // Position - 0x275F Hash - 0xE4DA9E55 ^0x3BF2293
{
	if (!func_72(essParam0))
		return 0;

	return Global_1835011[essParam0 /*74*/].f_30;
}

BOOL func_98(int iParam0, int iParam1, int iParam2, eStackSize essParam3, eStackSize essParam4) // Position - 0x277F Hash - 0x2F357F29 ^0x2F357F29
{
	eStackSize i;

	if (func_123() != -1)
		return true;

	if (iParam2 == 0 && func_150(0, true, true))
		return false;

	if (Global_1879534)
		return false;

	if (func_151(iParam0, iParam1))
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_152(i, &iParam0))
		{
			Global_40.f_4942[i /*60*/].f_59 = iParam1;
		
			if (essParam3 == essParam4)
				func_82(i, 512, true);
			else
				func_42(i, 512, true);
		}
	}

	return true;
}

int func_99(BOOL bParam0) // Position - 0x280F Hash - 0x88929B6 ^0x3BF87E4F
{
	int num;
	eStackSize stackSize;
	eStackSize stackSize2;
	eStackSize i;

	for (i = 0; i < Global_1879534.f_7300; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/])
				{
					case 987244216:
						stackSize = Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/].f_2;
					
						if (func_153(Global_1347702[stackSize /*49*/].f_12, 1))
							num = num + 1;
						break;
				}
			}
		}
	}

	for (i = 0; i < Global_1879534.f_7300; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (!bParam0)
						{
							num = num + 1;
						}
						else
						{
							stackSize2 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/].f_2;
						
							if (func_72(stackSize2) && !func_122(stackSize2))
								num = num + 1;
						}
						break;
				}
			}
		}
	}

	return num;
}

BOOL func_100(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2967 Hash - 0x1C7132A3 ^0x3158884D
{
	int num;
	eStackSize i;
	Ped ped;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	num = func_97(essParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_152(i, &num))
		{
			ped = func_57(func_154(essParam0));
		
			if (ENTITY::IS_ENTITY_DEAD(ped))
			{
			}
			else
			{
				if (bParam1 && func_36(i, 67, true))
					return true;
			
				if (bParam2 && func_36(i, 47, true))
					return true;
			
				if (!PED::_IS_PED_VISIBILITY_TRACKED(ped))
					PED::REQUEST_PED_VISIBILITY_TRACKING(ped);
			
				if (PED::IS_TRACKED_PED_VISIBLE(ped))
					return true;
			}
		}
	}

	return false;
}

Vector3 func_101(eStackSize essParam0) // Position - 0x2A04 Hash - 0x3E6E91A9 ^0x3E6E91A9
{
	return func_132(essParam0);
}

BOOL func_102(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2A12 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_116(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

int func_103(int iParam0) // Position - 0x2A6D Hash - 0x8157C348 ^0x8157C348
{
	int i;
	int num;
	int num2;
	var unk;

	if (Global_1898329 == 15)
		return -1;

	if (!func_119(iParam0))
		return -1;

	if (func_123() != -1)
	{
		num2 = func_51(iParam0);
	
		if (num2 >= 0)
		{
			func_155(iParam0, true);
			return num2;
		}
		else
		{
			num = Global_1898329;
			Global_1898330[num] = iParam0;
			Global_1898346[num /*6*/] = { unk };
			func_156(num, true);
			func_155(iParam0, true);
			Global_1898329 = Global_1898329 + 1;
		
			if (Global_1898329 > 15)
				Global_1898329 = 15;
		
			return num;
		}
	}
	else
	{
		num2 = func_51(iParam0);
	
		if (num2 >= 0)
		{
			func_155(iParam0, true);
			return num2;
		}
		else
		{
			for (i = 0; i < Global_1898330; i = i + 1)
			{
				if (!func_157(Global_1898330[i]))
				{
					Global_1898330[i] = iParam0;
					Global_1898346[i /*6*/] = { unk };
					func_156(i, true);
					func_155(iParam0, true);
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

void func_104(eStackSize essParam0) // Position - 0x2B89 Hash - 0x2310F0AA ^0x2CE4B7A2
{
	int num;
	eStackSize i;
	Ped ped;

	num = func_97(essParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_152(i, &num))
		{
			ped = func_57(func_154(essParam0));
		
			if (ENTITY::IS_ENTITY_DEAD(ped))
			{
			}
			else if (PED::_IS_PED_VISIBILITY_TRACKED(ped))
			{
				PED::RELEASE_PED_VISIBILITY_TRACKING(ped);
			}
		}
	}

	return;
}

void func_105(int iParam0) // Position - 0x2BDE Hash - 0x646928F0 ^0x646928F0
{
	func_158(iParam0);
	return;
}

void func_106(BOOL bParam0) // Position - 0x2BEC Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898164 = Global_1898164 || bParam0;
	return;
}

BOOL func_107(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2BFF Hash - 0xE0196EFD ^0xE0196EFD
{
	if (!func_54(essParam0))
		return false;

	if (func_28(essParam0, 32, true))
		return false;

	if (!func_28(essParam0, 2, true))
		return false;

	if (!func_28(essParam0, 4, true))
		return false;

	if (func_36(essParam0, 33, true))
		return false;

	if (func_13(essParam0))
		return false;

	if (func_159(essParam0))
		if (!bParam2)
			return false;

	if (!bParam1)
		if (Global_1357549.f_1497 == essParam0)
			return false;

	return true;
}

BOOL func_108(eStackSize essParam0) // Position - 0x2C8C Hash - 0xFEA2A378 ^0xFEA2A378
{
	if (func_12(essParam0))
		if (func_34(Global_1360165[essParam0 /*1157*/], 0))
			return true;

	return false;
}

BOOL func_109(Ped pedParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x2CB3 Hash - 0x3E30B0B5 ^0x3E30B0B5
{
	int num;

	if (iParam3 > 0f)
		num = iParam3;
	else
		num = func_160(pedParam0, Global_36, true);

	if (iParam2 > 0f)
		if (num < iParam2)
			return true;

	if (num < iParam1)
		if (PED::_IS_PED_VISIBILITY_TRACKED(pedParam0))
			if (iParam4 > 0f)
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(pedParam0, iParam4))
					return true;
			else if (PED::IS_TRACKED_PED_VISIBLE(pedParam0))
				return true;
		else if (!ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
				return true;

	return false;
}

void func_110(eStackSize essParam0, BOOL bParam1) // Position - 0x2D3C Hash - 0xEE7E9DBB ^0x37FB2562
{
	Any any;

	if (PERSCHAR::_0xA8120EBEAF290C7A(func_35(essParam0, false)))
	{
		any = PERSCHAR::_0x69786495C92A3044(func_35(essParam0, false));
	
		if (any != Global_1360165[essParam0 /*1157*/].f_47 || bParam1)
		{
			Global_1360165[essParam0 /*1157*/].f_47 = any;
			TEXT_LABEL_ASSIGN_STRING(&(Global_1360165[essParam0 /*1157*/].f_48), PERSCHAR::_0x9C7F95946E304778(func_35(essParam0, false), Global_1360165[essParam0 /*1157*/].f_47), 64);
			Global_1360165[essParam0 /*1157*/].f_56 = 1;
		}
	}

	return;
}

int func_111(int iParam0) // Position - 0x2DB4 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_112(int iParam0) // Position - 0x2DE1 Hash - 0x6EC15CF9 ^0xE613EBE0
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

void func_113(var uParam0, int iParam1) // Position - 0x2E62 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_114(var uParam0, int iParam1) // Position - 0x2E73 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_115(Ped pedParam0) // Position - 0x2E88 Hash - 0xE7050FE7 ^0x1343A93F
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

float func_116(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x2EF0 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

Hash func_117(eStackSize essParam0) // Position - 0x2F0E Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_54(essParam0))
	{
		for (i = 0; i < 3; i = i + 1)
		{
			if (Global_1357549.f_1675[i /*5*/].f_1 == essParam0)
			{
				Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
				return Global_1357549.f_1675[i /*5*/];
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1357549.f_1675[i /*5*/] != 0 && Global_1357549.f_1675[i /*5*/].f_1 == -1)
		{
			hash = Global_1357549.f_1675[i /*5*/];
			break;
		}
	}

	if (!func_54(essParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = essParam0;
			Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_118(eStackSize essParam0) // Position - 0x2FEF Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_54(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_85(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

BOOL func_119(int iParam0) // Position - 0x308B Hash - 0x93C8DA75 ^0x93C8DA75
{
	return func_120(iParam0) == 0;
}

int func_120(int iParam0) // Position - 0x309B Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_157(iParam0))
		return -1;

	return func_79(iParam0);
}

BOOL func_121(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x30B7 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_161(bParam1, bParam2, bParam3);

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

BOOL func_122(eStackSize essParam0) // Position - 0x31EC Hash - 0xE48228D0 ^0xE48228D0
{
	switch (essParam0)
	{
		case 7:
		case 36:
			return 1;
	}

	return 0;
}

BOOL func_123() // Position - 0x3210 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_124(var uParam0, int iParam1) // Position - 0x321E Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return 1;

	return 0;
}

BOOL func_125() // Position - 0x323E Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_126(int iParam0) // Position - 0x325E Hash - 0x2CA81420 ^0xF4BC7BB7
{
	if (func_123() == false)
		return true;

	switch (iParam0)
	{
		case 18:
			return func_91(Global_1347702[21 /*49*/].f_15, true);
	
		case 44:
			return func_91(Global_1347702[83 /*49*/].f_15, true);
	}

	return true;
}

int func_127() // Position - 0x32B1 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1898438;
}

BOOL func_128(eStackSize essParam0, BOOL bParam1) // Position - 0x32BD Hash - 0x97F0E2FC ^0x97F0E2FC
{
	if (bParam1 != -1)
		return false;

	if (func_130(essParam0))
	{
		switch (essParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}

	switch (essParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}

	return false;
}

BOOL func_129(int iParam0, int iParam1) // Position - 0x3381 Hash - 0x718DD1EF ^0x863E326
{
	return iParam0->f_63 && iParam1 != false;
}

BOOL func_130(eStackSize essParam0) // Position - 0x3392 Hash - 0x67D822A ^0x67D822A
{
	switch (essParam0)
	{
		case 14:
		case 34:
			return !func_162(&Global_1835011[essParam0 /*74*/]);
	}

	return false;
}

Vector3 func_131(eStackSize essParam0) // Position - 0x33C2 Hash - 0x695A7658 ^0x6D3D4EDB
{
	switch (essParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
	
		case 34:
			return 2544.9822f, -1187.3444f, 52.3104f;
	}

	return Global_1835011[essParam0 /*74*/].f_18;
}

Vector3 func_132(eStackSize essParam0) // Position - 0x3414 Hash - 0xACD6F870 ^0xDE230469
{
	if (func_130(essParam0))
		return func_131(essParam0);

	return Global_1835011[essParam0 /*74*/].f_18;
}

Vector3 func_133(int iParam0) // Position - 0x343A Hash - 0x92A36B48 ^0x92A36B48
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
	
		default:
		
	}

	return 5f, 5f, 5f;
}

int func_134(int iParam0) // Position - 0x3461 Hash - 0xA5C2BBC7 ^0xA5C2BBC7
{
	switch (iParam0)
	{
		case 14:
			return 19;
	
		default:
		
	}

	return 0;
}

Vector3 func_135(int iParam0) // Position - 0x347D Hash - 0xE4F42658 ^0xFC03374
{
	switch (iParam0)
	{
		case 8:
			return 891.27f, 1279.39f, 234.14f;
	
		case 12:
			return -1541.14f, -305.74f, Global_1835011[iParam0 /*74*/].f_18.f_2;
	
		case 27:
			return 2604.7424f, -1212.2946f, 52.3389f;
	
		case 29:
			return 2715.245f, -1356.5518f, Global_1835011[iParam0 /*74*/].f_18.f_2;
	
		case 39:
			return 4432.49f, -3404.77f, Global_1835011[iParam0 /*74*/].f_18.f_2;
	
		case 41:
			return 1332.6323f, -7248.313f, 55.5522f;
	}

	return Global_1835011[iParam0 /*74*/].f_18;
}

float func_136(eStackSize essParam0) // Position - 0x3550 Hash - 0x944FFAA0 ^0x944FFAA0
{
	switch (essParam0)
	{
		case 8:
			return 54f;
	
		case 12:
			return 45f;
	
		case 27:
			return 35f;
	
		case 41:
			return 50f;
	
		case 54:
			return 17.5f;
	
		default:
		
	}

	return 25f;
}

void func_137(int iParam0, int iParam1) // Position - 0x35AB Hash - 0xD320CA35 ^0x5C62EB93
{
	if (!func_76(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 - Global_1898346[iParam0 /*6*/].f_1 && iParam1;
	return;
}

void func_138(var uParam0, int iParam1) // Position - 0x35E2 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

eStackSize func_139(eStackSize essParam0) // Position - 0x35F3 Hash - 0x84838E68 ^0x84838E68
{
	switch (essParam0)
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

	essParam0 != -1;
	return -1;
}

BOOL func_140(eStackSize essParam0) // Position - 0x3676 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

BOOL func_141(Hash hParam0) // Position - 0x368C Hash - 0xC62F3EC7 ^0x941BF203
{
	if (hParam0 >= 0 && hParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[hParam0]);

	return false;
}

BOOL func_142(eStackSize essParam0) // Position - 0x36B5 Hash - 0x89548BD6 ^0x617C5136
{
	if (!func_163(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return true;
	
		if (func_164(essParam0))
			if (BUILTIN::VDIST(Global_36, func_165(essParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[essParam0 /*35*/].f_15))
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_165(essParam0), false) <= func_166();
	
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[essParam0 /*35*/].f_15, false) <= func_166();
	}

	return func_167();
}

BOOL func_143(Hash hParam0, BOOL bParam1, eStackSize essParam2) // Position - 0x3745 Hash - 0x561CE123 ^0xB84B7B4C
{
	if (hParam0 == 18)
		return false;

	if (hParam0 == 71)
		return false;

	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[hParam0 /*74*/].f_27) && Global_1835011[hParam0 /*74*/].f_21 == essParam2)
		return true;

	return false;
}

void func_144(int iParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x3792 Hash - 0x436A2EB9 ^0x436A2EB9
{
	Hash hash;
	Hash hash2;
	Hash styleHash;

	if (!func_157(iParam0))
		return;

	switch (func_168(iParam0))
	{
		case 1:
			hash = func_169(iParam0);
		
			if (func_170(hash, bParam1, bParam2, essParam3) && Global_1357549.f_1709 > 1)
				if (func_128(hash, -1) && !Global_1835011[hash /*74*/].f_70 && Global_1835011[hash /*74*/].f_63 & 2 == 0)
					styleHash = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				else
					styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
			else if (func_128(hash, -1) && !Global_1835011[hash /*74*/].f_70 && Global_1835011[hash /*74*/].f_63 & 2 == 0)
				styleHash = joaat("BLIP_STYLE_MISSION_RADIUS");
			else
				styleHash = joaat("BLIP_STYLE_MISSION");
		
			if (Global_1835011[hash /*74*/].f_28 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1835011[hash /*74*/].f_27, styleHash);
			
				if (!func_93(hash))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[hash /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
			
				if (func_129(&Global_1835011[hash /*74*/], 2))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[hash /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
			
				Global_1835011[hash /*74*/].f_28 = styleHash;
			}
			break;
	
		case 8:
			hash2 = func_169(iParam0);
		
			if (func_171(hash2, bParam1, bParam2, essParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_172(hash2))
				{
					case joaat("BLIP_STYLE_RCM_BOUNTY"):
						styleHash = joaat("BLIP_STYLE_RCM_BOUNTY_HIDDEN");
						break;
				
					case joaat("BLIP_STYLE_RCM"):
						styleHash = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
				
					case joaat("BLIP_STYLE_MISSION"):
						styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
						break;
				
					case joaat("BLIP_STYLE_RCM_TRACKED"):
						styleHash = joaat("BLIP_STYLE_RCM_TRACKED_HIDDEN");
						break;
				
					default:
						styleHash = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
				}
			}
			else
			{
				styleHash = func_172(hash2);
			}
		
			if (Global_1347702[hash2 /*49*/].f_38 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1347702[hash2 /*49*/].f_37, styleHash);
				func_173(hash2);
				Global_1347702[hash2 /*49*/].f_38 = styleHash;
			}
			break;
	}

	return;
}

BOOL func_145(int iParam0) // Position - 0x398E Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_123() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_146(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x39D3 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_174(iParam0, &num, &num2);

	if (!func_175(iParam0, num, num2, bParam2))
		return;

	if (!func_176(iParam0, 1024))
		return;

	func_177(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
	return;
}

BOOL func_147(Ped pedParam0, Hash hParam1) // Position - 0x3A33 Hash - 0x2ACCF512 ^0x1B61D374
{
	return PED::IS_PED_USING_SCENARIO_HASH(pedParam0, hParam1);
}

float func_148(eStackSize essParam0) // Position - 0x3A43 Hash - 0x6DA75D4 ^0x6DA75D4
{
	return func_136(essParam0) / 2f;
}

int func_149(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x3A53 Hash - 0x8EBD6187 ^0x42F0F0AC
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num = iParam1;
	num.f_1 = iParam2;
	num.f_2 = iParam3;
	num.f_3 = iParam4;
	unk13.f_1 = uParam0;
	num2 = UIFEED::_UI_FEED_POST_HELP_TEXT(&num, &unk13, bParam5);
	return num2;
}

BOOL func_150(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3A8E Hash - 0xB13E2226 ^0xA63BD3BC
{
	Hash hash;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_178())
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
		hash = func_169(Global_1898164.f_1[0 /*5*/]);
	
		if (func_179(hash) && func_153(Global_1347702[hash /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_157(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_151(int iParam0, int iParam1) // Position - 0x3C92 Hash - 0x4134D2DF ^0x8D80BF31
{
	eStackSize i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_152(i, &iParam0))
			if (Global_40.f_4942[i /*60*/].f_59 != 0 && Global_40.f_4942[i /*60*/].f_59 != iParam1)
				return true;
	}

	return false;
}

BOOL func_152(eStackSize essParam0, var uParam1) // Position - 0x3CE2 Hash - 0x997B939E ^0x997B939E
{
	int num;

	if (!func_12(essParam0))
		return false;

	num = func_180(essParam0);
	return *uParam1 && num != false;
}

BOOL func_153(int iParam0, int iParam1) // Position - 0x3D08 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

eStackSize func_154(eStackSize essParam0) // Position - 0x3D17 Hash - 0x297139D9 ^0x297139D9
{
	if (!func_72(essParam0))
		return 1;

	switch (essParam0)
	{
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
	
		case 1:
		case 5:
		case 13:
			return 2;
	
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
	
		case 4:
		case 15:
		case 18:
			return 5;
	
		case 6:
			return 4;
	
		case 10:
			return 21;
	
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
	
		case 14:
			return 1;
	
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
	
		case 20:
			return 8;
	
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
	
		case 25:
			return 8;
	
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
	
		case 34:
			return 23;
	
		case 35:
			return 19;
	
		case 60:
		case 77:
			return 13;
	
		case 65:
			return 14;
	
		case 70:
			return 4;
	
		case 71:
			return 13;
	
		default:
			return 1;
	}

	return -1;
}

void func_155(int iParam0, BOOL bParam1) // Position - 0x3F4B Hash - 0x3C4FA973 ^0x67C1D80B
{
	if (!func_157(iParam0))
		return;

	if (!func_119(iParam0))
		return;

	if (bParam1)
	{
		if (func_181(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_181(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_168(iParam0), func_169(iParam0), func_182(iParam0), func_181(iParam0), Global_36);
		}
	}

	func_183(iParam0, 1);
	bParam1 = bParam1;
	return;
}

void func_156(int iParam0, BOOL bParam1) // Position - 0x3FBC Hash - 0x23CB6788 ^0xB008F1A1
{
	if (Global_1898346[iParam0 /*6*/].f_2 == false || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_184(Global_1898330[iParam0]);
		func_185(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}

	return;
}

BOOL func_157(int iParam0) // Position - 0x401F Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_158(int iParam0) // Position - 0x4052 Hash - 0x195570A8 ^0x195570A8
{
	if (!func_157(iParam0))
		return;

	if (!func_50(iParam0))
		return;

	func_183(iParam0, 2);
	return;
}

BOOL func_159(eStackSize essParam0) // Position - 0x407B Hash - 0x29FCCE6A ^0xA230F605
{
	if (Global_40.f_4942[essParam0 /*60*/].f_59 != 0)
		return true;

	return false;
}

int func_160(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x4098 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

BOOL func_161(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x40C0 Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_162(int iParam0) // Position - 0x415E Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_124(&(iParam0->f_29), 62))
	{
		switch (func_186())
		{
			case 1:
				if (!func_124(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_124(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_124(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_124(&(iParam0->f_29), 32))
					if (func_124(&(iParam0->f_29), 2))
						if (func_188(func_187()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

BOOL func_163(eStackSize essParam0) // Position - 0x4208 Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (essParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}

	return true;
}

BOOL func_164(int iParam0) // Position - 0x4238 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 22:
			return true;
	}

	return false;
}

Vector3 func_165(eStackSize essParam0) // Position - 0x4256 Hash - 0xC7BD7946 ^0xC0EC040B
{
	switch (essParam0)
	{
		case 22:
			return -2578.5088f, 389.3037f, 148.3825f;
	}

	return Global_1888801[essParam0 /*35*/].f_15;
}

float func_166() // Position - 0x428D Hash - 0x97B49396 ^0x97B49396
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}

	return 25f;
}

BOOL func_167() // Position - 0x42C9 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

int func_168(int iParam0) // Position - 0x42D9 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_157(iParam0))
		return 0;

	return func_189(func_184(iParam0));
}

Hash func_169(int iParam0) // Position - 0x42F9 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_157(iParam0))
		return -1;

	return func_190(func_184(iParam0));
}

BOOL func_170(Hash hParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x4319 Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_143(hParam0, bParam2, essParam3))
		return true;

	return false;
}

BOOL func_171(Hash hParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x433B Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_191(hParam0, bParam2, essParam3))
		return true;

	return false;
}

Blip func_172(Hash hParam0) // Position - 0x435D Hash - 0xBD05D4EC ^0x11B65A46
{
	int num;

	num = joaat("BLIP_STYLE_RCM");

	if (!func_179(hParam0))
		return num;

	if (Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
		num = joaat("BLIP_STYLE_MISSION");
	else if (Global_1347702[hParam0 /*49*/].f_12 & 512 != 0)
		if (Global_40.f_1093 == Global_1347702[hParam0 /*49*/])
			num = joaat("BLIP_STYLE_RCM_TRACKED");
		else
			num = joaat("BLIP_STYLE_RCM");
	else if (Global_40.f_1093 == Global_1347702[hParam0 /*49*/])
		num = joaat("BLIP_STYLE_RCM_TRACKED");
	else
		num = joaat("BLIP_STYLE_RCM");

	return num;
}

void func_173(Hash hParam0) // Position - 0x43F0 Hash - 0xAC04978C ^0x82563A0D
{
	if (Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_KEY_MISSION"));
	
		switch (hParam0)
		{
			case 140:
			case 142:
				MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_LOANSHARK"));
				break;
		}
	}

	return;
}

void func_174(int iParam0, var uParam1, var uParam2) // Position - 0x4447 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_175(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4463 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_192(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_193(iParam0))
		return false;

	if (func_194(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_176(iParam0, 1) || func_73(32768))
		if (!func_176(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_195())
		return false;

	return true;
}

BOOL func_176(int iParam0, int iParam1) // Position - 0x4505 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_177(int iParam0, int iParam1) // Position - 0x451E Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_178() // Position - 0x4542 Hash - 0x2C13EB06 ^0x38F12C8A
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

BOOL func_179(Hash hParam0) // Position - 0x4595 Hash - 0x5A094C43 ^0x5A094C43
{
	return hParam0 > -1 && hParam0 < 200;
}

int func_180(eStackSize essParam0) // Position - 0x45AB Hash - 0xBE2A032D ^0xE6F2CF3B
{
	return BUILTIN::SHIFT_LEFT(1, essParam0);
}

Hash func_181(int iParam0) // Position - 0x45BA Hash - 0x2F57FA7D ^0x914B8AA9
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_5;

	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_182(int iParam0) // Position - 0x45E5 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_157(iParam0))
		return -1;

	return func_196(func_184(iParam0));
}

void func_183(int iParam0, int iParam1) // Position - 0x4605 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_157(iParam0))
		return;

	func_197(iParam0, iParam1);
	return;
}

BOOL func_184(int iParam0) // Position - 0x4622 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

void func_185(BOOL bParam0, eStackSize essParam1, int iParam2, int iParam3) // Position - 0x4660 Hash - 0x4C217CF1 ^0x4C217CF1
{
	*iParam3 = func_189(bParam0);
	*essParam1 = func_190(bParam0);
	*iParam2 = func_196(bParam0);
	return;
}

int func_186() // Position - 0x4683 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

Hash func_187() // Position - 0x468F Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_188(Hash hParam0) // Position - 0x469B Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 12) & 31;
}

int func_189(BOOL bParam0) // Position - 0x46AE Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_190(BOOL bParam0) // Position - 0x46BB Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_191(Hash hParam0, BOOL bParam1, eStackSize essParam2) // Position - 0x46CE Hash - 0xB3D5384F ^0xC314784E
{
	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37) && Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
		return Global_1347702[hParam0 /*49*/].f_27 == essParam2;

	return false;
}

BOOL func_192(int iParam0, int iParam1) // Position - 0x4712 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_123() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_193(int iParam0) // Position - 0x4745 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_123() != -1)
		if (func_176(iParam0, 4))
			return false;
	else if (func_176(iParam0, 2))
		return false;

	return true;
}

BOOL func_194(int iParam0) // Position - 0x4775 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_176(iParam0, 65536) && !func_176(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_176(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_176(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_195() // Position - 0x4821 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

int func_196(BOOL bParam0) // Position - 0x4830 Hash - 0xFA7B3D3 ^0x826FC8D8
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 15) & 16383;
}

void func_197(int iParam0, int iParam1) // Position - 0x4844 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_198(iParam0);
	else
		func_199(iParam0, iParam1);

	func_200();
	return;
}

int func_198(int iParam0) // Position - 0x488C Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_112(iParam0);

	if (num < 0)
		return 0;

	return func_201(num);
}

int func_199(int iParam0, int iParam1) // Position - 0x48AC Hash - 0xF3EA5EAF ^0xA48F5774
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
			func_202(num2);
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

void func_200() // Position - 0x4A1C Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

int func_201(int iParam0) // Position - 0x4A3F Hash - 0x78E19743 ^0x6ACC64F5
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

int func_202(int iParam0) // Position - 0x4AF3 Hash - 0x6DD34799 ^0x352A62D8
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

