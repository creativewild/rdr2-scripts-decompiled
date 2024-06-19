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
	Ped pedLocal_14 = 0;
	Ped pedLocal_15 = 0;
	Ped pedLocal_16 = 0;
	Ped pedLocal_17 = 0;
	Blip blLocal_18 = 0;
	Volume volLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	const char* sLocal_27 = 0;
	const char* sLocal_28 = 0;
	const char* sLocal_29 = 0;
	BOOL bLocal_30 = 0;
	BOOL bLocal_31 = 0;
	BOOL bLocal_32 = 0;
	BOOL bLocal_33 = 0;
	BOOL bLocal_34 = 0;
	BOOL bLocal_35 = 0;
	BOOL bLocal_36 = 0;
	BOOL bLocal_37 = 0;
	BOOL bLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 24;
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
	var uLocal_130 = 0;
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
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	BOOL bLocal_166 = 0;
	int iLocal_167 = 0;
	var uLocal_168 = 1;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 1;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
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

void main() // Position - 0x0 Hash - 0x47DBF3A1 ^0xBD2CBBDA
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_26 = 1000000f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1(&uLocal_174);

	func_2(&uLocal_174, &uScriptParam_0);

	while (!func_3(&uLocal_174))
	{
		func_4(&uLocal_174);
	
		switch (func_5(uLocal_174))
		{
			case 0:
				if (func_6(&uLocal_174))
					func_7(&uLocal_174, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_174))
					func_7(&uLocal_174, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_174))
					func_7(&uLocal_174, 3);
				break;
		
			case 3:
				func_1(&uLocal_174);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_174);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0xB8 Hash - 0xCA2A1420 ^0x1B8E2ABF
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

BOOL func_3(var uParam0) // Position - 0x19D Hash - 0xE6F09C07 ^0x349208FC
{
	if (func_20(Global_1935630, 16384))
		return true;

	if (!func_16(uParam0, 8))
		if (func_20(Global_1935630, 32768))
			return true;

	return false;
}

void func_4(var uParam0) // Position - 0x1D7 Hash - 0xCC0866FC ^0x1CE74C37
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

int func_5(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x25A Hash - 0xBE425958 ^0xBE425958
{
	return uParam0;
}

BOOL func_6(var uParam0) // Position - 0x264 Hash - 0x31FFA912 ^0xC6A0CBDE
{
	if (!HUD::TEXT_BLOCK_IS_LOADED(sLocal_28))
		return false;

	if (!HUD::TEXT_BLOCK_IS_LOADED(sLocal_29))
		return false;

	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_27))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("u_m_m_valtownfolk_01")))
		return false;

	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
		return false;

	func_21();

	if (func_16(uParam0, 1))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
		{
			uLocal_168[0 /*5*/] = uParam0->f_2;
			uLocal_168[0 /*5*/].f_1 = 1;
			ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		}
	}
	else if (func_22(0, 0, 0))
	{
		return true;
	}
	else
	{
		return false;
	}

	return true;
}

void func_7(var uParam0, int iParam1) // Position - 0x2FE Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_8(var uParam0) // Position - 0x30B Hash - 0xE70F011 ^0xCE61FB0
{
	if (!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
		return false;

	return func_23(uParam0);
}

BOOL func_9(var uParam0) // Position - 0x343 Hash - 0xEDB66132 ^0xEDB66132
{
	BOOL num;

	num = 1;

	if (!func_24())
		num = 0;

	if (!func_25(uParam0))
		num = 0;

	return num;
}

void func_10() // Position - 0x368 Hash - 0xF2ADC204 ^0xF23F9A2E
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

void func_11(var uParam0) // Position - 0x3AB Hash - 0xACD683B3 ^0x8DF1B1E0
{
	int i;

	func_28(&blLocal_18);
	STREAMING::REMOVE_ANIM_DICT(sLocal_27);
	HUD::_TEXT_BLOCK_DELETE(sLocal_28);
	HUD::_TEXT_BLOCK_DELETE(sLocal_29);
	func_29(&pedLocal_14, true, false, true);
	func_29(&pedLocal_15, true, false, true);
	func_29(&pedLocal_16, true, false, true);
	func_29(&pedLocal_17, true, false, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_m_m_valtownfolk_01"));
	i = 0;

	for (i = 0; i < 1; i = i + 1)
	{
		func_30(i);
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_19))
	{
		func_31(volLocal_19);
		func_32(volLocal_19);
	}

	return;
}

BOOL func_12(eStackSize essParam0) // Position - 0x428 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

BOOL func_13(eStackSize essParam0) // Position - 0x447 Hash - 0xDA629583 ^0xDA629583
{
	return func_33(essParam0, 16, true);
}

BOOL func_14(eStackSize essParam0) // Position - 0x458 Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_12(essParam0))
		return false;

	if (!func_13(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x48C Hash - 0xA4706F79 ^0xAF27D1D3
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

	func_34(essParam0, false);
	func_35(essParam0, 4, false);
	func_36(essParam0);
	func_37(essParam0);
	func_38(essParam0, 37, true);
	flag = func_39(Global_1360165[essParam0 /*1157*/], 0);
	persChar = func_40(essParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, false);

	if (func_41(essParam0, 64, true))
		func_38(essParam0, 64, true);

	if (bParam3)
	{
		func_38(essParam0, 33, true);
		func_38(essParam0, 34, true);
		func_42(essParam0, 1056964608, -1, 1061158912);
		func_43(essParam0, true, true, false);
	
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
			func_44(essParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[essParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_38(essParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
	
		func_26(essParam0, 33, true);
		func_43(essParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[essParam0 /*1157*/].f_133 = iParam4;
			func_27(&(Global_1360165[essParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_45(&(Global_1360165[essParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_26(essParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
			func_46(essParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], false);

	if (func_41(essParam0, 45, true))
		func_38(essParam0, 45, true);

	func_47(essParam0, 16, true);
	func_38(essParam0, 44, true);
	Global_1360165[essParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[essParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_39(func_48(essParam0), 0))
			func_49(0, essParam0, bParam3, 0, bParam2);

	return;
}

BOOL func_16(var uParam0, int iParam1) // Position - 0x741 Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x752 Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x76A Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

int func_19(var uParam0) // Position - 0x77D Hash - 0x681E373A ^0x848A7854
{
	Vector3 vector;
	float scaleX;

	iLocal_20 = 4;
	uLocal_21 = { -324.32f, 739.0914f, 116.5348f };
	fLocal_24 = 121.4624f;
	sLocal_27 = "AI_GESTURES@GEN_MALE@STANDING@SPEAKER";
	sLocal_28 = "MUD3AUD";
	sLocal_29 = "MUD3";
	HUD::TEXT_BLOCK_REQUEST(sLocal_28);
	HUD::TEXT_BLOCK_REQUEST(sLocal_29);
	STREAMING::REQUEST_ANIM_DICT(sLocal_27);
	STREAMING::REQUEST_MODEL(joaat("u_m_m_valtownfolk_01"), false);

	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() <= iLocal_20)
		PED::_RESERVE_AMBIENT_PEDS(PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() + iLocal_20);

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_19))
	{
		vector = { -347.47f, 740.87f, 116.45f };
		scaleX = 21f;
		volLocal_19 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vector, 0f, 0f, 0f, scaleX, scaleX, scaleX, "Mudtown3_outro_res");
		func_50(volLocal_19, "Mudtown3_outro", false, 0, 0, false, -1082130432);
	}

	return 1;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x830 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_21() // Position - 0x83F Hash - 0x5077B791 ^0x4CE32014
{
	Entity entity;

	if (bLocal_30)
		return;

	entity = func_51(joaat("cs_blwwitness"), "MUD3_JIMMY", false);

	if (ENTITY::DOES_ENTITY_EXIST(entity))
	{
		if (ENTITY::IS_ENTITY_A_PED(entity))
		{
			pedLocal_16 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);
		
			if (!func_52(pedLocal_16, false))
			{
				func_53(pedLocal_16, true);
				func_54(&pedLocal_16);
				AUDIO::STOP_PED_SPEAKING(pedLocal_16, true);
				func_55(&uLocal_42, pedLocal_16, "MUD3_TheMan", false);
			}
		}
	}

	entity = func_51(joaat("a_c_horse_morgan_flaxenchestnut"), "MUD3_JIMMY_HORSE", false);

	if (ENTITY::DOES_ENTITY_EXIST(entity))
		if (ENTITY::IS_ENTITY_A_PED(entity))
			pedLocal_17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);

	entity = func_51(joaat("a_c_horse_americanstandardbred_buckskin"), "MUD3_STOLEN_HORSE", false);

	if (ENTITY::DOES_ENTITY_EXIST(entity))
	{
		if (ENTITY::IS_ENTITY_A_PED(entity))
		{
			pedLocal_15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_15, true, true);
			func_56();
		}
	}

	bLocal_30 = true;
	return;
}

BOOL func_22(int iParam0, int iParam1, int iParam2) // Position - 0x904 Hash - 0x127C726D ^0x1D3F39DE
{
	char* playbackListName;
	char* animDict;

	playbackListName = func_57(iParam1);
	animDict = func_58(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(animDict))
		return false;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_168[iParam0 /*5*/]))
	{
		uLocal_168[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(animDict, iParam2, playbackListName, false, true);
		uLocal_168[iParam0 /*5*/].f_4 = iParam1;
		return false;
	}

	if (!uLocal_168[iParam0 /*5*/].f_1)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uLocal_168[iParam0 /*5*/]);
		uLocal_168[iParam0 /*5*/].f_1 = 1;
		return false;
	}

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_168[iParam0 /*5*/], true, false))
		return false;

	return true;
}

BOOL func_23(var uParam0) // Position - 0x98F Hash - 0xD0CB6810 ^0x6264571A
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_14))
		pedLocal_14 = func_59(joaat("u_m_m_valtownfolk_01"), uLocal_21, fLocal_24, true, true, 0, true, true, true, false, false, false, false);

	if (func_39(pedLocal_14, 0))
	{
		TASK::TASK_START_SCENARIO_IN_PLACE_HASH(pedLocal_14, joaat("world_human_waiting_impatient"), 0, false, 0, -1082130432, false);
		func_55(&uLocal_42, pedLocal_14, "MUD3_HORSE_OWNER", false);
		func_55(&uLocal_42, Global_35, "ARTHUR", false);
		func_60(&uLocal_140);
		fLocal_25 = BUILTIN::VDIST(Global_36, uLocal_21);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_14, BF_AlwaysFlee, true);
		AUDIO::STOP_PED_SPEAKING(pedLocal_14, true);
		func_54(&pedLocal_14);
		return 1;
	}

	return 0;
}

BOOL func_24() // Position - 0xA23 Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_25(var uParam0) // Position - 0xA30 Hash - 0xB9DCD152 ^0xB9DCD152
{
	func_61();
	func_62();
	func_63();

	if (func_64())
		return true;

	if (func_65())
		return true;

	return false;
}

void func_26(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xA5B Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_66(essParam0))
			return;

	func_67(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_27(var uParam0, BOOL bParam1) // Position - 0xA95 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_68(uParam0))
		func_60(uParam0);

	return;
}

void func_28(Blip* pblParam0) // Position - 0xAB5 Hash - 0xB0965077 ^0xCF35C455
{
	if (MAP::DOES_BLIP_EXIST(*pblParam0))
		MAP::REMOVE_BLIP(pblParam0);

	return;
}

void func_29(Ped* ppedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xACD Hash - 0xEB76F1D1 ^0xF1B7E213
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

void func_30(int iParam0) // Position - 0xB3B Hash - 0x9B01A2EA ^0xE08F2189
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_168[iParam0 /*5*/]))
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uLocal_168[iParam0 /*5*/]))
			ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_168[iParam0 /*5*/]);

	return;
}

void func_31(Volume volParam0) // Position - 0xB67 Hash - 0x4A7DD833 ^0xF771448B
{
	var volumeCoords;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	func_69(volumeCoords, 0);
	return;
}

void func_32(Volume volParam0) // Position - 0xB8F Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_33(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xBA6 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_66(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

void func_34(eStackSize essParam0, BOOL bParam1) // Position - 0xBD0 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_66(essParam0))
		return;

	if (bParam1)
		if (func_70(&(Global_1360165[essParam0 /*1157*/].f_12), 1))
			func_35(essParam0, 1, false);

	func_35(essParam0, 16, bParam1);
	return;
}

void func_35(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xC12 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_66(essParam0))
		return;

	func_71(&(Global_1360165[essParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_36(eStackSize essParam0) // Position - 0xC3A Hash - 0x7895582D ^0x7895582D
{
	func_35(essParam0, 8, false);
	return;
}

void func_37(eStackSize essParam0) // Position - 0xC4B Hash - 0x8577BCFD ^0x8577BCFD
{
	func_26(essParam0, 36, true);
	return;
}

void func_38(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xC5C Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_66(essParam0))
			return;

	func_67(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_39(Ped pedParam0, int iParam1) // Position - 0xC96 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_72(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_72(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_72(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_72(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_72(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_72(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_72(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_72(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_40(eStackSize essParam0, BOOL bParam1) // Position - 0xD95 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_73(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

BOOL func_41(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xDD4 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_66(essParam0))
			return false;

	func_67(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_42(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0xE0F Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(essParam0))
	{
		ped = func_74(essParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_75(essParam0);
		}
	}

	if (func_41(essParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_74(essParam0), 137, true);

	return;
}

void func_43(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE61 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_66(essParam0))
		return;

	if (bParam1)
	{
		func_38(essParam0, 50, true);
		func_38(essParam0, 48, true);
		func_38(essParam0, 49, true);
		func_38(essParam0, 51, true);
		func_38(essParam0, 52, true);
		func_38(essParam0, 54, true);
		func_38(essParam0, 55, true);
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
			func_38(essParam0, 54, true);
	
		if (!bParam2)
		{
			func_26(essParam0, 52, true);
		
			if (bParam3)
				func_26(essParam0, 55, true);
		}
		else
		{
			func_38(essParam0, 52, true);
		
			if (!bParam3)
				func_38(essParam0, 55, true);
		}
	}

	return;
}

void func_44(eStackSize essParam0, BOOL bParam1) // Position - 0xF33 Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_66(essParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_74(essParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_74(essParam0), 204, false);

	return;
}

void func_45(var uParam0) // Position - 0xF6A Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_46(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xF80 Hash - 0x6E8FD624 ^0x6E8FD624
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

	if (func_41(essParam0, 32, true))
		if (!bParam2)
			return;

	char = func_40(essParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_74(essParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_76(essParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_77(essParam0);
		func_26(essParam0, 1, true);
	}

	return;
}

void func_47(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x108E Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

Player func_48(eStackSize essParam0) // Position - 0x10CA Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/].f_70))
		Global_1360165[essParam0 /*1157*/].f_70 = 0;

	return Global_1360165[essParam0 /*1157*/].f_70;
}

void func_49(int iParam0, eStackSize essParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x110A Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_66(essParam1))
		return;

	player = func_48(essParam1);

	if (func_78(essParam1))
		if (!func_79(essParam1))
			return;

	func_38(essParam1, 39, true);
	func_80(essParam1, 64, false);
	Global_1360165[essParam1 /*1157*/].f_70.f_11 = 0;
	func_80(essParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_80(essParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_26(essParam1, 43, true);
		}
	
		if (bParam4)
			func_81(essParam1, false, true, true, true);
	}

	return;
}

Volume func_50(Volume volParam0, char* sParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x11AC Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_82(volumeCoords, volumeScale, sParam1, bParam2, eParam3, iParam4, bParam5, iParam6);
	return volume;
}

Entity func_51(Hash hParam0, char* sParam1, BOOL bParam2) // Position - 0x11F0 Hash - 0x8B0838B8 ^0x46C706A4
{
	int i;
	Entity entityFromItem;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
		return 0;

	for (i = 0; i < ITEMSET::GET_ITEMSET_SIZE(Global_43616); i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, Global_43616));
	
		if (ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
			if (!DECORATOR::DECOR_EXIST_ON(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, Global_43616), func_83()) && ENTITY::GET_ENTITY_MODEL(entityFromItem) == hParam0)
			{
				if (ENTITY::IS_ENTITY_A_PED(entityFromItem))
				{
					if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), sParam1))
					{
					}
					else
					{
						if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entityFromItem))
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entityFromItem, true, true);
					
						if (bParam2)
							ITEMSET::REMOVE_FROM_ITEMSET(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, Global_43616), Global_43616);
					
						return entityFromItem;
					}
				}
			
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entityFromItem))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entityFromItem, true, true);
			
				if (bParam2)
					ITEMSET::REMOVE_FROM_ITEMSET(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, Global_43616), Global_43616);
			
				return entityFromItem;
			}
		}
	}

	return 0;
}

BOOL func_52(Ped pedParam0, BOOL bParam1) // Position - 0x12A3 Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

void func_53(Ped pedParam0, BOOL bParam1) // Position - 0x12D0 Hash - 0x5C2948FB ^0x7A2CD5D4
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (bParam1)
			PED::SET_PED_CONFIG_FLAG(pedParam0, 263, !bParam1);
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 488, bParam1);
	}

	return;
}

void func_54(var uParam0) // Position - 0x1308 Hash - 0x20296A37 ^0xD312A317
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return;

	func_84(uParam0, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, &func_3, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
	return;
}

void func_55(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x1346 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_85(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

void func_56() // Position - 0x13A3 Hash - 0xEE821B62 ^0xDD1EF190
{
	BOOL flag;

	func_86(pedLocal_15);
	flag = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(PLAYER::PLAYER_ID(), pedLocal_15);
	func_87(pedLocal_15, false);
	return;
}

char* func_57(int iParam0) // Position - 0x13C4 Hash - 0x3A097C03 ^0x3A097C03
{
	switch (iParam0)
	{
		case 0:
			return "pl_leadout";
	
		default:
		
	}

	return "";
}

char* func_58(int iParam0) // Position - 0x13E3 Hash - 0x6708F998 ^0x6708F998
{
	switch (iParam0)
	{
		case 0:
			return "script@story@mud3@leadout@ext@leadout";
	
		default:
		
	}

	return "";
}

Ped func_59(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x1402 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_88(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_60(var uParam0) // Position - 0x1444 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_89(uParam0, 0f);
	return;
}

void func_61() // Position - 0x1453 Hash - 0x76962E88 ^0xF93FEED9
{
	if (func_39(pedLocal_16, 1) && func_39(pedLocal_17, 1))
	{
		func_90();
	
		if (uLocal_168[0 /*5*/].f_2 == 1)
		{
			if (!bLocal_31)
			{
				if (func_91(0) || func_92(0, "A_M_M_ValTownfolk_02", true))
				{
					TASK::TASK_SMART_FLEE_PED(pedLocal_16, Global_35, 10000f, -1, 0, 1077936128, pedLocal_17);
					AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(pedLocal_17, 0, false);
					bLocal_31 = true;
				}
				else
				{
					AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(pedLocal_17, 0, true);
				}
			}
		}
	}

	return;
}

void func_62() // Position - 0x14CA Hash - 0xA853EE46 ^0x22EAB981
{
	var unk;

	if (bLocal_33)
		return;

	if (func_93(true))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_16))
		return;

	if (func_39(pedLocal_16, 73))
	{
		bLocal_32 = true;
		func_94(pedLocal_16, 0);
	
		if (!func_95(Global_35, pedLocal_16, 50f, true))
			func_96();
	
		func_97();
	}
	else if (bLocal_32)
	{
		if (func_98(pedLocal_16, Global_35) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_16, Global_35, true, true))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "MUD3_SORRYJB", 24);
		
			if (func_99(&uLocal_42, unk, false, -1, false, false))
			{
				func_100(3, 0, 0, "MUD3_HG_KILL", pedLocal_16, false, 1065353216, false);
				bLocal_33 = true;
			}
		
			if (func_39(pedLocal_17, 73))
			{
				AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(pedLocal_17, 0, false);
				TASK::TASK_SMART_FLEE_PED(pedLocal_17, Global_35, 1000f, -1, 0, 2f, 0);
			}
		
			func_101(1034793488, -2147483648);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_MUD3_KILLED_WITNESS"), true);
		}
	}

	return;
}

void func_63() // Position - 0x15B2 Hash - 0x96C7AA30 ^0xCAF64A8E
{
	BOOL flag;

	flag = true;
	func_102(&flag);

	if (flag)
		if (!func_68(&uLocal_149))
			func_60(&uLocal_149);

	if (!bLocal_32)
	{
		if (!func_103(iLocal_158))
		{
			iLocal_158 = func_104("MUD3_H_HONOR_02", 10000, 0, 0, 0, true);
			return;
		}
		else if (func_105(iLocal_158))
		{
			return;
		}
	}

	if (func_105(iLocal_39) || func_105(iLocal_40) || !bLocal_35 || !bLocal_36)
		func_106();

	if (func_105(iLocal_41) || !bLocal_37)
		if (func_107(Global_35, -354.01f, 491.56f, 95.67f, 35f, true, true) || func_108(&pedLocal_15) || func_108(&pedLocal_17))
			func_106();

	func_109();

	if (func_110(flag))
		if (func_111(&iLocal_40, "MUD3_H_RETURN", flag, &bLocal_36))
			if (func_112(&pedLocal_15) || func_112(&pedLocal_17))
				func_113(flag);

	return;
}

BOOL func_64() // Position - 0x16BE Hash - 0x5BC6BE7F ^0x5BC6BE7F
{
	int num;

	if (!func_39(pedLocal_14, 0))
		return true;

	if (iLocal_159 != 9 && iLocal_159 != 10 && iLocal_159 != 7 && iLocal_159 != 6)
		if (PED::IS_PED_FLEEING(pedLocal_14) || PED::IS_PED_IN_COMBAT(pedLocal_14, 0))
			return true;

	if (BUILTIN::VDIST(Global_36, uLocal_21) > fLocal_25 + 50f)
		return true;

	if (func_39(pedLocal_15, 0))
	{
		num = func_114(pedLocal_15);
	
		if (num != 1 && num != -1)
		{
			if (bLocal_38)
				return false;
		
			if (func_39(pedLocal_14, 0))
				TASK::TASK_SMART_FLEE_PED(pedLocal_14, Global_35, 1000f, -1, 0, 1f, 0);
		
			return true;
		}
	}

	return false;
}

BOOL func_65() // Position - 0x177C Hash - 0x64A4CE0E ^0xA90985B0
{
	int num;
	var unk;
	int num2;
	BOOL flag;
	float num3;
	float num4;

	num = 2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_14))
		return false;

	if (!func_39(pedLocal_14, 75))
		func_115(11);

	if (func_39(pedLocal_15, 73))
		if (func_116(pedLocal_14, pedLocal_15, true, 80f, false))
			bLocal_166 = true;
	else if (bLocal_166)
		func_115(10);

	if (iLocal_159 != 0)
		if (!func_95(Global_35, pedLocal_14, 150f, true))
			return true;

	unk.f_8 = -1;
	unk.f_17 = 1097859072;
	unk.f_18 = 1000;
	unk.f_19 = 1067450368;
	unk.f_20 = 5000;
	unk.f_21 = 42;
	unk.f_22 = 1103626240;
	unk.f_23 = 1077936128;
	unk.f_24 = 1106247680;
	unk.f_25 = 1103101952;
	unk.f_26 = 1097859072;
	unk.f_27 = 1103626240;
	num2 = 2567;

	if (func_117(pedLocal_14, 0, &unk, &num2, 0, 0))
		func_115(10);

	switch (iLocal_159)
	{
		case 0:
			if (func_95(pedLocal_14, Global_35, 80f, true))
			{
				func_115(1);
				break;
			}
			break;
	
		case 1:
			if (func_116(pedLocal_14, Global_35, true, 40f, false))
			{
				func_115(2);
				break;
			}
			break;
	
		case 2:
			flag = false;
		
			if (func_39(pedLocal_15, 73))
				if (func_118(Global_35, pedLocal_15, false) || func_95(Global_35, pedLocal_15, 10f, true))
					flag = true;
		
			if (flag)
				num = func_119(1);
			else
				num = func_119(2);
		
			if (func_95(pedLocal_14, Global_35, 20f, true) && num == 1)
			{
				func_115(3);
				break;
			}
			break;
	
		case 3:
			if (!func_39(pedLocal_15, 73))
			{
				func_115(7);
				break;
			}
		
			if (!func_118(Global_35, pedLocal_15, false) && !func_95(Global_35, pedLocal_15, 10f, true) && !bLocal_34)
			{
				func_115(7);
				break;
			}
		
			if (func_118(Global_35, pedLocal_15, false))
			{
				num3 = func_120(Global_35, pedLocal_14, true, true);
			
				if (num3 < fLocal_26)
					fLocal_26 = num3;
			
				num4 = num3 - fLocal_26;
			
				if (!func_95(pedLocal_14, Global_35, 30f, true) || num4 > 18f)
				{
					func_115(9);
					break;
				}
			}
		
			num = func_119(64);
		
			if (func_118(Global_35, pedLocal_15, false))
			{
				if (num == 1 && func_68(&uLocal_163))
					func_119(8);
			
				if (func_121(Global_35, ENTITY::GET_ENTITY_COORDS(pedLocal_14, true, false), &uLocal_163, 6.5f, 6f, 5.5f, 5f, 2f, false, 0, 1, 1, false))
					bLocal_34 = true;
			}
			else if (func_95(pedLocal_14, pedLocal_15, 10f, true) || bLocal_34)
			{
				func_115(4);
				break;
			}
			break;
	
		case 4:
			if (func_122())
			{
				func_115(5);
				break;
			}
			break;
	
		case 5:
			if (func_118(Global_35, pedLocal_15, false))
			{
				func_115(9);
				break;
			}
		
			if (!func_68(&uLocal_160))
				func_60(&uLocal_160);
		
			if (func_123(&uLocal_160) >= 10f || !TASK::_0x9FF5F9B24E870748(pedLocal_14))
			{
				func_115(6);
				break;
			}
		
			func_119(8);
			break;
	
		case 6:
			break;
	
		case 7:
			if (func_39(pedLocal_15, 73))
			{
				if (func_119(16) == 1)
				{
					func_115(8);
					break;
				}
			}
			else if (func_119(32) == 1)
			{
				func_115(8);
				break;
			}
			break;
	
		case 8:
			break;
	
		case 9:
			func_119(4) == 1;
			break;
	
		case 10:
			if (!func_68(&uLocal_155))
				func_89(&uLocal_155, 4f);
		
			if (func_124(&uLocal_155) > 3000)
			{
				if (func_95(Global_35, pedLocal_14, 30f, true))
				{
					if (func_125())
					{
						if (func_119(256) == 1)
						{
							func_126(256);
							func_60(&uLocal_155);
						}
					}
				}
			}
			break;
	
		case 11:
			return true;
	}

	return false;
}

BOOL func_66(eStackSize essParam0) // Position - 0x1B9B Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

int func_67(int iParam0, var uParam1, var uParam2) // Position - 0x1BA7 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_68(var uParam0) // Position - 0x1BC4 Hash - 0x5001E582 ^0x5001E582
{
	return func_127(*uParam0, 1);
}

void func_69(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1BD4 Hash - 0x303BFB8D ^0xBCF80455
{
	int i;
	Volume volLockRequestId;
	Vector3 vector;

	if (_IS_NULL_VECTOR(uParam0))
		return;

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
		{
			vector = { VOLUME::_0xC4019CF9AE8E931A(volLockRequestId) };
		
			if (func_129(vector, uParam0, 2f, true))
			{
				if (iParam3 == 0 || VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vector, 2f, 0, iParam3, 16384))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
					Global_1911670[i] = 0;
				}
			}
		}
	}

	return;
}

BOOL func_70(int iParam0, int iParam1) // Position - 0x1C58 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_71(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1C68 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_72(int iParam0, int iParam1) // Position - 0x1C8E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_73(eStackSize essParam0) // Position - 0x1C9D Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_66(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_130(essParam0);
	
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

Ped func_74(eStackSize essParam0) // Position - 0x1D05 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_66(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

void func_75(eStackSize essParam0) // Position - 0x1D3F Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(essParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_74(essParam0)))
		{
			func_131(essParam0, 67108864, true);
			func_38(essParam0, 19, true);
		}
	}

	return;
}

float func_76(eStackSize essParam0) // Position - 0x1D72 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_66(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_77(eStackSize essParam0) // Position - 0x1D93 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_74(essParam0);
	persChar = func_40(essParam0, false);
	func_132(essParam0, ped);

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

BOOL func_78(eStackSize essParam0) // Position - 0x1DED Hash - 0x6410553A ^0x46627D03
{
	if (!func_66(essParam0))
		return false;

	if (Global_1360165[essParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[essParam0 /*1157*/].f_70.f_11 == Global_1360165[essParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_79(eStackSize essParam0) // Position - 0x1E39 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_66(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_80(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x1E61 Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_66(essParam0))
		return;

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 - Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_81(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1EC6 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	Hash hash;
	PersChar persChar;

	if (!func_66(essParam0))
		return 0;

	mount = func_48(essParam0);

	if (func_39(mount, 0))
	{
		if (func_39(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_78(essParam0) || func_79(essParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_133(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				hash = func_134(essParam0, true);
			
				if (hash != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_135(essParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_136(essParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_136(essParam0, false));
					func_137(essParam0);
				}
			}
			else
			{
				if (func_33(essParam0, 32768, true))
				{
					persChar = func_136(essParam0, false);
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
		if (func_39(Global_1360165[essParam0 /*1157*/].f_124, 0))
		{
			if (func_33(essParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
			
				func_135(essParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_136(essParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_136(essParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				func_135(essParam0);
				PED::DELETE_PED(&(Global_1360165[essParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;
	func_138(essParam0, 0);
	return 1;
}

Volume func_82(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x2077 Hash - 0xC1E3A062 ^0xD42263D3
{
	Volume volume;
	int num;
	var entityCoords;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	if (fParam3 <= 0.1f)
		return 0;

	if (_IS_NULL_VECTOR(vParam0))
		return 0;

	num = 0;

	if (!bParam5)
		num = num | 2;

	num = num | 1;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam6))
	{
		if (func_139(vParam0))
			return 0;
	
		volume = VOLUME::_CREATE_VOLUME_LOCK(vParam0, fParam3, num, 0);
	}
	else
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam6, false, false) };
		volume = VOLUME::_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY(eParam6, fParam3, num, 0);
	}

	if (iParam7 != 0)
		VOLUME::_0xB440F4E35393FC39(volume, iParam7);

	if (iParam9 >= 0f)
		VOLUME::_0xD460135C98940274(volume, iParam9);

	func_140(volume, bParam8);
	return volume;
}

char* func_83() // Position - 0x2131 Hash - 0x306ACA3A ^0xE867FD69
{
	return "cutDeleteMe";
}

void func_84(var uParam0, BOOL bParam1) // Position - 0x213D Hash - 0xDA308501 ^0xE236C66F
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 301, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 315, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 178, bParam1);
	return;
}

BOOL func_85(var uParam0, Ped pedParam1, char* sParam2) // Position - 0x2176 Hash - 0xFB1C2C0E ^0x6794528D
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

void func_86(Ped pedParam0) // Position - 0x21F4 Hash - 0xDE0DF2E5 ^0xBA18C4AD
{
	int num;
	BOOL flag;

	if (func_141() == false)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (func_142(pedParam0))
	{
		num = func_114(pedParam0);
		func_143(num);
	}

	func_143(1);

	if (func_144(1))
		func_145(1, false);

	func_146(1);
	func_147(pedParam0, 1, 0);
	func_148(1, 1);

	if (func_149(1) == 0)
		func_150(1, 1);

	flag = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(PLAYER::PLAYER_ID(), pedParam0);
	func_151();
	return;
}

void func_87(Ped pedParam0, BOOL bParam1) // Position - 0x2288 Hash - 0x5BB733A3 ^0xC555EB08
{
	char* propertyName;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	propertyName = "HorseMission";

	if (bParam1)
		if (!DECORATOR::DECOR_EXIST_ON(pedParam0, propertyName))
			DECORATOR::DECOR_SET_BOOL(pedParam0, propertyName, bParam1);
	else if (DECORATOR::DECOR_EXIST_ON(pedParam0, propertyName))
		DECORATOR::DECOR_REMOVE(pedParam0, propertyName);

	return;
}

void func_88(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x22D6 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_152(eptParam1))
		{
			func_153(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_154(pedParam0, 0, true);
	
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
			func_155(pedParam0, false);
			flag = true;
		}
	
		func_156(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_89(var uParam0, float fParam1) // Position - 0x23B7 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_157() - fParam1;
	func_158(uParam0, 1);
	func_159(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_90() // Position - 0x23DD Hash - 0x15AF8378 ^0x631FA531
{
	int num;

	num = 0;

	if (uLocal_168[num /*5*/].f_2 == 1)
		return;

	if (!func_160(num))
		return;

	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uLocal_168[num /*5*/], false))
		uLocal_168[num /*5*/].f_2 = 1;

	if (!uLocal_168[num /*5*/].f_2)
	{
		if (func_39(pedLocal_16, 1))
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_168[num /*5*/], "A_M_M_ValTownfolk_02", pedLocal_16, 0);
	
		if (func_39(pedLocal_17, 1))
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_168[num /*5*/], "HORSE_01", pedLocal_17, 0);
	
		if (func_39(Global_35, 1))
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_168[num /*5*/], "ARTHUR", Global_35, 0);
	}

	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uLocal_168[num /*5*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(uLocal_168[num /*5*/]);
		uLocal_168[num /*5*/].f_2 = 1;
	}
	else
	{
		uLocal_168[num /*5*/].f_2 = 1;
	}

	return;
}

BOOL func_91(int iParam0) // Position - 0x24A6 Hash - 0x9C8500EF ^0xAE898748
{
	if (!func_160(iParam0))
		return true;

	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uLocal_168[iParam0 /*5*/], false))
		return true;

	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uLocal_168[iParam0 /*5*/], false))
		return true;

	return false;
}

BOOL func_92(int iParam0, char* sParam1, BOOL bParam2) // Position - 0x24E2 Hash - 0xE2647839 ^0x4E8E07B3
{
	if (func_91(iParam0))
		return 1;

	if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uLocal_168[iParam0 /*5*/], sParam1))
		return 1;

	if (bParam2)
		if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uLocal_168[iParam0 /*5*/], sParam1))
			return 1;

	return 0;
}

BOOL func_93(BOOL bParam0) // Position - 0x2523 Hash - 0xD6E12BEB ^0xD87564B0
{
	return AUDIO::_0xFE5C6177064BD390(bParam0);
}

void func_94(Ped pedParam0, int iParam1) // Position - 0x2531 Hash - 0x9F3718A3 ^0x3BA6EBE3
{
	BOOL _int;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(pedParam0, "honor_block"))
			_int = DECORATOR::DECOR_GET_INT(pedParam0, "honor_block");
	
		_int = _int || func_161(iParam1);
		DECORATOR::DECOR_SET_INT(pedParam0, "honor_block", _int);
	}

	return;
}

BOOL func_95(Ped pedParam0, Ped pedParam1, float fParam2, BOOL bParam3) // Position - 0x2573 Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pedParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

void func_96() // Position - 0x25BB Hash - 0xACDD8428 ^0x80714101
{
	if (func_162("MUD3_EXT_LI_P1"))
		func_163("MUD3_EXT_LI_P1", true, false);

	if (func_162("MUD3_EXT_LI_P2"))
		func_163("MUD3_EXT_LI_P2", true, false);

	return;
}

void func_97() // Position - 0x25ED Hash - 0xD909C121 ^0x548FD284
{
	if (!func_39(pedLocal_16, 73))
		return;

	if (PED::_0x09D7AFD3716DA8E1(pedLocal_16, 1000))
	{
		func_96();
	
		if (uLocal_168[0 /*5*/].f_2 == 1)
		{
			if (!bLocal_31)
			{
				func_30(0);
				TASK::TASK_SMART_FLEE_PED(pedLocal_16, Global_35, 10000f, -1, 0, 1077936128, pedLocal_17);
				AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(pedLocal_17, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_16, false, false);
				bLocal_31 = true;
			}
		}
	
		if (!func_68(&uLocal_152))
			func_89(&uLocal_152, 4f);
	
		if (func_124(&uLocal_152) > 3000)
		{
			if (func_119(128) == 1)
			{
				func_126(128);
				func_60(&uLocal_152);
			}
		}
	}

	return;
}

BOOL func_98(Ped pedParam0, Ped pedParam1) // Position - 0x2687 Hash - 0xAECB9873 ^0xB730ABFA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (ENTITY::IS_ENTITY_A_PED(pedParam0))
			if (ENTITY::IS_ENTITY_DEAD(pedParam0))
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)) == pedParam1)
					return true;

	return false;
}

BOOL func_99(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x26BE Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_164(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

void func_100(int iParam0, int iParam1, int iParam2, char* sParam3, Ped pedParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x2718 Hash - 0xA48CCCFA ^0xD20D1AD3
{
	int num;
	int num2;
	int i;

	if (func_141() != -1)
		return;

	if (Global_36616 && func_161(iParam1) != false)
		return;

	num = func_165(iParam0);
	num = BUILTIN::ROUND((float)num * iParam6);

	if (iParam1 != joaat("honor_event_ambient_kill") && iParam1 != joaat("honor_event_ambient_ko") && iParam1 != joaat("honor_event_kill_vermin") && iParam1 != joaat("honor_event_kill_farm_animal") && iParam1 != joaat("honor_event_kill_horse") && iParam1 != joaat("honor_event_trampled_innocent") && iParam1 != joaat("honor_event_abandon_animals"))
	{
		func_166(num, false, iParam0, iParam1, sParam3, pedParam4, bParam5, bParam7);
	}
	else
	{
		num2 = -1;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (num2 < 0)
				if (Global_1347477.f_155[i /*6*/] == 0)
					num2 = i;
		}
	
		if (num2 >= 0)
			func_167(num2, num, iParam0, iParam1, pedParam4, bParam5);
		else
			func_166(num, true, iParam0, iParam1, sParam3, pedParam4, bParam5, false);
	}

	return;
}

void func_101(int iParam0, BOOL bParam1) // Position - 0x2817 Hash - 0x54AA129E ^0x54AA129E
{
	if (!func_168(iParam0))
		return;

	Global_40.f_8863[func_169(iParam0, 1)] = Global_40.f_8863[func_169(iParam0, 1)] || bParam1;
	return;
}

void func_102(var uParam0) // Position - 0x284D Hash - 0xC5F68375 ^0xF0837F96
{
	if (!func_68(&uLocal_143))
		func_60(&uLocal_143);

	if (func_124(&uLocal_143) < 2000)
	{
		func_170();
		func_106();
		*uParam0 = 0;
	}

	if (func_39(pedLocal_16, 1) && func_39(pedLocal_17, 1))
	{
		if (func_91(0) || func_92(0, "A_M_M_ValTownfolk_02", true) || func_171(0, 0.54f))
			return;
	
		func_170();
		func_106();
		*uParam0 = 0;
	}

	return;
}

BOOL func_103(int iParam0) // Position - 0x28C9 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

int func_104(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x28D5 Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_105(int iParam0) // Position - 0x2910 Hash - 0x10B6ADF3 ^0x5434DDBE
{
	int messageState;

	messageState = 6;

	if (func_103(iParam0))
		messageState = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);

	return messageState != 6;
}

void func_106() // Position - 0x2930 Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_1905944.f_5695 = 1;
	return;
}

BOOL func_107(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2940 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), fParam1) <= fParam4 * fParam4)
			return true;
	else if (func_172(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), fParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_108(var uParam0) // Position - 0x299B Hash - 0x1EA0F6AC ^0x1EA0F6AC
{
	if (!func_39(*uParam0, 0))
		return 0;

	if (func_118(Global_35, *uParam0, false))
		return 1;

	return 0;
}

void func_109() // Position - 0x29C6 Hash - 0x13B4F1C1 ^0x13B4F1C1
{
	if (!func_68(&uLocal_146))
		func_60(&uLocal_146);

	if (func_105(iLocal_39) || func_105(iLocal_40) || func_105(iLocal_41))
		return;

	if (func_173() || func_174())
		func_60(&uLocal_146);

	return;
}

BOOL func_110(BOOL bParam0) // Position - 0x2A19 Hash - 0x5C2B69EC ^0x9CB31168
{
	if (func_175(15))
		return func_111(&iLocal_39, "MUD3_H_THORSEA", bParam0, &bLocal_35);

	return func_111(&iLocal_39, "MUD3_H_THORSE", bParam0, &bLocal_35);
}

BOOL func_111(var uParam0, char* sParam1, BOOL bParam2, var uParam3) // Position - 0x2A49 Hash - 0x25DDD2F3 ^0x2DE5C67F
{
	if (*uParam3)
		return 1;

	if (!func_103(*uParam0))
	{
		if (func_124(&uLocal_149) > 4000 && bParam2)
			if (func_176())
				*uParam0 = func_104(sParam1, 10000, 0, 0, 0, true);
	
		return 0;
	}

	if (!func_105(*uParam0))
	{
		*uParam3 = 1;
		return 1;
	}

	return 0;
}

int func_112(var uParam0) // Position - 0x2AA9 Hash - 0xC22F0681 ^0xC22F0681
{
	if (!func_39(*uParam0, 0))
		return 0;

	if (func_118(Global_35, *uParam0, false))
		return 1;

	if (func_95(Global_35, *uParam0, 3f, true) && func_177(Global_35, *uParam0, 0))
		return 1;

	return 0;
}

BOOL func_113(BOOL bParam0) // Position - 0x2AF7 Hash - 0x5C2B69EC ^0x78DFD09
{
	if (func_175(15))
		return func_111(&iLocal_41, "MUD3_H_SADDLEA", bParam0, &bLocal_37);

	return func_111(&iLocal_41, "MUD3_H_SADDLE", bParam0, &bLocal_37);
}

int func_114(Ped pedParam0) // Position - 0x2B27 Hash - 0xD44AE303 ^0xA29D7F05
{
	int i;

	if (pedParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (pedParam0 == Global_1900383[i /*45*/])
			return i;
	}

	return -1;
}

void func_115(int iParam0) // Position - 0x2B6C Hash - 0x4435187D ^0x6166FC8
{
	int taskSequenceId;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_14))
		return;

	if (!func_39(pedLocal_14, 75))
		iParam0 = 11;

	if (iLocal_159 == iParam0)
		return;

	iLocal_159 = iParam0;

	if (iLocal_159 == 11 || iLocal_159 == 10)
	{
		func_178(1, false, true);
		func_178(2, false, true);
		func_178(4, false, true);
		func_178(8, false, true);
		func_178(16, false, true);
		func_178(32, false, true);
		func_178(64, false, true);
	}

	switch (iLocal_159)
	{
		case 0:
			break;
	
		case 1:
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_14, Global_35, -1, 0, 51, 0);
			break;
	
		case 2:
			blLocal_18 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_FRIENDLY"), pedLocal_14);
			MAP::BLIP_ADD_MODIFIER(blLocal_18, joaat("BLIP_MODIFIER_URGENT_ALERT"));
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(pedLocal_14);
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_14, Global_35, -1, 0, 51, 0);
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "neutral_get_attention_l_001", Global_35, func_179(sLocal_27, "neutral_get_attention_l_001"), 2f, -2f, 0, 0, false, false, -1082130432, 0, 0, -1082130432);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "positive_nod_f_002", Global_35, func_179(sLocal_27, "positive_nod_f_002"), 2f, -2f, 0, 0, false, false, -1082130432, 0, 0, -1082130432);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "neutral_get_attention_l_002", Global_35, func_179(sLocal_27, "neutral_get_attention_l_002"), 2f, -2f, 0, 0, false, false, -1082130432, 0, 0, -1082130432);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "neutral_look_around_f_001", Global_35, func_179(sLocal_27, "neutral_look_around_f_001"), 2f, -2f, 0, 0, false, false, -1082130432, 0, 0, -1082130432);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "neutral_get_attention_r_001", Global_35, func_179(sLocal_27, "neutral_get_attention_r_001"), 2f, -2f, 0, 0, false, false, -1082130432, 0, 0, -1082130432);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "neutral_get_attention_r_002", Global_35, func_179(sLocal_27, "neutral_get_attention_r_002"), 2f, -2f, 0, 0, false, false, -1082130432, 0, 0, -1082130432);
			TASK::SET_SEQUENCE_TO_REPEAT(taskSequenceId, 1);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_14, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			break;
	
		case 3:
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_14, Global_35, -1, 0, 51, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_14, Global_35, -1, -1082130432, -1082130432, -1082130432);
			break;
	
		case 4:
			func_122();
			break;
	
		case 5:
			TASK::CLEAR_PED_TASKS(pedLocal_14, true, false);
		
			if (func_39(pedLocal_15, 0))
			{
				AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(pedLocal_15, 0, true);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedLocal_15, 48, true);
			}
		
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sLocal_27, "positive_nod_f_001", Global_35, func_179(sLocal_27, "positive_nod_f_001"), 2f, -2f, 0, 0, false, false, -1082130432, 0, 0, -1082130432);
		
			if (PED::IS_ANIMAL_INTERACTION_POSSIBLE(pedLocal_14, pedLocal_15))
				TASK::TASK_ANIMAL_INTERACTION(0, pedLocal_15, joaat("Interaction_PositiveShort"), 0, false);
		
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_14, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			func_100(13, 0, 0, "MUD3_HG_HORSE", pedLocal_14, false, 1065353216, false);
			break;
	
		case 6:
			func_28(&blLocal_18);
			PED::SET_PED_KEEP_TASK(pedLocal_14, true);
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_MOUNT_ANIMAL(0, pedLocal_15, -1, -1, 1f, 1, 0, 0);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, 1f, 0);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_14, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			break;
	
		case 7:
			func_28(&blLocal_18);
			TASK::CLEAR_PED_TASKS(pedLocal_14, true, false);
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_14, Global_35, -1, 0, 51, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_14, Global_35, -1, -1082130432, -1082130432, -1082130432);
			break;
	
		case 8:
			PED::SET_PED_KEEP_TASK(pedLocal_14, true);
			TASK::TASK_SMART_FLEE_PED(pedLocal_14, Global_35, 1000f, -1, 0, 1f, 0);
			break;
	
		case 9:
			func_28(&blLocal_18);
			PED::SET_PED_KEEP_TASK(pedLocal_14, true);
			TASK::CLEAR_PED_TASKS(pedLocal_14, true, false);
			LAW::_LAW_WITNESS_RESPONSE_TASK(pedLocal_14, Global_35, pedLocal_14, Global_36, joaat("crime_theft_horse"));
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1082130432, -1082130432, -1082130432);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, 1.5f, 0);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_14, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			func_178(1, false, true);
			func_178(2, false, true);
			func_178(8, false, true);
			func_178(16, false, true);
			func_178(32, false, true);
			func_178(64, false, true);
			func_100(2, joaat("honor_event_steal_horse"), 0, 0, pedLocal_14, false, 1065353216, false);
			break;
	
		case 10:
			func_28(&blLocal_18);
			PED::SET_PED_KEEP_TASK(pedLocal_14, true);
			TASK::TASK_SMART_FLEE_PED(pedLocal_14, Global_35, 1000f, -1, 0, 2f, 0);
			break;
	
		case 11:
			func_28(&blLocal_18);
			break;
	}

	return;
}

BOOL func_116(Ped pedParam0, Ped pedParam1, BOOL bParam2, float fParam3, BOOL bParam4) // Position - 0x300C Hash - 0x438C0E9B ^0x528609E0
{
	if (bParam2)
		if (!func_177(pedParam0, pedParam1, 0f))
			return false;

	if (!func_95(pedParam0, pedParam1, fParam3, true))
		return false;

	if (bParam4 && ENTITY::IS_ENTITY_A_PED(pedParam1))
		return PED::CAN_PED_SEE_PED_CACHED(pedParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1), false) == 1;

	return PED::CAN_PED_SEE_ENTITY(pedParam0, pedParam1, bParam2, false) == 1;
}

BOOL func_117(Ped pedParam0, Entity eParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x306F Hash - 0xED93B9E0 ^0x288D4ED6
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > uParam2->f_5)
		func_180(uParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			uParam2->f_12 = iParam5;
		else
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(uParam2->f_1 & 128 != 0))
		{
			if (func_181(pedParam0, uParam2))
			{
				*uParam3 = 128;
				func_182(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(uParam2->f_1 & 8 != 0))
			{
				if (func_183(pedParam0, uParam2))
				{
					*uParam3 = 8;
					func_182(pedParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_184(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 8;
					func_182(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 32 != 0)
			{
				if (func_185(pedParam0, uParam2))
				{
					*uParam3 = 64;
					func_182(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_186(PLAYER::PLAYER_ID(), false, true, uParam2->f_1 & 524288 == 0))
		{
			if (!(uParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_182(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_187(uParam2, 1065353216))
			{
				if (!(uParam2->f_1 & 4 != 0))
				{
					if (func_188(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 4;
						func_182(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			
				if (!(uParam2->f_1 & 256 != 0))
				{
					if (func_189(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 256;
						func_182(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 16 != 0))
		{
			if (uParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_190(Global_35, pedParam0, uParam2, false))
				{
					*uParam3 = 16;
					func_182(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_190(Global_35, pedParam0, uParam2, true))
			{
				*uParam3 = 16;
				func_182(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_191(pedParam0, uParam2))
				{
					*uParam3 = 32;
					func_182(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_192(&pedParam0, uParam2))
				{
					*uParam3 = 4096;
					func_182(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(uParam2->f_1 & 2 != 0))
			{
				if (func_193(uParam2, 4000))
				{
					if (func_194(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, false, *uParam2 & 256 != 0) && func_195(uParam2, pedParam0) && func_196(uParam2, pedParam0))
					{
						*uParam3 = 2;
						func_182(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 2 != 0))
		{
			if (uParam2->f_12 < 4f)
			{
				if (func_194(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, true, *uParam2 & 256 != 0) && func_195(uParam2, pedParam0) && func_196(uParam2, pedParam0))
				{
					*uParam3 = 2;
					func_182(pedParam0, uParam2, *uParam3);
					return true;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_197(pedParam0, Global_1935630.f_41))
							{
								func_198();
								*uParam3 = 2;
								func_182(pedParam0, uParam2, *uParam3);
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
						if (func_197(pedParam0, Global_1935630.f_41))
						{
							func_198();
							*uParam3 = 2;
							func_182(pedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		
			if (uParam2->f_12 < 10f)
			{
				if (func_199(uParam2, pedParam0) || uParam2->f_9 > 0 && func_200() - uParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_198();
						*uParam3 = 2;
						func_182(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_201())
					{
						if (func_197(pedParam0, Global_1935630.f_42))
						{
							func_198();
							*uParam3 = 2;
							func_182(pedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 1024 != 0))
		{
			if (func_202(uParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_182(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!(uParam2->f_1 & 2048 != 0))
			{
				if (func_203(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 2048;
					func_182(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_204(pedParam0, uParam2))
					{
						*uParam3 = 8192;
						func_182(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*uParam2 & 64 != 0)
			{
				if (func_205(pedParam0, uParam2))
				{
					*uParam3 = 32768;
					func_182(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_206(uParam2, 4000))
				{
					if (func_207(&pedParam0, uParam2))
					{
						*uParam3 = 512;
						func_182(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_208(pedParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_182(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(uParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_209(uParam2, pedParam0))
			{
				*uParam3 = 1;
				func_182(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

BOOL func_118(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x3698 Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

int func_119(int iParam0) // Position - 0x3702 Hash - 0x38ECA076 ^0x38ECA076
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0), 24);

	if (func_72(iLocal_167, iParam0))
	{
		if (func_162(&unk) || func_211(&unk))
			return 0;
	
		return 1;
	}

	if (!func_93(true))
	{
		if (func_99(&uLocal_42, unk, false, -1, false, false))
		{
			func_212(&iLocal_167, iParam0);
			return 0;
		}
	}

	return 2;
}

float func_120(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3763 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_121(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, BOOL bParam14) // Position - 0x37AB Hash - 0x76A08862 ^0x6A7EDE1E
{
	int i;
	Ped mount;
	Vehicle vehiclePedIsIn;
	Ped pedInDraftHarness;
	float num;

	func_213(pedParam0, uParam1, false, fParam5, fParam6, fParam7, fParam8, iParam12, iParam13, bParam14, 0);
	mount = PED::GET_MOUNT(pedParam0);

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);

	num = func_214(pedParam0, uParam1, true);

	if (!func_68(uParam4))
		if (num <= fParam8)
			if (ENTITY::DOES_ENTITY_EXIST(mount) || ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
				func_27(uParam4, false);
	else if (bParam10 && num > fParam8)
		func_45(uParam4);

	if (func_68(uParam4))
	{
		if (bParam14)
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedParam0, 1f);
	
		if (!ENTITY::IS_ENTITY_DEAD(mount))
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(mount, 1f);
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && VEHICLE::IS_DRAFT_VEHICLE(vehiclePedIsIn))
		{
			for (i = 0; i < 6; i = i + 1)
			{
				pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(vehiclePedIsIn, i);
			
				if (!ENTITY::IS_ENTITY_DEAD(pedInDraftHarness))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedInDraftHarness, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(vehiclePedIsIn, PED::_0x46BF2A810679D6E6(pedInDraftHarness, 1f));
				}
			}
		}
	
		if (func_215(uParam4) >= fParam9)
		{
			if (pedParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::PLAYER_ID(), 28, true);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(mount) && !func_216(pedParam0, SCRIPT_TASK_DISMOUNT_ANIMAL))
			{
				if (PED::IS_PED_ON_MOUNT(pedParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(pedParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && !func_216(pedParam0, SCRIPT_TASK_LEAVE_ANY_VEHICLE))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(pedParam0, 0, 0);
					return true;
				}
			}
		}
	
		if (pedParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(pedParam0, 8))
				TASK::CLEAR_PED_TASKS(pedParam0, true, false);
		
			PED::SET_PED_RESET_FLAG(pedParam0, 175, true);
		}
	}

	return false;
}

BOOL func_122() // Position - 0x396A Hash - 0x4E4D75A ^0xC784D281
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_15))
		return true;

	if (!bLocal_38)
	{
		if (func_217(1) != pedLocal_15)
			return true;
	
		if (!func_218(1))
		{
			PED::SET_PED_CONFIG_FLAG(pedLocal_15, 300, true);
			PED::SET_PED_CONFIG_FLAG(pedLocal_15, 297, false);
			AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(pedLocal_15, 0, true);
			bLocal_38 = true;
			func_219(1, true);
		}
	}
	else if (!func_220())
	{
		return true;
	}

	return false;
}

float func_123(var uParam0) // Position - 0x39D5 Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_68(uParam0))
		return 0f;

	if (func_221(uParam0))
		return uParam0->f_2;

	return func_157() - uParam0->f_1;
}

int func_124(var uParam0) // Position - 0x3A07 Hash - 0x113335E1 ^0xD2416829
{
	if (!func_68(uParam0))
		return 0;

	if (func_221(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_200() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

BOOL func_125() // Position - 0x3A4D Hash - 0xD0560236 ^0xFFE1310A
{
	if (PED::IS_PED_FALLING_OVER(pedLocal_14))
		return false;

	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedLocal_14, 1000))
		return false;

	if (PED::IS_PED_RAGDOLL(pedLocal_14))
		return false;

	if (PED::GET_PED_IS_BEING_GRAPPLED(pedLocal_14))
		if (PED::GET_PED_GRAPPLE_STATE(pedLocal_14) != 1)
			return false;

	return true;
}

void func_126(int iParam0) // Position - 0x3A97 Hash - 0xFE691435 ^0xFE691435
{
	if (func_72(iLocal_167, iParam0))
		func_222(&iLocal_167, iParam0);

	return;
}

BOOL func_127(int iParam0, int iParam1) // Position - 0x3AB2 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x3AC1 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_129(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x3AEB Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

Hash func_130(int iParam0) // Position - 0x3B40 Hash - 0xBA965109 ^0xCB1D208B
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

void func_131(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3D1C Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

void func_132(eStackSize essParam0, Ped pedParam1) // Position - 0x3D4D Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_223(pedParam1);

	return;
}

float func_133(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x3D67 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_172(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_134(eStackSize essParam0, BOOL bParam1) // Position - 0x3DBE Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_66(essParam0))
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
		Global_1360165[essParam0 /*1157*/].f_127 = func_224(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_135(eStackSize essParam0) // Position - 0x3F03 Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_48(essParam0);

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

PersChar func_136(eStackSize essParam0, BOOL bParam1) // Position - 0x3F79 Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_66(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[essParam0 /*1157*/].f_126 = func_225(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_137(eStackSize essParam0) // Position - 0x3FC5 Hash - 0x8FBA5BA4 ^0xD4F9FBC1
{
	int i;

	if (!func_66(essParam0))
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

void func_138(eStackSize essParam0, int iParam1) // Position - 0x401A Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_66(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

BOOL func_139(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x403E Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_140(Volume volParam0, BOOL bParam1) // Position - 0x4058 Hash - 0xEA796703 ^0x695D7925
{
	Volume volLockRequestId;
	int i;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volParam0);

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId) || volLockRequestId == volParam0)
		{
			Global_1911670[i] = volParam0;
			return 1;
		}
	}

	return 0;
}

BOOL func_141() // Position - 0x40C0 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_142(Ped pedParam0) // Position - 0x40CE Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_114(pedParam0);

	if (num == -1)
		return false;

	return true;
}

void func_143(int iParam0) // Position - 0x410C Hash - 0x37EBB9FA ^0xA705E265
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}

	Global_1900383[iParam0 /*45*/].f_25 = 0;
	return;
}

BOOL func_144(int iParam0) // Position - 0x415D Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_226(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

void func_145(int iParam0, BOOL bParam1) // Position - 0x4195 Hash - 0x76CF898E ^0x452E6C0C
{
	int idOfThisThread;
	Ped horse;
	BOOL flag;
	Player player;
	Hash entityModel;

	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_227(iParam0);

	if (func_228(iParam0))
	{
		idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	
		if (func_229(iParam0) != idOfThisThread)
			return;
	}

	if (!func_144(iParam0))
		return;

	horse = func_217(iParam0);
	flag = false;

	if (!ENTITY::IS_ENTITY_DEAD(horse))
		flag = true;

	func_143(iParam0);
	func_230(iParam0);
	func_231(horse);

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(horse))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(horse, true, true);

	if (func_232(horse))
		PHYSICS::_UNHITCH_HORSE(horse);

	if (flag)
	{
		TASK::TASK_SMART_FLEE_PED(horse, Global_35, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(horse, true);
	}

	player = PLAYER::PLAYER_ID();
	PLAYER::IS_PLAYER_DEAD(player);

	if (iParam0 == 0)
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(player, 0);
	else if (iParam0 == 1)
		PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(player, 0);

	PED::_CLEAR_ACTIVE_ANIMAL_OWNER(horse, true);

	if (flag)
	{
		if (bParam1)
			FLOCK::_SET_ANIMAL_IS_WILD(horse, true);
	
		PED::_0x329772C47DBB2FBC(horse);
	}

	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&horse);
	entityModel = ENTITY::GET_ENTITY_MODEL(horse);

	if (STREAMING::IS_MODEL_VALID(entityModel))
		if (PED::_IS_PED_MODEL_SUPPRESSED(entityModel))
			if (!func_233(entityModel))
				PED::SET_PED_MODEL_IS_SUPPRESSED(entityModel, false);

	func_146(iParam0);
	return;
}

void func_146(int iParam0) // Position - 0x42D2 Hash - 0xC84F77D9 ^0xC5FE2F68
{
	var unk;
	int i;
	int j;

	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_40.f_1095.f_1[iParam0 /*436*/], "", 64);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_234(&unk);
	func_235(iParam0, unk);
	func_236(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_237(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_238(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_239(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));

	for (i = 0; i < 2; i = i + 1)
	{
		func_240(i, &Global_40.f_1095.f_1[iParam0 /*436*/].f_398[i /*4*/]);
	}

	for (j = 0; j < 3; j = j + 1)
	{
		func_241(j, &Global_40.f_1095.f_1[iParam0 /*436*/].f_407[j /*4*/]);
	}

	func_242(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_243(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_244(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));

	Global_1900383[iParam0 /*45*/].f_26 = 0;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));

	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_31 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_34 = 0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
	return;
}

void func_147(Ped pedParam0, int iParam1, int iParam2) // Position - 0x4624 Hash - 0x83822F7F ^0xF24D19B
{
	Player playerIndex;
	int num;
	BOOL flag;
	Ped ped;
	Hash hash;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		if (iParam2 == 0)
			return;

	if (iParam1 == -1)
		return;

	if (iParam1 >= 7)
		return;

	if (func_245(pedParam0))
		return;

	if (func_246(pedParam0))
		return;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, true, true);

	func_247(iParam1, pedParam0);
	func_248(iParam1, iParam2);
	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::IS_PLAYER_DEAD(playerIndex);

	if (pedParam0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(playerIndex))
	{
		func_249(iParam1, 0);
	}
	else
	{
		num = func_250(pedParam0);
		func_249(iParam1, num);
	}

	if (iParam1 == 0 || iParam1 == 1)
		func_251(pedParam0);

	if (iParam1 == 0)
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, pedParam0);
	else if (iParam1 == 1)
		flag = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, pedParam0);

	if (iParam1 == 6)
		return;

	if (func_252(iParam1))
		func_253(iParam1);

	ped = func_254(iParam1);
	hash = func_255(ped);
	func_256(iParam1, hash);
	return;
}

void func_148(int iParam0, int iParam1) // Position - 0x4741 Hash - 0x42DB579F ^0x244C0C3A
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
	return;
}

int func_149(int iParam0) // Position - 0x4774 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

void func_150(int iParam0, int iParam1) // Position - 0x47A8 Hash - 0x29B1BAB8 ^0xB9A693D4
{
	Ped model;
	var unk;
	var unk2;
	int defaultMaxAttributeRank;
	float num;
	Ped ped;
	int num2;
	int attributeRank;

	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	model = func_254(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		func_257(&unk, &model, &unk2);

	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);

	if (iParam1 > defaultMaxAttributeRank)
		return;

	num = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = num;
	func_258(iParam1);
	ped = func_217(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return;

	num2 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(ped, 7, num2);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(ped, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = attributeRank;
	PED::_SET_MOUNT_BONDING_LEVEL(ped, attributeRank);
	return;
}

void func_151() // Position - 0x48A6 Hash - 0x211BCC6D ^0x211BCC6D
{
	if (func_144(0))
		func_259(0);

	if (func_144(1))
		func_259(1);

	if (func_144(5))
		func_259(5);

	if (func_144(6))
		func_143(6);

	return;
}

BOOL func_152(ePedType eptParam0) // Position - 0x48E2 Hash - 0x5000025C ^0x5000025C
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

void func_153(Ped pedParam0, Hash hParam1) // Position - 0x4D35 Hash - 0xEA1C858E ^0x61481E17
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_260(pedParam0, hParam1))
		{
			if (func_261(pedParam0, hParam1))
			{
				if (func_262(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_263(pedParam0);
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

void func_154(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x4DDF Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_155(Ped pedParam0, BOOL bParam1) // Position - 0x4E0F Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_156(Ped pedParam0, int iParam1) // Position - 0x4E54 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

float func_157() // Position - 0x4E7B Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_158(var uParam0, int iParam1) // Position - 0x4EAD Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_159(var uParam0, int iParam1) // Position - 0x4EBE Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_160(int iParam0) // Position - 0x4ED3 Hash - 0x9F0A8B0B ^0xA968561B
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_168[iParam0 /*5*/]))
		return false;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_168[iParam0 /*5*/], true, false))
		return false;

	return true;
}

BOOL func_161(int iParam0) // Position - 0x4F02 Hash - 0xA05361F6 ^0xF8A0FD3E
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return 16384;
	
		case joaat("honor_event_antagonize"):
			return 65536;
	
		case joaat("honor_event_steal_wagon"):
			return 8192;
	
		case joaat("honor_event_trampled_innocent"):
			return 4096;
	
		case joaat("honor_event_kill_vermin"):
			return 64;
	
		case joaat("honor_event_kill_farm_animal"):
			return 128;
	
		case joaat("honor_event_long_absence"):
			return 4194304;
	
		case 0:
			return -1;
	
		case joaat("honor_event_wanted_in_camp"):
			return 524288;
	
		case joaat("honor_event_animal_bleedout"):
			return 32768;
	
		case joaat("honor_event_steal_mule"):
			return 2048;
	
		case joaat("honor_event_theft"):
			return 131072;
	
		case joaat("honor_event_kill_horse"):
			return 256;
	
		case joaat("honor_event_steal_donkey"):
			return 1024;
	
		case joaat("honor_event_steal_horse"):
			return 512;
	
		case joaat("honor_event_ambient_kill"):
			return 2;
	
		case joaat("honor_event_item_request"):
			return 2097152;
	
		case joaat("honor_event_ambient_ko"):
			return 4;
	
		case joaat("honor_event_intervened"):
			return 262144;
	
		case joaat("honor_event_scare"):
			return 32;
	
		case joaat("honor_event_donated_game"):
			return 1048576;
	
		case joaat("honor_event_loot_innocent"):
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_162(char* sParam0) // Position - 0x5018 Hash - 0xD575FF96 ^0x7987930F
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0) && AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING(sParam0))
		return true;

	return false;
}

void func_163(char* sParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5039 Hash - 0xB845AB0C ^0x67608E5F
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(sParam0, bParam1, bParam2);
	return;
}

void func_164(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x504C Hash - 0xFDACD718 ^0x658C9335
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

int func_165(int iParam0) // Position - 0x509E Hash - 0xC25EDEC0 ^0x47BF4274
{
	switch (iParam0)
	{
		case 0:
			return -1;
	
		case 1:
			return -2;
	
		case 2:
			return -5;
	
		case 3:
			return -10;
	
		case 4:
			return -20;
	
		case 5:
			return -40;
	
		case 6:
			return -160;
	
		case 7:
			return -320;
	
		case 8:
			return -480;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 5;
	
		case 13:
			return 10;
	
		case 14:
			return 20;
	
		case 15:
			return 40;
	
		case 16:
			return 160;
	
		case 17:
			return 640;
	
		case 18:
			return -640;
	
		default:
		
	}

	return 0;
}

void func_166(int iParam0, BOOL bParam1, int iParam2, int iParam3, char* sParam4, Ped pedParam5, BOOL bParam6, BOOL bParam7) // Position - 0x5185 Hash - 0x9A51185A ^0x357BE23
{
	int num;
	int num2;
	int num3;
	int num4;
	float num5;
	int num6;
	int num7;
	char* str;
	var statId;

	num = func_264();

	if (iParam3 == joaat("honor_event_ambient_kill") || iParam3 == joaat("honor_event_ambient_ko"))
	{
		if (bParam6)
			iParam0 = func_265(iParam0);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(pedParam5, "honor_override"))
			{
				iParam0 = DECORATOR::DECOR_GET_INT(pedParam5, "honor_override") * -1;
				DECORATOR::DECOR_REMOVE(pedParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(pedParam5, "honor_bank"))
			{
				iParam0 = iParam0 - DECORATOR::DECOR_GET_INT(pedParam5, "honor_bank");
				DECORATOR::DECOR_SET_INT(pedParam5, "honor_bank", 0);
			}
		}
	}

	num3 = 240;
	num4 = -240;
	num5 = 1f;

	if (func_266(6))
	{
		num3 = 320;
		num4 = -320;
	
		if (!func_267())
			if (iParam2 >= 0 && iParam2 <= 4 || iParam2 >= 10 && iParam2 <= 14 && iParam3 != joaat("honor_event_animal_bleedout"))
				num5 = 1.5f;
	}

	if (iParam0 > 0)
		num6 = BUILTIN::CEIL((float)iParam0 * num5);
	else
		num6 = BUILTIN::FLOOR((float)iParam0 * num5);

	Global_40.f_11095.f_35 = Global_40.f_11095.f_35 + num6;
	Global_40.f_11095.f_35 = func_268(Global_40.f_11095.f_35, num4, num3);
	num2 = func_264();

	if (num2 != num && num2 != 0 || iParam3 == joaat("honor_event_cheat") || bParam7)
	{
		num7 = func_269(num2);
		func_271(func_270(), false, 4000);
		func_272(Global_40.f_11095.f_35);
	
		if (num7 > Global_40.f_11095.f_36 && num2 > 0 || num7 > Global_40.f_11095.f_37 && num2 < 0)
			if (num2 < 0)
				Global_40.f_11095.f_37 = num7;
			else
				Global_40.f_11095.f_36 = num7;
	
		func_273(false);
	}

	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_275(func_274(joaat("honor_positive_total")), 1);
			Global_1347477.f_204 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(pedParam5))
				DECORATOR::DECOR_SET_INT(pedParam5, "honor_bank", iParam0);
		
			if (!bParam1)
			{
				if (iParam0 > func_165(14))
				{
					str = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					str = "Honor_Increase_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_277(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
				else
					func_277(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
			}
		}
		else
		{
			func_275(func_274(joaat("honor_negative_total")), 1);
			Global_1347477.f_204 = 0;
		
			if (!bParam1)
			{
				if (iParam0 < func_165(4))
				{
					str = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					str = "Honor_Decrease_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_277(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
				else
					func_277(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
			}
		}
	}

	statId = { func_274(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&statId, Global_40.f_11095.f_35, true);

	if (!bParam1)
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);

	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
		func_278(10, 1);

	return;
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3, Ped pedParam4, BOOL bParam5) // Position - 0x552A Hash - 0x686957A ^0x8F82E8D6
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = pedParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
	return;
}

BOOL func_168(int iParam0) // Position - 0x5589 Hash - 0x1965A61D ^0x1965A61D
{
	int num;

	num = func_169(iParam0, 1);
	return num >= 0 && num < 143;
}

int func_169(int iParam0, int iParam1) // Position - 0x55A8 Hash - 0x18EDA9F0 ^0x18EDA9F0
{
	switch (iParam0)
	{
		case -2108030724:
			return 138;
	
		case -2060865802:
			return 116;
	
		case -2019711818:
			return 9;
	
		case -2009137002:
			return 34;
	
		case -2008558277:
			return 59;
	
		case -1960242214:
			return 125;
	
		case -1958832660:
			return 49;
	
		case -1923503631:
			return 117;
	
		case -1891628345:
			return 124;
	
		case -1887999095:
			return 89;
	
		case -1882503209:
			return 50;
	
		case -1859413640:
			return 28;
	
		case -1859023693:
			return 64;
	
		case -1848895400:
			return 113;
	
		case -1841331114:
			return 94;
	
		case -1829339703:
			return 141;
	
		case -1824429070:
			return 66;
	
		case -1787770845:
			return 16;
	
		case -1761578407:
			return 17;
	
		case -1761189332:
			return 115;
	
		case -1714262909:
			return 76;
	
		case -1686810506:
			return 112;
	
		case -1646022773:
			return 13;
	
		case -1636964661:
			return 10;
	
		case -1614148516:
			return 48;
	
		case -1609238411:
			return 21;
	
		case -1568839185:
			return 6;
	
		case -1505275983:
			return 31;
	
		case -1494823099:
			return 61;
	
		case -1481450947:
			return 53;
	
		case -1457751321:
			return 123;
	
		case -1427565340:
			return 47;
	
		case -1420566543:
			return 23;
	
		case -1308658310:
			return 45;
	
		case -1300082860:
			return 51;
	
		case -1287911066:
			return 2;
	
		case -1283611369:
			return 78;
	
		case -1272862985:
			return 139;
	
		case -1243267511:
			return 81;
	
		case -1240932004:
			return 140;
	
		case -1208846034:
			return 24;
	
		case -1177787273:
			return 127;
	
		case -1144800837:
			return 111;
	
		case -1109016944:
			return 15;
	
		case -1084929085:
			return 4;
	
		case -1061274876:
			return 96;
	
		case -1053108445:
			return 84;
	
		case -986176781:
			return 25;
	
		case -979575591:
			return 103;
	
		case -968854939:
			return 68;
	
		case -920971071:
			return 83;
	
		case -919236330:
			return 79;
	
		case -890175011:
			return 137;
	
		case -849582265:
			return 92;
	
		case -834293086:
			return 91;
	
		case -780455182:
			return 8;
	
		case -777592153:
			return 3;
	
		case -777150535:
			return 100;
	
		case -763376358:
			return 55;
	
		case -739986731:
			return 110;
	
		case -715636193:
			return 95;
	
		case -709811179:
			return 20;
	
		case -654238687:
			return 104;
	
		case -641229542:
			return 46;
	
		case -607940493:
			return 118;
	
		case -599506500:
			return 38;
	
		case -544327665:
			return 106;
	
		case -499529359:
			return 74;
	
		case -490142739:
			return 130;
	
		case -415839138:
			return 98;
	
		case -409986722:
			return 88;
	
		case -357364973:
			return 44;
	
		case -321841939:
			return 11;
	
		case -261997819:
			return 37;
	
		case -232974724:
			return 135;
	
		case -161804536:
			return 29;
	
		case -148407339:
			return 97;
	
		case -35775921:
			return 40;
	
		case -30872859:
			return 30;
	
		case -657632:
			return 114;
	
		case 0:
			return 143;
	
		case 58958195:
			return 72;
	
		case 74587361:
			return 35;
	
		case 118535038:
			return 101;
	
		case 149709049:
			return 67;
	
		case 173549940:
			return 22;
	
		case 221420861:
			return 132;
	
		case 230001763:
			return 107;
	
		case 233600584:
			return 54;
	
		case 247563739:
			return 52;
	
		case 308500632:
			return 136;
	
		case 330993088:
			return 131;
	
		case 373034311:
			return 0;
	
		case 397377585:
			return 87;
	
		case 404434344:
			return 18;
	
		case 425000526:
			return 75;
	
		case 429544447:
			return 93;
	
		case 435290930:
			return 60;
	
		case 464413478:
			return 128;
	
		case 503180747:
			return 19;
	
		case 513110082:
			return 121;
	
		case 657666087:
			return 70;
	
		case 677950956:
			return 142;
	
		case 683269210:
			return 134;
	
		case 733338689:
			return 32;
	
		case 870958936:
			return 1;
	
		case 918206817:
			return 82;
	
		case 921081956:
			return 108;
	
		case 939555152:
			return 27;
	
		case 949011950:
			return 109;
	
		case 1034793488:
			return 33;
	
		case 1048086072:
			return 26;
	
		case 1091556515:
			return 122;
	
		case 1120968795:
			return 105;
	
		case 1124200691:
			return 43;
	
		case 1154568952:
			return 12;
	
		case 1187689415:
			return 126;
	
		case 1187917501:
			return 71;
	
		case 1284679164:
			return 85;
	
		case 1335921989:
			return 58;
	
		case 1342653896:
			return 69;
	
		case 1347913620:
			return 5;
	
		case 1351526287:
			return 86;
	
		case 1424723727:
			return 39;
	
		case 1431862613:
			return 80;
	
		case 1464664327:
			return 129;
	
		case 1490223565:
			return 57;
	
		case 1505050944:
			return 77;
	
		case 1519228573:
			return 42;
	
		case 1519472817:
			return 63;
	
		case 1535254161:
			return 133;
	
		case 1673499939:
			return 99;
	
		case 1734766691:
			return 65;
	
		case 1801731633:
			return 56;
	
		case 1833243216:
			return 102;
	
		case 1861313914:
			return 62;
	
		case 1937333853:
			return 7;
	
		case 1982045664:
			return 90;
	
		case 1986618633:
			return 119;
	
		case 2000209669:
			return 120;
	
		case 2072029413:
			return 36;
	
		case 2072069278:
			return 73;
	
		case 2134589549:
			return 14;
	
		case 2135153015:
			return 41;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_170() // Position - 0x5BF1 Hash - 0x1DC81B2A ^0xFE6A99F
{
	func_279(&(Global_1879514.f_6), 16);
	return;
}

BOOL func_171(int iParam0, float fParam1) // Position - 0x5C05 Hash - 0xA31B61CD ^0xC7AA8196
{
	if (func_91(iParam0))
		return true;

	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uLocal_168[iParam0 /*5*/]) >= fParam1)
		return true;

	return false;
}

float func_172(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x5C2F Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_173() // Position - 0x5C4D Hash - 0xBA2FE0DB ^0xBA2FE0DB
{
	return func_280();
}

BOOL func_174() // Position - 0x5C59 Hash - 0xC131FBEB ^0x955222E7
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) <= 4;
}

BOOL func_175(int iParam0) // Position - 0x5C79 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_281(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_176() // Position - 0x5CD8 Hash - 0x3514F777 ^0x95768D3F
{
	if (func_124(&uLocal_146) > 500)
		return true;

	return false;
}

BOOL func_177(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x5CF1 Hash - 0x5CE04B94 ^0xEC2FA7B8
{
	return func_282(pedParam0, ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), iParam2);
}

void func_178(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5D09 Hash - 0xDD2BEEAA ^0xDD2BEEAA
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0), 24);

	if (func_211(&unk) || func_162(&unk))
		func_163(&unk, bParam1, false);

	if (bParam2)
		func_212(&iLocal_167, iParam0);

	return;
}

int func_179(const char* sParam0, char* sParam1) // Position - 0x5D46 Hash - 0x71FD82C9 ^0xBC5D4EEB
{
	return BUILTIN::CEIL(1000f * ENTITY::GET_ANIM_DURATION(sParam0, sParam1));
}

void func_180(var uParam0, BOOL bParam1, int iParam2) // Position - 0x5D60 Hash - 0x37D64B11 ^0xE7060A9E
{
	func_283(iParam2);

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
		uParam0->f_13 = func_284(0);

	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
				if (!(*uParam0 & 33554432 != 0))
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_285(uParam0, 33554432);
					else if (!(*uParam0 & 8192 != 0))
						if (func_286(true))
							func_285(uParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_286(true) || *uParam0 & 8192 != 0)
					func_287(uParam0, 33554432);
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
			if (func_288(uParam0))
				uParam0->f_15 = func_200();
		}
		else if (uParam0->f_15 > 0)
		{
			if (func_200() - uParam0->f_15 > 500)
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

	func_289(uParam0);
	return;
}

BOOL func_181(Ped pedParam0, var uParam1) // Position - 0x5F2B Hash - 0x3A755B4E ^0xDBAC23C2
{
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Ped pedIndexFromEntityIndex;

	if (!EVENT::_0x1D1B448D719415AB(pedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(pedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_acquaintance_ped_dead"):
		case joaat("event_ped_seen_dead_ped"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("event_dead_ped_found"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
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
		
			if (!func_290(pedParam0, uParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_291(pedParam0, pedIndexFromEntityIndex) <= func_292(uParam1))
				return true;
			break;
	}

	return false;
}

void func_182(Ped pedParam0, var uParam1, int iParam2) // Position - 0x6003 Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		uParam1->f_10 = pedParam0;

	if (func_293(iParam2, 1, 1, 1, 0))
		func_285(uParam1, 2048);

	uParam1->f_16 = iParam2;
	func_294(uParam1, true);
	func_295();
	return;
}

BOOL func_183(Ped pedParam0, var uParam1) // Position - 0x6040 Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_296(pedParam0, !(*uParam1 & 268435456 != 0), !(*uParam1 & 536870912 != 0), !(*uParam1 & 1073741824 != 0), 0, false))
		{
			if (uParam1->f_12 < 5f)
				num = 95f;
			else if (uParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_297(uParam1);
		
			if (func_298(uParam1, pedParam0, num, num2))
			{
				if (uParam1->f_2 == 0)
					uParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - uParam1->f_2;
				num4 = func_299(uParam1);
			
				if (uParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_294(uParam1, true);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_294(uParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_184(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0x6127 Hash - 0x899101A2 ^0xBCA80002
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

	if (func_300(eParam1, !(*uParam2 & 268435456 != 0), !(*uParam2 & 536870912 != 0), !(*uParam2 & 1073741824 != 0), 0))
	{
		if (uParam2->f_12 < 5f)
			num = 95f;
		else if (uParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_297(uParam2);
	
		if (func_298(uParam2, pedParam0, num, num2))
		{
			if (uParam2->f_2 == 0)
				uParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2 > func_299(uParam2))
				{
					func_294(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_185(Ped pedParam0, var uParam1) // Position - 0x61FD Hash - 0xC62373A5 ^0xD1ADE674
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
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == pedParam0)
			return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);

	if (func_290(pedParam0, uParam1, pedIndexFromEntityIndex))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3 > func_299(uParam1))
		{
			customDistance = func_297(uParam1);
		
			if (uParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_186(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6306 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_301(bParam1, bParam2, bParam3);

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

BOOL func_187(var uParam0, int iParam1) // Position - 0x643B Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_200();
	num2 = num - uParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_188(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0x6472 Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_302(uParam2);
		
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
				PED::_0xD355E2F1BB41087E(pedParam1, num);
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
				PED::_0xD355E2F1BB41087E(pedParam1, 5f);
			else
				PED::_0xD355E2F1BB41087E(pedParam1, num);
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
	
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), pedParam1, shotNearRecentlyTime) && PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= num2)
		{
			if (func_196(uParam2, pedParam1))
			{
				func_294(uParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_189(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0x6579 Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (uParam2->f_12 < (float)func_303(uParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_196(uParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_294(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_190(Ped pedParam0, Ped pedParam1, var uParam2, BOOL bParam3) // Position - 0x65E4 Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_304(uParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_22))
				{
					func_294(uParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, uParam2->f_27))
				{
					func_294(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords, false, false);
				
					if (func_305(pedParam1, entityCoords, outCoords))
					{
						func_294(uParam2, true);
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
					func_294(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords2, false, false);
				
					if (func_305(pedParam1, entityCoords, outCoords2))
					{
						func_294(uParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_191(Ped pedParam0, var uParam1) // Position - 0x672C Hash - 0xEB9C0B04 ^0x4A60CD30
{
	int i;
	float num;
	var unk;
	Vector3 entityCoords;
	BOOL flag;
	BOOL flag2;

	unk = 2;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	flag = *uParam1 & 4096 != 0;

	for (i = 0; i < Global_1935630.f_39; i = i + 1)
	{
		if (!func_290(pedParam0, uParam1, Global_1935630.f_34[i]) || pedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_306(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_307(Global_1935630.f_34[i]))
			{
				if (num < 35f)
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") || DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB"))
					{
						unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
						unk[1 /*3*/] = { entityCoords };
						uParam1->f_10 = pedParam0;
						return true;
					}
				}
			}
		
			if (func_308(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_309(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_310(uParam1, pedParam0, num, i))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
		}
	}

	return false;
}

BOOL func_192(var uParam0, var uParam1) // Position - 0x690C Hash - 0xF223CED2 ^0xA472D0A4
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

BOOL func_193(var uParam0, int iParam1) // Position - 0x6984 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_200();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_194(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x69B3 Hash - 0x8119700D ^0x42D5A76B
{
	Ped entity2;
	Vehicle playersLastVehicle;
	Entity entity;

	entity2 = PLAYER::PLAYER_PED_ID();

	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(pedParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(pedParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, entity2, true, true))
				return 1;
		
			playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		
			if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle))
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, playersLastVehicle, true, true))
					return 1;
		
			if (PED::IS_PED_ON_MOUNT(entity2))
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(entity2)))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PED::GET_MOUNT(entity2), true, true))
						return 1;
			else if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
				if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
						return 1;
		}
	}
	else if (!bParam2)
	{
		if (func_311(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_312(entity2, pedParam0))
		return 1;

	if (PED::_GET_PED_GRAPPLER(PLAYER::PLAYER_PED_ID()) == pedParam0)
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
			return 1;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_BEING_JACKED(pedParam0))
			if (PED::GET_PEDS_JACKER(pedParam0) == entity2)
				return 1;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(entity2, 8, 0))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(pedParam0))
			return 1;

	return 0;
}

int func_195(var uParam0, Ped pedParam1) // Position - 0x6B39 Hash - 0x42A83B1F ^0x1C8C6A08
{
	int _int;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam1, "iDamageFrame"))
		return 1;

	_int = DECORATOR::DECOR_GET_INT(pedParam1, "iDamageFrame");

	if (_int < 0)
		DECORATOR::DECOR_SET_INT(pedParam1, "iDamageFrame", uParam0->f_5);
	else if (uParam0->f_5 > _int + 10)
		return 1;

	return 0;
}

BOOL func_196(var uParam0, Ped pedParam1) // Position - 0x6B89 Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_313(uParam0))
		return true;

	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam1, 400))
		return true;

	if (PED::IS_PED_DEAD_OR_DYING(pedParam1, true))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(pedParam1, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(pedParam1))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(pedParam1, 10, true))
		return false;

	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
		return true;

	if (!PED::IS_PED_RAGDOLL(pedParam1))
		return true;

	return false;
}

BOOL func_197(Ped pedParam0, Ped pedParam1) // Position - 0x6C26 Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_120(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_198() // Position - 0x6C73 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_199(var uParam0, Ped pedParam1) // Position - 0x6C7B Hash - 0x6BE02E92 ^0x188EF1A2
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
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, false) };
	
		if (func_314(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			uParam0->f_9 = func_200();
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
						if (func_214(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								uParam0->f_9 = func_200();
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

int func_200() // Position - 0x6D3C Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_201() // Position - 0x6D5A Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_200() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_202(var uParam0, Ped pedParam1) // Position - 0x6DA7 Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_292(uParam0);

	if (uParam0->f_12 > func_315(uParam0) && uParam0->f_12 > num)
		return false;

	num3 = func_316(pedParam1);
	num2 = func_317(uParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (uParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, uParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, uParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, uParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_203(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0x6EC3 Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (uParam2->f_12 > 4f)
		return false;

	flag = *uParam2 & 256 != 0;
	flag2 = *uParam2 & 524288 != 0;
	flag3 = *uParam2 & 128 != 0;
	return func_318(pedParam0, eParam1, flag, flag3, uParam2->f_12, flag2);
}

BOOL func_204(Ped pedParam0, var uParam1) // Position - 0x6F0B Hash - 0x23BB3370 ^0x36BD6CCF
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
		if (func_319(pedParam0, uParam1, true))
			return true;
	
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam0, Global_35, true, false) == 1)
			return true;
	}

	jackTarget = PED::GET_JACK_TARGET(Global_35);

	if (ENTITY::DOES_ENTITY_EXIST(jackTarget) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(jackTarget, true))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return true;

	if (!EVENT::_0x1D1B448D719415AB(pedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(pedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_shocking_seen_ped_robbed"):
		case joaat("event_shocking_seen_ped_intimidated"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("event_shocking_mount_stolen"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (pedIndexFromEntityIndex != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedIndexFromEntityIndex2))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			return true;
	
		case joaat("event_shocking_entity_hogtied"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, -1082130432, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!func_320(uParam1, pedParam0))
						if (func_214(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_205(Ped pedParam0, var uParam1) // Position - 0x7164 Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_321(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_206(var uParam0, int iParam1) // Position - 0x719D Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_200();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_207(var uParam0, var uParam1) // Position - 0x71CC Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_208(Ped pedParam0, var uParam1) // Position - 0x71E0 Hash - 0xA06525EC ^0x3DA5C48E
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (uParam1->f_4 == 0)
		uParam1->f_4 = func_200();
	else if (func_200() - uParam1->f_4 > func_322(uParam1))
		return func_323(pedParam0, uParam1, false, -1082130432);

	return false;
}

BOOL func_209(var uParam0, Ped pedParam1) // Position - 0x722D Hash - 0x2978E171 ^0x71DC5FB1
{
	Entity pedSourceOfDeath;
	Ped pedIndexFromEntityIndex;

	pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(pedParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(pedSourceOfDeath))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(pedParam1, "bIgnoreDamageChecking"))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedSourceOfDeath);

	if (Global_35 == pedIndexFromEntityIndex || Global_1935630.f_40 == pedIndexFromEntityIndex)
		return true;

	return false;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x7281 Hash - 0xA17D549C ^0x7904F79
{
	switch (iParam0)
	{
		case 1:
			return "MUD3_RET_H_WAVE";
	
		case 2:
			return "MUD3_RET_N_WAVE";
	
		case 4:
			return "MUD3_RET_H_TEFT";
	
		case 8:
			return "MUD3_RET_HORSE";
	
		case 16:
			return "MUD3_NO_HORSE_0";
	
		case 32:
			return "MUD3_NO_HORSE_1";
	
		case 64:
			return "MUD3_RET_H_RID";
	
		case 128:
			return "MUD3_GRIEFJIMMY";
	
		case 256:
			return "MUD3_RE_GRIEF";
	
		default:
		
	}

	return "";
}

BOOL func_211(const char* sParam0) // Position - 0x7309 Hash - 0xD6E12BEB ^0xEA2A5D7A
{
	return AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0);
}

void func_212(var uParam0, int iParam1) // Position - 0x7317 Hash - 0xF55E891F ^0xF55E891F
{
	func_324(uParam0, iParam1);
	return;
}

void func_213(Ped pedParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12) // Position - 0x7327 Hash - 0x5F6A3245 ^0x98C6E7C9
{
	Ped mount;
	Vehicle vehiclePedIsIn;
	Ped pedInDraftHarness;
	float num;
	int i;

	bParam4;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (!PED::IS_PED_HUMAN(pedParam0))
		return;

	if (func_325(uParam1, 0f, 0f, 0f))
		return;

	if (fParam5 < 0f || fParam6 < 0f || fParam7 < 0f || fParam8 < 0f)
		return;

	if (!(fParam5 > fParam6) || !(fParam5 > fParam7) || !(fParam5 > fParam8) || !(fParam6 > fParam7) || !(fParam6 > fParam8) || !(fParam7 > fParam8))
		return;

	mount = PED::GET_MOUNT(pedParam0);

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);

	num = func_214(pedParam0, uParam1, true);

	if (num <= fParam5 && num > fParam6 && num > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(mount, 1.75f);
	
		if (func_326() && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && VEHICLE::IS_DRAFT_VEHICLE(vehiclePedIsIn))
		{
			for (i = 0; i < 6; i = i + 1)
			{
				pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(vehiclePedIsIn, i);
			
				if (!ENTITY::IS_ENTITY_DEAD(pedInDraftHarness))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedInDraftHarness, 1.75f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(vehiclePedIsIn, PED::_0x46BF2A810679D6E6(pedInDraftHarness, 1.75f));
				}
			}
		}
	}

	if (num <= fParam6 && num > fParam7)
	{
		if (bParam11)
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedParam0, 1.5f);
	
		if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(mount, 1.25f);
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && VEHICLE::IS_DRAFT_VEHICLE(vehiclePedIsIn))
		{
			for (i = 0; i < 6; i = i + 1)
			{
				pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(vehiclePedIsIn, i);
			
				if (!ENTITY::IS_ENTITY_DEAD(pedInDraftHarness))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedInDraftHarness, 1.25f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(vehiclePedIsIn, PED::_0x46BF2A810679D6E6(pedInDraftHarness, 1.25f));
				}
			}
		}
	}

	if (num <= fParam7)
	{
		if (bParam11)
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedParam0, 1f);
	
		if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(mount, 1f);
		
			if (iParam9 == 1)
				if (PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(mount, 3))
					PED::_SET_PED_MOTIVATION(mount, 3, 0f, 0);
		}
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && VEHICLE::IS_DRAFT_VEHICLE(vehiclePedIsIn))
		{
			for (i = 0; i < 6; i = i + 1)
			{
				pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(vehiclePedIsIn, i);
			
				if (!ENTITY::IS_ENTITY_DEAD(pedInDraftHarness))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedInDraftHarness, 1f);
				
					if (iParam9 == 1)
						if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
							if (PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(mount, 3))
								PED::_SET_PED_MOTIVATION(pedInDraftHarness, 3, 0f, 0);
				
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(vehiclePedIsIn, PED::_0x46BF2A810679D6E6(pedInDraftHarness, 1f));
				}
			}
		}
	}

	if (bParam4)
	{
		if (num <= fParam8)
		{
			if (pedParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::PLAYER_ID(), 28, true);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(mount) && !func_216(pedParam0, SCRIPT_TASK_DISMOUNT_ANIMAL))
				TASK::TASK_DISMOUNT_ANIMAL(pedParam0, iParam12, 0, 0, 0, 0);
		
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn) && !func_216(pedParam0, SCRIPT_TASK_LEAVE_ANY_VEHICLE))
				TASK::TASK_LEAVE_ANY_VEHICLE(pedParam0, 0, iParam12);
		}
	}

	return;
}

float func_214(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x7664 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

float func_215(var uParam0) // Position - 0x768C Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_68(uParam0))
		return uParam0->f_1;

	if (func_221(uParam0))
		return uParam0->f_2;

	return func_157() - uParam0->f_1;
}

BOOL func_216(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x76C1 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

Ped func_217(int iParam0) // Position - 0x76EA Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

BOOL func_218(int iParam0) // Position - 0x7716 Hash - 0x3181E2E5 ^0x3181E2E5
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_327(iParam0, 2) || func_327(iParam0, 4) || func_327(iParam0, 8))
		return true;

	return false;
}

void func_219(int iParam0, BOOL bParam1) // Position - 0x7764 Hash - 0xE2A96183 ^0x7447BC30
{
	int idOfThisThread;

	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_328(iParam0);
	func_143(iParam0);
	func_230(iParam0);
	func_227(iParam0);

	if (func_228(iParam0))
	{
		idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	
		if (func_229(iParam0) != idOfThisThread)
			return;
	}

	func_329(iParam0, 2);

	if (bParam1)
		func_329(iParam0, 16);

	return;
}

BOOL func_220() // Position - 0x77CF Hash - 0x2F3FC5BE ^0x2F3FC5BE
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_218(i))
			return true;
	}

	return false;
}

BOOL func_221(var uParam0) // Position - 0x77F7 Hash - 0x39705408 ^0x39705408
{
	return func_127(*uParam0, 2);
}

void func_222(var uParam0, int iParam1) // Position - 0x7807 Hash - 0xF55E891F ^0xF55E891F
{
	func_330(uParam0, iParam1);
	return;
}

void func_223(Ped pedParam0) // Position - 0x7817 Hash - 0xE7050FE7 ^0xE13A2EAB
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

Hash func_224(eStackSize essParam0) // Position - 0x787F Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_66(essParam0))
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

	if (!func_66(essParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = essParam0;
			Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_225(eStackSize essParam0) // Position - 0x7960 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_66(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_134(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

int func_226(int iParam0) // Position - 0x79FC Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

void func_227(int iParam0) // Position - 0x7A15 Hash - 0x79C2D19 ^0x7856ADEC
{
	int threadId;

	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	threadId = func_229(iParam0);

	if (!SCRIPTS::DOES_THREAD_EXIST(threadId))
		func_331(iParam0);
	else if (!SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
		func_331(iParam0);

	return;
}

BOOL func_228(int iParam0) // Position - 0x7A63 Hash - 0x79966B74 ^0xA532C902
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_2;
}

int func_229(int iParam0) // Position - 0x7A91 Hash - 0x79966B74 ^0xE90595E1
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_3;
}

void func_230(int iParam0) // Position - 0x7ABF Hash - 0x37EBB9FA ^0xDB7EB9A3
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}

	return;
}

void func_231(Ped pedParam0) // Position - 0x7B05 Hash - 0x15D3E697 ^0xE788B98B
{
	int attributeIndex;
	int attributeIndex2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	attributeIndex = func_332();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(pedParam0, attributeIndex, 0);
	attributeIndex2 = func_333();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(pedParam0, attributeIndex2, 0);
	PED::_SET_HEALTH_RECHARGE_MULTIPLIER(pedParam0, 1f);
	PED::_SET_STAMINA_RECHARGE_MULTIPLIER(pedParam0, 1f);
	PED::_SET_STAMINA_DEPLETION_MULTIPLIER(pedParam0, 1f);
	return;
}

BOOL func_232(Ped pedParam0) // Position - 0x7B62 Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

BOOL func_233(Hash hParam0) // Position - 0x7BA4 Hash - 0x8E77EB62 ^0x8E77EB62
{
	if (!func_334(hParam0))
		return false;

	if (!func_335())
		return true;

	return false;
}

void func_234(var uParam0) // Position - 0x7BC7 Hash - 0x6DB42F4F ^0x2D3D8169
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
	return;
}

void func_235(int iParam0, Hash hParam1, var uParam2) // Position - 0x7BE0 Hash - 0x2FE00612 ^0x68508C65
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	!func_336(iParam0, hParam1);
	!func_337(iParam0, hParam1.f_1);
	return;
}

void func_236(var uParam0) // Position - 0x7C1C Hash - 0x7858D7C0 ^0x7858D7C0
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		func_338(&uParam0->[i /*94*/]);
	}

	return;
}

void func_237(var uParam0) // Position - 0x7C40 Hash - 0x3F59DF82 ^0x3F59DF82
{
	int i;

	for (i = 0; i < 57; i = i + 1)
	{
		uParam0->[i] = 0;
	}

	return;
}

void func_238(var uParam0) // Position - 0x7C62 Hash - 0x92E3936E ^0xDB085754
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		uParam0->[i /*5*/] = 0;
		uParam0->[i /*5*/].f_1 = 0;
		uParam0->[i /*5*/].f_2 = 0;
		uParam0->[i /*5*/].f_3 = 0;
		uParam0->[i /*5*/].f_4 = 0;
	}

	return;
}

void func_239(int iParam0) // Position - 0x7CA7 Hash - 0xF98F3B32 ^0x8A036B17
{
	int i;

	iParam0->f_1 = 0f;
	*iParam0 = 0;

	for (i = 0; i < 23; i = i + 1)
	{
		if (i == -1)
		{
		}
		else
		{
			iParam0->f_2[i] = 0f;
		}
	}

	return;
}

void func_240(int iParam0, int iParam1) // Position - 0x7CDD Hash - 0xB69B78FC ^0xB22068A7
{
	int num;

	num = 100;
	*iParam1 = num;
	iParam1->f_1 = 0f;
	iParam1->f_2 = 0f;
	iParam1->f_3 = 0;
	return;
}

void func_241(int iParam0, int iParam1) // Position - 0x7CFD Hash - 0xD41D26E5 ^0x1EE19431
{
	int num;

	num = 0;

	if (iParam0 == 2)
		num = 50;

	*iParam1 = num;
	iParam1->f_1 = 0f;
	iParam1->f_2 = 0f;
	iParam1->f_3 = 0;
	return;
}

void func_242(BOOL bParam0) // Position - 0x7D26 Hash - 0x7100DF7A ^0xCD4606BC
{
	*bParam0 = 0;
	bParam0->f_1 = -1f;
	return;
}

void func_243(var uParam0) // Position - 0x7D37 Hash - 0x5F76BB50 ^0x40F56A0B
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
	return;
}

void func_244(var uParam0) // Position - 0x7D4F Hash - 0x92BF775F ^0x1739D63E
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	return;
}

BOOL func_245(Ped pedParam0) // Position - 0x7D62 Hash - 0xFE36340F ^0xD0208514
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_339(ENTITY::GET_ENTITY_MODEL(pedParam0)))
		return true;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseCompanion"))
		return true;

	return false;
}

BOOL func_246(Ped pedParam0) // Position - 0x7D9B Hash - 0x5B451C0F ^0xA001EC2B
{
	char* propertyName;

	propertyName = "HorseMission";

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, propertyName))
		return true;

	return false;
}

void func_247(int iParam0, Ped pedParam1) // Position - 0x7DC7 Hash - 0xA2BBC532 ^0xA2BBC532
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/] = pedParam1;
	return;
}

void func_248(int iParam0, int iParam1) // Position - 0x7DF3 Hash - 0xC63A3C98 ^0x20B85A45
{
	Ped ped;
	Hash entityModel;
	int num;
	int _int;
	int gameTimer;
	Hash hash;
	int attributeRank;
	float num2;
	int i;
	int attributeIndex;
	int attributeRank2;

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_217(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	entityModel = ENTITY::GET_ENTITY_MODEL(ped);
	num = func_340(entityModel);

	if (DECORATOR::DECOR_EXIST_ON(ped, "HorseGender"))
	{
		_int = DECORATOR::DECOR_GET_INT(ped, "HorseGender");
	}
	else
	{
		_int = func_341(ped);
		DECORATOR::DECOR_SET_INT(ped, "HorseGender", _int);
	}

	func_342(iParam0, entityModel);
	func_343(iParam0, num);
	func_344(iParam0, _int);
	gameTimer = -1;
	hash = -15;

	if (iParam1 != 0)
	{
		gameTimer = MISC::GET_GAME_TIMER();
		hash = func_345();
	}

	func_346(iParam0, iParam1);
	func_347(iParam0, gameTimer);
	func_348(iParam0, hash);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(ped, 7);
	num2 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_ATTRIBUTE_POINTS(ped, 7));
	func_150(iParam0, attributeRank);
	func_349(iParam0, num2);

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_350(i, &attributeIndex))
		{
			attributeRank2 = ATTRIBUTE::GET_ATTRIBUTE_RANK(ped, attributeIndex);
			func_351(iParam0, i, attributeRank2);
		}
	}

	return;
}

void func_249(int iParam0, int iParam1) // Position - 0x7F04 Hash - 0xA8C13CC2 ^0x5A312A36
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = iParam1;
	return;
}

int func_250(Ped pedParam0) // Position - 0x7F38 Hash - 0x416CD007 ^0xDAFE17A5
{
	Hash entityModel;
	Hash outfit;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (!PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(joaat("META_HORSE_SADDLE_ONLY"), entityModel))
		return 0;

	outfit = joaat("META_HORSE_SADDLE_ONLY");

	if (PED::_IS_META_PED_OUTFIT_EQUIPPED(pedParam0, outfit))
		return 1;

	return 0;
}

void func_251(Ped pedParam0) // Position - 0x7F95 Hash - 0xF32FB80D ^0xB662E625
{
	Player player;
	Hash entityModel;
	Hash defaultRelationshipGroupHash;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);

	if (func_245(pedParam0))
		return;

	player = PLAYER::PLAYER_ID();
	PLAYER::IS_PLAYER_DEAD(player);

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, false, true);

	PED::_CLEAR_ACTIVE_ANIMAL_OWNER(pedParam0, false);
	PED::SET_PED_OWNS_ANIMAL(Global_35, pedParam0, false);
	PED::_SET_PED_PERSONALITY(pedParam0, joaat("player_horse"));
	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	defaultRelationshipGroupHash = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(entityModel);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, defaultRelationshipGroupHash);
	ENTITY::SET_ENTITY_INVINCIBLE(pedParam0, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(pedParam0, 1);
	PED::_SET_PED_CAN_BE_LASSOED(pedParam0, false);
	PLAYER::_SET_PLAYER_MOUNT_STATE_ACTIVE(player, true);
	PED::REQUEST_PED_VISIBILITY_TRACKING(pedParam0);
	FLOCK::_SET_ANIMAL_IS_WILD(pedParam0, false);

	if (func_142(pedParam0))
	{
		num = func_114(pedParam0);
	
		if (func_352(num))
			PED::SET_PED_CONFIG_FLAG(pedParam0, 324, true);
	}

	PED::SET_PED_CONFIG_FLAG(pedParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 24, false);
	return;
}

BOOL func_252(int iParam0) // Position - 0x8100 Hash - 0xDEA08A5F ^0xDEA08A5F
{
	Hash hash;
	var unk;

	hash = func_353(iParam0);

	if (hash == 0)
		return false;

	unk = { func_354(false) };

	if (func_355(&unk, hash, false) > 0)
		return true;

	return false;
}

int func_253(int iParam0) // Position - 0x8135 Hash - 0x13121903 ^0xB823C4F3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_356(iParam0, &unk))
		return 0;

	unk30 = { unk.f_5 };
	unk30.f_4 = unk.f_9;

	if (!func_357(unk.f_4, &unk, &unk30, -1, -142743235, 0, false))
		return 0;

	return 1;
}

Ped func_254(int iParam0) // Position - 0x818B Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

Hash func_255(Ped pedParam0) // Position - 0x81BE Hash - 0xCBA0DE6B ^0x47A29D9A
{
	if (pedParam0 == joaat("a_c_horse_mp_mangy_backup"))
		return joaat("HORSE_BREED_MANGY_BACKUP");

	switch (pedParam0)
	{
		case joaat("a_c_horse_john_endlesssummer"):
			return 887669186;
	
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return joaat("HORSE_BREED_ARDENNES_IRONGREYROAN");
	
		case joaat("a_c_horse_arabian_black"):
			return joaat("HORSE_BREED_ARABIAN_BLACK");
	
		case joaat("a_c_horse_americanpaint_greyovero"):
			return joaat("HORSE_BREED_AMERICANPAINT_GREYOVERO");
	
		case joaat("a_c_horse_thoroughbred_bloodbay"):
			return joaat("HORSE_BREED_THOROUGHBRED_BLOODBAY");
	
		case joaat("a_c_horse_hungarianhalfbred_liverchestnut"):
			return -1754375530;
	
		case joaat("a_c_horse_suffolkpunch_redchestnut"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_REDCHESTNUT");
	
		case joaat("a_c_horse_americanpaint_tobiano"):
			return joaat("HORSE_BREED_AMERICANPAINT_TOBIANO");
	
		case joaat("a_c_horse_tennesseewalker_flaxenroan"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_FLAXENROAN");
	
		case joaat("a_c_horse_turkoman_silver"):
			return joaat("HORSE_BREED_TURKOMAN_SILVER");
	
		case joaat("a_c_horse_suffolkpunch_sorrel"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_SORREL");
	
		case joaat("a_c_horse_appaloosa_leopardblanket"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARDBLANKET");
	
		case joaat("a_c_horse_ardennes_bayroan"):
			return joaat("HORSE_BREED_ARDENNES_BAYROAN");
	
		case joaat("a_c_horse_arabian_redchestnut_pc"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT_PC");
	
		case joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN");
	
		case joaat("a_c_horse_missourifoxtrotter_amberchampagne"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
	
		case joaat("a_c_horse_kentuckysaddle_chestnutpinto"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
	
		case joaat("a_c_horse_nokota_whiteroan"):
			return joaat("HORSE_BREED_NOKOTA_WHITEROAN");
	
		case joaat("a_c_horse_americanstandardbred_black"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BLACK");
	
		case joaat("a_c_horse_mustang_grullodun"):
			return joaat("HORSE_BREED_MUSTANG_GRULLODUN");
	
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
	
		case joaat("a_c_horse_appaloosa_leopard"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARD");
	
		case joaat("a_c_horse_morgan_liverchestnut_pc"):
			return joaat("HORSE_BREED_MORGAN_LIVERCHESTNUT");
	
		case joaat("a_c_horse_morgan_flaxenchestnut"):
			return joaat("HORSE_BREED_MORGAN_FLAXENCHESTNUT");
	
		case joaat("a_c_horse_appaloosa_brownleopard"):
			return joaat("HORSE_BREED_APPALOOSA_BROWNLEOPARD");
	
		case joaat("a_c_horse_appaloosa_blacksnowflake"):
			return -1692268955;
	
		case joaat("a_c_horse_arabian_white"):
			return joaat("HORSE_BREED_ARABIAN_WHITE");
	
		case joaat("a_c_horse_murfreebrood_mange_02"):
			return -2011111190;
	
		case joaat("a_c_horse_hungarianhalfbred_darkdapplegrey"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
	
		case joaat("a_c_horse_tennesseewalker_redroan"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_REDROAN");
	
		case joaat("a_c_horse_ardennes_strawberryroan"):
			return joaat("HORSE_BREED_ARDENNES_STRAWBERRYROAN");
	
		case joaat("a_c_horse_murfreebrood_mange_03"):
			return -535752499;
	
		case joaat("a_c_horse_belgian_blondchestnut"):
			return joaat("HORSE_BREED_BELGIAN_BLONDCHESTNUT");
	
		case joaat("a_c_horse_thoroughbred_brindle"):
			return joaat("HORSE_BREED_THOROUGHBRED_BRINDLE");
	
		case joaat("a_c_horse_americanstandardbred_silvertailbuckskin"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
	
		case joaat("a_c_horse_americanpaint_overo"):
			return joaat("HORSE_BREED_AMERICANPAINT_OVERO");
	
		case joaat("a_c_horse_andalusian_darkbay"):
			return joaat("HORSE_BREED_ANDALUSIAN_DARKBAY");
	
		case joaat("a_c_horse_missourifoxtrotter_sablechampagne"):
			return -71211764;
	
		case joaat("a_c_horse_arabian_rosegreybay"):
			return joaat("HORSE_BREED_ARABIAN_ROSEGREYBAY");
	
		case joaat("a_c_horse_americanstandardbred_buckskin"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BUCKSKIN");
	
		case joaat("a_c_horse_kentuckysaddle_black"):
			return joaat("horse_breed_kentuckysaddle_black");
	
		case joaat("a_c_horse_tennesseewalker_dapplebay"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_DAPPLEBAY");
	
		case joaat("a_c_horse_hungarianhalfbred_piebaldtobiano"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
	
		case joaat("a_c_horse_shire_lightgrey"):
			return joaat("HORSE_BREED_SHIRE_LIGHTGREY");
	
		case joaat("a_c_horse_mustang_tigerstripedbay"):
			return joaat("HORSE_BREED_MUSTANG_TIGERSTRIPEDBAY");
	
		case joaat("a_c_horse_americanstandardbred_palominodapple"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
	
		case joaat("a_c_horse_arabian_grey"):
			return 2130706226;
	
		case joaat("a_c_horse_morgan_palomino"):
			return joaat("horse_breed_morgan_palomino");
	
		case joaat("a_c_horse_nokota_reversedappleroan"):
			return joaat("HORSE_BREED_NOKOTA_REVERSEDAPPLEROAN");
	
		case joaat("a_c_horse_tennesseewalker_mahoganybay"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_MAHOGANYBAY");
	
		case joaat("a_c_horse_mustang_goldendun"):
			return -1390353518;
	
		case joaat("a_c_horse_buell_warvets"):
			return -41062704;
	
		case joaat("a_c_horse_appaloosa_fewspotted_pc"):
			return joaat("HORSE_BREED_APPALOOSA_FEWSPOTTED");
	
		case joaat("a_c_horse_dutchwarmblood_chocolateroan"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
	
		case joaat("a_c_horse_andalusian_perlino"):
			return joaat("HORSE_BREED_ANDALUSIAN_PERLINO");
	
		case joaat("a_c_horse_andalusian_rosegray"):
			return joaat("HORSE_BREED_ANDALUSIAN_ROSEGRAY");
	
		case joaat("a_c_horse_shire_ravenblack"):
			return joaat("HORSE_BREED_SHIRE_RAVENBLACK");
	
		case joaat("a_c_horse_dutchwarmblood_sealbrown"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SEALBROWN");
	
		case joaat("a_c_horse_thoroughbred_reversedappleblack"):
			return joaat("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
	
		case joaat("a_c_horse_murfreebrood_mange_01"):
			return 2102774612;
	
		case joaat("a_c_horse_belgian_mealychestnut"):
			return joaat("HORSE_BREED_BELGIAN_MEALYCHESTNUT");
	
		case joaat("a_c_horse_tennesseewalker_goldpalomino_pc"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_GOLDPALOMINO");
	
		case joaat("a_c_horse_shire_darkbay"):
			return joaat("HORSE_BREED_SHIRE_DARKBAY");
	
		case joaat("a_c_horse_tennesseewalker_blackrabicano"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_BLACKRABICANO");
	
		case joaat("a_c_horse_tennesseewalker_chestnut"):
			return joaat("horse_breed_tennesseewalker_chestnut");
	
		case joaat("a_c_horse_turkoman_darkbay"):
			return joaat("HORSE_BREED_TURKOMAN_DARKBAY");
	
		case joaat("a_c_horse_morgan_bayroan"):
			return joaat("HORSE_BREED_MORGAN_BAYROAN");
	
		case joaat("a_c_horse_arabian_redchestnut"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT");
	
		case joaat("a_c_horse_arabian_warpedbrindle_pc"):
			return joaat("HORSE_BREED_ARABIAN_WARPEDBRINDLE");
	
		case joaat("a_c_horse_dutchwarmblood_sootybuckskin"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
	
		case joaat("a_c_horse_kentuckysaddle_silverbay"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_SILVERBAY");
	
		case joaat("a_c_horse_turkoman_gold"):
			return joaat("HORSE_BREED_TURKOMAN_GOLD");
	
		case joaat("a_c_horse_hungarianhalfbred_flaxenchestnut"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
	
		case joaat("a_c_donkey_01"):
			return joaat("HORSE_DONKEY");
	
		case joaat("a_c_horse_americanpaint_splashedwhite"):
			return joaat("HORSE_BREED_AMERICANPAINT_SPLASHEDWHITE");
	
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return joaat("HORSE_BREED_THOROUGHBRED_DAPPLEGREY");
	
		case joaat("a_c_horse_kentuckysaddle_grey"):
			return joaat("horse_breed_kentuckysaddle_grey");
	
		case joaat("a_c_horse_morgan_bay"):
			return joaat("HORSE_BREED_MORGAN_BAY");
	
		case joaat("a_c_horse_mustang_wildbay"):
			return joaat("HORSE_BREED_MUSTANG_WILDBAY");
	
		case joaat("a_c_horse_appaloosa_blanket"):
			return joaat("HORSE_BREED_APPALOOSA_BLANKET");
	
		case joaat("a_c_horse_nokota_blueroan"):
			return joaat("HORSE_BREED_NOKOTA_BLUEROAN");
	
		default:
		
	}

	return 0;
}

int func_256(int iParam0, Hash hParam1) // Position - 0x8652 Hash - 0x25A74014 ^0x25A74014
{
	Hash hash;
	var unk;
	var unk6;

	if (!func_358(hParam1, 0))
		return 0;

	if (!func_359(hParam1))
		return 0;

	if (func_252(iParam0))
		return 0;

	hash = func_353(iParam0);

	if (hash == 0)
		return 0;

	unk = { func_354(false) };
	unk.f_4 = hash;

	if (!func_360(hParam1, &unk6, &unk, 1, 752097756, false))
		return 0;

	return 1;
}

int func_257(var uParam0, var uParam1, var uParam2) // Position - 0x86BF Hash - 0xEEC53156 ^0xA03BD067
{
	BOOL flag;

	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;

	if (func_361())
	{
		if (func_362())
		{
			flag = false;
		
			if (!func_281(Global_1835011[15 /*74*/].f_1, true) && !func_266(42))
				flag = true;
		
			if (flag)
			{
				*uParam0 = func_363();
				*uParam1 = func_364();
				*uParam2 = func_365();
				return 1;
			}
			else
			{
				*uParam0 = func_366();
				*uParam1 = func_367();
				*uParam2 = func_368();
				return 1;
			}
		}
		else if (func_267())
		{
			if (!func_281(Global_1835011[60 /*74*/].f_1, true))
			{
				*uParam0 = func_369();
				*uParam1 = func_370();
				*uParam2 = func_371();
				return 1;
			}
			else
			{
				*uParam0 = func_372();
				*uParam1 = func_373();
				*uParam2 = func_374();
				return 1;
			}
		}
	}
	else if (func_362())
	{
		*uParam0 = func_375();
		*uParam1 = func_376();
		*uParam2 = func_377();
		return 1;
	}
	else if (func_267())
	{
		*uParam0 = func_378();
		*uParam1 = func_379();
		*uParam2 = func_380();
		return 1;
	}

	return 0;
}

void func_258(int iParam0) // Position - 0x87D9 Hash - 0xCC180397 ^0xCC180397
{
	if (func_381() < iParam0)
		func_382(iParam0);

	return;
}

void func_259(int iParam0) // Position - 0x87F0 Hash - 0xD14C6A7D ^0x9C4D4670
{
	Ped ped;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	Hash blipHash;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL isPedInWrithe;
	BOOL flag8;
	Ped ped2;
	var entityCoords;
	float num;
	BOOL flag9;
	Hash modifierHash;
	Hash modifierHash2;
	float pedRemainingRevivalTime;
	Hash modifierHash3;
	int num2;
	Hash hash;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		return;

	ped = func_217(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	flag = false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		flag = true;

	if (!PED::IS_PED_READY_TO_RENDER(ped))
		return;

	if (func_327(iParam0, 64))
	{
		func_143(iParam0);
		return;
	}

	flag2 = false;

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		if (!(MAP::GET_BLIP_FROM_ENTITY(ped) == 0))
			flag2 = true;

	if (flag2)
		return;

	flag3 = func_266(42);

	if (flag)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	
		if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && flag3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_HORSE_SADDLE"), ped);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("blip_saddle"), true);
				func_383(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
	
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}

	flag4 = false;

	if (PED::IS_PED_ON_MOUNT(Global_35))
		if (Global_1935630.f_40 == ped)
			flag4 = true;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && flag4)
		func_143(iParam0);

	if (flag4)
		return;

	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
		return;

	flag5 = false;

	if (iParam0 == 0)
	{
		blipHash = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		blipHash = joaat("BLIP_STYLE_TEMPORARY_HORSE");
		flag5 = true;
	}
	else
	{
		return;
	}

	if (flag5)
	{
		flag6 = false;
	
		if (func_149(1) < 1)
			flag6 = true;
	
		if (flag6)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		
			return;
		}
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(blipHash, ped);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_384(&(Global_1900383[iParam0 /*45*/].f_26), flag5);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		return;

	flag7 = false;

	if (func_327(iParam0, 32))
		flag7 = true;

	isPedInWrithe = TASK::IS_PED_IN_WRITHE(ped);
	flag8 = false;
	ped2 = func_385(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (!ENTITY::IS_ENTITY_DEAD(ped2))
			if (PED::GET_MOUNT(ped2) == ped)
				flag8 = true;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	num = func_386(entityCoords, Global_36);
	flag9 = false;

	if (num > func_387(iParam0))
		flag9 = true;

	modifierHash = 0;
	modifierHash2 = 0;

	if (flag7)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			modifierHash = joaat("BLIP_MODIFIER_OBJECTIVE");
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (isPedInWrithe)
	{
		pedRemainingRevivalTime = PED::_GET_PED_REMAINING_REVIVAL_TIME(ped, true);
	
		if (flag9)
		{
			if (pedRemainingRevivalTime < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (pedRemainingRevivalTime < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (pedRemainingRevivalTime < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (pedRemainingRevivalTime <= 1f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (pedRemainingRevivalTime < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (pedRemainingRevivalTime < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (pedRemainingRevivalTime < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (pedRemainingRevivalTime <= 1f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (flag8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			modifierHash = joaat("BLIP_MODIFIER_HORSE_STOLEN");
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (flag9)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			modifierHash = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!flag9)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			modifierHash = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}

	if (modifierHash != 0)
	{
		func_388(Global_1900383[iParam0 /*45*/].f_26);
		func_389(Global_1900383[iParam0 /*45*/].f_26);
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, modifierHash);
	
		if (modifierHash == joaat("BLIP_MODIFIER_OBJECTIVE"))
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	}

	if (modifierHash2 != 0)
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, modifierHash2);

	if (PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == ped && flag3 && !isPedInWrithe)
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	else
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));

	if (func_232(ped) && !isPedInWrithe)
	{
		if (blipHash == joaat("BLIP_STYLE_PLAYER_HORSE"))
			modifierHash3 = joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED");
		else if (blipHash == joaat("BLIP_STYLE_TEMPORARY_HORSE"))
			modifierHash3 = joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED");
	
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, modifierHash3);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	}

	num2 = func_149(iParam0);
	hash = 0;

	if (iParam0 == 0)
	{
		switch (num2)
		{
			case 0:
				hash = joaat("blip_horse_owned_bonding_0");
				break;
		
			case 1:
				hash = joaat("blip_horse_owned_bonding_1");
				break;
		
			case 2:
				hash = joaat("blip_horse_owned_bonding_2");
				break;
		
			case 3:
				hash = joaat("blip_horse_owned_bonding_3");
				break;
		
			case 4:
				hash = joaat("blip_horse_owned_bonding_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (num2)
		{
			case 0:
				hash = joaat("blip_horse_temp_bonding_0");
				break;
		
			case 1:
				hash = joaat("blip_horse_temp_bonding_1");
				break;
		
			case 2:
				hash = joaat("blip_horse_temp_bonding_2");
				break;
		
			case 3:
				hash = joaat("blip_horse_temp_bonding_3");
				break;
		
			case 4:
				hash = joaat("blip_horse_temp_bonding_4");
				break;
		}
	}

	if (hash == 0)
	{
		MAP::_0x44813684F72B563C(ped, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(ped, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(ped, hash);
	}

	return;
}

BOOL func_260(Ped pedParam0, Hash hParam1) // Position - 0x8F66 Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_261(Ped pedParam0, Hash hParam1) // Position - 0x8F94 Hash - 0xA54F3032 ^0xF3A7B48B
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

BOOL func_262(Ped pedParam0, Hash hParam1) // Position - 0x8FE5 Hash - 0xA54F3032 ^0xF3A7B48B
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_260(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_263(Ped pedParam0) // Position - 0x9057 Hash - 0x446F1BDD ^0xF2F02FF7
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

int func_264() // Position - 0x9075 Hash - 0x990ADDDC ^0x7D78C12
{
	int num;

	num = func_390();

	if (num <= -320)
		return -320;

	if (num <= -280)
		return -280;

	if (num <= -240)
		return -240;

	if (num <= -200)
		return -200;

	if (num <= -160)
		return -160;

	if (num <= -120)
		return -120;

	if (num <= -80)
		return -80;

	if (num <= -40)
		return -40;

	if (num >= 320)
		return 320;

	if (num >= 280)
		return 280;

	if (num >= 240)
		return 240;

	if (num >= 200)
		return 200;

	if (num >= 160)
		return 160;

	if (num >= 120)
		return 120;

	if (num >= 80)
		return 80;

	if (num >= 40)
		return 40;

	return 0;
}

int func_265(int iParam0) // Position - 0x9188 Hash - 0xFA6423C1 ^0xB73AD7F1
{
	float num;
	float value;

	if (func_141() != -1)
		return iParam0;

	if (Global_1347477.f_2 + 120000 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}

	num = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3 = Global_1347477.f_3 + 1;

	if (Global_1347477.f_3 >= 10)
		num = 2f;
	else if (Global_1347477.f_3 >= 3)
		num = 1.5f;

	value = BUILTIN::TO_FLOAT(iParam0) * num;
	value = MISC::ABSF(value) < 1f ? value < 0f ? -1f : 1f : value;
	return BUILTIN::CEIL(value);
}

BOOL func_266(int iParam0) // Position - 0x922D Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_392(iParam0))
		return false;

	return func_393(iParam0);
}

BOOL func_267() // Position - 0x9249 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_141() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

int func_268(int iParam0, int iParam1, int iParam2) // Position - 0x926E Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_269(int iParam0) // Position - 0x9293 Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case -320:
		case 320:
			return 8;
	
		case -280:
		case 280:
			return 7;
	
		case -240:
		case 240:
			return 6;
	
		case -200:
		case 200:
			return 5;
	
		case -160:
		case 160:
			return 4;
	
		case -120:
		case 120:
			return 3;
	
		case -80:
		case 80:
			return 2;
	
		case -40:
		case 40:
			return 1;
	
		case 0:
			return 0;
	}

	return 0;
}

Hash func_270() // Position - 0x934A Hash - 0xA46C8CCA ^0x71ABACD2
{
	if (Global_40.f_11095.f_35 <= -320)
		return 1;
	else if (Global_40.f_11095.f_35 <= -280)
		return 2;
	else if (Global_40.f_11095.f_35 <= -240)
		return 3;
	else if (Global_40.f_11095.f_35 <= -200)
		return 4;
	else if (Global_40.f_11095.f_35 <= -160)
		return 5;
	else if (Global_40.f_11095.f_35 <= -120)
		return 6;
	else if (Global_40.f_11095.f_35 <= -80)
		return 7;
	else if (Global_40.f_11095.f_35 < 0)
		return 8;
	else if (Global_40.f_11095.f_35 <= 40)
		return 9;
	else if (Global_40.f_11095.f_35 >= 320)
		return 16;
	else if (Global_40.f_11095.f_35 >= 280)
		return 15;
	else if (Global_40.f_11095.f_35 >= 240)
		return 14;
	else if (Global_40.f_11095.f_35 >= 200)
		return 13;
	else if (Global_40.f_11095.f_35 >= 160)
		return 12;
	else if (Global_40.f_11095.f_35 >= 120)
		return 11;
	else if (Global_40.f_11095.f_35 >= 80)
		return 10;

	return 9;
}

void func_271(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x94A2 Hash - 0x25ED411C ^0xE6F9BEA9
{
	func_394(MISC::GET_GAME_TIMER() + iParam2, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, hParam0);
	func_395(hParam0);
	return;
}

void func_272(int iParam0) // Position - 0x94CE Hash - 0x1FF74488 ^0xA40278BB
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_396(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_273(BOOL bParam0) // Position - 0x9532 Hash - 0x9BEFE017 ^0x9BEFE017
{
	int num;
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	int num2;
	int i;

	flag = false;

	if (func_397(&num2))
	{
		if (num2 <= 0)
			return;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_398(i, &hash, &num))
			{
				if (!func_358(hash, 0))
				{
				}
				else
				{
					unlockHash = func_399(hash);
				
					if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						if (bParam0)
							UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, false);
						else
							goto 0xB5;
				
					if (func_400(hash) == joaat("weapon_mod"))
						if (num == 1014511709)
							flag = func_264() <= -160;
						else if (num == joaat("SHOP_HONOR_GOOD_4"))
							flag = func_264() >= 160;
					else
						flag = num == func_401();
				
					if (flag)
					{
						UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, true);
						flag = false;
					}
				}
			}
		}
	}

	return;
}

struct<2> func_274(int iParam0) // Position - 0x95F3 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_275(var uParam0, var uParam1, int iParam2) // Position - 0x9603 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x9613 Hash - 0xA17D549C ^0xE7069894
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
	
		case joaat("honor_event_antagonize"):
			return "HONOR_EVENT_ANTAGONIZE";
	
		case joaat("honor_event_cruel_death"):
			return "HONOR_EVENT_CRUEL_DEATH";
	
		case joaat("honor_event_cheat"):
			return "HONOR_EVENT_CHEAT";
	
		case joaat("honor_event_steal_wagon"):
			return "HONOR_EVENT_STEAL_WAGON";
	
		case joaat("honor_event_trampled_innocent"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
	
		case joaat("honor_event_kill_vermin"):
			return "HONOR_EVENT_KILL_VERMIN";
	
		case joaat("honor_event_kill_farm_animal"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
	
		case joaat("honor_event_long_absence"):
			return "HONOR_EVENT_LONG_ABSENCE";
	
		case joaat("honor_event_wanted_in_camp"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
	
		case joaat("honor_event_animal_bleedout"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
	
		case joaat("honor_event_steal_mule"):
			return "HONOR_EVENT_STEAL_MULE";
	
		case joaat("honor_event_theft"):
			return "HONOR_EVENT_THEFT";
	
		case joaat("honor_event_kill_horse"):
			return "HONOR_EVENT_KILL_HORSE";
	
		case joaat("honor_event_justice_served"):
			return "HONOR_EVENT_JUSTICE_SERVED";
	
		case joaat("honor_event_steal_donkey"):
			return "HONOR_EVENT_STEAL_DONKEY";
	
		case joaat("honor_event_steal_horse"):
			return "HONOR_EVENT_STEAL_HORSE";
	
		case joaat("honor_event_ambient_kill"):
			return "HONOR_EVENT_AMBIENT_KILL";
	
		case joaat("honor_event_item_request"):
			return "HONOR_EVENT_ITEM_REQUEST";
	
		case joaat("honor_event_ambient_ko"):
			return "HONOR_EVENT_AMBIENT_KO";
	
		case joaat("honor_event_intervened"):
			return "HONOR_EVENT_INTERVENED";
	
		case joaat("honor_event_scare"):
			return "HONOR_EVENT_SCARE";
	
		case joaat("honor_event_donated_game"):
			return "HONOR_EVENT_DONATED_GAME";
	
		case joaat("honor_event_loot_innocent"):
			return "HONOR_EVENT_LOOT_INNOCENT";
	
		default:
		
	}

	return "";
}

int func_277(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x975E Hash - 0x72075C17 ^0x3AC6D3FB
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = sParam5;
	num.f_2 = sParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_402(sParam0, sParam1, hParam2);
	return num2;
}

int func_278(int iParam0, int iParam1) // Position - 0x97C1 Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_403(iParam0))
		return 0;

	if (!func_361())
		return 0;

	if (!func_404(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

void func_279(int iParam0, int iParam1) // Position - 0x981C Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_280() // Position - 0x982D Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_281(int iParam0, BOOL bParam1) // Position - 0x984D Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_405(iParam0))
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

BOOL func_282(Ped pedParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x987E Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > iParam4;
}

void func_283(int iParam0) // Position - 0x98BF Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_406();

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
			func_407(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_284(int iParam0) // Position - 0x9A2B Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

void func_285(var uParam0, int iParam1) // Position - 0x9A3E Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_286(BOOL bParam0) // Position - 0x9A4F Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_408(bParam0, &unk, &unk2))
		return true;

	return false;
}

void func_287(var uParam0, int iParam1) // Position - 0x9A69 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_288(var uParam0) // Position - 0x9A7E Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_141() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_409(uParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_409(uParam0);

	if (ped == 0)
		return false;

	if (func_317(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	uParam0->f_14 = ped;
	return true;
}

void func_289(var uParam0) // Position - 0x9B18 Hash - 0x256C27DD ^0x256C27DD
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
		func_410(uParam0);

	return;
}

BOOL func_290(Ped pedParam0, var uParam1, Ped pedParam2) // Position - 0x9B3F Hash - 0x7FBD27D8 ^0x4C0BB7C4
{
	int num;
	int num2;
	Hash pedRelationshipGroupHash;
	Hash pedRelationshipGroupHash2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam2))
		num2 = func_317(pedParam2);
	else
		num2 = func_316(pedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_317(pedParam0);
	else
		num = func_316(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_411(*uParam1, 8388608))
		return true;

	pedRelationshipGroupHash = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0);
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

float func_291(Ped pedParam0, Ped pedParam1) // Position - 0x9C38 Hash - 0xF9959663 ^0xF9959663
{
	return func_120(pedParam0, pedParam1, true, true);
}

float func_292(var uParam0) // Position - 0x9C4A Hash - 0xD73B9827 ^0xDE12990D
{
	return uParam0->f_26;
}

BOOL func_293(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x9C56 Hash - 0x5A9E12AC ^0x5A9E12AC
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

void func_294(var uParam0, BOOL bParam1) // Position - 0x9CBB Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_285(uParam0, 134217728);
	else
		func_287(uParam0, 134217728);

	return;
}

void func_295() // Position - 0x9CE1 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_296(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x9CF5 Hash - 0x7ED53456 ^0xD7A590DD
{
	Ped ped;
	Player playerIndex;
	Entity outEntity;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
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
		if (ENTITY::IS_ENTITY_A_PED(outEntity) && pedParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity))
			return false;
	}

	if (Global_1935630.f_40 != 0)
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == pedParam0)
			return false;

	if (bParam3)
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_120(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_412(ped, 0)))
			if (func_413(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_297(var uParam0) // Position - 0x9E55 Hash - 0xD73B9827 ^0x8CE07B2A
{
	return uParam0->f_17;
}

BOOL func_298(var uParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0x9E61 Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (uParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_411(*uParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*uParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17))
			return true;

	return false;
}

int func_299(var uParam0) // Position - 0x9EC2 Hash - 0xD73B9827 ^0x372EC0B
{
	return uParam0->f_18;
}

BOOL func_300(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x9ECE Hash - 0x838BDEFB ^0xB1D5C032
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_412(ped, 0)))
			if (func_414(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

int func_301(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9F90 Hash - 0xC9655EC3 ^0x88C9AFE1
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

float func_302(var uParam0) // Position - 0xA02E Hash - 0xD73B9827 ^0x9F7F0764
{
	return uParam0->f_23;
}

int func_303(var uParam0) // Position - 0xA03A Hash - 0xD73B9827 ^0x303D0BA3
{
	return uParam0->f_21;
}

int func_304(var uParam0) // Position - 0xA046 Hash - 0xB202FF2A ^0xFD1BAB10
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

BOOL func_305(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0xA183 Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_282(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_306(Ped pedParam0) // Position - 0xA1C6 Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_415(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_307(Ped pedParam0) // Position - 0xA22C Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_308(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA258 Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_416(pedParam1))
			return false;

	num = 5f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_309(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA29F Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_416(pedParam1))
			return false;

	num = 10f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_310(var uParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0xA2EA Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_416(pedParam1))
		return false;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_311(Ped pedParam0, var uParam1) // Position - 0xA363 Hash - 0x64FF5121 ^0xD9ABCD76
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

BOOL func_312(Ped pedParam0, Ped pedParam1) // Position - 0xA3B0 Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (func_417(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_313(var uParam0) // Position - 0xA3F8 Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*uParam0 & 2 != 0);
}

BOOL func_314(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0xA408 Hash - 0x94A6C6F0 ^0xC51111A6
{
	float num;

	num = func_214(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

float func_315(var uParam0) // Position - 0xA434 Hash - 0xD73B9827 ^0x4905FA06
{
	return uParam0->f_24;
}

int func_316(Ped pedParam0) // Position - 0xA440 Hash - 0xEB445B10 ^0x2333A9CB
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_317(Ped pedParam0) // Position - 0xA498 Hash - 0x6E063231 ^0x9DB7CC76
{
	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(pedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_318(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0xA508 Hash - 0x89708384 ^0x6760E23F
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
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, Global_1935630.f_40, true, true))
			return 1;

	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(pedParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
			if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;
	
		if (PED::_0x947E43F544B6AB34(pedParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
			if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;
	
		if (bParam3)
			if (func_311(Global_35, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_120(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_120(pedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_319(Ped pedParam0, var uParam1, BOOL bParam2) // Position - 0xA678 Hash - 0x3E8B6245 ^0x84E29058
{
	Ped ped;
	Ped ped2;

	func_408(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!bParam2 || !func_320(uParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
				if (!bParam2 || !func_320(uParam1, ped2))
					if (func_214(ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_320(var uParam0, Ped pedParam1) // Position - 0xA766 Hash - 0x27FC2906 ^0xE97268FE
{
	Hash pedRelationshipGroupDefaultHash;

	if (DECORATOR::DECOR_EXIST_ON(pedParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(pedParam1, "bIsCriminal"))
		return true;

	if (PED::GET_PED_CONFIG_FLAG(pedParam1, 4, false))
		return true;

	pedRelationshipGroupDefaultHash = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(pedParam1);

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

BOOL func_321(int iParam0) // Position - 0xA7DC Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_267())
		return false;

	return func_281(Global_1347702[58 /*49*/].f_15, true);
}

int func_322(var uParam0) // Position - 0xA7FE Hash - 0xD73B9827 ^0xAC2E3C80
{
	return uParam0->f_20;
}

BOOL func_323(Ped pedParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0xA80A Hash - 0x9E17B061 ^0x19F2F061
{
	if (!bParam2)
		if (uParam1->f_4 == 0)
			return 0;

	if (iParam3 < 0f)
		iParam3 = uParam1->f_12;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return 1;
	else if (iParam3 < 1.5f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, Global_35))
			return 1;

	return 0;
}

void func_324(var uParam0, int iParam1) // Position - 0xA885 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_325(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0xA896 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_326() // Position - 0xA8BF Hash - 0x68FFA9E8 ^0x1B04A5AD
{
	if (func_141() == -1 && func_418(0, false, true))
		return Global_1357549.f_1495 & 512 != 0 && Global_1357549.f_1494 & 2 != 0;

	return false;
}

BOOL func_327(int iParam0, int iParam1) // Position - 0xA8FD Hash - 0x13701F47 ^0x86C54B27
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_24 && iParam1 != false;
}

void func_328(int iParam0) // Position - 0xA930 Hash - 0x4CB73698 ^0x4CB73698
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_419(iParam0, 32);
	func_151();
	return;
}

void func_329(int iParam0, int iParam1) // Position - 0xA95E Hash - 0xFDFFDD51 ^0x74BA7635
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 || iParam1;
	return;
}

void func_330(var uParam0, int iParam1) // Position - 0xA997 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_331(int iParam0) // Position - 0xA9AC Hash - 0xC2FEF89F ^0xC1FD7E19
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	return;
}

int func_332() // Position - 0xA9E4 Hash - 0xAD5CD544 ^0xAD5CD544
{
	return 5;
}

int func_333() // Position - 0xA9ED Hash - 0xD1F2E716 ^0xD1F2E716
{
	return 6;
}

BOOL func_334(Hash hParam0) // Position - 0xA9F6 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("a_c_horse_arabian_redchestnut_pc"):
		case joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc"):
		case joaat("a_c_horse_morgan_liverchestnut_pc"):
		case joaat("a_c_horse_appaloosa_fewspotted_pc"):
		case joaat("a_c_horse_andalusian_perlino"):
		case joaat("a_c_horse_tennesseewalker_goldpalomino_pc"):
		case joaat("a_c_horse_arabian_warpedbrindle_pc"):
			return true;
	}

	return false;
}

BOOL func_335() // Position - 0xAA38 Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

BOOL func_336(int iParam0, Hash hParam1) // Position - 0xAA49 Hash - 0x7F3C0687 ^0x18581D3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_356(iParam0, &unk))
		return false;

	unk30 = { func_420(hParam1, unk, joaat("SLOTID_HORSE_MANE"), false) };
	return func_421(unk30, 1);
}

BOOL func_337(int iParam0, Hash hParam1) // Position - 0xAA8D Hash - 0x7F3C0687 ^0x15BF14B9
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_356(iParam0, &unk))
		return false;

	unk30 = { func_420(hParam1, unk, joaat("SLOTID_HORSE_TAIL"), false) };
	return func_421(unk30, true);
}

void func_338(var uParam0) // Position - 0xAAD1 Hash - 0x6843C143 ^0xA531F0D1
{
	int i;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		uParam0->f_10[i /*8*/] = 0;
		uParam0->f_10[i /*8*/].f_1 = 0;
		uParam0->f_10[i /*8*/].f_2 = 0;
		uParam0->f_10[i /*8*/].f_3 = 0;
		uParam0->f_10[i /*8*/].f_4 = 0;
		uParam0->f_10[i /*8*/].f_5 = 0;
		uParam0->f_10[i /*8*/].f_6 = 0;
		uParam0->f_10[i /*8*/].f_7 = 0;
	}

	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
	return;
}

BOOL func_339(Hash hParam0) // Position - 0xAB78 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("a_c_horse_gang_bill"):
		case joaat("a_c_horse_gang_sean"):
		case joaat("a_c_horse_gang_john"):
		case joaat("a_c_horse_gang_karen"):
		case joaat("a_c_horse_gang_dutch"):
		case joaat("a_c_horse_eagleflies"):
		case joaat("a_c_horse_gang_javier"):
		case joaat("a_c_horse_gang_sadie"):
		case joaat("a_c_horse_gang_lenny"):
		case joaat("a_c_horse_gang_micah"):
		case joaat("a_c_horse_gang_hosea"):
		case joaat("a_c_horse_gang_sadie_endlesssummer"):
		case joaat("a_c_horse_gang_charles"):
		case joaat("a_c_horse_gang_uncle_endlesssummer"):
		case joaat("a_c_horse_gang_trelawney"):
		case joaat("a_c_horse_gang_kieran"):
		case joaat("a_c_horse_gang_uncle"):
		case joaat("a_c_horse_gang_charles_endlesssummer"):
			return true;
	}

	return false;
}

int func_340(Hash hParam0) // Position - 0xABFC Hash - 0xCBA0DE6B ^0x3EE4F4A1
{
	if (hParam0 == joaat("a_c_horse_mp_mangy_backup"))
		return joaat("breed_mangy_backup");

	switch (hParam0)
	{
		case joaat("a_c_horse_john_endlesssummer"):
			return joaat("breed_john_endlesssummer");
	
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return joaat("breed_ardennes_irongreyroan");
	
		case joaat("a_c_horse_arabian_black"):
			return joaat("breed_arabian_black");
	
		case joaat("a_c_horse_americanpaint_greyovero"):
			return joaat("breed_americanpaint_greyovero");
	
		case joaat("a_c_horse_thoroughbred_bloodbay"):
			return joaat("breed_thoroughbred_bloodbay");
	
		case joaat("a_c_horse_hungarianhalfbred_liverchestnut"):
			return joaat("breed_hungarianhalfbred_liverchestnut");
	
		case joaat("a_c_horse_gang_bill"):
			return joaat("breed_gang_bill");
	
		case joaat("a_c_horse_gang_sean"):
			return joaat("breed_gang_sean");
	
		case joaat("a_c_horse_suffolkpunch_redchestnut"):
			return joaat("breed_suffolkpunch_redchestnut");
	
		case joaat("a_c_horse_americanpaint_tobiano"):
			return joaat("breed_americanpaint_tobiano");
	
		case joaat("a_c_horse_tennesseewalker_flaxenroan"):
			return joaat("breed_tennesseewalker_flaxenroan");
	
		case joaat("a_c_horse_gang_john"):
			return joaat("breed_gang_john");
	
		case joaat("a_c_horse_turkoman_silver"):
			return joaat("breed_turkoman_silver");
	
		case joaat("a_c_horse_suffolkpunch_sorrel"):
			return joaat("breed_suffolkpunch_sorrel");
	
		case joaat("a_c_horse_appaloosa_leopardblanket"):
			return joaat("breed_appaloosa_leopardblanket");
	
		case joaat("a_c_horse_ardennes_bayroan"):
			return joaat("breed_ardennes_bayroan");
	
		case joaat("a_c_horse_arabian_redchestnut_pc"):
			return joaat("breed_arabian_redchestnut_pc");
	
		case joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc"):
			return joaat("breed_kentuckysaddle_buttermilkbuckskin_pc");
	
		case joaat("a_c_horse_gang_karen"):
			return joaat("breed_gang_karen");
	
		case joaat("a_c_horse_gang_dutch"):
			return joaat("breed_gang_dutch");
	
		case joaat("a_c_horse_eagleflies"):
			return joaat("breed_eagleflies");
	
		case joaat("a_c_horse_missourifoxtrotter_amberchampagne"):
			return joaat("breed_missourifoxtrotter_amberchampagne");
	
		case joaat("a_c_horse_kentuckysaddle_chestnutpinto"):
			return joaat("breed_kentuckysaddle_chestnutpinto");
	
		case joaat("a_c_horse_nokota_whiteroan"):
			return joaat("breed_nokota_whiteroan");
	
		case joaat("a_c_horse_americanstandardbred_black"):
			return joaat("breed_americanstandardbred_black");
	
		case joaat("a_c_horsemule_01"):
			return joaat("breed_mule");
	
		case joaat("a_c_horse_gang_javier"):
			return joaat("breed_gang_javier");
	
		case joaat("a_c_horse_mustang_grullodun"):
			return joaat("breed_mustang_grullodun");
	
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return joaat("breed_missourifoxtrotter_silverdapplepinto");
	
		case joaat("a_c_horse_appaloosa_leopard"):
			return joaat("breed_appaloosa_leopard");
	
		case joaat("a_c_horse_gang_sadie"):
			return joaat("breed_gang_sadie");
	
		case joaat("a_c_horse_morgan_liverchestnut_pc"):
			return joaat("breed_morgan_liverchestnut_pc");
	
		case joaat("a_c_horse_gang_lenny"):
			return joaat("breed_gang_lenny");
	
		case joaat("a_c_horse_morgan_flaxenchestnut"):
			return joaat("breed_morgan_flaxenchestnut");
	
		case joaat("a_c_horse_appaloosa_brownleopard"):
			return joaat("breed_appaloosa_brownleopard");
	
		case joaat("a_c_horse_appaloosa_blacksnowflake"):
			return joaat("breed_appaloosa_blacksnowflake");
	
		case joaat("a_c_horse_gang_micah"):
			return joaat("breed_gang_micah");
	
		case joaat("a_c_horse_arabian_white"):
			return joaat("breed_arabian_white");
	
		case joaat("a_c_horse_murfreebrood_mange_02"):
			return joaat("breed_murfreebrood_mange_02");
	
		case joaat("a_c_horse_hungarianhalfbred_darkdapplegrey"):
			return joaat("breed_hungarianhalfbred_darkdapplegrey");
	
		case joaat("a_c_horse_tennesseewalker_redroan"):
			return joaat("breed_tennesseewalker_redroan");
	
		case joaat("a_c_horse_gang_hosea"):
			return joaat("breed_gang_hosea");
	
		case joaat("a_c_horse_ardennes_strawberryroan"):
			return joaat("breed_ardennes_strawberryroan");
	
		case joaat("a_c_horse_murfreebrood_mange_03"):
			return joaat("breed_murfreebrood_mange_03");
	
		case joaat("a_c_horse_belgian_blondchestnut"):
			return joaat("breed_belgian_blondchestnut");
	
		case joaat("a_c_horse_gang_sadie_endlesssummer"):
			return joaat("breed_gang_sadie_endlesssummer");
	
		case joaat("a_c_horse_gang_charles"):
			return joaat("breed_gang_charles");
	
		case joaat("a_c_horse_thoroughbred_brindle"):
			return joaat("breed_thoroughbred_brindle");
	
		case joaat("a_c_horse_americanstandardbred_silvertailbuckskin"):
			return joaat("breed_americanstandardbred_silvertailbuckskin");
	
		case joaat("a_c_horse_americanpaint_overo"):
			return joaat("breed_americanpaint_overo");
	
		case joaat("a_c_horse_andalusian_darkbay"):
			return joaat("breed_andalusian_darkbay");
	
		case joaat("a_c_horse_missourifoxtrotter_sablechampagne"):
			return joaat("breed_missourifoxtrotter_sablechampagne");
	
		case joaat("a_c_horse_arabian_rosegreybay"):
			return joaat("breed_arabian_rosegreybay");
	
		case joaat("a_c_horse_americanstandardbred_buckskin"):
			return joaat("breed_americanstandardbred_buckskin");
	
		case joaat("a_c_horse_kentuckysaddle_black"):
			return joaat("BREED_KENTUCKYSADDLE_BLACK");
	
		case joaat("a_c_horse_winter02_01"):
			return joaat("breed_winter02_01");
	
		case joaat("a_c_horse_tennesseewalker_dapplebay"):
			return joaat("breed_tennesseewalker_dapplebay");
	
		case joaat("a_c_horse_hungarianhalfbred_piebaldtobiano"):
			return joaat("breed_hungarianhalfbred_piebaldtobiano");
	
		case joaat("a_c_horse_shire_lightgrey"):
			return joaat("breed_shire_lightgrey");
	
		case joaat("a_c_horse_mustang_tigerstripedbay"):
			return joaat("breed_mustang_tigerstripedbay");
	
		case joaat("a_c_horse_americanstandardbred_palominodapple"):
			return joaat("breed_americanstandardbred_palominodapple");
	
		case joaat("a_c_horse_arabian_grey"):
			return joaat("breed_arabian_grey");
	
		case joaat("a_c_horse_morgan_palomino"):
			return joaat("breed_morgan_palomino");
	
		case joaat("a_c_horse_nokota_reversedappleroan"):
			return joaat("breed_nokota_reversedappleroan");
	
		case joaat("a_c_horse_gang_uncle_endlesssummer"):
			return joaat("breed_gang_uncle_endlesssummer");
	
		case joaat("a_c_horse_tennesseewalker_mahoganybay"):
			return joaat("breed_tennesseewalker_mahoganybay");
	
		case joaat("a_c_horse_mustang_goldendun"):
			return joaat("breed_mustang_goldendun");
	
		case joaat("a_c_horse_buell_warvets"):
			return joaat("breed_buell_warvets");
	
		case joaat("a_c_horsemulepainted_01"):
			return joaat("breed_mule_painted");
	
		case joaat("a_c_horse_appaloosa_fewspotted_pc"):
			return joaat("breed_appaloosa_fewspotted_pc");
	
		case joaat("a_c_horse_dutchwarmblood_chocolateroan"):
			return joaat("breed_dutchwarmblood_chocolateroan");
	
		case joaat("a_c_horse_andalusian_perlino"):
			return joaat("breed_andalusian_perlino");
	
		case joaat("a_c_horse_andalusian_rosegray"):
			return joaat("breed_andalusian_rosegray");
	
		case joaat("a_c_horse_shire_ravenblack"):
			return joaat("breed_shire_ravenblack");
	
		case joaat("a_c_horse_dutchwarmblood_sealbrown"):
			return joaat("breed_dutchwarmblood_sealbrown");
	
		case joaat("a_c_horse_thoroughbred_reversedappleblack"):
			return joaat("breed_thoroughbred_reversedappleblack");
	
		case joaat("a_c_horse_murfreebrood_mange_01"):
			return joaat("breed_murfreebrood_mange_01");
	
		case joaat("a_c_horse_belgian_mealychestnut"):
			return joaat("breed_belgian_mealychestnut");
	
		case joaat("a_c_horse_gang_trelawney"):
			return joaat("breed_gang_trelawney");
	
		case joaat("a_c_horse_tennesseewalker_goldpalomino_pc"):
			return joaat("breed_tennesseewalker_goldpalomino_pc");
	
		case joaat("a_c_horse_shire_darkbay"):
			return joaat("breed_shire_darkbay");
	
		case joaat("a_c_horse_tennesseewalker_blackrabicano"):
			return joaat("breed_tennesseewalker_blackrabicano");
	
		case joaat("a_c_horse_tennesseewalker_chestnut"):
			return joaat("breed_tennesseewalker_chestnut");
	
		case joaat("a_c_horse_turkoman_darkbay"):
			return joaat("breed_turkoman_darkbay");
	
		case joaat("a_c_horse_gang_kieran"):
			return joaat("breed_gang_kieran");
	
		case joaat("a_c_horse_morgan_bayroan"):
			return joaat("breed_morgan_bayroan");
	
		case joaat("a_c_horse_arabian_redchestnut"):
			return joaat("breed_arabian_redchestnut");
	
		case joaat("a_c_horse_arabian_warpedbrindle_pc"):
			return joaat("breed_arabian_warpedbrindle_pc");
	
		case joaat("a_c_horse_dutchwarmblood_sootybuckskin"):
			return joaat("breed_dutchwarmblood_sootybuckskin");
	
		case joaat("a_c_horse_kentuckysaddle_silverbay"):
			return joaat("breed_kentuckysaddle_silverbay");
	
		case joaat("a_c_horse_turkoman_gold"):
			return joaat("breed_turkoman_gold");
	
		case joaat("a_c_horse_hungarianhalfbred_flaxenchestnut"):
			return joaat("breed_hungarianhalfbred_flaxenchestnut");
	
		case joaat("a_c_horse_gang_uncle"):
			return joaat("breed_gang_uncle");
	
		case joaat("a_c_donkey_01"):
			return joaat("breed_donkey");
	
		case joaat("a_c_horse_americanpaint_splashedwhite"):
			return joaat("breed_americanpaint_splashedwhite");
	
		case joaat("a_c_horse_gang_charles_endlesssummer"):
			return joaat("breed_gang_charles_endlesssummer");
	
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return joaat("breed_thoroughbred_dapplegrey");
	
		case joaat("a_c_horse_americanstandardbred_lightbuckskin"):
			return joaat("breed_americanstandardbred_lightbuckskin");
	
		case joaat("a_c_horse_kentuckysaddle_grey"):
			return joaat("breed_kentuckysaddle_grey");
	
		case joaat("a_c_horse_morgan_bay"):
			return joaat("breed_morgan_bay");
	
		case joaat("a_c_horse_mustang_wildbay"):
			return joaat("breed_mustang_wildbay");
	
		case joaat("a_c_horse_thoroughbred_blackchestnut"):
			return joaat("breed_thoroughbred_blackchestnut");
	
		case joaat("a_c_horse_appaloosa_blanket"):
			return joaat("breed_appaloosa_blanket");
	
		case joaat("a_c_horse_nokota_blueroan"):
			return joaat("breed_nokota_blueroan");
	
		default:
		
	}

	return 0;
}

int func_341(Ped pedParam0) // Position - 0xB1D2 Hash - 0xCBD81943 ^0x59B24754
{
	int num;
	float charExpression;

	num = 1;
	charExpression = PED::_GET_CHAR_EXPRESSION(pedParam0, 41611);

	if (charExpression == 1f)
		num = 2;

	return num;
}

void func_342(int iParam0, Hash hParam1) // Position - 0xB1F5 Hash - 0x42DB579F ^0xF1492904
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = hParam1;
	return;
}

void func_343(int iParam0, int iParam1) // Position - 0xB228 Hash - 0x42DB579F ^0x4C67AD4
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = iParam1;
	return;
}

void func_344(int iParam0, int iParam1) // Position - 0xB25B Hash - 0x42DB579F ^0x8D4EBF0
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = iParam1;
	return;
}

Hash func_345() // Position - 0xB28E Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_346(int iParam0, int iParam1) // Position - 0xB29A Hash - 0x42DB579F ^0xB4972906
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = iParam1;
	return;
}

void func_347(int iParam0, int iParam1) // Position - 0xB2CD Hash - 0x42DB579F ^0x1BA2C8C6
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = iParam1;
	return;
}

void func_348(int iParam0, Hash hParam1) // Position - 0xB300 Hash - 0x42DB579F ^0x697A7CA1
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = hParam1;
	return;
}

void func_349(int iParam0, float fParam1) // Position - 0xB333 Hash - 0xAD893F62 ^0xAA11739C
{
	Ped ped;
	int num;
	int attributeRank;

	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fParam1;
	ped = func_217(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return;

	num = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(ped, 7, num);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(ped, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = attributeRank;
	PED::_SET_MOUNT_BONDING_LEVEL(ped, attributeRank);
	func_258(attributeRank);
	return;
}

BOOL func_350(int iParam0, var uParam1) // Position - 0xB3E0 Hash - 0x8ECDD6A2 ^0x8ECDD6A2
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 16;
			break;
	
		case 1:
			*uParam1 = 8;
			break;
	
		case 2:
			*uParam1 = 13;
			break;
	
		default:
			return false;
	}

	return true;
}

void func_351(int iParam0, int iParam1, int iParam2) // Position - 0xB422 Hash - 0x33CA9B4 ^0xE447793A
{
	Ped ped;

	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	iParam2 = func_268(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/] = iParam2;
	ped = func_217(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped);
	func_422(ped, iParam1, iParam2);
	return;
}

BOOL func_352(int iParam0) // Position - 0xB499 Hash - 0xB073C27E ^0xB073C27E
{
	int num;

	num = iParam0;

	if (num >= 0 && num < 5)
		return true;

	return false;
}

Hash func_353(int iParam0) // Position - 0xB4BA Hash - 0xBD10D1A2 ^0xE9C9558B
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
	
		case 1:
			return -832337898;
	
		case 2:
			return 1271463052;
	
		case 3:
			return 1983140194;
	
		case 4:
			return 677262775;
	}

	return 0;
}

struct<4> func_354(BOOL bParam0) // Position - 0xB526 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_420(joaat("character"), func_423(), joaat("SLOTID_NONE"), bParam0);
}

int func_355(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0xB542 Hash - 0x3D67507D ^0xEF2F6729
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_424(bParam2), panParam0, hParam1);
}

BOOL func_356(int iParam0, Any* panParam1) // Position - 0xB558 Hash - 0xDE4C4094 ^0x8E8A73E7
{
	Hash hash;
	var unk;
	var unk15;

	if (!func_252(iParam0))
		return false;

	hash = func_353(iParam0);

	if (hash == 0)
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15 = { func_354(false) };

	if (!func_425(unk15, hash, &unk, 0, false))
		return false;

	if (!func_426(&unk, panParam1))
		return false;

	return true;
}

BOOL func_357(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0xB5BD Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_427(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_428(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_429(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_424(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_358(Hash hParam0, int iParam1) // Position - 0xB64D Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_359(Hash hParam0) // Position - 0xB667 Hash - 0x1B551CF7 ^0xB80375AC
{
	return func_400(hParam0) == joaat("HORSE");
}

BOOL func_360(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0xB67B Hash - 0x86E39CDA ^0xCF922D1
{
	!func_358(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return false;

	if (func_430(hParam0, panParam2, iParam3, bParam5, false))
		return false;

	if (!func_429(false))
		return false;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_424(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_361() // Position - 0xB6DD Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_362() // Position - 0xB6FC Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_141() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

int func_363() // Position - 0xB722 Hash - 0x9F572D68 ^0x8E3583E8
{
	return joaat("breed_tennesseewalker_mahoganybay");
}

int func_364() // Position - 0xB72F Hash - 0x9F572D68 ^0xBDF2A68A
{
	return joaat("a_c_horse_tennesseewalker_mahoganybay");
}

int func_365() // Position - 0xB73C Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_366() // Position - 0xB745 Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_367() // Position - 0xB752 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_368() // Position - 0xB75F Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_369() // Position - 0xB768 Hash - 0x9F572D68 ^0xC65FFCB9
{
	return joaat("breed_john_endlesssummer");
}

int func_370() // Position - 0xB775 Hash - 0x9F572D68 ^0xEE9A2A30
{
	return joaat("a_c_horse_john_endlesssummer");
}

int func_371() // Position - 0xB782 Hash - 0x1FFCF868 ^0x1FFCF868
{
	return 2;
}

int func_372() // Position - 0xB78B Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_373() // Position - 0xB798 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_374() // Position - 0xB7A5 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_375() // Position - 0xB7AE Hash - 0x9F572D68 ^0x1E5C2934
{
	return joaat("breed_morgan_bay");
}

int func_376() // Position - 0xB7BB Hash - 0x9F572D68 ^0xD70F756D
{
	return joaat("a_c_horse_morgan_bay");
}

int func_377() // Position - 0xB7C8 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_378() // Position - 0xB7D1 Hash - 0x9F572D68 ^0xE2D55F1F
{
	return joaat("breed_kentuckysaddle_grey");
}

int func_379() // Position - 0xB7DE Hash - 0x9F572D68 ^0xD5B858DC
{
	return joaat("a_c_horse_kentuckysaddle_grey");
}

int func_380() // Position - 0xB7EB Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_381() // Position - 0xB7F4 Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3135;
}

void func_382(int iParam0) // Position - 0xB805 Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3135 = iParam0;
	return;
}

void func_383(Blip blParam0) // Position - 0xB818 Hash - 0x537CC7C9 ^0xD1D456F0
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_432(func_431(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_362())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_267();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_JOHN");
	}

	return;
}

void func_384(Blip blParam0, BOOL bParam1) // Position - 0xB865 Hash - 0xCD6B7970 ^0x95C123E7
{
	char* str1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_432(func_431(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		str1 = "";
	
		if (bParam1)
			str1 = "HORSE_BLIP_TEMPORARY";
		else if (func_362())
			str1 = "HORSE_BLIP_ARTHUR";
		else if (func_267())
			str1 = "HORSE_BLIP_JOHN";
	
		if (MISC::COMPARE_STRINGS(str1, "", false, -1) != 0)
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, str1);
	}

	return;
}

Ped func_385(int iParam0) // Position - 0xB8D5 Hash - 0x79966B74 ^0xB76682C7
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_386(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xB903 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_387(int iParam0) // Position - 0xB921 Hash - 0x9BB7FBA3 ^0xA973C68A
{
	Ped model;
	int rank;
	int defaultMaxAttributeRank;
	float num;
	Any any;
	int rank2;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;

	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_254(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_149(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_149(iParam0) + 1;
	num2 = func_433(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_434(num, any, num7);
	return num8;
}

void func_388(Blip blParam0) // Position - 0xB9DB Hash - 0x9892E8C ^0x28660E03
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_STOLEN"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_2"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_3"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_4"));
	return;
}

void func_389(Blip blParam0) // Position - 0xBA67 Hash - 0x85615470 ^0x31794F85
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	return;
}

int func_390() // Position - 0xBA93 Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

var func_391(BOOL bParam0, var uParam1, var uParam2) // Position - 0xBAA3 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_392(int iParam0) // Position - 0xBABA Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_393(int iParam0) // Position - 0xBACD Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_394(int iParam0, BOOL bParam1) // Position - 0xBAF7 Hash - 0xE5C16A63 ^0x600C7934
{
	Global_1954819.f_1 = iParam0;

	if (bParam1)
		func_435(bParam1);

	return;
}

void func_395(Hash hParam0) // Position - 0xBB12 Hash - 0x246AED7E ^0x92A2F577
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HonorMeterValue"), hParam0);
	return;
}

char* func_396(int iParam0) // Position - 0xBB25 Hash - 0x8FB6A40C ^0x109281E6
{
	if (iParam0 <= -320)
		return "HONOR_BAD_8";
	else if (iParam0 <= -280)
		return "HONOR_BAD_7";
	else if (iParam0 <= -240)
		return "HONOR_BAD_6";
	else if (iParam0 <= -200)
		return "HONOR_BAD_5";
	else if (iParam0 <= -160)
		return "HONOR_BAD_4";
	else if (iParam0 <= -120)
		return "HONOR_BAD_3";
	else if (iParam0 <= -80)
		return "HONOR_BAD_2";
	else if (iParam0 < 0)
		return "HONOR_BAD_1";
	else if (iParam0 <= 40)
		return "HONOR_GOOD_1";
	else if (iParam0 >= 320)
		return "HONOR_GOOD_8";
	else if (iParam0 >= 280)
		return "HONOR_GOOD_7";
	else if (iParam0 >= 240)
		return "HONOR_GOOD_6";
	else if (iParam0 >= 200)
		return "HONOR_GOOD_5";
	else if (iParam0 >= 160)
		return "HONOR_GOOD_4";
	else if (iParam0 >= 120)
		return "HONOR_GOOD_3";
	else if (iParam0 >= 80)
		return "HONOR_GOOD_2";

	return "HONOR_GOOD_1";
}

BOOL func_397(var uParam0) // Position - 0xBC46 Hash - 0x89D7A86C ^0xC5CDC47A
{
	var unk;

	if (!func_436(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -2103982008;
		*uParam0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);
		return true;
	}

	return false;
}

BOOL func_398(int iParam0, var uParam1, var uParam2) // Position - 0xBC8E Hash - 0x2D6E55B7 ^0xC1202559
{
	var unk;
	var unk6;

	if (!func_436(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -57097983;
		unk.f_3 = iParam0;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
		{
			unk.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam1 = unk6;
			unk.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam2 = unk6;
			return true;
		}
	}

	return false;
}

Hash func_399(Hash hParam0) // Position - 0xBD0E Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_400(Hash hParam0) // Position - 0xBD18 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_358(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

int func_401() // Position - 0xBD43 Hash - 0xE17CEFF5 ^0x60DBA116
{
	int num;

	num = func_264();

	switch (num)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
	
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
	
		default:
		
	}

	return joaat("SHOP_HONOR_AMORAL");
}

void func_402(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0xBD92 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_403(int iParam0) // Position - 0xBDC3 Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_404(int iParam0, var uParam1, var uParam2) // Position - 0xBDE2 Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_403(iParam0))
		return false;

	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP1");
			break;
	
		case 1:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP2");
			break;
	
		case 2:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP3");
			break;
	
		case 3:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP4");
			break;
	
		case 4:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP5");
			break;
	
		case 5:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_GOLDRUSH");
			break;
	
		case 6:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MINIGAMES");
			break;
	
		case 7:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_B_AND_E");
			break;
	
		case 8:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RCKPT");
			break;
	
		case 9:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_TO_POOR");
			break;
	
		case 10:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_HONOR");
			break;
	
		case 11:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RC");
			break;
	
		case 12:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BOUNTY");
			break;
	
		case 13:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_UPGR_W");
			break;
	
		case 14:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BEAR");
			break;
	
		case 15:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_ART");
			break;
	
		case 16:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_COLLECT");
			break;
	
		default:
			return false;
	}

	return true;
}

int func_405(int iParam0) // Position - 0xBFB1 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_437(iParam0))
		return -1;

	return func_438(iParam0);
}

BOOL func_406() // Position - 0xBFCD Hash - 0xEFCF651E ^0xB8EDF2E9
{
	if (func_439())
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

void func_407(int iParam0, int iParam1) // Position - 0xC024 Hash - 0x787BB1AC ^0x11099E69
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

	if (PLAYER::_0x1A6E84F13C952094(player, 200, iParam0))
	{
		for (i = 0; i < *iParam0; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->[i]))
			{
			}
			else if (!PED::IS_PED_HUMAN(iParam0->[i]) && !(DECORATOR::DECOR_EXIST_ON(iParam0->[i], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(iParam0->[i], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam0->[i], "bIgnoreDamageChecking"))
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

BOOL func_408(BOOL bParam0, var uParam1, var uParam2) // Position - 0xC0CF Hash - 0x2A9340EF ^0xAD765E32
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

Ped func_409(var uParam0) // Position - 0xC196 Hash - 0xF229F24F ^0x47381422
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

void func_410(var uParam0) // Position - 0xC23E Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_287(uParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_285(uParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

BOOL func_411(int iParam0, int iParam1) // Position - 0xC2A3 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Hash func_412(Ped pedParam0, int iParam1) // Position - 0xC2B2 Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_413(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0xC2C9 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_414(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_414(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0xC2F7 Hash - 0xBF2250D5 ^0x34592C3E
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

BOOL func_415(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC341 Hash - 0x1D055735 ^0x5D260F19
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(pedParam0, joaat("WEAPON_UNARMED"), iParam1))
			return true;
		else if (!bParam2)
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44) || Global_1935630.f_44 == joaat("weapon_melee_knife"))
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(pedParam0, Global_1935630.f_44, iParam1))
						return true;

	return false;
}

BOOL func_416(Ped pedParam0) // Position - 0xC3BA Hash - 0xF2F988FE ^0xA63CD631
{
	Hash scenarioPointTypePedIsUsing;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!PED::IS_PED_USING_ANY_SCENARIO(pedParam0))
		return false;

	scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(pedParam0);

	if (scenarioPointTypePedIsUsing == 0)
		return false;

	if (scenarioPointTypePedIsUsing == joaat("world_player_sleep_ground") || scenarioPointTypePedIsUsing == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_arm") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_pillow") || scenarioPointTypePedIsUsing == joaat("world_animal_dog_sleeping") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow") || scenarioPointTypePedIsUsing == joaat("prop_player_prpty_save_game") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_left") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_right"))
		return true;

	if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_a_frame") || scenarioPointTypePedIsUsing == joaat("world_player_sleep_bedroll"))
	{
		scenarioPointTypePedIsUsing = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(pedParam0);
	
		if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_male_a"))
			return true;
	
		return false;
	}

	return false;
}

int func_417(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xC4A2 Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_418(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC4E4 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_440())
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
		num = func_441(Global_1898164.f_1[0 /*5*/]);
	
		if (func_442(num) && func_443(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_437(Global_1898164.f_1[0 /*5*/]))
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

void func_419(int iParam0, int iParam1) // Position - 0xC6E8 Hash - 0x20A81385 ^0xDDACAB07
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 - Global_1900383[iParam0 /*45*/].f_24 && iParam1;
	return;
}

struct<4> func_420(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xC72C Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_358(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_424(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_421(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xC75D Hash - 0x1DD1BE14 ^0x90608F32
{
	var unk;

	if (!func_429(false))
		return func_444(uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_428(uParam0, &unk, false, false))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_424(false), &uParam0, bParam4))
		return false;

	return true;
}

void func_422(Ped pedParam0, int iParam1, int iParam2) // Position - 0xC7D0 Hash - 0x498B41C8 ^0xF542C5C9
{
	int attributeIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	iParam2 = func_268(iParam2, 0, 100);

	if (func_350(iParam1, &attributeIndex))
		ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(pedParam0, attributeIndex, iParam2);

	return;
}

struct<4> func_423() // Position - 0xC81D Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_424(BOOL bParam0) // Position - 0xC829 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_141() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_425(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0xC86A Hash - 0xA6C1C993 ^0x7035E80B
{
	int inventoryId;

	inventoryId = func_424(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

BOOL func_426(Any* panParam0, Any* panParam1) // Position - 0xC8A4 Hash - 0x2AD3981E ^0x984186D0
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_424(false), panParam0, panParam1, 29, 1))
		return false;

	return true;
}

BOOL func_427(Hash hParam0) // Position - 0xC8D3 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_428(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC8E9 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_424(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_429(BOOL bParam0) // Position - 0xC919 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_141() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_424(bParam0));
}

BOOL func_430(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC937 Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_445(&hParam0);

	if (!func_358(hParam0, 0))
		return false;

	if (!func_429(false))
		bParam3 = true;

	if (func_446(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_447(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_448(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return false;
			else if (func_449(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return false;
		
			if (func_450(hParam0, true))
				if (!func_448(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return false;
				else if (func_449(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return false;
		}
		else if (!func_451(hParam0, &unk27, false))
		{
			return false;
		}
	
		return true;
	}

	num = func_452(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return false;
	else if (num == 0)
		return true;

	if (bParam3 || !func_453(hParam0))
		inventoryItemCountWithItemid = func_454(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_424(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return true;

	return false;
}

const char* func_431(int iParam0) // Position - 0xCA7C Hash - 0x20630FE4 ^0xBDD0E7BB
{
	const char* str;

	if (iParam0 == 255)
		if (func_455(37, iParam0))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		else
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());

	if (iParam0 < 0 || iParam0 >= 32)
		return "";

	str = "";

	if (!Global_1224589.f_16[iParam0])
		return str;

	if (func_455(37, iParam0))
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));

	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

const char* func_432(const char* sParam0, int iParam1) // Position - 0xCB23 Hash - 0xB0CFF0C3 ^0xC2C3B3FD
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_456(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_433(int iParam0) // Position - 0xCB59 Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_226(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_434(float fParam0, Any anParam1, float fParam2) // Position - 0xCB8F Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

void func_435(BOOL bParam0) // Position - 0xCBA4 Hash - 0x970FE035 ^0x92589DF6
{
	func_457(bParam0);
	Global_1954819.f_1.f_1 = bParam0;

	if (bParam0 == true)
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));

	return;
}

BOOL func_436(int iParam0, var uParam1) // Position - 0xCBD7 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_458(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

BOOL func_437(int iParam0) // Position - 0xCC04 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_438(int iParam0) // Position - 0xCC37 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_459(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_439() // Position - 0xCC78 Hash - 0x50F36DAB ^0xF55A49EF
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

BOOL func_440() // Position - 0xCCA9 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_441(int iParam0) // Position - 0xCCFC Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_437(iParam0))
		return -1;

	return func_461(func_460(iParam0));
}

BOOL func_442(int iParam0) // Position - 0xCD1C Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_443(int iParam0, int iParam1) // Position - 0xCD32 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_444(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0xCD41 Hash - 0x4C6CAF1 ^0xEE857D47
{
	int num;
	var unk;
	int num2;
	var unk15;
	var unk44;
	var unk62;

	num = -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return num;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_428(uParam0, &unk, true, false))
		return num;

	if (unk.f_10 == iParam4)
		return num;

	num2 = func_400(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_462(uParam0, true) };
		unk15.f_10 = iParam4;
		num = func_463(joaat("UPDATE"), &unk15, bParam5);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk44 = { func_464(uParam0, true) };
		unk44.f_10 = iParam4;
		num = func_465(joaat("UPDATE"), &unk44, bParam5);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk62 = { func_466(&unk) };
		unk62.f_10 = iParam4;
		num = func_467(joaat("UPDATE"), &unk62, bParam5);
	
		if (num == -1)
			return num;
	}

	return num;
}

int func_445(var uParam0) // Position - 0xCE38 Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_358(*uParam0, 0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			return 1;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			return 1;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			return 1;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			return 1;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_446(Hash hParam0) // Position - 0xCEB4 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_400(hParam0) == joaat("WEAPON");
}

struct<4> func_447(BOOL bParam0) // Position - 0xCEC8 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_424(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_420(923904168, func_354(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_420(923904168, func_354(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_420(923904168, func_354(bParam0), -740156546, false);
}

BOOL func_448(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0xCF5D Hash - 0x4285A587 ^0x4285A587
{
	return func_454(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_449(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xCF75 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_468(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

BOOL func_450(Hash hParam0, BOOL bParam1) // Position - 0xCF96 Hash - 0x62864AB ^0xBC339691
{
	if (func_469(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_266(24);
		else
			return true;

	return false;
}

BOOL func_451(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0xCFCF Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_358(hParam0, 0))
		return false;

	unk = { func_470(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_471(398 + i, 1);
	
		if (func_448(hParam0, &unk, hash, false))
		{
			flag = func_449(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_452(Hash hParam0, Any* panParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD063 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_358(hParam0, 0))
		return 0;

	if (!func_429(false))
		bParam2 = true;

	if (bParam2 || !func_453(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, panParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_424(bParam3), hParam0);
}

BOOL func_453(Hash hParam0) // Position - 0xD0B1 Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_472(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_454(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xD0CD Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_358(hParam0, 0))
		return 0;

	guid = { func_420(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_424(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_455(int iParam0, int iParam1) // Position - 0xD115 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_473(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_474())
		return func_473(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_473(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

const char* func_456(const char* sParam0, int iParam1) // Position - 0xD189 Hash - 0x9E99F03 ^0x4D149149
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_457(BOOL bParam0) // Position - 0xD1A3 Hash - 0x246AED7E ^0xB30D729F
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HonorMeterVisible"), bParam0);
	return;
}

BOOL func_458(int iParam0) // Position - 0xD1B6 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_459(int iParam0) // Position - 0xD1CC Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_460(int iParam0) // Position - 0xD24D Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_461(BOOL bParam0) // Position - 0xD28B Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

struct<29> func_462(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xD29E Hash - 0xD34D8048 ^0xAE0F4AAB
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_424(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_466(&unk30) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_463(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xD337 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_475(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_476(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_476(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29))
	{
		func_476(num, 1);
		return num;
	}

	return -1;
}

struct<18> func_464(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xD3BE Hash - 0x3EBED8E9 ^0x3FFB16B
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_424(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_466(&unk19) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_465(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xD431 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_477(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_476(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_476(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18))
	{
		func_476(num, 1);
		return num;
	}

	return -1;
}

struct<17> func_466(var uParam0) // Position - 0xD4B8 Hash - 0x4CD39800 ^0x7DC5804
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { *uParam0 };
	unk.f_4 = { uParam0->f_5 };
	unk.f_8 = uParam0->f_4;
	unk.f_9 = uParam0->f_11;
	unk.f_11 = uParam0->f_9;
	unk.f_10 = uParam0->f_10;
	return unk;
}

int func_467(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xD50C Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_478(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_476(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_476(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17))
	{
		func_476(num, 1);
		return num;
	}

	return -1;
}

BOOL func_468(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0xD593 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_424(false);
	*panParam1 = { func_420(hParam0, func_447(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

Hash func_469(Hash hParam0) // Position - 0xD5D8 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_358(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

struct<5> func_470(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD603 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_354(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_400(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_480(hParam0, -1823706425))
			{
				unk = { func_420(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_480(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_420(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
		
			[[fallthrough]];
	
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -813824107;
			unk = { func_479(bParam1) };
		
			switch (func_469(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case 664784405:
					unk.f_4 = -1150938404;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_DANCES"):
					unk.f_4 = -1756997214;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk = { func_420(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_447(bParam1) };
		
			if (bParam2 && func_450(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_448(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_448(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_449(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else
					unk.f_4 = joaat("SLOTID_WEAPON_1");
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WEAPON_0");
			}
			break;
	
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_SATCHEL")))
			{
				unk.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_CURRENCY")))
			{
				unk28.f_9 = joaat("SLOTID_NONE");
			
				if (!func_428(unk, &unk28, bParam1, false))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else
			{
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("character"));
				unk.f_4 == 0;
			}
			break;
	}

	return unk;
}

Hash func_471(int iParam0, int iParam1) // Position - 0xD8C0 Hash - 0xE1D12727 ^0x71D656A6
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
	
		case 1:
			return -1783281882;
	
		case 2:
			return 1704602624;
	
		case 3:
			return 1214181762;
	
		case 4:
			return 1520605650;
	
		case 5:
			return 551482925;
	
		case 6:
			return 843929315;
	
		case 7:
			return 1974334822;
	
		case 8:
			return -1963435638;
	
		case 9:
			return -430578371;
	
		case 10:
			return -730381952;
	
		case 11:
			return -1500304973;
	
		case 12:
			return -253503777;
	
		case 13:
			return 1352275534;
	
		case 14:
			return 1666399168;
	
		case 15:
			return -1911121386;
	
		case 16:
			return 1756656691;
	
		case 17:
			return -1774867076;
	
		case 18:
			return -421952220;
	
		case 19:
			return -1087003323;
	
		case 20:
			return 1231618917;
	
		case 21:
			return -1183777174;
	
		case 22:
			return -841767082;
	
		case 23:
			return 1043717005;
	
		case 24:
			return 142663787;
	
		case 25:
			return 1718143051;
	
		case 26:
			return -6605744;
	
		case 27:
			return 953047564;
	
		case 28:
			return 769706682;
	
		case 29:
			return 1635590003;
	
		case 30:
			return -2047978619;
	
		case 31:
			return -586319254;
	
		case 32:
			return 249896112;
	
		case 33:
			return -1060513333;
	
		case 34:
			return 1317351007;
	
		case 35:
			return -500478573;
	
		case 36:
			return -806573802;
	
		case 37:
			return -1109949204;
	
		case 38:
			return -740156546;
	
		case 39:
			return -684532710;
	
		case 40:
			return 1158805436;
	
		case 41:
			return -559473670;
	
		case 42:
			return -797147251;
	
		case 43:
			return -382216265;
	
		case 44:
			return 1419177114;
	
		case 45:
			return 1704297235;
	
		case 46:
			return -1139016418;
	
		case 47:
			return 897705377;
	
		case 48:
			return 17961769;
	
		case 49:
			return 205582207;
	
		case 50:
			return 900740963;
	
		case 51:
			return -1369589344;
	
		case 52:
			return -1695823795;
	
		case 53:
			return -41453074;
	
		case 54:
			return 539767227;
	
		case 55:
			return 1210490314;
	
		case 56:
			return -399684751;
	
		case 57:
			return 2138893455;
	
		case 58:
			return -1617010487;
	
		case 59:
			return -832377028;
	
		case 60:
			return -428040245;
	
		case 61:
			return 1279288897;
	
		case 62:
			return -594897905;
	
		case 63:
			return -1360459240;
	
		case 64:
			return 1838428396;
	
		case 65:
			return -1467846997;
	
		case 66:
			return -490610263;
	
		case 67:
			return -1885413079;
	
		case 68:
			return 708884155;
	
		case 69:
			return joaat("BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS") /* collision: BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS */;
	
		case 70:
			return -1912136700;
	
		case 71:
			return -1268031552;
	
		case 72:
			return 1177953227;
	
		case 73:
			return 2130805296;
	
		case 74:
			return 38093490;
	
		case 75:
			return -269153218;
	
		case 76:
			return -1995068011;
	
		case 77:
			return -164284834;
	
		case 78:
			return 1446463345;
	
		case 79:
			return 1501315823;
	
		case 80:
			return -750379482;
	
		case 81:
			return -929560937;
	
		case 82:
			return 608323241;
	
		case 83:
			return 1030796013;
	
		case 84:
			return 1915057434;
	
		case 85:
			return -1582276476;
	
		case 86:
			return 692059311;
	
		case 87:
			return 2062839241;
	
		case 88:
			return -1884531872;
	
		case 89:
			return -866434534;
	
		case 90:
			return -1252192421;
	
		case 91:
			return 1243288963;
	
		case 92:
			return -1953772189;
	
		case 93:
			return 754411745;
	
		case 94:
			return 545309006;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

int func_472(Hash hParam0, Hash hParam1) // Position - 0xFA0A Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

BOOL func_473(var uParam0, int iParam1, int iParam2) // Position - 0xFA24 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_474() // Position - 0xFA5B Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

BOOL func_475(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xFA69 Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

void func_476(int iParam0, int iParam1) // Position - 0xFA80 Hash - 0x18C74423 ^0xA1132A0
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1223212; i = i + 1)
	{
		if (Global_1223212.f_1[i /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[i /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1223212.f_1[i /*9*/].f_1 = iParam1;
			}
		
			return;
		}
	}

	func_481(iParam0, iParam1);
	return;
}

BOOL func_477(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xFAE2 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_478(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xFAF9 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

struct<4> func_479(BOOL bParam0) // Position - 0xFB10 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_424(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_420(271701509, func_354(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_420(271701509, func_354(bParam0), 12999093, false);
}

BOOL func_480(Hash hParam0, Hash hParam1) // Position - 0xFB74 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_469(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

void func_481(int iParam0, int iParam1) // Position - 0xFBD3 Hash - 0x26256B16 ^0x79A35F4E
{
	int i;
	int num;

	if (iParam0 == -1)
		return;

	if (Global_1223212 < 20)
	{
		Global_1223212 = Global_1223212 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223212.f_1[i /*9*/] = { Global_1223212.f_1[i + 1 /*9*/] };
		}
	}

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;
	Global_1223212.f_1[Global_1223212 - 1 /*9*/] = { num };
	return;
}

