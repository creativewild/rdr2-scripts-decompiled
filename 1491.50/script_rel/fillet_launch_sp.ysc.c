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
	var uLocal_14 = 0;
	var uLocal_15 = 1;
	var uLocal_16 = 0;
	var uLocal_17 = 2;
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
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 1097859072;
	var uLocal_40 = 1000;
	var uLocal_41 = 1067450368;
	var uLocal_42 = 5000;
	var uLocal_43 = 42;
	var uLocal_44 = 1103626240;
	var uLocal_45 = 1077936128;
	var uLocal_46 = 1106247680;
	var uLocal_47 = 1103101952;
	var uLocal_48 = 1097859072;
	var uLocal_49 = 1103626240;
	var uLocal_50 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xA86B164F ^0x3807E4FE
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1(&uLocal_14);

	while (true)
	{
		if (func_2(&uLocal_14, &uScriptParam_0))
			func_1(&uLocal_14);
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_14);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0x45 Hash - 0xE681043F ^0xE0A75ACF
{
	int i;
	int num;

	for (i = 0; i < 2; i = i + 1)
	{
		func_3(uParam0->f_3[i]);
	}

	func_3(uParam0->f_6);

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_7))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_7, false);

	if (!func_4(Global_1900325.f_3))
	{
		func_5(&(Global_1900325.f_25), true, true, true);
		num = func_6(Global_1900325.f_2);
		func_5(&num, true, false, true);
	
		if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() > 0)
			PED::_UNRESERVE_AMBIENT_PEDS(uParam0->f_1);
	
		func_7();
		func_8(0);
		func_9(0);
	}

	STREAMING::REMOVE_ANIM_DICT(func_10(1, 0));
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(var uParam0, var uParam1) // Position - 0xE6 Hash - 0x86D31113 ^0x86B8945
{
	int num;

	if (func_11(uParam0))
		return true;

	switch (*uParam0)
	{
		case 0:
			if (func_12(uParam0, uParam1))
				func_13(&uLocal_14, 1);
			break;
	
		case 1:
			STREAMING::REQUEST_ANIM_DICT(func_10(1, 0));
		
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_10(1, 0)))
			{
				return false;
			}
			else if (!func_14())
			{
				return false;
			}
			else if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
			{
				return false;
			}
			else
			{
				func_13(uParam0, 2);
				func_15(func_10(1, 0));
			}
			break;
	
		case 2:
			if (func_16(uParam0) && func_17(uParam0))
			{
				func_18(0);
				func_13(uParam0, 3);
			}
			break;
	
		case 3:
			if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25) || func_19(uParam0))
			{
				func_20(Global_1900325.f_2, 0);
				func_13(uParam0, 4);
			}
			else if (!func_21(Global_1900325.f_2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25) && PED::IS_PED_USING_SCENARIO_HASH(Global_1900325.f_25, joaat("world_camp_javier_knife")))
					func_22(Global_1900325.f_2);
			}
			break;
	
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
			{
				PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(Global_1900325.f_25, "Flee_Panic_With_Glances", Global_35, -1, 4);
				PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Global_1900325.f_25, Global_36, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1900325.f_25, false);
				ANIMSCENE::_SET_BREAKOUT_ARCHETYPE(Global_1900325.f_25, "ClosestScenario");
				TASK::TASK_SMART_FLEE_PED(Global_1900325.f_25, Global_35, 100000f, 100000, 0, 1077936128, 0);
				PED::SET_PED_KEEP_TASK(Global_1900325.f_25, true);
			}
		
			func_8(0);
			Global_1900325.f_24 = 0;
			func_20(Global_1900325.f_2, 0);
		
			if (func_23(Global_1900325.f_2, &num))
				func_24(num);
		
			func_18(1);
			func_25(Global_1900325, 256);
			func_25(Global_1900325, 128);
			Global_1900325.f_25 = 0;
			func_13(uParam0, 5);
			break;
	
		case 5:
			break;
	}

	return false;
}

void func_3(Volume volParam0) // Position - 0x2E8 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_4(int iParam0) // Position - 0x2FF Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_26(iParam0);
	return num == 3 || num == 4;
}

void func_5(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x31D Hash - 0xEB76F1D1 ^0xF1B7E213
{
	if (!ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
		return;

	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*ppedParam0))
		return;

	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*ppedParam0, false))
		return;

	if (!PED::IS_PED_INJURED(*ppedParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false);
	
		if (!bParam3)
			TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
	
		PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
	
		if (bParam2)
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
	}

	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
	return;
}

int func_6(int iParam0) // Position - 0x38B Hash - 0xBABACE63 ^0x5465F25C
{
	int num;

	if (func_27() != -1)
		return 0;

	num = func_28(iParam0);

	if (num == -1)
		return 0;

	return Global_1392915.f_121[num /*20*/].f_6;
}

void func_7() // Position - 0x3BD Hash - 0xCA3FB9A1 ^0xF0A5E217
{
	STREAMING::_REMOVE_SCENARIO_ASSET(joaat("world_camp_javier_knife"));
	return;
}

void func_8(int iParam0) // Position - 0x3CF Hash - 0xFBD460CA ^0x63C700DA
{
	if (Global_1900325.f_23 != iParam0)
		Global_1900325.f_23 = iParam0;

	return;
}

void func_9(int iParam0) // Position - 0x3EA Hash - 0xF74F84F5 ^0xFAA09CC5
{
	int num;

	num = func_29(iParam0);

	if (Global_1900325.f_24 != num)
		Global_1900325.f_24 = num;

	return;
}

char* func_10(int iParam0, int iParam1) // Position - 0x40D Hash - 0x7E1B2F0F ^0x7E1B2F0F
{
	if (iParam0 == 1)
		return "mini_games@fivefingerfillet_launch";
	else if (iParam1 == 1)
		return "mini_games@fivefingerfillet_female";

	return "mini_games@fivefingerfillet";
}

BOOL func_11(var uParam0) // Position - 0x433 Hash - 0x7F6045BF ^0xE6D26BE9
{
	float num;

	if (func_27() != -1)
		return true;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return true;

	if (*uParam0 > 0)
	{
		if (func_4(Global_1900325.f_3))
			return true;
	
		if (!func_30(Global_1900325))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
				TASK::CLEAR_PED_TASKS(Global_1900325.f_25, true, false);
		
			return true;
		}
	
		if (func_31(Global_1900325.f_4, 4194304))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
				TASK::CLEAR_PED_TASKS(Global_1900325.f_25, true, false);
		
			return true;
		}
	
		if (Global_1935630.f_12 == false)
		{
			num = func_32(Global_1900325);
		
			if (BUILTIN::VDIST2(Global_36, Global_1900325.f_5) > num * num)
				return true;
		}
	}

	if (func_33())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
			TASK::CLEAR_PED_TASKS(Global_1900325.f_25, true, false);
	
		return true;
	}

	return false;
}

BOOL func_12(var uParam0, var uParam1) // Position - 0x51E Hash - 0x3B629D9E ^0x8542B4B
{
	if (uParam1->f_7 == -1)
		return false;

	Global_1900325.f_37 = 0;
	func_34(uParam1->f_1, *uParam1, uParam1->f_2, uParam1->f_8, uParam1->f_7);
	func_35(uParam1->f_3, uParam1->f_6);
	PED::_RESERVE_AMBIENT_PEDS(uParam0->f_1);
	func_22(Global_1900325.f_2);
	func_36(&(uParam0->f_8), true, true, true);
	func_37(&(uParam0->f_8));
	func_38(&(uParam0->f_8), true);
	func_39(&(uParam0->f_8), true);
	func_40(&(uParam0->f_8), true);
	func_41(&(uParam0->f_8), true);
	func_42(&(uParam0->f_8), 5f);
	func_43(&(uParam0->f_8), 5);
	func_44(&(uParam0->f_8), false);
	func_45(&(uParam0->f_8), false);
	func_46(&(uParam0->f_8), false);
	func_47(&(uParam0->f_8), false);
	func_48(&(uParam0->f_8), false);
	func_49(&(uParam0->f_8), false);
	func_50(&(uParam0->f_8), false);
	func_51(&(uParam0->f_8), false);
	func_52(&(uParam0->f_8), false);
	func_53(&(uParam0->f_8), false);
	func_54(&(uParam0->f_8), false);
	func_55(&(uParam0->f_8), false);
	func_56(&(uParam0->f_8), false);
	func_57(&(uParam0->f_8), false);
	func_58(&(uParam0->f_8), false);
	func_59(&(uParam0->f_8), false);

	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
		func_60(Global_1900325, Global_1900325.f_5, Global_1900325.f_8, 1056964608, 0.12f);
	else
		func_61(Global_1900325, Global_1900325.f_5, 1073741824, 1);

	Global_1900325.f_19 = { 0f, 0f, 0.5f };
	return true;
}

void func_13(var uParam0, int iParam1) // Position - 0x69F Hash - 0x6140DB6F ^0x6140DB6F
{
	if (*uParam0 != iParam1)
		*uParam0 = iParam1;

	return;
}

BOOL func_14() // Position - 0x6B4 Hash - 0xBA70EE5A ^0x8DD1A2F2
{
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("world_camp_javier_knife"), 9, 0, 0);

	if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("world_camp_javier_knife"), false))
		return false;

	return true;
}

void func_15(char* sParam0) // Position - 0x6DD Hash - 0x278C8BDF ^0xD2A3494B
{
	Vector3 vector;
	int i;

	Global_1900325.f_16[0] = Global_1900325.f_8 - 90f;
	Global_1900325.f_16[1] = Global_1900325.f_8 + 90f;
	vector = { Global_1900325.f_5 };
	vector.f_2 = vector.f_2 - 0.8f;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_1900325.f_9[i /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam0, "idle_01", vector, 0f, 0f, Global_1900325.f_16[i], 0f, 2) };
		Global_1900325.f_9[i /*3*/].f_2 = vector.f_2;
	}

	if (Global_1900325.f_1 == 1)
		Global_1900325.f_34 = 1;
	else
		Global_1900325.f_34 = 0;

	Global_1900325.f_37 = 1;
	return;
}

BOOL func_16(var uParam0) // Position - 0x794 Hash - 0x14A8FE6 ^0xC4F0A6FE
{
	float num;
	int i;

	num = 0.25f * 2f;
	i = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_3[i]))
			func_62(&uParam0->f_3[i], Global_1900325.f_9[i /*3*/], 0f, 0f, 0f, num, num, 2.5f);
	}

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6))
		func_63(&(uParam0->f_6), Global_1900325.f_5, 0f, 0f, Global_1900325.f_8, 4.5f, 4.5f, 2.5f);

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6) && !PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_7))
		uParam0->f_7 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(uParam0->f_6, func_27() == false, 15);

	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25) && !func_64())
		func_65(uParam0->f_6, false);

	return VOLUME::DOES_VOLUME_EXIST(uParam0->f_3[0]) && VOLUME::DOES_VOLUME_EXIST(uParam0->f_3[1]) && VOLUME::DOES_VOLUME_EXIST(uParam0->f_6) && PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_7);
}

BOOL func_17(var uParam0) // Position - 0x8A6 Hash - 0x8CF2AFD3 ^0x476346F
{
	var unk;
	Hash hash;

	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25) && func_64())
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
	{
		STREAMING::REQUEST_MODEL(joaat("a_m_m_fivefingerfilletplayers_01"), false);
	
		if (!STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_fivefingerfilletplayers_01")))
			return 0;
	
		func_65(uParam0->f_6, false);
		unk = { Global_1900325.f_9[Global_1900325.f_34 /*3*/] };
		unk = { unk + Global_1900325.f_19 };
		Global_1900325.f_25 = func_66(joaat("a_m_m_fivefingerfilletplayers_01"), unk, Global_1900325.f_16[Global_1900325.f_34], true, true, 1, false, false, false, false, true, false, false);
		hash = func_67(Global_1900325, Global_1900325.f_4, Global_1900325.f_23);
		PED::_EQUIP_META_PED_OUTFIT(Global_1900325.f_25, hash);
		PED::_UPDATE_PED_VARIATION(Global_1900325.f_25, false, true, true, true, false);
		func_68(Global_1900325.f_25, Global_1900325.f_24);
		PED::SET_LOOTING_FLAG(Global_1900325.f_25, 0, true);
		PED::SET_LOOTING_FLAG(Global_1900325.f_25, 1, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(Global_1900325.f_25, true, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_fivefingerfilletplayers_01"));
		func_9(0);
	}

	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
		return 0;

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1900325.f_25, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1900325.f_25, joaat("rel_minigame_player"));
	PED::SET_PED_CONFIG_FLAG(Global_1900325.f_25, 130, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1900325.f_25, BF_AlwaysFlee, true);
	TEXT_LABEL_ASSIGN_STRING(&(Global_1900325.f_26), func_69(Global_1900325.f_23), 64);
	AUDIO::SET_AMBIENT_VOICE_NAME(Global_1900325.f_25, &(Global_1900325.f_26));
	func_20(Global_1900325.f_2, Global_1900325.f_25);
	uParam0->f_2 = 1;

	if (func_70(Global_1900325, 16))
		func_25(Global_1900325, 16);

	func_71(Global_1900325.f_25);
	return 1;
}

void func_18(int iParam0) // Position - 0xA5E Hash - 0xFBD460CA ^0x67D2A274
{
	if (Global_1900325.f_35 != iParam0)
		Global_1900325.f_35 = iParam0;

	return;
}

BOOL func_19(var uParam0) // Position - 0xA79 Hash - 0x72FAB32 ^0x147A71F1
{
	Ped* outEntity;

	if (uParam0->f_2 == 1 && func_72(Global_1900325.f_25, 0, &(uParam0->f_8), &(uParam0->f_36), 0, 0))
		return true;

	if (Global_1935630.f_17 > 0)
		return true;

	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		return true;

	if (PED::GET_PED_IS_GRAPPLING(Global_35) || PED::GET_PED_IS_BEING_GRAPPLED(Global_35))
		return true;

	outEntity = func_73(Global_1900325.f_25);

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &outEntity, true, true) && PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON_NEG")))
		return true;

	if (uParam0->f_2 == 1)
		if (TASK::IS_PED_EXITING_SCENARIO(Global_1900325.f_25, true) || !PED::IS_PED_USING_SCENARIO_HASH(Global_1900325.f_25, joaat("world_camp_javier_knife")))
			return true;

	return false;
}

void func_20(int iParam0, Ped* ppedParam1) // Position - 0xB3F Hash - 0xBA5B0D7B ^0xBCF3E923
{
	int num;

	if (func_27() != -1)
		return;

	num = func_28(iParam0);

	if (num == -1)
		return;

	Global_1392915.f_121[num /*20*/].f_6 = ppedParam1;
	return;
}

BOOL func_21(int iParam0) // Position - 0xB71 Hash - 0x2719A1FE ^0xED52760B
{
	int num;

	if (func_27() != -1)
		return true;

	if (!func_23(iParam0, &num))
		return false;

	if (Global_1392915[num /*12*/].f_1 == 3 && Global_1900325.f_24 == 0)
		Global_1392915.f_121[num /*20*/].f_15 = 1;

	return Global_1392915.f_121[num /*20*/].f_15;
}

void func_22(int iParam0) // Position - 0xBCA Hash - 0x2E883CF3 ^0x8B9A2B6
{
	int num;

	if (func_27() != -1)
		return;

	if (!func_23(iParam0, &num))
		return;

	if (Global_1392915.f_121[num /*20*/].f_15 == 0)
		Global_1392915.f_121[num /*20*/].f_15 = 1;

	return;
}

BOOL func_23(int iParam0, var uParam1) // Position - 0xC09 Hash - 0x51CBA313 ^0xAF93626D
{
	*uParam1 = -1;

	if (iParam0 == -1 || iParam0 >= 33)
		return false;

	*uParam1 = Global_1899528.f_11[iParam0];
	return *uParam1 != -1;
}

int func_24(int iParam0) // Position - 0xC3D Hash - 0xC3346FD4 ^0xEFA0E7FA
{
	if (func_74(Global_1392915.f_121[iParam0 /*20*/].f_3))
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_PROMPT_MONEY"));
		func_75(&(Global_1392915.f_121[iParam0 /*20*/].f_3), true, false);
		Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
		return 1;
	}

	Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
	return 0;
}

void func_25(int iParam0, BOOL bParam1) // Position - 0xC92 Hash - 0x39D95D03 ^0x411312B7
{
	func_70(iParam0, bParam1);
	Global_1899528.f_3[iParam0] = Global_1899528.f_3[iParam0] - Global_1899528.f_3[iParam0] && bParam1;
	return;
}

int func_26(int iParam0) // Position - 0xCC7 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_76(iParam0))
		return -1;

	return func_77(iParam0);
}

BOOL func_27() // Position - 0xCE3 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

int func_28(int iParam0) // Position - 0xCF1 Hash - 0x3516A114 ^0xDECD073A
{
	if (iParam0 == -1 || iParam0 >= 33)
		return -1;

	return Global_1899528.f_11[iParam0];
}

int func_29(int iParam0) // Position - 0xD19 Hash - 0x5808ED56 ^0x4ECA2D30
{
	int num;

	if (iParam0 < 0 || iParam0 > 3)
		iParam0 = 0;

	if (Global_1900325.f_4 == 76)
		if (iParam0 == 0)
			num = 50;
		else if (iParam0 == 1)
			num = 100;
		else if (iParam0 == 2)
			num = 200;
		else
			num = 400;
	else if (Global_1900325.f_4 == 26)
		if (iParam0 == 0)
			num = 75;
		else if (iParam0 == 1)
			num = 150;
		else if (iParam0 == 2)
			num = 300;
		else
			num = 600;
	else if (Global_1900325.f_4 == 92)
		if (iParam0 == 0)
			num = 100;
		else if (iParam0 == 1)
			num = 200;
		else if (iParam0 == 2)
			num = 400;
		else
			num = 800;
	else if (iParam0 == 0)
		num = 10;
	else if (iParam0 == 1)
		num = 20;
	else if (iParam0 == 2)
		num = 40;
	else
		num = 80;

	return num;
}

BOOL func_30(int iParam0) // Position - 0xE12 Hash - 0xEA76DD3 ^0xEA76DD3
{
	int i;

	for (i = 0; i < Global_1898330; i = i + 1)
	{
		if (func_78(Global_1898330[i]) == iParam0)
			return true;
	}

	return false;
}

BOOL func_31(int iParam0, BOOL bParam1) // Position - 0xE45 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

float func_32(int iParam0) // Position - 0xE78 Hash - 0xCDEBB006 ^0xCDEBB006
{
	switch (iParam0)
	{
		case 0:
			return 40f;
	
		case 1:
			return 70f;
	
		case 2:
			return 45f;
	
		case 3:
			return 90f;
	
		case 4:
			return 50f;
	
		case 5:
			return 90f;
	
		case 6:
			return 90f;
	
		default:
		
	}

	return 70f;
}

BOOL func_33() // Position - 0xEEF Hash - 0x4228A1C2 ^0x70D4FBDE
{
	return Global_1898164.f_163;
}

void func_34(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xEFD Hash - 0x31D8D825 ^0xA23C90B1
{
	Global_1900325 = iParam0;
	Global_1900325.f_1 = uParam1;
	Global_1900325.f_2 = uParam2;
	Global_1900325.f_3 = uParam3;
	Global_1900325.f_4 = uParam4;
	return;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xF2B Hash - 0xA41D2C26 ^0x7580E530
{
	var unk;
	var unk4;
	var unk5;
	int num;
	float num2;

	Global_1900325.f_5 = { uParam0 };
	Global_1900325.f_8 = uParam3;
	unk = { Global_1900325.f_5 };
	unk.f_2 = unk.f_2 + 0.1f;
	num = MISC::_0xBBE5B63EFFB08E68(unk, 17, &(unk.f_2), &unk4, &unk5);

	if (num == 1)
	{
		num2 = Global_1900325.f_5.f_2 - unk.f_2;
	
		if (num2 > 0.1f || num2 < -0.1f)
		{
		}
		else
		{
			Global_1900325.f_5.f_2 = unk.f_2;
		}
	}

	return;
}

void func_36(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFB2 Hash - 0x3145AA70 ^0xBCD5B3EB
{
	if (!bParam1)
		func_79(uParam0, 268435456);
	else
		func_80(uParam0, 268435456);

	if (!bParam2)
		func_79(uParam0, 1073741824);
	else
		func_80(uParam0, 1073741824);

	if (!bParam3)
		func_79(uParam0, 536870912);
	else
		func_80(uParam0, 536870912);

	return;
}

void func_37(var uParam0) // Position - 0x1017 Hash - 0xE59FE01F ^0xE59FE01F
{
	func_82(uParam0, func_81(uParam0) - 6f);
	func_83(uParam0, true);
	return;
}

void func_38(var uParam0, BOOL bParam1) // Position - 0x1034 Hash - 0xB272A69C ^0x2A37F53B
{
	if (bParam1)
		func_80(&(uParam0->f_1), 4);
	else
		func_79(&(uParam0->f_1), 4);

	return;
}

void func_39(var uParam0, BOOL bParam1) // Position - 0x1056 Hash - 0xF7B0944E ^0xC84C2F80
{
	if (bParam1)
		func_80(&(uParam0->f_1), 2);
	else
		func_79(&(uParam0->f_1), 2);

	return;
}

void func_40(var uParam0, BOOL bParam1) // Position - 0x1078 Hash - 0x6418D0A4 ^0x15BADFF8
{
	if (bParam1)
		func_80(&(uParam0->f_1), 8);
	else
		func_79(&(uParam0->f_1), 8);

	return;
}

void func_41(var uParam0, BOOL bParam1) // Position - 0x109C Hash - 0xC115F03A ^0x2E6EAB19
{
	if (bParam1)
		func_80(&(uParam0->f_1), 16);
	else
		func_79(&(uParam0->f_1), 16);

	return;
}

void func_42(var uParam0, float fParam1) // Position - 0x10C0 Hash - 0x4F8BE4B5 ^0x3B01A701
{
	uParam0->f_23 = fParam1;
	return;
}

void func_43(var uParam0, int iParam1) // Position - 0x10CE Hash - 0x4F8BE4B5 ^0x8254350D
{
	uParam0->f_21 = iParam1;
	return;
}

void func_44(var uParam0, BOOL bParam1) // Position - 0x10DC Hash - 0x97140DD8 ^0x96C23302
{
	if (bParam1)
		func_80(&(uParam0->f_1), 256);
	else
		func_79(&(uParam0->f_1), 256);

	return;
}

void func_45(var uParam0, BOOL bParam1) // Position - 0x1102 Hash - 0x97140DD8 ^0xBDBF7A5
{
	if (bParam1)
		func_80(&(uParam0->f_1), 2048);
	else
		func_79(&(uParam0->f_1), 2048);

	return;
}

void func_46(var uParam0, BOOL bParam1) // Position - 0x1128 Hash - 0x97140DD8 ^0xA3B87048
{
	if (bParam1)
		func_80(&(uParam0->f_1), 1024);
	else
		func_79(&(uParam0->f_1), 1024);

	return;
}

void func_47(var uParam0, BOOL bParam1) // Position - 0x114E Hash - 0x97140DD8 ^0xF9889272
{
	if (bParam1)
		func_80(&(uParam0->f_1), 16384);
	else
		func_79(&(uParam0->f_1), 16384);

	return;
}

void func_48(var uParam0, BOOL bParam1) // Position - 0x1174 Hash - 0x76250B73 ^0x1D0F495F
{
	if (bParam1)
		func_80(&(uParam0->f_1), 524288);
	else
		func_79(&(uParam0->f_1), 524288);

	return;
}

void func_49(var uParam0, BOOL bParam1) // Position - 0x119C Hash - 0x8AC5A45 ^0x8880FB31
{
	if (bParam1)
		func_80(&(uParam0->f_1), 1);
	else
		func_79(&(uParam0->f_1), 1);

	return;
}

void func_50(var uParam0, BOOL bParam1) // Position - 0x11BE Hash - 0x32CE93C6 ^0x60BFF41C
{
	if (bParam1)
		func_80(&(uParam0->f_1), 128);
	else
		func_79(&(uParam0->f_1), 128);

	return;
}

void func_51(var uParam0, BOOL bParam1) // Position - 0x11E2 Hash - 0x76250B73 ^0xFF9F293B
{
	if (bParam1)
		func_80(&(uParam0->f_1), 131072);
	else
		func_79(&(uParam0->f_1), 131072);

	return;
}

void func_52(var uParam0, BOOL bParam1) // Position - 0x120A Hash - 0x57EE9974 ^0x57EE9974
{
	if (bParam1)
		func_79(uParam0, 4);
	else
		func_80(uParam0, 4);

	return;
}

void func_53(var uParam0, BOOL bParam1) // Position - 0x1228 Hash - 0xC16273CD ^0x19098BB1
{
	if (bParam1)
		func_79(uParam0, 1048576);
	else
		func_80(uParam0, 1048576);

	return;
}

void func_54(var uParam0, BOOL bParam1) // Position - 0x124C Hash - 0xC16273CD ^0x9BCFEF67
{
	if (bParam1)
		func_79(uParam0, 262144);
	else
		func_80(uParam0, 262144);

	return;
}

void func_55(var uParam0, BOOL bParam1) // Position - 0x1270 Hash - 0x776268CE ^0x776268CE
{
	if (bParam1)
		func_79(uParam0, 8);
	else
		func_80(uParam0, 8);

	return;
}

void func_56(var uParam0, BOOL bParam1) // Position - 0x1290 Hash - 0x82AFDBEA ^0x82AFDBEA
{
	if (bParam1)
		func_79(uParam0, 32);
	else
		func_80(uParam0, 32);

	return;
}

void func_57(var uParam0, BOOL bParam1) // Position - 0x12B0 Hash - 0x6E38DCCC ^0x27E8693B
{
	if (bParam1)
	{
		func_79(uParam0, 16);
	}
	else
	{
		func_80(uParam0, 67108864);
		func_80(uParam0, 16);
	}

	return;
}

void func_58(var uParam0, BOOL bParam1) // Position - 0x12DB Hash - 0x7BFDDC82 ^0x7BFDDC82
{
	if (bParam1)
		func_79(uParam0, 64);
	else
		func_80(uParam0, 64);

	return;
}

void func_59(var uParam0, BOOL bParam1) // Position - 0x12FB Hash - 0x9CA625A6 ^0x5835CEE9
{
	if (bParam1)
		func_79(uParam0, 1024);
	else
		func_80(uParam0, 1024);

	return;
}

void func_60(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, float fParam6) // Position - 0x131D Hash - 0xA00F39C3 ^0xA00F39C3
{
	int i;
	int num;
	Object object;
	Vector3 entityCoords;
	float entityHeading;
	var unk3;

	num = func_84(iParam0);

	if (!func_85(iParam0))
		return;

	for (i = 0; i < num; i = i + 1)
	{
		object = func_86(iParam0, uParam1, fParam4, i, iParam5);
	
		if (!ENTITY::IS_ENTITY_DEAD(object) && ENTITY::IS_ENTITY_UPRIGHT(object, 1119092736))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(object, true, false) };
			unk3 = entityCoords.f_2;
		
			if (func_87(iParam0, uParam1, fParam4, i, &entityCoords, &entityHeading, 0))
			{
				entityCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(entityCoords, entityHeading, 0f, fParam6, 0f) };
				entityCoords.f_2 = unk3;
				entityHeading = ENTITY::GET_ENTITY_HEADING(object);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(object, entityCoords, entityHeading, true, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(object, true);
			}
		}
	}

	return;
}

void func_61(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x13D7 Hash - 0x81C76EA ^0x8B530388
{
	Volume volume;
	Object objectFromIndexedItem;
	int entitiesInVolume;
	int i;
	int num;
	ItemSet itemSet;

	num = 0;
	func_88(&volume, uParam1, 0f, 0f, 0f, iParam4, iParam4, iParam4);

	if (!VOLUME::DOES_VOLUME_EXIST(volume))
		return;

	itemSet = ITEMSET::CREATE_ITEMSET(true);

	if (ITEMSET::IS_ITEMSET_VALID(itemSet))
	{
		entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volume, itemSet, 3);
	
		for (i = 0; i < entitiesInVolume; i = i + 1)
		{
			objectFromIndexedItem = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet));
		
			if (!ENTITY::IS_ENTITY_DEAD(objectFromIndexedItem))
			{
				if (func_89(iParam0, ENTITY::GET_ENTITY_MODEL(objectFromIndexedItem)))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(objectFromIndexedItem))
					{
						if (func_27() != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(objectFromIndexedItem) || func_27() == -1)
						{
							num = num + 1;
						
							if (iParam5 == 1 && ENTITY::IS_ENTITY_UPRIGHT(objectFromIndexedItem, 1119092736))
							{
								ENTITY::FREEZE_ENTITY_POSITION(objectFromIndexedItem, true);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(objectFromIndexedItem, false);
							}
							else
							{
								ENTITY::FREEZE_ENTITY_POSITION(objectFromIndexedItem, false);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(objectFromIndexedItem, true);
							}
						}
					}
				}
			}
		}
	
		ITEMSET::_CLEAR_ITEMSET(itemSet);
		ITEMSET::DESTROY_ITEMSET(itemSet);
	}

	num > 0;
	func_3(volume);
	return;
}

void func_62(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9) // Position - 0x14D5 Hash - 0xCF0C48FE ^0x615ED286
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, func_90());

	return;
}

void func_63(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9) // Position - 0x14FF Hash - 0xCF0C48FE ^0xDCF64CAF
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, func_90());

	return;
}

BOOL func_64() // Position - 0x1529 Hash - 0x39918519 ^0xF50EDE5C
{
	float num;
	float num2;
	float num3;

	if (!CAM::IS_SCREEN_FADED_IN() || func_70(Global_1900325, 16))
		return false;

	num = BUILTIN::VDIST(Global_1900325.f_5, Global_36);
	num2 = func_91(Global_1900325);
	num3 = num2 - 10f;

	if (num < 10f || num < num3 && CAM::IS_SPHERE_VISIBLE(Global_1900325.f_5, 1f))
		return true;

	return false;
}

void func_65(Volume volParam0, BOOL bParam1) // Position - 0x15A1 Hash - 0xD6642292 ^0x5A7BA218
{
	int num;

	num = 16384;

	if (bParam1)
		num = num | 524288;

	MISC::_CLEAR_VOLUME_AREA(volParam0, num);
	return;
}

Ped func_66(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x15C4 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_92(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

Hash func_67(int iParam0, int iParam1, int iParam2) // Position - 0x1606 Hash - 0x31EA2BC7 ^0x7FB57210
{
	if (iParam0 == 1)
	{
		if (iParam2 == -1)
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	
		switch (iParam1)
		{
			case 5:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_01");
				
					case 1:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_02");
				
					case 2:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_03");
				
					case 3:
						return 1371088384;
				
					case 4:
						return 1263868216;
				
					case 5:
						return 2106064285;
				
					default:
					
				}
			
				return joaat("META_OUTFIT_SAINTDENIS_VAR_01");
		
			case 38:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_BLACKWATER_VAR_01");
				
					case 1:
						return joaat("META_OUTFIT_BLACKWATER_VAR_02");
				
					case 2:
						return joaat("META_OUTFIT_BLACKWATER_VAR_03");
				
					case 3:
						return -1139797490;
				
					case 4:
						return -875384429;
				
					case 5:
						return 436555239;
				
					default:
					
				}
			
				return joaat("META_OUTFIT_BLACKWATER_VAR_01");
		
			case 69:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_EMERALDRANCH_VAR_01");
				
					case 1:
						return joaat("META_OUTFIT_EMERALDRANCH_VAR_02");
				
					case 2:
						return joaat("META_OUTFIT_EMERALDRANCH_VAR_03");
				
					case 3:
						return 1633413521;
				
					case 4:
						return -216756988;
				
					case 5:
						return 368759504;
				
					default:
					
				}
			
				return joaat("META_OUTFIT_EMERALDRANCH_VAR_01");
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == -1)
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	
		switch (iParam1)
		{
			case 26:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_STRAWBERRY_VAR_01");
				
					case 1:
						return joaat("META_OUTFIT_STRAWBERRY_VAR_02");
				
					case 2:
						return joaat("META_OUTFIT_STRAWBERRY_VAR_03");
				
					case 3:
						return 496214832;
				
					default:
					
				}
			
				return joaat("META_OUTFIT_STRAWBERRY_VAR_01");
		
			case 76:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_VALENTINE_VAR_01");
				
					case 1:
						return joaat("META_OUTFIT_VALENTINE_VAR_02");
				
					case 2:
						return joaat("META_OUTFIT_VALENTINE_VAR_03");
				
					case 3:
						return -478015708;
				
					default:
					
				}
			
				return joaat("META_OUTFIT_VALENTINE_VAR_01");
		
			case 92:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_VANHORN_VAR_01");
				
					case 1:
						return joaat("META_OUTFIT_VANHORN_VAR_02");
				
					case 2:
						return joaat("META_OUTFIT_VANHORN_VAR_03");
				
					case 3:
						return -1887776194;
				
					default:
					
				}
			
				return joaat("META_OUTFIT_VANHORN_VAR_01");
		}
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (iParam2 == -1)
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	
		switch (iParam1)
		{
			case 5:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_01");
				
					case 1:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_02");
				
					case 2:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_03");
				
					case 3:
						return 1371088384;
				
					case 4:
						return 1263868216;
				
					case 5:
						return 2106064285;
				
					case 6:
						return 1754977219;
				
					case 7:
						return -1726696266;
				
					case 8:
						return -1978394955;
				
					case 9:
						return -820633060;
				
					case 10:
						return -44073298;
				
					case 11:
						return -342303967;
				
					default:
					
				}
			
				return joaat("META_OUTFIT_SAINTDENIS_VAR_01");
		
			case 38:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_BLACKWATER_VAR_01");
				
					case 1:
						return joaat("META_OUTFIT_BLACKWATER_VAR_02");
				
					case 2:
						return joaat("META_OUTFIT_BLACKWATER_VAR_03");
				
					case 3:
						return -1139797490;
				
					case 4:
						return -875384429;
				
					case 5:
						return 436555239;
				
					case 6:
						return 666823002;
				
					case 7:
						return 4921971;
				
					case 8:
						return 251738079;
				
					case 9:
						return 478204342;
				
					case 10:
						return 777155929;
				
					case 11:
						return 1841389;
				
					default:
					
				}
			
				return joaat("META_OUTFIT_BLACKWATER_VAR_01");
		
			case 75:
				switch (iParam2)
				{
					case 0:
						return -1600439903;
				
					case 1:
						return 1508387900;
				
					case 2:
						return 1147797824;
				
					case 3:
						return 1947066503;
				
					case 4:
						return 1716995354;
				
					case 5:
						return 401713232;
				
					case 6:
						return 163056605;
				
					case 7:
						return 1032745865;
				
					case 8:
						return 793499396;
				
					case 9:
						return 883482182;
				
					case 10:
						return 1123711721;
				
					case 11:
						return -903083698;
				
					default:
					
				}
			
				return -1600439903;
		
			case 76:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_VALENTINE_VAR_01");
				
					case 1:
						return joaat("META_OUTFIT_VALENTINE_VAR_02");
				
					case 2:
						return joaat("META_OUTFIT_VALENTINE_VAR_03");
				
					case 3:
						return -478015708;
				
					case 4:
						return -194891548;
				
					case 5:
						return 112776593;
				
					case 6:
						return 411040031;
				
					case 7:
						return -1387257155;
				
					case 8:
						return -1087322498;
				
					case 9:
						return 2089668521;
				
					case 10:
						return 1791437852;
				
					case 11:
						return 1426194578;
				
					default:
					
				}
			
				return joaat("META_OUTFIT_VALENTINE_VAR_01");
		
			case 92:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_VANHORN_VAR_01");
				
					case 1:
						return joaat("META_OUTFIT_VANHORN_VAR_02");
				
					case 2:
						return joaat("META_OUTFIT_VANHORN_VAR_03");
				
					case 3:
						return -1887776194;
				
					case 4:
						return -967360518;
				
					case 5:
						return -1276208343;
				
					case 6:
						return -506398995;
				
					case 7:
						return -815574510;
				
					case 8:
						return 104710086;
				
					case 9:
						return -1562249180;
				
					case 10:
						return -1812506033;
				
					case 11:
						return -1431009331;
				
					default:
					
				}
			
				return joaat("META_OUTFIT_VANHORN_VAR_01");
		
			case 105:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_RHODES_VAR_01");
				
					case 1:
						return joaat("META_OUTFIT_RHODES_VAR_02");
				
					case 2:
						return joaat("META_OUTFIT_RHODES_VAR_03");
				
					case 3:
						return 1088279801;
				
					case 4:
						return 1949514659;
				
					case 5:
						return 772091720;
				
					case 6:
						return 1338340040;
				
					case 7:
						return -321409750;
				
					case 8:
						return -1233239944;
				
					case 9:
						return 1051251111;
				
					case 10:
						return -262949646;
				
					case 11:
						return -726499920;
				
					default:
					
				}
			
				return joaat("META_OUTFIT_RHODES_VAR_01");
		
			case 115:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_TUMBLEWEED_VAR_01");
				
					case 1:
						return joaat("META_OUTFIT_TUMBLEWEED_VAR_02");
				
					case 2:
						return joaat("META_OUTFIT_TUMBLEWEED_VAR_03");
				
					case 3:
						return -1892751910;
				
					case 4:
						return 1174655877;
				
					case 5:
						return 979024947;
				
					case 6:
						return -240866616;
				
					case 7:
						return 1469806260;
				
					case 8:
						return 317713758;
				
					case 9:
						return 1934601404;
				
					case 10:
						return 487194674;
				
					case 11:
						return -1833636986;
				
					default:
					
				}
			
				return joaat("META_OUTFIT_TUMBLEWEED_VAR_01");
		}
	}

	return 0;
}

BOOL func_68(Ped* ppedParam0, int iParam1) // Position - 0x1DF4 Hash - 0x61B6B0B7 ^0xC9F6693A
{
	Hash hash;

	if (ENTITY::DOES_ENTITY_EXIST(ppedParam0) && ENTITY::IS_ENTITY_A_PED(ppedParam0))
	{
		hash = func_93(ppedParam0);
		return func_94(ppedParam0, joaat("currency_cash"), iParam1, hash);
	}

	return DECORATOR::DECOR_SET_INT(ppedParam0, "loot_money", iParam1);
}

char* func_69(int iParam0) // Position - 0x1E38 Hash - 0x9A2DC9B4 ^0x376A5FD1
{
	var unk;
	var unk3;

	switch (Global_1900325.f_4)
	{
		case 26:
			switch (iParam0)
			{
				case 0:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
			
				case 1:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
			
				case 2:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
			
				case 3:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam0)
			{
				case 0:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
			
				case 1:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
			
				case 2:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
			
				case 3:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
			
				default:
					break;
			}
			break;
	
		case 92:
			switch (iParam0)
			{
				case 0:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
			
				case 1:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
			
				case 2:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
			
				case 3:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
			
				default:
					break;
			}
			break;
	}

	unk = 1;
	func_95(Global_1900325.f_25, Global_1900325, &unk, 0, &unk3);
	return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(unk3);
}

BOOL func_70(int iParam0, BOOL bParam1) // Position - 0x1F31 Hash - 0x9C3ED08F ^0xE9848133
{
	return Global_1899528.f_3[iParam0] && bParam1 != false;
}

void func_71(Ped* ppedParam0) // Position - 0x1F48 Hash - 0xDE3AFB7F ^0xA4C2B645
{
	Vector3 vector;

	if (ENTITY::IS_ENTITY_DEAD(ppedParam0) || PED::IS_PED_USING_SCENARIO_HASH(ppedParam0, joaat("world_camp_javier_knife")))
		return;

	vector = { Global_1900325.f_9[Global_1900325.f_34 /*3*/] };
	vector = { vector + Global_1900325.f_19 };
	TASK::CLEAR_PED_TASKS(ppedParam0, true, false);
	TASK::TASK_START_SCENARIO_AT_POSITION(ppedParam0, joaat("world_camp_javier_knife"), vector, Global_1900325.f_16[Global_1900325.f_34], -1, false, true, 0, 0f, false);
	PED::SET_PED_KEEP_TASK(ppedParam0, true);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(ppedParam0, false, false);
	return;
}

BOOL func_72(Ped* ppedParam0, Entity eParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x1FCC Hash - 0xED93B9E0 ^0x288D4ED6
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > uParam2->f_5)
		func_97(uParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(ppedParam0))
	{
		if (iParam5 > 0f)
			uParam2->f_12 = iParam5;
		else
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(ppedParam0, true, false));
	
		if (!(uParam2->f_1 & 128 != 0))
		{
			if (func_98(ppedParam0, uParam2))
			{
				*uParam3 = 128;
				func_99(ppedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(uParam2->f_1 & 8 != 0))
			{
				if (func_100(ppedParam0, uParam2))
				{
					*uParam3 = 8;
					func_99(ppedParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_101(ppedParam0, eParam1, uParam2))
				{
					*uParam3 = 8;
					func_99(ppedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 32 != 0)
			{
				if (func_102(ppedParam0, uParam2))
				{
					*uParam3 = 64;
					func_99(ppedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_103(PLAYER::PLAYER_ID(), false, true, uParam2->f_1 & 524288 == 0))
		{
			if (!(uParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_99(ppedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_104(uParam2, 1065353216))
			{
				if (!(uParam2->f_1 & 4 != 0))
				{
					if (func_105(Global_35, ppedParam0, uParam2))
					{
						*uParam3 = 4;
						func_99(ppedParam0, uParam2, *uParam3);
						return true;
					}
				}
			
				if (!(uParam2->f_1 & 256 != 0))
				{
					if (func_106(Global_35, ppedParam0, uParam2))
					{
						*uParam3 = 256;
						func_99(ppedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 16 != 0))
		{
			if (uParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_107(Global_35, ppedParam0, uParam2, false))
				{
					*uParam3 = 16;
					func_99(ppedParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_107(Global_35, ppedParam0, uParam2, true))
			{
				*uParam3 = 16;
				func_99(ppedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_108(ppedParam0, uParam2))
				{
					*uParam3 = 32;
					func_99(ppedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_109(&ppedParam0, uParam2))
				{
					*uParam3 = 4096;
					func_99(ppedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(uParam2->f_1 & 2 != 0))
			{
				if (func_110(uParam2, 4000))
				{
					if (func_111(ppedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, false, *uParam2 & 256 != 0) && func_112(uParam2, ppedParam0) && func_113(uParam2, ppedParam0))
					{
						*uParam3 = 2;
						func_99(ppedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 2 != 0))
		{
			if (uParam2->f_12 < 4f)
			{
				if (func_111(ppedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, true, *uParam2 & 256 != 0) && func_112(uParam2, ppedParam0) && func_113(uParam2, ppedParam0))
				{
					*uParam3 = 2;
					func_99(ppedParam0, uParam2, *uParam3);
					return true;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_114(ppedParam0, Global_1935630.f_41))
							{
								func_115();
								*uParam3 = 2;
								func_99(ppedParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_114(ppedParam0, Global_1935630.f_41))
						{
							func_115();
							*uParam3 = 2;
							func_99(ppedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		
			if (uParam2->f_12 < 10f)
			{
				if (func_116(uParam2, ppedParam0) || uParam2->f_9 > 0 && func_117() - uParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(ppedParam0))
					{
						func_115();
						*uParam3 = 2;
						func_99(ppedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_118())
					{
						if (func_114(ppedParam0, Global_1935630.f_42))
						{
							func_115();
							*uParam3 = 2;
							func_99(ppedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 1024 != 0))
		{
			if (func_119(uParam2, ppedParam0))
			{
				*uParam3 = 1024;
				func_99(ppedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!(uParam2->f_1 & 2048 != 0))
			{
				if (func_120(ppedParam0, eParam1, uParam2))
				{
					*uParam3 = 2048;
					func_99(ppedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_121(ppedParam0, uParam2))
					{
						*uParam3 = 8192;
						func_99(ppedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*uParam2 & 64 != 0)
			{
				if (func_122(ppedParam0, uParam2))
				{
					*uParam3 = 32768;
					func_99(ppedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_123(uParam2, 4000))
				{
					if (func_124(&ppedParam0, uParam2))
					{
						*uParam3 = 512;
						func_99(ppedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_125(ppedParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_99(ppedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(uParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(ppedParam0))
		{
			if (func_126(uParam2, ppedParam0))
			{
				*uParam3 = 1;
				func_99(ppedParam0, uParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

Ped* func_73(Ped* ppedParam0) // Position - 0x25F5 Hash - 0xC9D82232 ^0xC9D82232
{
	return ppedParam0;
}

BOOL func_74(int iParam0) // Position - 0x25FF Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_75(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x263E Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_74(*iParam0))
	{
		*iParam0 = 0;
		return;
	}

	num = func_127(*iParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}

	func_128(num);
	*iParam0 = 0;
	return;
}

BOOL func_76(int iParam0) // Position - 0x2692 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_77(int iParam0) // Position - 0x26C5 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_129(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_78(int iParam0) // Position - 0x2706 Hash - 0x84E72643 ^0x84E72643
{
	if (func_130(iParam0) != 4)
		return -1;

	return func_131(iParam0);
}

void func_79(var uParam0, int iParam1) // Position - 0x2722 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_80(var uParam0, int iParam1) // Position - 0x2733 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_81(var uParam0) // Position - 0x2748 Hash - 0xD73B9827 ^0x4905FA06
{
	return uParam0->f_24;
}

void func_82(var uParam0, float fParam1) // Position - 0x2754 Hash - 0x4F8BE4B5 ^0xC5C29ABC
{
	uParam0->f_25 = fParam1;
	return;
}

void func_83(var uParam0, BOOL bParam1) // Position - 0x2762 Hash - 0xA36879E8 ^0xA36879E8
{
	if (bParam1)
		func_79(uParam0, 1);
	else
		func_80(uParam0, 1);

	return;
}

int func_84(int iParam0) // Position - 0x2780 Hash - 0x5A162929 ^0x5A162929
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 1:
			return 4;
	
		case 2:
			return 6;
	
		case 3:
			return 2;
	
		default:
		
	}

	return 1;
}

BOOL func_85(int iParam0) // Position - 0x27B9 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return true;
	
		default:
		
	}

	return false;
}

Object func_86(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6) // Position - 0x27E6 Hash - 0x4D726832 ^0xEFBA9790
{
	var unk;
	ItemSet itemSet;
	int i;
	int entitiesInVolume;
	float num;
	Object objectFromIndexedItem;
	Object object;
	Volume volume;
	float num2;
	float num3;

	if (!func_132(iParam0, uParam1, fParam4, iParam5, &unk, 1))
		return 0;

	num = iParam6 * 2f;
	object = 0;
	num2 = -1f;
	itemSet = ITEMSET::CREATE_ITEMSET(true);

	if (ITEMSET::IS_ITEMSET_VALID(itemSet))
	{
		func_62(&volume, unk, 0f, 0f, 0f, num, num, 1.2f);
		entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volume, itemSet, 3);
	
		for (i = 0; i < entitiesInVolume; i = i + 1)
		{
			objectFromIndexedItem = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet));
		
			if (ENTITY::DOES_ENTITY_EXIST(objectFromIndexedItem))
			{
				if (func_89(iParam0, ENTITY::GET_ENTITY_MODEL(objectFromIndexedItem)))
				{
					num3 = func_133(unk, ENTITY::GET_ENTITY_COORDS(objectFromIndexedItem, true, false));
				
					if (num2 == -1f || num3 < num2)
					{
						object = objectFromIndexedItem;
						num2 = num3;
					}
				}
			}
		}
	
		func_3(volume);
		ITEMSET::DESTROY_ITEMSET(itemSet);
	}

	return object;
}

BOOL func_87(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, var uParam6, var uParam7, int iParam8) // Position - 0x28B7 Hash - 0x2FF5C3A2 ^0x10A6D1D5
{
	Vector3 vector;
	var unk3;
	var groundZ;

	if (!func_134(iParam0))
		return false;

	if (!func_135(iParam0, iParam5, &vector))
		return false;

	*uParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, vector) };

	if (iParam8 == 1)
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + { 0.1f, 0f, 0f }, &groundZ, false))
			uParam6->f_2 = groundZ;

	if (!func_136(iParam0, iParam5, &unk3))
		return false;

	*uParam7 = fParam4 + unk3;

	if (*uParam7 > 360f)
		*uParam7 = *uParam7 - 360f;

	if (*uParam7 < -360f)
		*uParam7 = *uParam7 + 360f;

	return true;
}

void func_88(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9) // Position - 0x295E Hash - 0xCF0C48FE ^0xA0FA78C0
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, fParam4, iParam7, func_90());

	return;
}

BOOL func_89(int iParam0, Hash hParam1) // Position - 0x2988 Hash - 0x99A45182 ^0x90A7961A
{
	switch (iParam0)
	{
		case 0:
			switch (hParam1)
			{
				case joaat("p_windsorchair01x"):
				case joaat("p_chair38x"):
					return true;
			
				case joaat("p_chair24x"):
				case joaat("p_chair22x"):
					return true;
			
				case joaat("p_windsorchair03x"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 1:
			if (hParam1 == joaat("p_chair02x"))
				return true;
		
			if (hParam1 == joaat("p_stool02x"))
				return true;
		
			if (hParam1 == joaat("p_stool03x"))
				return true;
		
			if (hParam1 == joaat("p_stoolwinter01x"))
				return true;
		
			if (hParam1 == joaat("p_stoolfolding01x"))
				return true;
		
			if (hParam1 == joaat("p_chair_barrel04b"))
				return true;
		
			if (hParam1 == joaat("p_chairfolding02x"))
				return true;
			break;
	
		case 2:
			if (hParam1 == joaat("p_chair13x"))
				return true;
		
			if (hParam1 == joaat("p_chair05x"))
				return true;
		
			if (hParam1 == joaat("p_chair06x"))
				return true;
		
			if (hParam1 == joaat("p_windsorchair03x"))
				return true;
		
			if (hParam1 == joaat("p_chair12x"))
				return true;
		
			if (hParam1 == joaat("p_chair14x"))
				return true;
		
			if (hParam1 == joaat("p_chair11x"))
				return true;
		
			if (hParam1 == joaat("p_chair26x"))
				return true;
			break;
	
		case 3:
			if (hParam1 == joaat("p_chair06x"))
				return true;
		
			if (hParam1 == joaat("s_crateseat03x"))
				return true;
		
			if (hParam1 == joaat("p_chair_crate02x"))
				return true;
		
			if (hParam1 == joaat("p_stoolfolding01x"))
				return true;
		
			if (hParam1 == joaat("p_chairfolding02x"))
				return true;
			break;
	
		default:
			return true;
	}

	return false;
}

char* func_90() // Position - 0x2B0B Hash - 0x306ACA3A ^0x59DC7081
{
	return "unnamed";
}

float func_91(int iParam0) // Position - 0x2B17 Hash - 0xCDEBB006 ^0xCDEBB006
{
	switch (iParam0)
	{
		case 0:
			return 30f;
	
		case 1:
			return 40f;
	
		case 2:
			return 35f;
	
		case 3:
			return 60f;
	
		case 4:
			return 60f;
	
		case 5:
			return 60f;
	
		case 6:
			return 60f;
	
		default:
		
	}

	return 40f;
}

void func_92(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x2B8E Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_137(eptParam1))
		{
			func_138(pedParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(pedParam0, true);
			flag = true;
		}
	}

	if (PED::IS_PED_HUMAN(pedParam0))
	{
		if (bParam6)
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(pedParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(eptParam1));
	
		if (PED::IS_PED_MALE(pedParam0) && !bParam3)
			func_139(pedParam0, 0, true);
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(pedParam0, 0, false);
			flag = true;
		}
	
		if (bParam4)
		{
			func_140(pedParam0, false);
			flag = true;
		}
	
		func_141(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

Hash func_93(Ped* ppedParam0) // Position - 0x2C6F Hash - 0xEDFF9DCB ^0xC7BBB68C
{
	Ped pedIndexFromEntityIndex;

	if (ENTITY::DOES_ENTITY_EXIST(ppedParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(ppedParam0))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ppedParam0);
		
			if (PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
				if (PED::IS_PED_MALE(pedIndexFromEntityIndex))
					return 536905469;
				else
					return -352521166;
		}
	}

	return 205298116;
}

BOOL func_94(Ped* ppedParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x2CBB Hash - 0xC0769AF0 ^0xE06E4CD8
{
	int argStruct;
	int num;

	argStruct.f_1 = 10;
	argStruct.f_12 = 10;
	argStruct = 1;
	argStruct.f_1[0] = iParam1;
	argStruct.f_12[0] = iParam2;
	num = 13;
	return ENTITY::_REQUEST_ENTITY_LOOT_LIST(ppedParam0, &argStruct, hParam3, num, 2, false);
}

int func_95(Ped* ppedParam0, int iParam1, var uParam2, int iParam3, var uParam4) // Position - 0x2CFB Hash - 0xC464D230 ^0x8E4DEBC0
{
	var unk;
	int num;
	int num2;
	int i;
	int j;
	int k;
	int endRange;
	int num3;
	int num4;
	int randomIntInRange;
	int num5;

	unk = 3;
	num = 0;
	func_142(ENTITY::GET_ENTITY_MODEL(ppedParam0), iParam1, &unk, &num);

	if (num == 0)
		return 0;

	num2 = iParam3;

	for (j = 0; j < iParam3; j = j + 1)
	{
		i = uParam2->[j];
	
		if (!func_143(&unk, i))
		{
			num2 = num2 - 1;
		}
		else
		{
			for (k = 0; k < j; k = k + 1)
			{
				if (uParam2->[k] == i)
				{
					num2 = num2 - 1;
					break;
				}
			}
		}
	}

	if (num > num2)
	{
		num3 = 0;
		endRange = num - num2;
	}
	else
	{
		num3 = -1;
		endRange = 0;
	
		for (j = 0; j < iParam3; j = j + 1)
		{
			i = uParam2->[j];
		
			if (func_143(&unk, i))
			{
				num4 = 0;
			
				for (k = 0; k < iParam3; k = k + 1)
				{
					if (uParam2->[k] == i)
						num4 = num4 + 1;
				}
			
				if (num3 == -1 || num3 > num4)
				{
					num3 = num4;
					endRange = 1;
				}
				else if (num3 == num4)
				{
					endRange = endRange + 1;
				}
			}
		}
	}

	if (endRange == 0)
		return 0;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	num5 = 0;

	for (i = 0; i < 92; i = i + 1)
	{
		if (func_143(&unk, i))
		{
			num4 = 0;
		
			for (j = 0; j < iParam3; j = j + 1)
			{
				if (uParam2->[j] == i)
					num4 = num4 + 1;
			}
		
			if (num4 == num3)
			{
				if (num5 == randomIntInRange)
				{
					*uParam4 = i;
					return 1;
				}
			
				num5 = num5 + 1;
			}
		}
	}

	return 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x2E8A Hash - 0xA17D549C ^0x8E1494F3
{
	switch (iParam0)
	{
		case 0:
			return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
	
		case 1:
			return "0944_A_M_M_Foreman_White_AVOID_04";
	
		case 2:
			return "0945_A_M_M_Foreman_White_AVOID_05";
	
		case 3:
			return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
	
		case 4:
			return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
	
		case 5:
			return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
	
		case 6:
			return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
	
		case 7:
			return "0956_A_M_M_Rancher_White_01";
	
		case 8:
			return "0957_A_M_M_Rancher_White_02";
	
		case 9:
			return "0958_A_M_M_Rancher_White_03";
	
		case 10:
			return "0959_A_M_M_Rancher_White_04";
	
		case 11:
			return "0960_A_M_M_Rancher_White_05";
	
		case 12:
			return "0961_A_M_M_Rancher_White_06";
	
		case 13:
			return "0962_A_M_M_Rancher_White_07";
	
		case 14:
			return "0966_A_M_M_RoughTravellers_Black_04";
	
		case 15:
			return "0985_S_M_M_AmbientLawRural_White_08";
	
		case 16:
			return "0994_S_M_M_DispatchLawRural_White_09";
	
		case 17:
			return "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02";
	
		case 18:
			return "0989_S_M_M_DispatchLawRural_White_04";
	
		case 19:
			return "0847_A_F_M_Civ_Black_AVOID_02";
	
		case 20:
			return "0850_A_F_M_Civ_Hispanic_AVOID_03";
	
		case 21:
			return "0854_A_F_M_Civ_Poor_Black_AVOID_04";
	
		case 22:
			return "0858_A_F_M_Civ_Poor_Black_TIMID_04";
	
		case 23:
			return "0861_A_F_M_Civ_Poor_White_AGGRESSIVE_03";
	
		case 24:
			return "0868_A_F_M_Civ_Poor_White_AVOID_06";
	
		case 25:
			return "0876_A_F_M_Civ_White_TIMID_05";
	
		case 26:
			return "0702_A_M_M_RhdUpperClass_01_WHITE_02";
	
		case 27:
			return "0785_A_F_M_MiddleSDTownfolk_01_WHITE_01";
	
		case 28:
			return "0805_A_M_M_SDDockForeman_01_WHITE_01";
	
		case 29:
			return "0813_G_M_M_UniBraithwaites_01_WHITE_02";
	
		case 30:
			return "1004_S_M_M_AmbientBlWPolice_White_03";
	
		case 31:
			return "1011_S_M_M_DispatchPolice_White_07";
	
		case 32:
			return "0561_A_F_M_Prostitute_Black_05";
	
		case 33:
			return "0566_A_F_M_Prostitute_White_05";
	
		case 34:
			return "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01";
	
		case 35:
			return "0808_S_M_M_Army_01_WHITE_03";
	
		case 36:
			return "0811_S_M_Y_Army_01_WHITE_03";
	
		case 37:
			return "0835_S_M_M_GenConductor_01_WHITE_01";
	
		case 38:
			return "0836_S_M_M_GenConductor_01_WHITE_02";
	
		case 39:
			return "0844_S_M_M_UniButchers_01_WHITE_03";
	
		case 40:
			return "0782_A_F_M_LowerSDTownfolk_01_WHITE_01";
	
		case 41:
			return "0803_A_M_O_SDUpperClass_01_WHITE_02";
	
		case 42:
			return "1015_A_F_M_MiddleSDTownfolk_04_WHITE_01";
	
		case 43:
			return "0842_S_M_M_UniButchers_01_WHITE_01";
	
		case 44:
			return "0843_S_M_M_UniButchers_01_WHITE_02";
	
		case 45:
			return "0817_A_M_M_VhtThug_01_WHITE_01";
	
		case 46:
			return "0818_A_M_M_VhtThug_01_WHITE_02";
	
		case 47:
			return "0819_A_M_M_VhtThug_01_WHITE_03";
	
		case 48:
			return "0429_A_M_M_StrTownfolk_01_WHITE_01";
	
		case 49:
			return "0594_A_M_M_Civ_Poor_White_AVOID_14";
	
		case 50:
			return "0595_A_M_M_Civ_White_AVOID_11";
	
		case 51:
			return "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19";
	
		case 52:
			return "0650_A_M_M_Civ_Poor_White_AGGRESSIVE_20";
	
		case 53:
			return "0657_A_M_M_Civ_Poor_White_AGGRESSIVE_18";
	
		case 54:
			return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
	
		case 55:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
	
		case 56:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
	
		case 57:
			return "0132_G_M_M_UniCriminals_01_BLACK_01";
	
		case 58:
			return "0133_G_M_M_UniCriminals_01_BLACK_02";
	
		case 59:
			return "0134_G_M_M_UniCriminals_01_HISPANIC_01";
	
		case 60:
			return "0278_A_F_M_NbxWhore_01_BLACK_01";
	
		case 61:
			return "0894_A_M_M_Civ_Poor_Black_AVOID_09";
	
		case 62:
			return "0915_A_M_M_Civ_Poor_White_AGGRESSIVE_15";
	
		case 63:
			return "1052_G_M_M_UniGrays_01_WHITE_03";
	
		case 64:
			return "1053_G_M_M_UniGrays_01_WHITE_04";
	
		case 65:
			return "1056_G_M_M_UniCriminals_01_WHITE_03";
	
		case 66:
			return "1058_G_M_M_UniCriminals_01_WHITE_05";
	
		case 67:
			return "1059_G_M_M_UniCriminals_01_WHITE_06";
	
		case 68:
			return "1060_G_M_M_UniCriminals_01_WHITE_07";
	
		case 69:
			return "1061_G_M_M_UniCriminals_01_WHITE_08";
	
		case 70:
			return "1062_G_M_M_UniCriminals_01_WHITE_09";
	
		case 71:
			return "1063_G_M_M_UniCriminals_01_WHITE_10";
	
		case 72:
			return "1064_G_M_M_UniCriminals_01_BLACK_03";
	
		case 73:
			return "1065_G_M_M_UniCriminals_01_BLACK_04";
	
		case 74:
			return "1086_U_M_M_TumButcher_01";
	
		case 75:
			return "1093_A_M_M_TumTownfolk_01_WHITE_01";
	
		case 76:
			return "1094_A_M_M_TumTownfolk_02_BLACK_01";
	
		case 77:
			return "1097_A_F_M_TumTownfolk_01_WHITE_01";
	
		case 78:
			return "1098_A_F_M_TumTownfolk_02_BLACK_01";
	
		case 79:
			return "0135_G_M_M_UniCriminals_01_HISPANIC_02";
	
		case 80:
			return "0400_U_M_M_RhdGenStoreOwner_01";
	
		case 81:
			return "0401_U_M_M_RhdGunsmith_01";
	
		case 82:
			return "0477_U_M_M_ValDoctor_01";
	
		case 83:
			return "0478_U_M_M_ValGenStoreOwner_01";
	
		case 84:
			return "0479_U_M_M_ValGunsmith_01";
	
		case 85:
			return "1085_U_M_M_TumGunsmith_01";
	
		case 86:
			return "0083_U_M_O_BlWGeneralStoreOwner_01";
	
		case 87:
			return "0832_S_M_M_TrainStationWorker_01_WHITE_01";
	
		case 88:
			return "CS_ValAuctionBoss_01";
	
		case 89:
			return "AS_TOWNDEALER";
	
		case 90:
			return "JS_TOWNDEALER";
	
		case 91:
			return "FH_TOWNDEALER";
	
		case 92:
			return "MAX";
	
		default:
		
	}

	return "unknown";
}

void func_97(var uParam0, BOOL bParam1, int iParam2) // Position - 0x3354 Hash - 0x37D64B11 ^0xE7060A9E
{
	func_144(iParam2);

	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return;
	
		if (Global_1935630.f_12)
			return;
	}
	else
	{
		if (!Global_1224589.f_6)
			return;
	
		if (Global_1224589.f_7)
			return;
	}

	if (bParam1)
		uParam0->f_10 = 0;

	uParam0->f_5 = iParam2;

	if (Global_1572887.f_12 == -1)
		uParam0->f_13 = Global_1935630.f_44;
	else
		uParam0->f_13 = func_145(0);

	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
				if (!(*uParam0 & 33554432 != 0))
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_79(uParam0, 33554432);
					else if (!(*uParam0 & 8192 != 0))
						if (func_146(true))
							func_79(uParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_146(true) || *uParam0 & 8192 != 0)
					func_80(uParam0, 33554432);
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	if (!(uParam0->f_1 & 1024 != 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_147(uParam0))
				uParam0->f_15 = func_117();
		}
		else if (uParam0->f_15 > 0)
		{
			if (func_117() - uParam0->f_15 > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}

	uParam0->f_6 = uParam0->f_6 + 1;

	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7 = uParam0->f_7 + 1;
	
		if (uParam0->f_7 > 4)
			uParam0->f_7 = 0;
	}

	func_148(uParam0);
	return;
}

BOOL func_98(Ped* ppedParam0, var uParam1) // Position - 0x351F Hash - 0x3A755B4E ^0xDBAC23C2
{
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Ped pedIndexFromEntityIndex;

	if (!EVENT::_0x1D1B448D719415AB(ppedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(ppedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_acquaintance_ped_dead"):
		case joaat("event_ped_seen_dead_ped"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("event_dead_ped_found"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(ppedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent))
				return false;
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
		
			if (!PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
				return false;
		
			if (DECORATOR::DECOR_EXIST_ON(pedIndexFromEntityIndex, "bIgnoreDamageChecking"))
				return false;
		
			if (pedIndexFromEntityIndex == Global_1935630.f_33)
				return false;
		
			if (pedIndexFromEntityIndex == Global_1935630.f_32)
				return false;
		
			if (!func_149(ppedParam0, uParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_150(ppedParam0, pedIndexFromEntityIndex) <= func_151(uParam1))
				return true;
			break;
	}

	return false;
}

void func_99(Ped* ppedParam0, var uParam1, int iParam2) // Position - 0x35F7 Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		uParam1->f_10 = ppedParam0;

	if (func_152(iParam2, 1, 1, 1, 0))
		func_79(uParam1, 2048);

	uParam1->f_16 = iParam2;
	func_153(uParam1, true);
	func_154();
	return;
}

BOOL func_100(Ped* ppedParam0, var uParam1) // Position - 0x3634 Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(ppedParam0))
	{
		if (func_155(ppedParam0, !(*uParam1 & 268435456 != 0), !(*uParam1 & 536870912 != 0), !(*uParam1 & 1073741824 != 0), 0, false))
		{
			if (uParam1->f_12 < 5f)
				num = 95f;
			else if (uParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_156(uParam1);
		
			if (func_157(uParam1, ppedParam0, num, num2))
			{
				if (uParam1->f_2 == 0)
					uParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - uParam1->f_2;
				num4 = func_158(uParam1);
			
				if (uParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_153(uParam1, true);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_153(uParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_101(Ped* ppedParam0, Entity eParam1, var uParam2) // Position - 0x371B Hash - 0x899101A2 ^0xBCA80002
{
	float num;
	float num2;

	if (eParam1 == 0)
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(eParam1))
		return false;

	num = 85f;

	if (func_159(eParam1, !(*uParam2 & 268435456 != 0), !(*uParam2 & 536870912 != 0), !(*uParam2 & 1073741824 != 0), 0))
	{
		if (uParam2->f_12 < 5f)
			num = 95f;
		else if (uParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_156(uParam2);
	
		if (func_157(uParam2, ppedParam0, num, num2))
		{
			if (uParam2->f_2 == 0)
				uParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2 > func_158(uParam2))
				{
					func_153(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_102(Ped* ppedParam0, var uParam1) // Position - 0x37F1 Hash - 0xC62373A5 ^0xD1ADE674
{
	Entity entity;
	Ped pedIndexFromEntityIndex;
	Entity outEntity;
	float customDistance;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &entity))
		return false;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
		if (outEntity == entity)
			return false;

	if (!ENTITY::IS_ENTITY_A_PED(entity))
		return false;

	if (Global_1935630.f_40 != 0)
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == ppedParam0)
			return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);

	if (func_149(ppedParam0, uParam1, pedIndexFromEntityIndex))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3 > func_158(uParam1))
		{
			customDistance = func_156(uParam1);
		
			if (uParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(ppedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(ppedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(ppedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(ppedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_103(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x38FA Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_160(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
				return 0;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return 0;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return 0;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return 1;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return 0;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return 1;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return 1;

	return 0;
}

BOOL func_104(var uParam0, int iParam1) // Position - 0x3A2F Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_117();
	num2 = num - uParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_105(Ped pedParam0, Ped* ppedParam1, var uParam2) // Position - 0x3A66 Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(ppedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_161(uParam2);
		
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
				PED::_0xD355E2F1BB41087E(ppedParam1, num);
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
				PED::_0xD355E2F1BB41087E(ppedParam1, 5f);
			else
				PED::_0xD355E2F1BB41087E(ppedParam1, num);
		}
	
		if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED") || WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
		{
			num2 = 3f;
			shotNearRecentlyTime = 3000;
		}
		else
		{
			num2 = 1f;
			shotNearRecentlyTime = 1000;
		}
	
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), ppedParam1, shotNearRecentlyTime) && PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= num2)
		{
			if (func_113(uParam2, ppedParam1))
			{
				func_153(uParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_106(Ped pedParam0, Ped* ppedParam1, var uParam2) // Position - 0x3B6D Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (uParam2->f_12 < (float)func_162(uParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_113(uParam2, ppedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_153(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_107(Ped pedParam0, Ped* ppedParam1, var uParam2, BOOL bParam3) // Position - 0x3BD8 Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ppedParam1, false, true) };
	num = func_163(uParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_22))
				{
					func_153(uParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, uParam2->f_27))
				{
					func_153(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(ppedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords, false, false);
				
					if (func_164(ppedParam1, entityCoords, outCoords))
					{
						func_153(uParam2, true);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_22))
				{
					func_153(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(ppedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords2, false, false);
				
					if (func_164(ppedParam1, entityCoords, outCoords2))
					{
						func_153(uParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_108(Ped* ppedParam0, var uParam1) // Position - 0x3D20 Hash - 0xEB9C0B04 ^0x4A60CD30
{
	int i;
	float num;
	var unk;
	Vector3 entityCoords;
	BOOL flag;
	BOOL flag2;

	unk = 2;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(ppedParam0, false, false) };
	flag = *uParam1 & 4096 != 0;

	for (i = 0; i < Global_1935630.f_39; i = i + 1)
	{
		if (!func_149(ppedParam0, uParam1, Global_1935630.f_34[i]) || ppedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_165(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_166(Global_1935630.f_34[i]))
			{
				if (num < 35f)
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(ppedParam0, "HorseOwnerTeamA") || DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(ppedParam0, "HorseOwnerTeamB"))
					{
						unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
						unk[1 /*3*/] = { entityCoords };
						uParam1->f_10 = ppedParam0;
						return true;
					}
				}
			}
		
			if (func_167(uParam1, ppedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = ppedParam0;
				return true;
			}
			else if (func_168(uParam1, ppedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = ppedParam0;
				return true;
			}
			else if (func_169(uParam1, ppedParam0, num, i))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = ppedParam0;
				return true;
			}
		}
	}

	return false;
}

BOOL func_109(var uParam0, var uParam1) // Position - 0x3F00 Hash - 0xF223CED2 ^0xA472D0A4
{
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	var entityCoords;
	var entityCoords2;

	if (!EVENT::_0x1D1B448D719415AB(*uParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(*uParam0, 0, 0);

	switch (recentEvent)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("event_shocking_window_smashed"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(*uParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(*uParam0, recentEvent, 0, 0);
			entityCoords = { ENTITY::GET_ENTITY_COORDS(sourceEntityFromEvent, false, false) };
			entityCoords2 = { ENTITY::GET_ENTITY_COORDS(tar, false, false) };
			EVENT::_0x1A5C5D350068A673(*uParam0, 0);
			return true;
	}

	return false;
}

BOOL func_110(var uParam0, int iParam1) // Position - 0x3F78 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_117();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_111(Ped* ppedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3FA7 Hash - 0x8119700D ^0x42D5A76B
{
	Ped entity2;
	Vehicle playersLastVehicle;
	Entity entity;

	entity2 = PLAYER::PLAYER_PED_ID();

	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(ppedParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(ppedParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(ppedParam0, entity2, true, true))
				return 1;
		
			playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		
			if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle))
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(ppedParam0, playersLastVehicle, true, true))
					return 1;
		
			if (PED::IS_PED_ON_MOUNT(entity2))
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(entity2)))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(ppedParam0, PED::GET_MOUNT(entity2), true, true))
						return 1;
			else if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
				if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(ppedParam0, pedParam1, true, true))
						return 1;
		}
	}
	else if (!bParam2)
	{
		if (func_170(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(ppedParam0) || PED::_0x947E43F544B6AB34(ppedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, ppedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(ppedParam0, 400))
			return 1;

	if (func_171(entity2, ppedParam0))
		return 1;

	if (PED::_GET_PED_GRAPPLER(PLAYER::PLAYER_PED_ID()) == ppedParam0)
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
			return 1;

	if (!ENTITY::IS_ENTITY_DEAD(ppedParam0))
		if (PED::IS_PED_BEING_JACKED(ppedParam0))
			if (PED::GET_PEDS_JACKER(ppedParam0) == entity2)
				return 1;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(entity2, 8, 0))
		if (PED::GET_PED_CONFIG_FLAG(ppedParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(ppedParam0))
			return 1;

	return 0;
}

int func_112(var uParam0, Ped* ppedParam1) // Position - 0x412E Hash - 0x42A83B1F ^0x45F736D3
{
	int _int;

	if (!DECORATOR::DECOR_EXIST_ON(ppedParam1, "iDamageFrame"))
		return 1;

	_int = DECORATOR::DECOR_GET_INT(ppedParam1, "iDamageFrame");

	if (_int < 0)
		DECORATOR::DECOR_SET_INT(ppedParam1, "iDamageFrame", uParam0->f_5);
	else if (uParam0->f_5 > _int + 10)
		return 1;

	return 0;
}

BOOL func_113(var uParam0, Ped* ppedParam1) // Position - 0x417E Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_172(uParam0))
		return true;

	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(ppedParam1, 400))
		return true;

	if (PED::IS_PED_DEAD_OR_DYING(ppedParam1, true))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(ppedParam1, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(ppedParam1))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(ppedParam1, 10, true))
		return false;

	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
		return true;

	if (!PED::IS_PED_RAGDOLL(ppedParam1))
		return true;

	return false;
}

BOOL func_114(Ped* ppedParam0, Ped pedParam1) // Position - 0x421B Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(ppedParam0, pedParam1, true, true))
			return true;
	
		if (func_173(ppedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(ppedParam0, pedParam1) && PED::IS_PED_RAGDOLL(ppedParam0))
				return true;
	}

	return false;
}

void func_115() // Position - 0x4268 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_116(var uParam0, Ped* ppedParam1) // Position - 0x4270 Hash - 0x6BE02E92 ^0x188EF1A2
{
	Vehicle vehiclePedIsUsing;
	var entityCoords;
	int actual;
	int expected;
	int i;
	Ped pedInDraftHarness;

	vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);

	if (vehiclePedIsUsing != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing)))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(ppedParam1, false, false) };
	
		if (func_174(vehiclePedIsUsing, ppedParam1, entityCoords))
		{
			uParam0->f_9 = func_117();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(vehiclePedIsUsing, &expected, &actual))
		{
			if (expected <= 0)
			{
				return false;
			}
			else if (actual == expected)
			{
				for (i = 0; i < actual; i = i + 1)
				{
					pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(vehiclePedIsUsing, i);
				
					if (ENTITY::DOES_ENTITY_EXIST(pedInDraftHarness))
					{
						if (func_175(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, ppedParam1))
							{
								uParam0->f_9 = func_117();
								return true;
							}
						}
					}
				}
			}
		}
	}

	return false;
}

int func_117() // Position - 0x4331 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_118() // Position - 0x434F Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_117() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_119(var uParam0, Ped* ppedParam1) // Position - 0x439C Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(ppedParam1))
		return false;

	num = func_151(uParam0);

	if (uParam0->f_12 > func_81(uParam0) && uParam0->f_12 > num)
		return false;

	num3 = func_176(ppedParam1);
	num2 = func_177(uParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (uParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(ppedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(ppedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(ppedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(ppedParam1, uParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(ppedParam1, uParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(ppedParam1, uParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_120(Ped* ppedParam0, Entity eParam1, var uParam2) // Position - 0x44B8 Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (uParam2->f_12 > 4f)
		return false;

	flag = *uParam2 & 256 != 0;
	flag2 = *uParam2 & 524288 != 0;
	flag3 = *uParam2 & 128 != 0;
	return func_178(ppedParam0, eParam1, flag, flag3, uParam2->f_12, flag2);
}

BOOL func_121(Ped* ppedParam0, var uParam1) // Position - 0x4500 Hash - 0x23BB3370 ^0x36BD6CCF
{
	Ped jackTarget;
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;

	if (*uParam1 & 67108864 != 0)
		return true;

	if (Global_1935630.f_24)
		return true;

	if (*uParam1 & 33554432 != 0)
	{
		if (func_179(ppedParam0, uParam1, true))
			return true;
	
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(ppedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(ppedParam0, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(ppedParam0, Global_35, true, false) == 1)
			return true;
	}

	jackTarget = PED::GET_JACK_TARGET(Global_35);

	if (ENTITY::DOES_ENTITY_EXIST(jackTarget) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(jackTarget, true))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(ppedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return true;

	if (!EVENT::_0x1D1B448D719415AB(ppedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(ppedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_shocking_seen_ped_robbed"):
		case joaat("event_shocking_seen_ped_intimidated"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("event_shocking_mount_stolen"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(ppedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(ppedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(ppedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (pedIndexFromEntityIndex != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(ppedParam0, 0);
				return false;
			}
		
			if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedIndexFromEntityIndex2))
			{
				EVENT::_0x1A5C5D350068A673(ppedParam0, 0);
				return false;
			}
		
			return true;
	
		case joaat("event_shocking_entity_hogtied"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(ppedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(ppedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(ppedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(ppedParam0, pedIndexFromEntityIndex, -1082130432, -1082130432, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(ppedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(ppedParam0, pedIndexFromEntityIndex, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(ppedParam0, Global_35, 17))
					if (!func_180(uParam1, ppedParam0))
						if (func_175(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_122(Ped* ppedParam0, var uParam1) // Position - 0x4759 Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_181(0))
		return false;

	if (PED::IS_PED_FACING_PED(ppedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(ppedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_123(var uParam0, int iParam1) // Position - 0x4792 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_117();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_124(var uParam0, var uParam1) // Position - 0x47C1 Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_125(Ped* ppedParam0, var uParam1) // Position - 0x47D5 Hash - 0xA06525EC ^0x3DA5C48E
{
	if (!PED::IS_PED_HUMAN(ppedParam0))
		return false;

	if (uParam1->f_4 == 0)
		uParam1->f_4 = func_117();
	else if (func_117() - uParam1->f_4 > func_182(uParam1))
		return func_183(ppedParam0, uParam1, false, -1082130432);

	return false;
}

BOOL func_126(var uParam0, Ped* ppedParam1) // Position - 0x4822 Hash - 0x2978E171 ^0x25D3896D
{
	Entity pedSourceOfDeath;
	Ped pedIndexFromEntityIndex;

	pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(ppedParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(pedSourceOfDeath))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(ppedParam1, "bIgnoreDamageChecking"))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedSourceOfDeath);

	if (Global_35 == pedIndexFromEntityIndex || Global_1935630.f_40 == pedIndexFromEntityIndex)
		return true;

	return false;
}

int func_127(var uParam0) // Position - 0x4876 Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

void func_128(int iParam0) // Position - 0x4880 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_184(iParam0))
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

int func_129(int iParam0) // Position - 0x4933 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_130(int iParam0) // Position - 0x49B4 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_76(iParam0))
		return 0;

	return func_186(func_185(iParam0));
}

int func_131(int iParam0) // Position - 0x49D4 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_76(iParam0))
		return -1;

	return func_187(func_185(iParam0));
}

BOOL func_132(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, var uParam6, int iParam7) // Position - 0x49F4 Hash - 0x33F6843D ^0x3ABB8760
{
	Vector3 vector;
	var groundZ;

	if (!func_134(iParam0))
		return false;

	if (!func_135(iParam0, iParam5, &vector))
		return false;

	*uParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, vector) };

	if (iParam7 == 1)
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + { 0.1f, 0f, 0f }, &groundZ, false))
			uParam6->f_2 = groundZ;

	return true;
}

float func_133(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x4A51 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_134(int iParam0) // Position - 0x4A6F Hash - 0xE97E1B38 ^0xE97E1B38
{
	return iParam0 > -1 && iParam0 < 7;
}

BOOL func_135(int iParam0, int iParam1, var uParam2) // Position - 0x4A84 Hash - 0x3B42F46B ^0x3B42F46B
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

BOOL func_136(int iParam0, int iParam1, var uParam2) // Position - 0x4CD5 Hash - 0x7D4DC716 ^0x7D4DC716
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = -112.4086f + 180f;
					return true;
			
				case 1:
					*uParam2 = -157.40868f + 180f;
					return true;
			
				case 2:
					*uParam2 = 157.59132f + 180f;
					return true;
			
				case 3:
					*uParam2 = 112.59132f + 180f;
					return true;
			
				case 4:
					*uParam2 = 180f;
					return true;
			
				default:
				
			}
		
			return false;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 180f;
					return true;
			
				case 1:
					*uParam2 = 0f;
					return true;
			
				case 2:
					*uParam2 = 90f;
					return true;
			
				case 3:
					*uParam2 = 270f;
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
					*uParam2 = 180f;
					return true;
			
				case 1:
					*uParam2 = 120f;
					return true;
			
				case 2:
					*uParam2 = 60f;
					return true;
			
				case 3:
					*uParam2 = 0f;
					return true;
			
				case 4:
					*uParam2 = -60f;
					return true;
			
				case 5:
					*uParam2 = -120f;
					return true;
			
				default:
				
			}
		
			return true;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 90f;
					return true;
			
				case 1:
					*uParam2 = 270f;
					return true;
			
				default:
				
			}
		
			return false;
	
		default:
		
	}

	return true;
}

BOOL func_137(ePedType eptParam0) // Position - 0x4E85 Hash - 0x5000025C ^0x5000025C
{
	switch (eptParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return true;
	
		default:
		
	}

	return false;
}

void func_138(Ped pedParam0, Hash hParam1) // Position - 0x52D8 Hash - 0xEA1C858E ^0x4B65635C
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_188(pedParam0, hParam1))
		{
			if (func_189(pedParam0, hParam1))
			{
				if (func_190(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_191(pedParam0);
				}
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT(pedParam0, hParam1);
				PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
			}
		
			PED::_SET_PED_DIRT_CLEANED(pedParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 9);
		}
	}

	return;
}

void func_139(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x5382 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_140(Ped pedParam0, BOOL bParam1) // Position - 0x53B2 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_141(Ped pedParam0, int iParam1) // Position - 0x53F7 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

int func_142(Hash hParam0, int iParam1, Any* panParam2, var uParam3) // Position - 0x541E Hash - 0x2ED28789 ^0x2ED28789
{
	if (*panParam2 < (92 + 31) / 32)
		return 0;

	*uParam3 = 0;

	if (iParam1 == 3)
	{
		switch (hParam0)
		{
			case joaat("a_m_m_fivefingerfilletplayers_01"):
				func_192(panParam2, 43);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 44);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 54);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 70);
				*uParam3 = *uParam3 + 1;
				break;
		
			default:
				func_192(panParam2, 43);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 44);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 54);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 70);
				*uParam3 = *uParam3 + 1;
				return 0;
		}
	}
	else
	{
		switch (hParam0)
		{
			case joaat("a_m_m_valtownfolk_01"):
			case joaat("a_m_m_valtownfolk_02"):
			case joaat("s_m_m_valcowpoke_01"):
				func_192(panParam2, 1);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 2);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 3);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 4);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 5);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 6);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 7);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 8);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 9);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 10);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 11);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 12);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 13);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 14);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 15);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 16);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 17);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 18);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 29);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 30);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 31);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 35);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 36);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 37);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 38);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 39);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 45);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 46);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 47);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 48);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 49);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 50);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 51);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 52);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 53);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 55);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 56);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 58);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 61);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 63);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 64);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 65);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 66);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 67);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 68);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 71);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 73);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 75);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 76);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 82);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 84);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("a_m_o_sdupperclass_01"):
				func_192(panParam2, 2);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 26);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 28);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 37);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 41);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 50);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("a_m_m_rhdforeman_01"):
				func_192(panParam2, 1);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 2);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 26);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 28);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 29);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 30);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 31);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 37);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 38);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 39);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 49);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 50);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 51);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 52);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 53);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 63);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 64);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("s_m_m_blwdealer_01"):
			case joaat("s_m_m_rhddealer_01"):
				func_192(panParam2, 87);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 89);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 90);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 91);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("u_m_m_rhdgenstoreowner_01"):
				func_192(panParam2, 80);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("a_m_m_rhdupperclass_01"):
				func_192(panParam2, 2);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 12);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 16);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 18);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 26);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 28);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 29);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 30);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 31);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 37);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 39);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 49);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 50);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 75);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("u_m_m_valgunsmith_01"):
				func_192(panParam2, 84);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("a_m_m_blwlaborer_01"):
			case joaat("a_m_m_blwlaborer_02"):
				func_192(panParam2, 1);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 2);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 3);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 4);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 5);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 6);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 7);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 8);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 9);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 10);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 11);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 12);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 13);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 14);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 15);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 16);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 17);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 18);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 30);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 31);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 35);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 36);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 37);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 38);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 39);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 45);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 46);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 47);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 48);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 49);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 50);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 51);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 52);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 53);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 61);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 75);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 76);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("a_m_m_vhtthug_01"):
			case joaat("a_m_m_vhttownfolk_01"):
				func_192(panParam2, 3);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 4);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 5);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 6);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 14);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 15);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 16);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 17);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 18);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 29);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 30);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 31);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 35);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 36);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 37);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 38);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 45);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 46);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 47);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 48);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 49);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 50);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 51);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 52);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 53);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 55);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 56);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 58);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 61);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 62);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 63);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 64);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 65);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 66);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 67);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 68);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 71);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 73);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 79);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("a_m_m_cardgameplayers_01"):
				func_192(panParam2, 1);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 2);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 3);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 4);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 5);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 6);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 7);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 8);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 9);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 10);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 11);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 12);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 13);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 14);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 15);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 16);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 17);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 18);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 29);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 30);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 31);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 35);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 36);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 37);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 38);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 39);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 45);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 46);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 47);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 48);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 49);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 50);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 51);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 52);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 53);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 55);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 56);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 58);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 61);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 63);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 64);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 65);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 66);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 67);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 68);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 71);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 73);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 75);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 76);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 82);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 84);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 26);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 28);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 41);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("a_m_m_emrfarmhand_01"):
				func_192(panParam2, 1);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 2);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 3);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 4);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 5);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 6);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 7);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 8);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 9);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 10);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 11);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 12);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 13);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 14);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 15);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 16);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 17);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 18);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 29);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 30);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 31);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 35);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 36);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 37);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 38);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 45);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 46);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 47);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 48);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 49);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 50);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 51);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 52);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 53);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 55);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 56);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 58);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 61);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 65);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 66);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 67);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 68);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 71);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 73);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 75);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 76);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("a_m_m_tumtownfolk_01"):
			case joaat("a_m_m_tumtownfolk_02"):
				func_192(panParam2, 45);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 46);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 47);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 48);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 49);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 50);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 51);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 52);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 53);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 55);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 56);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 58);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 61);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 63);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 64);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 65);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 66);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 67);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 68);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 71);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 73);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 74);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 75);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 76);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("a_m_m_middlesdtownfolk_03"):
			case joaat("a_m_m_middlesdtownfolk_02"):
			case joaat("a_m_m_middlesdtownfolk_01"):
				func_192(panParam2, 1);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 2);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 26);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 28);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 29);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 30);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 31);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 34);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 37);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 38);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 39);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 41);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 49);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 50);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 51);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 52);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 53);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("s_m_m_vhtdealer_01"):
				func_192(panParam2, 62);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 79);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("a_m_m_blwupperclass_01"):
				func_192(panParam2, 2);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 12);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 16);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 18);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 26);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 30);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 37);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 39);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 49);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 50);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 75);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 76);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("a_m_o_blwupperclass_01"):
				func_192(panParam2, 2);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 12);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 16);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 18);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 26);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 39);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 50);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 75);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 76);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("a_m_m_blwforeman_01"):
				func_192(panParam2, 1);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 2);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 7);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 8);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 9);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 10);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 11);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 12);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 13);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 14);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 15);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 16);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 17);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 18);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 26);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 30);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 31);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 37);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 38);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 39);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 48);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 49);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 50);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 61);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 75);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 76);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("u_m_o_blwgeneralstoreowner_01"):
				func_192(panParam2, 86);
				*uParam3 = *uParam3 + 1;
				break;
		
			case joaat("u_m_m_valdoctor_01"):
				func_192(panParam2, 82);
				*uParam3 = *uParam3 + 1;
				break;
		
			default:
				func_192(panParam2, 1);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 2);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 3);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 4);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 5);
				*uParam3 = *uParam3 + 1;
				func_192(panParam2, 6);
				*uParam3 = *uParam3 + 1;
				return 0;
		}
	}

	return 1;
}

BOOL func_143(Any* panParam0, int iParam1) // Position - 0x6C96 Hash - 0x2ACCF512 ^0x4854B9C4
{
	return MISC::_IS_BIT_FLAG_SET(panParam0, iParam1);
}

void func_144(int iParam0) // Position - 0x6CA6 Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_193();

	if (Global_1935630.f_27)
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();

	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
			{
			}
			else
			{
				weaponHash = Global_1935630.f_44;
			}
		
			Global_1935630.f_46 = weaponHash;
		}
	}

	switch (num)
	{
		case 0:
			func_194(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
	
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
		
			if (!Global_1935630.f_30)
				if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
			break;
	
		case 2:
			switch (Global_1935630.f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
			
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 3f;
					else
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 1f;
				
					if (Global_1935630.f_25)
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					break;
			}
			break;
	
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}

	Global_22 = Global_22 | 4;
	return;
}

var func_145(int iParam0) // Position - 0x6E12 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

BOOL func_146(BOOL bParam0) // Position - 0x6E25 Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_195(bParam0, &unk, &unk2))
		return true;

	return false;
}

BOOL func_147(var uParam0) // Position - 0x6E3F Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_27() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_196(uParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_196(uParam0);

	if (ped == 0)
		return false;

	if (func_177(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	uParam0->f_14 = ped;
	return true;
}

void func_148(var uParam0) // Position - 0x6ED9 Hash - 0x256C27DD ^0x256C27DD
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
		func_197(uParam0);

	return;
}

BOOL func_149(Ped* ppedParam0, var uParam1, Ped pedParam2) // Position - 0x6F00 Hash - 0x7FBD27D8 ^0x4C0BB7C4
{
	int num;
	int num2;
	Hash pedRelationshipGroupHash;
	Hash pedRelationshipGroupHash2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(ppedParam0))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam2))
		num2 = func_177(pedParam2);
	else
		num2 = func_176(pedParam2);

	if (!PED::IS_PED_HUMAN(ppedParam0))
		num = func_177(ppedParam0);
	else
		num = func_176(ppedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_198(*uParam1, 8388608))
		return true;

	pedRelationshipGroupHash = PED::GET_PED_RELATIONSHIP_GROUP_HASH(ppedParam0);
	pedRelationshipGroupHash2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam2);

	switch (pedRelationshipGroupHash)
	{
		case joaat("rel_civmale"):
		case joaat("rel_re_victim"):
		case joaat("rel_civnative"):
		case joaat("rel_pinkertons"):
		case joaat("rel_guama_law"):
		case joaat("rel_cop"):
		case joaat("rel_civfemale"):
			switch (pedRelationshipGroupHash2)
			{
				case joaat("rel_civmale"):
				case joaat("rel_re_victim"):
				case joaat("rel_civnative"):
				case joaat("rel_civfemale"):
					return true;
			}
			break;
	}

	if (pedRelationshipGroupHash == pedRelationshipGroupHash2)
		return true;

	return false;
}

float func_150(Ped* ppedParam0, Ped pedParam1) // Position - 0x6FF9 Hash - 0xF9959663 ^0xF9959663
{
	return func_173(ppedParam0, pedParam1, true, true);
}

float func_151(var uParam0) // Position - 0x700B Hash - 0xD73B9827 ^0xDE12990D
{
	return uParam0->f_26;
}

BOOL func_152(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7017 Hash - 0x5A9E12AC ^0x5A9E12AC
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 2048:
			return true;
	
		case 4:
		case 16:
			return bParam1;
	
		case 8:
			return bParam2;
	
		case 32:
		case 64:
		case 128:
			return bParam3;
	
		case 8192:
			return bParam4;
	
		default:
		
	}

	return false;
}

void func_153(var uParam0, BOOL bParam1) // Position - 0x707C Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_79(uParam0, 134217728);
	else
		func_80(uParam0, 134217728);

	return;
}

void func_154() // Position - 0x70A2 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_155(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x70B6 Hash - 0x7ED53456 ^0xD7A590DD
{
	Ped ped;
	Player playerIndex;
	Entity outEntity;

	if (ENTITY::IS_ENTITY_DEAD(ppedParam0))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(outEntity) && ppedParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity))
			return false;
	}

	if (Global_1935630.f_40 != 0)
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == ppedParam0)
			return false;

	if (bParam3)
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, ppedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, ppedParam0) && func_173(ped, ppedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, ppedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, ppedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_199(ped, 0)))
			if (func_200(ppedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_156(var uParam0) // Position - 0x7216 Hash - 0xD73B9827 ^0x8CE07B2A
{
	return uParam0->f_17;
}

BOOL func_157(var uParam0, Ped* ppedParam1, float fParam2, float fParam3) // Position - 0x7222 Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (uParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_198(*uParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(ppedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*uParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(ppedParam1, Global_35, 17))
			return true;

	return false;
}

int func_158(var uParam0) // Position - 0x7283 Hash - 0xD73B9827 ^0x372EC0B
{
	return uParam0->f_18;
}

BOOL func_159(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x728F Hash - 0x838BDEFB ^0xB1D5C032
{
	Ped ped;
	Player playerIndex;

	if (ENTITY::IS_ENTITY_DEAD(eParam0))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	bParam3;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, eParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, eParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_199(ped, 0)))
			if (func_201(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

int func_160(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7351 Hash - 0xC9655EC3 ^0x88C9AFE1
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

float func_161(var uParam0) // Position - 0x73EF Hash - 0xD73B9827 ^0x9F7F0764
{
	return uParam0->f_23;
}

int func_162(var uParam0) // Position - 0x73FB Hash - 0xD73B9827 ^0x303D0BA3
{
	return uParam0->f_21;
}

int func_163(var uParam0) // Position - 0x7407 Hash - 0xB202FF2A ^0xFD1BAB10
{
	int num;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					num = 0;
					break;
			
				case 2:
					num = 1;
					break;
			
				case 3:
					num = 2;
					break;
			}
			break;
	
		case 1:
			switch (uParam0->f_6)
			{
				case 1:
					num = 1;
					break;
			
				case 2:
					num = 2;
					break;
			
				case 3:
					num = 0;
					break;
			}
			break;
	
		case 2:
			switch (uParam0->f_6)
			{
				case 1:
					num = 2;
					break;
			
				case 2:
					num = 0;
					break;
			
				case 3:
					num = 1;
					break;
			}
			break;
	
		case 3:
			switch (uParam0->f_6)
			{
				case 1:
					num = 1;
					break;
			
				case 2:
					num = 0;
					break;
			
				case 3:
					num = 2;
					break;
			}
			break;
	
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					num = 0;
					break;
			
				case 2:
					num = 2;
					break;
			
				case 3:
					num = 1;
					break;
			}
			break;
	}

	if (*uParam0 & 16777216 != 0)
		if (num == 2)
			num = 0;

	return num;
}

BOOL func_164(Ped* ppedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x7544 Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_202(ppedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(ppedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_165(Ped* ppedParam0) // Position - 0x7587 Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(ppedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_203(ppedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_166(Ped* ppedParam0) // Position - 0x75ED Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(ppedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(ppedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_167(var uParam0, Ped* ppedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7619 Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_204(ppedParam1))
			return false;

	num = 5f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(ppedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_168(var uParam0, Ped* ppedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7660 Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_204(ppedParam1))
			return false;

	num = 10f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(ppedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_169(var uParam0, Ped* ppedParam1, float fParam2, int iParam3) // Position - 0x76AB Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_204(ppedParam1))
		return false;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(ppedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(ppedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(ppedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_170(Ped pedParam0, var uParam1) // Position - 0x7724 Hash - 0x64FF5121 ^0xD9ABCD76
{
	if (!TASK::_IS_PED_LEADING_HORSE(pedParam0))
		return false;

	*uParam1 = TASK::_GET_LED_HORSE_FROM_PED(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(*uParam1, true))
		return false;

	if (!PED::CAN_PED_BE_MOUNTED(*uParam1))
		return false;

	return true;
}

BOOL func_171(Ped pedParam0, Ped* ppedParam1) // Position - 0x7771 Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == ppedParam1)
		return true;

	if (func_205(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == ppedParam1)
			return true;

	return false;
}

BOOL func_172(var uParam0) // Position - 0x77B9 Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*uParam0 & 2 != 0);
}

float func_173(Ped* ppedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x77C9 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(ppedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(ppedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_174(Vehicle veParam0, Ped* ppedParam1, var uParam2, var uParam3, var uParam4) // Position - 0x7811 Hash - 0x94A6C6F0 ^0xC51111A6
{
	float num;

	num = func_175(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, ppedParam1))
			return true;

	return false;
}

float func_175(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x783D Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

int func_176(Ped* ppedParam0) // Position - 0x7865 Hash - 0xEB445B10 ^0x77F63735
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ppedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(ppedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(ppedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(ppedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(ppedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_177(Ped* ppedParam0) // Position - 0x78BD Hash - 0x6E063231 ^0x219C4108
{
	if (!DECORATOR::DECOR_EXIST_ON(ppedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ppedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(ppedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(ppedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(ppedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(ppedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_178(Ped* ppedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0x792D Hash - 0x89708384 ^0x6760E23F
{
	BOOL flag;
	Entity entity;
	float num;

	if (Global_1935630.f_40 != 0)
		flag = true;

	if (!ENTITY::IS_ENTITY_DEAD(eParam1))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(eParam1, PLAYER::PLAYER_PED_ID(), true, true))
			return 1;

	if (flag)
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(ppedParam0, Global_1935630.f_40, true, true))
			return 1;

	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(ppedParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
			if (PED::IS_PED_RAGDOLL(ppedParam0))
				return 1;
	
		if (PED::_0x947E43F544B6AB34(ppedParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
			if (PED::IS_PED_RAGDOLL(ppedParam0))
				return 1;
	
		if (bParam3)
			if (func_170(Global_35, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(ppedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, ppedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(ppedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_173(ppedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), ppedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(ppedParam0))
				return 1;

	if (flag)
		if (func_173(ppedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, ppedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(ppedParam0))
					return 1;

	return 0;
}

BOOL func_179(Ped* ppedParam0, var uParam1, BOOL bParam2) // Position - 0x7A9D Hash - 0x3E8B6245 ^0x84E29058
{
	Ped* p_ped;
	Ped* p_ped2;

	func_195(true, &p_ped, &p_ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(p_ped) && !ENTITY::DOES_ENTITY_EXIST(p_ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(p_ped))
		if (p_ped != ppedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(ppedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(ppedParam0, Global_35, 17))
					if (!bParam2 || !func_180(uParam1, p_ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(p_ped2))
		if (p_ped2 != ppedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(ppedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(ppedParam0, Global_35, 17))
				if (!bParam2 || !func_180(uParam1, p_ped2))
					if (func_175(p_ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_180(var uParam0, Ped* ppedParam1) // Position - 0x7B8B Hash - 0x27FC2906 ^0x80D6B3D
{
	Hash pedRelationshipGroupDefaultHash;

	if (DECORATOR::DECOR_EXIST_ON(ppedParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(ppedParam1, "bIsCriminal"))
		return true;

	if (PED::GET_PED_CONFIG_FLAG(ppedParam1, 4, false))
		return true;

	pedRelationshipGroupDefaultHash = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(ppedParam1);

	switch (pedRelationshipGroupDefaultHash)
	{
		case joaat("rel_gang_odriscoll"):
		case joaat("rel_gang_skinner_brothers"):
		case joaat("rel_gunslingers"):
		case joaat("rel_gang_creole"):
		case joaat("rel_gang_lemoyne_raiders"):
		case joaat("rel_gang_murfree_brood"):
		case joaat("rel_criminals"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_181(int iParam0) // Position - 0x7C01 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_206())
		return false;

	return func_207(Global_1347702[58 /*49*/].f_15, true);
}

int func_182(var uParam0) // Position - 0x7C23 Hash - 0xD73B9827 ^0xAC2E3C80
{
	return uParam0->f_20;
}

BOOL func_183(Ped* ppedParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0x7C2F Hash - 0x9E17B061 ^0x19F2F061
{
	if (!bParam2)
		if (uParam1->f_4 == 0)
			return 0;

	if (iParam3 < 0f)
		iParam3 = uParam1->f_12;

	if (PED::IS_PED_FACING_PED(ppedParam0, Global_35, 90f))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(ppedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return 1;
	else if (iParam3 < 1.5f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(ppedParam0, Global_35))
			return 1;

	return 0;
}

BOOL func_184(int iParam0) // Position - 0x7CAA Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_208(iParam0, 2);
}

BOOL func_185(int iParam0) // Position - 0x7CB9 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_186(BOOL bParam0) // Position - 0x7CF7 Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_187(BOOL bParam0) // Position - 0x7D04 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_188(Ped pedParam0, Hash hParam1) // Position - 0x7D17 Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_189(Ped pedParam0, Hash hParam1) // Position - 0x7D45 Hash - 0xA54F3032 ^0xD65C2CD
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

BOOL func_190(Ped pedParam0, Hash hParam1) // Position - 0x7D96 Hash - 0xA54F3032 ^0xD65C2CD
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_188(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_191(Ped pedParam0) // Position - 0x7E08 Hash - 0x446F1BDD ^0x8D82ACD8
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

void func_192(Any* panParam0, int iParam1) // Position - 0x7E26 Hash - 0xAEE04633 ^0x1799223F
{
	MISC::_SET_BIT_FLAG(panParam0, iParam1);
	return;
}

BOOL func_193() // Position - 0x7E36 Hash - 0x60155C48 ^0x6CED0E68
{
	if (func_209())
		return false;

	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
			return PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_ATTACK"));
	
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return Global_1954819.f_992[2];
	}

	return false;
}

void func_194(Any* panParam0, int iParam1) // Position - 0x7E8C Hash - 0x787BB1AC ^0x11099E69
{
	int num;
	int i;
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!PLAYER::_0x72AD59F7B7FB6E24(player, 200))
	{
		*iParam1 = 0;
		return;
	}

	if (PLAYER::_0x1A6E84F13C952094(player, 200, panParam0))
	{
		for (i = 0; i < *panParam0; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(panParam0->[i]))
			{
			}
			else if (!PED::IS_PED_HUMAN(panParam0->[i]) && !(DECORATOR::DECOR_EXIST_ON(panParam0->[i], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(panParam0->[i], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(panParam0->[i], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				num = num + 1;
			}
		}
	}

	*iParam1 = num;
	return;
}

BOOL func_195(BOOL bParam0, var uParam1, var uParam2) // Position - 0x7F37 Hash - 0x2A9340EF ^0xAD765E32
{
	BOOL num;
	Ped lassoTarget;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*uParam1 = Global_1935630.f_32;
			num = 1;
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*uParam2 = Global_1935630.f_33;
				num = 1;
			}
		}
	}

	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		lassoTarget = PED::_GET_LASSO_TARGET(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(lassoTarget))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(lassoTarget))
			{
				*uParam1 = lassoTarget;
				num = 1;
			}
		}
	}

	return num;
}

Ped func_196(var uParam0) // Position - 0x7FFE Hash - 0xF229F24F ^0x47381422
{
	Ped pedIndexFromEntityIndex;
	Entity outEntity;

	if (pedIndexFromEntityIndex == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(outEntity))
				{
					if (ENTITY::IS_ENTITY_A_PED(outEntity))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(outEntity)))
						{
							pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
							return pedIndexFromEntityIndex;
						}
					}
				}
			}
		}
	}

	if (uParam0->f_6 == 3)
	{
		if (pedIndexFromEntityIndex == 0)
			if (!Global_1935630.f_12)
				pedIndexFromEntityIndex = PED::_0x4B19F171450E0D4F(Global_35);
	
		if (pedIndexFromEntityIndex == 0)
			pedIndexFromEntityIndex = PED::_GET_LASSO_TARGET(Global_35);
	
		if (pedIndexFromEntityIndex != 0)
			if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex)))
					pedIndexFromEntityIndex = 0;
	}

	return pedIndexFromEntityIndex;
}

void func_197(var uParam0) // Position - 0x80A8 Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_80(uParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_79(uParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

BOOL func_198(int iParam0, int iParam1) // Position - 0x810D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Hash func_199(Ped pedParam0, int iParam1) // Position - 0x811C Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_200(Ped* ppedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x8133 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(ppedParam0))
		if (func_201(ENTITY::GET_ENTITY_COORDS(ppedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_201(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x8161 Hash - 0xBF2250D5 ^0x34592C3E
{
	float screenX;
	float screenY;
	int hudScreenPositionFromWorldPosition;

	hudScreenPositionFromWorldPosition = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &screenX, &screenY);

	if (hudScreenPositionFromWorldPosition == 0)
		if (screenX > fParam3 && screenX < fParam4 && screenY > fParam5 && screenY < fParam6)
			return true;

	return false;
}

BOOL func_202(Ped* ppedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x81AB Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(ppedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(ppedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

BOOL func_203(Ped* ppedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x81EC Hash - 0x1D055735 ^0x5D260F19
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(ppedParam0))
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(ppedParam0, joaat("WEAPON_UNARMED"), iParam1))
			return true;
		else if (!bParam2)
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44) || Global_1935630.f_44 == joaat("weapon_melee_knife"))
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(ppedParam0, Global_1935630.f_44, iParam1))
						return true;

	return false;
}

BOOL func_204(Ped* ppedParam0) // Position - 0x8265 Hash - 0xF2F988FE ^0xA63CD631
{
	Hash scenarioPointTypePedIsUsing;

	if (ENTITY::IS_ENTITY_DEAD(ppedParam0))
		return false;

	if (!PED::IS_PED_USING_ANY_SCENARIO(ppedParam0))
		return false;

	scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(ppedParam0);

	if (scenarioPointTypePedIsUsing == 0)
		return false;

	if (scenarioPointTypePedIsUsing == joaat("world_player_sleep_ground") || scenarioPointTypePedIsUsing == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_arm") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_pillow") || scenarioPointTypePedIsUsing == joaat("world_animal_dog_sleeping") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow") || scenarioPointTypePedIsUsing == joaat("prop_player_prpty_save_game") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_left") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_right"))
		return true;

	if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_a_frame") || scenarioPointTypePedIsUsing == joaat("world_player_sleep_bedroll"))
	{
		scenarioPointTypePedIsUsing = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(ppedParam0);
	
		if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_male_a"))
			return true;
	
		return false;
	}

	return false;
}

int func_205(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x834D Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_206() // Position - 0x838F Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_27() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_207(int iParam0, BOOL bParam1) // Position - 0x83B4 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_26(iParam0))
	{
		case 5:
			return 1;
	
		case 6:
			if (bParam1)
				return 1;
			break;
	}

	return 0;
}

BOOL func_208(int iParam0, int iParam1) // Position - 0x83E5 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

BOOL func_209() // Position - 0x8406 Hash - 0x50F36DAB ^0xF55A49EF
{
	switch (Global_1935630.f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return true;
	
		default:
		
	}

	return false;
}

