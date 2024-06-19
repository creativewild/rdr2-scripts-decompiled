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
	int iLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	float fLocal_13 = 0f;
	BOOL bLocal_14 = 0;
	AnimScene ansLocal_15 = 0;
	Volume volLocal_16 = 0;
	Any anLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
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

void main() // Position - 0x0 Hash - 0xF98D1C6F ^0xF266F0D2
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1(&uLocal_18);

	func_2(&uLocal_18, &uScriptParam_0);

	while (!func_3(&uLocal_18))
	{
		func_4(&uLocal_18);
	
		switch (func_5(uLocal_18))
		{
			case 0:
				if (func_6(&uLocal_18))
					func_7(&uLocal_18, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_18))
					func_7(&uLocal_18, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_18))
					func_7(&uLocal_18, 3);
				break;
		
			case 3:
				func_1(&uLocal_18);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_18);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0xB1 Hash - 0x5C967931 ^0xE89D747F
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

int func_2(var uParam0, var uParam1) // Position - 0x149 Hash - 0x11824BFA ^0x305C042C
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

BOOL func_3(var uParam0) // Position - 0x196 Hash - 0xE6F09C07 ^0x349208FC
{
	if (func_20(Global_1935630, 16384))
		return true;

	if (!func_16(uParam0, 8))
		if (func_20(Global_1935630, 32768))
			return true;

	return false;
}

void func_4(var uParam0) // Position - 0x1D0 Hash - 0xCC0866FC ^0x1CE74C37
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

int func_5(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x253 Hash - 0xBE425958 ^0xBE425958
{
	return uParam0;
}

BOOL func_6(var uParam0) // Position - 0x25D Hash - 0xCDE5551F ^0x3622BE4
{
	if (bLocal_14)
	{
		CAM::_FORCE_THIRD_PERSON_CAM_THIS_FRAME();
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	}

	return true;
}

void func_7(var uParam0, int iParam1) // Position - 0x273 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_8(var uParam0) // Position - 0x280 Hash - 0xE70F011 ^0xCE61FB0
{
	if (!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
		return false;

	return func_21(uParam0);
}

BOOL func_9(var uParam0) // Position - 0x2B8 Hash - 0xEDB66132 ^0xEDB66132
{
	BOOL num;

	num = 1;

	if (!func_22())
		num = 0;

	if (!func_23(uParam0))
		num = 0;

	return num;
}

void func_10() // Position - 0x2DD Hash - 0xF2ADC204 ^0xF23F9A2E
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

int func_11(var uParam0) // Position - 0x320 Hash - 0xE6C7F431 ^0x69B6DE4F
{
	if (!bLocal_14)
	{
		AUDIO::SET_PED_IS_DRUNK(Global_35, false);
		PED::_SET_PED_DRUNKNESS(Global_35, false, 0f);
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Drunkness", 0f, -1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsDrunk", false, -1);
	}
	else
	{
		func_26(ansLocal_15);
		func_27(&anLocal_17, volLocal_16, false);
		func_28(volLocal_16);
	}

	func_29();
	return 1;
}

BOOL func_12(eStackSize essParam0) // Position - 0x373 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

BOOL func_13(eStackSize essParam0) // Position - 0x392 Hash - 0xDA629583 ^0xDA629583
{
	return func_30(essParam0, 16, true);
}

BOOL func_14(eStackSize essParam0) // Position - 0x3A3 Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_12(essParam0))
		return false;

	if (!func_13(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x3D7 Hash - 0xA4706F79 ^0xAF27D1D3
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

	func_31(essParam0, false);
	func_32(essParam0, 4, false);
	func_33(essParam0);
	func_34(essParam0);
	func_35(essParam0, 37, true);
	flag = func_36(Global_1360165[essParam0 /*1157*/], 0);
	persChar = func_37(essParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, false);

	if (func_38(essParam0, 64, true))
		func_35(essParam0, 64, true);

	if (bParam3)
	{
		func_35(essParam0, 33, true);
		func_35(essParam0, 34, true);
		func_39(essParam0, 1056964608, -1, 1061158912);
		func_40(essParam0, true, true, false);
	
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
			func_41(essParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[essParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_35(essParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
	
		func_24(essParam0, 33, true);
		func_40(essParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[essParam0 /*1157*/].f_133 = iParam4;
			func_25(&(Global_1360165[essParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_42(&(Global_1360165[essParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_24(essParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
			func_43(essParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], false);

	if (func_38(essParam0, 45, true))
		func_35(essParam0, 45, true);

	func_44(essParam0, 16, true);
	func_35(essParam0, 44, true);
	Global_1360165[essParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[essParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_36(func_45(essParam0), 0))
			func_46(0, essParam0, bParam3, 0, bParam2);

	return;
}

BOOL func_16(var uParam0, int iParam1) // Position - 0x68C Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x69D Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x6B5 Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

void func_19(var uParam0) // Position - 0x6C8 Hash - 0x5446BE85 ^0x6B7BC468
{
	if (func_47(Global_1835011[9 /*74*/].f_1) == 1)
	{
		bLocal_14 = true;
	
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
		{
			ansLocal_15 = uParam0->f_2;
			ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(ansLocal_15);
		}
	}

	if (bLocal_14)
	{
		volLocal_16 = VOLUME::CREATE_VOLUME_BOX(-277.092f, 800.382f, 119.19054f, 0f, 0f, 9.954012f, 4.771447f, 2.07305f, 1.824199f);
		anLocal_17 = func_48(volLocal_16, 0, false, 0);
		CAM::_FORCE_THIRD_PERSON_CAM_THIS_FRAME();
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	}

	return;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x73F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_21(var uParam0) // Position - 0x74E Hash - 0x5E4E63AA ^0xC85FA61A
{
	if (!bLocal_14)
	{
		AUDIO::SET_PED_IS_DRUNK(Global_35, true);
		PED::_SET_PED_DRUNKNESS(Global_35, true, 0.75f);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsDrunk", true, -1);
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Drunkness", 0.75f, -1);
		fLocal_13 = 0.75f;
		func_49(&uLocal_10);
	}

	if (bLocal_14)
	{
		CAM::_FORCE_THIRD_PERSON_CAM_THIS_FRAME();
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	}

	return 1;
}

BOOL func_22() // Position - 0x7A7 Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_23(var uParam0) // Position - 0x7B4 Hash - 0x327DE399 ^0x82C7D5FD
{
	float num;
	float num2;

	if (!bLocal_14)
	{
		if (!PED::_IS_PED_DRUNK(Global_35) || PED::_GET_PED_DRUNKNESS(Global_35) != fLocal_13 || PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "Drunkness") != fLocal_13)
		{
			AUDIO::SET_PED_IS_DRUNK(Global_35, true);
			PED::_SET_PED_DRUNKNESS(Global_35, true, fLocal_13);
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Drunkness", fLocal_13, -1);
		}
	
		switch (iLocal_9)
		{
			case 0:
				if (func_50(&uLocal_10) >= 3f)
				{
					func_49(&uLocal_10);
					iLocal_9 = iLocal_9 + 1;
				}
				break;
		
			case 1:
				num = func_50(&uLocal_10);
				num2 = 1f - ((4f - num) / 4f);
				fLocal_13 = 0.75f - (0.75f * num2);
				fLocal_13 = func_51(fLocal_13, 0f, 0.75f);
				PED::_SET_PED_DRUNKNESS(Global_35, true, fLocal_13);
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Drunkness", fLocal_13, -1);
			
				if (fLocal_13 <= 0f)
					return true;
				break;
		}
	}
	else
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_15))
			return true;
	
		switch (iLocal_9)
		{
			case 0:
				CAM::_FORCE_THIRD_PERSON_CAM_THIS_FRAME();
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			
				if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_15, false) && func_52(ansLocal_15, "pl_getup"))
					iLocal_9 = iLocal_9 + 1;
				break;
		
			case 1:
				CAM::_FORCE_THIRD_PERSON_CAM_THIS_FRAME();
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			
				if (func_53() || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(ansLocal_15, "s_getup", true))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(ansLocal_15, "s_getup", true))
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_15, "pl_getup", true);
				
					iLocal_9 = iLocal_9 + 1;
				}
				break;
		
			case 2:
				CAM::_FORCE_THIRD_PERSON_CAM_THIS_FRAME();
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			
				if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(ansLocal_15, "ARTHUR"))
				{
					func_49(&uLocal_10);
					iLocal_9 = iLocal_9 + 1;
				}
				break;
		
			case 3:
				if (func_50(&uLocal_10) >= 3f)
					return true;
				break;
		}
	}

	return false;
}

void func_24(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x95F Hash - 0xA83ABB27 ^0x3839CF85
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

void func_25(var uParam0, BOOL bParam1) // Position - 0x999 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_56(uParam0))
		func_49(uParam0);

	return;
}

void func_26(AnimScene ansParam0) // Position - 0x9B9 Hash - 0x6C1ECE58 ^0x5BCB2EB2
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansParam0))
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansParam0, false))
			ANIMSCENE::_DELETE_ANIM_SCENE(ansParam0);

	return;
}

void func_27(var uParam0, Volume volParam1, BOOL bParam2) // Position - 0x9DA Hash - 0x2EB65318 ^0x737362FB
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volParam1);
	POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volParam1);

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(*uParam0))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);

	return;
}

void func_28(Volume volParam0) // Position - 0xA12 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

void func_29() // Position - 0xA29 Hash - 0xDC6E219D ^0xBD2A18DD
{
	float num;
	float num2;

	num = Global_40.f_11095.f_44;
	num2 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num - Global_40.f_11095.f_69);
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num2);
	return;
}

BOOL func_30(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA7E Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_54(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

void func_31(eStackSize essParam0, BOOL bParam1) // Position - 0xAA8 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_54(essParam0))
		return;

	if (bParam1)
		if (func_57(&(Global_1360165[essParam0 /*1157*/].f_12), 1))
			func_32(essParam0, 1, false);

	func_32(essParam0, 16, bParam1);
	return;
}

void func_32(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xAEA Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_54(essParam0))
		return;

	func_58(&(Global_1360165[essParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_33(eStackSize essParam0) // Position - 0xB12 Hash - 0x7895582D ^0x7895582D
{
	func_32(essParam0, 8, false);
	return;
}

void func_34(eStackSize essParam0) // Position - 0xB23 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_24(essParam0, 36, true);
	return;
}

void func_35(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xB34 Hash - 0xA83ABB27 ^0xCD66A93E
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

BOOL func_36(Ped pedParam0, int iParam1) // Position - 0xB6E Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_59(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_59(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_59(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_59(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_59(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_59(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_59(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_59(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_37(eStackSize essParam0, BOOL bParam1) // Position - 0xC6D Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_60(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

BOOL func_38(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xCAC Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_54(essParam0))
			return false;

	func_55(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_39(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0xCE7 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(essParam0))
	{
		ped = func_61(essParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_62(essParam0);
		}
	}

	if (func_38(essParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_61(essParam0), 137, true);

	return;
}

void func_40(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD39 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_54(essParam0))
		return;

	if (bParam1)
	{
		func_35(essParam0, 50, true);
		func_35(essParam0, 48, true);
		func_35(essParam0, 49, true);
		func_35(essParam0, 51, true);
		func_35(essParam0, 52, true);
		func_35(essParam0, 54, true);
		func_35(essParam0, 55, true);
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
			func_35(essParam0, 54, true);
	
		if (!bParam2)
		{
			func_24(essParam0, 52, true);
		
			if (bParam3)
				func_24(essParam0, 55, true);
		}
		else
		{
			func_35(essParam0, 52, true);
		
			if (!bParam3)
				func_35(essParam0, 55, true);
		}
	}

	return;
}

void func_41(eStackSize essParam0, BOOL bParam1) // Position - 0xE0B Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_54(essParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_61(essParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_61(essParam0), 204, false);

	return;
}

void func_42(var uParam0) // Position - 0xE42 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_43(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE58 Hash - 0x6E8FD624 ^0x6E8FD624
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

	if (func_38(essParam0, 32, true))
		if (!bParam2)
			return;

	char = func_37(essParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_61(essParam0);

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

void func_44(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF66 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

Player func_45(eStackSize essParam0) // Position - 0xFA2 Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/].f_70))
		Global_1360165[essParam0 /*1157*/].f_70 = 0;

	return Global_1360165[essParam0 /*1157*/].f_70;
}

void func_46(int iParam0, eStackSize essParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0xFE2 Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_54(essParam1))
		return;

	player = func_45(essParam1);

	if (func_65(essParam1))
		if (!func_66(essParam1))
			return;

	func_35(essParam1, 39, true);
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

int func_47(int iParam0) // Position - 0x1084 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_69(iParam0))
		return -1;

	return func_70(iParam0);
}

Any func_48(Volume volParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x10A0 Hash - 0xDFB996B4 ^0xC287A71C
{
	Any any;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return any;

	func_71(volParam0, bParam2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam3, 0, 0, -1, -1, 2);
	any = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volParam0, bParam2, 15);
	return any;
}

void func_49(var uParam0) // Position - 0x10E7 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_72(uParam0, 0f);
	return;
}

float func_50(var uParam0) // Position - 0x10F6 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_56(uParam0))
		return uParam0->f_1;

	if (func_73(uParam0))
		return uParam0->f_2;

	return func_74() - uParam0->f_1;
}

float func_51(float fParam0, float fParam1, float fParam2) // Position - 0x112B Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_52(AnimScene ansParam0, char* sParam1) // Position - 0x1152 Hash - 0xA6D89F94 ^0x5A04F0B9
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(ansParam0, sParam1))
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansParam0, sParam1);

	if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansParam0, sParam1))
		return true;

	return false;
}

BOOL func_53() // Position - 0x117F Hash - 0x65F5A0E2 ^0xB6A8AEBA
{
	if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_MOVE_LR")) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_MOVE_UD")) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_MOVE_LEFT_ONLY")) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_MOVE_RIGHT_ONLY")) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_MOVE_UP_ONLY")) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_MOVE_DOWN_ONLY")) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_SPRINT")) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_JUMP")) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK")))
		return true;

	return false;
}

BOOL func_54(eStackSize essParam0) // Position - 0x1219 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

int func_55(int iParam0, var uParam1, var uParam2) // Position - 0x1225 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_56(var uParam0) // Position - 0x1242 Hash - 0x5001E582 ^0x5001E582
{
	return func_75(*uParam0, 1);
}

BOOL func_57(int iParam0, int iParam1) // Position - 0x1252 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_58(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1262 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_59(int iParam0, int iParam1) // Position - 0x1288 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_60(eStackSize essParam0) // Position - 0x1297 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_54(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_76(essParam0);
	
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

Ped func_61(eStackSize essParam0) // Position - 0x12FF Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_54(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

void func_62(eStackSize essParam0) // Position - 0x1339 Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(essParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_61(essParam0)))
		{
			func_77(essParam0, 67108864, true);
			func_35(essParam0, 19, true);
		}
	}

	return;
}

float func_63(eStackSize essParam0) // Position - 0x136C Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_54(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_64(eStackSize essParam0) // Position - 0x138D Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_61(essParam0);
	persChar = func_37(essParam0, false);
	func_78(essParam0, ped);

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

BOOL func_65(eStackSize essParam0) // Position - 0x13E7 Hash - 0x6410553A ^0x46627D03
{
	if (!func_54(essParam0))
		return false;

	if (Global_1360165[essParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[essParam0 /*1157*/].f_70.f_11 == Global_1360165[essParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_66(eStackSize essParam0) // Position - 0x1433 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_54(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_67(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x145B Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_54(essParam0))
		return;

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 - Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_68(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x14C0 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	Hash hash;
	PersChar persChar;

	if (!func_54(essParam0))
		return 0;

	mount = func_45(essParam0);

	if (func_36(mount, 0))
	{
		if (func_36(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_65(essParam0) || func_66(essParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_79(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				hash = func_80(essParam0, true);
			
				if (hash != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_81(essParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_82(essParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_82(essParam0, false));
					func_83(essParam0);
				}
			}
			else
			{
				if (func_30(essParam0, 32768, true))
				{
					persChar = func_82(essParam0, false);
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
		if (func_36(Global_1360165[essParam0 /*1157*/].f_124, 0))
		{
			if (func_30(essParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
			
				func_81(essParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_82(essParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_82(essParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				func_81(essParam0);
				PED::DELETE_PED(&(Global_1360165[essParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;
	func_84(essParam0, 0);
	return 1;
}

BOOL func_69(int iParam0) // Position - 0x1671 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_70(int iParam0) // Position - 0x16A4 Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

void func_71(Volume volParam0, BOOL bParam1) // Position - 0x16C3 Hash - 0xD6642292 ^0x5A7BA218
{
	int num;

	num = 16384;

	if (bParam1)
		num = num | 524288;

	MISC::_CLEAR_VOLUME_AREA(volParam0, num);
	return;
}

void func_72(var uParam0, float fParam1) // Position - 0x16E6 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_74() - fParam1;
	func_85(uParam0, 1);
	func_86(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_73(var uParam0) // Position - 0x170C Hash - 0x39705408 ^0x39705408
{
	return func_75(*uParam0, 2);
}

float func_74() // Position - 0x171C Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_75(int iParam0, int iParam1) // Position - 0x174E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Hash func_76(int iParam0) // Position - 0x175D Hash - 0xBA965109 ^0xCB1D208B
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

void func_77(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1939 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

void func_78(eStackSize essParam0, Ped pedParam1) // Position - 0x196A Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_87(pedParam1);

	return;
}

float func_79(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x1984 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_88(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_80(eStackSize essParam0, BOOL bParam1) // Position - 0x19DB Hash - 0xA64DC151 ^0x7D83907B
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
		Global_1360165[essParam0 /*1157*/].f_127 = func_89(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_81(eStackSize essParam0) // Position - 0x1B20 Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_45(essParam0);

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

PersChar func_82(eStackSize essParam0, BOOL bParam1) // Position - 0x1B96 Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_54(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[essParam0 /*1157*/].f_126 = func_90(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_83(eStackSize essParam0) // Position - 0x1BE2 Hash - 0xA6C3B06B ^0x3AB8265A
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

void func_84(eStackSize essParam0, int iParam1) // Position - 0x1C35 Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_54(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

void func_85(var uParam0, int iParam1) // Position - 0x1C59 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_86(var uParam0, int iParam1) // Position - 0x1C6A Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_87(Ped pedParam0) // Position - 0x1C7F Hash - 0xE3B97108 ^0x7582DAE5
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

float func_88(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1CE2 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

Hash func_89(eStackSize essParam0) // Position - 0x1D00 Hash - 0xEB890713 ^0xB40CD388
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

PersChar func_90(eStackSize essParam0) // Position - 0x1DE1 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_54(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_80(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

