#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	Hash hLocal_3 = 0;
	ePedType eptLocal_4 = PED_TYPE_PLAYER_0;
	float fLocal_5 = 0f;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
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
	Ped pedLocal_21 = 0;
	Ped pedLocal_22 = 0;
	Vehicle veLocal_23 = 0;
	Vehicle veLocal_24 = 0;
	Object obLocal_25 = 0;
	var uLocal_26 = 24;
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
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 6;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
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

void main() // Position - 0x0 Hash - 0x35784BBC ^0x6E77145C
{
	hLocal_3 = joaat("wagon02x");
	eptLocal_4 = joaat("a_m_m_lagtownfolk_01");
	fLocal_5 = 0f;
	uLocal_6 = { 2114.5728f, -606.6023f, 40.60275f };
	uLocal_9 = { 2098.055f, -756.35785f, 40.55793f };
	uLocal_12 = { 2111.296f, -655.2276f, 41.16518f };
	uLocal_15 = { 2033.4875f, -428.73325f, 41.63809f };
	uLocal_18 = { 2404.6187f, -522.8186f, 40.49999f };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1(&uLocal_164);

	func_2(&uLocal_164, &uScriptParam_0);

	while (!func_3(&uLocal_164))
	{
		func_4(&uLocal_164);
	
		switch (func_5(uLocal_164))
		{
			case 0:
				if (func_6(&uLocal_164))
					func_7(&uLocal_164, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_164))
					func_7(&uLocal_164, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_164))
					func_7(&uLocal_164, 3);
				break;
		
			case 3:
				func_1(&uLocal_164);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_164);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0x11B Hash - 0xCA2A1420 ^0x1B8E2ABF
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

int func_2(var uParam0, var uParam1) // Position - 0x1B2 Hash - 0x11824BFA ^0x305C042C
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

BOOL func_3(var uParam0) // Position - 0x1FF Hash - 0xE6F09C07 ^0x349208FC
{
	if (func_20(Global_1935630, 16384))
		return true;

	if (!func_16(uParam0, 8))
		if (func_20(Global_1935630, 32768))
			return true;

	return false;
}

void func_4(var uParam0) // Position - 0x239 Hash - 0xCC0866FC ^0x1CE74C37
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

int func_5(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2BC Hash - 0xBE425958 ^0xBE425958
{
	return uParam0;
}

BOOL func_6(var uParam0) // Position - 0x2C6 Hash - 0x877050AD ^0x466C3791
{
	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
		return false;

	if (!func_21(uParam0) || !func_22() || !func_23())
		return false;

	return true;
}

void func_7(var uParam0, int iParam1) // Position - 0x2FF Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_8(var uParam0) // Position - 0x30C Hash - 0xE70F011 ^0xCE61FB0
{
	if (!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
		return false;

	return func_24(uParam0);
}

BOOL func_9(var uParam0) // Position - 0x344 Hash - 0xEDB66132 ^0xEDB66132
{
	BOOL num;

	num = 1;

	if (!func_25())
		num = 0;

	if (!func_26(uParam0))
		num = 0;

	return num;
}

void func_10() // Position - 0x369 Hash - 0xF2ADC204 ^0xF23F9A2E
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_12(i) && func_14(i))
			func_27(i, 56, true);
	}

	func_28(&(Global_1359489.f_40), true);
	return;
}

void func_11(var uParam0) // Position - 0x3AC Hash - 0x5D2FFBC4 ^0x5D2FFBC4
{
	func_29();
	func_30();
	func_31();
	return;
}

BOOL func_12(eStackSize essParam0) // Position - 0x3C0 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

BOOL func_13(eStackSize essParam0) // Position - 0x3DF Hash - 0xDA629583 ^0xDA629583
{
	return func_32(essParam0, 16, true);
}

BOOL func_14(eStackSize essParam0) // Position - 0x3F0 Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_12(essParam0))
		return false;

	if (!func_13(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x424 Hash - 0xA4706F79 ^0xAF27D1D3
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
		func_27(essParam0, 56, true);
		func_28(&(Global_1359489.f_40), true);
	}

	func_33(essParam0, false);
	func_34(essParam0, 4, false);
	func_35(essParam0);
	func_36(essParam0);
	func_37(essParam0, 37, true);
	flag = func_38(Global_1360165[essParam0 /*1157*/], 0);
	persChar = func_39(essParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, false);

	if (func_40(essParam0, 64, true))
		func_37(essParam0, 64, true);

	if (bParam3)
	{
		func_37(essParam0, 33, true);
		func_37(essParam0, 34, true);
		func_41(essParam0, 1056964608, -1, 1061158912);
		func_42(essParam0, true, true, false);
	
		if (bParam6)
			func_27(essParam0, 30, true);
	
		if (bParam7)
		{
			func_27(essParam0, 35, true);
		
			if (bParam8)
				func_27(essParam0, 62, true);
		}
	
		if (flag)
		{
			func_43(essParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[essParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_37(essParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
	
		func_27(essParam0, 33, true);
		func_42(essParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[essParam0 /*1157*/].f_133 = iParam4;
			func_28(&(Global_1360165[essParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_44(&(Global_1360165[essParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_27(essParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
			func_45(essParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], false);

	if (func_40(essParam0, 45, true))
		func_37(essParam0, 45, true);

	func_46(essParam0, 16, true);
	func_37(essParam0, 44, true);
	Global_1360165[essParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[essParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_38(func_47(essParam0), 0))
			func_48(0, essParam0, bParam3, 0, bParam2);

	return;
}

BOOL func_16(var uParam0, int iParam1) // Position - 0x6D9 Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x6EA Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x702 Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

void func_19(var uParam0) // Position - 0x715 Hash - 0x96FE407C ^0xFF60D0E2
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
	}

	PED::_RESERVE_AMBIENT_PEDS(2 + 6);
	return;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x733 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_21(var uParam0) // Position - 0x742 Hash - 0x951BA238 ^0xA36BC6D1
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_22))
	{
		pedLocal_22 = ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_2, "CreoleCaptain", false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_22, true, true);
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_24))
	{
		veLocal_24 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_2, "SKIFF", false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_24, true, true);
		VEHICLE::SET_PED_OWNS_VEHICLE(pedLocal_22, veLocal_24);
		ENTITY::FREEZE_ENTITY_POSITION(veLocal_24, false);
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_25))
	{
		obLocal_25 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_2, "p_skiff02x", false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(obLocal_25, true, true);
		OBJECT::_0xDFA1237F5228263F(obLocal_25, pedLocal_22);
		return false;
	}

	return true;
}

BOOL func_22() // Position - 0x7CD Hash - 0x73905C0 ^0xF39FD7A7
{
	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_23))
	{
		STREAMING::REQUEST_MODEL(hLocal_3, false);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_3))
		{
			veLocal_23 = VEHICLE::CREATE_VEHICLE(hLocal_3, uLocal_9, 2.28f, true, true, false, false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_23, true, true);
		}
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_21))
	{
		STREAMING::REQUEST_MODEL(eptLocal_4, false);
	
		if (STREAMING::HAS_MODEL_LOADED(eptLocal_4))
		{
			pedLocal_21 = func_49(eptLocal_4, uLocal_9, 0, true, true, 0, true, true, true, false, false, false, false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_21, true, true);
		}
	
		return false;
	}

	return true;
}

BOOL func_23() // Position - 0x84E Hash - 0xCE26EB3 ^0x80007CB5
{
	if (!func_50(&uLocal_130[0 /*5*/], 650, "MOB4_CIVMAN2", "MOB4_POSTM2", "MOB4_IDLEM2"))
		return false;

	if (!func_50(&uLocal_130[1 /*5*/], 651, "MOB4_CIVMAN3", "MOB4_POSTM3", "MOB4_IDLEM3"))
		return false;

	if (!func_50(&uLocal_130[2 /*5*/], 644, "MOB4_CIVMAN1", "MOB4_POSTM1", "MOB4_IDLEM1"))
		return false;

	if (!func_50(&uLocal_130[3 /*5*/], 646, "MOB4_CIVWOMAN2", "MOB4_POSTW2", "MOB4_IDLEW2"))
		return false;

	if (!func_50(&uLocal_130[4 /*5*/], 647, "MOB4_CIVWOMAN3", "MOB4_POSTW3", "MOB4_IDLEW3"))
		return false;

	if (!func_50(&uLocal_130[5 /*5*/], 656, "MOB4_CIVWOMAN1", "MOB4_POSTW1", "MOB4_IDLEW1"))
		return false;

	return true;
}

BOOL func_24(var uParam0) // Position - 0x905 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return 1;
}

BOOL func_25() // Position - 0x90E Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_26(var uParam0) // Position - 0x91B Hash - 0xA10ED50E ^0xA10ED50E
{
	func_51();
	func_52();
	func_53();
	func_54();
	return func_55();
}

void func_27(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x937 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_56(essParam0))
			return;

	func_57(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_28(var uParam0, BOOL bParam1) // Position - 0x971 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_58(uParam0))
		func_59(uParam0);

	return;
}

void func_29() // Position - 0x991 Hash - 0xFAD9D83A ^0xA8BD556D
{
	int i;

	for (i = 0; i <= 5; i = i + 1)
	{
		if (func_60(uLocal_130[i /*5*/].f_2))
		{
			if (func_61(uLocal_130[i /*5*/].f_2))
			{
				AUDIO::STOP_PED_SPEAKING(uLocal_130[i /*5*/], false);
				func_62(uLocal_130[i /*5*/].f_2, false, true, false, false);
			}
		}
	}

	return;
}

void func_30() // Position - 0x9E4 Hash - 0xC7BE1E64 ^0xC7BE1E64
{
	func_63(&pedLocal_21, true, false, true);
	func_64(&veLocal_23);
	iLocal_161 = 2;
	return;
}

void func_31() // Position - 0x9FE Hash - 0xEC560EB7 ^0xEC560EB7
{
	func_65(obLocal_25, pedLocal_22);
	func_63(&pedLocal_22, true, false, true);
	func_64(&veLocal_24);
	iLocal_162 = 3;
	return;
}

BOOL func_32(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA21 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_56(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

void func_33(eStackSize essParam0, BOOL bParam1) // Position - 0xA4B Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_56(essParam0))
		return;

	if (bParam1)
		if (func_66(&(Global_1360165[essParam0 /*1157*/].f_12), 1))
			func_34(essParam0, 1, false);

	func_34(essParam0, 16, bParam1);
	return;
}

void func_34(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xA8D Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_56(essParam0))
		return;

	func_67(&(Global_1360165[essParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_35(eStackSize essParam0) // Position - 0xAB5 Hash - 0x7895582D ^0x7895582D
{
	func_34(essParam0, 8, false);
	return;
}

void func_36(eStackSize essParam0) // Position - 0xAC6 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_27(essParam0, 36, true);
	return;
}

void func_37(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xAD7 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_56(essParam0))
			return;

	func_57(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_38(Ped pedParam0, int iParam1) // Position - 0xB11 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_68(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_68(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_68(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_68(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_68(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_68(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_68(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_68(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_39(eStackSize essParam0, BOOL bParam1) // Position - 0xC10 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_69(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

BOOL func_40(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xC4F Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_56(essParam0))
			return false;

	func_57(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_41(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0xC8A Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(essParam0))
	{
		ped = func_70(essParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_71(essParam0);
		}
	}

	if (func_40(essParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_70(essParam0), 137, true);

	return;
}

void func_42(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xCDC Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_56(essParam0))
		return;

	if (bParam1)
	{
		func_37(essParam0, 50, true);
		func_37(essParam0, 48, true);
		func_37(essParam0, 49, true);
		func_37(essParam0, 51, true);
		func_37(essParam0, 52, true);
		func_37(essParam0, 54, true);
		func_37(essParam0, 55, true);
	}
	else
	{
		func_27(essParam0, 50, true);
		func_27(essParam0, 48, true);
		func_27(essParam0, 49, true);
		func_27(essParam0, 51, true);
	
		if (bParam3)
			func_27(essParam0, 54, true);
		else
			func_37(essParam0, 54, true);
	
		if (!bParam2)
		{
			func_27(essParam0, 52, true);
		
			if (bParam3)
				func_27(essParam0, 55, true);
		}
		else
		{
			func_37(essParam0, 52, true);
		
			if (!bParam3)
				func_37(essParam0, 55, true);
		}
	}

	return;
}

void func_43(eStackSize essParam0, BOOL bParam1) // Position - 0xDAE Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_56(essParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_70(essParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_70(essParam0), 204, false);

	return;
}

void func_44(var uParam0) // Position - 0xDE5 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_45(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xDFB Hash - 0x6E8FD624 ^0x6E8FD624
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

	if (func_40(essParam0, 32, true))
		if (!bParam2)
			return;

	char = func_39(essParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_70(essParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_72(essParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_27(essParam0, 2, true);
	}
	else
	{
		func_73(essParam0);
		func_27(essParam0, 1, true);
	}

	return;
}

void func_46(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF09 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

Player func_47(eStackSize essParam0) // Position - 0xF45 Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/].f_70))
		Global_1360165[essParam0 /*1157*/].f_70 = 0;

	return Global_1360165[essParam0 /*1157*/].f_70;
}

void func_48(int iParam0, eStackSize essParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0xF85 Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_56(essParam1))
		return;

	player = func_47(essParam1);

	if (func_74(essParam1))
		if (!func_75(essParam1))
			return;

	func_37(essParam1, 39, true);
	func_76(essParam1, 64, false);
	Global_1360165[essParam1 /*1157*/].f_70.f_11 = 0;
	func_76(essParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_76(essParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_27(essParam1, 43, true);
		}
	
		if (bParam4)
			func_77(essParam1, false, true, true, true);
	}

	return;
}

Ped func_49(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x1027 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_78(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_50(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4) // Position - 0x1069 Hash - 0x360A1FC ^0xFA8825AC
{
	if (uParam0->f_1 <= 0)
	{
		if (!func_38(*uParam0, 0))
		{
			*uParam0 = func_79(iParam1, true, false, false, true, true);
			return false;
		}
	
		func_80(&uLocal_26, *uParam0, sParam2, true);
		AUDIO::STOP_PED_SPEAKING(*uParam0, true);
		uParam0->f_2 = iParam1;
		uParam0->f_3 = sParam3;
		uParam0->f_4 = sParam4;
		uParam0->f_1 = 1;
		return false;
	}

	return true;
}

void func_51() // Position - 0x10C7 Hash - 0x8D56C872 ^0x3C966C98
{
	if (func_38(Global_35, 0))
	{
		switch (iLocal_163)
		{
			case 0:
				func_28(&uLocal_127, false);
				iLocal_163 = 1;
				break;
		
			case 1:
				func_81();
			
				if (func_82(&uLocal_127) > 20f || ENTITY::IS_ENTITY_IN_WATER(Global_35) || !func_83(Global_35, 2140.8694f, -649.59155f, 41.34281f, 18f, true, false))
					iLocal_163 = 2;
				break;
		
			case 2:
				break;
		}
	}

	return;
}

void func_52() // Position - 0x114E Hash - 0x6EB05A83 ^0xADE6111
{
	int i;

	for (i = 0; i <= 5; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_130[i /*5*/]))
		{
			switch (uLocal_130[i /*5*/].f_1)
			{
				case 1:
					if (!func_58(&uLocal_124) && !AUDIO::_IS_ANY_CONVERSATION_PLAYING(true) && func_84(uLocal_130[i /*5*/], Global_35, 0.5f) == 0)
					{
						if (func_85(&uLocal_130[i /*5*/], uLocal_130[i /*5*/].f_3))
						{
							TASK::TASK_LOOK_AT_ENTITY(uLocal_130[i /*5*/], Global_35, 10000, 0, 51, 0);
							uLocal_130[i /*5*/].f_1 = 2;
						}
					}
					break;
			
				case 2:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING(uLocal_130[i /*5*/].f_3))
					{
						func_28(&uLocal_124, false);
						fLocal_5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
						func_86(uLocal_130[i /*5*/]);
						uLocal_130[i /*5*/].f_1 = 3;
					}
					break;
			
				case 3:
					if (!func_58(&uLocal_124) && !AUDIO::_IS_ANY_CONVERSATION_PLAYING(true) && func_84(uLocal_130[i /*5*/], Global_35, 0.5f) == 0)
					{
						if (func_85(&uLocal_130[i /*5*/], uLocal_130[i /*5*/].f_4))
						{
							TASK::TASK_LOOK_AT_ENTITY(uLocal_130[i /*5*/], Global_35, 10000, 0, 51, 0);
							uLocal_130[i /*5*/].f_1 = 4;
						}
					}
					break;
			
				case 4:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING(uLocal_130[i /*5*/].f_4))
					{
						func_28(&uLocal_124, false);
						fLocal_5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
						func_86(uLocal_130[i /*5*/]);
						uLocal_130[i /*5*/].f_1 = 5;
					}
					break;
			}
		}
	}

	func_87();
	return;
}

void func_53() // Position - 0x12D7 Hash - 0xB76E18F2 ^0xB76E18F2
{
	switch (iLocal_161)
	{
		case 0:
			if (!func_88(pedLocal_21, veLocal_23, true))
				func_89(&pedLocal_21, &veLocal_23, -1, 1);
			else if (!func_83(veLocal_23, uLocal_12, 5f, true, true))
				func_90(veLocal_23, uLocal_12, 2.28f, 2, 1073741824);
			else if (!func_91(pedLocal_21, 1199744105))
				TASK::TASK_VEHICLE_DRIVE_TO_DESTINATION(pedLocal_21, veLocal_23, uLocal_15, 5f, 524419, 6, 5f, 5f, false);
			else
				iLocal_161 = 1;
			break;
	
		case 1:
			if (!func_91(pedLocal_21, 1199744105))
				func_30();
			break;
	
		case 2:
			break;
	}

	return;
}

void func_54() // Position - 0x1383 Hash - 0xDF927CE4 ^0xFD3DCA3D
{
	switch (iLocal_162)
	{
		case 0:
			if (!func_91(pedLocal_22, 1199744105))
				TASK::TASK_VEHICLE_DRIVE_TO_DESTINATION(pedLocal_22, veLocal_24, uLocal_18, 1.5f, 524295, 6, 5f, 5f, false);
			else
				iLocal_162 = 1;
			break;
	
		case 1:
			if (!func_91(pedLocal_22, 1199744105))
				iLocal_162 = 2;
			break;
	
		case 2:
			if (func_88(pedLocal_22, veLocal_24, false))
				if (!func_91(pedLocal_22, SCRIPT_TASK_LEAVE_VEHICLE))
					TASK::TASK_LEAVE_VEHICLE(pedLocal_22, veLocal_24, 0, 0);
			else
				func_31();
			break;
	
		case 3:
			break;
	}

	return;
}

BOOL func_55() // Position - 0x1423 Hash - 0xA615C087 ^0xE65F1B8D
{
	if (!func_83(Global_35, uLocal_6, 75f, true, true) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
		return 1;

	return 0;
}

BOOL func_56(eStackSize essParam0) // Position - 0x1456 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

int func_57(int iParam0, var uParam1, var uParam2) // Position - 0x1462 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_58(var uParam0) // Position - 0x147F Hash - 0x5001E582 ^0x5001E582
{
	return func_92(*uParam0, 1);
}

void func_59(var uParam0) // Position - 0x148F Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_93(uParam0, 0f);
	return;
}

BOOL func_60(int iParam0) // Position - 0x149E Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

BOOL func_61(int iParam0) // Position - 0x14B5 Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_60(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_62(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x14DA Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_60(iParam0))
		return;

	if (!func_94(iParam0, 1))
		return;

	if (!func_94(iParam0, 2))
		return;

	if (!bParam4 && !func_61(iParam0) && func_95(iParam0))
		return;

	func_96(iParam0, 1);
	func_97(iParam0);

	if (func_99(func_98(iParam0)))
	{
		persChar = func_100(iParam0);
	
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
	
		func_96(iParam0, 16);
	}

	if (func_94(iParam0, 128) && !bParam3)
		func_101(iParam0, false);

	return;
}

void func_63(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x15C6 Hash - 0xEB76F1D1 ^0xF1B7E213
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

void func_64(Vehicle* pveParam0) // Position - 0x1634 Hash - 0x93C0E130 ^0xADF3BC31
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pveParam0))
		return;

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*pveParam0, true, false);

	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, false))
		return;

	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
	return;
}

int func_65(Object obParam0, Ped pedParam1) // Position - 0x1673 Hash - 0xE0C3466F ^0xAFB3A155
{
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
		return 0;

	if (!PED::IS_PED_INJURED(pedParam1) && ENTITY::DOES_ENTITY_EXIST(obParam0))
	{
		ITEMSET::ADD_TO_ITEMSET(obParam0, Global_1396084);
		DECORATOR::DECOR_SET_BOOL(obParam0, "pedRoam_bInPedRoam", true);
		func_102(obParam0, pedParam1);
		return 1;
	}

	return 0;
}

BOOL func_66(int iParam0, int iParam1) // Position - 0x16C4 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_67(int iParam0, int iParam1, BOOL bParam2) // Position - 0x16D4 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_68(int iParam0, int iParam1) // Position - 0x16FA Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_69(eStackSize essParam0) // Position - 0x1709 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_56(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_103(essParam0);
	
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

Ped func_70(eStackSize essParam0) // Position - 0x1771 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_56(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

void func_71(eStackSize essParam0) // Position - 0x17AB Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(essParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_70(essParam0)))
		{
			func_104(essParam0, 67108864, true);
			func_37(essParam0, 19, true);
		}
	}

	return;
}

float func_72(eStackSize essParam0) // Position - 0x17DE Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_56(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_73(eStackSize essParam0) // Position - 0x17FF Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_70(essParam0);
	persChar = func_39(essParam0, false);
	func_105(essParam0, ped);

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

BOOL func_74(eStackSize essParam0) // Position - 0x1859 Hash - 0x6410553A ^0x46627D03
{
	if (!func_56(essParam0))
		return false;

	if (Global_1360165[essParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[essParam0 /*1157*/].f_70.f_11 == Global_1360165[essParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_75(eStackSize essParam0) // Position - 0x18A5 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_56(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_76(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x18CD Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_56(essParam0))
		return;

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 - Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_77(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1932 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	Hash hash;
	PersChar persChar;

	if (!func_56(essParam0))
		return 0;

	mount = func_47(essParam0);

	if (func_38(mount, 0))
	{
		if (func_38(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_74(essParam0) || func_75(essParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_106(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				hash = func_107(essParam0, true);
			
				if (hash != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_108(essParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_109(essParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_109(essParam0, false));
					func_110(essParam0);
				}
			}
			else
			{
				if (func_32(essParam0, 32768, true))
				{
					persChar = func_109(essParam0, false);
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
		if (func_38(Global_1360165[essParam0 /*1157*/].f_124, 0))
		{
			if (func_32(essParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
			
				func_108(essParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_109(essParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_109(essParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				func_108(essParam0);
				PED::DELETE_PED(&(Global_1360165[essParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;
	func_111(essParam0, 0);
	return 1;
}

void func_78(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1AE3 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_112(eptParam1))
		{
			func_113(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_114(pedParam0, 0, true);
	
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
			func_115(pedParam0, false);
			flag = true;
		}
	
		func_116(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

Ped func_79(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1BC4 Hash - 0x816A3A36 ^0x24211010
{
	Ped ped;
	PersChar persChar;

	if (!func_117(iParam0, true))
		return 0;

	if (func_99(func_98(iParam0)))
	{
		persChar = func_100(iParam0);
	
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

	if (bParam4 && !func_61(iParam0) && !ENTITY::IS_ENTITY_DEAD(ped))
	{
		PED::SET_PED_CONFIG_FLAG(ped, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
	}

	func_118(iParam0, true);
	func_119(iParam0);

	if (bParam3)
		func_118(iParam0, 16);

	!bParam2;
	return ped;
}

void func_80(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x1C81 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_120(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

void func_81() // Position - 0x1CDE Hash - 0x9D0B3705 ^0xCC4D8C20
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
	return;
}

float func_82(var uParam0) // Position - 0x1D1D Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_58(uParam0))
		return 0f;

	if (func_121(uParam0))
		return uParam0->f_2;

	return func_122() - uParam0->f_1;
}

BOOL func_83(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1D4F Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), fParam1) <= fParam4 * fParam4)
			return true;
	else if (func_123(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), fParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

int func_84(Entity eParam0, Ped pedParam1, float fParam2) // Position - 0x1DAA Hash - 0x175892DC ^0xF10F49E5
{
	var entityCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, false) };
	return func_124(eParam0, entityCoords, fParam2);
}

BOOL func_85(var uParam0, char* sParam1) // Position - 0x1DCA Hash - 0x727080DA ^0x58FA342F
{
	if (func_83(*uParam0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 6.5f, true, false) && func_125(*uParam0, 0.25f, 0.75f, 0.25f, 0.75f))
		if (func_126(&uLocal_26, sParam1, *uParam0, Global_35, 0, false, 1, true))
			return true;

	return false;
}

void func_86(Ped pedParam0) // Position - 0x1E26 Hash - 0x78302BA0 ^0x4D457AB0
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		TASK::TASK_CLEAR_LOOK_AT(pedParam0);

	return;
}

void func_87() // Position - 0x1E3E Hash - 0xC1DB041A ^0xC1DB041A
{
	if (func_58(&uLocal_124))
		if (func_82(&uLocal_124) > fLocal_5)
			func_44(&uLocal_124);

	return;
}

BOOL func_88(Ped pedParam0, Vehicle veParam1, BOOL bParam2) // Position - 0x1E61 Hash - 0xF4F2DC7C ^0xA69B6C83
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam1))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false, false))
			if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
				return PED::IS_PED_IN_VEHICLE(pedParam0, veParam1, bParam2);

	return false;
}

int func_89(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x1E95 Hash - 0xA1BB363F ^0x58A8A1AD
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		return 0;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false, false))
		return 0;

	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iParam2) != *uParam0)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam1, iParam2))
			if (iParam3 && func_127(*uParam1))
				iParam2 = func_128(*uParam1);
			else
				return 0;
	
		if (PED::IS_PED_ON_MOUNT(*uParam0))
			PED::_REMOVE_PED_FROM_MOUNT(*uParam0, true, false);
	
		PED::SET_PED_INTO_VEHICLE(*uParam0, *uParam1, iParam2);
	}

	return 1;
}

void func_90(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6) // Position - 0x1F19 Hash - 0xF46E0F16 ^0xED4BA72A
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

	pedParam0 == func_129(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_130(pedParam0))
		if (func_131(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
			PHYSICS::_UNHITCH_HORSE(pedParam0);

	if (func_68(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_90(vehiclePedIsIn, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_90(mount, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_68(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(pedParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), false, true);

	if (func_68(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pedParam0, false);
		}
	}
	else if (func_68(iParam5, 129))
	{
		if (func_68(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedParam0, vParam1, func_68(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(pedParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_68(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), pedCrouchMovement, 0, false);
	
		if (func_130(pedParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_68(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0) == Global_35 && !func_68(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

BOOL func_91(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x219B Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_92(int iParam0, int iParam1) // Position - 0x21C4 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_93(var uParam0, float fParam1) // Position - 0x21D3 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_122() - fParam1;
	func_132(uParam0, 1);
	func_133(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_94(int iParam0, BOOL bParam1) // Position - 0x21F9 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_134() != -1)
		return false;

	if (!func_60(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_95(int iParam0) // Position - 0x2227 Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_60(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_96(int iParam0, BOOL bParam1) // Position - 0x224B Hash - 0x452DF11A ^0x452DF11A
{
	if (func_134() != -1)
		return;

	if (!func_60(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

void func_97(int iParam0) // Position - 0x2284 Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_60(iParam0))
		return;

	ped = func_135(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

Hash func_98(int iParam0) // Position - 0x22C8 Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_60(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

BOOL func_99(Hash hParam0) // Position - 0x22E6 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

PersChar func_100(int iParam0) // Position - 0x22F2 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_60(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_101(int iParam0, BOOL bParam1) // Position - 0x2312 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_60(iParam0))
		return 0;

	if (!func_94(iParam0, 2))
		return 0;

	if (func_98(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_100(iParam0)))
		return 1;

	if (func_94(iParam0, true) && !bParam1)
	{
		func_118(iParam0, 128);
		return 1;
	}

	func_96(iParam0, 129);
	func_97(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_100(iParam0));
	func_136(iParam0, 0);
	return 1;
}

void func_102(Object obParam0, Ped pedParam1) // Position - 0x2395 Hash - 0x6CFF5C2 ^0x67DB9C45
{
	DECORATOR::DECOR_SET_INT(obParam0, "pedRoam_owner", pedParam1);
	return;
}

Hash func_103(int iParam0) // Position - 0x23AA Hash - 0xBA965109 ^0xCB1D208B
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

void func_104(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2586 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

void func_105(eStackSize essParam0, Ped pedParam1) // Position - 0x25B7 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_137(pedParam1);

	return;
}

float func_106(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x25D1 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_123(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_107(eStackSize essParam0, BOOL bParam1) // Position - 0x2628 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_56(essParam0))
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
		Global_1360165[essParam0 /*1157*/].f_127 = func_138(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_108(eStackSize essParam0) // Position - 0x276D Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_47(essParam0);

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

PersChar func_109(eStackSize essParam0, BOOL bParam1) // Position - 0x27E3 Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_56(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[essParam0 /*1157*/].f_126 = func_139(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_110(eStackSize essParam0) // Position - 0x282F Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_56(essParam0))
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

void func_111(eStackSize essParam0, int iParam1) // Position - 0x2882 Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_56(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

BOOL func_112(ePedType eptParam0) // Position - 0x28A6 Hash - 0x5000025C ^0x5000025C
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

void func_113(Ped pedParam0, Hash hParam1) // Position - 0x2CF9 Hash - 0xEA1C858E ^0xD39395C1
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_140(pedParam0, hParam1))
		{
			if (func_141(pedParam0, hParam1))
			{
				if (func_142(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_143(pedParam0);
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

void func_114(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x2DA3 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_115(Ped pedParam0, BOOL bParam1) // Position - 0x2DD3 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_116(Ped pedParam0, int iParam1) // Position - 0x2E18 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

BOOL func_117(int iParam0, BOOL bParam1) // Position - 0x2E3F Hash - 0x5C4302E7 ^0x5C4302E7
{
	if (!func_60(iParam0))
		return false;

	if (func_94(iParam0, true) && !func_61(iParam0) && func_95(iParam0))
		return false;

	if (!func_94(iParam0, 2))
		return false;

	if (!bParam1)
		if (!func_144(iParam0, false))
			return false;

	return true;
}

void func_118(int iParam0, BOOL bParam1) // Position - 0x2E9F Hash - 0x61515A20 ^0x61515A20
{
	if (func_134() != -1)
		return;

	if (!func_60(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

void func_119(int iParam0) // Position - 0x2ED0 Hash - 0x5A948764 ^0xFC1342AE
{
	if (!func_60(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

BOOL func_120(var uParam0, Entity eParam1, char* sParam2) // Position - 0x2EF3 Hash - 0xFB1C2C0E ^0x6794528D
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i < uParam0->f_97 && !flag; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(uParam0->[i /*4*/].f_1)))
		{
			uParam0->[i /*4*/] = eParam1;
			flag = true;
		}
	}

	if (!flag)
	{
		if (uParam0->f_97 < 24)
		{
			uParam0->[uParam0->f_97 /*4*/] = eParam1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[uParam0->f_97 /*4*/].f_1), sParam2, 24);
			uParam0->f_97 = uParam0->f_97 + 1;
			flag = true;
		}
	}

	return flag;
}

BOOL func_121(var uParam0) // Position - 0x2F71 Hash - 0x39705408 ^0x39705408
{
	return func_92(*uParam0, 2);
}

float func_122() // Position - 0x2F81 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

float func_123(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x2FB3 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_124(Entity eParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x2FD1 Hash - 0x2AE5C8B1 ^0x9995651A
{
	var entityCoords;
	var entityForwardVector;
	var unk5;
	float value;

	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && !ENTITY::IS_ENTITY_DEAD(eParam0))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam0, false, false) };
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(eParam0) };
	}

	unk5 = { uParam1 - entityCoords };
	value = func_145(entityForwardVector, unk5);

	if (MISC::ABSF(value) > fParam4)
		if (value > 0f)
			return 0;
		else
			return 1;

	if (func_146(entityCoords, entityCoords + entityForwardVector, uParam1))
		return 3;

	return 2;
}

BOOL func_125(Entity eParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x3060 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(eParam0))
		if (func_147(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return 1;

	return 0;
}

BOOL func_126(var uParam0, char* sParam1, Ped pedParam2, Ped pedParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x308E Hash - 0x825CDE54 ^0x3C4EDF1C
{
	var unk;
	BOOL flag;

	pedParam3 = pedParam3;
	iParam4 = iParam4;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam2) && func_148(pedParam2, pedParam3, true, true) < 70f || bParam5)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 24);
	
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(pedParam2, pedParam3, 7000, 0, 51, 0);
		
			if (func_148(pedParam2, pedParam3, true, true) < 25f)
				TASK::TASK_LOOK_AT_ENTITY(pedParam3, pedParam2, 7000, 0, 51, 0);
		}
	
		if (iParam4 > 0)
			flag = true;
	
		func_59(&uLocal_0);
	
		if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam1))
			if (func_149(sParam1))
				return true;
		else if (func_150(uParam0, unk, flag, iParam4, false, false))
			return true;
	}

	return false;
}

int func_127(Vehicle veParam0) // Position - 0x3141 Hash - 0x8A710156 ^0x76A0A0D1
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, -1))
		return 1;

	if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 0))
		return 1;

	if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 1))
		return 1;

	if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 2))
		return 1;

	return 0;
}

int func_128(Vehicle veParam0) // Position - 0x3182 Hash - 0x81062B1E ^0x4EC944A0
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, -1))
		return -1;

	if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 0))
		return 0;

	if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 1))
		return 1;

	if (VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, 2))
		return 2;

	return -2;
}

Vehicle func_129(Ped pedParam0) // Position - 0x31C5 Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_130(Ped pedParam0) // Position - 0x31CF Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_131(Ped pedParam0) // Position - 0x3201 Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

void func_132(var uParam0, int iParam1) // Position - 0x3243 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_133(var uParam0, int iParam1) // Position - 0x3254 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_134() // Position - 0x3269 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

Ped func_135(int iParam0) // Position - 0x3277 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_100(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

void func_136(int iParam0, int iParam1) // Position - 0x32A5 Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_60(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
	return;
}

void func_137(Ped pedParam0) // Position - 0x32C6 Hash - 0xE7050FE7 ^0xBD36F84F
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

Hash func_138(eStackSize essParam0) // Position - 0x332E Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_56(essParam0))
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

	if (!func_56(essParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = essParam0;
			Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_139(eStackSize essParam0) // Position - 0x340F Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_56(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_107(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

BOOL func_140(Ped pedParam0, Hash hParam1) // Position - 0x34AB Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_141(Ped pedParam0, Hash hParam1) // Position - 0x34D9 Hash - 0xA54F3032 ^0xF7CEC717
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

BOOL func_142(Ped pedParam0, Hash hParam1) // Position - 0x352A Hash - 0xA54F3032 ^0xF7CEC717
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_140(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_143(Ped pedParam0) // Position - 0x359C Hash - 0x446F1BDD ^0x723B657
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

BOOL func_144(int iParam0, BOOL bParam1) // Position - 0x35BA Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_134() != -1)
		return false;

	if (!func_60(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_100(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_135(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_100(iParam0));
}

float func_145(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x3612 Hash - 0x4C6A3038 ^0xA855205
{
	float num;

	fParam0.f_2 = 0f;
	fParam3.f_2 = 0f;
	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		fParam0 = fParam0 / num;
		fParam0.f_1 = fParam0.f_1 / num;
	}

	num = BUILTIN::VMAG(fParam3);

	if (num != 0f)
	{
		fParam3 = fParam3 / num;
		fParam3.f_1 = fParam3.f_1 / num;
	}

	return (fParam0 * fParam3) + (fParam0.f_1 * fParam3.f_1);
}

BOOL func_146(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0x3679 Hash - 0x86FD6754 ^0x7FA3CE23
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

BOOL func_147(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x36A2 Hash - 0xBF2250D5 ^0x34592C3E
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

float func_148(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x36EC Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_149(char* sParam0) // Position - 0x3734 Hash - 0xBE6F5C67 ^0x676667C3
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}

	return false;
}

BOOL func_150(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x3750 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_151(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

void func_151(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x37AA Hash - 0xFDACD718 ^0x658C9335
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

