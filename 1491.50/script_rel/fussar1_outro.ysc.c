#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	BOOL bLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
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
		func_1(&uLocal_7);

	func_2(&uLocal_7, &uScriptParam_0);

	while (!func_3(&uLocal_7))
	{
		func_4(&uLocal_7);
	
		switch (func_5(uLocal_7))
		{
			case 0:
				if (func_6(&uLocal_7))
					func_7(&uLocal_7, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_7))
					func_7(&uLocal_7, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_7))
					func_7(&uLocal_7, 3);
				break;
		
			case 3:
				func_1(&uLocal_7);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_7);
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

BOOL func_21(var uParam0) // Position - 0x6A1 Hash - 0xE36D427F ^0xC1625AF3
{
	MISC::SET_BIT(&(Global_1955830.f_1), 5);
	STREAMING::LOAD_SCENE_START_SPHERE(Global_1835011[42 /*74*/].f_18, 100f, 0);
	func_44(Global_35);
	ENTITY::SET_ENTITY_COORDS(Global_35, func_45(42), true, false, true, true);
	AUDIO::START_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
	func_46(&uLocal_3);
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	return 1;
}

BOOL func_22() // Position - 0x6FA Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_23(var uParam0) // Position - 0x707 Hash - 0x8472AD6F ^0x3A131677
{
	int num;
	int num2;

	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	func_47();
	func_48(42, true, true);
	num = func_49(42);
	num2 = func_50(num);

	if (func_51(&uLocal_3) > 3f)
	{
		AUDIO::STOP_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
	
		if (func_52(num) && func_53(num2, 128))
		{
			if (func_53(num2, 512))
				func_54(num2, 512);
		
			if (func_55())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			
				if (!bLocal_6)
					bLocal_6 = func_56(joaat("CSTAG_FLOW_FUS1_POST"), joaat("CSTP_PERSIST_ACROSS_STATES"), -469960592, -1, 1, true, false);
			
				MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
				HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
				return true;
			}
		}
	}

	return false;
}

void func_24(int iParam0, int iParam1, BOOL bParam2) // Position - 0x7C3 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_57(iParam0))
			return;

	func_58(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_25(var uParam0, BOOL bParam1) // Position - 0x7FD Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_59(uParam0))
		func_46(uParam0);

	return;
}

BOOL func_26(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x81D Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_57(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

void func_27(int iParam0, BOOL bParam1) // Position - 0x847 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_57(iParam0))
		return;

	if (bParam1)
		if (func_60(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
			func_28(iParam0, 1, false);

	func_28(iParam0, 16, bParam1);
	return;
}

void func_28(int iParam0, int iParam1, BOOL bParam2) // Position - 0x889 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_57(iParam0))
		return;

	func_61(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_29(int iParam0) // Position - 0x8B1 Hash - 0x7895582D ^0x7895582D
{
	func_28(iParam0, 8, false);
	return;
}

void func_30(int iParam0) // Position - 0x8C2 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_24(iParam0, 36, true);
	return;
}

void func_31(int iParam0, int iParam1, BOOL bParam2) // Position - 0x8D3 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_57(iParam0))
			return;

	func_58(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_32(Ped pedParam0, int iParam1) // Position - 0x90D Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_62(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_62(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_62(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_62(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_62(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_62(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_62(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_62(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_33(int iParam0, BOOL bParam1) // Position - 0xA0C Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(iParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
			func_63(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_1;
}

BOOL func_34(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA4B Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_57(iParam0))
			return false;

	func_58(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA86 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(iParam0))
	{
		ped = func_64(iParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_65(iParam0);
		}
	}

	if (func_34(iParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_64(iParam0), 137, true);

	return;
}

void func_36(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xAD8 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_57(iParam0))
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

void func_37(int iParam0, BOOL bParam1) // Position - 0xBAA Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_57(iParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_64(iParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_64(iParam0), 204, false);

	return;
}

void func_38(var uParam0) // Position - 0xBE1 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_39(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xBF7 Hash - 0x6E8FD624 ^0x6E8FD624
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

	ped = func_64(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_66(iParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_67(iParam0);
		func_24(iParam0, 1, true);
	}

	return;
}

void func_40(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD05 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] - Global_40.f_4942[iParam0 /*60*/] && bParam1;
	return;
}

Player func_41(int iParam0) // Position - 0xD41 Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
		Global_1360165[iParam0 /*1157*/].f_70 = 0;

	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_42(int iParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0xD81 Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_57(iParam1))
		return;

	player = func_41(iParam1);

	if (func_68(iParam1))
		if (!func_69(iParam1))
			return;

	func_31(iParam1, 39, true);
	func_70(iParam1, 64, false);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_70(iParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_70(iParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_24(iParam1, 43, true);
		}
	
		if (bParam4)
			func_71(iParam1, false, true, true, true);
	}

	return;
}

void func_43(int iParam0, int iParam1) // Position - 0xE23 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_44(Ped pedParam0) // Position - 0xE34 Hash - 0xAC157CE0 ^0x9685A596
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_ON_MOUNT(pedParam0))
			PED::_REMOVE_PED_FROM_MOUNT(pedParam0, true, false);

	return;
}

Vector3 func_45(int iParam0) // Position - 0xE57 Hash - 0xF55A28BB ^0x3920BBDB
{
	var unk;

	if (!func_72(iParam0))
		return Global_36;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		unk = { func_73(PLAYER::PLAYER_ID()) };
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
				unk = { func_74(iParam0) + { 8f, -15f, 8f } };
				break;
		}
	}

	func_75(&unk, 50, 10, false);
	return unk;
}

void func_46(var uParam0) // Position - 0x16BD Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_76(uParam0, 0f);
	return;
}

void func_47() // Position - 0x16CC Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_1905944.f_5695 = 1;
	return;
}

int func_48(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x16DC Hash - 0x495686EB ^0x978C707D
{
	int num;

	if (!func_72(hParam0))
		return 1;

	if (func_77(32768))
		return 1;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[hParam0 /*74*/].f_16, false))
		return 1;

	num = func_50(func_49(hParam0));

	if (Global_1835011[hParam0 /*74*/].f_71)
		return 1;

	if (!func_52(func_49(hParam0)))
		func_78(hParam0, false, false, -1);

	if (func_79(num))
	{
		if (!Global_1835011[hParam0 /*74*/].f_71)
		{
			if (bParam1)
				func_80(num, 256);
		
			if (bParam2)
				func_80(num, 512);
		
			Global_1835011[hParam0 /*74*/].f_71 = 1;
			return 1;
		}
	}

	return 0;
}

int func_49(Hash hParam0) // Position - 0x1792 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_72(hParam0))
		return 0;

	return Global_1835011[hParam0 /*74*/].f_1;
}

int func_50(int iParam0) // Position - 0x17B2 Hash - 0x6B3238EF ^0x6B3238EF
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

float func_51(var uParam0) // Position - 0x17F3 Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_59(uParam0))
		return 0f;

	if (func_81(uParam0))
		return uParam0->f_2;

	return func_82() - uParam0->f_1;
}

BOOL func_52(int iParam0) // Position - 0x1825 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_83(iParam0);
	}

	if (num == 1)
		return true;

	if (num == 2)
		return true;

	return false;
}

BOOL func_53(int iParam0, int iParam1) // Position - 0x1890 Hash - 0x7572A314 ^0x4B13FBB8
{
	return func_79(iParam0) && Global_1898346[iParam0 /*6*/].f_1 && iParam1 != false;
}

void func_54(int iParam0, int iParam1) // Position - 0x18B2 Hash - 0xD320CA35 ^0x5C62EB93
{
	if (!func_79(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 - Global_1898346[iParam0 /*6*/].f_1 && iParam1;
	return;
}

BOOL func_55() // Position - 0x18E9 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

BOOL func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1905 Hash - 0x8BF3BA53 ^0xECA3E26
{
	int i;
	int num;
	int num2;
	int num3;
	int j;

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return 1;
	}

	num2 = func_84(iParam0);
	num3 = func_85(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[i /*5*/] = iParam0;
			Global_40.f_4283.f_6[i /*5*/].f_2 = iParam1;
			Global_40.f_4283.f_6[i /*5*/].f_3 = num3;
		
			if (iParam3 > 0)
			{
				num = func_86();
				func_87(&num, 0, 0, iParam3, 0, 0, 0, false);
			}
			else
			{
				num = -15;
			}
		
			Global_40.f_4283.f_6[i /*5*/].f_1 = num;
			Global_40.f_4283.f_6[i /*5*/].f_4 = num2;
			func_88(iParam0, true);
		
			if (func_89(num2))
			{
				for (j = 0; j < 60; j = j + 1)
				{
					if (Global_40.f_4283.f_6[j /*5*/].f_4 == num2 && Global_40.f_4283.f_6[j /*5*/] != iParam0)
						func_90(&Global_40.f_4283.f_6[j /*5*/], true, false);
				}
			}
		
			if (bParam5)
				if (bParam6)
					func_91(1, iParam0);
				else
					func_92(1, iParam0);
		
			return 1;
		}
	}

	return 0;
}

BOOL func_57(int iParam0) // Position - 0x1A59 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

int func_58(int iParam0, var uParam1, var uParam2) // Position - 0x1A65 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_59(var uParam0) // Position - 0x1A82 Hash - 0x5001E582 ^0x5001E582
{
	return func_93(*uParam0, 1);
}

BOOL func_60(int iParam0, int iParam1) // Position - 0x1A92 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_61(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1AA2 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_62(int iParam0, int iParam1) // Position - 0x1AC8 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_63(int iParam0) // Position - 0x1AD7 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_57(iParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		hash = func_94(iParam0);
	
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

Ped func_64(int iParam0) // Position - 0x1B3F Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_57(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

void func_65(int iParam0) // Position - 0x1B79 Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_64(iParam0)))
		{
			func_95(iParam0, 67108864, true);
			func_31(iParam0, 19, true);
		}
	}

	return;
}

float func_66(int iParam0) // Position - 0x1BAC Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_57(iParam0))
		return 0f;

	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_67(int iParam0) // Position - 0x1BCD Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_64(iParam0);
	persChar = func_33(iParam0, false);
	func_96(iParam0, ped);

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

BOOL func_68(int iParam0) // Position - 0x1C27 Hash - 0x6410553A ^0x46627D03
{
	if (!func_57(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_69(int iParam0) // Position - 0x1C73 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_57(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_70(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1C9B Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_57(iParam0))
		return;

	if (bParam2)
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 - Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_71(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1D00 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	int num;
	PersChar persChar;

	if (!func_57(iParam0))
		return 0;

	mount = func_41(iParam0);

	if (func_32(mount, 0))
	{
		if (func_32(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_68(iParam0) || func_69(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_97(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				num = func_98(iParam0, true);
			
				if (num != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_99(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_100(iParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_100(iParam0, false));
					func_101(iParam0);
				}
			}
			else
			{
				if (func_26(iParam0, 32768, true))
				{
					persChar = func_100(iParam0, false);
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
			
				func_99(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_100(iParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_100(iParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_99(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_102(iParam0, 0);
	return 1;
}

BOOL func_72(Hash hParam0) // Position - 0x1EB1 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return hParam0 > -1 && hParam0 <= 80;
}

Vector3 func_73(Player plParam0) // Position - 0x1EC7 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

Vector3 func_74(Hash hParam0) // Position - 0x1EDB Hash - 0xACD6F870 ^0xDE230469
{
	if (func_103(hParam0))
		return func_104(hParam0);

	return Global_1835011[hParam0 /*74*/].f_18;
}

int func_75(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1F01 Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_105(*uParam0, 0f, 0f, 0f))
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

void func_76(var uParam0, float fParam1) // Position - 0x1FF8 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_82() - fParam1;
	func_106(uParam0, 1);
	func_107(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_77(int iParam0) // Position - 0x201E Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

int func_78(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x2031 Hash - 0xCD2F5C8B ^0xD79ECC6F
{
	int num;

	if (!func_108(hParam0))
		return 0;

	if (func_109(Global_1347702[59 /*49*/].f_15, true) && !func_109(Global_1347702[61 /*49*/].f_15, true) && Global_40.f_9052.f_21 & 2 == 0)
		return 0;

	if (func_110(PLAYER::PLAYER_ID(), true, false))
	{
		if (!MAP::DOES_BLIP_EXIST(Global_1835011[hParam0 /*74*/].f_27) && !func_111(hParam0) && !Global_43891)
		{
			func_113(hParam0, BUILTIN::VDIST2(func_112(hParam0), Global_36), -1, true, true);
			func_114(&Global_1835011[hParam0 /*74*/], 2);
		}
	
		return 0;
	}

	if (bParam2)
	{
		if (!func_116(func_115(hParam0), func_49(hParam0), 0, Global_1835011[hParam0 /*74*/].f_21, iParam3))
			return 0;
	
		if (func_117(true) > 1)
		{
			if (Global_1835011[hParam0 /*74*/].f_73 <= 0)
				Global_1835011[hParam0 /*74*/].f_73 = MISC::GET_GAME_TIMER();
		
			if (MISC::GET_GAME_TIMER() - Global_1835011[hParam0 /*74*/].f_73 < 60000)
			{
				if (func_118(hParam0, false, true))
					return 0;
			
				if (hParam0 == 15 && Global_1357549.f_1494 & 32768 != 0 && func_120(Global_35, func_119(hParam0), 50f, true, true))
				{
					if (!GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[hParam0 /*74*/].f_72))
					{
						Global_1835011[hParam0 /*74*/].f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(Global_1835011[hParam0 /*74*/].f_72, func_119(hParam0), 5f);
					}
				
					if (CAM::IS_SCREEN_FADED_IN() && GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1835011[hParam0 /*74*/].f_72) || CAM::IS_SPHERE_VISIBLE(func_119(hParam0), 2.5f))
						return 0;
				}
			}
		}
	}

	num = func_121(Global_1835011[hParam0 /*74*/].f_1);

	if (!func_79(num))
	{
		return 0;
	}
	else if (Global_1835011[hParam0 /*74*/].f_73 != 0)
	{
		Global_1835011[hParam0 /*74*/].f_73 = 0;
		func_122(hParam0);
	
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[hParam0 /*74*/].f_72))
			GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[hParam0 /*74*/].f_72);
	}

	if (bParam1)
		func_123(Global_1835011[hParam0 /*74*/].f_1);
	else if (!Global_1879534)
		func_124(4);

	return 1;
}

BOOL func_79(int iParam0) // Position - 0x2277 Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

void func_80(int iParam0, int iParam1) // Position - 0x2296 Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_79(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 || iParam1;
	return;
}

BOOL func_81(var uParam0) // Position - 0x22C2 Hash - 0x39705408 ^0x39705408
{
	return func_93(*uParam0, 2);
}

float func_82() // Position - 0x22D2 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

int func_83(int iParam0) // Position - 0x2304 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_125(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_84(int iParam0) // Position - 0x2345 Hash - 0xF16A350D ^0xF7851618
{
	var unk;
	int num;
	var unk6;

	unk = Global_1357549.f_576;
	unk.f_1 = 0;
	unk.f_3 = iParam0;
	num = 0;

	if (func_126(unk, 70005598, &unk6, false))
		num = func_127(unk6);

	return num;
}

int func_85(int iParam0) // Position - 0x2384 Hash - 0x5374F99F ^0x22946EC9
{
	var unk;
	int num;

	unk = Global_1357549.f_576;
	unk.f_1 = 0;
	unk.f_3 = iParam0;
	num = 1;

	if (func_128(unk, -1875502208, &num, false))
	{
	}

	return num;
}

int func_86() // Position - 0x23BB Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_87(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x23C7 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_129(*uParam0);
	i = func_130(*uParam0);
	num2 = func_131(*uParam0);
	j = func_132(*uParam0);
	k = func_133(*uParam0);
	l = func_134(*uParam0);

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

	for (m = func_135(i, num); num2 > m; m = func_135(i, num))
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

	func_136(uParam0, l, k, j, num2, i, num);
	return;
}

void func_88(int iParam0, BOOL bParam1) // Position - 0x254F Hash - 0x1E270DC5 ^0x18D204F7
{
	int num;
	int offset;

	func_137(iParam0, &num, &offset);

	if (bParam1)
		MISC::SET_BIT(&Global_1357549.f_1848[num], offset);
	else
		MISC::CLEAR_BIT(&Global_1357549.f_1848[num], offset);

	return;
}

BOOL func_89(int iParam0) // Position - 0x258C Hash - 0x27CE23B1 ^0x27CE23B1
{
	switch (iParam0)
	{
		case 0:
			return false;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		case 3:
			return true;
	
		case 4:
			return true;
	
		case 5:
			return false;
	
		case 7:
			return false;
	
		case 8:
			return true;
	
		case 9:
			return true;
	
		case 10:
			return false;
	
		case 11:
			return true;
	
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
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return false;
	
		default:
		
	}

	return false;
}

void func_90(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2699 Hash - 0x24EF2016 ^0x7F590678
{
	if (*iParam0 == 176656832)
		return;

	func_88(*iParam0, false);

	if (bParam1)
		if (bParam2)
			func_91(2, *iParam0);
		else
			func_92(2, *iParam0);

	func_138(iParam0);
	return;
}

void func_91(int iParam0, int iParam1) // Position - 0x26DA Hash - 0xBEB4F573 ^0xDF718DD5
{
	if (Global_1357549.f_1483 >= 25)
		Global_1357549.f_1483 = 0;

	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/] = iParam0;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_1 = iParam1;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_2 = 0;
	Global_1357549.f_1483 = Global_1357549.f_1483 + 1;
	return;
}

void func_92(int iParam0, int iParam1) // Position - 0x273F Hash - 0xB8F35FB ^0xB8F35FB
{
	if (Global_1357549.f_1406 >= 50)
		return;

	if (Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] != 0)
		return;

	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] = iParam0;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_1 = iParam1;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_2 = 0;
	Global_1357549.f_1403 = Global_1357549.f_1403 + 1;
	Global_1357549.f_1406 = Global_1357549.f_1406 + 1;
	return;
}

BOOL func_93(int iParam0, int iParam1) // Position - 0x27C6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Hash func_94(int iParam0) // Position - 0x27D5 Hash - 0xBA965109 ^0xCB1D208B
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

void func_95(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x29B1 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] || bParam1;
	return;
}

void func_96(int iParam0, Ped pedParam1) // Position - 0x29E2 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_139(pedParam1);

	return;
}

float func_97(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x29FC Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_140(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_98(int iParam0, BOOL bParam1) // Position - 0x2A53 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_57(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_141(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_99(int iParam0) // Position - 0x2B98 Hash - 0xF7FD9E75 ^0xF411CFCB
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

PersChar func_100(int iParam0, BOOL bParam1) // Position - 0x2C0E Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_57(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[iParam0 /*1157*/].f_126 = func_142(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_101(int iParam0) // Position - 0x2C5A Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_57(iParam0))
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

void func_102(int iParam0, int iParam1) // Position - 0x2CAD Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_57(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

BOOL func_103(Hash hParam0) // Position - 0x2CD1 Hash - 0x67D822A ^0x67D822A
{
	switch (hParam0)
	{
		case 14:
		case 34:
			return !func_143(&Global_1835011[hParam0 /*74*/]);
	}

	return false;
}

Vector3 func_104(Hash hParam0) // Position - 0x2D01 Hash - 0x695A7658 ^0x6D3D4EDB
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

BOOL func_105(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x2D53 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_106(var uParam0, int iParam1) // Position - 0x2D7C Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_107(var uParam0, int iParam1) // Position - 0x2D8D Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_108(Hash hParam0) // Position - 0x2DA2 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(hParam0 > -1 && hParam0 <= 80))
		return false;

	return func_144(Global_1835011[hParam0 /*74*/].f_1);
}

BOOL func_109(int iParam0, BOOL bParam1) // Position - 0x2DCE Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_145(iParam0))
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

BOOL func_110(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2DFF Hash - 0xCB9E150E ^0xCB9E150E
{
	if (func_146(plParam0, bParam1, bParam2, true))
		return true;

	return false;
}

BOOL func_111(Hash hParam0) // Position - 0x2E1A Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_147(hParam0);
}

Vector3 func_112(Hash hParam0) // Position - 0x2E28 Hash - 0x6099830A ^0xA6B953C5
{
	switch (hParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
	
		default:
		
	}

	return Global_1835011[hParam0 /*74*/].f_18;
}

int func_113(Hash hParam0, float fParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2E5C Hash - 0xFE346E5F ^0x940BCCCD
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	int num;
	BOOL flag5;
	BOOL flag6;
	var unk;

	if (func_77(32768))
		return 0;

	flag = func_148();

	if (bParam4 && func_149(&(Global_1835011[hParam0 /*74*/].f_29), 512) && !func_149(&(Global_1835011[hParam0 /*74*/].f_29), 1024))
		if (func_150())
			return 0;

	if (Global_1835011[hParam0 /*74*/].f_71)
		return 0;

	if (!func_151(hParam0))
		return 0;

	if (flag == -1)
		if (hParam0 == 19)
			if (func_109(Global_1835011[20 /*74*/].f_1, true) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1 && MISC::GET_GAME_TIMER() - func_152() <= 2000)
				return 0;
		else if (hParam0 == 20)
			if (func_109(Global_1835011[19 /*74*/].f_1, true) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1 && MISC::GET_GAME_TIMER() - func_152() <= 2000)
				return 0;
		else if (hParam0 == 14)
			if (!func_109(Global_1347702[62 /*49*/].f_15, true))
				return 0;

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[hParam0 /*74*/].f_27))
	{
		flag4 = Global_1835011[hParam0 /*74*/].f_70;
	
		if (func_153(hParam0, flag) && !flag4)
		{
			if (bParam3 || func_154(&Global_1835011[hParam0 /*74*/], 2))
			{
				if (func_103(hParam0))
				{
					Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_104(hParam0));
					flag3 = true;
				}
				else
				{
					Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_74(hParam0));
				}
			}
			else if (func_103(hParam0))
			{
				Global_1835011[hParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_AREA(joaat("BLIP_STYLE_MISSION"), func_104(hParam0), func_155(hParam0), func_156(hParam0));
				flag3 = true;
			}
			else
			{
				Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_RADIUS(joaat("BLIP_STYLE_MISSION"), func_157(hParam0), func_158(hParam0));
			}
		}
		else if (flag4)
		{
			if (!func_103(hParam0))
			{
				Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_112(hParam0));
			}
			else
			{
				Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_104(hParam0));
				flag3 = true;
			}
		}
		else if (func_111(hParam0))
		{
			if (hParam0 == 7)
				Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_RCM"), func_74(hParam0));
			else
				Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_74(hParam0));
		}
		else
		{
			Global_1835011[hParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_74(hParam0));
		}
	
		Global_1835011[hParam0 /*74*/].f_28 = joaat("BLIP_STYLE_MISSION");
		flag2 = true;
	
		if (iParam2 != -1)
			if (flag3 || func_103(hParam0))
				func_80(iParam2, 4194304);
			else
				func_54(iParam2, 4194304);
	
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[hParam0 /*74*/].f_27, 63, hParam0);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[hParam0 /*74*/].f_27))
		return 0;

	if (flag2)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[hParam0 /*74*/].f_27, Global_1835011[hParam0 /*74*/].f_26, true);
	
		if (flag != -1)
			MAP::_SET_BLIP_NAME(Global_1835011[hParam0 /*74*/].f_27, &(Global_1835011[hParam0 /*74*/].f_39));
	
		if (!func_149(&(Global_1835011[hParam0 /*74*/].f_29), 1024) && !func_111(hParam0))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[hParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_URGENT_ALERT"));
			func_159(&(Global_1835011[hParam0 /*74*/].f_29), 1024);
		}
	}

	if (flag != -1)
		return 1;

	if (!func_111(hParam0))
		MAP::BLIP_ADD_MODIFIER(Global_1835011[hParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));

	if (bParam3 || func_154(&Global_1835011[hParam0 /*74*/], 2))
		MAP::BLIP_ADD_MODIFIER(Global_1835011[hParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
	else
		MAP::BLIP_REMOVE_MODIFIER(Global_1835011[hParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));

	num = func_160(Global_40.f_4283);

	if (func_161(num) && func_162(Global_1888801[num /*35*/].f_13))
	{
		flag5 = true;
		flag6 = func_163(num);
	}

	if (func_164(hParam0, flag5, num))
		func_165(Global_1835011[hParam0 /*74*/].f_1, flag6, flag5, num);

	if (hParam0 == 7 && !func_166(579))
		func_167(579, Global_1835011[hParam0 /*74*/].f_27, false);

	if (hParam0 == 2)
		return 1;

	if (func_149(&(Global_1835011[hParam0 /*74*/].f_29), 4096) && !func_149(&(Global_1835011[hParam0 /*74*/].f_29), 8192) && (float)func_152() >= 10f && !Global_1935630.f_12 && !Global_16 && !func_168(Global_35, joaat("prop_player_sleep_tent_a_frame")) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED")) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("world_player_sleep_bedroll")))
	{
		if (!func_153(hParam0, flag) || fParam1 >= func_169(hParam0) * func_169(hParam0) && !Global_1835011[hParam0 /*74*/].f_70)
		{
			TEXT_LABEL_COPY(&unk, { Global_1835011[hParam0 /*74*/].f_8 }, 2);
			TEXT_LABEL_APPEND_STRING(&unk, "_FIRST", 16);
			func_170(&unk, 10000, 0, 0, 0, true);
			func_159(&(Global_1835011[hParam0 /*74*/].f_29), 8192);
		}
	}

	return 1;
}

void func_114(int iParam0, int iParam1) // Position - 0x33DD Hash - 0x53A96DDB ^0x308B6379
{
	iParam0->f_63 = iParam0->f_63 || iParam1;
	return;
}

int func_115(Hash hParam0) // Position - 0x33F0 Hash - 0xE4DA9E55 ^0x3BF2293
{
	if (!func_72(hParam0))
		return 0;

	return Global_1835011[hParam0 /*74*/].f_30;
}

BOOL func_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x3410 Hash - 0x2F357F29 ^0x2F357F29
{
	int i;

	if (func_148() != -1)
		return true;

	if (iParam2 == 0 && func_171(0, true, true))
		return false;

	if (Global_1879534)
		return false;

	if (func_172(iParam0, iParam1))
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_173(i, &iParam0))
		{
			Global_40.f_4942[i /*60*/].f_59 = iParam1;
		
			if (iParam3 == iParam4)
				func_95(i, 512, true);
			else
				func_40(i, 512, true);
		}
	}

	return true;
}

int func_117(BOOL bParam0) // Position - 0x34A0 Hash - 0x88929B6 ^0x3BF87E4F
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
					
						if (func_174(Global_1347702[hash /*49*/].f_12, 1))
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
						
							if (func_72(hash2) && !func_147(hash2))
								num = num + 1;
						}
						break;
				}
			}
		}
	}

	return num;
}

BOOL func_118(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x35F8 Hash - 0x1C7132A3 ^0x3158884D
{
	int num;
	int i;
	Ped ped;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	num = func_115(hParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_173(i, &num))
		{
			ped = func_64(func_175(hParam0));
		
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

Vector3 func_119(Hash hParam0) // Position - 0x3695 Hash - 0x3E6E91A9 ^0x3E6E91A9
{
	return func_74(hParam0);
}

BOOL func_120(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x36A3 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_140(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

int func_121(int iParam0) // Position - 0x36FE Hash - 0x8157C348 ^0x8157C348
{
	int i;
	int num;
	int num2;
	var unk;

	if (Global_1898329 == 15)
		return -1;

	if (!func_144(iParam0))
		return -1;

	if (func_148() != -1)
	{
		num2 = func_50(iParam0);
	
		if (num2 >= 0)
		{
			func_176(iParam0, true);
			return num2;
		}
		else
		{
			num = Global_1898329;
			Global_1898330[num] = iParam0;
			Global_1898346[num /*6*/] = { unk };
			func_177(num, true);
			func_176(iParam0, true);
			Global_1898329 = Global_1898329 + 1;
		
			if (Global_1898329 > 15)
				Global_1898329 = 15;
		
			return num;
		}
	}
	else
	{
		num2 = func_50(iParam0);
	
		if (num2 >= 0)
		{
			func_176(iParam0, true);
			return num2;
		}
		else
		{
			for (i = 0; i < Global_1898330; i = i + 1)
			{
				if (!func_178(Global_1898330[i]))
				{
					Global_1898330[i] = iParam0;
					Global_1898346[i /*6*/] = { unk };
					func_177(i, true);
					func_176(iParam0, true);
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

void func_122(Hash hParam0) // Position - 0x381A Hash - 0x2310F0AA ^0x2CE4B7A2
{
	int num;
	int i;
	Ped ped;

	num = func_115(hParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_173(i, &num))
		{
			ped = func_64(func_175(hParam0));
		
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

void func_123(int iParam0) // Position - 0x386F Hash - 0x646928F0 ^0x646928F0
{
	func_179(iParam0);
	return;
}

void func_124(BOOL bParam0) // Position - 0x387D Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898164 = Global_1898164 || bParam0;
	return;
}

int func_125(int iParam0) // Position - 0x3890 Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_126(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0x3911 Hash - 0x6EB69AE6 ^0xE9AB1EC1
{
	var unk;

	uParam0.f_2 = iParam5;
	unk = *uParam6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &uParam0))
	{
		*uParam6 = unk;
		return true;
	}
	else
	{
		bParam7;
	}

	return false;
}

int func_127(int iParam0) // Position - 0x3941 Hash - 0x696B5244 ^0x696B5244
{
	switch (iParam0)
	{
		case joaat("MOOD_JACK"):
			return 26;
	
		case joaat("MOOD_SEAN"):
			return 21;
	
		case joaat("MOOD_PEARSON"):
			return 29;
	
		case joaat("event"):
			return 6;
	
		case joaat("Griefing"):
			return 4;
	
		case joaat("MOOD_KAREN"):
			return 32;
	
		case joaat("MOOD_TRELAWNY"):
			return 35;
	
		case joaat("MOOD_ABIGAIL"):
			return 25;
	
		case joaat("MOOD_SADIE_ADLER"):
			return 24;
	
		case joaat("MOOD_SWANSON"):
			return 33;
	
		case joaat("MOOD_JAVIER"):
			return 15;
	
		case joaat("MOOD_ARTHUR"):
			return 12;
	
		case 1871598:
			return 9;
	
		case joaat("MOOD_LENNY"):
			return 22;
	
		case joaat("MOOD_TILLY"):
			return 34;
	
		case joaat("MOOD_SUSAN_GRIMSHAW"):
			return 31;
	
		case joaat("MOOD_UNCLE"):
			return 17;
	
		case joaat("MOOD_DUTCH"):
			return 13;
	
		case joaat("ARRANGEMENT"):
			return 2;
	
		case joaat("base"):
			return 1;
	
		case joaat("SUPPLY"):
			return 3;
	
		case joaat("MOOD_MOLLY_OSHEA"):
			return 28;
	
		case joaat("MOOD_HOSEA"):
			return 18;
	
		case joaat("MOOD_BILL"):
			return 16;
	
		case joaat("MOOD_MARY_BETH"):
			return 27;
	
		case joaat("MOOD_CHARLES"):
			return 20;
	
		case joaat("MOOD_STRAUSS"):
			return 30;
	
		case joaat("MOOD_ODRISCOLL"):
			return 23;
	
		case joaat("MOOD_MICAH"):
			return 19;
	
		case joaat("Vignette"):
			return 10;
	
		case joaat("FLOW_FIRST_VISIT"):
			return 8;
	
		case joaat("flow"):
			return 7;
	
		case joaat("MOOD_JOHN"):
			return 14;
	
		case joaat("VIG_CAMP_ONLY"):
			return 11;
	
		default:
		
	}

	return 0;
}

BOOL func_128(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int* piParam6, BOOL bParam7) // Position - 0x3AC2 Hash - 0x75EEBFEF ^0xD9E5F860
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam6, &uParam0))
		return true;
	else
		bParam7;

	return false;
}

int func_129(int iParam0) // Position - 0x3AE8 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_130(int iParam0) // Position - 0x3B0D Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_131(int iParam0) // Position - 0x3B20 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_132(int iParam0) // Position - 0x3B33 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_133(int iParam0) // Position - 0x3B46 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_134(int iParam0) // Position - 0x3B58 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_135(int iParam0, int iParam1) // Position - 0x3B6A Hash - 0x893AC59E ^0x893AC59E
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
				else if (iParam1 % &func_3 == 0)
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

void func_136(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3C04 Hash - 0xA65AB937 ^0xA65AB937
{
	func_181(uParam0, iParam6);
	func_182(uParam0, iParam5);
	func_183(uParam0, iParam4);
	func_184(uParam0, iParam3);
	func_185(uParam0, iParam2);
	func_186(uParam0, iParam1);
	return;
}

int func_137(int iParam0, var uParam1, var uParam2) // Position - 0x3C3C Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_187(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_138(int iParam0) // Position - 0x3C5E Hash - 0xE426C523 ^0x42DA665A
{
	*iParam0 = 176656832;
	iParam0->f_1 = -15;
	iParam0->f_2 = 1017034651;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	return;
}

void func_139(Ped pedParam0) // Position - 0x3C88 Hash - 0x62C06DD3 ^0x6D6D632E
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

float func_140(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x3CEB Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

Hash func_141(int iParam0) // Position - 0x3D09 Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_57(iParam0))
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

	if (!func_57(iParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_142(int iParam0) // Position - 0x3DEA Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_57(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		persCharHash = func_98(iParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[iParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[iParam0 /*60*/].f_7);
	
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}

	return Global_1360165[iParam0 /*1157*/].f_126;
}

BOOL func_143(int iParam0) // Position - 0x3E86 Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_149(&(iParam0->f_29), 62))
	{
		switch (func_188())
		{
			case 1:
				if (!func_149(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_149(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_149(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_149(&(iParam0->f_29), 32))
					if (func_149(&(iParam0->f_29), 2))
						if (func_132(func_86()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

BOOL func_144(int iParam0) // Position - 0x3F30 Hash - 0x93C8DA75 ^0x93C8DA75
{
	return func_145(iParam0) == 0;
}

int func_145(int iParam0) // Position - 0x3F40 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_178(iParam0))
		return -1;

	return func_83(iParam0);
}

BOOL func_146(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3F5C Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_189(bParam1, bParam2, bParam3);

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

BOOL func_147(Hash hParam0) // Position - 0x4093 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case 7:
		case 36:
			return 1;
	}

	return 0;
}

BOOL func_148() // Position - 0x40B7 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_149(var uParam0, int iParam1) // Position - 0x40C5 Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

BOOL func_150() // Position - 0x40E5 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_151(int iParam0) // Position - 0x4105 Hash - 0x2CA81420 ^0xF4BC7BB7
{
	if (func_148() == false)
		return true;

	switch (iParam0)
	{
		case 18:
			return func_109(Global_1347702[21 /*49*/].f_15, true);
	
		case 44:
			return func_109(Global_1347702[83 /*49*/].f_15, true);
	}

	return true;
}

int func_152() // Position - 0x4158 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1898438;
}

BOOL func_153(Hash hParam0, BOOL bParam1) // Position - 0x4164 Hash - 0x97F0E2FC ^0x97F0E2FC
{
	if (bParam1 != -1)
		return false;

	if (func_103(hParam0))
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

BOOL func_154(int iParam0, int iParam1) // Position - 0x4228 Hash - 0x718DD1EF ^0x863E326
{
	return iParam0->f_63 && iParam1 != false;
}

Vector3 func_155(int iParam0) // Position - 0x4239 Hash - 0x92A36B48 ^0x92A36B48
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
	
		default:
		
	}

	return 5f, 5f, 5f;
}

int func_156(int iParam0) // Position - 0x4260 Hash - 0xA5C2BBC7 ^0xA5C2BBC7
{
	switch (iParam0)
	{
		case 14:
			return 19;
	
		default:
		
	}

	return 0;
}

Vector3 func_157(int iParam0) // Position - 0x427C Hash - 0xE4F42658 ^0xFC03374
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

float func_158(Hash hParam0) // Position - 0x434F Hash - 0x944FFAA0 ^0x944FFAA0
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

void func_159(var uParam0, int iParam1) // Position - 0x43AA Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

int func_160(int iParam0) // Position - 0x43BB Hash - 0x84838E68 ^0x84838E68
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

BOOL func_161(int iParam0) // Position - 0x443E Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_162(int iParam0) // Position - 0x4454 Hash - 0xC62F3EC7 ^0x941BF203
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);

	return false;
}

BOOL func_163(int iParam0) // Position - 0x447D Hash - 0x89548BD6 ^0x617C5136
{
	if (!func_190(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return true;
	
		if (func_191(iParam0))
			if (BUILTIN::VDIST(Global_36, func_192(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_192(iParam0), false) <= func_193();
	
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= func_193();
	}

	return func_194();
}

BOOL func_164(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x450D Hash - 0x561CE123 ^0xB84B7B4C
{
	if (hParam0 == 18)
		return false;

	if (hParam0 == 71)
		return false;

	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[hParam0 /*74*/].f_27) && Global_1835011[hParam0 /*74*/].f_21 == iParam2)
		return true;

	return false;
}

void func_165(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x455A Hash - 0x436A2EB9 ^0x436A2EB9
{
	Hash hash;
	Hash hash2;
	Hash styleHash;

	if (!func_178(iParam0))
		return;

	switch (func_195(iParam0))
	{
		case 1:
			hash = func_196(iParam0);
		
			if (func_197(hash, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
				if (func_153(hash, -1) && !Global_1835011[hash /*74*/].f_70 && Global_1835011[hash /*74*/].f_63 & 2 == 0)
					styleHash = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				else
					styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
			else if (func_153(hash, -1) && !Global_1835011[hash /*74*/].f_70 && Global_1835011[hash /*74*/].f_63 & 2 == 0)
				styleHash = joaat("BLIP_STYLE_MISSION_RADIUS");
			else
				styleHash = joaat("BLIP_STYLE_MISSION");
		
			if (Global_1835011[hash /*74*/].f_28 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1835011[hash /*74*/].f_27, styleHash);
			
				if (!func_111(hash))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[hash /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
			
				if (func_154(&Global_1835011[hash /*74*/], 2))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[hash /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
			
				Global_1835011[hash /*74*/].f_28 = styleHash;
			}
			break;
	
		case 8:
			hash2 = func_196(iParam0);
		
			if (func_198(hash2, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_199(hash2))
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
				styleHash = func_199(hash2);
			}
		
			if (Global_1347702[hash2 /*49*/].f_38 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1347702[hash2 /*49*/].f_37, styleHash);
				func_200(hash2);
				Global_1347702[hash2 /*49*/].f_38 = styleHash;
			}
			break;
	}

	return;
}

BOOL func_166(int iParam0) // Position - 0x4756 Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_148() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_167(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x479B Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_201(iParam0, &num, &num2);

	if (!func_202(iParam0, num, num2, bParam2))
		return;

	if (!func_203(iParam0, 1024))
		return;

	func_204(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
	return;
}

BOOL func_168(Ped pedParam0, Hash hParam1) // Position - 0x47FB Hash - 0x2ACCF512 ^0x1B61D374
{
	return PED::IS_PED_USING_SCENARIO_HASH(pedParam0, hParam1);
}

float func_169(Hash hParam0) // Position - 0x480B Hash - 0x6DA75D4 ^0x6DA75D4
{
	return func_158(hParam0) / 2f;
}

int func_170(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x481B Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_171(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4856 Hash - 0xB13E2226 ^0xA63BD3BC
{
	Hash hash;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_205())
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
		hash = func_196(Global_1898164.f_1[0 /*5*/]);
	
		if (func_206(hash) && func_174(Global_1347702[hash /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_178(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_172(int iParam0, int iParam1) // Position - 0x4A5A Hash - 0x4134D2DF ^0x8D80BF31
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_173(i, &iParam0))
			if (Global_40.f_4942[i /*60*/].f_59 != 0 && Global_40.f_4942[i /*60*/].f_59 != iParam1)
				return true;
	}

	return false;
}

BOOL func_173(int iParam0, var uParam1) // Position - 0x4AAA Hash - 0x997B939E ^0x997B939E
{
	int num;

	if (!func_12(iParam0))
		return false;

	num = func_207(iParam0);
	return *uParam1 && num != false;
}

BOOL func_174(int iParam0, int iParam1) // Position - 0x4AD0 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_175(Hash hParam0) // Position - 0x4ADF Hash - 0x297139D9 ^0x297139D9
{
	if (!func_72(hParam0))
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

void func_176(int iParam0, BOOL bParam1) // Position - 0x4D13 Hash - 0x3C4FA973 ^0x67C1D80B
{
	if (!func_178(iParam0))
		return;

	if (!func_144(iParam0))
		return;

	if (bParam1)
	{
		if (func_208(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_208(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_195(iParam0), func_196(iParam0), func_209(iParam0), func_208(iParam0), Global_36);
		}
	}

	func_210(iParam0, 1);
	bParam1 = bParam1;
	return;
}

void func_177(int iParam0, BOOL bParam1) // Position - 0x4D84 Hash - 0x23CB6788 ^0xB008F1A1
{
	if (Global_1898346[iParam0 /*6*/].f_2 == false || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_211(Global_1898330[iParam0]);
		func_212(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}

	return;
}

BOOL func_178(int iParam0) // Position - 0x4DE5 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_179(int iParam0) // Position - 0x4E18 Hash - 0x195570A8 ^0x195570A8
{
	if (!func_178(iParam0))
		return;

	if (!func_52(iParam0))
		return;

	func_210(iParam0, 2);
	return;
}

var func_180(BOOL bParam0, var uParam1, var uParam2) // Position - 0x4E41 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_181(var uParam0, int iParam1) // Position - 0x4E58 Hash - 0xD05180BA ^0x39589262
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

void func_182(var uParam0, int iParam1) // Position - 0x4EDE Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_183(var uParam0, int iParam1) // Position - 0x4F1A Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_130(*uParam0);
	num2 = func_129(*uParam0);

	if (iParam1 < 1 || iParam1 > func_135(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_184(var uParam0, int iParam1) // Position - 0x4F6D Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_185(var uParam0, int iParam1) // Position - 0x4FA8 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_186(var uParam0, int iParam1) // Position - 0x4FE1 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

int func_187(int iParam0, int iParam1) // Position - 0x5019 Hash - 0x99A93628 ^0x27AE8C83
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
			return &func_3;
	
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

int func_188() // Position - 0x6726 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

BOOL func_189(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6732 Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_190(int iParam0) // Position - 0x67D0 Hash - 0xBF3EFB31 ^0xBF3EFB31
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

BOOL func_191(int iParam0) // Position - 0x6800 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 22:
			return true;
	}

	return false;
}

Vector3 func_192(int iParam0) // Position - 0x681E Hash - 0xC7BD7946 ^0xC0EC040B
{
	switch (iParam0)
	{
		case 22:
			return -2578.5088f, 389.3037f, 148.3825f;
	}

	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_193() // Position - 0x6855 Hash - 0x97B49396 ^0x97B49396
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

BOOL func_194() // Position - 0x6891 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

int func_195(int iParam0) // Position - 0x68A1 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_178(iParam0))
		return 0;

	return func_213(func_211(iParam0));
}

Hash func_196(int iParam0) // Position - 0x68C1 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_178(iParam0))
		return -1;

	return func_214(func_211(iParam0));
}

BOOL func_197(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x68E1 Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_164(hParam0, bParam2, iParam3))
		return true;

	return false;
}

BOOL func_198(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x6903 Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_215(hParam0, bParam2, iParam3))
		return true;

	return false;
}

Blip func_199(Hash hParam0) // Position - 0x6925 Hash - 0xBD05D4EC ^0x11B65A46
{
	int num;

	num = joaat("BLIP_STYLE_RCM");

	if (!func_206(hParam0))
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

void func_200(Hash hParam0) // Position - 0x69B8 Hash - 0xAC04978C ^0x82563A0D
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

void func_201(int iParam0, var uParam1, var uParam2) // Position - 0x6A0F Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_202(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x6A2B Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_216(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_217(iParam0))
		return false;

	if (func_218(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_203(iParam0, 1) || func_77(32768))
		if (!func_203(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_219())
		return false;

	return true;
}

BOOL func_203(int iParam0, int iParam1) // Position - 0x6ACD Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_204(int iParam0, int iParam1) // Position - 0x6AE6 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_205() // Position - 0x6B0A Hash - 0x2C13EB06 ^0x38F12C8A
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

BOOL func_206(Hash hParam0) // Position - 0x6B5D Hash - 0x5A094C43 ^0x5A094C43
{
	return hParam0 > -1 && hParam0 < 200;
}

int func_207(int iParam0) // Position - 0x6B73 Hash - 0xBE2A032D ^0xE6F2CF3B
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

Hash func_208(int iParam0) // Position - 0x6B82 Hash - 0x2F57FA7D ^0x914B8AA9
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_5;

	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_209(int iParam0) // Position - 0x6BAD Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_178(iParam0))
		return -1;

	return func_220(func_211(iParam0));
}

void func_210(int iParam0, int iParam1) // Position - 0x6BCD Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_178(iParam0))
		return;

	func_221(iParam0, iParam1);
	return;
}

BOOL func_211(int iParam0) // Position - 0x6BEA Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

void func_212(BOOL bParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x6C28 Hash - 0x4C217CF1 ^0x4C217CF1
{
	*iParam3 = func_213(bParam0);
	*hParam1 = func_214(bParam0);
	*iParam2 = func_220(bParam0);
	return;
}

int func_213(BOOL bParam0) // Position - 0x6C4B Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_214(BOOL bParam0) // Position - 0x6C58 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_215(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x6C6B Hash - 0xB3D5384F ^0xC314784E
{
	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37) && Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
		return Global_1347702[hParam0 /*49*/].f_27 == iParam2;

	return false;
}

BOOL func_216(int iParam0, int iParam1) // Position - 0x6CAF Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_148() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_217(int iParam0) // Position - 0x6CE2 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_148() != -1)
		if (func_203(iParam0, 4))
			return false;
	else if (func_203(iParam0, 2))
		return false;

	return true;
}

BOOL func_218(int iParam0) // Position - 0x6D12 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_203(iParam0, 65536) && !func_203(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_203(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_203(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_219() // Position - 0x6DBE Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

int func_220(BOOL bParam0) // Position - 0x6DCD Hash - 0xFA7B3D3 ^0x826FC8D8
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 15) & 16383;
}

void func_221(int iParam0, int iParam1) // Position - 0x6DE1 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_222(iParam0);
	else
		func_223(iParam0, iParam1);

	func_224();
	return;
}

int func_222(int iParam0) // Position - 0x6E29 Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_125(iParam0);

	if (num < 0)
		return 0;

	return func_225(num);
}

int func_223(int iParam0, int iParam1) // Position - 0x6E49 Hash - 0xF3EA5EAF ^0xA48F5774
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
			func_226(num2);
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

void func_224() // Position - 0x6FB9 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

int func_225(int iParam0) // Position - 0x6FDC Hash - 0x78E19743 ^0x6ACC64F5
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

int func_226(int iParam0) // Position - 0x7090 Hash - 0x6DD34799 ^0x352A62D8
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

