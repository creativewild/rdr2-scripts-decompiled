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
	Ped pedLocal_9 = 0;
	int iLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	BOOL bLocal_15 = 0;
	var uLocal_16 = 24;
	var uLocal_17 = 0;
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
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
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

void main() // Position - 0x0 Hash - 0x3EE3C48E ^0x30C9B40
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_11 = { 2633.7976f, -1288.307f, 51.2586f };
	fLocal_14 = 24.6467f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1(&uLocal_114);

	func_2(&uLocal_114, &uScriptParam_0);

	while (!func_3(&uLocal_114))
	{
		func_4(&uLocal_114);
	
		switch (func_5(uLocal_114))
		{
			case 0:
				if (func_6(&uLocal_114))
					func_7(&uLocal_114, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_114))
					func_7(&uLocal_114, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_114))
					func_7(&uLocal_114, 3);
				break;
		
			case 3:
				func_1(&uLocal_114);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_114);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0xCB Hash - 0x5C967931 ^0xE89D747F
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

int func_2(var uParam0, var uParam1) // Position - 0x163 Hash - 0x11824BFA ^0x305C042C
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

BOOL func_3(var uParam0) // Position - 0x1B0 Hash - 0xE6F09C07 ^0x349208FC
{
	if (func_20(Global_1935630, 16384))
		return true;

	if (!func_16(uParam0, 8))
		if (func_20(Global_1935630, 32768))
			return true;

	return false;
}

void func_4(var uParam0) // Position - 0x1EA Hash - 0xCC0866FC ^0x1CE74C37
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

int func_5(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x26D Hash - 0xBE425958 ^0xBE425958
{
	return uParam0;
}

BOOL func_6(var uParam0) // Position - 0x277 Hash - 0x27E4AE00 ^0xC6358F61
{
	if (func_21(251, true))
		pedLocal_9 = func_22(251, true, false, true, true, true);

	return ENTITY::DOES_ENTITY_EXIST(pedLocal_9) && HUD::TEXT_BLOCK_IS_LOADED("IND3AUD");
}

void func_7(var uParam0, int iParam1) // Position - 0x2A7 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_8(var uParam0) // Position - 0x2B4 Hash - 0xE70F011 ^0xCE61FB0
{
	if (!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
		return false;

	return func_23(uParam0);
}

BOOL func_9(var uParam0) // Position - 0x2EC Hash - 0xEDB66132 ^0xEDB66132
{
	BOOL num;

	num = 1;

	if (!func_24())
		num = 0;

	if (!func_25(uParam0))
		num = 0;

	return num;
}

void func_10() // Position - 0x311 Hash - 0xF2ADC204 ^0xF23F9A2E
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_12(i) && func_14(i))
			func_26(i, 56, true);
	}

	func_27(&(Global_1359489.f_40), true);
	return;
}

int func_11(var uParam0) // Position - 0x354 Hash - 0xDC836752 ^0x1135D591
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_9, false, true);
	func_28(251, false, true, false, false);
	func_29(51, true);
	TASK::_DELETE_SCENARIO_POINT(iLocal_10);
	return 1;
}

BOOL func_12(eStackSize essParam0) // Position - 0x37C Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

BOOL func_13(eStackSize essParam0) // Position - 0x39B Hash - 0xDA629583 ^0xDA629583
{
	return func_30(essParam0, 16, true);
}

BOOL func_14(eStackSize essParam0) // Position - 0x3AC Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_12(essParam0))
		return false;

	if (!func_13(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x3E0 Hash - 0xA4706F79 ^0xAF27D1D3
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
		func_26(essParam0, 56, true);
		func_27(&(Global_1359489.f_40), true);
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
			func_26(essParam0, 30, true);
	
		if (bParam7)
		{
			func_26(essParam0, 35, true);
		
			if (bParam8)
				func_26(essParam0, 62, true);
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
	
		func_26(essParam0, 33, true);
		func_40(essParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[essParam0 /*1157*/].f_133 = iParam4;
			func_27(&(Global_1360165[essParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_42(&(Global_1360165[essParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_26(essParam0, 34, true);
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

BOOL func_16(var uParam0, int iParam1) // Position - 0x695 Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x6A6 Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x6BE Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

void func_19(var uParam0) // Position - 0x6D1 Hash - 0xBC9FA805 ^0x7EE2C7A7
{
	PED::_RESERVE_AMBIENT_PEDS(1);
	func_29(51, false);
	HUD::TEXT_BLOCK_REQUEST("IND3AUD");
	return;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x6EC Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_21(int iParam0, BOOL bParam1) // Position - 0x6FB Hash - 0x9F6E755B ^0x9F6E755B
{
	if (!func_47(iParam0))
		return false;

	if (!func_48(iParam0, 2))
		return false;

	if (func_48(iParam0, 32) && !bParam1)
	{
		func_50(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_49(iParam0)));
	
		if (func_51() == -1)
		{
			if (func_48(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_52(iParam0));
				func_53(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_52(iParam0));
		}
	
		return false;
	}

	if (!func_54(iParam0) && func_51() == -1)
		return false;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_52(iParam0)))
	{
		func_53(iParam0, 128);
		return true;
	}

	func_50(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_49(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_52(iParam0));

	if (func_48(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_52(iParam0));
		func_53(iParam0, 2048);
	}

	return true;
}

Ped func_22(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x7E6 Hash - 0x816A3A36 ^0x24211010
{
	Ped ped;
	PersChar persChar;

	if (!func_55(iParam0, true))
		return 0;

	if (func_56(func_49(iParam0)))
	{
		persChar = func_52(iParam0);
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			return 0;
	
		if (bParam1)
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
				PERSCHAR::_REVIVE_PERSCHAR(persChar);
	
		PERSCHAR::_0x6759BEE6762E140B(persChar);
		ped = PERSCHAR::_FORCE_SPAWN_PERSCHAR(persChar, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(ped))
			return 0;
	}

	if (bParam4 && !func_57(iParam0) && !ENTITY::IS_ENTITY_DEAD(ped))
	{
		PED::SET_PED_CONFIG_FLAG(ped, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
	}

	func_58(iParam0, true);
	func_59(iParam0);

	if (bParam3)
		func_58(iParam0, 16);

	!bParam2;
	return ped;
}

BOOL func_23(var uParam0) // Position - 0x8A3 Hash - 0x601C614D ^0xFC1B628D
{
	func_60(pedLocal_9, uLocal_11, fLocal_14, 2, 1073741824);
	HUD::TEXT_BLOCK_REQUEST("BRT3AUD");
	func_61(&uLocal_16, pedLocal_9, "IND3_PAPERBOY", false);
	iLocal_10 = func_62(joaat("world_human_sell_paper"), uLocal_11, fLocal_14, 0, -1f, true);
	TASK::TASK_USE_SCENARIO_POINT(pedLocal_9, iLocal_10, 0, -1, false, true, 0, false, -1082130432, false);
	PED::SET_PED_CONFIG_FLAG(pedLocal_9, 130, false);
	func_63(Global_1835011[34 /*74*/].f_1, 1);
	return 1;
}

BOOL func_24() // Position - 0x912 Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_25(var uParam0) // Position - 0x91F Hash - 0xFCB78681 ^0x4B80CA7
{
	var unk;

	if (!bLocal_15 && CAM::IS_SCREEN_FADED_IN())
	{
		if (func_64(Global_1835011[34 /*74*/].f_1) == 2)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "IND3_PAPERBOY", 24);
		
			if (func_65(&uLocal_16, unk, false, -1, false, false))
				bLocal_15 = true;
		}
	}

	if (!func_66(pedLocal_9, Global_35, 100f, true) || ENTITY::IS_ENTITY_DEAD(pedLocal_9))
		return true;

	return false;
}

void func_26(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x98A Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_67(essParam0))
			return;

	func_68(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_27(var uParam0, BOOL bParam1) // Position - 0x9C4 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_69(uParam0))
		func_70(uParam0);

	return;
}

void func_28(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x9E4 Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_47(iParam0))
		return;

	if (!func_48(iParam0, 1))
		return;

	if (!func_48(iParam0, 2))
		return;

	if (!bParam4 && !func_57(iParam0) && func_71(iParam0))
		return;

	func_53(iParam0, 1);
	func_72(iParam0);

	if (func_56(func_49(iParam0)))
	{
		persChar = func_52(iParam0);
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			return;
	
		PERSCHAR::_0xBB68908CD11AEBDC(persChar);
		PERSCHAR::_0xB65E7F733956CF25(persChar);
	
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(persChar);
	
		perscharPedIndex = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
	
		if (!PED::IS_PED_INJURED(perscharPedIndex))
			PED::SET_PED_CONFIG_FLAG(perscharPedIndex, 171, false);
	
		if (bParam1)
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	
		func_53(iParam0, 16);
	}

	if (func_48(iParam0, 128) && !bParam3)
		func_73(iParam0, false);

	return;
}

void func_29(int iParam0, BOOL bParam1) // Position - 0xAD0 Hash - 0x48CE2E1C ^0x48CE2E1C
{
	if (!func_74(iParam0))
		return;

	if (bParam1)
		func_75(iParam0, 1);
	else
		func_76(iParam0, 1);

	func_78(func_77(iParam0), bParam1);
	return;
}

BOOL func_30(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB07 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_67(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

void func_31(eStackSize essParam0, BOOL bParam1) // Position - 0xB31 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_67(essParam0))
		return;

	if (bParam1)
		if (func_79(&(Global_1360165[essParam0 /*1157*/].f_12), 1))
			func_32(essParam0, 1, false);

	func_32(essParam0, 16, bParam1);
	return;
}

void func_32(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xB73 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_67(essParam0))
		return;

	func_80(&(Global_1360165[essParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_33(eStackSize essParam0) // Position - 0xB9B Hash - 0x7895582D ^0x7895582D
{
	func_32(essParam0, 8, false);
	return;
}

void func_34(eStackSize essParam0) // Position - 0xBAC Hash - 0x8577BCFD ^0x8577BCFD
{
	func_26(essParam0, 36, true);
	return;
}

void func_35(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xBBD Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_67(essParam0))
			return;

	func_68(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_36(Ped pedParam0, int iParam1) // Position - 0xBF7 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_81(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_81(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_81(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_81(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_81(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_81(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_81(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_81(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_37(eStackSize essParam0, BOOL bParam1) // Position - 0xCF6 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_82(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

BOOL func_38(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xD35 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_67(essParam0))
			return false;

	func_68(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_39(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0xD70 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(essParam0))
	{
		ped = func_83(essParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_84(essParam0);
		}
	}

	if (func_38(essParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_83(essParam0), 137, true);

	return;
}

void func_40(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xDC2 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_67(essParam0))
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
		func_26(essParam0, 50, true);
		func_26(essParam0, 48, true);
		func_26(essParam0, 49, true);
		func_26(essParam0, 51, true);
	
		if (bParam3)
			func_26(essParam0, 54, true);
		else
			func_35(essParam0, 54, true);
	
		if (!bParam2)
		{
			func_26(essParam0, 52, true);
		
			if (bParam3)
				func_26(essParam0, 55, true);
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

void func_41(eStackSize essParam0, BOOL bParam1) // Position - 0xE94 Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_67(essParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_83(essParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_83(essParam0), 204, false);

	return;
}

void func_42(var uParam0) // Position - 0xECB Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_43(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xEE1 Hash - 0x6E8FD624 ^0x6E8FD624
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

	ped = func_83(essParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_85(essParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_26(essParam0, 2, true);
	}
	else
	{
		func_86(essParam0);
		func_26(essParam0, 1, true);
	}

	return;
}

void func_44(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xFEF Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

Player func_45(eStackSize essParam0) // Position - 0x102B Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/].f_70))
		Global_1360165[essParam0 /*1157*/].f_70 = 0;

	return Global_1360165[essParam0 /*1157*/].f_70;
}

void func_46(int iParam0, eStackSize essParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x106B Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_67(essParam1))
		return;

	player = func_45(essParam1);

	if (func_87(essParam1))
		if (!func_88(essParam1))
			return;

	func_35(essParam1, 39, true);
	func_89(essParam1, 64, false);
	Global_1360165[essParam1 /*1157*/].f_70.f_11 = 0;
	func_89(essParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_89(essParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_26(essParam1, 43, true);
		}
	
		if (bParam4)
			func_90(essParam1, false, true, true, true);
	}

	return;
}

BOOL func_47(int iParam0) // Position - 0x110D Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

BOOL func_48(int iParam0, BOOL bParam1) // Position - 0x1124 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_51() != -1)
		return false;

	if (!func_47(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

Hash func_49(int iParam0) // Position - 0x1152 Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_47(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

void func_50(int iParam0, PersChar pchParam1) // Position - 0x1170 Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_47(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

BOOL func_51() // Position - 0x1191 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

PersChar func_52(int iParam0) // Position - 0x119F Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_47(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_53(int iParam0, BOOL bParam1) // Position - 0x11BF Hash - 0x452DF11A ^0x452DF11A
{
	if (func_51() != -1)
		return;

	if (!func_47(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

BOOL func_54(int iParam0) // Position - 0x11F8 Hash - 0xF5815C8D ^0xF5815C8D
{
	if (!func_47(iParam0))
		return false;

	if (!func_48(iParam0, 2))
		return false;

	return true;
}

BOOL func_55(int iParam0, BOOL bParam1) // Position - 0x121E Hash - 0x5C4302E7 ^0x5C4302E7
{
	if (!func_47(iParam0))
		return false;

	if (func_48(iParam0, true) && !func_57(iParam0) && func_71(iParam0))
		return false;

	if (!func_48(iParam0, 2))
		return false;

	if (!bParam1)
		if (!func_91(iParam0, false))
			return false;

	return true;
}

BOOL func_56(Hash hParam0) // Position - 0x127E Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_57(int iParam0) // Position - 0x128A Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_47(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_58(int iParam0, BOOL bParam1) // Position - 0x12AF Hash - 0x61515A20 ^0x61515A20
{
	if (func_51() != -1)
		return;

	if (!func_47(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

void func_59(int iParam0) // Position - 0x12E0 Hash - 0x5A948764 ^0xFC1342AE
{
	if (!func_47(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

void func_60(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6) // Position - 0x1303 Hash - 0xF46E0F16 ^0xED4BA72A
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

	pedParam0 == func_92(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_93(pedParam0))
		if (func_94(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
			PHYSICS::_UNHITCH_HORSE(pedParam0);

	if (func_81(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_60(vehiclePedIsIn, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_60(mount, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_81(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(pedParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), false, true);

	if (func_81(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_81(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_81(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pedParam0, false);
		}
	}
	else if (func_81(iParam5, 129))
	{
		if (func_81(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedParam0, vParam1, func_81(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(pedParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_81(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_81(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), pedCrouchMovement, 0, false);
	
		if (func_93(pedParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_81(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0) == Global_35 && !func_81(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

void func_61(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x1585 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_95(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

int func_62(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, float fParam6, BOOL bParam7) // Position - 0x15E2 Hash - 0x9EF7DC49 ^0x7633F111
{
	return TASK::CREATE_SCENARIO_POINT_HASH(hParam0, vParam1, fParam4, iParam5, fParam6, bParam7);
}

void func_63(int iParam0, int iParam1) // Position - 0x15FC Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_96(iParam0))
		return;

	func_97(iParam0, iParam1);
	return;
}

int func_64(int iParam0) // Position - 0x1619 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_96(iParam0))
		return -1;

	return func_98(iParam0);
}

BOOL func_65(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1635 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_99(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

BOOL func_66(Ped pedParam0, Ped pedParam1, float fParam2, BOOL bParam3) // Position - 0x168F Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pedParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

BOOL func_67(eStackSize essParam0) // Position - 0x16D7 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

int func_68(int iParam0, var uParam1, var uParam2) // Position - 0x16E3 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_69(var uParam0) // Position - 0x1700 Hash - 0x5001E582 ^0x5001E582
{
	return func_100(*uParam0, 1);
}

void func_70(var uParam0) // Position - 0x1710 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_101(uParam0, 0f);
	return;
}

BOOL func_71(int iParam0) // Position - 0x171F Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_47(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_72(int iParam0) // Position - 0x1743 Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_47(iParam0))
		return;

	ped = func_102(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

int func_73(int iParam0, BOOL bParam1) // Position - 0x1787 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_47(iParam0))
		return 0;

	if (!func_48(iParam0, 2))
		return 0;

	if (func_49(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_52(iParam0)))
		return 1;

	if (func_48(iParam0, true) && !bParam1)
	{
		func_58(iParam0, 128);
		return 1;
	}

	func_53(iParam0, 129);
	func_72(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_52(iParam0));
	func_50(iParam0, 0);
	return 1;
}

BOOL func_74(int iParam0) // Position - 0x180A Hash - 0x91023C9F ^0x91023C9F
{
	return iParam0 > -1 && iParam0 < 153;
}

void func_75(int iParam0, BOOL bParam1) // Position - 0x1820 Hash - 0xECD22DFB ^0xECD22DFB
{
	if (!func_74(iParam0))
		return;

	Global_1914319.f_15614[iParam0] = Global_1914319.f_15614[iParam0] - Global_1914319.f_15614[iParam0] && bParam1;
	return;
}

void func_76(int iParam0, BOOL bParam1) // Position - 0x185A Hash - 0x7639AFD6 ^0x7639AFD6
{
	if (!func_74(iParam0))
		return;

	Global_1914319.f_15614[iParam0] = Global_1914319.f_15614[iParam0] || bParam1;
	return;
}

int func_77(int iParam0) // Position - 0x1888 Hash - 0x1497AC6A ^0x1497AC6A
{
	if (!(iParam0 > -1 && iParam0 < 153))
		return -1;

	switch (iParam0)
	{
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
	
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
	
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
	
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
	
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
	
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
	
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
	
		case 9:
		case 37:
		case 69:
			return 8;
	
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
	
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
	
		case 12:
		case 54:
			return 21;
	
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
	
		case 17:
		case 47:
			return 7;
	
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
	
		case 22:
			return 17;
	
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
	
		case 48:
			return 12;
	
		case 49:
			return 13;
	
		case 50:
			return 14;
	
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
	
		case 62:
		case 79:
			return 20;
	
		case 101:
			return 11;
	
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
	
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
	
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
	
		case 126:
			return 32;
	
		case 127:
			return 34;
	
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
	
		case 136:
			return 5;
	
		case 149:
			return 23;
	
		case 150:
			return 24;
	
		case 151:
			return 25;
	
		case 152:
			return 24;
	
		default:
		
	}

	return -1;
}

void func_78(int iParam0, BOOL bParam1) // Position - 0x1CDC Hash - 0x7B4D6095 ^0x327E1986
{
	if (!func_103(iParam0))
		return;

	if (bParam1 && func_104(iParam0, 512) || !bParam1 && !func_104(iParam0, 512))
		return;

	if (bParam1)
		func_105(iParam0, 512);
	else
		func_106(iParam0, 512);

	if (func_107(iParam0))
		INVENTORY::_0x9B4E793B1CB6550A();

	return;
}

BOOL func_79(int iParam0, int iParam1) // Position - 0x1D46 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_80(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1D56 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_81(int iParam0, int iParam1) // Position - 0x1D7C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_82(eStackSize essParam0) // Position - 0x1D8B Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_67(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_108(essParam0);
	
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

Ped func_83(eStackSize essParam0) // Position - 0x1DF3 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_67(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

void func_84(eStackSize essParam0) // Position - 0x1E2D Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(essParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_83(essParam0)))
		{
			func_109(essParam0, 67108864, true);
			func_35(essParam0, 19, true);
		}
	}

	return;
}

float func_85(eStackSize essParam0) // Position - 0x1E60 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_67(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_86(eStackSize essParam0) // Position - 0x1E81 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_83(essParam0);
	persChar = func_37(essParam0, false);
	func_110(essParam0, ped);

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

BOOL func_87(eStackSize essParam0) // Position - 0x1EDB Hash - 0x6410553A ^0x46627D03
{
	if (!func_67(essParam0))
		return false;

	if (Global_1360165[essParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[essParam0 /*1157*/].f_70.f_11 == Global_1360165[essParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_88(eStackSize essParam0) // Position - 0x1F27 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_67(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_89(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x1F4F Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_67(essParam0))
		return;

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 - Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_90(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1FB4 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	int num;
	PersChar persChar;

	if (!func_67(essParam0))
		return 0;

	mount = func_45(essParam0);

	if (func_36(mount, 0))
	{
		if (func_36(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_87(essParam0) || func_88(essParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_111(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				num = func_112(essParam0, true);
			
				if (num != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_113(essParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_114(essParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_114(essParam0, false));
					func_115(essParam0);
				}
			}
			else
			{
				if (func_30(essParam0, 32768, true))
				{
					persChar = func_114(essParam0, false);
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
			
				func_113(essParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_114(essParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_114(essParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				func_113(essParam0);
				PED::DELETE_PED(&(Global_1360165[essParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;
	func_116(essParam0, 0);
	return 1;
}

BOOL func_91(int iParam0, BOOL bParam1) // Position - 0x2165 Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_51() != -1)
		return false;

	if (!func_47(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_52(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_102(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_52(iParam0));
}

Ped func_92(Ped pedParam0) // Position - 0x21BD Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_93(Ped pedParam0) // Position - 0x21C7 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_94(Ped pedParam0) // Position - 0x21F9 Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

BOOL func_95(var uParam0, Ped pedParam1, char* sParam2) // Position - 0x223B Hash - 0xFB1C2C0E ^0x6794528D
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i < uParam0->f_97 && !flag; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(uParam0->[i /*4*/].f_1)))
		{
			uParam0->[i /*4*/] = pedParam1;
			flag = true;
		}
	}

	if (!flag)
	{
		if (uParam0->f_97 < 24)
		{
			uParam0->[uParam0->f_97 /*4*/] = pedParam1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[uParam0->f_97 /*4*/].f_1), sParam2, 24);
			uParam0->f_97 = uParam0->f_97 + 1;
			flag = true;
		}
	}

	return flag;
}

BOOL func_96(int iParam0) // Position - 0x22B9 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_97(int iParam0, int iParam1) // Position - 0x22EC Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = iParam1;
	return;
}

int func_98(int iParam0) // Position - 0x230C Hash - 0xB1EC3C9 ^0x6FAB5D7B
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_4;

	return 0;
}

void func_99(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x232B Hash - 0xFDACD718 ^0x658C9335
{
	int i;

	for (i = 0; i < uParam3->f_97; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3->[i /*4*/]))
			if (!ENTITY::IS_ENTITY_DEAD(uParam3->[i /*4*/]))
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3->[i /*4*/], &(uParam3->[i /*4*/].f_1));
	}

	return;
}

BOOL func_100(int iParam0, int iParam1) // Position - 0x237D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_101(var uParam0, float fParam1) // Position - 0x238C Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_117() - fParam1;
	func_118(uParam0, 1);
	func_119(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

Ped func_102(int iParam0) // Position - 0x23B2 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_52(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

BOOL func_103(int iParam0) // Position - 0x23E0 Hash - 0x895544C2 ^0x895544C2
{
	return iParam0 > -1 && iParam0 < 35;
}

BOOL func_104(int iParam0, int iParam1) // Position - 0x23F6 Hash - 0x959C7992 ^0x749D7801
{
	if (!func_103(iParam0))
		return false;

	return Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1 != false;
}

void func_105(int iParam0, int iParam1) // Position - 0x241E Hash - 0x1EFCCF1E ^0x5374EF2E
{
	if (!func_103(iParam0))
		return;

	Global_1914319.f_3[iParam0 /*446*/].f_7 = Global_1914319.f_3[iParam0 /*446*/].f_7 || iParam1;
	return;
}

void func_106(int iParam0, int iParam1) // Position - 0x2450 Hash - 0xD75877A8 ^0xA8B353E5
{
	if (!func_103(iParam0))
		return;

	Global_1914319.f_3[iParam0 /*446*/].f_7 = Global_1914319.f_3[iParam0 /*446*/].f_7 - Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1;
	return;
}

BOOL func_107(int iParam0) // Position - 0x2490 Hash - 0xEFF1F628 ^0xEFF1F628
{
	if (func_120())
		if (Global_1914319.f_16855 == iParam0)
			return true;

	return false;
}

Hash func_108(int iParam0) // Position - 0x24B0 Hash - 0xBA965109 ^0xCB1D208B
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

void func_109(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x268C Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

void func_110(eStackSize essParam0, Ped pedParam1) // Position - 0x26BD Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_121(pedParam1);

	return;
}

float func_111(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x26D7 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_122(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_112(eStackSize essParam0, BOOL bParam1) // Position - 0x272E Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_67(essParam0))
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
		Global_1360165[essParam0 /*1157*/].f_127 = func_123(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_113(eStackSize essParam0) // Position - 0x2873 Hash - 0xF7FD9E75 ^0xF411CFCB
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

PersChar func_114(eStackSize essParam0, BOOL bParam1) // Position - 0x28E9 Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_67(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[essParam0 /*1157*/].f_126 = func_124(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_115(eStackSize essParam0) // Position - 0x2935 Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_67(essParam0))
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

void func_116(eStackSize essParam0, int iParam1) // Position - 0x2988 Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_67(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

float func_117() // Position - 0x29AC Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_118(var uParam0, int iParam1) // Position - 0x29DE Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_119(var uParam0, int iParam1) // Position - 0x29EF Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_120() // Position - 0x2A04 Hash - 0x7AD82543 ^0x1E438C72
{
	return Global_1914319.f_17369 || Global_1914319.f_18996.f_1;
}

void func_121(Ped pedParam0) // Position - 0x2A22 Hash - 0x64CCCF6A ^0xECF1361B
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

float func_122(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x2A85 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

Hash func_123(eStackSize essParam0) // Position - 0x2AA3 Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_67(essParam0))
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

	if (!func_67(essParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = essParam0;
			Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_124(eStackSize essParam0) // Position - 0x2B84 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_67(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_112(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

