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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	ePedType eptLocal_17 = PED_TYPE_PLAYER_0;
	Hash hLocal_18 = 0;
	Hash hLocal_19 = 0;
	Hash hLocal_20 = 0;
	var uLocal_21 = 24;
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
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = -1;
	var uLocal_121 = 0;
	var uLocal_122 = -1;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = -1;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 1073741824;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 1;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 2;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 570;
	var uLocal_144 = 1065353216;
	var uLocal_145 = -1082130432;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 2;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 570;
	var uLocal_161 = 1065353216;
	var uLocal_162 = -1082130432;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 2;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	var uLocal_179 = 0;
	BOOL bLocal_180 = 0;
	BOOL bLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	AnimScene ansLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	var uLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	float fLocal_203 = 0f;
	float fLocal_204 = 0f;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = -1;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 1097859072;
	var uLocal_223 = 1000;
	var uLocal_224 = 1067450368;
	var uLocal_225 = 5000;
	var uLocal_226 = 42;
	var uLocal_227 = 1103626240;
	var uLocal_228 = 1077936128;
	var uLocal_229 = 1106247680;
	var uLocal_230 = 1103101952;
	var uLocal_231 = 1097859072;
	var uLocal_232 = 1103626240;
	int iLocal_233 = 0;
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
	Ped pedLocal_255 = 0;
	Blip blLocal_256 = 0;
	Entity eLocal_257 = 0;
	Entity eLocal_258 = 0;
	Object obLocal_259 = 0;
	Volume volLocal_260 = 0;
	Volume volLocal_261 = 0;
	Volume volLocal_262 = 0;
	ScrHandle shLocal_263 = 0;
	int iLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xA324B70C ^0x8BDBC377
{
	int num;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_14 = { -304.8f, 810.5f, 118.4f };
	eptLocal_17 = joaat("cs_grizzledjon");
	hLocal_18 = joaat("p_bottlejd01x");
	hLocal_19 = joaat("p_whiskeyglass01x");
	hLocal_20 = joaat("p_windsorchair03x");
	iLocal_176 = 1;
	iLocal_186 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1();

	while (true)
	{
		BUILTIN::WAIT(0);
		func_2();
		func_3();
		func_4();
		func_5();
	
		if (func_6(13, 0, &pedLocal_255, &uLocal_265, &uLocal_179, 0, 1097859072, false))
			func_7(&iLocal_182, 16);
	
		if (iLocal_175 > 2)
		{
			if (!func_8(iLocal_182, 16384))
			{
				num = 0;
				iLocal_186 = func_10(&pedLocal_255, &uLocal_119, 8f, &uLocal_140, &num, 0f, 2, 0, 0, func_9(3, 0, 0), 0, 0, 2, 1, -1082130432, false);
			}
		
			func_11();
		
			if (!PED::IS_PED_USING_ANY_SCENARIO(pedLocal_255) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(pedLocal_255, -1))
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "GrizzledJonBubble");
		
			if (!func_12(13, 33554432))
				if (func_13())
					func_14(13, 33554432, true);
		}
	
		if (iLocal_175 >= 3 && iLocal_175 <= 7 && !func_15(pedLocal_255, 0))
			if (AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_255))
				func_16(&pedLocal_255, &uLocal_195, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 5f, 5f);
	
		func_17(pedLocal_255, &iLocal_182, 134217728, 13, 0);
	
		switch (iLocal_175)
		{
			case 0:
				func_18();
				break;
		
			case 1:
				func_19();
				break;
		
			case 2:
				func_20();
				break;
		
			case 3:
				func_21();
				break;
		
			case 4:
				func_22();
				break;
		
			case 5:
				func_23();
				break;
		
			case 6:
				func_24();
				break;
		
			case 7:
				func_25();
				break;
		
			case 8:
				func_26();
				break;
		
			case 9:
				func_27();
				break;
		}
	}

	return;
}

void func_1() // Position - 0x1E1 Hash - 0xC9079FCE ^0x8870FFF
{
	int num;

	num = iLocal_183;

	if (iLocal_175 == 5 || func_8(iLocal_182, 2097152))
		num = num + 1;

	switch (iLocal_176)
	{
		case 0:
			if (num >= 8 && num <= 10)
				num = 11;
		
			iLocal_200 = num;
			break;
	
		case 1:
			if (num <= 1)
				num = 2;
			else if (num >= 10 && num <= 13)
				num = 14;
		
			iLocal_199 = num;
			break;
	}

	func_28(iLocal_264, BUILTIN::SHIFT_LEFT(iLocal_199, 24) || BUILTIN::SHIFT_LEFT(iLocal_200, 16));

	if (func_8(iLocal_182, 16))
	{
		switch (iLocal_176)
		{
			case 0:
				iLocal_202 = iLocal_202 + 1;
				break;
		
			case 1:
				iLocal_201 = iLocal_201 + 1;
				break;
		}
	}

	func_29(iLocal_264, BUILTIN::SHIFT_LEFT(iLocal_201, 24) || BUILTIN::SHIFT_LEFT(iLocal_202, 16));

	if (iLocal_199 >= func_30(1) && iLocal_200 >= func_30(0))
		func_31(13, 12);

	func_32(pedLocal_255);

	if (MAP::DOES_BLIP_EXIST(blLocal_256))
		MAP::REMOVE_BLIP(&blLocal_256);

	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "GrizzledJonBubble");

	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_255))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(pedLocal_255, 0);
		PED::_SET_REMOVE_PED_NETWORKED(pedLocal_255, -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_255);
	}

	if (ENTITY::DOES_ENTITY_EXIST(eLocal_258))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&eLocal_258);

	if (ENTITY::DOES_ENTITY_EXIST(eLocal_257))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&eLocal_257);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_259))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_259);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_260))
	{
		func_33(volLocal_260);
		VOLUME::DELETE_VOLUME(volLocal_260);
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_261))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_261);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volLocal_261);
		VOLUME::DELETE_VOLUME(volLocal_261);
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_262))
		VOLUME::DELETE_VOLUME(volLocal_262);

	if (HUD::TEXT_BLOCK_IS_LOADED("SPGJAU"))
		HUD::_TEXT_BLOCK_DELETE("SPGJAU");

	func_34(&uLocal_234);
	func_35(13);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2() // Position - 0x3BF Hash - 0x43CF356A ^0xA79111E4
{
	if (!func_36(pedLocal_255, 0) && iLocal_175 > 2)
		if (!func_8(iLocal_182, 268435456))
			if (!func_8(iLocal_182, 1048576))
				func_7(&iLocal_182, 1048576);

	if (!func_36(Global_35, 0))
	{
		func_1();
	}
	else if (iLocal_175 >= 3 && iLocal_175 < 8 && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, shLocal_263, true, 0))
	{
		func_1();
	}
	else if (func_8(iLocal_182, 1048576) || iLocal_175 >= 8)
	{
		if (!PED::_IS_PED_VISIBILITY_TRACKED(pedLocal_255))
			PED::REQUEST_PED_VISIBILITY_TRACKING(pedLocal_255);
	
		if (func_37(Global_35, pedLocal_255, true, true) >= 100f && !PED::IS_TRACKED_PED_VISIBLE(pedLocal_255))
		{
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_255))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(pedLocal_255, 0);
				PED::DELETE_PED(&pedLocal_255);
			}
		
			func_1();
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_38(76), true, 0))
	{
		func_1();
	}
	else if (func_39(13, 0, &uLocal_234, pedLocal_255))
	{
		func_1();
	}

	return;
}

void func_3() // Position - 0x4D0 Hash - 0xFE778756 ^0xD91DE351
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, pedLocal_255, 3f, 3f, 3f, false, false, 0) || iLocal_175 == 8 && MISC::GET_GAME_TIMER() >= iLocal_198)
		if (!PED::IS_PED_HEADTRACKING_ENTITY(pedLocal_255, Global_35))
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_255, Global_35, -1, 0, 51, 0);
	else if (PED::IS_PED_HEADTRACKING_ENTITY(pedLocal_255, Global_35))
		TASK::TASK_CLEAR_LOOK_AT(pedLocal_255);

	return;
}

void func_4() // Position - 0x531 Hash - 0x3FDE56F1 ^0xB71EB492
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, pedLocal_255, 4f, 4f, 4f, false, false, 0))
		if (!PED::IS_PED_HEADTRACKING_ENTITY(Global_35, pedLocal_255))
			TASK::TASK_LOOK_AT_ENTITY(Global_35, pedLocal_255, -1, 0, 51, 0);
	else if (PED::IS_PED_HEADTRACKING_ENTITY(Global_35, pedLocal_255))
		TASK::TASK_CLEAR_LOOK_AT(Global_35);

	return;
}

void func_5() // Position - 0x57C Hash - 0x19B10D8C ^0xA195449B
{
	func_40(eLocal_257, -600906705, 1006406502, 37709, true);
	func_40(eLocal_258, -1859705048, 85669569, 7966, true);
	return;
}

BOOL func_6(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x5AF Hash - 0x7BECED45 ^0x18ECA136
{
	if (*uParam4)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630.f_12)
		return false;

	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5 = Global_40.f_11623[iParam0 /*8*/].f_5 + 1;
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_41();
			*uParam4 = 1;
			return true;
		}
	}

	if (iParam5 == 0f)
		if (!func_42(Global_35, *uParam2, iParam6, true))
			return false;
	else if (iParam5 > iParam6)
		return false;

	if (!func_43(uParam3))
	{
		func_44(uParam3, 0f);
	}
	else if (func_45(uParam3) >= 2f)
	{
		if (!func_46(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_47(iParam0);
			*uParam4 = 1;
			func_48(uParam3);
			return true;
		}
		else
		{
			func_47(iParam0);
			*uParam4 = 1;
			func_48(uParam3);
			return true;
		}
	}

	return false;
}

void func_7(var uParam0, int iParam1) // Position - 0x6A6 Hash - 0xF55E891F ^0xF55E891F
{
	func_49(uParam0, iParam1);
	return;
}

BOOL func_8(int iParam0, int iParam1) // Position - 0x6B6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_9(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6C5 Hash - 0x56789741 ^0x56789741
{
	BOOL flag;

	switch (iParam0)
	{
		case 1:
			flag = 64;
			break;
	
		case 2:
			flag = 208;
			break;
	
		case 3:
			flag = 192;
			break;
	
		case 4:
			flag = 212;
			break;
	
		case 5:
			flag = 77;
			break;
	
		case 6:
			flag = 96;
			break;
	
		case 7:
			flag = 76;
			break;
	
		default:
			flag = true;
			break;
	}

	flag = flag | 16777216;

	if (bParam1 != 0)
		flag = flag || bParam1;

	if (bParam2 != 0)
		flag = flag - flag && bParam2;

	return flag;
}

int func_10(var uParam0, int* piParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, BOOL bParam9, Volume volParam10, int iParam11, int iParam12, int iParam13, int iParam14, BOOL bParam15) // Position - 0x75F Hash - 0x15BBEDC ^0x6EBAE1FD
{
	BOOL flag;
	int num;

	flag = bParam9;
	func_50(&flag);

	if (func_51(flag, 16) && !bParam15)
		bParam9 = bParam9 | 8388608;

	num = func_52(uParam0, piParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, bParam9, volParam10, iParam11, iParam12, iParam14);

	if (!func_51(flag, 134217728))
		func_53(piParam1, uParam3, uParam0);

	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*piParam1, 25))
		{
			if (MISC::IS_BIT_SET(*piParam1, 24))
			{
				if (!func_54(558))
					func_55(558, false);
			
				MISC::SET_BIT(piParam1, 24);
				MISC::SET_BIT(piParam1, 25);
			}
		}
	}

	return num;
}

void func_11() // Position - 0x80B Hash - 0x90FF12E2 ^0x465D62FF
{
	float num;
	Vector3 vector;

	if (!func_8(iLocal_182, 32) && !func_8(iLocal_182, -2147483648))
	{
		PED::SET_PED_RESET_FLAG(pedLocal_255, 49, true);
	
		if (!func_8(iLocal_182, 128))
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_255, 0))
				func_7(&iLocal_182, 128);
	
		if (func_8(iLocal_182, 128) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_255, 0))
			func_7(&iLocal_182, 32);
	}
	else if (!func_8(iLocal_182, 512))
	{
		if (func_8(iLocal_182, 256))
		{
			func_7(&iLocal_182, 1024);
			func_7(&iLocal_182, 2048);
			func_56(true, true, true);
			func_57(8);
		}
	}
	else if (!func_8(iLocal_182, 4194304))
	{
		if (func_8(iLocal_182, 8388608))
			if (MISC::GET_GAME_TIMER() >= iLocal_191 + 1800)
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(pedLocal_255) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_255))
					if (func_58(pedLocal_255, "CHALLENGE_THREATEN", joaat("SPEECH_PARAMS_SHOUTED"), 0, true, 0, 0, 1))
						func_7(&iLocal_182, 4194304);
	}

	if (!func_8(iLocal_182, 256))
	{
		if (iLocal_175 < 8 && iLocal_175 > 2)
		{
			if (func_59(pedLocal_255, 0, &uLocal_205, &iLocal_233, 0, 0))
			{
				num = func_37(Global_35, pedLocal_255, true, true);
			
				switch (iLocal_233)
				{
					case 2:
					case 8:
					case 16:
					case 512:
					case 2048:
						if (num < 14f)
						{
							func_47(13);
							func_7(&iLocal_182, 256);
						}
						break;
				
					case 32:
						if (num < 14f && func_60(Global_35, true, 0, false) == joaat("WEAPON_UNARMED"))
						{
							func_47(13);
							func_7(&iLocal_182, 256);
							func_7(&iLocal_182, -2147483648);
						}
						break;
				}
			}
			else if (func_61())
			{
				func_56(true, true, true);
				func_57(8);
				func_7(&iLocal_182, 1024);
				func_7(&iLocal_182, 2048);
				func_7(&iLocal_182, 256);
				func_7(&iLocal_182, 8388608);
			}
			else if (iLocal_175 == 6 && func_8(iLocal_182, 65536) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(pedLocal_255, ansLocal_189))
			{
				func_7(&iLocal_182, 256);
			}
		}
	}

	vector = { 2f, 2f, 2f };

	if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, pedLocal_255, vector, false, true, 0) && !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		if (!func_8(iLocal_182, 4096))
		{
			fLocal_203 = fLocal_203 + (1f * BUILTIN::TIMESTEP());
		
			if (fLocal_203 >= 17f)
				func_7(&iLocal_182, 4096);
		}
	}
	else
	{
		func_62(&iLocal_182, 4096);
		fLocal_203 = 0f;
	}

	if (func_8(iLocal_182, 128))
	{
		if (!func_8(iLocal_182, 16384))
		{
			if (PED::IS_PED_IN_COMBAT(pedLocal_255, 0))
			{
				if (iLocal_175 < 6)
					func_63();
			
				if (!MAP::DOES_BLIP_EXIST(blLocal_256))
					blLocal_256 = func_64(pedLocal_255, joaat("BLIP_STYLE_ENEMY"), 1, true);
			
				func_65(&uLocal_119, &uLocal_140);
				func_66(&pedLocal_255);
				func_67(13, &pedLocal_255, &iLocal_182, 1);
				func_14(13, 4194304, true);
				func_7(&iLocal_182, 16384);
			}
		}
	}

	return;
}

BOOL func_12(int iParam0, int iParam1) // Position - 0xB15 Hash - 0x331B7828 ^0x84AB2DAA
{
	return func_51(Global_40.f_11623[iParam0 /*8*/].f_1, iParam1);
}

BOOL func_13() // Position - 0xB2F Hash - 0x87D38611 ^0xCE595683
{
	int num;

	if (func_68(Global_35, joaat("HATS"), false))
		if (func_69(-2061583405, &num))
			if (num == joaat("clothing_hat_grizzled_jon"))
				return true;

	return false;
}

void func_14(int iParam0, int iParam1, BOOL bParam2) // Position - 0xB64 Hash - 0x97FB121D ^0x1129C9CA
{
	if (bParam2)
		func_70(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);
	else
		func_71(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);

	return;
}

BOOL func_15(Ped pedParam0, Ped pedParam1) // Position - 0xB98 Hash - 0xB1778072 ^0xDB718768
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_IN_COMBAT(pedParam0, pedParam1))
			return true;

	return false;
}

void func_16(var uParam0, var uParam1, eEventType eetParam2, float fParam3, float fParam4) // Position - 0xBBA Hash - 0x562ED89F ^0x9FE29697
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return;

	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(eetParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
		return;

	*uParam1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(eetParam2, *uParam0, fParam4, fParam3, fParam3, -1f, -1f, 180f, false, false, -1, -1);
	return;
}

void func_17(Ped pedParam0, var uParam1, int iParam2, int iParam3, int iParam4) // Position - 0xC04 Hash - 0xADE9EDC3 ^0x77996A42
{
	char* audioName;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || Global_1935630.f_12)
		return;

	audioName = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);

	if (iParam4 == 0f)
	{
		if (func_42(pedParam0, Global_35, 15f, true))
		{
			if (!func_73(*uParam1, iParam2))
				if (AUDIO::_START_AUDIO_SCENESET(audioName, "special_ped_scenes"))
					func_49(uParam1, iParam2);
		}
		else if (func_73(*uParam1, iParam2))
		{
			AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
			func_74(uParam1, iParam2);
		}
	}
	else if (iParam4 <= 15f)
	{
		if (!func_73(*uParam1, iParam2))
			if (AUDIO::_START_AUDIO_SCENESET(audioName, "special_ped_scenes"))
				func_49(uParam1, iParam2);
	}
	else if (func_73(*uParam1, iParam2))
	{
		AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
		func_74(uParam1, iParam2);
	}

	return;
}

void func_18() // Position - 0xCD1 Hash - 0x3872A2C7 ^0x1CBAC7B2
{
	int value;
	int value2;
	BOOL flag;
	int num;
	int num2;
	int i;

	iLocal_264 = func_76(13, 0, 9, func_75(13));
	value = func_77(iLocal_264);
	iLocal_201 = BUILTIN::SHIFT_RIGHT(value, 24) & 255;
	iLocal_202 = BUILTIN::SHIFT_RIGHT(value, 16) & 255;
	value2 = func_78(iLocal_264);
	iLocal_199 = BUILTIN::SHIFT_RIGHT(value2, 24) & 255;
	iLocal_200 = BUILTIN::SHIFT_RIGHT(value2, 16) & 255;

	if (iLocal_201 <= iLocal_202)
		iLocal_176 = 1;
	else
		iLocal_176 = 0;

	flag = false;
	num = iLocal_176;
	num2 = iLocal_176;

	for (i = num; i <= 1; i = i + 1)
	{
		if (!flag)
		{
			if (iLocal_183 <= func_30(i))
			{
				flag = true;
				num2 = i;
			}
		}
	}

	if (!flag)
	{
		for (i = 0; i <= num; i = i + 1)
		{
			if (iLocal_183 <= func_30(i))
			{
				flag = true;
				num2 = i;
			}
		}
	}

	if (!flag)
	{
		func_1();
	}
	else
	{
		iLocal_176 = num2;
	
		switch (iLocal_176)
		{
			case 0:
				iLocal_183 = iLocal_200;
				break;
		
			case 1:
				iLocal_183 = iLocal_199;
				break;
		}
	}

	HUD::TEXT_BLOCK_REQUEST("SPGJAU");
	HUD::TEXT_BLOCK_REQUEST("SPGJ");
	STREAMING::REQUEST_MODEL(eptLocal_17, false);
	STREAMING::REQUEST_MODEL(hLocal_18, false);
	STREAMING::REQUEST_MODEL(hLocal_19, false);

	if (iLocal_176 == 1)
		STREAMING::REQUEST_MODEL(hLocal_20, false);

	func_79();
	func_80(volLocal_260, "SP_GrizzledJon1_Block", true, 0, 0, false, -1082130432);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_261, 0, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_261, 0, 0, 0, -1, -1, 0);
	func_81(&uLocal_234);
	func_82(&uLocal_205, true);
	func_83(&uLocal_205, true);
	func_84(&uLocal_205, false);
	func_85(&uLocal_205, false);
	func_86(&uLocal_205, false);
	func_87(&uLocal_205, false);
	func_88(&uLocal_205, false);
	func_89(&uLocal_205, false);
	func_90(&uLocal_205, true, true, true);
	func_91(&uLocal_205, false);
	func_85(&uLocal_205, false);
	func_92(&uLocal_205, false);
	func_93(&uLocal_205, true);
	func_94(&uLocal_205, true);
	func_95(&uLocal_205, true);
	func_96(&uLocal_205, true);
	func_97(&uLocal_205, false);
	func_98(&uLocal_205, true);
	func_99(&uLocal_205, false);
	func_100(&uLocal_205, false);
	func_101(&uLocal_205, true);
	func_102(&uLocal_205, false);
	Global_1935183.f_29 = 3;
	Global_1935183.f_28 = 0;
	iLocal_194 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	PED::_RESERVE_AMBIENT_PEDS(1);
	func_57(1);
	return;
}

void func_19() // Position - 0xEFA Hash - 0x9290C2BB ^0x5220DC71
{
	BOOL flag;
	int num;

	if (HUD::TEXT_BLOCK_IS_LOADED("SPGJAU") && HUD::TEXT_BLOCK_IS_LOADED("SPGJ") && STREAMING::HAS_MODEL_LOADED(eptLocal_17) && STREAMING::HAS_MODEL_LOADED(hLocal_18) && STREAMING::HAS_MODEL_LOADED(hLocal_19) && iLocal_176 != 1 || STREAMING::HAS_MODEL_LOADED(hLocal_20) && PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 1)
	{
		if (iLocal_176 == 1)
		{
			if (iLocal_279 == 0)
				iLocal_279 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_windsorchair03x"), uLocal_14, 5);
		
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_259))
			{
				if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_279))
				{
					obLocal_259 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(iLocal_279));
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(obLocal_259, false);
				}
			}
		}
	
		flag = false;
	
		if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_277))
		{
			switch (iLocal_176)
			{
				case 0:
					if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_277))
					{
						iLocal_277 = TASK::CREATE_SCENARIO_POINT_HASH(joaat("SPECIAL_PED_GJ02_STAND_BAR_DRINKING"), -313.19208f, 809.0455f, 117.97801f, -170f, 0, 0, true);
						TASK::_SET_SCENARIO_POINT_FLAG(iLocal_277, 16, true);
						TASK::_SET_SCENARIO_POINT_FLAG(iLocal_277, 18, true);
						flag = true;
					}
					break;
			
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(obLocal_259))
					{
						num = joaat("SPECIAL_PED_GJ01_SEAT_CHAIR_TABLE_DRINKING");
						iLocal_277 = TASK::_0xD508FA229F1C4900(obLocal_259, 0f, 0f, 0f, num, 0.5f);
						TASK::_SET_SCENARIO_POINT_FLAG(iLocal_277, 16, true);
						TASK::_SET_SCENARIO_POINT_FLAG(iLocal_277, 18, true);
						flag = true;
					}
					break;
			}
		
			if (flag)
				func_57(2);
		}
	}

	return;
}

void func_20() // Position - 0x1055 Hash - 0x831740CC ^0x831740CC
{
	if (func_104(&pedLocal_255, eptLocal_17, func_103(), 119.5846f, 1, false, true) && func_106(&eLocal_257, hLocal_18, func_105(hLocal_18)) && func_106(&eLocal_258, hLocal_19, func_105(hLocal_19)))
	{
		if (func_36(pedLocal_255, 0))
		{
			if (!func_8(iLocal_182, 16777216))
			{
				if (func_107())
				{
					func_108(pedLocal_255, 1689938120);
				
					if (func_12(13, 4194304) && !func_12(13, 67108864))
					{
						func_14(13, 67108864, true);
						func_14(13, 4194304, false);
					}
				}
			
				PHYSICS::ACTIVATE_PHYSICS(eLocal_257);
				PHYSICS::ACTIVATE_PHYSICS(eLocal_258);
				ENTITY::_0x669655FFB29EF1A9(eLocal_258, 0, "tumbler_fill", 0.6f);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(pedLocal_255, "special_ped_group", 0);
				PED::SET_PED_KEEP_TASK(pedLocal_255, true);
				PED::SET_PED_COMBAT_ABILITY(pedLocal_255, 2);
				func_109(pedLocal_255, PED::GET_PED_MAX_HEALTH(pedLocal_255) * 5);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedLocal_255, true);
				func_110(&uLocal_21, pedLocal_255, "GRIZZLED_JON", false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedLocal_255, func_103(), 197.2573f, true, false, true);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_255, 128, true);
				PED::SET_PED_CONFIG_FLAG(pedLocal_255, 168, false);
				PED::SET_PED_CONFIG_FLAG(pedLocal_255, 499, true);
				PED::SET_PED_CONFIG_FLAG(pedLocal_255, 521, true);
				PED::_FAKE_SET_PED_LOCO_INJURED(pedLocal_255, true);
				PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), pedLocal_255, "SPECIAL_PED_LIGHTWEIGHT_1_0", 0f, 0f, 0f, 0, "GrizzledJonBubble");
				func_111(pedLocal_255, 13);
			
				if (func_12(13, 33554432))
					func_112(pedLocal_255);
			
				func_113();
				func_7(&iLocal_182, 16777216);
			}
		
			switch (iLocal_176)
			{
				case 0:
					TASK::TASK_USE_SCENARIO_POINT(pedLocal_255, iLocal_277, "SP_GJ02_STAND_BAR_DRINKING", 0, true, true, 0, false, -1082130432, false);
					break;
			
				case 1:
					TASK::TASK_USE_SCENARIO_POINT(pedLocal_255, iLocal_277, "SP_GJ01_SEAT_CHAIR_TABLE_DRINKING", 0, true, true, 0, false, -1082130432, false);
					break;
			}
		
			iLocal_177 = 0;
			iLocal_184 = MISC::GET_GAME_TIMER() + 4000;
		
			if (PED::IS_PED_USING_THIS_SCENARIO(pedLocal_255, iLocal_277))
				func_57(3);
		}
	}

	return;
}

void func_21() // Position - 0x1235 Hash - 0x7D4EF043 ^0x97A6F17B
{
	int num;
	BOOL flag;
	char* str;

	num = 13;
	flag = func_8(iLocal_182, 4096) && !func_8(iLocal_182, 64) && !func_8(iLocal_182, 8);

	if (MISC::GET_GAME_TIMER() >= iLocal_184 && PED::IS_PED_USING_ANY_SCENARIO(pedLocal_255) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_262, true, 0) && func_37(Global_35, pedLocal_255, true, true) < (float)num && !func_8(iLocal_182, 8) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_255) && !AUDIO::_IS_PED_IN_ANY_CONVERSATION(pedLocal_255, false) && !func_114(13, pedLocal_255, true, true) && !func_115(64, false, true))
	{
		if (flag)
		{
			func_57(8);
		}
		else if (iLocal_187 < 3 && iLocal_183 <= func_30(iLocal_176) || func_8(iLocal_182, 64))
		{
			if (func_8(iLocal_182, 67108864))
			{
				TASK::REACT_LOOK_AT_END(pedLocal_255, 1, false);
				func_62(&iLocal_182, 67108864);
			}
		
			iLocal_177 = 0;
			func_57(5);
		}
		else if (!func_8(iLocal_182, 64))
		{
			Global_1935183.f_28 = 0;
		
			if (func_8(iLocal_182, 67108864))
			{
				TASK::REACT_LOOK_AT_END(pedLocal_255, 1, false);
				func_62(&iLocal_182, 67108864);
			}
		
			if (iLocal_176 == 1)
				func_57(6);
			else
				func_57(7);
		}
	}
	else
	{
		if (iLocal_186 >= 0)
		{
			if (iLocal_186 == 0)
				func_7(&iLocal_182, 2);
			else if (iLocal_186 == 1)
				func_7(&iLocal_182, 4);
		
			func_67(13, &pedLocal_255, &iLocal_182, 1);
			iLocal_185 = MISC::GET_GAME_TIMER();
			func_7(&iLocal_182, 8);
		}
	
		if (func_8(iLocal_182, 8))
		{
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_185 + 1000)
				{
					str = "GREET_GENERAL_STRANGER";
				
					if (func_8(iLocal_182, 4))
						str = "INSULT_RESPONSE";
				
					if (func_58(pedLocal_255, str, -417894478, Global_35, true, 0, 0, 1))
					{
						TASK::REACT_LOOK_AT(pedLocal_255, Global_35, 2, 1, 2f, 1, 0, 0, 0);
						iLocal_197 = 0;
						func_62(&iLocal_182, 8);
					
						if (MISC::GET_GAME_TIMER() >= iLocal_184)
							iLocal_184 = MISC::GET_GAME_TIMER() + 2000;
					}
				}
			}
		}
	}

	return;
}

void func_22() // Position - 0x1451 Hash - 0x6530DAFD ^0x5E192D5B
{
	Ped pedIndexFromEntityIndex;
	int num;

	if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_255))
	{
		if (iLocal_193 < 1 && !func_8(iLocal_182, 64))
		{
			if (TASK::_PED_IS_IN_SCENARIO_BASE(pedLocal_255))
			{
				Global_1935183.f_28 = 1;
			
				if (iLocal_176 == 1)
				{
					Global_1935183.f_29 = 0;
					num = 8;
				}
				else
				{
					Global_1935183.f_29 = 1;
					num = 33;
				}
			
				pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[num /*446*/].f_23);
				TASK::REACT_LOOK_AT(pedLocal_255, pedIndexFromEntityIndex, 2, 1, -1f, 1, 0, 0, 0);
				iLocal_197 = 0;
				iLocal_198 = MISC::GET_GAME_TIMER() + 8000;
				func_7(&iLocal_182, 67108864);
				func_116(&uLocal_268);
				iLocal_193 = iLocal_193 + 1;
			}
		}
		else if (func_117(&uLocal_268) > 0.5f)
		{
			iLocal_184 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000);
			func_57(3);
		}
	}

	return;
}

void func_23() // Position - 0x1516 Hash - 0xFE1AE ^0xFE1AE
{
	if (func_118(iLocal_183))
	{
		iLocal_183 = iLocal_183 + 1;
	
		if (iLocal_176 == 1 && iLocal_183 == 1 || iLocal_176 == 1 && iLocal_183 >= 10 && iLocal_183 <= 13 || iLocal_176 == 0 && iLocal_183 >= 8 && iLocal_183 <= 10)
			func_7(&iLocal_182, 64);
		else
			iLocal_184 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000);
	
		if (!func_8(iLocal_182, 64))
			iLocal_187 = iLocal_187 + 1;
	
		iLocal_177 = 0;
	
		if (iLocal_193 < 1 && !func_8(iLocal_182, 64) && iLocal_187 >= iLocal_194)
		{
			bLocal_181 = false;
			func_57(4);
		}
		else
		{
			func_57(3);
		}
	}

	return;
}

void func_24() // Position - 0x15D9 Hash - 0xDF61F5F5 ^0xF9529939
{
	char* playbackListName;
	float num;
	int randomIntInRange;

	if (!func_8(iLocal_182, 32768) && TASK::_PED_IS_IN_SCENARIO_BASE(pedLocal_255))
	{
		playbackListName = "";
	
		if (!func_12(13, 8388608))
		{
			playbackListName = "pbl_table_p20_exit_passout01";
			func_14(13, 8388608, true);
		}
		else
		{
			playbackListName = "pbl_table_p20_exit_passout02";
			func_14(13, 8388608, false);
		}
	
		ansLocal_189 = ANIMSCENE::_CREATE_ANIM_SCENE("script@specialped@pdgzj_grizzeld_jon@ig@ig_1@ig_1_table", 0, playbackListName, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_189);
		func_116(&uLocal_274);
		func_7(&iLocal_182, 32768);
	}
	else if (!func_8(iLocal_182, 65536))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_189, true, false) && func_119(&uLocal_274, 4f))
		{
			func_120();
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_255, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_189, "cs_grizzledjon", pedLocal_255, 0);
			ANIMSCENE::START_ANIM_SCENE(ansLocal_189);
			func_48(&uLocal_274);
			func_7(&iLocal_182, 65536);
		}
	}

	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_189, false))
	{
		if (func_12(13, 8388608))
			num = 0.353f;
		else
			num = 0.215f;
	
		if (ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_189) < num)
			if (!ENTITY::IS_ENTITY_ATTACHED(eLocal_258))
				ENTITY::ATTACH_ENTITY_TO_ENTITY(eLocal_258, pedLocal_255, PED::GET_PED_BONE_INDEX(pedLocal_255, 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		else if (ENTITY::IS_ENTITY_ATTACHED(eLocal_258))
			func_121(eLocal_258, false, true);
	}

	if (!func_8(iLocal_182, 536870912))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_189, false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_189) > 0.9f)
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		
			if (randomIntInRange == 1)
			{
				Global_1935183.f_28 = 1;
				Global_1935183.f_29 = 2;
			}
		
			func_7(&iLocal_182, 536870912);
		}
	}

	func_122(pedLocal_255, volLocal_261);
	return;
}

void func_25() // Position - 0x1780 Hash - 0xD0439453 ^0x7D1AC957
{
	int randomIntInRange;
	char* str;
	BOOL flag;

	PED::_SET_PED_DRUNKNESS(pedLocal_255, true, 1065353216);

	if (!func_8(iLocal_182, 131072))
	{
		PED::_GIVE_PED_HASH_COMMAND(pedLocal_255, MISC::GET_HASH_KEY("P21_Exit02_JON"), 1f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_255, -316.44022f, 805.7891f, 116.85503f, 1f, -1, 1048576000, 0, 1193033728);
		iLocal_278 = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_human_drunk_passed_out_floor"), -316.44022f, 805.7891f, 116.85503f, -170f, 0, 0, false);
		TASK::_0xADC45010BC17AF0E(iLocal_278, 1);
		TASK::_SET_SCENARIO_POINT_FLAG(iLocal_278, 23, true);
		TASK::_SET_SCENARIO_POINT_FLAG(iLocal_278, 25, true);
		func_116(&uLocal_268);
		iLocal_184 = MISC::GET_GAME_TIMER() + 15000;
		func_7(&iLocal_182, 131072);
	}
	else if (!func_8(iLocal_182, 524288))
	{
		if (!func_8(iLocal_182, 536870912))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(pedLocal_255) == 0 || func_117(&uLocal_268) > 5f)
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			
				if (randomIntInRange == 1)
				{
					Global_1935183.f_28 = 1;
					Global_1935183.f_29 = 2;
				}
			
				func_7(&iLocal_182, 536870912);
			}
		}
	
		if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_255, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD, true) == 8 && MISC::GET_GAME_TIMER() >= iLocal_184)
		{
			func_120();
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_255, true);
			TASK::TASK_USE_SCENARIO_POINT(pedLocal_255, iLocal_278, 0, -1, true, false, 0, false, -1082130432, false);
			func_7(&iLocal_182, 524288);
		}
	}
	else
	{
		func_122(pedLocal_255, volLocal_261);
	}

	if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_255, "SCRIPT_COMMON@SHARED_SCENARIOS@STAND@STAND_DRUNK@MALE_A@STAND_EXIT", "p_21_exit01_ig_grizzledjon") >= 0.22f)
	{
		if (!func_8(iLocal_182, 262144))
		{
			str = "";
			flag = false;
		
			if (!func_12(13, 16777216))
			{
				str = "SPGJ_BR20_E";
				flag = true;
			}
			else
			{
				str = "SPGJ_BR20_E2";
				flag = false;
			}
		
			if (func_123(str))
			{
				func_7(&iLocal_182, 262144);
				func_14(13, 16777216, flag);
			}
		}
	}

	if (func_36(pedLocal_255, 0) && !func_8(iLocal_182, 268435456))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(pedLocal_255) == 0)
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0)
			{
				if (!PED::IS_TRACKED_PED_VISIBLE(pedLocal_255) && !ENTITY::IS_ENTITY_AT_ENTITY(Global_35, pedLocal_255, 8f, 8f, 8f, false, false, 0))
				{
					PED::DELETE_PED(&pedLocal_255);
					func_7(&iLocal_182, 268435456);
				}
			}
		}
	}

	return;
}

void func_26() // Position - 0x19BF Hash - 0x15EB4698 ^0xA92F3A45
{
	if (!func_8(iLocal_182, 16384))
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_188)
		{
			if (PED::IS_PED_USING_ANY_SCENARIO(pedLocal_255) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_255) && !AUDIO::_IS_PED_IN_ANY_CONVERSATION(pedLocal_255, false))
			{
				PED::SET_PED_CONFIG_FLAG(pedLocal_255, 258, true);
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_255, MISC::GET_HASH_KEY(func_124()), 4f);
				func_56(false, true, true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_255, false, false);
				iLocal_188 = MISC::GET_GAME_TIMER() + 5000;
			}
		}
	}

	if (PED::IS_PED_SHOOTING(Global_35))
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_255, 512, false);

	if (PED::IS_PED_IN_COMBAT(pedLocal_255, 0))
	{
		if (!MAP::DOES_BLIP_EXIST(blLocal_256))
			blLocal_256 = func_64(pedLocal_255, joaat("BLIP_STYLE_ENEMY"), 1, true);
	
		bLocal_181 = false;
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "GrizzledJonBubble");
	
		if (func_125() && !func_43(&uLocal_271) || func_117(&uLocal_271) > 3f)
		{
			func_116(&uLocal_271);
			func_57(9);
		}
	
		if (func_37(Global_35, pedLocal_255, true, true) < 3f)
			if (!PED::GET_PED_CONFIG_FLAG(pedLocal_255, 258, true))
				PED::SET_PED_CONFIG_FLAG(pedLocal_255, 258, true);
		else if (PED::GET_PED_CONFIG_FLAG(pedLocal_255, 258, true))
			PED::SET_PED_CONFIG_FLAG(pedLocal_255, 258, false);
	
		if (!func_8(iLocal_182, 33554432))
		{
			if (func_126(Global_35, pedLocal_255) && !func_126(pedLocal_255, Global_35))
			{
				LAW::_0xFFEBE5AA96BC2E4E(pedLocal_255, joaat("crime_assault"), true);
				LAW::_0xFFEBE5AA96BC2E4E(pedLocal_255, joaat("crime_unarmed_assault"), true);
				func_7(&iLocal_182, 33554432);
			}
		}
	}

	if (!func_8(iLocal_182, 1024))
	{
		if (func_123(func_127(false)))
		{
			WEAPON::_0xD53846B9C931C181(pedLocal_255, joaat("WEAPON_UNARMED"), 20f);
			func_7(&iLocal_182, 1024);
			iLocal_184 = MISC::GET_GAME_TIMER() + 1500;
		}
	}
	else if (iLocal_176 == 1 && func_8(iLocal_182, 8192))
	{
		if (!func_8(iLocal_182, 2048))
			if (MISC::GET_GAME_TIMER() >= iLocal_184 && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_255))
				if (func_123(func_127(true)))
					func_7(&iLocal_182, 2048);
	}

	return;
}

void func_27() // Position - 0x1BC2 Hash - 0x37DCE69 ^0xF8C0098D
{
	if (!func_125() && func_37(Global_35, pedLocal_255, true, true) < 5f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(pedLocal_255, Global_35, 17) && !func_43(&uLocal_271) || func_117(&uLocal_271) > 3f)
	{
		bLocal_181 = false;
		func_116(&uLocal_271);
		func_56(false, false, false);
		func_57(8);
	}

	if (!PED::IS_PED_IN_COMBAT(pedLocal_255, 0))
		if (MAP::DOES_BLIP_EXIST(blLocal_256))
			func_32(pedLocal_255);

	if (!PED::IS_PED_FLEEING(pedLocal_255))
	{
		TASK::CLEAR_PED_TASKS(pedLocal_255, true, false);
		TASK::TASK_FLEE_PED(pedLocal_255, Global_35, 6, 128, -1082130432, -1, 0);
	}
	else if (!func_8(iLocal_182, 1073741824))
	{
		if (func_128(pedLocal_255, "IGNORING_YOU", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, "GRIZZLED_JON", 0))
			func_7(&iLocal_182, 1073741824);
	}

	return;
}

void func_28(int iParam0, BOOL bParam1) // Position - 0x1C9B Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_129(iParam0))
		return;

	func_130(iParam0, bParam1);
	return;
}

void func_29(int iParam0, BOOL bParam1) // Position - 0x1CB8 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_129(iParam0))
		return;

	func_131(iParam0, bParam1);
	return;
}

int func_30(int iParam0) // Position - 0x1CD5 Hash - 0x94A8FDE2 ^0x94A8FDE2
{
	switch (iParam0)
	{
		case 0:
			return 10;
	
		case 1:
			return 13;
	}

	return 0;
}

void func_31(int iParam0, int iParam1) // Position - 0x1D02 Hash - 0xDEDCA13F ^0xDEDCA13F
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
		Global_40.f_11623[iParam0 /*8*/] = iParam1;

	return;
}

void func_32(Ped pedParam0) // Position - 0x1D25 Hash - 0x467611EC ^0x3EE822E5
{
	Blip blipFromEntity;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	blipFromEntity = MAP::GET_BLIP_FROM_ENTITY(pedParam0);
	func_132(&blipFromEntity);
	return;
}

void func_33(Volume volParam0) // Position - 0x1D48 Hash - 0x4A7DD833 ^0xF771448B
{
	var volumeCoords;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	func_133(volumeCoords, 0);
	return;
}

void func_34(var uParam0) // Position - 0x1D70 Hash - 0xDFB6596B ^0xFDA355C
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_20))
		VOLUME::DELETE_VOLUME(uParam0->f_20);

	if (func_43(&(uParam0->f_13)))
		func_48(&(uParam0->f_13));

	return;
}

void func_35(int iParam0) // Position - 0x1DC4 Hash - 0xE0F13664 ^0x6F64281C
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);

	if (Global_1396257[iParam0 /*638*/].f_631)
		func_134(false, -1);

	func_135();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = Global_1415398.f_2 - 1;
	Global_1935183.f_28 = 0;
	return;
}

BOOL func_36(Ped pedParam0, int iParam1) // Position - 0x1E1C Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_8(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_8(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_8(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_8(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_8(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_8(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_8(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_8(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

float func_37(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1F1B Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

Volume func_38(int iParam0) // Position - 0x1F63 Hash - 0xE4DA9E55 ^0x6DBF788A
{
	if (!func_136(iParam0))
		return 0;

	return Global_1888801[iParam0 /*35*/].f_3;
}

BOOL func_39(int iParam0, int iParam1, var uParam2, Ped pedParam3) // Position - 0x1F83 Hash - 0x540B5813 ^0x255543BD
{
	eStackSize stackSize;
	eStackSize stackSize2;
	eStackSize stackSize3;
	BOOL flag;

	if (MISC::GET_FRAME_COUNT() % 10 == 0)
	{
		if (uParam2->f_1)
			if (func_137(0) == 1 || func_137(0) == 2 || func_137(0) == 8 || func_138(Global_1935630, 2048))
				func_7(uParam2, 2);
	
		if (uParam2->f_2)
			if (func_137(0) == 11)
				func_7(uParam2, 4);
	
		if (uParam2->f_4)
			if (func_137(0) == 6)
				func_7(uParam2, 8);
	
		if (uParam2->f_5)
			if (Global_1394141.f_1328)
				func_7(uParam2, 16);
	}

	if (MISC::GET_FRAME_COUNT() % 30 == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_139(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_139(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				stackSize = func_41();
				stackSize2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				stackSize3 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
			
				if (func_139(stackSize3) > func_139(stackSize2))
					if (func_139(stackSize) > func_139(stackSize3) + 1 || func_139(stackSize) < func_139(stackSize2))
						func_7(uParam2, 32);
				else if (func_139(stackSize) > func_139(stackSize3) + 1 && func_139(stackSize) < func_139(stackSize2))
					func_7(uParam2, 32);
			}
		}
	
		if (uParam2->f_7)
		{
			flag = false;
		
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
					if (func_140(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_140(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]) || func_141(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_141(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
						flag = true;
			
				if (!flag)
					if (!func_142(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
						func_7(uParam2, 64);
			}
		}
	
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_143(&pedParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_144(&pedParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_43(&(uParam2->f_13)))
					{
						func_44(&(uParam2->f_13), 0f);
					}
					else if (func_145(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_48(&(uParam2->f_13));
						func_7(uParam2, 512);
					}
				
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_43(&(uParam2->f_13)))
						func_48(&(uParam2->f_13));
				
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
	
		if (uParam2->f_9)
			if (func_146())
				func_7(uParam2, 1024);
	
		if (uParam2->f_10)
			if (func_147())
				func_7(uParam2, 2048);
	
		if (func_138(Global_1935630, 16384) || Global_1430231.f_4)
			func_7(uParam2, 128);
	
		if (func_148(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
			func_7(uParam2, 256);
	}

	if (func_8(*uParam2, 2) || func_8(*uParam2, 4) || func_8(*uParam2, 8) || func_8(*uParam2, 16) || func_8(*uParam2, 32) || func_8(*uParam2, 64) || func_8(*uParam2, 128) || func_8(*uParam2, 256) || func_8(*uParam2, 512) || func_8(*uParam2, 1024) || func_8(*uParam2, 2048))
		return true;

	return false;
}

void func_40(Entity eParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x23A1 Hash - 0xD01D9579 ^0xCE82B314
{
	BOOL flag;
	int boneId;
	Vector3 pedBoneCoords;
	Vector3 pedBoneCoords2;

	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
	{
		flag = false;
	
		if (bLocal_181 && MISC::GET_GAME_TIMER() >= iLocal_196 && iLocal_175 <= 5 && eParam0 == eLocal_258)
		{
			if (iParam3 == 7966)
				boneId = 22798;
			else
				boneId = 34606;
		
			pedBoneCoords = { PED::GET_PED_BONE_COORDS(pedLocal_255, iParam3, 0f, 0f, 0f) };
			pedBoneCoords2 = { PED::GET_PED_BONE_COORDS(pedLocal_255, boneId, 0f, 0f, 0f) };
		
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(pedBoneCoords, pedBoneCoords2, true) < 0.2f)
				flag = true;
		}
	
		if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_255, hParam1) || flag)
		{
			if (!ENTITY::IS_ENTITY_ATTACHED(eParam0))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(eParam0, pedLocal_255, PED::GET_PED_BONE_INDEX(pedLocal_255, iParam3), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			
				if (flag)
					iLocal_197 = MISC::GET_GAME_TIMER() + 4000;
			
				bLocal_181 = false;
			}
		}
	
		if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_255, hParam2) || bParam4 && TASK::IS_PED_SCENARIO_REACT_LOOKING(pedLocal_255, true) && MISC::GET_GAME_TIMER() >= iLocal_197 || !TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_255, 0) && !TASK::IS_PED_EXITING_SCENARIO(pedLocal_255, false) || iLocal_175 == 7)
		{
			if (ENTITY::IS_ENTITY_ATTACHED(eParam0))
			{
				if (TASK::IS_PED_SCENARIO_REACT_LOOKING(pedLocal_255, true) && eParam0 == eLocal_258)
				{
					bLocal_181 = true;
					iLocal_196 = MISC::GET_GAME_TIMER() + 4000;
				}
			
				func_121(eParam0, false, true);
			}
		}
	}

	return;
}

eStackSize func_41() // Position - 0x24F5 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_42(Ped pedParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0x2501 Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pedParam1, bParam3, false)) <= iParam2 * iParam2)
		return true;

	return false;
}

BOOL func_43(var uParam0) // Position - 0x2549 Hash - 0x5001E582 ^0x5001E582
{
	return func_149(*uParam0, 1);
}

void func_44(var uParam0, float fParam1) // Position - 0x2559 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_150() - fParam1;
	func_151(uParam0, 1);
	func_152(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

float func_45(var uParam0) // Position - 0x257F Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_43(uParam0))
		return uParam0->f_1;

	if (func_153(uParam0))
		return uParam0->f_2;

	return func_150() - uParam0->f_1;
}

BOOL func_46(Hash hParam0) // Position - 0x25B4 Hash - 0xD02571D6 ^0x9878B86D
{
	return hParam0 != -15;
}

void func_47(int iParam0) // Position - 0x25C2 Hash - 0x866B8C3 ^0xA8518BD7
{
	Global_40.f_11623[iParam0 /*8*/].f_5 = Global_40.f_11623[iParam0 /*8*/].f_5 + 1;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_41();
	return;
}

void func_48(var uParam0) // Position - 0x25F4 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_49(var uParam0, int iParam1) // Position - 0x260A Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_50(var uParam0) // Position - 0x261B Hash - 0x9DBECFB8 ^0xE52A4E97
{
	if (*uParam0 & 1 != 0)
		*uParam0 = *uParam0 | 64 | 16 | 16777216;

	return;
}

BOOL func_51(BOOL bParam0, int iParam1) // Position - 0x263E Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && iParam1 != false;
}

int func_52(var uParam0, int* piParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, BOOL bParam8, Volume volParam9, int iParam10, int iParam11, int iParam12) // Position - 0x264D Hash - 0x66907D63 ^0x41228033
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	int num2;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_50(&bParam8);
		num = -1;
		flag = false;
		flag2 = volParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(volParam9) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volParam9, false, 0);
		flag3 = bParam8 & 32 != 0;
		flag4 = bParam8 & 524288 != 0;
		flag5 = bParam8 & 16777216 != 0;
		flag6 = bParam8 & 16777216 != 0;
		flag7 = AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0);
		num2 = iParam12 >= 0f ? iParam12 : BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false));
	
		if (!(bParam8 & 2097152 != 0))
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
	
		if (bParam8 & 8388608 != 0)
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
	
		if (flag5)
			flag = AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35);
	
		if (flag7 || flag5 && flag)
			func_116(&(piParam1->f_13));
	
		if (func_155(*uParam0, piParam1, uParam3))
			return -1;
	
		switch (piParam1->f_2)
		{
			case 0:
				if (flag2)
				{
					if (func_156(uParam0, piParam1, uParam3, fParam2, bParam8, sParam7, iParam11, num2))
					{
						piParam1->f_1 = -1;
						piParam1->f_2 = 1;
						return func_52(uParam0, piParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, bParam8, volParam9, iParam10, iParam11, iParam12);
					}
				}
				break;
		
			case 1:
				if (!flag2 || !(num2 <= fParam2 + 5f))
				{
					func_66(uParam0);
					piParam1->f_2 = 0;
					return -1;
				}
			
				if (!(bParam8 & 33554432 != 0))
					if (bParam8 & 18 != 0)
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
							func_157(*uParam0, true, true);
					else if (func_158(piParam1, 22))
						func_157(*uParam0, false, true);
			
				if (func_159(uParam0, bParam8, volParam9, MISC::IS_BIT_SET(*piParam1, 4)))
				{
					func_160(uParam0, true, piParam1, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, bParam8, volParam9, iParam10, iParam11, flag4);
					func_161(bParam8);
				
					if (func_162(uParam0, piParam1, num2, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, bParam8, volParam9, iParam10, iParam11, flag4, flag7, flag5, flag, false))
					{
						if (piParam1->f_2 != 2 && piParam1->f_2 != 3)
						{
							if (piParam1->f_1 > -1 && piParam1->f_1 < *uParam3)
								if (MISC::IS_BIT_SET(uParam3->[piParam1->f_1 /*17*/], 20))
									func_163(uParam3);
						
							return piParam1->f_1;
						}
					}
					else if (piParam1->f_2 != 2)
					{
						if (piParam1->f_1 != -1)
							piParam1->f_1 = -1;
					}
				}
				else
				{
					func_164(piParam1, uParam3, num2);
				
					if (func_165(*uParam0, piParam1, uParam3))
						return piParam1->f_1;
				
					if (MISC::IS_BIT_SET(*piParam1, 1))
					{
						func_166(uParam3, 0, false, true, true);
						MISC::CLEAR_BIT(piParam1, 1);
					}
				}
				break;
		
			case 2:
				if (func_159(uParam0, bParam8, volParam9, MISC::IS_BIT_SET(*piParam1, 4)))
				{
					func_168(*uParam0, piParam1, uParam3, fParam2, iParam5, iParam6, iParam10, flag3);
					func_162(uParam0, piParam1, num2, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, bParam8, volParam9, iParam10, iParam11, flag4, flag7, flag5, flag, true);
					func_160(uParam0, func_159(uParam0, bParam8, volParam9, false), piParam1, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, bParam8, volParam9, iParam10, iParam11, flag4);
					func_161(bParam8);
				}
				else if (MISC::IS_BIT_SET(*piParam1, 1))
				{
					if (!flag4)
						func_166(uParam3, 0, false, true, true);
				
					func_169(piParam1, 1);
				}
			
				func_164(piParam1, uParam3, num2);
			
				if (func_167(uParam0, piParam1, fParam4, flag6))
				{
					if (bParam8 & 512 != 0)
						piParam1->f_2 = 0;
					else
						piParam1->f_2 = 1;
				
					num = piParam1->f_1;
					piParam1->f_9 = 0;
					piParam1->f_1 = -1;
					return num;
				}
				break;
		
			case 3:
				break;
		
			case 4:
				if (func_167(uParam0, piParam1, fParam4, flag6))
				{
					num = piParam1->f_1;
					piParam1->f_9 = 0;
					piParam1->f_1 = -1;
					return num;
				}
				break;
		}
	}
	else if (!(bParam8 & 1024 != 0))
	{
		if (!MISC::IS_BIT_SET(*piParam1, 3))
		{
			func_65(piParam1, uParam3);
			MISC::SET_BIT(piParam1, 3);
		}
	}

	return -1;
}

void func_53(int* piParam0, var uParam1, var uParam2) // Position - 0x2A91 Hash - 0xDBBC4BAB ^0x6BF91575
{
	int num;
	const char* str;
	var unk;

	num = func_170(piParam0);

	if (num != -1)
	{
		str = uParam1->[num /*17*/].f_13;
		unk = uParam1->[num /*17*/].f_15;
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
			func_171(Global_35, *uParam2, str, "", -1082130432, unk, false, 0, 1, true, true, 291934926, true, false, 0);
	}

	return;
}

BOOL func_54(int iParam0) // Position - 0x2AEA Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_172() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_55(int iParam0, BOOL bParam1) // Position - 0x2B2F Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_173(iParam0, &num, &num2);

	if (!func_174(iParam0, num, num2, bParam1))
		return;

	func_175(num, num2);
	return;
}

void func_56(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2B5C Hash - 0x6B97DB05 ^0xEF162CEE
{
	if (bParam0)
		PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(pedLocal_255, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);

	if (bParam2)
		func_63();

	PED::SET_PED_CONFIG_FLAG(pedLocal_255, 521, false);
	bLocal_181 = false;
	TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(pedLocal_255, Global_35, 0, 0, 4f, true, 0);

	if (bParam1)
		fLocal_204 = func_176(Global_35, func_103(), true);

	if (!PED::IS_PED_SHOOTING(Global_35))
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_255, 512, true);

	iLocal_191 = MISC::GET_GAME_TIMER();
	func_7(&iLocal_182, 512);
	return;
}

void func_57(int iParam0) // Position - 0x2BD5 Hash - 0xB704DDFD ^0x83EA6FBC
{
	switch (iParam0)
	{
		case 3:
			if (!func_8(iLocal_182, 64) && !func_8(iLocal_182, 67108864))
			{
				if (!func_8(iLocal_182, 4))
				{
					if (!func_8(iLocal_182, 2))
						func_177(&uLocal_140[0 /*17*/], true, false);
				
					func_177(&uLocal_140[1 /*17*/], true, false);
				}
			}
		
			bLocal_180 = false;
			break;
	
		case 5:
			func_62(&iLocal_182, 64);
			bLocal_180 = false;
			break;
	
		case 7:
			PED::REQUEST_PED_VISIBILITY_TRACKING(pedLocal_255);
			break;
	
		case 8:
			if (iParam0 == 5)
				func_7(&iLocal_182, 2097152);
		
			if (!func_12(13, 4194304))
				func_7(&iLocal_182, 8192);
			else
				func_62(&iLocal_182, 8192);
		
			func_67(13, &pedLocal_255, &iLocal_182, 1);
			func_47(13);
			func_14(13, 4194304, true);
			break;
	
		case 9:
			PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_255, 512, false);
			break;
	}

	if (iParam0 != 3)
	{
		func_177(&uLocal_140[0 /*17*/], false, false);
		func_177(&uLocal_140[1 /*17*/], false, false);
	}

	iLocal_175 = iParam0;
	return;
}

BOOL func_58(Ped pedParam0, char* sParam1, int iParam2, Ped pedParam3, BOOL bParam4, int iParam5, int iParam6, int iParam7) // Position - 0x2CE8 Hash - 0x281BDD5E ^0x8899ECCD
{
	const char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = iParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = pedParam3;
	str.f_5 = bParam4;
	str.f_6 = iParam7;
	return func_178(pedParam0, &str);
}

BOOL func_59(Ped pedParam0, Entity eParam1, BOOL bParam2, var uParam3, int iParam4, int iParam5) // Position - 0x2D2F Hash - 0xED93B9E0 ^0x288D4ED6
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > bParam2->f_5)
		func_179(bParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			bParam2->f_12 = iParam5;
		else
			bParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(bParam2->f_1 & 128 != 0))
		{
			if (func_180(pedParam0, bParam2))
			{
				*uParam3 = 128;
				func_181(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(bParam2->f_1 & 8 != 0))
			{
				if (func_182(pedParam0, bParam2))
				{
					*uParam3 = 8;
					func_181(pedParam0, bParam2, *uParam3);
					return true;
				}
				else if (func_183(pedParam0, eParam1, bParam2))
				{
					*uParam3 = 8;
					func_181(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		
			if (*bParam2 & 32 != 0)
			{
				if (func_184(pedParam0, bParam2))
				{
					*uParam3 = 64;
					func_181(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_185(PLAYER::PLAYER_ID(), false, true, bParam2->f_1 & 524288 == 0))
		{
			if (!(bParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_181(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_186(bParam2, 1065353216))
			{
				if (!(bParam2->f_1 & 4 != 0))
				{
					if (func_187(Global_35, pedParam0, bParam2))
					{
						*uParam3 = 4;
						func_181(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			
				if (!(bParam2->f_1 & 256 != 0))
				{
					if (func_188(Global_35, pedParam0, bParam2))
					{
						*uParam3 = 256;
						func_181(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(bParam2->f_1 & 16 != 0))
		{
			if (bParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_189(Global_35, pedParam0, bParam2, false))
				{
					*uParam3 = 16;
					func_181(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
			else if (func_189(Global_35, pedParam0, bParam2, true))
			{
				*uParam3 = 16;
				func_181(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*bParam2 & 8 != 0)
			{
				if (func_190(pedParam0, bParam2))
				{
					*uParam3 = 32;
					func_181(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*bParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || bParam2->f_12 < 20f)
			{
				if (func_191(&pedParam0, bParam2))
				{
					*uParam3 = 4096;
					func_181(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(bParam2->f_1 & 2 != 0))
			{
				if (func_192(bParam2, 4000))
				{
					if (func_193(pedParam0, Global_1935630.f_41, *bParam2 & 128 != 0, false, *bParam2 & 256 != 0) && func_194(bParam2, pedParam0) && func_195(bParam2, pedParam0))
					{
						*uParam3 = 2;
						func_181(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(bParam2->f_1 & 2 != 0))
		{
			if (bParam2->f_12 < 4f)
			{
				if (func_193(pedParam0, Global_1935630.f_41, *bParam2 & 128 != 0, true, *bParam2 & 256 != 0) && func_194(bParam2, pedParam0) && func_195(bParam2, pedParam0))
				{
					*uParam3 = 2;
					func_181(pedParam0, bParam2, *uParam3);
					return true;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*bParam2 & 131072 == 0)
						{
							if (func_196(pedParam0, Global_1935630.f_41))
							{
								func_197();
								*uParam3 = 2;
								func_181(pedParam0, bParam2, *uParam3);
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
					if (*bParam2 & 131072 == 0)
					{
						if (func_196(pedParam0, Global_1935630.f_41))
						{
							func_197();
							*uParam3 = 2;
							func_181(pedParam0, bParam2, *uParam3);
							return true;
						}
					}
				}
			}
		
			if (bParam2->f_12 < 10f)
			{
				if (func_198(bParam2, pedParam0) || bParam2->f_9 > 0 && func_199() - bParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_197();
						*uParam3 = 2;
						func_181(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*bParam2 & 131072 == 0)
				{
					if (func_200())
					{
						if (func_196(pedParam0, Global_1935630.f_42))
						{
							func_197();
							*uParam3 = 2;
							func_181(pedParam0, bParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
	
		if (!(bParam2->f_1 & 1024 != 0))
		{
			if (func_201(bParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_181(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	
		if (bParam2->f_12 < bParam2->f_26)
		{
			if (!(bParam2->f_1 & 2048 != 0))
			{
				if (func_202(pedParam0, eParam1, bParam2))
				{
					*uParam3 = 2048;
					func_181(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		
			if (*bParam2 & 16 != 0)
			{
				if (bParam2->f_6 == 2)
				{
					if (func_203(pedParam0, bParam2))
					{
						*uParam3 = 8192;
						func_181(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*bParam2 & 64 != 0)
			{
				if (func_204(pedParam0, bParam2))
				{
					*uParam3 = 32768;
					func_181(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (bParam2->f_12 < 12f)
		{
			if (*bParam2 & 1048576 != 0)
			{
				if (func_205(bParam2, 4000))
				{
					if (func_206(&pedParam0, bParam2))
					{
						*uParam3 = 512;
						func_181(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (bParam2->f_12 < bParam2->f_19)
		{
			if (*bParam2 & 1024 != 0)
			{
				if (func_207(pedParam0, bParam2))
				{
					*uParam3 = 65536;
					bParam2->f_4 = 0;
					func_181(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(bParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_208(bParam2, pedParam0))
			{
				*uParam3 = 1;
				func_181(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

int func_60(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x3358 Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_61() // Position - 0x339A Hash - 0xD1DFCCF ^0x450D0831
{
	var offsetFromEntityGivenWorldCoords;

	if (MISC::GET_GAME_TIMER() >= iLocal_190)
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0)
		{
			offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(pedLocal_255, ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
		
			if (offsetFromEntityGivenWorldCoords.f_1 >= 1f)
				if (func_13())
					return true;
		}
	
		iLocal_190 = MISC::GET_GAME_TIMER() + 5000;
	}

	return false;
}

void func_62(var uParam0, int iParam1) // Position - 0x33E7 Hash - 0xF55E891F ^0xF55E891F
{
	func_74(uParam0, iParam1);
	return;
}

void func_63() // Position - 0x33F7 Hash - 0x85A871E4 ^0x60146905
{
	if (!func_8(iLocal_182, 4096))
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_255) || AUDIO::_IS_PED_IN_ANY_CONVERSATION(pedLocal_255, false))
			AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(true, false, false);

	return;
}

Blip func_64(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0x3429 Hash - 0x7DC8F47B ^0xE3A641E6
{
	Blip blipFromEntity;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	blipFromEntity = MAP::GET_BLIP_FROM_ENTITY(pedParam0);

	if (!MAP::DOES_BLIP_EXIST(blipFromEntity))
		blipFromEntity = MAP::BLIP_ADD_FOR_ENTITY(hParam1, pedParam0);
	else
		MAP::_BLIP_SET_STYLE(blipFromEntity, hParam1);

	if (bParam3)
		if (hParam1 == joaat("BLIP_STYLE_OBJECTIVE") || hParam1 == joaat("BLIP_STYLE_OBJECTIVE_VOL_BOX") || hParam1 == joaat("BLIP_STYLE_OBJECTIVE_VOL_ROUND"))
			MAP::BLIP_ADD_MODIFIER(blipFromEntity, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));

	return blipFromEntity;
}

void func_65(int* piParam0, var uParam1) // Position - 0x34B6 Hash - 0xC7765EDD ^0x9C4E31FE
{
	int i;
	var src;
	var src2;

	src.f_1 = -1;
	src.f_3 = -1;
	src.f_6 = -1;
	src.f_12 = 1073741824;
	src.f_16 = 1;
	src2.f_2 = 570;
	src2.f_3 = 1065353216;
	src2.f_4 = -1082130432;
	src2.f_9 = 2;
	func_209(piParam0, uParam1, true);
	func_166(uParam1, 0, true, true, false);
	MISC::COPY_SCRIPT_STRUCT(piParam0, &src, 21);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&uParam1->[i /*17*/], &src2, 17);
	}

	return;
}

void func_66(var uParam0) // Position - 0x3547 Hash - 0x43696AC2 ^0x4C06F87D
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}

	return;
}

void func_67(int iParam0, var uParam1, var uParam2, int iParam3) // Position - 0x356D Hash - 0x3D679EE4 ^0xBD1763F0
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		return;

	if (func_73(*uParam2, iParam3))
		return;

	Global_40.f_11623[iParam0 /*8*/].f_6 = Global_40.f_11623[iParam0 /*8*/].f_6 + 1;

	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_211(func_210(joaat("special_ped_interaction"))) < 5)
		func_212(func_210(joaat("special_ped_interaction")), 1);

	Global_40.f_11623[iParam0 /*8*/].f_3 = func_41();
	func_49(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
	return;
}

BOOL func_68(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x3604 Hash - 0xC5F24F4E ^0x107F90DC
{
	if (!bParam2)
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;

	return PED::_IS_META_PED_USING_COMPONENT(pedParam0, hParam1);
}

BOOL func_69(Hash hParam0, var uParam1) // Position - 0x3628 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_214(func_213(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_215(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

void func_70(BOOL bParam0, int iParam1) // Position - 0x369F Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_71(BOOL bParam0, int iParam1) // Position - 0x36B0 Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x36C5 Hash - 0xA17D549C ^0x9DC909A7
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
	
		case 1:
			return "anders_helgerson";
	
		case 2:
			return "armadillo_town_crier";
	
		case 3:
			return "bland_preacher";
	
		case 4:
			return "blind_man_cassidy";
	
		case 5:
			return "crackpot_robot";
	
		case 6:
			return "chelonian_master";
	
		case 7:
			return "civil_war_commando";
	
		case 8:
			return "dorothea_wicklow";
	
		case 9:
			return "endless_strainer";
	
		case 10:
			return "early_eugenics_proponent";
	
		case 11:
			return "gavins_friend";
	
		case 12:
			return "giant";
	
		case 13:
			return "grizzeld_jon";
	
		case 14:
			return "joe_butler";
	
		case 15:
			return "john_the_baptising_madman";
	
		case 16:
			return "lillian_powell";
	
		case 17:
			return "mad_scientist";
	
		case 18:
			return "mayor_of_strawberry";
	
		case 19:
			return "bum_civil_war_vet";
	
		case 20:
			return "philosopher_in_cave";
	
		case 21:
			return "poor_joe";
	
		case 22:
			return "sheriff_of_tumbleweed";
	
		case 23:
			return "soothsayer";
	
		case 24:
			return "sun_worshipper";
	
		case 25:
			return "swamp_weirdo_sonny";
	
		case 26:
			return "thomas_downe";
	
		case 27:
			return "timothy_donahue";
	
		case 28:
			return "tiny_hermit_in_cabin";
	
		case 29:
			return "vampire";
	
		default:
		
	}

	return "speci";
}

BOOL func_73(int iParam0, int iParam1) // Position - 0x385F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_74(var uParam0, int iParam1) // Position - 0x386E Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

Hash func_75(int iParam0) // Position - 0x3883 Hash - 0xB8EC44B7 ^0x6DBAB464
{
	switch (iParam0)
	{
		case 0:
			return 1005861726;
	
		case 1:
			return 1472102294;
	
		case 2:
			return -26239347;
	
		case 3:
			return 813446076;
	
		case 4:
			return joaat("spid_blind_man_cassidy");
	
		case 5:
			return 1809158435;
	
		case 6:
			return -161610929;
	
		case 7:
			return 419383665;
	
		case 8:
			return 698747486;
	
		case 9:
			return 399829678;
	
		case 10:
			return -1767525506;
	
		case 11:
			return 1533318556;
	
		case 12:
			return 846763582;
	
		case 13:
			return 974338564;
	
		case 14:
			return 860809165;
	
		case 15:
			return -1682386507;
	
		case 16:
			return 420952075;
	
		case 17:
			return 1340251064;
	
		case 18:
			return -1417023286;
	
		case 19:
			return 237608522;
	
		case 20:
			return 1487910336;
	
		case 21:
			return 129290505;
	
		case 22:
			return 1231488843;
	
		case 23:
			return -499580940;
	
		case 24:
			return 1953535365;
	
		case 25:
			return -315419568;
	
		case 26:
			return -1708806962;
	
		case 27:
			return 1405526353;
	
		case 28:
			return -1903564707;
	
		case 29:
			return -1132839335;
	
		default:
		
	}

	return 0;
}

int func_76(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x3A38 Hash - 0x71EF3E96 ^0x557A7961
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	BOOL flag;
	int num5;

	num3 = iParam0;
	num4 = iParam1;

	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 100;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
		
			case 2:
				num = 101;
				num2 = 170;
				break;
		
			case 3:
				num = 171;
				num2 = 190;
				break;
		
			case 4:
				num = 191;
				num2 = 230;
				break;
		
			case 5:
				num = 231;
				num2 = 260;
				break;
		
			case 6:
				num = 261;
				num2 = 290;
				break;
		
			case 7:
				num = 291;
				num2 = 370;
				break;
		
			case 8:
				num = 371;
				num2 = 570;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
		
			case 9:
				num = 571;
				num2 = 650;
				break;
		
			case 10:
				return -1;
		
			case 11:
				num = 651;
				num2 = 750;
				break;
		
			case 12:
				return -1;
		
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 200;
				break;
		
			case 2:
				num = 201;
				num2 = 15700;
				break;
		
			case 4:
				num = 15701;
				num2 = 16200;
				break;
		
			case 6:
				return -1;
		
			case 7:
				return -1;
		
			case 8:
				return -1;
		
			case 10:
				num = 19201;
				num2 = 20000;
				break;
		
			case 12:
				num = &func_85;
				num2 = 19200;
				break;
		
			default:
				return -1;
		}
	}

	if (num2 >= func_216())
		num2 = func_216();

	flag = func_217(num3, num4, iParam2);

	if (Global_1572887.f_12 == -1)
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_218(num5) == flag)
				return num5;
		
			if (func_218(num5) == false)
				return func_219(num3, num4, iParam2, i, hParam3);
		}
	
		num = 751;
		num2 = 770;
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_218(num5) == flag)
				return num5;
		
			if (func_218(num5) == false)
				return func_219(num3, num4, iParam2, i, hParam3);
		}
	}
	else
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == flag)
				return i;
		}
	
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == false)
				return func_219(num3, num4, iParam2, i, 0);
		}
	}

	return -1;
}

int func_77(int iParam0) // Position - 0x3CF3 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_129(iParam0))
		return -1;

	return func_220(iParam0);
}

int func_78(int iParam0) // Position - 0x3D0F Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_129(iParam0))
		return -1;

	return func_221(iParam0);
}

void func_79() // Position - 0x3D2B Hash - 0xADECB056 ^0x1C0CDA6D
{
	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_260))
		volLocal_260 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(-307.8825f, 806.9466f, 117.9845f, 0f, 0f, 10.8212f, 11f, 11f, 11f, "RandomEventBlock");

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_261))
		if (iLocal_176 == 1)
			volLocal_261 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-304.86282f, 809.62573f, 118.56301f, 0f, 0f, 0f, 1.8f, 2f, 2f, "TableStayAway");
		else
			volLocal_261 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-312.96494f, 808.7404f, 118.87822f, 0f, 0f, 11.885546f, 2.5f, 1.75f, 3f, "BarStayAway");

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_262))
		volLocal_262 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.35144f, 807.70325f, 120.50425f, 0f, 0f, 11.295425f, 11.683816f, 24.007742f, 7.880422f, "SaloonInterior");

	if (!VOLUME::DOES_VOLUME_EXIST(shLocal_263))
		shLocal_263 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-312.9856f, 808.8508f, 117.9822f, 0f, 0f, 0f, 80f, 80f, 30f, "GJDespawn");

	return;
}

Volume func_80(Volume volParam0, char* sParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x3E44 Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_222(volumeCoords, volumeScale, sParam1, bParam2, eParam3, iParam4, bParam5, iParam6);
	return volume;
}

void func_81(var uParam0) // Position - 0x3E88 Hash - 0xF1BCCAC6 ^0x1CB2916A
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
	return;
}

void func_82(var uParam0, BOOL bParam1) // Position - 0x3ED7 Hash - 0x97140DD8 ^0xF9889272
{
	if (bParam1)
		func_71(&(uParam0->f_1), 16384);
	else
		func_70(&(uParam0->f_1), 16384);

	return;
}

void func_83(var uParam0, BOOL bParam1) // Position - 0x3EFD Hash - 0x97140DD8 ^0xBDBF7A5
{
	if (bParam1)
		func_71(&(uParam0->f_1), 2048);
	else
		func_70(&(uParam0->f_1), 2048);

	return;
}

void func_84(var uParam0, BOOL bParam1) // Position - 0x3F23 Hash - 0x97140DD8 ^0x96C23302
{
	if (bParam1)
		func_71(&(uParam0->f_1), 256);
	else
		func_70(&(uParam0->f_1), 256);

	return;
}

void func_85(BOOL bParam0, BOOL bParam1) // Position - 0x3F49 Hash - 0x57EE9974 ^0x57EE9974
{
	if (bParam1)
		func_70(bParam0, 4);
	else
		func_71(bParam0, 4);

	return;
}

void func_86(BOOL bParam0, BOOL bParam1) // Position - 0x3F67 Hash - 0x6E38DCCC ^0x27E8693B
{
	if (bParam1)
	{
		func_70(bParam0, 16);
	}
	else
	{
		func_71(bParam0, 67108864);
		func_71(bParam0, 16);
	}

	return;
}

void func_87(var uParam0, BOOL bParam1) // Position - 0x3F92 Hash - 0x32CE93C6 ^0x60BFF41C
{
	if (bParam1)
		func_71(&(uParam0->f_1), 128);
	else
		func_70(&(uParam0->f_1), 128);

	return;
}

void func_88(BOOL bParam0, BOOL bParam1) // Position - 0x3FB6 Hash - 0x9CA625A6 ^0xD96D8959
{
	if (bParam1)
		func_70(bParam0, 256);
	else
		func_71(bParam0, 256);

	return;
}

void func_89(BOOL bParam0, BOOL bParam1) // Position - 0x3FD8 Hash - 0x7BFDDC82 ^0x7BFDDC82
{
	if (bParam1)
		func_70(bParam0, 64);
	else
		func_71(bParam0, 64);

	return;
}

void func_90(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3FF8 Hash - 0x6B754978 ^0x43826DF8
{
	if (!bParam1)
		func_70(bParam0, 268435456);
	else
		func_71(bParam0, 268435456);

	if (!bParam2)
		func_70(bParam0, 1073741824);
	else
		func_71(bParam0, 1073741824);

	if (!bParam3)
		func_70(bParam0, 536870912);
	else
		func_71(bParam0, 536870912);

	return;
}

void func_91(var uParam0, BOOL bParam1) // Position - 0x405E Hash - 0x76250B73 ^0xFF9F293B
{
	if (bParam1)
		func_71(&(uParam0->f_1), 131072);
	else
		func_70(&(uParam0->f_1), 131072);

	return;
}

void func_92(BOOL bParam0, BOOL bParam1) // Position - 0x4086 Hash - 0xCB123803 ^0xCB123803
{
	if (bParam1)
		func_70(bParam0, 2);
	else
		func_71(bParam0, 2);

	return;
}

void func_93(var uParam0, BOOL bParam1) // Position - 0x40A4 Hash - 0xF7B0944E ^0xC84C2F80
{
	if (bParam1)
		func_71(&(uParam0->f_1), 2);
	else
		func_70(&(uParam0->f_1), 2);

	return;
}

void func_94(var uParam0, BOOL bParam1) // Position - 0x40C6 Hash - 0x6418D0A4 ^0x15BADFF8
{
	if (bParam1)
		func_71(&(uParam0->f_1), 8);
	else
		func_70(&(uParam0->f_1), 8);

	return;
}

void func_95(BOOL bParam0, BOOL bParam1) // Position - 0x40EA Hash - 0x3BE1C7D2 ^0x3BE1C7D2
{
	if (bParam1)
		func_70(bParam0, 128);
	else
		func_71(bParam0, 128);

	return;
}

void func_96(BOOL bParam0, BOOL bParam1) // Position - 0x410A Hash - 0x776268CE ^0x776268CE
{
	if (bParam1)
		func_70(bParam0, 8);
	else
		func_71(bParam0, 8);

	return;
}

void func_97(BOOL bParam0, BOOL bParam1) // Position - 0x412A Hash - 0x82AFDBEA ^0x82AFDBEA
{
	if (bParam1)
		func_70(bParam0, 32);
	else
		func_71(bParam0, 32);

	return;
}

void func_98(var uParam0, BOOL bParam1) // Position - 0x414A Hash - 0xB272A69C ^0x2A37F53B
{
	if (bParam1)
		func_71(&(uParam0->f_1), 4);
	else
		func_70(&(uParam0->f_1), 4);

	return;
}

void func_99(var uParam0, BOOL bParam1) // Position - 0x416C Hash - 0x97140DD8 ^0xA3B87048
{
	if (bParam1)
		func_71(&(uParam0->f_1), 1024);
	else
		func_70(&(uParam0->f_1), 1024);

	return;
}

void func_100(var uParam0, BOOL bParam1) // Position - 0x4192 Hash - 0x76250B73 ^0x1D0F495F
{
	if (bParam1)
		func_71(&(uParam0->f_1), 524288);
	else
		func_70(&(uParam0->f_1), 524288);

	return;
}

void func_101(BOOL bParam0, BOOL bParam1) // Position - 0x41BA Hash - 0xC16273CD ^0x19098BB1
{
	if (bParam1)
		func_70(bParam0, 1048576);
	else
		func_71(bParam0, 1048576);

	return;
}

void func_102(BOOL bParam0, BOOL bParam1) // Position - 0x41DE Hash - 0xC16273CD ^0x9BCFEF67
{
	if (bParam1)
		func_70(bParam0, 262144);
	else
		func_71(bParam0, 262144);

	return;
}

Vector3 func_103() // Position - 0x4202 Hash - 0x568CEC9B ^0x568CEC9B
{
	switch (iLocal_176)
	{
		case 0:
			return -312.9856f, 808.8508f, 117.9822f;
	
		case 1:
			return -304.86282f, 809.62573f, 118.56301f;
	
		default:
		
	}

	return -312.9856f, 808.8508f, 117.9822f;
}

BOOL func_104(var uParam0, ePedType eptParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, BOOL bParam7, BOOL bParam8) // Position - 0x4251 Hash - 0x59CDDA6C ^0xF1CC557D
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
	
		if (!bParam7)
			*uParam0 = func_223(eptParam1, uParam2, fParam5, false, true, iParam6, true, true, true, false, false, false, false);
		else
			*uParam0 = func_223(eptParam1, uParam2, fParam5, false, true, iParam6, true, true, bParam8, true, true, false, false);
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	if (PED::IS_PED_READY_TO_RENDER(*uParam0))
		return true;

	return false;
}

Vector3 func_105(Hash hParam0) // Position - 0x42C9 Hash - 0x5ED7EF8E ^0x5ED7EF8E
{
	switch (iLocal_176)
	{
		case 0:
			if (hParam0 == hLocal_18)
				return -304.9806f, 809.4712f, 118.7814f;
			else
				return -304.9761f, 809.6718f, 118.781f;
			break;
	
		case 1:
			if (hParam0 == hLocal_18)
				return -304.9806f, 809.4712f, 118.7814f;
			else
				return -304.9761f, 809.6718f, 118.781f;
			break;
	}

	return -304.9806f, 809.4712f, 118.7814f;
}

BOOL func_106(var uParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4) // Position - 0x4356 Hash - 0xB83681D5 ^0x2836D87A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(hParam1, vParam2, true, true, false, false, true);
		return 0;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	return 1;
}

BOOL func_107() // Position - 0x438F Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_172() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

void func_108(Ped pedParam0, Hash hParam1) // Position - 0x43B4 Hash - 0xEA1C858E ^0x104A13DC
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_224(pedParam0, hParam1))
		{
			if (func_225(pedParam0, hParam1))
			{
				if (func_226(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_227(pedParam0);
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

void func_109(Ped pedParam0, int iParam1) // Position - 0x445E Hash - 0x7ABCCF64 ^0x500D550C
{
	float num;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		num = ((BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(pedParam0)) - 100f) / (BUILTIN::TO_FLOAT(PED::GET_PED_MAX_HEALTH(pedParam0)) - 100f)) * 100f;
		PED::SET_PED_MAX_HEALTH(pedParam0, iParam1);
		ENTITY::SET_ENTITY_HEALTH(pedParam0, BUILTIN::ROUND(((num / 100f) * (BUILTIN::TO_FLOAT(PED::GET_PED_MAX_HEALTH(pedParam0)) - 100f)) + 100f), 0);
	}

	return;
}

void func_110(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x44CB Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_228(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

void func_111(Ped pedParam0, int iParam1) // Position - 0x4528 Hash - 0x729F5BA5 ^0xAF9B9051
{
	if (!(iParam1 > -1 && iParam1 <= 29))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	DECORATOR::DECOR_SET_BOOL(pedParam0, "bIsSpecialPed", true);
	DECORATOR::DECOR_SET_INT(pedParam0, "iSpecialPedID", iParam1);
	Global_1396257[iParam1 /*638*/].f_636 = pedParam0;
	return;
}

void func_112(Ped pedParam0) // Position - 0x4579 Hash - 0xC55A8463 ^0xB5FECE6A
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);
	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
	return;
}

void func_113() // Position - 0x45A4 Hash - 0x60DE4BA3 ^0xF2472D79
{
	char* str;
	int num;

	str = func_229(&num);
	func_231(&uLocal_140[0 /*17*/], "INTERACT_GREET", func_230(), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, true, 0);
	func_231(&uLocal_140[1 /*17*/], "INTERACT_INSULT", str, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, true, num);
	func_232(pedLocal_255, &uLocal_140, 8f, 2, 0, 0, false, false, false);
	func_177(&uLocal_140[0 /*17*/], false, false);
	func_177(&uLocal_140[1 /*17*/], false, false);
	PED::SET_PED_CONFIG_FLAG(pedLocal_255, 297, true);
	return;
}

BOOL func_114(int iParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x461C Hash - 0xE60C24AE ^0x89E35AED
{
	if (bParam3)
		if (func_233())
			return true;

	if (!PED::IS_PED_INJURED(pedParam1))
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam1, true, false)) < 18f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedParam1))
			return false;

	if (bParam2)
		if (func_137(0) == 7 || func_234())
			return true;

	if (func_148(&(Global_1396257[iParam0 /*638*/].f_626), 1024))
		return true;

	return false;
}

BOOL func_115(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x46A0 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_235())
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
		num = func_236(Global_1898164.f_1[0 /*5*/]);
	
		if (func_237(num) && func_238(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_129(Global_1898164.f_1[0 /*5*/]))
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

void func_116(var uParam0) // Position - 0x48A4 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_44(uParam0, 0f);
	return;
}

float func_117(var uParam0) // Position - 0x48B3 Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_43(uParam0))
		return 0f;

	if (func_153(uParam0))
		return uParam0->f_2;

	return func_150() - uParam0->f_1;
}

BOOL func_118(int iParam0) // Position - 0x48E5 Hash - 0x597C570A ^0x8BBF9921
{
	switch (iLocal_177)
	{
		case 0:
			if (Global_1935183.f_29 != 4 && TASK::_PED_IS_IN_SCENARIO_BASE(pedLocal_255))
			{
				PED::_GIVE_PED_HASH_COMMAND(pedLocal_255, MISC::GET_HASH_KEY(func_239(iParam0)), 5f);
				Global_1935183.f_29 = 3;
				iLocal_177 = 1;
			}
			break;
	
		case 1:
			if (!TASK::_PED_IS_IN_SCENARIO_BASE(pedLocal_255))
				iLocal_177 = 2;
			break;
	
		case 2:
			func_240();
		
			if (iLocal_187 == 0)
				if (iLocal_192 < 2)
					if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(func_241(iParam0)))
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_241(iParam0)) == iLocal_192)
							if (func_242(&pedLocal_255, 249295937))
								iLocal_192 = iLocal_192 + 1;
		
			if (TASK::IS_PED_SCENARIO_REACT_LOOKING(pedLocal_255, true))
			{
				func_63();
				return true;
			}
		
			if (TASK::_PED_IS_IN_SCENARIO_BASE(pedLocal_255))
				return true;
			break;
	}

	return false;
}

BOOL func_119(var uParam0, float fParam1) // Position - 0x49AF Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_43(uParam0))
		return false;

	if (func_45(uParam0) > fParam1)
		return true;

	return false;
}

void func_120() // Position - 0x49D6 Hash - 0xB762422D ^0xB762422D
{
	func_94(&uLocal_205, false);
	func_99(&uLocal_205, false);
	func_86(&uLocal_205, false);
	func_83(&uLocal_205, false);
	func_88(&uLocal_205, true);
	return;
}

void func_121(Entity eParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4A01 Hash - 0xC4F231CE ^0xB86F5EAB
{
	if (!ENTITY::IS_ENTITY_DEAD(eParam0))
		if (ENTITY::IS_ENTITY_ATTACHED(eParam0))
			ENTITY::DETACH_ENTITY(eParam0, bParam1, bParam2);

	return;
}

void func_122(Ped pedParam0, Volume volParam1) // Position - 0x4A26 Hash - 0x9151FE2B ^0x601E4183
{
	if (func_243(pedParam0))
		if (func_244(Global_35, volParam1, 0, true))
			LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), joaat("crime_loitering"), 0, 0, -1);

	return;
}

BOOL func_123(char* sParam0) // Position - 0x4A55 Hash - 0xBC664662 ^0xFE300BBD
{
	var unk;
	BOOL flag;

	if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_255))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 24);
		flag = func_245(&uLocal_21, unk, false, -1, false, false);
		return flag;
	}

	return false;
}

char* func_124() // Position - 0x4A83 Hash - 0xCDE6966F ^0xF2E69143
{
	switch (iLocal_176)
	{
		case 0:
			return "P21_Exit_Fight01_JON";
	
		case 1:
			if (!func_8(iLocal_182, 8192))
				return "P20_Exit_Fight02_JON";
			else
				return "P20_Exit_Fight01_JON";
			break;
	}

	return "INVALID";
}

BOOL func_125() // Position - 0x4ACE Hash - 0xB6A93239 ^0x177AD953
{
	float num;

	num = func_176(Global_35, func_103(), true);

	if (num > 25f && num > fLocal_204 + 10f && !AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_255) && !AUDIO::_IS_PED_IN_ANY_CONVERSATION(pedLocal_255, false))
		return true;

	return false;
}

BOOL func_126(Ped pedParam0, Ped pedParam1) // Position - 0x4B1D Hash - 0x5DCAC1AA ^0x6DF2DABC
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
			return ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true);

	return false;
}

char* func_127(BOOL bParam0) // Position - 0x4B47 Hash - 0x3C4C182E ^0xC4A3F316
{
	switch (iLocal_176)
	{
		case 0:
			return "SPGJ_BR20_EF";
	
		case 1:
			if (func_8(iLocal_182, 8192))
				if (!bParam0)
					return "SPGJ_TB20A";
				else
					return "SPGJ_TB20B";
			else
				return "SPGJ_TB20_EF";
			break;
	}

	return "INVALID";
}

BOOL func_128(Ped pedParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5) // Position - 0x4BA1 Hash - 0xD4245E94 ^0x509FEED0
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_3 = iParam2;
	str.f_6 = iParam5;
	str.f_1 = sParam4;
	str.f_4 = iParam3;
	return func_178(pedParam0, &str);
}

BOOL func_129(int iParam0) // Position - 0x4BDC Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_130(int iParam0, BOOL bParam1) // Position - 0x4C0F Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = bParam1;
	return;
}

void func_131(int iParam0, BOOL bParam1) // Position - 0x4C2F Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = bParam1;
	return;
}

void func_132(Blip* pblParam0) // Position - 0x4C4F Hash - 0xB0965077 ^0xCF35C455
{
	if (MAP::DOES_BLIP_EXIST(*pblParam0))
		MAP::REMOVE_BLIP(pblParam0);

	return;
}

void func_133(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x4C67 Hash - 0x303BFB8D ^0xBCF80455
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
		
			if (func_247(vector, uParam0, 2f, true))
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

void func_134(BOOL bParam0, int iParam1) // Position - 0x4CEB Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_248(&Global_0, 8);

	if (!func_249() || func_172() != -1)
		return;

	func_248(&Global_0, 1);
	return;
}

void func_135() // Position - 0x4D31 Hash - 0xE82A0A6C ^0x6E3F27D3
{
	AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
	return;
}

BOOL func_136(int iParam0) // Position - 0x4D40 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

int func_137(int iParam0) // Position - 0x4D56 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

BOOL func_138(int iParam0, int iParam1) // Position - 0x4D6A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_139(eStackSize essParam0) // Position - 0x4D79 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

BOOL func_140(eStackSize essParam0) // Position - 0x4D8C Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(essParam0 > -1 && essParam0 <= 80))
		return false;

	return func_250(Global_1835011[essParam0 /*74*/].f_1);
}

BOOL func_141(eStackSize essParam0) // Position - 0x4DB8 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(essParam0 > -1 && essParam0 <= 80))
		return false;

	return func_251(Global_1835011[essParam0 /*74*/].f_1);
}

BOOL func_142(int iParam0) // Position - 0x4DE4 Hash - 0x1EF5D3F8 ^0x1EF5D3F8
{
	int num;

	num = func_252();

	switch (iParam0)
	{
		case 0:
			switch (num)
			{
				case joaat("highpressure"):
				case joaat("SUNNY"):
					return true;
			
				default:
					return false;
			}
			break;
	
		case 1:
			switch (num)
			{
				case joaat("OVERCAST"):
				case joaat("highpressure"):
				case joaat("overcastdark"):
				case joaat("clouds"):
				case joaat("SUNNY"):
					return true;
			
				default:
					return false;
			}
			break;
	
		case 2:
			switch (num)
			{
				case joaat("DRIZZLE"):
				case joaat("OVERCAST"):
				case joaat("Fog"):
				case joaat("highpressure"):
				case joaat("overcastdark"):
				case joaat("SNOWLIGHT"):
				case joaat("clouds"):
				case joaat("Misty"):
				case joaat("SUNNY"):
				case joaat("snowclearing"):
					return true;
			
				default:
					return false;
			}
			break;
	
		case 3:
			switch (num)
			{
				case joaat("DRIZZLE"):
				case joaat("THUNDER"):
				case joaat("OVERCAST"):
				case joaat("Fog"):
				case joaat("Shower"):
				case joaat("snow"):
				case joaat("highpressure"):
				case joaat("sleet"):
				case joaat("overcastdark"):
				case joaat("clouds"):
				case joaat("rain"):
				case joaat("Misty"):
				case joaat("SUNNY"):
				case joaat("snowclearing"):
					return true;
			
				default:
					return false;
			}
			break;
	
		case 4:
			return true;
	
		case 5:
			switch (num)
			{
				case joaat("Fog"):
				case joaat("Misty"):
					return true;
			}
			break;
	}

	return false;
}

int func_143(var uParam0, var uParam1, float fParam2, float fParam3) // Position - 0x4F62 Hash - 0xEC5EE76 ^0xF05CBEF1
{
	var entityForwardVector;
	var unk3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	unk3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + (entityForwardVector * { fParam2, fParam2, fParam2 }) };

	if (func_253(uParam1, unk3, fParam3))
		return 1;

	return 0;
}

int func_144(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5) // Position - 0x4FAE Hash - 0x6D0071AD ^0xDBED4C65
{
	float scaleX;
	Ped ped;
	var entityForwardVector;
	Vector3 vector;
	var entityCoords;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1);
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam1);
			VOLUME::DELETE_VOLUME(*uParam1);
		}
	
		return 0;
	}

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vector = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + (entityForwardVector * { fParam3, fParam3, fParam3 }) };

	if (!func_254(uParam2, &ped, vector, fParam3, fParam4))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1);
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam1);
			VOLUME::DELETE_VOLUME(*uParam1);
		}
	
		return 0;
	}
	else
	{
		if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			scaleX = fParam4 + 1f;
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vector, 0f, 0f, 0f, scaleX, scaleX, scaleX, "SPDClearWagonsMount");
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	
		if (!func_255(ped, false))
			func_256(&ped, entityCoords, 1083179008);
	
		return 1;
	}

	return 0;
}

int func_145(var uParam0) // Position - 0x50B6 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_43(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_153(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_199() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

BOOL func_146() // Position - 0x5109 Hash - 0x4228A1C2 ^0x341213A7
{
	return Global_1392040.f_6;
}

BOOL func_147() // Position - 0x5117 Hash - 0xD6D2CD3 ^0x182E32DD
{
	if (Global_1914319.f_18941.f_17)
		return true;

	return false;
}

BOOL func_148(BOOL bParam0, int iParam1) // Position - 0x5130 Hash - 0x320397CF ^0x320397CF
{
	return func_51(*bParam0, iParam1);
}

BOOL func_149(int iParam0, int iParam1) // Position - 0x5141 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

float func_150() // Position - 0x5150 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_151(var uParam0, int iParam1) // Position - 0x5182 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_152(var uParam0, int iParam1) // Position - 0x5193 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_153(var uParam0) // Position - 0x51A8 Hash - 0x39705408 ^0x39705408
{
	return func_149(*uParam0, 2);
}

var func_154(BOOL bParam0, var uParam1, var uParam2) // Position - 0x51B8 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_155(Ped pedParam0, int* piParam1, var uParam2) // Position - 0x51CF Hash - 0x84A3184B ^0x2FCA8561
{
	if (piParam1->f_11 != 0)
	{
		if (func_257(pedParam0, piParam1))
		{
			if (!func_51(piParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(pedParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 178, true);
				func_166(uParam2, 0, false, true, false);
				func_70(&(piParam1->f_10), 1);
			}
		
			return true;
		}
		else if (func_51(piParam1->f_10, 1))
		{
			func_258(uParam2);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 178, false);
			func_71(&(piParam1->f_10), 1);
		}
	}

	return false;
}

BOOL func_156(var uParam0, int* piParam1, var uParam2, float fParam3, BOOL bParam4, char* sParam5, Hash hParam6, int iParam7) // Position - 0x5279 Hash - 0x95336F37 ^0x42E85BA7
{
	var text;
	BOOL flag;
	Prompt prompt;
	int num;
	BOOL flag2;
	int num2;

	if (iParam7 > fParam3 + 5f)
		return false;

	TEXT_LABEL_ASSIGN_STRING(&text, sParam5, 32);

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		flag = func_51(bParam4, 32);
		func_209(piParam1, uParam2, false);
		prompt = func_259(*uParam0, piParam1, uParam2, fParam3, flag);
	
		if (flag)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
	
		func_166(uParam2, 0, false, true, false);
		num = 0;
	
		if (!func_51(bParam4, 16))
			num = num | 8;
	
		if (func_51(bParam4, 2048))
			num = num | 4;
	
		if (func_51(bParam4, 32768))
			num = num | 128;
	
		if (func_51(bParam4, 4096))
			num = num | 16;
	
		if (func_51(bParam4, 8388608) || func_51(bParam4, 8192))
			num = num | 256;
	
		if (func_51(bParam4, 4194304))
			num = num | 64;
	
		if (func_51(bParam4, 268435456))
			num = num | 8192;
	
		if (func_158(piParam1, 4))
		{
			num = num | 1024;
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
	
		if (!func_158(piParam1, 26))
			num = num | 32768;
	
		if (func_51(bParam4, 67108864))
			num = num | 16384;
	
		if (piParam1->f_6 < -1 || piParam1->f_6 > -1 && piParam1->f_6 > 3)
			piParam1->f_6 = -1;
	
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam0, &text, fParam3, fParam3, num, piParam1->f_7, piParam1->f_8, prompt, false, piParam1->f_6))
		{
			if (hParam6 == 2)
				hParam6 = func_260(uParam0);
		
			if (hParam6 != 2)
				flag2 = true;
		
			if (!flag2)
			{
				switch (hParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&text))
							hParam6 = MISC::GET_HASH_KEY(&text);
						break;
				}
			
				if (hParam6 != 2)
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, hParam6);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && hParam6 == 2)
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				else if (hParam6 != 2)
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, hParam6);
			}
		
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
		
			if (func_51(bParam4, 268435456))
			{
				num2 = func_261(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
			
				if (num2 > -1)
					func_262(piParam1, &uParam2->[num2 /*17*/]);
			}
		
			if (func_158(piParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
		
			if (func_51(bParam4, 2) || func_51(bParam4, 16))
				func_157(*uParam0, true, true);
			else
				func_157(*uParam0, false, true);
		
			return true;
		}
	}

	return false;
}

void func_157(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x556A Hash - 0x61822EFB ^0x98C55DC1
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
		PED::SET_PED_CONFIG_FLAG(pedParam0, 317, bParam1);

	return;
}

BOOL func_158(int* piParam0, int iParam1) // Position - 0x5590 Hash - 0x5B2730C0 ^0x9239CD27
{
	return MISC::IS_BIT_SET(*piParam0, iParam1);
}

BOOL func_159(var uParam0, BOOL bParam1, Volume volParam2, BOOL bParam3) // Position - 0x55A1 Hash - 0x89673EF ^0xD8D31C9
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	flag = !VOLUME::DOES_VOLUME_EXIST(volParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volParam2, true, 0);
	flag2 = bParam1 & 32 != 0;
	flag3 = bParam1 & 65792 != 0;
	flag4 = bParam1 & 1179648 != 0;

	if (flag)
	{
		if (flag2)
			return true;
	
		if (func_263(*uParam0, bParam3, flag3, flag4))
			return true;
	}

	return false;
}

void func_160(var uParam0, BOOL bParam1, int* piParam2, float fParam3, var uParam4, BOOL bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, BOOL bParam10, Volume volParam11, int iParam12, int iParam13, BOOL bParam14) // Position - 0x5605 Hash - 0x3FED85C6 ^0x1A53C527
{
	int i;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*piParam2, 1))
		{
			if (bParam14)
			{
				for (i = 0; i < *uParam4; i = i + 1)
				{
					MISC::SET_BIT(&uParam4->[i /*17*/], 14);
				}
			}
		
			func_232(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_51(bParam10, 32), true, false);
			MISC::SET_BIT(piParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*piParam2, 1))
	{
		MISC::CLEAR_BIT(piParam2, 1);
	}

	return;
}

void func_161(BOOL bParam0) // Position - 0x567A Hash - 0x5A9B862A ^0x7ECCD484
{
	if (func_51(bParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_ATTACK2"), true);
	}

	if (func_51(bParam0, 16384))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_RELOAD"), false);

	if (func_51(bParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_GRAPPLE"), false);
	}

	return;
}

BOOL func_162(var uParam0, int* piParam1, int iParam2, float fParam3, var uParam4, BOOL bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, BOOL bParam10, Volume volParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0x5727 Hash - 0x25A0EB38 ^0x81C1ECF6
{
	int i;
	int num;
	BOOL isBitSet;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL isPedOnFoot;
	BOOL isPedInjured;
	BOOL flag7;
	float num2;

	num = func_264(1);
	isBitSet = MISC::IS_BIT_SET(*piParam1, 2);
	flag = false;
	flag2 = false;
	flag3 = false;
	flag4 = bParam10 & 128 != 0;
	flag5 = bParam10 & 64 != 0;
	flag6 = bParam10 & 512 != 0;
	isPedOnFoot = PED::IS_PED_ON_FOOT(Global_35);
	isPedInjured = PED::IS_PED_INJURED(*uParam0);
	flag7 = PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_265(Global_35) || func_266(Global_35) || func_267(Global_35);
	num2 = -1f;

	if (func_43(&(piParam1->f_13)))
		num2 = func_45(&(piParam1->f_13));

	for (i = 0; i < *uParam4; i = i + 1)
	{
		if (uParam4->[i /*17*/].f_8 != iParam12)
			iParam12 = uParam4->[i /*17*/].f_8;
	
		flag2 = func_268(uParam4->[i /*17*/].f_6);
		func_269(*uParam0, &uParam4->[i /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
	
		if (MISC::IS_BIT_SET(uParam4->[i /*17*/], 20))
			flag = true;
	
		if (func_270(*uParam0, piParam1, &uParam4->[i /*17*/], flag2, fParam3, iParam2, iParam7, iParam8, bParam14, bParam16, bParam17, isPedOnFoot, isPedInjured, bParam15, num2, flag7, num))
		{
			if (!bParam18 && !flag3)
			{
				if (func_271(iParam12, uParam4->[i /*17*/].f_6))
				{
					if (!flag5)
						func_166(uParam4, 0, false, true, bParam5);
				
					if (flag4)
						func_272(uParam4, false, false);
				
					if (MISC::IS_BIT_SET(uParam4->[i /*17*/], 11))
						func_209(piParam1, uParam4, MISC::IS_BIT_SET(*piParam1, 6));
				
					piParam1->f_1 = i;
					flag3 = true;
					piParam1->f_9 = MISC::IS_BIT_SET(uParam4->[piParam1->f_1 /*17*/], 16);
				
					if (!piParam1->f_9)
						MISC::SET_BIT(piParam1, 0);
				
					if (!isBitSet)
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam4->[i /*17*/].f_11))
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam4->[i /*17*/].f_12))
								TASK::TASK_PLAY_ANIM(Global_35, uParam4->[i /*17*/].f_11, uParam4->[i /*17*/].f_12, 4f, -4f, -1, 67108880, 0, false, 0, false, 0, false);
				
					if (func_273(piParam1, fParam6, piParam1->f_9))
					{
						func_116(&(piParam1->f_18));
					
						if (flag4)
							func_272(uParam4, false, false);
					
						piParam1->f_2 = 2;
					}
				
					if (piParam1->f_2 != 2)
						if (piParam1->f_2 != 3)
							if (flag6)
								piParam1->f_2 = 0;
				
					if (!bParam14)
						flag3 = true;
				}
			}
		}
	}

	if (flag)
		func_274(piParam1, iParam2);

	return flag3;
}

void func_163(var uParam0) // Position - 0x597F Hash - 0x14F6CB16 ^0xBB9D41ED
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (MISC::IS_BIT_SET(uParam0->[i /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0->[i /*17*/], 21))
			{
				MISC::CLEAR_BIT(&uParam0->[i /*17*/], 20);
				MISC::CLEAR_BIT(&uParam0->[i /*17*/], 21);
			}
		}
	}

	return;
}

void func_164(int* piParam0, var uParam1, int iParam2) // Position - 0x59D2 Hash - 0x9063AD98 ^0x85323D11
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (func_275(&uParam1->[i /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1->[i /*17*/], 20))
			{
				func_274(piParam0, iParam2);
				return;
			}
		}
	}

	return;
}

BOOL func_165(Ped pedParam0, int* piParam1, var uParam2) // Position - 0x5A15 Hash - 0xEB1F3A6C ^0xB0CA3802
{
	if (piParam1->f_3 > -1 && piParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_276(pedParam0))
			{
				piParam1->f_1 = piParam1->f_3;
				func_277(piParam1, 0);
				func_209(piParam1, uParam2, func_158(piParam1, 6));
				return true;
			}
		}
	}

	return false;
}

void func_166(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5A6D Hash - 0x5EBCB35A ^0x47D35D05
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (bParam3)
		{
			if (func_268(uParam0->[i /*17*/].f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0->[i /*17*/], 11))
				{
				}
				else
				{
					func_278(&(uParam0->[i /*17*/].f_6), true, true);
				
					if (bParam2)
					{
						uParam0->[i /*17*/].f_7 = 0;
						uParam0->[i /*17*/] = 0;
						uParam0->[i /*17*/].f_5 = "";
						uParam0->[i /*17*/].f_14 = 0;
						uParam0->[i /*17*/].f_13 = "";
						uParam0->[i /*17*/].f_15 = 0;
						uParam0->[i /*17*/].f_11 = "";
						uParam0->[i /*17*/].f_12 = "";
					}
				}
			}
		}
	
		if (bParam2)
		{
			uParam0->[i /*17*/].f_7 = 0;
			uParam0->[i /*17*/] = 0;
			uParam0->[i /*17*/].f_5 = "";
			uParam0->[i /*17*/].f_14 = 0;
			uParam0->[i /*17*/].f_13 = "";
			uParam0->[i /*17*/].f_15 = 0;
			uParam0->[i /*17*/].f_11 = "";
			uParam0->[i /*17*/].f_12 = "";
		}
	}

	return;
}

BOOL func_167(var uParam0, int* piParam1, float fParam2, BOOL bParam3) // Position - 0x5B1C Hash - 0x384F04E1 ^0xEB00389B
{
	if (piParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
			return false;
	
		piParam1->f_9 = 0;
		MISC::SET_BIT(piParam1, 0);
	
		if (fParam2 > 0f)
		{
			func_116(&(piParam1->f_18));
			return false;
		}
		else if (func_43(&(piParam1->f_18)))
		{
			func_48(&(piParam1->f_18));
			return false;
		}
	}

	if (!func_43(&(piParam1->f_18)))
		return true;

	if (fParam2 > 0f && bParam3)
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
			return false;

	return func_279(&(piParam1->f_18), fParam2);
}

void func_168(Player plParam0, int* piParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x5BC6 Hash - 0x415C2438 ^0x87B17E4A
{
	int num;

	if (piParam1->f_5 < 0 || piParam1->f_5 > *uParam2 - 1)
		piParam1->f_5 = 0;

	num = piParam1->f_5;
	func_269(plParam0, &uParam2->[num /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	piParam1->f_5 = piParam1->f_5 + 1;
	return;
}

void func_169(int* piParam0, int iParam1) // Position - 0x5C12 Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

int func_170(int* piParam0) // Position - 0x5C22 Hash - 0x9D272BC9 ^0x9C060578
{
	if (func_158(piParam0, 0))
	{
		if (func_280(piParam0))
		{
			func_169(piParam0, 0);
			return piParam0->f_1;
		}
	}

	return -1;
}

BOOL func_171(Ped pedParam0, Ped pedParam1, const char* sParam2, char* sParam3, int iParam4, var uParam5, BOOL bParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10, int iParam11, BOOL bParam12, BOOL bParam13, int iParam14) // Position - 0x5C4C Hash - 0x943CD13D ^0x943CD13D
{
	return func_281(pedParam0, pedParam1, sParam2, sParam3, iParam4, uParam5, bParam6, iParam7, iParam8, bParam9, bParam10, iParam11, false, bParam12, bParam13, iParam14) >= 0;
}

BOOL func_172() // Position - 0x5C79 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_173(int iParam0, var uParam1, var uParam2) // Position - 0x5C87 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_174(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x5CA3 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_282(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_283(iParam0))
		return false;

	if (func_284(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_285(iParam0, 1) || func_286(32768))
		if (!func_285(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_287())
		return false;

	return true;
}

void func_175(int iParam0, int iParam1) // Position - 0x5D45 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

float func_176(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x5D69 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_177(int* piParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5D91 Hash - 0xAC8CE43 ^0x1A2D07F
{
	if (bParam1 && !func_288(piParam0, 13))
		func_289(piParam0, 0);
	else
		func_290(piParam0, 0);

	if (func_268(piParam0->f_6))
		if (bParam2)
			func_278(&(piParam0->f_6), false, true);

	return;
}

BOOL func_178(Ped pedParam0, Any* panParam1) // Position - 0x5DD7 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

void func_179(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x5DE7 Hash - 0x37D64B11 ^0xE7060A9E
{
	func_291(iParam2);

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
		bParam0->f_10 = 0;

	bParam0->f_5 = iParam2;

	if (Global_1572887.f_12 == -1)
		bParam0->f_13 = Global_1935630.f_44;
	else
		bParam0->f_13 = func_292(0);

	switch (bParam0->f_6)
	{
		case 0:
			if (*bParam0 & 16 != 0)
				if (!(*bParam0 & 33554432 != 0))
					if (bParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_70(bParam0, 33554432);
					else if (!(*bParam0 & 8192 != 0))
						if (func_293(true))
							func_70(bParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_293(true) || *bParam0 & 8192 != 0)
					func_71(bParam0, 33554432);
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	if (!(bParam0->f_1 & 1024 != 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(bParam0->f_14))
		{
			if (func_294(bParam0))
				bParam0->f_15 = func_199();
		}
		else if (bParam0->f_15 > 0)
		{
			if (func_199() - bParam0->f_15 > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(bParam0->f_14))
				{
					bParam0->f_14 = 0;
					bParam0->f_15 = 0;
				}
			}
		}
	}

	bParam0->f_6 = bParam0->f_6 + 1;

	if (bParam0->f_6 >= 4)
	{
		bParam0->f_6 = 0;
		bParam0->f_7 = bParam0->f_7 + 1;
	
		if (bParam0->f_7 > 4)
			bParam0->f_7 = 0;
	}

	func_295(bParam0);
	return;
}

BOOL func_180(Ped pedParam0, BOOL bParam1) // Position - 0x5FB2 Hash - 0x3A755B4E ^0xDBAC23C2
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
		
			if (!func_296(pedParam0, bParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_297(pedParam0, pedIndexFromEntityIndex) <= func_298(bParam1))
				return true;
			break;
	}

	return false;
}

void func_181(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x608A Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		bParam1->f_10 = pedParam0;

	if (func_299(iParam2, 1, 1, 1, 0))
		func_70(bParam1, 2048);

	bParam1->f_16 = iParam2;
	func_300(bParam1, true);
	func_301();
	return;
}

BOOL func_182(Ped pedParam0, BOOL bParam1) // Position - 0x60C7 Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_302(pedParam0, !(*bParam1 & 268435456 != 0), !(*bParam1 & 536870912 != 0), !(*bParam1 & 1073741824 != 0), 0, false))
		{
			if (bParam1->f_12 < 5f)
				num = 95f;
			else if (bParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_303(bParam1);
		
			if (func_304(bParam1, pedParam0, num, num2))
			{
				if (bParam1->f_2 == 0)
					bParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - bParam1->f_2;
				num4 = func_305(bParam1);
			
				if (bParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_300(bParam1, true);
						return true;
					}
					else if (bParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_300(bParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_183(Ped pedParam0, Entity eParam1, BOOL bParam2) // Position - 0x61AE Hash - 0x899101A2 ^0xBCA80002
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

	if (func_306(eParam1, !(*bParam2 & 268435456 != 0), !(*bParam2 & 536870912 != 0), !(*bParam2 & 1073741824 != 0), 0))
	{
		if (bParam2->f_12 < 5f)
			num = 95f;
		else if (bParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_303(bParam2);
	
		if (func_304(bParam2, pedParam0, num, num2))
		{
			if (bParam2->f_2 == 0)
				bParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (bParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - bParam2->f_2 > func_305(bParam2))
				{
					func_300(bParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_184(Ped pedParam0, BOOL bParam1) // Position - 0x6284 Hash - 0xC62373A5 ^0xD1ADE674
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

	if (func_296(pedParam0, bParam1, pedIndexFromEntityIndex))
	{
		if (bParam1->f_3 == 0)
		{
			bParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - bParam1->f_3 > func_305(bParam1))
		{
			customDistance = func_303(bParam1);
		
			if (bParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_185(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x638D Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_307(bParam1, bParam2, bParam3);

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

BOOL func_186(BOOL bParam0, int iParam1) // Position - 0x64C2 Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (bParam0->f_8 <= 0)
		return true;

	num = func_199();
	num2 = num - bParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_187(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x64F9 Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_308(bParam2);
		
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
			if (func_195(bParam2, pedParam1))
			{
				func_300(bParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_188(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x6600 Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (bParam2->f_12 < (float)func_309(bParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_195(bParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_300(bParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_189(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x666B Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_310(bParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, bParam2->f_22))
				{
					func_300(bParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, bParam2->f_27))
				{
					func_300(bParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, bParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), bParam2->f_26, &outCoords, false, false);
				
					if (func_311(pedParam1, entityCoords, outCoords))
					{
						func_300(bParam2, true);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, bParam2->f_22))
				{
					func_300(bParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, bParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), bParam2->f_26, &outCoords2, false, false);
				
					if (func_311(pedParam1, entityCoords, outCoords2))
					{
						func_300(bParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_190(Ped pedParam0, BOOL bParam1) // Position - 0x67B3 Hash - 0xEB9C0B04 ^0x4A60CD30
{
	int i;
	float num;
	var unk;
	Vector3 entityCoords;
	BOOL flag;
	BOOL flag2;

	unk = 2;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	flag = *bParam1 & 4096 != 0;

	for (i = 0; i < Global_1935630.f_39; i = i + 1)
	{
		if (!func_296(pedParam0, bParam1, Global_1935630.f_34[i]) || pedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_312(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_313(Global_1935630.f_34[i]))
			{
				if (num < 35f)
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") || DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB"))
					{
						unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
						unk[1 /*3*/] = { entityCoords };
						bParam1->f_10 = pedParam0;
						return true;
					}
				}
			}
		
			if (func_314(bParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				bParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_315(bParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				bParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_316(bParam1, pedParam0, num, i))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				bParam1->f_10 = pedParam0;
				return true;
			}
		}
	}

	return false;
}

BOOL func_191(var uParam0, BOOL bParam1) // Position - 0x6993 Hash - 0xF223CED2 ^0xA472D0A4
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

BOOL func_192(BOOL bParam0, int iParam1) // Position - 0x6A0B Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (bParam0->f_8 <= 0)
		return true;

	num = func_199();
	num2 = num - bParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_193(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6A3A Hash - 0x8119700D ^0x42D5A76B
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
		if (func_317(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_318(entity2, pedParam0))
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

int func_194(BOOL bParam0, Ped pedParam1) // Position - 0x6BC0 Hash - 0x42A83B1F ^0xAA273625
{
	int _int;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam1, "iDamageFrame"))
		return 1;

	_int = DECORATOR::DECOR_GET_INT(pedParam1, "iDamageFrame");

	if (_int < 0)
		DECORATOR::DECOR_SET_INT(pedParam1, "iDamageFrame", bParam0->f_5);
	else if (bParam0->f_5 > _int + 10)
		return 1;

	return 0;
}

BOOL func_195(BOOL bParam0, Ped pedParam1) // Position - 0x6C10 Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_319(bParam0))
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

BOOL func_196(Ped pedParam0, Ped pedParam1) // Position - 0x6CAD Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_37(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_197() // Position - 0x6CFA Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_198(BOOL bParam0, Ped pedParam1) // Position - 0x6D02 Hash - 0x6BE02E92 ^0x188EF1A2
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
	
		if (func_320(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			bParam0->f_9 = func_199();
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
						if (func_176(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								bParam0->f_9 = func_199();
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

int func_199() // Position - 0x6DC3 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_200() // Position - 0x6DE1 Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_199() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_201(BOOL bParam0, Ped pedParam1) // Position - 0x6E2E Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_298(bParam0);

	if (bParam0->f_12 > func_321(bParam0) && bParam0->f_12 > num)
		return false;

	num3 = func_322(pedParam1);
	num2 = func_323(bParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (bParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, bParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, bParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, bParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_202(Ped pedParam0, Entity eParam1, BOOL bParam2) // Position - 0x6F4A Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (bParam2->f_12 > 4f)
		return false;

	flag = *bParam2 & 256 != 0;
	flag2 = *bParam2 & 524288 != 0;
	flag3 = *bParam2 & 128 != 0;
	return func_324(pedParam0, eParam1, flag, flag3, bParam2->f_12, flag2);
}

BOOL func_203(Ped pedParam0, BOOL bParam1) // Position - 0x6F92 Hash - 0x23BB3370 ^0x36BD6CCF
{
	Ped jackTarget;
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;

	if (*bParam1 & 67108864 != 0)
		return true;

	if (Global_1935630.f_24)
		return true;

	if (*bParam1 & 33554432 != 0)
	{
		if (func_325(pedParam0, bParam1, true))
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
					if (!func_326(bParam1, pedParam0))
						if (func_176(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_204(Ped pedParam0, BOOL bParam1) // Position - 0x71EB Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_327(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_205(BOOL bParam0, int iParam1) // Position - 0x7224 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (bParam0->f_8 <= 0)
		return true;

	num = func_199();
	num2 = num - bParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_206(var uParam0, BOOL bParam1) // Position - 0x7253 Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_207(Ped pedParam0, BOOL bParam1) // Position - 0x7267 Hash - 0xA06525EC ^0x3DA5C48E
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (bParam1->f_4 == 0)
		bParam1->f_4 = func_199();
	else if (func_199() - bParam1->f_4 > func_328(bParam1))
		return func_329(pedParam0, bParam1, false, -1082130432);

	return false;
}

BOOL func_208(BOOL bParam0, Ped pedParam1) // Position - 0x72B4 Hash - 0x2978E171 ^0xEA85F73B
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

void func_209(int* piParam0, var uParam1, BOOL bParam2) // Position - 0x7308 Hash - 0x6F91FC09 ^0xBA0ABE9A
{
	if (piParam0->f_3 > -1 && piParam0->f_3 < *uParam1)
	{
		func_278(&(uParam1->[piParam0->f_3 /*17*/].f_6), true, true);
	
		if (bParam2)
			func_330(piParam0, 0);
	}

	return;
}

struct<2> func_210(int iParam0) // Position - 0x7342 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_211(var uParam0, var uParam1) // Position - 0x7352 Hash - 0x3AAD93D4 ^0x6348F3E3
{
	int unk;

	STATS::STAT_ID_GET_INT(&uParam0, &unk);
	return unk;
}

void func_212(var uParam0, var uParam1, int iParam2) // Position - 0x7365 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_213(Hash hParam0) // Position - 0x7375 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_331(outSlotId);
}

int func_214(int iParam0, int iParam1) // Position - 0x7398 Hash - 0x9D981F95 ^0x9D981F95
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

Hash func_215(Hash hParam0) // Position - 0x7569 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_332(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_216() // Position - 0x7594 Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

BOOL func_217(int iParam0, int iParam1, int iParam2) // Position - 0x75AF Hash - 0x932A04D5 ^0x39A8988D
{
	return iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

BOOL func_218(int iParam0) // Position - 0x75D5 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_219(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x7613 Hash - 0x4E72835D ^0x57C5ACE0
{
	BOOL flag;
	int num;

	if (!func_333(iParam2))
		return -1;

	if (iParam0 < 0 || iParam0 > 511)
		return -1;

	if (iParam1 < 0 || iParam1 > 255)
		return -1;

	if (iParam3 < 0 || iParam3 > func_216())
		return -1;

	flag = func_217(iParam0, iParam1, iParam2);
	num = iParam3;
	func_334(num, 0);
	func_335(num, 0);
	func_131(num, false);
	func_130(num, false);
	func_336(num, flag);

	if (hParam4 != 0)
		func_337(num, hParam4);

	return num;
}

int func_220(int iParam0) // Position - 0x76B2 Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

int func_221(int iParam0) // Position - 0x76D1 Hash - 0xB1EC3C9 ^0x6FAB5D7B
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_4;

	return 0;
}

Volume func_222(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x76F0 Hash - 0xC1E3A062 ^0xD42263D3
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
		if (func_338(vParam0))
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

	func_339(volume, bParam8);
	return volume;
}

Ped func_223(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x77AA Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_340(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_224(Ped pedParam0, Hash hParam1) // Position - 0x77EC Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_225(Ped pedParam0, Hash hParam1) // Position - 0x781A Hash - 0xA54F3032 ^0x2EBB20C7
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

BOOL func_226(Ped pedParam0, Hash hParam1) // Position - 0x786B Hash - 0xA54F3032 ^0x2EBB20C7
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_224(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_227(Ped pedParam0) // Position - 0x78DD Hash - 0x446F1BDD ^0x29A382BD
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

BOOL func_228(var uParam0, Ped pedParam1, char* sParam2) // Position - 0x78FB Hash - 0xFB1C2C0E ^0x6794528D
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

char* func_229(var uParam0) // Position - 0x7979 Hash - 0x9AC286A2 ^0x2BADAA63
{
	if (func_341())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				*uParam0 = 1;
				return "INSULT_GRIZZLED_CONV_PART1";
		
			case 1:
				*uParam0 = 1;
				return "INSULT_GRIZZLED_CONV_PART3";
		
			case 2:
				*uParam0 = 2;
				return "INSULT_GRIZZLED_CONV_PART1";
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				*uParam0 = 16;
				return "INSULT_MALE_CONV_PART1";
		
			case 1:
				*uParam0 = 1;
				return "INSULT_MALE_CONV_PART1";
		
			case 2:
				*uParam0 = 15;
				return "INSULT_MALE_CONV_PART1";
		
			case 3:
				*uParam0 = 18;
				return "INSULT_MALE_CONV_PART1";
		
			case 4:
				*uParam0 = 19;
				return "INSULT_MALE_CONV_PART1";
		}
	}

	*uParam0 = 16;
	return "INSULT_MALE_CONV_PART1";
}

char* func_230() // Position - 0x7A50 Hash - 0x306ACA3A ^0xE6FB7C81
{
	return "GREET_GENERAL";
}

void func_231(int* piParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8) // Position - 0x7A5C Hash - 0x77C6B9D1 ^0xC3EDC08A
{
	piParam0->f_5 = sParam1;
	piParam0->f_7 = iParam3;
	piParam0->f_8 = iParam6;
	piParam0->f_13 = sParam2;
	piParam0->f_15 = iParam8;
	piParam0->f_11 = iParam4;
	piParam0->f_12 = iParam5;

	if (bParam7)
	{
		if (func_268(piParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*piParam0, 1))
				func_342(piParam0->f_6, piParam0->f_5, piParam0->f_14, false);
			else
				func_343(piParam0->f_6, piParam0->f_5, false);
		
			func_344(piParam0->f_6, false, true);
		}
		else
		{
			MISC::SET_BIT(piParam0, 14);
		}
	
		MISC::SET_BIT(piParam0, 0);
	}
	else
	{
		func_345(piParam0, piParam0->f_5);
	
		if (!MISC::IS_BIT_SET(*piParam0, 13))
			MISC::SET_BIT(piParam0, 0);
	}

	MISC::SET_BIT(piParam0, 15);
	return;
}

void func_232(Ped pedParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x7B0F Hash - 0x1F7F43A4 ^0x1F7F43A4
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		func_346(pedParam0, &uParam1->[i /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
	
		if (bParam8)
			MISC::CLEAR_BIT(&uParam1->[i /*17*/], 14);
	}

	return;
}

BOOL func_233() // Position - 0x7B54 Hash - 0xA61D3E25 ^0x23E9EDB4
{
	int i;

	if (func_172() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			for (i = 0; i < 10; i = i + 1)
			{
				if (Global_1392915[i /*12*/].f_1 != -1)
					if (func_250(Global_1392915[i /*12*/].f_4))
						return true;
			}
		}
	
		return false;
	}

	return false;
}

BOOL func_234() // Position - 0x7BA7 Hash - 0x8650DF77 ^0x8650DF77
{
	return Global_1310750.f_16077 != 0;
}

BOOL func_235() // Position - 0x7BB8 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_236(int iParam0) // Position - 0x7C0B Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_129(iParam0))
		return -1;

	return func_347(func_218(iParam0));
}

BOOL func_237(int iParam0) // Position - 0x7C2B Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_238(int iParam0, int iParam1) // Position - 0x7C41 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

char* func_239(int iParam0) // Position - 0x7C50 Hash - 0xF782200F ^0x33F46D19
{
	switch (iLocal_176)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "P10_Loop01_JON";
			
				case 1:
					return "P11_Loop01_JON";
			
				case 2:
					return "P12_Loop01_JON";
			
				case 3:
					return "P13_Loop01_JON";
			
				case 4:
					return "P14_Loop01_JON";
			
				case 5:
					return "P15_Loop01_JON";
			
				case 6:
					return "P16_Loop01_JON";
			
				case 7:
					return "P17_Loop01_JON";
			
				case 8:
					return "P18_Loop01_JON";
			
				case 9:
					return "P18_Loop02_JON";
			
				case 10:
					return "P18_Loop03_JON";
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					return "P1_Part01_JON";
			
				case 1:
					return "P1_Part02_JON";
			
				case 2:
					return "P2_Loop01_JON";
			
				case 3:
					return "P3_Loop01_JON";
			
				case 4:
					return "P4_Loop01_JON";
			
				case 5:
					return "P5_Loop01_JON";
			
				case 6:
					return "P6_Loop01_JON";
			
				case 7:
					return "P7_Part01_JON";
			
				case 8:
					return "P7_Part02_JON";
			
				case 9:
					return "P8_Loop01_JON";
			
				case 10:
					return "P19_Loop01_JON";
			
				case 11:
					return "P19_Loop02_JON";
			
				case 12:
					return "P19_Loop03_JON";
			
				case 13:
					return "P19_Loop04_JON";
			}
			break;
	}

	return "INVALID";
}

int func_240() // Position - 0x7E16 Hash - 0x5BE15D4 ^0x6E06EE2F
{
	int i;
	int num;
	char* str;
	int num2;

	if (!bLocal_180)
	{
		for (i = 0; i < 133; i = i + 1)
		{
			num = i;
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_255, func_348(num)))
			{
				iLocal_178 = num;
				bLocal_180 = true;
			}
		}
	}

	if (bLocal_180)
	{
		str = func_349(iLocal_178, &num2);
	
		if (func_350(str, num2))
		{
			bLocal_180 = false;
			return 1;
		}
	}

	return 0;
}

char* func_241(int iParam0) // Position - 0x7E73 Hash - 0xF782200F ^0xF2BFC829
{
	switch (iLocal_176)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "SPGJ_BRP10";
			
				case 1:
					return "SPGJ_BRP11";
			
				case 2:
					return "SPGJ_BRP12";
			
				case 3:
					return "SPGJ_BRP13";
			
				case 4:
					return "SPGJ_BRP14";
			
				case 5:
					return "SPGJ_BRP15";
			
				case 6:
					return "SPGJ_BRP16";
			
				case 7:
					return "SPGJ_BRP17";
			
				case 8:
					return "SPGJ_BRP18A";
			
				case 9:
					return "SPGJ_BRP18B";
			
				case 10:
					return "SPGJ_BRP18C";
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					return "SPGJ_TBP1A";
			
				case 1:
					return "SPGJ_TBP1B";
			
				case 2:
					return "SPGJ_TBP2";
			
				case 3:
					return "SPGJ_TBP3";
			
				case 4:
					return "SPGJ_TBP4";
			
				case 5:
					return "SPGJ_TBP5";
			
				case 6:
					return "SPGJ_TBP6";
			
				case 7:
					return "SPGJ_TBP7A";
			
				case 8:
					return "SPGJ_TBP7B";
			
				case 9:
					return "SPGJ_TBP8";
			
				case 10:
					return "SPGJ_TBP19A";
			
				case 11:
					return "SPGJ_TBP19B";
			
				case 12:
					return "SPGJ_TBP19C";
			
				case 13:
					return "SPGJ_TBP19D";
			}
			break;
	}

	return "INVALID";
}

BOOL func_242(var uParam0, Hash hParam1) // Position - 0x803C Hash - 0x422D70EB ^0x571EC93B
{
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(hParam1, *uParam0);
		return true;
	}

	return false;
}

BOOL func_243(Ped pedParam0) // Position - 0x8066 Hash - 0x56EA88F4 ^0xB8B4D4C1
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		PED::SET_PED_RESET_FLAG(pedParam0, 49, true);
		return true;
	}

	return false;
}

BOOL func_244(Ped pedParam0, Volume volParam1, int iParam2, BOOL bParam3) // Position - 0x8091 Hash - 0x425E360D ^0xB9BEF16F
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, true, 0);
}

BOOL func_245(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x80C5 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_351(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x811F Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_247(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x8149 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_248(Hash hParam0, int iParam1) // Position - 0x819E Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_249() // Position - 0x81B1 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_250(int iParam0) // Position - 0x81D0 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_352(iParam0);
	return num == 3 || num == 4;
}

BOOL func_251(int iParam0) // Position - 0x81EE Hash - 0x8EF26C67 ^0x9855652A
{
	int num;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
			return 0;
	
		num = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
			return 0;
	
		num = func_353(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

var func_252() // Position - 0x8259 Hash - 0x1372AFBD ^0xAE723118
{
	var weatherType1;
	var weatherType2;
	float percentWeather2;
	var unk;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.75f)
		unk = weatherType1;
	else
		unk = weatherType2;

	return unk;
}

BOOL func_253(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4) // Position - 0x8283 Hash - 0x51EADDF ^0xFEE9A233
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);

	if (ENTITY::_GET_ENTITIES_NEAR_POINT(vParam1, fParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		return true;
	}

	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

BOOL func_254(var uParam0, var uParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, float fParam6) // Position - 0x82C3 Hash - 0x34D99C7D ^0x8190E5BB
{
	ScrHandle indexedItemInItemset;
	int i;
	int entitiesNearPoint;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);

	entitiesNearPoint = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam2, fParam6, *uParam0, 1);

	for (i = 0; i < entitiesNearPoint; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, *uParam0);
		*uParam1 = indexedItemInItemset;
	
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*uParam1)))
				{
					if (func_354(Global_35, *uParam1, false))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*uParam0);
						return true;
					}
				}
			}
		}
	}

	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

BOOL func_255(Ped pedParam0, BOOL bParam1) // Position - 0x8358 Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

void func_256(var uParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4) // Position - 0x8385 Hash - 0x186008F8 ^0xE9F0BC58
{
	if (!func_355(*uParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		TASK::TASK_FLEE_COORD(*uParam0, vParam1, 6, 0, iParam4, -1, 0);
	}

	return;
}

BOOL func_257(Ped pedParam0, int* piParam1) // Position - 0x83B7 Hash - 0xFB53563C ^0x22205B46
{
	BOOL flag;
	BOOL flag2;

	if (piParam1->f_11 & 1 != 0)
		if (PED::IS_PED_LASSOED(pedParam0))
			return true;

	if (piParam1->f_11 & 2 != 0)
		if (PED::IS_PED_HOGTIED(pedParam0))
			return true;

	flag = piParam1->f_11 & 4 != 0;
	flag2 = piParam1->f_11 & 8 != 0;

	if (flag || flag2)
		if (PED::IS_PED_IN_COMBAT(pedParam0, func_356(flag2 && !flag, Global_35, 0)))
			return true;

	return false;
}

void func_258(var uParam0) // Position - 0x842F Hash - 0xBF3B7066 ^0xBF3B7066
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_275(&uParam0->[i /*17*/]))
			func_289(&uParam0->[i /*17*/], 14);
	}

	return;
}

Prompt func_259(Player plParam0, int* piParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x8464 Hash - 0xAAA1EE43 ^0x1865183
{
	int num;

	if (piParam1->f_3 > -1 && piParam1->f_3 < *uParam2)
	{
		num = piParam1->f_3;
		uParam2->[num /*17*/].f_8 = 6;
		func_346(plParam0, &uParam2->[num /*17*/], fParam3, 3, 0, 6, bParam4, false);
	
		if (func_268(uParam2->[num /*17*/].f_6))
		{
			func_289(&uParam2->[num /*17*/], 11);
			return Global_1945188[uParam2->[num /*17*/].f_6 /*18*/].f_3;
		}
	}

	return 0;
}

int func_260(var uParam0) // Position - 0x84D4 Hash - 0x642E71C7 ^0x2B612313
{
	int num;
	int num2;

	num = func_357(*uParam0);
	num2 = 2;

	switch (num)
	{
		case 0:
			num2 = 1415388528;
			break;
	
		case 1:
			num2 = 768137552;
			break;
	
		case 2:
			num2 = 295425337;
			break;
	
		case 3:
			num2 = -1807204482;
			break;
	
		case 4:
			num2 = 1449436544;
			break;
	
		case 5:
			num2 = -1096701282;
			break;
	}

	return num2;
}

int func_261(var uParam0, int iParam1) // Position - 0x8552 Hash - 0x2E6C9ADE ^0xD0DFC5BC
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_7 == iParam1)
			return i;
	}

	return -1;
}

void func_262(int* piParam0, int* piParam1) // Position - 0x8581 Hash - 0xFCEC0C12 ^0x65EC5F60
{
	if (!func_158(piParam0, 23))
	{
		if (piParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_289(piParam1, 19);
			func_277(piParam0, 23);
			func_358(piParam1, 2);
		}
	}

	return;
}

BOOL func_263(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x85BE Hash - 0x8E7018BE ^0x1BA834FB
{
	Entity outEntity;

	outEntity = 0;

	if (func_359(16))
		return Global_1935630.f_58 == pedParam0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(outEntity))
			{
				if (ENTITY::IS_ENTITY_A_PED(outEntity))
				{
					func_360(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
				
					if (Global_1935630.f_58 == pedParam0)
						return true;
				}
			}
		}
	}

	return false;
}

int func_264(int iParam0) // Position - 0x8633 Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_265(Ped pedParam0) // Position - 0x863F Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_361(pedParam0, 4) || func_361(pedParam0, 5);
}

BOOL func_266(Ped pedParam0) // Position - 0x865B Hash - 0xE0409C42 ^0xE0409C42
{
	return func_361(pedParam0, 7);
}

BOOL func_267(Ped pedParam0) // Position - 0x866A Hash - 0xC9A2E10A ^0xC9A2E10A
{
	return func_361(pedParam0, 6);
}

BOOL func_268(int iParam0) // Position - 0x8679 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_269(Player plParam0, int* piParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x86B8 Hash - 0x28F375A9 ^0x20CFE665
{
	if (MISC::IS_BIT_SET(*piParam1, 14))
	{
		if (func_275(piParam1))
		{
			MISC::CLEAR_BIT(piParam1, 14);
			func_346(plParam0, piParam1, fParam2, iParam3, iParam4, iParam5, bParam6, false);
		}
	}

	return;
}

BOOL func_270(Player plParam0, int* piParam1, int* piParam2, BOOL bParam3, float fParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, float fParam14, BOOL bParam15, int iParam16) // Position - 0x86F0 Hash - 0x9E28CA55 ^0x9E28CA55
{
	BOOL flag;
	BOOL flag2;

	flag = bParam3;

	if (bParam3)
	{
		flag2 = false;
	
		if (func_362(piParam1, piParam2, plParam0, bParam9, bParam10, iParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
			flag2 = true;
	
		if (func_363(piParam2->f_6, false))
		{
			if (flag2)
			{
				func_344(piParam2->f_6, false, true);
				flag = false;
			}
		}
		else if (!flag2)
		{
			func_344(piParam2->f_6, true, true);
			flag = false;
		}
	
		if (bParam8)
			func_364(piParam2->f_6, plParam0, 0, true, -1);
	}

	return flag;
}

BOOL func_271(int iParam0, int iParam1) // Position - 0x876E Hash - 0xFED1B5B5 ^0xFED1B5B5
{
	if (iParam0 == 4 || iParam0 == 6 || iParam0 == 5)
	{
		if (func_365(iParam1, true))
			return true;
	}
	else if (func_366(iParam1, true))
	{
		func_367(iParam1, true);
		return true;
	}

	return false;
}

void func_272(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x87B8 Hash - 0x6249DB64 ^0x6249DB64
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_177(&uParam0->[i /*17*/], bParam1, bParam2);
	}

	return;
}

BOOL func_273(int* piParam0, float fParam1, BOOL bParam2) // Position - 0x87E2 Hash - 0xD16C56E3 ^0xCC194231
{
	if (piParam0->f_2 != 3)
		if (bParam2 || fParam1 > 0f)
			return true;

	return false;
}

void func_274(int* piParam0, int iParam1) // Position - 0x8806 Hash - 0xCA0C813A ^0x642D602A
{
	if (iParam1 <= piParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}

	return;
}

BOOL func_275(int* piParam0) // Position - 0x8843 Hash - 0xA750EC1D ^0xA62AC3E5
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(piParam0->f_5))
		return true;

	return false;
}

BOOL func_276(Ped pedParam0) // Position - 0x885C Hash - 0x38F1F494 ^0xD89820BA
{
	int i;
	int numberOfEvents;
	int num;
	struct<10> eventData;

	numberOfEvents = SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI);

	if (numberOfEvents > 0)
	{
		for (i = 0; i < numberOfEvents; i = i + 1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i))
			{
				case joaat("event_player_prompt_triggered"):
					if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 10))
					{
						num = eventData;
					
						switch (num)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(eventData.f_2))
									if (pedParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_2))
										return true;
								break;
						}
					}
					break;
			}
		}
	}

	return false;
}

void func_277(int* piParam0, int iParam1) // Position - 0x88DA Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_278(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x88EA Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_268(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_368(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_369(num);
	*uParam0 = 0;
	return;
}

BOOL func_279(var uParam0, float fParam1) // Position - 0x893E Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_119(uParam0, fParam1))
	{
		func_48(uParam0);
		return 1;
	}

	return 0;
}

BOOL func_280(int* piParam0) // Position - 0x895C Hash - 0x3DD78BEA ^0xF17C3771
{
	if (piParam0->f_1 > -1)
		return true;

	return false;
}

int func_281(Ped pedParam0, Ped pedParam1, const char* sParam2, char* sParam3, int iParam4, var uParam5, BOOL bParam6, BOOL bParam7, int iParam8, BOOL bParam9, BOOL bParam10, int iParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, int iParam15) // Position - 0x8971 Hash - 0xD668806E ^0x3A7B5575
{
	BOOL flag;
	float num;
	int num2;
	const char* str;

	uParam5 = uParam5;
	pedParam1 = pedParam1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		return -1;

	if (bParam6)
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(pedParam0, pedParam1, 17))
				return -1;
		else
			return -1;

	if (iParam4 == -1f)
		if (func_370())
			iParam4 = 50f;
		else
			iParam4 = 75f;

	if (bParam9)
		if (pedParam0 != Global_35 && pedParam1 != Global_35)
			if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
				if (func_371(pedParam0, true, true) > iParam4)
					return -1;

	flag = pedParam0 == pedParam1 || pedParam1 == 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0) || iParam11 == 1718175949 || bParam9 == false)
	{
		if (!flag)
			num = func_37(pedParam0, pedParam1, true, true);
	
		if (flag || bParam7 || num < iParam4 || bParam9 == false)
		{
			func_116(&uLocal_0);
		
			if (!flag && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
					TASK::TASK_LOOK_AT_ENTITY(pedParam0, pedParam1, 7500, 0, 51, 0);
			
				if (func_372(pedParam0, pedParam1, num, bParam13))
					TASK::TASK_LOOK_AT_ENTITY(pedParam1, pedParam0, 7500, SLF_WIDEST_YAW_LIMIT | 32, 31, 0);
			}
		
			if (bParam12)
			{
				str.f_5 = 1;
				str.f_6 = 1;
				str = sParam2;
				str.f_3 = iParam11;
				str.f_4 = pedParam1;
				str.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				str.f_6 = iParam15;
				str.f_2 = uParam5;
			
				if (bParam14)
				{
					MISC::SET_BIT(&(str.f_7), 3);
					MISC::SET_BIT(&(str.f_7), 2);
				}
			
				num2 = AUDIO::_0x72E4D1C4639BC465(pedParam0, &str);
			
				if (num2 >= 0)
					AUDIO::_0xB18FEC133C7C6C69(num2);
			}
			else
			{
				num2 = func_58(pedParam0, sParam2, iParam11, pedParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, iParam15) ? 1 : -1;
			}
		
			if (num2 >= 0)
			{
			}
		
			return num2;
		}
	}

	return -1;
}

BOOL func_282(int iParam0, int iParam1) // Position - 0x8B62 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_172() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_283(int iParam0) // Position - 0x8B95 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_172() != -1)
		if (func_285(iParam0, 4))
			return false;
	else if (func_285(iParam0, 2))
		return false;

	return true;
}

BOOL func_284(int iParam0) // Position - 0x8BC5 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_285(iParam0, 65536) && !func_285(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_285(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_285(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_285(int iParam0, int iParam1) // Position - 0x8C71 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_286(int iParam0) // Position - 0x8C8A Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_287() // Position - 0x8C9D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_288(int* piParam0, int iParam1) // Position - 0x8CAC Hash - 0x5B2730C0 ^0x9239CD27
{
	return MISC::IS_BIT_SET(*piParam0, iParam1);
}

void func_289(int* piParam0, int iParam1) // Position - 0x8CBD Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_290(int* piParam0, int iParam1) // Position - 0x8CCD Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

void func_291(int iParam0) // Position - 0x8CDD Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_374();

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
			func_375(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_292(int iParam0) // Position - 0x8E49 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

BOOL func_293(BOOL bParam0) // Position - 0x8E5C Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_376(bParam0, &unk, &unk2))
		return true;

	return false;
}

BOOL func_294(BOOL bParam0) // Position - 0x8E76 Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_172() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_377(bParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_377(bParam0);

	if (ped == 0)
		return false;

	if (func_323(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	bParam0->f_14 = ped;
	return true;
}

void func_295(BOOL bParam0) // Position - 0x8F10 Hash - 0x256C27DD ^0x256C27DD
{
	if (*bParam0 & 8 != 0 || *bParam0 & 16 != 0)
		func_378(bParam0);

	return;
}

BOOL func_296(Ped pedParam0, BOOL bParam1, Ped pedParam2) // Position - 0x8F37 Hash - 0x7FBD27D8 ^0x4C0BB7C4
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
		num2 = func_323(pedParam2);
	else
		num2 = func_322(pedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_323(pedParam0);
	else
		num = func_322(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_51(*bParam1, 8388608))
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

float func_297(Ped pedParam0, Ped pedParam1) // Position - 0x9030 Hash - 0xF9959663 ^0xF9959663
{
	return func_37(pedParam0, pedParam1, true, true);
}

float func_298(BOOL bParam0) // Position - 0x9042 Hash - 0xD73B9827 ^0xDE12990D
{
	return bParam0->f_26;
}

BOOL func_299(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x904E Hash - 0x5A9E12AC ^0x5A9E12AC
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

void func_300(BOOL bParam0, BOOL bParam1) // Position - 0x90B3 Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_70(bParam0, 134217728);
	else
		func_71(bParam0, 134217728);

	return;
}

void func_301() // Position - 0x90D9 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_302(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x90ED Hash - 0x7ED53456 ^0xD7A590DD
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
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_37(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_379(ped, 0)))
			if (func_380(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_303(BOOL bParam0) // Position - 0x924D Hash - 0xD73B9827 ^0x8CE07B2A
{
	return bParam0->f_17;
}

BOOL func_304(BOOL bParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0x9259 Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (bParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_51(*bParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*bParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17))
			return true;

	return false;
}

int func_305(BOOL bParam0) // Position - 0x92BA Hash - 0xD73B9827 ^0x372EC0B
{
	return bParam0->f_18;
}

BOOL func_306(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x92C6 Hash - 0x838BDEFB ^0xB1D5C032
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_379(ped, 0)))
			if (func_381(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

int func_307(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9388 Hash - 0xC9655EC3 ^0x88C9AFE1
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

float func_308(BOOL bParam0) // Position - 0x9426 Hash - 0xD73B9827 ^0x9F7F0764
{
	return bParam0->f_23;
}

int func_309(BOOL bParam0) // Position - 0x9432 Hash - 0xD73B9827 ^0x303D0BA3
{
	return bParam0->f_21;
}

int func_310(BOOL bParam0) // Position - 0x943E Hash - 0xB202FF2A ^0xFD1BAB10
{
	int num;

	switch (bParam0->f_7)
	{
		case 0:
			switch (bParam0->f_6)
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
			switch (bParam0->f_6)
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
			switch (bParam0->f_6)
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
			switch (bParam0->f_6)
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
			switch (bParam0->f_6)
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

	if (*bParam0 & 16777216 != 0)
		if (num == 2)
			num = 0;

	return num;
}

BOOL func_311(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x957B Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_382(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_312(Ped pedParam0) // Position - 0x95BE Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_383(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_313(Ped pedParam0) // Position - 0x9624 Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_314(BOOL bParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x9650 Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_384(pedParam1))
			return false;

	num = 5f;

	if (*bParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_315(BOOL bParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x9697 Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_384(pedParam1))
			return false;

	num = 10f;

	if (*bParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_316(BOOL bParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0x96E2 Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_384(pedParam1))
		return false;

	if (*bParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_317(Ped pedParam0, var uParam1) // Position - 0x975B Hash - 0x64FF5121 ^0xD9ABCD76
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

BOOL func_318(Ped pedParam0, Ped pedParam1) // Position - 0x97A8 Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (func_60(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_319(BOOL bParam0) // Position - 0x97F0 Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*bParam0 & 2 != 0);
}

BOOL func_320(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0x9800 Hash - 0x94A6C6F0 ^0xC51111A6
{
	float num;

	num = func_176(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

float func_321(BOOL bParam0) // Position - 0x982C Hash - 0xD73B9827 ^0x4905FA06
{
	return bParam0->f_24;
}

int func_322(Ped pedParam0) // Position - 0x9838 Hash - 0xEB445B10 ^0x7D6B70A6
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_323(Ped pedParam0) // Position - 0x9890 Hash - 0x6E063231 ^0x510EF03F
{
	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(pedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_324(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0x9900 Hash - 0x89708384 ^0x6760E23F
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
			if (func_317(Global_35, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_37(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_37(pedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_325(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9A70 Hash - 0x3E8B6245 ^0x84E29058
{
	Ped ped;
	Ped ped2;

	func_376(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!bParam2 || !func_326(bParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
				if (!bParam2 || !func_326(bParam1, ped2))
					if (func_176(ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_326(BOOL bParam0, Ped pedParam1) // Position - 0x9B5E Hash - 0x27FC2906 ^0x91BA6708
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

BOOL func_327(int iParam0) // Position - 0x9BD4 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_107())
		return false;

	return func_385(Global_1347702[58 /*49*/].f_15, true);
}

int func_328(BOOL bParam0) // Position - 0x9BF6 Hash - 0xD73B9827 ^0xAC2E3C80
{
	return bParam0->f_20;
}

BOOL func_329(Ped pedParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x9C02 Hash - 0x9E17B061 ^0x19F2F061
{
	if (!bParam2)
		if (bParam1->f_4 == 0)
			return 0;

	if (iParam3 < 0f)
		iParam3 = bParam1->f_12;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return 1;
	else if (iParam3 < 1.5f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, Global_35))
			return 1;

	return 0;
}

void func_330(int* piParam0, int iParam1) // Position - 0x9C7D Hash - 0x5F94E6 ^0xC34AEB03
{
	*piParam0 = 0;
	piParam0->f_1 = -1;
	piParam0->f_2 = 0;
	func_48(&(piParam0->f_18));
	return;
}

int func_331(var uParam0) // Position - 0x9C9B Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_386(i, 1);
	}

	return -358215195;
}

BOOL func_332(Hash hParam0, int iParam1) // Position - 0x9CD6 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_333(int iParam0) // Position - 0x9CF0 Hash - 0x2BF73E21 ^0x2BF73E21
{
	return iParam0 > 0 && iParam0 < 13;
}

void func_334(int iParam0, int iParam1) // Position - 0x9D06 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_387(iParam0);
	else
		func_388(iParam0, iParam1);

	func_389();
	return;
}

void func_335(int iParam0, int iParam1) // Position - 0x9D4E Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_336(int iParam0, BOOL bParam1) // Position - 0x9D6E Hash - 0x5CF9514E ^0x8B449709
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = bParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/] = bParam1;
	return;
}

void func_337(int iParam0, Hash hParam1) // Position - 0x9D99 Hash - 0x634DE727 ^0xC7F71E9D
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = hParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/].f_1 = hParam1;
	return;
}

BOOL func_338(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x9DC8 Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_339(Volume volParam0, BOOL bParam1) // Position - 0x9DE2 Hash - 0xEA796703 ^0x695D7925
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

void func_340(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x9E4A Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_390(eptParam1))
		{
			func_108(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_391(pedParam0, 0, true);
	
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
			func_392(pedParam0, false);
			flag = true;
		}
	
		func_393(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_341() // Position - 0x9F2B Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_172() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

void func_342(int iParam0, const char* sParam1, var uParam2, BOOL bParam3) // Position - 0x9F51 Hash - 0x2048C918 ^0x83757B6C
{
	int num;

	if (bParam3 && !func_268(iParam0))
		return;

	num = func_368(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(2, sParam1, uParam2));
	return;
}

void func_343(int iParam0, const char* sParam1, BOOL bParam2) // Position - 0x9FA1 Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_268(iParam0))
		return;

	num = func_368(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, sParam1);
	return;
}

void func_344(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9FEA Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_268(iParam0))
		return;

	num = func_368(iParam0);

	if (bParam1)
	{
		func_394(iParam0, 4);
		func_395(num, true);
		func_396(num, true);
	}
	else
	{
		func_397(iParam0, 4);
		func_396(num, false);
	}

	return;
}

void func_345(int* piParam0, const char* sParam1) // Position - 0xA039 Hash - 0x94802979 ^0xDA357E7D
{
	if (func_268(piParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		func_343(piParam0->f_6, sParam1, true);

	piParam0->f_5 = sParam1;
	func_290(piParam0, 1);
	return;
}

void func_346(Player plParam0, int* piParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0xA070 Hash - 0x9E5AD4FF ^0xCE9B419A
{
	const char* str;
	int num;

	if (func_268(piParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*piParam1, 11))
			return;
	
		func_278(&(piParam1->f_6), false, true);
	}

	if (!func_268(piParam1->f_6) && !MISC::IS_BIT_SET(*piParam1, 4))
	{
		str = piParam1->f_5;
	
		if (func_275(piParam1))
		{
			if (piParam1->f_8 != iParam5)
				iParam5 = piParam1->f_8;
		
			piParam1->f_6 = func_398(str, piParam1->f_7, plParam0, piParam1->f_9, iParam4, false, 0, iParam5, fParam2, piParam1->f_2, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), piParam1->f_10, false);
		
			if (func_268(piParam1->f_6))
			{
				if (!bParam6)
				{
					num = -1;
					func_364(piParam1->f_6, plParam0, 0, true, num);
				}
				else
				{
					func_399(piParam1->f_6, 17, true, true);
				}
			
				if (MISC::IS_BIT_SET(*piParam1, 1))
					if (MISC::IS_BIT_SET(*piParam1, 3))
						func_400(piParam1->f_6, str, piParam1->f_16, piParam1->f_14, true);
					else
						func_342(piParam1->f_6, str, piParam1->f_14, true);
			
				if (MISC::IS_BIT_SET(*piParam1, 10))
					func_399(piParam1->f_6, 16, true, true);
			
				if (!MISC::IS_BIT_SET(*piParam1, 0) || MISC::IS_BIT_SET(*piParam1, 13))
					func_344(piParam1->f_6, false, true);
				else
					func_344(piParam1->f_6, true, true);
			}
		}
	}

	return;
}

int func_347(BOOL bParam0) // Position - 0xA1C7 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

Hash func_348(int iParam0) // Position - 0xA1DA Hash - 0xB8EC44B7 ^0xE03EA60A
{
	switch (iParam0)
	{
		case 0:
			return -533947923;
	
		case 1:
			return -328617369;
	
		case 2:
			return 647800524;
	
		case 3:
			return joaat("SPGJ_ABAA");
	
		case 4:
			return joaat("SPGJ_ABAB");
	
		case 5:
			return joaat("SPGJ_ACAA");
	
		case 6:
			return joaat("SPGJ_ACAB");
	
		case 7:
			return joaat("SPGJ_ACAC");
	
		case 8:
			return joaat("SPGJ_ACAD");
	
		case 9:
			return joaat("SPGJ_ACAE");
	
		case 10:
			return joaat("SPGJ_ACAF");
	
		case 11:
			return joaat("SPGJ_ACAG");
	
		case 12:
			return joaat("SPGJ_ADAA");
	
		case 13:
			return joaat("SPGJ_ADAB");
	
		case 14:
			return joaat("SPGJ_ADAC");
	
		case 15:
			return joaat("SPGJ_ADAD");
	
		case 16:
			return joaat("SPGJ_ADAE");
	
		case 17:
			return joaat("SPGJ_ADAF");
	
		case 18:
			return joaat("SPGJ_AEAA");
	
		case 19:
			return joaat("SPGJ_AEAB");
	
		case 20:
			return joaat("SPGJ_AEAC");
	
		case 21:
			return joaat("SPGJ_AEAD");
	
		case 22:
			return joaat("SPGJ_AEAE");
	
		case 23:
			return joaat("SPGJ_AEAF");
	
		case 24:
			return joaat("SPGJ_AEAG");
	
		case 25:
			return joaat("SPGJ_AEAH");
	
		case 26:
			return joaat("SPGJ_AEAI");
	
		case 27:
			return joaat("SPGJ_AEAJ");
	
		case 28:
			return 651646215;
	
		case 29:
			return 2025781461;
	
		case 30:
			return 177970320;
	
		case 31:
			return -1258163882;
	
		case 32:
			return 1186960595;
	
		case 33:
			return joaat("SPGJ_AGAA");
	
		case 34:
			return joaat("SPGJ_AGAB");
	
		case 35:
			return joaat("SPGJ_AGAC");
	
		case 36:
			return joaat("SPGJ_AGAD");
	
		case 37:
			return joaat("SPGJ_AGAE");
	
		case 38:
			return joaat("SPGJ_AGAF");
	
		case 39:
			return joaat("SPGJ_AGAG");
	
		case 40:
			return joaat("SPGJ_AHAA");
	
		case 41:
			return joaat("SPGJ_AHAB");
	
		case 42:
			return joaat("SPGJ_AHAC");
	
		case 43:
			return joaat("SPGJ_AHAD");
	
		case 44:
			return joaat("SPGJ_AHAE");
	
		case 45:
			return joaat("SPGJ_AHAF");
	
		case 46:
			return joaat("SPGJ_AIAA");
	
		case 47:
			return joaat("SPGJ_AJAA");
	
		case 48:
			return joaat("SPGJ_AJAB");
	
		case 49:
			return joaat("SPGJ_AJAC");
	
		case 50:
			return joaat("SPGJ_AJAD");
	
		case 51:
			return joaat("SPGJ_AJAE");
	
		case 52:
			return joaat("SPGJ_AJAF");
	
		case 53:
			return joaat("SPGJ_AJAG");
	
		case 54:
			return joaat("SPGJ_AUAA");
	
		case 55:
			return joaat("SPGJ_AUAB");
	
		case 56:
			return joaat("SPGJ_AUAC");
	
		case 57:
			return joaat("SPGJ_AUAD");
	
		case 58:
			return joaat("SPGJ_AUAE");
	
		case 59:
			return joaat("SPGJ_AUAF");
	
		case 60:
			return joaat("SPGJ_AUAG");
	
		case 61:
			return joaat("SPGJ_AUAH");
	
		case 62:
			return joaat("SPGJ_AVAA");
	
		case 63:
			return joaat("SPGJ_AVAB");
	
		case 64:
			return joaat("SPGJ_AVAC");
	
		case 65:
			return joaat("SPGJ_AVAD");
	
		case 66:
			return joaat("SPGJ_AVAE");
	
		case 67:
			return joaat("SPGJ_AVAF");
	
		case 68:
			return joaat("SPGJ_AVAG");
	
		case 69:
			return joaat("SPGJ_AWAA");
	
		case 70:
			return joaat("SPGJ_AWAB");
	
		case 71:
			return joaat("SPGJ_AWAC");
	
		case 72:
			return joaat("SPGJ_AXAA");
	
		case 73:
			return joaat("SPGJ_AXAB");
	
		case 74:
			return joaat("SPGJ_AXAC");
	
		case 75:
			return joaat("SPGJ_AXAD");
	
		case 76:
			return joaat("SPGJ_AXAE");
	
		case 77:
			return joaat("SPGJ_AXAF");
	
		case 78:
			return joaat("SPGJ_AXAG");
	
		case 79:
			return joaat("SPGJ_AXAH");
	
		case 80:
			return joaat("SPGJ_AXAI");
	
		case 81:
			return 1616833083;
	
		case 82:
			return 1771863398;
	
		case 83:
			return 937138661;
	
		case 84:
			return 1152758681;
	
		case 85:
			return -1829711858;
	
		case 86:
			return -1567494320;
	
		case 87:
			return joaat("SPGJ_AZAA");
	
		case 88:
			return joaat("SPGJ_AZAB");
	
		case 89:
			return joaat("SPGJ_AZAC");
	
		case 90:
			return joaat("SPGJ_BAAA");
	
		case 91:
			return joaat("SPGJ_BAAB");
	
		case 92:
			return joaat("SPGJ_BAAC");
	
		case 93:
			return joaat("SPGJ_BAAD");
	
		case 94:
			return joaat("SPGJ_BAAE");
	
		case 95:
			return joaat("SPGJ_BAAF");
	
		case 96:
			return joaat("SPGJ_BAAG");
	
		case 97:
			return joaat("SPGJ_BAAH");
	
		case 98:
			return joaat("SPGJ_BAAI");
	
		case 99:
			return joaat("SPGJ_BAAJ");
	
		case 100:
			return 1759886076;
	
		case 101:
			return -1280159592;
	
		case 102:
			return -981470157;
	
		case 103:
			return -15538344;
	
		case 104:
			return -1883436882;
	
		case 105:
			return -359186847;
	
		case 106:
			return -315931767;
	
		case 107:
			return 1158968150;
	
		case 108:
			return -697362927;
	
		case 109:
			return joaat("SPGJ_BCAA");
	
		case 110:
			return joaat("SPGJ_BCAB");
	
		case 111:
			return joaat("SPGJ_BCAC");
	
		case 112:
			return joaat("SPGJ_BDAA");
	
		case 113:
			return joaat("SPGJ_BEAA");
	
		case 114:
			return joaat("SPGJ_BEAB");
	
		case 115:
			return joaat("SPGJ_AKAA");
	
		case 116:
			return joaat("SPGJ_ALAA");
	
		case 117:
			return joaat("SPGJ_ALAB");
	
		case 118:
			return joaat("SPGJ_AMAA");
	
		case 119:
			return joaat("SPGJ_AMAB");
	
		case 120:
			return joaat("SPGJ_AMAC");
	
		case 121:
			return joaat("SPGJ_ANAA");
	
		case 122:
			return joaat("SPGJ_AOAA");
	
		case 123:
			return joaat("SPGJ_AOAB");
	
		case 124:
			return joaat("SPGJ_AQAA");
	
		case 125:
			return joaat("SPGJ_ARAA");
	
		case 126:
			return -629575373;
	
		case 127:
			return joaat("SPGJ_ATAA");
	
		case 128:
			return joaat("SPGJ_BFAA");
	
		case 129:
			return joaat("SPGJ_BFAB");
	
		case 130:
			return joaat("SPGJ_BFAC");
	
		case 131:
			return joaat("SPGJ_BGAA");
	
		case 132:
			return -1961808188;
	
		default:
		
	}

	return -1;
}

char* func_349(int iParam0, var uParam1) // Position - 0xA931 Hash - 0x2D22D7D0 ^0xFE1DBFAC
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = "SPGJ_TBP1A";
			*uParam1 = 0;
			break;
	
		case 1:
			str = "SPGJ_TBP1A";
			*uParam1 = 1;
			break;
	
		case 2:
			str = "SPGJ_TBP1A";
			*uParam1 = 2;
			break;
	
		case 3:
			str = "SPGJ_TBP1B";
			*uParam1 = 0;
			break;
	
		case 4:
			str = "SPGJ_TBP1B";
			*uParam1 = 1;
			break;
	
		case 5:
			str = "SPGJ_TBP2";
			*uParam1 = 0;
			break;
	
		case 6:
			str = "SPGJ_TBP2";
			*uParam1 = 1;
			break;
	
		case 7:
			str = "SPGJ_TBP2";
			*uParam1 = 2;
			break;
	
		case 8:
			str = "SPGJ_TBP2";
			*uParam1 = 3;
			break;
	
		case 9:
			str = "SPGJ_TBP2";
			*uParam1 = 4;
			break;
	
		case 10:
			str = "SPGJ_TBP2";
			*uParam1 = 5;
			break;
	
		case 11:
			str = "SPGJ_TBP2";
			*uParam1 = 6;
			break;
	
		case 12:
			str = "SPGJ_TBP3";
			*uParam1 = 0;
			break;
	
		case 13:
			str = "SPGJ_TBP3";
			*uParam1 = 1;
			break;
	
		case 14:
			str = "SPGJ_TBP3";
			*uParam1 = 2;
			break;
	
		case 15:
			str = "SPGJ_TBP3";
			*uParam1 = 3;
			break;
	
		case 16:
			str = "SPGJ_TBP3";
			*uParam1 = 4;
			break;
	
		case 17:
			str = "SPGJ_TBP3";
			*uParam1 = 5;
			break;
	
		case 18:
			str = "SPGJ_TBP4";
			*uParam1 = 0;
			break;
	
		case 19:
			str = "SPGJ_TBP4";
			*uParam1 = 1;
			break;
	
		case 20:
			str = "SPGJ_TBP4";
			*uParam1 = 2;
			break;
	
		case 21:
			str = "SPGJ_TBP4";
			*uParam1 = 3;
			break;
	
		case 22:
			str = "SPGJ_TBP4";
			*uParam1 = 4;
			break;
	
		case 23:
			str = "SPGJ_TBP4";
			*uParam1 = 5;
			break;
	
		case 24:
			str = "SPGJ_TBP4";
			*uParam1 = 6;
			break;
	
		case 25:
			str = "SPGJ_TBP4";
			*uParam1 = 7;
			break;
	
		case 26:
			str = "SPGJ_TBP4";
			*uParam1 = 8;
			break;
	
		case 27:
			str = "SPGJ_TBP4";
			*uParam1 = 9;
			break;
	
		case 28:
			str = "SPGJ_TBP5";
			*uParam1 = 0;
			break;
	
		case 29:
			str = "SPGJ_TBP5";
			*uParam1 = 1;
			break;
	
		case 30:
			str = "SPGJ_TBP5";
			*uParam1 = 2;
			break;
	
		case 31:
			str = "SPGJ_TBP5";
			*uParam1 = 3;
			break;
	
		case 32:
			str = "SPGJ_TBP5";
			*uParam1 = 4;
			break;
	
		case 33:
			str = "SPGJ_TBP6";
			*uParam1 = 0;
			break;
	
		case 34:
			str = "SPGJ_TBP6";
			*uParam1 = 1;
			break;
	
		case 35:
			str = "SPGJ_TBP6";
			*uParam1 = 2;
			break;
	
		case 36:
			str = "SPGJ_TBP6";
			*uParam1 = 3;
			break;
	
		case 37:
			str = "SPGJ_TBP6";
			*uParam1 = 4;
			break;
	
		case 38:
			str = "SPGJ_TBP6";
			*uParam1 = 5;
			break;
	
		case 39:
			str = "SPGJ_TBP6";
			*uParam1 = 6;
			break;
	
		case 40:
			str = "SPGJ_TBP7A";
			*uParam1 = 0;
			break;
	
		case 41:
			str = "SPGJ_TBP7A";
			*uParam1 = 1;
			break;
	
		case 42:
			str = "SPGJ_TBP7A";
			*uParam1 = 2;
			break;
	
		case 43:
			str = "SPGJ_TBP7A";
			*uParam1 = 3;
			break;
	
		case 44:
			str = "SPGJ_TBP7A";
			*uParam1 = 4;
			break;
	
		case 45:
			str = "SPGJ_TBP7A";
			*uParam1 = 5;
			break;
	
		case 46:
			str = "SPGJ_TBP7B";
			*uParam1 = 0;
			break;
	
		case 47:
			str = "SPGJ_TBP8";
			*uParam1 = 0;
			break;
	
		case 48:
			str = "SPGJ_TBP8";
			*uParam1 = 1;
			break;
	
		case 49:
			str = "SPGJ_TBP8";
			*uParam1 = 2;
			break;
	
		case 50:
			str = "SPGJ_TBP8";
			*uParam1 = 3;
			break;
	
		case 51:
			str = "SPGJ_TBP8";
			*uParam1 = 4;
			break;
	
		case 52:
			str = "SPGJ_TBP8";
			*uParam1 = 5;
			break;
	
		case 53:
			str = "SPGJ_TBP8";
			*uParam1 = 6;
			break;
	
		case 54:
			str = "SPGJ_BRP10";
			*uParam1 = 0;
			break;
	
		case 55:
			str = "SPGJ_BRP10";
			*uParam1 = 1;
			break;
	
		case 56:
			str = "SPGJ_BRP10";
			*uParam1 = 2;
			break;
	
		case 57:
			str = "SPGJ_BRP10";
			*uParam1 = 3;
			break;
	
		case 58:
			str = "SPGJ_BRP10";
			*uParam1 = 4;
			break;
	
		case 59:
			str = "SPGJ_BRP10";
			*uParam1 = 5;
			break;
	
		case 60:
			str = "SPGJ_BRP10";
			*uParam1 = 6;
			break;
	
		case 61:
			str = "SPGJ_BRP10";
			*uParam1 = 7;
			break;
	
		case 62:
			str = "SPGJ_BRP11";
			*uParam1 = 0;
			break;
	
		case 63:
			str = "SPGJ_BRP11";
			*uParam1 = 1;
			break;
	
		case 64:
			str = "SPGJ_BRP11";
			*uParam1 = 2;
			break;
	
		case 65:
			str = "SPGJ_BRP11";
			*uParam1 = 3;
			break;
	
		case 66:
			str = "SPGJ_BRP11";
			*uParam1 = 4;
			break;
	
		case 67:
			str = "SPGJ_BRP11";
			*uParam1 = 5;
			break;
	
		case 68:
			str = "SPGJ_BRP11";
			*uParam1 = 6;
			break;
	
		case 69:
			str = "SPGJ_BRP12";
			*uParam1 = 0;
			break;
	
		case 70:
			str = "SPGJ_BRP12";
			*uParam1 = 1;
			break;
	
		case 71:
			str = "SPGJ_BRP12";
			*uParam1 = 2;
			break;
	
		case 72:
			str = "SPGJ_BRP13";
			*uParam1 = 0;
			break;
	
		case 73:
			str = "SPGJ_BRP13";
			*uParam1 = 1;
			break;
	
		case 74:
			str = "SPGJ_BRP13";
			*uParam1 = 2;
			break;
	
		case 75:
			str = "SPGJ_BRP13";
			*uParam1 = 3;
			break;
	
		case 76:
			str = "SPGJ_BRP13";
			*uParam1 = 4;
			break;
	
		case 77:
			str = "SPGJ_BRP13";
			*uParam1 = 5;
			break;
	
		case 78:
			str = "SPGJ_BRP13";
			*uParam1 = 6;
			break;
	
		case 79:
			str = "SPGJ_BRP13";
			*uParam1 = 7;
			break;
	
		case 80:
			str = "SPGJ_BRP13";
			*uParam1 = 8;
			break;
	
		case 81:
			str = "SPGJ_BRP14";
			*uParam1 = 0;
			break;
	
		case 82:
			str = "SPGJ_BRP14";
			*uParam1 = 1;
			break;
	
		case 83:
			str = "SPGJ_BRP14";
			*uParam1 = 2;
			break;
	
		case 84:
			str = "SPGJ_BRP14";
			*uParam1 = 3;
			break;
	
		case 85:
			str = "SPGJ_BRP14";
			*uParam1 = 4;
			break;
	
		case 86:
			str = "SPGJ_BRP14";
			*uParam1 = 5;
			break;
	
		case 87:
			str = "SPGJ_BRP15";
			*uParam1 = 0;
			break;
	
		case 88:
			str = "SPGJ_BRP15";
			*uParam1 = 1;
			break;
	
		case 89:
			str = "SPGJ_BRP15";
			*uParam1 = 2;
			break;
	
		case 90:
			str = "SPGJ_BRP16";
			*uParam1 = 0;
			break;
	
		case 91:
			str = "SPGJ_BRP16";
			*uParam1 = 1;
			break;
	
		case 92:
			str = "SPGJ_BRP16";
			*uParam1 = 2;
			break;
	
		case 93:
			str = "SPGJ_BRP16";
			*uParam1 = 3;
			break;
	
		case 94:
			str = "SPGJ_BRP16";
			*uParam1 = 4;
			break;
	
		case 95:
			str = "SPGJ_BRP16";
			*uParam1 = 5;
			break;
	
		case 96:
			str = "SPGJ_BRP16";
			*uParam1 = 6;
			break;
	
		case 97:
			str = "SPGJ_BRP16";
			*uParam1 = 7;
			break;
	
		case 98:
			str = "SPGJ_BRP16";
			*uParam1 = 8;
			break;
	
		case 99:
			str = "SPGJ_BRP16";
			*uParam1 = 9;
			break;
	
		case 100:
			str = "SPGJ_BRP17";
			*uParam1 = 0;
			break;
	
		case 101:
			str = "SPGJ_BRP17";
			*uParam1 = 1;
			break;
	
		case 102:
			str = "SPGJ_BRP17";
			*uParam1 = 2;
			break;
	
		case 103:
			str = "SPGJ_BRP17";
			*uParam1 = 3;
			break;
	
		case 104:
			str = "SPGJ_BRP17";
			*uParam1 = 4;
			break;
	
		case 105:
			str = "SPGJ_BRP17";
			*uParam1 = 5;
			break;
	
		case 106:
			str = "SPGJ_BRP17";
			*uParam1 = 6;
			break;
	
		case 107:
			str = "SPGJ_BRP17";
			*uParam1 = 7;
			break;
	
		case 108:
			str = "SPGJ_BRP17";
			*uParam1 = 8;
			break;
	
		case 109:
			str = "SPGJ_BRP18A";
			*uParam1 = 0;
			break;
	
		case 110:
			str = "SPGJ_BRP18A";
			*uParam1 = 1;
			break;
	
		case 111:
			str = "SPGJ_BRP18A";
			*uParam1 = 2;
			break;
	
		case 112:
			str = "SPGJ_BRP18B";
			*uParam1 = 0;
			break;
	
		case 113:
			str = "SPGJ_BRP18C";
			*uParam1 = 0;
			break;
	
		case 114:
			str = "SPGJ_BRP18C";
			*uParam1 = 1;
			break;
	
		case 115:
			str = "SPGJ_TBP19A";
			*uParam1 = 0;
			break;
	
		case 116:
			str = "SPGJ_TBP19B";
			*uParam1 = 0;
			break;
	
		case 117:
			str = "SPGJ_TBP19B";
			*uParam1 = 1;
			break;
	
		case 118:
			str = "SPGJ_TBP19C";
			*uParam1 = 0;
			break;
	
		case 119:
			str = "SPGJ_TBP19C";
			*uParam1 = 1;
			break;
	
		case 120:
			str = "SPGJ_TBP19C";
			*uParam1 = 2;
			break;
	
		case 121:
			str = "SPGJ_TBP19D";
			*uParam1 = 0;
			break;
	
		case 122:
			str = "SPGJ_TB20_EF";
			*uParam1 = 0;
			break;
	
		case 123:
			str = "SPGJ_TB20_EF";
			*uParam1 = 1;
			break;
	
		case 124:
			str = "SPGJ_TB20A";
			*uParam1 = 0;
			break;
	
		case 125:
			str = "SPGJ_TB20B";
			*uParam1 = 0;
			break;
	
		case 126:
			str = "SPGJ_TB20_PO";
			*uParam1 = 0;
			break;
	
		case 127:
			str = "SPGJ_TB20_PO2";
			*uParam1 = 0;
			break;
	
		case 128:
			str = "SPGJ_BR20_EF";
			*uParam1 = 0;
			break;
	
		case 129:
			str = "SPGJ_BR20_EF";
			*uParam1 = 1;
			break;
	
		case 130:
			str = "SPGJ_BR20_EF";
			*uParam1 = 2;
			break;
	
		case 131:
			if (!func_12(13, 16777216))
			{
				str = "SPGJ_BR20_E";
				*uParam1 = 0;
			}
			else
			{
				str = "SPGJ_BR20_E2";
				*uParam1 = 0;
			}
			break;
	}

	return str;
}

BOOL func_350(char* sParam0, int iParam1) // Position - 0xB337 Hash - 0xB70A199D ^0x5EFCD6E0
{
	var unk;
	BOOL flag;

	if (!AUDIO::_IS_PED_IN_ANY_CONVERSATION(pedLocal_255, true) && !AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_255))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 24);
		flag = func_245(&uLocal_21, unk, true, iParam1, false, false);
		return flag;
	}

	return false;
}

void func_351(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xB373 Hash - 0xFDACD718 ^0x658C9335
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

int func_352(int iParam0) // Position - 0xB3C5 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_129(iParam0))
		return -1;

	return func_353(iParam0);
}

int func_353(int iParam0) // Position - 0xB3E1 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_401(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_354(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0xB422 Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

BOOL func_355(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0xB48C Hash - 0xBA023B92 ^0x16E0B707
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return true;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return true;
		}
	}

	return false;
}

Ped func_356(BOOL bParam0, Ped pedParam1, Ped pedParam2) // Position - 0xB4E5 Hash - 0xCF32FBA5 ^0xCF32FBA5
{
	if (bParam0)
		return pedParam1;

	return pedParam2;
}

int func_357(Ped pedParam0) // Position - 0xB4F9 Hash - 0xB2D81349 ^0xACC293B5
{
	Hash pedRelationshipGroupDefaultHash;

	pedRelationshipGroupDefaultHash = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(pedParam0);

	switch (pedRelationshipGroupDefaultHash)
	{
		case joaat("rel_gang_odriscoll"):
			return 0;
	
		case joaat("rel_gang_smugglers"):
			return 5;
	
		case joaat("rel_gang_laramie_gang"):
			return 4;
	
		case joaat("rel_gang_skinner_brothers"):
			return 3;
	
		case joaat("rel_gang_lemoyne_raiders"):
			return 2;
	
		case joaat("rel_gang_murfree_brood"):
			return 1;
	
		default:
		
	}

	return -1;
}

void func_358(int* piParam0, int iParam1) // Position - 0xB54E Hash - 0xF6A14047 ^0x2BDBE9DA
{
	if (!func_288(piParam0, 19))
	{
		if (piParam0->f_9 != iParam1)
		{
			piParam0->f_9 = iParam1;
			func_289(piParam0, 14);
		}
	}

	return;
}

BOOL func_359(BOOL bParam0) // Position - 0xB579 Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_22 && bParam0 != false;
}

void func_360(BOOL bParam0) // Position - 0xB589 Hash - 0x88AD5D ^0x88AD5D
{
	Global_22 = Global_22 || bParam0;
	return;
}

BOOL func_361(Ped pedParam0, int iParam1) // Position - 0xB59A Hash - 0x25D0971D ^0xF7D4E234
{
	var unk;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	num = PED::_0x4642182A298187D0(pedParam0, iParam1, &unk, 4, 1);

	if (num != 0)
		return 1;

	return 0;
}

BOOL func_362(int* piParam0, int* piParam1, Player plParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, float fParam9, BOOL bParam10, int iParam11) // Position - 0xB5D9 Hash - 0x99448FD3 ^0x2F09ABA3
{
	BOOL flag;
	BOOL flag2;

	flag = MISC::IS_BIT_SET(*piParam1, 0) && !MISC::IS_BIT_SET(*piParam1, 4);

	if (MISC::IS_BIT_SET(*piParam1, 13))
		return true;

	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*piParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*piParam0, 25))
				MISC::SET_BIT(piParam0, 24);
		
			return true;
		}
	}

	if (MISC::IS_BIT_SET(*piParam1, 9))
	{
		MISC::CLEAR_BIT(piParam1, 9);
		return true;
	}

	if (bParam6)
		if (MISC::IS_BIT_SET(*piParam1, 6))
			return true;
	else if (MISC::IS_BIT_SET(*piParam1, 5))
		return true;

	if (MISC::IS_BIT_SET(*piParam1, 7))
		if (iParam5 > piParam1->f_4)
			return true;

	if (!MISC::IS_BIT_SET(*piParam1, 17))
		if (bParam3)
			if (bParam4)
				return true;

	if (!MISC::IS_BIT_SET(*piParam1, 18))
	{
		if (MISC::IS_BIT_SET(*piParam1, 8))
		{
			flag2 = 0;
		
			if (fParam9 > -1f)
				if (fParam9 < piParam1->f_3)
					flag2 = 1;
		
			if (!bParam7)
				if (bParam8 || flag2)
					return true;
		}
	}

	if (!MISC::IS_BIT_SET(*piParam1, 2))
		if (MISC::IS_BIT_SET(*piParam1, 1))
			if (iParam11 < piParam1->f_14)
				return true;

	return !flag;
}

BOOL func_363(int iParam0, BOOL bParam1) // Position - 0xB713 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_268(iParam0))
		return false;

	return !func_402(iParam0, 4);
}

void func_364(int iParam0, Player plParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xB738 Hash - 0x8A4F30F0 ^0xE1CE78DB
{
	int num;

	if (bParam3 && !func_268(iParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return;

	num = func_368(iParam0);
	func_399(iParam0, 18, false, true);
	func_399(iParam0, 17, false, true);

	if (iParam4 == -1)
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(plParam1);

	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, iParam4, iParam2);
	return;
}

BOOL func_365(int iParam0, BOOL bParam1) // Position - 0xB79D Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_268(iParam0))
		return false;

	num = func_368(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

BOOL func_366(int iParam0, BOOL bParam1) // Position - 0xB7F5 Hash - 0xAAB142C4 ^0xBB29AF2
{
	int num;

	if (bParam1 && !func_268(iParam0))
		return false;

	num = func_368(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_367(int iParam0, BOOL bParam1) // Position - 0xB828 Hash - 0x23556CE7 ^0xE508C6D9
{
	int num;

	if (bParam1 && !func_268(iParam0))
		return;

	num = func_368(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[num /*18*/].f_3);
	return;
}

int func_368(int iParam0) // Position - 0xB85A Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_369(int iParam0) // Position - 0xB864 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_403(iParam0))
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

BOOL func_370() // Position - 0xB917 Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_404() != -1;
}

float func_371(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB932 Hash - 0x2753566D ^0x575C60D0
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return -1f;

	return func_37(Global_35, pedParam0, bParam1, bParam2);
}

BOOL func_372(Ped pedParam0, Ped pedParam1, float fParam2, BOOL bParam3) // Position - 0xB95B Hash - 0x3576CBF5 ^0xBF0EF05A
{
	if (!bParam3)
		return false;

	if (fParam2 > 25f)
		return false;

	if (pedParam1 == Global_35)
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			return false;

	return true;
}

var func_373(BOOL bParam0, var uParam1, var uParam2) // Position - 0xB994 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_374() // Position - 0xB9AB Hash - 0x60155C48 ^0x6CED0E68
{
	if (func_405())
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

void func_375(int iParam0, int iParam1) // Position - 0xBA01 Hash - 0x787BB1AC ^0x11099E69
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

BOOL func_376(BOOL bParam0, var uParam1, var uParam2) // Position - 0xBAAC Hash - 0x2A9340EF ^0xAD765E32
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

Ped func_377(BOOL bParam0) // Position - 0xBB73 Hash - 0xF229F24F ^0x47381422
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

	if (bParam0->f_6 == 3)
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

void func_378(BOOL bParam0) // Position - 0xBC1B Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_71(bParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_70(bParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

Hash func_379(Ped pedParam0, int iParam1) // Position - 0xBC80 Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_380(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0xBC97 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_381(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_381(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0xBCC5 Hash - 0xBF2250D5 ^0x34592C3E
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

BOOL func_382(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0xBD0F Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

BOOL func_383(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xBD50 Hash - 0x1D055735 ^0x5D260F19
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

BOOL func_384(Ped pedParam0) // Position - 0xBDC9 Hash - 0xF2F988FE ^0xA63CD631
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

BOOL func_385(int iParam0, BOOL bParam1) // Position - 0xBEB1 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_352(iParam0))
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

int func_386(int iParam0, int iParam1) // Position - 0xBEE2 Hash - 0xE21403F3 ^0xF867F6E
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

int func_387(int iParam0) // Position - 0xC132 Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_401(iParam0);

	if (num < 0)
		return 0;

	return func_406(num);
}

int func_388(int iParam0, int iParam1) // Position - 0xC152 Hash - 0xF3EA5EAF ^0xA48F5774
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
			func_407(num2);
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

void func_389() // Position - 0xC2C2 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

BOOL func_390(ePedType eptParam0) // Position - 0xC2E5 Hash - 0x5000025C ^0x5000025C
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

void func_391(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0xC738 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_392(Ped pedParam0, BOOL bParam1) // Position - 0xC768 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_393(Ped pedParam0, int iParam1) // Position - 0xC7AD Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

void func_394(int iParam0, int iParam1) // Position - 0xC7D4 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_395(int iParam0, BOOL bParam1) // Position - 0xC807 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_402(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_396(int iParam0, BOOL bParam1) // Position - 0xC85F Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_397(int iParam0, int iParam1) // Position - 0xC888 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

// Unhandled jump detected. Output should be considered invalid
int func_398(const char* sParam0, Hash hParam1, Player plParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0xC8B0 Hash - 0xA9244E74 ^0xC0A4C4ED
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam2))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_402(i, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (plParam2 == Global_1945188[i /*18*/].f_11 && hParam1 == Global_1945188[i /*18*/].f_4)
					if (iParam3 <= Global_1945188[i /*18*/])
						return i;
			
				goto 0x8C;
			}
		}
	
		if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_408(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, plParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_399(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC987 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_268(iParam0))
		return;

	num = func_368(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_400(int iParam0, const char* sParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xC9D2 Hash - 0x3019E4B2 ^0x1E9F9706
{
	int num;

	if (bParam4 && !func_268(iParam0))
		return;

	num = func_368(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(10, sParam1, uParam2, uParam3));
	return;
}

int func_401(int iParam0) // Position - 0xCA25 Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_402(int iParam0, int iParam1) // Position - 0xCAA6 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

BOOL func_403(int iParam0) // Position - 0xCAC7 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_402(iParam0, 2);
}

eStackSize func_404() // Position - 0xCAD6 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_405() // Position - 0xCAE4 Hash - 0x50F36DAB ^0xF55A49EF
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

int func_406(int iParam0) // Position - 0xCB15 Hash - 0x78E19743 ^0x6ACC64F5
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

int func_407(int iParam0) // Position - 0xCBC9 Hash - 0x6DD34799 ^0x352A62D8
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

void func_408(int iParam0, Hash hParam1, const char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Player plParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0xCC6A Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = plParam11;
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_5 = iParam12;
	Global_1945188[iParam0 /*18*/].f_1 = 2;
	Global_1945188[iParam0 /*18*/].f_17 = -1;
	prompt = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam1);

	if (hParam23 != 0)
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam23);

	HUD::_UI_PROMPT_SET_TEXT(prompt, sParam2);

	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, fParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, plParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}

	HUD::_UI_PROMPT_SET_PRIORITY(prompt, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(prompt, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 18, true);

	if (bParam22)
		HUD::_0x53CE46C01A089DA1(prompt, true);

	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, false);
			break;
	
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(prompt, iParam16);
			break;
	
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, true);
			break;
	
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(prompt);
			break;
	
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(prompt, hParam24);
			break;
	
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 7:
			HUD::_UI_PROMPT_SET_MASH_MODE(prompt, iParam17);
			break;
	
		case 8:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, iParam16, iParam17);
			break;
	
		case 9:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 11:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, iParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 10, true);
			break;
	
		case 15:
			HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, 0.5f, 0.1f, 0);
			break;
	}

	HUD::_UI_PROMPT_REGISTER_END(prompt);
	Global_1945188[iParam0 /*18*/].f_3 = prompt;
	func_395(iParam0, true);
	func_396(iParam0, true);
	func_397(iParam0, 128);
	return;
}

