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
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
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
		func_1(&uLocal_9);

	func_2(&uLocal_9, &uScriptParam_0);

	while (!func_3(&uLocal_9))
	{
		func_4(&uLocal_9);
	
		switch (func_5(uLocal_9))
		{
			case 0:
				if (func_6(&uLocal_9))
					func_7(&uLocal_9, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_9))
					func_7(&uLocal_9, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_9))
					func_7(&uLocal_9, 3);
				break;
		
			case 3:
				func_1(&uLocal_9);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_9);
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

int func_11(var uParam0) // Position - 0x30D Hash - 0xA46A824B ^0x212A43CF
{
	MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
	return 1;
}

BOOL func_12(eStackSize essParam0) // Position - 0x321 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

BOOL func_13(eStackSize essParam0) // Position - 0x340 Hash - 0xDA629583 ^0xDA629583
{
	return func_26(essParam0, 16, true);
}

BOOL func_14(eStackSize essParam0) // Position - 0x351 Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_12(essParam0))
		return false;

	if (!func_13(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x385 Hash - 0xA4706F79 ^0xAF27D1D3
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

	func_27(essParam0, false);
	func_28(essParam0, 4, false);
	func_29(essParam0);
	func_30(essParam0);
	func_31(essParam0, 37, true);
	flag = func_32(Global_1360165[essParam0 /*1157*/], 0);
	persChar = func_33(essParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, false);

	if (func_34(essParam0, 64, true))
		func_31(essParam0, 64, true);

	if (bParam3)
	{
		func_31(essParam0, 33, true);
		func_31(essParam0, 34, true);
		func_35(essParam0, 1056964608, -1, 1061158912);
		func_36(essParam0, true, true, false);
	
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
			func_37(essParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[essParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_31(essParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
	
		func_24(essParam0, 33, true);
		func_36(essParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[essParam0 /*1157*/].f_133 = iParam4;
			func_25(&(Global_1360165[essParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_38(&(Global_1360165[essParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_24(essParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
			func_39(essParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], false);

	if (func_34(essParam0, 45, true))
		func_31(essParam0, 45, true);

	func_40(essParam0, 16, true);
	func_31(essParam0, 44, true);
	Global_1360165[essParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[essParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_32(func_41(essParam0), 0))
			func_42(0, essParam0, bParam3, 0, bParam2);

	return;
}

BOOL func_16(var uParam0, int iParam1) // Position - 0x63A Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x64B Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x663 Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

void func_19(var uParam0) // Position - 0x676 Hash - 0xC42F0C30 ^0x37B88C09
{
	func_43(&Global_1935630, 1048576);
	return;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x68A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_21(var uParam0) // Position - 0x699 Hash - 0xB136CEB3 ^0x83B009F7
{
	func_44(Global_35);
	ENTITY::SET_ENTITY_COORDS(Global_35, Global_1835011[4 /*74*/].f_18, true, false, true, true);
	PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), Global_1835011[4 /*74*/].f_18, 0f, false, true, true, false);
	func_25(&uLocal_3, false);
	MISC::SET_BIT(&(Global_1955830.f_1), 5);
	return 1;
}

BOOL func_22() // Position - 0x6E9 Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_23(var uParam0) // Position - 0x6F6 Hash - 0xD0E42C63 ^0x52CA4B78
{
	if (func_45(&uLocal_3) < 1f)
		return false;

	if (PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()) && !func_46(&uLocal_6))
		func_25(&uLocal_6, false);

	if (func_45(&uLocal_6) >= 6f)
		return true;

	if (func_45(&uLocal_3) >= 22.5f)
	{
		if (PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			return true;
	
		if (func_45(&uLocal_3) >= 27.5f)
			return true;
		else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			return true;
	}

	return false;
}

void func_24(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x77B Hash - 0xA83ABB27 ^0x3839CF85
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

void func_25(var uParam0, BOOL bParam1) // Position - 0x7B5 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_46(uParam0))
		func_49(uParam0);

	return;
}

BOOL func_26(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7D5 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_47(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

void func_27(eStackSize essParam0, BOOL bParam1) // Position - 0x7FF Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_47(essParam0))
		return;

	if (bParam1)
		if (func_50(&(Global_1360165[essParam0 /*1157*/].f_12), 1))
			func_28(essParam0, 1, false);

	func_28(essParam0, 16, bParam1);
	return;
}

void func_28(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x841 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_47(essParam0))
		return;

	func_51(&(Global_1360165[essParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_29(eStackSize essParam0) // Position - 0x869 Hash - 0x7895582D ^0x7895582D
{
	func_28(essParam0, 8, false);
	return;
}

void func_30(eStackSize essParam0) // Position - 0x87A Hash - 0x8577BCFD ^0x8577BCFD
{
	func_24(essParam0, 36, true);
	return;
}

void func_31(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x88B Hash - 0xA83ABB27 ^0xCD66A93E
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

BOOL func_32(Ped pedParam0, int iParam1) // Position - 0x8C5 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_52(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_52(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_52(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_52(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_52(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_52(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_52(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_52(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_33(eStackSize essParam0, BOOL bParam1) // Position - 0x9C4 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_53(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

BOOL func_34(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xA03 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_47(essParam0))
			return false;

	func_48(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_35(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA3E Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(essParam0))
	{
		ped = func_54(essParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_55(essParam0);
		}
	}

	if (func_34(essParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_54(essParam0), 137, true);

	return;
}

void func_36(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA90 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_47(essParam0))
		return;

	if (bParam1)
	{
		func_31(essParam0, 50, true);
		func_31(essParam0, 48, true);
		func_31(essParam0, 49, true);
		func_31(essParam0, 51, true);
		func_31(essParam0, 52, true);
		func_31(essParam0, 54, true);
		func_31(essParam0, 55, true);
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
			func_31(essParam0, 54, true);
	
		if (!bParam2)
		{
			func_24(essParam0, 52, true);
		
			if (bParam3)
				func_24(essParam0, 55, true);
		}
		else
		{
			func_31(essParam0, 52, true);
		
			if (!bParam3)
				func_31(essParam0, 55, true);
		}
	}

	return;
}

void func_37(eStackSize essParam0, BOOL bParam1) // Position - 0xB62 Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_47(essParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_54(essParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_54(essParam0), 204, false);

	return;
}

void func_38(var uParam0) // Position - 0xB99 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_39(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xBAF Hash - 0x6E8FD624 ^0x6E8FD624
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

	if (func_34(essParam0, 32, true))
		if (!bParam2)
			return;

	char = func_33(essParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_54(essParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_56(essParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_57(essParam0);
		func_24(essParam0, 1, true);
	}

	return;
}

void func_40(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCBD Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

Player func_41(eStackSize essParam0) // Position - 0xCF9 Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/].f_70))
		Global_1360165[essParam0 /*1157*/].f_70 = 0;

	return Global_1360165[essParam0 /*1157*/].f_70;
}

void func_42(int iParam0, eStackSize essParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0xD39 Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_47(essParam1))
		return;

	player = func_41(essParam1);

	if (func_58(essParam1))
		if (!func_59(essParam1))
			return;

	func_31(essParam1, 39, true);
	func_60(essParam1, 64, false);
	Global_1360165[essParam1 /*1157*/].f_70.f_11 = 0;
	func_60(essParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_60(essParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_24(essParam1, 43, true);
		}
	
		if (bParam4)
			func_61(essParam1, false, true, true, true);
	}

	return;
}

void func_43(int iParam0, int iParam1) // Position - 0xDDB Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_44(Ped pedParam0) // Position - 0xDEC Hash - 0xAC157CE0 ^0x9685A596
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_ON_MOUNT(pedParam0))
			PED::_REMOVE_PED_FROM_MOUNT(pedParam0, true, false);

	return;
}

float func_45(var uParam0) // Position - 0xE0F Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_46(uParam0))
		return uParam0->f_1;

	if (func_62(uParam0))
		return uParam0->f_2;

	return func_63() - uParam0->f_1;
}

BOOL func_46(var uParam0) // Position - 0xE44 Hash - 0x5001E582 ^0x5001E582
{
	return func_64(*uParam0, 1);
}

BOOL func_47(eStackSize essParam0) // Position - 0xE54 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

int func_48(int iParam0, var uParam1, var uParam2) // Position - 0xE60 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_49(var uParam0) // Position - 0xE7D Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_65(uParam0, 0f);
	return;
}

BOOL func_50(int iParam0, int iParam1) // Position - 0xE8C Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_51(int iParam0, int iParam1, BOOL bParam2) // Position - 0xE9C Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_52(int iParam0, int iParam1) // Position - 0xEC2 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_53(eStackSize essParam0) // Position - 0xED1 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_47(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_66(essParam0);
	
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

Ped func_54(eStackSize essParam0) // Position - 0xF39 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_47(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

void func_55(eStackSize essParam0) // Position - 0xF73 Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(essParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_54(essParam0)))
		{
			func_67(essParam0, 67108864, true);
			func_31(essParam0, 19, true);
		}
	}

	return;
}

float func_56(eStackSize essParam0) // Position - 0xFA6 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_47(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_57(eStackSize essParam0) // Position - 0xFC7 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_54(essParam0);
	persChar = func_33(essParam0, false);
	func_68(essParam0, ped);

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

BOOL func_58(eStackSize essParam0) // Position - 0x1021 Hash - 0x6410553A ^0x46627D03
{
	if (!func_47(essParam0))
		return false;

	if (Global_1360165[essParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[essParam0 /*1157*/].f_70.f_11 == Global_1360165[essParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_59(eStackSize essParam0) // Position - 0x106D Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_47(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_60(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x1095 Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_47(essParam0))
		return;

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 - Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_61(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x10FA Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	Hash hash;
	PersChar persChar;

	if (!func_47(essParam0))
		return 0;

	mount = func_41(essParam0);

	if (func_32(mount, 0))
	{
		if (func_32(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_58(essParam0) || func_59(essParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_69(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				hash = func_70(essParam0, true);
			
				if (hash != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_71(essParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_72(essParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_72(essParam0, false));
					func_73(essParam0);
				}
			}
			else
			{
				if (func_26(essParam0, 32768, true))
				{
					persChar = func_72(essParam0, false);
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
		if (func_32(Global_1360165[essParam0 /*1157*/].f_124, 0))
		{
			if (func_26(essParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
			
				func_71(essParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_72(essParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_72(essParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				func_71(essParam0);
				PED::DELETE_PED(&(Global_1360165[essParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;
	func_74(essParam0, 0);
	return 1;
}

BOOL func_62(var uParam0) // Position - 0x12AB Hash - 0x39705408 ^0x39705408
{
	return func_64(*uParam0, 2);
}

float func_63() // Position - 0x12BB Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_64(int iParam0, int iParam1) // Position - 0x12ED Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_65(var uParam0, float fParam1) // Position - 0x12FC Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_63() - fParam1;
	func_75(uParam0, 1);
	func_76(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

Hash func_66(int iParam0) // Position - 0x1322 Hash - 0xBA965109 ^0xCB1D208B
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

void func_67(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x14FE Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

void func_68(eStackSize essParam0, Ped pedParam1) // Position - 0x152F Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_77(pedParam1);

	return;
}

float func_69(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x1549 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_78(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_70(eStackSize essParam0, BOOL bParam1) // Position - 0x15A0 Hash - 0xA64DC151 ^0x7D83907B
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
		Global_1360165[essParam0 /*1157*/].f_127 = func_79(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_71(eStackSize essParam0) // Position - 0x16E5 Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_41(essParam0);

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

PersChar func_72(eStackSize essParam0, BOOL bParam1) // Position - 0x175B Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_47(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[essParam0 /*1157*/].f_126 = func_80(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_73(eStackSize essParam0) // Position - 0x17A7 Hash - 0xA6C3B06B ^0x3AB8265A
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

void func_74(eStackSize essParam0, int iParam1) // Position - 0x17FA Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_47(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

void func_75(var uParam0, int iParam1) // Position - 0x181E Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_76(var uParam0, int iParam1) // Position - 0x182F Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_77(Ped pedParam0) // Position - 0x1844 Hash - 0x37CD25A4 ^0xD4CCB7B5
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

float func_78(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x18A4 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

Hash func_79(eStackSize essParam0) // Position - 0x18C2 Hash - 0xEB890713 ^0xB40CD388
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

PersChar func_80(eStackSize essParam0) // Position - 0x19A3 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_47(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_70(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

