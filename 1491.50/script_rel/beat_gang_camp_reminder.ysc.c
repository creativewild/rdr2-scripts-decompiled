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
	AnimScene ansLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	const char* sLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	BOOL bLocal_25 = 0;
	var uLocal_26 = 15;
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
	int iLocal_163 = 0;
	var uLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	Ped pedLocal_168 = 0;
	Player plLocal_169 = 0;
	Ped pedLocal_170 = 0;
	var uLocal_171 = 2;
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
	var uLocal_187 = -1;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 1097859072;
	var uLocal_197 = 1000;
	var uLocal_198 = 1067450368;
	var uLocal_199 = 5000;
	var uLocal_200 = 42;
	var uLocal_201 = 1103626240;
	var uLocal_202 = 1077936128;
	var uLocal_203 = 1106247680;
	var uLocal_204 = 1103101952;
	var uLocal_205 = 1097859072;
	var uLocal_206 = 1103626240;
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
	var uLocal_217 = -1;
	var uLocal_218 = 0;
	var uLocal_219 = 1;
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
	var uLocal_237 = 8;
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
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 1176256512;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 20;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = -1082130432;
	var uLocal_294 = 0;
	var uLocal_295 = 4;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 1;
	var uLocal_341 = 1;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = -1;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 1;
	var uLocal_359 = -1;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	Blip blLocal_372 = 0;
	var uLocal_373 = 1;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 1065353216;
	var uLocal_380 = 1065353216;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 1065353216;
	var uLocal_385 = 1065353216;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 1065353216;
	var uLocal_390 = 1065353216;
	var uLocal_391 = 0;
	var uLocal_392 = 1040187392;
	var uLocal_393 = 1040187392;
	var uLocal_394 = -1;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = -1082130432;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	BOOL bLocal_429 = 0;
	BOOL bLocal_430 = 0;
	BOOL bLocal_431 = 0;
	BOOL bLocal_432 = 0;
	BOOL bLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	BOOL bLocal_436 = 0;
	eScriptTaskHash esthLocal_437 = 0;
	int iLocal_438 = 0;
	var uLocal_439 = 3;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	int iLocal_443 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void main() // Position - 0x0 Hash - 0xA77DFA2B ^0x75B92024
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_167 = 1;
	iLocal_438 = -1;
	uLocal_174.f_3 = func_1(&uScriptParam_0);
	uLocal_174.f_161 = func_2(uScriptParam_0.f_2, 2);
	uLocal_164 = uLocal_164;
	func_3(&uLocal_174, true);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_4(5f);

	func_5(&(uLocal_174.f_5));
	func_6(&(uLocal_174.f_5));
	func_7(&(uLocal_174.f_5), true);
	func_8(&(uLocal_174.f_5), true);
	func_9(&(uLocal_174.f_5), true);
	func_10(&(uLocal_174.f_5), true);
	func_11(&(uLocal_174.f_5), true);
	func_12(&(uLocal_174.f_5), true);

	while (true)
	{
		switch (iLocal_167)
		{
			case 0:
				if (func_15())
					iLocal_167 = 3;
				break;
		
			case 1:
				if (func_13(&uLocal_174, &uScriptParam_0, false, false, false, 1, false, true))
				{
					func_14(&uLocal_174, &uLocal_371, &(uLocal_174.f_51.f_4));
					iLocal_167 = 0;
				}
				else if (uLocal_174.f_160)
				{
					uLocal_174.f_160 = 0;
					uLocal_174.f_51 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
					uLocal_174.f_51 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uLocal_174.f_51, ENTITY::GET_ENTITY_HEADING(Global_35) + 180f, 0f, 50f, 0f) };
					iLocal_167 = 0;
				}
				break;
		
			case 3:
				if (func_16())
					iLocal_167 = 4;
				break;
		
			case 4:
				if (!func_17(&uLocal_174, &uLocal_171, 0, false, true, false, true, false) && iLocal_165 != 7)
					func_4(15f);
			
				if (func_18())
				{
					uLocal_174.f_50 = 1;
					func_4(func_19(5f, 60f * (float)Global_1359489.f_61));
				}
			
				if (func_20(&uLocal_174, &uLocal_171, false, false, 0, false, true, true, false, 0, 0, 0, 0))
					func_4(5f);
				break;
		}
	
		BUILTIN::WAIT(uLocal_174.f_158);
	}

	return;
}

var func_1(var uParam0) // Position - 0x1A7 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

BOOL func_2(int iParam0, int iParam1) // Position - 0x1B2 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_3(var uParam0, BOOL bParam1) // Position - 0x1C1 Hash - 0xEB8E609B ^0x283A4C5B
{
	func_6(&(uParam0->f_5));

	if (uParam0->f_161)
		func_21("BEAT_LAUNCHED", 4000, false, true, 0, 0, -1, -1, 0);

	MAP::ALLOW_SONAR_BLIPS(bParam1);
	return;
}

void func_4(float fParam0) // Position - 0x1EF Hash - 0xCD30E6DC ^0x60CB04D3
{
	if (MAP::DOES_BLIP_EXIST(blLocal_372))
		MAP::REMOVE_BLIP(&blLocal_372);

	if (func_22(iLocal_438))
	{
		func_23(iLocal_438, false, 0, true, -1082130432, true, true, false, false, false, false);
		func_24(plLocal_169, iLocal_438, true, 0, false);
	}

	if (func_25(iLocal_23))
		func_26(&iLocal_23, true, true);

	if (func_25(iLocal_24))
		func_26(&iLocal_24, true, true);

	func_27(&uLocal_26);
	func_28();
	func_29();

	if (CAM::IS_SCREEN_FADED_OUT() && iLocal_165 == 7)
		CAM::DO_SCREEN_FADE_IN(3000);

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_30(Global_35);
	Global_1359489.f_60 = MISC::GET_GAME_TIMER() + BUILTIN::ROUND(fParam0 * 60000f);
	func_31(&uLocal_174, &uLocal_171, &uLocal_373, 0, -1, 0, false, true, false, true);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_5(int iParam0) // Position - 0x2B9 Hash - 0xE59FE01F ^0xE59FE01F
{
	func_33(iParam0, func_32(iParam0) - 6f);
	func_34(iParam0, true);
	return;
}

void func_6(var uParam0) // Position - 0x2D6 Hash - 0xD2F4094 ^0xD2F4094
{
	func_10(uParam0, false);
	func_35(uParam0, false);
	func_7(uParam0, true);
	func_8(uParam0, true);
	func_12(uParam0, false);
	func_36(uParam0, true);
	func_37(uParam0, true, true, true);
	return;
}

void func_7(var uParam0, BOOL bParam1) // Position - 0x311 Hash - 0x97140DD8 ^0x96C23302
{
	if (bParam1)
		func_38(&(uParam0->f_1), 256);
	else
		func_39(&(uParam0->f_1), 256);

	return;
}

void func_8(var uParam0, BOOL bParam1) // Position - 0x337 Hash - 0x6E38DCCC ^0x27E8693B
{
	if (bParam1)
	{
		func_39(uParam0, 16);
	}
	else
	{
		func_38(uParam0, 67108864);
		func_38(uParam0, 16);
	}

	return;
}

void func_9(var uParam0, BOOL bParam1) // Position - 0x362 Hash - 0x76250B73 ^0xFF9F293B
{
	if (bParam1)
		func_38(&(uParam0->f_1), 131072);
	else
		func_39(&(uParam0->f_1), 131072);

	return;
}

void func_10(var uParam0, BOOL bParam1) // Position - 0x38A Hash - 0x97140DD8 ^0xF9889272
{
	if (bParam1)
		func_38(&(uParam0->f_1), 16384);
	else
		func_39(&(uParam0->f_1), 16384);

	return;
}

void func_11(int iParam0, BOOL bParam1) // Position - 0x3B0 Hash - 0x776268CE ^0x776268CE
{
	if (bParam1)
		func_39(iParam0, 8);
	else
		func_38(iParam0, 8);

	return;
}

void func_12(var uParam0, BOOL bParam1) // Position - 0x3D0 Hash - 0x32CE93C6 ^0x60BFF41C
{
	if (bParam1)
		func_38(&(uParam0->f_1), 128);
	else
		func_39(&(uParam0->f_1), 128);

	return;
}

BOOL func_13(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x3F4 Hash - 0xB132D6EC ^0x3A978286
{
	float radius;

	if (bParam6 || func_40(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), true, bParam3, bParam4))
	{
		if (bParam6 || func_41(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				radius = 7f;
			
				if (func_42(uParam0->f_3, 1))
					radius = 20f;
			
				MISC::CLEAR_AREA(uParam0->f_51, radius, 2097152);
			}
		
			if (iParam5 == 1)
				func_43(uParam0, -1, 0, bParam7);
		
			PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(uParam0->f_51, 5f);
		
			if (bParam2)
				uParam0->f_51.f_3 = func_44(uParam0->f_51);
		
			return true;
		}
	}

	return false;
}

void func_14(var uParam0, var uParam1, var uParam2) // Position - 0x4A6 Hash - 0x42FCC9C6 ^0x90E42D05
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
	
		case 1:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
	
		case 2:
			*uParam1 = 0;
			*uParam2 = 2;
			break;
	
		case 3:
			*uParam1 = 0;
			*uParam2 = 3;
			break;
	
		case 4:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 5:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
	
		case 6:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
	
		case 7:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
	
		case 8:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
	
		case 9:
			*uParam1 = 10;
			*uParam2 = 1;
			break;
	
		case 10:
			*uParam1 = 10;
			*uParam2 = 2;
			break;
	
		case 11:
			*uParam1 = 10;
			*uParam2 = 3;
			break;
	
		case 12:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
	
		case 13:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
	
		case 14:
			*uParam1 = 11;
			*uParam2 = 2;
			break;
	
		case 15:
			*uParam1 = 11;
			*uParam2 = 3;
			break;
	
		case 16:
			*uParam1 = 11;
			*uParam2 = 4;
			break;
	}

	return;
}

BOOL func_15() // Position - 0x5E7 Hash - 0xBF21C7FD ^0xBF21C7FD
{
	switch (iLocal_166)
	{
		case 0:
			if (func_45(&uLocal_174))
			{
				if (func_46() == -1)
					func_4(5f);
			
				iLocal_166 = 1;
			}
			break;
	
		case 1:
			return true;
	}

	return false;
}

BOOL func_16() // Position - 0x627 Hash - 0x71D80055 ^0xE4D0A657
{
	switch (iLocal_163)
	{
		case 0:
			iLocal_163 = 1;
			break;
	
		case 1:
			iLocal_163 = 2;
			break;
	
		case 2:
			if (func_47())
			{
				func_48(uLocal_174.f_51, 10f, false);
				iLocal_163 = 5;
			}
			break;
	
		case 5:
			if (func_49(iLocal_438, pedLocal_168))
				iLocal_163 = 6;
			break;
	
		case 6:
			return true;
	}

	return false;
}

BOOL func_17(var uParam0, var uParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x698 Hash - 0xD61D6695 ^0x584D21AC
{
	BOOL flag;
	Entity firstEntityPedIsCarrying;
	Ped pedIndexFromEntityIndex;

	flag = false;
	firstEntityPedIsCarrying = 0;
	pedIndexFromEntityIndex = 0;

	if (!uParam0->f_186)
		func_50(uParam0, iParam2);

	uParam0->f_1 = uParam0->f_1 % 4;
	func_51(uParam0, uParam1);

	if (bParam4)
	{
		if (uParam0->f_48 && !(uParam0->f_5 & 16384 != 0))
		{
			if (uParam0->f_5.f_1 & 256 != 0)
				func_52(&(uParam0->f_5));
		
			func_39(&(uParam0->f_5), 16384);
		}
	}

	if (!uParam0->f_48 && !func_53(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_54(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_55(&(uParam0->f_121));
		}
	}

	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
						uParam0->f_193 = uParam0->f_193 + 1;
					else
						uParam0->f_193 = 0;
				
					func_56(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
	
		case 2:
			if (!func_57(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
				flag = true;
			break;
	
		case 3:
			break;
	}

	if (func_42(uParam0->f_3, 128))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->[0]) && !PED::IS_PED_INJURED(uParam1->[0]) && uParam0->f_3 != 49)
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(VOLUME::_0xF6F5447D418DAA82(uParam1->[0])))
				func_58(uParam0, uParam1->[0]);
	
		if (bParam6)
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
			
				if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying))
				{
					if (ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
					{
						pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying);
					
						if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
							if (PED::IS_PED_HOGTIED(pedIndexFromEntityIndex) || bParam5 || PED::IS_PED_HUMAN(pedIndexFromEntityIndex) && ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex))
								flag = true;
					}
				}
			}
		}
	}

	uParam0->f_158 = 0;
	uParam0->f_1 = uParam0->f_1 + 1;
	uParam0->f_2 = uParam0->f_2 + 1;

	if (flag)
		return false;

	return true;
}

BOOL func_18() // Position - 0x89B Hash - 0xBC416C72 ^0x6E7FD66
{
	Vector3 entityCoords;
	int taskSequenceId;

	if (iLocal_165 <= 2 && func_59(0, false, true))
		return true;

	switch (iLocal_165)
	{
		case 0:
			entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
			entityCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(entityCoords, ENTITY::GET_ENTITY_HEADING(Global_35) + 180f, 0f, 50f, 0f) };
		
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(entityCoords, &uLocal_368, 1, 1f, 0))
			{
				if (!CAM::IS_SPHERE_VISIBLE(uLocal_368, 5f))
				{
					MISC::CLEAR_AREA(uLocal_368, 3f, 16392);
					blLocal_372 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), pedLocal_168);
					func_60(pedLocal_168, uLocal_368, 0f, 2, 1073741824);
					func_60(plLocal_169, uLocal_368, 0f, 2, 1073741824);
					PED::SET_PED_ONTO_MOUNT(pedLocal_168, plLocal_169, -1, true);
					func_61(1);
				}
			}
			else if (func_62() > 30000)
			{
				func_61(9);
			}
			break;
	
		case 1:
			if (func_63(&uLocal_174, 7f, 150f, 80f, 1, 0, true, -1082130432, true, 1125515264, false, false))
			{
				TASK::TASK_GO_TO_ENTITY(pedLocal_168, Global_35, -1, 5f, 2.5f, 1073741824, 0);
				func_61(2);
			}
			else if (func_62() > 30000)
			{
				func_61(9);
			}
			break;
	
		case 2:
			if (func_64(Global_35, pedLocal_168) < 25f)
			{
				if (!uLocal_174.f_48)
					func_54(&uLocal_174, &(uLocal_174.f_48), uLocal_174.f_3, &(uLocal_174.f_51.f_6));
			
				CAM::SET_GAMEPLAY_ENTITY_HINT(pedLocal_168, 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(Global_35, pedLocal_168, -1, 0, 51, 0);
				TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(pedLocal_168, Global_35, 0, 0, -1082130432, -1082130432, 8, 0, 0, 1069547520, 1073741824);
				func_61(3);
			}
			else if (func_62() > 30000)
			{
				func_61(9);
			}
			else if (func_65())
			{
				func_61(11);
			}
			break;
	
		case 3:
			if (!bLocal_429 && func_64(Global_35, pedLocal_168) < 15f)
			{
				if (func_66())
				{
					bLocal_429 = true;
					uLocal_174.f_44 = 1;
					func_67();
				}
				else if (func_62() > 10000)
				{
					func_61(9);
				}
			}
			else if (bLocal_429)
			{
				func_68(1065353216);
			
				if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(ansLocal_14, false))
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(pedLocal_168, 0f, 0f, 0f, true, 1000, 2000, 2000, 0);
					func_61(4);
				}
			}
			else if (func_62() > 30000)
			{
				func_61(9);
			}
			else if (func_65())
			{
				func_61(11);
			}
			break;
	
		case 4:
			func_68(1065353216);
			func_69();
		
			if (iLocal_434 == 0 && func_62() > 10000)
				iLocal_434 = 2;
		
			if (iLocal_434 != 0 && !func_70(0))
			{
				func_71(pedLocal_168);
			
				if (iLocal_434 == 1)
				{
					bLocal_433 = func_72();
					func_61(5);
				}
				else if (iLocal_434 == 2)
				{
					bLocal_433 = func_73();
					func_61(8);
				}
			}
		
			if (func_65())
				func_61(11);
			break;
	
		case 5:
			if (CAM::IS_SCREEN_FADED_IN())
				func_68(1065353216);
		
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(ansLocal_14.f_1, false) && CAM::IS_SCREEN_FADED_IN() || !bLocal_433)
			{
				CAM::DO_SCREEN_FADE_OUT(1500);
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				func_74(&pedLocal_170, plLocal_169);
				func_61(6);
			}
			else if (func_65())
			{
				func_61(11);
			}
			break;
	
		case 6:
			STREAMING::_REQUEST_METADATA_AT_COORD(func_75());
		
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				if (!bLocal_431)
				{
					func_76(pedLocal_168, pedLocal_170);
					STREAMING::LOAD_SCENE_START_SPHERE(func_75() + { 5f, 0f, 0f }, 40f, 0);
					bLocal_431 = true;
				}
				else if (STREAMING::IS_LOAD_SCENE_LOADED() || func_62() > 20000 && STREAMING::_HAS_COLLISION_LOADED_AT_COORD(func_75()))
				{
					STREAMING::LOAD_SCENE_STOP();
					Global_1359489.f_61 = 0;
				
					if (bLocal_432)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
						ENTITY::SET_ENTITY_COORDS(Global_35, func_75(), true, false, true, true);
						ENTITY::SET_ENTITY_HEADING(Global_35, 112f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
				
					func_61(7);
				}
			}
			break;
	
		case 7:
			if (func_62() < 20000 && !func_78(func_77()))
				break;
		
			if (func_79())
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.3f, 5000, 0, true, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			
				if (bLocal_432)
				{
					func_23(iLocal_438, false, false, true, -1082130432, true, true, false, false, false, false);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_75(), 1.3f, 20000, 1193033728, 2f, 0);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_168, taskSequenceId);
					esthLocal_437 = SCRIPT_TASK_PERFORM_SEQUENCE;
				}
			}
			else
			{
				if (bLocal_432 && func_62() < 20000 && !func_80(26))
					break;
			
				if (!(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
					CAM::DO_SCREEN_FADE_IN(7500);
			
				if (bLocal_432 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_168, esthLocal_437, true) != 1)
					func_61(10);
			}
			break;
	
		case 8:
			func_68(1065353216);
		
			if (!func_81(0) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(ansLocal_14.f_2, false) || !bLocal_433)
			{
				Global_1359489.f_61 = Global_1359489.f_61 + 1;
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				func_61(9);
			}
			break;
	
		case 9:
			TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(pedLocal_168, func_75(), 20f, 3f, 0, 0);
			func_23(iLocal_438, false, false, true, -1082130432, true, true, false, false, false, false);
			return true;
	
		case 10:
			func_23(iLocal_438, false, false, true, -1082130432, true, true, false, false, false, false);
			return true;
	
		case 11:
			TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(pedLocal_168, func_75(), 20f, 3f, 0, 0);
			func_23(iLocal_438, false, false, true, -1082130432, true, true, true, false, false, false);
			return true;
	}

	return false;
}

float func_19(float fParam0, float fParam1) // Position - 0xEA8 Hash - 0x99935A7D ^0x99935A7D
{
	if (fParam0 > fParam1)
		return fParam0;

	return fParam1;
}

BOOL func_20(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, int iParam10, int iParam11, int iParam12) // Position - 0xEBF Hash - 0x3F99189C ^0xFF0D8C95
{
	float num;
	var unk;

	num = 0f;

	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
			if (func_82())
				return true;
	
		if (bParam7)
			if (Global_16)
				return true;
	
		if (!uParam0->f_48)
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
				return true;
	}

	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				num = 300f;
			
				if (!bParam8 && uParam0->f_48)
					num = num - 65f;
			}
			else if (func_83(uParam0->f_3))
			{
				num = 250f;
			}
			else if (func_42(uParam0->f_3, 131072))
			{
				num = 70f;
				num = num + 10f;
			}
			else if (func_42(uParam0->f_3, 1) && iParam12 == 0)
			{
				num = 215f;
				num = num + 20f;
			
				if (uParam0->f_48)
					num = num - 80f;
			}
			else if (func_42(uParam0->f_3, 2) || iParam12 == 1)
			{
				num = 125f;
				num = num + 10f;
			
				if (uParam0->f_48)
					num = num - 50f;
			}
		
			uParam0->f_189 = num;
		}
		else
		{
			num = uParam0->f_189;
		}
	
		num = num * num;
	
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->[uParam0->f_188]))
					if (Global_1935630.f_40 != uParam1->[uParam0->f_188])
						if (bParam3 && !ENTITY::IS_ENTITY_DEAD(uParam1->[uParam0->f_188]) || !bParam3)
							if (uParam0->f_98[uParam0->f_188] * uParam0->f_98[uParam0->f_188] <= num)
								uParam0->f_187 = 0;
			
				uParam0->f_188 = uParam0->f_188 + 1;
			}
			else
			{
				uParam0->f_188 = 0;
			
				if (uParam0->f_187)
					return true;
				else
					uParam0->f_187 = 1;
			}
		}
	
		if (bParam4)
		{
			if (iParam9 == 0f)
			{
				if (func_84(Global_36, uParam0->f_51) > num)
					return true;
			}
			else
			{
				unk = { iParam9, iParam10, iParam11 };
			
				if (func_84(Global_36, unk) > num)
					return true;
			}
		}
	}

	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->[uParam0->f_191]))
				uParam0->f_190 = 0;
		
			uParam0->f_191 = uParam0->f_191 + 1;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}

	return false;
}

int func_21(char* sParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1132 Hash - 0xA0C3ED00 ^0x48A9B53F
{
	const char* str;

	if (bParam2)
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, true);

	if (Global_1572887.f_12 != -1)
		return func_85(sParam0, iParam1, 0, 0, 1, true);

	str = func_86(iParam8, sParam0, iParam4, iParam5, iParam6, iParam7);

	if (bParam3)
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(str);

	return func_85(str, iParam1, 0, 0, 1, true);
}

BOOL func_22(int iParam0) // Position - 0x1188 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

void func_23(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x11A7 Hash - 0xA4706F79 ^0xAF27D1D3
{
	BOOL flag;
	PersChar persChar;
	BOOL flag2;

	if (!func_22(iParam0))
		return;

	if (func_87(iParam0))
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
			return;

	if (bParam10)
	{
		func_88(iParam0, 56, true);
		func_89(&(Global_1359489.f_40), true);
	}

	func_90(iParam0, false);
	func_91(iParam0, 4, false);
	func_92(iParam0);
	func_93(iParam0);
	func_94(iParam0, 37, true);
	flag = func_95(Global_1360165[iParam0 /*1157*/], 0);
	persChar = func_96(iParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);

	if (func_97(iParam0, 64, true))
		func_94(iParam0, 64, true);

	if (bParam3)
	{
		func_94(iParam0, 33, true);
		func_94(iParam0, 34, true);
		func_98(iParam0, 1056964608, -1, 1061158912);
		func_99(iParam0, true, true, false);
	
		if (bParam6)
			func_88(iParam0, 30, true);
	
		if (bParam7)
		{
			func_88(iParam0, 35, true);
		
			if (bParam8)
				func_88(iParam0, 62, true);
		}
	
		if (flag)
		{
			func_100(iParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_94(iParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
	
		func_88(iParam0, 33, true);
		func_99(iParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = iParam4;
			func_89(&(Global_1360165[iParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_101(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_88(iParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			func_102(iParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);

	if (func_97(iParam0, 45, true))
		func_94(iParam0, 45, true);

	func_103(iParam0, 16, true);
	func_94(iParam0, 44, true);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_95(func_104(iParam0), 0))
			func_24(0, iParam0, bParam3, 0, bParam2);

	return;
}

void func_24(Player plParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x145C Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_105(iParam1))
		return;

	player = func_104(iParam1);

	if (func_106(iParam1))
		if (!func_107(iParam1))
			return;

	func_94(iParam1, 39, true);
	func_108(iParam1, 64, false);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_108(iParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_108(iParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_88(iParam1, 43, true);
		}
	
		if (bParam4)
			func_109(iParam1, false, true, true, true);
	}

	return;
}

BOOL func_25(int iParam0) // Position - 0x14FE Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_26(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x153D Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_25(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_110(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_111(num);
	*uParam0 = 0;
	return;
}

void func_27(var uParam0) // Position - 0x1591 Hash - 0xAE891588 ^0xE482EE7F
{
	int i;
	var unk;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i /*9*/] = { unk };
	}

	uParam0->f_136 = 0;
	return;
}

void func_28() // Position - 0x15C0 Hash - 0x34231665 ^0x45790212
{
	Vehicle vehiclePedIsUsing;

	if (bLocal_430)
	{
		func_112(Global_35, true);
		func_113(pedLocal_168, true);
		func_114(&uLocal_413);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsUsing))
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(vehiclePedIsUsing, 50f);
		}
	
		bLocal_430 = false;
	}

	return;
}

void func_29() // Position - 0x161C Hash - 0x695033F0 ^0x1B5F9E02
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_14))
		ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_14);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_14.f_1))
		ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_14.f_1);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_14.f_2))
		ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_14.f_2);

	if (HUD::_DOES_TEXT_BLOCK_EXIST(sLocal_22))
		HUD::_TEXT_BLOCK_DELETE(sLocal_22);

	return;
}

void func_30(Ped pedParam0) // Position - 0x1668 Hash - 0x78302BA0 ^0x4D457AB0
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		TASK::TASK_CLEAR_LOOK_AT(pedParam0);

	return;
}

void func_31(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x1680 Hash - 0xC5D53762 ^0x20C2E132
{
	int i;
	Ped mount;
	int num;
	BOOL flag;
	Hash value;
	var buffer;
	int num2;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_115(uParam0->f_3)))
		MISC::_0x1096603B519C905F("");

	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
	
		if (!uParam0->f_45 && !uParam0->f_44)
			func_116(uParam0->f_3, 524288);
	}

	if (func_117(PLAYER::PLAYER_PED_ID(), 0, true))
	{
		mount = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		num = uParam0->f_98;
	
		for (i = 0; i < *uParam1; i = i + 1)
		{
			flag = bParam8 && DECORATOR::DECOR_EXIST_ON(uParam1->[i], "pedRoam_bInPedRoam");
		
			if (func_117(uParam1->[i], 0, false))
			{
				func_118(uParam1->[i], flag);
			
				if (func_119(uParam0, &uParam1->[i]))
					func_120(&uParam1->[i]);
			}
		
			if (!uParam0->f_50)
			{
				if (func_117(uParam1->[i], 0, true))
				{
					if (bParam9)
						if (PED::GET_PED_STEALTH_MOVEMENT(uParam1->[i]))
							PED::SET_PED_STEALTH_MOVEMENT(uParam1->[i], false, 0, 0);
						else if (PED::GET_PED_CROUCH_MOVEMENT(uParam1->[i]))
							PED::_SET_PED_CROUCH_MOVEMENT(uParam1->[i], false, 0, false);
				
					if (!flag)
						if (!bParam6)
							func_122(uParam1->[i], 1073741824, i < num ? uParam0->f_98[i] : -1f, mount, false);
						else
							TASK::TASK_WANDER_STANDARD(uParam1->[i], 1193033728, 0);
				}
			}
		}
	}

	if (bParam7)
		func_123(uParam0);

	func_124(uParam0);

	if (!uParam0->f_186)
		func_50(uParam0, iParam3);

	if (uParam0->f_186)
	{
		value = func_125(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(value, "%u", &buffer);
		num2 = 0;
	
		if (!uParam0->f_48)
			num2 = 2;
		else if (!uParam0->f_44)
			num2 = 1;
	
		func_126(7, value, num2);
		uParam0->f_186 = 0;
	}

	return;
}

float func_32(int iParam0) // Position - 0x1853 Hash - 0xD73B9827 ^0x4905FA06
{
	return iParam0->f_24;
}

void func_33(int iParam0, float fParam1) // Position - 0x185F Hash - 0x4F8BE4B5 ^0xC5C29ABC
{
	iParam0->f_25 = fParam1;
	return;
}

void func_34(int iParam0, BOOL bParam1) // Position - 0x186D Hash - 0xA36879E8 ^0xA36879E8
{
	if (bParam1)
		func_39(iParam0, 1);
	else
		func_38(iParam0, 1);

	return;
}

void func_35(var uParam0, BOOL bParam1) // Position - 0x188B Hash - 0x97140DD8 ^0xBDBF7A5
{
	if (bParam1)
		func_38(&(uParam0->f_1), 2048);
	else
		func_39(&(uParam0->f_1), 2048);

	return;
}

void func_36(var uParam0, BOOL bParam1) // Position - 0x18B1 Hash - 0x9CA625A6 ^0xD96D8959
{
	if (bParam1)
		func_39(uParam0, 256);
	else
		func_38(uParam0, 256);

	return;
}

void func_37(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x18D3 Hash - 0x3145AA70 ^0xBCD5B3EB
{
	if (!bParam1)
		func_39(uParam0, 268435456);
	else
		func_38(uParam0, 268435456);

	if (!bParam2)
		func_39(uParam0, 1073741824);
	else
		func_38(uParam0, 1073741824);

	if (!bParam3)
		func_39(uParam0, 536870912);
	else
		func_38(uParam0, 536870912);

	return;
}

void func_38(int iParam0, int iParam1) // Position - 0x1938 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_39(int iParam0, int iParam1) // Position - 0x194D Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_40(int iParam0, var uParam1, BOOL bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x195E Hash - 0x8023D598 ^0x6E2465E1
{
	int value;
	float num;
	float num2;
	BOOL flag;
	BOOL flag2;

	if (uParam4.f_6 > -1)
	{
		*uParam1 = { func_127(iParam0, uParam4.f_6) };
		uParam1->f_4 = uParam4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_128(iParam0, uParam1, bParam2, bParam12, false);
		*uParam3 = 0;
		return true;
	}

	switch (uParam1->f_9)
	{
		case 0:
			if (func_53(iParam0, 128))
			{
				if (!func_129(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return false;
				}
			}
			else
			{
				func_130(iParam0, &num, &num2, &value, false);
				flag2 = false;
				*uParam1 = { func_131(&flag2, iParam0, num2, num) };
			
				if (flag2)
				{
					*uParam11 = 1;
					return false;
				}
			
				if (_IS_NULL_VECTOR(*uParam1))
					return func_133(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			
				uParam1->f_4 = func_134(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
			
				if (func_2(uParam4.f_2, 8))
				{
					func_128(iParam0, uParam1, false, bParam12, false);
					*uParam3 = 0;
					return true;
				}
			
				func_135(uParam1);
			}
		
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
	
		case 1:
			if (func_136(uParam1, uParam3, uParam11, bParam2, bParam13))
				if (!bParam13 && func_137(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
					uParam1->f_9 = 2;
				else
					uParam1->f_9 = 5;
			break;
	
		case 2:
			if (func_53(iParam0, 128))
			{
				if (!func_138(uParam1, &flag))
				{
					if (flag)
						return func_133(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				
					return false;
				}
			}
			else
			{
				func_130(iParam0, &num, &num2, &value, false);
			
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(value))
					if (!func_135(uParam1))
						return func_133(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					else
						uParam1->f_9 = 3;
				else
					uParam1->f_9 = 3;
			}
		
			*uParam3 = 0;
			break;
	
		case 3:
			if (func_139(iParam0, uParam4.f_1, uParam1, uParam4, bParam14))
			{
				func_128(iParam0, uParam1, bParam2, bParam12, false);
				*uParam3 = 0;
				return true;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_133(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
	
		case 5:
			if (uParam1->f_8 < 12)
				uParam1->f_9 = 0;
			break;
	}

	if (bParam2)
		func_21("BEAT_SCAN", 2000, false, true, 0, 0, -1, -1, 0);

	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_21("BEAT_FAIL", 4000, false, true, 0, 0, -1, -1, 0);
		}
	
		*uParam11 = 1;
	}

	return false;
}

BOOL func_41(var uParam0, int iParam1) // Position - 0x1BF3 Hash - 0xA7B02427 ^0x63682AA8
{
	if (func_42(iParam1, 256))
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_141(iParam1, func_140(uParam0), &(uParam0->f_172)))
			if (func_117(Global_35, 0, true))
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);

	return true;
}

BOOL func_42(int iParam0, int iParam1) // Position - 0x1C45 Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_142(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

void func_43(var uParam0, int iParam1, Entity eParam2, BOOL bParam3) // Position - 0x1C68 Hash - 0x3A9129D5 ^0x60754B1E
{
	if (uParam0->f_176)
		return;

	if (iParam1 != -1)
		func_143(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, (float)iParam1, (float)iParam1, 5f, "Custom Sized Ambient Avoidance");
	else if (func_42(uParam0->f_3, 1) && !func_42(uParam0->f_3, 32))
		func_143(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	else if (func_42(uParam0->f_3, 2) && !func_42(uParam0->f_3, 32))
		func_143(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	else
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171, 0, 0, 0, -1, -1, 0);

	if (bParam3)
		func_144(uParam0->f_171, 1);

	if (func_42(uParam0->f_3, 1))
	{
		func_143(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::GET_VOLUME_SCALE(uParam0->f_171) * { 3.5f, 3.5f, 3.5f }, "Predator Stay Out");
		func_145(uParam0->f_174, 0, 262144, false, false);
	}

	if (eParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(eParam2))
	{
		PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_171, eParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
	}

	return;
}

float func_44(var uParam0, var uParam1, var uParam2) // Position - 0x1DAD Hash - 0x3F535152 ^0x974D5F01
{
	float dx;

	dx = { Global_36 - uParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
}

BOOL func_45(var uParam0) // Position - 0x1DCD Hash - 0x4252B2F0 ^0x75EABCE5
{
	int numPeds;
	int num;

	numPeds = func_146(uParam0->f_3);
	num = func_147(true);

	if (num > 0)
		numPeds = numPeds + num;

	PED::_RESERVE_AMBIENT_PEDS(numPeds);

	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= numPeds)
		return true;

	return false;
}

int func_46() // Position - 0x1E0A Hash - 0xD221401E ^0xD221401E
{
	int num;
	int i;

	if (func_148(26))
	{
		bLocal_432 = true;
		iLocal_438 = 7;
		return iLocal_438;
	}

	uLocal_439[0] = 7;
	uLocal_439[1] = 2;
	uLocal_439[2] = 3;
	iLocal_443 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	num = func_149(uLocal_174.f_3, 3, false);

	if (uLocal_174.f_161 && num > 0)
	{
		iLocal_443 = num - 1;
		iLocal_438 = uLocal_439[iLocal_443];
		return iLocal_438;
	}

	iLocal_438 = -1;

	if (func_150())
	{
		for (i = 0; i < 3; i = i + 1)
		{
			if (func_151(uLocal_439[iLocal_443], true, false) && Global_1359489.f_59 != uLocal_439[iLocal_443])
			{
				iLocal_438 = uLocal_439[iLocal_443];
				break;
			}
		
			iLocal_443 = (iLocal_443 + 1) % 3;
		}
	}
	else if (func_151(7, true, false) && Global_1359489.f_59 != 7)
	{
		iLocal_438 = 7;
	}

	if (iLocal_438 == -1 && func_151(Global_1359489.f_59, true, false))
		iLocal_438 = Global_1359489.f_59;

	if (iLocal_438 != -1)
		Global_1359489.f_59 = iLocal_438;

	return iLocal_438;
}

BOOL func_47() // Position - 0x1F28 Hash - 0x234F6978 ^0xD6081C9D
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_168))
	{
		pedLocal_168 = func_152(iLocal_438, true, 0, 0, 0, 0, 0, true, 1, false, true, false, 0, 0, false, false, false, true, true, true, false, false, true, false, true);
		return false;
	}

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_168, true);
	func_153(pedLocal_168, true);

	if (!ENTITY::DOES_ENTITY_EXIST(plLocal_169))
	{
		plLocal_169 = func_154(iLocal_438, true, true, 1, 0, 1, true, true, true, 0, 0, 0, 0, false, false, false, false);
		return false;
	}

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(plLocal_169, true);
	func_155(pedLocal_168, &uLocal_174, false);
	func_155(plLocal_169, &uLocal_174, false);
	PED::SET_PED_ONTO_MOUNT(pedLocal_168, plLocal_169, -1, true);
	return true;
}

void func_48(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x1FBA Hash - 0xDCCB3575 ^0xAC48C8F6
{
	int num;

	num = 16384;

	if (bParam4)
		num = num | 524288;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

BOOL func_49(int iParam0, Ped pedParam1) // Position - 0x1FE1 Hash - 0xADA2368A ^0x846A4B7
{
	func_156(iParam0);

	if (!HUD::_DOES_TEXT_BLOCK_EXIST(sLocal_22))
		HUD::TEXT_BLOCK_REQUEST(sLocal_22);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_14))
		ansLocal_14 = ANIMSCENE::_CREATE_ANIM_SCENE(ansLocal_14.f_4, 0, 0, false, true);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_14.f_1))
		ansLocal_14.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(ansLocal_14.f_5, 0, 0, false, true);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_14.f_2))
		ansLocal_14.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(ansLocal_14.f_6, 0, 0, false, true);

	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_14, func_157(iParam0), Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_14, func_158(iParam0), pedParam1, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_14.f_1, func_157(iParam0), Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_14.f_1, func_158(iParam0), pedParam1, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_14.f_2, func_157(iParam0), Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_14.f_2, func_158(iParam0), pedParam1, 0);
	ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_14);
	ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_14.f_1);
	ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_14.f_2);
	return true;
}

void func_50(var uParam0, int iParam1) // Position - 0x20CC Hash - 0xBFCD3EF3 ^0x8EE98928
{
	var unk;
	Hash hash;

	unk = { func_159(uParam0) };
	hash = func_125(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, hash, unk);

	if (STATS::STATSTRACKER_IS_INITIALIZED(hash))
		uParam0->f_186 = 1;

	return;
}

void func_51(var uParam0, var uParam1) // Position - 0x2116 Hash - 0x213CA44 ^0x4305D77A
{
	if (uParam0->f_2 >= *uParam1)
	{
		uParam0->f_2 > uParam0->f_98;
		uParam0->f_2 = 0;
	}

	if (ENTITY::DOES_ENTITY_EXIST(uParam1->[uParam0->f_2]))
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam1->[uParam0->f_2], false, false), Global_36, true);
	else
		uParam0->f_98[uParam0->f_2] = 0f;

	return;
}

void func_52(var uParam0) // Position - 0x2177 Hash - 0x6672DAD ^0x6672DAD
{
	func_7(uParam0, true);
	func_160(uParam0, 20);
	return;
}

BOOL func_53(int iParam0, int iParam1) // Position - 0x218E Hash - 0x5F43695 ^0x71726655
{
	if (!func_142(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_1 && iParam1 != false;
}

void func_54(var uParam0, var uParam1, int iParam2, Blip* pblParam3) // Position - 0x21B3 Hash - 0x7B34B5CF ^0x1E92F3D2
{
	if (!func_142(iParam2))
		return;

	if (*uParam1)
		return;

	if (func_161())
		func_162(1);

	func_163(iParam2, uParam0->f_43);
	func_164(iParam2, false, 0, false, false);

	if (func_165(iParam2) != -1)
		MISC::_SET_WEATHER_TYPE_FROZEN(true);

	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_115(uParam0->f_3));

	if (MAP::DOES_BLIP_EXIST(*pblParam3))
		MAP::REMOVE_BLIP(pblParam3);

	func_166(uParam0, true, false);
	*uParam1 = 1;
	return;
}

void func_55(var uParam0) // Position - 0x2233 Hash - 0xDA7BC560 ^0xF375F766
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i /*9*/].f_7 = 0f;
		uParam0->[i /*9*/].f_8 = 0f;
	}

	return;
}

void func_56(var uParam0, int iParam1, float fParam2) // Position - 0x2261 Hash - 0x81430847 ^0xEF772964
{
	BOOL flag;
	float num;

	flag = false;

	if (uParam0->f_178 && func_167())
		flag = true;

	if (!uParam0->f_48 && !func_53(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_54(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_55(&(uParam0->f_121));
			return;
		}
	
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
			if (!func_168(Global_35, uParam0->f_173, true, 0))
				return;
	
		num = func_169(uParam0, flag);
		func_170(&uParam0->f_121[iParam1 /*9*/], num, 1082130432, 0, 90f, false, uParam0->f_98[iParam1]);
	
		if (func_171(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_54(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_55(&(uParam0->f_121));
		}
	}

	return;
}

BOOL func_57(int iParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x233D Hash - 0x677A2EA8 ^0x854614DB
{
	float num;
	float num2;
	int num3;

	num = 30f;
	num2 = 150f;

	if (func_42(uParam2->f_3, 1))
		num2 = 150f;
	else
		num2 = 70f;

	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
			if (func_172())
				num = 15f;
	
		if (func_173(uParam2, num))
			*uParam1 = 1;
	}

	if (!uParam2->f_48)
	{
		if (!bParam3 && func_174(PLAYER::PLAYER_ID(), true, false, true))
			return false;
	
		if (!func_173(uParam2, num2))
			if (!func_175(Global_1310750[uParam2->f_3 /*111*/].f_38))
				return false;
	
		if (!func_176(uParam2->f_3, 2) && func_177(2))
			return false;
	
		if (func_42(iParam0, 4194304) || func_42(iParam0, 33554432))
			if (func_178(true))
				return false;
	}

	if (func_179(Global_35))
		return false;

	if (func_59(0, true, true) && !func_180(iParam0))
		return false;

	if (!*uParam1 && func_42(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			return false;
	
		if (func_181(Global_35, false))
			return false;
	
		if (Global_16)
			return false;
	
		if (func_174(PLAYER::PLAYER_ID(), true, false, true))
			return false;
	
		if (func_182())
			return false;
	
		num3 = func_184(func_183());
	
		if (func_185(num3))
			if (func_186(Global_36, num3))
				return false;
	
		if (func_187(Global_36) && !uParam2->f_161)
			return false;
	
		if (!uParam2->f_48)
			if (func_188(&(uParam2->f_91), 0, 1084227584, true, true))
				return false;
	}

	return true;
}

void func_58(var uParam0, Entity eParam1) // Position - 0x2511 Hash - 0xB2C008B7 ^0x4C61CF35
{
	float scaleX;
	float num;
	Volume volume;

	if (func_189(uParam0->f_51))
	{
		func_190(uParam0->f_51, 0);
		scaleX = func_191(uParam0->f_3);
		volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, scaleX, scaleX, scaleX, func_192());
		num = !func_42(uParam0->f_3, 1) ? 20f : -1f;
		uParam0->f_51.f_11 = func_194(volume, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(uParam0->f_3), true, eParam1, 8, false, num);
	}

	return;
}

BOOL func_59(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2586 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_195())
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
		num = func_196(Global_1898164.f_1[0 /*5*/]);
	
		if (func_197(num) && func_198(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_199(Global_1898164.f_1[0 /*5*/]))
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

void func_60(Player plParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) // Position - 0x278A Hash - 0xF46E0F16 ^0xED4BA72A
{
	Vehicle vehiclePedIsIn;
	Ped pedIndexFromEntityIndex;
	Ped mount;
	BOOL pedCrouchMovement;
	BOOL isEntityAPed;
	var height;
	Ped pedIndexFromEntityIndex2;

	if (ENTITY::IS_ENTITY_DEAD(plParam0))
		return;

	isEntityAPed = ENTITY::IS_ENTITY_A_PED(plParam0);

	if (isEntityAPed)
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0);
		pedCrouchMovement = PED::GET_PED_CROUCH_MOVEMENT(pedIndexFromEntityIndex);
	
		if (PED::IS_PED_RAGDOLL(pedIndexFromEntityIndex))
			PED::_SET_PED_TO_DISABLE_RAGDOLL(pedIndexFromEntityIndex, true);
	}

	plParam0 == func_200(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_201(plParam0))
		if (func_202(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0)))
			PHYSICS::_UNHITCH_HORSE(plParam0);

	if (func_203(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(plParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_60(vehiclePedIsIn, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_60(mount, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_203(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(plParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0), false, true);

	if (func_203(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(plParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(plParam0, vParam1, iParam4, true, func_203(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(plParam0, vParam1, iParam4, true, func_203(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(plParam0, false);
		}
	}
	else if (func_203(iParam5, 129))
	{
		if (func_203(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(plParam0, vParam1, func_203(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(plParam0, iParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(plParam0, vParam1, iParam4, true, func_203(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_203(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0), pedCrouchMovement, 0, false);
	
		if (func_201(plParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_203(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0) == Global_35 && !func_203(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

void func_61(int iParam0) // Position - 0x2A0C Hash - 0xAC2A9940 ^0xC0CCE1FE
{
	iLocal_165 = iParam0;
	iLocal_435 = MISC::GET_GAME_TIMER();
	bLocal_436 = false;
	return;
}

int func_62() // Position - 0x2A23 Hash - 0x9B2D5851 ^0x24765090
{
	if (iLocal_435 == 0)
		iLocal_435 = MISC::GET_GAME_TIMER();

	return MISC::GET_GAME_TIMER() - iLocal_435;
}

BOOL func_63(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, BOOL bParam6, int iParam7, BOOL bParam8, float fParam9, BOOL bParam10, BOOL bParam11) // Position - 0x2A41 Hash - 0x690C47C ^0xACEB3BAC
{
	int i;
	BOOL flag;
	int num;
	float num2;
	float num3;

	flag = false;
	num = func_169(uParam0, flag);
	num2 = num;
	!bParam11 && num < fParam3;

	if (iParam5 > 0f)
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > iParam5)
			return false;

	if (iParam7 > 0f)
		if (MISC::ABSF(Global_36.f_2 - uParam0->f_51.f_2) >= iParam7)
			return false;

	if (uParam0->f_178 && func_167())
	{
		flag = true;
		num2 = flag ? fParam9 : num;
	}

	if (uParam0->f_48 && !bParam10 || !VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))
	{
		if (iParam4 > 1)
		{
			for (i = 0; i < uParam0->f_121; i = i + 1)
			{
				func_170(&uParam0->f_121[i /*9*/], num2, 1082130432, 1, 90f, false, 0);
			}
		}
		else
		{
			func_170(&uParam0->f_121[0 /*9*/], num2, 1082130432, 1, 90f, false, 0);
		}
	
		if (func_171(&(uParam0->f_121), iParam4, fParam1))
		{
			func_55(&(uParam0->f_121));
		
			if (uParam0->f_186)
				STATS::STATSTRACKER_DEED_STARTED(func_125(uParam0->f_3, uParam0->f_185), 0);
		
			return true;
		}
	}

	num3 = fParam3 * fParam3;

	for (i = 0; i < uParam0->f_121; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[i /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[i /*9*/].f_6, true, false)) < num3)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)))
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
							return false;
				
					if (bParam6)
						func_54(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
				}
			
				func_55(&(uParam0->f_121));
			
				if (uParam0->f_186)
					STATS::STATSTRACKER_DEED_STARTED(func_125(uParam0->f_3, uParam0->f_185), 0);
			
				return true;
			}
		}
	}

	return false;
}

float func_64(Ped pedParam0, Ped pedParam1) // Position - 0x2C46 Hash - 0xF9959663 ^0xF9959663
{
	return func_204(pedParam0, pedParam1, true, true);
}

BOOL func_65() // Position - 0x2C58 Hash - 0x10EA6F9A ^0xE2A17D13
{
	int num;

	num = MISC::GET_FRAME_COUNT() % 4;

	switch (num)
	{
		case 0:
			if (PED::IS_PED_SHOOTING(Global_35) || PED::TIME_SINCE_PED_LAST_SHOT(Global_35) < 2f)
				return true;
			break;
	
		case 1:
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_168, false, false), 15f, false) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(pedLocal_168, false, false), 30f))
				return true;
			break;
	
		case 3:
			if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_35, ENTITY::GET_ENTITY_COORDS(pedLocal_168, false, false), 50f, 0) > 0)
				return true;
			break;
	}

	return false;
}

BOOL func_66() // Position - 0x2CF7 Hash - 0x21F99B6D ^0x3B791B24
{
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_14, true, false) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_14, false) && HUD::TEXT_BLOCK_IS_LOADED(sLocal_22))
	{
		ANIMSCENE::START_ANIM_SCENE(ansLocal_14);
		return true;
	}

	return false;
}

void func_67() // Position - 0x2D30 Hash - 0x59B8EF56 ^0x9D93AA57
{
	func_205(Global_35, pedLocal_168, &uLocal_375, 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, true, 0, 0, 0, true);
	func_206(pedLocal_168, Global_35, &uLocal_375, -1082130432, 0, 0, 3f, -1082130432, true, 8, 0, 0, 6.5f, 3f, 1050253722, 3f, 0, 0, -1, true, -1082130432, -1082130432, true);
	func_207(&uLocal_413);
	bLocal_430 = true;
	return;
}

void func_68(int iParam0) // Position - 0x2DAD Hash - 0x6F7AC299 ^0x6F7AC299
{
	Vehicle vehiclePedIsUsing;
	Ped mount;

	func_208(Global_35, pedLocal_168, true, true, true, false, true, true, false, true, true);
	func_209(pedLocal_168, Global_35, true, true, true, false, true, true, false, true, true);
	func_210(&uLocal_413, pedLocal_168);

	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsUsing))
			VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(vehiclePedIsUsing, 2f);
	}
	else
	{
		mount = Global_35;
	
		if (PED::IS_PED_ON_MOUNT(Global_35))
			mount = PED::GET_MOUNT(Global_35);
	
		if (!func_211(mount, false))
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(mount, iParam0);
	}

	return;
}

void func_69() // Position - 0x2E40 Hash - 0x7745CDCB ^0x7745CDCB
{
	int num;

	num = func_212(pedLocal_168);

	if (num == 1)
		iLocal_434 = num;
	else if (num == 2)
		iLocal_434 = num;

	return;
}

BOOL func_70(int iParam0) // Position - 0x2E69 Hash - 0x7997973A ^0x7997973A
{
	if (func_213(true))
		return true;

	if (func_214(&uLocal_0) && !func_215(&uLocal_0, 7.5f + iParam0))
		return true;

	return false;
}

void func_71(Ped pedParam0) // Position - 0x2E9F Hash - 0x2208555C ^0x1062C3FB
{
	func_153(pedParam0, true);
	MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(pedParam0);
	bLocal_25 = false;
	return;
}

BOOL func_72() // Position - 0x2EB8 Hash - 0xE67FE1D ^0x5C9695C8
{
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_14.f_1, true, false) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_14.f_1, false) && HUD::TEXT_BLOCK_IS_LOADED(sLocal_22))
	{
		ANIMSCENE::START_ANIM_SCENE(ansLocal_14.f_1);
		return 1;
	}

	return 0;
}

BOOL func_73() // Position - 0x2EF7 Hash - 0xE67FE1D ^0x8B38A3DE
{
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_14.f_2, true, false) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_14.f_2, false) && HUD::TEXT_BLOCK_IS_LOADED(sLocal_22))
	{
		ANIMSCENE::START_ANIM_SCENE(ansLocal_14.f_2);
		return 1;
	}

	return 0;
}

void func_74(var uParam0, Player plParam1) // Position - 0x2F36 Hash - 0xEA3BC0C9 ^0x227E63B3
{
	Vehicle vehiclePedIsUsing;

	vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);

	if (func_216(Global_35))
	{
		*uParam0 = func_217(Global_35);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsUsing) && func_218(vehiclePedIsUsing))
	{
		if (!func_219(vehiclePedIsUsing, 0))
			*uParam0 = func_220(vehiclePedIsUsing, 0);
		else
			*uParam0 = func_220(vehiclePedIsUsing, 1);
	}
	else
	{
		*uParam0 = func_221(7);
	
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0) || func_204(Global_35, plParam1, true, true) > func_222(7))
		{
			TASK::TASK_MOUNT_ANIMAL(Global_35, plParam1, 20000, 0, 1073741824, 1, 0, 0);
			*uParam0 = plParam1;
		}
		else if (func_204(Global_35, *uParam0, true, true) <= 10f)
		{
			func_223(Global_35, *uParam0, false, 1065353216, 20000);
		}
		else
		{
			func_224(Global_35, 869278708, joaat("unspecified"));
		}
	}

	return;
}

Vector3 func_75() // Position - 0x3034 Hash - 0x6245BF70 ^0x6245BF70
{
	int num;
	var unk;
	var unk4;

	num = func_225();
	!func_226(num, &unk, &unk4);
	return unk;
}

void func_76(Ped pedParam0, Ped pedParam1) // Position - 0x3054 Hash - 0xECD720F7 ^0xECD720F7
{
	var unk;
	Vector3 vector;
	float heading;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	Ped mount;
	Vehicle vehiclePedIsUsing;
	BOOL flag;
	int seatIndex;

	unk = { func_75() };
	vector = { unk };
	heading = 0f;

	switch (func_225())
	{
		case 1:
			vector = { -89.0359f, -8.5422f, 94.0034f };
			heading = 104.4886f;
			break;
	
		case 2:
			vector = { 689.5975f, -1210.6787f, 44.5975f };
			heading = 142.9292f;
			break;
	
		case 3:
			vector = { 1829.9751f, -1817.3009f, 44.8862f };
			heading = 237.0676f;
			break;
	
		case 5:
			vector = { 2294.2295f, -752.5996f, 40.5928f };
			heading = 102.4238f;
			break;
	
		case 6:
			vector = { 2377.6787f, 1314.3718f, 107.2305f };
			heading = 15.6139f;
			break;
	
		case 8:
			vector = { -1650.4093f, -1442.3035f, 82.3448f };
			heading = 359.2671f;
			break;
	}

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, heading, -1.5f, 0f, 0f) };
	mount = PED::GET_MOUNT(pedParam0);
	vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	flag = false;

	if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsUsing) && func_218(vehiclePedIsUsing))
	{
		flag = true;
	}
	else if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		seatIndex = -1;
	
		if (pedParam1 == mount)
			seatIndex = 0;
	
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !func_211(pedParam1, false))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			PED::SET_PED_ONTO_MOUNT(Global_35, pedParam1, seatIndex, true);
		}
	}

	if (flag)
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vehiclePedIsUsing, vector, heading, true, true, true);
	else if (PED::IS_PED_ON_MOUNT(Global_35))
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam1, vector, heading, true, true, true);
	else
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vector, heading, true, true, true);

	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);

	if (PED::IS_PED_ON_MOUNT(pedParam0))
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(mount, offsetFromCoordAndHeadingInWorldCoords, heading, true, true, true);
	else
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, offsetFromCoordAndHeadingInWorldCoords, heading, true, true, true);

	return;
}

int func_77() // Position - 0x325E Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

BOOL func_78(int iParam0) // Position - 0x326E Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_227(iParam0))
		return false;

	return func_228(iParam0, 8);
}

BOOL func_79() // Position - 0x328C Hash - 0x8D6317DE ^0x8D6317DE
{
	if (!bLocal_436)
	{
		bLocal_436 = true;
		return true;
	}

	return false;
}

BOOL func_80(int iParam0) // Position - 0x32A4 Hash - 0x6C3A2F5E ^0x6C3A2F5E
{
	int num;

	if (!func_229(iParam0))
		return false;

	num = func_231(func_230(iParam0));

	if (!func_232(num))
		return false;

	return func_233(num, 4);
}

BOOL func_81(int iParam0) // Position - 0x32DB Hash - 0x51B71FAF ^0x51B71FAF
{
	return !func_234(iParam0, 1, 0, false);
}

BOOL func_82() // Position - 0x32ED Hash - 0xFF37E121 ^0x13C690C8
{
	if (!func_235(Global_1395482.f_1))
		return false;

	return func_236(Global_1395482.f_1, 32);
}

BOOL func_83(int iParam0) // Position - 0x3313 Hash - 0x9E5480A7 ^0x9E5480A7
{
	if (func_42(iParam0, 1))
		return false;

	return 1 == func_237(iParam0) || 2 == func_237(iParam0);
}

float func_84(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x333F Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_85(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x335D Hash - 0x8EBD6187 ^0x42F0F0AC
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
	num2 = UIFEED::_UI_FEED_POST_OBJECTIVE(&num, &unk13, bParam5);
	return num2;
}

const char* func_86(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x3398 Hash - 0xAAA10C27 ^0x5F94E968
{
	switch (iParam0)
	{
		case 1:
			return MISC::VAR_STRING(2, sParam1, iParam4);
	
		case 2:
			return MISC::VAR_STRING(2, sParam1, iParam4, iParam5);
	
		case 3:
			return MISC::VAR_STRING(10, sParam1, iParam2);
	
		case 4:
			return MISC::VAR_STRING(42, sParam1, iParam2, iParam3);
	}

	return MISC::VAR_STRING(2, func_238(sParam1));
}

BOOL func_87(int iParam0) // Position - 0x340D Hash - 0xDA629583 ^0xDA629583
{
	return func_239(iParam0, 16, true);
}

void func_88(int iParam0, int iParam1, BOOL bParam2) // Position - 0x341E Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_105(iParam0))
			return;

	func_240(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_89(var uParam0, BOOL bParam1) // Position - 0x3458 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_214(uParam0))
		func_241(uParam0);

	return;
}

void func_90(int iParam0, BOOL bParam1) // Position - 0x3478 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_105(iParam0))
		return;

	if (bParam1)
		if (func_242(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
			func_91(iParam0, 1, false);

	func_91(iParam0, 16, bParam1);
	return;
}

void func_91(int iParam0, int iParam1, BOOL bParam2) // Position - 0x34BA Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_105(iParam0))
		return;

	func_243(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_92(int iParam0) // Position - 0x34E2 Hash - 0x7895582D ^0x7895582D
{
	func_91(iParam0, 8, false);
	return;
}

void func_93(int iParam0) // Position - 0x34F3 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_88(iParam0, 36, true);
	return;
}

void func_94(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3504 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_105(iParam0))
			return;

	func_240(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_95(Player plParam0, int iParam1) // Position - 0x353E Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (plParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(plParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_203(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(plParam0))
			return 0;

	if (func_203(num, 2))
		if (PED::IS_PED_HOGTIED(plParam0))
			return 0;

	if (func_203(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(plParam0, 11, false))
			return 0;

	if (func_203(num, 16))
		if (!PED::IS_PED_ON_MOUNT(plParam0) && !PED::IS_PED_IN_ANY_VEHICLE(plParam0, false))
			return 0;

	if (func_203(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(plParam0))
			return 0;

	if (func_203(num, 64))
		if (PED::IS_PED_INCAPACITATED(plParam0))
			return 0;

	if (func_203(num, 128))
		if (PED::IS_PED_RAGDOLL(plParam0))
			return 0;

	if (func_203(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(plParam0))
			return 0;

	return 1;
}

PersChar func_96(int iParam0, BOOL bParam1) // Position - 0x363D Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_22(iParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
			func_244(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_1;
}

BOOL func_97(int iParam0, int iParam1, BOOL bParam2) // Position - 0x367C Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_105(iParam0))
			return false;

	func_240(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

void func_98(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x36B7 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_22(iParam0))
	{
		ped = func_245(iParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_246(iParam0);
		}
	}

	if (func_97(iParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_245(iParam0), 137, true);

	return;
}

void func_99(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3709 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_105(iParam0))
		return;

	if (bParam1)
	{
		func_94(iParam0, 50, true);
		func_94(iParam0, 48, true);
		func_94(iParam0, 49, true);
		func_94(iParam0, 51, true);
		func_94(iParam0, 52, true);
		func_94(iParam0, 54, true);
		func_94(iParam0, 55, true);
	}
	else
	{
		func_88(iParam0, 50, true);
		func_88(iParam0, 48, true);
		func_88(iParam0, 49, true);
		func_88(iParam0, 51, true);
	
		if (bParam3)
			func_88(iParam0, 54, true);
		else
			func_94(iParam0, 54, true);
	
		if (!bParam2)
		{
			func_88(iParam0, 52, true);
		
			if (bParam3)
				func_88(iParam0, 55, true);
		}
		else
		{
			func_94(iParam0, 52, true);
		
			if (!bParam3)
				func_94(iParam0, 55, true);
		}
	}

	return;
}

void func_100(int iParam0, BOOL bParam1) // Position - 0x37DB Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_105(iParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_245(iParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_245(iParam0), 204, false);

	return;
}

void func_101(var uParam0) // Position - 0x3812 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_102(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3828 Hash - 0x6E8FD624 ^0x6E8FD624
{
	PersChar char;
	Ped ped;

	if (!func_22(iParam0))
		return;

	if (func_87(iParam0))
	{
		if (!func_247(iParam0))
			return;
	
		if (!bParam1)
			return;
	}

	if (func_97(iParam0, 32, true))
		if (!bParam2)
			return;

	char = func_96(iParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_245(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_248(iParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_88(iParam0, 2, true);
	}
	else
	{
		func_249(iParam0);
		func_88(iParam0, 1, true);
	}

	return;
}

void func_103(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3936 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_22(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] - Global_40.f_4942[iParam0 /*60*/] && bParam1;
	return;
}

Player func_104(int iParam0) // Position - 0x3972 Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_22(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
		Global_1360165[iParam0 /*1157*/].f_70 = 0;

	return Global_1360165[iParam0 /*1157*/].f_70;
}

BOOL func_105(int iParam0) // Position - 0x39B2 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

BOOL func_106(int iParam0) // Position - 0x39BE Hash - 0x6410553A ^0x46627D03
{
	if (!func_105(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_107(int iParam0) // Position - 0x3A0A Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_105(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_108(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3A32 Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_105(iParam0))
		return;

	if (bParam2)
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 - Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_109(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3A97 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	int num;
	PersChar persChar;

	if (!func_105(iParam0))
		return 0;

	mount = func_104(iParam0);

	if (func_95(mount, 0))
	{
		if (func_95(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_106(iParam0) || func_107(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_250(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				num = func_251(iParam0, true);
			
				if (num != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_252(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_253(iParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_253(iParam0, false));
					func_254(iParam0);
				}
			}
			else
			{
				if (func_239(iParam0, 32768, true))
				{
					persChar = func_253(iParam0, false);
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
		if (func_95(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_239(iParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
			
				func_252(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_253(iParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_253(iParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_252(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_255(iParam0, 0);
	return 1;
}

int func_110(int iParam0) // Position - 0x3C48 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_111(int iParam0) // Position - 0x3C52 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_256(iParam0))
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

void func_112(Ped pedParam0, BOOL bParam1) // Position - 0x3D05 Hash - 0xE86A6E05 ^0xDD9C6259
{
	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::_0xAAC0EE3B4999ABB5(pedParam0, 0);
	PED::_0x9E66708B2B41F14A(pedParam0, -1);

	if (bParam1)
		TASK::CLEAR_PED_SECONDARY_TASK(pedParam0);

	if (PED::IS_PED_A_PLAYER(pedParam0))
		PED::SET_PED_CONFIG_FLAG(pedParam0, 43, false);
	else
		PED::_0x15F4732C357B1D6D(pedParam0, PLAYER::PLAYER_ID(), 6);

	return;
}

void func_113(Ped pedParam0, BOOL bParam1) // Position - 0x3D4F Hash - 0x3E03C3 ^0x478A3AA8
{
	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::_0xAAC0EE3B4999ABB5(pedParam0, 0);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}

	PED::_0x9E66708B2B41F14A(pedParam0, -1);

	if (PED::IS_PED_A_PLAYER(pedParam0))
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	else
		PED::_0x15F4732C357B1D6D(pedParam0, PLAYER::PLAYER_ID(), 6);

	if (bParam1)
		TASK::CLEAR_PED_SECONDARY_TASK(pedParam0);

	return;
}

void func_114(const char* sParam0) // Position - 0x3DDF Hash - 0x4275D6A5 ^0xECD450FD
{
	if (CAM::_IS_CAMERA_AVAILABLE(sParam0))
		CAM::_CAM_DESTROY(sParam0);

	CAM::_UNLOAD_CAMERA_DATA_DICT(sParam0);
	return;
}

char* func_115(int iParam0) // Position - 0x3DFC Hash - 0x899A1C9C ^0x899A1C9C
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
	
		case 1:
			return "REAM";
	
		case 2:
			return "REAP";
	
		case 3:
			return "REAMD";
	
		case 4:
			return "REBT";
	
		case 5:
			return "REBAT";
	
		case 6:
			return "REBOT";
	
		case 7:
			return "REBNT";
	
		case 8:
			return "REBUB";
	
		case 9:
			return "RECA";
	
		case 10:
			return "RECG";
	
		case 11:
			return "RECP";
	
		case 12:
			return "RECHR";
	
		case 13:
			return "RECCT";
	
		case 14:
			return "RECW";
	
		case 15:
			return "REDLP";
	
		case 16:
			return "REPND";
	
		case 17:
			return "REESC";
	
		case 18:
			return "REEX";
	
		case 19:
			return "REFT";
	
		case 20:
			return "REFO";
	
		case 21:
			return "REFD";
	
		case 22:
			return "REFC";
	
		case 23:
			return "REGCR";
	
		case 24:
			return "REGP";
	
		case 27:
			return "REHOR";
	
		case 28:
			return "REHR";
	
		case 29:
			return "REIK";
	
		case 30:
			return "REIR";
	
		case 31:
			return "REKV";
	
		case 32:
			return "REKD";
	
		case 33:
			return "REKR";
	
		case 34:
			return "REKS";
	
		case 35:
			return "RELRU";
	
		case 36:
			return "RELK";
	
		case 37:
			return "RELP";
	
		case 38:
			return "RELF";
	
		case 39:
			return "RELM";
	
		case 40:
			return "REMC";
	
		case 41:
			return "REMUC";
	
		case 42:
			return "RENS";
	
		case 43:
			return "REOL";
	
		case 44:
			return "REOT";
	
		case 45:
			return "RESB";
	
		case 46:
			return "REPCA";
	
		case 47:
			return "REPCS";
	
		case 48:
			return "REPO";
	
		case 49:
			return "REPBR";
	
		case 50:
			return "REPW";
	
		case 51:
			return "RERP";
	
		case 53:
			return "RESA";
	
		case 54:
			return "RESAF";
	
		case 55:
			return "RESW";
	
		case 56:
			return "RESWA";
	
		case 57:
			return "RESS";
	
		case 58:
			return "RESKP";
	
		case 59:
			return "RESH";
	
		case 60:
			return "REHU";
	
		case 61:
			return "RESSH";
	
		case 62:
			return "RESR";
	
		case 63:
			return "RETA";
	
		case 64:
			return "RETRB";
	
		case 65:
			return "RETW";
	
		case 66:
			return "RETH";
	
		case 67:
			return "RETC";
	
		case 68:
			return "RETP";
	
		case 69:
			return "REVC";
	
		case 70:
			return "REWTH";
	
		case 71:
			return "REWA";
	
		case 72:
			return "REWH";
	
		case 73:
			return "REWM";
	
		case 74:
			return "REWMC";
	
		case 75:
			return "REBBR";
	
		case 76:
			return "REBE";
	
		case 77:
			return "REBTE";
	
		case 78:
			return "REBGP";
	
		case 79:
			return "RECQ";
	
		case 80:
			return "REDAA";
	
		case 81:
			return "REDAB";
	
		case 82:
			return "REDAS";
	
		case 83:
			return "REDEB";
	
		case 84:
			return "REDJ";
	
		case 85:
			return "REDIB";
	
		case 86:
			return "REDOM";
	
		case 87:
			return "REDM";
	
		case 88:
			return "REDD";
	
		case 89:
			return "REDB";
	
		case 90:
			return "REDW";
	
		case 91:
			return "REFF";
	
		case 92:
			return "REFR";
	
		case 93:
			return "REFND";
	
		case 94:
			return "REGPE";
	
		case 95:
			return "REIT";
	
		case 96:
			return "REETE";
	
		case 97:
			return "RELD";
	
		case 98:
			return "RELDR";
	
		case 99:
			return "REOTE";
	
		case 100:
			return "REOR";
	
		case 101:
			return "REPA";
	
		case 102:
			return "REPT";
	
		case 103:
			return "REPP";
	
		case 104:
			return "REPS";
	
		case 105:
			return "REPCH";
	
		case 106:
			return "REPH";
	
		case 107:
			return "RERI";
	
		case 108:
			return "RERD";
	
		case 109:
			return "RESO";
	
		case 110:
			return "RESAM";
	
		case 111:
			return "RESTF";
	
		case 112:
			return "REKT";
	
		case 113:
			return "REBUR";
	
		case 114:
			return "RETWC";
	
		case 115:
			return "RETR";
	
		case 116:
			return "RETWW";
	
		case 117:
			return "RETT";
	
		case 118:
			return "REWC";
	
		case 119:
			return "REHOC";
	
		default:
		
	}

	return "XXXX";
}

void func_116(int iParam0, int iParam1) // Position - 0x45F7 Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_142(iParam0))
		return;

	Global_1310750[iParam0 /*111*/].f_1 = Global_1310750[iParam0 /*111*/].f_1 || iParam1;
	return;
}

BOOL func_117(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x4623 Hash - 0x41649F50 ^0x41649F50
{
	iParam1 = iParam1 | 1;

	if (bParam2)
		iParam1 = iParam1 | 2;

	return func_95(pedParam0, iParam1);
}

void func_118(Ped pedParam0, BOOL bParam1) // Position - 0x4644 Hash - 0x2A900A38 ^0xFC5FB2DC
{
	if (func_117(pedParam0, 0, true))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, false);
		func_257(pedParam0, 1088421888, false, 0);
	
		if (!bParam1)
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedParam0);
	}

	return;
}

BOOL func_119(var uParam0, var uParam1) // Position - 0x4678 Hash - 0xBF8144AC ^0x3F2252D9
{
	if (func_42(uParam0->f_3, 16777216))
		if (func_258(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("g_m_m_unibrontegoons_01"))
			return true;

	return false;
}

void func_120(var uParam0) // Position - 0x46B4 Hash - 0xA0076B4D ^0x9D87EFDF
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
	return;
}

var func_121(BOOL bParam0, var uParam1, var uParam2) // Position - 0x46D9 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_122(Ped pedParam0, int iParam1, float fParam2, Ped pedParam3, BOOL bParam4) // Position - 0x46F0 Hash - 0x1DF80F9B ^0x67406EEB
{
	int taskSequenceId;
	Ped mount;
	float num;

	if (!Global_1935630.f_12 && !bParam4 || func_117(pedParam0, 0, true))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam3))
			pedParam3 = PED::GET_MOUNT(Global_35);
	
		if (pedParam3 != pedParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedParam0))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, true, false);
		
			TASK::CLEAR_PED_TASKS(pedParam0, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(pedParam0);
			num = fParam2 >= 0f ? fParam2 : BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), Global_36);
		
			if (num > 25f && ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			{
				func_259(&pedParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, iParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
				TASK::_TASK_PERFORM_SEQUENCE_2(pedParam0, taskSequenceId, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
				mount = PED::GET_MOUNT(pedParam0);
			
				if (ENTITY::DOES_ENTITY_EXIST(mount))
					PED::_SET_REMOVE_PED_NETWORKED(mount, -1);
			
				PED::_SET_REMOVE_PED_NETWORKED(pedParam0, -1);
			}
		}
	}

	return;
}

void func_123(var uParam0) // Position - 0x47EC Hash - 0xAF255EC8 ^0x37A19009
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_260(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171);
	}

	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}

	func_261(uParam0);
	func_262(uParam0);
	func_263(uParam0);

	if (!func_264(uParam0))
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_51.f_11))
			VOLUME::_RELEASE_LOCK_VOLUME(uParam0->f_51.f_11);
	
		func_190(uParam0->f_51, 0);
	}

	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));

	if (uParam0->f_48)
		func_265();

	if (!func_266(uParam0->f_3) && !func_42(uParam0->f_3, 256))
		func_267(uParam0->f_3, true, 0, 15, 0, 0, false, true);

	func_268(uParam0->f_173);
	func_268(uParam0->f_172);
	return;
}

void func_124(var uParam0) // Position - 0x48CF Hash - 0x2F9D6A60 ^0x3708209
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
		MAP::REMOVE_BLIP(&(uParam0->f_181));

	return;
}

Hash func_125(int iParam0, int iParam1) // Position - 0x48EA Hash - 0x8D239183 ^0xE724C28D
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
				
					case 1:
						return -2064800864;
				
					case 2:
						return -1459648117;
				
					default:
					
				}
			
				return 1764738688;
		
			case 1:
				return -1738452225;
		
			case 2:
				return -823209843;
		
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
				
					case 1:
						return 1082838675;
				
					default:
					
				}
			
				return -163609424;
		
			case 4:
				return -230454431;
		
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
				
					case 1:
						return -779276698;
				
					default:
					
				}
			
				return 1848195968;
		
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
				
					case 1:
						return -561787596;
				
					default:
					
				}
			
				return 199182688;
		
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
				
					case 1:
						return 1805609920;
				
					default:
					
				}
			
				return -1157729664;
		
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
				
					case 1:
						return -1805473967;
				
					default:
					
				}
			
				return -185185008;
		
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
				
					default:
					
				}
			
				return 1331739776;
		
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
				
					default:
					
				}
			
				return -2125510912;
		
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
				
					case 1:
						return 1422484995;
				
					default:
					
				}
			
				return 2012422144;
		
			case 12:
				return 1004100858;
		
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
				
					case 1:
						return 1719865048;
				
					default:
					
				}
			
				return -462840960;
		
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
				
					case 1:
						return -1541809666;
				
					default:
					
				}
			
				return -2063125376;
		
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
				
					case 1:
						return 396925591;
				
					case 2:
						return -1318629866;
				
					default:
					
				}
			
				return 237843904;
		
			case 16:
				return 1583531269;
		
			case 17:
				return -728402510;
		
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
				
					case 1:
						return 1895496017;
				
					default:
					
				}
			
				return -1622801152;
		
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
				
					default:
					
				}
			
				return -110846632;
		
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
				
					case 1:
						return 136987683;
				
					case 2:
						return -405984699;
				
					default:
					
				}
			
				return -1296870656;
		
			case 21:
				return 856957155;
		
			case 22:
				return 199192985;
		
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
				
					case 1:
						return -548752013;
				
					case 2:
						return -1799015093;
				
					case 3:
						return -115167180;
				
					default:
					
				}
			
				return 1480735360;
		
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
				
					case 1:
						return -195398422;
				
					default:
					
				}
			
				return 1888284288;
		
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
				
					case 1:
						return -140925504;
				
					default:
					
				}
			
				return 1262841600;
		
			case 26:
				return -1065165983;
		
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
				
					case 1:
						return -879341975;
				
					case 2:
						return 812000379;
				
					default:
					
				}
			
				return 1119637248;
		
			case 28:
				return -1641231995;
		
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
				
					case 1:
						return -2001368627;
				
					default:
					
				}
			
				return 1411817728;
		
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
				
					case 1:
						return -413778780;
				
					default:
					
				}
			
				return 260689376;
		
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
				
					case 1:
						return -1268334164;
				
					default:
					
				}
			
				return 302505024;
		
			case 32:
				return -800701784;
		
			case 33:
				return -1599472750;
		
			case 34:
				return 239043929;
		
			case 35:
				return -1534174498;
		
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
				
					case 1:
						return 1873758089;
				
					default:
					
				}
			
				return 1179130240;
		
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
				
					case 1:
						return -2073786745;
				
					default:
					
				}
			
				return -959962496;
		
			case 38:
				return 1895786957;
		
			case 39:
				return -2058137475;
		
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
				
					case 1:
						return 149442199;
				
					case 2:
						return 978666390;
				
					case 3:
						return -1076604521;
				
					case 4:
						return 919455489;
				
					default:
					
				}
			
				return -1427408128;
		
			case 41:
				return 598461796;
		
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
				
					case 1:
						return -632377398;
				
					default:
					
				}
			
				return -190635712;
		
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
				
					case 1:
						return -456339986;
				
					case 2:
						return 458545376;
				
					case 3:
						return 610100918;
				
					default:
					
				}
			
				return -2132368512;
		
			case 44:
				return 544369376;
		
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
				
					case 1:
						return -1472914811;
				
					default:
					
				}
			
				return 1517869312;
		
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
				
					case 1:
						return 1336213836;
				
					default:
					
				}
			
				return 1497529856;
		
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
				
					default:
					
				}
			
				return 516059168;
		
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
				
					default:
					
				}
			
				return 138359424;
		
			case 49:
				return 1602493990;
		
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
				
					case 1:
						return 2125427011;
				
					case 2:
						return 371707271;
				
					case 3:
						return -731143567;
				
					case 4:
						return -742996004;
				
					default:
					
				}
			
				return -773614592;
		
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
				
					case 1:
						return -770317277;
				
					default:
					
				}
			
				return -1496303104;
		
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
				
					case 1:
						return -189901396;
				
					default:
					
				}
			
				return 855036416;
		
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
				
					case 1:
						return -316021716;
				
					default:
					
				}
			
				return 1818026880;
		
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
				
					case 1:
						return -170394045;
				
					default:
					
				}
			
				return -1865567744;
		
			case 55:
				return 1762656414;
		
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
				
					case 1:
						return 2050912022;
				
					case 2:
						return -631458463;
				
					default:
					
				}
			
				return 1729892352;
		
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
				
					case 1:
						return 1070551761;
				
					case 2:
						return -1249279900;
				
					default:
					
				}
			
				return 1256394752;
		
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
				
					case 1:
						return -239132243;
				
					default:
					
				}
			
				return -2137622144;
		
			case 59:
				return -2018341642;
		
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
				
					default:
					
				}
			
				return 922910144;
		
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
				
					default:
					
				}
			
				return 1967427328;
		
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
				
					case 1:
						return 1877863225;
				
					default:
					
				}
			
				return 1397209856;
		
			case 63:
				return -1618254924;
		
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
				
					case 1:
						return 2139528616;
				
					default:
					
				}
			
				return 1380866816;
		
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
				
					case 1:
						return 2073650155;
				
					default:
					
				}
			
				return 1432305280;
		
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
				
					default:
					
				}
			
				return 1650308608;
		
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
				
					case 1:
						return -1797377830;
				
					default:
					
				}
			
				return 685182784;
		
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
				
					case 1:
						return -522278917;
				
					default:
					
				}
			
				return -2001177728;
		
			case 69:
				return -2137572125;
		
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
				
					case 1:
						return -1062366341;
				
					default:
					
				}
			
				return -948494848;
		
			case 71:
				return -774894224;
		
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
				
					case 1:
						return 28828972;
				
					default:
					
				}
			
				return -1846020608;
		
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
				
					case 1:
						return 460031053;
				
					case 2:
						return 381656699;
				
					default:
					
				}
			
				return -188029312;
		
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
				
					default:
					
				}
			
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
		
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
				
					default:
					
				}
			
				return -1829585536;
		
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
				
					case 1:
						return -311112952;
				
					case 2:
						return -682765316;
				
					case 3:
						return -2127446978;
				
					default:
					
				}
			
				return 1338777472;
		
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
				
					case 1:
						return 20416722;
				
					default:
					
				}
			
				return 1293249792;
		
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
				
					default:
					
				}
			
				return 235904384;
		
			case 80:
				return -334565466;
		
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
				
					case 1:
						return 245875704;
				
					default:
					
				}
			
				return 1046770304;
		
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
				
					case 1:
						return 1062398415;
				
					default:
					
				}
			
				return -2047991552;
		
			case 83:
				return -1752276745;
		
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
				
					case 1:
						return -1090928636;
				
					default:
					
				}
			
				return -1021157760;
		
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
				
					case 1:
						return 1092461253;
				
					default:
					
				}
			
				return 900051136;
		
			case 86:
				return 1417655457;
		
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
				
					case 1:
						return 220332139;
				
					default:
					
				}
			
				return 1359760512;
		
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
				
					case 1:
						return -812497188;
				
					default:
					
				}
			
				return 1616003072;
		
			case 89:
				return -69702063;
		
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
				
					default:
					
				}
			
				return -1670654720;
		
			case 91:
				return -331264815;
		
			case 92:
				return -1217205534;
		
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
				
					case 1:
						return -368935814;
				
					default:
					
				}
			
				return -1021345856;
		
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
				
					case 1:
						return -972169639;
				
					case 2:
						return -673250821;
				
					case 3:
						return 161473916;
				
					default:
					
				}
			
				return -1329933952;
		
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
				
					default:
					
				}
			
				return 1248360320;
		
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
				
					case 1:
						return 368673822;
				
					case 2:
						return 578628915;
				
					case 3:
						return 689154642;
				
					case 4:
						return 471198511;
				
					case 5:
						return 967199063;
				
					case 6:
						return -38616787;
				
					case 7:
						return -1294637989;
				
					default:
					
				}
			
				return -84111088;
		
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
				
					case 1:
						return -436408638;
				
					default:
					
				}
			
				return 1995021696;
		
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
				
					case 1:
						return 6449957;
				
					default:
					
				}
			
				return -1853564800;
		
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
				
					case 1:
						return -31873580;
				
					case 2:
						return -1922690045;
				
					case 3:
						return 515105064;
				
					default:
					
				}
			
				return -1759022208;
		
			case 100:
				return -307424281;
		
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
				
					case 1:
						return 1573993134;
				
					default:
					
				}
			
				return -1402545280;
		
			case 102:
				return -1979014350;
		
			case 103:
				return 2096137174;
		
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
				
					case 1:
						return 2076430727;
				
					case 2:
						return -1266577036;
				
					default:
					
				}
			
				return 493009408;
		
			case 105:
				return 1152564685;
		
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
				
					case 1:
						return 2046057828;
				
					case 2:
						return -526712830;
				
					case 3:
						return -242317110;
				
					case 4:
						return 1729814355;
				
					case 5:
						return 1868875718;
				
					case 6:
						return -785635151;
				
					case 7:
						return 1586170447;
				
					case 8:
						return -291036947;
				
					default:
					
				}
			
				return -832026176;
		
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
				
					case 1:
						return 875440489;
				
					default:
					
				}
			
				return -508430848;
		
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
				
					case 1:
						return 1920169067;
				
					default:
					
				}
			
				return -227796128;
		
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
				
					case 1:
						return -1012076841;
				
					default:
					
				}
			
				return -871899648;
		
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
				
					case 1:
						return 121209110;
				
					default:
					
				}
			
				return 14115413;
		
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
				
					case 1:
						return -1113682855;
				
					case 2:
						return -1801389871;
				
					case 3:
						return -180725957;
				
					case 4:
						return 1811628790;
				
					default:
					
				}
			
				return 2016864128;
		
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
				
					default:
					
				}
			
				return -717212864;
		
			case 113:
				return 1487351956;
		
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
				
					case 1:
						return 1685893021;
				
					case 2:
						return -711771194;
				
					case 3:
						return 146337879;
				
					default:
					
				}
			
				return 205846784;
		
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
				
					case 1:
						return -39469638;
				
					default:
					
				}
			
				return 1483441280;
		
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
				
					case 1:
						return -2101774133;
				
					default:
					
				}
			
				return -815072896;
		
			case 117:
				return -689015496;
		
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
				
					case 1:
						return -1607469655;
				
					default:
					
				}
			
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}

	return 1968536545;
}

void func_126(int iParam0, Hash hParam1, int iParam2) // Position - 0x5E3E Hash - 0xF39224E1 ^0xD56E494F
{
	int data;

	data.f_1 = 0;
	data = 0;
	data.f_2 = 0;

	if (func_269() == false)
		data = Global_265073.f_73815.f_208.f_12;

	STATS::_STATSTRACKER_DEED_STATUS(iParam0, hParam1, iParam2, &data);
	return;
}

Vector3 func_127(int iParam0, int iParam1) // Position - 0x5E76 Hash - 0x9696C39F ^0x9696C39F
{
	int num;

	if (iParam1 < 0)
		return 0f, 0f, 0f;

	if (!func_142(iParam0))
		return 0f, 0f, 0f;

	if (func_270(iParam0) == 0)
		return 0f, 0f, 0f;

	num = func_271(iParam0) + iParam1;

	if (num >= 892)
		return 0f, 0f, 0f;

	return Global_1310750.f_13358[num /*3*/];
}

void func_128(int iParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5ED0 Hash - 0x79FC1C47 ^0x25B46574
{
	Volume volume;
	var unk;
	float scaleX;

	if (func_42(iParam0, 32))
	{
		if (func_272(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				unk = { func_273(Global_35, &(uParam1->f_12)) };
			
				if (!_IS_NULL_VECTOR(unk))
					*uParam1 = { unk };
			}
		}
	}

	if (bParam2)
		func_274(uParam1, bParam2);

	if (bParam3)
	{
		scaleX = func_191(iParam0);
		volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, scaleX, scaleX, scaleX, func_192());
	
		if (func_275(Global_1310750[iParam0 /*111*/], 33554432))
			func_194(volume, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0), true, 0, 2, false, -1082130432);
		else
			func_194(volume, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0), true, 0, 8, false, -1082130432);
	
		if (func_42(iParam0, 1))
			func_276(*uParam1 + { 1f, 0f, 0f }, 25f, "Beat Inner", true, 0, 32, false, -1082130432);
	}

	func_277(iParam0);
	return;
}

BOOL func_129(int iParam0, var uParam1) // Position - 0x5FC1 Hash - 0x51F812E1 ^0x357A2C8B
{
	int i;
	float num;
	float num2;

	*uParam1 = TASK::_0x74F0209674864CBD();

	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
		return false;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_1310750[iParam0 /*111*/].f_4.f_4[i /*3*/].f_1 != -1)
			func_278(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[i /*3*/]);
	}

	if (func_53(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		num2 = BUILTIN::TO_FLOAT(func_279(iParam0));
		num = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		num2 = BUILTIN::TO_FLOAT(func_279(iParam0));
		num = 60f;
	}

	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, num2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, num2 + num);
	TASK::_0x4A7D73989F52EB37(*uParam1, num2 + 10f);
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return true;
}

void func_130(int iParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x60C4 Hash - 0x7B5F9071 ^0xA25921EE
{
	switch (func_280(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*uParam1 = 225f;
				*uParam2 = 6400f;
			}
			else
			{
				*uParam1 = 225f;
				*uParam2 = 4900f;
			}
		
			*uParam3 = 2500;
			break;
	
		case 1:
			if (!func_42(iParam0, 1))
				func_53(iParam0, 2);
		
			func_281(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = *uParam1 * *uParam1;
			*uParam2 = *uParam2 * *uParam2;
			*uParam3 = *uParam3 * *uParam3;
			break;
	
		case 2:
			func_282(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = *uParam1 * *uParam1;
			*uParam2 = *uParam2 * *uParam2;
			*uParam3 = *uParam3 * *uParam3;
			break;
	
		case 3:
			func_282(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = 7f;
			*uParam2 = *uParam2 * *uParam2;
			*uParam3 = *uParam3 * *uParam3;
			break;
	
		default:
			break;
	}

	if (func_83(iParam0))
		*uParam2 = 40000f;

	return;
}

Vector3 func_131(var uParam0, int iParam1, float fParam2, float fParam3) // Position - 0x61D1 Hash - 0x88677FEE ^0x88677FEE
{
	int i;
	var unk;
	Vector3 vector;
	float num;
	float num2;

	num = 999999.9f;
	num2 = 0f;
	*uParam0 = 1;

	for (i = 0; i < func_270(iParam1); i = i + 1)
	{
		if (!func_283(iParam1, i))
		{
			vector = { func_127(iParam1, i) };
		
			if (!_IS_NULL_VECTOR(vector))
			{
				num2 = BUILTIN::VDIST(Global_36, vector);
			
				if (func_137(num2, iParam1))
					*uParam0 = 0;
			
				if (num2 < num)
				{
					if (func_284(iParam1, vector, fParam2, fParam3))
					{
						num = BUILTIN::VDIST(Global_36, vector);
						unk = { vector };
					}
				}
			}
		}
	}

	if (!_IS_NULL_VECTOR(vector))
	{
	}

	return unk;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x6286 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_133(var uParam0, var uParam1, var uParam2, BOOL bParam3, int iParam4, int iParam5) // Position - 0x62B0 Hash - 0x5EAEC48C ^0xC81DFD9A
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_21("BEAT_FAIL", 5000, false, true, 0, 0, -1, -1, 0);
		}
	
		*uParam2 = 1;
	}

	*uParam1 = iParam5;
	uParam0->f_8 = uParam0->f_8 + 1;
	return 0;
}

int func_134(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x62F3 Hash - 0x79583E95 ^0x35D8D668
{
	int i;
	var unk;

	for (i = 0; i < func_270(iParam0); i = i + 1)
	{
		unk = { func_127(iParam0, i) };
	
		if (func_285(unk, uParam1, 1056964608, true))
			return i;
	}

	return -1;
}

BOOL func_135(var uParam0) // Position - 0x6339 Hash - 0xB70AAE9C ^0x7192DF25
{
	int num;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		uParam0->f_7 == 0;
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		num = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
	
		if (num == -1)
			return false;
	
		if (num == 0)
			return true;
	}

	return false;
}

BOOL func_136(var uParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6388 Hash - 0x185C7FE7 ^0x640802AD
{
	int i;
	int num;
	var unk;
	var unk4;
	Vector3 closestPointOnLine;

	unk = { *uParam0 };
	func_286(Global_35, *uParam0, &(uParam0->f_37), 1061158912, false, 0);

	if (func_287(&(uParam0->f_37), 500))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (!_IS_NULL_VECTOR(uParam0->f_12[i /*3*/]))
			{
				unk4 = { uParam0->f_12[i /*3*/] };
				closestPointOnLine = { MISC::GET_CLOSEST_POINT_ON_LINE(Global_36, unk, unk4, true) };
			
				if (BUILTIN::VDIST2(Global_36, closestPointOnLine) <= 35f * 35f || BUILTIN::VDIST2(Global_36, uParam0->f_12[i /*3*/]) <= 80f * 80f)
				{
					if (bParam4)
					{
						num = func_288(uParam0);
					
						if (num > -1 && num < 8)
							*uParam0 = { uParam0->f_12[num /*3*/] };
					}
				
					uParam0->f_8 = 0;
					return true;
				}
			}
		}
	}

	return func_133(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

BOOL func_137(float fParam0, int iParam1) // Position - 0x648F Hash - 0x4BA08F51 ^0x4BA08F51
{
	float num;
	float num2;
	var unk;
	float num3;

	num3 = fParam0 * fParam0;
	func_130(iParam1, &num, &num2, &unk, true);

	if (num3 > num2)
		return false;

	if (func_42(iParam1, 1))
		if (num3 < num)
			return false;

	return true;
}

BOOL func_138(var uParam0, var uParam1) // Position - 0x64CE Hash - 0x39F65BB5 ^0x3A5365C9
{
	*uParam1 = 0;

	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*uParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return true;
	}

	return false;
}

BOOL func_139(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10) // Position - 0x650A Hash - 0x98165477 ^0x98165477
{
	if (func_289(iParam0, *uParam2))
		return false;

	if (!func_290(iParam0, uParam2))
		return false;

	if (!func_291(uParam3))
		return false;

	if (bParam10)
		if (!func_292(*uParam2, Global_35))
			return false;

	return true;
}

var func_140(var uParam0) // Position - 0x655C Hash - 0x92708AC8 ^0xE929F4
{
	return uParam0->f_51.f_4;
}

BOOL func_141(int iParam0, int iParam1, var uParam2) // Position - 0x656A Hash - 0xBF4CD0FC ^0x1A627BCE
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return true;
			
				case 2:
					*uParam2 = VOLUME::CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return true;
			}
			break;
	}

	return false;
}

BOOL func_142(int iParam0) // Position - 0x66DC Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

void func_143(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, char* sParam10) // Position - 0x66F2 Hash - 0x3A05F50D ^0x6A8E2731
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, fParam4, fParam7, sParam10);
	return;
}

void func_144(var uParam0, int iParam1) // Position - 0x670F Hash - 0x28736565 ^0xF0314607
{
	if (func_293(uParam0))
		return;

	if (func_294(uParam0) == iParam1)
		return;

	if (Global_36602 >= 10)
		Global_36602 = 0;

	Global_36581[Global_36602 /*2*/].f_1 = iParam1;
	Global_36581[Global_36602 /*2*/] = uParam0;
	Global_36602 = Global_36602 + 1;
	return;
}

void func_145(Volume volParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x675B Hash - 0xD12D9D38 ^0xF831EF48
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);

	if (bParam3)
		func_38(&iParam1, 8192);

	if (bParam4)
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, volParam0);

	return;
}

int func_146(int iParam0) // Position - 0x67D6 Hash - 0x9A977F5C ^0x9A977F5C
{
	switch (iParam0)
	{
		case 0:
			return 6;
	
		case 1:
			return 4;
	
		case 2:
			return 1;
	
		case 3:
			return 8;
	
		case 4:
			return 3;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		case 7:
			return 5;
	
		case 8:
			return 17;
	
		case 9:
			return 2;
	
		case 10:
			return 7;
	
		case 11:
			return 8;
	
		case 12:
			return 7;
	
		case 13:
			return 6;
	
		case 14:
			return 4;
	
		case 15:
			return 10;
	
		case 16:
			return 1;
	
		case 17:
			return 2;
	
		case 18:
			return 6;
	
		case 19:
			return 3;
	
		case 20:
			return 2;
	
		case 21:
			return 5;
	
		case 22:
			return 5;
	
		case 23:
			return 1;
	
		case 24:
			return 2;
	
		case 27:
			return 6;
	
		case 28:
			return 6;
	
		case 29:
			return 6;
	
		case 30:
			return 2;
	
		case 31:
			return 3;
	
		case 32:
			return 4;
	
		case 33:
			return 17;
	
		case 34:
			return 4;
	
		case 35:
			return 14;
	
		case 36:
			return 4;
	
		case 37:
			return 1;
	
		case 38:
			return 4;
	
		case 39:
			return 1;
	
		case 40:
			return 3;
	
		case 41:
			return 14;
	
		case 42:
			return 1;
	
		case 43:
			return 6;
	
		case 44:
			return 13;
	
		case 45:
			return 2;
	
		case 46:
			return 4;
	
		case 47:
			return 1;
	
		case 48:
			return 2;
	
		case 49:
			return 8;
	
		case 50:
			return 9;
	
		case 51:
			return 6;
	
		case 53:
			return 10;
	
		case 54:
			return 8;
	
		case 55:
			return 1;
	
		case 56:
			return 4;
	
		case 57:
			return 14;
	
		case 58:
			return 1;
	
		case 59:
			return 15;
	
		case 60:
			return 3;
	
		case 61:
			return 13;
	
		case 62:
			return 2;
	
		case 63:
			return 6;
	
		case 64:
			return 22;
	
		case 65:
			return 2;
	
		case 66:
			return 2;
	
		case 67:
			return 6;
	
		case 68:
			return 3;
	
		case 69:
			return 5;
	
		case 70:
			return 8;
	
		case 71:
			return 8;
	
		case 72:
			return 4;
	
		case 73:
			return 4;
	
		case 74:
			return 1;
	
		case 75:
			return 9;
	
		case 76:
			return 3;
	
		case 77:
			return 3;
	
		case 78:
			return 4;
	
		case 79:
			return 2;
	
		case 80:
			return 3;
	
		case 81:
			return 1;
	
		case 82:
			return 2;
	
		case 83:
			return 6;
	
		case 84:
			return 6;
	
		case 85:
			return 2;
	
		case 86:
			return 2;
	
		case 87:
			return 2;
	
		case 88:
			return 1;
	
		case 89:
			return 6;
	
		case 90:
			return 14;
	
		case 91:
			return 2;
	
		case 92:
			return 6;
	
		case 93:
			return 1;
	
		case 94:
			return 1;
	
		case 95:
			return 7;
	
		case 96:
			return 3;
	
		case 97:
			return 3;
	
		case 98:
			return 3;
	
		case 99:
			return 6;
	
		case 100:
			return 2;
	
		case 101:
			return 5;
	
		case 102:
			return 4;
	
		case 103:
			return 2;
	
		case 104:
			return 3;
	
		case 105:
			return 2;
	
		case 106:
			return 16;
	
		case 107:
			return 16;
	
		case 108:
			return 5;
	
		case 109:
			return 2;
	
		case 110:
			return 5;
	
		case 111:
			return 4;
	
		case 112:
			return 5;
	
		case 113:
			return 7;
	
		case 114:
			return 1;
	
		case 115:
			return 3;
	
		case 116:
			return 1;
	
		case 117:
			return 6;
	
		case 118:
			return 4;
	
		case 119:
			return 2;
	
		default:
		
	}

	return 0;
}

int func_147(BOOL bParam0) // Position - 0x6C8F Hash - 0x7F08FD3B ^0xE97B69AA
{
	int num;
	int numberOfFollowers;
	var hasLeader;
	int i;
	Ped pedAsGroupMember;

	if (bParam0)
		return func_295(Global_1359489.f_4);

	PED::GET_GROUP_SIZE(func_296(), &hasLeader, &numberOfFollowers);

	if (numberOfFollowers == 0)
		return 0;

	for (i = 0; i < numberOfFollowers; i = i + 1)
	{
		pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_296(), i);
	
		if (func_297(pedAsGroupMember))
			num = num + 1;
	}

	return num;
}

BOOL func_148(int iParam0) // Position - 0x6CEF Hash - 0x1D38F5CA ^0xC923C5D1
{
	int i;

	if (!func_229(iParam0))
		return false;

	for (i = 0; i < Global_1879534.f_7300; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/].f_2 == iParam0)
							return true;
						break;
				}
			}
		}
	}

	return false;
}

int func_149(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6D93 Hash - 0x32CB1944 ^0x32CB1944
{
	if (bParam2)
		return func_298(iParam0) % iParam1;

	return func_299(iParam0) % iParam1;
}

BOOL func_150() // Position - 0x6DB8 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_269() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

BOOL func_151(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6DDE Hash - 0xE0196EFD ^0xE0196EFD
{
	if (!func_105(iParam0))
		return false;

	if (func_239(iParam0, 32, true))
		return false;

	if (!func_239(iParam0, 2, true))
		return false;

	if (!func_239(iParam0, 4, true))
		return false;

	if (func_97(iParam0, 33, true))
		return false;

	if (func_87(iParam0))
		return false;

	if (func_300(iParam0))
		if (!bParam2)
			return false;

	if (!bParam1)
		if (Global_1357549.f_1497 == iParam0)
			return false;

	return true;
}

Ped func_152(int iParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18, BOOL bParam19, BOOL bParam20, BOOL bParam21, BOOL bParam22, BOOL bParam23, BOOL bParam24) // Position - 0x6E6B Hash - 0x79A2D2D9 ^0x5019CC83
{
	int num;
	BOOL flag;
	int num2;
	int i;

	if (!func_22(iParam0))
		return 0;

	num = iParam3;
	num.f_1 = iParam4;
	num.f_2 = iParam5;

	if (Global_1572864.f_13 || Global_1572864.f_14 || Global_1572864.f_8 != 0 || Global_1391438.f_5 & 8 != 0)
		flag = true;

	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_97(iParam0, 2, true))
				func_94(iParam0, 2, true);
		
			if (func_239(iParam0, 16, true))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_88(iParam0, 29, true);
						return 0;
					}
				
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_23(iParam0, false, false, true, -1082130432, true, true, false, false, false, false);
					}
				
					return 0;
				}
				else if (func_95(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
		
			if (func_95(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
					if (bParam1)
						func_301(iParam0, true, "Stealing, but companion is a ragdoll");
					else
						return 0;
			
				func_88(iParam0, 44, true);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_302(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_88(iParam0, 44, true);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_302(iParam0, 1);
			}
			else
			{
				return 0;
			}
		
			[[fallthrough]];
	
		case 1:
			if (flag)
				if (iParam13 == 0)
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
		
			if (!func_97(iParam0, 44, false))
				func_88(iParam0, 44, false);
		
			if (func_303(iParam0, num, iParam13, false, true, bParam17, bParam20, -1, 1, false))
				func_302(iParam0, 2);
			break;
	
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
		
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
		
			func_94(iParam0, 18, true);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_gang_dutchs"));
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_99(iParam0, bParam9, true, false);
		
			if (bParam22)
				func_304(iParam0, false, false, true);
		
			func_94(iParam0, 33, true);
			func_94(iParam0, 34, true);
			func_94(iParam0, 29, true);
		
			if (!_IS_NULL_VECTOR(num) && bParam7)
				func_302(iParam0, 3);
			else if (iParam13 != 0)
				func_302(iParam0, 4);
			else
				func_302(iParam0, 5);
			break;
	
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_301(iParam0, true, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
			
				num2 = 2;
			
				if (bParam10)
					num2 = num2 | 4;
			
				func_60(Global_1360165[iParam0 /*1157*/], num, iParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[iParam0 /*1157*/], true))
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
			
				return 0;
			}
		
			if (iParam13 != 0)
				func_302(iParam0, 4);
			else
				func_302(iParam0, 5);
			break;
	
		case 4:
			if (iParam13 != 0 || flag)
			{
				if (flag)
					if (iParam13 == 0)
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
			
				if (func_305(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_306(iParam0, iParam13, false);
						func_307(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, true);
					
						if (func_97(iParam0, 25, false))
							func_94(iParam0, 25, false);
					
						func_88(iParam0, 66, false);
						func_302(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_302(iParam0, 5);
				}
			
				func_88(iParam0, 28, true);
			}
			else
			{
				func_302(iParam0, 5);
			}
			break;
	
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
				func_302(iParam0, 6);
			break;
	
		case 6:
			if (func_95(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
			
				if (bParam18)
				{
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
					{
						for (i = 0; i < 10; i = i + 1)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], i);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], i, "ALL");
						}
					
						PED::_SET_PED_DIRT_CLEANED(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
			
				if (bParam19)
					func_308(iParam0);
			
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_309(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
		
			func_302(iParam0, 7);
			[[fallthrough]];
	
		case 7:
			func_99(iParam0, bParam9, bParam15, false);
			func_91(iParam0, 4, bParam11);
			func_93(iParam0);
		
			if (bParam20)
				func_310(Global_1360165[iParam0 /*1157*/]);
		
			func_311(iParam0, Global_1360165[iParam0 /*1157*/]);
		
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
		
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			func_302(iParam0, 0);
			func_312(iParam0, 16, true);
			func_94(iParam0, 44, true);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}

	return 0;
}

void func_153(Ped pedParam0, BOOL bParam1) // Position - 0x74DB Hash - 0x6CED7721 ^0x961DFA5E
{
	PED::SET_PED_CONFIG_FLAG(pedParam0, 297, !bParam1);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 315, bParam1);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 130, bParam1);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 301, bParam1);
	return;
}

Player func_154(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, int iParam10, int iParam11, int iParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16) // Position - 0x750F Hash - 0x98448E34 ^0x98448E34
{
	var unk;
	Player player;

	if (!func_105(iParam0))
		return 0;

	player = func_313(&unk, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, bParam16);

	if (!ENTITY::DOES_ENTITY_EXIST(player))
		return 0;

	if (bParam6)
		if (!ENTITY::IS_ENTITY_DEAD(player) && PED::IS_PED_READY_TO_RENDER(player))
			return player;
	else
		return player;

	return 0;
}

int func_155(Player plParam0, var uParam1, BOOL bParam2) // Position - 0x7585 Hash - 0xC0251106 ^0xC6402AFA
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(plParam0))
		return 0;

	if (func_314(plParam0, &(uParam1->f_121)))
	{
		uParam1->f_120 = uParam1->f_120 + 1;
		return 1;
	}

	return 0;
}

void func_156(int iParam0) // Position - 0x75BD Hash - 0x3B29D773 ^0xDAAD492A
{
	ansLocal_14.f_4 = func_315(iParam0);
	ansLocal_14.f_5 = func_316(iParam0);
	ansLocal_14.f_6 = func_317(iParam0);
	sLocal_22 = func_318(iParam0);
	return;
}

char* func_157(int iParam0) // Position - 0x75EB Hash - 0x5029FA90 ^0x5A0A3E86
{
	switch (iParam0)
	{
		case 2:
			return "ARTHUR";
	
		case 3:
			return "ARTHUR";
	
		case 7:
			if (func_150())
				return "player_zero";
			else
				return "PLAYER_THREE";
			break;
	}

	return "";
}

char* func_158(int iParam0) // Position - 0x7639 Hash - 0x79DCD467 ^0xAC15A92E
{
	switch (iParam0)
	{
		case 2:
			return "javier";
	
		case 3:
			return "bill";
	
		case 7:
			return "CharlesSmith";
	
		default:
		
	}

	return "";
}

Vector3 func_159(var uParam0) // Position - 0x7673 Hash - 0xD2D3D44D ^0xF8F7C98B
{
	return uParam0->f_51;
}

void func_160(var uParam0, int iParam1) // Position - 0x7681 Hash - 0x4F8BE4B5 ^0x8254350D
{
	uParam0->f_21 = iParam1;
	return;
}

BOOL func_161() // Position - 0x768F Hash - 0x893CA78F ^0x893CA78F
{
	return Global_1935436 == 2;
}

void func_162(int iParam0) // Position - 0x769D Hash - 0xA805A06D ^0x74AB3C0C
{
	if (iParam0 >= Global_1935436)
		return;

	Global_1935436.f_1 = iParam0;
	return;
}

void func_163(int iParam0, int iParam1) // Position - 0x76B9 Hash - 0x7E43089A ^0xCEBF7A08
{
	float num;

	if (MISC::GET_RANDOM_EVENT_FLAG())
		return;

	Global_17504.f_3 = Global_17504.f_3 + 1;
	Global_17504.f_42[iParam0 /*8*/].f_1 = Global_17504.f_42[iParam0 /*8*/].f_1 + 1;

	if (func_42(iParam0, 2))
		func_320(iParam0, func_319(iParam1));
	else
		func_322(iParam0, func_321());

	num = 1f + (BUILTIN::TO_FLOAT(Global_17504.f_42[iParam0 /*8*/].f_1 / 2) * 0.1f);

	if (num > 2f)
		num = 2f;
	else if (num < 1f)
		num = 1f;

	func_323(iParam0, Global_1310750[iParam0 /*111*/].f_36, num, true, false);
	func_324(iParam0, false);
	func_325(iParam0);
	func_326(true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);

	if (!MISC::GET_MISSION_FLAG())
		MISC::SET_RANDOM_EVENT_FLAG(true);

	AUDIO::CLEAR_CONVERSATION_HISTORY();
	Global_1310750[iParam0 /*111*/].f_110 = Global_1310750[iParam0 /*111*/].f_110 | 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;

	if (!func_42(iParam0, 16))
		func_164(iParam0, false, 0, false, false);

	return;
}

void func_164(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x77CC Hash - 0xEF5C52D ^0xEF5C52D
{
	int i;
	int num;

	bParam1;

	if (func_327() == 0 && !bParam1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		num = Global_1310750.f_13321[i /*9*/];
	
		if (func_142(num) && !func_42(num, iParam2) && !bParam3 || !func_180(num) && !bParam4 || !func_328(num))
			if (num != iParam0)
				func_329(i);
	}

	return;
}

int func_165(int iParam0) // Position - 0x785A Hash - 0x7647021A ^0xB4AA498
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_166(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x786C Hash - 0xE0E5FF1A ^0x8D6C182B
{
	if (uParam0->f_177 != -1 || func_275(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
			if (func_42(uParam0->f_3, 1073741824))
				func_330(2, -1, 0, 0, 0);
			else
				func_330(1, -1, 0, 0, 0);
		else if (bParam1)
			if (uParam0->f_45)
				func_330(8, -1, 0, 0, 0);
	
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_331(1, uParam0->f_177))
				{
					func_332(16, uParam0->f_177);
					func_333(1, uParam0->f_177);
				}
			
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_334(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || bParam1 && uParam0->f_45)
	{
		func_330(8, -1, 0, 0, 0);
	}

	return;
}

int func_167() // Position - 0x7935 Hash - 0xD8BA0FE1 ^0x4030E2B7
{
	if (func_335(Global_1935630.f_44))
		if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44))
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					return 1;
		else if (func_336())
			return 1;

	return 0;
}

BOOL func_168(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x797F Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

float func_169(var uParam0, BOOL bParam1) // Position - 0x79B5 Hash - 0x27A584A2 ^0xFE2A3AEB
{
	float num;

	if (uParam0->f_119 == -1f)
	{
		if (func_42(uParam0->f_3, 1024))
			num = 95f;
		else if (func_42(uParam0->f_3, 2048))
			num = 80f;
		else if (func_42(uParam0->f_3, 4096))
			num = 65f;
		else if (func_42(uParam0->f_3, 8192))
			num = 55f;
		else if (func_42(uParam0->f_3, 16384))
			num = 30f;
		else
			num = 85f;
	
		if (func_42(uParam0->f_3, 1))
		{
		}
		else if (func_42(uParam0->f_3, 2))
		{
			num = num - 15f;
		}
	
		uParam0->f_119 = num;
	}

	num = uParam0->f_119;

	if (bParam1)
		num = num + 150f;

	return num;
}

int func_170(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, BOOL bParam5, int iParam6) // Position - 0x7A87 Hash - 0x8C72EC05 ^0x8FA21912
{
	float num;
	BOOL isTrackedPedVisible;

	iParam2 = iParam2;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
		return 0;

	num = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));

	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_IS_PED_VISIBILITY_TRACKED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			else if (func_337(uParam0, num, fParam1 * fParam1, iParam3))
				*uParam0 = 1;
			else
				uParam0->f_8 = 0f;
			break;
	
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				isTrackedPedVisible = false;
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
				if (fParam4 > 0f)
					isTrackedPedVisible = PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				else
					isTrackedPedVisible = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			else
				isTrackedPedVisible = ENTITY::_IS_TRACKED_ENTITY_VISIBLE(uParam0->f_6);
		
			if (!isTrackedPedVisible)
				uParam0->f_1.f_4 = 1;
		
			if (isTrackedPedVisible)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
						num = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
				
					if (func_338(uParam0, num, fParam1 * fParam1, iParam3))
						*uParam0 = 0;
					else
						*uParam0 = 2;
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
	
		case 2:
			*uParam0 = 0;
			break;
	}

	if (uParam0->f_8 != 0f)
		uParam0->f_7 = func_339() - uParam0->f_8;
	else
		uParam0->f_7 = 0f;

	return 1;
}

BOOL func_171(var uParam0, int iParam1, float fParam2) // Position - 0x7C1E Hash - 0x893D31A1 ^0xDA62DD5F
{
	int i;
	int num;
	float num2;

	num = 0;
	num2 = 0f;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->[i /*9*/].f_6) && uParam0->[i /*9*/].f_7 > 0f && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->[i /*9*/].f_6))
		{
			num = num + 1;
			num2 = num2 + uParam0->[i /*9*/].f_7;
		}
	}

	if (iParam1 > 1)
		iParam1 = iParam1 - 1;

	if (num < iParam1)
		return false;

	if (num2 < fParam2)
		return false;

	func_55(uParam0);
	return true;
}

BOOL func_172() // Position - 0x7CAC Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_183() != -1;
}

BOOL func_173(var uParam0, float fParam1) // Position - 0x7CC7 Hash - 0x80205ABE ^0xB640424F
{
	int i;

	for (i = 0; i < uParam0->f_98; i = i + 1)
	{
		if (uParam0->f_98[i] != 0f)
			if (uParam0->f_98[i] < fParam1)
				return true;
	}

	return false;
}

BOOL func_174(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7D04 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_340(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
				return false;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return false;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return false;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return true;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return false;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return true;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return true;

	return false;
}

BOOL func_175(int iParam0) // Position - 0x7E39 Hash - 0x259E3CFD ^0x259E3CFD
{
	int num;

	if (iParam0 == -1)
		return true;

	if (iParam0 == 0)
		return false;

	num = func_342(func_341());

	if (func_2(iParam0, 1))
		if (num >= 6 && num < 12)
			return true;

	if (func_2(iParam0, 2))
		if (num >= 12 && num < 18)
			return true;

	if (func_2(iParam0, 4096))
		if (num >= 11 && num < 14)
			return true;

	if (func_2(iParam0, 4))
		if (num >= 18 && num < 24)
			return true;

	if (func_2(iParam0, 8))
		if (num >= 0 && num < 6)
			return true;

	if (func_2(iParam0, 16))
		if (num >= 20 || num < 7)
			return true;

	if (func_2(iParam0, 1024))
		if (num >= 5 && num < 12)
			return true;

	if (func_2(iParam0, 32))
		if (num >= 5 && num < 22)
			return true;

	if (func_2(iParam0, 64))
		if (num >= 6 && num < 20)
			return true;

	if (func_2(iParam0, 128))
		if (num >= 21 || num < 5)
			return true;

	if (func_2(iParam0, 256))
		if (num >= 22 && num < 24)
			return true;

	if (func_2(iParam0, 512))
		if (num >= 0 && num < 5)
			return true;

	if (func_2(iParam0, 8192))
		if (num >= 6 && num < 20)
			return true;

	if (func_2(iParam0, 2048))
		if (num >= 1 && num < 3)
			return true;

	if (func_2(iParam0, 16384))
		if (num >= 6 && num < 24)
			return true;

	if (func_2(iParam0, 32768))
		if (num >= 21 || num < 6)
			return true;

	if (func_2(iParam0, 65536))
		if (num >= 18 && num < 19)
			return true;

	return false;
}

BOOL func_176(int iParam0, int iParam1) // Position - 0x808E Hash - 0x1A1F1B7C ^0x1A1F1B7C
{
	return func_165(iParam0) && iParam1 != false;
}

BOOL func_177(int iParam0) // Position - 0x80A1 Hash - 0x290561B5 ^0x29D965DD
{
	var weatherType1;
	var weatherType2;
	float percentWeather2;
	var unk;

	if (iParam0 == 0)
		return false;
	else if (iParam0 & -1 == -1)
		return true;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.5f)
		unk = weatherType1;
	else
		unk = weatherType2;

	if (iParam0 & 1 == 1 && func_343(unk))
		return true;

	if (iParam0 & 2 == 2 && func_344(unk))
		return true;

	if (iParam0 & 4 == 4 && func_345(unk))
		return true;

	if (iParam0 & 8 == 8 && func_346(unk))
		return true;

	if (iParam0 & 16 == 16 && func_347(unk))
		return true;

	if (iParam0 & 32 == 32 && func_348(unk))
		return true;

	if (iParam0 & 64 == 64 && func_349(unk))
		return true;

	return false;
}

BOOL func_178(BOOL bParam0) // Position - 0x8193 Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_350(bParam0, &unk, &unk2))
		return true;

	return false;
}

BOOL func_179(Ped pedParam0) // Position - 0x81AD Hash - 0xF2F988FE ^0xA63CD631
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

BOOL func_180(int iParam0) // Position - 0x8295 Hash - 0x23BA4BD8 ^0x6ABCB1DC
{
	if (!func_142(iParam0))
		return false;

	if (func_351(64) && func_352(iParam0))
		return true;

	return Global_1310750[iParam0 /*111*/].f_46;
}

BOOL func_181(Ped pedParam0, BOOL bParam1) // Position - 0x82CD Hash - 0xBBE426EF ^0x74780662
{
	Interior interiorFromEntity;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0) || !bParam1)
		{
			interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(pedParam0);
		
			if (INTERIOR::IS_VALID_INTERIOR(interiorFromEntity))
			{
				if (func_353(interiorFromEntity) || func_354(interiorFromEntity))
					return false;
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_182() // Position - 0x8320 Hash - 0x8FB36F20 ^0x8FB36F20
{
	return Global_1894899 & 4 != 0;
}

int func_183() // Position - 0x8330 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

int func_184(int iParam0) // Position - 0x833E Hash - 0x595F92D5 ^0x595F92D5
{
	if (!func_227(iParam0))
		return -1;

	switch (iParam0)
	{
		case 11:
			return 0;
	
		case 15:
			return 3;
	
		case 76:
			return 1;
	
		case 128:
			return 2;
	
		default:
		
	}

	return -1;
}

BOOL func_185(int iParam0) // Position - 0x8385 Hash - 0x4461E3A8 ^0x4461E3A8
{
	if (iParam0 <= -1 || iParam0 >= 4)
		return false;

	return true;
}

BOOL func_186(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x83A3 Hash - 0x510575F5 ^0x8B25D6BB
{
	if (!func_185(iParam3))
		return false;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);

	return false;
}

BOOL func_187(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x83E0 Hash - 0x1CB9D2F ^0xEA327BD4
{
	float radius;

	if (_IS_NULL_VECTOR(vParam0))
		return false;

	radius = func_172() ? 6f : 22f;
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, radius, 1, 0, 16384);
}

BOOL func_188(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x8416 Hash - 0xA1926892 ^0x535607FE
{
	Player player;
	Entity entity;

	player = PLAYER::PLAYER_ID();

	if (!bParam4)
	{
		if (PLAYER::_IS_PLAYER_FREE_FOCUSING(player))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(player, &entity))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(entity))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_241(uParam0);
					
						if (bParam3)
							return true;
					}
				
					if (!bParam3)
						return true;
				}
			}
		}
	}

	if (PLAYER::_0x6C54E69516CC56BD(player) > 0)
	{
		func_241(uParam0);
		return true;
	}

	if (!bParam4)
	{
		if (!func_214(uParam0))
			return false;
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			return true;
	
		if (!func_355(uParam0, iParam2))
			return true;
	
		if (func_214(uParam0))
			func_101(uParam0);
	}

	return false;
}

BOOL func_189(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x84DE Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

void func_190(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x84F8 Hash - 0x303BFB8D ^0xBCF80455
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
		
			if (func_285(vector, uParam0, 2f, true))
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

float func_191(int iParam0) // Position - 0x857C Hash - 0xC1155EB7 ^0x5F9E502C
{
	if (!func_142(iParam0))
		return 0f;

	if (!func_356(iParam0))
		return 0f;

	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_192() // Position - 0x85AA Hash - 0x306ACA3A ^0x8780F775
{
	return "unnamed";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x85B6 Hash - 0xA17D549C ^0x16A9A834
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
	
		case 1:
			return "ANIMAL_MAULING";
	
		case 2:
			return "APPROACH";
	
		case 3:
			return "ARMS_DEAL";
	
		case 4:
			return "BEAR_TRAP";
	
		case 5:
			return "BOAT_ATTACK";
	
		case 6:
			return "BOOBY_TRAP";
	
		case 7:
			return "BOUNTY TRANSPORT";
	
		case 8:
			return "BURNING_BODIES";
	
		case 9:
			return "CAMPFIRE_AMBUSH";
	
		case 10:
			return "CHAIN_GANG";
	
		case 11:
			return "CHECKPOINT" /*CHECKPOINTS*/;
	
		case 12:
			return "COACH_ROBBERY";
	
		case 13:
			return "CORPSE_CART";
	
		case 14:
			return "CRASHED_WAGON";
	
		case 15:
			return "DEL_LOBO_POSSE";
	
		case 16:
			return "DRUNK_CAMP";
	
		case 17:
			return "ESCORT";
	
		case 18:
			return "EXECUTIONS";
	
		case 19:
			return "FLEEING_TRESPASSER";
	
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
	
		case 21:
			return "FROZEN_TO_DEATH";
	
		case 22:
			return "FUSSAR_CHASE";
	
		case 23:
			return "GANG_CAMP_REMINDER";
	
		case 24:
			return "GOLD_PANNER";
	
		case 27:
			return "HORSE_RACE";
	
		case 28:
			return "HOSTAGE_RESCUE";
	
		case 29:
			return "INBRED_KIDNAP";
	
		case 30:
			return "INJURED_RIDER";
	
		case 31:
			return "KIDNAP_VICTIM";
	
		case 32:
			return "RALLY_DISPUTE";
	
		case 33:
			return "RALLY";
	
		case 34:
			return "RALLY_SETUP";
	
		case 35:
			return "LARAMIE_GANG_RUSTLING";
	
		case 36:
			return "LOCKED_SAFE";
	
		case 37:
			return "LONE_PRISONER";
	
		case 38:
			return "LOST_FRIEND";
	
		case 39:
			return "LOST_MAN";
	
		case 40:
			return "MOONSHINE_CAMP";
	
		case 41:
			return "MURDER_CAMPFIRE";
	
		case 42:
			return "NAKED_SWIMMER";
	
		case 43:
			return "OUTLAW_LOOTER";
	
		case 44:
			return "OUTLAW_TRANSPORT";
	
		case 45:
			return "SNAKE_BITE";
	
		case 46:
			return "PLAYER_CAMP_ATTACK";
	
		case 47:
			return "PLAYER_CAMP_STRANGER";
	
		case 48:
			return "POISONED";
	
		case 49:
			return "POSSE_BREAKOUT";
	
		case 50:
			return "PRISON_WAGON";
	
		case 51:
			return "RIFLE_PRACTICE";
	
		case 53:
			return "SAVAGE_AFTERMATH";
	
		case 54:
			return "SAVAGE_FIGHT";
	
		case 55:
			return "SAVAGE_WARNING";
	
		case 56:
			return "SAVAGE_WAGON";
	
		case 57:
			return "SHARP_SHOOTER";
	
		case 58:
			return "SKIPPING_STONES";
	
		case 59:
			return "SPOOKED_HORSE";
	
		case 60:
			return "STALKING_HUNTER";
	
		case 61:
			return "STALKING_SHADOWS";
	
		case 62:
			return "STRANDED_RIDER";
	
		case 63:
			return "TRAFFIC_ATTACK";
	
		case 64:
			return "TRAIN_HOLDUP";
	
		case 65:
			return "TRAPPED_WOMAN";
	
		case 66:
			return "TREASURE_HUNTER";
	
		case 67:
			return "TORTURING_CAPTIVE";
	
		case 68:
			return "TORCH_PROCESSION";
	
		case 69:
			return "VOICE";
	
		case 70:
			return "WAGON_THREAT";
	
		case 71:
			return "WASHED_ASHORE";
	
		case 72:
			return "WILDERNESS_HANGING";
	
		case 73:
			return "WILD_MAN";
	
		case 74:
			return "WILD_MAN_CAVE";
	
		case 75:
			return "BANDITO_BREAKOUT";
	
		case 76:
			return "BANDITO_EXECUTION";
	
		case 77:
			return "BGN_TOWN_ENCOUNTER";
	
		case 78:
			return "BRONTE_PATROL";
	
		case 79:
			return "CONSEQUENCE";
	
		case 80:
			return "DARK_ALLEY_AMBUSH";
	
		case 81:
			return "DARK_ALLEY_BUM";
	
		case 82:
			return "DARK_ALLEY_STAB";
	
		case 83:
			return "DEAD_BODIES";
	
		case 84:
			return "DEAD_JOHN";
	
		case 85:
			return "DISABLED_BEGGAR";
	
		case 86:
			return "DOMESTIC_DISPUTE";
	
		case 87:
			return "DROWN_MURDER";
	
		case 88:
			return "DRUNK_DUELER";
	
		case 89:
			return "DUEL_BOASTER";
	
		case 90:
			return "DUEL_WINNER";
	
		case 91:
			return "FLEEING_FAMILY";
	
		case 92:
			return "FOOT_ROBBERY";
	
		case 93:
			return "FUNDRAISER";
	
		case 94:
			return "GANG_PED_ENCOUNTER";
	
		case 95:
			return "INTIMIDATION TACTICS";
	
		case 96:
			return "LEM_TOWN_ENCOUNTER";
	
		case 97:
			return "LOST_DOG";
	
		case 98:
			return "LOST_DRUNK";
	
		case 99:
			return "ODR_TOWN_ENCOUNTER";
	
		case 100:
			return "ON_THE_RUN";
	
		case 101:
			return "PARLOR_AMBUSH";
	
		case 102:
			return "PEEPING_TOM";
	
		case 103:
			return "PICKPOCKET";
	
		case 104:
			return "PISS_POT";
	
		case 105:
			return "POLICE_CHASE";
	
		case 106:
			return "PUBLIC_HANGING";
	
		case 107:
			return "RAT_INFESTATION";
	
		case 108:
			return "ROWDY_DRUNKS";
	
		case 109:
			return "SHOW_OFF";
	
		case 110:
			return "SLUM_AMBUSH";
	
		case 111:
			return "STREET_FIGHT";
	
		case 112:
			return "TAUNTING";
	
		case 113:
			return "TOWN_BURIAL";
	
		case 114:
			return "TOWN_CONFRONTATION";
	
		case 115:
			return "TOWN_ROBBERY";
	
		case 116:
			return "TOWN_WIDOW";
	
		case 117:
			return "TOWN_TERROR";
	
		case 118:
			return "WEALTHY_COUPLE";
	
		case 119:
			return "HERBALIST_CAMP";
	
		default:
		
	}

	return "BEAT NO NAME";
}

Volume func_194(Volume volParam0, char* sParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, float fParam6) // Position - 0x8BBB Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_276(volumeCoords, volumeScale, sParam1, bParam2, eParam3, iParam4, bParam5, fParam6);
	return volume;
}

BOOL func_195() // Position - 0x8BFF Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_196(int iParam0) // Position - 0x8C52 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_199(iParam0))
		return -1;

	return func_358(func_357(iParam0));
}

BOOL func_197(int iParam0) // Position - 0x8C72 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_198(int iParam0, int iParam1) // Position - 0x8C88 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_199(int iParam0) // Position - 0x8C97 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

Ped func_200(Ped pedParam0) // Position - 0x8CCA Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_201(Ped pedParam0) // Position - 0x8CD4 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_202(Ped pedParam0) // Position - 0x8D06 Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

BOOL func_203(int iParam0, int iParam1) // Position - 0x8D48 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

float func_204(Ped pedParam0, Player plParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8D57 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false), bParam2);
}

void func_205(Ped pedParam0, Ped pedParam1, Any* panParam2, float fParam3, float fParam4, float fParam5, const char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, BOOL bParam15, int iParam16, int iParam17, int iParam18, BOOL bParam19) // Position - 0x8D9F Hash - 0x2E4DC4EA ^0x436F8340
{
	int num;
	int num2;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	ENTITY::IS_ENTITY_DEAD(pedParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(panParam2->f_1))
		TASK::TASK_SCRIPTED_ANIMATION(pedParam0, panParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		if (iParam7 == 0)
			iParam7 = 14;
	
		num = 2;
		num.f_4 = sParam6;
		num.f_5 = iParam7;
		num.f_7 = iParam16;
		num.f_9 = iParam17;
		TASK::TASK_LEAD_AND_CONVERSE(pedParam0, pedParam1, &num, iParam8, iParam9, iParam10, iParam11, iParam13, iParam12);
	}
	else if (!func_359(fParam3, 0f, 0f, 0f))
	{
		num2 = 0;
		num2.f_1 = { fParam3 };
		num2.f_7 = iParam16;
		num2.f_9 = iParam17;
		num2.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(pedParam0, pedParam1, &num2, iParam8, iParam9, iParam10, iParam11, iParam13, iParam12);
	}

	if (bParam15)
		PED::_SET_PED_CROUCH_MOVEMENT(pedParam0, false, 0, false);

	if (bParam19)
		func_360(pedParam0, pedParam1, iParam14);

	return;
}

void func_206(Ped pedParam0, Ped pedParam1, Any* panParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, BOOL bParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, float fParam15, int iParam16, int iParam17, int iParam18, BOOL bParam19, int iParam20, int iParam21, BOOL bParam22) // Position - 0x8E76 Hash - 0xD43A93AF ^0x2E43CB6B
{
	int num;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	ENTITY::IS_ENTITY_DEAD(pedParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(panParam2->f_1))
		TASK::TASK_SCRIPTED_ANIMATION(pedParam0, panParam2);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), pedParam1, -1f);
		num.f_1 = 1050253722;
		num.f_2 = 1067030938;
		num.f_5 = -1082130432;
		num.f_6 = -1082130432;
		num.f_3 = iParam16;
		num.f_1 = iParam14;
		num.f_2 = fParam15;
		num.f_4 = iParam17;
		num.f_5 = iParam20;
		num.f_6 = iParam21;
	
		if (bParam8)
			num = 0;
		else
			num = 1;
	
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &num);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(pedParam0, pedParam1, iParam4, iParam5, fParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13);
	}

	if (bParam19)
		PED::_SET_PED_CROUCH_MOVEMENT(pedParam0, false, 0, false);

	if (bParam22)
		func_360(pedParam0, pedParam1, iParam18);

	return;
}

void func_207(char* sParam0) // Position - 0x8F59 Hash - 0x98314CEF ^0x850FF78B
{
	TEXT_LABEL_ASSIGN_STRING(sParam0, "walk_and_talk", 64);
	TEXT_LABEL_ASSIGN_STRING(&(sParam0->f_8), "WALK_AND_TALK_REQUEST", 64);
	CAM::_LOAD_CAMERA_DATA_DICT(sParam0);
	return;
}

void func_208(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x8F79 Hash - 0x512642D4 ^0x98AD20B9
{
	ENTITY::IS_ENTITY_DEAD(pedParam0);
	ENTITY::IS_ENTITY_DEAD(pedParam1);

	if (bParam8)
		PED::SET_PED_RESET_FLAG(pedParam0, 229, true);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		if (bParam3 && PED::GET_PED_CROUCH_MOVEMENT(pedParam0))
			PED::_SET_PED_CROUCH_MOVEMENT(pedParam0, false, 0, false);
	
		func_361(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
	
		if (bParam2)
			PED::SET_PED_RESET_FLAG(pedParam0, 188, true);
	}

	return;
}

void func_209(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x8FE3 Hash - 0x512642D4 ^0x98AD20B9
{
	ENTITY::IS_ENTITY_DEAD(pedParam0);
	ENTITY::IS_ENTITY_DEAD(pedParam1);

	if (bParam8)
		PED::SET_PED_RESET_FLAG(pedParam0, 229, true);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		if (bParam3 && PED::GET_PED_CROUCH_MOVEMENT(pedParam0))
			PED::_SET_PED_CROUCH_MOVEMENT(pedParam0, false, 0, false);
	
		func_361(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
	
		if (bParam2)
			PED::SET_PED_RESET_FLAG(pedParam0, 188, true);
	}

	return;
}

void func_210(const char* sParam0, Ped pedParam1) // Position - 0x904D Hash - 0x28D21139 ^0x5367531D
{
	var unk;

	if (CAM::_IS_CAM_DATA_DICT_LOADED(sParam0) && !CAM::_IS_CAMERA_AVAILABLE(sParam0))
	{
		CAM::_CAM_CREATE(sParam0);
		unk = 1;
		unk[0] = pedParam1;
		CAM::_0xFEB8646818294C75(sParam0, &unk);
	}

	return;
}

BOOL func_211(Ped pedParam0, BOOL bParam1) // Position - 0x9084 Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

int func_212(Ped pedParam0) // Position - 0x90B1 Hash - 0xAE2B09B2 ^0xAE2B09B2
{
	if (!bLocal_25)
	{
		func_362(pedParam0);
		bLocal_25 = true;
	}

	if (func_363(iLocal_23, true))
		return 1;

	if (func_363(iLocal_24, true))
		return 2;

	return 0;
}

BOOL func_213(BOOL bParam0) // Position - 0x90E5 Hash - 0xD6E12BEB ^0xEB8894D
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

BOOL func_214(var uParam0) // Position - 0x90F3 Hash - 0x5001E582 ^0x5001E582
{
	return func_364(*uParam0, 1);
}

BOOL func_215(var uParam0, float fParam1) // Position - 0x9103 Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_355(uParam0, fParam1))
	{
		func_101(uParam0);
		return true;
	}

	return false;
}

BOOL func_216(Ped pedParam0) // Position - 0x9121 Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

Ped func_217(Ped pedParam0) // Position - 0x913C Hash - 0x2F4187EE ^0xDD4F0EB9
{
	if (!PED::IS_PED_INJURED(pedParam0))
		return PED::GET_MOUNT(pedParam0);

	return 0;
}

BOOL func_218(Vehicle veParam0) // Position - 0x9158 Hash - 0xD8F57421 ^0xD07B2EEC
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false, false))
		return false;

	if (func_219(veParam0, 0) && func_219(veParam0, 1))
		return false;

	return true;
}

BOOL func_219(Vehicle veParam0, int iParam1) // Position - 0x919C Hash - 0x92F566DD ^0xED527D94
{
	Ped pedInDraftHarness;

	pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(veParam0, iParam1);

	if (ENTITY::IS_ENTITY_DEAD(pedInDraftHarness))
		return true;

	return false;
}

Ped func_220(Vehicle veParam0, int iParam1) // Position - 0x91BC Hash - 0xE6B6CA7E ^0x25E8F64E
{
	Ped pedInDraftHarness;

	pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(veParam0, iParam1);
	!ENTITY::DOES_ENTITY_EXIST(pedInDraftHarness);
	ENTITY::IS_ENTITY_DEAD(pedInDraftHarness);
	return pedInDraftHarness;
}

Ped func_221(int iParam0) // Position - 0x91E3 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_365(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

float func_222(int iParam0) // Position - 0x920F Hash - 0x9BB7FBA3 ^0xA973C68A
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

	iParam0 = func_365(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_366(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_367(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_367(iParam0) + 1;
	num2 = func_368(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_369(num, any, num7);
	return num8;
}

int func_223(Ped pedParam0, Ped pedParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x92C9 Hash - 0x99BADE6B ^0xD51681E1
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
		{
			if (!PED::IS_PED_ON_MOUNT(pedParam0) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(pedParam1, false)))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(pedParam1, bParam2);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_MOUNT_ANIMAL, true) != 1)
				{
					TASK::TASK_MOUNT_ANIMAL(pedParam0, pedParam1, iParam4, -1, iParam3, 1, 0, 0);
					return 1;
				}
			}
		}
	}

	return 0;
}

void func_224(Ped pedParam0, Hash hParam1, Hash hParam2) // Position - 0x932D Hash - 0x7990926B ^0xF8CB7274
{
	TASK::TASK_WHISTLE_ANIM(pedParam0, hParam1, hParam2);
	return;
}

int func_225() // Position - 0x933F Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

BOOL func_226(int iParam0, var uParam1, var uParam2) // Position - 0x934D Hash - 0x2D8DF8DC ^0x2D8DF8DC
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1347.3542f, 2415.9993f, 306.16928f };
			*uParam2 = 0f;
			break;
	
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f };
			*uParam2 = 0f;
			break;
	
		case 2:
			*uParam1 = { 676.0986f, -1223.2595f, 44.8735f };
			*uParam2 = 186f;
			break;
	
		case 3:
			*uParam1 = { 1855.1464f, -1834.1123f, 42.1034f };
			*uParam2 = 0f;
			break;
	
		case 5:
			*uParam1 = { 2278.6704f, -751.0582f, 40.9953f };
			*uParam2 = 0f;
			break;
	
		case 6:
			*uParam1 = { 2368.145f, 1339.4106f, 105.2073f };
			*uParam2 = 0f;
			break;
	
		case 7:
			*uParam1 = { -2591.7698f, 465.7827f, 146.256f };
			*uParam2 = 0f;
			break;
	
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f };
			*uParam2 = 0f;
			break;
	
		default:
			return false;
	}

	return true;
}

BOOL func_227(int iParam0) // Position - 0x9469 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_228(int iParam0, BOOL bParam1) // Position - 0x947F Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_229(int iParam0) // Position - 0x94B2 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

int func_230(int iParam0) // Position - 0x94C8 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_229(iParam0))
		return 0;

	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_231(int iParam0) // Position - 0x94E8 Hash - 0x6B3238EF ^0x6B3238EF
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

BOOL func_232(int iParam0) // Position - 0x9529 Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

BOOL func_233(int iParam0, int iParam1) // Position - 0x9548 Hash - 0x7572A314 ^0x4B13FBB8
{
	return func_232(iParam0) && Global_1898346[iParam0 /*6*/].f_1 && iParam1 != false;
}

BOOL func_234(int iParam0, int iParam1, Ped pedParam2, BOOL bParam3) // Position - 0x956A Hash - 0xB3C0CD06 ^0xC991EBC
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(pedParam2))
		if (!func_370(pedParam2, true))
			return true;
		else
			return false;

	if (func_70(iParam0))
		return false;

	return true;
}

BOOL func_235(int iParam0) // Position - 0x95A6 Hash - 0xE97E1B38 ^0xE97E1B38
{
	return iParam0 > -1 && iParam0 < 7;
}

BOOL func_236(int iParam0, int iParam1) // Position - 0x95BB Hash - 0xA5D7750C ^0xB8419359
{
	if (!func_235(iParam0))
		return false;

	return Global_1395482.f_2[iParam0] && iParam1 != false;
}

int func_237(int iParam0) // Position - 0x95E0 Hash - 0x69AF6CF8 ^0x64DBA37A
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

char* func_238(char* sParam0) // Position - 0x95F3 Hash - 0xC9D82232 ^0xC9D82232
{
	return sParam0;
}

BOOL func_239(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x95FD Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_105(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

int func_240(int iParam0, var uParam1, var uParam2) // Position - 0x9627 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_241(var uParam0) // Position - 0x9644 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_371(uParam0, 0f);
	return;
}

BOOL func_242(var uParam0, int iParam1) // Position - 0x9653 Hash - 0xE46677C2 ^0xE46677C2
{
	return *uParam0 && iParam1 != false;
}

void func_243(int iParam0, int iParam1, BOOL bParam2) // Position - 0x9663 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

void func_244(int iParam0) // Position - 0x9689 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_105(iParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		hash = func_372(iParam0);
	
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

Ped func_245(int iParam0) // Position - 0x96F1 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_105(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

void func_246(int iParam0) // Position - 0x972B Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_22(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_245(iParam0)))
		{
			func_312(iParam0, 67108864, true);
			func_94(iParam0, 19, true);
		}
	}

	return;
}

BOOL func_247(int iParam0) // Position - 0x975E Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_22(iParam0))
		return false;

	if (!func_87(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

float func_248(int iParam0) // Position - 0x9792 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_105(iParam0))
		return 0f;

	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_249(int iParam0) // Position - 0x97B3 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_245(iParam0);
	persChar = func_96(iParam0, false);
	func_373(iParam0, ped);

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

float func_250(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x980D Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_84(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_251(int iParam0, BOOL bParam1) // Position - 0x9864 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_105(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_374(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_252(int iParam0) // Position - 0x99A9 Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_104(iParam0);

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

PersChar func_253(int iParam0, BOOL bParam1) // Position - 0x9A1F Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_105(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[iParam0 /*1157*/].f_126 = func_375(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_254(int iParam0) // Position - 0x9A6B Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_105(iParam0))
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

void func_255(int iParam0, int iParam1) // Position - 0x9ABE Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_105(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

BOOL func_256(int iParam0) // Position - 0x9AE2 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_376(iParam0, 2);
}

int func_257(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9AF1 Hash - 0xBCA3D59C ^0x5144AEE5
{
	if (bParam2)
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(pedParam0);

	if (!PED::GET_PED_CONFIG_FLAG(pedParam0, 178, true))
		PED::SET_PED_CONFIG_FLAG(pedParam0, 178, true);

	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 297, true) != bParam2)
		PED::SET_PED_CONFIG_FLAG(pedParam0, 297, bParam2);

	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 315, true))
		PED::SET_PED_CONFIG_FLAG(pedParam0, 315, false);

	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 331, true))
		PED::SET_PED_CONFIG_FLAG(pedParam0, 331, false);

	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 130, true))
		PED::SET_PED_CONFIG_FLAG(pedParam0, 130, false);

	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 301, true))
		PED::SET_PED_CONFIG_FLAG(pedParam0, 301, false);

	if (bParam2 && bParam3)
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(pedParam0, "INTERACT_LOCKON", iParam1, 0, 0, 0, 0, 0, false, -1))
			return 1;
	else
		return 1;

	return 0;
}

int func_258(Ped pedParam0) // Position - 0x9BBD Hash - 0xB2D81349 ^0xACC293B5
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

void func_259(Ped* ppedParam0) // Position - 0x9C12 Hash - 0xC4826352 ^0x8AD0FF3C
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

void func_260(var uParam0) // Position - 0x9C71 Hash - 0x530B7370 ^0x1B8FEE27
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_36581[i /*2*/] == uParam0)
			Global_36581[i /*2*/].f_1 = 3;
	}

	return;
}

void func_261(var uParam0) // Position - 0x9CA2 Hash - 0x829F032E ^0x83C94E6F
{
	if (func_25(uParam0->f_162))
		func_26(&(uParam0->f_162), true, true);

	if (func_25(uParam0->f_163))
		func_26(&(uParam0->f_163), true, true);

	if (func_25(uParam0->f_164))
		func_26(&(uParam0->f_164), true, true);

	if (func_25(uParam0->f_165))
		func_26(&(uParam0->f_165), true, true);

	return;
}

void func_262(var uParam0) // Position - 0x9CFE Hash - 0x3D92A68F ^0x8B2A00A3
{
	if (uParam0->f_170)
		func_377();

	return;
}

void func_263(var uParam0) // Position - 0x9D11 Hash - 0x407D6713 ^0x758D9866
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_378(32);
		func_267(uParam0->f_3, true, 0, 0, 2, 0, false, true);
	}

	return;
}

BOOL func_264(var uParam0) // Position - 0x9D3F Hash - 0xEBDBCDAB ^0xF2CDCAC0
{
	if (func_379(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_380(uParam0->f_3);
		func_166(uParam0, false, true);
		func_381(uParam0->f_3, uParam0->f_51.f_5, false, uParam0->f_43, -1);
		func_382(false, 0);
		return true;
	}

	return false;
}

void func_265() // Position - 0x9D8E Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_266(int iParam0) // Position - 0x9DA2 Hash - 0xBC0CCBA5 ^0x80D3F3F5
{
	if (!func_142(iParam0))
		return true;

	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

void func_267(int iParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x9DC5 Hash - 0x4654DD91 ^0x21FEF3E7
{
	int num;

	num = iParam2 + (60 * iParam3) + (3600 * iParam4) + (86400 * iParam5);

	if (func_237(iParam0) == 1 && bParam7)
		return;

	if (bParam6)
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > num)
			return;

	if (bParam1 || bParam6 || func_269() != -1)
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;

	Global_17504.f_42[iParam0 /*8*/].f_4 = Global_17504.f_42[iParam0 /*8*/].f_4 + num;
	return;
}

void func_268(Volume volParam0) // Position - 0x9E51 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_269() // Position - 0x9E68 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

int func_270(int iParam0) // Position - 0x9E76 Hash - 0xB05A3A35 ^0xB05A3A35
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

int func_271(int iParam0) // Position - 0xA347 Hash - 0x8AE2E06E ^0x8AE2E06E
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
			return &func_1;
	
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
			return 690;
	
		case 74:
			return 694;
	
		case 75:
			return 695;
	
		case 76:
			return 696;
	
		case 77:
			return &func_5;
	
		case 78:
			return 700;
	
		case 79:
			return 702;
	
		case 80:
			return 708;
	
		case 81:
			return 711;
	
		case 82:
			return &func_6;
	
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
			return &func_8;
	
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

BOOL func_272(int iParam0, int iParam1, var uParam2) // Position - 0xA8BA Hash - 0x3B647C0A ^0x3B647C0A
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					uParam2->[0 /*3*/] = { -1075.0363f, -498.9537f, 80.4572f };
					uParam2->[1 /*3*/] = { -1058.0546f, -609.5211f, 76.6181f };
					uParam2->[2 /*3*/] = { -1272.2085f, -612.5573f, 100.8638f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 1:
					uParam2->[0 /*3*/] = { -2288.3015f, -389.368f, 155.9838f };
					uParam2->[1 /*3*/] = { -2267.8367f, -294.2087f, 162.0459f };
					uParam2->[2 /*3*/] = { -2588.5999f, -283.9735f, 157.3797f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 2:
					uParam2->[0 /*3*/] = { -1751.3662f, 174.5853f, 140.272f };
					uParam2->[1 /*3*/] = { -1639.375f, -163.5104f, 165.0787f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 3:
					uParam2->[0 /*3*/] = { -771.0659f, -259.0937f, 47.9193f };
					uParam2->[1 /*3*/] = { -822.0638f, -500.4154f, 43.2726f };
					uParam2->[2 /*3*/] = { -1024.218f, -401.8981f, 74.0529f };
					uParam2->[3 /*3*/] = { -1006.9927f, -282.9351f, 74.6298f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 4:
					uParam2->[0 /*3*/] = { -1338.5732f, 327.9119f, 84.6143f };
					uParam2->[1 /*3*/] = { -1232.6497f, 330.8496f, 62.4046f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 5:
					uParam2->[0 /*3*/] = { -1502.9838f, -885.5237f, 88.3171f };
					uParam2->[1 /*3*/] = { -1297.3842f, -819.8127f, 66.0834f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 6:
					uParam2->[0 /*3*/] = { 350.4579f, 1090.9993f, 185.1566f };
					uParam2->[1 /*3*/] = { 92.55f, 1093.1106f, 180.0293f };
					uParam2->[2 /*3*/] = { 409.0284f, 1196.0243f, 176.0849f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 7:
					uParam2->[0 /*3*/] = { 749.1558f, 1391.2183f, 169.0392f };
					uParam2->[1 /*3*/] = { 655.3339f, 1501.0521f, 182.3537f };
					uParam2->[2 /*3*/] = { 564.7472f, 1351.0748f, 181.0084f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 8:
					uParam2->[0 /*3*/] = { 798.8331f, 1217.1757f, 139.389f };
					uParam2->[1 /*3*/] = { 796.767f, 1022.3008f, 117.9023f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 9:
					uParam2->[0 /*3*/] = { 1499.724f, 1483.517f, 148.1553f };
					uParam2->[1 /*3*/] = { 1762.153f, 1460.5046f, 154.3694f };
					uParam2->[2 /*3*/] = { 1791.4729f, 1553.1448f, 158.3201f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 10:
					uParam2->[0 /*3*/] = { 1592.0159f, 838.9788f, 137.0506f };
					uParam2->[1 /*3*/] = { 1481.7882f, 983.7827f, 159.4282f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 11:
					uParam2->[0 /*3*/] = { 2066.8213f, 1396.1818f, 161.616f };
					uParam2->[1 /*3*/] = { 2018.5846f, 1589.685f, 166.3078f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 12:
					uParam2->[0 /*3*/] = { 1931.246f, 1417.7103f, 175.205f };
					uParam2->[1 /*3*/] = { 1758.6162f, 1470.9656f, 153.1616f };
					uParam2->[2 /*3*/] = { 1908.1014f, 1340.7179f, 184.5229f };
					uParam2->[3 /*3*/] = { 1758.6313f, 1339.5654f, 179.8116f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 13:
					uParam2->[0 /*3*/] = { 906.3064f, 1862.9208f, 276.5091f };
					uParam2->[1 /*3*/] = { 1227.3718f, 1910.6864f, 303.6052f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 14:
					uParam2->[0 /*3*/] = { 39.5976f, -446.5889f, 73.5138f };
					uParam2->[1 /*3*/] = { 261.8906f, -501.4701f, 69.7941f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 15:
					uParam2->[0 /*3*/] = { 147.7795f, 574.2345f, 124.4514f };
					uParam2->[1 /*3*/] = { 353.6481f, 791.2978f, 158.3952f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 16:
					uParam2->[0 /*3*/] = { 1152.2727f, 1.4974f, 91.3795f };
					uParam2->[1 /*3*/] = { 1229.5802f, -41.3491f, 97.8027f };
					uParam2->[2 /*3*/] = { 1388.3514f, 191.7681f, 91.0511f };
					uParam2->[3 /*3*/] = { 1182.1741f, 249.1711f, 95.8012f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 17:
					uParam2->[0 /*3*/] = { 2436.3489f, 1255.7517f, 108.7815f };
					uParam2->[1 /*3*/] = { 2581.6538f, 1319.1871f, 109.4025f };
					uParam2->[2 /*3*/] = { 2648.9915f, 1389.9941f, 86.802f };
					uParam2->[3 /*3*/] = { 2499.8772f, 1520.7655f, 84.1962f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 18:
					uParam2->[0 /*3*/] = { 2886.699f, 650.0214f, 56.9408f };
					uParam2->[1 /*3*/] = { 2841.1716f, 901.8114f, 48.3778f };
					uParam2->[2 /*3*/] = { 2789.3882f, 789.1998f, 69.4871f };
					uParam2->[3 /*3*/] = { 2838.36f, 650.3098f, 66.5798f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 19:
					uParam2->[0 /*3*/] = { 1966.3492f, 55.0459f, 77.6335f };
					uParam2->[1 /*3*/] = { 1997.6144f, 290.7841f, 80.4139f };
					uParam2->[2 /*3*/] = { 2073.044f, 228.7493f, 69.5644f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 20:
					uParam2->[0 /*3*/] = { 2515.7852f, 798.911f, 69.7688f };
					uParam2->[1 /*3*/] = { 2506.8867f, 618.8073f, 68.6403f };
					uParam2->[2 /*3*/] = { 2377.6147f, 751.5095f, 66.3114f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 21:
					uParam2->[0 /*3*/] = { 2128.2134f, 1721.5632f, 130.3847f };
					uParam2->[1 /*3*/] = { 2264.1829f, 1720.8735f, 103.2933f };
					uParam2->[2 /*3*/] = { 2134.7913f, 1568.9482f, 115.1957f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 22:
					uParam2->[0 /*3*/] = { 2826.741f, 2204.8816f, 155.551f };
					uParam2->[1 /*3*/] = { 2838.0742f, 1999.7915f, 161.9055f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 2:
					uParam2->[0 /*3*/] = { 350.8081f, 1195.7316f, 176.1334f };
					uParam2->[1 /*3*/] = { -9.8736f, 1100.082f, 171.5504f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 6:
					uParam2->[0 /*3*/] = { 951.1178f, 411.6494f, 111.4674f };
					uParam2->[1 /*3*/] = { 786.1444f, 1078.4563f, 125.8602f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 7:
					uParam2->[0 /*3*/] = { -784.4099f, 128.655f, 42.3724f };
					uParam2->[1 /*3*/] = { -478.0183f, 232.7834f, 42.1853f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 8:
					uParam2->[0 /*3*/] = { 1148.9904f, 1456.2644f, 190.799f };
					uParam2->[1 /*3*/] = { 840.1897f, 1221.4702f, 141.6344f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 9:
					uParam2->[0 /*3*/] = { 1413.9014f, -334.469f, 88.1597f };
					uParam2->[1 /*3*/] = { 1222.6525f, -59.931f, 93.5015f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 10:
					uParam2->[0 /*3*/] = { 1548.8221f, -1190.659f, 49.1131f };
					uParam2->[1 /*3*/] = { 1547.5134f, -1410.9517f, 60.6415f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 0:
					uParam2->[0 /*3*/] = { 2466.914f, -732.939f, 42.531f };
					uParam2->[1 /*3*/] = { 2303.902f, -750.908f, 41.569f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 1:
					uParam2->[0 /*3*/] = { 1757.029f, -832.27f, 41.718f };
					uParam2->[1 /*3*/] = { 1882.646f, -955.777f, 42.672f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 2:
					uParam2->[0 /*3*/] = { 2117.433f, -847.803f, 41.749f };
					uParam2->[1 /*3*/] = { 2112.33f, -625.643f, 41.772f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 12:
					uParam2->[0 /*3*/] = { 2552.283f, -208.465f, 43.013f };
					uParam2->[1 /*3*/] = { 2725.735f, 32.896f, 51.048f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 13:
					uParam2->[0 /*3*/] = { 2219.83f, -503.6095f, 41.0142f };
					uParam2->[1 /*3*/] = { 2371.7751f, -527.7825f, 40.7584f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 14:
					uParam2->[0 /*3*/] = { 2157.7837f, -459.4536f, 40.5431f };
					uParam2->[1 /*3*/] = { 2354.8914f, -401.4336f, 40.5042f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 26:
					uParam2->[0 /*3*/] = { 3266.224f, 1664.717f, 60.269f };
					uParam2->[1 /*3*/] = { 3221.388f, 1809.026f, 74.813f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 27:
					uParam2->[0 /*3*/] = { 2782.415f, 634.97f, 74.323f };
					uParam2->[1 /*3*/] = { 2594.708f, 556.157f, 75.742f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 28:
					uParam2->[0 /*3*/] = { 3268.065f, 1618.2496f, 51.5041f };
					uParam2->[1 /*3*/] = { 3151.3452f, 1476.8243f, 42.9185f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 29:
					uParam2->[0 /*3*/] = { 2524.41f, 1402.663f, 97.646f };
					uParam2->[1 /*3*/] = { 2436.137f, 1254.158f, 109.722f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 30:
					uParam2->[0 /*3*/] = { 2145.954f, 1592.128f, 118.3828f };
					uParam2->[1 /*3*/] = { 2118.189f, 1395.341f, 146.675f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 5:
					uParam2->[0 /*3*/] = { 2724.549f, -7.066f, 51.083f };
					uParam2->[1 /*3*/] = { 2542.0054f, -233.1396f, 41.4732f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 6:
					uParam2->[0 /*3*/] = { 2300.604f, -441.226f, 41.797f };
					uParam2->[1 /*3*/] = { 2569.0059f, -361.3357f, 40.5728f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 7:
					uParam2->[0 /*3*/] = { 762.142f, 1455.038f, 160.172f };
					uParam2->[1 /*3*/] = { 581.92f, 1359.6987f, 182.007f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 8:
					uParam2->[0 /*3*/] = { 1561.3123f, 1602.5398f, 188.8227f };
					uParam2->[1 /*3*/] = { 1315.677f, 1471.6691f, 160.1485f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			}
			break;
	
		case 44:
			switch (iParam1)
			{
				case 0:
					uParam2->[0 /*3*/] = { -1366.7836f, 150.125f, 77.8591f };
					uParam2->[1 /*3*/] = { -1627.6406f, 266.7185f, 105.116f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 1:
					uParam2->[0 /*3*/] = { -1366.784f, 150.125f, 77.859f };
					uParam2->[1 /*3*/] = { -1627.641f, 266.719f, 105.116f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 3:
					uParam2->[0 /*3*/] = { -1090.7396f, 151.3781f, 58.3089f };
					uParam2->[1 /*3*/] = { -823.9262f, 278.8717f, 92.3226f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 6:
					uParam2->[0 /*3*/] = { 1714.4269f, -1933.3185f, 45.6594f };
					uParam2->[1 /*3*/] = { 1714.5712f, -1856.8462f, 48.5272f };
					uParam2->[2 /*3*/] = { 1531.9542f, -1706.0227f, 57.3286f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			}
			break;
	
		case 50:
			switch (iParam1)
			{
				case 6:
					uParam2->[0 /*3*/] = { -1736.7738f, -836.8357f, 96.5171f };
					uParam2->[1 /*3*/] = { -1915.8331f, -682.8271f, 116.4542f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 7:
					uParam2->[0 /*3*/] = { -755.4001f, -796.7909f, 49.7304f };
					uParam2->[1 /*3*/] = { -1039.6483f, -688.1265f, 69.6641f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 15:
					uParam2->[0 /*3*/] = { 902.8263f, 386.1294f, 115.5771f };
					uParam2->[1 /*3*/] = { 615.3056f, 258.5487f, 103.5037f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 16:
					uParam2->[0 /*3*/] = { 874.3443f, 827.1644f, 114.901f };
					uParam2->[1 /*3*/] = { 859.3398f, 590.4376f, 110.1404f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 17:
					uParam2->[0 /*3*/] = { -769.1578f, 299.2588f, 93.7465f };
					uParam2->[1 /*3*/] = { -588.5746f, 443.7545f, 97.2538f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 18:
					uParam2->[0 /*3*/] = { 442.6022f, -274.5149f, 141.8569f };
					uParam2->[1 /*3*/] = { 252.7831f, -219.3386f, 129.8086f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 19:
					uParam2->[0 /*3*/] = { 82.4531f, 27.6559f, 99.5123f };
					uParam2->[1 /*3*/] = { 441.6833f, 325.2197f, 102.5464f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 24:
					uParam2->[0 /*3*/] = { 2682.6663f, 254.0104f, 62.8591f };
					uParam2->[1 /*3*/] = { 2726.4194f, 15.7709f, 48.8237f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 25:
					uParam2->[0 /*3*/] = { 2166.4285f, 1654.0681f, 114.0645f };
					uParam2->[1 /*3*/] = { 2375.6646f, 1665.218f, 95.4254f };
					uParam2->[2 /*3*/] = { 2402.211f, 1816.3588f, 106.9185f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 28:
					uParam2->[0 /*3*/] = { 1832.6058f, -1986.9436f, 43.5085f };
					uParam2->[1 /*3*/] = { 1691.0854f, -1896.3955f, 47.2405f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 29:
					uParam2->[0 /*3*/] = { 1375.4043f, -1591.8435f, 68.4645f };
					uParam2->[1 /*3*/] = { 1603.7104f, -1744.7563f, 52.1714f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 30:
					uParam2->[0 /*3*/] = { 816.4478f, -915.9297f, 49.4983f };
					uParam2->[1 /*3*/] = { 1006.3613f, -1293.4032f, 53.9613f };
					uParam2->[2 /*3*/] = { 1094.9187f, -1166.476f, 67.619f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 31:
					uParam2->[0 /*3*/] = { 810.3403f, -872.8113f, 51.4344f };
					uParam2->[1 /*3*/] = { 825.1677f, -576.8741f, 79.2273f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 32:
					uParam2->[0 /*3*/] = { 1018.1005f, -922.2153f, 66.9381f };
					uParam2->[1 /*3*/] = { 832.2029f, -891.5154f, 51.1305f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			
				case 33:
					uParam2->[0 /*3*/] = { 1472.1473f, -437.5275f, 75.9389f };
					uParam2->[1 /*3*/] = { 1224.738f, -51.7863f, 93.1655f };
					uParam2->[2 /*3*/] = { 0f, 0f, 0f };
					uParam2->[3 /*3*/] = { 0f, 0f, 0f };
					uParam2->[4 /*3*/] = { 0f, 0f, 0f };
					uParam2->[5 /*3*/] = { 0f, 0f, 0f };
					uParam2->[6 /*3*/] = { 0f, 0f, 0f };
					uParam2->[7 /*3*/] = { 0f, 0f, 0f };
					return true;
			}
			break;
	}

	return false;
}

Vector3 func_273(Ped pedParam0, var uParam1) // Position - 0xC700 Hash - 0xB0BFFF53 ^0x9AD2F52E
{
	int i;
	int num;
	Vector3 entityCoords;

	num = -1;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	
		for (i = 0; i < *uParam1; i = i + 1)
		{
			if (!_IS_NULL_VECTOR(uParam1->[i /*3*/]))
				if (num < 0 || BUILTIN::VDIST2(entityCoords, uParam1->[i /*3*/]) < BUILTIN::VDIST2(entityCoords, uParam1->[num /*3*/]))
					num = i;
		}
	
		if (num > -1 && num < *uParam1)
			return uParam1->[num /*3*/];
	}

	return 0f, 0f, 0f;
}

void func_274(var uParam0, BOOL bParam1) // Position - 0xC796 Hash - 0xBA402171 ^0x2A6448DD
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_DEBUG_PINK"), *uParam0);
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, joaat("BLIP_MODIFIER_URGENT_ALERT"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
	
		if (bParam1)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_21("BEAT_GLB", 5500, false, true, 0, 0, -1, -1, 0);
		}
	
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}

	return;
}

BOOL func_275(int iParam0, int iParam1) // Position - 0xC803 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Volume func_276(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0xC812 Hash - 0xC1E3A062 ^0xD42263D3
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
		if (func_189(vParam0))
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

	func_383(volume, bParam8);
	return volume;
}

void func_277(int iParam0) // Position - 0xC8CC Hash - 0xD881DF8C ^0xD881DF8C
{
	if (!func_142(iParam0))
		return;

	func_384(iParam0);
	return;
}

void func_278(var uParam0, int iParam1, var uParam2, var uParam3) // Position - 0xC8E7 Hash - 0x912E4F98 ^0x969385B6
{
	if (iParam1 != 0)
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, iParam1.f_1, iParam1, iParam1.f_2);
	else if (iParam1.f_1 != -1)
		TASK::_0x19BC99C678FBA139(*uParam0, iParam1.f_1, iParam1.f_2);

	return;
}

int func_279(int iParam0) // Position - 0xC920 Hash - 0x4D5A23C7 ^0x6BC264F8
{
	if (func_53(iParam0, 2))
		return 200;

	if (func_53(iParam0, 4))
		return 70;

	if (func_53(iParam0, 32))
		return 400;

	return 110;
}

int func_280(int iParam0) // Position - 0xC962 Hash - 0x5571AD25 ^0x28C348FE
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (func_42(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
			if (func_321() == 8)
				return 3;
	
		flag = func_42(iParam0, 2);
		flag2 = func_42(iParam0, 1);
		flag3 = flag && flag2;
	
		if (flag3)
			if (!func_172())
				return 2;
			else
				return 1;
		else if (flag)
			return 1;
		else if (flag2)
			return 2;
	}

	return -1;
}

void func_281(var uParam0, var uParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0xC9DF Hash - 0x69FD87A7 ^0xFA55EAB1
{
	if (bParam4)
	{
		*uParam0 = 45f;
		*uParam1 = 135f;
	}
	else
	{
		*uParam0 = 45f;
		*uParam1 = 125f;
	}

	if (func_53(iParam3, 2097152))
	{
		*uParam0 = *uParam0 + 15f;
		*uParam2 = BUILTIN::CEIL(*uParam0 + 50f);
	}
	else
	{
		*uParam2 = 70;
	}

	return;
}

void func_282(var uParam0, var uParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0xCA40 Hash - 0x5B9E1B5D ^0x5B9E1B5D
{
	if (bParam4)
		*uParam1 = 240f;
	else
		*uParam1 = 215f;

	*uParam0 = 110f;

	if (func_53(iParam3, 2))
	{
		*uParam0 = *uParam0 + 60f;
		*uParam1 = *uParam1 + 60f;
		*uParam2 = BUILTIN::CEIL(*uParam0 + 110f);
	}
	else if (func_53(iParam3, 2097152))
	{
		*uParam0 = *uParam0 + 30f;
		*uParam2 = BUILTIN::CEIL(*uParam0 + 30f);
	}
	else
	{
		*uParam2 = 70;
	}

	return;
}

BOOL func_283(int iParam0, int iParam1) // Position - 0xCACE Hash - 0xF9A148C7 ^0x33F71210
{
	int num;
	int num2;
	int offset;

	num = func_271(iParam0) + iParam1;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_17504.f_12[num2], offset);
}

BOOL func_284(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5) // Position - 0xCAFE Hash - 0xC11DEB21 ^0xC11DEB21
{
	float num;

	if (_IS_NULL_VECTOR(vParam1))
		return false;

	if (func_289(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}

	num = BUILTIN::VDIST2(vParam1, Global_36);

	if (func_83(iParam0))
		fParam4 = 40000f;

	if (num < fParam4 && num > fParam5)
		return true;
	else if (iParam0 == 42 || iParam0 == 110)
		return true;

	return false;
}

BOOL func_285(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0xCB83 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
				return true;

	return false;
}

void func_286(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0xCBD8 Hash - 0xE8FB625A ^0xDE619FF9
{
	int num;

	num = bParam6 ? iParam7 : BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));

	if (!uParam4->f_1)
	{
		if (num < uParam4->f_2 || func_292(vParam1, pedParam0) && ENTITY::GET_ENTITY_SPEED(pedParam0) > iParam5)
		{
			*uParam4 = func_385();
			uParam4->f_2 = func_386(pedParam0, vParam1, true);
			uParam4->f_1 = 1;
		}
	}
	else if (num > uParam4->f_2 || !func_292(vParam1, pedParam0) && ENTITY::GET_ENTITY_SPEED(pedParam0) > iParam5)
	{
		*uParam4 = func_385();
		uParam4->f_2 = func_386(pedParam0, vParam1, true);
		uParam4->f_1 = 0;
	}

	return;
}

BOOL func_287(var uParam0, int iParam1) // Position - 0xCC8C Hash - 0x932A1FE ^0xF74179EF
{
	if (uParam0->f_1 == 1)
		return func_385() - *uParam0 >= iParam1;

	return false;
}

int func_288(var uParam0) // Position - 0xCCAB Hash - 0xB9E1544A ^0x15F341F8
{
	int i;
	int num;

	num = -1;

	for (i = 0; i < 8; i = i + 1)
	{
		if (!_IS_NULL_VECTOR(uParam0->f_12[i /*3*/]))
			if (num < 0 || BUILTIN::VDIST2(Global_36, uParam0->f_12[num /*3*/]) < BUILTIN::VDIST2(Global_36, uParam0->f_12[i /*3*/]))
				num = i;
	}

	return num;
}

BOOL func_289(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xCD15 Hash - 0xEFFA36C2 ^0xA1A519CB
{
	int num;

	if (!func_42(iParam0, 1))
		num = 1;

	if (func_387(uParam1, 0, 0, num))
		return true;

	if (func_42(iParam0, 33554432))
		if (func_388(uParam1, 200f, 1, 0))
			return true;

	return false;
}

BOOL func_290(int iParam0, var uParam1) // Position - 0xCD63 Hash - 0x389075FF ^0x18787A41
{
	BOOL num;
	var groundZ;
	int num2;
	var unk;

	num = 1;

	if (func_53(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, uParam1->f_2 + 40f, &groundZ, false))
			return false;
	
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, uParam1->f_2 + 40f, 129, &groundZ, &num2, &unk))
			if (num2 == 1619704960)
				return false;
	}

	if (func_42(iParam0, 1) && !func_42(iParam0, 2))
		if (func_42(iParam0, 4096) || func_42(iParam0, 2048))
			if (func_389(*uParam1))
				num = 0;

	return num;
}

BOOL func_291(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xCE09 Hash - 0x6E6B24DB ^0x6E6B24DB
{
	var unk;

	unk = func_1(&uParam0);

	if (!func_390())
		return false;

	return true;
}

BOOL func_292(var uParam0, var uParam1, var uParam2, Ped pedParam3) // Position - 0xCE26 Hash - 0xA4E464AC ^0x3D58FE5B
{
	var entityForwardVector;

	if (ENTITY::IS_ENTITY_DEAD(pedParam3))
		return false;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam3) };
	return func_391(entityForwardVector, uParam0) > func_391(entityForwardVector, ENTITY::GET_ENTITY_COORDS(pedParam3, true, false));
}

BOOL func_293(var uParam0) // Position - 0xCE62 Hash - 0x1D6344D9 ^0x1D6344D9
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_36581[i /*2*/] == uParam0)
			return true;
	}

	return false;
}

int func_294(var uParam0) // Position - 0xCE8E Hash - 0x67695E3A ^0xB4A144D5
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_36581[i /*2*/] == uParam0)
			return Global_36581[Global_36602 /*2*/].f_1;
	}

	return 3;
}

int func_295(BOOL bParam0) // Position - 0xCEC3 Hash - 0xB9596906 ^0xEA13D3DB
{
	int num;
	BOOL flag;

	flag = bParam0;

	if (flag < false)
	{
		num = 1;
		func_392(&flag, -2147483648);
	}
	else
	{
		num = 0;
	}

	while (flag > false)
	{
		flag = flag && flag - 1;
		num = num + 1;
	}

	return num;
}

int func_296() // Position - 0xCF03 Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

BOOL func_297(Ped pedParam0) // Position - 0xCF13 Hash - 0xCA96D27A ^0x3802A466
{
	int i;
	Ped ped;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_269() != -1)
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = Global_1360165[i /*1157*/];
	
		if (!ENTITY::IS_ENTITY_DEAD(ped) && pedParam0 == ped)
			return true;
	}

	return false;
}

int func_298(int iParam0) // Position - 0xCF6C Hash - 0x69AF6CF8 ^0x4EA5F9C3
{
	return Global_17504.f_42[iParam0 /*8*/].f_1;
}

int func_299(int iParam0) // Position - 0xCF7F Hash - 0xBDF95F4C ^0xB611BAAC
{
	return Global_17504.f_42[iParam0 /*8*/];
}

BOOL func_300(int iParam0) // Position - 0xCF90 Hash - 0x29FCCE6A ^0xA230F605
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
		return true;

	return false;
}

void func_301(int iParam0, BOOL bParam1, char* sParam2) // Position - 0xCFAD Hash - 0x4393BBFF ^0x711C558C
{
	Ped ped;

	ped = func_245(iParam0);

	if (!func_22(iParam0) || ENTITY::IS_ENTITY_DEAD(ped))
		return;

	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(ped);

	if (bParam1)
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, false, true);
	else
		TASK::CLEAR_PED_TASKS(ped, true, false);

	return;
}

void func_302(int iParam0, int iParam1) // Position - 0xCFF4 Hash - 0x61FF61E0 ^0x2C6117ED
{
	if (!func_105(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_11 = iParam1;
	return;
}

BOOL func_303(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, BOOL bParam10, BOOL bParam11) // Position - 0xD016 Hash - 0x5B7A656E ^0x3AAC2B26
{
	if (!func_105(iParam0))
		return false;

	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("def_comp_brain")))
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("def_comp_brain"));
		
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
			[[fallthrough]];
	
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("def_comp_brain")))
				return false;
		
			if (Global_1359489.f_9 != -1)
				return false;
		
			Global_1359489.f_9 = iParam0;
		
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
					iParam4 = func_393(iParam0, iParam9, bParam7, true);
				else if (Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59 && func_394(Global_1360165[iParam0 /*1157*/].f_4.f_2) || func_395(Global_1360165[iParam0 /*1157*/].f_4.f_2))
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				else
					iParam4 = func_393(iParam0, Global_40.f_4283, bParam7, true);
			
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_396(Global_1360165[iParam0 /*1157*/].f_63))
					if (!func_397(iParam0, false))
						func_88(iParam0, 25, false);
			}
		
			Global_1360165[iParam0 /*1157*/].f_4 = { func_398(iParam0, iParam4, uParam1, bParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
		
			if (!bParam6)
				func_94(iParam0, 44, true);
		
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
			[[fallthrough]];
	
		case 2:
			if (!func_95(func_245(iParam0), 0))
				return false;
		
			if (bParam5 && bParam10)
				if (!func_95(func_104(iParam0), 0))
					return false;
		
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
			[[fallthrough]];
	
		case 3:
			return true;
	
		default:
		
	}

	return false;
}

void func_304(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD1FF Hash - 0xE11FEEB6 ^0xE11FEEB6
{
	if (!func_22(iParam0))
		return;

	if (bParam1)
		func_399(iParam0, bParam3);
	else
		func_400(iParam0, bParam3);

	if (bParam2)
		func_401(iParam0, bParam3);
	else
		func_402(iParam0, bParam3);

	return;
}

BOOL func_305(int iParam0, int iParam1) // Position - 0xD244 Hash - 0xB10CB915 ^0x7678EBC
{
	BOOL flag;

	if (!func_22(iParam0))
		return false;

	if (iParam1 == 296923297 || iParam1 == 1237718549)
		return true;

	flag = func_403(iParam0, iParam1);
	return flag;
}

void func_306(int iParam0, int iParam1, BOOL bParam2) // Position - 0xD283 Hash - 0xE34CA2E4 ^0x9C7D0427
{
	if (!func_22(iParam0))
		return;

	if (!func_305(iParam0, iParam1))
		return;

	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;

	if (bParam2)
		func_88(iParam0, 25, true);

	return;
}

void func_307(int iParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0xD2C3 Hash - 0x1300E8EE ^0xFBE7C64E
{
	Hash hash;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (func_404(iParam2))
		{
			hash = func_405(iParam2, -1);
		
			if (func_406(pedParam1, hash))
			{
				if (func_407(pedParam1, hash))
				{
					if (func_408(pedParam1, hash))
					{
						PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam1, "metaped_outfit_request"), pedParam1, true, false);
						func_409(pedParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(pedParam1, hash);
				}
			}
		}
	
		func_410(iParam0, pedParam1, false);
		PED::_UPDATE_PED_VARIATION(pedParam1, false, true, true, true, false);
		PED::_SET_PED_DIRT_CLEANED(pedParam1, 0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 9);
	
		if (bParam3)
			func_88(iParam0, 66, false);
	}

	return;
}

void func_308(int iParam0) // Position - 0xD399 Hash - 0x73C1F6C ^0x73C1F6C
{
	func_411(iParam0);
	func_412(iParam0, false);
	return;
}

void func_309(Ped pedParam0, int iParam1) // Position - 0xD3AE Hash - 0x7F605CB ^0x28CA17AF
{
	if (!PED::IS_PED_INJURED(pedParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(pedParam0, joaat("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(pedParam0, joaat("WEAPON_UNARMED"), true, 1, false, false);
	
		if (PED::IS_PED_A_PLAYER(pedParam0) && iParam1 == 1)
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), false);
	}

	return;
}

BOOL func_310(Ped pedParam0) // Position - 0xD409 Hash - 0x4E8A039F ^0x9F8FB293
{
	int i;
	Hash weaponHash;
	BOOL num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		weaponHash = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, i, true);
	
		if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
		{
		}
		else
		{
			num = 1;
			WEAPON::_SEND_WEAPON_TO_INVENTORY(pedParam0, weaponHash);
		}
	}

	return num;
}

void func_311(int iParam0, Ped pedParam1) // Position - 0xD487 Hash - 0x9D727A3E ^0xB12CD64B
{
	if (!func_105(iParam0))
		return;

	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_413(pedParam1, joaat("weapon_revolver_cattleman_sadie"), 0, false, 2, true, false, 1056964608, 1065353216, -1, false, false, false, false);
				func_413(pedParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), false, false, 3, true, true, 1056964608, 1065353216, -1, false, true, false, false);
			}
			break;
	}

	return;
}

void func_312(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD501 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_22(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] || bParam1;
	return;
}

Player func_313(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, int iParam9, int iParam10, int iParam11, int iParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17) // Position - 0xD532 Hash - 0x9338D9C0 ^0x2F425F02
{
	Player player;

	if (!func_105(iParam1))
		return 0;

	player = func_104(iParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(player) || !func_95(player, 0) || bParam3 && !func_107(iParam1))
	{
		if (bParam2)
		{
			if (func_251(iParam1, true) != 0)
			{
				player = func_414(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, bParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(player) && func_95(player, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		func_415(iParam1, player);
		func_416(iParam1, bParam13, bParam14, true);
		return player;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}

	return 0;
}

BOOL func_314(Ped pedParam0, var uParam1) // Position - 0xD609 Hash - 0x7126C33E ^0x1B005C67
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->[i /*9*/].f_6))
		{
			uParam1->[i /*9*/].f_6 = pedParam0;
			return true;
		}
	}

	return false;
}

char* func_315(int iParam0) // Position - 0xD644 Hash - 0x5029FA90 ^0xE476B86B
{
	switch (iParam0)
	{
		case 2:
			return "script@vignette@VIG@vig_javier_find_arthur_1@ACTION";
	
		case 3:
			return "script@vignette@VIG@vig_bill_find_arthur_1@action";
	
		case 7:
			if (func_150())
				return "script@vignette@VIG@vig_charles_find_arthur_1@ACTION";
			else
				return "script@vignette@VIG@vig_charles_find_john_1@ACTION";
			break;
	}

	return "";
}

char* func_316(int iParam0) // Position - 0xD692 Hash - 0x5029FA90 ^0x14450A14
{
	switch (iParam0)
	{
		case 2:
			return "script@vignette@VIG@vig_javier_find_arthur_1@Action_Positive_Response";
	
		case 3:
			return "script@vignette@VIG@vig_bill_find_arthur_1@positive_response";
	
		case 7:
			if (func_150())
				return "script@vignette@VIG@vig_charles_find_arthur_1@POSITIVE_ANSWER";
			else
				return "script@vignette@VIG@vig_charles_find_john_1@POSITIVE_RESPONSE";
			break;
	}

	return "";
}

char* func_317(int iParam0) // Position - 0xD6E0 Hash - 0x5029FA90 ^0x647D1A12
{
	switch (iParam0)
	{
		case 2:
			return "script@vignette@VIG@vig_javier_find_arthur_1@Action_Negative_Response";
	
		case 3:
			return "script@vignette@VIG@vig_bill_find_arthur_1@negative_response";
	
		case 7:
			if (func_150())
				return "script@vignette@VIG@vig_charles_find_arthur_1@NEGATIVE_ANSWER";
			else
				return "script@vignette@VIG@vig_charles_find_john_1@NEGATIVE_RESPONSE";
			break;
	}

	return "";
}

const char* func_318(int iParam0) // Position - 0xD72E Hash - 0x5029FA90 ^0x8A945AC0
{
	switch (iParam0)
	{
		case 2:
			return "VJVA1AU";
	
		case 3:
			return "VFBL1AU";
	
		case 7:
			if (func_150())
				return "VFCH1AU";
			else
				return "VCFJ1AU";
			break;
	}

	return "";
}

int func_319(int iParam0) // Position - 0xD77C Hash - 0x9AB9F96F ^0x9AB9F96F
{
	int num;

	if (iParam0 == -1)
		num = func_417(true);
	else
		num = func_418(iParam0);

	return num;
}

void func_320(int iParam0, int iParam1) // Position - 0xD79E Hash - 0xE9433ECB ^0xE9433ECB
{
	int num;
	int num2;
	int num3;

	if (iParam1 != 0)
	{
		num = func_419(iParam1);
		num2 = 17 + num;
		num3 = func_420(iParam0, num2);
	
		if (num3 < 0)
			return;
	
		Global_17504.f_2205[num3 /*2*/] = Global_17504.f_2205[num3 /*2*/] + 1;
	}

	return;
}

int func_321() // Position - 0xD7E4 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

void func_322(int iParam0, int iParam1) // Position - 0xD7F2 Hash - 0x15F195C0 ^0x37AF2A09
{
	int num;

	if (iParam1 != -1 && !func_53(iParam0, 8192))
	{
		num = func_420(iParam0, iParam1);
	
		if (num < 0)
			return;
	
		Global_17504.f_2205[num /*2*/] = Global_17504.f_2205[num /*2*/] + 1;
	}

	return;
}

void func_323(int iParam0, int iParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0xD839 Hash - 0x191FF204 ^0x191FF204
{
	float num;
	float num2;
	float num3;
	float num4;

	num = 0f;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;

	switch (iParam1)
	{
		case 0:
			num2 = 30f;
			break;
	
		case 1:
			num3 = 1f;
			break;
	
		case 2:
			num3 = 2f;
			break;
	
		case 3:
			num3 = 3f;
			break;
	
		case 4:
			num3 = 4f;
			break;
	
		case 5:
			num3 = 6f;
			break;
	
		case 6:
			num3 = 8f;
			break;
	
		case 7:
			num3 = 12f;
			break;
	
		case 8:
			num4 = 1f;
			break;
	
		case 9:
			num4 = 2f;
			break;
	
		case 10:
			num4 = 3f;
			break;
	
		case 11:
			num4 = 4f;
			break;
	
		case 12:
			num4 = 5f;
			break;
	
		case 13:
			num4 = 6f;
			break;
	
		case 14:
			num4 = 7f;
			break;
	
		case 15:
			num4 = 8f;
			break;
	
		case 16:
			num4 = 10f;
			break;
	
		case 17:
			num4 = 12f;
			break;
	
		case 18:
			num4 = 15f;
			break;
	
		case 19:
			num4 = 18f;
			break;
	
		case 20:
			num4 = 20f;
			break;
	
		case 21:
			num4 = 25f;
			break;
	
		case 22:
			num3 = -1f;
			break;
	
		case 23:
			num4 = -5f;
			break;
	
		case 24:
			num4 = -7f;
			break;
	
		case 25:
			num4 = -8f;
			break;
	}

	func_267(iParam0, bParam3, BUILTIN::ROUND(num * fParam2), BUILTIN::ROUND(num2 * fParam2), BUILTIN::ROUND(num3 * fParam2), BUILTIN::ROUND(num4 * fParam2), bParam4, true);
	return;
}

void func_324(int iParam0, BOOL bParam1) // Position - 0xD9F0 Hash - 0xB8C09A38 ^0xD807977
{
	int num;

	num = 1;

	if (bParam1)
		num = 3;

	if (func_42(iParam0, 262144))
		if (Global_1392135.f_3 == -1)
			func_421(262144, num, 0, true);

	if (func_42(iParam0, 128))
		func_421(128, num, 0, true);
	else if (func_42(iParam0, 524288))
		func_421(524288, num, 0, true);
	else if (func_42(iParam0, 536870912))
		func_421(536870912, num, 0, true);
	else if (func_42(iParam0, 4194304))
		func_421(4194304, num, 0, true);
	else if (func_42(iParam0, 8388608))
		func_421(8388608, num, 0, true);

	return;
}

void func_325(int iParam0) // Position - 0xDAAD Hash - 0x35E7E2B5 ^0x4442269A
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
	return;
}

int func_326(BOOL bParam0) // Position - 0xDAC9 Hash - 0x595E3BEF ^0x853F0831
{
	if (!bParam0 && func_422(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

int func_327() // Position - 0xDAF6 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1310750.f_16037;
}

BOOL func_328(int iParam0) // Position - 0xDB05 Hash - 0xE4DA9E55 ^0x745EA523
{
	if (!func_142(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_329(int iParam0) // Position - 0xDB25 Hash - 0xA37733A1 ^0x23C2C6AE
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_142(Global_1310750.f_13321[iParam0 /*9*/]))
		return;

	num = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[num /*111*/].f_48 = 0;
	func_423(iParam0);
	Global_1310750.f_16037 = Global_1310750.f_16037 - 1;
	return;
}

void func_330(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xDB8E Hash - 0xB8B96884 ^0x900FE21
{
	int value;

	func_424(&Global_1393447, 1);
	func_425();
	func_426();
	func_427(BUILTIN::TO_FLOAT(200) / 3f);

	if (iParam0 != 8)
	{
		Global_1392135.f_54 = func_385() / 1000;
	
		if (Global_1392135.f_1 & 4 != 0)
			Global_1392135.f_1 = Global_1392135.f_1 - Global_1392135.f_1 & 4;
	
		func_428();
	
		if (iParam1 == -1)
		{
			if (func_2(iParam0, 1))
			{
				func_421(16777216, 2, 0, true);
				value = BUILTIN::FLOOR(240f);
			}
			else if (func_2(iParam0, 2))
			{
				func_421(16777216, 0, 0, true);
				value = BUILTIN::FLOOR(60f);
			}
			else if (func_2(iParam0, 4))
			{
				func_421(16777216, 5, 0, true);
				value = BUILTIN::FLOOR(900f);
			}
		
			Global_1392135.f_4 = Global_1392135.f_54 + value;
		}
		else
		{
			func_429(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = Global_1392135.f_54 + iParam2 + (iParam3 * 60) + (iParam4 * 3600);
		}
	
		func_430(BUILTIN::TO_FLOAT(value), true, false);
	}
	else
	{
		func_430(BUILTIN::TO_FLOAT(200) / 3f, true, false);
	}

	return;
}

BOOL func_331(BOOL bParam0, int iParam1) // Position - 0xDCB5 Hash - 0xBAC14BAA ^0xBAC14BAA
{
	return Global_40.f_9571[iParam1 /*10*/] && bParam0 != false;
}

void func_332(int iParam0, int iParam1) // Position - 0xDCCC Hash - 0x68C00EA5 ^0x4607FFAD
{
	Global_1392050[iParam1 /*14*/].f_1 = Global_1392050[iParam1 /*14*/].f_1 - Global_1392050[iParam1 /*14*/].f_1 && iParam0;
	return;
}

void func_333(BOOL bParam0, int iParam1) // Position - 0xDCF6 Hash - 0x5413482E ^0x5413482E
{
	Global_40.f_9571[iParam1 /*10*/] = Global_40.f_9571[iParam1 /*10*/] || bParam0;
	return;
}

int func_334(int iParam0) // Position - 0xDD15 Hash - 0xD3B1E9F ^0x62D04092
{
	switch (iParam0)
	{
		case -1:
			return 0;
	
		case 0:
			return joaat("gang_odriscoll");
	
		case 1:
			return joaat("gang_inbred");
	
		case 2:
			return joaat("gang_exconfed");
	
		case 3:
			return joaat("gang_savages");
	
		case 4:
			return joaat("gang_ranchers");
	
		case 5:
			return joaat("gang_banditos");
	
		default:
		
	}

	return 0;
}

BOOL func_335(Hash* phParam0) // Position - 0xDD84 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(phParam0) && phParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_336() // Position - 0xDD9F Hash - 0xD633F8EC ^0x62F958FD
{
	return Global_1935630.f_44 == joaat("weapon_kit_binoculars") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE();
}

BOOL func_337(var uParam0, float fParam1, float fParam2, int iParam3) // Position - 0xDDBC Hash - 0xFF2AE664 ^0x8523ACBA
{
	if (fParam1 > fParam2)
		return false;

	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
		return false;

	return true;
}

BOOL func_338(var uParam0, float fParam1, float fParam2, int iParam3) // Position - 0xDDE1 Hash - 0x4CB19BDC ^0x782951FA
{
	if (func_337(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
			uParam0->f_8 = func_339() - 0.02f;
	
		return true;
	}

	uParam0->f_8 = 0f;
	return false;
}

float func_339() // Position - 0xDE1C Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_340(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xDE4E Hash - 0xC9655EC3 ^0x88C9AFE1
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

int func_341() // Position - 0xDEEC Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_342(int iParam0) // Position - 0xDEF8 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

BOOL func_343(int iParam0) // Position - 0xDF0B Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("OVERCAST"):
		case joaat("highpressure"):
		case joaat("overcastdark"):
		case joaat("clouds"):
		case joaat("Misty"):
		case joaat("SUNNY"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_344(int iParam0) // Position - 0xDF44 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("Shower"):
		case joaat("sleet"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("Thunderstorm"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_345(int iParam0) // Position - 0xDF89 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("snow"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("whiteout"):
		case joaat("snowclearing"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_346(int iParam0) // Position - 0xDFBC Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("Fog"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_347(int iParam0) // Position - 0xDFD7 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("Misty"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_348(int iParam0) // Position - 0xDFFE Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("snowclearing"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_349(int iParam0) // Position - 0xE01F Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("sandstorm"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_350(BOOL bParam0, var uParam1, var uParam2) // Position - 0xE03A Hash - 0x2A9340EF ^0xAD765E32
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

BOOL func_351(int iParam0) // Position - 0xE101 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

BOOL func_352(int iParam0) // Position - 0xE115 Hash - 0x169E8D3F ^0x169E8D3F
{
	return func_42(iParam0, Global_1310750.f_16072 | 64);
}

int func_353(Interior inParam0) // Position - 0xE12D Hash - 0xE90CFCF7 ^0xD86E30BD
{
	var position;
	int nameHash;

	if (INTERIOR::IS_VALID_INTERIOR(inParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(inParam0, &position, &nameHash);
	
		switch (nameHash)
		{
			case joaat("l_14_cave_int"):
			case joaat("gap_mine_int"):
			case joaat("mil_mine_cave_int"):
			case joaat("m05_bearcave_main"):
			case joaat("elh_seacaves_int"):
			case joaat("bea_01_int"):
			case joaat("agu_fus_cave_int"):
			case 1633500362:
				return 1;
		}
	}

	return 0;
}

int func_354(Interior inParam0) // Position - 0xE188 Hash - 0xE90CFCF7 ^0xD86E30BD
{
	var position;
	int nameHash;

	if (INTERIOR::IS_VALID_INTERIOR(inParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(inParam0, &position, &nameHash);
	
		switch (nameHash)
		{
			case joaat("q0304_tunnel_ent"):
			case joaat("j_10p_tunnel_1a_int"):
			case joaat("bac_tunnelcurve_int"):
			case joaat("q0304_tunnel_int"):
			case joaat("l_08_train_tunnel2_int"):
			case joaat("bac_tunnelexit_int"):
			case joaat("bac_tunnelent_int"):
			case joaat("j_14_tunnel01_int"):
			case 653987431:
			case joaat("bac_tunnel_int"):
			case joaat("hea_tunnel_01"):
			case joaat("hea_tunnel_02"):
			case joaat("q0304_tunnel_exit"):
			case joaat("j_16_tunnel_int"):
				return 1;
		}
	}

	return 0;
}

BOOL func_355(var uParam0, float fParam1) // Position - 0xE207 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_214(uParam0))
		return false;

	if (func_431(uParam0) > fParam1)
		return true;

	return false;
}

BOOL func_356(int iParam0) // Position - 0xE22E Hash - 0xF7D08AFF ^0x65644DC
{
	return Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40)) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0;
}

BOOL func_357(int iParam0) // Position - 0xE269 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_358(BOOL bParam0) // Position - 0xE2A7 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_359(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0xE2BA Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_360(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0xE2E3 Hash - 0xF6D5211C ^0xAA9A46C4
{
	ENTITY::IS_ENTITY_DEAD(pedParam0);

	if (iParam2 == -1)
		if (!PED::IS_PED_A_PLAYER(pedParam1))
			iParam2 = 0;
		else
			iParam2 = 1;

	PED::_0xAAC0EE3B4999ABB5(pedParam0, pedParam1);
	PED::_0xF634E2892220EF34(pedParam0, iParam2);
	return;
}

void func_361(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xE31D Hash - 0x25DC51B ^0x2C9FE3CE
{
	if (bParam5)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_JUMP"), false);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK2"), false);
	}

	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}

	if (bParam3)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_GRAPPLE"), false);
	
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}

	if (bParam4)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_DUCK"), false);

	func_432(false);

	if (bParam1)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);

	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		}
	
		if (bParam6)
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
				PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
	}

	return;
}

void func_362(Ped pedParam0) // Position - 0xE453 Hash - 0x2537B11B ^0x8DF48C2D
{
	func_153(pedParam0, false);
	iLocal_23 = func_433("CAMP_REM_RIDE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824, 0, 1065353216, false, 3, joaat("SHORT_TIMED_EVENT"), false);
	iLocal_24 = func_433("CAMP_REM_STAY", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824, 0, 1065353216, false, 3, joaat("SHORT_TIMED_EVENT"), false);
	func_434(iLocal_23, pedParam0, 0, true, -1);
	func_434(iLocal_24, pedParam0, 0, true, -1);
	MISC::REGISTER_INTERACTION_LOCKON_PROMPT(pedParam0, "", 20f, 0, 0, 0, 0, 0, false, -1);
	return;
}

BOOL func_363(int iParam0, BOOL bParam1) // Position - 0xE4E4 Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_25(iParam0))
		return false;

	num = func_110(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[num /*18*/].f_3);
}

BOOL func_364(int iParam0, int iParam1) // Position - 0xE517 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_365(int iParam0) // Position - 0xE526 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

Ped func_366(int iParam0) // Position - 0xE53F Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_365(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_367(int iParam0) // Position - 0xE572 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_365(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

float func_368(int iParam0) // Position - 0xE5A6 Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_365(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_369(float fParam0, Any anParam1, float fParam2) // Position - 0xE5DC Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

BOOL func_370(Ped pedParam0, BOOL bParam1) // Position - 0xE5F1 Hash - 0xDF64D629 ^0x407E21C2
{
	if (func_117(pedParam0, 0, true))
		return AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedParam0) || bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(pedParam0);

	return false;
}

void func_371(var uParam0, float fParam1) // Position - 0xE621 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_339() - fParam1;
	func_435(uParam0, 1);
	func_436(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

Hash func_372(int iParam0) // Position - 0xE647 Hash - 0xBA965109 ^0xCB1D208B
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

void func_373(int iParam0, Ped pedParam1) // Position - 0xE823 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_437(pedParam1);

	return;
}

int func_374(int iParam0) // Position - 0xE83D Hash - 0xEB890713 ^0xB40CD388
{
	int num;
	int i;

	num = 0;

	if (!func_105(iParam0))
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

	if (!func_105(iParam0))
	{
		if (num != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return num;
}

PersChar func_375(int iParam0) // Position - 0xE91E Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_105(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		persCharHash = func_251(iParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[iParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[iParam0 /*60*/].f_7);
	
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}

	return Global_1360165[iParam0 /*1157*/].f_126;
}

BOOL func_376(int iParam0, int iParam1) // Position - 0xE9BA Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_377() // Position - 0xE9DB Hash - 0x61914A97 ^0x61914A97
{
	func_438(23);
	return;
}

void func_378(int iParam0) // Position - 0xE9E9 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1310750.f_16035 = Global_1310750.f_16035 || iParam0;
	return;
}

int func_379(var uParam0) // Position - 0xEA02 Hash - 0x807355BA ^0xBFAB5B0E
{
	if (uParam0->f_46 && uParam0->f_48)
		if (uParam0->f_5.f_16 != 16384)
			return 1;

	return 0;
}

void func_380(var uParam0) // Position - 0xEA2B Hash - 0x3755F799 ^0x3755F799
{
	int num;

	num = func_439(uParam0);

	if (num != 0)
		func_440(-1, 24, 0, num);

	return;
}

void func_381(int iParam0, int iParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0xEA4B Hash - 0x89238B4B ^0x5A516E98
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
		return;

	if (Global_17504.f_42[iParam0 /*8*/] == 0)
		func_442(func_441(joaat("unique_beats_completed")), 1);

	Global_17504.f_4 = Global_17504.f_4 + 1;
	Global_17504.f_42[iParam0 /*8*/] = Global_17504.f_42[iParam0 /*8*/] + 1;
	Global_1310750[iParam0 /*111*/].f_110 = Global_1310750[iParam0 /*111*/].f_110 | 8;

	if (func_42(iParam0, 2))
		func_443(iParam0, func_319(iParam3));

	if (func_42(iParam0, 1))
	{
		if (iParam4 == -1)
			iParam4 = func_321();
	
		func_444(iParam0, iParam4);
	}

	if (iParam1 >= 0 && !func_53(iParam0, 65536))
	{
		func_445(iParam0, iParam1);
		func_446(iParam0, func_127(iParam0, iParam1));
		func_378(128);
	}

	func_323(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216, false, false);
	func_324(iParam0, true);

	if (!bParam2)
	{
		func_378(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_447(524288);
	}

	if (func_448(iParam0) != 0)
		if (Global_17504.f_42[iParam0 /*8*/] >= func_448(iParam0))
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;

	return;
}

void func_382(BOOL bParam0, int iParam1) // Position - 0xEB97 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_449(&Global_0, 8);

	if (!func_450() || func_269() != -1)
		return;

	func_449(&Global_0, 1);
	return;
}

int func_383(Volume volParam0, BOOL bParam1) // Position - 0xEBDD Hash - 0xEA796703 ^0x695D7925
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

void func_384(int iParam0) // Position - 0xEC45 Hash - 0x2BEB9110 ^0x79428EC6
{
	Global_17504.f_2 = Global_17504.f_2 + 1;
	Global_17504.f_42[iParam0 /*8*/].f_3 = Global_17504.f_42[iParam0 /*8*/].f_3 + 1;
	Global_1310750[iParam0 /*111*/].f_110 = Global_1310750[iParam0 /*111*/].f_110 | 2;
	return;
}

int func_385() // Position - 0xEC87 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

float func_386(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xECA5 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

BOOL func_387(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0xECCD Hash - 0x3F4C1B1 ^0x898E9E6F
{
	var unk;
	var unk6;

	if (_IS_NULL_VECTOR(uParam0))
		return false;

	unk = 4;
	unk[0] = iParam4;
	unk6 = 4;
	unk6[0] = 16384;
	unk6[1] = iParam5;

	if (VOLUME::_0x870E9981ED27C815(uParam0, &unk, &unk6, iParam3))
		return true;

	return false;
}

BOOL func_388(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5) // Position - 0xED1A Hash - 0x43EBD5CA ^0x361FC829
{
	if (_IS_NULL_VECTOR(vParam0))
		return false;

	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, fParam3, iParam5, iParam4, 16384);
}

BOOL func_389(var uParam0, var uParam1, var uParam2) // Position - 0xED42 Hash - 0x69B14B2C ^0x69B14B2C
{
	int i;

	for (i = 0; i < Global_1310750.f_16043; i = i + 1)
	{
		if (!_IS_NULL_VECTOR(Global_1310750.f_16043[i /*3*/]))
			if (func_84(uParam0, Global_1310750.f_16043[i /*3*/]) < 2500f)
				return true;
	}

	return false;
}

BOOL func_390() // Position - 0xED9A Hash - 0x9517651C ^0x9517651C
{
	int num;
	int num2;

	num = func_451(func_183());

	if (num == 8)
	{
		num2 = func_184(func_183());
	
		if (func_186(Global_36, num2))
			return false;
	}

	if (func_452(func_417(false)))
		return false;

	if (func_453())
		return false;

	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

float func_391(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xEDFA Hash - 0x596BEA29 ^0x5FBCDBE5
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

void func_392(var uParam0, int iParam1) // Position - 0xEE1B Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_393(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xEE30 Hash - 0xEC801E93 ^0x8D937378
{
	int num;
	var unk;
	int endRange;
	int num2;
	BOOL flag;
	int i;
	int randomIntInRange;

	if (!func_105(iParam0))
		return 0;

	num = CLOCK::GET_CLOCK_HOURS() + 1;

	if (num == 25)
		num = 0;

	unk = 5;
	endRange = 0;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_454(Global_1835011[4 /*74*/].f_1, true))
						unk[0] = -695701225;
					else
						unk[0] = 404503428;
					break;
			
				default:
					unk[0] = 178615350;
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					unk[3] = 1818898449;
					endRange = 4;
					break;
			
				case 1:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					endRange = 3;
					break;
			
				case 2:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = 1818898449;
					endRange = 3;
					break;
			
				case 3:
					if (func_455(num, 9, 11))
					{
						unk[0] = 283037683;
					}
					else
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						unk[2] = -1862464078;
						endRange = 3;
					}
				
					if (!bParam2)
						unk[0] = -268604689;
					break;
			
				case 4:
					unk[0] = -268604689;
					break;
			
				case 5:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 6:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					unk[3] = 1818898449;
					endRange = 4;
					break;
			
				case 7:
					unk[0] = -268604689;
					unk[0] = -1632589543;
					unk[1] = 1818898449;
					endRange = 3;
					break;
			
				case 8:
					unk[0] = -268604689;
					break;
			
				case 9:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 10:
					if (func_454(Global_1347702[63 /*49*/].f_15, true) || func_395(Global_1347702[63 /*49*/].f_15))
						unk[0] = -268604689;
					else
						unk[0] = -310473775;
					break;
			
				case 11:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 13:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					endRange = 3;
					break;
			
				case 14:
					unk[0] = -268604689;
					break;
			
				case 15:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 16:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 17:
					if (func_455(num, 9, 12))
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						unk[2] = -1862464078;
						endRange = 3;
					}
					else
					{
						unk[0] = -268604689;
					}
					break;
			
				case 18:
					if (!func_454(Global_1835011[14 /*74*/].f_1, true))
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						endRange = 2;
					}
					else if (func_239(18, 134217728, true))
					{
						unk[0] = 961676983;
					}
					else
					{
						unk[0] = -1587546924;
					}
					break;
			
				case 19:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 20:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 21:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 22:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					endRange = 3;
					break;
			
				case 23:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -23947011;
					endRange = 3;
					break;
			
				default:
					unk[0] = -268604689;
					break;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 1:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 2:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 3:
					if (func_455(num, 9, 11))
					{
						unk[0] = 283037683;
					}
					else
					{
						unk[0] = -922193456;
						unk[1] = -2040275819;
						unk[2] = -1114682645;
						unk[3] = -1414977761;
						endRange = 4;
					}
				
					if (!bParam2)
						unk[0] = -922193456;
					break;
			
				case 4:
					unk[0] = -922193456;
					break;
			
				case 5:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 6:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 7:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 8:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 283037683;
					unk[3] = 1744281750;
					endRange = 4;
					break;
			
				case 9:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					unk[4] = 1744281750;
					endRange = 5;
					break;
			
				case 10:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 11:
					if (func_454(Global_1347702[134 /*49*/].f_15, true) || func_395(Global_1347702[134 /*49*/].f_15))
					{
						unk[0] = -2040275819;
						unk[1] = 1205492208;
						endRange = 2;
					}
					else
					{
						unk[0] = -922193456;
					}
					break;
			
				case 13:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 283037683;
					unk[3] = 1744281750;
					endRange = 4;
					break;
			
				case 14:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 15:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 16:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 17:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 18:
					unk[0] = -922193456;
					break;
			
				case 19:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 20:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 21:
					unk[0] = -922193456;
					unk[1] = 1744281750;
					endRange = 2;
					break;
			
				case 22:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 23:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 1744281750;
					endRange = 3;
					break;
			
				case 26:
					unk[0] = -268604689;
					break;
			
				default:
					unk[0] = -922193456;
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_454(Global_1835011[38 /*74*/].f_1, true))
						unk[0] = -1559986688;
					else
						unk[0] = -1874208704;
					break;
			
				default:
					unk[0] = 1593315648;
					break;
			}
			break;
	
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 1:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 2:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 3:
					if (func_455(num, 9, 11))
					{
						unk[0] = 283037683;
					}
					else
					{
						unk[0] = -922193456;
						unk[1] = -2040275819;
						unk[2] = -1114682645;
						unk[3] = -1414977761;
						endRange = 4;
					}
				
					if (!bParam2)
						unk[0] = -922193456;
					break;
			
				case 4:
					unk[0] = -922193456;
					break;
			
				case 6:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 7:
					unk[0] = 1295334688;
					endRange = 1;
					break;
			
				case 11:
					unk[0] = -2051275045;
					break;
			
				case 13:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 283037683;
					unk[3] = 1744281750;
					endRange = 4;
					break;
			
				case 14:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 15:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 16:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 17:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 18:
					unk[0] = -922193456;
					break;
			
				case 19:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 20:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 21:
					unk[0] = -922193456;
					unk[1] = 1744281750;
					endRange = 2;
					break;
			
				case 22:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 23:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 1744281750;
					endRange = 3;
					break;
			
				case 26:
					unk[0] = -268604689;
					break;
			
				default:
					unk[0] = -922193456;
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					if (func_456(joaat("CSTAG_FLOW_MAR8_POST"), true) && !func_454(Global_1347702[1 /*49*/].f_15, true))
						unk[0] = -1155031950;
					else
						unk[0] = -1341683964;
					break;
			
				case 13:
					unk[0] = -1341683964;
					unk[1] = 876797088;
					endRange = 2;
					break;
			
				case 14:
					unk[0] = -426171916;
					unk[1] = 1484386316;
					unk[2] = 1254970547;
					endRange = 3;
					break;
			
				default:
					unk[0] = -1341683964;
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 4:
					unk[0] = -1341683964;
					unk[1] = 867156718;
					endRange = 2;
					break;
			
				case 7:
					unk[0] = -1341683964;
					unk[1] = 1484386316;
					endRange = 2;
					break;
			
				case 13:
					unk[0] = -1341683964;
					unk[1] = 876797088;
					unk[2] = 1484386316;
					endRange = 3;
					break;
			
				case 14:
					unk[0] = -1092189504;
					unk[1] = 80515440;
					endRange = 2;
					break;
			
				default:
					unk[0] = -1341683964;
					break;
			}
			break;
	}

	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_245(iParam0)))
	{
		for (i = 0; i < endRange; i = i + 1)
		{
			if (unk[i] == Global_40.f_4942[iParam0 /*60*/].f_3)
			{
				flag = true;
				num2 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
		}
	}

	if (!flag)
	{
		randomIntInRange = 0;
	
		if (endRange > 0 && bParam2)
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	
		num2 = unk[randomIntInRange];
	}

	if (!func_305(iParam0, num2))
		num2 = Global_40.f_4942[iParam0 /*60*/].f_3;

	return num2;
}

BOOL func_394(int iParam0) // Position - 0xFC18 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_457(iParam0);
	}

	if (num == 1)
		return true;

	if (num == 2)
		return true;

	return false;
}

BOOL func_395(int iParam0) // Position - 0xFC83 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_458(iParam0);
	return num == 3 || num == 4;
}

BOOL func_396(int iParam0) // Position - 0xFCA1 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_397(int iParam0, BOOL bParam1) // Position - 0xFCCE Hash - 0xAA2527A1 ^0x8C2C75CE
{
	int num;

	if (!func_105(iParam0))
		return false;

	if (!bParam1)
		if (func_87(iParam0) || func_97(iParam0, 44, true))
			return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
		return false;

	num = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
	return num == joaat("SLEEP");
}

struct<7> func_398(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, int iParam8, BOOL bParam9) // Position - 0xFD57 Hash - 0xDA7D22BD ^0xF82EFD7F
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	num.f_3 = { uParam2 };
	num.f_2 = iParam8;
	num.f_6 = 0;

	if (bParam5)
		MISC::SET_BIT(&(num.f_6), 0);

	if (bParam6)
		MISC::SET_BIT(&(num.f_6), 1);

	if (bParam7)
		MISC::SET_BIT(&(num.f_6), 2);

	if (bParam9)
		MISC::SET_BIT(&(num.f_6), 3);

	return num;
}

void func_399(int iParam0, BOOL bParam1) // Position - 0xFDBA Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_105(iParam0))
		return;

	ped = func_245(iParam0);
	func_459(ped);
	func_88(iParam0, 60, true);

	if (bParam1)
		func_460(iParam0);

	return;
}

void func_400(int iParam0, BOOL bParam1) // Position - 0xFDF1 Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_105(iParam0))
		return;

	ped = func_245(iParam0);
	func_461(ped);
	func_94(iParam0, 60, true);

	if (bParam1)
		func_462(iParam0);

	return;
}

void func_401(int iParam0, BOOL bParam1) // Position - 0xFE28 Hash - 0xD602D5AC ^0xD602D5AC
{
	Ped ped;

	if (!func_105(iParam0))
		return;

	ped = func_245(iParam0);
	func_463(ped);

	if (iParam0 == 14)
		func_464(ped);

	func_88(iParam0, 61, true);

	if (bParam1)
		func_465(iParam0);

	return;
}

void func_402(int iParam0, BOOL bParam1) // Position - 0xFE6C Hash - 0x1364490 ^0x1364490
{
	Ped ped;

	if (!func_105(iParam0))
		return;

	ped = func_245(iParam0);
	func_466(ped);
	func_94(iParam0, 61, true);

	if (bParam1)
		func_467(iParam0);

	return;
}

BOOL func_403(int iParam0, int iParam1) // Position - 0xFEA3 Hash - 0xE0095B63 ^0x929CAC47
{
	int num;
	int offset;

	if (!func_105(iParam0))
		return false;

	func_468(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[num], offset);
}

BOOL func_404(int iParam0) // Position - 0xFED9 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

Hash func_405(int iParam0, int iParam1) // Position - 0xFEEC Hash - 0xEA82FE59 ^0xEA82FE59
{
	int num;

	switch (iParam0)
	{
		case -2051275045:
			return -306710010;
	
		case -2040275819:
			return 464906090;
	
		case -1874208704:
			return 1680324116;
	
		case -1862464078:
			return 1895628185;
	
		case -1692022104:
			return -1851470579;
	
		case -1684458716:
			return 1976273473;
	
		case -1678882891:
			return -1638703055;
	
		case -1668922931:
			return -1915831038;
	
		case -1648322231:
			return 1074183062;
	
		case -1642335258:
			return -1491647079;
	
		case -1632589543:
			return 1052055818;
	
		case -1587546924:
			return -1303789247;
	
		case -1559986688:
			return 174754238;
	
		case -1532979576:
			return 1391951221;
	
		case -1414977761:
			return 1059434053;
	
		case -1394723994:
			return -1857650992;
	
		case -1341683964:
			return 1689938120;
	
		case -1335291723:
			return -1120526485;
	
		case -1268239471:
			return -1832874334;
	
		case -1248623443:
			return -1437962122;
	
		case -1205468859:
			return -757536090;
	
		case -1155031950:
			return 1883650185;
	
		case -1114682645:
			return 744097966;
	
		case -1092189504:
			return 389057251;
	
		case -1065026089:
			return 1087308308;
	
		case -973332710:
			return -2045878709;
	
		case -946772361:
			return 646599895;
	
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return joaat("META_OUTFIT_DEFAULT");
			
				default:
				
			}
		
			return joaat("META_OUTFIT_WARM_WEATHER");
	
		case -695701225:
			return -1090160065;
	
		case -571427255:
			return -251280159;
	
		case -481967001:
			return 1833893952;
	
		case -445211559:
			return -757536090;
	
		case -433615745:
			return 643643053;
	
		case -426171916:
			return joaat("META_OUTFIT_DEFAULT");
	
		case -310473775:
			return -877585857;
	
		case -301101630:
			return -1187204983;
	
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
	
		case -193269670:
			return -1774801049;
	
		case -23947011:
			return -456769142;
	
		case 6418928:
			return -211106360;
	
		case 80515440:
			return -2137653778;
	
		case 178615350:
			return joaat("META_OUTFIT_COLD_WEATHER");
	
		case 283037683:
			return 1996046145;
	
		case 296923297:
			num = func_469(296923297, iParam1);
			return func_470(num);
	
		case 350498312:
			return 1959714099;
	
		case 404503428:
			return -1704514526;
	
		case 431390894:
			return -20643141;
	
		case 513932985:
			return 505715365;
	
		case 707545953:
			return 890352471;
	
		case 713940276:
			return -1949892659;
	
		case 777603945:
			return joaat("META_OUTFIT_KIDNAPPED");
	
		case 837028314:
			return -20984612;
	
		case 867156718:
			return 241911854;
	
		case 876535472:
			return -1916145078;
	
		case 876797088:
			return 1309207681;
	
		case 928493661:
			return 861275228;
	
		case 961676983:
			return -1527307534;
	
		case 977450639:
			return 2111449038;
	
		case 1018353621:
			return 114272443;
	
		case 1046468203:
			return 393090546;
	
		case 1071744295:
			return -2065784734;
	
		case 1199580439:
			return -1443192745;
	
		case 1200878026:
			return 1560123389;
	
		case 1205492208:
			return 1598276604;
	
		case 1237718549:
			num = func_469(1237718549, iParam1);
			return func_470(num);
	
		case 1254970547:
			return -211106360;
	
		case 1295334688:
			return 869636257;
	
		case 1300659195:
			return -309158751;
	
		case 1484386316:
			return -800489594;
	
		case 1495063555:
			return -339275545;
	
		case 1593315648:
			return 989578874;
	
		case 1658153743:
			return -2072429185;
	
		case 1744281750:
			return joaat("META_OUTFIT_WARM_WEATHER_CASUAL");
	
		case 1818898449:
			return 30596609;
	
		case 1842975347:
			return 491764525;
	
		case 1901494236:
			return 1245083301;
	
		case 1950972546:
			return -1699183538;
	
		case 2062813606:
			return 1709174532;
	
		case 2094043703:
			return -1395382793;
	}

	return joaat("META_OUTFIT_DEFAULT");
}

BOOL func_406(Ped pedParam0, Hash hParam1) // Position - 0x1049B Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_407(Ped pedParam0, Hash hParam1) // Position - 0x104C9 Hash - 0xA54F3032 ^0x8F607E97
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

BOOL func_408(Ped pedParam0, Hash hParam1) // Position - 0x1051A Hash - 0xA54F3032 ^0x8F607E97
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_406(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_409(Ped pedParam0) // Position - 0x1058C Hash - 0x446F1BDD ^0x84123A24
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

void func_410(int iParam0, Ped pedParam1, BOOL bParam2) // Position - 0x105AA Hash - 0xF8298322 ^0x7D3D3E5
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) || ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, joaat("wearable_masks")))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, joaat("wearable_masks"), 1);

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 494009478))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, 494009478, 1);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1 > 0 && func_406(pedParam1, 860729266))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 860729266);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4096 > 0 && func_406(pedParam1, 879715242))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 879715242);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 128 > 0 && func_406(pedParam1, 1606325429))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1606325429);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 256 > 0 && func_406(pedParam1, 1743550585))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1743550585);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 512 > 0 && func_406(pedParam1, 1064646155))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1064646155);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1024 > 0 && func_406(pedParam1, -536694793))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -536694793);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2048 > 0 && func_406(pedParam1, -1304053509))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1304053509);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & -2147483648 > 0 && func_406(pedParam1, 718939204))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 718939204);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 65536 > 0 && func_406(pedParam1, -972364774))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -972364774);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16384 > 0 && func_406(pedParam1, -1100875244))
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, -134124598))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, -134124598, 1);
	
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 2071466316))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, 2071466316, 1);
	
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1100875244);
	}

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 262144 > 0 && func_406(pedParam1, 1153596794))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1153596794);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 524288 > 0 && func_406(pedParam1, 1016389820))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1016389820);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1048576 > 0 && func_406(pedParam1, -726966617))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -726966617);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2097152 > 0 && func_406(pedParam1, 1365901568))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1365901568);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 32768 > 0 && func_406(pedParam1, -1658942149))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1658942149);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 131072 > 0 && func_406(pedParam1, -1980913856))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1980913856);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4194304 > 0 && func_406(pedParam1, 491764525))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 491764525);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8388608 > 0 && func_406(pedParam1, -76015264))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -76015264);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16777216 > 0 && func_406(pedParam1, 622113465))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 622113465);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 33554432 > 0 && func_406(pedParam1, 781533162))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 781533162);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 67108864 > 0 && func_406(pedParam1, -271415321))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -271415321);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 134217728 > 0 && func_406(pedParam1, -1683207356))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1683207356);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 268435456 > 0 && func_406(pedParam1, -254794762))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -254794762);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 536870912 > 0 && func_406(pedParam1, 609066278))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 609066278);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1073741824 > 0 && func_406(pedParam1, -1712783565))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1712783565);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8192 > 0 && func_406(pedParam1, 1544915253))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1544915253);

	if (bParam2)
		Global_1360165[iParam0 /*1157*/].f_57 = 1;

	return;
}

void func_411(int iParam0) // Position - 0x10B88 Hash - 0x83966A8E ^0x24FDDDED
{
	func_471(iParam0, 1);
	func_471(iParam0, 128);
	func_471(iParam0, 256);
	func_471(iParam0, 512);
	func_471(iParam0, 1024);
	func_471(iParam0, 2048);
	func_471(iParam0, 4096);
	func_471(iParam0, 65536);
	func_471(iParam0, 16384);
	func_471(iParam0, 262144);
	func_471(iParam0, 524288);
	func_471(iParam0, 1048576);
	func_471(iParam0, 2097152);
	func_471(iParam0, 32768);
	func_471(iParam0, 131072);
	func_471(iParam0, 134217728);
	func_471(iParam0, 1073741824);
	return;
}

void func_412(int iParam0, BOOL bParam1) // Position - 0x10C31 Hash - 0xA7580A6E ^0xAB27A4E0
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		return;

	if (!bParam1)
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);

	return;
}

Hash func_413(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13) // Position - 0x10CA4 Hash - 0xAB9CFACB ^0x8DB6D77C
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
				
					if (func_335(hashKey) && WEAPON::_0xF252A85B8F3F8C58(defaultPedWeaponCollection, hashKey))
						flag = true;
				}
			
				if (!flag)
				{
					weapontypeGroup = WEAPON::GET_WEAPONTYPE_GROUP(weaponHash);
				
					if (weapontypeGroup != 0 && defaultPedWeaponCollection != 0)
					{
						hash = WEAPON::_0x9EEFD670F10656D7(defaultPedWeaponCollection, weapontypeGroup);
					
						if (!Global_43891)
							if (func_335(hash) && hash != weaponHash)
								weaponHash = hash;
						else
							hash == weaponHash;
					}
				}
			}
			break;
	}

	if (func_269() == -1 && !func_472(weaponHash))
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
				if (func_472(joaat("weapon_repeater_carbine")))
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
		if (pedParam0 != Global_35 && func_335(weaponHash))
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
		func_473(weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 752097756, false);
	}
	else if (!bParam13)
	{
		permanentDegradation = 0f;
		func_474(pedParam0, &weaponHash, &permanentDegradation);
		weaponHash = WEAPON::GIVE_WEAPON_TO_PED(pedParam0, weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 1056964608, 1065353216, 752097756, bIgnoreUnlocks, permanentDegradation, false);
	}

	if (pedParam0 != Global_35)
		if (func_475(weaponHash))
			WEAPON::SET_PED_INFINITE_AMMO(pedParam0, bParam3, weaponHash);
	else if (bParam10)
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), weaponHash, bParam4);

	return weaponHash;
}

Player func_414(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x11050 Hash - 0x8208FD10 ^0xFF758839
{
	var unk;
	PersChar persChar;
	var schedule;
	char* str;

	if (!func_105(iParam0))
		return 0;

	unk = { iParam3, iParam4, iParam5 };
	persChar = func_253(iParam0, true);

	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
		
			if (func_95(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_255(iParam0, 3);
			}
			else
			{
				if (!func_476(iParam0) && func_477(iParam0, &schedule))
					PERSCHAR::_SET_PERSCHAR_SCHEDULE(func_251(iParam0, true), &schedule);
			
				func_108(iParam0, 256, false);
				func_255(iParam0, 1);
			}
			break;
	
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(persChar))
					return _INVALID_PLAYER_INDEX();
			
				if (bParam2 && !_IS_NULL_VECTOR(unk))
					PERSCHAR::_0x59C7AD6FEA2AC449(persChar, unk);
				else if (bParam2)
					PERSCHAR::_0xD4B614179BCD0654(persChar);
			
				if (!func_479(iParam0, unk, iParam6, bParam10))
					return _INVALID_PLAYER_INDEX();
			
				if (func_95(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar) != Global_1360165[iParam0 /*1157*/].f_124;
				
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					func_255(iParam0, 2);
				}
			}
			break;
	
		case 2:
			if (!func_95(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_255(iParam0, 1);
				return _INVALID_PLAYER_INDEX();
			}
		
			if (!bParam9 || PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/].f_124))
				func_255(iParam0, 3);
			break;
	
		case 3:
			if (!func_95(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_255(iParam0, 1);
				return _INVALID_PLAYER_INDEX();
			}
		
			if (bParam7)
				if (!func_480(iParam0, Global_1360165[iParam0 /*1157*/].f_124, true))
					return _INVALID_PLAYER_INDEX();
		
			if (bParam2 && !_IS_NULL_VECTOR(unk) && !func_285(unk, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608, true))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
			
				func_60(Global_1360165[iParam0 /*1157*/].f_124, unk, iParam6, 2, 1073741824);
			}
		
			if (bParam1)
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					func_97(iParam0, 39, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
			
				func_88(iParam0, 39, true);
				func_108(iParam0, 8, true);
				func_108(iParam0, 64, false);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
		
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			func_481(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
		
			if (bParam8)
				POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/].f_124, 1);
		
			str = func_483(iParam0, func_482());
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
				PERSCHAR::_0x63AA2B8EB087886A(func_251(iParam0, true), MISC::GET_HASH_KEY(str));
		
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			func_94(iParam0, 40, false);
			func_108(iParam0, 32, false);
			func_255(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}

	return _INVALID_PLAYER_INDEX();
}

void func_415(int iParam0, Player plParam1) // Position - 0x11407 Hash - 0x6B84EB5D ^0xB01B2620
{
	int randomIntInRange;
	int maxAttributePoints;

	switch (iParam0)
	{
		case 0:
		case 6:
			randomIntInRange = 0;
			break;
	
		case 3:
			maxAttributePoints = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(plParam1, 16);
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((float)maxAttributePoints * 0.4f), BUILTIN::ROUND((float)maxAttributePoints * 0.75f));
			break;
	
		default:
			maxAttributePoints = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(plParam1, 16);
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((float)maxAttributePoints * 0.1f), BUILTIN::ROUND((float)maxAttributePoints * 0.4f));
			break;
	}

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(plParam1, 16, randomIntInRange);
	return;
}

void func_416(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x11493 Hash - 0x755A55CB ^0x755A55CB
{
	if (!func_22(iParam0))
		return;

	if (func_251(iParam0, true) == 0)
		return;

	if (bParam3)
		func_484(func_104(iParam0), 1f, false);

	if (bParam1)
		func_460(iParam0);
	else
		func_462(iParam0);

	if (bParam2)
		func_465(iParam0);
	else
		func_467(iParam0);

	return;
}

int func_417(BOOL bParam0) // Position - 0x114EF Hash - 0xDFBCBF0F ^0xDFBCBF0F
{
	int num;

	if (bParam0)
		num = func_485(1, false, false);
	else
		num = func_183();

	return func_418(num);
}

int func_418(int iParam0) // Position - 0x11514 Hash - 0xE69D9203 ^0x5667FA7E
{
	switch (iParam0)
	{
		case 3:
			return 1024;
	
		case 5:
			return 8192;
	
		case 8:
			return 131072;
	
		case 22:
			return 32768;
	
		case 26:
			return 524288;
	
		case 32:
			return 262144;
	
		case 35:
			return 16384;
	
		case 37:
			return 4;
	
		case 38:
			return 8;
	
		case 40:
			return 1;
	
		case 56:
			return 8388608;
	
		case 61:
			return 2048;
	
		case 65:
			return 128;
	
		case 68:
			return 256;
	
		case 69:
			return 512;
	
		case 76:
			return 2097152;
	
		case 78:
			return 2;
	
		case 82:
			return 32;
	
		case 92:
			return 4194304;
	
		case 93:
			return 16;
	
		case 95:
			return 64;
	
		case 105:
			return 65536;
	
		case 110:
			return 4096;
	
		case 115:
			return 1048576;
	
		case 120:
			return 16777216;
	
		default:
		
	}

	return 0;
}

int func_419(int iParam0) // Position - 0x11651 Hash - 0xF81FC77E ^0xDB0C7945
{
	int num;
	int num2;

	num = 0;
	num2 = iParam0;

	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		num = num + 1;
	}

	return num;
}

int func_420(int iParam0, int iParam1) // Position - 0x1167A Hash - 0xCBC1F512 ^0x9659E844
{
	int num;
	int num2;
	int i;

	num = Global_1326862.f_512[iParam1];
	num2 = Global_1326862.f_558[iParam1];

	for (i = num; i <= num2; i = i + 1)
	{
		if (iParam0 == Global_1326862.f_11[i])
			return i;
	}

	return -1;
}

void func_421(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x116C5 Hash - 0xB7DFAC0B ^0xE8A27630
{
	int i;
	int num;

	for (i = 0; i < 120; i = i + 1)
	{
		num = 0;
	
		if (func_275(Global_1310750[i /*111*/], iParam0))
		{
			if (!func_266(i))
				num = 1;
			else if (iParam0 == 16777216)
				if (func_486(i) < func_487(iParam1))
					num = 1;
		
			func_323(i, iParam1, 1f, num || iParam2, bParam3);
		}
	}

	return;
}

BOOL func_422(int iParam0) // Position - 0x11735 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_488(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

void func_423(int iParam0) // Position - 0x11784 Hash - 0x3D0B339A ^0xB87B2B3D
{
	int i;

	if (Global_1310750.f_13321[iParam0 /*9*/] != -1)
		Global_1310750[Global_1310750.f_13321[iParam0 /*9*/] /*111*/].f_48 = 0;

	Global_1310750.f_13321[iParam0 /*9*/] = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_1 = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_2 = { 0f, 0f, 0f };
	Global_1310750.f_13321[iParam0 /*9*/].f_5 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_1310750.f_13321[iParam0 /*9*/].f_6[i] = -1881652455;
	}

	return;
}

void func_424(var uParam0, int iParam1) // Position - 0x11811 Hash - 0x53A96DDB ^0xB6A79257
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

void func_425() // Position - 0x11824 Hash - 0x52492FF9 ^0xA2D9D9EC
{
	int i;

	for (i = 3; i <= 5; i = i + 1)
	{
		if (!func_489(i, 128))
			func_490(i, 4096);
	}

	return;
}

void func_426() // Position - 0x11853 Hash - 0x3868EDBD ^0x9E3E5EA5
{
	int i;

	for (i = 0; i <= 2; i = i + 1)
	{
		if (!func_489(i, 128) && func_489(i, 1))
			func_490(i, 4096);
	}

	return;
}

void func_427(float fParam0) // Position - 0x1188E Hash - 0xF0148F71 ^0x8D35552C
{
	int num;

	num = BUILTIN::FLOOR(fParam0 * 1000f);

	if (Global_1393237.f_3 < MISC::GET_GAME_TIMER() + num)
		Global_1393237.f_3 = MISC::GET_GAME_TIMER() + num;

	return;
}

void func_428() // Position - 0x118C1 Hash - 0xA00912CF ^0xF6ECFE01
{
	int i;

	for (i = 0; i < 120; i = i + 1)
	{
		if (func_42(i, 16777216))
			if (!func_491(i))
				func_492(i, 4096);
	}

	return;
}

void func_429(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x118FD Hash - 0xE914DE80 ^0x3F75BDDD
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	num = iParam1 + (60 * iParam2) + (3600 * iParam3);
	num2 = num / 2;
	num3 = num2 / 60;
	num4 = num2 - (num3 * 60);
	num5 = 0;

	switch (iParam0)
	{
		case 0:
			func_267(92, true, num5, num4, num3, 0, true, true);
			func_267(99, true, num5, num4, num3, 0, true, true);
			func_267(44, true, num5, num4, num3, 0, true, true);
			func_267(12, true, num5, num4, num3, 0, true, true);
			func_267(64, true, num5, num4, num3, 0, true, true);
			break;
	
		case 1:
			func_267(5, true, num5, num4, num3, 0, true, true);
			func_267(6, true, num5, num4, num3, 0, true, true);
			func_267(13, true, num5, num4, num3, 0, true, true);
			func_267(25, true, num5, num4, num3, 0, true, true);
			func_267(29, true, num5, num4, num3, 0, true, true);
			func_267(46, true, num5, num4, num3, 0, true, true);
			func_267(67, true, num5, num4, num3, 0, true, true);
			func_267(9, true, num5, num4, num3, 0, true, true);
			break;
	
		case 2:
			func_267(3, true, num5, num4, num3, 0, true, true);
			func_267(11, true, num5, num4, num3, 0, true, true);
			func_267(18, true, num5, num4, num3, 0, true, true);
			func_267(92, true, num5, num4, num3, 0, true, true);
			func_267(95, true, num5, num4, num3, 0, true, true);
			func_267(96, true, num5, num4, num3, 0, true, true);
			func_267(101, true, num5, num4, num3, 0, true, true);
			func_267(51, true, num5, num4, num3, 0, true, true);
			break;
	
		case 3:
			func_267(53, true, num5, num4, num3, 0, true, true);
			func_267(54, true, num5, num4, num3, 0, true, true);
			func_267(52, true, num5, num4, num3, 0, true, true);
			func_267(12, true, num5, num4, num3, 0, true, true);
			func_267(56, true, num5, num4, num3, 0, true, true);
			break;
	
		case 4:
			func_267(70, true, num5, num4, num3, 0, true, true);
			func_267(63, true, num5, num4, num3, 0, true, true);
			func_267(35, true, num5, num4, num3, 0, true, true);
			break;
	
		case 5:
			func_267(117, true, num5, num4, num3, 0, true, true);
			func_267(75, true, num5, num4, num3, 0, true, true);
			func_267(76, true, num5, num4, num3, 0, true, true);
			func_267(64, true, num5, num4, num3, 0, true, true);
			func_267(15, true, num5, num4, num3, 0, true, true);
			func_267(108, true, num5, num4, num3, 0, true, true);
			func_267(12, true, num5, num4, num3, 0, true, true);
			break;
	}

	return;
}

void func_430(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11BAA Hash - 0x34E92140 ^0x216EC835
{
	float num;
	float num2;
	BOOL flag;

	num = func_339();
	num2 = Global_1393447.f_60 - num;
	flag = fParam0 >= num2;

	if (!bParam1)
		if (flag)
			bParam1 = true;

	if (!flag && fParam0 >= 0f && !bParam2)
	{
	}
	else
	{
		Global_1393447.f_60 = num + fParam0;
	}

	return;
}

float func_431(var uParam0) // Position - 0x11BFD Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_214(uParam0))
		return uParam0->f_1;

	if (func_493(uParam0))
		return uParam0->f_2;

	return func_339() - uParam0->f_1;
}

void func_432(BOOL bParam0) // Position - 0x11C32 Hash - 0x67777C1C ^0xA5A55B03
{
	if (bParam0)
		func_494(4);

	func_494(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
	return;
}

int func_433(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, int iParam10, Hash hParam11, BOOL bParam12) // Position - 0x11C54 Hash - 0x6B838E14 ^0xADF883E0
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_376(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_495(num, hParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, false, 0, hParam11, bParam12);
		return num;
	}

	return 0;
}

void func_434(int iParam0, Ped pedParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x11CDA Hash - 0x8A4F30F0 ^0xE1CE78DB
{
	int num;

	if (bParam3 && !func_25(iParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	num = func_110(iParam0);
	func_496(iParam0, 18, false, true);
	func_496(iParam0, 17, false, true);

	if (iParam4 == -1)
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(pedParam1);

	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, iParam4, iParam2);
	return;
}

void func_435(var uParam0, int iParam1) // Position - 0x11D3F Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_436(var uParam0, int iParam1) // Position - 0x11D50 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_437(Ped pedParam0) // Position - 0x11D65 Hash - 0xE7050FE7 ^0x3168697
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

void func_438(int iParam0) // Position - 0x11DCD Hash - 0x4A1A3440 ^0xAE5E6967
{
	int i;

	if (func_269() != -1)
		return;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_95(func_245(i), 0))
			if (PED::IS_PED_GROUP_MEMBER(func_245(i), func_296(), true))
				func_497(i, iParam0);
	}

	return;
}

int func_439(int iParam0) // Position - 0x11E1B Hash - 0x25F13EA4 ^0x25F13EA4
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
	
		case 60:
			return 37;
	
		case 97:
			return 26;
	
		default:
		
	}

	return 0;
}

void func_440(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x11E52 Hash - 0xF543C309 ^0x6A5F3FAF
{
	int i;

	if (iParam3 == 0)
		iParam3 = Global_1415419.f_19[iParam0 /*12*/].f_5;

	if (iParam3 != 0)
	{
		for (i = 0; i < 248; i = i + 1)
		{
			if (Global_1415419.f_19[i /*12*/].f_5 == iParam3)
			{
				if (i != iParam0)
				{
					if (func_498() > Global_32074.f_2697.f_6[i /*6*/].f_5)
						Global_32074.f_2697.f_6[i /*6*/].f_5 = func_498();
				
					func_499(&(Global_32074.f_2697.f_6[i /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, false);
					func_38(&(Global_1415419.f_19[i /*12*/].f_11), 2);
				}
			}
		}
	}

	return;
}

struct<2> func_441(int iParam0) // Position - 0x11EF2 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_442(var uParam0, var uParam1, int iParam2) // Position - 0x11F02 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_443(int iParam0, int iParam1) // Position - 0x11F12 Hash - 0xDBB0D96F ^0x1E9C29F0
{
	int num;
	int num2;
	int num3;

	if (iParam1 != 0)
	{
		num = func_419(iParam1);
		num2 = 17 + num;
		num3 = func_420(iParam0, num2);
	
		if (num3 < 0)
			return;
	
		Global_17504.f_2205[num3 /*2*/].f_1 = Global_17504.f_2205[num3 /*2*/].f_1 + 1;
	}

	return;
}

void func_444(int iParam0, int iParam1) // Position - 0x11F5C Hash - 0x3FB921A0 ^0xF693CD04
{
	int num;

	if (iParam1 != -1 && !func_53(iParam0, 8192))
	{
		num = func_420(iParam0, iParam1);
	
		if (num < 0)
			return;
	
		Global_17504.f_2205[num /*2*/].f_1 = Global_17504.f_2205[num /*2*/].f_1 + 1;
	}

	return;
}

void func_445(int iParam0, int iParam1) // Position - 0x11FA7 Hash - 0x9419F4C5 ^0x12847282
{
	int num;
	int num2;
	int offset;

	num = func_271(iParam0) + iParam1;
	num2 = num / 31;
	offset = num % 31;
	MISC::SET_BIT(&Global_17504.f_12[num2], offset);
	return;
}

void func_446(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x11FD7 Hash - 0xA47606A9 ^0x52E0FD9B
{
	int i;
	int num;
	var unk;

	if (func_42(iParam0, 512))
		uParam1 = { Global_36 };

	if (_IS_NULL_VECTOR(uParam1))
		return;

	if (!func_142(iParam0))
		return;

	num = -1;

	for (i = 0; i < Global_17504.f_2084; i = i + 1)
	{
		unk = { Global_17504.f_2084[i /*5*/] };
	
		if (_IS_NULL_VECTOR(unk))
			if (num < 0)
				num = i;
		else if (Global_17504.f_2084[i /*5*/].f_3 == iParam0)
			if (func_285(unk, uParam1, 1f, true))
				return;
	}

	if (num >= 0)
	{
		Global_17504.f_2084[num /*5*/] = { uParam1 };
		Global_17504.f_2084[num /*5*/].f_3 = iParam0;
		Global_17504.f_2084[num /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
	}
	else
	{
		for (i = 0; i < Global_17504.f_2084; i = i + 1)
		{
			if (i + 1 >= 24)
			{
				Global_17504.f_2084[i /*5*/] = { uParam1 };
				Global_17504.f_2084[i /*5*/].f_3 = iParam0;
				Global_17504.f_2084[i /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
			}
			else
			{
				Global_17504.f_2084[i /*5*/] = { Global_17504.f_2084[i + 1 /*5*/] };
			}
		}
	}

	return;
}

void func_447(int iParam0) // Position - 0x12124 Hash - 0xAD8FB48F ^0xAD8FB48F
{
	int i;

	for (i = 0; i < 120; i = i + 1)
	{
		func_492(i, iParam0);
	}

	return;
}

int func_448(int iParam0) // Position - 0x12147 Hash - 0xE3B13A88 ^0xE3B13A88
{
	switch (iParam0)
	{
		case 0:
			return 3;
	
		case 1:
			return 2;
	
		case 2:
			return 2;
	
		case 3:
			return 2;
	
		case 4:
			return 2;
	
		case 5:
			return 2;
	
		case 6:
			return 3;
	
		case 7:
			return 2;
	
		case 8:
			return 2;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 3;
	
		case 13:
			return 2;
	
		case 14:
			return 2;
	
		case 15:
			return 5;
	
		case 16:
			return 1;
	
		case 17:
			return 2;
	
		case 18:
			return 2;
	
		case 19:
			return 1;
	
		case 20:
			return 3;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 3;
	
		case 24:
			return 3;
	
		case 27:
			return 6;
	
		case 28:
			return 2;
	
		case 29:
			return 2;
	
		case 30:
			return 4;
	
		case 31:
			return 3;
	
		case 32:
			return 1;
	
		case 33:
			return 2;
	
		case 34:
			return 1;
	
		case 35:
			return 1;
	
		case 36:
			return 3;
	
		case 37:
			return 4;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 4;
	
		case 41:
			return 3;
	
		case 42:
			return 2;
	
		case 43:
			return 4;
	
		case 44:
			return 3;
	
		case 45:
			return 4;
	
		case 46:
			return 2;
	
		case 47:
			return 1;
	
		case 48:
			return 2;
	
		case 49:
			return 1;
	
		case 50:
			return 9;
	
		case 51:
			return 2;
	
		case 52:
			return 2;
	
		case 53:
			return 2;
	
		case 54:
			return 2;
	
		case 56:
			return 3;
	
		case 57:
			return 8;
	
		case 58:
			return 2;
	
		case 59:
			return 2;
	
		case 60:
			return 2;
	
		case 61:
			return 1;
	
		case 62:
			return 3;
	
		case 63:
			return 3;
	
		case 64:
			return 3;
	
		case 65:
			return 2;
	
		case 66:
			return 3;
	
		case 67:
			return 1;
	
		case 68:
			return 2;
	
		case 69:
			return 1;
	
		case 70:
			return 2;
	
		case 71:
			return 2;
	
		case 72:
			return 3;
	
		case 73:
			return 3;
	
		case 74:
			return 1;
	
		case 75:
			return 1;
	
		case 76:
			return 1;
	
		case 77:
			return 2;
	
		case 78:
			return 2;
	
		case 79:
			return 4;
	
		case 80:
			return 2;
	
		case 81:
			return 4;
	
		case 82:
			return 4;
	
		case 83:
			return 2;
	
		case 84:
			return 2;
	
		case 85:
			return 2;
	
		case 86:
			return 2;
	
		case 87:
			return 3;
	
		case 88:
			return 2;
	
		case 89:
			return 1;
	
		case 90:
			return 2;
	
		case 91:
			return 1;
	
		case 92:
			return 2;
	
		case 93:
			return 1;
	
		case 94:
			return 8;
	
		case 95:
			return 1;
	
		case 96:
			return 4;
	
		case 97:
			return 2;
	
		case 98:
			return 3;
	
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
			return 9;
	
		case 107:
			return 2;
	
		case 108:
			return 5;
	
		case 109:
			return 2;
	
		case 110:
			return 1;
	
		case 111:
			return 7;
	
		case 112:
			return 1;
	
		case 113:
			return 3;
	
		case 114:
			return 4;
	
		case 115:
			return 2;
	
		case 116:
			return 1;
	
		case 117:
			return 2;
	
		case 118:
			return 2;
	
		case 119:
			return 4;
	
		default:
		
	}

	return 0;
}

void func_449(Hash hParam0, int iParam1) // Position - 0x125EE Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_450() // Position - 0x12601 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

int func_451(int iParam0) // Position - 0x12620 Hash - 0xE4DA9E55 ^0xA7262997
{
	if (!func_227(iParam0))
		return 0;

	return Global_1888801[iParam0 /*35*/].f_20;
}

BOOL func_452(int iParam0) // Position - 0x12640 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16074 && iParam0 != false;
}

BOOL func_453() // Position - 0x12654 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

BOOL func_454(int iParam0, BOOL bParam1) // Position - 0x12664 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_458(iParam0))
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

BOOL func_455(int iParam0, int iParam1, int iParam2) // Position - 0x12695 Hash - 0xD8381BE7 ^0xD8381BE7
{
	BOOL flag;
	int num;
	int num2;

	if (iParam1 == 24)
		iParam1 = 0;

	if (iParam1 < 0 || iParam1 >= 24)
		return false;

	if (iParam2 == 24)
		iParam2 = 0;

	if (iParam2 < 0 || iParam2 >= 24)
		return false;

	if (iParam1 == iParam2)
		return true;

	flag = iParam2 < iParam1;
	num = iParam1;
	num2 = iParam2;

	if (flag)
		num2 = 24;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	if (!flag)
		return false;

	num = 0;
	num2 = iParam2;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	return false;
}

BOOL func_456(int iParam0, BOOL bParam1) // Position - 0x1273E Hash - 0xB6F2B948 ^0x8948B8BB
{
	int i;

	if (bParam1)
		return func_500(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return true;
	}

	return false;
}

int func_457(int iParam0) // Position - 0x1277D Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_501(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_458(int iParam0) // Position - 0x127BE Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_199(iParam0))
		return -1;

	return func_457(iParam0);
}

void func_459(Player plParam0) // Position - 0x127DA Hash - 0x68A3D5AB ^0x62583FE3
{
	if (func_211(plParam0, false))
		return;

	ENTITY::SET_ENTITY_INVINCIBLE(plParam0, true);
	PED::SET_PED_CONFIG_FLAG(plParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(plParam0, 127, false);

	if (FIRE::IS_ENTITY_ON_FIRE(plParam0))
	{
		FIRE::STOP_ENTITY_FIRE(plParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(plParam0, ENTITY::GET_ENTITY_MAX_HEALTH(plParam0, false), 0);
	}

	return;
}

void func_460(int iParam0) // Position - 0x12826 Hash - 0xB1E2E498 ^0xC7EBD371
{
	Player player;

	if (!func_105(iParam0))
		return;

	if (func_251(iParam0, false) == 0)
		return;

	player = func_104(iParam0);
	func_459(player);
	func_108(iParam0, 8192, true);
	return;
}

void func_461(Player plParam0) // Position - 0x12861 Hash - 0xB38DCC50 ^0x941BF21E
{
	if (func_211(plParam0, false))
		return;

	ENTITY::SET_ENTITY_INVINCIBLE(plParam0, false);
	PED::SET_PED_CONFIG_FLAG(plParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(plParam0, 0, false);
	return;
}

void func_462(int iParam0) // Position - 0x1288E Hash - 0x28CD0E89 ^0xB9FC8A12
{
	Player player;

	if (!func_105(iParam0))
		return;

	if (func_251(iParam0, false) == 0)
		return;

	player = func_104(iParam0);
	func_461(player);
	func_108(iParam0, 8192, false);
	return;
}

void func_463(Player plParam0) // Position - 0x128C9 Hash - 0x26D51EE5 ^0xA25A14D9
{
	if (func_211(plParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(plParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(plParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(plParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(plParam0, false);
	return;
}

void func_464(Ped pedParam0) // Position - 0x128FF Hash - 0x6EDA2DDB ^0x823A87C9
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (func_87(14))
		return;

	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
		return;

	if (!ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, Global_1357549.f_3[4], true, 0))
		return;

	PED::SET_RAGDOLL_BLOCKING_FLAGS(pedParam0, 909522);
	return;
}

void func_465(int iParam0) // Position - 0x1297E Hash - 0xB1E2E498 ^0x545B1681
{
	Player player;

	if (!func_105(iParam0))
		return;

	if (func_251(iParam0, false) == 0)
		return;

	player = func_104(iParam0);
	func_463(player);
	func_108(iParam0, 16384, true);
	return;
}

void func_466(Player plParam0) // Position - 0x129B9 Hash - 0x972BAF6E ^0xD19596A6
{
	if (func_211(plParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(plParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(plParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(plParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(plParam0, true);
	return;
}

void func_467(int iParam0) // Position - 0x129ED Hash - 0x28CD0E89 ^0x67E48CA5
{
	Player player;

	if (!func_105(iParam0))
		return;

	if (func_251(iParam0, false) == 0)
		return;

	player = func_104(iParam0);
	func_466(player);
	func_108(iParam0, 16384, false);
	return;
}

int func_468(int iParam0, var uParam1, var uParam2) // Position - 0x12A28 Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_502(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

int func_469(int iParam0, int iParam1) // Position - 0x12A4A Hash - 0x2641680 ^0x6B70222B
{
	int randomIntInRange;
	int num;
	int num2;

	switch (iParam0)
	{
		case 296923297:
			num2 = -268604689;
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		
			switch (randomIntInRange)
			{
				case 0:
					num = -268604689;
					break;
			
				case 1:
					num = -1632589543;
					break;
			
				case 2:
					num = -1862464078;
					break;
			}
			break;
	
		case 1237718549:
			num2 = -922193456;
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		
			switch (randomIntInRange)
			{
				case 0:
					num = -922193456;
					break;
			
				case 1:
					num = -2040275819;
					break;
			
				case 2:
					num = -1114682645;
					break;
			
				case 3:
					num = -1414977761;
					break;
			}
			break;
	}

	if (iParam1 != -1)
		if (func_305(iParam1, num))
			num2 = num;

	return num2;
}

int func_470(int iParam0) // Position - 0x12B21 Hash - 0xDEAE5330 ^0x7DE1135D
{
	switch (iParam0)
	{
		case -2040275819:
			return 464906090;
	
		case -1862464078:
			return 1895628185;
	
		case -1632589543:
			return 1052055818;
	
		case -1414977761:
			return 1059434053;
	
		case -1114682645:
			return 744097966;
	
		case -922193456:
			return joaat("META_OUTFIT_WARM_WEATHER");
	
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
	
		default:
		
	}

	return joaat("META_OUTFIT_DEFAULT");
}

void func_471(int iParam0, int iParam1) // Position - 0x12B98 Hash - 0x319C37AC ^0x8ABBFC1F
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = Global_40.f_4942[iParam0 /*60*/].f_5 - Global_40.f_4942[iParam0 /*60*/].f_5 && iParam1;
	return;
}

BOOL func_472(Hash hParam0) // Position - 0x12BC8 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

int func_473(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x12BF0 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_503(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_504(398 + i, 1);
		
			if (func_505(hParam0, &unk, hash, false))
			{
				if (func_506(hParam0, &unk6, hash))
				{
					unk28 = { func_507(hParam0, unk, hash, false) };
					func_508(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_509(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_510(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_511(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

void func_474(Ped pedParam0, var uParam1, var uParam2) // Position - 0x12D42 Hash - 0x236D39D4 ^0x39F583A
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

BOOL func_475(Hash hParam0) // Position - 0x12F59 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

BOOL func_476(int iParam0) // Position - 0x12F6B Hash - 0x78780946 ^0xDC2AB9A6
{
	if (!func_105(iParam0))
		return false;

	switch (Global_1360165[iParam0 /*1157*/].f_127)
	{
		case joaat("perschar_comp_horse_common_2"):
		case joaat("perschar_comp_horse_common_3"):
		case joaat("perschar_comp_horse_common_1"):
		case joaat("perschar_comp_horse_common_4"):
		case joaat("perschar_comp_horse_common_5"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_477(int iParam0, char* sParam1) // Position - 0x12FB5 Hash - 0x3BDA936C ^0xC2C72C2C
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_dutch", 64);
					return true;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_john", 64);
					return true;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_javier", 64);
					return true;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_bill", 64);
					return true;
			
				case 5:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_hosea", 64);
					return true;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_micah", 64);
					return true;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_charles", 64);
					return true;
			
				case 9:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_lenny", 64);
					return true;
			
				default:
				
			}
		
			TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horses1", 64);
			return true;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return true;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return true;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return true;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return true;
			
				case 4:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return true;
			
				case 5:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return true;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return true;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return true;
			
				case 8:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return true;
			
				case 9:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return true;
			
				case 10:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return true;
			
				case 11:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return true;
			
				default:
				
			}
		
			TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return true;
	
		case 2:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return true;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return true;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return true;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return true;
			
				case 4:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return true;
			
				case 5:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return true;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return true;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return true;
			
				case 8:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return true;
			
				case 9:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return true;
			
				case 10:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return true;
			
				case 11:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return true;
			
				default:
				
			}
		
			TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horses1", 64);
			return true;
	
		case 3:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return true;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return true;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return true;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return true;
			
				case 4:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return true;
			
				case 5:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return true;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return true;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return true;
			
				case 9:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return true;
			
				case 10:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horses1", 64);
					return true;
			
				case 11:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return true;
			
				default:
				
			}
		
			TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horses1", 64);
			return true;
	
		case 5:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_dutch", 64);
					return true;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_john", 64);
					return true;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_javier", 64);
					return true;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_bill", 64);
					return true;
			
				case 4:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horses1", 64);
					return true;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_micah", 64);
					return true;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_charles", 64);
					return true;
			
				case 11:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_sadie", 64);
					return true;
			
				default:
				
			}
		
			TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horses1", 64);
			return true;
	
		case 6:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return true;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return true;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return true;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return true;
			
				case 4:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return true;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return true;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return true;
			
				case 11:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return true;
			
				default:
				
			}
		
			TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return true;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "beechersHope/bch_default_horses", 64);
			return true;
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x134B0 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_479(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x134B9 Hash - 0x33B4669E ^0x56AD3276
{
	ePedType perscharModelName;

	if (!func_105(iParam0))
		return false;

	if (!bParam5 && !Global_1359489.f_12 || bParam5 && Global_1359489.f_13 < 8)
	{
		if (Global_1360165[iParam0 /*1157*/].f_125 <= 300)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(Global_1360165[iParam0 /*1157*/].f_126))
				PERSCHAR::_REVIVE_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126);
		
			if (bParam5)
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[iParam0 /*1157*/].f_126, false);
				Global_1359489.f_13 = Global_1359489.f_13 + 1;
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126, false);
			}
		
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_126);
			Global_1360165[iParam0 /*1157*/].f_125 = Global_1360165[iParam0 /*1157*/].f_125 + 1;
		}
		else
		{
			perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(func_251(iParam0, true));
			STREAMING::REQUEST_MODEL(perscharModelName, false);
		
			if (STREAMING::HAS_MODEL_LOADED(perscharModelName))
			{
				Global_1360165[iParam0 /*1157*/].f_124 = func_512(perscharModelName, uParam1, iParam4, true, true, 0, true, true, true, false, false, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(perscharModelName);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126);
			}
		}
	
		if (!func_95(Global_1360165[iParam0 /*1157*/].f_124, 0))
			return false;
	
		Global_1359489.f_12 = 1;
		func_108(iParam0, 256, false);
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_480(int iParam0, Ped pedParam1, BOOL bParam2) // Position - 0x13624 Hash - 0xB5B0CDA5 ^0xA3D20AE
{
	int num;

	if (!func_105(iParam0))
		return false;

	if (func_513(iParam0, 256))
		return true;

	num = 0;

	if (bParam2)
		num = 256;

	if (!func_95(pedParam1, num))
		return false;

	PED::_EQUIP_META_PED_OUTFIT(pedParam1, func_514(iParam0));
	PED::_UPDATE_PED_VARIATION(pedParam1, false, true, true, true, false);
	func_108(iParam0, 256, true);
	return true;
}

void func_481(Ped pedParam0, int iParam1) // Position - 0x13689 Hash - 0xBC8691CC ^0x6A427174
{
	DECORATOR::DECOR_SET_BOOL(pedParam0, "HorseCompanion", true);
	func_516(pedParam0, func_515(iParam1));

	if (func_513(iParam1, 8))
	{
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(pedParam0, 2);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(pedParam0, 412, false);
	}

	if (ENTITY::DOES_ENTITY_EXIST(func_245(iParam1)))
	{
		PED::SET_PED_OWNS_ANIMAL(func_245(iParam1), pedParam0, false);
		PED::_0xED1C764997A86D5A(func_245(iParam1), pedParam0);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 367, true);
	}
	else
	{
		func_88(iParam1, 38, true);
	}

	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(pedParam0, joaat("rel_gang_dutchs_horses"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, joaat("rel_gang_dutchs_horses"));

	if (Global_40.f_4283 == 0)
		PED::SET_PED_CONFIG_FLAG(pedParam0, 172, true);

	PED::SET_PED_CONFIG_FLAG(pedParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 442, true);

	if (func_513(iParam1, 4096))
	{
		PED::SET_PED_CONFIG_FLAG(pedParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 54, false);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 121, false);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 302, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(pedParam0, 1, true);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 54, true);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 121, true);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 302, true);
	}

	PED::SET_PED_LASSO_HOGTIE_FLAG(pedParam0, 2, false);
	PED::SET_PED_LASSO_HOGTIE_FLAG(pedParam0, 3, false);
	func_416(iParam1, func_513(iParam1, 8192), func_513(iParam1, 16384), true);
	return;
}

BOOL func_482() // Position - 0x137E9 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_269() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

char* func_483(int iParam0, BOOL bParam1) // Position - 0x1380E Hash - 0xF4669507 ^0x9DC93F08
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
	
		case 1:
			return "HORSE_NAME_GANG_JOHN";
	
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
	
		case 3:
			return "HORSE_NAME_GANG_BILL";
	
		case 4:
			if (bParam1)
				return "HORSE_NAME_GANG_UNCLE_ES";
			else
				return "HORSE_NAME_GANG_UNCLE";
			break;
	
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
	
		case 6:
			return "HORSE_NAME_GANG_MICAH";
	
		case 7:
			if (bParam1)
				return "HORSE_NAME_GANG_CHARLES_ES";
			else
				return "HORSE_NAME_GANG_CHARLES";
			break;
	
		case 8:
			return "HORSE_NAME_GANG_SEAN";
	
		case 9:
			return "HORSE_NAME_GANG_LENNY";
	
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
	
		case 11:
			if (bParam1)
				return "HORSE_NAME_GANG_SADIE_ES";
			else
				return "HORSE_NAME_GANG_SADIE";
			break;
	
		case 20:
			return "HORSE_NAME_GANG_KAREN";
	
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
	
		default:
			break;
	}

	return "";
}

void func_484(Player plParam0, float fParam1, BOOL bParam2) // Position - 0x13931 Hash - 0x74F05B43 ^0xF2C5E074
{
	int healthAmount;

	if (!ENTITY::IS_ENTITY_DEAD(plParam0))
	{
		fParam1 = func_517(fParam1, 0f, 1f);
		healthAmount = BUILTIN::FLOOR(fParam1 * (float)ENTITY::GET_ENTITY_MAX_HEALTH(plParam0, bParam2));
		ENTITY::SET_ENTITY_HEALTH(plParam0, healthAmount, 0);
	}

	return;
}

int func_485(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13968 Hash - 0x47D4E9C ^0x4AEFF628
{
	float num;
	int num2;
	int i;
	Vector3 volumeCoords;
	float num3;

	num = 999999.9f;
	num2 = -1;

	for (i = 0; i < 150; i = i + 1)
	{
		if (Global_1888801[i /*35*/].f_20 == iParam0)
		{
			if (!(bParam2 && i == Global_1894899.f_2))
			{
				if (!bParam1 || func_518(i))
				{
					volumeCoords = { VOLUME::GET_VOLUME_COORDS(Global_1888801[i /*35*/].f_3) };
					num3 = BUILTIN::VDIST(volumeCoords, Global_36);
				
					if (num3 < num)
					{
						num2 = i;
						num = num3;
					}
				}
			}
		}
	}

	return num2;
}

int func_486(int iParam0) // Position - 0x139F5 Hash - 0xA8723863 ^0xEBF84F39
{
	if (func_142(iParam0))
		return Global_17504.f_42[iParam0 /*8*/].f_4;

	return 0;
}

int func_487(int iParam0) // Position - 0x13A15 Hash - 0x2117305A ^0x2117305A
{
	float num;
	float num2;
	float num3;
	float num4;
	int num5;

	num = 0f;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;

	switch (iParam0)
	{
		case 0:
			num2 = 30f;
			break;
	
		case 1:
			num3 = 1f;
			break;
	
		case 2:
			num3 = 2f;
			break;
	
		case 3:
			num3 = 3f;
			break;
	
		case 4:
			num3 = 4f;
			break;
	
		case 5:
			num3 = 6f;
			break;
	
		case 6:
			num3 = 8f;
			break;
	
		case 7:
			num3 = 12f;
			break;
	
		case 8:
			num4 = 1f;
			break;
	
		case 9:
			num4 = 2f;
			break;
	
		case 10:
			num4 = 3f;
			break;
	
		case 11:
			num4 = 4f;
			break;
	
		case 12:
			num4 = 5f;
			break;
	
		case 13:
			num4 = 6f;
			break;
	
		case 14:
			num4 = 7f;
			break;
	
		case 15:
			num4 = 8f;
			break;
	
		case 16:
			num4 = 10f;
			break;
	
		case 17:
			num4 = 12f;
			break;
	
		case 18:
			num4 = 15f;
			break;
	
		case 19:
			num4 = 18f;
			break;
	
		case 20:
			num4 = 20f;
			break;
	
		case 21:
			num4 = 25f;
			break;
	
		case 22:
			num3 = -1f;
			break;
	
		case 23:
			num4 = -5f;
			break;
	
		case 24:
			num4 = -7f;
			break;
	
		case 25:
			num4 = -8f;
			break;
	}

	num5 = BUILTIN::ROUND(num + (60f * num2) + (3600f * num3) + (86400f * num4));
	return num5;
}

int func_488(int iParam0, int iParam1) // Position - 0x13BC2 Hash - 0xEA82FE59 ^0xEA82FE59
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

BOOL func_489(int iParam0, int iParam1) // Position - 0x15112 Hash - 0xB179A71 ^0xB7E8A74F
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return false;

	return Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1 != false;
}

void func_490(int iParam0, int iParam1) // Position - 0x15145 Hash - 0x64E216F2 ^0x314CECED
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return;

	Global_1393237.f_11[iParam0 /*30*/].f_10 = Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1;
	return;
}

BOOL func_491(int iParam0) // Position - 0x15181 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
	
		default:
		
	}

	return false;
}

void func_492(int iParam0, int iParam1) // Position - 0x151AE Hash - 0xD320CA35 ^0x5C62EB93
{
	if (!func_142(iParam0))
		return;

	Global_1310750[iParam0 /*111*/].f_1 = Global_1310750[iParam0 /*111*/].f_1 - Global_1310750[iParam0 /*111*/].f_1 && iParam1;
	return;
}

BOOL func_493(var uParam0) // Position - 0x151E5 Hash - 0x39705408 ^0x39705408
{
	return func_364(*uParam0, 2);
}

void func_494(int iParam0) // Position - 0x151F5 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1900383.f_316 = Global_1900383.f_316 || iParam0;
	return;
}

void func_495(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x1520E Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = volParam11;
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
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam11);
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
	func_519(iParam0, true);
	func_520(iParam0, true);
	func_521(iParam0, 128);
	return;
}

void func_496(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x154B4 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_25(iParam0))
		return;

	num = func_110(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_497(int iParam0, int iParam1) // Position - 0x154FF Hash - 0xA6154E40 ^0x6EB96D15
{
	Ped ped;

	if (!func_22(iParam0))
		return;

	ped = Global_1360165[iParam0 /*1157*/];

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (!ENTITY::IS_ENTITY_DEAD(ped))
			DECORATOR::DECOR_SET_INT(ped, "companion_manager_command", iParam1);

	return;
}

int func_498() // Position - 0x1553F Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_499(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1554B Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_522(*iParam0);
	i = func_523(*iParam0);
	num2 = func_524(*iParam0);
	j = func_342(*iParam0);
	k = func_525(*iParam0);
	l = func_526(*iParam0);

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

	for (m = func_527(i, num); num2 > m; m = func_527(i, num))
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

	func_528(iParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_500(int iParam0) // Position - 0x156D3 Hash - 0x8232DC08 ^0x5AF1E79C
{
	int num;
	int offset;

	func_529(iParam0, &num, &offset);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[num], offset);
}

int func_501(int iParam0) // Position - 0x156F7 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_502(int iParam0, int iParam1) // Position - 0x15778 Hash - 0xB7443904 ^0xB7443904
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
	
		case -2040275819:
			return 46;
	
		case -1874208704:
			return 5;
	
		case -1862464078:
			return 44;
	
		case -1692022104:
			return 63;
	
		case -1684458716:
			return 31;
	
		case -1678882891:
			return 36;
	
		case -1668922931:
			return 20;
	
		case -1648322231:
			return 72;
	
		case -1642335258:
			return 66;
	
		case -1632589543:
			return 43;
	
		case -1587546924:
			return 54;
	
		case -1559986688:
			return 7;
	
		case -1532979576:
			return 65;
	
		case -1414977761:
			return 48;
	
		case -1394723994:
			return 59;
	
		case -1341683964:
			return 21;
	
		case -1335291723:
			return 60;
	
		case -1268239471:
			return 68;
	
		case -1256711921:
			return 35;
	
		case -1248623443:
			return 26;
	
		case -1205468859:
			return 76;
	
		case -1155031950:
			return 25;
	
		case -1114682645:
			return 47;
	
		case -1092189504:
			return 69;
	
		case -1065026089:
			return 73;
	
		case -973332710:
			return 32;
	
		case -946772361:
			return 62;
	
		case -922193456:
			return 39;
	
		case -695701225:
			return 3;
	
		case -571427255:
			return 57;
	
		case -481967001:
			return 28;
	
		case -445211559:
			return 61;
	
		case -433615745:
			return 18;
	
		case -426171916:
			return 80;
	
		case -310473775:
			return 42;
	
		case -301101630:
			return 24;
	
		case -268604689:
			return 37;
	
		case -193269670:
			return 30;
	
		case -23947011:
			return 50;
	
		case 0:
			return 0;
	
		case 6418928:
			return 71;
	
		case 80515440:
			return 70;
	
		case 178615350:
			return 1;
	
		case 283037683:
			return 13;
	
		case 296923297:
			return 45;
	
		case 350498312:
			return 27;
	
		case 404503428:
			return 4;
	
		case 431390894:
			return 23;
	
		case 513932985:
			return 29;
	
		case 707545953:
			return 64;
	
		case 713940276:
			return 11;
	
		case 777603945:
			return 19;
	
		case 837028314:
			return 58;
	
		case 867156718:
			return 79;
	
		case 876535472:
			return 75;
	
		case 876797088:
			return 53;
	
		case 928493661:
			return 22;
	
		case 961676983:
			return 55;
	
		case 977450639:
			return 9;
	
		case 1018353621:
			return 17;
	
		case 1046468203:
			return 16;
	
		case 1071744295:
			return 8;
	
		case 1199580439:
			return 41;
	
		case 1200878026:
			return 52;
	
		case 1205492208:
			return 40;
	
		case 1237718549:
			return 49;
	
		case 1254970547:
			return 78;
	
		case 1295334688:
			return 51;
	
		case 1300659195:
			return 56;
	
		case 1484386316:
			return 77;
	
		case 1495063555:
			return 15;
	
		case 1593315648:
			return 6;
	
		case 1658153743:
			return 33;
	
		case 1744281750:
			return 12;
	
		case 1818898449:
			return 38;
	
		case 1842975347:
			return 34;
	
		case 1901494236:
			return 10;
	
		case 1950972546:
			return 67;
	
		case 2062813606:
			return 74;
	
		case 2094043703:
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

struct<5> func_503(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x15B0C Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_530(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_531(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_536(hParam0, -1823706425))
			{
				unk = { func_507(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_536(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_507(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_534(bParam1) };
		
			switch (func_535(hParam0))
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
				unk = { func_507(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_532(bParam1) };
		
			if (bParam2 && func_533(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_505(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_505(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_506(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_537(unk, &unk28, bParam1, false))
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

Hash func_504(int iParam0, int iParam1) // Position - 0x15DC9 Hash - 0xE1D12727 ^0x71D656A6
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

BOOL func_505(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x17F13 Hash - 0x4285A587 ^0x4285A587
{
	return func_538(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_506(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x17F2B Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_539(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_507(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x17F4C Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_540(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_541(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_508(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x17F7D Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_542(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_537(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_509(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_541(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_509(BOOL bParam0) // Position - 0x18010 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_269() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_541(bParam0));
}

int func_510(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1802E Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return 1;

	if (!func_543(hParam0))
		return 0;

	if (!func_509(false))
		return 0;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return 1;
}

void func_511(Hash hParam0, int iParam1) // Position - 0x18069 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_544(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

Ped func_512(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x180B1 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_545(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_513(int iParam0, int iParam1) // Position - 0x180F3 Hash - 0x63F6278D ^0x98AA8E70
{
	if (!func_105(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1 != false;
}

Hash func_514(int iParam0) // Position - 0x1811B Hash - 0x5007D79D ^0xEC52003
{
	return joaat("META_HORSE_SADDLE_ONLY");
}

int func_515(int iParam0) // Position - 0x18128 Hash - 0xF239A6CA ^0xF239A6CA
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
	
		case 4:
		case 9:
		case 20:
			return 2;
	
		case 7:
			if (func_546(45))
				return 1;
			else
				return 2;
			break;
	
		case 11:
			if (func_546(45))
				return 2;
			else
				return 1;
			break;
	}

	return 0;
}

void func_516(Ped pedParam0, int iParam1) // Position - 0x181C3 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

float func_517(float fParam0, float fParam1, float fParam2) // Position - 0x181EA Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_518(int iParam0) // Position - 0x18211 Hash - 0x14DDF3C9 ^0xAD14D790
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] & 32 != 0;

	return Global_1058888.f_40545[iParam0 /*11*/] & 32 != 0;
}

void func_519(int iParam0, BOOL bParam1) // Position - 0x1825A Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_376(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_520(int iParam0, BOOL bParam1) // Position - 0x182B2 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_521(int iParam0, int iParam1) // Position - 0x182DB Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

int func_522(int iParam0) // Position - 0x18303 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_523(int iParam0) // Position - 0x18328 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_524(int iParam0) // Position - 0x1833B Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_525(int iParam0) // Position - 0x1834E Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_526(int iParam0) // Position - 0x18360 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_527(int iParam0, int iParam1) // Position - 0x18372 Hash - 0x893AC59E ^0x893AC59E
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

void func_528(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1840C Hash - 0xA65AB937 ^0xA65AB937
{
	func_548(iParam0, iParam6);
	func_549(iParam0, iParam5);
	func_550(iParam0, iParam4);
	func_551(iParam0, iParam3);
	func_552(iParam0, iParam2);
	func_553(iParam0, iParam1);
	return;
}

int func_529(int iParam0, var uParam1, var uParam2) // Position - 0x18444 Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_554(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

struct<4> func_530(BOOL bParam0) // Position - 0x18466 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_507(joaat("character"), func_555(), joaat("SLOTID_NONE"), bParam0);
}

int func_531(Hash hParam0) // Position - 0x18482 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_540(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_532(BOOL bParam0) // Position - 0x184AD Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_541(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_507(923904168, func_530(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_507(923904168, func_530(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_507(923904168, func_530(bParam0), -740156546, false);
}

BOOL func_533(Hash hParam0, BOOL bParam1) // Position - 0x18542 Hash - 0x62864AB ^0xBC339691
{
	if (func_535(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_546(24);
		else
			return true;

	return false;
}

struct<4> func_534(BOOL bParam0) // Position - 0x1857B Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_541(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_507(271701509, func_530(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_507(271701509, func_530(bParam0), 12999093, false);
}

Hash func_535(Hash hParam0) // Position - 0x185DF Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_540(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_536(Hash hParam0, Hash hParam1) // Position - 0x1860A Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_535(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_537(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x18669 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_541(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

int func_538(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x18699 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_540(hParam0, 0))
		return 0;

	guid = { func_507(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_541(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_539(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x186E1 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_541(false);
	*panParam1 = { func_507(hParam0, func_532(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_540(Hash hParam0, int iParam1) // Position - 0x18726 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_541(BOOL bParam0) // Position - 0x18740 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_269() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_542(Hash hParam0) // Position - 0x18781 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_543(Hash hParam0) // Position - 0x18797 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_544(int iParam0, int iParam1) // Position - 0x187A5 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

void func_545(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x187BB Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_556(eptParam1))
		{
			func_557(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_558(pedParam0, 0, true);
	
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
			func_559(pedParam0, false);
			flag = true;
		}
	
		func_516(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_546(int iParam0) // Position - 0x1889C Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_560(iParam0))
		return false;

	return func_561(iParam0);
}

var func_547(BOOL bParam0, var uParam1, var uParam2) // Position - 0x188B8 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_548(int iParam0, int iParam1) // Position - 0x188CF Hash - 0xD05180BA ^0x39589262
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

void func_549(int iParam0, int iParam1) // Position - 0x18955 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*iParam0 = *iParam0 - *iParam0 & 62914560;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_550(int iParam0, int iParam1) // Position - 0x18991 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_523(*iParam0);
	num2 = func_522(*iParam0);

	if (iParam1 < 1 || iParam1 > func_527(num, num2))
		return;

	*iParam0 = *iParam0 - *iParam0 & 4063232;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_551(int iParam0, int iParam1) // Position - 0x189E4 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*iParam0 = *iParam0 - *iParam0 & 126976;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_552(int iParam0, int iParam1) // Position - 0x18A1F Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 4032;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_553(int iParam0, int iParam1) // Position - 0x18A58 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 63;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

int func_554(int iParam0, int iParam1) // Position - 0x18A90 Hash - 0x99A93628 ^0x27AE8C83
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
	
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
	
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
	
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
	
		case -2104294676:
			return 83;
	
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
	
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
	
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
	
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
	
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
	
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
	
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
	
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
	
		case -2033572567:
			return 92;
	
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
	
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
	
		case -2006082799:
			return 56;
	
		case -1994410205:
			return 499;
	
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
	
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
	
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
	
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
	
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
	
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
	
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
	
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return &func_1;
	
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
	
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
	
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
	
		case -1885734028:
			return 110;
	
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
	
		case -1856459307:
			return 219;
	
		case -1837343824:
			return 496;
	
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
	
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
	
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
	
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
	
		case -1818590041:
			return 246;
	
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
	
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
	
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
	
		case joaat("CSTAG_BCH_BASE"):
			return 10;
	
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
	
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
	
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
	
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
	
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
	
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
	
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
	
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
	
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
	
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
	
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
	
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
	
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
	
		case -1584659518:
			return 210;
	
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
	
		case -1565979762:
			return 507;
	
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
	
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
	
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
	
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
	
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
	
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
	
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
	
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
	
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
	
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
	
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
	
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
	
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
	
		case -1426009748:
			return 119;
	
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
	
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
	
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
	
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
	
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
	
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
	
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
	
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
	
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
	
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
	
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
	
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
	
		case -1333840726:
			return 236;
	
		case -1318290630:
			return 254;
	
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
	
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
	
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
	
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
	
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
	
		case -1235200494:
			return 165;
	
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
	
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
	
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
	
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
	
		case joaat("CSTAG_PRG_BASE"):
			return 9;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
	
		case -1171086122:
			return 41;
	
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
	
		case -1152282847:
			return 33;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
	
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
	
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
	
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
	
		case -1061998329:
			return 164;
	
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
	
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
	
		case -1045864225:
			return 510;
	
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
	
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
	
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
	
		case -978287173:
			return 12;
	
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
	
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
	
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
	
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
	
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
	
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
	
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
	
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
	
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
	
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
	
		case joaat("CSTAG_COL_BASE"):
			return 2;
	
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
	
		case -830432609:
			return 492;
	
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
	
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
	
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
	
		case -818926670:
			return 200;
	
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
	
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
	
		case joaat("CSTAG_HSO_BASE"):
			return 3;
	
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
	
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
	
		case -803062666:
			return 65;
	
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
	
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
	
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
	
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
	
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
	
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
	
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
	
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
	
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
	
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
	
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
	
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
	
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
	
		case -671103079:
			return 504;
	
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
	
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
	
		case -650501093:
			return 509;
	
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
	
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
	
		case -636774257:
			return 146;
	
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
	
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
	
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
	
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
	
		case -604891653:
			return 237;
	
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
	
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return 424;
	
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
	
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
	
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
	
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
	
		case -534913305:
			return 174;
	
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
	
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
	
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
	
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
	
		case -453449739:
			return 182;
	
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
	
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
	
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
	
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
	
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
	
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
	
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
	
		case -399703928:
			return 155;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
	
		case -381477663:
			return 37;
	
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
	
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
	
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
	
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
	
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
	
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
	
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
	
		case -317452243:
			return 128;
	
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
	
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
	
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
	
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
	
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
	
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
	
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
	
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
	
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
	
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
	
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
	
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
	
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
	
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
	
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
	
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
	
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
	
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
	
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
	
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
	
		case -170673728:
			return 156;
	
		case -165538585:
			return 127;
	
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
	
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
	
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
	
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
	
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
	
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
	
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
	
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
	
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
	
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
	
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
	
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
	
		case -98209688:
			return 55;
	
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
	
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
	
		case -58291054:
			return 201;
	
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
	
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
	
		case -21372580:
			return 46;
	
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
	
		case -8269375:
			return 137;
	
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

struct<4> func_555() // Position - 0x1A19D Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_556(ePedType eptParam0) // Position - 0x1A1A9 Hash - 0x5000025C ^0x5000025C
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

void func_557(Ped pedParam0, Hash hParam1) // Position - 0x1A5FC Hash - 0xEA1C858E ^0xC0AFE68C
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_406(pedParam0, hParam1))
		{
			if (func_407(pedParam0, hParam1))
			{
				if (func_408(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_409(pedParam0);
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

void func_558(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x1A6A6 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_559(Ped pedParam0, BOOL bParam1) // Position - 0x1A6D6 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_560(int iParam0) // Position - 0x1A71B Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_561(int iParam0) // Position - 0x1A72E Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

