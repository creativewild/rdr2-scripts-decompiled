#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 24;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
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
	Ped pedLocal_108 = 0;
	Ped pedLocal_109 = 0;
	Ped pedLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
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

void main() // Position - 0x0 Hash - 0x69F46C03 ^0x5F6B2373
{
	iLocal_3 = joaat("u_m_m_bht_benedictallbright");

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1(&uLocal_111);

	func_2(&uLocal_111, &uScriptParam_0);

	while (!func_3(&uLocal_111))
	{
		func_4(&uLocal_111);
	
		switch (func_5(uLocal_111))
		{
			case 0:
				if (func_6(&uLocal_111))
					func_7(&uLocal_111, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_111))
					func_7(&uLocal_111, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_111))
					func_7(&uLocal_111, 3);
				break;
		
			case 3:
				func_1(&uLocal_111);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_111);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0xB2 Hash - 0xCA2A1420 ^0x1B8E2ABF
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

BOOL func_6(var uParam0) // Position - 0x25D Hash - 0xA53D7B5F ^0xA53D7B5F
{
	if (!func_21(uParam0) || !func_22(uParam0) || !func_23())
		return false;

	func_24();
	func_25(iLocal_3, 76, 1);
	func_26(iLocal_3, 76);
	func_27();
	return true;
}

void func_7(var uParam0, int iParam1) // Position - 0x2A5 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_8(var uParam0) // Position - 0x2B2 Hash - 0xE70F011 ^0xCE61FB0
{
	if (!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
		return false;

	return func_28(uParam0);
}

BOOL func_9(var uParam0) // Position - 0x2EA Hash - 0xEDB66132 ^0xEDB66132
{
	BOOL num;

	num = 1;

	if (!func_29())
		num = 0;

	if (!func_30(uParam0))
		num = 0;

	return num;
}

void func_10() // Position - 0x30F Hash - 0xF2ADC204 ^0xF23F9A2E
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_12(i) && func_14(i))
			func_31(i, 56, true);
	}

	func_32(&(Global_1359489.f_40), true);
	return;
}

void func_11(var uParam0) // Position - 0x352 Hash - 0x50E93A45 ^0x50E93A45
{
	func_33(3, false, true, false, false);
	func_34(&pedLocal_109);
	func_34(&pedLocal_110);
	return;
}

BOOL func_12(int iParam0) // Position - 0x36F Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

BOOL func_13(int iParam0) // Position - 0x38E Hash - 0xDA629583 ^0xDA629583
{
	return func_35(iParam0, 16, true);
}

BOOL func_14(int iParam0) // Position - 0x39F Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_12(iParam0))
		return false;

	if (!func_13(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x3D3 Hash - 0xA4706F79 ^0xAF27D1D3
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
		func_31(iParam0, 56, true);
		func_32(&(Global_1359489.f_40), true);
	}

	func_36(iParam0, false);
	func_37(iParam0, 4, false);
	func_38(iParam0);
	func_39(iParam0);
	func_40(iParam0, 37, true);
	flag = func_41(Global_1360165[iParam0 /*1157*/], 0);
	persChar = func_42(iParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);

	if (func_43(iParam0, 64, true))
		func_40(iParam0, 64, true);

	if (bParam3)
	{
		func_40(iParam0, 33, true);
		func_40(iParam0, 34, true);
		func_44(iParam0, 1056964608, -1, 1061158912);
		func_45(iParam0, true, true, false);
	
		if (bParam6)
			func_31(iParam0, 30, true);
	
		if (bParam7)
		{
			func_31(iParam0, 35, true);
		
			if (bParam8)
				func_31(iParam0, 62, true);
		}
	
		if (flag)
		{
			func_46(iParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_40(iParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
	
		func_31(iParam0, 33, true);
		func_45(iParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = iParam4;
			func_32(&(Global_1360165[iParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_47(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_31(iParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			func_48(iParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);

	if (func_43(iParam0, 45, true))
		func_40(iParam0, 45, true);

	func_49(iParam0, 16, true);
	func_40(iParam0, 44, true);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_41(func_50(iParam0), 0))
			func_51(0, iParam0, bParam3, 0, bParam2);

	return;
}

BOOL func_16(var uParam0, int iParam1) // Position - 0x688 Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x699 Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x6B1 Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

void func_19(var uParam0) // Position - 0x6C4 Hash - 0xE4573E71 ^0xCA02777F
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
	}

	PED::_RESERVE_AMBIENT_PEDS(1);
	return;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x6E0 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_21(var uParam0) // Position - 0x6EF Hash - 0x8F2C8F52 ^0xD93C2D60
{
	if (!func_41(pedLocal_108, 0))
	{
		pedLocal_108 = ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_2, "U_M_M_ValSheriff_01", false);
		return false;
	}

	if (!func_52(3))
		func_53(3);

	if (!func_54(3, true))
		func_55(3, true);

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_108))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_108, true, true);

	func_56(&uLocal_7, pedLocal_108, "VAL_Sheriff", true);
	return true;
}

BOOL func_22(var uParam0) // Position - 0x750 Hash - 0xE411700B ^0xBAB2A8A
{
	if (!func_41(pedLocal_109, 0))
	{
		pedLocal_109 = ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_2, "u_m_m_bht_benedictallbright", false);
		return false;
	}

	return true;
}

BOOL func_23() // Position - 0x776 Hash - 0x956B5FC9 ^0x956B5FC9
{
	if (!func_41(Global_35, 0))
		return false;

	func_56(&uLocal_7, Global_35, "ARTHUR", true);
	return true;
}

void func_24() // Position - 0x79C Hash - 0xC1ABC161 ^0xC1ABC161
{
	func_57(76, 1);
	func_58(76, 1);
	return;
}

void func_25(int iParam0, int iParam1, int iParam2) // Position - 0x7B2 Hash - 0x7E6F091B ^0x7E6F091B
{
	int i;
	int num;
	int num2;
	int num3;

	num3 = -1;
	num = func_59(iParam1);

	if (num == 0)
		return;

	for (i = 0; i < Global_40.f_9829; i = i + 1)
	{
		if (Global_40.f_9829[i /*4*/] == -1 && num3 == -1)
			num3 = i;
	
		if (Global_40.f_9829[i /*4*/] == iParam1)
		{
			if (Global_40.f_9829[i /*4*/].f_1 == iParam0)
				return;
		
			if (iParam2 == num2)
			{
				func_60(i, iParam0, iParam1, 0);
				return;
			}
		
			num2 = num2 + 1;
		}
	
		if (num2 >= num)
		{
			func_61(iParam0, iParam1);
			return;
		}
	}

	if (num3 < 0)
		return;

	func_60(num3, iParam0, iParam1, 0);
	return;
}

void func_26(int iParam0, int iParam1) // Position - 0x865 Hash - 0xC7B2AABE ^0x71F12F49
{
	int i;

	for (i = 0; i < Global_40.f_9829; i = i + 1)
	{
		if (Global_40.f_9829[i /*4*/] == iParam1 && Global_40.f_9829[i /*4*/].f_1 == iParam0)
			func_62(i, 128);
	}

	return;
}

void func_27() // Position - 0x8B0 Hash - 0x12D86E67 ^0xB293CD2
{
	func_63(99);
	func_64(99);

	if (func_65(99) < 2)
	{
		func_66(99, true, -249.417f, 764.93f, 116.441f, -1, false, true);
		func_67("spd_thomasdowne1", 523);
	}

	return;
}

BOOL func_28(var uParam0) // Position - 0x8F1 Hash - 0x58C178F0 ^0x64DC6BF2
{
	if (!func_68())
		return 0;

	if (func_41(pedLocal_108, 0))
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(pedLocal_108, -276.00928f, 810.71674f, 118.37545f, 0.5f, 0, false, false, false, false);

	return 1;
}

BOOL func_29() // Position - 0x92F Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_30(var uParam0) // Position - 0x93C Hash - 0x9DFD4AE4 ^0x9DFD4AE4
{
	func_69();
	return func_70() != 76;
}

void func_31(int iParam0, int iParam1, BOOL bParam2) // Position - 0x94F Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_71(iParam0))
			return;

	func_72(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_32(var uParam0, BOOL bParam1) // Position - 0x989 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_73(uParam0))
		func_74(uParam0);

	return;
}

void func_33(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x9A9 Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_75(iParam0))
		return;

	if (!func_54(iParam0, 1))
		return;

	if (!func_54(iParam0, 2))
		return;

	if (!bParam4 && !func_52(iParam0) && func_76(iParam0))
		return;

	func_77(iParam0, 1);
	func_78(iParam0);

	if (func_80(func_79(iParam0)))
	{
		persChar = func_81(iParam0);
	
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
	
		func_77(iParam0, 16);
	}

	if (func_54(iParam0, 128) && !bParam3)
		func_82(iParam0, false);

	return;
}

void func_34(Ped* ppedParam0) // Position - 0xA95 Hash - 0xC4826352 ^0x8AD0FF3C
{
	if (!ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
		return;

	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*ppedParam0))
		return;

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*ppedParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*ppedParam0, true, false);

	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*ppedParam0, false))
		return;

	if (!ENTITY::IS_ENTITY_DEAD(*ppedParam0))
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false);

	PED::DELETE_PED(ppedParam0);
	return;
}

BOOL func_35(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xAF4 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_71(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

void func_36(int iParam0, BOOL bParam1) // Position - 0xB1E Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_71(iParam0))
		return;

	if (bParam1)
		if (func_83(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
			func_37(iParam0, 1, false);

	func_37(iParam0, 16, bParam1);
	return;
}

void func_37(int iParam0, int iParam1, BOOL bParam2) // Position - 0xB60 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_71(iParam0))
		return;

	func_84(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_38(int iParam0) // Position - 0xB88 Hash - 0x7895582D ^0x7895582D
{
	func_37(iParam0, 8, false);
	return;
}

void func_39(int iParam0) // Position - 0xB99 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_31(iParam0, 36, true);
	return;
}

void func_40(int iParam0, int iParam1, BOOL bParam2) // Position - 0xBAA Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_71(iParam0))
			return;

	func_72(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_41(Ped pedParam0, int iParam1) // Position - 0xBE4 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_85(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_85(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_85(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_85(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_85(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_85(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_85(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_85(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_42(int iParam0, BOOL bParam1) // Position - 0xCE3 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(iParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
			func_86(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_1;
}

BOOL func_43(int iParam0, int iParam1, BOOL bParam2) // Position - 0xD22 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_71(iParam0))
			return false;

	func_72(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

void func_44(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xD5D Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(iParam0))
	{
		ped = func_87(iParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_88(iParam0);
		}
	}

	if (func_43(iParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_87(iParam0), 137, true);

	return;
}

void func_45(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xDAF Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_71(iParam0))
		return;

	if (bParam1)
	{
		func_40(iParam0, 50, true);
		func_40(iParam0, 48, true);
		func_40(iParam0, 49, true);
		func_40(iParam0, 51, true);
		func_40(iParam0, 52, true);
		func_40(iParam0, 54, true);
		func_40(iParam0, 55, true);
	}
	else
	{
		func_31(iParam0, 50, true);
		func_31(iParam0, 48, true);
		func_31(iParam0, 49, true);
		func_31(iParam0, 51, true);
	
		if (bParam3)
			func_31(iParam0, 54, true);
		else
			func_40(iParam0, 54, true);
	
		if (!bParam2)
		{
			func_31(iParam0, 52, true);
		
			if (bParam3)
				func_31(iParam0, 55, true);
		}
		else
		{
			func_40(iParam0, 52, true);
		
			if (!bParam3)
				func_40(iParam0, 55, true);
		}
	}

	return;
}

void func_46(int iParam0, BOOL bParam1) // Position - 0xE81 Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_71(iParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_87(iParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_87(iParam0), 204, false);

	return;
}

void func_47(var uParam0) // Position - 0xEB8 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_48(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xECE Hash - 0x6E8FD624 ^0x6E8FD624
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

	if (func_43(iParam0, 32, true))
		if (!bParam2)
			return;

	char = func_42(iParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_87(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_89(iParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_31(iParam0, 2, true);
	}
	else
	{
		func_90(iParam0);
		func_31(iParam0, 1, true);
	}

	return;
}

void func_49(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xFDC Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] - Global_40.f_4942[iParam0 /*60*/] && bParam1;
	return;
}

Player func_50(int iParam0) // Position - 0x1018 Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
		Global_1360165[iParam0 /*1157*/].f_70 = 0;

	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_51(int iParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x1058 Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_71(iParam1))
		return;

	player = func_50(iParam1);

	if (func_91(iParam1))
		if (!func_92(iParam1))
			return;

	func_40(iParam1, 39, true);
	func_93(iParam1, 64, false);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_93(iParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_93(iParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_31(iParam1, 43, true);
		}
	
		if (bParam4)
			func_94(iParam1, false, true, true, true);
	}

	return;
}

BOOL func_52(int iParam0) // Position - 0x10FA Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_75(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_53(int iParam0) // Position - 0x111F Hash - 0x5A948764 ^0xFC1342AE
{
	if (!func_75(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

BOOL func_54(int iParam0, BOOL bParam1) // Position - 0x1142 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_95() != -1)
		return false;

	if (!func_75(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

void func_55(int iParam0, BOOL bParam1) // Position - 0x1170 Hash - 0x61515A20 ^0x61515A20
{
	if (func_95() != -1)
		return;

	if (!func_75(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

void func_56(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x11A1 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_96(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

void func_57(int iParam0, int iParam1) // Position - 0x11FE Hash - 0xDC5FA333 ^0xDC5FA333
{
	func_98(func_97(iParam0, iParam1));
	return;
}

void func_58(int iParam0, int iParam1) // Position - 0x1213 Hash - 0x6F265606 ^0x7B547B51
{
	int i;
	int num;
	Hash hash;
	int num2;

	for (i = 0; i < Global_40.f_9829; i = i + 1)
	{
		if (Global_40.f_9829[i /*4*/] == iParam0)
		{
			if (num == iParam1)
			{
				Global_40.f_9829[i /*4*/].f_1 = 0;
				Global_40.f_9829[i /*4*/].f_3 = 1;
				hash = func_99(iParam0, iParam1);
				num2 = func_100(iParam0);
				PERSCHAR::_0x70605812ABC9FF0F(hash, num2);
			}
		
			num = num + 1;
		}
	}

	return;
}

int func_59(int iParam0) // Position - 0x1282 Hash - 0x12F5DA1B ^0x12F5DA1B
{
	switch (iParam0)
	{
		case 5:
			return 2;
	
		case 26:
			return 2;
	
		case 38:
			return 2;
	
		case 76:
			return 2;
	
		case 78:
			return 2;
	
		case 105:
			return 1;
	
		case 115:
			return 6;
	}

	return 0;
}

void func_60(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x12EE Hash - 0xEE315FA4 ^0xFE618855
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
		return;

	Global_40.f_9829[iParam0 /*4*/].f_1 = iParam1;
	Global_40.f_9829[iParam0 /*4*/] = iParam2;
	Global_40.f_9829[iParam0 /*4*/].f_2 = 0;
	Global_40.f_9829[iParam0 /*4*/].f_3 = iParam3;
	return;
}

void func_61(int iParam0, int iParam1) // Position - 0x1344 Hash - 0x58A54AA8 ^0x58A54AA8
{
	int i;
	int num;
	int num2;
	int num3;

	num3 = -1;
	num = func_59(iParam1);

	for (i = 0; i < Global_40.f_9829; i = i + 1)
	{
		if (Global_40.f_9829[i /*4*/] == iParam1)
		{
			if (num3 >= 0)
				func_60(num3, Global_40.f_9829[i /*4*/].f_1, iParam1, Global_40.f_9829[i /*4*/].f_3);
		
			num3 = i;
			num2 = num2 + 1;
		
			if (num2 == num)
			{
				func_60(i, iParam0, iParam1, 0);
				return;
			}
		}
	}

	return;
}

void func_62(int iParam0, int iParam1) // Position - 0x13C2 Hash - 0x5EA34FE1 ^0xDEE8F37E
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
		return;

	func_101(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
	return;
}

void func_63(int iParam0) // Position - 0x13F5 Hash - 0x28E04FD0 ^0x3CCA68D
{
	if (!func_102(iParam0))
		return;

	Global_1310750[iParam0 /*111*/].f_46 = 1;
	return;
}

void func_64(int iParam0) // Position - 0x1415 Hash - 0x28E04FD0 ^0x6E345FEF
{
	if (!func_102(iParam0))
		return;

	Global_1310750[iParam0 /*111*/].f_47 = 1;
	return;
}

int func_65(int iParam0) // Position - 0x1435 Hash - 0x25781A89 ^0x4D75BCF7
{
	if (!func_102(iParam0))
		return 0;

	return Global_17504.f_42[iParam0 /*8*/];
}

void func_66(int iParam0, BOOL bParam1, float fParam2, float fParam3, float fParam4, Player plParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1454 Hash - 0x99195764 ^0xEAF942EF
{
	if (!func_102(iParam0) && !bParam7)
		return;

	if (Global_1310750.f_16071 != -1 && !bParam6)
		return;

	func_103();

	if (plParam5 == -1)
		plParam5 = PLAYER::PLAYER_ID();

	Global_1310750.f_16103 = { fParam2 };
	Global_1327479 = iParam0;
	Global_1327479.f_1 = plParam5;
	Global_1327479.f_10 = func_104(iParam0, fParam2);
	func_105(0);
	func_106(0, 0, true);

	if (bParam1)
	{
		Global_1310750.f_16077 = 0;
		Global_1310750.f_16071 = -1;
		Global_1310750.f_16075 = 1;
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
		func_107(8);
		func_108(Global_36, 1137180672);
	}

	if (bParam7)
		Global_1310750.f_16076 = 1;

	return;
}

void func_67(char* sParam0, int iParam1) // Position - 0x1519 Hash - 0xBEDA82F0 ^0x9A488B4
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return;

	func_109(MISC::GET_HASH_KEY(sParam0), iParam1);
	return;
}

BOOL func_68() // Position - 0x1539 Hash - 0x93DADE3B ^0x910F8A22
{
	func_34(&pedLocal_109);

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_110))
	{
		pedLocal_110 = func_110(76, iLocal_3);
		return false;
	}

	func_111(Global_1835011[7 /*74*/].f_1, 1);
	func_112(iLocal_3, 76, 2);
	LAW::SET_PLAYER_TURNED_IN_BOUNTY_IN_REGION(PLAYER::GET_PLAYER_INDEX(), func_113(76, true, true));
	return true;
}

void func_69() // Position - 0x1587 Hash - 0x505981F1 ^0x270B7C10
{
	if (func_41(pedLocal_108, 0))
	{
		switch (iLocal_6)
		{
			case 0:
				if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(pedLocal_108, -1) && TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_108, 1))
					iLocal_6 = 1;
				break;
		
			case 1:
				if (!AUDIO::_IS_ANY_CONVERSATION_PLAYING(false))
				{
					if (func_114())
					{
						func_32(&uLocal_105, false);
					
						if (func_115(&uLocal_105) > 4.5f)
						{
							if (func_117(&uLocal_7, func_116(), pedLocal_108, pedLocal_110, 0, false, 1, true))
							{
								func_47(&uLocal_105);
								iLocal_4 = iLocal_4 + 1;
							
								if (iLocal_4 > 1)
								{
									func_118(3);
									iLocal_5 = 1;
									iLocal_6 = 2;
								}
								else
								{
									iLocal_6 = 3;
								}
							}
						}
					}
					else
					{
						func_47(&uLocal_105);
					}
				}
				else
				{
					func_47(&uLocal_105);
				}
				break;
		
			case 2:
				if (!AUDIO::_IS_ANY_CONVERSATION_PLAYING(false))
				{
					if (func_114())
					{
						func_32(&uLocal_105, false);
					
						if (func_115(&uLocal_105) > 4.5f)
						{
							if (func_117(&uLocal_7, "BOU1_SH_AFTERCS", pedLocal_108, pedLocal_110, 0, false, 1, true))
							{
								func_47(&uLocal_105);
								iLocal_6 = 3;
							}
						}
					}
					else
					{
						func_47(&uLocal_105);
					}
				}
				else
				{
					func_47(&uLocal_105);
				}
				break;
		
			case 3:
				func_32(&uLocal_105, false);
			
				if (func_115(&uLocal_105) > 8f)
				{
					func_47(&uLocal_105);
				
					if (iLocal_5 == 1)
						iLocal_6 = 2;
					else
						iLocal_6 = 1;
				}
				break;
		
			case 4:
				break;
		}
	}

	return;
}

int func_70() // Position - 0x16D8 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_71(int iParam0) // Position - 0x16E6 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

int func_72(int iParam0, var uParam1, var uParam2) // Position - 0x16F2 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_73(var uParam0) // Position - 0x170F Hash - 0x5001E582 ^0x5001E582
{
	return func_119(*uParam0, 1);
}

void func_74(var uParam0) // Position - 0x171F Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_120(uParam0, 0f);
	return;
}

BOOL func_75(int iParam0) // Position - 0x172E Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

BOOL func_76(int iParam0) // Position - 0x1745 Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_75(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_77(int iParam0, BOOL bParam1) // Position - 0x1769 Hash - 0x452DF11A ^0x452DF11A
{
	if (func_95() != -1)
		return;

	if (!func_75(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

void func_78(int iParam0) // Position - 0x17A2 Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_75(iParam0))
		return;

	ped = func_121(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

Hash func_79(int iParam0) // Position - 0x17E6 Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_75(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

BOOL func_80(Hash hParam0) // Position - 0x1804 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

PersChar func_81(int iParam0) // Position - 0x1810 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_75(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_82(int iParam0, BOOL bParam1) // Position - 0x1830 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_75(iParam0))
		return 0;

	if (!func_54(iParam0, 2))
		return 0;

	if (func_79(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_81(iParam0)))
		return 1;

	if (func_54(iParam0, true) && !bParam1)
	{
		func_55(iParam0, 128);
		return 1;
	}

	func_77(iParam0, 129);
	func_78(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_81(iParam0));
	func_122(iParam0, 0);
	return 1;
}

BOOL func_83(int iParam0, int iParam1) // Position - 0x18B3 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_84(int iParam0, int iParam1, BOOL bParam2) // Position - 0x18C3 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_85(int iParam0, int iParam1) // Position - 0x18E9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_86(int iParam0) // Position - 0x18F8 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_71(iParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		hash = func_123(iParam0);
	
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

Ped func_87(int iParam0) // Position - 0x1960 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_71(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

void func_88(int iParam0) // Position - 0x199A Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_87(iParam0)))
		{
			func_124(iParam0, 67108864, true);
			func_40(iParam0, 19, true);
		}
	}

	return;
}

float func_89(int iParam0) // Position - 0x19CD Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_71(iParam0))
		return 0f;

	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_90(int iParam0) // Position - 0x19EE Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_87(iParam0);
	persChar = func_42(iParam0, false);
	func_125(iParam0, ped);

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

BOOL func_91(int iParam0) // Position - 0x1A48 Hash - 0x6410553A ^0x46627D03
{
	if (!func_71(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_92(int iParam0) // Position - 0x1A94 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_71(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_93(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1ABC Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_71(iParam0))
		return;

	if (bParam2)
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 - Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_94(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1B21 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	int num;
	PersChar persChar;

	if (!func_71(iParam0))
		return 0;

	mount = func_50(iParam0);

	if (func_41(mount, 0))
	{
		if (func_41(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_91(iParam0) || func_92(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_126(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				num = func_127(iParam0, true);
			
				if (num != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_128(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_129(iParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_129(iParam0, false));
					func_130(iParam0);
				}
			}
			else
			{
				if (func_35(iParam0, 32768, true))
				{
					persChar = func_129(iParam0, false);
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
		if (func_41(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_35(iParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
			
				func_128(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_129(iParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_129(iParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_128(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_131(iParam0, 0);
	return 1;
}

BOOL func_95() // Position - 0x1CD2 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_96(var uParam0, Ped pedParam1, char* sParam2) // Position - 0x1CE0 Hash - 0xFB1C2C0E ^0x6794528D
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

int func_97(int iParam0, int iParam1) // Position - 0x1D5E Hash - 0x25D84CF8 ^0x366468F
{
	int num;

	num = -1;

	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					num = 281;
					break;
			
				case 1:
					num = 282;
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					num = 499;
					break;
			
				case 1:
					num = 500;
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					num = 511;
					break;
			
				case 1:
					num = 512;
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					num = 25;
					break;
			
				case 1:
					num = 26;
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 0:
					num = 430;
					break;
			
				case 1:
					num = 431;
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 0:
					num = 127;
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 0:
					num = 364;
					break;
			
				case 1:
					num = 363;
					break;
			
				case 2:
					num = 362;
					break;
			
				case 3:
					num = 361;
					break;
			
				case 4:
					num = 360;
					break;
			
				case 5:
					num = 359;
					break;
			}
			break;
	}

	num == -1;
	return num;
}

int func_98(int iParam0) // Position - 0x1EDB Hash - 0x1B19432F ^0x9C562F71
{
	Ped perscharPedIndex;

	if (!func_75(iParam0))
		return 0;

	if (!func_80(func_79(iParam0)))
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_81(iParam0)))
		return 0;

	if (NETWORK::NETWORK_IS_IN_SESSION())
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_81(iParam0))))
			return 1;

	perscharPedIndex = PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_81(iParam0));

	if (ENTITY::DOES_ENTITY_EXIST(perscharPedIndex))
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(perscharPedIndex))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(perscharPedIndex, true, true);

	PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_81(iParam0));
	return 1;
}

Hash func_99(int iParam0, int iParam1) // Position - 0x1F64 Hash - 0xBDB72840 ^0xBDB72840
{
	return func_79(func_97(iParam0, iParam1));
}

int func_100(int iParam0) // Position - 0x1F78 Hash - 0x8912D5A1 ^0x8A4762AD
{
	switch (iParam0)
	{
		case 5:
			return joaat("sdn_prisoners");
	
		case 26:
			return joaat("str_prisoners");
	
		case 38:
			return joaat("bla_prisoner");
	
		case 76:
			return joaat("val_prisoners");
	
		case 78:
			return joaat("asb_prisoners");
	
		case 105:
			return joaat("rhd_prisoners");
	
		case 115:
			return joaat("tbl_prisoners");
	
		default:
		
	}

	return -1;
}

void func_101(int iParam0, int iParam1) // Position - 0x1FEB Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_102(int iParam0) // Position - 0x1FFC Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

void func_103() // Position - 0x2012 Hash - 0x18ACD9D3 ^0xB2ADEAB8
{
	if (!func_102(Global_1327479))
		return;

	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));

	func_105(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
	return;
}

int func_104(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2085 Hash - 0x79583E95 ^0x35D8D668
{
	int i;
	var unk;

	for (i = 0; i < func_132(iParam0); i = i + 1)
	{
		unk = { func_133(iParam0, i) };
	
		if (func_134(unk, uParam1, 1056964608, true))
			return i;
	}

	return -1;
}

void func_105(int iParam0) // Position - 0x20CB Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1327479.f_3 = iParam0;
	return;
}

void func_106(int iParam0, int iParam1, BOOL bParam2) // Position - 0x20DB Hash - 0xD61623D0 ^0x48AE56A
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_135(iParam0, iParam1, bParam2);
	return;
}

void func_107(int iParam0) // Position - 0x20F7 Hash - 0x147F770D ^0x2A454E4B
{
	int i;
	Volume volLockRequestId;
	Vector3 vector;

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
		{
			vector = { VOLUME::_0xC4019CF9AE8E931A(volLockRequestId) };
		
			if (VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vector, 1f, 0, iParam0, 16384))
			{
				VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
				Global_1911670[i] = 0;
			}
		}
	}

	return;
}

void func_108(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x2152 Hash - 0x62CC3837 ^0x4AAF6E13
{
	int i;
	int volLockRequestId;

	for (i = 0; i < Global_1310750.f_16078; i = i + 1)
	{
		volLockRequestId = Global_1310750.f_16078[i];
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
		{
			if (BUILTIN::VDIST(VOLUME::_0xC4019CF9AE8E931A(volLockRequestId), vParam0) < iParam3)
			{
				VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
				Global_1310750.f_16078[i] = 0;
				Global_17504.f_2084[i /*5*/] = { 0f, 0f, 0f };
				Global_17504.f_2084[i /*5*/].f_3 = -1;
				Global_17504.f_2084[i /*5*/].f_4 = 0;
			}
		}
	}

	return;
}

void func_109(Hash hParam0, int iParam1) // Position - 0x21D7 Hash - 0x538161E5 ^0xFED55BF6
{
	int i;

	if (hParam0 == 0)
		return;

	if (!SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(hParam0))
		return;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hParam0) != 0)
	{
		SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	
		for (i = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID(); i != 0; i = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID())
		{
			if (hParam0 == SCRIPTS::_GET_HASH_OF_THREAD(i))
				if (SCRIPTS::IS_THREAD_ACTIVE(i, false))
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(i, iParam1);
		}
	}

	return;
}

Ped func_110(int iParam0, int iParam1) // Position - 0x2235 Hash - 0xA59A3CE1 ^0x2AEB5392
{
	Hash hash;
	int num;
	int num2;
	int i;

	num2 = -1;

	for (i = 0; i < Global_40.f_9829; i = i + 1)
	{
		if (Global_40.f_9829[i /*4*/] == iParam0)
		{
			num2 = num2 + 1;
		
			if (Global_40.f_9829[i /*4*/].f_1 == iParam1)
				break;
		}
	}

	if (num2 == -1)
		return 0;

	hash = func_99(iParam0, num2);
	num = func_97(iParam0, num2);
	PERSCHAR::_0x8BC555034A5A5E8C(hash, iParam1);
	func_136(num, false);

	if (func_137(num, false, 0, 0, 0, false))
		return func_121(num);

	return 0;
}

void func_111(int iParam0, int iParam1) // Position - 0x22C6 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_138(iParam0))
		return;

	func_139(iParam0, iParam1);
	return;
}

void func_112(int iParam0, int iParam1, int iParam2) // Position - 0x22E3 Hash - 0x8C94B0C6 ^0xF92B3A30
{
	int i;

	for (i = 0; i < Global_40.f_9829; i = i + 1)
	{
		if (Global_40.f_9829[i /*4*/] == iParam1 && Global_40.f_9829[i /*4*/].f_1 == iParam0)
			Global_40.f_9829[i /*4*/].f_3 = iParam2;
	}

	return;
}

Hash func_113(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2334 Hash - 0x460680B1 ^0xEA5BF9A6
{
	int num;

	switch (iParam0)
	{
		case 3:
			return joaat("LAW_REGION_LAGRAS");
	
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_143())
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			break;
	
		case 5:
			return joaat("LAW_REGION_SAINT_DENIS");
	
		case 22:
			if (!bParam1 || func_95() != -1)
				return joaat("LAW_REGION_PRONGHORN_RANCH");
		
			if (func_142(Global_1835011[59 /*74*/].f_1, true))
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			else
				return joaat("LAW_REGION_BIG_VALLEY");
			break;
	
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
	
		case 32:
			return joaat("LAW_REGION_SISIKA");
	
		case 35:
			return joaat("LAW_REGION_FORT_WALLACE");
	
		case 37:
			if (!bParam1 || func_95() != -1)
				return joaat("LAW_REGION_BEECHERS_HOPE");
		
			if (func_142(Global_1347702[9 /*49*/].f_15, true))
				return joaat("LAW_REGION_BEECHERS_HOPE");
			else if (func_141(45))
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			else
				return joaat("LAW_REGION_GREAT_PLAINS");
			break;
	
		case 38:
			if (!bParam1 || func_95() != -1)
				return joaat("LAW_REGION_BLACKWATER");
		
			if (func_141(45))
				return joaat("LAW_REGION_BLACKWATER");
			else
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			break;
	
		case 56:
			return joaat("LAW_REGION_WAPITI");
	
		case 57:
			return joaat("LAW_REGION_AGUASDULCES");
	
		case 61:
			return joaat("LAW_REGION_MANICATO");
	
		case 65:
			return joaat("LAW_REGION_CORNWALL");
	
		case 69:
			return joaat("LAW_REGION_EMERALD_RANCH");
	
		case 76:
			if (func_140(iParam0))
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			else
				return joaat("LAW_REGION_VALENTINE");
			break;
	
		case 78:
			return joaat("LAW_REGION_ANNESBURG");
	
		case 82:
			return joaat("LAW_REGION_BUTCHER_CREEK");
	
		case 92:
			return joaat("LAW_REGION_VAN_HORN");
	
		case 93:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
	
		case 95:
			return joaat("LAW_REGION_CALIGA_HALL");
	
		case 105:
			if (func_140(iParam0))
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			else
				return joaat("LAW_REGION_RHODES");
			break;
	
		case 110:
			if (!bParam1 || func_95() != -1)
				return joaat("LAW_REGION_MANZANITA_POST");
		
			if (func_141(45))
				return joaat("LAW_REGION_MANZANITA_POST");
			else
				return joaat("LAW_REGION_MANZANITA_POST_MAINGAME");
			break;
	
		case 115:
			return joaat("LAW_REGION_TUMBLEWEED");
	
		case 120:
			return joaat("LAW_REGION_ARMADILLO");
	
		case 124:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
	
		case 126:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
	
		case 127:
			if (!bParam1 || func_95() != -1)
				return joaat("LAW_REGION_THIEVES_LANDING");
		
			if (func_141(45))
				return joaat("LAW_REGION_THIEVES_LANDING");
			else
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			break;
	}

	if (bParam2)
	{
		num = func_144(iParam0);
	
		if (num != -1)
			return func_145(num, bParam1);
	}

	return 0;
}

BOOL func_114() // Position - 0x2656 Hash - 0xD172F8B2 ^0xB082409D
{
	if (func_41(pedLocal_108, 0) && func_41(Global_35, 0))
		if (ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_108) && func_146(Global_35, pedLocal_108, 2.5f, true))
			return true;

	return false;
}

float func_115(var uParam0) // Position - 0x2697 Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_73(uParam0))
		return 0f;

	if (func_147(uParam0))
		return uParam0->f_2;

	return func_148() - uParam0->f_1;
}

char* func_116() // Position - 0x26C9 Hash - 0x1A0D01E0 ^0xD5598167
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);

	switch (randomIntInRange)
	{
		case 0:
			return "BOU1_SH_CELL1";
	
		case 1:
			return "BOU1_SH_CELL2";
	
		case 2:
			return "BOU1_SH_CELL3";
	
		case 3:
			return "BOU1_SH_CELL4";
	
		default:
		
	}

	return "";
}

BOOL func_117(var uParam0, char* sParam1, Ped pedParam2, Ped pedParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x2714 Hash - 0x825CDE54 ^0x3C4EDF1C
{
	var unk;
	BOOL flag;

	pedParam3 = pedParam3;
	iParam4 = iParam4;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam2) && func_149(pedParam2, pedParam3, true, true) < 70f || bParam5)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 24);
	
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(pedParam2, pedParam3, 7000, 0, 51, 0);
		
			if (func_149(pedParam2, pedParam3, true, true) < 25f)
				TASK::TASK_LOOK_AT_ENTITY(pedParam3, pedParam2, 7000, 0, 51, 0);
		}
	
		if (iParam4 > 0)
			flag = true;
	
		func_74(&uLocal_0);
	
		if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam1))
			if (func_150(sParam1))
				return true;
		else if (func_151(uParam0, unk, flag, iParam4, false, false))
			return true;
	}

	return false;
}

void func_118(int iParam0) // Position - 0x27C7 Hash - 0xAAF85AE0 ^0x9C7D5FCA
{
	PersChar persChar;

	if (func_80(func_79(iParam0)))
	{
		persChar = func_81(iParam0);
	
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
				PERSCHAR::_RETASK_PERSISTENT_CHARACTER(persChar);
	}

	return;
}

BOOL func_119(int iParam0, int iParam1) // Position - 0x27FD Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_120(var uParam0, float fParam1) // Position - 0x280C Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_148() - fParam1;
	func_152(uParam0, 1);
	func_153(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

Ped func_121(int iParam0) // Position - 0x2832 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_81(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

void func_122(int iParam0, PersChar pchParam1) // Position - 0x2860 Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_75(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

Hash func_123(int iParam0) // Position - 0x2881 Hash - 0xBA965109 ^0xCB1D208B
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

void func_124(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2A5D Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] || bParam1;
	return;
}

void func_125(int iParam0, Ped pedParam1) // Position - 0x2A8E Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_154(pedParam1);

	return;
}

float func_126(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x2AA8 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_155(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_127(int iParam0, BOOL bParam1) // Position - 0x2AFF Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_71(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_156(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_128(int iParam0) // Position - 0x2C44 Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_50(iParam0);

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

PersChar func_129(int iParam0, BOOL bParam1) // Position - 0x2CBA Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_71(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[iParam0 /*1157*/].f_126 = func_157(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_130(int iParam0) // Position - 0x2D06 Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_71(iParam0))
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

void func_131(int iParam0, int iParam1) // Position - 0x2D59 Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_71(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

int func_132(int iParam0) // Position - 0x2D7D Hash - 0xB05A3A35 ^0xB05A3A35
{
	switch (iParam0)
	{
		case 0:
			return 10;
	
		case 1:
			return 12;
	
		case 2:
			return 23;
	
		case 3:
			return 6;
	
		case 4:
			return 17;
	
		case 5:
			return 1;
	
		case 6:
			return 3;
	
		case 7:
			return 23;
	
		case 8:
			return 1;
	
		case 9:
			return 8;
	
		case 10:
			return 2;
	
		case 11:
			return 4;
	
		case 12:
			return 18;
	
		case 13:
			return 12;
	
		case 14:
			return 7;
	
		case 15:
			return 21;
	
		case 16:
			return 19;
	
		case 17:
			return 12;
	
		case 18:
			return 7;
	
		case 19:
			return 1;
	
		case 20:
			return 17;
	
		case 21:
			return 3;
	
		case 22:
			return 1;
	
		case 23:
			return 17;
	
		case 24:
			return 14;
	
		case 27:
			return 11;
	
		case 28:
			return 5;
	
		case 29:
			return 8;
	
		case 30:
			return 38;
	
		case 31:
			return 20;
	
		case 32:
			return 10;
	
		case 33:
			return 13;
	
		case 34:
			return 11;
	
		case 35:
			return 2;
	
		case 36:
			return 12;
	
		case 37:
			return 20;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 12;
	
		case 41:
			return 3;
	
		case 42:
			return 1;
	
		case 43:
			return 27;
	
		case 44:
			return 9;
	
		case 45:
			return 15;
	
		case 46:
			return 2;
	
		case 47:
			return 2;
	
		case 48:
			return 9;
	
		case 49:
			return 7;
	
		case 50:
			return 36;
	
		case 51:
			return 5;
	
		case 53:
			return 3;
	
		case 54:
			return 6;
	
		case 55:
			return 2;
	
		case 56:
			return 12;
	
		case 57:
			return 14;
	
		case 58:
			return 8;
	
		case 59:
			return 3;
	
		case 60:
			return 11;
	
		case 61:
			return 2;
	
		case 62:
			return 17;
	
		case 63:
			return 6;
	
		case 64:
			return 7;
	
		case 65:
			return 10;
	
		case 66:
			return 12;
	
		case 67:
			return 5;
	
		case 68:
			return 5;
	
		case 69:
			return 5;
	
		case 70:
			return 6;
	
		case 71:
			return 8;
	
		case 72:
			return 9;
	
		case 73:
			return 4;
	
		case 74:
			return 1;
	
		case 75:
			return 1;
	
		case 76:
			return 1;
	
		case 77:
			return 3;
	
		case 78:
			return 2;
	
		case 79:
			return 6;
	
		case 80:
			return 3;
	
		case 81:
			return 15;
	
		case 82:
			return 9;
	
		case 83:
			return 2;
	
		case 84:
			return 2;
	
		case 85:
			return 11;
	
		case 86:
			return 2;
	
		case 87:
			return 9;
	
		case 88:
			return 2;
	
		case 89:
			return 1;
	
		case 90:
			return 2;
	
		case 91:
			return 2;
	
		case 92:
			return 3;
	
		case 93:
			return 1;
	
		case 94:
			return 9;
	
		case 95:
			return 1;
	
		case 96:
			return 7;
	
		case 97:
			return 6;
	
		case 98:
			return 4;
	
		case 99:
			return 2;
	
		case 100:
			return 1;
	
		case 101:
			return 2;
	
		case 102:
			return 3;
	
		case 103:
			return 3;
	
		case 104:
			return 3;
	
		case 105:
			return 2;
	
		case 106:
			return 4;
	
		case 107:
			return 1;
	
		case 108:
			return 3;
	
		case 109:
			return 3;
	
		case 110:
			return 1;
	
		case 111:
			return 4;
	
		case 112:
			return 3;
	
		case 113:
			return 3;
	
		case 114:
			return 16;
	
		case 115:
			return 3;
	
		case 116:
			return 7;
	
		case 117:
			return 2;
	
		case 118:
			return 10;
	
		case 119:
			return 17;
	
		default:
		
	}

	return 0;
}

Vector3 func_133(int iParam0, int iParam1) // Position - 0x324E Hash - 0x9696C39F ^0x9696C39F
{
	int num;

	if (iParam1 < 0)
		return 0f, 0f, 0f;

	if (!func_102(iParam0))
		return 0f, 0f, 0f;

	if (func_132(iParam0) == 0)
		return 0f, 0f, 0f;

	num = func_158(iParam0) + iParam1;

	if (num >= 892)
		return 0f, 0f, 0f;

	return Global_1310750.f_13358[num /*3*/];
}

BOOL func_134(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0x32A8 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
				return true;

	return false;
}

void func_135(int iParam0, int iParam1, BOOL bParam2) // Position - 0x32FD Hash - 0x4464293B ^0x680D2F86
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

int func_136(int iParam0, BOOL bParam1) // Position - 0x3382 Hash - 0x9F6E755B ^0x9F6E755B
{
	if (!func_75(iParam0))
		return 0;

	if (!func_54(iParam0, 2))
		return 0;

	if (func_54(iParam0, 32) && !bParam1)
	{
		func_122(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_79(iParam0)));
	
		if (func_95() == -1)
		{
			if (func_54(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_81(iParam0));
				func_77(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_81(iParam0));
		}
	
		return 0;
	}

	if (!func_159(iParam0) && func_95() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_81(iParam0)))
	{
		func_77(iParam0, 128);
		return 1;
	}

	func_122(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_79(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_81(iParam0));

	if (func_54(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_81(iParam0));
		func_77(iParam0, 2048);
	}

	return 1;
}

BOOL func_137(int iParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x346D Hash - 0x4673E62 ^0xCF31A97
{
	var unk;
	Entity entity;

	if (!func_75(iParam0))
		return false;

	if (!func_80(func_79(iParam0)))
		return true;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_81(iParam0)))
	{
		func_136(iParam0, false);
		return false;
	}

	unk = { iParam2, iParam3, iParam4 };

	if (!func_160(iParam0, false))
		if (bParam1)
			if (!func_161(iParam0))
				return false;
		else
			return false;

	if (!_IS_NULL_VECTOR(unk))
		PERSCHAR::_0x59C7AD6FEA2AC449(func_81(iParam0), unk);

	if (bParam5)
		entity = PERSCHAR::_0x08FC896D2CB31FCC(func_81(iParam0), false);
	else
		entity = PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_81(iParam0), false);

	if (!_IS_NULL_VECTOR(unk))
		PERSCHAR::_0xBB68908CD11AEBDC(func_81(iParam0));

	if (ENTITY::DOES_ENTITY_EXIST(entity))
		return true;

	return false;
}

BOOL func_138(int iParam0) // Position - 0x353E Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_139(int iParam0, int iParam1) // Position - 0x3571 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

BOOL func_140(int iParam0) // Position - 0x3591 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_163(iParam0))
		return false;

	return func_164(iParam0, 33554432);
}

BOOL func_141(int iParam0) // Position - 0x35B2 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_165(iParam0))
		return false;

	return func_166(iParam0);
}

BOOL func_142(int iParam0, BOOL bParam1) // Position - 0x35CE Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_167(iParam0))
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

int func_143() // Position - 0x35FF Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

int func_144(int iParam0) // Position - 0x360F Hash - 0x224FC50D ^0x224FC50D
{
	if (iParam0 < 0)
		return -1;
	else if (iParam0 <= 10)
		return 0;
	else if (iParam0 <= 29)
		return 1;
	else if (iParam0 <= 32)
		return 2;
	else if (iParam0 <= 36)
		return 3;
	else if (iParam0 <= 39)
		return 4;
	else if (iParam0 <= 49)
		return 7;
	else if (iParam0 <= 56)
		return 6;
	else if (iParam0 <= 61)
		return 8;
	else if (iParam0 <= 76)
		return 9;
	else if (iParam0 <= 92)
		return 10;
	else if (iParam0 <= 106)
		return 11;
	else if (iParam0 <= 113)
		return 12;
	else if (iParam0 <= 115)
		return 13;
	else if (iParam0 <= 119)
		return 14;
	else if (iParam0 <= 125)
		return 15;
	else if (iParam0 <= 127)
		return 16;

	return -1;
}

Hash func_145(int iParam0, BOOL bParam1) // Position - 0x370B Hash - 0x9CC4908E ^0xB6CFBFA0
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
	
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
	
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
	
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
	
		case 4:
			if (!bParam1 || func_95() != -1)
				return joaat("LAW_REGION_GREAT_PLAINS");
		
			if (func_141(45))
				return joaat("LAW_REGION_GREAT_PLAINS");
			else
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			break;
	
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 8:
			return joaat("LAW_REGION_GUAMA");
	
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
	
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
	
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
	
		case 12:
			if (!bParam1 || func_95() != -1)
				return joaat("LAW_REGION_TALL_TREES");
		
			if (func_141(45))
				return joaat("LAW_REGION_TALL_TREES");
			else
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_95() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (func_141(45))
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			else
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			break;
	}

	return 0;
}

BOOL func_146(Ped pedParam0, Ped pedParam1, float fParam2, BOOL bParam3) // Position - 0x3885 Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pedParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

BOOL func_147(var uParam0) // Position - 0x38CD Hash - 0x39705408 ^0x39705408
{
	return func_119(*uParam0, 2);
}

float func_148() // Position - 0x38DD Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

float func_149(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x390F Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_150(char* sParam0) // Position - 0x3957 Hash - 0xBE6F5C67 ^0x676667C3
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}

	return false;
}

BOOL func_151(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x3973 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_168(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

void func_152(var uParam0, int iParam1) // Position - 0x39CD Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_153(var uParam0, int iParam1) // Position - 0x39DE Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_154(Ped pedParam0) // Position - 0x39F3 Hash - 0x85D15603 ^0x963D5D25
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

float func_155(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x3A56 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_156(int iParam0) // Position - 0x3A74 Hash - 0xEB890713 ^0xB40CD388
{
	int num;
	int i;

	num = 0;

	if (!func_71(iParam0))
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

	if (!func_71(iParam0))
	{
		if (num != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return num;
}

PersChar func_157(int iParam0) // Position - 0x3B55 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_71(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		persCharHash = func_127(iParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[iParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[iParam0 /*60*/].f_7);
	
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}

	return Global_1360165[iParam0 /*1157*/].f_126;
}

int func_158(int iParam0) // Position - 0x3BF1 Hash - 0x8AE2E06E ^0x8AE2E06E
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 10;
	
		case 2:
			return 22;
	
		case 3:
			return 45;
	
		case 4:
			return 51;
	
		case 5:
			return 68;
	
		case 6:
			return 69;
	
		case 7:
			return 72;
	
		case 8:
			return 95;
	
		case 9:
			return 96;
	
		case 10:
			return 104;
	
		case 11:
			return 106;
	
		case 12:
			return 110;
	
		case 13:
			return 128;
	
		case 14:
			return 140;
	
		case 15:
			return 147;
	
		case 16:
			return 168;
	
		case 17:
			return 187;
	
		case 18:
			return 199;
	
		case 19:
			return 206;
	
		case 20:
			return 207;
	
		case 21:
			return 224;
	
		case 22:
			return 227;
	
		case 23:
			return 228;
	
		case 24:
			return 245;
	
		case 27:
			return 259;
	
		case 28:
			return 270;
	
		case 29:
			return 275;
	
		case 30:
			return 283;
	
		case 31:
			return 321;
	
		case 32:
			return 341;
	
		case 33:
			return 351;
	
		case 34:
			return 364;
	
		case 35:
			return 375;
	
		case 36:
			return 377;
	
		case 37:
			return 389;
	
		case 38:
			return 409;
	
		case 39:
			return 410;
	
		case 40:
			return 411;
	
		case 41:
			return 423;
	
		case 42:
			return 426;
	
		case 43:
			return 427;
	
		case 44:
			return 454;
	
		case 45:
			return 463;
	
		case 46:
			return 478;
	
		case 47:
			return 480;
	
		case 48:
			return 482;
	
		case 49:
			return 491;
	
		case 50:
			return 498;
	
		case 51:
			return 534;
	
		case 53:
			return 539;
	
		case 54:
			return 542;
	
		case 55:
			return 548;
	
		case 56:
			return 550;
	
		case 57:
			return 562;
	
		case 58:
			return 576;
	
		case 59:
			return 584;
	
		case 60:
			return 587;
	
		case 61:
			return 598;
	
		case 62:
			return 600;
	
		case 63:
			return 617;
	
		case 64:
			return 623;
	
		case 65:
			return 630;
	
		case 66:
			return 640;
	
		case 67:
			return 652;
	
		case 68:
			return 657;
	
		case 69:
			return 662;
	
		case 70:
			return 667;
	
		case 71:
			return 673;
	
		case 72:
			return 681;
	
		case 73:
			return &func_8;
	
		case 74:
			return 694;
	
		case 75:
			return 695;
	
		case 76:
			return 696;
	
		case 77:
			return 697;
	
		case 78:
			return 700;
	
		case 79:
			return 702;
	
		case 80:
			return 708;
	
		case 81:
			return 711;
	
		case 82:
			return 726;
	
		case 83:
			return 735;
	
		case 84:
			return 737;
	
		case 85:
			return 739;
	
		case 86:
			return 750;
	
		case 87:
			return 752;
	
		case 88:
			return 761;
	
		case 89:
			return 763;
	
		case 90:
			return 764;
	
		case 91:
			return 766;
	
		case 92:
			return 768;
	
		case 93:
			return 771;
	
		case 94:
			return 772;
	
		case 95:
			return 781;
	
		case 96:
			return 782;
	
		case 97:
			return 789;
	
		case 98:
			return 795;
	
		case 99:
			return 799;
	
		case 100:
			return 801;
	
		case 101:
			return 802;
	
		case 102:
			return 804;
	
		case 103:
			return 807;
	
		case 104:
			return 810;
	
		case 105:
			return 813;
	
		case 106:
			return 815;
	
		case 107:
			return 819;
	
		case 108:
			return 820;
	
		case 109:
			return 823;
	
		case 110:
			return 826;
	
		case 111:
			return 827;
	
		case 112:
			return 831;
	
		case 113:
			return 834;
	
		case 114:
			return 837;
	
		case 115:
			return 853;
	
		case 116:
			return 856;
	
		case 117:
			return 863;
	
		case 118:
			return 865;
	
		case 119:
			return 875;
	
		default:
		
	}

	return -1;
}

BOOL func_159(int iParam0) // Position - 0x4166 Hash - 0xF5815C8D ^0xF5815C8D
{
	if (!func_75(iParam0))
		return false;

	if (!func_54(iParam0, 2))
		return false;

	return true;
}

BOOL func_160(int iParam0, BOOL bParam1) // Position - 0x418C Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_95() != -1)
		return false;

	if (!func_75(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_81(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_121(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_81(iParam0));
}

BOOL func_161(int iParam0) // Position - 0x41E4 Hash - 0x365567CB ^0x68796F4
{
	if (!func_75(iParam0))
		return false;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_81(iParam0)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_81(iParam0));
	
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_81(iParam0), false)))
			return false;
	}

	return true;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x422A Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_163(int iParam0) // Position - 0x4254 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_164(int iParam0, BOOL bParam1) // Position - 0x426A Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_165(int iParam0) // Position - 0x429D Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_166(int iParam0) // Position - 0x42B0 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

int func_167(int iParam0) // Position - 0x42DA Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_138(iParam0))
		return -1;

	return func_169(iParam0);
}

void func_168(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x42F6 Hash - 0xFDACD718 ^0x658C9335
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

int func_169(int iParam0) // Position - 0x4348 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_170(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_170(int iParam0) // Position - 0x4389 Hash - 0x6EC15CF9 ^0xE613EBE0
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

