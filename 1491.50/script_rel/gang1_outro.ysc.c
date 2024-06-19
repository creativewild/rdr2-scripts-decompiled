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
	AnimScene ansLocal_16 = 0;
	BOOL bLocal_17 = 0;
	BOOL bLocal_18 = 0;
	BOOL bLocal_19 = 0;
	var uLocal_20 = 1;
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
	var uLocal_33 = 11;
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
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 1097859072;
	var uLocal_167 = 1101004800;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 4;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
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

void main() // Position - 0x0 Hash - 0x45CB2BD3 ^0x998EA9C1
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1(&uLocal_265);

	func_2(&uLocal_265, &uScriptParam_0);

	while (!func_3(&uLocal_265))
	{
		func_4(&uLocal_265);
	
		switch (func_5(uLocal_265))
		{
			case 0:
				if (func_6(&uLocal_265))
					func_7(&uLocal_265, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_265))
					func_7(&uLocal_265, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_265))
					func_7(&uLocal_265, 3);
				break;
		
			case 3:
				func_1(&uLocal_265);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_265);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0xBF Hash - 0xCA2A1420 ^0x1B8E2ABF
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

int func_2(var uParam0, var uParam1) // Position - 0x156 Hash - 0x11824BFA ^0x305C042C
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

BOOL func_3(var uParam0) // Position - 0x1A4 Hash - 0xE6F09C07 ^0x349208FC
{
	if (func_20(Global_1935630, 16384))
		return true;

	if (!func_16(uParam0, 8))
		if (func_20(Global_1935630, 32768))
			return true;

	return false;
}

void func_4(var uParam0) // Position - 0x1DE Hash - 0xCC0866FC ^0x1CE74C37
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

int func_5(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x261 Hash - 0xBE425958 ^0xBE425958
{
	return uParam0;
}

BOOL func_6(var uParam0) // Position - 0x26B Hash - 0x8D48AF0D ^0x29CF534F
{
	BOOL num;

	CAM::DO_SCREEN_FADE_OUT(0);
	num = 1;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_16, true, false))
		num = 0;

	if (!HUD::TEXT_BLOCK_IS_LOADED("GNG1"))
		num = 0;

	return num;
}

void func_7(var uParam0, int iParam1) // Position - 0x299 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_8(var uParam0) // Position - 0x2A6 Hash - 0xE70F011 ^0xCE61FB0
{
	if (!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
		return false;

	return func_21(uParam0);
}

BOOL func_9(var uParam0) // Position - 0x2DE Hash - 0xEDB66132 ^0xEDB66132
{
	BOOL num;

	num = 1;

	if (!func_22())
		num = 0;

	if (!func_23(uParam0))
		num = 0;

	return num;
}

void func_10() // Position - 0x303 Hash - 0xF2ADC204 ^0xF23F9A2E
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

void func_11(var uParam0) // Position - 0x346 Hash - 0x33F3A82 ^0x33F3A82
{
	func_26(pedLocal_14, false);
	func_26(pedLocal_15, false);
	return;
}

BOOL func_12(int iParam0) // Position - 0x35C Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

BOOL func_13(int iParam0) // Position - 0x37B Hash - 0xDA629583 ^0xDA629583
{
	return func_27(iParam0, 16, true);
}

BOOL func_14(int iParam0) // Position - 0x38C Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_12(iParam0))
		return false;

	if (!func_13(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x3C0 Hash - 0xA4706F79 ^0xAF27D1D3
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

BOOL func_16(var uParam0, int iParam1) // Position - 0x675 Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x686 Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x69E Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

int func_19(var uParam0) // Position - 0x6B1 Hash - 0x59CDA657 ^0x5648318B
{
	int num;

	CAM::DO_SCREEN_FADE_OUT(0);
	num = 0;
	func_44(&num, SPC_ALLOW_PAD_SHAKE, 2, 0, 0, 0, false);
	func_45(&uLocal_20, Global_35, "ARTHUR", 0, 0, false);
	ansLocal_16 = ANIMSCENE::_CREATE_ANIM_SCENE("script@timelapse@gng1_timelapse", 0, 0, false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_16);
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_16, "PBL_1");
	iLocal_262 = Global_40.f_7731[0 /*5*/];
	iLocal_263 = Global_40.f_7731[1 /*5*/];
	iLocal_264 = Global_40.f_7731[2 /*5*/];
	HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_IN_GAME_CUTSCENE"));
	HUD::TEXT_BLOCK_REQUEST("GNG1");

	if (!func_46(&uLocal_20, 16384))
		func_47(&uLocal_20, 16384);

	return 1;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x745 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_21(var uParam0) // Position - 0x754 Hash - 0x36C27E1C ^0xF338AF15
{
	var unk;
	float num;
	var unk4;
	int num2;
	var unk15;
	float num3;
	var unk18;
	int num4;

	ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
	CAM::DO_SCREEN_FADE_OUT(0);

	if (CAM::IS_SCREEN_FADED_IN() && func_48())
		return 0;

	if (!bLocal_17)
	{
		func_49();
		bLocal_17 = true;
	}

	if (!func_50(true, 0, false))
		return 0;

	if (!func_33(pedLocal_14, 0))
	{
		unk = { 2276.1921f, -756.3764f, 41.2659f };
		num = 125.3885f;
		num2.f_10 = 7;
		num2 = 1;
		num2.f_1 = 1;
		num2.f_2 = 1;
		num2.f_3 = 1;
		num2.f_4 = 1;
		num2.f_6 = { unk };
		num2.f_9 = num;
		pedLocal_14 = func_51(&unk4, &num2);
		return 0;
	}

	if (func_52(1) && !func_33(pedLocal_15, 0))
	{
		unk15 = { 2285.7957f, -746.6627f, 40.7068f };
		num3 = 181.3868f;
		num4.f_10 = 7;
		num4.f_10 = 1;
		num4 = 1;
		num4.f_1 = 1;
		num4.f_2 = 1;
		num4.f_6 = { unk15 };
		num4.f_9 = num3;
		pedLocal_15 = func_51(&unk18, &num4);
		return 0;
	}

	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
	PED::_0xA7A806677F8DE138(Global_35);
	PED::SET_PED_SWEAT(Global_35, 0f);
	MAP::DISPLAY_RADAR(false);
	PLAYER::RESTORE_PLAYER_STAMINA(PLAYER::PLAYER_ID(), 100f);
	func_53(0, false);
	func_54(true);

	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_16, true, false) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_16, "PBL_1"))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_16, "ARTHUR", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_16, "HORSE", pedLocal_14, 0);
		Global_1327590.f_19735 = 1;
	
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_16, false) && !ANIMSCENE::IS_ANIM_SCENE_FINISHED(ansLocal_16, false))
		{
			func_55();
			func_56(100f, false, false, true);
			func_57(100f, false, false, true);
			func_58(100f, false, false, true);
			ANIMSCENE::START_ANIM_SCENE(ansLocal_16);
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_16, "PBL_1", true);
		}
	
		return 1;
	}

	return 0;
}

BOOL func_22() // Position - 0x923 Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_23(var uParam0) // Position - 0x930 Hash - 0x38394FA3 ^0xF2CACD92
{
	int num;

	ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
	func_59();
	func_60(5);

	if (!bLocal_18)
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_16, false) && !CAM::IS_SCREEN_FADING_IN())
			CAM::DO_SCREEN_FADE_IN(1000);
	
		func_61();
	}
	else
	{
		num = 0;
		func_62();
		func_63(&num, 0);
		MAP::DISPLAY_RADAR(true);
		return true;
	}

	return false;
}

void func_24(int iParam0, int iParam1, BOOL bParam2) // Position - 0x987 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_64(iParam0))
			return;

	func_65(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_25(var uParam0, BOOL bParam1) // Position - 0x9C1 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_66(uParam0))
		func_67(uParam0);

	return;
}

void func_26(Ped pedParam0, BOOL bParam1) // Position - 0x9E1 Hash - 0x81317C0D ^0xF96B5C1C
{
	int num;
	int idOfThisThread;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (!func_68(pedParam0))
		return;

	num = func_69(pedParam0);

	if (num == -1)
		return;

	if (num >= 7)
		return;

	func_70(num);
	func_71(num);
	idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	num2 = func_72(num);

	if (!bParam1)
	{
		if (idOfThisThread != num2)
			return;
	
		if (!func_73(num))
			return;
	}

	func_74(num);
	PED::SET_PED_KEEP_TASK(pedParam0, true);

	if (bParam1 && func_75() == -1)
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, true, true);

	return;
}

BOOL func_27(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA9B Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_64(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

void func_28(int iParam0, BOOL bParam1) // Position - 0xAC5 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_64(iParam0))
		return;

	if (bParam1)
		if (func_76(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
			func_29(iParam0, 1, false);

	func_29(iParam0, 16, bParam1);
	return;
}

void func_29(int iParam0, int iParam1, BOOL bParam2) // Position - 0xB07 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_64(iParam0))
		return;

	func_77(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_30(int iParam0) // Position - 0xB2F Hash - 0x7895582D ^0x7895582D
{
	func_29(iParam0, 8, false);
	return;
}

void func_31(int iParam0) // Position - 0xB40 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_24(iParam0, 36, true);
	return;
}

void func_32(int iParam0, int iParam1, BOOL bParam2) // Position - 0xB51 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_64(iParam0))
			return;

	func_65(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_33(Ped pedParam0, int iParam1) // Position - 0xB8B Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_78(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_78(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_78(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_78(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_78(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_78(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_78(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_78(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_34(int iParam0, BOOL bParam1) // Position - 0xC8A Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(iParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
			func_79(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_1;
}

BOOL func_35(int iParam0, int iParam1, BOOL bParam2) // Position - 0xCC9 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_64(iParam0))
			return false;

	func_65(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

void func_36(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xD04 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(iParam0))
	{
		ped = func_80(iParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_81(iParam0);
		}
	}

	if (func_35(iParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_80(iParam0), 137, true);

	return;
}

void func_37(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD56 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_64(iParam0))
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

void func_38(int iParam0, BOOL bParam1) // Position - 0xE28 Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_64(iParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_80(iParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_80(iParam0), 204, false);

	return;
}

void func_39(var uParam0) // Position - 0xE5F Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_40(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE75 Hash - 0x6E8FD624 ^0x6E8FD624
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

	ped = func_80(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_82(iParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_83(iParam0);
		func_24(iParam0, 1, true);
	}

	return;
}

void func_41(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF83 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] - Global_40.f_4942[iParam0 /*60*/] && bParam1;
	return;
}

Player func_42(int iParam0) // Position - 0xFBF Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
		Global_1360165[iParam0 /*1157*/].f_70 = 0;

	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_43(int iParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0xFFF Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_64(iParam1))
		return;

	player = func_42(iParam1);

	if (func_84(iParam1))
		if (!func_85(iParam1))
			return;

	func_32(iParam1, 39, true);
	func_86(iParam1, 64, false);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_86(iParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_86(iParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_24(iParam1, 43, true);
		}
	
		if (bParam4)
			func_87(iParam1, false, true, true, true);
	}

	return;
}

void func_44(var uParam0, eSetPlayerControlFlags espcfParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x10A1 Hash - 0x3C079E71 ^0x58721EE9
{
	ItemSet itemset;
	BOOL flag;
	int i;
	int offsetFromEntityInWorldCoords;
	ScrHandle indexedItemInItemset;
	Object* entityFromItem;
	BOOL flag2;
	Ped mount;

	if (Global_1935630.f_12)
		return;

	Global_16 = true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_53(0, false);
		func_88(-1);
	}

	func_89(true);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);

	if (!func_90(*uParam0, 32))
		espcfParam1 = espcfParam1 | SPC_REMOVE_EXPLOSIONS;

	if (!func_90(*uParam0, 64))
		espcfParam1 = espcfParam1 | SPC_REMOVE_FIRES;

	if (!func_90(*uParam0, 128))
		espcfParam1 = espcfParam1 | SPC_REMOVE_PROJECTILES;

	if (func_90(*uParam0, 131072))
		espcfParam1 = espcfParam1 | SPC_PREVENT_EVERYBODY_BACKOFF;

	if (!func_90(*uParam0, 32768))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, espcfParam1, true);

	if (!func_90(*uParam0, 1))
		PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL, 0);

	if (!func_90(*uParam0, 65536))
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);

	if (!func_90(*uParam0, 4) && !func_90(*uParam0, 2))
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));

	if (!func_90(*uParam0, 2048))
		func_91(false, false);

	if (func_90(*uParam0, 8))
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);

	if (func_90(*uParam0, 256))
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);

	if (func_90(*uParam0, 8192))
		func_92();

	if (!func_90(*uParam0, 262144))
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);

	if (!func_90(*uParam0, 512))
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			CAM::STOP_GAMEPLAY_HINT(false);

	if (!func_90(*uParam0, 1024))
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);

	if (iParam2 != 2)
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);

	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
	
		if (!func_90(*uParam0, 16))
		{
			itemset = ITEMSET::CREATE_ITEMSET(true);
			flag = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, itemset);
			i = 0;
		
			for (i = 0; i < ITEMSET::GET_ITEMSET_SIZE(itemset); i = i + 1)
			{
				indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset);
				entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset);
			
				if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
				{
				}
				else
				{
					flag2 = false;
				
					if (ENTITY::IS_ENTITY_AN_OBJECT(entityFromItem))
						if (func_93() == entityFromItem)
							flag2 = true;
				
					offsetFromEntityInWorldCoords = iParam3;
					offsetFromEntityInWorldCoords.f_1 = iParam4;
					offsetFromEntityInWorldCoords.f_2 = iParam5;
				
					if (_IS_NULL_VECTOR(offsetFromEntityInWorldCoords))
					{
						offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, (float)-1 + i, 0f) };
						func_95(&offsetFromEntityInWorldCoords, 50, 10, false);
					}
				
					PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, true);
					ENTITY::SET_ENTITY_COORDS(entityFromItem, offsetFromEntityInWorldCoords, false, true, true, true);
				
					if (flag2)
					{
						func_96(2);
						func_97(-1);
						func_98(offsetFromEntityInWorldCoords);
						func_100(func_99());
					}
				
					flag = true;
				}
			}
		
			if (flag)
			{
				if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
				}
			}
		
			ITEMSET::DESTROY_ITEMSET(itemset);
		}
	}

	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		mount = PED::GET_MOUNT(Global_35);
	
		if (!ENTITY::IS_ENTITY_DEAD(mount))
		{
			TASK::CLEAR_PED_TASKS(mount, true, false);
			TASK::TASK_STAND_STILL(mount, -1);
		}
	}

	if (!func_90(*uParam0, 4096))
		func_101(Global_35);

	if (!func_90(*uParam0, 1048576))
		UIFEED::UI_FEED_CLEAR_CHANNEL(7, true, false);

	if (!func_90(*uParam0, 2097152))
		if (func_102() || PED::_IS_PED_DRUNK(Global_35))
			func_103(true);

	if (Global_1359489.f_16 & 4194304 == 0)
		Global_1359489.f_16 = Global_1359489.f_16 | 4194304;

	*uParam0 = 0;
	return;
}

void func_45(var uParam0, Ped pedParam1, char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x142F Hash - 0x9240AF10 ^0x9240AF10
{
	func_104(uParam0, pedParam1, sParam2, iParam3, iParam4, bParam5);
	return;
}

BOOL func_46(var uParam0, int iParam1) // Position - 0x1447 Hash - 0x718DD1EF ^0x5F4D390E
{
	return uParam0->f_8 && iParam1 != false;
}

void func_47(var uParam0, int iParam1) // Position - 0x1458 Hash - 0x53A96DDB ^0x69C93C85
{
	uParam0->f_8 = uParam0->f_8 || iParam1;
	return;
}

BOOL func_48() // Position - 0x146B Hash - 0xCFE69610 ^0x71587AB
{
	return func_105(Global_1879514.f_1);
}

void func_49() // Position - 0x147D Hash - 0x54676713 ^0xE6051283
{
	Global_1359489.f_11 = 0;
	return;
}

BOOL func_50(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x148C Hash - 0x414AB31A ^0x68294F79
{
	int num;

	if (func_106(Global_1359489.f_11, bParam0, iParam1, bParam2))
	{
		if (Global_1359489.f_11 < 26)
		{
			num = Global_1359489.f_11;
			num = num + 1;
			Global_1359489.f_11 = num;
		}
		else
		{
			return true;
		}
	}

	return false;
}

Ped func_51(var uParam0, var uParam1) // Position - 0x14D0 Hash - 0x6747FB46 ^0x33F721B4
{
	BOOL flag;
	int num;
	Ped mount;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	Player player;
	Ped saddleHorseForPlayer;
	var unk;
	var unk3;
	int num2;
	int idOfThisThread;

	uParam1->f_10 = func_107(uParam1->f_10);

	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}

	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}

	if (*uParam1)
		_IS_NULL_VECTOR(uParam1->f_6);

	flag = func_108();

	if (*uParam1)
	{
		if (flag && !func_109(Global_1835011[4 /*74*/].f_1, true))
		{
			if (func_52(5))
			{
				func_110(5);
				func_111(5);
				func_97(0);
				func_96(0);
			}
		}
	}

	if (func_112(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}

	if (flag && func_109(Global_1835011[37 /*74*/].f_1, true) && !func_109(Global_1835011[43 /*74*/].f_1, true))
	{
		*uParam0 = 1;
		return 0;
	}

	if (flag && func_109(Global_1835011[43 /*74*/].f_1, true) && !func_109(Global_1835011[44 /*74*/].f_1, true))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}

	num = uParam1->f_10;
	mount = func_113(num);
	flag2 = false;
	flag3 = false;
	flag4 = false;

	if (func_114(num))
	{
		flag2 = true;
	
		if (func_115(num))
			flag3 = true;
	
		if (func_116(num))
			flag4 = true;
	}

	if (*uParam1)
	{
		if (flag2)
		{
			if (flag4 && !uParam1->f_5)
			{
				func_117(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (*uParam1)
	{
		if (flag2)
		{
			if (flag3)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_52(0) && func_52(1))
			{
				func_118(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_119())
				func_120();
		
			func_97(0);
			func_96(0);
			func_98(uParam1->f_6);
		}
	}

	if (!func_114(uParam1->f_10))
	{
		if (*uParam1)
		{
			if (func_121(uParam1->f_10) == 0 || func_122(uParam1->f_10) == 0 || func_123(uParam1->f_10) == 0)
				func_124(uParam1->f_10);
		
			func_125(uParam1->f_10);
			func_126(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
	
		*uParam0 = 1;
		return 0;
	}

	num = uParam1->f_10;
	mount = func_113(num);
	flag2 = false;
	flag3 = false;
	flag4 = false;

	if (func_114(num))
	{
		flag2 = true;
	
		if (func_115(num))
			flag3 = true;
	
		if (func_116(num))
			flag4 = true;
	}

	if (uParam1->f_2)
	{
		if (flag2)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(mount))
				ENTITY::FREEZE_ENTITY_POSITION(mount, false);
		
			if (!_IS_NULL_VECTOR(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(mount, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(mount, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(mount, false);
			}
		}
	}

	if (func_127(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}

	if (flag2)
	{
		if (flag3)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
		
			*uParam0 = 1;
			return 0;
		}
	}

	if (flag2)
	{
		if (flag4 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
		
			*uParam0 = 1;
			return 0;
		}
	}

	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(mount))
			{
				*uParam0 = 0;
				return 0;
			}
		
			player = PLAYER::PLAYER_ID();
			saddleHorseForPlayer = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(player);
		
			if (ENTITY::DOES_ENTITY_EXIST(saddleHorseForPlayer))
				if (saddleHorseForPlayer != mount)
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(player, 0);
		
			unk = { func_128(uParam1->f_10) };
			unk3 = { func_129() };
			func_130(mount, &unk, &unk3, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(player, mount);
			PED::SET_PED_CONFIG_FLAG(mount, 186, false);
		}
	}

	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return mount;
	}

	if (!func_73(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
		func_131(uParam1->f_10);
	
		if (uParam1->f_2 && !_IS_NULL_VECTOR(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(mount, false);
			PHYSICS::_UNHITCH_HORSE(mount);
			ENTITY::SET_ENTITY_COORDS(mount, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(mount, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(mount, false);
		}
	
		*uParam0 = 2;
		return mount;
	}

	func_71(uParam1->f_10);

	if (func_73(uParam1->f_10))
	{
		num2 = func_72(uParam1->f_10);
		idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	
		if (num2 != idOfThisThread)
		{
			*uParam0 = 1;
			return 0;
		}
	}

	*uParam0 = 2;
	return mount;
}

BOOL func_52(int iParam0) // Position - 0x1945 Hash - 0xDCE9DC47 ^0xDCE9DC47
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_123(iParam0) == 0)
		return false;

	return true;
}

void func_53(int iParam0, BOOL bParam1) // Position - 0x1978 Hash - 0x9D46840B ^0xDAAD5146
{
	int value;
	int healthAmount;

	value = 50 * iParam0;
	healthAmount = value + ENTITY::GET_ENTITY_HEALTH(Global_35);

	if (bParam1 && value < 0)
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, BUILTIN::TO_FLOAT(value), 0, 0);
	else if (iParam0 <= 0 || healthAmount > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	else
		ENTITY::SET_ENTITY_HEALTH(Global_35, healthAmount, 0);

	return;
}

void func_54(BOOL bParam0) // Position - 0x19E9 Hash - 0x7E31FDED ^0x6A92EAB4
{
	if (func_132())
	{
		func_133(0);
	
		if (INVENTORY::_INVENTORY_USE_SP_BACKUP())
			INVENTORY::_0x6968CE7AC32F6788(5);
		else
			INVENTORY::_0x6968CE7AC32F6788(1);
	
		func_134(Global_35, &Global_1347400, true);
	
		if (bParam0)
			func_135();
	}

	return;
}

void func_55() // Position - 0x1A29 Hash - 0x8BDBB975 ^0x8BDBB975
{
	int num;

	if (iLocal_262 < 10)
	{
		num = iLocal_262;
		num = num + 1;
		iLocal_262 = num;
	}

	if (iLocal_263 < 10)
	{
		num = iLocal_263;
		num = num + 1;
		iLocal_263 = num;
	}

	if (iLocal_264 < 10)
	{
		num = iLocal_264;
		num = num + 1;
		iLocal_264 = num;
	}

	func_136(iLocal_262, iLocal_263, iLocal_264);
	func_137();
	return;
}

void func_56(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1A8A Hash - 0x5266CD64 ^0x5266CD64
{
	float num;

	if (func_75() == false)
	{
		func_138(1, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_139(1);

	if (bParam1)
		func_140(num);

	if (bParam2)
		fParam0 = func_141(1, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_143(1, func_142(fParam0, -100f, 100f), bParam1);
	return;
}

void func_57(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1AEB Hash - 0x2BA41710 ^0x2BA41710
{
	float num;

	if (func_75() == false)
	{
		func_138(2, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_139(2);

	if (bParam1)
		func_140(num);

	if (bParam2)
		fParam0 = func_141(2, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_143(2, func_142(fParam0, -100f, 100f), bParam1);
	return;
}

void func_58(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1B4C Hash - 0x99A7D713 ^0x99A7D713
{
	float num;

	if (func_75() == false)
	{
		func_138(0, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_139(0);

	if (bParam1)
		func_140(num);

	if (num >= 100f - 1f)
		func_144();

	if (bParam2)
		fParam0 = func_141(0, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_143(0, func_142(fParam0, -100f, 100f), bParam1);
	return;
}

void func_59() // Position - 0x1BBE Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_1905944.f_5695 = 1;
	return;
}

void func_60(int iParam0) // Position - 0x1BCE Hash - 0x2832277D ^0x7DD988A9
{
	if (!func_145(iParam0))
		return;

	if (!Global_1395601.f_5[iParam0 /*28*/].f_21)
		Global_1395601.f_5[iParam0 /*28*/].f_21 = 1;

	return;
}

void func_61() // Position - 0x1C00 Hash - 0xB489DB0A ^0xACFC733
{
	PED::SET_PED_RESET_FLAG(Global_35, 129, true);

	if (!bLocal_19)
		if (func_146(68, 1, false, false, false))
			bLocal_19 = true;

	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(ansLocal_16, false) && !bLocal_18)
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_IN_GAME_CUTSCENE"));
		bLocal_18 = true;
	}

	return;
}

void func_62() // Position - 0x1C46 Hash - 0xD0C94760 ^0x5BD396C3
{
	Ped args;

	args.f_15 = joaat("dutch_gang");
	args = PLAYER::PLAYER_PED_ID();
	args.f_12 = 46;
	args.f_4 = joaat("dutch_gang");
	args.f_8 = 0;
	MISC::_CREATE_AI_MEMORY(&args, 17);
	return;
}

void func_63(var uParam0, int iParam1) // Position - 0x1C79 Hash - 0xFE5D8273 ^0x73A78C82
{
	if (Global_1935630.f_12)
		return;

	func_147(2000);
	Global_16 = false;
	func_148();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_149(*uParam0, 8));

	if (!func_149(*uParam0, 1))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);

	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);

	if (func_149(*uParam0, 2) || func_149(*uParam0, 4))
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));

	if (!func_149(*uParam0, 16))
		func_150(true);

	if (func_149(*uParam0, 32))
	{
		func_151(Global_35, -383172193, 0, 1742327865, false, true, false, false, true, false);
		func_152(joaat("kit_bandana"), false);
	}

	func_153(&(Global_1946054.f_1497), Global_35, true, 49217, true, true, true);

	if (Global_1359489.f_16 & 4194304 != 0)
		Global_1359489.f_16 = Global_1359489.f_16 - Global_1359489.f_16 & 4194304;

	*uParam0 = 0;
	return;
}

BOOL func_64(int iParam0) // Position - 0x1D8A Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

int func_65(int iParam0, var uParam1, var uParam2) // Position - 0x1D96 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_66(var uParam0) // Position - 0x1DB3 Hash - 0x5001E582 ^0x5001E582
{
	return func_154(*uParam0, 1);
}

void func_67(var uParam0) // Position - 0x1DC3 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_155(uParam0, 0f);
	return;
}

BOOL func_68(Ped pedParam0) // Position - 0x1DD2 Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_69(pedParam0);

	if (num == -1)
		return false;

	return true;
}

int func_69(Ped pedParam0) // Position - 0x1E10 Hash - 0xD44AE303 ^0xA29D7F05
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

void func_70(int iParam0) // Position - 0x1E55 Hash - 0x4CB73698 ^0x4CB73698
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_156(iParam0, 32);
	func_157();
	return;
}

void func_71(int iParam0) // Position - 0x1E83 Hash - 0x79C2D19 ^0x7856ADEC
{
	int threadId;

	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	threadId = func_72(iParam0);

	if (!SCRIPTS::DOES_THREAD_EXIST(threadId))
		func_74(iParam0);
	else if (!SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
		func_74(iParam0);

	return;
}

int func_72(int iParam0) // Position - 0x1ED1 Hash - 0x79966B74 ^0xE90595E1
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_3;
}

BOOL func_73(int iParam0) // Position - 0x1EFF Hash - 0x79966B74 ^0xA532C902
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_74(int iParam0) // Position - 0x1F2D Hash - 0xC2FEF89F ^0xC1FD7E19
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	return;
}

BOOL func_75() // Position - 0x1F65 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_76(int iParam0, int iParam1) // Position - 0x1F73 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_77(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1F83 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_78(int iParam0, int iParam1) // Position - 0x1FA9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_79(int iParam0) // Position - 0x1FB8 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_64(iParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		hash = func_158(iParam0);
	
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

Ped func_80(int iParam0) // Position - 0x2020 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_64(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

void func_81(int iParam0) // Position - 0x205A Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_80(iParam0)))
		{
			func_159(iParam0, 67108864, true);
			func_32(iParam0, 19, true);
		}
	}

	return;
}

float func_82(int iParam0) // Position - 0x208D Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_64(iParam0))
		return 0f;

	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_83(int iParam0) // Position - 0x20AE Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_80(iParam0);
	persChar = func_34(iParam0, false);
	func_160(iParam0, ped);

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

BOOL func_84(int iParam0) // Position - 0x2108 Hash - 0x6410553A ^0x46627D03
{
	if (!func_64(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_85(int iParam0) // Position - 0x2154 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_64(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_86(int iParam0, int iParam1, BOOL bParam2) // Position - 0x217C Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_64(iParam0))
		return;

	if (bParam2)
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 - Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_87(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x21E1 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	int num;
	PersChar persChar;

	if (!func_64(iParam0))
		return 0;

	mount = func_42(iParam0);

	if (func_33(mount, 0))
	{
		if (func_33(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_84(iParam0) || func_85(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_161(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				num = func_162(iParam0, true);
			
				if (num != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_163(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_164(iParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_164(iParam0, false));
					func_165(iParam0);
				}
			}
			else
			{
				if (func_27(iParam0, 32768, true))
				{
					persChar = func_164(iParam0, false);
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
			
				func_163(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_164(iParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_164(iParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_163(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_166(iParam0, 0);
	return 1;
}

void func_88(int iParam0) // Position - 0x2392 Hash - 0xD46386C8 ^0x5B34A14E
{
	int num;

	if (func_75() != -1)
		return;

	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		num = 8;
		PED::_CHANGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT(iParam0 * num));
	}

	return;
}

void func_89(BOOL bParam0) // Position - 0x23CF Hash - 0x70653DE9 ^0x49B958F9
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return;

	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		return;

	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
	return;
}

BOOL func_90(int iParam0, int iParam1) // Position - 0x2403 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_91(BOOL bParam0, BOOL bParam1) // Position - 0x2412 Hash - 0x26C4C089 ^0x53EE9A65
{
	int ammoInPedWeapon;
	int weaponClipSize;
	int i;
	Hash weaponHash;
	int attachPoint;

	for (i = 0; i < 29; i = i + 1)
	{
		attachPoint = i;
	
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, attachPoint, true))
		{
			if (func_167(weaponHash) && WEAPON::IS_WEAPON_A_GUN(weaponHash))
			{
				if (bParam0)
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, weaponHash) < WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4)
						WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(weaponHash), (WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4) - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, weaponHash)), 752097756);
			
				ammoInPedWeapon = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, weaponHash);
			
				if (ammoInPedWeapon > WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash))
					weaponClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash);
				else
					weaponClipSize = ammoInPedWeapon;
			
				if (weaponClipSize > 0)
					WEAPON::SET_AMMO_IN_CLIP(Global_35, weaponHash, weaponClipSize);
			
				weaponClipSize = 0;
				ammoInPedWeapon = 0;
			}
		}
	}

	if (bParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
		func_168(1);

	return;
}

void func_92() // Position - 0x24EF Hash - 0x2910738C ^0x2910738C
{
	Hash weaponHash;

	weaponHash = func_169(Global_35, 9, true, false);

	if (func_167(weaponHash))
		return;

	weaponHash = func_169(Global_35, 7, true, false);

	if (func_167(weaponHash))
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 8, false, false);

	weaponHash = func_169(Global_35, 0, true, false);

	if (func_167(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		return;
	}

	weaponHash = func_169(Global_35, 1, true, false);

	if (func_167(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		return;
	}

	weaponHash = func_169(Global_35, 18, true, false);

	if (func_167(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		return;
	}

	weaponHash = func_170();

	if (func_167(weaponHash))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, true))
			func_171(Global_35, weaponHash, 1, false, 9, false, false, 1056964608, 1065353216, -1, false, false, false, false);
		else
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
	
		return;
	}

	weaponHash = func_172(6291456, 0);

	if (func_167(weaponHash))
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, true))
			func_171(Global_35, weaponHash, true, false, 9, false, false, 1056964608, 1065353216, -1, false, false, false, false);
		else
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);

	return;
}

Object* func_93() // Position - 0x266A Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_393;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x2679 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_95(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x26A3 Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_173(*uParam0, 0f, 0f, 0f))
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

void func_96(int iParam0) // Position - 0x279A Hash - 0xC20F1267 ^0xD623971A
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
	return;
}

void func_97(int iParam0) // Position - 0x27AF Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3054 = iParam0;
	return;
}

void func_98(var uParam0, var uParam1, var uParam2) // Position - 0x27C2 Hash - 0xD65C08CA ^0xEAB2D54F
{
	Global_40.f_1095.f_3054.f_77 = { uParam0 };
	return;
}

int func_99() // Position - 0x27DB Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_100(int iParam0) // Position - 0x27E7 Hash - 0xC20F1267 ^0x9F8567FC
{
	Global_40.f_1095.f_3054.f_2 = iParam0;
	return;
}

void func_101(Ped pedParam0) // Position - 0x27FC Hash - 0xC848742E ^0xD171C7FA
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	PED::CLEAR_PED_BLOOD_DAMAGE(pedParam0);

	for (i = 0; i < 10; i = i + 1)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(pedParam0, i);
	}

	return;
}

BOOL func_102() // Position - 0x2832 Hash - 0x3630EC94 ^0x3630EC94
{
	return func_174() || func_175();
}

void func_103(BOOL bParam0) // Position - 0x2848 Hash - 0x6D9C7C2F ^0xEFFA22A7
{
	if (bParam0)
		Global_1935436.f_9 = 0f;

	Global_1935436.f_8 = 0f;
	Global_1935436.f_12.f_1 = 0f;
	Global_1935436.f_12 = 0f;
	Global_1935436.f_12.f_3 = 0f;
	Global_1935436.f_12.f_2 = 0f;
	Global_1935436.f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_SET_PED_MOTIVATION(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_SET_PED_DRUNKNESS(Global_35, false, 0f);
	func_176(0f);
	Global_1935436.f_11 = 1;

	if (func_177())
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	else
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");

	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
		func_178();

	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);

	return;
}

void func_104(var uParam0, Ped pedParam1, char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x28FF Hash - 0x37E325FF ^0x56E9093A
{
	int num;
	Ped ped;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (iParam3 == 0 && ENTITY::IS_ENTITY_DEAD(pedParam1) && !bParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		{
		}
	
		return;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		sParam2 = func_179(pedParam1);

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		{
		}
	
		return;
	}

	num = func_180(uParam0, pedParam1);

	if (num != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[num /*12*/].f_1), sParam2))
		{
		}
		else if (uParam0->f_13[num /*12*/].f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[num /*12*/].f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		ped = func_181(uParam0, sParam2);
	
		if (ENTITY::DOES_ENTITY_EXIST(ped) && ped != pedParam1)
			func_182(uParam0, ped);
	}

	if (num == -1)
		num = func_183(uParam0);

	if (num != -1)
	{
		uParam0->f_13[num /*12*/] = pedParam1;
		TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_13[num /*12*/].f_1), sParam2, 64);
		uParam0->f_13[num /*12*/].f_9 = iParam3;
		uParam0->f_13[num /*12*/].f_10 = iParam4;
	
		if (bParam5)
			func_184(&uParam0->f_13[num /*12*/], 2);
		else
			func_185(&uParam0->f_13[num /*12*/], 2);
	}

	return;
}

BOOL func_105(int iParam0) // Position - 0x2A4E Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < &func_10;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_106(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x2A81 Hash - 0xCE0148F8 ^0x79CFF653
{
	PersChar persChar;

	if (func_186(iParam0, true, false))
	{
		if (func_187(iParam0))
		{
			persChar = func_34(iParam0, false);
		
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(persChar))
					return false;
			
				if (bParam3 && !PED::IS_PED_READY_TO_RENDER(func_80(iParam0)))
					return false;
			
				if (bParam1 || !func_188(func_80(iParam0), 1116471296, -1082130432, -1082130432, -1082130432) || CAM::IS_SCREEN_FADED_OUT())
				{
					PERSCHAR::_0xD4B614179BCD0654(persChar);
					func_189(iParam0, false);
				
					if (iParam2 && func_190(Global_1360165[iParam0 /*1157*/].f_63))
						func_24(iParam0, 65, false);
				}
				else
				{
					return false;
				}
			}
		}
	}

	return true;
}

int func_107(int iParam0) // Position - 0x2B41 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_108() // Position - 0x2B5A Hash - 0x65674CA9 ^0x17A1348F
{
	return 1;
}

BOOL func_109(int iParam0, BOOL bParam1) // Position - 0x2B79 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_191(iParam0))
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

void func_110(int iParam0) // Position - 0x2BAA Hash - 0xB0910AA9 ^0xD61D2BCE
{
	Ped ped;
	Hash entityModel;

	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_114(iParam0))
		return;

	ped = func_113(iParam0);
	func_192(iParam0);

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(ped))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);

	entityModel = ENTITY::GET_ENTITY_MODEL(ped);

	if (PED::_IS_PED_MODEL_SUPPRESSED(entityModel))
		if (!func_193(entityModel))
			PED::SET_PED_MODEL_IS_SUPPRESSED(entityModel, false);

	PED::DELETE_PED(&ped);
	func_194(iParam0, 0);
	func_74(iParam0);
	return;
}

void func_111(int iParam0) // Position - 0x2C2E Hash - 0x52E5527E ^0x2EDCEB10
{
	var unk;
	int i;
	int j;

	iParam0 = func_107(iParam0);

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
	func_195(&unk);
	func_196(iParam0, unk);
	func_197(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_198(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_199(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_200(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));

	for (i = 0; i < 2; i = i + 1)
	{
		func_201(i, &Global_40.f_1095.f_1[iParam0 /*436*/].f_398[i /*4*/]);
	}

	for (j = 0; j < 3; j = j + 1)
	{
		func_202(j, &Global_40.f_1095.f_1[iParam0 /*436*/].f_407[j /*4*/]);
	}

	func_203(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_&func_3));
	func_204(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_205(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
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

int func_112(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x2F80 Hash - 0x56F0811C ^0x278FB5A
{
	return func_206(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

Ped func_113(int iParam0) // Position - 0x2F96 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

BOOL func_114(int iParam0) // Position - 0x2FC2 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_107(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_115(int iParam0) // Position - 0x2FFA Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_114(iParam0))
		return false;

	ped = func_113(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

BOOL func_116(int iParam0) // Position - 0x304E Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_114(iParam0))
		return false;

	ped = func_113(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return true;

	return false;
}

void func_117(int iParam0) // Position - 0x30A3 Hash - 0x2692E663 ^0xF0DB5F3E
{
	Ped ped;

	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_114(iParam0))
		return;

	ped = func_113(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	ENTITY::SET_ENTITY_HEALTH(ped, 0, 0);
	return;
}

void func_118(int iParam0, int iParam1) // Position - 0x30EE Hash - 0x7A45E039 ^0xE802421E
{
	Player playerIndex;
	Ped horse;
	BOOL flag;
	Ped horse2;
	BOOL flag2;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::IS_PLAYER_DEAD(playerIndex);
	func_207(iParam0);
	func_207(iParam0);
	func_208(iParam0, iParam1);
	func_209(iParam0, iParam1);
	func_210(iParam0, iParam1);
	horse = func_113(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(horse))
	{
		if (iParam0 == 0 || iParam0 == 1)
			func_211(horse);
	
		if (iParam0 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, horse);
		}
		else if (iParam0 == 1)
		{
			flag = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, horse);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(playerIndex) == horse)
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, 0);
		
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(playerIndex) == horse)
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, 0);
		}
	}

	horse2 = func_113(iParam1);

	if (ENTITY::DOES_ENTITY_EXIST(horse2))
	{
		if (iParam1 == 0 || iParam1 == 1)
			func_211(horse2);
	
		if (iParam1 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, horse2);
		}
		else if (iParam1 == 1)
		{
			flag2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, horse2);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(playerIndex) == horse2)
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, 0);
		
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(playerIndex) == horse2)
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, 0);
		}
	}

	func_157();
	return;
}

BOOL func_119() // Position - 0x3210 Hash - 0x57592B8C ^0xB4B7573B
{
	Object* p_object;

	p_object = func_93();

	if (ENTITY::DOES_ENTITY_EXIST(p_object))
		return true;

	return false;
}

void func_120() // Position - 0x322C Hash - 0x9A84CB87 ^0x788CD227
{
	Object* p_object;

	p_object = func_93();

	if (!ENTITY::DOES_ENTITY_EXIST(p_object))
		return;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(p_object))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(p_object, true, true);

	OBJECT::DELETE_OBJECT(&p_object);
	func_212(0);
	return;
}

Ped func_121(int iParam0) // Position - 0x3264 Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_122(int iParam0) // Position - 0x3297 Hash - 0xACA56E21 ^0xEE9738B3
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

int func_123(int iParam0) // Position - 0x32CA Hash - 0xACA56E21 ^0x79269304
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

void func_124(int iParam0) // Position - 0x32FD Hash - 0x728A4C05 ^0x728A4C05
{
	var unk;
	var unk2;
	var unk3;

	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_213(&unk, &unk2, &unk3);
	func_214(iParam0, unk);
	func_215(iParam0, unk2);
	func_216(iParam0, unk3);
	func_217(iParam0, 1);
	func_218(iParam0, 1);
	return;
}

void func_125(int iParam0) // Position - 0x3350 Hash - 0xA5F9E65B ^0xA5F9E65B
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_219(iParam0, 1);
	return;
}

void func_126(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x3379 Hash - 0xFEF7EAB ^0x64576AA5
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_19 = { uParam1 };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
	return;
}

BOOL func_127(int iParam0) // Position - 0x33B7 Hash - 0xBDE1A61 ^0xBDE1A61
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return func_220(iParam0, 1);
}

struct<2> func_128(int iParam0) // Position - 0x33E2 Hash - 0xC0CC9820 ^0xC0CC9820
{
	var unk;
	var unk3;
	var unk4;

	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return unk;

	if (iParam0 >= 7)
		return unk;

	!func_221(iParam0, &unk3);
	!func_222(iParam0, &unk4);
	unk = unk3;
	unk.f_1 = unk4;
	return unk;
}

struct<6> func_129() // Position - 0x3432 Hash - 0x98D1204F ^0xBF85383B
{
	var unk;
	var unk7;
	var unk8;
	var unk9;
	var unk10;
	var unk11;
	var unk12;

	if (func_223(joaat("SLOTID_HORSE_BEDROLL"), &unk7))
		unk.f_4 = unk7;

	if (func_223(joaat("SLOTID_HORSE_BLANKET"), &unk8))
		unk = unk8;

	if (func_223(joaat("SLOTID_HORSE_HORN"), &unk9))
		unk.f_2 = unk9;

	if (func_223(joaat("SLOTID_HORSE_SADDLEBAG"), &unk10))
		unk.f_5 = unk10;

	if (func_223(joaat("SLOTID_HORSE_STIRRUP"), &unk11))
		unk.f_3 = unk11;

	if (func_223(joaat("SLOTID_HORSE_SADDLE"), &unk12))
		unk.f_1 = unk12;

	return unk;
}

void func_130(Ped pedParam0, var uParam1, var uParam2, Hash hParam3) // Position - 0x34B4 Hash - 0x50380B5F ^0xA5E53457
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);

	if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
		return;

	func_224(pedParam0);
	func_225(pedParam0, uParam1);
	func_226(pedParam0);
	func_227(pedParam0, uParam2);

	if (hParam3 != 0)
		func_228(pedParam0, hParam3, false);

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, true);
	return;
}

void func_131(int iParam0) // Position - 0x3528 Hash - 0x93699D3A ^0x887A14C1
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

BOOL func_132() // Position - 0x3563 Hash - 0x4228A1C2 ^0x3F72907E
{
	return Global_1347400.f_76;
}

void func_133(int iParam0) // Position - 0x3571 Hash - 0x29A8F290 ^0x25E443E6
{
	Global_1347400.f_76 = iParam0;
	return;
}

void func_134(Ped pedParam0, var uParam1, BOOL bParam2) // Position - 0x3581 Hash - 0x49398502 ^0x49398502
{
	int i;
	Hash ammoType;

	for (i = 0; i < 45; i = i + 1)
	{
		ammoType = func_229(i);
	
		if (func_230(ammoType, 0))
			if (uParam1->[i] > 0)
				if (bParam2)
					WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(pedParam0, ammoType, uParam1->[i], 752097756);
				else
					WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(pedParam0, ammoType, uParam1->[i] - WEAPON::GET_PED_AMMO_BY_TYPE(pedParam0, ammoType), 752097756);
	}

	return;
}

void func_135() // Position - 0x35EF Hash - 0x23D6A9DB ^0x7ACA1CEC
{
	func_231(Global_35, &(Global_1347400.f_46));
	return;
}

void func_136(int iParam0, int iParam1, int iParam2) // Position - 0x3604 Hash - 0x97FCB35C ^0xD834F750
{
	Hash hash;
	int num;
	BOOL flag;
	BOOL flag2;

	flag2 = false;
	flag = func_75() != -1;

	if (func_232() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag2 = true;

	hash = func_233(iParam0);

	if (hash != 0)
	{
		num = 5;
	
		if (func_234(Global_1946054.f_1378.f_1[num /*3*/], flag2, hash, flag) != -1)
		{
			Global_1946054.f_1378.f_1[num /*3*/].f_1 = hash;
			Global_1946054.f_2653 = iParam0;
		}
		else if (func_234(Global_1946054.f_1378.f_1[num /*3*/], flag2, func_233(iParam0 + 1), flag) != -1)
		{
			Global_1946054.f_1378.f_1[num /*3*/].f_1 = joaat("base");
			Global_1946054.f_2653 = iParam0;
		}
		else
		{
			Global_1946054.f_1378.f_1[num /*3*/] = func_235(0);
		
			if (hash == -888790689 || hash == -2126063412)
			{
				Global_1946054.f_1378.f_1[num /*3*/].f_1 = 289238755;
				Global_1946054.f_2653 = iParam0;
			}
			else
			{
				Global_1946054.f_1378.f_1[num /*3*/].f_1 = hash;
				Global_1946054.f_2653 = iParam0;
			}
		}
	}

	hash = func_233(iParam1);

	if (hash != 0)
	{
		num = 6;
	
		if (func_234(Global_1946054.f_1378.f_1[num /*3*/], flag2, hash, flag) != -1)
		{
			Global_1946054.f_1378.f_1[num /*3*/].f_1 = hash;
			Global_1946054.f_2654 = iParam1;
		}
		else if (func_234(Global_1946054.f_1378.f_1[num /*3*/], flag2, func_233(iParam1 + 1), flag) != -1)
		{
			Global_1946054.f_1378.f_1[num /*3*/].f_1 = joaat("base");
			Global_1946054.f_2654 = iParam1;
		}
		else
		{
			Global_1946054.f_1378.f_1[num /*3*/] = func_235(1);
		
			if (hash == -888790689 || hash == -2126063412)
			{
				Global_1946054.f_1378.f_1[num /*3*/].f_1 = 289238755;
				Global_1946054.f_2654 = iParam1;
			}
			else
			{
				Global_1946054.f_1378.f_1[num /*3*/].f_1 = hash;
				Global_1946054.f_2654 = iParam1;
			}
		}
	}

	hash = func_233(iParam2);

	if (hash != 0)
	{
		num = 7;
	
		if (func_234(Global_1946054.f_1378.f_1[num /*3*/], flag2, hash, flag) != -1)
		{
			Global_1946054.f_1378.f_1[num /*3*/].f_1 = hash;
			Global_1946054.f_2655 = iParam2;
		}
		else if (func_234(Global_1946054.f_1378.f_1[num /*3*/], flag2, func_233(iParam2 + 1), flag) != -1)
		{
			Global_1946054.f_1378.f_1[num /*3*/].f_1 = joaat("base");
			Global_1946054.f_2655 = iParam2;
		}
		else
		{
			Global_1946054.f_1378.f_1[num /*3*/] = func_235(2);
		
			if (hash == -888790689 || hash == -2126063412)
			{
				Global_1946054.f_1378.f_1[num /*3*/].f_1 = 289238755;
				Global_1946054.f_2655 = iParam2;
			}
			else
			{
				Global_1946054.f_1378.f_1[num /*3*/].f_1 = hash;
				Global_1946054.f_2655 = iParam2;
			}
		}
	}

	return;
}

void func_137() // Position - 0x38F3 Hash - 0xF1D2A9F4 ^0xF1D2A9F4
{
	int num;
	int num2;
	int num3;
	int num4;

	func_236(0);
	func_237(0, Global_1946054.f_2653, false);
	func_237(1, Global_1946054.f_2654, false);
	func_237(2, Global_1946054.f_2655, false);
	num = 5;
	num2 = 6;
	num3 = 7;
	num4 = 0;
	Global_1946054.f_1497.f_1[num /*3*/] = { Global_1946054.f_1378.f_1[num /*3*/] };
	Global_1946054.f_1497.f_1[num2 /*3*/] = { Global_1946054.f_1378.f_1[num2 /*3*/] };
	Global_1946054.f_1497.f_1[num3 /*3*/] = { Global_1946054.f_1378.f_1[num3 /*3*/] };
	Global_1946054.f_1497.f_1[num4 /*3*/] = { Global_1946054.f_1378.f_1[num4 /*3*/] };
	func_238();
	func_239();
	return;
}

void func_138(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x39B3 Hash - 0x6775E582 ^0x6775E582
{
	if (bParam4)
		fParam1 = func_141(iParam0, fParam1, true);

	func_241(iParam0, func_240(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

float func_139(int iParam0) // Position - 0x39E2 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

void func_140(float fParam0) // Position - 0x39F4 Hash - 0xC7A6B786 ^0xBAB8AC2D
{
	if (fParam0 >= 100f - 1f)
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	else
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	return;
}

float func_141(int iParam0, float fParam1, BOOL bParam2) // Position - 0x3A24 Hash - 0xFB55A421 ^0xFB55A421
{
	int num;
	int num2;

	num = func_242();
	func_243(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_244(iParam0, 2);

	if (func_246(num, func_245(iParam0, 2), true))
	{
		func_247(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_248(88, bParam2);
		return 0f;
	}

	func_249(iParam0, func_242(), 2);
	func_247(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_142(float fParam0, float fParam1, float fParam2) // Position - 0x3A8D Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_143(int iParam0, float fParam1, BOOL bParam2) // Position - 0x3AB4 Hash - 0x8FDCEA1F ^0x46BCD39D
{
	int value;
	char* variableName;

	if (func_75() != -1)
		return;

	if (!func_250(15))
		return;

	Global_40.f_11095[iParam0] = fParam1;
	value = func_251(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_252(iParam0), value);
	func_254(func_253(iParam0), 100f * (BUILTIN::TO_FLOAT(value) / 100f), false);

	if (fParam1 <= func_255(15) && iParam0 == 1 && PED::IS_PED_ON_FOOT(Global_35) && !PED::IS_PED_SWIMMING(Global_35))
		func_248(84, true);

	if (fParam1 <= -99.999f)
		func_248(func_256(iParam0), true);

	variableName = func_257(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, variableName, BUILTIN::TO_FLOAT(value), -1);

	return;
}

void func_144() // Position - 0x3B8D Hash - 0xB36799A8 ^0x76458B55
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
	return;
}

BOOL func_145(int iParam0) // Position - 0x3BBA Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

BOOL func_146(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3BD0 Hash - 0x440559AA ^0x440559AA
{
	if (!func_258(hParam0))
		return true;

	if (!func_259(hParam0, false))
	{
		if (iParam1 == 0)
			return true;
	
		func_260(hParam0, false);
	}

	if (bParam2)
		if (!func_261(Global_1347702[hParam0 /*49*/].f_13, 1024))
			func_262(&(Global_1347702[hParam0 /*49*/].f_13), 1024);

	if (bParam4 && !func_261(Global_1347702[hParam0 /*49*/].f_13, 8192))
		func_262(&(Global_1347702[hParam0 /*49*/].f_13), 8192);

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[hParam0 /*49*/].f_42, false))
	{
		if (func_261(Global_1347702[hParam0 /*49*/].f_13, 64))
			return true;
	
		return false;
	}

	if (!func_263(hParam0))
		func_264(Global_1347702[hParam0 /*49*/].f_15);
	else if (bParam3 && !func_265(Global_1347702[hParam0 /*49*/].f_15))
		func_266(Global_1347702[hParam0 /*49*/].f_15);

	if (!func_261(Global_1347702[hParam0 /*49*/].f_13, 256))
		func_262(&(Global_1347702[hParam0 /*49*/].f_13), 256);

	return false;
}

void func_147(int iParam0) // Position - 0x3CF2 Hash - 0x7AE52724 ^0x9315F21B
{
	func_267();
	Global_1911774.f_1 = MISC::GET_GAME_TIMER();
	Global_1911774.f_2 = iParam0;
	return;
}

void func_148() // Position - 0x3D10 Hash - 0x47CA4FE0 ^0xED93DC86
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return;

	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		return;

	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
	return;
}

BOOL func_149(int iParam0, int iParam1) // Position - 0x3D37 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_150(BOOL bParam0) // Position - 0x3D46 Hash - 0xAD1429D0 ^0xAD1429D0
{
	if (bParam0)
		Global_1945188.f_865 = Global_1945188.f_865 - Global_1945188.f_865 & 2;
	else
		Global_1945188.f_865 = Global_1945188.f_865 | 2;

	func_268(bParam0);
	return;
}

int func_151(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3D84 Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_269(hParam1, true, false) };
		iParam3 = func_270(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_272(hParam1, hParam2, func_271(iParam3, 1), bParam4, bParam9))
		return 0;

	func_273(true, func_75() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_275(32768) && hParam1 != Global_1946054.f_57[func_271(iParam3, 1) /*11*/])
			{
				func_276();
				func_274(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_271(iParam3, 1) /*11*/])
				func_274(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_274(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_277(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_274(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_278(0);
			func_279(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_274(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_152(Hash hParam0, BOOL bParam1) // Position - 0x3EF2 Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_269(hParam0, false, false) };
	guid = { func_280(hParam0, unk, unk.f_4, false) };

	if (func_281(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_282(false), &guid, bParam1);
	return;
}

void func_153(Hash hParam0, Ped pedParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x3F3C Hash - 0xABE0892F ^0x49EF76F7
{
	int i;
	int num;
	Hash componentHash;
	int num2;
	BOOL isMp;

	isMp = func_75() != -1;
	Global_1946054.f_857 = 0;

	if (iParam3 == -1 && bParam6)
	{
		PED::_RESET_PED_COMPONENTS(pedParam1);
	
		if (!isMp)
		{
			if (Global_1347477.f_189 != 0)
				PED::_EQUIP_META_PED_OUTFIT(pedParam1, Global_1347477.f_189);
		
			if (Global_1946054.f_1 == -2125499975 || Global_1946054.f_1 == -449205311 && Global_1347477.f_190 != 0)
				PED::_EQUIP_META_PED_OUTFIT(pedParam1, Global_1347477.f_190);
		
			func_283(262144);
		}
	}
	else
	{
		bParam6 = false;
	
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_284(pedParam1, 29, isMp, true, 0);
			func_284(pedParam1, 31, isMp, true, 0);
			func_284(pedParam1, 30, isMp, true, 0);
			func_284(pedParam1, 22, isMp, true, 0);
			func_284(pedParam1, 37, isMp, true, 0);
		}
	}

	if (func_275(32768) && func_285(1108822547, 8) && func_286(10, iParam3))
		func_287(pedParam1, false, true);

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num2 = func_288(num, 1);
		
			if (func_285(num2, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else
			{
				componentHash = hParam0->f_1[num /*3*/];
			
				if (!func_286(num, iParam3))
				{
				}
				else if (func_285(num2, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/] || hParam0->f_1[num /*3*/].f_1 == 289238755)
				{
					if (!func_285(num2, 1) || bParam2)
					{
						Global_1946054.f_857 = Global_1946054.f_857 + 1;
					
						if (!bParam6)
							func_284(pedParam1, num, isMp, true, 0);
					
						if (hParam0->f_1[num /*3*/].f_1 == 289238755)
							Global_1946054.f_2456[num /*2*/].f_1 = 289238755;
					
						func_289(num2, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if (!bParam2 && hParam0->f_1[num /*3*/] == Global_1946054.f_2456[num /*2*/] && hParam0->f_1[num /*3*/].f_1 == Global_1946054.f_2456[num /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946054.f_57[num /*11*/].f_1 > 1)
								func_284(pedParam1, num, isMp, true, hParam0->f_1[num /*3*/]);
						
							Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
							Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
						
							if (func_285(num2, 1))
								func_290(num2, 1, 6);
						
							Global_1946054.f_857 = Global_1946054.f_857 + 1;
							PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
						
							if (hParam0->f_1[num /*3*/].f_1 != 0)
								PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
						}
					}
				
					Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
					Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
				
					if (func_285(num2, 1))
						func_290(num2, 1, 6);
				
					Global_1946054.f_857 = Global_1946054.f_857 + 1;
					PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
				
					if (hParam0->f_1[num /*3*/].f_1 != 0)
						PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
				}
			}
		}
	}

	if (Global_1946054.f_857 <= 0)
		return;

	if (bParam4)
	{
		PED::_0xAAB86462966168CE(pedParam1, isMp);
		PED::_UPDATE_PED_VARIATION(pedParam1, false, true, true, true, bParam5);
	}

	return;
}

BOOL func_154(int iParam0, int iParam1) // Position - 0x4286 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_155(var uParam0, float fParam1) // Position - 0x4295 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_291() - fParam1;
	func_292(uParam0, 1);
	func_293(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_156(int iParam0, int iParam1) // Position - 0x42BB Hash - 0x20A81385 ^0xDDACAB07
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 - Global_1900383[iParam0 /*45*/].f_24 && iParam1;
	return;
}

void func_157() // Position - 0x42FF Hash - 0x211BCC6D ^0x211BCC6D
{
	if (func_114(0))
		func_294(0);

	if (func_114(1))
		func_294(1);

	if (func_114(5))
		func_294(5);

	if (func_114(6))
		func_207(6);

	return;
}

Hash func_158(int iParam0) // Position - 0x433B Hash - 0xBA965109 ^0xCB1D208B
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

void func_159(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4517 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] || bParam1;
	return;
}

void func_160(int iParam0, Ped pedParam1) // Position - 0x4548 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_295(pedParam1);

	return;
}

float func_161(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x4562 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_296(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_162(int iParam0, BOOL bParam1) // Position - 0x45B9 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_64(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_297(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_163(int iParam0) // Position - 0x46FE Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_42(iParam0);

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

PersChar func_164(int iParam0, BOOL bParam1) // Position - 0x4774 Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_64(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[iParam0 /*1157*/].f_126 = func_298(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_165(int iParam0) // Position - 0x47C0 Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_64(iParam0))
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

void func_166(int iParam0, int iParam1) // Position - 0x4813 Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_64(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

BOOL func_167(Hash hParam0) // Position - 0x4837 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

void func_168(int iParam0) // Position - 0x4852 Hash - 0x3A3EA746 ^0x311B4E59
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
	return;
}

Hash func_169(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x486D Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

Hash func_170() // Position - 0x4893 Hash - 0x7AE16C89 ^0x6C5D08B9
{
	if (!func_167(Global_1935630.f_45))
		return joaat("WEAPON_UNARMED");

	return Global_1935630.f_45;
}

Hash func_171(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13) // Position - 0x48B7 Hash - 0xAB9CFACB ^0x8DB6D77C
{
	Hash weaponHash;
	Hash weapontypeGroup;
	Hash defaultPedWeaponCollection;
	Hash hashKey;
	Hash hash;
	var string1;
	BOOL flag;
	BOOL bIgnoreUnlocks;
	int pedAmmoByType;
	int num;
	float permanentDegradation;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	switch (hParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("group_revolver"):
		case joaat("group_repeater"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			weaponHash = WEAPON::_0xF8204EF17410BF43(hParam1, iParam7, iParam8, 0);
		
			if (!WEAPON::IS_WEAPON_VALID(weaponHash))
				weaponHash = joaat("WEAPON_UNARMED");
			break;
	
		default:
			if (!WEAPON::IS_WEAPON_VALID(hParam1))
				return hParam1;
		
			weaponHash = hParam1;
		
			if (WEAPON::IS_WEAPON_A_GUN(weaponHash) || WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0) == joaat("rel_gang_dutchs"))
			{
				TEXT_LABEL_ASSIGN_STRING(&string1, WEAPON::_GET_WEAPON_NAME(weaponHash), 128);
				defaultPedWeaponCollection = WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(ENTITY::GET_ENTITY_MODEL(pedParam0));
			
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&string1, "_DUALWIELD"))
				{
					TEXT_LABEL_ASSIGN_STRING(&string1, HUD::_0x806862E5D266CF38(&string1, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&string1) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD")), 128);
					hashKey = MISC::GET_HASH_KEY(&string1);
				
					if (func_167(hashKey) && WEAPON::_0xF252A85B8F3F8C58(defaultPedWeaponCollection, hashKey))
						flag = true;
				}
			
				if (!flag)
				{
					weapontypeGroup = WEAPON::GET_WEAPONTYPE_GROUP(weaponHash);
				
					if (weapontypeGroup != 0 && defaultPedWeaponCollection != 0)
					{
						hash = WEAPON::_0x9EEFD670F10656D7(defaultPedWeaponCollection, weapontypeGroup);
					
						if (!Global_43891)
							if (func_167(hash) && hash != weaponHash)
								weaponHash = hash;
						else
							hash == weaponHash;
					}
				}
			}
			break;
	}

	if (func_75() == -1 && !func_299(weaponHash))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(pedParam0, weaponHash, 0, false) && pedParam0 != Global_35)
		{
			bIgnoreUnlocks = true;
		}
		else if (hash == weaponHash && !Global_43891 && pedParam0 != Global_35 && PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0) == joaat("rel_gang_dutchs"))
		{
			bIgnoreUnlocks = true;
		}
		else
		{
			weaponHash = WEAPON::_0xF8204EF17410BF43(hParam1, iParam7, iParam8, 0);
		
			if (!WEAPON::IS_WEAPON_VALID(weaponHash))
				weaponHash = joaat("WEAPON_UNARMED");
		}
	}

	if (weaponHash == joaat("WEAPON_UNARMED") && hParam1 == joaat("WEAPON_UNARMED"))
	{
		return weaponHash;
	}
	else if (weaponHash == joaat("WEAPON_UNARMED"))
	{
		switch (hParam1)
		{
			case joaat("GROUP_SNIPER"):
			case joaat("group_repeater"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_299(joaat("weapon_repeater_carbine")))
					weaponHash = joaat("weapon_repeater_carbine");
				else
					weaponHash = joaat("weapon_revolver_cattleman");
				break;
		
			case joaat("group_revolver"):
			case joaat("GROUP_PISTOL"):
				weaponHash = joaat("weapon_revolver_cattleman");
				break;
		
			default:
				weaponHash = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (weaponHash == joaat("weapon_melee_lantern") && pedParam0 == Global_35)
	{
		weaponHash = joaat("weapon_melee_davy_lantern");
	}

	if (iParam9 < 0)
	{
		if (pedParam0 != Global_35 && func_167(weaponHash))
		{
			WEAPON::GET_MAX_AMMO(pedParam0, &iParam9, weaponHash);
		
			if (iParam9 < 0)
				iParam9 = 0;
		}
		else if (!WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash) && weaponHash != joaat("WEAPON_UNARMED") && !WEAPON::_IS_WEAPON_LANTERN(weaponHash))
		{
			pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(pedParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(pedParam0, weaponHash));
			num = WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 3;
			iParam9 = num - pedAmmoByType;
		
			if (iParam9 < 0)
				iParam9 = 0;
		}
		else
		{
			iParam9 = 0;
		}
	}

	if (bParam6 && bParam2)
		bParam5 = false;

	if (pedParam0 == Global_35)
	{
		func_300(weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 752097756, false);
	}
	else if (!bParam13)
	{
		permanentDegradation = 0f;
		func_301(pedParam0, &weaponHash, &permanentDegradation);
		weaponHash = WEAPON::GIVE_WEAPON_TO_PED(pedParam0, weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 1056964608, 1065353216, 752097756, bIgnoreUnlocks, permanentDegradation, false);
	}

	if (pedParam0 != Global_35)
		if (func_302(weaponHash))
			WEAPON::SET_PED_INFINITE_AMMO(pedParam0, bParam3, weaponHash);
	else if (bParam10)
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), weaponHash, bParam4);

	return weaponHash;
}

Hash func_172(int iParam0, int iParam1) // Position - 0x4C61 Hash - 0xAED4FBA4 ^0xAED4FBA4
{
	var unk;

	return func_303(&unk, iParam0, iParam1);
}

BOOL func_173(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x4C73 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_174() // Position - 0x4C9C Hash - 0xEBB05467 ^0xEBB05467
{
	return Global_1935436 == 1;
}

BOOL func_175() // Position - 0x4CAA Hash - 0x893CA78F ^0x893CA78F
{
	return Global_1935436 == 2;
}

void func_176(float fParam0) // Position - 0x4CB8 Hash - 0xD5DAF5A7 ^0xD5DAF5A7
{
	func_304(10, fParam0);
	return;
}

BOOL func_177() // Position - 0x4CC8 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_75() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

void func_178() // Position - 0x4CEE Hash - 0xC1C4C540 ^0xDD1630DD
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
	return;
}

char* func_179(Ped pedParam0) // Position - 0x4D04 Hash - 0x311AAE83 ^0x65BB011F
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return "";

	if (ENTITY::IS_ENTITY_A_PED(pedParam0))
		return func_305(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0));
	else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam0))
		return func_306(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(pedParam0));
	else if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		return func_307(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(pedParam0));

	return "";
}

int func_180(var uParam0, Ped pedParam1) // Position - 0x4D67 Hash - 0x8DFA86E1 ^0x75C8CDA8
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return -1;

	for (i = 0; i < 11; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && uParam0->f_13[i /*12*/] == pedParam1)
			return i;
	}

	return -1;
}

Ped func_181(var uParam0, char* sParam1) // Position - 0x4DB5 Hash - 0x17FD83A4 ^0xB6EF1519
{
	int i;

	for (i = 0; i < 11; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[i /*12*/].f_1), sParam1))
			return uParam0->f_13[i /*12*/];
	}

	return 0;
}

void func_182(var uParam0, Ped pedParam1) // Position - 0x4E00 Hash - 0x189F639F ^0x7A674B29
{
	var unk;
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	for (i = 0; i < 11; i = i + 1)
	{
		if (uParam0->f_13[i /*12*/] == pedParam1)
		{
			uParam0->f_13[i /*12*/] = { unk };
			return;
		}
	}

	return;
}

int func_183(var uParam0) // Position - 0x4E48 Hash - 0x94F494B3 ^0x5CC98034
{
	int i;

	for (i = 0; i < 11; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[i /*12*/]))
			return i;
	}

	return -1;
}

void func_184(var uParam0, int iParam1) // Position - 0x4E79 Hash - 0x53A96DDB ^0x5EF2061
{
	uParam0->f_11 = uParam0->f_11 || iParam1;
	return;
}

void func_185(var uParam0, int iParam1) // Position - 0x4E8C Hash - 0xA4EAD31F ^0x1843FE5B
{
	uParam0->f_11 = uParam0->f_11 - uParam0->f_11 && iParam1;
	return;
}

BOOL func_186(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4EA4 Hash - 0xE0196EFD ^0xE0196EFD
{
	if (!func_64(iParam0))
		return false;

	if (func_27(iParam0, 32, true))
		return false;

	if (!func_27(iParam0, 2, true))
		return false;

	if (!func_27(iParam0, 4, true))
		return false;

	if (func_35(iParam0, 33, true))
		return false;

	if (func_13(iParam0))
		return false;

	if (func_308(iParam0))
		if (!bParam2)
			return false;

	if (!bParam1)
		if (Global_1357549.f_1497 == iParam0)
			return false;

	return true;
}

BOOL func_187(int iParam0) // Position - 0x4F31 Hash - 0xFEA2A378 ^0xFEA2A378
{
	if (func_12(iParam0))
		if (func_33(Global_1360165[iParam0 /*1157*/], 0))
			return true;

	return false;
}

BOOL func_188(Ped pedParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x4F58 Hash - 0x3E30B0B5 ^0x3E30B0B5
{
	int num;

	if (iParam3 > 0f)
		num = iParam3;
	else
		num = func_309(pedParam0, Global_36, true);

	if (iParam2 > 0f)
		if (num < iParam2)
			return true;

	if (num < iParam1)
		if (PED::_IS_PED_VISIBILITY_TRACKED(pedParam0))
			if (iParam4 > 0f)
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(pedParam0, iParam4))
					return true;
			else if (PED::IS_TRACKED_PED_VISIBLE(pedParam0))
				return true;
		else if (!ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
				return true;

	return false;
}

void func_189(int iParam0, BOOL bParam1) // Position - 0x4FE1 Hash - 0xEE7E9DBB ^0x37FB2562
{
	Any any;

	if (PERSCHAR::_0xA8120EBEAF290C7A(func_34(iParam0, false)))
	{
		any = PERSCHAR::_0x69786495C92A3044(func_34(iParam0, false));
	
		if (any != Global_1360165[iParam0 /*1157*/].f_47 || bParam1)
		{
			Global_1360165[iParam0 /*1157*/].f_47 = any;
			TEXT_LABEL_ASSIGN_STRING(&(Global_1360165[iParam0 /*1157*/].f_48), PERSCHAR::_0x9C7F95946E304778(func_34(iParam0, false), Global_1360165[iParam0 /*1157*/].f_47), 64);
			Global_1360165[iParam0 /*1157*/].f_56 = 1;
		}
	}

	return;
}

int func_190(int iParam0) // Position - 0x5059 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_191(int iParam0) // Position - 0x5086 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_105(iParam0))
		return -1;

	return func_310(iParam0);
}

void func_192(int iParam0) // Position - 0x50A2 Hash - 0x5161A142 ^0x26FA799F
{
	Ped ped;
	int num;
	var unk;
	int i;
	Entity entity;

	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_113(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		num = func_311(i);
	
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, ped, num, 0))
		{
		}
		else
		{
			entity = unk.f_3;
		
			if (!ENTITY::DOES_ENTITY_EXIST(entity))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(entity) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entity))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(entity))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entity, true, true);
			
				ENTITY::_DELETE_CARRIABLE(&entity);
			}
		}
	}

	return;
}

BOOL func_193(Hash hParam0) // Position - 0x5148 Hash - 0x8E77EB62 ^0x8E77EB62
{
	if (!func_312(hParam0))
		return false;

	if (!func_313())
		return true;

	return false;
}

void func_194(int iParam0, Ped pedParam1) // Position - 0x516B Hash - 0xA2BBC532 ^0xA2BBC532
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/] = pedParam1;
	return;
}

void func_195(var uParam0) // Position - 0x5197 Hash - 0x6DB42F4F ^0x2D3D8169
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
	return;
}

void func_196(int iParam0, Hash hParam1, var uParam2) // Position - 0x51B0 Hash - 0x2FE00612 ^0x68508C65
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	!func_314(iParam0, hParam1);
	!func_315(iParam0, hParam1.f_1);
	return;
}

void func_197(var uParam0) // Position - 0x51EC Hash - 0x7858D7C0 ^0x7858D7C0
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		func_316(&uParam0->[i /*94*/]);
	}

	return;
}

void func_198(var uParam0) // Position - 0x5210 Hash - 0x3F59DF82 ^0x3F59DF82
{
	int i;

	for (i = 0; i < 57; i = i + 1)
	{
		uParam0->[i] = 0;
	}

	return;
}

void func_199(var uParam0) // Position - 0x5232 Hash - 0x92E3936E ^0xDB085754
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

void func_200(int iParam0) // Position - 0x5277 Hash - 0xF98F3B32 ^0x8A036B17
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

void func_201(int iParam0, var uParam1) // Position - 0x52AD Hash - 0xB69B78FC ^0xB22068A7
{
	int num;

	num = 100;
	*uParam1 = num;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
	return;
}

void func_202(int iParam0, var uParam1) // Position - 0x52CD Hash - 0xD41D26E5 ^0x1EE19431
{
	int num;

	num = 0;

	if (iParam0 == 2)
		num = 50;

	*uParam1 = num;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
	return;
}

void func_203(BOOL bParam0) // Position - 0x52F6 Hash - 0x7100DF7A ^0xCD4606BC
{
	*bParam0 = 0;
	bParam0->f_1 = -1f;
	return;
}

void func_204(var uParam0) // Position - 0x5307 Hash - 0x5F76BB50 ^0x40F56A0B
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
	return;
}

void func_205(var uParam0) // Position - 0x531F Hash - 0x92BF775F ^0x1739D63E
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	return;
}

int func_206(Hash hParam0) // Position - 0x5332 Hash - 0x50573299 ^0x50573299
{
	switch (hParam0)
	{
		case joaat("riobravo"):
			return 14;
	
		case joaat("GaptoothRidge"):
			return 13;
	
		case joaat("scarlettmeadows"):
			return 11;
	
		case joaat("GuarmaD"):
			return 8;
	
		case joaat("GrizzliesEast"):
			return 6;
	
		case joaat("ChollaSprings"):
			return 15;
	
		case joaat("heartlands"):
			return 9;
	
		case joaat("roanoke"):
			return 10;
	
		case joaat("greatplains"):
			return 4;
	
		case joaat("bigvalley"):
			return 1;
	
		case joaat("HennigansStead"):
			return 16;
	
		case joaat("BluewaterMarsh"):
			return 2;
	
		case joaat("GrizzliesWest"):
			return 7;
	
		case joaat("talltrees"):
			return 12;
	
		case joaat("Cumberland"):
			return 3;
	
		case joaat("bayounwa"):
			return 0;
	
		default:
		
	}

	return -1;
}

void func_207(int iParam0) // Position - 0x53EC Hash - 0x37EBB9FA ^0xA705E265
{
	iParam0 = func_107(iParam0);

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

void func_208(int iParam0, int iParam1) // Position - 0x543D Hash - 0x7B6D7BEE ^0xF15D524D
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_508), &Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam1 /*436*/], &Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383.f_508), 436);
	return;
}

void func_209(int iParam0, int iParam1) // Position - 0x549C Hash - 0x102876F9 ^0x8EA22A40
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_463), &Global_1900383[iParam1 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam1 /*45*/], &Global_1900383[iParam0 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam0 /*45*/], &(Global_1900383.f_463), 45);
	return;
}

int func_210(int iParam0, int iParam1) // Position - 0x54E4 Hash - 0x7A98D2DA ^0x5A60BE35
{
	var unk;
	var unk30;
	BOOL flag;
	Hash hash;

	unk.f_9 = joaat("SLOTID_NONE");
	unk30.f_9 = joaat("SLOTID_NONE");

	if (!func_317(iParam0, &unk))
		return 0;

	flag = false;

	if (!func_317(iParam1, &unk30))
		flag = true;

	if (flag)
	{
		hash = func_318(iParam1);
	
		if (hash == 0)
			return 0;
	
		if (!func_319(unk, unk.f_5, hash, false, false))
			return 0;
	}
	else if (!func_320(unk, unk30, 0, false))
	{
		return 0;
	}

	return 1;
}

void func_211(Ped pedParam0) // Position - 0x5577 Hash - 0xF32FB80D ^0xB662E625
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

	if (func_321(pedParam0))
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

	if (func_68(pedParam0))
	{
		num = func_69(pedParam0);
	
		if (func_322(num))
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

void func_212(int iParam0) // Position - 0x56E1 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1900383.f_393 = iParam0;
	return;
}

int func_213(var uParam0, var uParam1, var uParam2) // Position - 0x56F2 Hash - 0xEEC53156 ^0xA03BD067
{
	BOOL flag;

	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;

	if (func_108())
	{
		if (func_177())
		{
			flag = false;
		
			if (!func_109(Global_1835011[15 /*74*/].f_1, true) && !func_250(42))
				flag = true;
		
			if (flag)
			{
				*uParam0 = func_323();
				*uParam1 = func_324();
				*uParam2 = func_325();
				return 1;
			}
			else
			{
				*uParam0 = func_326();
				*uParam1 = func_327();
				*uParam2 = func_328();
				return 1;
			}
		}
		else if (func_329())
		{
			if (!func_109(Global_1835011[60 /*74*/].f_1, true))
			{
				*uParam0 = func_330();
				*uParam1 = func_331();
				*uParam2 = func_332();
				return 1;
			}
			else
			{
				*uParam0 = func_333();
				*uParam1 = func_334();
				*uParam2 = func_335();
				return 1;
			}
		}
	}
	else if (func_177())
	{
		*uParam0 = func_336();
		*uParam1 = func_337();
		*uParam2 = func_338();
		return 1;
	}
	else if (func_329())
	{
		*uParam0 = func_339();
		*uParam1 = func_340();
		*uParam2 = func_341();
		return 1;
	}

	return 0;
}

void func_214(int iParam0, var uParam1) // Position - 0x580C Hash - 0x42DB579F ^0x4C67AD4
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
	return;
}

void func_215(int iParam0, var uParam1) // Position - 0x583F Hash - 0x42DB579F ^0xF1492904
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
	return;
}

void func_216(int iParam0, var uParam1) // Position - 0x5872 Hash - 0x42DB579F ^0x8D4EBF0
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
	return;
}

void func_217(int iParam0, int iParam1) // Position - 0x58A5 Hash - 0x42DB579F ^0x244C0C3A
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
	return;
}

void func_218(int iParam0, int iParam1) // Position - 0x58D8 Hash - 0x29B1BAB8 ^0xB9A693D4
{
	Ped model;
	var unk;
	var unk2;
	int defaultMaxAttributeRank;
	float num;
	Ped ped;
	int num2;
	int attributeRank;

	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	model = func_121(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		func_213(&unk, &model, &unk2);

	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);

	if (iParam1 > defaultMaxAttributeRank)
		return;

	num = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = num;
	func_342(iParam1);
	ped = func_113(iParam0);

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

void func_219(int iParam0, int iParam1) // Position - 0x59D6 Hash - 0xFDFFDD51 ^0x74BA7635
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 || iParam1;
	return;
}

BOOL func_220(int iParam0, int iParam1) // Position - 0x5A0F Hash - 0x13701F47 ^0x86C54B27
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_24 && iParam1 != false;
}

BOOL func_221(int iParam0, var uParam1) // Position - 0x5A42 Hash - 0x9604B47A ^0xC430D780
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_317(iParam0, &unk))
		return false;

	*uParam1 = func_343(unk, joaat("SLOTID_HORSE_MANE"), false);

	if (!func_230(*uParam1, 0))
		return false;

	return true;
}

BOOL func_222(int iParam0, var uParam1) // Position - 0x5A8B Hash - 0x9604B47A ^0x406A0DCA
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_317(iParam0, &unk))
		return false;

	*uParam1 = func_343(unk, joaat("SLOTID_HORSE_TAIL"), false);

	if (!func_230(*uParam1, 0))
		return false;

	return true;
}

BOOL func_223(Hash hParam0, var uParam1) // Position - 0x5AD4 Hash - 0x9965E721 ^0x4526F41
{
	var unk;

	if (!func_344(856287005, hParam0))
		return false;

	unk = { func_345() };
	*uParam1 = func_343(unk, hParam0, false);

	if (!func_230(*uParam1, 0))
		return false;

	return true;
}

void func_224(Ped pedParam0) // Position - 0x5B16 Hash - 0x4C9A12AA ^0x56351FC0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_manes"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_tails"), 0, false);
	return;
}

void func_225(Ped pedParam0, var uParam1) // Position - 0x5B60 Hash - 0x6EA4BA5B ^0xEF2325EE
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_346(pedParam0, *uParam1);
	func_346(pedParam0, uParam1->f_1);
	return;
}

void func_226(Ped pedParam0) // Position - 0x5BA3 Hash - 0x4C9A12AA ^0x5B9D01EA
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_blankets"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("saddle_horns"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("saddle_stirrups"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_bedrolls"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_saddlebags"), 0, false);
	return;
}

void func_227(Ped pedParam0, var uParam1) // Position - 0x5C21 Hash - 0x8B68AA3D ^0x349991C3
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_346(pedParam0, *uParam1);
	func_346(pedParam0, uParam1->f_1);
	func_346(pedParam0, uParam1->f_2);
	func_346(pedParam0, uParam1->f_3);
	func_346(pedParam0, uParam1->f_4);
	func_346(pedParam0, uParam1->f_5);
	return;
}

int func_228(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x5C8C Hash - 0x1A2B1EEB ^0x4DBC1D46
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
		return 0;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (!PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(hParam1, entityModel))
		return 0;

	PED::_EQUIP_META_PED_OUTFIT(pedParam0, hParam1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, true, true, true, true, false);

	return 1;
}

Hash func_229(int iParam0) // Position - 0x5CE1 Hash - 0xB8EC44B7 ^0xA6B78B9E
{
	switch (iParam0)
	{
		case 0:
			return joaat("ammo_arrow");
	
		case 1:
			return joaat("ammo_arrow_dynamite");
	
		case 2:
			return joaat("ammo_arrow_fire");
	
		case 3:
			return joaat("ammo_arrow_poison");
	
		case 4:
			return joaat("ammo_arrow_small_game");
	
		case 5:
			return joaat("ammo_dynamite");
	
		case 6:
			return joaat("ammo_dynamite_volatile");
	
		case 7:
			return joaat("ammo_hatchet");
	
		case 8:
			return joaat("ammo_hatchet_hunter");
	
		case 9:
			return -355466967;
	
		case 10:
			return joaat("AMMO_MOLOTOV");
	
		case 11:
			return joaat("ammo_molotov_volatile");
	
		case 12:
			return joaat("AMMO_PISTOL");
	
		case 13:
			return joaat("ammo_pistol_express");
	
		case 14:
			return joaat("ammo_pistol_express_explosive");
	
		case 15:
			return joaat("ammo_pistol_high_velocity");
	
		case 16:
			return joaat("ammo_pistol_split_point");
	
		case 17:
			return joaat("ammo_repeater");
	
		case 18:
			return joaat("ammo_repeater_express");
	
		case 19:
			return joaat("ammo_repeater_express_explosive");
	
		case 20:
			return joaat("ammo_repeater_high_velocity");
	
		case 21:
			return joaat("ammo_repeater_split_point");
	
		case 22:
			return joaat("ammo_revolver");
	
		case 23:
			return joaat("ammo_revolver_express");
	
		case 24:
			return joaat("ammo_revolver_express_explosive");
	
		case 25:
			return joaat("ammo_revolver_high_velocity");
	
		case 26:
			return joaat("ammo_revolver_split_point");
	
		case 27:
			return joaat("AMMO_RIFLE");
	
		case 28:
			return joaat("ammo_rifle_express");
	
		case 29:
			return joaat("ammo_rifle_express_explosive");
	
		case 30:
			return joaat("ammo_rifle_high_velocity");
	
		case 31:
			return joaat("ammo_rifle_split_point");
	
		case 32:
			return joaat("AMMO_SHOTGUN");
	
		case 33:
			return joaat("ammo_shotgun_buckshot_incendiary");
	
		case 34:
			return joaat("ammo_shotgun_slug");
	
		case 35:
			return joaat("ammo_shotgun_slug_explosive");
	
		case 36:
			return joaat("ammo_throwing_knives");
	
		case 37:
			return joaat("ammo_throwing_knives_improved");
	
		case 38:
			return joaat("ammo_throwing_knives_poison");
	
		case 39:
			return joaat("ammo_tomahawk");
	
		case 40:
			return joaat("ammo_tomahawk_ancient");
	
		case 41:
			return joaat("ammo_tomahawk_homing");
	
		case 42:
			return joaat("ammo_tomahawk_improved");
	
		case 43:
			return joaat("ammo_arrow_improved");
	
		case 44:
			return joaat("ammo_22");
	
		default:
		
	}

	return 0;
}

BOOL func_230(Hash hParam0, int iParam1) // Position - 0x5F68 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_231(Ped pedParam0, Any* panParam1) // Position - 0x5F82 Hash - 0xEFD384E2 ^0xD2D4DFA3
{
	int i;
	int weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	for (i = 0; i < 29; i = i + 1)
	{
		if (panParam1->[i] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, panParam1->[i], 0, false))
				if (func_299(panParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, panParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != panParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, panParam1->[i], true, i, false, false);
		}
	}

	return;
}

int func_232() // Position - 0x602B Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

Hash func_233(int iParam0) // Position - 0x6039 Hash - 0xB8EC44B7 ^0xA3A17143
{
	switch (iParam0)
	{
		case 0:
			return -888790689;
	
		case 1:
			return -2126063412;
	
		case 2:
			return -368305354;
	
		case 3:
			return -1500843424;
	
		case 4:
			return 2034750397;
	
		case 5:
			return -1689805015;
	
		case 6:
			return 1855421528;
	
		case 7:
			return -1844483462;
	
		case 8:
			return -618101597;
	
		case 9:
			return -516195177;
	
		case 10:
			return 1193363351;
	
		default:
		
	}

	return 0;
}

int func_234(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x60E4 Hash - 0x3A135443 ^0x969430D9
{
	int i;

	if (hParam2 == 0)
		return -1;

	for (i = 0; i < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(hParam0, bParam1, bParam3); i = i + 1)
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(hParam0, i, bParam1, bParam3) == hParam2)
			return i;
	}

	return -1;
}

Hash func_235(int iParam0) // Position - 0x6128 Hash - 0xB9EF913B ^0x6D203F4E
{
	if (func_232() == 1160113249)
	{
		switch (iParam0)
		{
			case 0:
				return 1331190543;
		
			case 1:
				return 1336948195;
		
			case 2:
				return 216184750;
		
			default:
			
		}
	
		return 0;
	}

	switch (iParam0)
	{
		case 0:
			return joaat("CLOTHING_ITEM_BEARD_SINGLE");
	
		case 1:
			return joaat("CLOTHING_ITEM_CHOPS_NORMAL");
	
		case 2:
			return joaat("CLOTHING_ITEM_STACHE_NORMAL");
	
		default:
		
	}

	return 0;
}

void func_236(int iParam0) // Position - 0x61A5 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

void func_237(int iParam0, int iParam1, BOOL bParam2) // Position - 0x61B6 Hash - 0x1B9F85CC ^0x1B9F85CC
{
	int num;
	int num2;
	BOOL flag;

	if (!func_347(iParam0))
		return;

	if (!func_348(iParam1))
		return;

	if (Global_40.f_7731[iParam0 /*5*/] == iParam1)
		return;

	Global_40.f_7731[iParam0 /*5*/] = iParam1;

	if (!bParam2)
	{
		flag = Global_40.f_7731[iParam0 /*5*/] < 7 && func_349(iParam0);
		Global_40.f_7731[iParam0 /*5*/].f_3 = func_242();
		func_350(iParam0, &num, &num2, flag);
		func_351(&(Global_40.f_7731[iParam0 /*5*/].f_3), 0, 0, num2, num, 0, 0, false);
	}

	return;
}

void func_238() // Position - 0x624A Hash - 0xDDCF102 ^0x9A75D6F4
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;

	num = 5;
	num2 = 6;
	num3 = 7;
	num4 = 0;

	if (func_75() == -1)
	{
		for (i = 0; i < 5; i = i + 1)
		{
			func_352(&Global_1946054.f_1497.f_1[num /*3*/], num, i);
			func_352(&Global_1946054.f_1497.f_1[num2 /*3*/], num2, i);
			func_352(&Global_1946054.f_1497.f_1[num3 /*3*/], num3, i);
			func_352(&Global_1946054.f_1497.f_1[num4 /*3*/], num4, i);
		}
	
		return;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		func_353(&Global_1946054.f_1497.f_1[num /*3*/], num, i);
		func_353(&Global_1946054.f_1497.f_1[num2 /*3*/], num2, i);
		func_353(&Global_1946054.f_1497.f_1[num3 /*3*/], num3, i);
		func_353(&Global_1946054.f_1497.f_1[num4 /*3*/], num4, i);
	}

	return;
}

void func_239() // Position - 0x6335 Hash - 0xE6620326 ^0x2676A9F3
{
	int value;

	value = func_242();
	func_351(&value, 0, 0, 0, 2, 0, 0, false);

	if (func_354(0) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chinShort", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinLong"))
			DECORATOR::DECOR_REMOVE(Global_35, "chinLong");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chinShort");
	}

	if (func_354(1) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chopsShort", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsLong"))
			DECORATOR::DECOR_REMOVE(Global_35, "chopsLong");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chopsShort");
	}

	if (func_354(2) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "stacheShort", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheLong"))
			DECORATOR::DECOR_REMOVE(Global_35, "stacheLong");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "stacheShort");
	}

	return;
}

float func_240(int iParam0, int iParam1) // Position - 0x642B Hash - 0xB4BF1B35 ^0x79981B44
{
	if (iParam1 == 2)
		iParam1 = func_355();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/];
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/];
	
		default:
		
	}

	return -1f;
}

int func_241(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x6476 Hash - 0x15B7F875 ^0xA3557CD4
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_355();

	ped = PLAYER::PLAYER_PED_ID();

	if (bParam2)
		if (fParam1 >= 100f)
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		else
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	if (bParam3)
		func_356(iParam0, 7000, iParam5);

	if (fParam1 > 100f)
		fParam1 = 100f;
	else if (fParam1 < 0f)
		fParam1 = 0f;

	func_357(ped, iParam0, fParam1);
	func_358(iParam0, fParam1, bParam4, iParam5);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(ped, func_252(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

int func_242() // Position - 0x6528 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_243(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6534 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_359(*iParam0);
	i = func_360(*iParam0);
	j = func_361(*iParam0);
	k = func_362(*iParam0);
	l = func_363(*iParam0);
	m = func_364(*iParam0);

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

	for (m = m - iParam1; m < 0; m = m + 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (l = l - iParam2; l < 0; l = l + 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (k = k - iParam3; k < 0; k = k + 24)
	{
		iParam4 = iParam4 + 1;
	}

	for (j = j - iParam4; j <= 0; j = j + num3)
	{
		iParam5 = iParam5 + 1;
		num2 = i - 1;
	
		if (num2 < 0)
		{
			iParam6 = iParam6 + 1;
			i = i + 12;
		}
	
		num3 = func_365(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_366(iParam0, m, l, k, j, i, num);
	return;
}

int func_244(int iParam0, int iParam1) // Position - 0x66A7 Hash - 0xAAC15258 ^0xF098E005
{
	if (iParam1 == 2)
		iParam1 = func_355();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_2;
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2;
	
		default:
		
	}

	return -1;
}

int func_245(int iParam0, int iParam1) // Position - 0x66F6 Hash - 0xAAC15258 ^0x5B988360
{
	if (iParam1 == 2)
		iParam1 = func_355();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_1;
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1;
	
		default:
		
	}

	return -15;
}

BOOL func_246(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6747 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_367(iParam1) || !func_367(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_247(int iParam0, int iParam1, int iParam2) // Position - 0x6774 Hash - 0x8F2CCCF2 ^0x7EED1EE3
{
	if (iParam2 == 2)
		iParam2 = func_355();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_248(int iParam0, BOOL bParam1) // Position - 0x67C9 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_368(iParam0, &num, &num2);

	if (!func_369(iParam0, num, num2, bParam1))
		return;

	func_370(num, num2);
	return;
}

void func_249(int iParam0, int iParam1, int iParam2) // Position - 0x67F6 Hash - 0x8F2CCCF2 ^0xDB456F85
{
	if (iParam2 == 2)
		iParam2 = func_355();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_250(int iParam0) // Position - 0x684B Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_371(iParam0))
		return false;

	return func_372(iParam0);
}

int func_251(int iParam0) // Position - 0x6867 Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

int func_252(int iParam0) // Position - 0x688B Hash - 0x26AB94C2 ^0x26AB94C2
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		default:
		
	}

	return 0;
}

int func_253(int iParam0) // Position - 0x68BA Hash - 0x5163992 ^0x5163992
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 3;
	
		default:
		
	}

	return 0;
}

void func_254(int iParam0, float fParam1, BOOL bParam2) // Position - 0x68E9 Hash - 0x67180CD8 ^0x6965D1E9
{
	char* str;

	str = func_373(iParam0, 0, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
	return;
}

float func_255(int iParam0) // Position - 0x6939 Hash - 0x56878B22 ^0xF716EA88
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0) / 100f;
	return (num * 200f) - 100f;
}

int func_256(int iParam0) // Position - 0x695D Hash - 0x68BC9945 ^0x68BC9945
{
	switch (iParam0)
	{
		case 0:
			return 87;
	
		case 1:
			return 85;
	
		case 2:
			return 86;
	
		default:
		
	}

	return -1;
}

char* func_257(int iParam0) // Position - 0x698F Hash - 0x5A47CCCD ^0x5A47CCCD
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
	
		case 1:
			return "StaminaCoreValue";
	
		case 2:
			return "DeadEyeCoreValue";
	
		default:
		
	}

	return "";
}

BOOL func_258(Hash hParam0) // Position - 0x69C6 Hash - 0x5A094C43 ^0x5A094C43
{
	return hParam0 > -1 && hParam0 < 200;
}

BOOL func_259(Hash hParam0, BOOL bParam1) // Position - 0x69DC Hash - 0xAA3DFEB ^0xAA3DFEB
{
	int i;

	if (func_75() != -1)
		return false;

	for (i = 0; i <= Global_40.f_1094 - 1; i = i + 1)
	{
		if (Global_40.f_450[i] == hParam0)
			if (!bParam1 || Global_1347702[i /*49*/].f_13 & 16384 == 0)
				return true;
	}

	return false;
}

int func_260(Hash hParam0, BOOL bParam1) // Position - 0x6A39 Hash - 0xCA5491A8 ^0x3140F2AC
{
	if (bParam1)
		if (func_374(Global_1347702[hParam0 /*49*/].f_12, 2097152))
			if (func_109(Global_1835011[59 /*74*/].f_1, true))
				return 0;
		else if (func_374(Global_1347702[hParam0 /*49*/].f_12, 256))
			if (!func_109(Global_1835011[59 /*74*/].f_1, true))
				return 0;

	return func_375(hParam0);
}

BOOL func_261(int iParam0, int iParam1) // Position - 0x6AA5 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_262(int iParam0, int iParam1) // Position - 0x6AB4 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_263(Hash hParam0) // Position - 0x6AC5 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_75() != -1)
		return false;

	if (!func_258(hParam0))
		return false;

	return func_376(Global_1347702[hParam0 /*49*/].f_15);
}

int func_264(int iParam0) // Position - 0x6AF5 Hash - 0x8157C348 ^0x8157C348
{
	int i;
	int num;
	int num2;
	var unk;

	if (Global_1898329 == 15)
		return -1;

	if (!func_377(iParam0))
		return -1;

	if (func_75() != -1)
	{
		num2 = func_378(iParam0);
	
		if (num2 >= 0)
		{
			func_379(iParam0, true);
			return num2;
		}
		else
		{
			num = Global_1898329;
			Global_1898330[num] = iParam0;
			Global_1898346[num /*6*/] = { unk };
			func_380(num, true);
			func_379(iParam0, true);
			Global_1898329 = Global_1898329 + 1;
		
			if (Global_1898329 > 15)
				Global_1898329 = 15;
		
			return num;
		}
	}
	else
	{
		num2 = func_378(iParam0);
	
		if (num2 >= 0)
		{
			func_379(iParam0, true);
			return num2;
		}
		else
		{
			for (i = 0; i < Global_1898330; i = i + 1)
			{
				if (!func_105(Global_1898330[i]))
				{
					Global_1898330[i] = iParam0;
					Global_1898346[i /*6*/] = { unk };
					func_380(i, true);
					func_379(iParam0, true);
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

BOOL func_265(int iParam0) // Position - 0x6C11 Hash - 0x9001C594 ^0x9001C594
{
	return func_191(iParam0) == 2;
}

void func_266(int iParam0) // Position - 0x6C21 Hash - 0x646928F0 ^0x646928F0
{
	func_381(iParam0);
	return;
}

void func_267() // Position - 0x6C2F Hash - 0xEB0D43DD ^0xEB0D43DD
{
	Global_1911774 = true;
	return;
}

void func_268(BOOL bParam0) // Position - 0x6C3C Hash - 0x70EE66C ^0x88F73934
{
	Global_1935496.f_18 = !bParam0;
	return;
}

struct<5> func_269(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6C4D Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_382(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_383(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_390(hParam0, -1823706425))
			{
				unk = { func_280(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_390(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_280(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_388(bParam1) };
		
			switch (func_389(hParam0))
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
				unk = { func_280(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_384(bParam1) };
		
			if (bParam2 && func_385(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_386(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_386(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_387(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_391(unk, &unk28, bParam1, false))
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

int func_270(var uParam0) // Position - 0x6F0A Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_288(i, 1);
	}

	return -358215195;
}

int func_271(int iParam0, int iParam1) // Position - 0x6F45 Hash - 0x9D981F95 ^0x9D981F95
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
	
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
	
		case -1884748965:
			return 32;
	
		case -1586649372:
			return 33;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
	
		case -1505978566:
			return 22;
	
		case -1489346253:
			return 38;
	
		case -1364808185:
			return 19;
	
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
	
		case -1197751823:
			return 20;
	
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
	
		case -1130865351:
			return 31;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
	
		case -893163968:
			return 17;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
	
		case -450913544:
			return 18;
	
		case -426430150:
			return 29;
	
		case -358215195:
			return 39;
	
		case -338487716:
			return 11;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
	
		case 304805134:
			return 21;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
	
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
	
		case 788010710:
			return 34;
	
		case 1108822547:
			return 10;
	
		case 1145151482:
			return 23;
	
		case 1250092473:
			return 16;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
	
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
	
		case 1600962399:
			return 13;
	
		case 1672288269:
			return 15;
	
		case 1742327865:
			return 12;
	
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
	
		case 1788623170:
			return 30;
	
		case 1849504272:
			return 14;
	
		case 1900541263:
			return 37;
	
		case 1958421083:
			return 35;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_272(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7116 Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_392();

	if (iParam2 == 39)
	{
		unk = { func_269(hParam0, true, false) };
		iParam2 = func_271(func_270(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_393(hParam0, 866047851) && func_394(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_275(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_395(func_288(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_396(iParam2);
	func_397(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_398(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_398(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_399(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_400(hParam0, iParam2, hParam1, func_75() != -1);

	if (bParam4)
		func_401(&(Global_1946054.f_1378), true, 3);
	else
		func_401(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_290(func_288(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_273(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7323 Hash - 0x5AF76643 ^0x5AF76643
{
	func_402(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_274(int iParam0, int iParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x733C Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_283(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_403(num);
	return;
}

BOOL func_275(BOOL bParam0) // Position - 0x736E Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_276() // Position - 0x737F Hash - 0xB6203BF0 ^0x217DD714
{
	func_404(&(Global_1946054.f_2776));
	func_405(32768);
	func_290(1108822547, 8, 6);
	return;
}

int func_277(int iParam0) // Position - 0x73A6 Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_271(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_278(int iParam0) // Position - 0x740A Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_406(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_407(num);
	return;
}

void func_279(int iParam0, int iParam1, int iParam2) // Position - 0x744E Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_407(num);
	return;
}

struct<4> func_280(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x746E Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_230(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_282(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_281(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x749F Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_230(hParam0, 0))
		return 0;

	guid = { func_280(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_282(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

int func_282(BOOL bParam0) // Position - 0x74E7 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_75() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

void func_283(BOOL bParam0) // Position - 0x7528 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_284(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x753B Hash - 0x767FA5CE ^0x6D58A5B0
{
	int i;
	Hash shopItemComponentCategory;
	int num;

	num = func_288(iParam1, 1);

	if (!bParam2 && num == joaat("MP_COMPONENT_TYPE_BEARD"))
		bParam3 = false;

	if (hParam4 != 0)
		if (num == 1108822547)
			shopItemComponentCategory = func_408(hParam4);
		else if (hParam4 != Global_1946054.f_57[iParam1 /*11*/])
			shopItemComponentCategory = PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(hParam4, PED::_GET_META_PED_TYPE(pedParam0), bParam2);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_57[iParam1 /*11*/].f_1; i = i + 1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[i] != shopItemComponentCategory)
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[i], 0, bParam2);
		}
	}
	else
	{
		for (i = 0; i < Global_1946054.f_57[iParam1 /*11*/].f_1; i = i + 1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[i] != shopItemComponentCategory)
				PED::REMOVE_TAG_FROM_META_PED(pedParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[i], 0);
		}
	}

	return;
}

BOOL func_285(int iParam0, int iParam1) // Position - 0x7638 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_271(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

BOOL func_286(int iParam0, int iParam1) // Position - 0x7656 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_287(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x766F Hash - 0x1EA557EC ^0xC168425
{
	int num;

	num = 10;

	if (func_285(1108822547, 6))
	{
		if (bParam2)
		{
			func_284(pedParam0, num, func_75() != -1, false, 0);
			func_289(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(pedParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_290(1108822547, 1, 6);
	}

	Global_1946054.f_857 = Global_1946054.f_857 + 1;

	if (!bParam1)
		return;

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
	return;
}

int func_288(int iParam0, int iParam1) // Position - 0x7737 Hash - 0xE1D12727 ^0xA46110B3
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
	
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
	
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
	
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
	
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
	
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
	
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
	
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
	
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
	
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
	
		case 10:
			return 1108822547;
	
		case 11:
			return -338487716;
	
		case 12:
			return 1742327865;
	
		case 13:
			return 1600962399;
	
		case 14:
			return 1849504272;
	
		case 15:
			return 1672288269;
	
		case 16:
			return 1250092473;
	
		case 17:
			return -893163968;
	
		case 18:
			return -450913544;
	
		case 19:
			return -1364808185;
	
		case 20:
			return -1197751823;
	
		case 21:
			return 304805134;
	
		case 22:
			return -1505978566;
	
		case 23:
			return 1145151482;
	
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
	
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
	
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
	
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
	
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
	
		case 29:
			return -426430150;
	
		case 30:
			return 1788623170;
	
		case 31:
			return -1130865351;
	
		case 32:
			return -1884748965;
	
		case 33:
			return -1586649372;
	
		case 34:
			return 788010710;
	
		case 35:
			return 1958421083;
	
		case 36:
			return -1944638739;
	
		case 37:
			return 1900541263;
	
		case 38:
			return -1489346253;
	
		case 39:
			return -358215195;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_289(int iParam0, int iParam1, int iParam2) // Position - 0x7986 Hash - 0x10354A04 ^0xEB1297F4
{
	Global_1946054.f_57[func_271(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_271(iParam0, 1) /*11*/].f_10 || iParam1;
	return;
}

void func_290(int iParam0, int iParam1, int iParam2) // Position - 0x79B3 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_271(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_271(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_271(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

float func_291() // Position - 0x79F2 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_292(var uParam0, int iParam1) // Position - 0x7A24 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_293(var uParam0, int iParam1) // Position - 0x7A35 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_294(int iParam0) // Position - 0x7A4A Hash - 0xD14C6A7D ^0x9C4D4670
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

	ped = func_113(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	flag = false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		flag = true;

	if (!PED::IS_PED_READY_TO_RENDER(ped))
		return;

	if (func_220(iParam0, 64))
	{
		func_207(iParam0);
		return;
	}

	flag2 = false;

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		if (!(MAP::GET_BLIP_FROM_ENTITY(ped) == 0))
			flag2 = true;

	if (flag2)
		return;

	flag3 = func_250(42);

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
				func_409(&(Global_1900383[iParam0 /*45*/].f_27));
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
		func_207(iParam0);

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
	
		if (func_410(1) < 1)
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
		func_411(&(Global_1900383[iParam0 /*45*/].f_26), flag5);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		return;

	flag7 = false;

	if (func_220(iParam0, 32))
		flag7 = true;

	isPedInWrithe = TASK::IS_PED_IN_WRITHE(ped);
	flag8 = false;
	ped2 = func_412(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (!ENTITY::IS_ENTITY_DEAD(ped2))
			if (PED::GET_MOUNT(ped2) == ped)
				flag8 = true;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	num = func_413(entityCoords, Global_36);
	flag9 = false;

	if (num > func_414(iParam0))
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
		func_415(Global_1900383[iParam0 /*45*/].f_26);
		func_416(Global_1900383[iParam0 /*45*/].f_26);
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

	if (func_417(ped) && !isPedInWrithe)
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

	num2 = func_410(iParam0);
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

void func_295(Ped pedParam0) // Position - 0x81C2 Hash - 0xAF123B57 ^0xC76565D3
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

float func_296(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x8227 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

Hash func_297(int iParam0) // Position - 0x8245 Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_64(iParam0))
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

	if (!func_64(iParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_298(int iParam0) // Position - 0x8326 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_64(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		persCharHash = func_162(iParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[iParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[iParam0 /*60*/].f_7);
	
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}

	return Global_1360165[iParam0 /*1157*/].f_126;
}

BOOL func_299(Hash hParam0) // Position - 0x83C2 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

int func_300(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x83EA Hash - 0x61DE9CAE ^0x4ADCEE54
{
	var unk;
	Hash hash;
	var unk6;
	int i;
	var unk28;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0) && iParam1 > 0)
		iParam1 = 0;

	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
	{
		unk = { func_269(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_418(398 + i, 1);
		
			if (func_386(hParam0, &unk, hash, false))
			{
				if (func_387(hParam0, &unk6, hash))
				{
					unk28 = { func_280(hParam0, unk, hash, false) };
					func_419(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_420(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_421(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_422(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

void func_301(Ped pedParam0, var uParam1, var uParam2) // Position - 0x853C Hash - 0x236D39D4 ^0x39F583A
{
	BOOL flag;
	Hash entityModel;

	flag = true;
	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (*uParam1 == joaat("weapon_revolver_cattleman_mexican") || *uParam1 == joaat("weapon_revolver_cattleman_pig") || *uParam1 == joaat("weapon_revolver_doubleaction_exotic") || *uParam1 == joaat("weapon_revolver_schofield_calloway") || *uParam1 == joaat("weapon_revolver_schofield_golden") || *uParam1 == joaat("weapon_pistol_mauser_drunk") || *uParam1 == joaat("weapon_shotgun_doublebarrel_exotic") || *uParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*uParam2 = 0f;
		return;
	}

	switch (entityModel)
	{
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
	
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
	
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
	
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
	
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
	
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
	
		case joaat("g_m_m_uniinbred_01"):
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
	
		default:
			*uParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
		
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0) == joaat("rel_gang_dutchs"))
				flag = false;
			break;
	}

	if (flag)
		PED::SET_PED_CONFIG_FLAG(pedParam0, 361, true);

	return;
}

BOOL func_302(Hash hParam0) // Position - 0x8753 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_303(Any anParam0, int iParam1, int iParam2) // Position - 0x8765 Hash - 0xE564BF7A ^0xA2BD6132
{
	Hash weaponHash;
	int num;
	int num2;
	int i;
	var unk;
	BOOL flag;
	var unk15;
	var unk19;

	weaponHash = 0;
	unk.f_9 = joaat("SLOTID_NONE");
	flag = func_423(iParam1, 128);

	if (func_424("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		unk19.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_425(&unk, i, num, num2))
			{
			}
			else if (!func_167(unk.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(unk.f_4) && !WEAPON::IS_WEAPON_BOW(unk.f_4))
			{
			}
			else if (iParam2 != 0 && unk.f_4 == iParam2)
			{
			}
			else if (!func_423(iParam1, 512) && func_426(unk.f_4, &unk15, &unk19, joaat("SLOTID_WEAPON_0")) && !unk19.f_21)
			{
			}
			else if (!flag || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, unk.f_4))
			{
				if (WEAPON::_IS_WEAPON_TWO_HANDED(unk.f_4) || func_427(unk.f_4) && !WEAPON::IS_WEAPON_SHOTGUN(unk.f_4) || func_423(iParam1, 16) && !WEAPON::_IS_WEAPON_SNIPER(unk.f_4) || func_423(iParam1, 4) && !func_427(unk.f_4) || func_423(iParam1, 8) && !WEAPON::IS_WEAPON_REPEATER(unk.f_4) || !func_423(iParam1, 8388608) && !WEAPON::IS_WEAPON_RIFLE(unk.f_4) || !func_423(iParam1, 1048576))
				{
					if (weaponHash == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &unk) > WEAPON::_0xA2091482ED42EF85(Global_35, anParam0))
					{
						weaponHash = unk.f_4;
						*anParam0 = { unk };
					}
				}
			}
		}
	
		func_428(num);
	}

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
	}
	else if (!func_423(iParam1, 512) && !func_423(iParam1, 1024))
	{
		iParam1 = iParam1 | 512;
		return func_303(anParam0, iParam1, iParam2);
	}
	else if (func_423(iParam1, 256))
	{
		weaponHash = joaat("WEAPON_UNARMED");
	}

	return weaponHash;
}

void func_304(int iParam0, float fParam1) // Position - 0x8994 Hash - 0x45CA0D9B ^0xAC7425D4
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_430(1, flag, true, str);
		func_431(!flag, fParam1 < 0f, flag);
		num = func_251(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_432();
	}
	else if (iParam0 == 10)
	{
		num = func_251(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_251(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

char* func_305(Ped pedParam0) // Position - 0x8A6A Hash - 0xCCDEE5C3 ^0x2A28D13E
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return "";

	if (pedParam0 == Global_35)
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("player_three"))
			return "John";
		else
			return "Arthur";

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return func_433(entityModel);
}

char* func_306(Object obParam0) // Position - 0x8AB7 Hash - 0x8F7EE237 ^0x9CB58EF0
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return "";

	entityModel = ENTITY::GET_ENTITY_MODEL(obParam0);
	return func_434(entityModel);
}

char* func_307(Vehicle veParam0) // Position - 0x8ADD Hash - 0xB17F8FF8 ^0x63CCB8B1
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return "";

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);

	switch (entityModel)
	{
		case joaat("wagon05x"):
			return "WAGON05X";
	
		case joaat("skiff"):
			return "SKIFF";
	
		case joaat("rowboatswamp"):
			return "ROWBOATSWAMP";
	
		case joaat("wagoncircus02x"):
			return "WAGONCIRCUS02X";
	
		case joaat("wagon02x"):
			return "WAGON02X";
	
		case joaat("rowboatswamp02"):
			return "ROWBOATSWAMP02";
	
		case joaat("privatesteamer01x"):
			return "PRIVATESTEAMER01X";
	
		case joaat("privatedining01x"):
			return "PRIVATEDINING01X";
	
		case joaat("northpassenger01x"):
			return "NORTHPASSENGER01X";
	
		case joaat("utilliwag"):
			return "UTILLIWAG";
	
		case joaat("privatecoalcar01x"):
			return "PRIVATECOALCAR01X";
	
		case joaat("canoe"):
			return "CANOE";
	
		case joaat("handcart"):
			return "HANDCART";
	
		case joaat("chuckwagon000x"):
			return "CHUCKWAGON000X";
	
		case joaat("coach2"):
			return "COACH2";
	
		case joaat("wagon04x"):
			return "WAGON04X";
	}

	return "";
}

BOOL func_308(int iParam0) // Position - 0x8C08 Hash - 0x29FCCE6A ^0xA230F605
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
		return true;

	return false;
}

int func_309(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x8C25 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

int func_310(int iParam0) // Position - 0x8C4D Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_435(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_311(int iParam0) // Position - 0x8C8E Hash - 0x1B64DC55 ^0x1B64DC55
{
	switch (iParam0)
	{
		case 0:
			return 4;
	
		case 1:
			return 5;
	
		case 2:
			return 6;
	}

	return 0;
}

BOOL func_312(Hash hParam0) // Position - 0x8CC6 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_313() // Position - 0x8D08 Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

BOOL func_314(int iParam0, Hash hParam1) // Position - 0x8D19 Hash - 0x7F3C0687 ^0x18581D3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_317(iParam0, &unk))
		return false;

	unk30 = { func_280(hParam1, unk, joaat("SLOTID_HORSE_MANE"), false) };
	return func_436(unk30, 1);
}

BOOL func_315(int iParam0, Hash hParam1) // Position - 0x8D5D Hash - 0x7F3C0687 ^0x15BF14B9
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_317(iParam0, &unk))
		return false;

	unk30 = { func_280(hParam1, unk, joaat("SLOTID_HORSE_TAIL"), false) };
	return func_436(unk30, true);
}

void func_316(var uParam0) // Position - 0x8DA1 Hash - 0x6843C143 ^0xA531F0D1
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

BOOL func_317(int iParam0, Any* panParam1) // Position - 0x8E48 Hash - 0xDE4C4094 ^0x8E8A73E7
{
	Hash hash;
	var unk;
	var unk15;

	if (!func_437(iParam0))
		return false;

	hash = func_318(iParam0);

	if (hash == 0)
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15 = { func_382(false) };

	if (!func_438(unk15, hash, &unk, 0, false))
		return false;

	if (!func_439(&unk, panParam1))
		return false;

	return true;
}

Hash func_318(int iParam0) // Position - 0x8EAD Hash - 0xBD10D1A2 ^0xE9C9558B
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

BOOL func_319(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, BOOL bParam10) // Position - 0x8F19 Hash - 0x8FC90634 ^0x533F9AFB
{
	var unk;
	var outGuid;

	if (!func_420(bParam10))
		return func_440(uParam0, uParam4, hParam8, true, bParam9, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_391(uParam0, &unk, false, false))
		return false;

	if (func_441(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return true;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return false;

	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_282(false), &uParam0, &uParam4, hParam8, unk.f_11, &outGuid))
		return false;

	if (bParam9)
		!func_436(outGuid, true);

	return true;
}

BOOL func_320(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x8FDD Hash - 0x3163F569 ^0x1B89B919
{
	var unk;
	var unk15;
	int inventoryId;

	if (!func_420(bParam9))
		return func_442(uParam0, uParam4, iParam8, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	if (func_441(&uParam0, &uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_391(uParam0, &unk, bParam9, true) || !func_391(uParam4, &unk15, bParam9, true))
		return false;

	if (func_441(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return false;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return false;

	inventoryId = func_282(false);

	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(inventoryId, &uParam0, &uParam4))
		return false;

	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam0, unk15.f_10 || iParam8);
	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam4, unk.f_10 || iParam8);
	return true;
}

BOOL func_321(Ped pedParam0) // Position - 0x9102 Hash - 0xFE36340F ^0xD1086760
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_443(ENTITY::GET_ENTITY_MODEL(pedParam0)))
		return true;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseCompanion"))
		return true;

	return false;
}

BOOL func_322(int iParam0) // Position - 0x913B Hash - 0xB073C27E ^0xB073C27E
{
	int num;

	num = iParam0;

	if (num >= 0 && num < 5)
		return true;

	return false;
}

int func_323() // Position - 0x915C Hash - 0x9F572D68 ^0x8E3583E8
{
	return joaat("breed_tennesseewalker_mahoganybay");
}

int func_324() // Position - 0x9169 Hash - 0x9F572D68 ^0xBDF2A68A
{
	return joaat("a_c_horse_tennesseewalker_mahoganybay");
}

int func_325() // Position - 0x9176 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_326() // Position - 0x917F Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_327() // Position - 0x918C Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_328() // Position - 0x9199 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

BOOL func_329() // Position - 0x91A2 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_75() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

int func_330() // Position - 0x91C7 Hash - 0x9F572D68 ^0xC65FFCB9
{
	return joaat("breed_john_endlesssummer");
}

int func_331() // Position - 0x91D4 Hash - 0x9F572D68 ^0xEE9A2A30
{
	return joaat("a_c_horse_john_endlesssummer");
}

int func_332() // Position - 0x91E1 Hash - 0x1FFCF868 ^0x1FFCF868
{
	return 2;
}

int func_333() // Position - 0x91EA Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_334() // Position - 0x91F7 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_335() // Position - 0x9204 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_336() // Position - 0x920D Hash - 0x9F572D68 ^0x1E5C2934
{
	return joaat("breed_morgan_bay");
}

int func_337() // Position - 0x921A Hash - 0x9F572D68 ^0xD70F756D
{
	return joaat("a_c_horse_morgan_bay");
}

int func_338() // Position - 0x9227 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_339() // Position - 0x9230 Hash - 0x9F572D68 ^0xE2D55F1F
{
	return joaat("breed_kentuckysaddle_grey");
}

int func_340() // Position - 0x923D Hash - 0x9F572D68 ^0xD5B858DC
{
	return joaat("a_c_horse_kentuckysaddle_grey");
}

int func_341() // Position - 0x924A Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_342(int iParam0) // Position - 0x9253 Hash - 0xCC180397 ^0xCC180397
{
	if (func_444() < iParam0)
		func_445(iParam0);

	return;
}

int func_343(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5) // Position - 0x926A Hash - 0x730D74FA ^0xBEE364CC
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_446(uParam0, hParam4, &unk, bParam5))
		return unk.f_4;

	return 0;
}

BOOL func_344(Hash hParam0, int iParam1) // Position - 0x9298 Hash - 0xD9D79AE0 ^0x7D4DF544
{
	int i;
	int outSlotId;
	int num;
	Hash category;
	int num2;

	if (hParam0 != 0)
	{
		category = func_389(hParam0);
	
		if (category != 0)
		{
			num2 = func_447(hParam0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
				{
					num = outSlotId;
				
					if (num == iParam1)
						return true;
				}
			}
		}
	}

	return false;
}

struct<4> func_345() // Position - 0x92EC Hash - 0xF51D0C3D ^0xA1188D4B
{
	var unk;

	unk = { func_382(false) };
	return func_280(856287005, unk, -218846335, false);
}

void func_346(Ped pedParam0, Hash hParam1) // Position - 0x9310 Hash - 0x11B41686 ^0x947A8CD3
{
	Hash componentHash;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);

	if (hParam1 == 0)
		return;

	if (hParam1 == -377364164 || hParam1 == 357708345)
		return;

	componentHash = hParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(pedParam0, componentHash, false, false, false);
	return;
}

BOOL func_347(int iParam0) // Position - 0x9374 Hash - 0x5DCECD10 ^0x5DCECD10
{
	if (iParam0 == -1)
		return false;

	return true;
}

BOOL func_348(int iParam0) // Position - 0x9387 Hash - 0x34617548 ^0x34617548
{
	if (iParam0 <= -1 || iParam0 > 10)
		return false;

	return true;
}

BOOL func_349(int iParam0) // Position - 0x93A6 Hash - 0x77F2BCDC ^0x977DC5C0
{
	return Global_40.f_7731[iParam0 /*5*/].f_4 > 0;
}

void func_350(int iParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x93BC Hash - 0x6C4E6E52 ^0x6C4E6E52
{
	var unk;
	var unk2;

	switch (Global_40.f_7731[iParam0 /*5*/])
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
	
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
	
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
	
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	
		case 10:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}

	if (bParam3)
		func_449(uParam1, uParam2, &unk, &unk2, false, func_448(iParam0));

	return;
}

void func_351(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x94AF Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_359(*iParam0);
	i = func_360(*iParam0);
	num2 = func_361(*iParam0);
	j = func_362(*iParam0);
	k = func_363(*iParam0);
	l = func_364(*iParam0);

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

	for (m = func_365(i, num); num2 > m; m = func_365(i, num))
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

	func_366(iParam0, l, k, j, num2, i, num);
	return;
}

void func_352(Hash hParam0, int iParam1, int iParam2) // Position - 0x9637 Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_353(Hash hParam0, int iParam1, int iParam2) // Position - 0x9692 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

int func_354(int iParam0) // Position - 0x96FC Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_7731[iParam0 /*5*/];
}

int func_355() // Position - 0x970E Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (func_450())
		return 1;

	return 0;
}

void func_356(int iParam0, int iParam1, int iParam2) // Position - 0x9722 Hash - 0x22949E32 ^0xF7641F46
{
	if (iParam2 == 2)
		iParam2 = func_355();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_357(Ped pedParam0, int iParam1, float fParam2) // Position - 0x9773 Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_257(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_451(iParam1), fParam2, -1);

	return;
}

void func_358(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x979F Hash - 0x31C6C7F2 ^0x7DF2B018
{
	int gameTimer;

	if (iParam3 == 2)
		iParam3 = func_355();

	gameTimer = MISC::GET_GAME_TIMER();
	func_452(iParam0, fParam1, iParam3);

	if (bParam2)
		func_453(iParam0, gameTimer, iParam3);

	return;
}

int func_359(int iParam0) // Position - 0x97D2 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_360(int iParam0) // Position - 0x97F7 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_361(int iParam0) // Position - 0x980A Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_362(int iParam0) // Position - 0x981D Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_363(int iParam0) // Position - 0x9830 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_364(int iParam0) // Position - 0x9842 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_365(int iParam0, int iParam1) // Position - 0x9854 Hash - 0x893AC59E ^0x893AC59E
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
				else if (iParam1 % 400 == 0)
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

void func_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x98EE Hash - 0xA65AB937 ^0xA65AB937
{
	func_455(iParam0, iParam6);
	func_456(iParam0, iParam5);
	func_457(iParam0, iParam4);
	func_458(iParam0, iParam3);
	func_459(iParam0, iParam2);
	func_460(iParam0, iParam1);
	return;
}

BOOL func_367(int iParam0) // Position - 0x9926 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_364(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_363(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_362(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_359(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_360(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_361(iParam0);

	if (num6 < 1 || num6 > func_365(num5, num4))
		return false;

	return true;
}

void func_368(int iParam0, var uParam1, var uParam2) // Position - 0x9A02 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_369(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x9A1E Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_461(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_462(iParam0))
		return false;

	if (func_463(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_464(iParam0, 1) || func_465(32768))
		if (!func_464(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_466())
		return false;

	return true;
}

void func_370(int iParam0, int iParam1) // Position - 0x9AC0 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_371(int iParam0) // Position - 0x9AE4 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_372(int iParam0) // Position - 0x9AF7 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

char* func_373(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9B21 Hash - 0xC24B5846 ^0x8148EA22
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					else
						return bParam3 ? "PMPLAYER_CONDITION_TEMPERATURE_COLD" : "PMPLAYER_CONDITION_TEMPERATURE_HOT";
					break;
			
				case 2:
					return bParam2 ? "PMPLAYER_CONDITION_HONOR_GOOD" : "PMPLAYER_CONDITION_HONOR_BAD";
			}
			break;
	
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
			
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
			
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
			
				default:
					break;
			}
			break;
	}

	return "";
}

BOOL func_374(int iParam0, int iParam1) // Position - 0x9BC9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_375(Hash hParam0) // Position - 0x9BD8 Hash - 0x749A091D ^0x749A091D
{
	int i;

	if (func_467(hParam0))
		return 0;

	if (func_259(hParam0, false))
	{
		func_468(hParam0);
		return 1;
	}
	else
	{
		for (i = 0; i < Global_40.f_450; i = i + 1)
		{
			if (Global_40.f_450[i] == -1)
			{
				func_468(hParam0);
				Global_40.f_450[i] = hParam0;
				Global_40.f_1094 = Global_40.f_1094 + 1;
				Global_1430257 = i;
				return 1;
			}
		}
	}

	return 0;
}

BOOL func_376(int iParam0) // Position - 0x9C54 Hash - 0x8EF26C67 ^0x9855652A
{
	int num;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < &func_10))
			return 0;
	
		num = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
			return 0;
	
		num = func_310(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

BOOL func_377(int iParam0) // Position - 0x9CBF Hash - 0x93C8DA75 ^0x93C8DA75
{
	return func_191(iParam0) == 0;
}

int func_378(int iParam0) // Position - 0x9CCF Hash - 0x6B3238EF ^0x6B3238EF
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

void func_379(int iParam0, BOOL bParam1) // Position - 0x9D10 Hash - 0x3C4FA973 ^0x67C1D80B
{
	if (!func_105(iParam0))
		return;

	if (!func_377(iParam0))
		return;

	if (bParam1)
	{
		if (func_469(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_469(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_470(iParam0), func_471(iParam0), func_472(iParam0), func_469(iParam0), Global_36);
		}
	}

	func_473(iParam0, 1);
	bParam1 = bParam1;
	return;
}

void func_380(int iParam0, BOOL bParam1) // Position - 0x9D81 Hash - 0x23CB6788 ^0xB008F1A1
{
	if (Global_1898346[iParam0 /*6*/].f_2 == false || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_474(Global_1898330[iParam0]);
		func_475(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}

	return;
}

void func_381(int iParam0) // Position - 0x9DE2 Hash - 0x195570A8 ^0x195570A8
{
	if (!func_105(iParam0))
		return;

	if (!func_376(iParam0))
		return;

	func_473(iParam0, 2);
	return;
}

struct<4> func_382(BOOL bParam0) // Position - 0x9E0B Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_280(joaat("character"), func_476(), joaat("SLOTID_NONE"), bParam0);
}

int func_383(Hash hParam0) // Position - 0x9E27 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_230(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_384(BOOL bParam0) // Position - 0x9E52 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_282(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_280(923904168, func_382(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_280(923904168, func_382(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_280(923904168, func_382(bParam0), -740156546, false);
}

BOOL func_385(Hash hParam0, BOOL bParam1) // Position - 0x9EE7 Hash - 0x62864AB ^0xBC339691
{
	if (func_389(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_250(24);
		else
			return true;

	return false;
}

BOOL func_386(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x9F20 Hash - 0x4285A587 ^0x4285A587
{
	return func_281(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_387(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x9F38 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_426(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_388(BOOL bParam0) // Position - 0x9F59 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_282(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_280(271701509, func_382(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_280(271701509, func_382(bParam0), 12999093, false);
}

Hash func_389(Hash hParam0) // Position - 0x9FBD Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_230(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_390(Hash hParam0, Hash hParam1) // Position - 0x9FE8 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_389(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_391(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0xA047 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_282(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

void func_392() // Position - 0xA077 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

BOOL func_393(Hash hParam0, Hash hParam1) // Position - 0xA0BE Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

int func_394(var uParam0) // Position - 0xA0EF Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_393(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_393(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_393(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_393(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_393(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_393(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

void func_395(int iParam0) // Position - 0xA240 Hash - 0x65A082AE ^0x65A082AE
{
	func_290(iParam0, 8, 6);
	return;
}

void func_396(int iParam0) // Position - 0xA251 Hash - 0x20214C72 ^0x20214C72
{
	func_477(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_397(int iParam0, int iParam1) // Position - 0xA266 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_478(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_398(Hash hParam0, int iParam1, int iParam2) // Position - 0xA27D Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_399(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA290 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_389(uParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_286(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_397(num2, num3);
	}

	if (func_479(-1586649372) && func_286(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_397(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_480(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_480(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_397(num2, num3);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_397(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_397(num2, num3);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_481(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_393(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_397(num2, num3);
			}
			break;
	
		case -839140560:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 37;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_397(num2, num3);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_397(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_389(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_397(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_481(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_389(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_397(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_480(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_480(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_397(num2, num3);
			}
			break;
	
		case 698653232:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 12;
			
				if (uParam0->f_1[num2 /*3*/] == joaat("clothing_hl_player_necktie_004_3"))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_397(num2, num3);
				}
			}
		
			func_480(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_393(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_397(num2, num3);
			}
			break;
	
		case 1868067663:
			func_480(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_397(num2, num3);
			}
			break;
	}

	switch (func_389(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_389(uParam0->f_1[num2 /*3*/]) || func_393(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_397(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_389(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_397(num2, num3);
			}
			break;
	}

	return;
}

Hash func_400(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0xA8D4 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_482(0);

	if (hParam2 != 0 && func_234(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_483(hParam0, func_288(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_401(var uParam0, BOOL bParam1, int iParam2) // Position - 0xA91A Hash - 0xE06CF505 ^0xBC49746F
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	BOOL flag2;
	int num6;

	flag = func_75() != -1;
	flag2 = func_482(0);

	if (func_275(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_288(num, 1);
		
			if (func_285(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_285(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_484(uParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_485(uParam0);

	if (num3 > 0)
	{
		if (!func_275(524288))
		{
			func_283(524288);
			num2 = num2 - num6;
		}
	
		for (i = num3; i <= 38; i = i + 1)
		{
			num = Global_1946054.f_57.f_430[i];
		
			if (num <= -1 || num >= 39)
			{
			}
			else
			{
				num5 = func_288(num, 1);
			
				if (func_285(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_285(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_484(uParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_397(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_405(524288);

	return;
}

void func_402(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xAB37 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_486(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_75() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_487(2, Global_26796.f_776) || Global_1946054.f_1497 != func_488(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_488(Global_40.f_7729);
				Global_1946054.f_1378 = func_488(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_489(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_490(false, true);

	return;
}

void func_403(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xAC56 Hash - 0x21CB5355 ^0x21CB5355
{
	int i;
	int num;

	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
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
		case 26:
			if (Global_1946054.f_850 >= 25)
				return;
		
			if (func_491(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_492(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_283(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_491(iParam0))
				return;
		
			func_492(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_283(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_279(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_404(var uParam0) // Position - 0xAE62 Hash - 0x7C3D914C ^0xB1998A7B
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;

	if (uParam0->f_12)
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_13);

	uParam0->f_12 = 0;
	return;
}

void func_405(BOOL bParam0) // Position - 0xAEC0 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_406(int iParam0, int iParam1) // Position - 0xAED8 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_407(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xAEE7 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_491(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_491(20))
				return;
		}
	}

	func_492(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_283(8);
	return;
}

Hash func_408(Hash hParam0) // Position - 0xAFEB Hash - 0xBBE66644 ^0xEC72F4B4
{
	Hash hash;

	hash = func_389(hParam0);

	switch (hash)
	{
		case -2061583405:
			return joaat("HATS");
	
		case -525676072:
			return joaat("MASKS_LARGE");
	
		default:
		
	}

	return 0;
}

void func_409(Blip blParam0) // Position - 0xB020 Hash - 0x537CC7C9 ^0xC8D223EF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_494(func_493(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_177())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_329();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_JOHN");
	}

	return;
}

int func_410(int iParam0) // Position - 0xB06D Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

void func_411(Blip blParam0, BOOL bParam1) // Position - 0xB0A1 Hash - 0x52227F6A ^0x5D00E8B5
{
	char* str1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_494(func_493(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		str1 = "";
	
		if (bParam1)
			str1 = "HORSE_BLIP_TEMPORARY";
		else if (func_177())
			str1 = "HORSE_BLIP_ARTHUR";
		else if (func_329())
			str1 = "HORSE_BLIP_JOHN";
	
		if (MISC::COMPARE_STRINGS(str1, "", false, -1) != 0)
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, str1);
	}

	return;
}

Ped func_412(int iParam0) // Position - 0xB111 Hash - 0x79966B74 ^0xB76682C7
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_413(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xB13F Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_414(int iParam0) // Position - 0xB15D Hash - 0x9BB7FBA3 ^0xA973C68A
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

	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_121(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_410(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_410(iParam0) + 1;
	num2 = func_495(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_496(num, any, num7);
	return num8;
}

void func_415(Blip blParam0) // Position - 0xB217 Hash - 0x9892E8C ^0x28660E03
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

void func_416(Blip blParam0) // Position - 0xB2A3 Hash - 0x85615470 ^0x31794F85
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	return;
}

BOOL func_417(Ped pedParam0) // Position - 0xB2CF Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

Hash func_418(int iParam0, int iParam1) // Position - 0xB311 Hash - 0xEA82FE59 ^0xEA82FE59
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

BOOL func_419(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0xE143 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_497(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_391(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_420(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_282(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_420(BOOL bParam0) // Position - 0xE1D3 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_75() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_282(bParam0));
}

int func_421(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xE1F1 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return 1;

	if (!func_498(hParam0))
		return 0;

	if (!func_420(false))
		return 0;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return 1;
}

void func_422(Hash hParam0, int iParam1) // Position - 0xE22C Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_499(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

BOOL func_423(int iParam0, int iParam1) // Position - 0xE274 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_424(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0xE283 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_282(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_425(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0xE2AA Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_426(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0xE2E5 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_282(false);
	*panParam1 = { func_280(hParam0, func_384(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_427(Hash hParam0) // Position - 0xE32A Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_428(int iParam0) // Position - 0xE338 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

var func_429(BOOL bParam0, var uParam1, var uParam2) // Position - 0xE359 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_430(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0xE370 Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_431(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE3B4 Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_373(0, 1, bParam0, bParam1);
	str = MISC::VAR_STRING(2, str);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[1], bParam2);

	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}

	return;
}

void func_432() // Position - 0xE4AC Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_500();
	func_501();
	func_502();
	return;
}

char* func_433(Hash hParam0) // Position - 0xE4C3 Hash - 0xE6862179 ^0x25F62EA5
{
	switch (hParam0)
	{
		case joaat("a_m_m_valtownfolk_01"):
			return "A_M_M_VALTOWNFOLK_01";
	
		case joaat("cs_sistercalderon"):
			return "SISTERCALDERON";
	
		case joaat("cs_strsheriff_01"):
		case joaat("u_m_m_strsherriff_01"):
			return "StrSheriff_01";
	
		case joaat("cs_mud2bigguy"):
			return "Mud2BigGuy";
	
		case joaat("cs_chainprisoner_01"):
			return "CHAINPRISONER_01";
	
		case joaat("cs_rainsfall"):
			return "CS_RAINSFALL";
	
		case joaat("cs_penelopebraithwaite"):
			return "PenelopeBraithwaite";
	
		case joaat("u_m_m_bht_shackescape"):
			return "U_M_M_BHT_SHACKESCAPE";
	
		case joaat("cs_unidusterjail_01"):
			return "CS_UNIDUSTERJAIL_01";
	
		case joaat("g_m_m_unicriminals_02"):
			return "G_M_M_UniCriminals_02";
	
		case joaat("cs_fussar"):
			return "Fussar";
	
		case joaat("a_m_m_gamhighsociety_01"):
			return "A_M_M_GAMHIGHSOCIETY_01";
	
		case joaat("cs_valsheriff"):
			return "CS_VALSHERIFF";
	
		case joaat("u_m_o_valbartender_01"):
			return "U_M_O_ValBartender_01";
	
		case joaat("cs_bronte"):
			return "Bronte";
	
		case joaat("a_m_m_bivworker_01"):
			return "Worker1";
	
		case joaat("g_m_m_unicornwallgoons_01"):
			return "G_M_M_UNICORNWALLGOONS_01";
	
		case joaat("u_m_m_valsheriff_01"):
			return "U_M_M_VALSHERIFF_01";
	
		case joaat("a_m_m_valtownfolk_02"):
			return "A_M_M_VALTOWNFOLK_02";
	
		case joaat("cs_eagleflies"):
			return "EagleFlies";
	
		case joaat("cs_garethbraithwaite"):
			return "GarethBraithwaite";
	
		case joaat("cs_creoleguy"):
			return "CreoleGuy";
	
		case joaat("cs_leighgray"):
			return "LeighGray";
	
		case joaat("cs_karen"):
			return "Karen";
	
		case joaat("cs_marybeth"):
			return "MaryBeth";
	
		case joaat("a_m_m_grisurvivalist_01"):
			return "A_M_M_GriSurvivalist_01";
	
		case joaat("cs_davidgeddes"):
			return "DavidGeddes";
	
		case joaat("cs_guidomartelli"):
			return "GuidoMartelli";
	
		case joaat("cs_duncangeddes"):
			return "DUNCANGEDDES";
	
		case joaat("p_keys01x"):
			return "p_keys01x";
	
		case joaat("cs_strdeputy_01"):
			return "StrDeputy_01";
	
		case joaat("cs_mrdevon"):
			return "MRDEVON";
	
		case joaat("cs_abe"):
			return "Abe";
	
		case joaat("a_m_m_htlroughtravellers_01"):
			return "A_M_M_HTLROUGHTRAVELLERS_01";
	
		case joaat("cs_aberdeenpigfarmer"):
			return "ABERDEENPIGFARMER";
	
		case joaat("a_f_m_strtownfolk_01"):
			return "A_F_M_STRTOWNFOLK_01";
	
		case joaat("u_m_m_unibountyhunter_02"):
			return "U_M_M_UNIBOUNTYHUNTER_02";
	
		case joaat("cs_jules"):
			return "Jules";
	
		case joaat("u_m_m_valbartender_01"):
			return "U_M_M_VALBARTENDER_01";
	
		case joaat("u_m_m_nbxbrontegoon_01"):
			return "U_M_M_NBXBRONTEGOON_01";
	
		case joaat("u_m_m_bivforeman_01"):
			return "U_M_M_BiVForeman_01";
	
		case joaat("cs_tomdickens"):
			return "TomDickens";
	
		case joaat("cs_geraldbraithwaite"):
			return "GeraldBraithwaite";
	
		case joaat("cs_paytah"):
			return "PAYTAH";
	
		case joaat("a_c_bear_01"):
			return "A_C_BEAR_01";
	
		case joaat("cs_wrobel"):
			return "CS_Wrobel";
	
		case joaat("cs_nbxreceptionist_01"):
			return "NbxReceptionist_01";
	
		case joaat("a_f_m_nbxupperclass_01"):
			return "A_F_M_NBXUPPERCLASS_01";
	
		case joaat("a_c_horse_morgan_flaxenchestnut"):
			return "Horse_01";
	
		case joaat("a_c_dogcatahoulacur_01"):
			return "A_C_DOGCATAHOULACUR_01";
	
		case joaat("cs_uncle"):
			return "Uncle";
	
		case joaat("u_m_m_rhdsheriff_01"):
			return "RHDSHERIFF_01";
	
		case joaat("cs_rhodeputy_01"):
			return "RHODEPUTY_01";
	
		case joaat("cs_leon"):
			return "Leon";
	
		case joaat("a_c_doglion_01"):
			return "A_C_DOGLION_01";
	
		case joaat("u_m_o_vhtexoticshopkeeper_01"):
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
	
		case joaat("cs_colmodriscoll"):
			return "ColmODriscoll";
	
		case joaat("cs_sddoctor_01"):
			return "SDDoctor_01";
	
		case joaat("cs_creolecaptain"):
			return "CreoleCaptain";
	
		case joaat("cs_cigcardguy"):
			return "CS_CIGCARDGUY";
	
		case joaat("cs_tigerhandler"):
			return "Handler" /*Dock Handler*/;
	
		case joaat("u_m_m_valpokerplayer_01"):
			return "U_M_M_ValPokerPlayer_01";
	
		case joaat("cs_genstorymale"):
			return "GenStoryMale";
	
		case joaat("cs_jackmarston_teen"):
			return "JackMarston_Teen";
	
		case joaat("u_m_m_creolecaptain_01"):
			return "U_M_M_CREOLECAPTAIN_01";
	
		case joaat("cs_strdeputy_02"):
			return "StrDeputy_02";
	
		case joaat("cs_micahbell"):
			return "MicahBell";
	
		case joaat("u_m_m_racforeman_01"):
			return "U_M_M_RACFOREMAN_01";
	
		case joaat("cs_sean"):
			return "Sean";
	
		case joaat("cs_cleet"):
			return "Cleet";
	
		case joaat("cs_sdpriest"):
			return "U_M_M_NBXPRIEST_01";
	
		case joaat("cs_edithdown"):
			return "EdithDown";
	
		case joaat("cs_joe"):
			return "Joe";
	
		case joaat("a_m_m_emrfarmhand_01"):
			return "A_M_M_EMRFARMHAND_01";
	
		case joaat("s_m_m_fussarhenchman_01"):
			return "S_M_M_GULFUSSARS_01";
	
		case joaat("u_f_m_rkshomesteadtenant_01"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
	
		case joaat("p_c_horse_01"):
			return "P_C_HORSE_01";
	
		case joaat("cs_mollyoshea"):
			return "MollyOshea";
	
		case joaat("a_m_m_nbxdockworkers_01"):
			return "A_M_M_NBXDOCKWORKERS_01";
	
		case joaat("cs_sd_streetkid_01"):
			return "cs_sd_streetkid_01";
	
		case joaat("cs_abigailroberts"):
			return "AbigailRoberts";
	
		case joaat("cs_mrlinton"):
			return "CS_MrLinton";
	
		case joaat("cs_samaritan"):
			return "CS_Samaritan";
	
		case joaat("cs_chainprisoner_02"):
			return "CHAINPRISONER_02";
	
		case joaat("cs_baptiste"):
			return "Baptiste";
	
		case joaat("cs_angusgeddes"):
			return "ANGUSGEDDES";
	
		case joaat("a_f_m_valtownfolk_01"):
			return "A_F_M_VALTOWNFOLK_01";
	
		case joaat("cs_rockyseven_widow"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
	
		case joaat("cs_lenny"):
			return "Lenny";
	
		case joaat("cs_archiedown"):
			return "ArchieDown";
	
		case joaat("cs_leostrauss"):
			return "LeoStrauss";
	
		case joaat("cs_bartholomewbraithwaite"):
			return "BartholomewBraithwaite";
	
		case joaat("cs_beatenupcaptain"):
			return "CS_BEATENUPCAPTAIN";
	
		case joaat("A_C_Cow"):
			return "COW";
	
		case joaat("cs_edgarross"):
			return "EDGARROSS";
	
		case joaat("cs_jamie"):
			return "Jamie";
	
		case joaat("cs_wintonholmes"):
			return "U_M_M_GriSurvivalist_01";
	
		case joaat("u_m_m_valpokerplayer_02"):
			return "U_M_M_ValPokerPlayer_02";
	
		case joaat("cs_thomasdown"):
			return "ThomasDown";
	
		case joaat("cs_obediahhinton"):
			return "ObediahHinton";
	
		case joaat("a_m_m_nbxupperclass_01"):
			return "A_M_M_NBXUPPERCLASS_01";
	
		case joaat("cs_johnmarston"):
			return "JohnMarston";
	
		case joaat("mes_sadie5_males_01"):
			return "MES_SADIE5_MALES_01^1";
	
		case joaat("a_c_bull_01"):
			return "BULL";
	
		case joaat("u_m_m_nbxbartender_02"):
			return "U_M_M_NBXBARTENDER_02";
	
		case joaat("a_m_m_guatownfolk_01"):
			return "S_M_M_ISPWORKER_01";
	
		case joaat("Player_Zero"):
			return "Arthur";
	
		case joaat("a_m_y_nbxstreetkids_01"):
			return "A_M_Y_NBXSTREETKIDS_01";
	
		case joaat("u_m_m_strgenstoreowner_01"):
			return "U_M_M_StrGenStoreOwner_01";
	
		case joaat("u_m_m_strfreightstationowner_01"):
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
	
		case joaat("g_m_m_uniduster_01"):
			return "G_M_M_UNIDUSTER_01";
	
		case joaat("a_m_o_guatownfolk_01"):
			return "S_M_M_ISPWORKER_02";
	
		case joaat("cs_mrsadler"):
			return "MrsAdler";
	
		case joaat("cs_dalemaroney"):
			return "DaleMaroney";
	
		case joaat("s_m_m_strlumberjack_01"):
			return "S_M_M_STRLUMBERJACK_01";
	
		case joaat("cs_braithwaiteservant"):
			return "BraithwaiteServant";
	
		case joaat("cs_brotherdorkins"):
			return "BrotherDorkins";
	
		case joaat("cs_albertmason"):
			return "AlbertMason";
	
		case joaat("u_m_m_nbxbartender_01"):
			return "U_M_M_NBXBARTENDER_01";
	
		case joaat("a_m_m_valfarmer_01"):
			return "A_M_M_VALFARMER_01";
	
		case joaat("cs_balloonoperator"):
			return "CS_BALLOONOPERATOR";
	
		case joaat("cs_albertcakeesquire"):
			return "ALBERTCAKEESQUIRE";
	
		case joaat("u_m_m_bht_benedictallbright"):
			return "u_m_m_bht_benedictallbright";
	
		case joaat("g_m_m_unibraithwaites_01"):
			return "G_M_M_UniBraithwaites_01";
	
		case joaat("cs_evelynmiller"):
			return "EvelynMiller";
	
		case joaat("cs_poisonwellshaman"):
			return "PoisonWellShaman";
	
		case joaat("s_m_m_marshallsrural_01"):
			return "S_M_M_MARSHALLSRURAL_01";
	
		case joaat("a_m_m_wapwarriors_01"):
			return "A_M_M_WapWarriors_01";
	
		case joaat("cs_marshall_thurwell"):
			return "MARSHALL_THURWELL";
	
		case joaat("a_m_m_rhdtownfolk_01"):
			return "A_M_M_RHDTOWNFOLK_01";
	
		case joaat("cs_mrpearson"):
			return "MrPearson";
	
		case joaat("cs_lemiuxassistant"):
			return "LemiuxAssistant";
	
		case joaat("cs_josiahtrelawny"):
			return "JosiahTrelawny";
	
		case joaat("cs_genstoryfemale"):
			return "GenStoryFemale";
	
		case joaat("cs_tilly"):
			return "Tilly";
	
		case joaat("cs_marylinton"):
			return "MaryLinton";
	
		case joaat("g_m_m_unicriminals_01"):
			return "G_M_M_UniCriminals_01";
	
		case joaat("u_m_m_rhdtrainstationworker_01"):
			return "StationWorker";
	
		case joaat("s_m_m_bankclerk_01"):
			return "S_M_M_BANKCLERK_01";
	
		case joaat("cs_mrwayne"):
			return "MRWAYNE";
	
		case joaat("u_m_m_nbxbronteasc_01"):
			return "U_M_M_NBXBRONTEASC_01";
	
		case joaat("a_m_m_strtownfolk_01"):
			return "A_M_M_STRTOWNFOLK_01";
	
		case joaat("cs_hoseamatthews"):
			return "HoseaMatthews";
	
		case joaat("cs_theodorelevin"):
			return "TheodoreLevin";
	
		case joaat("cs_dinoboneslady"):
			return "CS_DINOBONESLADY";
	
		case joaat("cs_beaugray"):
			return "BeauGray";
	
		case joaat("cs_hercule"):
			return "Hercule";
	
		case joaat("cs_levisimon"):
			return "LEVISIMON";
	
		case joaat("cs_londonderryson"):
			return "LondonderrySon";
	
		case joaat("cs_famousgunslinger_02"):
			return "CS_FAMOUSGUNSLINGER_02";
	
		case joaat("cs_mrslondonderry"):
			return "MrsLondonderry";
	
		case joaat("cs_catherinebraithwaite"):
			return "CatherineBraithwaite";
	
		case joaat("cs_charlessmith"):
			return "CharlesSmith";
	
		case joaat("cs_tavishgray"):
			return "TavishGray";
	
		case joaat("cs_lillymillet"):
			return "LillyMillet";
	
		case joaat("cs_ansel_atherton"):
			return "ANSEL_ATHERTON";
	
		case joaat("a_m_m_nbxslums_01"):
			return "A_M_M_NbxSlums_01";
	
		case joaat("g_m_m_unibrontegoons_01"):
			return "G_M_M_UNIBRONTEGOONS_01";
	
		case joaat("cs_edmundlowry"):
			return "EdmundLowry";
	
		case joaat("cs_fishcollector"):
			return "cs_fishcollector";
	
		case joaat("a_c_dogrufus_01"):
			return "A_C_DOGRUFUS_01";
	
		case joaat("cs_revswanson"):
			return "RevSwanson";
	
		case joaat("u_m_m_bht_mineforeman"):
			return "U_M_M_BHT_MINEFOREMAN";
	
		case joaat("cs_susangrimshaw"):
			return "SusanGrimshaw";
	
		case joaat("u_m_m_bht_strawberryduel"):
			return "U_M_M_BHT_STRAWBERRYDUEL";
	
		case joaat("u_m_o_blwgeneralstoreowner_01"):
			return "U_M_O_BLWGENERALSTOREOWNER_01";
	
		case joaat("a_c_donkey_01"):
			return "A_C_DONKEY_01";
	
		case joaat("cs_valdeputy_01"):
			return "CS_VALDEPUTY_01";
	
		case joaat("cs_jimcalloway"):
			return "JimCalloway";
	
		case joaat("cs_javierescuella"):
			return "JavierEscuella";
	
		case joaat("cs_sd_streetkid_02"):
			return "cs_sd_streetkid_02";
	
		case joaat("cs_valauctionboss_01"):
			return "VALAUCTIONBOSS_01";
	
		case joaat("cs_jackmarston"):
			return "JackMarston";
	
		case joaat("cs_cooper"):
			return "A_M_M_EMRFARMHAND_01";
	
		case joaat("cs_kieran"):
			return "Kieran";
	
		case joaat("cs_dutch"):
			return "Dutch";
	
		case joaat("cs_ringmaster"):
			return "RingMaster";
	
		case joaat("cs_aberdeensister"):
			return "ABERDEENSISTER";
	
		case joaat("cs_nbxexecuted"):
			return "NBXExecuted";
	
		case joaat("u_m_m_unibountyhunter_01"):
			return "U_M_M_UNIBOUNTYHUNTER_01";
	
		case joaat("cs_billwilliamson"):
			return "BillWilliamson";
	
		case joaat("cs_johnweathers"):
			return "CS_JOHNWEATHERS";
	
		case joaat("cs_professorbell"):
			return "ProfessorBell";
	}

	return "";
}

char* func_434(Hash hParam0) // Position - 0xF04C Hash - 0xE6862179 ^0xF2D74096
{
	switch (hParam0)
	{
		case joaat("p_cs_fan01x"):
			return "p_cs_Fan01x";
	
		case joaat("p_stool01x"):
			return "p_stool01x";
	
		case joaat("p_cs_book03x"):
			return "p_cs_book03x";
	
		case joaat("p_cs_bedrollclsd01x"):
			return "p_cs_bedrollclsd01x";
	
		case joaat("p_bottleslim01x"):
			return "p_bottleslim01x";
	
		case joaat("p_cs_rope01x"):
			return "P_CS_ROPE01X";
	
		case joaat("p_barstool01x"):
			return "P_BARSTOOL01X";
	
		case joaat("p_bottlejd01x"):
			return "p_bottleJD01x";
	
		case joaat("p_clock06x"):
			return "p_clock06x";
	
		case joaat("p_door_val_genstore"):
			return "p_door_val_genstore";
	}

	return "";
}

int func_435(int iParam0) // Position - 0x100FD Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_436(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1017E Hash - 0x1DD1BE14 ^0x90608F32
{
	var unk;

	if (!func_420(false))
		return func_503(uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_391(uParam0, &unk, false, false))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_282(false), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_437(int iParam0) // Position - 0x101F1 Hash - 0xDEA08A5F ^0xDEA08A5F
{
	Hash hash;
	var unk;

	hash = func_318(iParam0);

	if (hash == 0)
		return false;

	unk = { func_382(false) };

	if (func_504(&unk, hash, false) > 0)
		return true;

	return false;
}

BOOL func_438(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x10226 Hash - 0xA6C1C993 ^0x7035E80B
{
	int inventoryId;

	inventoryId = func_282(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

BOOL func_439(Any* panParam0, Any* panParam1) // Position - 0x10260 Hash - 0x2AD3981E ^0x984186D0
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_282(false), panParam0, panParam1, 29, 1))
		return false;

	return true;
}

int func_440(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, int iParam10, BOOL bParam11) // Position - 0x1028F Hash - 0x657ADCCC ^0xBBA0C366
{
	var unk;
	int num;
	int itemSlotMaxCount;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_391(uParam0, &unk, true, false))
		return -1;

	if (func_441(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return -1;

	num = func_281(unk.f_4, uParam4, hParam8, false);
	itemSlotMaxCount = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(unk.f_4, hParam8);

	if (itemSlotMaxCount >= 0)
	{
		if (num >= itemSlotMaxCount)
		{
			return -1;
		}
		else if (num + unk.f_11 > itemSlotMaxCount)
		{
			if (bParam11)
				return -1;
		
			unk.f_11 = itemSlotMaxCount - num;
		}
	}

	unk15 = { func_505(&unk) };
	unk15.f_4 = { uParam4 };
	unk15.f_11 = hParam8;
	unk15.f_10 = iParam10;
	num2 = func_506(1168099063, &unk15, bParam9);

	if (num2 == -1)
		return -1;

	return num2;
}

BOOL func_441(var uParam0, var uParam1) // Position - 0x1038D Hash - 0x361C7388 ^0xEA068BC1
{
	if (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1 && uParam0->f_2 == uParam1->f_2 && uParam0->f_3 == uParam1->f_3)
		return true;

	return false;
}

int func_442(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x103CE Hash - 0x503960A6 ^0x8CEAEEDE
{
	var unk;
	var unk15;
	var unk29;
	var unk46;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	if (func_441(&uParam0, &uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_391(uParam0, &unk, true, false) || !func_391(uParam4, &unk15, true, false))
		return -1;

	if (func_441(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return -1;

	unk29 = { func_505(&unk) };
	unk29.f_4 = { unk15.f_5 };
	unk29.f_11 = unk15.f_9;
	unk29.f_10 = unk15.f_10 || iParam8;
	unk46 = { func_505(&unk15) };
	unk46.f_4 = { unk.f_5 };
	unk46.f_11 = unk.f_9;
	unk46.f_10 = unk.f_10 || iParam8;
	num = -1;

	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), 1168099063))
		{
			if (func_507(num, 1168099063, &unk29) && func_507(num, 1168099063, &unk46))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_508(num, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		num = func_506(1168099063, &unk29, false);
		num = func_506(1168099063, &unk46, false);
	}

	return num;
}

BOOL func_443(Hash hParam0) // Position - 0x10578 Hash - 0xE48228D0 ^0xE48228D0
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

int func_444() // Position - 0x105FC Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3135;
}

void func_445(int iParam0) // Position - 0x1060D Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3135 = iParam0;
	return;
}

BOOL func_446(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6) // Position - 0x10620 Hash - 0x80B0B89C ^0x78EC1C55
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_282(bParam6), &uParam0, hParam4, &outGuid))
		return false;

	if (!func_391(outGuid, panParam5, bParam6, false))
		return false;

	return true;
}

int func_447(Hash hParam0) // Position - 0x10664 Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_230(hParam0, 0))
		return 0;

	category = func_389(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

int func_448(int iParam0) // Position - 0x10693 Hash - 0xA5486CA1 ^0x73FE29F9
{
	switch (Global_40.f_7731[iParam0 /*5*/].f_2)
	{
		case 1:
			return 2;
	
		case 2:
			return 4;
	
		case 3:
			return 8;
	
		default:
		
	}

	return 1;
}

void func_449(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x106CD Hash - 0x6C064C76 ^0x6CA0C692
{
	int num;
	int num2;
	int num3;
	float num4;

	num4 = BUILTIN::TO_FLOAT(iParam5);
	num = func_509(BUILTIN::TO_FLOAT(*uParam0), num4);
	num2 = func_510(BUILTIN::TO_FLOAT(*uParam1), num4);
	num3 = func_511(BUILTIN::TO_FLOAT(*uParam2), num4);
	*uParam0 = *uParam0 / iParam5;
	*uParam1 = *uParam1 / iParam5;
	*uParam2 = *uParam2 / iParam5;
	*uParam3 = *uParam3 / iParam5;
	*uParam1 = *uParam1 + num;
	*uParam2 = *uParam2 + num2;
	*uParam3 = *uParam3 + num3;

	if (bParam4)
	{
		*uParam3 = *uParam3 * -1;
		*uParam2 = *uParam2 * -1;
		*uParam1 = *uParam1 * -1;
		*uParam0 = *uParam0 * -1;
	}

	return;
}

BOOL func_450() // Position - 0x1076E Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1954819.f_866;
}

char* func_451(int iParam0) // Position - 0x1077D Hash - 0xF87491E1 ^0xB8989047
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
	
		case 1:
			return "isLowStaminaCoreActive";
	
		case 2:
			return "isLowDeadEyeCoreActive";
	
		default:
		
	}

	return "";
}

void func_452(int iParam0, float fParam1, int iParam2) // Position - 0x107B7 Hash - 0x22949E32 ^0x7BF032F1
{
	if (iParam2 == 2)
		iParam2 = func_355();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_453(int iParam0, int iParam1, int iParam2) // Position - 0x10808 Hash - 0x8F2CCCF2 ^0x17FB84D
{
	if (iParam2 == 2)
		iParam2 = func_355();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

var func_454(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1085D Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_455(int iParam0, int iParam1) // Position - 0x10874 Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*iParam0 = *iParam0 - *iParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*iParam0 = *iParam0 | -2147483648;
	}
	else
	{
		*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*iParam0 = *iParam0 - *iParam0 & -2147483648;
	}

	return;
}

void func_456(int iParam0, int iParam1) // Position - 0x108FA Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*iParam0 = *iParam0 - *iParam0 & 62914560;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_457(int iParam0, int iParam1) // Position - 0x10936 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_360(*iParam0);
	num2 = func_359(*iParam0);

	if (iParam1 < 1 || iParam1 > func_365(num, num2))
		return;

	*iParam0 = *iParam0 - *iParam0 & 4063232;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_458(int iParam0, int iParam1) // Position - 0x10989 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*iParam0 = *iParam0 - *iParam0 & 126976;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_459(int iParam0, int iParam1) // Position - 0x109C4 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 4032;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_460(int iParam0, int iParam1) // Position - 0x109FD Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 63;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_461(int iParam0, int iParam1) // Position - 0x10A35 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_75() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_462(int iParam0) // Position - 0x10A68 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_75() != -1)
		if (func_464(iParam0, 4))
			return false;
	else if (func_464(iParam0, 2))
		return false;

	return true;
}

BOOL func_463(int iParam0) // Position - 0x10A98 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_464(iParam0, 65536) && !func_464(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_464(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_464(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_464(int iParam0, int iParam1) // Position - 0x10B44 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_465(int iParam0) // Position - 0x10B5D Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_466() // Position - 0x10B70 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_467(Hash hParam0) // Position - 0x10B7F Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_75() != -1)
		return false;

	if (!func_258(hParam0))
		return false;

	return func_109(Global_1347702[hParam0 /*49*/].f_15, true);
}

void func_468(Hash hParam0) // Position - 0x10BB0 Hash - 0xBF830D7B ^0xC31B9D5D
{
	int num;
	int i;

	if (Global_1347702[hParam0 /*49*/].f_13 & 2 == 0)
	{
		num = 0;
	
		for (i = 0; i <= 4; i = i + 1)
		{
			if (func_12(Global_1347702[hParam0 /*49*/].f_29[i]))
				func_513(&num, func_512(Global_1347702[hParam0 /*49*/].f_29[i]));
		}
	
		if (num == 0)
			func_262(&(Global_1347702[hParam0 /*49*/].f_13), 2);
		else if (Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
			if (func_515(num, Global_1347702[hParam0 /*49*/].f_15, 1, Global_1347702[hParam0 /*49*/].f_27, func_514()))
				func_262(&(Global_1347702[hParam0 /*49*/].f_13), 2);
		else
			func_262(&(Global_1347702[hParam0 /*49*/].f_13), 2);
	}

	return;
}

Hash func_469(int iParam0) // Position - 0x10C75 Hash - 0x2F57FA7D ^0x914B8AA9
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_5;

	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_470(int iParam0) // Position - 0x10CA0 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_105(iParam0))
		return 0;

	return func_516(func_474(iParam0));
}

Hash func_471(int iParam0) // Position - 0x10CC0 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_105(iParam0))
		return -1;

	return func_517(func_474(iParam0));
}

int func_472(int iParam0) // Position - 0x10CE0 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_105(iParam0))
		return -1;

	return func_518(func_474(iParam0));
}

void func_473(int iParam0, int iParam1) // Position - 0x10D00 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_105(iParam0))
		return;

	func_519(iParam0, iParam1);
	return;
}

BOOL func_474(int iParam0) // Position - 0x10D1D Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

void func_475(BOOL bParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x10D5B Hash - 0x4C217CF1 ^0x4C217CF1
{
	*iParam3 = func_516(bParam0);
	*hParam1 = func_517(bParam0);
	*iParam2 = func_518(bParam0);
	return;
}

struct<4> func_476() // Position - 0x10D7E Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

void func_477(int iParam0, int iParam1) // Position - 0x10D8A Hash - 0x19A9221A ^0x79EEA925
{
	int i;
	int num;
	var unk;
	var unk3;

	unk = 39;
	unk3 = 10;
	unk3.f_1 = 39;
	unk3.f_1.f_2 = 39;
	unk3.f_1.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;

	for (i = 0; i < 10; i = i + 1)
	{
		if (i < *iParam0)
		{
			if (func_520(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_520(&iParam0->f_2[i /*2*/], 1))
					func_521(&iParam0->f_2[i /*2*/], 2, 6);
			
				unk3[num /*2*/] = { iParam0->f_2[i /*2*/] };
				num = num + 1;
				iParam0->f_2[i /*2*/] = { unk };
			}
		}
	
		iParam0->f_2[i /*2*/] = { unk };
	}

	for (i = 0; i < num; i = i + 1)
	{
		iParam0->f_2[i /*2*/] = { unk3[i /*2*/] };
	}

	*iParam0 = num;
	return;
}

void func_478(int iParam0, int iParam1, int iParam2) // Position - 0x10EB6 Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_522(iParam0, 1))
		func_523(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_479(int iParam0) // Position - 0x10EFD Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_271(iParam0, 1) /*3*/] != Global_1946054.f_57[func_271(iParam0, 1) /*11*/];
}

void func_480(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x10F35 Hash - 0xE34B9CEC ^0xAFBB60FB
{
	int num;
	int num2;
	int num3;
	int num4;

	num = 0;

	if (bParam4)
		num = 3;

	num2 = 12;
	num3 = 20;
	num4 = 16;

	if (uParam0->f_1[num4 /*3*/].f_1 == 1216705912 || uParam0->f_1[num4 /*3*/].f_1 == 654181853)
	{
		if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
		{
			uParam0->f_1[num4 /*3*/].f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[num4 /*3*/].f_1 = -1539589426;
			uParam0->f_1[num2 /*3*/].f_1 = joaat("base");
		}
	
		if (bParam2)
			func_397(num2, num);
	
		if (bParam1)
			func_397(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_397(num3, num);
	}

	return;
}

BOOL func_481(Hash hParam0) // Position - 0x11021 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
{
	switch (hParam0)
	{
		case joaat("clothing_hl_player_boot_007_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_2"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_3"):
			return true;
	
		case joaat("clothing_hl_player_boot_009_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_4"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_482(int iParam0) // Position - 0x11064 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_232();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

BOOL func_483(Hash hParam0, int iParam1, var uParam2) // Position - 0x1108A Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

int func_484(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1109B Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_271(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_275(524288))
	{
		switch (iParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				num = num + 1;
				break;
		
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				num = num + 1;
				break;
		}
	}

	num = num + PED::_0x31B2E7F2E3C58B89(hParam0, joaat("base"), bParam2, bParam3);
	return num;
}

int func_485(var uParam0) // Position - 0x11106 Hash - 0x3AB81F84 ^0x2BD03E57
{
	int num;
	int num2;

	num = 25;
	num2 = 0;

	if (uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	num = 26;

	if (uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	return num2;
}

void func_486(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11151 Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_75() == -1)
		func_352(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_353(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_487(BOOL bParam0, int iParam1) // Position - 0x111C7 Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_75() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		if (iParam1 > -1 && iParam1 < 5)
			return Global_26796.f_26[iParam1 /*120*/] && bParam0 != false;
	
		return false;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	if (iParam1 > -1 && iParam1 < 5)
		return Global_36638.f_45.f_350.f_26[iParam1 /*120*/] && bParam0 != false;

	return false;
}

Hash func_488(int iParam0) // Position - 0x11244 Hash - 0xB8EC44B7 ^0xE877E9C4
{
	switch (iParam0)
	{
		case 0:
			return 166243423;
	
		case 1:
			return 1383300684;
	
		case 2:
			return 2051441678;
	
		case 3:
			return 162509669;
	
		case 4:
			return 635948769;
	
		case 5:
			return 274995506;
	
		case 6:
			return 1661121390;
	
		case 7:
			return 1164374808;
	
		case 8:
			return 1160643979;
	
		case 9:
			return 624063935;
	
		case 10:
			return -1476781101;
	
		case 11:
			return 294553332;
	
		case 12:
			return 1788874135;
	
		case 13:
			return 1784889667;
	
		case 14:
			return 439606975;
	
		case 15:
			return 1560492757;
	
		case 16:
			return -769081407;
	
		case 17:
			return 1902428294;
	
		case 18:
			return -2114499732;
	
		case 19:
			return 800827126;
	
		case 20:
			return 688004210;
	
		case 21:
			return 1351927599;
	
		case 22:
			return 2032023096;
	
		case 23:
			return -291256376;
	
		case 24:
			return -1826731591;
	
		case 25:
			return 2119049229;
	
		case 26:
			return 1352942778;
	
		case 27:
			return 1964379549;
	
		case 28:
			return 1201189539;
	
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
	
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
	
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
	
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
	
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
	
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
	
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
	
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
	
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
	
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
	
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
	
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
	
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
	
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
	
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
	
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
	
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
	
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
	
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
	
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
	
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
	
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
	
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
	
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
	
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
	
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
	
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
	
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
	
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
	
		case 58:
			return 1389254668;
	
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
	
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
	
		case 61:
			return -272211555;
	
		case 62:
			return -361635024;
	
		case 64:
			return -55563408;
	
		case 65:
			return -409616653;
	
		case 66:
			return -1243402388;
	
		case 67:
			return 65931886;
	
		case 68:
			return 1371678229;
	
		case 69:
			return 2102263084;
	
		case 70:
			return -1205612021;
	
		case 71:
			return -1914506115;
	
		case 72:
			return -926815459;
	
		case 73:
			return -389591806;
	
		case 74:
			return -1300731953;
	
		case 75:
			return 802495462;
	
		case 76:
			return 1460520700;
	
		case 77:
			return 842905332;
	
		case 78:
			return -1951220140;
	
		case 79:
			return 1511551084;
	
		case 80:
			return 523337834;
	
		case 81:
			return -1725704631;
	
		case 82:
			return -19271249;
	
		case 83:
			return 1257427489;
	
		case 84:
			return 214175524;
	
		case 85:
			return -659341240;
	
		case 86:
			return -1303643297;
	
		case 87:
			return 2038771525;
	
		case 88:
			return 411856831;
	
		case 89:
			return -535599244;
	
		case 90:
			return 1156438275;
	
		case 91:
			return -1611873049;
	
		case 92:
			return 594312243;
	
		case 93:
			return 890706995;
	
		case 94:
			return -978578725;
	
		default:
		
	}

	return 0;
}

void func_489(int iParam0, BOOL bParam1, int iParam2) // Position - 0x11779 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_524(&(Global_1946054.f_1378), iParam0);
	func_525(2, iParam0, 6);

	if (bParam1)
		func_490(false, true);

	return;
}

void func_490(BOOL bParam0, BOOL bParam1) // Position - 0x117A1 Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_236(0);

	if (bParam0)
	{
		func_283(8);
		func_283(512);
	}
	else
	{
		func_283(8);
		func_283(16);
	}

	return;
}

BOOL func_491(int iParam0) // Position - 0x117D4 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_492(int iParam0) // Position - 0x117E9 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

const char* func_493(int iParam0) // Position - 0x11809 Hash - 0x20630FE4 ^0xBDD0E7BB
{
	const char* str;

	if (iParam0 == 255)
		if (func_526(37, iParam0))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		else
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());

	if (iParam0 < 0 || iParam0 >= 32)
		return "";

	str = "";

	if (!Global_1224589.f_16[iParam0])
		return str;

	if (func_526(37, iParam0))
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));

	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

const char* func_494(const char* sParam0, int iParam1) // Position - 0x118B0 Hash - 0xB0CFF0C3 ^0x72FCDC01
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_527(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_495(int iParam0) // Position - 0x118E6 Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_107(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_496(float fParam0, Any anParam1, float fParam2) // Position - 0x1191C Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

BOOL func_497(Hash hParam0) // Position - 0x11931 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_498(Hash hParam0) // Position - 0x11947 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_499(int iParam0, int iParam1) // Position - 0x11955 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

float func_500() // Position - 0x1196B Hash - 0xB0642BCC ^0x4D6FEEA4
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_528())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_139(2);

	if (Global_1347477.f_119)
		return func_139(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_529();
	num3 = func_530();
	num4 = func_531();
	num5 = func_532();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_533());
	num8 = func_139(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_534(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_535(3, num9, num9 > 100f);
	return func_142(num8, -100f, 100f);
}

float func_501() // Position - 0x11A94 Hash - 0x951B1CCC ^0x7B312694
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_528())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_139(1);

	if (Global_1347477.f_119)
		return func_139(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_529();
	num3 = func_530();
	num4 = func_531();
	num5 = func_532();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_533());
	num8 = func_139(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_534(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_535(2, num9, num9 > 100f);
	return func_142(num8, -100f, 100f);
}

float func_502() // Position - 0x11BBD Hash - 0x4D146F4A ^0xFC60D2FE
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_528())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_139(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_536())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_537())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_139(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_529();
	num3 = func_530();
	num4 = func_531();
	num5 = func_532();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_533());
	num8 = func_139(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_534(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_535(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_139(0);

	return func_142(num8, -100f, 100f);
}

int func_503(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x11D64 Hash - 0x4C6CAF1 ^0xEE857D47
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

	if (!func_391(uParam0, &unk, true, false))
		return num;

	if (unk.f_10 == iParam4)
		return num;

	num2 = func_383(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_538(uParam0, true) };
		unk15.f_10 = iParam4;
		num = func_539(joaat("UPDATE"), &unk15, bParam5);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk44 = { func_540(uParam0, true) };
		unk44.f_10 = iParam4;
		num = func_541(joaat("UPDATE"), &unk44, bParam5);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk62 = { func_505(&unk) };
		unk62.f_10 = iParam4;
		num = func_506(joaat("UPDATE"), &unk62, bParam5);
	
		if (num == -1)
			return num;
	}

	return num;
}

int func_504(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0x11E5B Hash - 0x3D67507D ^0xEF2F6729
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_282(bParam2), panParam0, hParam1);
}

struct<17> func_505(var uParam0) // Position - 0x11E71 Hash - 0x4CD39800 ^0x7DC5804
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

int func_506(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x11EC5 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_507(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_508(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_508(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17))
	{
		func_508(num, 1);
		return num;
	}

	return -1;
}

BOOL func_507(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x11F4C Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

void func_508(int iParam0, int iParam1) // Position - 0x11F63 Hash - 0x18C74423 ^0xA1132A0
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

	func_542(iParam0, iParam1);
	return;
}

int func_509(float fParam0, float fParam1) // Position - 0x11FC5 Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 24f);
}

int func_510(float fParam0, float fParam1) // Position - 0x11FEA Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 60f);
}

int func_511(float fParam0, float fParam1) // Position - 0x1200F Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 60f);
}

int func_512(int iParam0) // Position - 0x12034 Hash - 0xBE2A032D ^0xE6F2CF3B
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_513(var uParam0, int iParam1) // Position - 0x12043 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

int func_514() // Position - 0x12054 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

BOOL func_515(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x12064 Hash - 0x2F357F29 ^0x2F357F29
{
	int i;

	if (func_75() != -1)
		return true;

	if (iParam2 == 0 && func_543(0, true, true))
		return false;

	if (Global_1879534)
		return false;

	if (func_544(iParam0, iParam1))
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_545(i, &iParam0))
		{
			Global_40.f_4942[i /*60*/].f_59 = iParam1;
		
			if (iParam3 == iParam4)
				func_159(i, 512, true);
			else
				func_41(i, 512, true);
		}
	}

	return true;
}

int func_516(BOOL bParam0) // Position - 0x120F4 Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_517(BOOL bParam0) // Position - 0x12101 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_518(BOOL bParam0) // Position - 0x12114 Hash - 0xFA7B3D3 ^0x826FC8D8
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 15) & 16383;
}

void func_519(int iParam0, int iParam1) // Position - 0x12128 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_546(iParam0);
	else
		func_547(iParam0, iParam1);

	func_548();
	return;
}

BOOL func_520(var uParam0, int iParam1) // Position - 0x12170 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_521(var uParam0, int iParam1, int iParam2) // Position - 0x12181 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_522(int iParam0, int iParam1) // Position - 0x12194 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_523(int iParam0, int iParam1) // Position - 0x121A5 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_524(var uParam0, int iParam1) // Position - 0x121B8 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_75() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_352(&uParam0->f_1[i /*3*/], i, iParam1);
		}
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_353(&uParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_525(BOOL bParam0, int iParam1, int iParam2) // Position - 0x12253 Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_75() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		if (iParam1 > -1 && iParam1 < 5)
			Global_26796.f_26[iParam1 /*120*/] = Global_26796.f_26[iParam1 /*120*/] || bParam0;
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	if (iParam1 > -1 && iParam1 < 5)
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] = Global_36638.f_45.f_350.f_26[iParam1 /*120*/] || bParam0;

	return;
}

BOOL func_526(int iParam0, int iParam1) // Position - 0x122DB Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_549(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_550())
		return func_549(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_549(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

const char* func_527(const char* sParam0, int iParam1) // Position - 0x1234F Hash - 0x9E99F03 ^0x2B04E039
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_528() // Position - 0x12369 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_529() // Position - 0x12385 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_551(13);
	num2 = func_552(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_530() // Position - 0x123C8 Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_531() // Position - 0x123E3 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_553())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_532() // Position - 0x12402 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_533() // Position - 0x12444 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_534(int iParam0, int iParam1, BOOL bParam2) // Position - 0x12452 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_373(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_535(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1249E Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_373(iParam0, 2, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[2], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);

	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}

	return;
}

BOOL func_536() // Position - 0x125E4 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_551(12) <= -99f;
}

BOOL func_537() // Position - 0x125F8 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_551(12) >= 99f;
}

struct<29> func_538(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1260C Hash - 0xD34D8048 ^0xAE0F4AAB
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_282(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_505(&unk30) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_539(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x126A5 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_554(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_508(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_508(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29))
	{
		func_508(num, 1);
		return num;
	}

	return -1;
}

struct<18> func_540(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1272C Hash - 0x3EBED8E9 ^0x3FFB16B
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_282(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_505(&unk19) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_541(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1279F Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_555(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_508(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_508(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18))
	{
		func_508(num, 1);
		return num;
	}

	return -1;
}

void func_542(int iParam0, int iParam1) // Position - 0x12826 Hash - 0x26256B16 ^0x79A35F4E
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

BOOL func_543(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x128A3 Hash - 0xB13E2226 ^0xA63BD3BC
{
	Hash hash;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_556())
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
		hash = func_471(Global_1898164.f_1[0 /*5*/]);
	
		if (func_258(hash) && func_374(Global_1347702[hash /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_105(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_544(int iParam0, int iParam1) // Position - 0x12AA7 Hash - 0x4134D2DF ^0x8D80BF31
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_545(i, &iParam0))
			if (Global_40.f_4942[i /*60*/].f_59 != 0 && Global_40.f_4942[i /*60*/].f_59 != iParam1)
				return true;
	}

	return false;
}

BOOL func_545(int iParam0, var uParam1) // Position - 0x12AF7 Hash - 0x997B939E ^0x997B939E
{
	int num;

	if (!func_12(iParam0))
		return false;

	num = func_512(iParam0);
	return *uParam1 && num != false;
}

int func_546(int iParam0) // Position - 0x12B1D Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_435(iParam0);

	if (num < 0)
		return 0;

	return func_557(num);
}

int func_547(int iParam0, int iParam1) // Position - 0x12B3D Hash - 0xF3EA5EAF ^0xA48F5774
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
			func_558(num2);
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

void func_548() // Position - 0x12CAD Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

BOOL func_549(var uParam0, int iParam1, int iParam2) // Position - 0x12CD0 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_550() // Position - 0x12D07 Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

float func_551(int iParam0) // Position - 0x12D15 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_552(float fParam0) // Position - 0x12D29 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

BOOL func_553() // Position - 0x12D44 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_554(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x12D55 Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_555(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x12D6C Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_556() // Position - 0x12D83 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_557(int iParam0) // Position - 0x12DD6 Hash - 0x78E19743 ^0x6ACC64F5
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

int func_558(int iParam0) // Position - 0x12E8A Hash - 0x6DD34799 ^0x352A62D8
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

