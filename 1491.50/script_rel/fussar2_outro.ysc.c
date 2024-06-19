#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
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

void main() // Position - 0x0 Hash - 0xB19DBA86 ^0x5FFEE16
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1(&uLocal_6);

	func_2(&uLocal_6, &uScriptParam_0);

	while (!func_3(&uLocal_6))
	{
		func_4(&uLocal_6);
	
		switch (func_5(uLocal_6))
		{
			case 0:
				if (func_6(&uLocal_6))
					func_7(&uLocal_6, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_6))
					func_7(&uLocal_6, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_6))
					func_7(&uLocal_6, 3);
				break;
		
			case 3:
				func_1(&uLocal_6);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_6);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0xAB Hash - 0x5C967931 ^0xE89D747F
{
	int i;
	int num;
	Ped ped;

	func_10();
	func_11(uParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		num = i;
	
		if (func_12(num) && func_13(num))
		{
			ped = Global_1360165[i /*1157*/];
		
			if (ENTITY::DOES_ENTITY_EXIST(ped))
				if (func_14(num))
					func_15(num, false, 0, true, -1082130432, true, true, false, false, false, false);
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

int func_2(var uParam0, var uParam1) // Position - 0x143 Hash - 0x11824BFA ^0x305C042C
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

BOOL func_3(var uParam0) // Position - 0x190 Hash - 0xE6F09C07 ^0x349208FC
{
	if (func_20(Global_1935630, 16384))
		return true;

	if (!func_16(uParam0, 8))
		if (func_20(Global_1935630, 32768))
			return true;

	return false;
}

void func_4(var uParam0) // Position - 0x1CA Hash - 0xCC0866FC ^0x1CE74C37
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

int func_5(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x24D Hash - 0xBE425958 ^0xBE425958
{
	return uParam0;
}

BOOL func_6(var uParam0) // Position - 0x257 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

void func_7(var uParam0, int iParam1) // Position - 0x260 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_8(var uParam0) // Position - 0x26D Hash - 0xE70F011 ^0xCE61FB0
{
	if (!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
		return false;

	return func_21(uParam0);
}

BOOL func_9(var uParam0) // Position - 0x2A5 Hash - 0xEDB66132 ^0xEDB66132
{
	BOOL num;

	num = 1;

	if (!func_22())
		num = 0;

	if (!func_23(uParam0))
		num = 0;

	return num;
}

void func_10() // Position - 0x2CA Hash - 0xF2ADC204 ^0xF23F9A2E
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

int func_11(var uParam0) // Position - 0x30D Hash - 0x1187C012 ^0xBBA6644
{
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		STREAMING::LOAD_SCENE_STOP();

	ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2);
	return 1;
}

BOOL func_12(int iParam0) // Position - 0x329 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

BOOL func_13(int iParam0) // Position - 0x348 Hash - 0xDA629583 ^0xDA629583
{
	return func_26(iParam0, 16, true);
}

BOOL func_14(int iParam0) // Position - 0x359 Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_12(iParam0))
		return false;

	if (!func_13(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x38D Hash - 0xA4706F79 ^0xAF27D1D3
{
	BOOL flag;
	PersChar persChar;
	BOOL flag2;

	if (!func_12(iParam0))
		return;

	if (func_13(iParam0))
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
			return;

	if (bParam10)
	{
		func_24(iParam0, 56, true);
		func_25(&(Global_1359489.f_40), true);
	}

	func_27(iParam0, false);
	func_28(iParam0, 4, false);
	func_29(iParam0);
	func_30(iParam0);
	func_31(iParam0, 37, true);
	flag = func_32(Global_1360165[iParam0 /*1157*/], 0);
	persChar = func_33(iParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);

	if (func_34(iParam0, 64, true))
		func_31(iParam0, 64, true);

	if (bParam3)
	{
		func_31(iParam0, 33, true);
		func_31(iParam0, 34, true);
		func_35(iParam0, 1056964608, -1, 1061158912);
		func_36(iParam0, true, true, false);
	
		if (bParam6)
			func_24(iParam0, 30, true);
	
		if (bParam7)
		{
			func_24(iParam0, 35, true);
		
			if (bParam8)
				func_24(iParam0, 62, true);
		}
	
		if (flag)
		{
			func_37(iParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_31(iParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
	
		func_24(iParam0, 33, true);
		func_36(iParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = iParam4;
			func_25(&(Global_1360165[iParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_38(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_24(iParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			func_39(iParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);

	if (func_34(iParam0, 45, true))
		func_31(iParam0, 45, true);

	func_40(iParam0, 16, true);
	func_31(iParam0, 44, true);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_32(func_41(iParam0), 0))
			func_42(0, iParam0, bParam3, 0, bParam2);

	return;
}

BOOL func_16(var uParam0, int iParam1) // Position - 0x642 Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x653 Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x66B Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

void func_19(var uParam0) // Position - 0x67E Hash - 0xC42F0C30 ^0x37B88C09
{
	func_43(&Global_1935630, 1048576);
	return;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x692 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_21(var uParam0) // Position - 0x6A1 Hash - 0x5A91349A ^0x73544B8F
{
	STREAMING::LOAD_SCENE_START_SPHERE(Global_1835011[42 /*74*/].f_18, 100f, 0);
	func_44(Global_35);
	ENTITY::SET_ENTITY_COORDS(Global_35, func_45(42), true, false, true, true);
	CLOCK::SET_CLOCK_TIME(16, 0, 0);
	MISC::_SET_WEATHER_VARIATION("fog", "FOG_guama");
	MISC::SET_WEATHER_TYPE(joaat("Fog"), true, true, false, 0, false);
	func_46(&uLocal_3);
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	return 1;
}

BOOL func_22() // Position - 0x706 Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_23(var uParam0) // Position - 0x713 Hash - 0x59A5CE41 ^0x87972DBE
{
	int num;
	int num2;

	func_47(&(Global_1879514.f_6), 16);
	func_48(&Global_0, 16);
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	func_49();
	func_50(42, true, true);
	num = func_51(42);
	num2 = func_52(num);

	if (func_53(&uLocal_3) > 3f)
	{
		if (func_54(num) && func_55(num2, 128))
		{
			if (func_55(num2, 512))
				func_56(num2, 512);
		
			if (func_57())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
				HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
				return true;
			}
		}
	}

	return false;
}

void func_24(int iParam0, int iParam1, BOOL bParam2) // Position - 0x7B6 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_58(iParam0))
			return;

	func_59(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_25(var uParam0, BOOL bParam1) // Position - 0x7F0 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_60(uParam0))
		func_46(uParam0);

	return;
}

BOOL func_26(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x810 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_58(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

void func_27(int iParam0, BOOL bParam1) // Position - 0x83A Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_58(iParam0))
		return;

	if (bParam1)
		if (func_61(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
			func_28(iParam0, 1, false);

	func_28(iParam0, 16, bParam1);
	return;
}

void func_28(int iParam0, int iParam1, BOOL bParam2) // Position - 0x87C Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_58(iParam0))
		return;

	func_62(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_29(int iParam0) // Position - 0x8A4 Hash - 0x7895582D ^0x7895582D
{
	func_28(iParam0, 8, false);
	return;
}

void func_30(int iParam0) // Position - 0x8B5 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_24(iParam0, 36, true);
	return;
}

void func_31(int iParam0, int iParam1, BOOL bParam2) // Position - 0x8C6 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_58(iParam0))
			return;

	func_59(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_32(Ped pedParam0, int iParam1) // Position - 0x900 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_63(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_63(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_63(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_63(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_63(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_63(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_63(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_63(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_33(int iParam0, BOOL bParam1) // Position - 0x9FF Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(iParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
			func_64(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_1;
}

BOOL func_34(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA3E Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_58(iParam0))
			return false;

	func_59(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA79 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(iParam0))
	{
		ped = func_65(iParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_66(iParam0);
		}
	}

	if (func_34(iParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_65(iParam0), 137, true);

	return;
}

void func_36(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xACB Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_58(iParam0))
		return;

	if (bParam1)
	{
		func_31(iParam0, 50, true);
		func_31(iParam0, 48, true);
		func_31(iParam0, 49, true);
		func_31(iParam0, 51, true);
		func_31(iParam0, 52, true);
		func_31(iParam0, 54, true);
		func_31(iParam0, 55, true);
	}
	else
	{
		func_24(iParam0, 50, true);
		func_24(iParam0, 48, true);
		func_24(iParam0, 49, true);
		func_24(iParam0, 51, true);
	
		if (bParam3)
			func_24(iParam0, 54, true);
		else
			func_31(iParam0, 54, true);
	
		if (!bParam2)
		{
			func_24(iParam0, 52, true);
		
			if (bParam3)
				func_24(iParam0, 55, true);
		}
		else
		{
			func_31(iParam0, 52, true);
		
			if (!bParam3)
				func_31(iParam0, 55, true);
		}
	}

	return;
}

void func_37(int iParam0, BOOL bParam1) // Position - 0xB9D Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_58(iParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_65(iParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_65(iParam0), 204, false);

	return;
}

void func_38(var uParam0) // Position - 0xBD4 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_39(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xBEA Hash - 0x6E8FD624 ^0x6E8FD624
{
	PersChar char;
	Ped ped;

	if (!func_12(iParam0))
		return;

	if (func_13(iParam0))
	{
		if (!func_14(iParam0))
			return;
	
		if (!bParam1)
			return;
	}

	if (func_34(iParam0, 32, true))
		if (!bParam2)
			return;

	char = func_33(iParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_65(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_67(iParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_24(iParam0, 2, true);
	}
	else
	{
		func_68(iParam0);
		func_24(iParam0, 1, true);
	}

	return;
}

void func_40(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCF8 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] - Global_40.f_4942[iParam0 /*60*/] && bParam1;
	return;
}

Player func_41(int iParam0) // Position - 0xD34 Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
		Global_1360165[iParam0 /*1157*/].f_70 = 0;

	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_42(int iParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0xD74 Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_58(iParam1))
		return;

	player = func_41(iParam1);

	if (func_69(iParam1))
		if (!func_70(iParam1))
			return;

	func_31(iParam1, 39, true);
	func_71(iParam1, 64, false);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_71(iParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_71(iParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_24(iParam1, 43, true);
		}
	
		if (bParam4)
			func_72(iParam1, false, true, true, true);
	}

	return;
}

void func_43(int iParam0, int iParam1) // Position - 0xE16 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_44(Ped pedParam0) // Position - 0xE27 Hash - 0xAC157CE0 ^0x9685A596
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_ON_MOUNT(pedParam0))
			PED::_REMOVE_PED_FROM_MOUNT(pedParam0, true, false);

	return;
}

Vector3 func_45(int iParam0) // Position - 0xE4A Hash - 0xF55A28BB ^0x3920BBDB
{
	var unk;

	if (!func_73(iParam0))
		return Global_36;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		unk = { func_74(PLAYER::PLAYER_ID()) };
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				unk = { -1337.4021f, 2452.9104f, 307.9791f };
				break;
		
			case 2:
				unk = { -1336.0128f, 2435.8677f, 307.5496f };
				break;
		
			case 3:
				unk = { -1338.4387f, 2428.4138f, 307.2766f };
				break;
		
			case 4:
				unk = { -1322.4f, 2426f, 307.9f };
				break;
		
			case 5:
				unk = { -308.3586f, 782.1924f, 117.7538f };
				break;
		
			case 6:
				unk = { -97.375f, -36.5433f, 94.8554f };
				break;
		
			case 7:
				unk = { -272.3134f, 786.3967f, 117.7775f };
				break;
		
			case 8:
				unk = { 905.082f, 1294.843f, 231.7543f };
				break;
		
			case 9:
				unk = { -118.0703f, -31.0125f, 94.7967f };
				break;
		
			case 10:
				unk = { -349.4977f, -366.3566f, 86.2997f };
				break;
		
			case 11:
				unk = { -1796.4485f, -368.0258f, 160.266f };
				break;
		
			case 12:
				unk = { -1552.635f, -315.4827f, 145.8309f };
				break;
		
			case 13:
				unk = { -867.4744f, -1086.1106f, 57.0144f };
				break;
		
			case 14:
				unk = { -254.86f, 720.18f, 114.37f };
				break;
		
			case 15:
				unk = { -116.3872f, -33.3869f, 94.7574f };
				break;
		
			case 16:
				unk = { 688.5411f, -1249.0596f, 43.1303f };
				break;
		
			case 17:
				unk = { 1335.68f, -1322.95f, 77.07f };
				break;
		
			case 18:
				unk = { 753.216f, -1079.8682f, 56.0014f };
				break;
		
			case 19:
				unk = { 1673.17f, -1396.88f, 43.57f };
				break;
		
			case 20:
				unk = { 1011.58f, -1725.89f, 47.09f };
				break;
		
			case 21:
				unk = { 1297.8782f, -1268.0034f, 75.6016f };
				break;
		
			case 22:
				unk = { 661.5433f, -1240.1288f, 43.1674f };
				break;
		
			case 23:
				unk = { 675.4856f, -1241.7777f, 42.9353f };
				break;
		
			case 24:
				unk = { 702.3f, -1220.9f, 45.2f };
				break;
		
			case 25:
				unk = { 1185.5707f, -76.8852f, 94.2109f };
				break;
		
			case 26:
				unk = { 688.1236f, -1232.8546f, 43.2355f };
				break;
		
			case 27:
				unk = { 2596.8062f, -1212.2871f, 52.2666f };
				break;
		
			case 28:
				unk = { 2464f, -1188.7456f, 46.7464f };
				break;
		
			case 29:
				unk = { 2754.5217f, -1383.792f, 45.2117f };
				break;
		
			case 30:
				unk = { 1862.2498f, -1840.1764f, 41.6041f };
				break;
		
			case 31:
				unk = { 2137.7715f, -618.0017f, 40.6232f };
				break;
		
			case 32:
				unk = { 1870.4077f, -1842.5275f, 41.7562f };
				break;
		
			case 33:
				unk = { 1876.6158f, -1854.6577f, 41.4154f };
				break;
		
			case 34:
				unk = { 2538.5476f, -1202.8931f, 52.5581f };
				break;
		
			case 35:
				unk = { 1889.6696f, -1875.9084f, 41.8095f };
				break;
		
			case 36:
				unk = { 2653.4253f, -1265.1373f, 51.2522f };
				break;
		
			case 37:
				unk = { 1830.609f, -1816.0238f, 45.0415f };
				break;
		
			case 38:
			case 39:
				unk = { 2006.8435f, -4500.9644f, 42.2633f };
				break;
		
			case 40:
				unk = { 1549.1788f, -7149.7925f, 62.8666f };
				break;
		
			case 41:
				unk = { 1339.2137f, -7266.655f, 56.7801f };
				break;
		
			case 42:
				unk = { 1001.3757f, -6718.156f, 58.3266f };
				break;
		
			case 43:
				unk = { 1302.8093f, -6838.1274f, 42.2677f };
				break;
		
			case 44:
				unk = { 2266.855f, -767.1865f, 41.388f };
				break;
		
			case 45:
				unk = { 2796.889f, -1190.5245f, 46.5459f };
				break;
		
			case 46:
				unk = { 2874.2224f, -244.1363f, 41.6331f };
				break;
		
			case 47:
				unk = { 2800.9932f, -1194.4015f, 46.1827f };
				break;
		
			case 48:
				unk = { 496.0803f, 2230.1797f, 246.6552f };
				break;
		
			case 49:
				unk = { 2349.2505f, 1354.5035f, 104.7196f };
				break;
		
			case 50:
				unk = { 2352.4932f, 1368.096f, 105.0149f };
				break;
		
			case 51:
				unk = { 427.1917f, 1380.4772f, 169.43427f };
				break;
		
			case 52:
				unk = { 479.6426f, 2150.8914f, 240.877f };
				break;
		
			case 53:
				unk = { 723.5786f, -1248.5675f, 44.0862f };
				break;
		
			case 54:
				unk = { 2925.6626f, 1290.4097f, 43.5145f };
				break;
		
			case 55:
				unk = { 2794.3792f, 510.5758f, 66.2777f };
				break;
		
			case 56:
				unk = { 595.0852f, 1694.9187f, 186.5126f };
				break;
		
			case 57:
				unk = { 2358.756f, 1347.649f, 104.9628f };
				break;
		
			case 58:
				unk = { 2358.5796f, 1351.2379f, 104.9683f };
				break;
		
			case 60:
				unk = { -1588.4944f, 400.6734f, 105.4726f };
				break;
		
			case 62:
				unk = { -2583.1682f, 393.3636f, 148.3663f };
				break;
		
			case 63:
				unk = { -2529.541f, 367.5437f, 151.1168f };
				break;
		
			case 64:
				unk = { -2557.1218f, 423.5369f, 146.8822f };
				break;
		
			case 65:
				unk = { -2572.0933f, 448.8413f, 144.8921f };
				break;
		
			case 66:
				unk = { -2580.4058f, 407.1148f, 148.1711f };
				break;
		
			case 67:
				unk = { -2573.7642f, 459.4782f, 144.6351f };
				break;
		
			case 68:
				unk = { -1643.2936f, -1409.5161f, 82.095f };
				break;
		
			case 69:
				unk = { -299.5792f, 784.5674f, 118.1264f };
				break;
		
			case 70:
				unk = { -1546.9404f, -1443.2018f, 92.8534f };
				break;
		
			case 71:
				unk = { -1650.936f, -1376.4468f, 82.9628f };
				break;
		
			case 72:
				unk = { -786.398f, -1330.4604f, 42.6404f };
				break;
		
			case 74:
				unk = { -831.9793f, -1309.5603f, 42.63682f };
				break;
		
			case 75:
				unk = { -1653.5f, -1379f, 84f };
				break;
		
			case 76:
				unk = { -1649.8904f, -1374.5521f, 82.9631f };
				break;
		
			case 77:
				unk = { -1541.5603f, -1458.0554f, 93.6257f };
				break;
		
			default:
				unk = { func_75(iParam0) + { 8f, -15f, 8f } };
				break;
		}
	}

	func_76(&unk, 50, 10, false);
	return unk;
}

void func_46(var uParam0) // Position - 0x16B0 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_77(uParam0, 0f);
	return;
}

void func_47(var uParam0, int iParam1) // Position - 0x16BF Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_48(Hash hParam0, int iParam1) // Position - 0x16D0 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_49() // Position - 0x16E3 Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_1905944.f_5695 = 1;
	return;
}

int func_50(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x16F3 Hash - 0x495686EB ^0x978C707D
{
	int num;

	if (!func_73(hParam0))
		return 1;

	if (func_78(32768))
		return 1;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[hParam0 /*74*/].f_16, false))
		return 1;

	num = func_52(func_51(hParam0));

	if (Global_1835011[hParam0 /*74*/].f_71)
		return 1;

	if (!func_54(func_51(hParam0)))
		func_79(hParam0, false, false, -1);

	if (func_80(num))
	{
		if (!Global_1835011[hParam0 /*74*/].f_71)
		{
			if (bParam1)
				func_81(num, 256);
		
			if (bParam2)
				func_81(num, 512);
		
			Global_1835011[hParam0 /*74*/].f_71 = 1;
			return 1;
		}
	}

	return 0;
}

int func_51(Hash hParam0) // Position - 0x17A9 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_73(hParam0))
		return 0;

	return Global_1835011[hParam0 /*74*/].f_1;
}

int func_52(int iParam0) // Position - 0x17C9 Hash - 0x6B3238EF ^0x6B3238EF
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

float func_53(var uParam0) // Position - 0x180A Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_60(uParam0))
		return 0f;

	if (func_82(uParam0))
		return uParam0->f_2;

	return func_83() - uParam0->f_1;
}

BOOL func_54(int iParam0) // Position - 0x183C Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_84(iParam0);
	}

	if (num == 1)
		return true;

	if (num == 2)
		return true;

	return false;
}

BOOL func_55(int iParam0, int iParam1) // Position - 0x18A7 Hash - 0x7572A314 ^0x4B13FBB8
{
	return func_80(iParam0) && Global_1898346[iParam0 /*6*/].f_1 && iParam1 != false;
}

void func_56(int iParam0, int iParam1) // Position - 0x18C9 Hash - 0xD320CA35 ^0x5C62EB93
{
	if (!func_80(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 - Global_1898346[iParam0 /*6*/].f_1 && iParam1;
	return;
}

BOOL func_57() // Position - 0x1900 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

BOOL func_58(int iParam0) // Position - 0x191C Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

int func_59(int iParam0, var uParam1, var uParam2) // Position - 0x1928 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_60(var uParam0) // Position - 0x1945 Hash - 0x5001E582 ^0x5001E582
{
	return func_85(*uParam0, 1);
}

BOOL func_61(int iParam0, int iParam1) // Position - 0x1955 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_62(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1965 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_63(int iParam0, int iParam1) // Position - 0x198B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_64(int iParam0) // Position - 0x199A Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_58(iParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		hash = func_86(iParam0);
	
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

Ped func_65(int iParam0) // Position - 0x1A02 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_58(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

void func_66(int iParam0) // Position - 0x1A3C Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_65(iParam0)))
		{
			func_87(iParam0, 67108864, true);
			func_31(iParam0, 19, true);
		}
	}

	return;
}

float func_67(int iParam0) // Position - 0x1A6F Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_58(iParam0))
		return 0f;

	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_68(int iParam0) // Position - 0x1A90 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_65(iParam0);
	persChar = func_33(iParam0, false);
	func_88(iParam0, ped);

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

BOOL func_69(int iParam0) // Position - 0x1AEA Hash - 0x6410553A ^0x46627D03
{
	if (!func_58(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_70(int iParam0) // Position - 0x1B36 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_58(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_71(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1B5E Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_58(iParam0))
		return;

	if (bParam2)
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 - Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_72(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1BC3 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	int num;
	PersChar persChar;

	if (!func_58(iParam0))
		return 0;

	mount = func_41(iParam0);

	if (func_32(mount, 0))
	{
		if (func_32(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_69(iParam0) || func_70(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_89(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				num = func_90(iParam0, true);
			
				if (num != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_91(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_92(iParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_92(iParam0, false));
					func_93(iParam0);
				}
			}
			else
			{
				if (func_26(iParam0, 32768, true))
				{
					persChar = func_92(iParam0, false);
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
		if (func_32(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_26(iParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
			
				func_91(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_92(iParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_92(iParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_91(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_94(iParam0, 0);
	return 1;
}

BOOL func_73(Hash hParam0) // Position - 0x1D74 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return hParam0 > -1 && hParam0 <= 80;
}

Vector3 func_74(Player plParam0) // Position - 0x1D8A Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

Vector3 func_75(Hash hParam0) // Position - 0x1D9E Hash - 0xACD6F870 ^0xDE230469
{
	if (func_95(hParam0))
		return func_96(hParam0);

	return Global_1835011[hParam0 /*74*/].f_18;
}

int func_76(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1DC4 Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_97(*uParam0, 0f, 0f, 0f))
		return 1;

	num = 0;
	flag = false;
	flag2 = false;
	vector = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vector);

	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag)
	{
		if (num < iParam2)
		{
			num = num + 1;
			vector.f_2 = vector.f_2 + (float)iParam1;
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
		}
		else
		{
			flag = true;
		}
	}

	if (flag)
	{
		num = 1;
		vector.f_2 = vector.f_2 - (float)iParam1;
		STREAMING::REQUEST_COLLISION_AT_COORD(vector);
	
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag2)
		{
			if (num < iParam2)
			{
				num = num + 1;
				vector.f_2 = vector.f_2 - (float)iParam1;
				STREAMING::REQUEST_COLLISION_AT_COORD(vector);
			}
			else
			{
				flag2 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = groundZ;
		return 1;
	}

	if (flag && flag2)
		return 0;

	uParam0->f_2 = groundZ;
	return 1;
}

void func_77(var uParam0, float fParam1) // Position - 0x1EBB Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_83() - fParam1;
	func_98(uParam0, 1);
	func_99(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_78(int iParam0) // Position - 0x1EE1 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

int func_79(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x1EF4 Hash - 0xCD2F5C8B ^0xD79ECC6F
{
	int num;

	if (!func_100(hParam0))
		return 0;

	if (func_101(Global_1347702[59 /*49*/].f_15, true) && !func_101(Global_1347702[61 /*49*/].f_15, true) && Global_40.f_9052.f_21 & 2 == 0)
		return 0;

	if (func_102(PLAYER::PLAYER_ID(), true, false))
	{
		if (!MAP::DOES_BLIP_EXIST(Global_1835011[hParam0 /*74*/].f_27) && !func_103(hParam0) && !Global_43891)
		{
			func_105(hParam0, BUILTIN::VDIST2(func_104(hParam0), Global_36), -1, true, true);
			func_106(&Global_1835011[hParam0 /*74*/], 2);
		}
	
		return 0;
	}

	if (bParam2)
	{
		if (!func_108(func_107(hParam0), func_51(hParam0), 0, Global_1835011[hParam0 /*74*/].f_21, iParam3))
			return 0;
	
		if (func_109(true) > 1)
		{
			if (Global_1835011[hParam0 /*74*/].f_73 <= 0)
				Global_1835011[hParam0 /*74*/].f_73 = MISC::GET_GAME_TIMER();
		
			if (MISC::GET_GAME_TIMER() - Global_1835011[hParam0 /*74*/].f_73 < 60000)
			{
				if (func_110(hParam0, false, true))
					return 0;
			
				if (hParam0 == 15 && Global_1357549.f_1494 & 32768 != 0 && func_112(Global_35, func_111(hParam0), 50f, true, true))
				{
					if (!GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[hParam0 /*74*/].f_72))
					{
						Global_1835011[hParam0 /*74*/].f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(Global_1835011[hParam0 /*74*/].f_72, func_111(hParam0), 5f);
					}
				
					if (CAM::IS_SCREEN_FADED_IN() && GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1835011[hParam0 /*74*/].f_72) || CAM::IS_SPHERE_VISIBLE(func_111(hParam0), 2.5f))
						return 0;
				}
			}
		}
	}

	num = func_113(Global_1835011[hParam0 /*74*/].f_1);

	if (!func_80(num))
	{
		return 0;
	}
	else if (Global_1835011[hParam0 /*74*/].f_73 != 0)
	{
		Global_1835011[hParam0 /*74*/].f_73 = 0;
		func_114(hParam0);
	
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[hParam0 /*74*/].f_72))
			GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[hParam0 /*74*/].f_72);
	}

	if (bParam1)
		func_115(Global_1835011[hParam0 /*74*/].f_1);
	else if (!Global_1879534)
		func_116(4);

	return 1;
}

BOOL func_80(int iParam0) // Position - 0x213A Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

void func_81(int iParam0, int iParam1) // Position - 0x2159 Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_80(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 || iParam1;
	return;
}

BOOL func_82(var uParam0) // Position - 0x2185 Hash - 0x39705408 ^0x39705408
{
	return func_85(*uParam0, 2);
}

float func_83() // Position - 0x2195 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

int func_84(int iParam0) // Position - 0x21C7 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_117(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_85(int iParam0, int iParam1) // Position - 0x2208 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Hash func_86(int iParam0) // Position - 0x2217 Hash - 0xBA965109 ^0xCB1D208B
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

void func_87(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x23F3 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] || bParam1;
	return;
}

void func_88(int iParam0, Ped pedParam1) // Position - 0x2424 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_118(pedParam1);

	return;
}

float func_89(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x243E Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_119(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_90(int iParam0, BOOL bParam1) // Position - 0x2495 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_58(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_120(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_91(int iParam0) // Position - 0x25DA Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_41(iParam0);

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

PersChar func_92(int iParam0, BOOL bParam1) // Position - 0x2650 Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_58(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[iParam0 /*1157*/].f_126 = func_121(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_93(int iParam0) // Position - 0x269C Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_58(iParam0))
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

void func_94(int iParam0, int iParam1) // Position - 0x26EF Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_58(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

BOOL func_95(Hash hParam0) // Position - 0x2713 Hash - 0x67D822A ^0x67D822A
{
	switch (hParam0)
	{
		case 14:
		case 34:
			return !func_122(&Global_1835011[hParam0 /*74*/]);
	}

	return false;
}

Vector3 func_96(Hash hParam0) // Position - 0x2743 Hash - 0x695A7658 ^0x6D3D4EDB
{
	switch (hParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
	
		case 34:
			return 2544.9822f, -1187.3444f, 52.3104f;
	}

	return Global_1835011[hParam0 /*74*/].f_18;
}

BOOL func_97(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x2795 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_98(var uParam0, int iParam1) // Position - 0x27BE Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_99(var uParam0, int iParam1) // Position - 0x27CF Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_100(Hash hParam0) // Position - 0x27E4 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(hParam0 > -1 && hParam0 <= 80))
		return false;

	return func_123(Global_1835011[hParam0 /*74*/].f_1);
}

BOOL func_101(int iParam0, BOOL bParam1) // Position - 0x2810 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_124(iParam0))
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

BOOL func_102(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2841 Hash - 0xCB9E150E ^0xCB9E150E
{
	if (func_125(plParam0, bParam1, bParam2, true))
		return true;

	return false;
}

BOOL func_103(Hash hParam0) // Position - 0x285C Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_126(hParam0);
}

Vector3 func_104(Hash hParam0) // Position - 0x286A Hash - 0x6099830A ^0xA6B953C5
{
	switch (hParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
	
		default:
		
	}

	return Global_1835011[hParam0 /*74*/].f_18;
}

int func_105(Hash hParam0, float fParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x289E Hash - 0xFE346E5F ^0x940BCCCD
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	int num;
	BOOL flag5;
	BOOL flag6;
	var unk;

	if (func_78(32768))
		return 0;

	flag = func_127();

	if (bParam4 && func_128(&(Global_1835011[hParam0 /*74*/].f_29), 512) && !func_128(&(Global_1835011[hParam0 /*74*/].f_29), 1024))
		if (func_129())
			return 0;

	if (Global_1835011[hParam0 /*74*/].f_71)
		return 0;

	if (!func_130(hParam0))
		return 0;

	if (flag == -1)
		if (hParam0 == 19)
			if (func_101(Global_1835011[20 /*74*/].f_1, true) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1 && MISC::GET_GAME_TIMER() - func_131() <= 2000)
				return 0;
		else if (hParam0 == 20)
			if (func_101(Global_1835011[19 /*74*/].f_1, true) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1 && MISC::GET_GAME_TIMER() - func_131() <= 2000)
				return 0;
		else if (hParam0 == 14)
			if (!func_101(Global_1347702[62 /*49*/].f_15, true))
				return 0;

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[hParam0 /*74*/].f_27))
	{
		flag4 = Global_1835011[hParam0 /*74*/].f_70;
	
		if (func_132(hParam0, flag) && !flag4)
		{
			if (bParam3 || func_133(&Global_1835011[hParam0 /*74*/], 2))
			{
				if (func_95(hParam0))
				{
					Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_96(hParam0));
					flag3 = true;
				}
				else
				{
					Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_75(hParam0));
				}
			}
			else if (func_95(hParam0))
			{
				Global_1835011[hParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_AREA(joaat("BLIP_STYLE_MISSION"), func_96(hParam0), func_134(hParam0), func_135(hParam0));
				flag3 = true;
			}
			else
			{
				Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_RADIUS(joaat("BLIP_STYLE_MISSION"), func_136(hParam0), func_137(hParam0));
			}
		}
		else if (flag4)
		{
			if (!func_95(hParam0))
			{
				Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_104(hParam0));
			}
			else
			{
				Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_96(hParam0));
				flag3 = true;
			}
		}
		else if (func_103(hParam0))
		{
			if (hParam0 == 7)
				Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_RCM"), func_75(hParam0));
			else
				Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_75(hParam0));
		}
		else
		{
			Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_75(hParam0));
		}
	
		Global_1835011[hParam0 /*74*/].f_28 = joaat("BLIP_STYLE_MISSION");
		flag2 = true;
	
		if (iParam2 != -1)
			if (flag3 || func_95(hParam0))
				func_81(iParam2, 4194304);
			else
				func_56(iParam2, 4194304);
	
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[hParam0 /*74*/].f_27, 63, hParam0);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[hParam0 /*74*/].f_27))
		return 0;

	if (flag2)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[hParam0 /*74*/].f_27, Global_1835011[hParam0 /*74*/].f_26, true);
	
		if (flag != -1)
			MAP::_SET_BLIP_NAME(Global_1835011[hParam0 /*74*/].f_27, &(Global_1835011[hParam0 /*74*/].f_39));
	
		if (!func_128(&(Global_1835011[hParam0 /*74*/].f_29), 1024) && !func_103(hParam0))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[hParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_URGENT_ALERT"));
			func_138(&(Global_1835011[hParam0 /*74*/].f_29), 1024);
		}
	}

	if (flag != -1)
		return 1;

	if (!func_103(hParam0))
		MAP::BLIP_ADD_MODIFIER(Global_1835011[hParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));

	if (bParam3 || func_133(&Global_1835011[hParam0 /*74*/], 2))
		MAP::BLIP_ADD_MODIFIER(Global_1835011[hParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
	else
		MAP::BLIP_REMOVE_MODIFIER(Global_1835011[hParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));

	num = func_139(Global_40.f_4283);

	if (func_140(num) && func_141(Global_1888801[num /*35*/].f_13))
	{
		flag5 = true;
		flag6 = func_142(num);
	}

	if (func_143(hParam0, flag5, num))
		func_144(Global_1835011[hParam0 /*74*/].f_1, flag6, flag5, num);

	if (hParam0 == 7 && !func_145(579))
		func_146(579, Global_1835011[hParam0 /*74*/].f_27, false);

	if (hParam0 == 2)
		return 1;

	if (func_128(&(Global_1835011[hParam0 /*74*/].f_29), 4096) && !func_128(&(Global_1835011[hParam0 /*74*/].f_29), 8192) && (float)func_131() >= 10f && !Global_1935630.f_12 && !Global_16 && !func_147(Global_35, joaat("prop_player_sleep_tent_a_frame")) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED")) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("world_player_sleep_bedroll")))
	{
		if (!func_132(hParam0, flag) || fParam1 >= func_148(hParam0) * func_148(hParam0) && !Global_1835011[hParam0 /*74*/].f_70)
		{
			TEXT_LABEL_COPY(&unk, { Global_1835011[hParam0 /*74*/].f_8 }, 2);
			TEXT_LABEL_APPEND_STRING(&unk, "_FIRST", 16);
			func_149(&unk, 10000, 0, 0, 0, true);
			func_138(&(Global_1835011[hParam0 /*74*/].f_29), 8192);
		}
	}

	return 1;
}

void func_106(int iParam0, int iParam1) // Position - 0x2E1F Hash - 0x53A96DDB ^0x308B6379
{
	iParam0->f_63 = iParam0->f_63 || iParam1;
	return;
}

int func_107(Hash hParam0) // Position - 0x2E32 Hash - 0xE4DA9E55 ^0x3BF2293
{
	if (!func_73(hParam0))
		return 0;

	return Global_1835011[hParam0 /*74*/].f_30;
}

BOOL func_108(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x2E52 Hash - 0x2F357F29 ^0x2F357F29
{
	int i;

	if (func_127() != -1)
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
		
			if (iParam3 == iParam4)
				func_87(i, 512, true);
			else
				func_40(i, 512, true);
		}
	}

	return true;
}

int func_109(BOOL bParam0) // Position - 0x2EE2 Hash - 0x88929B6 ^0x3BF87E4F
{
	int num;
	Hash hash;
	Hash hash2;
	int i;

	for (i = 0; i < Global_1879534.f_7300; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/])
				{
					case 987244216:
						hash = Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/].f_2;
					
						if (func_153(Global_1347702[hash /*49*/].f_12, 1))
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
							hash2 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/].f_2;
						
							if (func_73(hash2) && !func_126(hash2))
								num = num + 1;
						}
						break;
				}
			}
		}
	}

	return num;
}

BOOL func_110(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x303A Hash - 0x1C7132A3 ^0x3158884D
{
	int num;
	int i;
	Ped ped;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	num = func_107(hParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_152(i, &num))
		{
			ped = func_65(func_154(hParam0));
		
			if (ENTITY::IS_ENTITY_DEAD(ped))
			{
			}
			else
			{
				if (bParam1 && func_34(i, 67, true))
					return true;
			
				if (bParam2 && func_34(i, 47, true))
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

Vector3 func_111(Hash hParam0) // Position - 0x30D7 Hash - 0x3E6E91A9 ^0x3E6E91A9
{
	return func_75(hParam0);
}

BOOL func_112(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x30E5 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_119(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

int func_113(int iParam0) // Position - 0x3140 Hash - 0x8157C348 ^0x8157C348
{
	int i;
	int num;
	int num2;
	var unk;

	if (Global_1898329 == 15)
		return -1;

	if (!func_123(iParam0))
		return -1;

	if (func_127() != -1)
	{
		num2 = func_52(iParam0);
	
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
		num2 = func_52(iParam0);
	
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

void func_114(Hash hParam0) // Position - 0x325C Hash - 0x2310F0AA ^0x2CE4B7A2
{
	int num;
	int i;
	Ped ped;

	num = func_107(hParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_152(i, &num))
		{
			ped = func_65(func_154(hParam0));
		
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

void func_115(int iParam0) // Position - 0x32B1 Hash - 0x646928F0 ^0x646928F0
{
	func_158(iParam0);
	return;
}

void func_116(BOOL bParam0) // Position - 0x32BF Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898164 = Global_1898164 || bParam0;
	return;
}

int func_117(int iParam0) // Position - 0x32D2 Hash - 0x6EC15CF9 ^0xE613EBE0
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

void func_118(Ped pedParam0) // Position - 0x3353 Hash - 0xD57111D1 ^0x7FA972E2
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

float func_119(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x33B6 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

Hash func_120(int iParam0) // Position - 0x33D4 Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_58(iParam0))
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
			hash = Global_1357549.f_1675[i /*5*/];
			break;
		}
	}

	if (!func_58(iParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_121(int iParam0) // Position - 0x34B5 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_58(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		persCharHash = func_90(iParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[iParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[iParam0 /*60*/].f_7);
	
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}

	return Global_1360165[iParam0 /*1157*/].f_126;
}

BOOL func_122(int iParam0) // Position - 0x3551 Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_128(&(iParam0->f_29), 62))
	{
		switch (func_159())
		{
			case 1:
				if (!func_128(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_128(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_128(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_128(&(iParam0->f_29), 32))
					if (func_128(&(iParam0->f_29), 2))
						if (func_161(func_160()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

BOOL func_123(int iParam0) // Position - 0x35FB Hash - 0x93C8DA75 ^0x93C8DA75
{
	return func_124(iParam0) == 0;
}

int func_124(int iParam0) // Position - 0x360B Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_157(iParam0))
		return -1;

	return func_84(iParam0);
}

BOOL func_125(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3627 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_162(bParam1, bParam2, bParam3);

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

BOOL func_126(Hash hParam0) // Position - 0x375C Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case 7:
		case 36:
			return 1;
	}

	return 0;
}

BOOL func_127() // Position - 0x3780 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_128(var uParam0, int iParam1) // Position - 0x378E Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

BOOL func_129() // Position - 0x37AE Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_130(int iParam0) // Position - 0x37CE Hash - 0x2CA81420 ^0xF4BC7BB7
{
	if (func_127() == false)
		return true;

	switch (iParam0)
	{
		case 18:
			return func_101(Global_1347702[21 /*49*/].f_15, true);
	
		case 44:
			return func_101(Global_1347702[83 /*49*/].f_15, true);
	}

	return true;
}

int func_131() // Position - 0x3821 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1898438;
}

BOOL func_132(Hash hParam0, BOOL bParam1) // Position - 0x382D Hash - 0x97F0E2FC ^0x97F0E2FC
{
	if (bParam1 != -1)
		return false;

	if (func_95(hParam0))
	{
		switch (hParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}

	switch (hParam0)
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

BOOL func_133(int iParam0, int iParam1) // Position - 0x38F1 Hash - 0x718DD1EF ^0x863E326
{
	return iParam0->f_63 && iParam1 != false;
}

Vector3 func_134(int iParam0) // Position - 0x3902 Hash - 0x92A36B48 ^0x92A36B48
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
	
		default:
		
	}

	return 5f, 5f, 5f;
}

int func_135(int iParam0) // Position - 0x3929 Hash - 0xA5C2BBC7 ^0xA5C2BBC7
{
	switch (iParam0)
	{
		case 14:
			return 19;
	
		default:
		
	}

	return 0;
}

Vector3 func_136(int iParam0) // Position - 0x3945 Hash - 0xE4F42658 ^0xFC03374
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

float func_137(Hash hParam0) // Position - 0x3A18 Hash - 0x944FFAA0 ^0x944FFAA0
{
	switch (hParam0)
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

void func_138(var uParam0, int iParam1) // Position - 0x3A73 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

int func_139(int iParam0) // Position - 0x3A84 Hash - 0x84838E68 ^0x84838E68
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

BOOL func_140(int iParam0) // Position - 0x3B07 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_141(int iParam0) // Position - 0x3B1D Hash - 0xC62F3EC7 ^0x941BF203
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);

	return false;
}

BOOL func_142(int iParam0) // Position - 0x3B46 Hash - 0x89548BD6 ^0x617C5136
{
	if (!func_163(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return true;
	
		if (func_164(iParam0))
			if (BUILTIN::VDIST(Global_36, func_165(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_165(iParam0), false) <= func_166();
	
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= func_166();
	}

	return func_167();
}

BOOL func_143(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x3BD6 Hash - 0x561CE123 ^0xB84B7B4C
{
	if (hParam0 == 18)
		return false;

	if (hParam0 == 71)
		return false;

	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[hParam0 /*74*/].f_27) && Global_1835011[hParam0 /*74*/].f_21 == iParam2)
		return true;

	return false;
}

void func_144(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x3C23 Hash - 0x436A2EB9 ^0x436A2EB9
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
		
			if (func_170(hash, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
				if (func_132(hash, -1) && !Global_1835011[hash /*74*/].f_70 && Global_1835011[hash /*74*/].f_63 & 2 == 0)
					styleHash = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				else
					styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
			else if (func_132(hash, -1) && !Global_1835011[hash /*74*/].f_70 && Global_1835011[hash /*74*/].f_63 & 2 == 0)
				styleHash = joaat("BLIP_STYLE_MISSION_RADIUS");
			else
				styleHash = joaat("BLIP_STYLE_MISSION");
		
			if (Global_1835011[hash /*74*/].f_28 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1835011[hash /*74*/].f_27, styleHash);
			
				if (!func_103(hash))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[hash /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
			
				if (func_133(&Global_1835011[hash /*74*/], 2))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[hash /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
			
				Global_1835011[hash /*74*/].f_28 = styleHash;
			}
			break;
	
		case 8:
			hash2 = func_169(iParam0);
		
			if (func_171(hash2, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
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

BOOL func_145(int iParam0) // Position - 0x3E1F Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_127() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_146(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x3E64 Hash - 0xF79C008F ^0xF7AEE4EB
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

BOOL func_147(Ped pedParam0, Hash hParam1) // Position - 0x3EC4 Hash - 0x2ACCF512 ^0x1B61D374
{
	return PED::IS_PED_USING_SCENARIO_HASH(pedParam0, hParam1);
}

float func_148(Hash hParam0) // Position - 0x3ED4 Hash - 0x6DA75D4 ^0x6DA75D4
{
	return func_137(hParam0) / 2f;
}

int func_149(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x3EE4 Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_150(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3F1F Hash - 0xB13E2226 ^0xA63BD3BC
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

BOOL func_151(int iParam0, int iParam1) // Position - 0x4124 Hash - 0x4134D2DF ^0x8D80BF31
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_152(i, &iParam0))
			if (Global_40.f_4942[i /*60*/].f_59 != 0 && Global_40.f_4942[i /*60*/].f_59 != iParam1)
				return true;
	}

	return false;
}

BOOL func_152(int iParam0, var uParam1) // Position - 0x4174 Hash - 0x997B939E ^0x997B939E
{
	int num;

	if (!func_12(iParam0))
		return false;

	num = func_180(iParam0);
	return *uParam1 && num != false;
}

BOOL func_153(int iParam0, int iParam1) // Position - 0x419A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_154(Hash hParam0) // Position - 0x41A9 Hash - 0x297139D9 ^0x297139D9
{
	if (!func_73(hParam0))
		return 1;

	switch (hParam0)
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

void func_155(int iParam0, BOOL bParam1) // Position - 0x43DD Hash - 0x3C4FA973 ^0x67C1D80B
{
	if (!func_157(iParam0))
		return;

	if (!func_123(iParam0))
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

void func_156(int iParam0, BOOL bParam1) // Position - 0x444E Hash - 0x23CB6788 ^0xB008F1A1
{
	if (Global_1898346[iParam0 /*6*/].f_2 == false || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_184(Global_1898330[iParam0]);
		func_185(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}

	return;
}

BOOL func_157(int iParam0) // Position - 0x44AF Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_158(int iParam0) // Position - 0x44E2 Hash - 0x195570A8 ^0x195570A8
{
	if (!func_157(iParam0))
		return;

	if (!func_54(iParam0))
		return;

	func_183(iParam0, 2);
	return;
}

int func_159() // Position - 0x450B Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

int func_160() // Position - 0x4517 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_161(int iParam0) // Position - 0x4523 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

BOOL func_162(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4536 Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_163(int iParam0) // Position - 0x45D4 Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}

	return true;
}

BOOL func_164(int iParam0) // Position - 0x4604 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 22:
			return true;
	}

	return false;
}

Vector3 func_165(int iParam0) // Position - 0x4622 Hash - 0xC7BD7946 ^0xC0EC040B
{
	switch (iParam0)
	{
		case 22:
			return -2578.5088f, 389.3037f, 148.3825f;
	}

	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_166() // Position - 0x4659 Hash - 0x97B49396 ^0x97B49396
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

BOOL func_167() // Position - 0x4695 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

int func_168(int iParam0) // Position - 0x46A5 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_157(iParam0))
		return 0;

	return func_186(func_184(iParam0));
}

Hash func_169(int iParam0) // Position - 0x46C5 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_157(iParam0))
		return -1;

	return func_187(func_184(iParam0));
}

BOOL func_170(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x46E5 Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_143(hParam0, bParam2, iParam3))
		return true;

	return false;
}

BOOL func_171(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x4707 Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_188(hParam0, bParam2, iParam3))
		return true;

	return false;
}

Blip func_172(Hash hParam0) // Position - 0x4729 Hash - 0xBD05D4EC ^0x11B65A46
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

void func_173(Hash hParam0) // Position - 0x47BC Hash - 0xAC04978C ^0x82563A0D
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

void func_174(int iParam0, var uParam1, var uParam2) // Position - 0x4813 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_175(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x482F Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_189(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_190(iParam0))
		return false;

	if (func_191(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_176(iParam0, 1) || func_78(32768))
		if (!func_176(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_192())
		return false;

	return true;
}

BOOL func_176(int iParam0, int iParam1) // Position - 0x48D1 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_177(int iParam0, int iParam1) // Position - 0x48EA Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_178() // Position - 0x490E Hash - 0x2C13EB06 ^0x38F12C8A
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

BOOL func_179(Hash hParam0) // Position - 0x4961 Hash - 0x5A094C43 ^0x5A094C43
{
	return hParam0 > -1 && hParam0 < 200;
}

int func_180(int iParam0) // Position - 0x4977 Hash - 0xBE2A032D ^0xE6F2CF3B
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

Hash func_181(int iParam0) // Position - 0x4986 Hash - 0x2F57FA7D ^0x914B8AA9
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_5;

	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_182(int iParam0) // Position - 0x49B1 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_157(iParam0))
		return -1;

	return func_193(func_184(iParam0));
}

void func_183(int iParam0, int iParam1) // Position - 0x49D1 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_157(iParam0))
		return;

	func_194(iParam0, iParam1);
	return;
}

BOOL func_184(int iParam0) // Position - 0x49EE Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

void func_185(BOOL bParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x4A2C Hash - 0x4C217CF1 ^0x4C217CF1
{
	*iParam3 = func_186(bParam0);
	*hParam1 = func_187(bParam0);
	*iParam2 = func_193(bParam0);
	return;
}

int func_186(BOOL bParam0) // Position - 0x4A4F Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_187(BOOL bParam0) // Position - 0x4A5C Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_188(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x4A6F Hash - 0xB3D5384F ^0xC314784E
{
	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37) && Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
		return Global_1347702[hParam0 /*49*/].f_27 == iParam2;

	return false;
}

BOOL func_189(int iParam0, int iParam1) // Position - 0x4AB3 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_127() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_190(int iParam0) // Position - 0x4AE6 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_127() != -1)
		if (func_176(iParam0, 4))
			return false;
	else if (func_176(iParam0, 2))
		return false;

	return true;
}

BOOL func_191(int iParam0) // Position - 0x4B16 Hash - 0xF83B91D5 ^0xBF549DB5
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

BOOL func_192() // Position - 0x4BC2 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

int func_193(BOOL bParam0) // Position - 0x4BD1 Hash - 0xFA7B3D3 ^0x826FC8D8
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 15) & 16383;
}

void func_194(int iParam0, int iParam1) // Position - 0x4BE5 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_195(iParam0);
	else
		func_196(iParam0, iParam1);

	func_197();
	return;
}

int func_195(int iParam0) // Position - 0x4C2D Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_117(iParam0);

	if (num < 0)
		return 0;

	return func_198(num);
}

int func_196(int iParam0, int iParam1) // Position - 0x4C4D Hash - 0xF3EA5EAF ^0xA48F5774
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
			func_199(num2);
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

void func_197() // Position - 0x4DBD Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

int func_198(int iParam0) // Position - 0x4DE0 Hash - 0x78E19743 ^0x6ACC64F5
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

int func_199(int iParam0) // Position - 0x4E94 Hash - 0x6DD34799 ^0x352A62D8
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

