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
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 24;
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
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = -1;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 1097859072;
	var uLocal_135 = 1000;
	var uLocal_136 = 1067450368;
	var uLocal_137 = 5000;
	var uLocal_138 = 42;
	var uLocal_139 = 1103626240;
	var uLocal_140 = 1077936128;
	var uLocal_141 = 1106247680;
	var uLocal_142 = 1103101952;
	var uLocal_143 = 1097859072;
	var uLocal_144 = 1103626240;
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	int iLocal_157 = 0;
	ePedType eptLocal_158 = PED_TYPE_PLAYER_0;
	Hash hLocal_159 = 0;
	ePedType eptLocal_160 = PED_TYPE_PLAYER_0;
	ePedType eptLocal_161 = PED_TYPE_PLAYER_0;
	ePedType eptLocal_162 = PED_TYPE_PLAYER_0;
	Ped pedLocal_163 = 0;
	var uLocal_164 = 3;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	Entity eLocal_168 = 0;
	Volume volLocal_169 = 0;
	Volume volLocal_170 = 0;
	Volume volLocal_171 = 0;
	Volume volLocal_172 = 0;
	Volume volLocal_173 = 0;
	Volume volLocal_174 = 0;
	Volume volLocal_175 = 0;
	Volume volLocal_176 = 0;
	var uLocal_177 = 0;
	const char* sLocal_178 = 0;
	int iLocal_179 = 0;
	AnimScene ansLocal_180 = 0;
	AnimScene ansLocal_181 = 0;
	AnimScene ansLocal_182 = 0;
	Object obLocal_183 = 0;
	var uLocal_184 = 0;
	int iLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	BOOL bLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = -1;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 2;
	var uLocal_200 = 1;
	var uLocal_201 = 1;
	var uLocal_202 = 1;
	var uLocal_203 = 0;
	var uLocal_204 = 1;
	var uLocal_205 = 2;
	var uLocal_206 = 2;
	var uLocal_207 = 3;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 3;
	var uLocal_211 = 1;
	var uLocal_212 = 3;
	var uLocal_213 = 3;
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
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	BOOL bLocal_243 = 0;
	AnimScene ansLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	BOOL bLocal_247 = 0;
	BOOL bLocal_248 = 0;
	BOOL bLocal_249 = 0;
	int iLocal_250 = 0;
	BOOL bLocal_251 = 0;
	BOOL bLocal_252 = 0;
	BOOL bLocal_253 = 0;
	AnimScene ansLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	var uLocal_257 = 1;
	var uLocal_258 = 0;
	var uLocal_259 = -1;
	var uLocal_260 = 0;
	var uLocal_261 = -1;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = -1;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 1073741824;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 2;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 570;
	var uLocal_283 = 1065353216;
	var uLocal_284 = -1082130432;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 2;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 570;
	var uLocal_300 = 1065353216;
	var uLocal_301 = -1082130432;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 2;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 1;
	var uLocal_315 = 1;
	var uLocal_316 = -1;
	int iLocal_317 = 0;
	Object obLocal_318 = 0;
	BOOL bLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	BOOL bLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	ItemSet isLocal_325 = 0;
	ItemSet isLocal_326 = 0;
	ItemSet isLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	BOOL bLocal_330 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x9C35E259 ^0xE040A9F6
{
	int num;
	int num2;
	int num3;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_155 = 3f;
	fLocal_156 = 100000000f;
	eptLocal_158 = joaat("cs_doroetheawicklow");
	hLocal_159 = joaat("p_sandwichboardwomen01x");
	eptLocal_160 = joaat("a_f_m_nbxupperclass_01");
	eptLocal_161 = joaat("a_m_m_nbxupperclass_01");
	eptLocal_162 = joaat("a_f_o_sdupperclass_01");
	iLocal_179 = 2 - 1;
	ansLocal_244 = -1;
	bLocal_249 = true;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 32)
			bLocal_319 = true;
	
		func_1();
	}

	while (true)
	{
		BUILTIN::WAIT(0);
		func_2();
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_163) && !ENTITY::IS_ENTITY_DEAD(pedLocal_163))
		{
			if (iLocal_14 != 47 && VOLUME::DOES_VOLUME_EXIST(volLocal_174) && func_3(Global_35, volLocal_174, true, 0))
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_DYNAMIC_SCENARIO"), false);
		
			func_4(pedLocal_163, volLocal_169);
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_163))
		{
			num2 = 0;
			num3 = 0;
		
			if (!func_5(pedLocal_163, 0))
			{
				func_1();
			}
			else
			{
				func_6(pedLocal_163, &obLocal_183, 16384, 32768, 65536, "SPECIAL_PED_LIGHTWEIGHT_1_1", "SPECIAL_PED_GENERIC_INTERACT_FOCUS", "DorotheaBubble", "DorotheaConvo");
				func_7(obLocal_183, 131072);
			
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_170, true, 0))
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_DROP"), false);
			
				if (iLocal_14 > 3 && iLocal_14 < 47)
				{
					if (func_8(fLocal_155, &num2, &num3, 1104674816, 1102053376))
					{
						func_9(false);
					
						if (AUDIO::_IS_ANY_CONVERSATION_PLAYING(true))
							AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(true, false, false);
					
						func_10(&obLocal_183, 128);
						AUDIO::STOP_PED_SPEAKING(pedLocal_163, false);
						PED::SET_PED_CONFIG_FLAG(pedLocal_163, 153, false);
						TASK::TASK_FLEE_PED(pedLocal_163, Global_35, 3, 1, 6000f, -1, 0);
						PED::SET_PED_KEEP_TASK(pedLocal_163, true);
						func_1();
					}
				}
			}
		}
	
		if (!func_5(Global_35, 0))
		{
			func_1();
		}
		else if (!func_11(Global_35, Global_1396257[8 /*638*/][1 /*48*/].f_47, 0, true) || !func_11(Global_35, func_12(5), 0, true))
		{
			if (!func_13(&uLocal_146))
			{
				func_14(&uLocal_146, false);
			}
			else if (func_15(&uLocal_146) > 10f)
			{
				func_16(&uLocal_146);
				func_1();
			}
		}
		else if (func_17(8, 1, &uLocal_220, pedLocal_163))
		{
			iLocal_323 = 1;
		
			if (func_18(&uLocal_220))
				func_1();
		}
		else if (func_13(&uLocal_146))
		{
			func_16(&uLocal_146);
		}
	
		if (!func_19(obLocal_183, 128) && iLocal_14 > 3)
		{
			bLocal_251 = func_20(8, pedLocal_163, true, true) || fLocal_155 >= 60f && iLocal_14 > 3 && iLocal_323 == 0;
		
			if (bLocal_251 && !bLocal_252)
			{
				if (!bLocal_247 && bLocal_249)
				{
					bLocal_248 = true;
					bLocal_249 = false;
				}
			
				bLocal_247 = true;
			}
			else
			{
				bLocal_247 = false;
			}
		
			if (bLocal_248 && !bLocal_249)
			{
				if (func_22(&ansLocal_181, func_21(), false, true, 1, true, true, false, 0))
				{
					bLocal_248 = false;
					bLocal_249 = true;
				}
			
				bLocal_252 = false;
			}
		
			if (bLocal_247 || bLocal_248 && !bLocal_249)
			{
			}
			else
			{
				func_23();
			
				if (iLocal_14 >= 3 && !func_19(obLocal_183, 128))
					if (func_24() && func_19(obLocal_183, 2))
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_170, true, 0) && iLocal_14 < 40)
							if (!func_13(&uLocal_217))
								func_14(&uLocal_217, false);
						else if (func_13(&uLocal_217))
							func_16(&uLocal_217);
			
				if (iLocal_14 > 3 && !func_19(obLocal_183, 128))
				{
					func_25(8, 1, &pedLocal_163, &uLocal_149, &uLocal_329, fLocal_156, 1097859072, false);
					func_26();
					func_27(volLocal_172, &pedLocal_163, &uLocal_191, 5000);
					func_28();
					func_29();
				}
			
				func_30(pedLocal_163, &obLocal_183, 512, 8, 0);
			
				switch (iLocal_14)
				{
					case 0:
						HUD::TEXT_BLOCK_REQUEST("SPDEF");
						HUD::TEXT_BLOCK_REQUEST("SPDWAU");
						STREAMING::REQUEST_MODEL(eptLocal_158, false);
						STREAMING::REQUEST_MODEL(hLocal_159, false);
						STREAMING::REQUEST_MODEL(eptLocal_161, false);
						STREAMING::REQUEST_MODEL(eptLocal_160, false);
						STREAMING::REQUEST_MODEL(eptLocal_162, false);
						func_31();
						func_32(volLocal_169, "SP_DorotheaWicklow2_Block", true, 0, 0, false, -1082130432);
						POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_171, 2500607, 0, 0, -1, -1, 10);
						POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_171, 2500607, 0, 0, -1, -1, 0);
						iLocal_157 = func_34(8, 1, 9, func_33(8));
						!func_35(iLocal_157);
						iLocal_320 = iLocal_157;
						iLocal_321 = iLocal_157;
						func_36(&uLocal_220);
						func_37();
						func_38(&uLocal_117, true);
						func_39(&uLocal_117, true);
						func_40(&uLocal_117, true);
						func_41(&uLocal_117, true);
						func_42(&uLocal_117, true);
						func_43(&uLocal_117, false);
						func_44(&uLocal_117, false);
						func_45(&uLocal_117, true, true, true);
						func_46(&uLocal_117, false);
						func_47(&uLocal_117, false);
						func_48(&uLocal_117, false);
						func_49(&uLocal_117, true);
						func_50(&uLocal_117, true);
						func_51(&uLocal_117, true);
						func_52(&uLocal_117, true);
						func_53(&uLocal_117, true);
						func_54(&uLocal_117, true);
						func_55(&uLocal_117, true);
						func_56(&uLocal_117, true);
						func_57(&uLocal_117, true);
						func_58(&uLocal_117, true);
						func_59(&uLocal_117, true);
						func_60(&uLocal_117, 27);
						func_61(&uLocal_117, 27f, true);
						func_62(&uLocal_117, 27f);
						func_63(&uLocal_117, 22f);
					
						if (func_64())
							bLocal_322 = true;
					
						func_65(1);
						break;
				
					case 1:
						PED::_RESERVE_AMBIENT_PEDS(4);
					
						if (HUD::TEXT_BLOCK_IS_LOADED("SPDEF") && HUD::TEXT_BLOCK_IS_LOADED("SPDWAU") && STREAMING::HAS_MODEL_LOADED(eptLocal_158) && STREAMING::HAS_MODEL_LOADED(hLocal_159) && STREAMING::HAS_MODEL_LOADED(eptLocal_160) && STREAMING::HAS_MODEL_LOADED(eptLocal_162) && STREAMING::HAS_MODEL_LOADED(eptLocal_161) && PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 4)
							func_65(2);
						break;
				
					case 2:
						if (func_66(&pedLocal_163, eptLocal_158, 2547.3772f, -1216.0457f, 53.3068f, 358.7895f, 2, bLocal_322, !bLocal_322))
						{
							if (func_5(pedLocal_163, 0))
							{
								if (bLocal_322)
									func_67(pedLocal_163, 1689938120);
							
								func_65(3);
							}
						}
						break;
				
					case 3:
						num = 0;
					
						if (func_68(&eLocal_168, hLocal_159, 2547.9f, -1215.18f, 52.3135f) && func_71(&uLocal_164[0], eptLocal_160, &num, func_69(0), func_70(0), 2, false, true) && func_71(&uLocal_164[1], eptLocal_161, &num, func_69(1), func_70(1), 1, false, true) && func_71(&uLocal_164[2], eptLocal_162, &num, func_69(2), func_70(2), 2, false, true))
						{
							if (func_5(pedLocal_163, 0) && func_5(uLocal_164[0], 0) && func_5(uLocal_164[1], 0) && func_5(uLocal_164[2], 0))
							{
								ENTITY::SET_ENTITY_QUATERNION(eLocal_168, 0f, 0f, -0.0052f, 1f);
								AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(pedLocal_163, "special_ped_group", 0);
								PED::_ATTACH_VOLUME_TO_ENTITY(volLocal_176, pedLocal_163, 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
								func_72(pedLocal_163, 8);
								AUDIO::STOP_PED_SPEAKING(pedLocal_163, true);
								PED::_SET_PED_INTERACTION_PERSONALITY(pedLocal_163, joaat("timid"));
								PED::SET_PED_CONFIG_FLAG(pedLocal_163, 153, true);
								func_73(&uLocal_19, pedLocal_163, "DOROTHEA_WICKLOW", false);
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedLocal_163, 2547.3772f, -1216.0457f, 53.3068f, 87.45f, true, false, true);
								func_75(uLocal_164[0], MISC::GET_HASH_KEY(func_74(0)), func_69(0), func_70(0), -1, false, true, 0, -1082130432);
								func_75(uLocal_164[1], MISC::GET_HASH_KEY(func_74(1)), func_69(1), func_70(1), -1, false, true, 0, -1082130432);
								func_75(uLocal_164[2], MISC::GET_HASH_KEY(func_74(2)), func_69(2), func_70(2), -1, false, true, 0, -1082130432);
								PED::SET_PED_CONFIG_FLAG(uLocal_164[0], 130, false);
								PED::SET_PED_CONFIG_FLAG(uLocal_164[1], 130, false);
								PED::SET_PED_CONFIG_FLAG(uLocal_164[2], 130, false);
								PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), pedLocal_163, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "DorotheaBubble");
								func_76(0);
								func_77(0, 0, "SPD_UC_GRT", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, false);
								func_77(0, 1, "SPD_UC_ANT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, false);
								func_78(0, 0);
								func_10(&obLocal_183, 2097152);
								PED::_ATTACH_VOLUME_TO_ENTITY(volLocal_173, pedLocal_163, 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
								func_79(&pedLocal_163, &uLocal_184, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 20f, -1082130432);
							
								if (func_64())
									func_73(&uLocal_19, Global_35, "JOHN", false);
								else
									func_73(&uLocal_19, Global_35, "ARTHUR", false);
							
								func_65(39);
							}
						}
						break;
				
					case 4:
						if (func_19(obLocal_183, 262144) && func_19(obLocal_183, 524288))
							func_80(&obLocal_183, 524288);
					
						if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4))
						{
							bLocal_253 = false;
							func_65(42);
						}
						else if (iLocal_323 && func_81(&uLocal_220) && !func_18(&uLocal_220))
						{
							func_65(49);
						}
						else if (fLocal_155 <= 1.58f)
						{
							if (bLocal_253)
								func_82();
							else if (iLocal_324 < 2)
								func_65(46);
							else
								func_65(49);
						}
						else if (func_13(&uLocal_217) && func_15(&uLocal_217) >= 10f && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_170, true, 0))
						{
							bLocal_253 = false;
							func_16(&uLocal_217);
							func_65(45);
						}
						else
						{
							bLocal_253 = false;
							func_83();
						}
						break;
				
					case 5:
						if (func_19(obLocal_183, 4))
						{
							func_65(39);
						}
						else
						{
							func_84(&volLocal_170, &isLocal_327, &uLocal_328);
							func_85(true);
							iLocal_250 = 1;
							func_86(pedLocal_163, 1.5f, 1056964608, 12000, true, 1, SPC_LEAVE_CAMERA_CONTROL_ON, false, true);
						
							if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
							{
								func_10(&obLocal_183, 16384);
								func_10(&obLocal_183, 32768);
								bLocal_253 = true;
								func_87();
							}
						}
						break;
				
					case 6:
						break;
				
					case 7:
						if (func_22(&ansLocal_181, func_88(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 8:
						if (func_22(&ansLocal_181, func_89(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 9:
						if (func_22(&ansLocal_181, func_90(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 10:
						if (func_22(&ansLocal_181, func_91(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 11:
						if (func_22(&ansLocal_181, func_92(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 12:
						if (func_22(&ansLocal_181, func_93(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 13:
						if (func_22(&ansLocal_181, func_94(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 14:
						if (func_22(&ansLocal_181, func_95(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 15:
						if (func_22(&ansLocal_181, func_96(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 16:
						if (func_22(&ansLocal_181, func_97(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 17:
						if (func_22(&ansLocal_181, func_98(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 18:
						if (func_22(&ansLocal_181, func_99(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 19:
						if (func_22(&ansLocal_181, func_100(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 20:
						if (func_22(&ansLocal_181, func_101(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 21:
						if (func_22(&ansLocal_181, func_102(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 22:
						if (func_22(&ansLocal_181, func_103(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 23:
						if (func_22(&ansLocal_181, func_104(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 24:
						if (func_22(&ansLocal_181, func_105(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 25:
						if (func_22(&ansLocal_181, func_106(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 26:
						if (func_22(&ansLocal_181, func_107(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 27:
						if (func_22(&ansLocal_181, func_108(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 28:
						if (func_22(&ansLocal_181, func_109(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 29:
						if (func_22(&ansLocal_181, func_110(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 30:
						if (func_22(&ansLocal_181, func_111(), false, true, 1, true, true, false, 0))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 31:
						if (func_22(&ansLocal_181, func_21(), false, true, 1, true, true, false, 0))
							func_65(39);
						break;
				
					case 32:
						if (func_22(&ansLocal_181, func_112(), false, true, 1, true, true, false, 0))
							func_65(39);
						break;
				
					case 33:
						if (func_22(&ansLocal_181, func_113(), false, true, 1, true, true, false, 0))
							func_65(39);
						break;
				
					case 34:
						if (func_22(&ansLocal_181, func_114(), false, true, 1, true, true, false, 0))
							func_65(39);
						break;
				
					case 35:
						if (func_22(&ansLocal_181, func_115(), false, true, 1, true, true, false, 0))
							func_65(39);
						break;
				
					case 36:
						if (func_22(&ansLocal_181, func_116(), false, true, 1, true, true, false, 0))
							func_65(39);
						break;
				
					case 37:
						if (func_22(&ansLocal_180, func_117(), true, false, 1, true, true, false, 1))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 38:
						if (func_22(&ansLocal_180, func_118(), true, false, 1, true, true, false, 1))
							if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
								func_65(39);
							else
								func_82();
						break;
				
					case 39:
						if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4))
							func_65(42);
						else
							func_65(4);
						break;
				
					case 40:
						if (!func_19(obLocal_183, 2048))
						{
							func_119(8, 12);
							Global_40.f_11623[8 /*8*/].f_3 = func_120();
							func_121(8);
							func_10(&obLocal_183, 2048);
						}
					
						if (!func_19(obLocal_183, 8))
						{
							func_84(&volLocal_170, &isLocal_327, &uLocal_328);
							func_85(true);
							iLocal_250 = 1;
						
							if (func_86(pedLocal_163, 1.5f, 1056964608, 12000, true, true, SPC_LEAVE_CAMERA_CONTROL_ON, false, true))
								func_10(&obLocal_183, 8);
						}
					
						if (func_22(&ansLocal_182, func_122(), false, true, 1, false, true, false, 2))
						{
							if (!func_19(obLocal_183, 4))
								func_10(&obLocal_183, 4);
						
							func_85(false);
							func_123();
							func_10(&obLocal_183, 2097152);
							func_76(0);
							func_65(42);
						}
					
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_182) && ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_182, true, false) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(ansLocal_182, func_122()) && ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_182) >= func_124(40))
						{
							func_85(false);
							func_123();
							func_10(&obLocal_183, 2097152);
							func_76(0);
						}
						break;
				
					case 41:
						if (!func_19(obLocal_183, 2048))
						{
							func_119(8, 12);
							Global_40.f_11623[8 /*8*/].f_3 = func_120();
							func_121(8);
							func_10(&obLocal_183, 2048);
						}
					
						if (!func_19(obLocal_183, 8))
						{
							func_84(&volLocal_170, &isLocal_327, &uLocal_328);
							func_85(true);
							iLocal_250 = 1;
						
							if (func_86(pedLocal_163, 1.5f, 1056964608, 12000, true, true, SPC_LEAVE_CAMERA_CONTROL_ON, false, true))
								func_10(&obLocal_183, 8);
						}
					
						if (func_22(&ansLocal_182, func_125(), false, true, 1, false, true, false, 2))
						{
							if (!func_19(obLocal_183, 4))
								func_10(&obLocal_183, 4);
						
							func_85(false);
							func_123();
							func_10(&obLocal_183, 2097152);
							func_76(0);
							func_65(42);
						}
					
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_182) && ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_182, true, false) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(ansLocal_182, func_125()) && ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_182) >= func_124(41))
						{
							func_85(false);
							func_123();
							func_10(&obLocal_183, 2097152);
							func_76(0);
						}
						break;
				
					case 42:
						func_80(&obLocal_183, 64);
					
						if (func_19(obLocal_183, 4))
							func_65(39);
						else
							func_65(5);
						break;
				
					case 43:
						break;
				
					case 44:
						break;
				
					case 45:
						if (func_22(&ansLocal_181, func_112(), false, true, 1, true, true, false, 0))
							func_10(&obLocal_183, 4096);
					
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_163) && !func_19(obLocal_183, 256))
						{
							func_126();
							func_10(&obLocal_183, 256);
						}
						else if (func_19(obLocal_183, 256) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_163) && func_19(obLocal_183, 4096))
						{
							func_80(&obLocal_183, 256);
							func_80(&obLocal_183, 4096);
							func_65(39);
						}
						break;
				
					case 46:
						if (func_22(&ansLocal_181, func_112(), false, true, 1, true, true, false, 0))
							func_10(&obLocal_183, 4096);
					
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_163) && !func_19(obLocal_183, 256))
						{
							func_127();
							func_10(&obLocal_183, 256);
						}
						else if (func_19(obLocal_183, 256) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_163) && func_19(obLocal_183, 4096))
						{
							func_80(&obLocal_183, 256);
							func_80(&obLocal_183, 4096);
							func_65(39);
							bLocal_253 = true;
							iLocal_324 = iLocal_324 + 1;
						}
						break;
				
					case 47:
						func_65(49);
						break;
				
					case 48:
						break;
				
					case 49:
						func_1();
						break;
				
					default:
						break;
				}
			}
		}
	
		func_23();
	
		if (iLocal_14 >= 3 && !func_19(obLocal_183, 128))
			if (func_24() && func_19(obLocal_183, 2))
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_170, true, 0) && iLocal_14 < 40)
					if (!func_13(&uLocal_217))
						func_14(&uLocal_217, false);
				else if (func_13(&uLocal_217))
					func_16(&uLocal_217);
	
		if (iLocal_14 > 3 && !func_19(obLocal_183, 128))
		{
			func_25(8, 1, &pedLocal_163, &uLocal_149, &uLocal_329, fLocal_156, 1097859072, false);
			func_26();
			func_27(volLocal_172, &pedLocal_163, &uLocal_191, 5000);
			func_28();
			func_29();
		}
	
		func_30(pedLocal_163, &obLocal_183, 512, 8, 0);
	
		switch (iLocal_14)
		{
			case 0:
				HUD::TEXT_BLOCK_REQUEST("SPDEF");
				HUD::TEXT_BLOCK_REQUEST("SPDWAU");
				STREAMING::REQUEST_MODEL(eptLocal_158, false);
				STREAMING::REQUEST_MODEL(hLocal_159, false);
				STREAMING::REQUEST_MODEL(eptLocal_161, false);
				STREAMING::REQUEST_MODEL(eptLocal_160, false);
				STREAMING::REQUEST_MODEL(eptLocal_162, false);
				func_31();
				func_32(volLocal_169, "SP_DorotheaWicklow2_Block", true, 0, 0, false, -1082130432);
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_171, 2500607, 0, 0, -1, -1, 10);
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_171, 2500607, 0, 0, -1, -1, 0);
				iLocal_157 = func_34(8, 1, 9, func_33(8));
				!func_35(iLocal_157);
				iLocal_320 = iLocal_157;
				iLocal_321 = iLocal_157;
				func_36(&uLocal_220);
				func_37();
				func_38(&uLocal_117, true);
				func_39(&uLocal_117, true);
				func_40(&uLocal_117, true);
				func_41(&uLocal_117, true);
				func_42(&uLocal_117, true);
				func_43(&uLocal_117, false);
				func_44(&uLocal_117, false);
				func_45(&uLocal_117, true, true, true);
				func_46(&uLocal_117, false);
				func_47(&uLocal_117, false);
				func_48(&uLocal_117, false);
				func_49(&uLocal_117, true);
				func_50(&uLocal_117, true);
				func_51(&uLocal_117, true);
				func_52(&uLocal_117, true);
				func_53(&uLocal_117, true);
				func_54(&uLocal_117, true);
				func_55(&uLocal_117, true);
				func_56(&uLocal_117, true);
				func_57(&uLocal_117, true);
				func_58(&uLocal_117, true);
				func_59(&uLocal_117, true);
				func_60(&uLocal_117, 27);
				func_61(&uLocal_117, 27f, true);
				func_62(&uLocal_117, 27f);
				func_63(&uLocal_117, 22f);
			
				if (func_64())
					bLocal_322 = true;
			
				func_65(1);
				break;
		
			case 1:
				PED::_RESERVE_AMBIENT_PEDS(4);
			
				if (HUD::TEXT_BLOCK_IS_LOADED("SPDEF") && HUD::TEXT_BLOCK_IS_LOADED("SPDWAU") && STREAMING::HAS_MODEL_LOADED(eptLocal_158) && STREAMING::HAS_MODEL_LOADED(hLocal_159) && STREAMING::HAS_MODEL_LOADED(eptLocal_160) && STREAMING::HAS_MODEL_LOADED(eptLocal_162) && STREAMING::HAS_MODEL_LOADED(eptLocal_161) && PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 4)
					func_65(2);
				break;
		
			case 2:
				if (func_66(&pedLocal_163, eptLocal_158, 2547.3772f, -1216.0457f, 53.3068f, 358.7895f, 2, bLocal_322, !bLocal_322))
				{
					if (func_5(pedLocal_163, 0))
					{
						if (bLocal_322)
							func_67(pedLocal_163, 1689938120);
					
						func_65(3);
					}
				}
				break;
		
			case 3:
				num = 0;
			
				if (func_68(&eLocal_168, hLocal_159, 2547.9f, -1215.18f, 52.3135f) && func_71(&uLocal_164[0], eptLocal_160, &num, func_69(0), func_70(0), 2, false, true) && func_71(&uLocal_164[1], eptLocal_161, &num, func_69(1), func_70(1), 1, false, true) && func_71(&uLocal_164[2], eptLocal_162, &num, func_69(2), func_70(2), 2, false, true))
				{
					if (func_5(pedLocal_163, 0) && func_5(uLocal_164[0], 0) && func_5(uLocal_164[1], 0) && func_5(uLocal_164[2], 0))
					{
						ENTITY::SET_ENTITY_QUATERNION(eLocal_168, 0f, 0f, -0.0052f, 1f);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(pedLocal_163, "special_ped_group", 0);
						PED::_ATTACH_VOLUME_TO_ENTITY(volLocal_176, pedLocal_163, 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
						func_72(pedLocal_163, 8);
						AUDIO::STOP_PED_SPEAKING(pedLocal_163, true);
						PED::_SET_PED_INTERACTION_PERSONALITY(pedLocal_163, joaat("timid"));
						PED::SET_PED_CONFIG_FLAG(pedLocal_163, 153, true);
						func_73(&uLocal_19, pedLocal_163, "DOROTHEA_WICKLOW", false);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedLocal_163, 2547.3772f, -1216.0457f, 53.3068f, 87.45f, true, false, true);
						func_75(uLocal_164[0], MISC::GET_HASH_KEY(func_74(0)), func_69(0), func_70(0), -1, false, true, 0, -1082130432);
						func_75(uLocal_164[1], MISC::GET_HASH_KEY(func_74(1)), func_69(1), func_70(1), -1, false, true, 0, -1082130432);
						func_75(uLocal_164[2], MISC::GET_HASH_KEY(func_74(2)), func_69(2), func_70(2), -1, false, true, 0, -1082130432);
						PED::SET_PED_CONFIG_FLAG(uLocal_164[0], 130, false);
						PED::SET_PED_CONFIG_FLAG(uLocal_164[1], 130, false);
						PED::SET_PED_CONFIG_FLAG(uLocal_164[2], 130, false);
						PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), pedLocal_163, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "DorotheaBubble");
						func_76(0);
						func_77(0, 0, "SPD_UC_GRT", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, false);
						func_77(0, 1, "SPD_UC_ANT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, false);
						func_78(0, 0);
						func_10(&obLocal_183, 2097152);
						PED::_ATTACH_VOLUME_TO_ENTITY(volLocal_173, pedLocal_163, 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
						func_79(&pedLocal_163, &uLocal_184, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 20f, -1082130432);
					
						if (func_64())
							func_73(&uLocal_19, Global_35, "JOHN", false);
						else
							func_73(&uLocal_19, Global_35, "ARTHUR", false);
					
						func_65(39);
					}
				}
				break;
		
			case 4:
				if (func_19(obLocal_183, 262144) && func_19(obLocal_183, 524288))
					func_80(&obLocal_183, 524288);
			
				if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4))
				{
					bLocal_253 = false;
					func_65(42);
				}
				else if (iLocal_323 && func_81(&uLocal_220) && !func_18(&uLocal_220))
				{
					func_65(49);
				}
				else if (fLocal_155 <= 1.58f)
				{
					if (bLocal_253)
						func_82();
					else if (iLocal_324 < 2)
						func_65(46);
					else
						func_65(49);
				}
				else if (func_13(&uLocal_217) && func_15(&uLocal_217) >= 10f && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_170, true, 0))
				{
					bLocal_253 = false;
					func_16(&uLocal_217);
					func_65(45);
				}
				else
				{
					bLocal_253 = false;
					func_83();
				}
				break;
		
			case 5:
				if (func_19(obLocal_183, 4))
				{
					func_65(39);
				}
				else
				{
					func_84(&volLocal_170, &isLocal_327, &uLocal_328);
					func_85(true);
					iLocal_250 = 1;
					func_86(pedLocal_163, 1.5f, 1056964608, 12000, true, true, SPC_LEAVE_CAMERA_CONTROL_ON, false, true);
				
					if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
					{
						func_10(&obLocal_183, 16384);
						func_10(&obLocal_183, 32768);
						bLocal_253 = true;
						func_87();
					}
				}
				break;
		
			case 6:
				break;
		
			case 7:
				if (func_22(&ansLocal_181, func_88(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 8:
				if (func_22(&ansLocal_181, func_89(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 9:
				if (func_22(&ansLocal_181, func_90(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 10:
				if (func_22(&ansLocal_181, func_91(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 11:
				if (func_22(&ansLocal_181, func_92(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 12:
				if (func_22(&ansLocal_181, func_93(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 13:
				if (func_22(&ansLocal_181, func_94(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 14:
				if (func_22(&ansLocal_181, func_95(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 15:
				if (func_22(&ansLocal_181, func_96(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 16:
				if (func_22(&ansLocal_181, func_97(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 17:
				if (func_22(&ansLocal_181, func_98(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 18:
				if (func_22(&ansLocal_181, func_99(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 19:
				if (func_22(&ansLocal_181, func_100(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 20:
				if (func_22(&ansLocal_181, func_101(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 21:
				if (func_22(&ansLocal_181, func_102(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 22:
				if (func_22(&ansLocal_181, func_103(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 23:
				if (func_22(&ansLocal_181, func_104(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 24:
				if (func_22(&ansLocal_181, func_105(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 25:
				if (func_22(&ansLocal_181, func_106(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 26:
				if (func_22(&ansLocal_181, func_107(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 27:
				if (func_22(&ansLocal_181, func_108(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 28:
				if (func_22(&ansLocal_181, func_109(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 29:
				if (func_22(&ansLocal_181, func_110(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 30:
				if (func_22(&ansLocal_181, func_111(), false, true, 1, true, true, false, 0))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 31:
				if (func_22(&ansLocal_181, func_21(), false, true, 1, true, true, false, 0))
					func_65(39);
				break;
		
			case 32:
				if (func_22(&ansLocal_181, func_112(), false, true, 1, true, true, false, 0))
					func_65(39);
				break;
		
			case 33:
				if (func_22(&ansLocal_181, func_113(), false, true, 1, true, true, false, 0))
					func_65(39);
				break;
		
			case 34:
				if (func_22(&ansLocal_181, func_114(), false, true, 1, true, true, false, 0))
					func_65(39);
				break;
		
			case 35:
				if (func_22(&ansLocal_181, func_115(), false, true, 1, true, true, false, 0))
					func_65(39);
				break;
		
			case 36:
				if (func_22(&ansLocal_181, func_116(), false, true, 1, true, true, false, 0))
					func_65(39);
				break;
		
			case 37:
				if (func_22(&ansLocal_180, func_117(), true, false, 1, true, true, false, 1))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 38:
				if (func_22(&ansLocal_180, func_118(), true, false, 1, true, true, false, 1))
					if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4) || fLocal_155 <= 1.58f)
						func_65(39);
					else
						func_82();
				break;
		
			case 39:
				if (func_19(obLocal_183, 2) && !func_19(obLocal_183, 4))
					func_65(42);
				else
					func_65(4);
				break;
		
			case 40:
				if (!func_19(obLocal_183, 2048))
				{
					func_119(8, 12);
					Global_40.f_11623[8 /*8*/].f_3 = func_120();
					func_121(8);
					func_10(&obLocal_183, 2048);
				}
			
				if (!func_19(obLocal_183, 8))
				{
					func_84(&volLocal_170, &isLocal_327, &uLocal_328);
					func_85(true);
					iLocal_250 = 1;
				
					if (func_86(pedLocal_163, 1.5f, 1056964608, 12000, true, true, SPC_LEAVE_CAMERA_CONTROL_ON, false, true))
						func_10(&obLocal_183, 8);
				}
			
				if (func_22(&ansLocal_182, func_122(), false, true, 1, false, true, false, 2))
				{
					if (!func_19(obLocal_183, 4))
						func_10(&obLocal_183, 4);
				
					func_85(false);
					func_123();
					func_10(&obLocal_183, 2097152);
					func_76(0);
					func_65(42);
				}
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_182) && ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_182, true, false) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(ansLocal_182, func_122()) && ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_182) >= func_124(40))
				{
					func_85(false);
					func_123();
					func_10(&obLocal_183, 2097152);
					func_76(0);
				}
				break;
		
			case 41:
				if (!func_19(obLocal_183, 2048))
				{
					func_119(8, 12);
					Global_40.f_11623[8 /*8*/].f_3 = func_120();
					func_121(8);
					func_10(&obLocal_183, 2048);
				}
			
				if (!func_19(obLocal_183, 8))
				{
					func_84(&volLocal_170, &isLocal_327, &uLocal_328);
					func_85(true);
					iLocal_250 = 1;
				
					if (func_86(pedLocal_163, 1.5f, 1056964608, 12000, true, true, SPC_LEAVE_CAMERA_CONTROL_ON, false, true))
						func_10(&obLocal_183, 8);
				}
			
				if (func_22(&ansLocal_182, func_125(), false, true, 1, false, true, false, 2))
				{
					if (!func_19(obLocal_183, 4))
						func_10(&obLocal_183, 4);
				
					func_85(false);
					func_123();
					func_10(&obLocal_183, 2097152);
					func_76(0);
					func_65(42);
				}
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_182) && ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_182, true, false) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(ansLocal_182, func_125()) && ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_182) >= func_124(41))
				{
					func_85(false);
					func_123();
					func_10(&obLocal_183, 2097152);
					func_76(0);
				}
				break;
		
			case 42:
				func_80(&obLocal_183, 64);
			
				if (func_19(obLocal_183, 4))
					func_65(39);
				else
					func_65(5);
				break;
		
			case 43:
				break;
		
			case 44:
				break;
		
			case 45:
				if (func_22(&ansLocal_181, func_112(), false, true, 1, true, true, false, 0))
					func_10(&obLocal_183, 4096);
			
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_163) && !func_19(obLocal_183, 256))
				{
					func_126();
					func_10(&obLocal_183, 256);
				}
				else if (func_19(obLocal_183, 256) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_163) && func_19(obLocal_183, 4096))
				{
					func_80(&obLocal_183, 256);
					func_80(&obLocal_183, 4096);
					func_65(39);
				}
				break;
		
			case 46:
				if (func_22(&ansLocal_181, func_112(), false, true, 1, true, true, false, 0))
					func_10(&obLocal_183, 4096);
			
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_163) && !func_19(obLocal_183, 256))
				{
					func_127();
					func_10(&obLocal_183, 256);
				}
				else if (func_19(obLocal_183, 256) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_163) && func_19(obLocal_183, 4096))
				{
					func_80(&obLocal_183, 256);
					func_80(&obLocal_183, 4096);
					func_65(39);
					bLocal_253 = true;
					iLocal_324 = iLocal_324 + 1;
				}
				break;
		
			case 47:
				func_65(49);
				break;
		
			case 48:
				break;
		
			case 49:
				func_1();
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_1() // Position - 0x164F Hash - 0xB0783D47 ^0xB6E0ECA6
{
	if (ITEMSET::IS_ITEMSET_VALID(isLocal_327))
		ITEMSET::DESTROY_ITEMSET(isLocal_327);

	if (ITEMSET::IS_ITEMSET_VALID(isLocal_325))
		ITEMSET::DESTROY_ITEMSET(isLocal_325);

	if (ITEMSET::IS_ITEMSET_VALID(isLocal_326))
		ITEMSET::DESTROY_ITEMSET(isLocal_326);

	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && iLocal_250 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		iLocal_250 = 0;
	}

	func_128(&uLocal_220);
	func_129(&pedLocal_163, &uLocal_184, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 20f, true);
	func_130();
	func_131(8);
	func_132(&uLocal_177, true);
	func_133();
	AUDIO::STOP_PED_SPEAKING(pedLocal_163, false);
	func_134();
	func_135(pedLocal_163);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "DorotheaBubble");
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "DorotheaConvo");

	if (func_35(iLocal_157) && func_136(iLocal_157) || func_137(iLocal_157))
		func_138(iLocal_157, false, 2);

	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_163))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(pedLocal_163, 0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_163);
	}

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_163))
	{
		PED::SET_PED_CONFIG_FLAG(pedLocal_163, 153, false);
	
		if (!bLocal_319)
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_163);
		else
			PED::DELETE_PED(&pedLocal_163);
	}

	func_9(bLocal_319);

	if (ENTITY::DOES_ENTITY_EXIST(eLocal_168))
		if (!bLocal_319)
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&eLocal_168);
		else
			OBJECT::DELETE_OBJECT(&eLocal_168);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_180))
		ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_180);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_182))
		ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_182);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_181))
		ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_181);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_169))
	{
		func_139(volLocal_169);
		VOLUME::DELETE_VOLUME(volLocal_169);
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_171))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_171);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volLocal_171);
		VOLUME::DELETE_VOLUME(volLocal_171);
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_170))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_170);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volLocal_170);
		VOLUME::DELETE_VOLUME(volLocal_170);
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_172))
		VOLUME::DELETE_VOLUME(volLocal_172);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_173))
		VOLUME::DELETE_VOLUME(volLocal_173);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_174))
		VOLUME::DELETE_VOLUME(volLocal_174);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_175))
		VOLUME::DELETE_VOLUME(volLocal_175);

	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[8 /*638*/][1 /*48*/].f_47))
		VOLUME::DELETE_VOLUME(Global_1396257[8 /*638*/][1 /*48*/].f_47);

	func_140(volLocal_176);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2() // Position - 0x1874 Hash - 0x2A95C2A8 ^0x345BA4AA
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_163) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedLocal_163) && ENTITY::IS_ENTITY_DEAD(Global_35))
		return;

	if (!func_13(&uLocal_152))
	{
		func_141(&uLocal_152, 0f);
	}
	else if (func_142(&uLocal_152) >= 1000)
	{
		fLocal_155 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_163, true, false), func_143(PLAYER::GET_PLAYER_INDEX()), true);
		fLocal_156 = fLocal_155;
		func_16(&uLocal_152);
	}

	return;
}

BOOL func_3(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x18F0 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

void func_4(Ped pedParam0, Volume volParam1) // Position - 0x1926 Hash - 0x9151FE2B ^0x601E4183
{
	if (func_144(pedParam0))
		if (func_11(Global_35, volParam1, 0, true))
			LAW::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), joaat("crime_loitering"), 0, 0, -1);

	return;
}

BOOL func_5(Ped pedParam0, Object obParam1) // Position - 0x1955 Hash - 0x9BD5E73F ^0xD367FD44
{
	Object object;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	object = obParam1;

	if (object == 0)
		return true;

	if (func_19(object, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_19(object, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_19(object, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_19(object, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_19(object, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_19(object, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_19(object, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_19(object, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

void func_6(Ped pedParam0, var uParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8) // Position - 0x1A54 Hash - 0x11EAD15B ^0xF4F3BF2F
{
	if (!func_145(*uParam1, iParam2))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		return;
	}

	if (func_145(*uParam1, iParam3))
	{
		if (!func_145(*uParam1, iParam4))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), pedParam0, sParam6, 0f, 0f, 0f, 0, sParam8);
			func_146(uParam1, iParam4);
		}
	}
	else if (func_145(*uParam1, iParam4))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), pedParam0, sParam5, 0f, 0f, 0f, 0, sParam7);
		func_147(uParam1, iParam4);
	}

	return;
}

void func_7(Object obParam0, int iParam1) // Position - 0x1B09 Hash - 0x78B95CCA ^0xED91AA8
{
	if (func_145(obParam0, iParam1))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		PAD::DISABLE_ALL_CONTROL_ACTIONS(CAMERA_CONTROL);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON"), true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON_NEG"), true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON_POS"), true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		func_148();
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
			PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
	
		func_149();
	}
	else if (PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
	}

	return;
}

BOOL func_8(float fParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x1BA0 Hash - 0x8B91F42D ^0x8B91F42D
{
	BOOL flag;

	if (func_150(pedLocal_163, 0, &uLocal_117, &iLocal_145, 0, 0))
	{
		switch (iLocal_145)
		{
			case 2:
			case 512:
			case 2048:
				if (fParam0 < iParam4)
					*uParam1 = 0;
				break;
		
			case 4:
			case 8:
			case 32:
			case 64:
			case 256:
			case 1024:
			case 4096:
			case 8192:
			case 16384:
			case 524288:
				if (fParam0 < iParam3)
					*uParam1 = 1;
				break;
		
			case 16:
			case 128:
				if (fParam0 < iParam4)
					*uParam1 = 1;
				break;
		
			default:
				if (fParam0 < iParam4)
					*uParam1 = 1;
				break;
		}
	
		flag = true;
	}

	if (flag)
	{
		if (PED::IS_PED_INJURED(pedLocal_163) || PED::IS_PED_RAGDOLL(pedLocal_163) || TASK::IS_PED_GETTING_UP(pedLocal_163) || PED::IS_PED_LASSOED(pedLocal_163) || PED::IS_PED_BEING_STEALTH_KILLED(pedLocal_163) || PED::IS_PED_BEING_DRAGGED(pedLocal_163) || PED::IS_PED_BEING_STUNNED(pedLocal_163, 0) || PED::IS_PED_FALLING_OVER(pedLocal_163) || PED::IS_PED_HOGTIED(pedLocal_163) || TASK::IS_PED_IN_HIT_REACT(pedLocal_163) || PED::IS_PED_PRONE(pedLocal_163))
			*uParam2 = 0;
		else
			*uParam2 = 1;
	
		func_151(8);
		return true;
	}

	return false;
}

void func_9(BOOL bParam0) // Position - 0x1CF9 Hash - 0x1270788 ^0x2F88950F
{
	int i;
	int j;

	if (bParam0)
	{
		for (i = 0; i < 3; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_164[i]))
				func_152(&uLocal_164[i], bParam0);
		}
	}
	else
	{
		for (j = 0; j < 3; j = j + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_164[j]))
			{
				if (!TASK::_0xBEDBE39B5FD98FD6(uLocal_164[j]) && !PED::IS_PED_RESPONDING_TO_THREAT(uLocal_164[j]))
					TASK::TASK_MOVE_IN_TRAFFIC(uLocal_164[j], -1082130432, 0, 0);
			
				PED::SET_PED_KEEP_TASK(uLocal_164[j], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_164[j]);
			}
		}
	
		func_153();
	}

	return;
}

void func_10(var uParam0, int iParam1) // Position - 0x1DA1 Hash - 0xF55E891F ^0xF55E891F
{
	func_146(uParam0, iParam1);
	return;
}

BOOL func_11(Ped pedParam0, Volume volParam1, int iParam2, BOOL bParam3) // Position - 0x1DB1 Hash - 0x425E360D ^0xB9BEF16F
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, true, 0);
}

Volume func_12(int iParam0) // Position - 0x1DE5 Hash - 0xE4DA9E55 ^0x6DBF788A
{
	if (!func_154(iParam0))
		return 0;

	return Global_1888801[iParam0 /*35*/].f_3;
}

BOOL func_13(var uParam0) // Position - 0x1E05 Hash - 0x5001E582 ^0x5001E582
{
	return func_155(*uParam0, 1);
}

void func_14(var uParam0, BOOL bParam1) // Position - 0x1E15 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_13(uParam0))
		func_156(uParam0);

	return;
}

float func_15(var uParam0) // Position - 0x1E35 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_13(uParam0))
		return uParam0->f_1;

	if (func_157(uParam0))
		return uParam0->f_2;

	return func_158() - uParam0->f_1;
}

void func_16(var uParam0) // Position - 0x1E6A Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_17(int iParam0, int iParam1, var uParam2, Ped pedParam3) // Position - 0x1E80 Hash - 0x540B5813 ^0x255543BD
{
	eStackSize stackSize;
	eStackSize stackSize2;
	eStackSize stackSize3;
	BOOL flag;

	if (MISC::GET_FRAME_COUNT() % 10 == 0)
	{
		if (uParam2->f_1)
			if (func_159(0) == 1 || func_159(0) == 2 || func_159(0) == 8 || func_160(Global_1935630, 2048))
				func_10(uParam2, 2);
	
		if (uParam2->f_2)
			if (func_159(0) == 11)
				func_10(uParam2, 4);
	
		if (uParam2->f_4)
			if (func_159(0) == 6)
				func_10(uParam2, 8);
	
		if (uParam2->f_5)
			if (Global_1394141.f_1328)
				func_10(uParam2, 16);
	}

	if (MISC::GET_FRAME_COUNT() % 30 == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_161(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_161(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				stackSize = func_120();
				stackSize2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				stackSize3 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
			
				if (func_161(stackSize3) > func_161(stackSize2))
					if (func_161(stackSize) > func_161(stackSize3) + 1 || func_161(stackSize) < func_161(stackSize2))
						func_10(uParam2, 32);
				else if (func_161(stackSize) > func_161(stackSize3) + 1 && func_161(stackSize) < func_161(stackSize2))
					func_10(uParam2, 32);
			}
		}
	
		if (uParam2->f_7)
		{
			flag = false;
		
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
					if (func_162(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_162(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]) || func_163(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_163(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
						flag = true;
			
				if (!flag)
					if (!func_164(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
						func_10(uParam2, 64);
			}
		}
	
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_165(&pedParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_166(&pedParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_13(&(uParam2->f_13)))
					{
						func_141(&(uParam2->f_13), 0f);
					}
					else if (func_142(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_16(&(uParam2->f_13));
						func_10(uParam2, 512);
					}
				
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_13(&(uParam2->f_13)))
						func_16(&(uParam2->f_13));
				
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
	
		if (uParam2->f_9)
			if (func_167())
				func_10(uParam2, 1024);
	
		if (uParam2->f_10)
			if (func_168())
				func_10(uParam2, 2048);
	
		if (func_160(Global_1935630, 16384) || Global_1430231.f_4)
			func_10(uParam2, 128);
	
		if (func_169(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
			func_10(uParam2, 256);
	}

	if (func_19(*uParam2, 2) || func_19(*uParam2, 4) || func_19(*uParam2, 8) || func_19(*uParam2, 16) || func_19(*uParam2, 32) || func_19(*uParam2, 64) || func_19(*uParam2, 128) || func_19(*uParam2, 256) || func_19(*uParam2, 512) || func_19(*uParam2, 1024) || func_19(*uParam2, 2048))
		return true;

	return false;
}

BOOL func_18(var uParam0) // Position - 0x229E Hash - 0xA771B8A9 ^0x2541C43E
{
	if (func_19(*uParam0, 2) || func_19(*uParam0, 4) || func_19(*uParam0, 16) || func_19(*uParam0, 128) || func_19(*uParam0, 1024) || func_19(*uParam0, 2048))
		return true;

	return false;
}

BOOL func_19(Object obParam0, Object obParam1) // Position - 0x2302 Hash - 0x178D9C09 ^0x178D9C09
{
	return obParam0 && obParam1 != false;
}

BOOL func_20(int iParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2311 Hash - 0xE60C24AE ^0x89E35AED
{
	if (bParam3)
		if (func_170())
			return true;

	if (!PED::IS_PED_INJURED(pedParam1))
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam1, true, false)) < 18f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedParam1))
			return false;

	if (bParam2)
		if (func_159(0) == 7 || func_171())
			return true;

	if (func_169(&(Global_1396257[iParam0 /*638*/].f_626), 1024))
		return true;

	return false;
}

char* func_21() // Position - 0x2395 Hash - 0xB1F6D476 ^0xB1F6D476
{
	return "pbl_idle_a";
}

BOOL func_22(var uParam0, char* sParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Position - 0x23A0 Hash - 0xE7D0C4E8 ^0x3D2B16D9
{
	BOOL isAnimSceneLoaded;
	BOOL flag;
	BOOL flag2;
	char* sectionName;
	char* sectionName2;

	ansLocal_254 = *uParam0;
	bLocal_252 = true;

	switch (iLocal_246)
	{
		case 0:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
				iLocal_246 = 3;
			else
				iLocal_246 = 1;
			break;
	
		case 1:
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(func_172(iParam8), 0, func_173(iParam8), false, true);
			iLocal_246 = 2;
			break;
	
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
				iLocal_246 = 3;
			break;
	
		case 3:
			isAnimSceneLoaded = ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false);
			flag = ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true);
		
			if (!isAnimSceneLoaded && !flag)
				iLocal_246 = 4;
			else if (flag)
				iLocal_246 = 5;
			else if (isAnimSceneLoaded)
				iLocal_246 = 7;
			break;
	
		case 4:
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			iLocal_246 = 5;
			break;
	
		case 5:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
				iLocal_246 = 6;
			break;
	
		case 6:
			func_174(uParam0, iParam8);
			iLocal_246 = 7;
			break;
	
		case 7:
			func_175(uParam0, bParam5, bParam7);
			iLocal_246 = 8;
			break;
	
		case 8:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam0, false))
				ANIMSCENE::START_ANIM_SCENE(*uParam0);
		
			iLocal_246 = 9;
			break;
	
		case 9:
			isAnimSceneLoaded = ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, sParam1);
			flag2 = ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam0, sParam1);
		
			if (!isAnimSceneLoaded && !flag2)
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);
			else if (!flag2 && isAnimSceneLoaded)
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1, true);
			else if (flag2)
				iLocal_246 = 10;
			break;
	
		case 10:
			if (ansLocal_244 != -1)
				if (ansLocal_244 == *uParam0)
					func_176(&ansLocal_244, sLocal_178);
				else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_244) && ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_244, true, false))
					ANIMSCENE::RESET_ANIM_SCENE(ansLocal_244, func_173(iLocal_245));
		
			ansLocal_244 = *uParam0;
			sLocal_178 = sParam1;
			iLocal_245 = iParam8;
			iLocal_246 = 11;
			break;
	
		case 11:
			if (!bParam5)
			{
				sectionName = "s_base";
				sectionName2 = "s_base_end";
			}
			else
			{
				sectionName = "s_base";
				sectionName2 = "s_base";
			}
		
			if (bLocal_190)
			{
				if (func_19(obLocal_183, 128))
				{
					bLocal_190 = false;
					iLocal_246 = 12;
				}
				else if (func_19(obLocal_183, 64) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_163))
				{
					bLocal_190 = false;
					iLocal_246 = 12;
				}
			}
			else if (bParam6)
			{
				if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam0, sectionName2, true) && bParam3)
					iLocal_246 = 12;
				else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(*uParam0, sectionName, true) && bParam2)
					iLocal_246 = 12;
				else if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(*uParam0, false))
					iLocal_246 = 12;
				else if (func_177())
					iLocal_246 = 12;
			}
			break;
	
		case 12:
			func_178();
			iLocal_246 = 0;
			bLocal_252 = false;
			return true;
	}

	return false;
}

void func_23() // Position - 0x264B Hash - 0xCE5D9AB0 ^0xCE5D9AB0
{
	if (func_179())
	{
		bLocal_330 = false;
	
		if (func_180(iLocal_317) > -1)
		{
			if (func_181())
			{
				func_182(&uLocal_257[iLocal_317 /*59*/], false);
				func_183(&uLocal_257[iLocal_317 /*59*/], 0);
			
				if (!func_19(obLocal_318, 2))
				{
					func_184(&pedLocal_163);
					func_185(&(uLocal_257[iLocal_317 /*59*/].f_21), 0, false, true, false);
				}
			}
		}
	}
	else if (!bLocal_330)
	{
		func_182(&uLocal_257[iLocal_317 /*59*/], false);
		func_184(&pedLocal_163);
		func_183(&uLocal_257[iLocal_317 /*59*/], 0);
		func_185(&(uLocal_257[iLocal_317 /*59*/].f_21), 0, false, true, false);
		bLocal_330 = true;
	}

	return;
}

BOOL func_24() // Position - 0x26EE Hash - 0x19FC090C ^0x19FC090C
{
	if (iLocal_16 >= 6)
		return true;

	return false;
}

int func_25(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, BOOL bParam7) // Position - 0x2701 Hash - 0x7BECED45 ^0x18ECA136
{
	if (*uParam4)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630.f_12)
		return 0;

	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5 = Global_40.f_11623[iParam0 /*8*/].f_5 + 1;
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_120();
			*uParam4 = 1;
			return 1;
		}
	}

	if (fParam5 == 0f)
		if (!func_186(Global_35, *uParam2, iParam6, true))
			return 0;
	else if (fParam5 > iParam6)
		return 0;

	if (!func_13(uParam3))
	{
		func_141(uParam3, 0f);
	}
	else if (func_15(uParam3) >= 2f)
	{
		if (!func_187(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_151(iParam0);
			*uParam4 = 1;
			func_16(uParam3);
			return 1;
		}
		else
		{
			func_151(iParam0);
			*uParam4 = 1;
			func_16(uParam3);
			return 1;
		}
	}

	return 0;
}

void func_26() // Position - 0x27F8 Hash - 0x6D82E7E9 ^0xEE809BBA
{
	if (iLocal_185 < 4)
		if (iLocal_14 >= 7 && iLocal_14 <= 38)
			func_188(&pedLocal_163, &uLocal_189, &uLocal_186, &iLocal_185, 4, 0, 7000, 0);

	return;
}

void func_27(Volume volParam0, var uParam1, Any* panParam2, int iParam3) // Position - 0x282A Hash - 0x930FB070 ^0x87720EAA
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam1))
		return;

	if (Global_1935630.f_12)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volParam0, true, 0))
		return;
	else
		panParam2->f_3 = Global_35;

	*panParam2 = { 0f, 0f, 0f };
	panParam2->f_4 = 21030;
	panParam2->f_8 = 4;
	panParam2->f_19 = 3;
	panParam2->f_20 = 2;
	panParam2->f_21 = 3;
	panParam2->f_22 = 3;
	panParam2->f_13 = 3;
	panParam2->f_7 = iParam3;
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*uParam1, panParam2);
	return;
}

void func_28() // Position - 0x28AF Hash - 0x2E38F55A ^0xA1401239
{
	if (!func_19(obLocal_183, 262144) && fLocal_156 <= 16f)
	{
		func_10(&obLocal_183, 262144);
		func_10(&obLocal_183, 524288);
	}

	return;
}

void func_29() // Position - 0x28E6 Hash - 0x5411286C ^0x2F0B66C6
{
	if (fLocal_156 <= 23f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_164[0]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_164[0], true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_164[0]);
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_164[1]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_164[1], true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_164[1]);
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_164[2]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_164[2], true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_164[2]);
		}
	}

	return;
}

void func_30(Ped pedParam0, var uParam1, int iParam2, int iParam3, int iParam4) // Position - 0x2956 Hash - 0xADE9EDC3 ^0x77996A42
{
	char* audioName;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || Global_1935630.f_12)
		return;

	audioName = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);

	if (iParam4 == 0f)
	{
		if (func_186(pedParam0, Global_35, 15f, true))
		{
			if (!func_145(*uParam1, iParam2))
				if (AUDIO::_START_AUDIO_SCENESET(audioName, "special_ped_scenes"))
					func_146(uParam1, iParam2);
		}
		else if (func_145(*uParam1, iParam2))
		{
			AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
			func_147(uParam1, iParam2);
		}
	}
	else if (iParam4 <= 15f)
	{
		if (!func_145(*uParam1, iParam2))
			if (AUDIO::_START_AUDIO_SCENESET(audioName, "special_ped_scenes"))
				func_146(uParam1, iParam2);
	}
	else if (func_145(*uParam1, iParam2))
	{
		AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
		func_147(uParam1, iParam2);
	}

	return;
}

void func_31() // Position - 0x2A23 Hash - 0x7C66F9EF ^0x5F70B26C
{
	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_169))
		volLocal_169 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(2547.416f, -1215.948f, 52.332f, 0f, 0f, 0f, 40f, 40f, 40f, "RandomEventBlock");

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_170))
	{
		volLocal_170 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Trigger");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_170, 2543.4167f, -1213.3477f, 52.70186f, 0f, 0f, 0f, 6.149397f, 6.646178f, 5.845132f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_170, 2545.6304f, -1218.4484f, 52.70186f, 0f, 0f, 0f, 1.699921f, 3.769435f, 5.845132f);
	}

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_171))
		volLocal_171 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2547.2139f, -1215.0956f, 54.232582f, 0f, 0f, 0f, 5.137221f, 3.459048f, 4f, "StayAway");

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_172))
		volLocal_172 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2542.0522f, -1215.4673f, 58.018524f, 0f, 0f, 0f, 7f, 10f, 6f, "LookIKVolume");

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_173))
		volLocal_173 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2547.2139f, -1215.0956f, 54.232582f, 0f, 0f, 0f, 3f, 3f, 6f, "Focus");

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_174))
		volLocal_174 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2543.8862f, -1217.6216f, 52.59053f, 0f, 0f, 0f, 6.970812f, 8.071027f, 5.918638f, "DorotheaNoSit");

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_175))
		volLocal_175 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2544.2053f, -1216.4086f, 53.233456f, 0f, 0f, 0f, 5.570727f, 8.174628f, 4.405167f, "DorotheaConvoLeave");

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_176))
	{
		volLocal_176 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volCylinder"), 2542.0522f, -1215.4673f, 58.018524f, 0f, 0f, 0f, 1.85f, 1.85f, 10f);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(volLocal_176, false);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(volLocal_176, true);
	}

	return;
}

Volume func_32(Volume volParam0, char* sParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x2BF6 Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_190(volumeCoords, volumeScale, sParam1, bParam2, eParam3, iParam4, bParam5, iParam6);
	return volume;
}

Hash func_33(int iParam0) // Position - 0x2C3A Hash - 0xB8EC44B7 ^0x6DBAB464
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

int func_34(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x2DEF Hash - 0x71EF3E96 ^0x557A7961
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
				num2 = &func_114;
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
				num = 16201;
				num2 = 19200;
				break;
		
			default:
				return -1;
		}
	}

	if (num2 >= func_191())
		num2 = func_191();

	flag = func_192(num3, num4, iParam2);

	if (Global_1572887.f_12 == -1)
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_193(num5) == flag)
				return num5;
		
			if (func_193(num5) == false)
				return func_194(num3, num4, iParam2, i, hParam3);
		}
	
		num = 751;
		num2 = 770;
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_193(num5) == flag)
				return num5;
		
			if (func_193(num5) == false)
				return func_194(num3, num4, iParam2, i, hParam3);
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
				return func_194(num3, num4, iParam2, i, 0);
		}
	}

	return -1;
}

BOOL func_35(int iParam0) // Position - 0x30AA Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_36(var uParam0) // Position - 0x30DD Hash - 0xA2D74454 ^0xF28871D5
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 1;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
	return;
}

void func_37() // Position - 0x312C Hash - 0xFBC4342C ^0xFBC4342C
{
	if (func_35(iLocal_320))
		iLocal_15 = func_195(iLocal_320);

	if (func_35(iLocal_321))
		iLocal_242 = func_196(iLocal_321);

	return;
}

void func_38(var uParam0, BOOL bParam1) // Position - 0x315A Hash - 0x97140DD8 ^0xF9889272
{
	if (bParam1)
		func_197(&(uParam0->f_1), 16384);
	else
		func_198(&(uParam0->f_1), 16384);

	return;
}

void func_39(var uParam0, BOOL bParam1) // Position - 0x3180 Hash - 0x97140DD8 ^0xBDBF7A5
{
	if (bParam1)
		func_197(&(uParam0->f_1), 2048);
	else
		func_198(&(uParam0->f_1), 2048);

	return;
}

void func_40(var uParam0, BOOL bParam1) // Position - 0x31A6 Hash - 0x97140DD8 ^0x96C23302
{
	if (bParam1)
		func_197(&(uParam0->f_1), 256);
	else
		func_198(&(uParam0->f_1), 256);

	return;
}

void func_41(var uParam0, BOOL bParam1) // Position - 0x31CC Hash - 0x6E38DCCC ^0x27E8693B
{
	if (bParam1)
	{
		func_198(uParam0, 16);
	}
	else
	{
		func_197(uParam0, 67108864);
		func_197(uParam0, 16);
	}

	return;
}

void func_42(var uParam0, BOOL bParam1) // Position - 0x31F7 Hash - 0x32CE93C6 ^0x60BFF41C
{
	if (bParam1)
		func_197(&(uParam0->f_1), 128);
	else
		func_198(&(uParam0->f_1), 128);

	return;
}

void func_43(var uParam0, BOOL bParam1) // Position - 0x321B Hash - 0x9CA625A6 ^0xD96D8959
{
	if (bParam1)
		func_198(uParam0, 256);
	else
		func_197(uParam0, 256);

	return;
}

void func_44(var uParam0, BOOL bParam1) // Position - 0x323D Hash - 0xC16273CD ^0x7A71BBFC
{
	if (bParam1)
		func_198(uParam0, 524288);
	else
		func_197(uParam0, 524288);

	return;
}

void func_45(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3261 Hash - 0x3145AA70 ^0xBCD5B3EB
{
	if (!bParam1)
		func_198(uParam0, 268435456);
	else
		func_197(uParam0, 268435456);

	if (!bParam2)
		func_198(uParam0, 1073741824);
	else
		func_197(uParam0, 1073741824);

	if (!bParam3)
		func_198(uParam0, 536870912);
	else
		func_197(uParam0, 536870912);

	return;
}

void func_46(var uParam0, BOOL bParam1) // Position - 0x32C6 Hash - 0x76250B73 ^0xFF9F293B
{
	if (bParam1)
		func_197(&(uParam0->f_1), 131072);
	else
		func_198(&(uParam0->f_1), 131072);

	return;
}

void func_47(var uParam0, BOOL bParam1) // Position - 0x32EE Hash - 0x57EE9974 ^0x57EE9974
{
	if (bParam1)
		func_198(uParam0, 4);
	else
		func_197(uParam0, 4);

	return;
}

void func_48(var uParam0, BOOL bParam1) // Position - 0x330C Hash - 0xCB123803 ^0xCB123803
{
	if (bParam1)
		func_198(uParam0, 2);
	else
		func_197(uParam0, 2);

	return;
}

void func_49(var uParam0, BOOL bParam1) // Position - 0x332A Hash - 0xF7B0944E ^0xC84C2F80
{
	if (bParam1)
		func_197(&(uParam0->f_1), 2);
	else
		func_198(&(uParam0->f_1), 2);

	return;
}

void func_50(var uParam0, BOOL bParam1) // Position - 0x334C Hash - 0x6418D0A4 ^0x15BADFF8
{
	if (bParam1)
		func_197(&(uParam0->f_1), 8);
	else
		func_198(&(uParam0->f_1), 8);

	return;
}

void func_51(var uParam0, BOOL bParam1) // Position - 0x3370 Hash - 0x3BE1C7D2 ^0x3BE1C7D2
{
	if (bParam1)
		func_198(uParam0, 128);
	else
		func_197(uParam0, 128);

	return;
}

void func_52(var uParam0, BOOL bParam1) // Position - 0x3390 Hash - 0x776268CE ^0x776268CE
{
	if (bParam1)
		func_198(uParam0, 8);
	else
		func_197(uParam0, 8);

	return;
}

void func_53(var uParam0, BOOL bParam1) // Position - 0x33B0 Hash - 0x82AFDBEA ^0x82AFDBEA
{
	if (bParam1)
		func_198(uParam0, 32);
	else
		func_197(uParam0, 32);

	return;
}

void func_54(var uParam0, BOOL bParam1) // Position - 0x33D0 Hash - 0xB272A69C ^0x2A37F53B
{
	if (bParam1)
		func_197(&(uParam0->f_1), 4);
	else
		func_198(&(uParam0->f_1), 4);

	return;
}

void func_55(var uParam0, BOOL bParam1) // Position - 0x33F2 Hash - 0x97140DD8 ^0xA3B87048
{
	if (bParam1)
		func_197(&(uParam0->f_1), 1024);
	else
		func_198(&(uParam0->f_1), 1024);

	return;
}

void func_56(var uParam0, BOOL bParam1) // Position - 0x3418 Hash - 0x76250B73 ^0x1D0F495F
{
	if (bParam1)
		func_197(&(uParam0->f_1), 524288);
	else
		func_198(&(uParam0->f_1), 524288);

	return;
}

void func_57(var uParam0, BOOL bParam1) // Position - 0x3440 Hash - 0xC16273CD ^0x19098BB1
{
	if (bParam1)
		func_198(uParam0, 1048576);
	else
		func_197(uParam0, 1048576);

	return;
}

void func_58(var uParam0, BOOL bParam1) // Position - 0x3464 Hash - 0xC16273CD ^0x9BCFEF67
{
	if (bParam1)
		func_198(uParam0, 262144);
	else
		func_197(uParam0, 262144);

	return;
}

void func_59(var uParam0, BOOL bParam1) // Position - 0x3488 Hash - 0xC115F03A ^0x2E6EAB19
{
	if (bParam1)
		func_197(&(uParam0->f_1), 16);
	else
		func_198(&(uParam0->f_1), 16);

	return;
}

void func_60(var uParam0, int iParam1) // Position - 0x34AC Hash - 0x4F8BE4B5 ^0x8254350D
{
	uParam0->f_21 = iParam1;
	return;
}

void func_61(var uParam0, float fParam1, BOOL bParam2) // Position - 0x34BA Hash - 0x686A322C ^0x571B0490
{
	uParam0->f_22 = fParam1;

	if (bParam2)
		func_199(uParam0, fParam1);

	return;
}

void func_62(var uParam0, float fParam1) // Position - 0x34D5 Hash - 0x4F8BE4B5 ^0xBFDDA9A4
{
	uParam0->f_24 = fParam1;
	return;
}

void func_63(var uParam0, float fParam1) // Position - 0x34E3 Hash - 0x4F8BE4B5 ^0xC5C29ABC
{
	uParam0->f_25 = fParam1;
	return;
}

BOOL func_64() // Position - 0x34F1 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_200() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

void func_65(int iParam0) // Position - 0x3516 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_14 = iParam0;
	return;
}

BOOL func_66(var uParam0, ePedType eptParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, BOOL bParam7, BOOL bParam8) // Position - 0x3522 Hash - 0x59CDDA6C ^0xF1CC557D
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
	
		if (!bParam7)
			*uParam0 = func_201(eptParam1, fParam2, fParam5, false, true, iParam6, true, true, true, false, false, false, false);
		else
			*uParam0 = func_201(eptParam1, fParam2, fParam5, false, true, iParam6, true, true, bParam8, true, true, false, false);
	
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	if (PED::IS_PED_READY_TO_RENDER(*uParam0))
		return true;

	return false;
}

void func_67(Ped pedParam0, Hash hParam1) // Position - 0x359A Hash - 0xEA1C858E ^0x8DEE7AFD
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_202(pedParam0, hParam1))
		{
			if (func_203(pedParam0, hParam1))
			{
				if (func_204(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_205(pedParam0);
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

BOOL func_68(var uParam0, Hash hParam1, float fParam2, float fParam3, float fParam4) // Position - 0x3644 Hash - 0xB83681D5 ^0x2836D87A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(hParam1, fParam2, true, true, false, false, true);
		return false;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	return true;
}

Vector3 func_69(int iParam0) // Position - 0x367D Hash - 0x8BB0B56F ^0x8BB0B56F
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 2543.7856f, -1212.9855f, 52.3098f };
			break;
	
		case 1:
			unk = { 2545.0344f, -1212.1583f, 52.31f };
			break;
	
		case 2:
			unk = { 2545.4915f, -1220.1079f, 52.3104f };
			break;
	}

	return unk;
}

float func_70(int iParam0) // Position - 0x36E5 Hash - 0x6815EDFF ^0x6815EDFF
{
	float num;

	switch (iParam0)
	{
		case 0:
			num = 223.1266f;
			break;
	
		case 1:
			num = 205.4429f;
			break;
	
		case 2:
			num = 348.4551f;
			break;
	}

	return num;
}

BOOL func_71(var uParam0, ePedType eptParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, int iParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3727 Hash - 0x9A5A65DC ^0xC541316
{
	if (*uParam2)
		return 0;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 1;

	if (!bParam8)
		*uParam0 = func_201(eptParam1, uParam3, fParam6, false, true, iParam7, true, true, true, false, false, false, false);
	else
		*uParam0 = func_201(eptParam1, uParam3, fParam6, false, true, iParam7, true, true, bParam9, true, true, false, false);

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam2 = 1;
		return 1;
	}

	return 0;
}

void func_72(Ped pedParam0, int iParam1) // Position - 0x3798 Hash - 0x729F5BA5 ^0x1C4AAB58
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

void func_73(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x37E9 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_206(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

char* func_74(int iParam0) // Position - 0x3846 Hash - 0x632600A ^0x813A1008
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "WORLD_HUMAN_STAND_WAITING";
			break;
	
		case 1:
			str = "WORLD_HUMAN_STAND_WAITING";
			break;
	
		case 2:
			str = "WORLD_HUMAN_STAND_WAITING";
			break;
	}

	return str;
}

void func_75(Ped pedParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, int iParam6, BOOL bParam7, BOOL bParam8, const char* sParam9, int iParam10) // Position - 0x3885 Hash - 0xFE770A83 ^0xBFD078B3
{
	TASK::TASK_START_SCENARIO_AT_POSITION(pedParam0, hParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, iParam10, false);
	return;
}

void func_76(int iParam0) // Position - 0x38A6 Hash - 0xF10A315F ^0xF10A315F
{
	if (!func_207(iParam0))
		return;

	iLocal_317 = iParam0;
	return;
}

void func_77(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x38C0 Hash - 0x95E300F3 ^0x49ED6619
{
	if (!func_207(iParam0))
		return;

	if (!func_208(iParam1))
		return;

	func_209(&uLocal_257[iParam0 /*59*/].f_21[iParam1 /*17*/], sParam2, sParam3, iParam4, iParam5, iParam6, 0, true, 0);

	if (bParam7)
		func_210(&uLocal_257[iParam0 /*59*/], iParam1, true);

	return;
}

void func_78(int iParam0, int iParam1) // Position - 0x3913 Hash - 0x1EC35913 ^0x99564B59
{
	if (!func_207(iParam0))
		return;

	uLocal_257[iParam0 /*59*/].f_57 = iParam1;
	return;
}

void func_79(var uParam0, var uParam1, eEventType eetParam2, float fParam3, int iParam4) // Position - 0x3933 Hash - 0x562ED89F ^0x9FE29697
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return;

	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(eetParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
		return;

	*uParam1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(eetParam2, *uParam0, iParam4, fParam3, fParam3, -1f, -1f, 180f, false, false, -1, -1);
	return;
}

void func_80(var uParam0, int iParam1) // Position - 0x397D Hash - 0xF55E891F ^0xF55E891F
{
	func_147(uParam0, iParam1);
	return;
}

int func_81(var uParam0) // Position - 0x398D Hash - 0x4B035B24 ^0x751835C0
{
	if (func_19(*uParam0, 32) || func_19(*uParam0, 64) || func_19(*uParam0, 512) || func_19(*uParam0, 256) || func_19(*uParam0, 8))
		return 1;

	return 0;
}

void func_82() // Position - 0x39E4 Hash - 0xB797A34B ^0xB797A34B
{
	int num;

	if (bLocal_253)
		iLocal_241 = 1;

	bLocal_253 = false;
	num = func_211(0, 6, iLocal_241);
	iLocal_241 = num;

	switch (num)
	{
		case 0:
			func_65(31);
			break;
	
		case 1:
			func_65(32);
			break;
	
		case 2:
			func_65(33);
			break;
	
		case 3:
			func_65(34);
			break;
	
		case 4:
			func_65(35);
			break;
	
		case 5:
			func_65(36);
			break;
	}

	return;
}

void func_83() // Position - 0x3A67 Hash - 0xB223892E ^0xCDDD3852
{
	int num;

	num = iLocal_15;

	if (func_24() || !func_212())
	{
		if (bLocal_243)
			func_213();
		else
			func_82();
	
		bLocal_243 = !bLocal_243;
	
		if (func_24() && !func_19(obLocal_183, 1048576))
		{
			func_9(false);
			func_10(&obLocal_183, 1048576);
		}
	
		return;
	}

	switch (iLocal_15)
	{
		case 0:
			func_65(37);
			break;
	
		case 1:
			func_65(38);
			break;
	
		case 2:
			func_65(23);
			break;
	
		case 3:
			func_65(22);
			break;
	
		case 4:
			func_65(15);
			break;
	
		case 5:
			func_65(24);
			break;
	}

	func_214();
	return;
}

void func_84(var uParam0, var uParam1, var uParam2) // Position - 0x3B29 Hash - 0xDD47E262 ^0x60597EB1
{
	ItemSet itemSet;
	ScrHandle indexedItemInItemset;
	Ped pedFromIndexedItem;
	int entitiesInVolume;
	int i;
	ScrHandle indexedItemInItemset2;
	Ped pedFromIndexedItem2;
	int itemsetSize;
	int j;

	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		return;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam1))
	{
		*uParam1 = ITEMSET::CREATE_ITEMSET(true);
		*uParam2 = 0;
	}

	if (!*uParam2)
	{
		itemSet = ITEMSET::CREATE_ITEMSET(true);
		entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(*uParam0, itemSet, 1);
	
		if (entitiesInVolume > 0)
		{
			for (i = 0; i < entitiesInVolume; i = i + 1)
			{
				indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
				pedFromIndexedItem = MISC::_GET_PED_FROM_INDEXED_ITEM(indexedItemInItemset);
			
				if (ENTITY::IS_ENTITY_DEAD(pedFromIndexedItem))
					ITEMSET::ADD_TO_ITEMSET(indexedItemInItemset, *uParam1);
			}
		}
	
		ITEMSET::DESTROY_ITEMSET(itemSet);
		*uParam2 = 1;
	}

	if (*uParam2)
	{
		itemsetSize = ITEMSET::GET_ITEMSET_SIZE(*uParam1);
	
		if (itemsetSize > 0)
		{
			for (j = 0; j < itemsetSize; j = j + 1)
			{
				indexedItemInItemset2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(j, *uParam1);
				pedFromIndexedItem2 = MISC::_GET_PED_FROM_INDEXED_ITEM(indexedItemInItemset2);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, pedFromIndexedItem2, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(pedFromIndexedItem2, Global_35, true);
			}
		}
	}

	return;
}

void func_85(BOOL bParam0) // Position - 0x3C07 Hash - 0x644F37CD ^0x25172B95
{
	Object* entity2;

	entity2 = func_215();

	if (ENTITY::DOES_ENTITY_EXIST(entity2))
	{
		if (bParam0)
		{
			PATHFIND::_0x6DAD6630AE4A74CB(entity2, 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, entity2, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(entity2, Global_35, true);
		}
		else
		{
			PATHFIND::_0x6DAD6630AE4A74CB(entity2, 0);
		}
	}

	return;
}

BOOL func_86(Ped pedParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, eSetPlayerControlFlags espcfParam6, BOOL bParam7, BOOL bParam8) // Position - 0x3C48 Hash - 0x2BA831E2 ^0x7FD26A98
{
	Vector3 vector;
	int taskSequenceId;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (bParam8)
	{
		if (func_217(func_216(Global_35, 0, true, false)) || func_217(func_216(Global_35, 1, true, false)))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			return false;
		}
	}

	if (!bParam7)
		vector = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) + (ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) * { fParam1, fParam1, fParam1 }) };
	else
		vector = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) + func_218(ENTITY::GET_ENTITY_COORDS(Global_35, true, false) - ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1) };

	if (!func_219(Global_35, vector, iParam2, true, true) && !func_220(Global_35, pedParam0, 1f) && !func_220(pedParam0, Global_35, 1f))
	{
		if (!func_221(Global_35, SCRIPT_TASK_PERFORM_SEQUENCE))
		{
			if (bParam4)
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, espcfParam6, false);
		
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vector, 1f, iParam3, iParam2, 0, ENTITY::GET_ENTITY_HEADING(pedParam0) - 180f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedParam0, 0, -1082130432, -1082130432, -1082130432);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, taskSequenceId);
			PED::SET_PED_KEEP_TASK(Global_35, true);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	}
	else if (!func_221(Global_35, SCRIPT_TASK_PERFORM_SEQUENCE))
	{
		if (bParam4 && bParam5)
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, espcfParam6, false);
	
		return true;
	}

	return false;
}

void func_87() // Position - 0x3DC1 Hash - 0x7BE8089 ^0x7BE8089
{
	int num;

	num = func_211(0, 2 - 1, iLocal_179);
	iLocal_179 = num;

	switch (num)
	{
		case 0:
			func_65(40);
			break;
	
		case 1:
			func_65(41);
			break;
	
		case 2:
			func_65(42);
			break;
	
		default:
			break;
	}

	return;
}

char* func_88() // Position - 0x3E11 Hash - 0x306ACA3A ^0xA271A611
{
	return "pbl_p1_p1_action_a";
}

char* func_89() // Position - 0x3E1D Hash - 0x306ACA3A ^0xE7262E65
{
	return "pbl_p1_p1_action_b";
}

char* func_90() // Position - 0x3E29 Hash - 0x306ACA3A ^0xAC7F9C0B
{
	return "pbl_p1_p1_action_c";
}

char* func_91() // Position - 0x3E35 Hash - 0x306ACA3A ^0xA271A611
{
	return "pbl_p1_p1_action_a";
}

char* func_92() // Position - 0x3E41 Hash - 0x306ACA3A ^0xBE52A012
{
	return "pbl_p2_action_a";
}

char* func_93() // Position - 0x3E4D Hash - 0x306ACA3A ^0x3A1B0746
{
	return "pbl_p2_action_b";
}

char* func_94() // Position - 0x3E59 Hash - 0x306ACA3A ^0xD4F6258C
{
	return "pbl_p3_action_a";
}

char* func_95() // Position - 0x3E65 Hash - 0x306ACA3A ^0x3CF2BB5C
{
	return "pbl_p3_action_b";
}

char* func_96() // Position - 0x3E71 Hash - 0x306ACA3A ^0x48FA0B12
{
	return "pbl_p4_action_a";
}

char* func_97() // Position - 0x3E7D Hash - 0x306ACA3A ^0x25110A92
{
	return "pbl_p4_action_b";
}

char* func_98() // Position - 0x3E89 Hash - 0x306ACA3A ^0xEDD24A3E
{
	return "pbl_p5_action_a";
}

char* func_99() // Position - 0x3E95 Hash - 0xB1F6D476 ^0xB1F6D476
{
	return "pbl_idle_a";
}

char* func_100() // Position - 0x3EA0 Hash - 0x306ACA3A ^0x58BB3616
{
	return "pbl_p6_p1_action_a";
}

char* func_101() // Position - 0x3EAC Hash - 0x306ACA3A ^0x3C857FCC
{
	return "pbl_p6_p2_action_a";
}

char* func_102() // Position - 0x3EB8 Hash - 0x306ACA3A ^0x9D74E0A7
{
	return "pbl_p7_action_a";
}

char* func_103() // Position - 0x3EC4 Hash - 0x306ACA3A ^0x6D04E5B1
{
	return "pbl_p7_action_b";
}

char* func_104() // Position - 0x3ED0 Hash - 0x306ACA3A ^0x56079631
{
	return "pbl_p7_action_c";
}

char* func_105() // Position - 0x3EDC Hash - 0x306ACA3A ^0x3A72CB9B
{
	return "pbl_p8_p1_action_a";
}

char* func_106() // Position - 0x3EE8 Hash - 0x306ACA3A ^0xE0701995
{
	return "pbl_p8_p2_action_a";
}

char* func_107() // Position - 0x3EF4 Hash - 0x306ACA3A ^0x328294A9
{
	return "pbl_p9_p1_action_a";
}

char* func_108() // Position - 0x3F00 Hash - 0x306ACA3A ^0x77DE73A2
{
	return "pbl_p9_p2_action_a";
}

char* func_109() // Position - 0x3F0C Hash - 0x306ACA3A ^0xDFD6F24D
{
	return "pbl_p9_p2_action_b";
}

char* func_110() // Position - 0x3F18 Hash - 0x306ACA3A ^0x3B00B4AC
{
	return "pbl_p9_p3_action_a";
}

char* func_111() // Position - 0x3F24 Hash - 0x306ACA3A ^0x3AB74143
{
	return "pbl_p9_p3_action_b";
}

char* func_112() // Position - 0x3F30 Hash - 0x306ACA3A ^0xF0E8DA36
{
	return "pbl_idle_b";
}

char* func_113() // Position - 0x3F3C Hash - 0x306ACA3A ^0x928527A0
{
	return "pbl_idle_c";
}

char* func_114() // Position - 0x3F48 Hash - 0x306ACA3A ^0x7972305A
{
	return "pbl_idle_d";
}

char* func_115() // Position - 0x3F54 Hash - 0x306ACA3A ^0x58F1F953
{
	return "pbl_idle_e";
}

char* func_116() // Position - 0x3F60 Hash - 0x306ACA3A ^0x22BABBE5
{
	return "pbl_idle_f";
}

char* func_117() // Position - 0x3F6C Hash - 0x306ACA3A ^0xA271A611
{
	return "pbl_p1_p1_action_a";
}

char* func_118() // Position - 0x3F78 Hash - 0x306ACA3A ^0x97B345D5
{
	return "pbl_p1_p2_action_a";
}

void func_119(int iParam0, int iParam1) // Position - 0x3F84 Hash - 0xDEDCA13F ^0xDEDCA13F
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
		Global_40.f_11623[iParam0 /*8*/] = iParam1;

	return;
}

eStackSize func_120() // Position - 0x3FA7 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_121(int iParam0) // Position - 0x3FB3 Hash - 0x7252A57F ^0x7252A57F
{
	Global_1396257[iParam0 /*638*/].f_631 = 1;
	return;
}

char* func_122() // Position - 0x3FC8 Hash - 0x306ACA3A ^0x7B81BC28
{
	return "pbl_action_a";
}

void func_123() // Position - 0x3FD4 Hash - 0xCEB6D123 ^0xCFB28E16
{
	if (func_19(obLocal_183, 32768))
	{
		func_80(&obLocal_183, 32768);
		func_80(&obLocal_183, 131072);
	}

	return;
}

float func_124(int iParam0) // Position - 0x3FFD Hash - 0x61246D49 ^0x61246D49
{
	switch (iParam0)
	{
		case 40:
		case 41:
			return 0.885f;
	}

	return 1f;
}

char* func_125() // Position - 0x4028 Hash - 0x306ACA3A ^0x7B81BC28
{
	return "pbl_action_a";
}

void func_126() // Position - 0x4034 Hash - 0xB282780D ^0xC9134550
{
	int num;

	num = func_211(1, 4, iLocal_255);
	num = func_222(num, 1, 3);
	iLocal_255 = num;
	func_223(pedLocal_163, "PLAYER_STILL_HANGING", -417894478, Global_35, 1, "DOROTHEA_WICKLOW", num, 1);
	return;
}

void func_127() // Position - 0x406E Hash - 0x1E51923E ^0x30C4540
{
	int num;

	num = func_211(1, 3, iLocal_256);
	num = func_222(num, 1, 2);
	iLocal_256 = num;
	func_223(pedLocal_163, "PLAYER_LOITERING", -417894478, Global_35, 1, "DOROTHEA_WICKLOW", num, 1);
	return;
}

void func_128(var uParam0) // Position - 0x40AA Hash - 0xDFB6596B ^0xFDA355C
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_20))
		VOLUME::DELETE_VOLUME(uParam0->f_20);

	if (func_13(&(uParam0->f_13)))
		func_16(&(uParam0->f_13));

	return;
}

void func_129(var uParam0, var uParam1, eEventType eetParam2, float fParam3, BOOL bParam4) // Position - 0x40FE Hash - 0x97BF7538 ^0x807B0D6A
{
	if (bParam4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			return;
	
		if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(eetParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
			return;
	}

	EVENT::REMOVE_SHOCKING_EVENT(*uParam1);
	return;
}

void func_130() // Position - 0x4139 Hash - 0xC5468B97 ^0xC5468B97
{
	if (func_35(iLocal_320))
		func_224(iLocal_320, iLocal_15);

	if (func_35(iLocal_321))
		func_225(iLocal_321, iLocal_242);

	return;
}

void func_131(int iParam0) // Position - 0x4167 Hash - 0xE0F13664 ^0x6F64281C
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);

	if (Global_1396257[iParam0 /*638*/].f_631)
		func_226(false, -1);

	func_227();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = Global_1415398.f_2 - 1;
	Global_1935183.f_28 = 0;
	return;
}

void func_132(var uParam0, BOOL bParam1) // Position - 0x41BF Hash - 0xBAF1A509 ^0xF9454388
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if (Global_1954750[*uParam0 /*16*/].f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			if (func_228(1, true) == *uParam0)
				func_229(-1, 1, true);
		
			if (bParam1)
				func_140(Global_1954750[*uParam0 /*16*/].f_1);
		
			Global_1954750[*uParam0 /*16*/] = 0;
			Global_1954750[*uParam0 /*16*/].f_2 = 0;
			Global_1954750[*uParam0 /*16*/].f_3 = 0;
			*uParam0 = -1;
		}
	}

	return;
}

void func_133() // Position - 0x4238 Hash - 0x745463C1 ^0xBA85EA15
{
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
		PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);

	return;
}

void func_134() // Position - 0x4257 Hash - 0xB8C4797 ^0x63B431B3
{
	func_230(&pedLocal_163, &uLocal_257[0 /*59*/], &(uLocal_257[0 /*59*/].f_21), true, true);
	return;
}

void func_135(Ped pedParam0) // Position - 0x4275 Hash - 0x14AA2427 ^0xACC1C61D
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), pedParam0, 7, 0, true);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), pedParam0, 3, 2, true);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), pedParam0, 4, 2, true);
	return;
}

BOOL func_136(int iParam0) // Position - 0x42BD Hash - 0x8EF26C67 ^0x9855652A
{
	int num;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
			return false;
	
		num = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
			return false;
	
		num = func_231(iParam0);
	}

	if (num == 1)
		return true;

	if (num == 2)
		return true;

	return false;
}

BOOL func_137(int iParam0) // Position - 0x4328 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_232(iParam0);
	return num == 3 || num == 4;
}

void func_138(int iParam0, BOOL bParam1, int iParam2) // Position - 0x4346 Hash - 0x9DD22E7 ^0x9DD22E7
{
	int num;

	if (!func_35(iParam0))
	{
		!bParam1;
		return;
	}

	if (!func_137(iParam0) && !func_136(iParam0))
	{
		!bParam1;
		return;
	}

	func_233(iParam0) == 0;

	if (iParam2 == 2 && !func_137(iParam0))
		iParam2 = -1;

	if (func_231(iParam0) == 3 || func_231(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_233(iParam0)))
	{
		func_235(func_234(iParam0), func_233(iParam0), iParam2);
	
		if (!func_35(Global_1572864.f_8) && !func_236(0, true, false) && !func_160(Global_1935630, 32768))
		{
			num = func_237(iParam0);
		
			if (num != -1)
			{
				func_238(false);
			}
			else if (func_234(iParam0) == 8)
			{
				num = func_239();
			
				if (num != -1)
					func_238(false);
			}
		}
	}

	func_240(iParam0, 0);

	if (func_241(0) == iParam0)
	{
		func_242(true);
		func_243(false);
		func_244(1);
	}

	func_245(iParam0, true);
	func_246(iParam0);
	return;
}

void func_139(Volume volParam0) // Position - 0x446B Hash - 0x4A7DD833 ^0xF771448B
{
	var volumeCoords;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	func_247(volumeCoords, 0);
	return;
}

void func_140(Volume volParam0) // Position - 0x4493 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

void func_141(var uParam0, float fParam1) // Position - 0x44AA Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_158() - fParam1;
	func_248(uParam0, 1);
	func_249(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_142(var uParam0) // Position - 0x44D0 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_13(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_157(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_250() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

Vector3 func_143(Player plParam0) // Position - 0x4523 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

BOOL func_144(Ped pedParam0) // Position - 0x4537 Hash - 0x56EA88F4 ^0xB8B4D4C1
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		PED::SET_PED_RESET_FLAG(pedParam0, 49, true);
		return true;
	}

	return false;
}

BOOL func_145(Object obParam0, int iParam1) // Position - 0x4562 Hash - 0x178D9C09 ^0x178D9C09
{
	return obParam0 && iParam1 != false;
}

void func_146(var uParam0, int iParam1) // Position - 0x4571 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_147(var uParam0, int iParam1) // Position - 0x4582 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_148() // Position - 0x4597 Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_1905944.f_5695 = 1;
	return;
}

void func_149() // Position - 0x45A7 Hash - 0x16579424 ^0x373AF887
{
	CAM::_DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE_2();
	CAM::_FORCE_THIRD_PERSON_CAM_THIS_FRAME();
	CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);

	if (Global_1935689.f_1)
		func_251(false);

	return;
}

BOOL func_150(Ped pedParam0, Entity eParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x45D0 Hash - 0xED93B9E0 ^0x288D4ED6
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > uParam2->f_5)
		func_252(uParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			uParam2->f_12 = iParam5;
		else
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(uParam2->f_1 & 128 != 0))
		{
			if (func_253(pedParam0, uParam2))
			{
				*uParam3 = 128;
				func_254(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(uParam2->f_1 & 8 != 0))
			{
				if (func_255(pedParam0, uParam2))
				{
					*uParam3 = 8;
					func_254(pedParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_256(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 8;
					func_254(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 32 != 0)
			{
				if (func_257(pedParam0, uParam2))
				{
					*uParam3 = 64;
					func_254(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_258(PLAYER::PLAYER_ID(), false, true, uParam2->f_1 & 524288 == 0))
		{
			if (!(uParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_254(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_259(uParam2, 1065353216))
			{
				if (!(uParam2->f_1 & 4 != 0))
				{
					if (func_260(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 4;
						func_254(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			
				if (!(uParam2->f_1 & 256 != 0))
				{
					if (func_261(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 256;
						func_254(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 16 != 0))
		{
			if (uParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_262(Global_35, pedParam0, uParam2, false))
				{
					*uParam3 = 16;
					func_254(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_262(Global_35, pedParam0, uParam2, true))
			{
				*uParam3 = 16;
				func_254(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_263(pedParam0, uParam2))
				{
					*uParam3 = 32;
					func_254(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_264(&pedParam0, uParam2))
				{
					*uParam3 = 4096;
					func_254(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(uParam2->f_1 & 2 != 0))
			{
				if (func_265(uParam2, 4000))
				{
					if (func_266(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, false, *uParam2 & 256 != 0) && func_267(uParam2, pedParam0) && func_268(uParam2, pedParam0))
					{
						*uParam3 = 2;
						func_254(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 2 != 0))
		{
			if (uParam2->f_12 < 4f)
			{
				if (func_266(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, true, *uParam2 & 256 != 0) && func_267(uParam2, pedParam0) && func_268(uParam2, pedParam0))
				{
					*uParam3 = 2;
					func_254(pedParam0, uParam2, *uParam3);
					return true;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_269(pedParam0, Global_1935630.f_41))
							{
								func_270();
								*uParam3 = 2;
								func_254(pedParam0, uParam2, *uParam3);
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
						if (func_269(pedParam0, Global_1935630.f_41))
						{
							func_270();
							*uParam3 = 2;
							func_254(pedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		
			if (uParam2->f_12 < 10f)
			{
				if (func_271(uParam2, pedParam0) || uParam2->f_9 > 0 && func_250() - uParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_270();
						*uParam3 = 2;
						func_254(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_272())
					{
						if (func_269(pedParam0, Global_1935630.f_42))
						{
							func_270();
							*uParam3 = 2;
							func_254(pedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 1024 != 0))
		{
			if (func_273(uParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_254(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!(uParam2->f_1 & 2048 != 0))
			{
				if (func_274(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 2048;
					func_254(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_275(pedParam0, uParam2))
					{
						*uParam3 = 8192;
						func_254(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*uParam2 & 64 != 0)
			{
				if (func_276(pedParam0, uParam2))
				{
					*uParam3 = 32768;
					func_254(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_277(uParam2, 4000))
				{
					if (func_278(&pedParam0, uParam2))
					{
						*uParam3 = 512;
						func_254(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_279(pedParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_254(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(uParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_280(uParam2, pedParam0))
			{
				*uParam3 = 1;
				func_254(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

void func_151(int iParam0) // Position - 0x4BF9 Hash - 0x866B8C3 ^0xA8518BD7
{
	Global_40.f_11623[iParam0 /*8*/].f_5 = Global_40.f_11623[iParam0 /*8*/].f_5 + 1;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_120();
	return;
}

void func_152(Ped* ppedParam0, BOOL bParam1) // Position - 0x4C2B Hash - 0x2B0863A8 ^0xA8A071F5
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0) && !ENTITY::IS_ENTITY_DEAD(*ppedParam0))
		if (!bParam1)
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
		else
			PED::DELETE_PED(ppedParam0);

	return;
}

void func_153() // Position - 0x4C5F Hash - 0xAA1398DE ^0xC2B9B9AF
{
	ItemSet itemSet;
	Ped indexedItemInItemset;
	Ped ped;
	int i;
	int entitiesInVolume;
	int num;
	int num2;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volLocal_172, itemSet, 1);

	for (i = 0; i < entitiesInVolume; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
		ped = indexedItemInItemset;
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			if (PED::IS_PED_HUMAN(ped) && !PED::IS_PED_A_PLAYER(ped) && ped != pedLocal_163 && PED::IS_PED_USING_SCENARIO_HASH(ped, joaat("world_human_stand_waiting")))
			{
				if (!TASK::_0xBEDBE39B5FD98FD6(ped) && !PED::IS_PED_RESPONDING_TO_THREAT(ped))
				{
					TASK::TASK_MOVE_IN_TRAFFIC(ped, -1082130432, 0, 0);
					num2 = num2 + 1;
				}
			}
		
			num = num + 1;
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	return;
}

BOOL func_154(int iParam0) // Position - 0x4D0B Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_155(int iParam0, int iParam1) // Position - 0x4D21 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_156(var uParam0) // Position - 0x4D30 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_141(uParam0, 0f);
	return;
}

BOOL func_157(var uParam0) // Position - 0x4D3F Hash - 0x39705408 ^0x39705408
{
	return func_155(*uParam0, 2);
}

float func_158() // Position - 0x4D4F Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

int func_159(int iParam0) // Position - 0x4D81 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

BOOL func_160(int iParam0, int iParam1) // Position - 0x4D95 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_161(eStackSize essParam0) // Position - 0x4DA4 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

BOOL func_162(eStackSize essParam0) // Position - 0x4DB7 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(essParam0 > -1 && essParam0 <= 80))
		return false;

	return func_137(Global_1835011[essParam0 /*74*/].f_1);
}

BOOL func_163(eStackSize essParam0) // Position - 0x4DE3 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(essParam0 > -1 && essParam0 <= 80))
		return false;

	return func_136(Global_1835011[essParam0 /*74*/].f_1);
}

BOOL func_164(int iParam0) // Position - 0x4E0F Hash - 0x1EF5D3F8 ^0x1EF5D3F8
{
	int num;

	num = func_281();

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

BOOL func_165(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x4F8D Hash - 0xEC5EE76 ^0xF05CBEF1
{
	var entityForwardVector;
	var unk3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	unk3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + (entityForwardVector * { iParam2, iParam2, iParam2 }) };

	if (func_282(uParam1, unk3, iParam3))
		return true;

	return false;
}

BOOL func_166(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5) // Position - 0x4FD9 Hash - 0x6D0071AD ^0xDBED4C65
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

	if (!func_283(uParam2, &ped, vector, fParam3, fParam4))
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
	
		if (!func_284(ped, false))
			func_285(&ped, entityCoords, 1083179008);
	
		return 1;
	}

	return 0;
}

BOOL func_167() // Position - 0x50E1 Hash - 0x4228A1C2 ^0x341213A7
{
	return Global_1392040.f_6;
}

BOOL func_168() // Position - 0x50EF Hash - 0xD6D2CD3 ^0x182E32DD
{
	if (Global_1914319.f_18941.f_17)
		return true;

	return false;
}

BOOL func_169(BOOL bParam0, int iParam1) // Position - 0x5108 Hash - 0x320397CF ^0x320397CF
{
	return func_286(*bParam0, iParam1);
}

BOOL func_170() // Position - 0x5119 Hash - 0xA61D3E25 ^0x23E9EDB4
{
	int i;

	if (func_200() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			for (i = 0; i < 10; i = i + 1)
			{
				if (Global_1392915[i /*12*/].f_1 != -1)
					if (func_137(Global_1392915[i /*12*/].f_4))
						return true;
			}
		}
	
		return false;
	}

	return false;
}

BOOL func_171() // Position - 0x516C Hash - 0x8650DF77 ^0x8650DF77
{
	return Global_1310750.f_16077 != 0;
}

char* func_172(int iParam0) // Position - 0x517D Hash - 0x93C78068 ^0x93C78068
{
	switch (iParam0)
	{
		case 0:
			return func_287();
	
		case 1:
			return func_288();
	
		case 2:
			return func_289();
	}

	return "";
}

char* func_173(int iParam0) // Position - 0x51C0 Hash - 0x93C78068 ^0x93C78068
{
	switch (iParam0)
	{
		case 0:
			return func_21();
	
		case 1:
			return func_290();
	
		case 2:
			return func_122();
	}

	return "";
}

void func_174(var uParam0, int iParam1) // Position - 0x5203 Hash - 0x81AB17C7 ^0x7005C408
{
	switch (iParam1)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_doroetheawicklow", pedLocal_163, 0);
			break;
	
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "CS_DOROETHEAWICKLOW", pedLocal_163, 0);
			break;
	
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_doroetheawicklow", pedLocal_163, 0);
		
			if (func_64())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JOHN", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "ARTHUR", Global_35, 0);
			}
			break;
	}

	return;
}

void func_175(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x528B Hash - 0x10BF737A ^0x8204BDD3
{
	if (!bParam1)
	{
		if (!bParam2)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "internal_loop", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "internal_loop_end", false, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "internal_loop", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "internal_loop_end", true, false);
		}
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "b_breakout", false, false);
	}

	return;
}

int func_176(var uParam0, const char* sParam1) // Position - 0x52E6 Hash - 0x40839A81 ^0x824E1B11
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return 1;

	flag = ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam0, sParam1);

	if (flag)
		return 1;

	flag2 = ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(*uParam0, sParam1);

	if (!flag2)
		return 1;

	flag3 = ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, sParam1);

	if (!flag3)
		return 1;

	flag4 = ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(*uParam0, sParam1);

	if (flag3 || flag4)
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);

	return 0;
}

BOOL func_177() // Position - 0x535C Hash - 0x600E10D7 ^0xAC8D5C45
{
	if (func_19(obLocal_183, 262144) && func_19(obLocal_183, 524288) && iLocal_14 >= 31 && iLocal_14 <= 36 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_254) && ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_254) >= 0.1f)
	{
		func_80(&obLocal_183, 524288);
		bLocal_243 = true;
		return true;
	}

	return false;
}

void func_178() // Position - 0x53C2 Hash - 0x43235A52 ^0x43235A52
{
	func_80(&obLocal_183, 32);
	return;
}

BOOL func_179() // Position - 0x53D2 Hash - 0x53962BEA ^0xB5B1A075
{
	if (fLocal_155 <= 12f && func_19(obLocal_183, 2097152))
		return true;

	return false;
}

int func_180(int iParam0) // Position - 0x53F9 Hash - 0xA4714C33 ^0x37734FB2
{
	int num;
	char* str;

	num = -1;

	if (iParam0 < 0 || iParam0 >= 1)
		return num;

	str = 0;
	num = func_291(&pedLocal_163, &uLocal_257[iParam0 /*59*/], 12f, &(uLocal_257[iParam0 /*59*/].f_21), 0f, 2, uLocal_257[iParam0 /*59*/].f_57, str, uLocal_257[iParam0 /*59*/].f_56, 0, 0, 2, -1082130432);

	if (func_292())
	{
		func_182(&uLocal_257[iParam0 /*59*/], true);
	
		if (num > -1)
			uLocal_257[iParam0 /*59*/].f_58 = num;
	
		return num;
	}
	else
	{
		func_182(&uLocal_257[iParam0 /*59*/], false);
	}

	return num;
}

BOOL func_181() // Position - 0x5492 Hash - 0x1653348B ^0x9BA88B63
{
	int num;

	if (!func_19(obLocal_183, 2) && func_293(0, &num))
	{
		if (num == 0)
		{
			if (func_64())
				func_223(Global_35, "GREET_GENERAL", -417894478, pedLocal_163, 1, 0, 0, 1);
			else
				func_223(Global_35, "GREET_GENERAL", -417894478, pedLocal_163, 1, 0, 0, 1);
		}
		else if (num == 1)
		{
			if (func_64())
			{
				func_223(Global_35, "INSULT_FEMALE_CONV_PART1", -417894478, pedLocal_163, 1, "JOHN_PLAYER", 5, 1);
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						func_223(Global_35, "INSULT_DOROTHEA_CONV_PART3", -417894478, pedLocal_163, 1, 0, 1, 1);
						break;
				
					case 1:
						func_223(Global_35, "INSULT_DOROTHEA_CONV_PART3", -417894478, pedLocal_163, 1, 0, 2, 1);
						break;
				}
			}
		}
	
		if (!func_19(obLocal_183, 131072))
			func_10(&obLocal_183, 131072);
	
		func_294(8, &pedLocal_163, &obLocal_183, 16);
		func_10(&obLocal_183, 2);
		func_80(&obLocal_183, 2097152);
	
		if (iLocal_14 < 39 && !func_19(obLocal_183, 64) && !func_19(obLocal_183, 128))
		{
			bLocal_190 = true;
			func_10(&obLocal_183, 64);
		}
	}

	return true;
}

void func_182(var uParam0, BOOL bParam1) // Position - 0x55CD Hash - 0xFF183B32 ^0xF5113C40
{
	int i;
	const char* str;

	for (i = 0; i <= 1; i = i + 1)
	{
		str = func_295(uParam0->f_21[i /*17*/].f_5);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
			if (bParam1 && !func_296(&uParam0->f_21[i /*17*/], true, false))
				func_297(&uParam0->f_21[i /*17*/], bParam1, false);
			else if (!bParam1 && func_296(&uParam0->f_21[i /*17*/], true, false))
				func_297(&uParam0->f_21[i /*17*/], bParam1, false);
	}

	return;
}

void func_183(Any* panParam0, int iParam1) // Position - 0x5654 Hash - 0x5F94E6 ^0xC34AEB03
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = 0;
	func_16(&(panParam0->f_18));
	return;
}

void func_184(var uParam0) // Position - 0x5672 Hash - 0x43696AC2 ^0x4C06F87D
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}

	return;
}

void func_185(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5698 Hash - 0x5EBCB35A ^0x47D35D05
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (bParam3)
		{
			if (func_298(uParam0->[i /*17*/].f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0->[i /*17*/], 11))
				{
				}
				else
				{
					func_299(&(uParam0->[i /*17*/].f_6), true, true);
				
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

BOOL func_186(Ped pedParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0x5743 Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pedParam1, bParam3, false)) <= iParam2 * iParam2)
		return true;

	return false;
}

BOOL func_187(Hash hParam0) // Position - 0x578B Hash - 0xD02571D6 ^0x9878B86D
{
	return hParam0 != -15;
}

int func_188(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, Hash hParam5, int iParam6, int iParam7) // Position - 0x5799 Hash - 0xA44B948 ^0xA44B948
{
	if (*uParam3 >= iParam4)
		return 0;

	if (*uParam1)
	{
		if (!func_13(uParam2))
		{
			func_141(uParam2, 0f);
			return 0;
		}
		else if (func_142(uParam2) > iParam6)
		{
			func_16(uParam2);
			*uParam3 = *uParam3 + 1;
			*uParam1 = 0;
			return 0;
		}
		else
		{
			return 0;
		}
	}

	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		if (iParam7 == 0f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
				return 0;
		
			iParam7 = func_300(*uParam0, Global_35, true, true);
		}
	
		if (hParam5 == 0)
			if (iParam7 >= 0f && iParam7 < 10f)
				hParam5 = 249295937;
			else if (iParam7 >= 10f && iParam7 < 20f)
				hParam5 = 1715123483;
			else if (iParam7 >= 20f && iParam7 < 30f)
				hParam5 = 1891783641;
			else if (iParam7 >= 30f && iParam7 < 50f)
				hParam5 = joaat("SONAR_OVERHEARD_BEAT_BIG");
			else
				hParam5 = 1515458263;
	
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(hParam5, *uParam0);
		*uParam1 = 1;
		return 1;
	}

	return 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x58DC Hash - 0xA17D549C ^0x325F01D7
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

Volume func_190(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x5A76 Hash - 0xC1E3A062 ^0xD42263D3
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
		if (func_302(vParam0))
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

	func_303(volume, bParam8);
	return volume;
}

int func_191() // Position - 0x5B30 Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

BOOL func_192(int iParam0, int iParam1, int iParam2) // Position - 0x5B4B Hash - 0x932A04D5 ^0x39A8988D
{
	return iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

BOOL func_193(int iParam0) // Position - 0x5B71 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_194(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x5BAF Hash - 0x4E72835D ^0x57C5ACE0
{
	BOOL flag;
	int num;

	if (!func_304(iParam2))
		return -1;

	if (iParam0 < 0 || iParam0 > 511)
		return -1;

	if (iParam1 < 0 || iParam1 > 255)
		return -1;

	if (iParam3 < 0 || iParam3 > func_191())
		return -1;

	flag = func_192(iParam0, iParam1, iParam2);
	num = iParam3;
	func_305(num, 0);
	func_306(num, 0);
	func_307(num, 0);
	func_308(num, 0);
	func_309(num, flag);

	if (hParam4 != 0)
		func_310(num, hParam4);

	return num;
}

int func_195(int iParam0) // Position - 0x5C4E Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_35(iParam0))
		return -1;

	return func_311(iParam0);
}

int func_196(int iParam0) // Position - 0x5C6A Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_35(iParam0))
		return -1;

	return func_312(iParam0);
}

void func_197(var uParam0, int iParam1) // Position - 0x5C86 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_198(var uParam0, int iParam1) // Position - 0x5C9B Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_199(var uParam0, float fParam1) // Position - 0x5CAC Hash - 0x4F8BE4B5 ^0xC1BE9C78
{
	uParam0->f_27 = fParam1;
	return;
}

BOOL func_200() // Position - 0x5CBA Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

Ped func_201(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x5CC8 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_313(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_202(Ped pedParam0, Hash hParam1) // Position - 0x5D0A Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_203(Ped pedParam0, Hash hParam1) // Position - 0x5D38 Hash - 0xA54F3032 ^0x15FB55DB
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

BOOL func_204(Ped pedParam0, Hash hParam1) // Position - 0x5D89 Hash - 0xA54F3032 ^0x15FB55DB
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_202(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_205(Ped pedParam0) // Position - 0x5DFB Hash - 0x446F1BDD ^0x46007316
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

BOOL func_206(var uParam0, Ped pedParam1, char* sParam2) // Position - 0x5E19 Hash - 0xFB1C2C0E ^0x6794528D
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

BOOL func_207(int iParam0) // Position - 0x5E97 Hash - 0x30813CD0 ^0x30813CD0
{
	if (iParam0 < 0 || iParam0 >= 1)
		return false;

	return true;
}

BOOL func_208(int iParam0) // Position - 0x5EB5 Hash - 0xF476C9A9 ^0xF476C9A9
{
	if (iParam0 < 0 || iParam0 >= 2)
		return false;

	return true;
}

void func_209(int* piParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8) // Position - 0x5ED3 Hash - 0x77C6B9D1 ^0xC3EDC08A
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
		if (func_298(piParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*piParam0, 1))
				func_314(piParam0->f_6, piParam0->f_5, piParam0->f_14, false);
			else
				func_315(piParam0->f_6, piParam0->f_5, false);
		
			func_316(piParam0->f_6, false, true);
		}
		else
		{
			MISC::SET_BIT(piParam0, 14);
		}
	
		MISC::SET_BIT(piParam0, 0);
	}
	else
	{
		func_317(piParam0, piParam0->f_5);
	
		if (!MISC::IS_BIT_SET(*piParam0, 13))
			MISC::SET_BIT(piParam0, 0);
	}

	MISC::SET_BIT(piParam0, 15);
	return;
}

void func_210(int* piParam0, int iParam1, BOOL bParam2) // Position - 0x5F86 Hash - 0x8CB5B900 ^0xE47E9808
{
	if (iParam1 > -1)
	{
		piParam0->f_3 = iParam1;
		piParam0->f_7 = 0f;
		piParam0->f_8 = 0f;
		func_318(piParam0, 5);
	
		if (bParam2)
			func_318(piParam0, 6);
		else
			func_319(piParam0, 6);
	}

	return;
}

int func_211(int iParam0, int iParam1, int iParam2) // Position - 0x5FC1 Hash - 0xC76BC009 ^0xD35219B8
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);

	if (randomIntInRange == iParam2)
	{
		if (func_320())
			randomIntInRange = randomIntInRange - 1;
		else
			randomIntInRange = randomIntInRange + 1;
	
		if (randomIntInRange < iParam0)
			randomIntInRange = iParam0;
		else if (randomIntInRange >= iParam1)
			randomIntInRange = iParam1 - 1;
	
		if (randomIntInRange == iParam0 && iParam0 == iParam2)
			randomIntInRange = randomIntInRange + 1;
		else if (randomIntInRange == iParam1 - 1 && iParam1 - 1 == iParam2)
			randomIntInRange = randomIntInRange - 1;
	
		if (randomIntInRange < iParam0 || randomIntInRange >= iParam1)
			randomIntInRange = func_320() ? iParam0 : iParam1 - 1;
	}

	return randomIntInRange;
}

BOOL func_212() // Position - 0x6067 Hash - 0x6F799138 ^0x6F799138
{
	if (func_11(Global_35, volLocal_172, 0, true))
		return true;

	return false;
}

void func_213() // Position - 0x6082 Hash - 0x89C03F0A ^0x89C03F0A
{
	int num;

	num = func_211(0, 9, iLocal_242);
	iLocal_242 = num;

	switch (num)
	{
		case 0:
			func_65(8);
			break;
	
		case 1:
			func_65(12);
			break;
	
		case 2:
			func_65(14);
			break;
	
		case 3:
			func_65(16);
			break;
	
		case 4:
			func_65(21);
			break;
	
		case 5:
			func_65(26);
			break;
	
		case 6:
			func_65(28);
			break;
	
		case 7:
			func_65(29);
			break;
	
		case 8:
			func_65(30);
			break;
	}

	return;
}

void func_214() // Position - 0x6128 Hash - 0xAD9AE67B ^0xAD9AE67B
{
	iLocal_15 = iLocal_15 + 1;
	iLocal_16 = iLocal_16 + 1;

	if (iLocal_15 >= 6)
		iLocal_15 = 0;

	return;
}

Object* func_215() // Position - 0x6145 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_393;
}

Hash func_216(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6154 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	Hash weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

BOOL func_217(Hash hParam0) // Position - 0x617A Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

Vector3 func_218(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x6195 Hash - 0x88200B15 ^0xE07B704A
{
	float num;

	if (fParam3 == 0f)
		return 0f, 0f, 0f;

	num = BUILTIN::VMAG(vParam0);

	if (num != 0f)
		return vParam0 * { fParam3 / num, fParam3 / num, fParam3 / num };

	return 0f, 0f, 0f;
}

BOOL func_219(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x61CC Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= iParam4 * iParam4)
			return true;
	else if (func_322(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= iParam4 * iParam4)
		return true;

	return false;
}

BOOL func_220(Ped pedParam0, Ped pedParam1, float fParam2) // Position - 0x6227 Hash - 0x5CE04B94 ^0xEC2FA7B8
{
	return func_323(pedParam0, ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), fParam2);
}

BOOL func_221(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x623F Hash - 0xBA023B92 ^0x16E0B707
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

int func_222(int iParam0, int iParam1, int iParam2) // Position - 0x6298 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_223(Ped pedParam0, char* sParam1, int iParam2, Ped pedParam3, int iParam4, char* sParam5, int iParam6, int iParam7) // Position - 0x62BD Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = sParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = pedParam3;
	str.f_5 = iParam4;
	str.f_6 = iParam7;
	return func_324(pedParam0, &str);
}

void func_224(int iParam0, int iParam1) // Position - 0x6304 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_35(iParam0))
		return;

	func_307(iParam0, iParam1);
	return;
}

void func_225(int iParam0, int iParam1) // Position - 0x6321 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_35(iParam0))
		return;

	func_308(iParam0, iParam1);
	return;
}

void func_226(BOOL bParam0, int iParam1) // Position - 0x633E Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_325(&Global_0, 8);

	if (!func_326() || func_200() != -1)
		return;

	func_325(&Global_0, 1);
	return;
}

void func_227() // Position - 0x6384 Hash - 0x590756A ^0x33B3A6D2
{
	AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
	return;
}

Hash func_228(int iParam0, BOOL bParam1) // Position - 0x6393 Hash - 0x72C53814 ^0xC945A18
{
	Ped ped;

	ped = func_327();

	if (bParam1 && ENTITY::IS_ENTITY_DEAD(ped))
		return -1;

	return Global_1954749;
}

void func_229(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x63B9 Hash - 0xBA24F06 ^0x6522CA07
{
	Ped ped;
	Ped ped2;
	Hash hash;
	Ped pedIndexFromEntityIndex;

	ped = func_327();

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		ped2 = 0;
		hash = hParam0;
	
		if (hParam0 == -1)
		{
			hash = func_228(iParam1, bParam2);
		
			if (hash != -1)
			{
				ped2 = Global_1954750[hash /*16*/].f_2;
			
				if (func_328(hash, 512))
					PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
			}
		}
	
		TASK::TASK_CLEAR_LOOK_AT(ped);
		PED::_0xAAC0EE3B4999ABB5(ped, 0);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), true);
	
		if (ENTITY::DOES_ENTITY_EXIST(ped2))
		{
			if (ENTITY::IS_ENTITY_A_PED(ped2))
			{
				pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped2);
			
				if (!ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex))
					TASK::TASK_CLEAR_LOOK_AT(pedIndexFromEntityIndex);
			}
		}
	
		Global_1954749 = -1;
	}

	return;
}

void func_230(var uParam0, Any* panParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6456 Hash - 0x870268 ^0x870268
{
	if (bParam3)
	{
		func_184(uParam0);
		func_329(panParam1, uParam2);
	}

	func_330(*uParam0, true, bParam4);
	return;
}

int func_231(int iParam0) // Position - 0x647B Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_331(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_232(int iParam0) // Position - 0x64BC Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_35(iParam0))
		return -1;

	return func_231(iParam0);
}

Hash func_233(int iParam0) // Position - 0x64D8 Hash - 0x2F57FA7D ^0x914B8AA9
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_5;

	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_234(int iParam0) // Position - 0x6503 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_35(iParam0))
		return 0;

	return func_332(func_193(iParam0));
}

void func_235(int iParam0, Hash hParam1, int iParam2) // Position - 0x6523 Hash - 0xF39224E1 ^0xD56E494F
{
	int data;

	data.f_1 = 0;
	data = 0;
	data.f_2 = 0;

	if (func_200() == false)
		data = Global_265073.f_73815.f_208.f_12;

	STATS::_STATSTRACKER_DEED_STATUS(iParam0, hParam1, iParam2, &data);
	return;
}

BOOL func_236(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x655B Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_333())
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
		num = func_334(Global_1898164.f_1[0 /*5*/]);
	
		if (func_335(num) && func_336(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_35(Global_1898164.f_1[0 /*5*/]))
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

int func_237(int iParam0) // Position - 0x675F Hash - 0xF4AFA201 ^0x156AC308
{
	int num;
	int num2;

	switch (func_234(iParam0))
	{
		case 1:
			num = func_334(iParam0);
			return func_337(num);
	
		case 8:
			num2 = func_334(iParam0);
		
			if (func_336(Global_1347702[num2 /*49*/].f_12, 1))
				return func_338(num2);
			break;
	}

	return -1;
}

void func_238(BOOL bParam0) // Position - 0x67BA Hash - 0x7B48571 ^0xD88AE50B
{
	int num;

	if (Global_1898077.f_1 == 0 && !bParam0)
		return;

	num = 0;

	if (func_200() != -1)
		num = 1;

	if (Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13 && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_339(num, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = num;
		Global_1898077.f_8 = func_340();
		Global_1898077.f_9 = func_341(Global_1894899.f_2);
		func_342(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}

	Global_1898077.f_2 = 0;
	return;
}

int func_239() // Position - 0x6878 Hash - 0xF04428FF ^0xD9AF5F7C
{
	if (!func_343(Global_1835011[4 /*74*/].f_1, true))
		return 0;
	else if (!func_343(Global_1347702[66 /*49*/].f_15, true))
		return 1;
	else if (!func_343(Global_1347702[67 /*49*/].f_15, true))
		return 2;
	else if (!func_343(Global_1835011[38 /*74*/].f_1, true))
		return 3;
	else if (!func_343(Global_1347702[68 /*49*/].f_15, true))
		return 4;
	else if (!func_343(Global_1835011[59 /*74*/].f_1, true))
		return 5;
	else if (!func_343(Global_1835011[67 /*74*/].f_1, true))
		return 7;
	else
		return 8;

	return -1;
}

void func_240(int iParam0, int iParam1) // Position - 0x693B Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_35(iParam0))
		return;

	func_305(iParam0, iParam1);
	return;
}

int func_241(int iParam0) // Position - 0x6958 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_242(BOOL bParam0) // Position - 0x696A Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_344(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_345(&Global_1935630, 4194304);
	}

	MISC::ENABLE_DISPATCH_SERVICE(DT_BikerBackup, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceRiders, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_FireDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_AmbulanceDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceVehicleRequest, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitPulledOver, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitCruising, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_Gangs, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceBoat, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_ArmyVehicle, bParam0);
	return;
}

int func_243(BOOL bParam0) // Position - 0x6A0D Hash - 0x595E3BEF ^0x853F0831
{
	if (!bParam0 && func_346(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

void func_244(BOOL bParam0) // Position - 0x6A3A Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898164 = Global_1898164 || bParam0;
	return;
}

void func_245(int iParam0, BOOL bParam1) // Position - 0x6A4D Hash - 0x7075D2FF ^0xF0E29EF6
{
	if (func_200() != -1)
		return;

	if (func_241(0) != iParam0)
		return;

	if (func_347(iParam0))
		if (bParam1)
			func_348(-525676072);
		else
			func_349(-525676072);

	return;
}

int func_246(int iParam0) // Position - 0x6A90 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_351(func_350(iParam0));
}

void func_247(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x6AA2 Hash - 0x303BFB8D ^0xBCF80455
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
		
			if (func_352(vector, uParam0, 2f, true))
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

void func_248(var uParam0, int iParam1) // Position - 0x6B26 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_249(var uParam0, int iParam1) // Position - 0x6B37 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_250() // Position - 0x6B4C Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

void func_251(BOOL bParam0) // Position - 0x6B6A Hash - 0xDA8F6A70 ^0xDA8F6A70
{
	if (bParam0)
		Global_1935689 = 1;
	else
		Global_1935689 = 2;

	return;
}

void func_252(var uParam0, BOOL bParam1, int iParam2) // Position - 0x6B84 Hash - 0x37D64B11 ^0xE7060A9E
{
	func_353(iParam2);

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
		uParam0->f_13 = func_354(0);

	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
				if (!(*uParam0 & 33554432 != 0))
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_198(uParam0, 33554432);
					else if (!(*uParam0 & 8192 != 0))
						if (func_355(true))
							func_198(uParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_355(true) || *uParam0 & 8192 != 0)
					func_197(uParam0, 33554432);
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
			if (func_356(uParam0))
				uParam0->f_15 = func_250();
		}
		else if (uParam0->f_15 > 0)
		{
			if (func_250() - uParam0->f_15 > 500)
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

	func_357(uParam0);
	return;
}

BOOL func_253(Ped pedParam0, var uParam1) // Position - 0x6D4F Hash - 0x3A755B4E ^0xDBAC23C2
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
		
			if (!func_358(pedParam0, uParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_359(pedParam0, pedIndexFromEntityIndex) <= func_360(uParam1))
				return true;
			break;
	}

	return false;
}

void func_254(Ped pedParam0, var uParam1, int iParam2) // Position - 0x6E27 Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		uParam1->f_10 = pedParam0;

	if (func_361(iParam2, 1, 1, 1, 0))
		func_198(uParam1, 2048);

	uParam1->f_16 = iParam2;
	func_362(uParam1, true);
	func_363();
	return;
}

BOOL func_255(Ped pedParam0, var uParam1) // Position - 0x6E64 Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_364(pedParam0, !(*uParam1 & 268435456 != 0), !(*uParam1 & 536870912 != 0), !(*uParam1 & 1073741824 != 0), 0, false))
		{
			if (uParam1->f_12 < 5f)
				num = 95f;
			else if (uParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_365(uParam1);
		
			if (func_366(uParam1, pedParam0, num, num2))
			{
				if (uParam1->f_2 == 0)
					uParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - uParam1->f_2;
				num4 = func_367(uParam1);
			
				if (uParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_362(uParam1, true);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_362(uParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_256(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0x6F4B Hash - 0x899101A2 ^0xBCA80002
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

	if (func_368(eParam1, !(*uParam2 & 268435456 != 0), !(*uParam2 & 536870912 != 0), !(*uParam2 & 1073741824 != 0), 0))
	{
		if (uParam2->f_12 < 5f)
			num = 95f;
		else if (uParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_365(uParam2);
	
		if (func_366(uParam2, pedParam0, num, num2))
		{
			if (uParam2->f_2 == 0)
				uParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2 > func_367(uParam2))
				{
					func_362(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_257(Ped pedParam0, var uParam1) // Position - 0x7021 Hash - 0xC62373A5 ^0xD1ADE674
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

	if (func_358(pedParam0, uParam1, pedIndexFromEntityIndex))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3 > func_367(uParam1))
		{
			customDistance = func_365(uParam1);
		
			if (uParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_258(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x712A Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_369(bParam1, bParam2, bParam3);

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

BOOL func_259(var uParam0, int iParam1) // Position - 0x725F Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_250();
	num2 = num - uParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_260(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0x7296 Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_370(uParam2);
		
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
			if (func_268(uParam2, pedParam1))
			{
				func_362(uParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_261(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0x739D Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (uParam2->f_12 < (float)func_371(uParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_268(uParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_362(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_262(Ped pedParam0, Ped pedParam1, var uParam2, BOOL bParam3) // Position - 0x7408 Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_372(uParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_22))
				{
					func_362(uParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, uParam2->f_27))
				{
					func_362(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords, false, false);
				
					if (func_373(pedParam1, entityCoords, outCoords))
					{
						func_362(uParam2, true);
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
					func_362(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords2, false, false);
				
					if (func_373(pedParam1, entityCoords, outCoords2))
					{
						func_362(uParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_263(Ped pedParam0, var uParam1) // Position - 0x7550 Hash - 0xEB9C0B04 ^0x4A60CD30
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
		if (!func_358(pedParam0, uParam1, Global_1935630.f_34[i]) || pedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_374(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_375(Global_1935630.f_34[i]))
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
		
			if (func_376(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_377(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_378(uParam1, pedParam0, num, i))
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

BOOL func_264(var uParam0, var uParam1) // Position - 0x7730 Hash - 0xF223CED2 ^0xA472D0A4
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

BOOL func_265(var uParam0, int iParam1) // Position - 0x77A8 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_250();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_266(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x77D7 Hash - 0x8119700D ^0x42D5A76B
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
		if (func_379(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_380(entity2, pedParam0))
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

int func_267(var uParam0, Ped pedParam1) // Position - 0x795D Hash - 0x42A83B1F ^0x80DE6667
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

BOOL func_268(var uParam0, Ped pedParam1) // Position - 0x79AD Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_381(uParam0))
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

BOOL func_269(Ped pedParam0, Ped pedParam1) // Position - 0x7A4A Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_300(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_270() // Position - 0x7A97 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_271(var uParam0, Ped pedParam1) // Position - 0x7A9F Hash - 0x6BE02E92 ^0x188EF1A2
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
	
		if (func_382(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			uParam0->f_9 = func_250();
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
						if (func_383(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								uParam0->f_9 = func_250();
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

BOOL func_272() // Position - 0x7B60 Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_250() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_273(var uParam0, Ped pedParam1) // Position - 0x7BAD Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_360(uParam0);

	if (uParam0->f_12 > func_384(uParam0) && uParam0->f_12 > num)
		return false;

	num3 = func_385(pedParam1);
	num2 = func_386(uParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (uParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, uParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, uParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, uParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_274(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0x7CC9 Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (uParam2->f_12 > 4f)
		return false;

	flag = *uParam2 & 256 != 0;
	flag2 = *uParam2 & 524288 != 0;
	flag3 = *uParam2 & 128 != 0;
	return func_387(pedParam0, eParam1, flag, flag3, uParam2->f_12, flag2);
}

BOOL func_275(Ped pedParam0, var uParam1) // Position - 0x7D11 Hash - 0x23BB3370 ^0x36BD6CCF
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
		if (func_388(pedParam0, uParam1, true))
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
					if (!func_389(uParam1, pedParam0))
						if (func_383(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_276(Ped pedParam0, var uParam1) // Position - 0x7F6A Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_390(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_277(var uParam0, int iParam1) // Position - 0x7FA3 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_250();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_278(var uParam0, var uParam1) // Position - 0x7FD2 Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_279(Ped pedParam0, var uParam1) // Position - 0x7FE6 Hash - 0xA57F7F48 ^0x8393BF1B
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (uParam1->f_4 == 0)
		uParam1->f_4 = func_250();
	else if (func_250() - uParam1->f_4 > func_391(uParam1))
		return func_392(pedParam0, uParam1, false, -1082130432);

	return false;
}

BOOL func_280(var uParam0, Ped pedParam1) // Position - 0x8035 Hash - 0x2978E171 ^0x6D149B0
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

var func_281() // Position - 0x8089 Hash - 0x1372AFBD ^0xAE723118
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

BOOL func_282(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4) // Position - 0x80B3 Hash - 0x51EADDF ^0xFEE9A233
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

BOOL func_283(var uParam0, var uParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Position - 0x80F3 Hash - 0x34D99C7D ^0x8190E5BB
{
	ScrHandle indexedItemInItemset;
	int i;
	int entitiesNearPoint;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);

	entitiesNearPoint = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam2, iParam6, *uParam0, 1);

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
					if (func_393(Global_35, *uParam1, false))
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

BOOL func_284(Ped pedParam0, BOOL bParam1) // Position - 0x8188 Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

void func_285(var uParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4) // Position - 0x81B5 Hash - 0x186008F8 ^0xE9F0BC58
{
	if (!func_221(*uParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		TASK::TASK_FLEE_COORD(*uParam0, vParam1, 6, 0, iParam4, -1, 0);
	}

	return;
}

BOOL func_286(int iParam0, int iParam1) // Position - 0x81E7 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

char* func_287() // Position - 0x81F6 Hash - 0x306ACA3A ^0x474CD094
{
	return "script@specialped@pddww_dorothea_wicklow@ig@ig_1";
}

char* func_288() // Position - 0x8202 Hash - 0x306ACA3A ^0x587BEC94
{
	return "script@specialped@pddww_dorothea_wicklow@ig@ig_2";
}

char* func_289() // Position - 0x820E Hash - 0x306ACA3A ^0x831FF0B8
{
	return "script@specialped@pddww_dorothea_wicklow@ig@ig_4";
}

char* func_290() // Position - 0x821A Hash - 0x306ACA3A ^0x1C32F448
{
	return "pbl_base_reset";
}

int func_291(var uParam0, int* piParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, Volume volParam9, int iParam10, int iParam11, int iParam12) // Position - 0x8226 Hash - 0x66907D63 ^0x41228033
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
		func_394(&iParam8);
		num = -1;
		flag = false;
		flag2 = volParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(volParam9) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volParam9, false, 0);
		flag3 = iParam8 & 32 != 0;
		flag4 = iParam8 & 524288 != 0;
		flag5 = iParam8 & 16777216 != 0;
		flag6 = iParam8 & 16777216 != 0;
		flag7 = AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0);
		num2 = iParam12 >= 0f ? iParam12 : BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false));
	
		if (!(iParam8 & 2097152 != 0))
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
	
		if (iParam8 & 8388608 != 0)
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
	
		if (flag5)
			flag = AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35);
	
		if (flag7 || flag5 && flag)
			func_156(&(piParam1->f_13));
	
		if (func_396(*uParam0, piParam1, uParam3))
			return -1;
	
		switch (piParam1->f_2)
		{
			case 0:
				if (flag2)
				{
					if (func_397(uParam0, piParam1, uParam3, fParam2, iParam8, sParam7, iParam11, num2))
					{
						piParam1->f_1 = -1;
						piParam1->f_2 = 1;
						return func_291(uParam0, piParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, iParam12);
					}
				}
				break;
		
			case 1:
				if (!flag2 || !(num2 <= fParam2 + 5f))
				{
					func_184(uParam0);
					piParam1->f_2 = 0;
					return -1;
				}
			
				if (!(iParam8 & 33554432 != 0))
					if (iParam8 & 18 != 0)
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
							func_398(*uParam0, true, true);
					else if (func_399(piParam1, 22))
						func_398(*uParam0, false, true);
			
				if (func_400(uParam0, iParam8, volParam9, MISC::IS_BIT_SET(*piParam1, 4)))
				{
					func_401(uParam0, true, piParam1, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4);
					func_402(iParam8);
				
					if (func_403(uParam0, piParam1, num2, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4, flag7, flag5, flag, false))
					{
						if (piParam1->f_2 != 2 && piParam1->f_2 != 3)
						{
							if (piParam1->f_1 > -1 && piParam1->f_1 < *uParam3)
								if (MISC::IS_BIT_SET(uParam3->[piParam1->f_1 /*17*/], 20))
									func_404(uParam3);
						
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
					func_405(piParam1, uParam3, num2);
				
					if (func_406(*uParam0, piParam1, uParam3))
						return piParam1->f_1;
				
					if (MISC::IS_BIT_SET(*piParam1, 1))
					{
						func_185(uParam3, 0, false, true, true);
						MISC::CLEAR_BIT(piParam1, 1);
					}
				}
				break;
		
			case 2:
				if (func_400(uParam0, iParam8, volParam9, MISC::IS_BIT_SET(*piParam1, 4)))
				{
					func_408(*uParam0, piParam1, uParam3, fParam2, iParam5, iParam6, iParam10, flag3);
					func_403(uParam0, piParam1, num2, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4, flag7, flag5, flag, true);
					func_401(uParam0, func_400(uParam0, iParam8, volParam9, false), piParam1, fParam2, uParam3, flag3, fParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4);
					func_402(iParam8);
				}
				else if (MISC::IS_BIT_SET(*piParam1, 1))
				{
					if (!flag4)
						func_185(uParam3, 0, false, true, true);
				
					func_319(piParam1, 1);
				}
			
				func_405(piParam1, uParam3, num2);
			
				if (func_407(uParam0, piParam1, fParam4, flag6))
				{
					if (iParam8 & 512 != 0)
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
				if (func_407(uParam0, piParam1, fParam4, flag6))
				{
					num = piParam1->f_1;
					piParam1->f_9 = 0;
					piParam1->f_1 = -1;
					return num;
				}
				break;
		}
	}
	else if (!(iParam8 & 1024 != 0))
	{
		if (!MISC::IS_BIT_SET(*piParam1, 3))
		{
			func_329(piParam1, uParam3);
			MISC::SET_BIT(piParam1, 3);
		}
	}

	return -1;
}

BOOL func_292() // Position - 0x866A Hash - 0xA3EEAE87 ^0x9DFFA103
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !Global_1935630.f_12 && VOLUME::DOES_VOLUME_EXIST(volLocal_170) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_170, true, 0) && func_409(Global_35, pedLocal_163, 1060437492) != 1 && iLocal_246 >= 11 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_254) && ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_254) >= 0.8f && iLocal_14 != 46 || iLocal_14 >= 31 && iLocal_14 <= 36 && !func_19(obLocal_183, 2) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !PED::IS_PED_ON_MOUNT(Global_35) && !func_165(&pedLocal_163, &isLocal_325, 1071644672, 1074790400) && !func_410(&pedLocal_163, &isLocal_326, 1071644672, 1074790400) && !func_411())
	{
		if (func_412(0) != true)
			func_413(0, 1, true);
	
		return true;
	}
	else if (func_412(0) != func_414(3, 0, 0))
	{
		func_413(0, func_414(3, false, false), true);
	}

	return false;
}

BOOL func_293(int iParam0, var uParam1) // Position - 0x8795 Hash - 0x72A91AA4 ^0xABD78303
{
	int num;

	if (!func_207(iParam0))
		return false;

	if (uLocal_257[iParam0 /*59*/].f_58 == -1)
		return false;

	num = uLocal_257[iParam0 /*59*/].f_58;

	if (!func_208(num))
		return false;

	*uParam1 = num;
	return true;
}

void func_294(int iParam0, var uParam1, var uParam2, int iParam3) // Position - 0x87DB Hash - 0x3D679EE4 ^0xBD1763F0
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		return;

	if (func_145(*uParam2, iParam3))
		return;

	Global_40.f_11623[iParam0 /*8*/].f_6 = Global_40.f_11623[iParam0 /*8*/].f_6 + 1;

	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_416(func_415(joaat("special_ped_interaction"))) < 5)
		func_417(func_415(joaat("special_ped_interaction")), 1);

	Global_40.f_11623[iParam0 /*8*/].f_3 = func_120();
	func_146(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
	return;
}

const char* func_295(var uParam0) // Position - 0x8872 Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

BOOL func_296(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x887C Hash - 0xF608DF72 ^0xE590CA68
{
	if (!bParam1 || func_298(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
				return true;
		
			if (func_418(uParam0->f_6, bParam1))
				return true;
		}
	}

	return false;
}

void func_297(int* piParam0, BOOL bParam1, BOOL bParam2) // Position - 0x88BF Hash - 0xAC8CE43 ^0x1A2D07F
{
	if (bParam1 && !func_419(piParam0, 13))
		func_420(piParam0, 0);
	else
		func_421(piParam0, 0);

	if (func_298(piParam0->f_6))
		if (bParam2)
			func_299(&(piParam0->f_6), false, true);

	return;
}

BOOL func_298(int iParam0) // Position - 0x8905 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_299(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8944 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_298(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_422(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_423(num);
	*uParam0 = 0;
	return;
}

int func_300(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8998 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x89E0 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_302(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x8A0A Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_303(Volume volParam0, BOOL bParam1) // Position - 0x8A24 Hash - 0xEA796703 ^0x695D7925
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

BOOL func_304(int iParam0) // Position - 0x8A8C Hash - 0x2BF73E21 ^0x2BF73E21
{
	return iParam0 > 0 && iParam0 < 13;
}

void func_305(int iParam0, int iParam1) // Position - 0x8AA2 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_424(iParam0);
	else
		func_425(iParam0, iParam1);

	func_426();
	return;
}

void func_306(int iParam0, int iParam1) // Position - 0x8AEA Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_307(int iParam0, int iParam1) // Position - 0x8B0A Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

void func_308(int iParam0, int iParam1) // Position - 0x8B2A Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = iParam1;
	return;
}

void func_309(int iParam0, BOOL bParam1) // Position - 0x8B4A Hash - 0x5CF9514E ^0x8B449709
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = bParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/] = bParam1;
	return;
}

void func_310(int iParam0, Hash hParam1) // Position - 0x8B75 Hash - 0x634DE727 ^0xC7F71E9D
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = hParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/].f_1 = hParam1;
	return;
}

int func_311(int iParam0) // Position - 0x8BA4 Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

int func_312(int iParam0) // Position - 0x8BC3 Hash - 0xB1EC3C9 ^0x6FAB5D7B
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_4;

	return 0;
}

void func_313(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x8BE2 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_427(eptParam1))
		{
			func_67(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_428(pedParam0, 0, true);
	
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
			func_429(pedParam0, false);
			flag = true;
		}
	
		func_430(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_314(int iParam0, const char* sParam1, var uParam2, BOOL bParam3) // Position - 0x8CC3 Hash - 0x2048C918 ^0x83757B6C
{
	int num;

	if (bParam3 && !func_298(iParam0))
		return;

	num = func_422(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(2, sParam1, uParam2));
	return;
}

void func_315(int iParam0, const char* sParam1, BOOL bParam2) // Position - 0x8D13 Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_298(iParam0))
		return;

	num = func_422(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, sParam1);
	return;
}

void func_316(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8D5C Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_298(iParam0))
		return;

	num = func_422(iParam0);

	if (bParam1)
	{
		func_431(iParam0, 4);
		func_432(num, true);
		func_433(num, true);
	}
	else
	{
		func_434(iParam0, 4);
		func_433(num, false);
	}

	return;
}

void func_317(int* piParam0, const char* sParam1) // Position - 0x8DAB Hash - 0x94802979 ^0xDA357E7D
{
	if (func_298(piParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		func_315(piParam0->f_6, sParam1, true);

	piParam0->f_5 = sParam1;
	func_421(piParam0, 1);
	return;
}

void func_318(int* piParam0, int iParam1) // Position - 0x8DE2 Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_319(int* piParam0, int iParam1) // Position - 0x8DF2 Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

BOOL func_320() // Position - 0x8E02 Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

var func_321(BOOL bParam0, var uParam1, var uParam2) // Position - 0x8E23 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

float func_322(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x8E3A Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_323(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x8E58 Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

BOOL func_324(Ped pedParam0, Any* panParam1) // Position - 0x8E99 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

void func_325(Hash hParam0, int iParam1) // Position - 0x8EA9 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_326() // Position - 0x8EBC Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

Ped func_327() // Position - 0x8EDB Hash - 0x1E4E8E74 ^0xCB0093A7
{
	switch (func_200())
	{
		case false:
			return PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	
		default:
		
	}

	return Global_35;
}

BOOL func_328(Hash hParam0, int iParam1) // Position - 0x8F01 Hash - 0xB8290CF1 ^0xB8290CF1
{
	if (func_435(hParam0, true, true))
		return func_19(Global_1954750[hParam0 /*16*/], iParam1);

	return false;
}

void func_329(int* piParam0, var uParam1) // Position - 0x8F26 Hash - 0xC7765EDD ^0x9C4E31FE
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
	func_436(piParam0, uParam1, true);
	func_185(uParam1, 0, true, true, false);
	MISC::COPY_SCRIPT_STRUCT(piParam0, &src, 21);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&uParam1->[i /*17*/], &src2, 17);
	}

	return;
}

void func_330(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8FB7 Hash - 0x1F6BF127 ^0x12733F97
{
	PED::SET_PED_CONFIG_FLAG(pedParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 317, bParam1);
	return;
}

int func_331(int iParam0) // Position - 0x9005 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_332(BOOL bParam0) // Position - 0x9086 Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

BOOL func_333() // Position - 0x9093 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_334(int iParam0) // Position - 0x90E6 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_35(iParam0))
		return -1;

	return func_437(func_193(iParam0));
}

BOOL func_335(int iParam0) // Position - 0x9106 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_336(int iParam0, int iParam1) // Position - 0x911C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_337(int iParam0) // Position - 0x912B Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
	
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
	
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
	
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
	
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
	
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
	
		case 59:
			return 6;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
	
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}

	return -1;
}

int func_338(int iParam0) // Position - 0x9332 Hash - 0xBC835308 ^0xBC835308
{
	switch (iParam0)
	{
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
	
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
	
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
	
		case 115:
		case 116:
			return 3;
	
		case 120:
			return 0;
	}

	return -1;
}

void func_339(int iParam0, var uParam1) // Position - 0x943A Hash - 0x86BC6E12 ^0x31271D44
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &num, 2, 2);
	return;
}

int func_340() // Position - 0x9455 Hash - 0xD5B66211 ^0x9B76C225
{
	float randomFloatInRange;

	randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216);

	if (randomFloatInRange < 0.01f)
		return 19;

	if (randomFloatInRange < 0.16f)
		return 15;

	if (randomFloatInRange < 0.31f)
		return 17;

	if (randomFloatInRange < 0.46f)
		return 16;

	if (randomFloatInRange < 0.61f)
		return 18;

	return 0;
}

int func_341(eStackSize essParam0) // Position - 0x94BA Hash - 0x6761E6A0 ^0x6761E6A0
{
	switch (essParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 112;
	
		case 2:
			return 113;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 9;
	
		case 11:
			return 10;
	
		case 12:
			return 11;
	
		case 15:
			return 12;
	
		case 16:
			return 13;
	
		case 17:
			return 15;
	
		case 19:
			return 17;
	
		case 20:
			return 18;
	
		case 21:
			return 19;
	
		case 22:
			return 20;
	
		case 23:
			return 21;
	
		case 25:
			return 23;
	
		case 26:
			return 25;
	
		case 27:
			return 26;
	
		case 28:
			return 62;
	
		case 29:
			return 27;
	
		case 30:
			return 29;
	
		case 31:
			return 30;
	
		case 32:
			return 31;
	
		case 33:
			return 35;
	
		case 35:
			return 42;
	
		case 36:
			return 43;
	
		case 37:
			return 47;
	
		case 38:
			return 48;
	
		case 39:
			return 49;
	
		case 40:
			return 50;
	
		case 42:
			return 52;
	
		case 43:
			return 54;
	
		case 45:
			return 57;
	
		case 48:
			return 61;
	
		case 49:
			return 28;
	
		case 50:
			return 51;
	
		case 52:
			return 53;
	
		case 56:
			return 63;
	
		case 57:
			return 64;
	
		case 58:
			return 65;
	
		case 59:
			return 66;
	
		case 60:
			return 67;
	
		case 61:
			return 68;
	
		case 62:
			return 71;
	
		case 64:
			return 73;
	
		case 65:
			return 74;
	
		case 67:
			return 76;
	
		case 68:
			return 78;
	
		case 69:
			return 79;
	
		case 70:
			return 80;
	
		case 71:
			return 81;
	
		case 72:
			return 82;
	
		case 75:
			return 84;
	
		case 76:
			return 85;
	
		case 77:
			return 72;
	
		case 78:
			return 87;
	
		case 79:
			return 88;
	
		case 80:
			return 90;
	
		case 81:
			return 91;
	
		case 82:
			return 92;
	
		case 83:
			return 40;
	
		case 87:
			return 96;
	
		case 88:
			return 97;
	
		case 89:
			return 44;
	
		case 91:
			return 98;
	
		case 92:
			return 99;
	
		case 93:
			return 100;
	
		case 94:
			return 101;
	
		case 95:
			return 102;
	
		case 96:
			return 103;
	
		case 97:
			return 104;
	
		case 98:
			return 105;
	
		case 99:
			return 106;
	
		case 100:
			return 107;
	
		case 104:
			return 114;
	
		case 105:
			return 115;
	
		case 107:
			return 118;
	
		case 109:
			return 119;
	
		case 110:
			return 120;
	
		case 111:
			return 121;
	
		case 112:
			return 122;
	
		case 115:
			return 46;
	
		case 117:
			return 86;
	
		case 120:
			return 32;
	
		case 124:
			return 33;
	
		case 125:
			return 34;
	
		case 126:
			return 69;
	
		case 127:
			return 70;
	
		case MICRO:
			return 123;
	
		default:
		
	}

	return 0;
}

void func_342(int iParam0, var uParam1, int iParam2) // Position - 0x98CF Hash - 0xD64E984D ^0x9D3A2521
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	num.f_2 = iParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &num, 3, 3);
	return;
}

BOOL func_343(int iParam0, BOOL bParam1) // Position - 0x98F0 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_232(iParam0))
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

void func_344(int iParam0, int iParam1) // Position - 0x9921 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_345(int iParam0, int iParam1) // Position - 0x9936 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_346(int iParam0) // Position - 0x9947 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_438(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_347(int iParam0) // Position - 0x9996 Hash - 0x18F20B33 ^0x18F20B33
{
	if (!func_35(iParam0))
		return false;

	switch (func_234(iParam0))
	{
		case 1:
			switch (func_334(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
	
		case 8:
			switch (func_334(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}

	return false;
}

void func_348(int iParam0) // Position - 0x9A6F Hash - 0xF69051DC ^0xF3C89D36
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_439(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_440(item) == iParam0)
			INVENTORY::_INVENTORY_ENABLE_ITEM(inventoryId, item);
	}

	func_442(func_441(iParam0), 6);
	return;
}

void func_349(int iParam0) // Position - 0x9AC3 Hash - 0xF11E3100 ^0x54576133
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_439(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_440(item) == iParam0)
			INVENTORY::_INVENTORY_DISABLE_ITEM(inventoryId, item, 0);
	}

	func_443(func_441(iParam0), 6);
	return;
}

int func_350(int iParam0) // Position - 0x9B18 Hash - 0xBA803397 ^0x906286B5
{
	int i;

	if (iParam0 == 0 || iParam0 == -1)
		return -1;

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (Global_1898164.f_1[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

int func_351(int iParam0) // Position - 0x9B60 Hash - 0xD83A1109 ^0x154A194E
{
	var unk;

	if (iParam0 < 0)
		return 0;

	if (Global_1898164.f_162 == 0)
		return 0;

	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { unk };
		return 1;
	}

	Global_1898164.f_1[iParam0 /*5*/] = { unk };
	Global_1898164.f_162 = Global_1898164.f_162 - 1;
	func_444(iParam0, Global_1898164.f_162);
	return 1;
}

BOOL func_352(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x9BCF Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_353(int iParam0) // Position - 0x9C24 Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_445();

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
			func_446(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_354(int iParam0) // Position - 0x9D90 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

BOOL func_355(BOOL bParam0) // Position - 0x9DA3 Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_447(bParam0, &unk, &unk2))
		return true;

	return false;
}

BOOL func_356(var uParam0) // Position - 0x9DBD Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_200() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_448(uParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_448(uParam0);

	if (ped == 0)
		return false;

	if (func_386(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	uParam0->f_14 = ped;
	return true;
}

void func_357(var uParam0) // Position - 0x9E57 Hash - 0x256C27DD ^0x256C27DD
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
		func_449(uParam0);

	return;
}

BOOL func_358(Ped pedParam0, var uParam1, Ped pedParam2) // Position - 0x9E7E Hash - 0x7FBD27D8 ^0x4C0BB7C4
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
		num2 = func_386(pedParam2);
	else
		num2 = func_385(pedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_386(pedParam0);
	else
		num = func_385(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_286(*uParam1, 8388608))
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

float func_359(Ped pedParam0, Ped pedParam1) // Position - 0x9F77 Hash - 0xF9959663 ^0xF9959663
{
	return func_300(pedParam0, pedParam1, true, true);
}

float func_360(var uParam0) // Position - 0x9F89 Hash - 0xD73B9827 ^0xDE12990D
{
	return uParam0->f_26;
}

BOOL func_361(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x9F95 Hash - 0x5A9E12AC ^0x5A9E12AC
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

void func_362(var uParam0, BOOL bParam1) // Position - 0x9FFA Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_198(uParam0, 134217728);
	else
		func_197(uParam0, 134217728);

	return;
}

void func_363() // Position - 0xA020 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_364(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0xA034 Hash - 0x7ED53456 ^0xD7A590DD
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
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_300(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_450(ped, 0)))
			if (func_451(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_365(var uParam0) // Position - 0xA194 Hash - 0xD73B9827 ^0x8CE07B2A
{
	return uParam0->f_17;
}

BOOL func_366(var uParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0xA1A0 Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (uParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_286(*uParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*uParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17))
			return true;

	return false;
}

int func_367(var uParam0) // Position - 0xA201 Hash - 0xD73B9827 ^0x372EC0B
{
	return uParam0->f_18;
}

BOOL func_368(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0xA20D Hash - 0x838BDEFB ^0xB1D5C032
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_450(ped, 0)))
			if (func_452(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

int func_369(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA2CF Hash - 0xC9655EC3 ^0x88C9AFE1
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

float func_370(var uParam0) // Position - 0xA36D Hash - 0xD73B9827 ^0x9F7F0764
{
	return uParam0->f_23;
}

int func_371(var uParam0) // Position - 0xA379 Hash - 0xD73B9827 ^0x303D0BA3
{
	return uParam0->f_21;
}

int func_372(var uParam0) // Position - 0xA385 Hash - 0xB202FF2A ^0xFD1BAB10
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

BOOL func_373(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0xA4C2 Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_323(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_374(Ped pedParam0) // Position - 0xA505 Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_453(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_375(Ped pedParam0) // Position - 0xA56B Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_376(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA597 Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_454(pedParam1))
			return false;

	num = 5f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_377(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA5DE Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_454(pedParam1))
			return false;

	num = 10f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_378(var uParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0xA629 Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_454(pedParam1))
		return false;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_379(Ped pedParam0, var uParam1) // Position - 0xA6A2 Hash - 0x64FF5121 ^0xD9ABCD76
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

BOOL func_380(Ped pedParam0, Ped pedParam1) // Position - 0xA6EF Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (func_455(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_381(var uParam0) // Position - 0xA737 Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*uParam0 & 2 != 0);
}

BOOL func_382(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0xA747 Hash - 0x94A6C6F0 ^0xC51111A6
{
	float num;

	num = func_383(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

float func_383(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xA773 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

float func_384(var uParam0) // Position - 0xA79B Hash - 0xD73B9827 ^0x4905FA06
{
	return uParam0->f_24;
}

int func_385(Ped pedParam0) // Position - 0xA7A7 Hash - 0xEB445B10 ^0x5D31BA0D
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_386(Ped pedParam0) // Position - 0xA7FF Hash - 0x6E063231 ^0x4ED186C
{
	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(pedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_387(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0xA86F Hash - 0x89708384 ^0x6760E23F
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
			if (func_379(Global_35, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_300(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_300(pedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_388(Ped pedParam0, var uParam1, BOOL bParam2) // Position - 0xA9DF Hash - 0x3E8B6245 ^0x84E29058
{
	Ped ped;
	Ped ped2;

	func_447(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!bParam2 || !func_389(uParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
				if (!bParam2 || !func_389(uParam1, ped2))
					if (func_383(ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_389(var uParam0, Ped pedParam1) // Position - 0xAACD Hash - 0x27FC2906 ^0x7EEE4F5B
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

BOOL func_390(int iParam0) // Position - 0xAB43 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_64())
		return false;

	return func_343(Global_1347702[58 /*49*/].f_15, true);
}

int func_391(var uParam0) // Position - 0xAB65 Hash - 0xD73B9827 ^0xAC2E3C80
{
	return uParam0->f_20;
}

BOOL func_392(Ped pedParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0xAB71 Hash - 0x9E17B061 ^0x19F2F061
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

BOOL func_393(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0xABEC Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

void func_394(var uParam0) // Position - 0xAC56 Hash - 0x9DBECFB8 ^0xE52A4E97
{
	if (*uParam0 & 1 != 0)
		*uParam0 = *uParam0 | 64 | 16 | 16777216;

	return;
}

var func_395(BOOL bParam0, var uParam1, var uParam2) // Position - 0xAC79 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_396(Ped pedParam0, int* piParam1, var uParam2) // Position - 0xAC90 Hash - 0x84A3184B ^0x2FCA8561
{
	if (piParam1->f_11 != 0)
	{
		if (func_456(pedParam0, piParam1))
		{
			if (!func_286(piParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(pedParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 178, true);
				func_185(uParam2, 0, false, true, false);
				func_198(&(piParam1->f_10), 1);
			}
		
			return true;
		}
		else if (func_286(piParam1->f_10, 1))
		{
			func_457(uParam2);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 178, false);
			func_197(&(piParam1->f_10), 1);
		}
	}

	return false;
}

BOOL func_397(var uParam0, int* piParam1, var uParam2, float fParam3, int iParam4, char* sParam5, Hash hParam6, int iParam7) // Position - 0xAD3A Hash - 0x95336F37 ^0x42E85BA7
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
		flag = func_286(iParam4, 32);
		func_436(piParam1, uParam2, false);
		prompt = func_458(*uParam0, piParam1, uParam2, fParam3, flag);
	
		if (flag)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
	
		func_185(uParam2, 0, false, true, false);
		num = 0;
	
		if (!func_286(iParam4, 16))
			num = num | 8;
	
		if (func_286(iParam4, 2048))
			num = num | 4;
	
		if (func_286(iParam4, 32768))
			num = num | 128;
	
		if (func_286(iParam4, 4096))
			num = num | 16;
	
		if (func_286(iParam4, 8388608) || func_286(iParam4, 8192))
			num = num | 256;
	
		if (func_286(iParam4, 4194304))
			num = num | 64;
	
		if (func_286(iParam4, 268435456))
			num = num | 8192;
	
		if (func_399(piParam1, 4))
		{
			num = num | 1024;
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
	
		if (!func_399(piParam1, 26))
			num = num | 32768;
	
		if (func_286(iParam4, 67108864))
			num = num | 16384;
	
		if (piParam1->f_6 < -1 || piParam1->f_6 > -1 && piParam1->f_6 > 3)
			piParam1->f_6 = -1;
	
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam0, &text, fParam3, fParam3, num, piParam1->f_7, piParam1->f_8, prompt, false, piParam1->f_6))
		{
			if (hParam6 == 2)
				hParam6 = func_459(uParam0);
		
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
		
			if (func_286(iParam4, 268435456))
			{
				num2 = func_460(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
			
				if (num2 > -1)
					func_461(piParam1, &uParam2->[num2 /*17*/]);
			}
		
			if (func_399(piParam1, 23))
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
		
			if (func_286(iParam4, 2) || func_286(iParam4, 16))
				func_398(*uParam0, true, true);
			else
				func_398(*uParam0, false, true);
		
			return true;
		}
	}

	return false;
}

void func_398(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB02B Hash - 0x61822EFB ^0x98C55DC1
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
		PED::SET_PED_CONFIG_FLAG(pedParam0, 317, bParam1);

	return;
}

BOOL func_399(int* piParam0, int iParam1) // Position - 0xB051 Hash - 0x5B2730C0 ^0x9239CD27
{
	return MISC::IS_BIT_SET(*piParam0, iParam1);
}

BOOL func_400(var uParam0, int iParam1, Volume volParam2, BOOL bParam3) // Position - 0xB062 Hash - 0x89673EF ^0xD8D31C9
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	flag = !VOLUME::DOES_VOLUME_EXIST(volParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volParam2, true, 0);
	flag2 = iParam1 & 32 != 0;
	flag3 = iParam1 & 65792 != 0;
	flag4 = iParam1 & 1179648 != 0;

	if (flag)
	{
		if (flag2)
			return true;
	
		if (func_462(*uParam0, bParam3, flag3, flag4))
			return true;
	}

	return false;
}

void func_401(var uParam0, BOOL bParam1, int* piParam2, float fParam3, var uParam4, BOOL bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, Volume volParam11, int iParam12, int iParam13, BOOL bParam14) // Position - 0xB0C6 Hash - 0x3FED85C6 ^0x1A53C527
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
		
			func_463(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_286(iParam10, 32), true, false);
			MISC::SET_BIT(piParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*piParam2, 1))
	{
		MISC::CLEAR_BIT(piParam2, 1);
	}

	return;
}

void func_402(int iParam0) // Position - 0xB13B Hash - 0x5A9B862A ^0x7ECCD484
{
	if (func_286(iParam0, 4))
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

	if (func_286(iParam0, 16384))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_RELOAD"), false);

	if (func_286(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_GRAPPLE"), false);
	}

	return;
}

BOOL func_403(var uParam0, int* piParam1, int iParam2, float fParam3, var uParam4, BOOL bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, Volume volParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0xB1E8 Hash - 0x25A0EB38 ^0x81C1ECF6
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

	num = func_464(1);
	isBitSet = MISC::IS_BIT_SET(*piParam1, 2);
	flag = false;
	flag2 = false;
	flag3 = false;
	flag4 = iParam10 & 128 != 0;
	flag5 = iParam10 & 64 != 0;
	flag6 = iParam10 & 512 != 0;
	isPedOnFoot = PED::IS_PED_ON_FOOT(Global_35);
	isPedInjured = PED::IS_PED_INJURED(*uParam0);
	flag7 = PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_465(Global_35) || func_466(Global_35) || func_467(Global_35);
	num2 = -1f;

	if (func_13(&(piParam1->f_13)))
		num2 = func_15(&(piParam1->f_13));

	for (i = 0; i < *uParam4; i = i + 1)
	{
		if (uParam4->[i /*17*/].f_8 != iParam12)
			iParam12 = uParam4->[i /*17*/].f_8;
	
		flag2 = func_298(uParam4->[i /*17*/].f_6);
		func_468(*uParam0, &uParam4->[i /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
	
		if (MISC::IS_BIT_SET(uParam4->[i /*17*/], 20))
			flag = true;
	
		if (func_469(*uParam0, piParam1, &uParam4->[i /*17*/], flag2, fParam3, iParam2, iParam7, iParam8, bParam14, bParam16, bParam17, isPedOnFoot, isPedInjured, bParam15, num2, flag7, num))
		{
			if (!bParam18 && !flag3)
			{
				if (func_470(iParam12, uParam4->[i /*17*/].f_6))
				{
					if (!flag5)
						func_185(uParam4, 0, false, true, bParam5);
				
					if (flag4)
						func_471(uParam4, false, false);
				
					if (MISC::IS_BIT_SET(uParam4->[i /*17*/], 11))
						func_436(piParam1, uParam4, MISC::IS_BIT_SET(*piParam1, 6));
				
					piParam1->f_1 = i;
					flag3 = true;
					piParam1->f_9 = MISC::IS_BIT_SET(uParam4->[piParam1->f_1 /*17*/], 16);
				
					if (!piParam1->f_9)
						MISC::SET_BIT(piParam1, 0);
				
					if (!isBitSet)
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam4->[i /*17*/].f_11))
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam4->[i /*17*/].f_12))
								TASK::TASK_PLAY_ANIM(Global_35, uParam4->[i /*17*/].f_11, uParam4->[i /*17*/].f_12, 4f, -4f, -1, 67108880, 0, false, 0, false, 0, false);
				
					if (func_472(piParam1, fParam6, piParam1->f_9))
					{
						func_156(&(piParam1->f_18));
					
						if (flag4)
							func_471(uParam4, false, false);
					
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
		func_473(piParam1, iParam2);

	return flag3;
}

void func_404(var uParam0) // Position - 0xB440 Hash - 0x14F6CB16 ^0xBB9D41ED
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

void func_405(int* piParam0, var uParam1, int iParam2) // Position - 0xB493 Hash - 0x9063AD98 ^0x85323D11
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (func_474(&uParam1->[i /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1->[i /*17*/], 20))
			{
				func_473(piParam0, iParam2);
				return;
			}
		}
	}

	return;
}

BOOL func_406(Ped pedParam0, int* piParam1, var uParam2) // Position - 0xB4D6 Hash - 0xEB1F3A6C ^0xB0CA3802
{
	if (piParam1->f_3 > -1 && piParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_475(pedParam0))
			{
				piParam1->f_1 = piParam1->f_3;
				func_318(piParam1, 0);
				func_436(piParam1, uParam2, func_399(piParam1, 6));
				return true;
			}
		}
	}

	return false;
}

BOOL func_407(var uParam0, int* piParam1, float fParam2, BOOL bParam3) // Position - 0xB52E Hash - 0x384F04E1 ^0xEB00389B
{
	if (piParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
			return false;
	
		piParam1->f_9 = 0;
		MISC::SET_BIT(piParam1, 0);
	
		if (fParam2 > 0f)
		{
			func_156(&(piParam1->f_18));
			return false;
		}
		else if (func_13(&(piParam1->f_18)))
		{
			func_16(&(piParam1->f_18));
			return false;
		}
	}

	if (!func_13(&(piParam1->f_18)))
		return true;

	if (fParam2 > 0f && bParam3)
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
			return false;

	return func_476(&(piParam1->f_18), fParam2);
}

void func_408(Player plParam0, int* piParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0xB5D8 Hash - 0x415C2438 ^0x87B17E4A
{
	int num;

	if (piParam1->f_5 < 0 || piParam1->f_5 > *uParam2 - 1)
		piParam1->f_5 = 0;

	num = piParam1->f_5;
	func_468(plParam0, &uParam2->[num /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	piParam1->f_5 = piParam1->f_5 + 1;
	return;
}

int func_409(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0xB624 Hash - 0x175892DC ^0xF10F49E5
{
	var entityCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, false) };
	return func_477(pedParam0, entityCoords, iParam2);
}

BOOL func_410(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0xB644 Hash - 0xDF254C70 ^0x334DE949
{
	var unk;
	var entityForwardVector;
	var unk4;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	unk4 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + (entityForwardVector * { iParam2, iParam2, iParam2 }) };

	if (func_283(uParam1, &unk, unk4, iParam2, iParam3))
		return true;

	return false;
}

BOOL func_411() // Position - 0xB694 Hash - 0x931677A6 ^0x28DC866C
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_478())
		return true;

	return false;
}

BOOL func_412(int iParam0) // Position - 0xB6B5 Hash - 0xBA73331C ^0xE96A492E
{
	return uLocal_257[iParam0 /*59*/].f_56;
}

void func_413(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB6C6 Hash - 0x8FFB3B9 ^0xD347A46C
{
	if (bParam2)
		func_479(iParam0);

	uLocal_257[iParam0 /*59*/].f_56 = bParam1;
	return;
}

BOOL func_414(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB6E4 Hash - 0x56789741 ^0x56789741
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

struct<2> func_415(int iParam0) // Position - 0xB77E Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_416(var uParam0, var uParam1) // Position - 0xB78E Hash - 0x3AAD93D4 ^0x6348F3E3
{
	int unk;

	STATS::STAT_ID_GET_INT(&uParam0, &unk);
	return unk;
}

void func_417(var uParam0, var uParam1, int iParam2) // Position - 0xB7A1 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_418(int iParam0, BOOL bParam1) // Position - 0xB7B1 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_298(iParam0))
		return false;

	return !func_480(iParam0, 4);
}

BOOL func_419(int* piParam0, int iParam1) // Position - 0xB7D6 Hash - 0x5B2730C0 ^0x9239CD27
{
	return MISC::IS_BIT_SET(*piParam0, iParam1);
}

void func_420(int* piParam0, int iParam1) // Position - 0xB7E7 Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_421(int* piParam0, int iParam1) // Position - 0xB7F7 Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

int func_422(int iParam0) // Position - 0xB807 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_423(int iParam0) // Position - 0xB811 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_481(iParam0))
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

int func_424(int iParam0) // Position - 0xB8C4 Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_331(iParam0);

	if (num < 0)
		return 0;

	return func_482(num);
}

int func_425(int iParam0, int iParam1) // Position - 0xB8E4 Hash - 0xF3EA5EAF ^0xA48F5774
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
			func_483(num2);
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

void func_426() // Position - 0xBA54 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

BOOL func_427(ePedType eptParam0) // Position - 0xBA77 Hash - 0x5000025C ^0x5000025C
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

void func_428(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0xBECA Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_429(Ped pedParam0, BOOL bParam1) // Position - 0xBEFA Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_430(Ped pedParam0, int iParam1) // Position - 0xBF3F Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

void func_431(int iParam0, int iParam1) // Position - 0xBF66 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_432(int iParam0, BOOL bParam1) // Position - 0xBF99 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_480(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_433(int iParam0, BOOL bParam1) // Position - 0xBFF1 Hash - 0x15569F47 ^0x9D0FE068
{
	if (HUD::_UI_PROMPT_IS_VALID(*Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_434(int iParam0, int iParam1) // Position - 0xC01C Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

BOOL func_435(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC044 Hash - 0x40AB6A33 ^0xC650A346
{
	if (hParam0 > -1 && hParam0 < 4)
		if (!bParam1 || VOLUME::DOES_VOLUME_EXIST(Global_1954750[hParam0 /*16*/].f_1))
			if (!bParam2 || ENTITY::DOES_ENTITY_EXIST(Global_1954750[hParam0 /*16*/].f_2))
				return true;

	return false;
}

void func_436(int* piParam0, var uParam1, BOOL bParam2) // Position - 0xC095 Hash - 0x6F91FC09 ^0xBA0ABE9A
{
	if (piParam0->f_3 > -1 && piParam0->f_3 < *uParam1)
	{
		func_299(&(uParam1->[piParam0->f_3 /*17*/].f_6), true, true);
	
		if (bParam2)
			func_183(piParam0, 0);
	}

	return;
}

int func_437(BOOL bParam0) // Position - 0xC0CF Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_438(int iParam0, int iParam1) // Position - 0xC0E2 Hash - 0x8FA0E29 ^0xC3F68E87
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
	
		case -2106214197:
			return 104;
	
		case -2101264851:
			return 195;
	
		case -2073072369:
			return 59;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
	
		case -2058120606:
			return 197;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 92;
	
		case -2022369555:
			return 265;
	
		case -2021582629:
			return 112;
	
		case -2020023971:
			return 278;
	
		case -1957523409:
			return 208;
	
		case -1952856164:
			return 165;
	
		case -1949204933:
			return 276;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
	
		case -1852605133:
			return 10;
	
		case -1847672446:
			return 376;
	
		case -1840704908:
			return 289;
	
		case -1838712533:
			return 26;
	
		case -1838352012:
			return 57;
	
		case -1835851517:
			return 56;
	
		case -1831552326:
			return 123;
	
		case -1825294305:
			return 266;
	
		case -1824738758:
			return 277;
	
		case -1818850842:
			return 253;
	
		case -1799960545:
			return 257;
	
		case -1764522338:
			return 372;
	
		case -1763509974:
			return 141;
	
		case -1741667789:
			return 64;
	
		case -1738165526:
			return 3;
	
		case -1718674470:
			return 23;
	
		case -1717960576:
			return 61;
	
		case -1711895055:
			return 13;
	
		case -1706438978:
			return 233;
	
		case -1700452710:
			return 53;
	
		case -1674179981:
			return 55;
	
		case -1666278201:
			return 33;
	
		case -1612662716:
			return 201;
	
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
	
		case -1582926490:
			return 146;
	
		case -1579419919:
			return 147;
	
		case -1558439474:
			return 301;
	
		case -1556423728:
			return 218;
	
		case -1532284567:
			return 116;
	
		case -1530132748:
			return 311;
	
		case -1524512402:
			return 209;
	
		case -1523910291:
			return 155;
	
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
	
		case -1447311849:
			return 215;
	
		case -1436021162:
			return 172;
	
		case -1433686245:
			return 12;
	
		case -1425209566:
			return 32;
	
		case -1419919497:
			return 22;
	
		case -1414537028:
			return 73;
	
		case -1405998267:
			return 105;
	
		case -1344601768:
			return 314;
	
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
	
		case -1329135070:
			return 140;
	
		case -1318987693:
			return 222;
	
		case -1311865656:
			return 37;
	
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
	
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
	
		case -1282804314:
			return 270;
	
		case -1278074582:
			return 171;
	
		case -1271608261:
			return 98;
	
		case -1257057567:
			return 21;
	
		case -1241340344:
			return 300;
	
		case -1236261996:
			return 235;
	
		case -1232809834:
			return 113;
	
		case -1230112817:
			return 170;
	
		case -1223121209:
			return 126;
	
		case -1215445344:
			return 131;
	
		case -1209597203:
			return 333;
	
		case -1206122982:
			return 156;
	
		case -1187950766:
			return 45;
	
		case -1179948750:
			return 136;
	
		case -1170496998:
			return 46;
	
		case -1164215952:
			return 234;
	
		case -1151084372:
			return 124;
	
		case -1145519186:
			return 100;
	
		case -1124061431:
			return 242;
	
		case -1123615607:
			return 29;
	
		case -1080627546:
			return 378;
	
		case -1077783786:
			return 194;
	
		case -1063147448:
			return 151;
	
		case -1062490780:
			return 79;
	
		case -1060078174:
			return 239;
	
		case -1056767524:
			return 176;
	
		case -1053549743:
			return 58;
	
		case -1029225159:
			return 106;
	
		case -1014145132:
			return 288;
	
		case -978957786:
			return 251;
	
		case -959357075:
			return 36;
	
		case -950054349:
			return 152;
	
		case -939420910:
			return 44;
	
		case -939114198:
			return 221;
	
		case -919512195:
			return 40;
	
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
	
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
	
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
	
		case -879507474:
			return 236;
	
		case -868076593:
			return 84;
	
		case -857964358:
			return 83;
	
		case -853383233:
			return 65;
	
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
	
		case -828139293:
			return 260;
	
		case -811637947:
			return 245;
	
		case -796902762:
			return 88;
	
		case -792853067:
			return 254;
	
		case -789397228:
			return 262;
	
		case -785605431:
			return 250;
	
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
	
		case -764163380:
			return 228;
	
		case -748969569:
			return 78;
	
		case -741351766:
			return 60;
	
		case -736853952:
			return 366;
	
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
	
		case -699277634:
			return 4;
	
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
	
		case -683458244:
			return 80;
	
		case -666014935:
			return 157;
	
		case -664512648:
			return 67;
	
		case -664252410:
			return 191;
	
		case -644722288:
			return 261;
	
		case -640663440:
			return 214;
	
		case -639037538:
			return 185;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_439(BOOL bParam0) // Position - 0xD1FB Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_200() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_440(Hash hParam0) // Position - 0xD23C Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_484(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_441(int iParam0) // Position - 0xD267 Hash - 0x497B15BA ^0x497B15BA
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
	
		case -1719060085:
			return 16;
	
		case -999503751:
			return 1;
	
		case -525676072:
			return 4;
	
		case -413129408:
			return 32;
	
		case 81053684:
			return 8;
	
		default:
		
	}

	return 0;
}

void func_442(int iParam0, int iParam1) // Position - 0xD2B7 Hash - 0x2FE2A1EE ^0xFDF1F02E
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 - Global_1946054.f_2657.f_26.f_6 && iParam0;
	return;
}

void func_443(int iParam0, int iParam1) // Position - 0xD2E4 Hash - 0xB0EA57B9 ^0x395CD962
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 || iParam0;
	return;
}

void func_444(int iParam0, int iParam1) // Position - 0xD305 Hash - 0x6861752C ^0x6861752C
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_485(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_485(i, i + 1);
		}
	}

	if (func_35(Global_1898164.f_1[0 /*5*/]))
		func_240(Global_1898164.f_1[0 /*5*/], 3);

	return;
}

BOOL func_445() // Position - 0xD37B Hash - 0x60155C48 ^0x6CED0E68
{
	if (func_486())
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

void func_446(int iParam0, int iParam1) // Position - 0xD3D1 Hash - 0x787BB1AC ^0x11099E69
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

BOOL func_447(BOOL bParam0, var uParam1, var uParam2) // Position - 0xD47C Hash - 0x2A9340EF ^0xAD765E32
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

Ped func_448(var uParam0) // Position - 0xD543 Hash - 0xF229F24F ^0x47381422
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

void func_449(var uParam0) // Position - 0xD5EB Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_197(uParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_198(uParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

Hash func_450(Ped pedParam0, int iParam1) // Position - 0xD650 Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_451(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0xD667 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_452(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_452(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0xD695 Hash - 0xBF2250D5 ^0x34592C3E
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

BOOL func_453(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD6DF Hash - 0x1D055735 ^0x5D260F19
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

BOOL func_454(Ped pedParam0) // Position - 0xD758 Hash - 0xF2F988FE ^0xA63CD631
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

int func_455(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xD840 Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_456(Ped pedParam0, int* piParam1) // Position - 0xD882 Hash - 0xFB53563C ^0x22205B46
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
		if (PED::IS_PED_IN_COMBAT(pedParam0, func_487(flag2 && !flag, Global_35, 0)))
			return true;

	return false;
}

void func_457(var uParam0) // Position - 0xD8FA Hash - 0xBF3B7066 ^0xBF3B7066
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_474(&uParam0->[i /*17*/]))
			func_420(&uParam0->[i /*17*/], 14);
	}

	return;
}

Prompt func_458(Player plParam0, int* piParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0xD92F Hash - 0xAAA1EE43 ^0x1865183
{
	int num;

	if (piParam1->f_3 > -1 && piParam1->f_3 < *uParam2)
	{
		num = piParam1->f_3;
		uParam2->[num /*17*/].f_8 = 6;
		func_488(plParam0, &uParam2->[num /*17*/], fParam3, 3, 0, 6, bParam4, false);
	
		if (func_298(uParam2->[num /*17*/].f_6))
		{
			func_420(&uParam2->[num /*17*/], 11);
			return Global_1945188[uParam2->[num /*17*/].f_6 /*18*/].f_3;
		}
	}

	return 0;
}

int func_459(var uParam0) // Position - 0xD99F Hash - 0x642E71C7 ^0x2B612313
{
	int num;
	int num2;

	num = func_489(*uParam0);
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

int func_460(var uParam0, int iParam1) // Position - 0xDA1D Hash - 0x2E6C9ADE ^0xD0DFC5BC
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_7 == iParam1)
			return i;
	}

	return -1;
}

void func_461(int* piParam0, int* piParam1) // Position - 0xDA4C Hash - 0xFCEC0C12 ^0x65EC5F60
{
	if (!func_399(piParam0, 23))
	{
		if (piParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_420(piParam1, 19);
			func_318(piParam0, 23);
			func_490(piParam1, 2);
		}
	}

	return;
}

BOOL func_462(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xDA89 Hash - 0x8E7018BE ^0x1BA834FB
{
	Entity outEntity;

	outEntity = 0;

	if (func_491(16))
		return Global_1935630.f_58 == pedParam0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(outEntity))
			{
				if (ENTITY::IS_ENTITY_A_PED(outEntity))
				{
					func_492(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
				
					if (Global_1935630.f_58 == pedParam0)
						return true;
				}
			}
		}
	}

	return false;
}

void func_463(Player plParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0xDAFE Hash - 0x1F7F43A4 ^0x1F7F43A4
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		func_488(plParam0, &uParam1->[i /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
	
		if (bParam8)
			MISC::CLEAR_BIT(&uParam1->[i /*17*/], 14);
	}

	return;
}

int func_464(int iParam0) // Position - 0xDB43 Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_465(Ped pedParam0) // Position - 0xDB4F Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_493(pedParam0, 4) || func_493(pedParam0, 5);
}

BOOL func_466(Ped pedParam0) // Position - 0xDB6B Hash - 0xE0409C42 ^0xE0409C42
{
	return func_493(pedParam0, 7);
}

BOOL func_467(Ped pedParam0) // Position - 0xDB7A Hash - 0xC9A2E10A ^0xC9A2E10A
{
	return func_493(pedParam0, 6);
}

void func_468(Player plParam0, int* piParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0xDB89 Hash - 0x28F375A9 ^0x20CFE665
{
	if (MISC::IS_BIT_SET(*piParam1, 14))
	{
		if (func_474(piParam1))
		{
			MISC::CLEAR_BIT(piParam1, 14);
			func_488(plParam0, piParam1, fParam2, iParam3, iParam4, iParam5, bParam6, false);
		}
	}

	return;
}

BOOL func_469(Player plParam0, int* piParam1, int* piParam2, BOOL bParam3, float fParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, float fParam14, BOOL bParam15, int iParam16) // Position - 0xDBC1 Hash - 0x9E28CA55 ^0x9E28CA55
{
	BOOL flag;
	BOOL flag2;

	flag = bParam3;

	if (bParam3)
	{
		flag2 = false;
	
		if (func_494(piParam1, piParam2, plParam0, bParam9, bParam10, iParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
			flag2 = true;
	
		if (func_418(piParam2->f_6, false))
		{
			if (flag2)
			{
				func_316(piParam2->f_6, false, true);
				flag = false;
			}
		}
		else if (!flag2)
		{
			func_316(piParam2->f_6, true, true);
			flag = false;
		}
	
		if (bParam8)
			func_495(piParam2->f_6, plParam0, 0, true, -1);
	}

	return flag;
}

BOOL func_470(int iParam0, int iParam1) // Position - 0xDC3F Hash - 0xFED1B5B5 ^0xFED1B5B5
{
	if (iParam0 == 4 || iParam0 == 6 || iParam0 == 5)
	{
		if (func_496(iParam1, true))
			return true;
	}
	else if (func_497(iParam1, true))
	{
		func_498(iParam1, true);
		return true;
	}

	return false;
}

void func_471(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xDC89 Hash - 0x6249DB64 ^0x6249DB64
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_297(&uParam0->[i /*17*/], bParam1, bParam2);
	}

	return;
}

BOOL func_472(int* piParam0, float fParam1, BOOL bParam2) // Position - 0xDCB3 Hash - 0xD16C56E3 ^0xCC194231
{
	if (piParam0->f_2 != 3)
		if (bParam2 || fParam1 > 0f)
			return true;

	return false;
}

void func_473(int* piParam0, int iParam1) // Position - 0xDCD7 Hash - 0xCA0C813A ^0x642D602A
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

BOOL func_474(int* piParam0) // Position - 0xDD14 Hash - 0xA750EC1D ^0xA62AC3E5
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(piParam0->f_5))
		return true;

	return false;
}

BOOL func_475(Ped pedParam0) // Position - 0xDD2D Hash - 0x38F1F494 ^0xD89820BA
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

BOOL func_476(var uParam0, float fParam1) // Position - 0xDDAB Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_499(uParam0, fParam1))
	{
		func_16(uParam0);
		return 1;
	}

	return 0;
}

int func_477(Ped pedParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0xDDC9 Hash - 0x2AE5C8B1 ^0x9995651A
{
	var entityCoords;
	var entityForwardVector;
	var unk5;
	float value;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	}

	unk5 = { uParam1 - entityCoords };
	value = func_500(entityForwardVector, unk5);

	if (MISC::ABSF(value) > iParam4)
		if (value > 0f)
			return 0;
		else
			return 1;

	if (func_501(entityCoords, entityCoords + entityForwardVector, uParam1))
		return 3;

	return 2;
}

BOOL func_478() // Position - 0xDE58 Hash - 0x8C37D852 ^0x8C37D852
{
	if (func_502(Global_35) || func_503(Global_35))
		return true;

	return false;
}

void func_479(int iParam0) // Position - 0xDE7C Hash - 0x18BA447A ^0x18BA447A
{
	if (!func_207(iParam0))
		return;

	func_183(&uLocal_257[iParam0 /*59*/], 0);
	return;
}

BOOL func_480(int iParam0, int iParam1) // Position - 0xDE9D Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

BOOL func_481(int iParam0) // Position - 0xDEBE Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_480(iParam0, 2);
}

int func_482(int iParam0) // Position - 0xDECD Hash - 0x78E19743 ^0x6ACC64F5
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

int func_483(int iParam0) // Position - 0xDF81 Hash - 0x6DD34799 ^0x352A62D8
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

BOOL func_484(Hash hParam0, int iParam1) // Position - 0xE022 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_485(int iParam0, int iParam1) // Position - 0xE03C Hash - 0x676FADFF ^0x1734896
{
	var unk;

	unk = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { unk };
	return;
}

BOOL func_486() // Position - 0xE07C Hash - 0x50F36DAB ^0xF55A49EF
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

Ped func_487(BOOL bParam0, Ped pedParam1, Ped pedParam2) // Position - 0xE0AD Hash - 0xCF32FBA5 ^0xCF32FBA5
{
	if (bParam0)
		return pedParam1;

	return pedParam2;
}

void func_488(Player plParam0, int* piParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0xE0C1 Hash - 0x9E5AD4FF ^0xCE9B419A
{
	const char* str;
	int num;

	if (func_298(piParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*piParam1, 11))
			return;
	
		func_299(&(piParam1->f_6), false, true);
	}

	if (!func_298(piParam1->f_6) && !MISC::IS_BIT_SET(*piParam1, 4))
	{
		str = piParam1->f_5;
	
		if (func_474(piParam1))
		{
			if (piParam1->f_8 != iParam5)
				iParam5 = piParam1->f_8;
		
			piParam1->f_6 = func_504(str, piParam1->f_7, plParam0, piParam1->f_9, iParam4, false, 0, iParam5, fParam2, piParam1->f_2, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), piParam1->f_10, false);
		
			if (func_298(piParam1->f_6))
			{
				if (!bParam6)
				{
					num = -1;
					func_495(piParam1->f_6, plParam0, 0, true, num);
				}
				else
				{
					func_505(piParam1->f_6, 17, true, true);
				}
			
				if (MISC::IS_BIT_SET(*piParam1, 1))
					if (MISC::IS_BIT_SET(*piParam1, 3))
						func_506(piParam1->f_6, str, piParam1->f_16, piParam1->f_14, true);
					else
						func_314(piParam1->f_6, str, piParam1->f_14, true);
			
				if (MISC::IS_BIT_SET(*piParam1, 10))
					func_505(piParam1->f_6, 16, true, true);
			
				if (!MISC::IS_BIT_SET(*piParam1, 0) || MISC::IS_BIT_SET(*piParam1, 13))
					func_316(piParam1->f_6, false, true);
				else
					func_316(piParam1->f_6, true, true);
			}
		}
	}

	return;
}

int func_489(Ped pedParam0) // Position - 0xE218 Hash - 0xB2D81349 ^0xACC293B5
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

void func_490(int* piParam0, int iParam1) // Position - 0xE26D Hash - 0xF6A14047 ^0x2BDBE9DA
{
	if (!func_419(piParam0, 19))
	{
		if (piParam0->f_9 != iParam1)
		{
			piParam0->f_9 = iParam1;
			func_420(piParam0, 14);
		}
	}

	return;
}

BOOL func_491(BOOL bParam0) // Position - 0xE298 Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_22 && bParam0 != false;
}

void func_492(BOOL bParam0) // Position - 0xE2A8 Hash - 0x88AD5D ^0x88AD5D
{
	Global_22 = Global_22 || bParam0;
	return;
}

BOOL func_493(Ped pedParam0, int iParam1) // Position - 0xE2B9 Hash - 0x25D0971D ^0xF7D4E234
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

BOOL func_494(int* piParam0, int* piParam1, Player plParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, float fParam9, BOOL bParam10, int iParam11) // Position - 0xE2F8 Hash - 0x99448FD3 ^0x2F09ABA3
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

void func_495(int iParam0, Player plParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xE432 Hash - 0x8A4F30F0 ^0xE1CE78DB
{
	int num;

	if (bParam3 && !func_298(iParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return;

	num = func_422(iParam0);
	func_505(iParam0, 18, false, true);
	func_505(iParam0, 17, false, true);

	if (iParam4 == -1)
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(plParam1);

	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, iParam4, iParam2);
	return;
}

BOOL func_496(int iParam0, BOOL bParam1) // Position - 0xE497 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_298(iParam0))
		return false;

	num = func_422(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

BOOL func_497(int iParam0, BOOL bParam1) // Position - 0xE4EF Hash - 0xAAB142C4 ^0xBB29AF2
{
	int num;

	if (bParam1 && !func_298(iParam0))
		return false;

	num = func_422(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_498(int iParam0, BOOL bParam1) // Position - 0xE522 Hash - 0x23556CE7 ^0xE508C6D9
{
	int num;

	if (bParam1 && !func_298(iParam0))
		return;

	num = func_422(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[num /*18*/].f_3);
	return;
}

BOOL func_499(var uParam0, float fParam1) // Position - 0xE554 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_13(uParam0))
		return false;

	if (func_15(uParam0) > fParam1)
		return true;

	return false;
}

float func_500(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0xE57B Hash - 0x4C6A3038 ^0xA855205
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

BOOL func_501(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0xE5E2 Hash - 0x86FD6754 ^0x7FA3CE23
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

int func_502(Ped pedParam0) // Position - 0xE60B Hash - 0x4156E789 ^0x33933065
{
	ItemSet itemset;
	int itemsetSize;
	int num;
	var unk;
	Entity entity;
	Hash entityCarryConfig;
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	itemset = ITEMSET::CREATE_ITEMSET(false);

	if (!ITEMSET::IS_ITEMSET_VALID(itemset))
		return 0;

	ITEMSET::_CLEAR_ITEMSET(itemset);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	itemsetSize == 0;
	ITEMSET::DESTROY_ITEMSET(itemset);

	for (i = 0; i < 4; i = i + 1)
	{
		num = func_507(i);
	
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, pedParam0, num, 0))
		{
		}
		else
		{
			entity = unk.f_3;
		
			if (!ENTITY::DOES_ENTITY_EXIST(entity))
			{
			}
			else
			{
				ENTITY::IS_ENTITY_DEAD(entity);
				entityCarryConfig = ENTITY::_GET_ENTITY_CARRY_CONFIG(entity);
			
				if (entityCarryConfig == joaat("carriable_saddle") || entityCarryConfig == joaat("carriable_saddle_bundle"))
					return 1;
			}
		}
	}

	return 0;
}

int func_503(Ped pedParam0) // Position - 0xE6D3 Hash - 0x1A9D46BF ^0x1806B677
{
	Object* p_object;
	ItemSet itemset;
	BOOL flag;
	int itemsetSize;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	p_object = func_215();

	if (!ENTITY::DOES_ENTITY_EXIST(p_object))
		return 0;

	itemset = ITEMSET::CREATE_ITEMSET(false);

	if (!ITEMSET::IS_ITEMSET_VALID(itemset))
		return 0;

	ITEMSET::_CLEAR_ITEMSET(itemset);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	flag = false;
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);

	if (itemsetSize > 0)
		if (ITEMSET::IS_IN_ITEMSET(p_object, itemset))
			flag = true;

	ITEMSET::DESTROY_ITEMSET(itemset);

	if (flag)
		return 1;

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
int func_504(const char* sParam0, Hash hParam1, Player plParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0xE75C Hash - 0xA9244E74 ^0xC0A4C4ED
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
		if (func_480(i, 2))
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
		func_508(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, plParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_505(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE833 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_298(iParam0))
		return;

	num = func_422(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_506(int iParam0, const char* sParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xE87E Hash - 0x3019E4B2 ^0x1E9F9706
{
	int num;

	if (bParam4 && !func_298(iParam0))
		return;

	num = func_422(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(10, sParam1, uParam2, uParam3));
	return;
}

int func_507(int iParam0) // Position - 0xE8D1 Hash - 0x79A48FAE ^0x79A48FAE
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	}

	return 0;
}

void func_508(int iParam0, Hash hParam1, const char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Player plParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0xE916 Hash - 0x1B501888 ^0x6546232B
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
	func_432(iParam0, true);
	func_433(iParam0, true);
	func_434(iParam0, 128);
	return;
}

