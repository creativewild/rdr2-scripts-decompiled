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
	BOOL bLocal_14 = 0;
	BOOL bLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
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

void main() // Position - 0x0 Hash - 0xC0A71277 ^0x97B00ACF
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_16 = 266000;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1(&uLocal_27);

	func_2(&uLocal_27, &uScriptParam_0);

	while (!func_3(&uLocal_27))
	{
		func_4(&uLocal_27);
	
		switch (func_5(uLocal_27))
		{
			case 0:
				if (func_6(&uLocal_27))
					func_7(&uLocal_27, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_27))
					func_7(&uLocal_27, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_27))
					func_7(&uLocal_27, 3);
				break;
		
			case 3:
				func_1(&uLocal_27);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_27);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0xB7 Hash - 0x5C967931 ^0xE89D747F
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

int func_2(var uParam0, var uParam1) // Position - 0x14F Hash - 0x11824BFA ^0x305C042C
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

BOOL func_3(var uParam0) // Position - 0x19C Hash - 0xE6F09C07 ^0x349208FC
{
	if (func_20(Global_1935630, 16384))
		return true;

	if (!func_16(uParam0, 8))
		if (func_20(Global_1935630, 32768))
			return true;

	return false;
}

void func_4(var uParam0) // Position - 0x1D6 Hash - 0xCC0866FC ^0x1CE74C37
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

int func_5(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x259 Hash - 0xBE425958 ^0xBE425958
{
	return uParam0;
}

BOOL func_6(var uParam0) // Position - 0x263 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

void func_7(var uParam0, int iParam1) // Position - 0x26C Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_8(var uParam0) // Position - 0x279 Hash - 0xE70F011 ^0xCE61FB0
{
	if (!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
		return false;

	return func_21(uParam0);
}

BOOL func_9(var uParam0) // Position - 0x2B1 Hash - 0xEDB66132 ^0xEDB66132
{
	BOOL num;

	num = 1;

	if (!func_22())
		num = 0;

	if (!func_23(uParam0))
		num = 0;

	return num;
}

void func_10() // Position - 0x2D6 Hash - 0xF2ADC204 ^0xF23F9A2E
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

int func_11(var uParam0) // Position - 0x319 Hash - 0xF0E2880D ^0x5D1F00AC
{
	func_26(true);
	POPULATION::ENABLE_AMBIENT_ROAD_POPULATION();
	AUDIO::STOP_AUDIO_SCENES();
	Global_1327479.f_9 = 0;
	return 1;
}

BOOL func_12(int iParam0) // Position - 0x336 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

BOOL func_13(int iParam0) // Position - 0x355 Hash - 0xDA629583 ^0xDA629583
{
	return func_27(iParam0, 16, true);
}

BOOL func_14(int iParam0) // Position - 0x366 Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_12(iParam0))
		return false;

	if (!func_13(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x39A Hash - 0xA4706F79 ^0xAF27D1D3
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

	func_28(iParam0, false);
	func_29(iParam0, 4, false);
	func_30(iParam0);
	func_31(iParam0);
	func_32(iParam0, 37, true);
	flag = func_33(Global_1360165[iParam0 /*1157*/], 0);
	persChar = func_34(iParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);

	if (func_35(iParam0, 64, true))
		func_32(iParam0, 64, true);

	if (bParam3)
	{
		func_32(iParam0, 33, true);
		func_32(iParam0, 34, true);
		func_36(iParam0, 1056964608, -1, 1061158912);
		func_37(iParam0, true, true, false);
	
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
			func_38(iParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_32(iParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
	
		func_24(iParam0, 33, true);
		func_37(iParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = iParam4;
			func_25(&(Global_1360165[iParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_39(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_24(iParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			func_40(iParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);

	if (func_35(iParam0, 45, true))
		func_32(iParam0, 45, true);

	func_41(iParam0, 16, true);
	func_32(iParam0, 44, true);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_33(func_42(iParam0), 0))
			func_43(0, iParam0, bParam3, 0, bParam2);

	return;
}

BOOL func_16(var uParam0, int iParam1) // Position - 0x64F Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x660 Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x678 Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

void func_19(var uParam0) // Position - 0x68B Hash - 0x21A28AFE ^0x42E52C8
{
	func_26(false);
	POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(true);
	MAP::SET_WAYPOINT_OFF();
	AUDIO::_START_AUDIO_SCENESET("pre_ride", "beechers_ride_scenes");
	return;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x6AB Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_21(var uParam0) // Position - 0x6BA Hash - 0x2DF5A077 ^0x2DF5A077
{
	return 1;
}

BOOL func_22() // Position - 0x6C3 Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_23(var uParam0) // Position - 0x6D0 Hash - 0xAF67A938 ^0x1DB500CD
{
	Ped mount;

	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 297, true);
	PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	mount = PED::GET_MOUNT(Global_35);

	if (!ENTITY::IS_ENTITY_DEAD(mount))
	{
		PED::SET_PED_RESET_FLAG(mount, 49, true);
		PED::SET_PED_RESET_FLAG(mount, 53, true);
	}

	if (func_44())
		return true;

	return false;
}

void func_24(int iParam0, int iParam1, BOOL bParam2) // Position - 0x72F Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_45(iParam0))
			return;

	func_46(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_25(var uParam0, BOOL bParam1) // Position - 0x769 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_47(uParam0))
		func_48(uParam0);

	return;
}

void func_26(BOOL bParam0) // Position - 0x789 Hash - 0x7248E6C9 ^0xFE629142
{
	int i;
	int j;

	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
	
		for (i = 0; i <= 4; i = i + 1)
		{
			func_49(i, 4096);
		
			if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[i /*373*/].f_1))
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[i /*373*/].f_1, false);
		}
	}
	else
	{
		for (j = 0; j <= 4; j = j + 1)
		{
			if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[j /*373*/].f_1))
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[j /*373*/].f_1, true);
		}
	
		VEHICLE::_0x4C05B42A8D937796();
		VEHICLE::_0x16B86A49E072AA85();
	}

	if (func_50() == -1)
		Global_1430221.f_1 = !bParam0;

	return;
}

BOOL func_27(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x82A Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_45(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

void func_28(int iParam0, BOOL bParam1) // Position - 0x854 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_45(iParam0))
		return;

	if (bParam1)
		if (func_51(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
			func_29(iParam0, 1, false);

	func_29(iParam0, 16, bParam1);
	return;
}

void func_29(int iParam0, int iParam1, BOOL bParam2) // Position - 0x896 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_45(iParam0))
		return;

	func_52(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_30(int iParam0) // Position - 0x8BE Hash - 0x7895582D ^0x7895582D
{
	func_29(iParam0, 8, false);
	return;
}

void func_31(int iParam0) // Position - 0x8CF Hash - 0x8577BCFD ^0x8577BCFD
{
	func_24(iParam0, 36, true);
	return;
}

void func_32(int iParam0, int iParam1, BOOL bParam2) // Position - 0x8E0 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_45(iParam0))
			return;

	func_46(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_33(Ped pedParam0, int iParam1) // Position - 0x91A Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_53(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_53(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_53(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_53(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_53(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_53(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_53(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_53(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_34(int iParam0, BOOL bParam1) // Position - 0xA19 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(iParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
			func_54(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_1;
}

BOOL func_35(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA58 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_45(iParam0))
			return false;

	func_46(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

void func_36(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA93 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(iParam0))
	{
		ped = func_55(iParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_56(iParam0);
		}
	}

	if (func_35(iParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_55(iParam0), 137, true);

	return;
}

void func_37(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xAE5 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_45(iParam0))
		return;

	if (bParam1)
	{
		func_32(iParam0, 50, true);
		func_32(iParam0, 48, true);
		func_32(iParam0, 49, true);
		func_32(iParam0, 51, true);
		func_32(iParam0, 52, true);
		func_32(iParam0, 54, true);
		func_32(iParam0, 55, true);
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
			func_32(iParam0, 54, true);
	
		if (!bParam2)
		{
			func_24(iParam0, 52, true);
		
			if (bParam3)
				func_24(iParam0, 55, true);
		}
		else
		{
			func_32(iParam0, 52, true);
		
			if (!bParam3)
				func_32(iParam0, 55, true);
		}
	}

	return;
}

void func_38(int iParam0, BOOL bParam1) // Position - 0xBB7 Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_45(iParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_55(iParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_55(iParam0), 204, false);

	return;
}

void func_39(var uParam0) // Position - 0xBEE Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_40(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC04 Hash - 0x6E8FD624 ^0x6E8FD624
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

	if (func_35(iParam0, 32, true))
		if (!bParam2)
			return;

	char = func_34(iParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_55(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_57(iParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_58(iParam0);
		func_24(iParam0, 1, true);
	}

	return;
}

void func_41(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD12 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] - Global_40.f_4942[iParam0 /*60*/] && bParam1;
	return;
}

Ped func_42(int iParam0) // Position - 0xD4E Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
		Global_1360165[iParam0 /*1157*/].f_70 = 0;

	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_43(int iParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0xD8E Hash - 0xBD80856C ^0xBD80856C
{
	Ped ped;

	if (!func_45(iParam1))
		return;

	ped = func_42(iParam1);

	if (func_59(iParam1))
		if (!func_60(iParam1))
			return;

	func_32(iParam1, 39, true);
	func_61(iParam1, 64, false);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_61(iParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (!bParam2)
		{
			func_61(iParam1, 512, true);
			PED::SET_PED_KEEP_TASK(ped, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, false);
			func_24(iParam1, 43, true);
		}
	
		if (bParam4)
			func_62(iParam1, false, true, true, true);
	}

	return;
}

BOOL func_44() // Position - 0xE30 Hash - 0xD26F9AEE ^0x9001B107
{
	switch (iLocal_17)
	{
		case 0:
			func_63(420, 420, true);
			Global_1327479.f_9 = 1;
			func_64(420);
			func_65(420f, true, false);
			func_48(&uLocal_18);
			iLocal_17 = iLocal_17 + 1;
			break;
	
		case 1:
			if (func_66(Global_35))
			{
				if (!func_67(Global_35, -2540.5f, 584.9f, 139.5f, 100f, true, true) || func_68())
				{
					AUDIO::_SET_AUDIO_SCENESET("ride", "beechers_ride_scenes");
					AUDIO::TRIGGER_MUSIC_EVENT("AB21_BEECHERS_RIDE_SONG_EVENT");
					UIFEED::_UI_FEED_CLEAR_ALL_CHANNELS();
					func_48(&uLocal_24);
					bLocal_14 = true;
					iLocal_17 = iLocal_17 + 1;
				}
			}
			break;
	
		case 2:
			if (AUDIO::_0xE600F61F54A444A6())
				iLocal_17 = iLocal_17 + 1;
			break;
	
		case 3:
			if (!AUDIO::_0xE600F61F54A444A6())
			{
				AUDIO::_STOP_AUDIO_SCENESET("beechers_ride_scenes");
				return true;
			}
			else if (!bLocal_14)
			{
				AUDIO::_STOP_AUDIO_SCENESET("beechers_ride_scenes");
				return true;
			}
			else if (AUDIO::_0xE600F61F54A444A6() && AUDIO::GET_MUSIC_PLAYTIME() >= iLocal_16 - 7000)
			{
				AUDIO::_STOP_AUDIO_SCENESET("beechers_ride_scenes");
				return true;
			}
			else if (func_69(0, true, true))
			{
				AUDIO::_STOP_AUDIO_SCENESET("beechers_ride_scenes");
				return true;
			}
			else
			{
				if (!func_47(&uLocal_21))
				{
					if (!func_70(Global_35))
						func_48(&uLocal_21);
				}
				else if (func_70(Global_35))
				{
					func_39(&uLocal_21);
				}
				else if (func_71(&uLocal_21) > 30f)
				{
					func_72("AB21_BEECHERS_RIDE_SONG_EARLY_STOP", false);
					bLocal_14 = false;
				}
			
				if (!func_73(Global_35, PED::_GET_LAST_MOUNT(Global_35), 8f, true))
				{
					func_72("AB21_BEECHERS_RIDE_SONG_EARLY_STOP", false);
					bLocal_14 = false;
				}
			
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0 && !PED::IS_PED_ON_MOUNT(Global_35))
				{
					func_72("AB21_BEECHERS_RIDE_SONG_EARLY_STOP", false);
					bLocal_14 = false;
				}
			
				if (PED::IS_PED_SHOOTING(Global_35) || PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					func_72("AB21_BEECHERS_RIDE_SONG_EARLY_STOP", false);
					bLocal_14 = false;
				}
			}
		
			if (func_71(&uLocal_18) >= 420f)
			{
			}
			else if (bLocal_15 && func_71(&uLocal_18) >= 10f && func_74("WNT_CAM_HELP", 10000, 0, 0, 1, true) != 0)
			{
				bLocal_15 = false;
			}
			break;
	}

	return false;
}

BOOL func_45(int iParam0) // Position - 0x105D Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

int func_46(int iParam0, var uParam1, var uParam2) // Position - 0x1069 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_47(var uParam0) // Position - 0x1086 Hash - 0x5001E582 ^0x5001E582
{
	return func_75(*uParam0, 1);
}

void func_48(var uParam0) // Position - 0x1096 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_76(uParam0, 0f);
	return;
}

void func_49(int iParam0, BOOL bParam1) // Position - 0x10A5 Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_77(iParam0))
		return;

	Global_40.f_11029[iParam0 /*5*/] = Global_40.f_11029[iParam0 /*5*/] || bParam1;
	return;
}

BOOL func_50() // Position - 0x10D1 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_51(var uParam0, int iParam1) // Position - 0x10DF Hash - 0xE46677C2 ^0xE46677C2
{
	return *uParam0 && iParam1 != false;
}

void func_52(var uParam0, int iParam1, BOOL bParam2) // Position - 0x10EF Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*uParam0 = *uParam0 || iParam1;
	else
		*uParam0 = *uParam0 - *uParam0 && iParam1;

	return;
}

BOOL func_53(int iParam0, int iParam1) // Position - 0x1115 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_54(int iParam0) // Position - 0x1124 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_45(iParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		hash = func_78(iParam0);
	
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

Ped func_55(int iParam0) // Position - 0x118C Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_45(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

void func_56(int iParam0) // Position - 0x11C6 Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_55(iParam0)))
		{
			func_79(iParam0, 67108864, true);
			func_32(iParam0, 19, true);
		}
	}

	return;
}

float func_57(int iParam0) // Position - 0x11F9 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_45(iParam0))
		return 0f;

	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_58(int iParam0) // Position - 0x121A Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_55(iParam0);
	persChar = func_34(iParam0, false);
	func_80(iParam0, ped);

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

BOOL func_59(int iParam0) // Position - 0x1274 Hash - 0x6410553A ^0x46627D03
{
	if (!func_45(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_60(int iParam0) // Position - 0x12C0 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_45(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_61(int iParam0, int iParam1, BOOL bParam2) // Position - 0x12E8 Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_45(iParam0))
		return;

	if (bParam2)
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 - Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_62(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x134D Hash - 0x9AECF115 ^0xB93A91A1
{
	Ped mount;
	int num;
	PersChar persChar;

	if (!func_45(iParam0))
		return 0;

	mount = func_42(iParam0);

	if (func_33(mount, 0))
	{
		if (func_33(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_59(iParam0) || func_60(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_81(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				num = func_82(iParam0, true);
			
				if (num != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_83(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_84(iParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_84(iParam0, false));
					func_85(iParam0);
				}
			}
			else
			{
				if (func_27(iParam0, 32768, true))
				{
					persChar = func_84(iParam0, false);
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
		if (func_33(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_27(iParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
			
				func_83(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_84(iParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_84(iParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_83(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_86(iParam0, 0);
	return 1;
}

void func_63(int iParam0, int iParam1, BOOL bParam2) // Position - 0x14FE Hash - 0xD61623D0 ^0x48AE56A
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_87(iParam0, iParam1, bParam2);
	return;
}

void func_64(int iParam0) // Position - 0x151A Hash - 0x91D26FE0 ^0x16E03A4B
{
	Global_1415398.f_3 = MISC::GET_GAME_TIMER() + (iParam0 * 1000);
	return;
}

void func_65(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1532 Hash - 0x34E92140 ^0x216EC835
{
	float num;
	float num2;
	BOOL flag;

	num = func_88();
	num2 = Global_1393447.f_60 - num;
	flag = fParam0 >= num2;

	if (!bParam1)
		if (flag)
			bParam1 = true;

	if (!flag && fParam0 >= 0f && !bParam2)
	{
	}
	else
	{
		Global_1393447.f_60 = num + fParam0;
	}

	return;
}

BOOL func_66(Ped pedParam0) // Position - 0x1585 Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

BOOL func_67(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x15A0 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), fParam1) <= fParam4 * fParam4)
			return true;
	else if (func_89(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), fParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_68() // Position - 0x15FB Hash - 0x5C142DB8 ^0x9891453E
{
	Vector3 vector;

	if (PATHFIND::_0xEFC535C9FAF563B3(&vector))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(-305.7542f, 793.8676f, 117.0224f, vector, true) < 400f || MISC::GET_DISTANCE_BETWEEN_COORDS(-808.5521f, -1279.3148f, 42.6591f, vector, true) < 400f)
		{
			bLocal_15 = true;
			return true;
		}
	}

	return false;
}

BOOL func_69(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1659 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_90())
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
		num = func_91(Global_1898164.f_1[0 /*5*/]);
	
		if (func_92(num) && func_93(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_94(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_70(Ped pedParam0) // Position - 0x185D Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

float func_71(var uParam0) // Position - 0x187A Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_47(uParam0))
		return 0f;

	if (func_95(uParam0))
		return uParam0->f_2;

	return func_88() - uParam0->f_1;
}

int func_72(char* sParam0, BOOL bParam1) // Position - 0x18AC Hash - 0x8E1CC16C ^0x45457294
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 1;

	if (bParam1)
		if (!AUDIO::PREPARE_MUSIC_EVENT(sParam0))
			return 0;

	if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
		return 1;

	return 0;
}

BOOL func_73(Ped pedParam0, Ped pedParam1, float fParam2, BOOL bParam3) // Position - 0x18E2 Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pedParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

int func_74(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x192A Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_75(int iParam0, int iParam1) // Position - 0x1965 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_76(var uParam0, float fParam1) // Position - 0x1974 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_88() - fParam1;
	func_96(uParam0, 1);
	func_97(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_77(int iParam0) // Position - 0x199A Hash - 0xB32B029D ^0xB32B029D
{
	if (iParam0 <= -1 || iParam0 >= 13)
		return false;

	return true;
}

Hash func_78(int iParam0) // Position - 0x19B9 Hash - 0xBA965109 ^0xCB1D208B
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

void func_79(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B95 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] || bParam1;
	return;
}

void func_80(int iParam0, Ped pedParam1) // Position - 0x1BC6 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_98(pedParam1);

	return;
}

float func_81(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x1BE0 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));

	return func_89(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));
}

Hash func_82(int iParam0, BOOL bParam1) // Position - 0x1C37 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_45(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_99(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_83(int iParam0) // Position - 0x1D7C Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Ped ped;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	ped = func_42(iParam0);

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

PersChar func_84(int iParam0, BOOL bParam1) // Position - 0x1DF2 Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_45(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[iParam0 /*1157*/].f_126 = func_100(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_85(int iParam0) // Position - 0x1E3E Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_45(iParam0))
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

void func_86(int iParam0, int iParam1) // Position - 0x1E91 Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_45(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

void func_87(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1EB5 Hash - 0x4464293B ^0x680D2F86
{
	if (Global_1327479.f_9)
		return;

	Global_1327479.f_4 = Global_1327479.f_4 + (iParam0 * 1000);

	if (bParam2)
		Global_1310750.f_16106 = { Global_36 };

	if (iParam1 == 0)
		if (iParam0 > 0)
			Global_1327479.f_5 = MISC::GET_GAME_TIMER() + ((Global_1327479.f_4 - MISC::GET_GAME_TIMER()) / 2);
		else
			Global_1327479.f_5 = Global_1327479.f_5 + (iParam0 * 500);
	else
		Global_1327479.f_5 = MISC::GET_GAME_TIMER() + (iParam1 * 1000);

	return;
}

float func_88() // Position - 0x1F3A Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

float func_89(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1F6C Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_90() // Position - 0x1F8A Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_91(int iParam0) // Position - 0x1FDD Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_94(iParam0))
		return -1;

	return func_102(func_101(iParam0));
}

BOOL func_92(int iParam0) // Position - 0x1FFD Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_93(int iParam0, int iParam1) // Position - 0x2013 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_94(int iParam0) // Position - 0x2022 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_95(var uParam0) // Position - 0x2055 Hash - 0x39705408 ^0x39705408
{
	return func_75(*uParam0, 2);
}

void func_96(var uParam0, int iParam1) // Position - 0x2065 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_97(var uParam0, int iParam1) // Position - 0x2076 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_98(Ped pedParam0) // Position - 0x208B Hash - 0x43F4C7F1 ^0x478815C9
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

int func_99(int iParam0) // Position - 0x20EE Hash - 0xEB890713 ^0xB40CD388
{
	int num;
	int i;

	num = 0;

	if (!func_45(iParam0))
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

	if (!func_45(iParam0))
	{
		if (num != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return num;
}

PersChar func_100(int iParam0) // Position - 0x21CF Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_45(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		persCharHash = func_82(iParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[iParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[iParam0 /*60*/].f_7);
	
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}

	return Global_1360165[iParam0 /*1157*/].f_126;
}

int func_101(int iParam0) // Position - 0x226B Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return 0;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_102(int iParam0) // Position - 0x22A9 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

