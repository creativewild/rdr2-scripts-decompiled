#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	Vehicle veLocal_3 = 0;
	BOOL bLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
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
		func_1(&uLocal_8);

	func_2(&uLocal_8, &uScriptParam_0);

	while (!func_3(&uLocal_8))
	{
		func_4(&uLocal_8);
	
		switch (func_5(uLocal_8))
		{
			case 0:
				if (func_6(&uLocal_8))
					func_7(&uLocal_8, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_8))
					func_7(&uLocal_8, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_8))
					func_7(&uLocal_8, 3);
				break;
		
			case 3:
				func_1(&uLocal_8);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_8);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0xAB Hash - 0x5C967931 ^0xE89D747F
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

int func_11(var uParam0) // Position - 0x30D Hash - 0x946071F5 ^0x946071F5
{
	func_26();
	return 1;
}

BOOL func_12(eStackSize essParam0) // Position - 0x31A Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

BOOL func_13(eStackSize essParam0) // Position - 0x339 Hash - 0xDA629583 ^0xDA629583
{
	return func_27(essParam0, 16, true);
}

BOOL func_14(eStackSize essParam0) // Position - 0x34A Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_12(essParam0))
		return false;

	if (!func_13(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x37E Hash - 0xA4706F79 ^0xAF27D1D3
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

	func_28(essParam0, false);
	func_29(essParam0, 4, false);
	func_30(essParam0);
	func_31(essParam0);
	func_32(essParam0, 37, true);
	flag = func_33(Global_1360165[essParam0 /*1157*/], 0);
	persChar = func_34(essParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, false);

	if (func_35(essParam0, 64, true))
		func_32(essParam0, 64, true);

	if (bParam3)
	{
		func_32(essParam0, 33, true);
		func_32(essParam0, 34, true);
		func_36(essParam0, 1056964608, -1, 1061158912);
		func_37(essParam0, true, true, false);
	
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
			func_38(essParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[essParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_32(essParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
	
		func_24(essParam0, 33, true);
		func_37(essParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[essParam0 /*1157*/].f_133 = iParam4;
			func_25(&(Global_1360165[essParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_39(&(Global_1360165[essParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_24(essParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
			func_40(essParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], false);

	if (func_35(essParam0, 45, true))
		func_32(essParam0, 45, true);

	func_41(essParam0, 16, true);
	func_32(essParam0, 44, true);
	Global_1360165[essParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[essParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_33(func_42(essParam0), 0))
			func_43(0, essParam0, bParam3, 0, bParam2);

	return;
}

BOOL func_16(var uParam0, int iParam1) // Position - 0x633 Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x644 Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x65C Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

void func_19(var uParam0) // Position - 0x66F Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x677 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_21(var uParam0) // Position - 0x686 Hash - 0x6F3B6D92 ^0x6F3B6D92
{
	if (!func_44())
		return 0;

	return 1;
}

BOOL func_22() // Position - 0x69B Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_23(var uParam0) // Position - 0x6A8 Hash - 0xBCDEAD0E ^0x2AE93018
{
	if (func_45())
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
	}

	if (func_46())
		return true;

	return false;
}

void func_24(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x6D9 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_47(essParam0))
			return;

	func_48(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_25(var uParam0, BOOL bParam1) // Position - 0x713 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_49(uParam0))
		func_50(uParam0);

	return;
}

void func_26() // Position - 0x733 Hash - 0x2FCC33F6 ^0x473BDA26
{
	int i;
	int trainCarriageTrailerNumber;
	Vehicle trainCarriage;

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_3))
		return;

	func_51(veLocal_3);
	trainCarriageTrailerNumber = VEHICLE::_GET_TRAIN_CARRIAGE_TRAILER_NUMBER(veLocal_3);

	for (i = 0; i < trainCarriageTrailerNumber; i = i + 1)
	{
		trainCarriage = VEHICLE::GET_TRAIN_CARRIAGE(veLocal_3, i);
		func_51(trainCarriage);
	}

	VEHICLE::DELETE_MISSION_TRAIN(&veLocal_3);
	return;
}

BOOL func_27(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x77F Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_47(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

void func_28(eStackSize essParam0, BOOL bParam1) // Position - 0x7A9 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_47(essParam0))
		return;

	if (bParam1)
		if (func_52(&(Global_1360165[essParam0 /*1157*/].f_12), 1))
			func_29(essParam0, 1, false);

	func_29(essParam0, 16, bParam1);
	return;
}

void func_29(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x7EB Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_47(essParam0))
		return;

	func_53(&(Global_1360165[essParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_30(eStackSize essParam0) // Position - 0x813 Hash - 0x7895582D ^0x7895582D
{
	func_29(essParam0, 8, false);
	return;
}

void func_31(eStackSize essParam0) // Position - 0x824 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_24(essParam0, 36, true);
	return;
}

void func_32(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x835 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_47(essParam0))
			return;

	func_48(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_33(Ped pedParam0, int iParam1) // Position - 0x86F Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_54(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_54(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_54(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_54(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_54(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_54(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_54(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_54(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_34(eStackSize essParam0, BOOL bParam1) // Position - 0x96E Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_55(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

BOOL func_35(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x9AD Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_47(essParam0))
			return false;

	func_48(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_36(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0x9E8 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(essParam0))
	{
		ped = func_56(essParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_57(essParam0);
		}
	}

	if (func_35(essParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_56(essParam0), 137, true);

	return;
}

void func_37(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA3A Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_47(essParam0))
		return;

	if (bParam1)
	{
		func_32(essParam0, 50, true);
		func_32(essParam0, 48, true);
		func_32(essParam0, 49, true);
		func_32(essParam0, 51, true);
		func_32(essParam0, 52, true);
		func_32(essParam0, 54, true);
		func_32(essParam0, 55, true);
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
			func_32(essParam0, 54, true);
	
		if (!bParam2)
		{
			func_24(essParam0, 52, true);
		
			if (bParam3)
				func_24(essParam0, 55, true);
		}
		else
		{
			func_32(essParam0, 52, true);
		
			if (!bParam3)
				func_32(essParam0, 55, true);
		}
	}

	return;
}

void func_38(eStackSize essParam0, BOOL bParam1) // Position - 0xB0C Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_47(essParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_56(essParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_56(essParam0), 204, false);

	return;
}

void func_39(var uParam0) // Position - 0xB43 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_40(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xB59 Hash - 0x6E8FD624 ^0x6E8FD624
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

	if (func_35(essParam0, 32, true))
		if (!bParam2)
			return;

	char = func_34(essParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_56(essParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_58(essParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_59(essParam0);
		func_24(essParam0, 1, true);
	}

	return;
}

void func_41(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC67 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

Player func_42(eStackSize essParam0) // Position - 0xCA3 Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/].f_70))
		Global_1360165[essParam0 /*1157*/].f_70 = 0;

	return Global_1360165[essParam0 /*1157*/].f_70;
}

void func_43(int iParam0, eStackSize essParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0xCE3 Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_47(essParam1))
		return;

	player = func_42(essParam1);

	if (func_60(essParam1))
		if (!func_61(essParam1))
			return;

	func_32(essParam1, 39, true);
	func_62(essParam1, 64, false);
	Global_1360165[essParam1 /*1157*/].f_70.f_11 = 0;
	func_62(essParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_62(essParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_24(essParam1, 43, true);
		}
	
		if (bParam4)
			func_63(essParam1, false, true, true, true);
	}

	return;
}

BOOL func_44() // Position - 0xD85 Hash - 0xA589981 ^0xB188C757
{
	int num;
	Entity entity;
	Vehicle vehicle;

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_3))
		return true;

	num = func_64(49);
	entity = func_65(num);
	vehicle = entity;

	if (ENTITY::DOES_ENTITY_EXIST(vehicle))
	{
		veLocal_3 = vehicle;
	
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(veLocal_3, false))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_3, true, true);
	
		VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(veLocal_3, true);
		VEHICLE::_0x160C1B5AB48AB87C(veLocal_3, 1E+17f);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_3, false);
		return true;
	}

	return false;
}

BOOL func_45() // Position - 0xDEC Hash - 0xE91FC4CF ^0x70CDC289
{
	int i;
	int trainCarriageTrailerNumber;
	Vehicle trainCarriage;

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_3))
		return false;

	if (!func_33(Global_35, 0))
		return false;

	if (func_66(veLocal_3))
		return true;

	trainCarriageTrailerNumber = VEHICLE::_GET_TRAIN_CARRIAGE_TRAILER_NUMBER(veLocal_3);

	for (i = 0; i < trainCarriageTrailerNumber; i = i + 1)
	{
		trainCarriage = VEHICLE::GET_TRAIN_CARRIAGE(veLocal_3, i);
	
		if (func_66(trainCarriage))
			return true;
	}

	return false;
}

BOOL func_46() // Position - 0xE52 Hash - 0x154484EE ^0x9F14ADB5
{
	float num;

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_3))
		return true;

	if (func_67())
	{
		func_50(&uLocal_5);
		return false;
	}

	num = func_68();

	if (num < 120f)
	{
		func_50(&uLocal_5);
		return false;
	}

	if (func_69())
	{
		func_50(&uLocal_5);
		return false;
	}

	if (func_70(&uLocal_5) < 8f)
		return false;

	return true;
}

BOOL func_47(eStackSize essParam0) // Position - 0xEB9 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

int func_48(int iParam0, var uParam1, var uParam2) // Position - 0xEC5 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_49(var uParam0) // Position - 0xEE2 Hash - 0x5001E582 ^0x5001E582
{
	return func_71(*uParam0, 1);
}

void func_50(var uParam0) // Position - 0xEF2 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_72(uParam0, 0f);
	return;
}

void func_51(Vehicle veParam0) // Position - 0xF01 Hash - 0xBF87009 ^0x6EFD57D3
{
	ItemSet itemset;
	int num;
	int i;
	ScrHandle indexedItemInItemset;
	Entity entityFromItem;
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return;

	VEHICLE::_0x68830738A6BFB370(veParam0, 1);
	itemset = ITEMSET::CREATE_ITEMSET(false);

	if (!ITEMSET::IS_ITEMSET_VALID(itemset))
		return;

	num = VEHICLE::_0x0E558D3A49D759D6(veParam0, itemset);

	for (i = 0; i < num; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset);
	
		if (MISC::_DOES_ITEM_HAVE_VALID_BASE(indexedItemInItemset))
		{
			entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset);
		
			if (ENTITY::DOES_ENTITY_EXIST(entityFromItem) && ENTITY::IS_ENTITY_A_PED(entityFromItem))
			{
				pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedIndexFromEntityIndex, false))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedIndexFromEntityIndex, true, true);
				
					func_73(&pedIndexFromEntityIndex, false);
				}
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return;
}

BOOL func_52(int iParam0, int iParam1) // Position - 0xFAE Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_53(int iParam0, int iParam1, BOOL bParam2) // Position - 0xFBE Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_54(int iParam0, int iParam1) // Position - 0xFE4 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_55(eStackSize essParam0) // Position - 0xFF3 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_47(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_74(essParam0);
	
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

Ped func_56(eStackSize essParam0) // Position - 0x105B Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_47(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

void func_57(eStackSize essParam0) // Position - 0x1095 Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(essParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_56(essParam0)))
		{
			func_75(essParam0, 67108864, true);
			func_32(essParam0, 19, true);
		}
	}

	return;
}

float func_58(eStackSize essParam0) // Position - 0x10C8 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_47(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_59(eStackSize essParam0) // Position - 0x10E9 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_56(essParam0);
	persChar = func_34(essParam0, false);
	func_76(essParam0, ped);

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

BOOL func_60(eStackSize essParam0) // Position - 0x1143 Hash - 0x6410553A ^0x46627D03
{
	if (!func_47(essParam0))
		return false;

	if (Global_1360165[essParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[essParam0 /*1157*/].f_70.f_11 == Global_1360165[essParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_61(eStackSize essParam0) // Position - 0x118F Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_47(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_62(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x11B7 Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_47(essParam0))
		return;

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 - Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_63(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x121C Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	Hash hash;
	PersChar persChar;

	if (!func_47(essParam0))
		return 0;

	mount = func_42(essParam0);

	if (func_33(mount, 0))
	{
		if (func_33(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_60(essParam0) || func_61(essParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_77(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				hash = func_78(essParam0, true);
			
				if (hash != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_79(essParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_80(essParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_80(essParam0, false));
					func_81(essParam0);
				}
			}
			else
			{
				if (func_27(essParam0, 32768, true))
				{
					persChar = func_80(essParam0, false);
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
		if (func_33(Global_1360165[essParam0 /*1157*/].f_124, 0))
		{
			if (func_27(essParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
			
				func_79(essParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_80(essParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_80(essParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				func_79(essParam0);
				PED::DELETE_PED(&(Global_1360165[essParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;
	func_82(essParam0, 0);
	return 1;
}

int func_64(int iParam0) // Position - 0x13CD Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_83(iParam0))
		return 0;

	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_65(int iParam0) // Position - 0x13ED Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_84(iParam0))
		return -1;

	return func_85(iParam0);
}

BOOL func_66(Vehicle veParam0) // Position - 0x1409 Hash - 0x3E284CFA ^0xA6829FA1
{
	Hash entityModel;
	var minimum;
	float maximum;
	var unk5;
	Vector3 vector;
	Vector3 vector2;
	float angle;
	Vector3 offsetFromEntityInWorldCoords;
	Vector3 offsetFromEntityInWorldCoords2;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (!func_33(Global_35, 0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	MISC::GET_MODEL_DIMENSIONS(entityModel, &minimum, &maximum);
	unk5 = { 8f, 8f, 3f };
	minimum = { minimum - unk5 };
	maximum = { maximum + unk5 };
	vector = { 0f, minimum.f_1, minimum.f_2 };
	vector2 = { 0f, maximum.f_1, maximum.f_2 };
	angle = maximum - minimum;
	offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, vector) };
	offsetFromEntityInWorldCoords2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, vector2) };
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, offsetFromEntityInWorldCoords, offsetFromEntityInWorldCoords2, angle, false, true, 0);
}

BOOL func_67() // Position - 0x14BB Hash - 0xBD9011B0 ^0x4B894829
{
	int i;
	int trainCarriageTrailerNumber;
	Entity trainCarriage;

	if (MISC::GET_FRAME_COUNT() % 15 != 0)
		return bLocal_4;

	bLocal_4 = false;

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_3))
		return false;

	if (!func_33(Global_35, 0))
		return false;

	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, veLocal_3))
	{
		bLocal_4 = true;
		return true;
	}

	trainCarriageTrailerNumber = VEHICLE::_GET_TRAIN_CARRIAGE_TRAILER_NUMBER(veLocal_3);

	for (i = 0; i < trainCarriageTrailerNumber; i = i + 1)
	{
		trainCarriage = VEHICLE::GET_TRAIN_CARRIAGE(veLocal_3, i);
	
		if (ENTITY::DOES_ENTITY_EXIST(trainCarriage))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, trainCarriage))
			{
				bLocal_4 = true;
				break;
			}
		}
	}

	return bLocal_4;
}

float func_68() // Position - 0x1549 Hash - 0x5E9519E0 ^0x3F388980
{
	float num;
	int i;
	int trainCarriageTrailerNumber;
	Vehicle trainCarriage;

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_3))
		return 1E+17f;

	if (!func_33(Global_35, 0))
		return 1E+17f;

	num = func_86(Global_35, veLocal_3, true, true);
	trainCarriageTrailerNumber = VEHICLE::_GET_TRAIN_CARRIAGE_TRAILER_NUMBER(veLocal_3);

	for (i = 0; i < trainCarriageTrailerNumber; i = i + 1)
	{
		trainCarriage = VEHICLE::GET_TRAIN_CARRIAGE(veLocal_3, i);
	
		if (ENTITY::DOES_ENTITY_EXIST(trainCarriage))
			num = func_87(num, func_86(Global_35, trainCarriage, true, true));
	}

	return num;
}

BOOL func_69() // Position - 0x15C7 Hash - 0x7BEEEA1F ^0x2DF00945
{
	int i;
	int trainCarriageTrailerNumber;
	Entity trainCarriage;

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_3))
		return false;

	if (ENTITY::IS_ENTITY_ON_SCREEN(veLocal_3))
		return true;

	trainCarriageTrailerNumber = VEHICLE::_GET_TRAIN_CARRIAGE_TRAILER_NUMBER(veLocal_3);

	for (i = 0; i < trainCarriageTrailerNumber; i = i + 1)
	{
		trainCarriage = VEHICLE::GET_TRAIN_CARRIAGE(veLocal_3, i);
	
		if (ENTITY::DOES_ENTITY_EXIST(trainCarriage))
			if (ENTITY::IS_ENTITY_ON_SCREEN(trainCarriage))
				return true;
	}

	return false;
}

float func_70(var uParam0) // Position - 0x1626 Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_49(uParam0))
		return 0f;

	if (func_88(uParam0))
		return uParam0->f_2;

	return func_89() - uParam0->f_1;
}

BOOL func_71(int iParam0, int iParam1) // Position - 0x1658 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_72(var uParam0, float fParam1) // Position - 0x1667 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_89() - fParam1;
	func_90(uParam0, 1);
	func_91(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_73(Ped* ppedParam0, BOOL bParam1) // Position - 0x168D Hash - 0x7E90C208 ^0xFFD66E48
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*ppedParam0))
			return;
	
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*ppedParam0, false))
			return;
	
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
		}
		else
		{
			!ENTITY::IS_ENTITY_DEAD(*ppedParam0) && PED::IS_PED_IN_ANY_VEHICLE(*ppedParam0, true);
			PED::DELETE_PED(ppedParam0);
		}
	}

	return;
}

Hash func_74(int iParam0) // Position - 0x16E7 Hash - 0xBA965109 ^0xCB1D208B
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

void func_75(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x18C3 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

void func_76(eStackSize essParam0, Ped pedParam1) // Position - 0x18F4 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_92(pedParam1);

	return;
}

float func_77(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x190E Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_93(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_78(eStackSize essParam0, BOOL bParam1) // Position - 0x1965 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_47(essParam0))
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
		Global_1360165[essParam0 /*1157*/].f_127 = func_94(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_79(eStackSize essParam0) // Position - 0x1AAA Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_42(essParam0);

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

PersChar func_80(eStackSize essParam0, BOOL bParam1) // Position - 0x1B20 Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_47(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[essParam0 /*1157*/].f_126 = func_95(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_81(eStackSize essParam0) // Position - 0x1B6C Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_47(essParam0))
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

void func_82(eStackSize essParam0, int iParam1) // Position - 0x1BBF Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_47(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

BOOL func_83(int iParam0) // Position - 0x1BE3 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

BOOL func_84(int iParam0) // Position - 0x1BF9 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_85(int iParam0) // Position - 0x1C2C Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

float func_86(Ped pedParam0, Vehicle veParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1C4B Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(veParam1, false, false), bParam2);
}

float func_87(float fParam0, float fParam1) // Position - 0x1C93 Hash - 0xAB447DEC ^0xAB447DEC
{
	if (fParam0 > fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_88(var uParam0) // Position - 0x1CAA Hash - 0x39705408 ^0x39705408
{
	return func_71(*uParam0, 2);
}

float func_89() // Position - 0x1CBA Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_90(var uParam0, int iParam1) // Position - 0x1CEC Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_91(var uParam0, int iParam1) // Position - 0x1CFD Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_92(Ped pedParam0) // Position - 0x1D12 Hash - 0x37CD25A4 ^0xD4CCB7B5
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

float func_93(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1D72 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

Hash func_94(eStackSize essParam0) // Position - 0x1D90 Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_47(essParam0))
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

	if (!func_47(essParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = essParam0;
			Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_95(eStackSize essParam0) // Position - 0x1E71 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_47(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_78(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

