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
	Volume volLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 2;
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
	var uLocal_42 = 8000;
	var uLocal_43 = 500;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 1;
	var uLocal_54 = 1;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 24;
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
	var uLocal_161 = 1065353216;
	var uLocal_162 = 1119092736;
	var uLocal_163 = 1092616192;
	var uLocal_164 = 1085276160;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
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
	var uLocal_183 = -1;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 1097859072;
	var uLocal_193 = 1000;
	var uLocal_194 = 1067450368;
	var uLocal_195 = 5000;
	var uLocal_196 = 42;
	var uLocal_197 = 1103626240;
	var uLocal_198 = 1077936128;
	var uLocal_199 = 1106247680;
	var uLocal_200 = 1103101952;
	var uLocal_201 = 1097859072;
	var uLocal_202 = 1103626240;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = -1;
	var uLocal_211 = -1;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = -1;
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
	var uLocal_244 = 17;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = -1082130432;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = -1082130432;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = -1082130432;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = -1082130432;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = -1082130432;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = -1082130432;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = -1082130432;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = -1082130432;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = -1082130432;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = -1082130432;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = -1082130432;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = -1082130432;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = -1082130432;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = -1082130432;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = -1082130432;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = -1082130432;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = -1082130432;
	var uLocal_398 = 4;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = -1082130432;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = -1082130432;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = -1082130432;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = -1082130432;
	var uLocal_435 = 4;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = -1082130432;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = -1082130432;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = -1082130432;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = -1082130432;
	var uLocal_472 = 2;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = -1;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = -1;
	var uLocal_501 = 4;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 3;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 1;
	var uLocal_543 = 0;
	var uLocal_544 = 8;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	BOOL bLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	var uLocal_570 = 17;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 10;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	eStackSize essLocal_602 = 0;
	BOOL bLocal_603 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x3F18CF41 ^0x3968B347
{
	int num;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	essLocal_602 = iScriptParam_0;
	iLocal_600 = iScriptParam_0.f_2;

	if (func_1(Global_35, 0))
		PED::SET_PED_RESET_FLAG(Global_35, 54, true);

	func_2();

	while (func_3())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_601)
		{
			iLocal_601 = MISC::GET_GAME_TIMER() + 1000;
			num = iLocal_600;
			func_4(essLocal_602, &iLocal_600);
		
			switch (iLocal_600)
			{
				case 0:
					if (!Global_1879534.f_1)
					{
						bLocal_603 = !func_5(essLocal_602, true);
						bLocal_603;
						iLocal_600 = 1;
					}
					break;
			
				case 1:
					iLocal_600 = 2;
					break;
			
				case 2:
					if (func_6(bLocal_603))
						iLocal_600 = 4;
					break;
			
				case 3:
					if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
						if (func_15(bLocal_603))
							iLocal_600 = 11;
					break;
			
				case 4:
					iLocal_600 = 6;
					break;
			
				case 6:
					if (func_7(essLocal_602, -1, -1, false))
					{
						func_8(essLocal_602, 4);
						iLocal_600 = 7;
					}
					break;
			
				case 7:
					iLocal_600 = 8;
					break;
			
				case 8:
					_DEBUG_PRINT(essLocal_602);
					iLocal_600 = 9;
					break;
			
				case 9:
					if (essLocal_602 == 5)
					{
					}
					else
					{
						func_10(&Global_1898004);
						func_11(essLocal_602, &Global_1898004, bLocal_603);
					}
				
					func_8(essLocal_602, 8);
					iLocal_600 = 10;
					break;
			
				case 10:
					if (!bLocal_603)
					{
						func_12();
					
						if (func_13(32))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
								CAM::DO_SCREEN_FADE_IN(500);
						
							func_14(32);
						}
					
						iLocal_600 = 3;
					}
					else
					{
						iLocal_600 = 3;
					}
					break;
			
				case 11:
					if (!bLocal_603)
						if (!func_16(essLocal_602))
							iLocal_601 = 0;
				
					func_17(&Global_1898004, essLocal_602);
					break;
			
				case 12:
					func_18();
					break;
			}
		
			if (num != iLocal_600)
				iLocal_601 = 0;
		}
	
		BUILTIN::WAIT(0);
	}

	func_18();
	return;
}

BOOL func_1(Ped pedParam0, int iParam1) // Position - 0x1E9 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_19(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_19(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_19(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_19(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_19(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_19(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_19(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_19(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

void func_2() // Position - 0x2E8 Hash - 0x7A54CCF6 ^0x40903855
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_18();
	
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		else
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	}

	return;
}

BOOL func_3() // Position - 0x30A Hash - 0xB76B313F ^0xF7AF8359
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35) && CAM::IS_SCREEN_FADED_OUT())
		return false;

	return true;
}

void func_4(eStackSize essParam0, var uParam1) // Position - 0x32A Hash - 0x1DD95532 ^0x798CA2F1
{
	if (!func_13(16))
		return;

	if (Global_1894899.f_7 == 0)
	{
		func_14(16);
		return;
	}

	if (!func_20(essParam0))
	{
		Global_1894899.f_7 = 0;
		func_14(16);
		return;
	}

	if (func_21(8))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 7;
			return;
		}
		else if (*uParam1 != 7)
		{
			func_22(8);
			*uParam1 = 11;
			return;
		}
	}

	if (func_21(2))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 3;
			return;
		}
		else if (*uParam1 != 3)
		{
			func_22(2);
			*uParam1 = 11;
			return;
		}
	}

	if (func_21(16))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 8;
			return;
		}
		else if (*uParam1 != 8)
		{
			func_22(16);
			*uParam1 = 11;
			return;
		}
	}

	if (func_21(4))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 6;
			return;
		}
		else if (*uParam1 != 6)
		{
			func_22(4);
			*uParam1 = 11;
			return;
		}
	}

	if (func_21(1))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 2;
			return;
		}
		else if (*uParam1 != 2)
		{
			func_22(1);
			*uParam1 = 11;
			return;
		}
	}

	return;
}

BOOL func_5(eStackSize essParam0, BOOL bParam1) // Position - 0x458 Hash - 0x44DB51D8 ^0x4C89BE8
{
	int num;
	int num2;
	int num3;
	int num4;

	if (func_23(essParam0))
		return false;

	if (func_24() == -1)
	{
		if (func_25(6206, true, true))
		{
			num = func_26(0);
			num2 = func_27(num);
			return false;
		}
	
		if (bParam1)
		{
			if (func_28() == essParam0)
				return false;
		
			switch (essParam0)
			{
				case 9:
					break;
			
				case 36:
					if (!func_29(63))
						return false;
				
					if (func_30(76) || func_31())
						return false;
					break;
			
				case 114:
					if (!func_33())
						return false;
				
					if (func_34(20, false))
						return false;
					break;
			
				case 125:
					if (!func_32())
						return false;
					break;
			
				case 129:
					if (!func_33())
						return false;
				
					if (func_34(19, false))
						return false;
					break;
			}
		}
	}
	else if (func_24() == false)
	{
		return false;
	}
	else
	{
		return false;
	}

	if (func_35(essParam0, 256))
		return false;

	if (bParam1)
	{
		num3 = func_36(essParam0);
	
		if (!func_37(num3))
			return false;
	
		num4 = func_38(num3);
	
		if (func_39(num4))
		{
			func_40(&num4, 0, 0, 0, 5, 0, 0, false);
		
			if (!func_41(num4, true))
				return false;
		}
	}

	return true;
}

BOOL func_6(BOOL bParam0) // Position - 0x5B2 Hash - 0x727C8D9B ^0x33CEEF3F
{
	func_42();
	iLocal_20.f_215 = volLocal_15.f_1;
	return true;
}

BOOL func_7(eStackSize essParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x5C7 Hash - 0x156C7489 ^0x156C7489
{
	int num;
	int num2;
	int num3;

	if (func_24() != -1)
		return true;

	if (!func_43(essParam0))
		return true;

	if (func_35(essParam0, 16))
		return true;

	func_44(essParam0) && !func_45(essParam0);

	if (func_46(essParam0, &num, &num2, false, false))
	{
		if (func_47(iParam1))
			num = iParam1;
	
		if (func_47(iParam2))
			num2 = iParam2;
	
		if (Global_1897950 < num || Global_1897950 > num2)
			Global_1897950 = num;
	
		while (true)
		{
			if (!func_44(essParam0) || func_45(essParam0) || func_48(Global_1897950))
				func_49(Global_1897950, false);
		
			Global_1897950 = Global_1897950 + 1;
			num3 = num3 + 1;
		
			if (Global_1897950 > num2)
			{
				Global_1897950 = -1;
				return true;
			}
		
			if (num3 >= 10 && !bParam3)
				return false;
		}
	}

	return true;
}

void func_8(eStackSize essParam0, BOOL bParam1) // Position - 0x6BF Hash - 0x1F53BD85 ^0xA70B55E5
{
	if (Global_1572887.f_12 == -1)
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] || bParam1;
	else
		Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] || bParam1;

	return;
}

void _DEBUG_PRINT(eStackSize essParam0) // Position - 0x702 Hash - 0x6EF28A6B ^0x6EF28A6B
{
	essParam0 = essParam0;
	return;
}

void func_10(var uParam0) // Position - 0x70E Hash - 0x28951280 ^0x95B241A
{
	int i;

	if (uParam0->f_61 == 0)
		return;

	for (i = 0; i < 20; i = i + 1)
	{
		uParam0->[i /*3*/] = 0;
		uParam0->[i /*3*/].f_1 = 0;
		uParam0->[uParam0->f_61 /*3*/].f_2 = 0;
	}

	uParam0->f_61 = 0;
	return;
}

void func_11(eStackSize essParam0, var uParam1, BOOL bParam2) // Position - 0x754 Hash - 0x802DF545 ^0xE0442D40
{
	func_50(uParam1, iLocal_20.f_215, 1);
	return;
}

void func_12() // Position - 0x767 Hash - 0x11B7B9E5 ^0x5267A8D6
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Fort_Mercer", true, true);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(false);
	iLocal_20.f_189 = 1;
	func_51();
	func_52();
	func_53(&iLocal_20, 118, &uLocal_544, 30);
	func_54(&(iLocal_20.f_155), true);
	func_55(&(iLocal_20.f_155), false);
	func_56(&(iLocal_20.f_155), true);
	func_57(&(iLocal_20.f_155), true);
	func_58(&(iLocal_20.f_155), true);
	func_59(&(iLocal_20.f_155), 67);
	PED::SET_PED_CONFIG_FLAG(Global_35, 2, true);
	return;
}

BOOL func_13(BOOL bParam0) // Position - 0x7D6 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1894899 && bParam0 != false;
}

void func_14(BOOL bParam0) // Position - 0x7E7 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1894899 = Global_1894899 - Global_1894899 && bParam0;
	return;
}

BOOL func_15(BOOL bParam0) // Position - 0x7FF Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_16(eStackSize essParam0) // Position - 0x808 Hash - 0xD4FE7FD2 ^0xDB2E8E5F
{
	switch (iLocal_20)
	{
		case 0:
			if (func_60(&iLocal_20, &uLocal_542, &uLocal_538, "FORTM", 0))
				func_61(&iLocal_20, 1);
			break;
	
		case 1:
			if (func_62(&iLocal_20, &uLocal_244, joaat("rel_gang_smugglers"), iLocal_568, iLocal_569))
			{
				iLocal_20.f_197 = 0;
				func_63(&uLocal_472);
				func_64();
				func_61(&iLocal_20, 5);
				func_65(false);
			}
			break;
	
		case 5:
			func_66(&iLocal_20, &uLocal_244, iLocal_568, iLocal_569);
			func_67();
			func_68();
			func_69();
			func_61(&iLocal_20, 6);
			func_70();
			break;
	
		case 6:
			if (func_71(&iLocal_20))
				func_61(&iLocal_20, 7);
			break;
	
		case 7:
			func_72();
			break;
	}

	if (!func_73(&iLocal_20, 4) && iLocal_20 >= 6)
	{
		func_74(&iLocal_20, &uLocal_244);
		func_75();
	}

	func_76(&iLocal_20);
	func_77();
	return false;
}

void func_17(var uParam0, eStackSize essParam1) // Position - 0x8F5 Hash - 0x8A7E7334 ^0x9F0B10C1
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int i;
	int num;

	if (BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_78(Global_1935630, 16384) || func_78(Global_1935630, 8388608))
		return;

	if (func_79(uParam0, 1))
		return;

	uParam0->f_63 = uParam0->f_63 + 1;

	if (uParam0->f_63 < 10)
		return;

	uParam0->f_63 = 0;
	flag = 0;
	flag2 = CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT();
	flag3 = func_80();

	for (i = 0; i < uParam0->f_61; i = i + 1)
	{
		switch (uParam0->[i /*3*/].f_1)
		{
			case 1:
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->[i /*3*/]))
				{
					if (VOLUME::IS_POINT_IN_VOLUME(uParam0->[i /*3*/], Global_36))
					{
						if (!flag2 && !flag3)
						{
							if (!func_81(&uParam0->[i /*3*/], 1) && func_82(essParam1) && !func_83(essParam1, 16))
							{
								func_85(essParam1, func_84(), -1, false, -1, false);
								func_86(&uParam0->[i /*3*/], 1);
							}
						
							func_87(essParam1, false);
						}
					
						flag = 1;
					}
				}
				break;
		
			default:
				break;
		}
	}

	if (func_24() == -1)
	{
		if (func_88() != flag)
		{
			num = 0;
		
			if (flag)
				num = 2;
			else
				num = 1;
		
			func_89();
			func_90(Global_1310750.f_16071, false, num, false, false);
		}
	}

	func_91(flag);

	if (func_24() == -1)
		func_92(essParam1 == func_28() && flag);

	return;
}

void func_18() // Position - 0xA82 Hash - 0xFC5207E3 ^0xFC5207E3
{
	func_93(bLocal_603);
	func_94(bLocal_603);

	if (func_24() == -1)
		if (essLocal_602 != 5)
			func_95(essLocal_602);

	if (essLocal_602 != 5)
	{
		func_96(essLocal_602);
		func_97(essLocal_602, 4);
		func_97(essLocal_602, 8);
		func_91(0);
	
		if (func_24() == -1)
			func_92(false);
	}

	func_98(false);

	if (func_28() == essLocal_602)
		func_99(false);

	if (func_100(func_36(essLocal_602), true))
		func_102(func_101(essLocal_602), true, false);

	func_103(essLocal_602);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_19(int iParam0, int iParam1) // Position - 0xB1A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_20(eStackSize essParam0) // Position - 0xB29 Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_43(essParam0))
		return false;

	return func_35(essParam0, 8);
}

BOOL func_21(int iParam0) // Position - 0xB47 Hash - 0xC67CC87B ^0x33ED18E1
{
	return Global_1894899.f_7 && iParam0 != false;
}

void func_22(int iParam0) // Position - 0xB5A Hash - 0xDD4F2B2E ^0xED52CD7
{
	Global_1894899.f_7 = Global_1894899.f_7 - Global_1894899.f_7 && iParam0;
	return;
}

BOOL func_23(eStackSize essParam0) // Position - 0xB78 Hash - 0xFD12E018 ^0x1318B2F3
{
	int num;

	num = func_104(essParam0);

	if (num >= 6 || num < 0)
		return false;

	return Global_40.f_9571[num /*10*/].f_1 == 5;
}

BOOL func_24() // Position - 0xBAB Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_25(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xBB9 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_105())
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
		num = func_106(Global_1898164.f_1[0 /*5*/]);
	
		if (func_107(num) && func_108(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_37(Global_1898164.f_1[0 /*5*/]))
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

int func_26(int iParam0) // Position - 0xDBD Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_27(int iParam0) // Position - 0xDCF Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_37(iParam0))
		return 0;

	return func_110(func_109(iParam0));
}

eStackSize func_28() // Position - 0xDEF Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

BOOL func_29(int iParam0) // Position - 0xDFF Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_24() != -1)
		return false;

	if (!func_107(iParam0))
		return false;

	return func_100(Global_1347702[iParam0 /*49*/].f_15, true);
}

BOOL func_30(int iParam0) // Position - 0xE30 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_100(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_31() // Position - 0xE8F Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_24() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_32() // Position - 0xEB4 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_33() // Position - 0xEC5 Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

BOOL func_34(eStackSize essParam0, BOOL bParam1) // Position - 0xED6 Hash - 0xAA3DFEB ^0xAA3DFEB
{
	int i;

	if (func_24() != -1)
		return false;

	for (i = 0; i <= Global_40.f_1094 - 1; i = i + 1)
	{
		if (Global_40.f_450[i] == essParam0)
			if (!bParam1 || Global_1347702[i /*49*/].f_13 & 16384 == 0)
				return true;
	}

	return false;
}

BOOL func_35(eStackSize essParam0, BOOL bParam1) // Position - 0xF33 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[essParam0 /*11*/] && bParam1 != false;
}

int func_36(eStackSize essParam0) // Position - 0xF66 Hash - 0x86C097F ^0x86C097F
{
	!func_111(essParam0);
	return Global_1888801[essParam0 /*35*/];
}

BOOL func_37(int iParam0) // Position - 0xF80 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

Hash func_38(int iParam0) // Position - 0xFB3 Hash - 0x4B5954D4 ^0xDC7F3754
{
	if (!func_37(iParam0))
		return -15;

	return func_112(iParam0);
}

BOOL func_39(int iParam0) // Position - 0xFD1 Hash - 0xD02571D6 ^0x9878B86D
{
	return iParam0 != -15;
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0xFDF Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_113(*uParam0);
	i = func_114(*uParam0);
	num2 = func_115(*uParam0);
	j = func_116(*uParam0);
	k = func_117(*uParam0);
	l = func_118(*uParam0);

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

	for (m = func_119(i, num); num2 > m; m = func_119(i, num))
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

	func_120(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_41(Hash hParam0, BOOL bParam1) // Position - 0x1167 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_122(func_121(), hParam0, bParam1);
}

void func_42() // Position - 0x117B Hash - 0x266E15A1 ^0x37D7E029
{
	volLocal_15 = VOLUME::CREATE_VOLUME_BOX(-4218.855f, -3453.4224f, 39.443707f, 0f, 0f, -45.106964f, 73.68802f, 101.13927f, 15.122076f);
	volLocal_15.f_1 = VOLUME::CREATE_VOLUME_CYLINDER(-4216.379f, -3461.8984f, 37.054733f, 0f, 0f, 0f, 122.25478f, 119.88284f, 59.38927f);
	volLocal_15.f_2 = VOLUME::CREATE_VOLUME_BOX(-4222.206f, -3511.0352f, 39.897823f, 0f, 0f, 121.44001f, 3.746872f, 6.170708f, 7.757661f);
	volLocal_15.f_3 = VOLUME::CREATE_VOLUME_BOX(-4185.451f, -3417.0598f, 40.826317f, 0f, 0f, -46.916077f, 6.688188f, 4.307337f, 11.721104f);
	volLocal_15.f_4 = VOLUME::CREATE_VOLUME_BOX(-4224.079f, -3452.3367f, 43.408596f, 0f, 0f, -32.25804f, 22.951206f, 17.305296f, 24.018118f);
	return;
}

BOOL func_43(eStackSize essParam0) // Position - 0x125E Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

BOOL func_44(eStackSize essParam0) // Position - 0x1274 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_43(essParam0))
		return false;

	return func_35(essParam0, 33554432);
}

BOOL func_45(eStackSize essParam0) // Position - 0x1295 Hash - 0xA5F6A570 ^0xA5F6A570
{
	if (!func_43(essParam0))
		return false;

	switch (essParam0)
	{
		case 32:
			return true;
	
		case 35:
			return true;
	
		case 65:
			return true;
	
		case 95:
			return true;
	}

	return false;
}

BOOL func_46(eStackSize essParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x12E8 Hash - 0xCBEA69A ^0xCBEA69A
{
	BOOL flag;

	flag = func_24() != -1;

	switch (essParam0)
	{
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
		
			if (flag)
				*uParam2 = 142;
			break;
	
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 22:
			if (bParam4)
				*uParam1 = 715;
			else
				*uParam1 = 715;
		
			*uParam2 = 723;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 26:
			*uParam1 = 472;
		
			if (bParam3)
				*uParam2 = 500;
			else
				*uParam2 = 502;
		
			if (flag)
				*uParam2 = 472;
			break;
	
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 29:
			*uParam1 = &func_2;
			*uParam2 = &func_2;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
		
			if (flag)
				*uParam2 = 509;
			break;
	
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
		
			if (flag)
				*uParam2 = 380;
			break;
	
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
		
			if (flag)
				*uParam2 = 566;
			break;
	
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 69:
			*uParam1 = 589;
		
			if (bParam3)
				*uParam2 = 598;
			else
				*uParam2 = 612;
		
			if (flag)
				*uParam2 = 590;
			break;
	
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 76:
			*uParam1 = 0;
		
			if (bParam3)
				*uParam2 = 47;
			else
				*uParam2 = 63;
		
			if (flag)
				*uParam2 = 5;
			break;
	
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
	
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
		
			if (flag)
				*uParam2 = 384;
			break;
	
		case 82:
			*uParam1 = 659;
		
			if (bParam3)
				*uParam2 = 673;
			else
				*uParam2 = 690;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
		
			if (flag)
				*uParam2 = 443;
			break;
	
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 105:
			*uParam1 = 69;
		
			if (bParam3)
				*uParam2 = 127;
			else
				*uParam2 = 136;
		
			if (flag)
				*uParam2 = 72;
			break;
	
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
		
			if (flag)
				*uParam2 = 375;
			break;
	
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case MICRO:
			*uParam1 = 834;
			*uParam2 = 857;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}

	if (*uParam1 == -1 || *uParam2 == -1)
		return false;

	return true;
}

BOOL func_47(int iParam0) // Position - 0x19A8 Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

BOOL func_48(int iParam0) // Position - 0x19BF Hash - 0xDEBEF6D4 ^0xDEBEF6D4
{
	switch (iParam0)
	{
		case 64:
			return true;
	
		case 65:
			return true;
	
		case 66:
			return true;
	
		case 67:
			return true;
	
		case 68:
			return true;
	
		default:
		
	}

	return false;
}

int func_49(int iParam0, BOOL bParam1) // Position - 0x1A02 Hash - 0x9F6E755B ^0x9F6E755B
{
	if (!func_47(iParam0))
		return 0;

	if (!func_123(iParam0, 2))
		return 0;

	if (func_123(iParam0, 32) && !bParam1)
	{
		func_125(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_124(iParam0)));
	
		if (func_24() == -1)
		{
			if (func_123(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_126(iParam0));
				func_127(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_126(iParam0));
		}
	
		return 0;
	}

	if (!func_128(iParam0) && func_24() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_126(iParam0)))
	{
		func_127(iParam0, 128);
		return 1;
	}

	func_125(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_124(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_126(iParam0));

	if (func_123(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_126(iParam0));
		func_127(iParam0, 2048);
	}

	return 1;
}

void func_50(var uParam0, Volume volParam1, int iParam2) // Position - 0x1AED Hash - 0x5828D351 ^0x6F1B8F85
{
	if (uParam0->f_61 >= 20)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	if (!func_129(iParam2))
		return;

	uParam0->[uParam0->f_61 /*3*/] = volParam1;
	uParam0->[uParam0->f_61 /*3*/].f_1 = iParam2;
	uParam0->[uParam0->f_61 /*3*/].f_2 = 0;
	uParam0->f_61 = uParam0->f_61 + 1;
	return;
}

void func_51() // Position - 0x1B46 Hash - 0xD01DCB7C ^0x44A5AB64
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		uLocal_472[i /*14*/] = { func_130(1, i) };
		uLocal_472[i /*14*/].f_6 = func_131(1, i);
	}

	uLocal_472[0 /*14*/].f_7 = joaat("gatling_gun");
	func_132(&uLocal_538, uLocal_472[0 /*14*/].f_7);
	uLocal_472[0 /*14*/].f_11 = 1;
	uLocal_472[0 /*14*/].f_12 = 1;
	uLocal_472[1 /*14*/].f_7 = joaat("gatling_gun");
	uLocal_472[1 /*14*/].f_11 = 1;
	uLocal_472[1 /*14*/].f_12 = 1;
	return;
}

void func_52() // Position - 0x1BCD Hash - 0x4AF014CE ^0xFC492C41
{
	int i;

	iLocal_20.f_199 = 17;
	iLocal_20.f_201 = iLocal_20.f_199;
	iLocal_568 = 0;
	iLocal_569 = 16;

	for (i = iLocal_568; i <= iLocal_569; i = i + 1)
	{
		uLocal_244[i /*9*/] = joaat("g_m_m_unibanditos_01");
	}

	func_132(&uLocal_538, uLocal_244[0 /*9*/]);
	func_133();
	return;
}

void func_53(var uParam0, int iParam1, var uParam2, int iParam3) // Position - 0x1C1D Hash - 0x3EA50A6 ^0x852380A1
{
	BOOL flag;

	func_134(128);
	uParam0->f_205 = iParam1;
	flag = func_135(&(uParam0->f_5), 1048576);
	uParam0->f_202 = { func_136(uParam0->f_205, flag) };
	uParam0->f_187 = MISC::GET_RANDOM_INT_IN_RANGE(7502, 10000);

	if (uParam0->f_205 == 16)
		func_137(uParam0->f_202, 120f, false);
	else
		func_137(uParam0->f_202, 80f, false);

	func_138(uParam0, true);
	func_139(&(uParam0->f_155));
	func_140(&(uParam0->f_155));
	func_141(&(uParam0->f_155));
	func_142(&(uParam0->f_155), true);
	func_143(&(uParam0->f_155), BUILTIN::TO_FLOAT(iParam3));
	func_59(&(uParam0->f_155), 50);
	func_144(&(uParam0->f_155), 8f);
	func_145(uParam2);
	func_146(uParam0);

	if (!func_147(65))
		func_148(uParam0);

	func_149(uParam0);
	func_150(uParam0);
	func_151(&(uParam0->f_38), Global_35, "ARTHUR", false);
	return;
}

void func_54(var uParam0, BOOL bParam1) // Position - 0x1D0D Hash - 0x57EE9974 ^0x57EE9974
{
	if (bParam1)
		func_152(uParam0, 4);
	else
		func_153(uParam0, 4);

	return;
}

void func_55(var uParam0, BOOL bParam1) // Position - 0x1D2B Hash - 0x8AC5A45 ^0x8880FB31
{
	if (bParam1)
		func_153(&(uParam0->f_1), 1);
	else
		func_152(&(uParam0->f_1), 1);

	return;
}

void func_56(var uParam0, BOOL bParam1) // Position - 0x1D4D Hash - 0x776268CE ^0x776268CE
{
	if (bParam1)
		func_152(uParam0, 8);
	else
		func_153(uParam0, 8);

	return;
}

void func_57(var uParam0, BOOL bParam1) // Position - 0x1D6D Hash - 0x82AFDBEA ^0x82AFDBEA
{
	if (bParam1)
		func_152(uParam0, 32);
	else
		func_153(uParam0, 32);

	return;
}

void func_58(var uParam0, BOOL bParam1) // Position - 0x1D8D Hash - 0xCB123803 ^0xCB123803
{
	if (bParam1)
		func_152(uParam0, 2);
	else
		func_153(uParam0, 2);

	return;
}

void func_59(var uParam0, int iParam1) // Position - 0x1DAB Hash - 0x4F8BE4B5 ^0x8254350D
{
	uParam0->f_21 = iParam1;
	return;
}

BOOL func_60(var uParam0, var uParam1, var uParam2, char* sParam3, const char* sParam4) // Position - 0x1DB9 Hash - 0x39FBFBFC ^0x4E522F44
{
	if (uParam0->f_201 > 0)
		PED::_RESERVE_AMBIENT_PEDS(uParam0->f_201);
	else
		PED::_RESERVE_AMBIENT_PEDS(uParam0->f_199);

	if (func_154(&(uParam0->f_1), uParam1, uParam2, sParam3, sParam4) && PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
		return true;

	return false;
}

void func_61(var uParam0, int iParam1) // Position - 0x1DFD Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_62(var uParam0, var uParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0x1E0A Hash - 0x61C48B22 ^0xD482B2F4
{
	if (iParam4 < 0)
		iParam4 = uParam0->f_199 - 1;

	if (uParam0->f_197 < iParam3)
		uParam0->f_197 = iParam3;

	if (uParam1->[uParam0->f_197 /*9*/] != 0)
		func_155(&uParam1->[uParam0->f_197 /*9*/], hParam2, true);

	uParam0->f_197 = uParam0->f_197 + 1;

	if (uParam0->f_197 > iParam4)
		return true;

	return false;
}

void func_63(var uParam0) // Position - 0x1E62 Hash - 0xDFBBD126 ^0x2BEFF25B
{
	int i;
	var entityCoords;
	var entityRotation;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	int num;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (!uParam0->[i /*14*/].f_11)
		{
			if (uParam0->[i /*14*/].f_7 != 0)
			{
				if (uParam0->[i /*14*/].f_13 > -1)
				{
					num = uParam0->[i /*14*/].f_13;
					offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->[num /*14*/], uParam0->[i /*14*/].f_6, uParam0->[i /*14*/]) };
					uParam0->[i /*14*/].f_8 = OBJECT::CREATE_OBJECT(uParam0->[i /*14*/].f_7, offsetFromCoordAndHeadingInWorldCoords, true, true, false, false, true);
				
					if (!uParam0->[num /*14*/].f_11)
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->[i /*14*/].f_8, uParam0->[num /*14*/].f_8, 0, uParam0->[i /*14*/], uParam0->[i /*14*/].f_3, false, false, false, false, 2, true, false, false);
					else
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->[i /*14*/].f_8, uParam0->[num /*14*/].f_9, 0, uParam0->[i /*14*/], uParam0->[i /*14*/].f_3, false, false, false, false, 2, true, false, false);
				}
				else
				{
					uParam0->[i /*14*/].f_8 = OBJECT::CREATE_OBJECT(uParam0->[i /*14*/].f_7, uParam0->[i /*14*/], true, true, true, false, true);
					entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->[i /*14*/].f_8, true, false) };
				}
			
				ENTITY::SET_ENTITY_ROTATION(uParam0->[i /*14*/].f_8, uParam0->[i /*14*/].f_3, 2, true);
			
				if (uParam0->[i /*14*/].f_12)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->[i /*14*/].f_8, uParam0->[i /*14*/].f_12);
				}
				else
				{
					PHYSICS::ACTIVATE_PHYSICS(uParam0->[i /*14*/].f_8);
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uParam0->[i /*14*/].f_8, false);
				}
			}
		}
		else
		{
			uParam0->[i /*14*/].f_9 = VEHICLE::CREATE_VEHICLE(uParam0->[i /*14*/].f_7, uParam0->[i /*14*/], uParam0->[i /*14*/].f_6, true, true, false, false);
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->[i /*14*/].f_8))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->[i /*14*/].f_8, true, false) };
			entityRotation = { ENTITY::GET_ENTITY_ROTATION(uParam0->[i /*14*/].f_8, 2) };
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->[i /*14*/].f_9))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->[i /*14*/].f_9, true, false) };
			entityRotation = { ENTITY::GET_ENTITY_ROTATION(uParam0->[i /*14*/].f_9, 2) };
		}
	}

	return;
}

void func_64() // Position - 0x2072 Hash - 0x47DF0816 ^0x25127332
{
	ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uLocal_472[0 /*14*/].f_9, false);
	ENTITY::SET_ENTITY_HEADING(uLocal_472[0 /*14*/].f_9, 311.8031f);

	if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(uLocal_472[0 /*14*/].f_9))
		ENTITY::_0x445D7D8EA66E373E(uLocal_472[0 /*14*/].f_9, 0, ENTITY::GET_ENTITY_COORDS(uLocal_472[0 /*14*/].f_9, true, false), 0f, 0f, 0f, -1f, 1, 0, 0, 0, 0, 0, 0);

	ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uLocal_472[1 /*14*/].f_9, false);
	ENTITY::SET_ENTITY_HEADING(uLocal_472[1 /*14*/].f_9, 360.08f);

	if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(uLocal_472[1 /*14*/].f_9))
		ENTITY::_0x445D7D8EA66E373E(uLocal_472[1 /*14*/].f_9, 0, ENTITY::GET_ENTITY_COORDS(uLocal_472[1 /*14*/].f_9, true, false), 0f, 0f, 0f, -1f, 1, 0, 0, 0, 0, 0, 0);

	return;
}

void func_65(BOOL bParam0) // Position - 0x2122 Hash - 0xB9372918 ^0xFDB90C60
{
	int i;

	for (i = 0; i <= iLocal_20.f_199 - 1; i = i + 1)
	{
		if (func_156(uLocal_244[i /*9*/].f_5, 0, true))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_244[i /*9*/].f_5, bParam0);
			PED::SET_PED_CONFIG_FLAG(uLocal_244[i /*9*/].f_5, 130, bParam0);
			PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), uLocal_244[i /*9*/].f_5, 7, 0, true);
		}
	}

	return;
}

void func_66(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x2183 Hash - 0x4DAB337D ^0x6B88FD8A
{
	int i;

	if (iParam3 < 0)
		iParam3 = uParam0->f_199 - 1;

	for (i = iParam2; i <= iParam3; i = i + 1)
	{
		if (func_156(uParam1->[i /*9*/].f_5, 0, true))
			ENTITY::SET_ENTITY_VISIBLE(uParam1->[i /*9*/].f_5, true);
	}

	return;
}

void func_67() // Position - 0x21CB Hash - 0xA6A517D6 ^0x5B42F36A
{
	int i;

	for (i = 0; i <= iLocal_20.f_199 - 1; i = i + 1)
	{
		if (func_156(uLocal_244[i /*9*/].f_5, 0, true))
		{
			func_157(&(iLocal_20.f_155), uLocal_244[i /*9*/].f_5);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uLocal_244[i /*9*/].f_5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_244[i /*9*/].f_5, BF_UseEnemyAccuracyScaling, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_244[i /*9*/].f_5, BF_0x61EB63A3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_244[i /*9*/].f_5, BF_DisableFleeFromCombat, true);
			PED::SET_PED_HEARING_RANGE(uLocal_244[i /*9*/].f_5, 10f);
			PED::SET_PED_COMBAT_MOVEMENT(uLocal_244[i /*9*/].f_5, CM_WillAdvance);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_244[i /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(uLocal_244[i /*9*/].f_5, true, false), 5f, false, false, false);
			PED::SET_PED_COMBAT_RANGE(uLocal_244[i /*9*/].f_5, 1);
		
			switch (i)
			{
				case 4:
					PED::SET_PED_DEFENSIVE_AREA_VOLUME(uLocal_244[i /*9*/].f_5, volLocal_15, false, false, false);
					break;
			
				case 5:
					PED::SET_PED_DEFENSIVE_AREA_VOLUME(uLocal_244[i /*9*/].f_5, volLocal_15, false, false, false);
					break;
			
				case 9:
					WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_244[i /*9*/].f_5, true, true);
					PED::SET_PED_COMBAT_MOVEMENT(uLocal_244[i /*9*/].f_5, CM_Stationary);
					PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_244[i /*9*/].f_5, BF_CanUseVehicles, false);
					break;
			
				case 10:
					WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_244[i /*9*/].f_5, true, true);
					PED::SET_PED_COMBAT_MOVEMENT(uLocal_244[i /*9*/].f_5, CM_Stationary);
					PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_244[i /*9*/].f_5, BF_CanUseVehicles, false);
					break;
			
				case 11:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_244[i /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(uLocal_244[i /*9*/].f_5, true, false), 5f, false, false, false);
					break;
			
				case 12:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_244[i /*9*/].f_5, ENTITY::GET_ENTITY_COORDS(uLocal_244[i /*9*/].f_5, true, false), 10f, false, false, false);
					break;
			
				case 13:
					PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_244[i /*9*/].f_5, BF_CanCharge, false);
					break;
			
				case 14:
					PED::SET_PED_DEFENSIVE_AREA_VOLUME(uLocal_244[i /*9*/].f_5, volLocal_15, false, false, false);
					PED::SET_PED_COMBAT_RANGE(uLocal_244[i /*9*/].f_5, 2);
					break;
			
				case 16:
					PED::SET_PED_HEARING_RANGE(uLocal_244[i /*9*/].f_5, 30f);
					PED::SET_PED_SEEING_RANGE(uLocal_244[i /*9*/].f_5, 30f);
					break;
			}
		}
	}

	return;
}

void func_68() // Position - 0x23EA Hash - 0x4FC23A4A ^0xC102E611
{
	int i;
	Hash scenarioHash;
	Hash scenarioHash2;

	scenarioHash = joaat("world_human_guard_scout");
	scenarioHash2 = joaat("world_human_guard_military");

	for (i = 0; i <= iLocal_20.f_199 - 1; i = i + 1)
	{
		if (func_156(uLocal_244[i /*9*/].f_5, 0, true))
		{
			func_158(uLocal_244[i /*9*/].f_5, joaat("group_repeater"), -1, 1, false, 1056964608, 1065353216, false);
		
			switch (i)
			{
				case 0:
					uLocal_570[i] = TASK::CREATE_SCENARIO_POINT_HASH(scenarioHash, uLocal_244[i /*9*/].f_1, uLocal_244[i /*9*/].f_4, 0, 0, true);
					TASK::TASK_USE_SCENARIO_POINT(uLocal_244[i /*9*/].f_5, uLocal_570[i], 0, -1, false, true, 0, false, -1082130432, false);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uLocal_244[i /*9*/].f_5);
					break;
			
				case 1:
					uLocal_570[i] = TASK::CREATE_SCENARIO_POINT_HASH(scenarioHash2, uLocal_244[i /*9*/].f_1, uLocal_244[i /*9*/].f_4, 0, 0, true);
					TASK::TASK_USE_SCENARIO_POINT(uLocal_244[i /*9*/].f_5, uLocal_570[i], 0, -1, false, true, 0, false, -1082130432, false);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uLocal_244[i /*9*/].f_5);
					break;
			
				case 2:
					uLocal_570[i] = TASK::CREATE_SCENARIO_POINT_HASH(scenarioHash, uLocal_244[i /*9*/].f_1, uLocal_244[i /*9*/].f_4, 0, -1f, true);
					TASK::TASK_USE_SCENARIO_POINT(uLocal_244[i /*9*/].f_5, uLocal_570[i], 0, -1, false, true, 0, false, -1082130432, false);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uLocal_244[i /*9*/].f_5);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uLocal_244[i /*9*/].f_5);
					break;
			
				case 3:
					uLocal_570[i] = TASK::CREATE_SCENARIO_POINT_HASH(scenarioHash2, uLocal_244[i /*9*/].f_1, uLocal_244[i /*9*/].f_4, 0, -1f, true);
					TASK::TASK_USE_SCENARIO_POINT(uLocal_244[i /*9*/].f_5, uLocal_570[i], 0, -1, false, true, 0, false, -1082130432, false);
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uLocal_244[i /*9*/].f_5);
					break;
			}
		}
	}

	return;
}

void func_69() // Position - 0x25B4 Hash - 0xD1B1915 ^0xD1B1915
{
	uLocal_544[0] = "GANG_TAUNT_GEN";
	uLocal_544[1] = "GANG_TAUNT_GEN";
	uLocal_544[2] = "GANG_TAUNT_GEN";
	uLocal_544[3] = "TAUNT_GEN_MALE";
	uLocal_544[4] = "TAUNT_GEN_MALE";
	uLocal_544[5] = "TAUNT_GEN_MALE";
	uLocal_544[6] = "TAUNT_GEN_MALE";
	uLocal_544[7] = "TAUNT_GEN_MALE";
	return;
}

void func_70() // Position - 0x2604 Hash - 0x14F26A01 ^0x8D01EF85
{
	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_588[0]))
		uLocal_588[0] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_player_pickup_money_stack_80cm"), -4182.402f, -3437.5364f, 36.0652f, 234.84f, 5f, 0, false);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_588[1]))
		uLocal_588[1] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_player_take_money_pile_table"), -4181.315f, -3437.357f, 36.03745f, 148.23f, 5f, 0, false);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_588[5]))
		uLocal_588[5] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_player_take_money_pile_table"), -4182.402f, -3437.5364f, 36.0652f, 234.84f, 5f, 0, false);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_588[6]))
		uLocal_588[6] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_player_pickup_money_stack_80cm"), -4187.917f, -3435.6514f, 36.1281f, 156.1638f, 5f, 0, false);

	return;
}

BOOL func_71(var uParam0) // Position - 0x26DC Hash - 0x1C39A58F ^0xF7BED7BF
{
	float distanceBetweenCoords;

	if (_IS_NULL_VECTOR(uParam0->f_6.f_20))
		return true;

	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_6.f_20, true);
	distanceBetweenCoords = distanceBetweenCoords * distanceBetweenCoords;

	if (!CAM::IS_SPHERE_VISIBLE(uParam0->f_6.f_20, uParam0->f_6.f_23) && distanceBetweenCoords > uParam0->f_6.f_24)
		return false;

	if (CAM::IS_SPHERE_VISIBLE(uParam0->f_6.f_20, uParam0->f_6.f_23) && distanceBetweenCoords > uParam0->f_6.f_25)
		return false;

	return true;
}

void func_72() // Position - 0x2762 Hash - 0x7B636298 ^0x47E4A7B9
{
	float num;

	switch (iLocal_20.f_3)
	{
		case 0:
			func_160();
		
			if (func_161())
			{
				if (func_162(5, 100))
				{
					func_163();
				}
				else
				{
					func_164(&iLocal_20, 1);
					func_165();
				}
			
				AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_START");
			}
			else if (func_166())
			{
				func_167(2);
				func_164(&iLocal_20, 1);
			}
			break;
	
		case 1:
			if (!func_168(2))
			{
				if (func_169())
				{
					func_170(iLocal_20.f_192, 0, "FINAL_WARNING", "", -1f, 2, false, 0, 1, true, true, 291934926, true, false, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_20.f_192, Global_35, -1, false, 1);
					func_164(&iLocal_20, 2);
					func_171(&uLocal_553);
				}
			}
			else if (func_172())
			{
				func_163();
			}
			break;
	
		case 2:
			if (func_166())
			{
				func_167(2);
				func_170(iLocal_20.f_192, 0, "TAUNT_GEN_LOCATION", "", -1f, 1, false, 0, 1, true, true, 291934926, true, false, 0);
				func_163();
			}
		
			if (!TASK::IS_PED_STILL(Global_35))
				if (!PED::IS_PED_FACING_PED(Global_35, iLocal_20.f_192, 50f))
					func_171(&uLocal_553);
		
			num = func_173(iLocal_20.f_192, Global_35, true, true);
		
			if (num < 35f && func_174(&uLocal_553) > 5f || func_173(uLocal_244[2 /*9*/].f_5, Global_35, true, true) < 10f || func_173(uLocal_244[3 /*9*/].f_5, Global_35, true, true) < 10f)
				func_163();
			break;
	
		case 4:
			break;
	
		case 5:
			func_175();
			iLocal_20.f_198 = func_176(&uLocal_244, iLocal_20.f_199, iLocal_20.f_199);
			func_177();
			func_178();
		
			if (func_179() || iLocal_20.f_198 == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
				func_164(&iLocal_20, 7);
			}
			break;
	
		case 7:
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Fort_Mercer", false, true);
			func_164(&iLocal_20, 8);
			break;
	
		case 8:
			func_164(&iLocal_20, 9);
			break;
	
		case 9:
			if (func_180(&iLocal_20, &uLocal_244, 85, 1, true))
				func_164(&iLocal_20, 10);
			break;
	
		case 10:
			break;
	}

	if (iLocal_20.f_3 <= 5)
		func_181(&uLocal_244, &iLocal_20);

	if (!func_73(&iLocal_20, 5))
		if (func_182(&iLocal_20, &uLocal_244, iLocal_20.f_199, 0, 0))
			func_163();
	else if (iLocal_20.f_3 > 8)
		func_183(&uLocal_244, &iLocal_20, 100, 1084227584);

	return;
}

BOOL func_73(var uParam0, int iParam1) // Position - 0x29D6 Hash - 0x817B2FBB ^0x24ACEDD7
{
	if (uParam0->f_3 < iParam1)
		return false;

	return true;
}

void func_74(var uParam0, var uParam1) // Position - 0x29EC Hash - 0x9FC74137 ^0x412D631E
{
	int i;
	var entityCoords;

	for (i = 0; i < 2; i = i + 1)
	{
		if (uParam0->f_196 >= uParam0->f_199)
			uParam0->f_196 = 0;
	
		if (func_156(uParam1->[uParam0->f_196 /*9*/].f_5, 0, true))
		{
			uParam1->[i /*9*/].f_8 = func_173(uParam1->[uParam0->f_196 /*9*/].f_5, Global_35, false, true);
		
			if (uParam1->[i /*9*/].f_8 < func_184(uParam0))
			{
				if (!func_185(&(uParam1->[uParam0->f_196 /*9*/].f_7), 16))
				{
					func_186(&(uParam1->[uParam0->f_196 /*9*/].f_7), 32);
					func_187(&(uParam1->[uParam0->f_196 /*9*/].f_7), 16, true);
				}
			}
			else if (!func_185(&(uParam1->[uParam0->f_196 /*9*/].f_7), 32))
			{
				func_186(&(uParam1->[uParam0->f_196 /*9*/].f_7), 16);
				func_187(&(uParam1->[uParam0->f_196 /*9*/].f_7), 32, true);
			}
		
			if (!func_135(&(uParam0->f_5), 65536))
			{
				if (func_188(uParam1->[uParam0->f_196 /*9*/].f_5, 45f, 30f, uParam1->[i /*9*/].f_8, 70f))
				{
					entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam1->[uParam0->f_196 /*9*/].f_5, true, false) };
					func_189(&(uParam0->f_5), 65536);
				}
			}
		}
	
		uParam0->f_196 = uParam0->f_196 + 1;
	}

	return;
}

void func_75() // Position - 0x2B25 Hash - 0xF1516AB9 ^0x7AC997E3
{
	int i;

	if (func_135(&(iLocal_20.f_5), 131072))
		return;

	if (!func_135(&(iLocal_20.f_5), 65536))
		return;

	for (i = 0; i < iLocal_20.f_199; i = i + 1)
	{
		switch (i)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 11:
			case 12:
			case 13:
			case 14:
				if (func_156(uLocal_244[i /*9*/].f_5, 0, true))
					func_190(&uLocal_244[i /*9*/], joaat("BLIP_STYLE_ENEMY"), joaat("BLIP_MODIFIER_ENEMY_ON_GUARD"));
				break;
		}
	}

	func_189(&(iLocal_20.f_5), 131072);
	return;
}

void func_76(var uParam0) // Position - 0x2BD3 Hash - 0xF1846A1C ^0xFD8A5144
{
	if (uParam0->f_195 == 0)
	{
		func_191(uParam0);
	
		if (func_192(Global_1888801[uParam0->f_205 /*35*/]) == 3)
			if (func_156(Global_35, 0, true))
				PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
	
		func_193(uParam0);
	}

	if (!func_135(&(uParam0->f_5), 1073741824))
	{
		if (!func_194())
		{
			if (uParam0->f_3 >= 4 && uParam0->f_3 < 8)
			{
				func_195(uParam0, true);
				func_196(uParam0, true);
			}
		}
		else if (uParam0->f_3 >= 8)
		{
			func_195(uParam0, false);
			func_197(false);
		}
	}

	if (uParam0->f_195 < 5)
		uParam0->f_195 = uParam0->f_195 + 1;
	else
		uParam0->f_195 = 0;

	return;
}

void func_77() // Position - 0x2C88 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_78(int iParam0, int iParam1) // Position - 0x2C90 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_79(var uParam0, int iParam1) // Position - 0x2C9F Hash - 0x718DD1EF ^0x7E064505
{
	return uParam0->f_62 && iParam1 != false;
}

BOOL func_80() // Position - 0x2CB0 Hash - 0x463DA432 ^0x3948CA04
{
	return func_78(Global_1935630, 4096);
}

BOOL func_81(var uParam0, int iParam1) // Position - 0x2CC3 Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_82(eStackSize essParam0) // Position - 0x2CD4 Hash - 0x97598EC0 ^0xADF7FB13
{
	if (!func_43(essParam0))
		return false;

	return Global_1888801[essParam0 /*35*/].f_20 == 1 || Global_1888801[essParam0 /*35*/].f_20 == 2 && !func_198(essParam0);
}

BOOL func_83(eStackSize essParam0, int iParam1) // Position - 0x2D14 Hash - 0xA98B69C6 ^0xAD9FDA10
{
	if (essParam0 < 0 || essParam0 >= 150)
		return false;

	return Global_1888801[essParam0 /*35*/].f_21 && iParam1 != false;
}

int func_84() // Position - 0x2D41 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

void func_85(eStackSize essParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x2D4F Hash - 0xDB16000A ^0x12158D70
{
	BOOL flag;
	const char* str;
	char* str2;
	Hash hash;
	int num;
	int num2;
	var unk;
	float temperatureAtCoords;
	char* str3;
	char* str4;
	var unk2;

	if (!func_199())
		return;

	str = func_200(essParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &flag);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (bParam3)
			return;
	
		str = "DISTRICT_GRIZZLIES";
	}

	if (!func_201(iParam4))
		if (func_43(essParam0))
			iParam4 = func_203(func_202(essParam0));
		else
			iParam4 = func_203(iParam1);

	if (func_201(iParam4))
		hash = func_204(iParam4);

	if (flag && bParam3)
	{
		str2 = func_206(func_205(iParam2));
	}
	else if (func_207(iParam1, 2) || func_208(iParam4, 2) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			else
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		Global_1894899.f_9 = 1;
	}
	else if (func_43(essParam0) && func_35(essParam0, 16777216) && !Global_1894899.f_9)
	{
		str2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (hash >= 1 && !Global_1894899.f_9)
	{
		str2 = MISC::VAR_STRING(2, "REGION_BOUNTY", hash);
		Global_1894899.f_9 = 1;
	}
	else
	{
		num = func_116(func_121());
		num2 = func_117(func_121());
	
		if (num2 < 10)
			TEXT_LABEL_APPEND_STRING(&unk, "0", 8);
	
		TEXT_LABEL_APPEND_INT(&unk, num2, 8);
		temperatureAtCoords = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
	
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			str4 = "AM";
		
			if (num >= 12)
			{
				str4 = "PM";
			
				if (num > 12)
					num = num - 12;
			}
			else if (num == 0)
			{
				num = 12;
			}
		
			str3 = "TIME_AND_TEMP_C";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_209(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(674, str3, num, func_210(&unk, joaat("COLOR_PURE_WHITE")), str4, func_210(&unk2, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			str3 = "TIME_AND_TEMP_C_24";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_209(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F_24";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(162, str3, num, func_210(&unk, joaat("COLOR_PURE_WHITE")), func_210(&unk2, joaat("COLOR_PURE_WHITE")));
		}
	
		Global_1894899.f_9 = 0;
	}

	Global_1934266.f_148 = func_211(str, str2, 4000, 0, 0, 0, false, true);
	return;
}

void func_86(var uParam0, int iParam1) // Position - 0x2FB8 Hash - 0x53A96DDB ^0xB6A79257
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

void func_87(eStackSize essParam0, BOOL bParam1) // Position - 0x2FCB Hash - 0x1E78A51E ^0x8BB44A98
{
	if (Global_1572887.f_10 && func_24() == false)
		return;

	if (func_212(128))
		return;

	if (!func_213(essParam0))
		return;

	if (func_35(essParam0, 32))
		return;

	func_8(essParam0, 32);
	func_214(&Global_1935630, 8192);
	func_216(func_215(joaat("discovered"), joaat("AREAS")), 1);

	switch (func_202(essParam0))
	{
		case 0:
		case 2:
		case 11:
			func_216(func_215(joaat("discovered"), joaat("lowlands_areas")), 1);
			break;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_216(func_215(joaat("discovered"), joaat("mountain_areas")), 1);
			break;
	
		case 3:
		case 10:
			func_216(func_215(joaat("discovered"), joaat("foothills_areas")), 1);
			break;
	
		case 4:
		case 9:
			func_216(func_215(joaat("discovered"), joaat("plains_areas")), 1);
			break;
	
		case 8:
			func_216(func_215(joaat("discovered"), joaat("guama_areas")), 1);
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			func_216(func_215(joaat("discovered"), joaat("new_austin_areas")), 1);
			break;
	}

	switch (essParam0)
	{
		case 0:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_CRAWDAD_WILLIES"));
			break;
	
		case 1:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MACOMBS_END"));
			break;
	
		case 2:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MERKINS_WALLER"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_FISHING_SPOT"));
			break;
	
		case 6:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_HAGEN_ORCHARDS"));
			break;
	
		case 7:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_SERIAL_KILLER"));
			break;
	
		case 9:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_SHADY_BELLE"));
			break;
	
		case 10:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_SILTWATER_STRAND"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_SILTWATER_STRAND"));
			break;
	
		case 11:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_EVENTAREA_APPLESEED_TIMBER_COMPANY"));
			break;
	
		case 12:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_BERYLS_DREAM"));
			break;
	
		case 15:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_EVENTAREA_FORT_RIGGS"));
			break;
	
		case 16:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_HANGING_DOG_RANCH"));
			break;
	
		case 17:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LONE_MULE_STEAD"));
			break;
	
		case 21:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_PAINTED_SKY"));
			break;
	
		case 22:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SETTLEMENT_PRONGHORN_RANCH"));
			break;
	
		case 24:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_STILT_SHACK"));
			break;
	
		case 25:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SHACK_SHEPHERDS_RISE"));
			break;
	
		case 26:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_TAXIDERMIST_HOUSE"));
			break;
	
		case 27:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_VALLEY_VIEW"));
			break;
	
		case 28:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_WALLACE_OVERLOOK"));
			break;
	
		case 29:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_WATSONS_CABIN"));
			break;
	
		case 30:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_CANEBREAK_MANOR"));
			break;
	
		case 31:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COPPERHEAD_LANDING"));
			break;
	
		case 34:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_FIRWOOD_RISE"));
			break;
	
		case 36:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_SIX_POINT_CABIN"));
			break;
	
		case 37:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_BEECHERS_HOPE"));
			break;
	
		case 40:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_ADLER_RANCH"));
			break;
	
		case 42:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CHEZ_PORTER"));
			break;
	
		case 43:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_COLTER"));
			break;
	
		case 44:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_FROZEN_EXPLORERS"));
			break;
	
		case 45:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MILLESANI_CLAIM"));
			break;
	
		case 49:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_EWING_BASIN"));
			break;
	
		case 54:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_THE_LOFT"));
			break;
	
		case 55:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_VETERANS_HOMESTEAD"));
			break;
	
		case 62:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_OLD_GREENBANK_MILL"));
			break;
	
		case 63:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SHACK_BEECHERS_C"));
			break;
	
		case 64:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CARMODY_DELL"));
			break;
	
		case 65:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_CORNWALL_KEROSENE_TAR"));
			break;
	
		case 66:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_GUTHRIE_FARM"));
			break;
	
		case 68:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_DOWNES_RANCH"));
			break;
	
		case 71:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_HORSESHOE_OVERLOOK"));
			break;
	
		case 72:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_LARNED_SOD"));
			break;
	
		case 74:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LUCKYS_CABIN"));
			break;
	
		case 77:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_ABERDEEN_PIG_FARM"));
			break;
	
		case 79:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_BEAVER_HOLLOW"));
			break;
	
		case 80:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_BLACK_BALSAM_RISE"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_IDENTICAL_TWINS_01"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_IDENTICAL_TWINS_02"));
			break;
	
		case 82:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_BUTCHER_CREEK"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_POISON_LEAK"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_29"));
			break;
	
		case 83:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_DOVERHILL"));
			break;
	
		case 85:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_ANGRY_ISOLATIONIST"));
			break;
	
		case 86:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_MACLEANS_HOUSE"));
			break;
	
		case 87:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MOSSY_FLATS"));
			break;
	
		case 89:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_WILLARDS_REST"));
			break;
	
		case 91:
			MAP::_MAP_DISCOVER_REGION(85299473);
			break;
	
		case 96:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CATFISH_JACKSONS"));
			break;
	
		case 98:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_CLEMENS_POINT"));
			break;
	
		case 99:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COMPSONS_STEAD"));
			break;
	
		case 100:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_HILL_HAVEN_RANCH"));
			break;
	
		case 102:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_LONNIES_SHACK"));
			break;
	
		case 104:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RADLEYS_PASTURE"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RADLEYS_HOUSE"));
			break;
	
		case 106:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_SLAVE_PEN"));
			break;
	
		case 107:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_AURORA_BASIN"));
			break;
	
		case 109:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COCHINAY"));
			break;
	
		case 112:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_TANNERS_REACH"));
			MAP::_MAP_DISCOVER_REGION(-960425936);
			break;
	
		case 114:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_GAPTOOTH_BREACH"));
			break;
	
		case 121:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_COOTS_CHAPEL"));
			break;
	
		case 122:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LAKE_DON_JULIO_HOUSE"));
			break;
	
		case 123:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RILEYS_CHARGE"));
			break;
	
		case 124:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_RIDGEWOOD_FARM"));
			break;
	}

	if (bParam1)
		func_8(essParam0, 64);

	return;
}

BOOL func_88() // Position - 0x3640 Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_217() != -1;
}

void func_89() // Position - 0x365B Hash - 0x18ACD9D3 ^0xB2ADEAB8
{
	if (!func_218(Global_1327479))
		return;

	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));

	func_219(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
	return;
}

void func_90(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x36CE Hash - 0xEF5C52D ^0xEF5C52D
{
	int i;
	int num;

	bParam1;

	if (func_220() == 0 && !bParam1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		num = Global_1310750.f_13321[i /*9*/];
	
		if (func_218(num) && !func_221(num, iParam2) && !bParam3 || !func_222(num) && !bParam4 || !func_223(num))
			if (num != iParam0)
				func_224(i);
	}

	return;
}

void func_91(BOOL bParam0) // Position - 0x375C Hash - 0xC844E228 ^0x91C15397
{
	BOOL flag;

	flag = Global_1894899 & true != 0;

	if (flag == bParam0)
		return;

	if (bParam0)
	{
		Global_1894899 = Global_1894899 | true;
		STATS::_0xDA26263C07CCE9C2(1);
	}
	else
	{
		Global_1894899 = Global_1894899 - Global_1894899 & true;
		STATS::_0xDA26263C07CCE9C2(0);
	}

	return;
}

void func_92(BOOL bParam0) // Position - 0x37A3 Hash - 0x3703A155 ^0x3703A155
{
	if (bParam0)
		Global_1894899 = Global_1894899 | 2;
	else
		Global_1894899 = Global_1894899 - Global_1894899 & 2;

	return;
}

void func_93(BOOL bParam0) // Position - 0x37CC Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_94(BOOL bParam0) // Position - 0x37D4 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_95(int iParam0) // Position - 0x37DC Hash - 0x315657D9 ^0xE44E20F6
{
	int num;
	int i;

	num = func_225(iParam0);

	if (num == -1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		func_226(Global_1392240.f_1[num /*18*/].f_6[i]);
		Global_1392240.f_1[num /*18*/].f_6[i] = 0;
	}

	return;
}

void func_96(int iParam0) // Position - 0x382C Hash - 0xB8A02AF0 ^0xD2299111
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (Global_1914319.f_3[i /*446*/].f_9 == iParam0)
			func_227(i);
	}

	return;
}

void func_97(int iParam0, BOOL bParam1) // Position - 0x385F Hash - 0x2B17ED40 ^0x23FC9AA5
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = Global_23118[iParam0 /*11*/] - Global_23118[iParam0 /*11*/] && bParam1;
		return;
	}

	Global_1058888.f_40545[iParam0 /*11*/] = Global_1058888.f_40545[iParam0 /*11*/] - Global_1058888.f_40545[iParam0 /*11*/] && bParam1;
	return;
}

void func_98(BOOL bParam0) // Position - 0x38B8 Hash - 0xF265C2CE ^0xF265C2CE
{
	if (bParam0)
		Global_1894899 = Global_1894899 | 4;
	else
		Global_1894899 = Global_1894899 - Global_1894899 & 4;

	return;
}

void func_99(BOOL bParam0) // Position - 0x38E1 Hash - 0xC60C8BA6 ^0xC60C8BA6
{
	eStackSize i;

	if (func_24() != -1)
		return;

	for (i = 0; i < Global_1360165; i = i + 1)
	{
		if (!func_228(i) && !func_229(i) && i != Global_1357549.f_1497)
			if (!func_230(i, 33, true) || !ENTITY::DOES_ENTITY_EXIST(Global_1360165[i /*1157*/]) || !ENTITY::IS_ENTITY_ON_SCREEN(Global_1360165[i /*1157*/]))
				func_231(i, 0, false, true, bParam0);
	}

	return;
}

BOOL func_100(int iParam0, BOOL bParam1) // Position - 0x396E Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_192(iParam0))
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

int func_101(eStackSize essParam0) // Position - 0x399F Hash - 0xFEAF0852 ^0xE7A5A7C6
{
	switch (essParam0)
	{
		case 9:
			return -868076593;
	
		case 16:
			return -857964358;
	
		case 36:
			return 1205826474;
	
		case 79:
			return 273461605;
	
		case 114:
			return 1804403874;
	
		case 118:
			return 1360745816;
	
		case 125:
			return -796902762;
	
		case 127:
			return 2136753624;
	
		case 129:
			return 1672143046;
	
		default:
		
	}

	return -1;
}

void func_102(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3A2E Hash - 0x5A64C5C8 ^0x6D52F178
{
	!bParam2;

	switch (iParam0)
	{
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_234();
			func_232(iParam0);
			break;
	
		case -1925798111:
			func_232(-1925798111);
			func_233(-919512195);
			func_233(420709909);
			func_233(1703426636);
			break;
	
		case -1838352012:
			func_233(-1674179981);
			func_233(-1835851517);
			func_232(-1838352012);
			break;
	
		case -1835851517:
			func_233(-1674179981);
			func_233(-1838352012);
			func_232(-1835851517);
			break;
	
		case -1738165526:
			func_232(-1738165526);
			func_233(0);
			func_233(473295046);
			break;
	
		case -1717960576:
			func_233(210001842);
			func_232(-1717960576);
			break;
	
		case -1674179981:
			func_233(-1835851517);
			func_233(-1838352012);
			func_232(-1674179981);
			break;
	
		case -1612662716:
			func_233(1822001510);
			func_232(-1612662716);
			break;
	
		case -1414537028:
			func_233(38162571);
			func_233(1350391819);
			func_233(54073871);
			func_232(-1414537028);
			break;
	
		case -1311865656:
			func_232(-1311865656);
			func_233(1509509592);
			func_233(-959357075);
			func_233(405586984);
			break;
	
		case -1271608261:
			func_233(-150493654);
			func_233(1846061697);
			func_233(-1145519186);
			func_232(-1271608261);
			break;
	
		case -1223121209:
			func_232(-1223121209);
			func_233(630808005);
			break;
	
		case -1145519186:
			func_233(-150493654);
			func_233(-1271608261);
			func_233(1846061697);
			func_232(-1145519186);
			break;
	
		case -1124061431:
			func_233(198200492);
			func_232(-1124061431);
			func_233(52706132);
			func_233(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_232(-1080627546);
			else
				func_233(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_233(-538889627);
			func_233(-538880323);
			func_233(-1056767524);
			func_232(iParam0);
			break;
	
		case -959357075:
			func_232(-959357075);
			func_233(1509509592);
			func_233(405586984);
			func_233(-1311865656);
			break;
	
		case -919512195:
			func_232(-919512195);
			func_233(-1925798111);
			func_233(420709909);
			func_233(1703426636);
			break;
	
		case -664252410:
			func_233(2019386373);
			func_233(2109952320);
			func_232(-664252410);
			break;
	
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_235();
			func_232(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_232(-524145696);
			else
				func_233(-524145696);
		
			func_233(1626481264);
			func_233(282809459);
			break;
	
		case -502324015:
			func_233(1497516462);
			func_233(2016141805);
			func_233(1010885152);
			func_232(-502324015);
			break;
	
		case -434590080:
			func_233(1376646519);
			func_233(931649776);
			func_233(1743048395);
			func_233(449774763);
			func_232(-434590080);
			break;
	
		case -404698347:
			func_233(1306158345);
			func_233(1952610440);
			func_233(-223469678);
			func_233(1517904467);
			func_232(-404698347);
			break;
	
		case -259123672:
			func_233(198200492);
			func_233(-1124061431);
			func_233(52706132);
			func_232(-259123672);
			break;
	
		case -223469678:
			func_233(1306158345);
			func_233(1952610440);
			func_233(-404698347);
			func_233(1517904467);
			func_232(-223469678);
			break;
	
		case -150493654:
			func_233(-1271608261);
			func_233(1846061697);
			func_233(-1145519186);
			func_232(-150493654);
			break;
	
		case 0:
			func_232(0);
			func_233(473295046);
			func_233(-1738165526);
			break;
	
		case 38162571:
			func_233(-1414537028);
			func_233(1350391819);
			func_233(54073871);
			func_232(38162571);
			break;
	
		case 52706132:
			func_233(198200492);
			func_233(-1124061431);
			func_232(52706132);
			func_233(-259123672);
			break;
	
		case 54073871:
			func_233(-1414537028);
			func_233(38162571);
			func_233(1350391819);
			func_232(54073871);
			break;
	
		case 198200492:
			func_232(198200492);
			func_233(-1124061431);
			func_233(52706132);
			func_233(-259123672);
			break;
	
		case 210001842:
			func_233(-1717960576);
			func_232(210001842);
			break;
	
		case 280705402:
			func_233(1766284049);
			func_233(1926308480);
			func_232(280705402);
			break;
	
		case 282809459:
			func_232(282809459);
			func_233(1626481264);
			func_233(-524145696);
			break;
	
		case 405586984:
			func_232(405586984);
			func_233(1509509592);
			func_233(-959357075);
			func_233(-1311865656);
			break;
	
		case 420709909:
			func_232(420709909);
			func_233(-919512195);
			func_233(-1925798111);
			func_233(1703426636);
			break;
	
		case 439465264:
			if (func_236(1609506757))
				if (bParam1)
					func_232(439465264);
				else
					func_233(439465264);
			break;
	
		case 449774763:
			func_233(1376646519);
			func_233(931649776);
			func_233(-434590080);
			func_233(1743048395);
			func_232(449774763);
			break;
	
		case 473295046:
			func_232(473295046);
			func_233(0);
			func_233(-1738165526);
			break;
	
		case 630808005:
			func_232(630808005);
			func_233(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_232(885203519);
			else
				func_233(885203519);
			break;
	
		case 931649776:
			func_233(1376646519);
			func_233(-434590080);
			func_233(1743048395);
			func_233(449774763);
			func_232(931649776);
			break;
	
		case 932909855:
			func_232(932909855);
			func_233(2051822093);
			break;
	
		case 1010885152:
			func_233(1497516462);
			func_233(2016141805);
			func_232(1010885152);
			func_233(-502324015);
			break;
	
		case 1306158345:
			func_233(1952610440);
			func_233(-223469678);
			func_233(-404698347);
			func_233(1517904467);
			func_232(1306158345);
			break;
	
		case 1350391819:
			func_233(-1414537028);
			func_233(38162571);
			func_233(54073871);
			func_232(1350391819);
			break;
	
		case 1376646519:
			func_233(931649776);
			func_233(-434590080);
			func_233(1743048395);
			func_233(449774763);
			func_232(1376646519);
			break;
	
		case 1453909576:
			func_232(1453909576);
			func_233(1643531967);
			break;
	
		case 1497516462:
			func_232(1497516462);
			func_233(2016141805);
			func_233(1010885152);
			func_233(-502324015);
			break;
	
		case 1509509592:
			func_232(1509509592);
			func_233(405586984);
			func_233(-959357075);
			func_233(-1311865656);
			break;
	
		case 1517904467:
			func_233(1306158345);
			func_233(1952610440);
			func_233(-223469678);
			func_233(-404698347);
			func_232(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_233(439465264);
				func_232(1609506757);
			}
			else
			{
				func_233(1609506757);
				func_233(439465264);
			}
			break;
	
		case 1626481264:
			func_232(1626481264);
			func_233(-524145696);
			func_233(282809459);
			break;
	
		case 1643531967:
			func_232(1643531967);
			func_233(1453909576);
			break;
	
		case 1703426636:
			func_232(1703426636);
			func_233(-919512195);
			func_233(-1925798111);
			func_233(420709909);
			break;
	
		case 1743048395:
			func_233(1376646519);
			func_233(931649776);
			func_233(-434590080);
			func_233(449774763);
			func_232(1743048395);
			break;
	
		case 1766284049:
			func_233(280705402);
			func_233(1926308480);
			func_232(1766284049);
			break;
	
		case 1822001510:
			func_233(-1612662716);
			func_232(1822001510);
			break;
	
		case 1846061697:
			func_233(-150493654);
			func_233(-1271608261);
			func_233(-1145519186);
			func_232(1846061697);
			break;
	
		case 1926308480:
			func_233(1766284049);
			func_233(280705402);
			func_232(1926308480);
			break;
	
		case 1952610440:
			func_233(1306158345);
			func_233(-223469678);
			func_233(-404698347);
			func_233(1517904467);
			func_232(1952610440);
			break;
	
		case 2016141805:
			func_233(1497516462);
			func_232(2016141805);
			func_233(1010885152);
			func_233(-502324015);
			break;
	
		case 2019386373:
			func_233(-664252410);
			func_233(2109952320);
			func_232(2019386373);
			break;
	
		case 2051822093:
			func_232(2051822093);
			func_233(932909855);
			break;
	
		case 2109952320:
			func_233(2019386373);
			func_233(-664252410);
			func_232(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_236(iParam0))
					func_232(iParam0);
			else if (func_236(iParam0))
				func_233(iParam0);
			break;
	}

	return;
}

void func_103(eStackSize essParam0) // Position - 0x4555 Hash - 0xCF8B2392 ^0xF3E20207
{
	PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Fort_Mercer", false, true);
	func_237(&uLocal_244, &iLocal_20, &uLocal_538, SCRIPTS::GET_ID_OF_THIS_THREAD(), "FORTM");
	return;
}

int func_104(eStackSize essParam0) // Position - 0x458C Hash - 0xF4C24F3 ^0xF4C24F3
{
	switch (essParam0)
	{
		case 9:
			return 2;
	
		case 16:
			if (!func_31() && !func_30(59))
				return 0;
			else
				return 4;
			break;
	
		case 36:
			return 0;
	
		case 79:
			return 1;
	
		case 109:
			return 3;
	
		case 114:
			return 5;
	
		case 118:
			return 5;
	
		case 125:
			return 5;
	
		case 127:
			return 5;
	
		case 129:
			return 5;
	}

	return -1;
}

BOOL func_105() // Position - 0x461F Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_106(int iParam0) // Position - 0x4672 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_37(iParam0))
		return -1;

	return func_238(func_109(iParam0));
}

BOOL func_107(int iParam0) // Position - 0x4692 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_108(int iParam0, int iParam1) // Position - 0x46A8 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_109(int iParam0) // Position - 0x46B7 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_110(BOOL bParam0) // Position - 0x46F5 Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

BOOL func_111(eStackSize essParam0) // Position - 0x4702 Hash - 0x5000025C ^0x5000025C
{
	switch (essParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return true;
	
		default:
		
	}

	return false;
}

int func_112(int iParam0) // Position - 0x474D Hash - 0x3C887384 ^0xFB463C80
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_6;

	return -15;
}

int func_113(int iParam0) // Position - 0x476E Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_114(int iParam0) // Position - 0x4793 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_115(int iParam0) // Position - 0x47A6 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_116(Hash hParam0) // Position - 0x47B9 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 12) & 31;
}

int func_117(Hash hParam0) // Position - 0x47CC Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 6) & 63;
}

int func_118(int iParam0) // Position - 0x47DE Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_119(int iParam0, int iParam1) // Position - 0x47F0 Hash - 0x893AC59E ^0x893AC59E
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

void func_120(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x488A Hash - 0xA65AB937 ^0xA65AB937
{
	func_240(uParam0, iParam6);
	func_241(uParam0, iParam5);
	func_242(uParam0, iParam4);
	func_243(uParam0, iParam3);
	func_244(uParam0, iParam2);
	func_245(uParam0, iParam1);
	return;
}

Hash func_121() // Position - 0x48C2 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_122(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x48CE Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_246(hParam1) || !func_246(hParam0))
			return true;

	return hParam0 > hParam1;
}

BOOL func_123(int iParam0, BOOL bParam1) // Position - 0x48FB Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_24() != -1)
		return false;

	if (!func_47(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

Hash func_124(int iParam0) // Position - 0x4929 Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_47(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

void func_125(int iParam0, PersChar pchParam1) // Position - 0x4947 Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_47(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

PersChar func_126(int iParam0) // Position - 0x4968 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_47(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_127(int iParam0, BOOL bParam1) // Position - 0x4988 Hash - 0x452DF11A ^0x452DF11A
{
	if (func_24() != -1)
		return;

	if (!func_47(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

BOOL func_128(int iParam0) // Position - 0x49C1 Hash - 0xF5815C8D ^0xF5815C8D
{
	if (!func_47(iParam0))
		return false;

	if (!func_123(iParam0, 2))
		return false;

	return true;
}

BOOL func_129(int iParam0) // Position - 0x49E7 Hash - 0x1F2EC350 ^0x1F2EC350
{
	return iParam0 > -1 && iParam0 < 12;
}

Vector3 func_130(int iParam0, int iParam1) // Position - 0x49FD Hash - 0x7CA5B2D1 ^0x7CA5B2D1
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -4185.3027f, -3414.6663f, 36.088f;
			
				case 1:
					return -4183.363f, -3416.9995f, 36.088f;
			
				case 2:
					return -4223.218f, -3513.2644f, 36.0825f;
			
				case 3:
					return -4220.5215f, -3511.4426f, 36.0853f;
			
				case 4:
					return -4191.7954f, -3438.3806f, 36.088f;
			
				case 5:
					return -4193.48f, -3438.976f, 36.088f;
			
				case 6:
					return -4202.151f, -3448.898f, 36.0879f;
			
				case 7:
					return -4199.615f, -3448.9473f, 36.0879f;
			
				case 8:
					return -4214.395f, -3442.8284f, 36.0879f;
			
				case 9:
					return -4244.199f, -3476.4539f, 36.0879f;
			
				case 10:
					return -4246.9087f, -3475.4004f, 36.0879f;
			
				case 11:
					return -4174.078f, -3422.8608f, 41.5635f;
			
				case 12:
					return -4186.242f, -3417.5596f, 41.5154f;
			
				case 13:
					return -4215.506f, -3503.0657f, 41.6512f;
			
				case 14:
					return -4234.949f, -3425.8845f, 44.4805f;
			
				case 15:
					return -4229.719f, -3454.2197f, 36.0879f;
			
				case 16:
					return -4229.2783f, -3460.1257f, 36.0879f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return -4248.0166f, -3484.603f, 36.0854f;
			
				case 1:
					return -4227.841f, -3492.9856f, 36.0879f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return -4206.052f, -3461.4783f, 44.3314f;
			
				case 1:
					return -4205.312f, -3462.0054f, 44.3241f;
			
				case 2:
					return -4231.334f, -3456.1025f, 36.1879f;
			
				case 3:
					return -4230.5874f, -3455.087f, 36.0879f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return -4194.4336f, -3468.969f, 44.2737f;
			
				case 1:
					return -4194.9785f, -3468.005f, 44.3203f;
			
				case 2:
					return -4230.7314f, -3456.4238f, 36.1879f;
			
				case 3:
					return -4246.011f, -3455.7522f, 36.0854f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return -4223.404f, -3462.2095f, 43.5573f;
			
				case 1:
					return -4218.6406f, -3464.7783f, 43.5698f;
			
				case 2:
					return -4227.35f, -3467.501f, 36.1879f;
			
				case 3:
					return -4229.376f, -3462.7324f, 36.0879f;
			}
			break;
	}

	return 0f, 0f, 0f;
}

float func_131(int iParam0, int iParam1) // Position - 0x4DAA Hash - 0x4843E36 ^0x4843E36
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 308.1447f;
			
				case 1:
					return -41.8553f;
			
				case 2:
					return 224.1447f;
			
				case 3:
					return 196.1447f;
			
				case 4:
					return 56.1447f;
			
				case 5:
					return 34.1447f;
			
				case 6:
					return 204.1447f;
			
				case 7:
					return 146.1447f;
			
				case 8:
					return 150.1447f;
			
				case 9:
					return 128.1447f;
			
				case 10:
					return 164.1447f;
			
				case 11:
					return 40.22f;
			
				case 12:
					return -45.36f;
			
				case 13:
					return 238.32f;
			
				case 14:
					return 50.4f;
			
				case 15:
					return 253.44f;
			
				case 16:
					return 148.2941f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 321.36f;
			
				case 1:
					return 3.08f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 148.2941f;
			
				case 1:
					return 148.2941f;
			
				case 2:
					return 148.2941f;
			
				case 3:
					return 148.2941f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 121.931f;
			
				case 1:
					return 121.931f;
			
				case 2:
					return 210.96f;
			
				case 3:
					return 121.931f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 148.2941f;
			
				case 1:
					return 148.2941f;
			
				case 2:
					return 133.8644f;
			
				case 3:
					return 151.92f;
			}
			break;
	}

	return 0f;
}

void func_132(var uParam0, int iParam1) // Position - 0x501F Hash - 0xA35D0DE2 ^0xA35D0DE2
{
	int i;
	int num;

	if (iParam1 == 0)
		return;

	num = -1;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == 0)
		{
			num = i;
			break;
		}
	
		uParam0->[i] == iParam1;
	}

	if (num > -1)
		uParam0->[num] = iParam1;

	return;
}

void func_133() // Position - 0x5077 Hash - 0x2AA8FEEA ^0x43750904
{
	int i;
	var unk;

	for (i = 0; i < iLocal_20.f_199; i = i + 1)
	{
		unk = { func_247(0, i) };
		uLocal_244[i /*9*/].f_1 = { unk };
		uLocal_244[i /*9*/].f_4 = unk.f_3;
	}

	return;
}

void func_134(BOOL bParam0) // Position - 0x50B9 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1898091 = Global_1898091 - Global_1898091 && bParam0;
	return;
}

BOOL func_135(var uParam0, int iParam1) // Position - 0x50D1 Hash - 0xE46677C2 ^0xE46677C2
{
	return *uParam0 && iParam1 != false;
}

Vector3 func_136(int iParam0, BOOL bParam1) // Position - 0x50E1 Hash - 0x9E07EEAB ^0x9E07EEAB
{
	Vector3 vector;

	switch (iParam0)
	{
		case 9:
			vector = { 1897.1232f, -1863.1569f, 46.0415f };
			break;
	
		case 16:
			vector = { -2205.06f, 704.86f, 107.62f };
			break;
	
		case 36:
			vector = { -45.93f, 1230.82f, 175.19f };
			break;
	
		case 79:
			vector = { 2351f, 1335.5f, 102.4f };
			break;
	
		case 114:
			vector = { -5984.121f, -3249.9824f, -22.5604f };
			break;
	
		case 118:
			vector = { -4201.647f, -3440.7024f, 47.5009f };
			break;
	
		case 125:
			vector = { -3962.0208f, -2137.9565f, -5.9562f };
			break;
	
		case 127:
			vector = { -1411.8567f, -2333.4512f, 42.1056f };
			break;
	
		case 129:
			vector = { -5415.0547f, -3654.25f, -13.4989f };
			break;
	
		default:
			return 0f, 0f, 0f;
	}

	MISC::GET_DISTANCE_BETWEEN_COORDS(vector, VOLUME::GET_VOLUME_COORDS(func_248(iParam0)), false) > 2f && !bParam1;
	return vector;
}

void func_137(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x521A Hash - 0xDCCB3575 ^0xAC48C8F6
{
	int num;

	num = 16384;

	if (bParam4)
		num = num | 524288;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

void func_138(var uParam0, BOOL bParam1) // Position - 0x5241 Hash - 0xF241D01 ^0xE8783258
{
	char* zoneName;

	switch (uParam0->f_205)
	{
		case 9:
			zoneName = "AZ_hideout_shady_belle";
			break;
	
		case 16:
			zoneName = "AZ_hideout_hanging_dog_ranch";
			break;
	
		case 36:
			zoneName = "AZ_hideout_six_point_cabin";
			break;
	
		case 79:
			zoneName = "AZ_hideout_beaver_hollow";
			break;
	
		case 118:
			zoneName = "AZ_hideout_fort_mercer";
			break;
	
		case 125:
			zoneName = "AZ_hideout_Twin_Rocks";
			break;
	
		case 127:
			zoneName = "AZ_hideout_thieves_landing";
			break;
	
		default:
			return;
	}

	if (func_135(&(uParam0->f_5), 262144) == bParam1)
		return;

	if (bParam1)
		func_189(&(uParam0->f_5), 262144);
	else
		func_249(&(uParam0->f_5), 262144);

	AUDIO::SET_AMBIENT_ZONE_STATE(zoneName, bParam1, true);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(zoneName, true, true);
	return;
}

void func_139(var uParam0) // Position - 0x5307 Hash - 0xE59FE01F ^0xE59FE01F
{
	func_251(uParam0, func_250(uParam0) - 6f);
	func_252(uParam0, true);
	return;
}

void func_140(var uParam0) // Position - 0x5324 Hash - 0xD2F4094 ^0xD2F4094
{
	func_253(uParam0, false);
	func_254(uParam0, false);
	func_142(uParam0, true);
	func_255(uParam0, true);
	func_256(uParam0, false);
	func_257(uParam0, true);
	func_258(uParam0, true, true, true);
	return;
}

void func_141(var uParam0) // Position - 0x535F Hash - 0xB48216EA ^0xB48216EA
{
	func_259(uParam0, true);
	func_58(uParam0, true);
	func_56(uParam0, true);
	return;
}

void func_142(var uParam0, BOOL bParam1) // Position - 0x537C Hash - 0x97140DD8 ^0x96C23302
{
	if (bParam1)
		func_153(&(uParam0->f_1), 256);
	else
		func_152(&(uParam0->f_1), 256);

	return;
}

void func_143(var uParam0, float fParam1) // Position - 0x53A2 Hash - 0x4F8BE4B5 ^0xBFDDA9A4
{
	uParam0->f_24 = fParam1;
	return;
}

void func_144(var uParam0, float fParam1) // Position - 0x53B0 Hash - 0x4F8BE4B5 ^0x3B01A701
{
	uParam0->f_23 = fParam1;
	return;
}

void func_145(var uParam0) // Position - 0x53BE Hash - 0x4F5F4526 ^0x417FCC8F
{
	int i;
	int randomIntInRange;
	var unk;

	if (*uParam0 <= 1)
		return;

	for (i = *uParam0 - 1; i >= 1; i = i + -1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, i);
		unk = uParam0->[randomIntInRange];
		uParam0->[randomIntInRange] = uParam0->[i];
		uParam0->[i] = unk;
	}

	return;
}

void func_146(var uParam0) // Position - 0x540B Hash - 0x623754B4 ^0xFAC2C5E1
{
	switch (uParam0->f_205)
	{
		case 16:
			break;
	
		case 79:
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_147(int iParam0) // Position - 0x5432 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_24() != -1)
		return false;

	if (!func_107(iParam0))
		return false;

	return func_260(Global_1347702[iParam0 /*49*/].f_15);
}

void func_148(var uParam0) // Position - 0x5462 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_149(var uParam0) // Position - 0x546A Hash - 0x7A27F900 ^0x84F60F33
{
	uParam0->f_136.f_9 = { 0f, 0f, 0f };
	uParam0->f_136.f_12 = 1;
	uParam0->f_136.f_13 = 30f;
	uParam0->f_136.f_14 = 100f;
	uParam0->f_136.f_15 = -1;
	uParam0->f_136.f_16 = 1500;
	uParam0->f_136.f_17 = 1000;
	uParam0->f_136.f_6 = 25f;
	return;
}

void func_150(var uParam0) // Position - 0x54BE Hash - 0x11BEBFA4 ^0x10F9C422
{
	int num;
	var statId;

	num = 0;

	switch (uParam0->f_205)
	{
		case 9:
			num = joaat("ex_confed");
			break;
	
		case 16:
			if (!func_31())
				num = joaat("odriscolls");
			else
				num = joaat("ranchers");
			break;
	
		case 36:
			num = joaat("odriscolls");
			break;
	
		case 79:
			num = joaat("inbred");
			break;
	
		case 125:
			num = joaat("banditos");
			break;
	
		case 127:
			num = joaat("banditos");
			break;
	
		default:
			uParam0->f_200 = 0;
			return;
	}

	if (num != 0)
	{
		statId = { func_215(joaat("killed"), num) };
		STATS::STAT_ID_GET_INT(&statId, &(uParam0->f_200));
	}

	return;
}

void func_151(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x5570 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_261(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

void func_152(BOOL bParam0, int iParam1) // Position - 0x55CD Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_153(BOOL bParam0, int iParam1) // Position - 0x55DE Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

BOOL func_154(var uParam0, var uParam1, var uParam2, char* sParam3, const char* sParam4) // Position - 0x55F3 Hash - 0xBF0873C2 ^0x3CC41268
{
	switch (*uParam0)
	{
		case 0:
			func_262(uParam1);
			func_263(uParam2);
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3) || func_264(sParam3, sParam4))
				*uParam0 = 1;
			break;
	
		case 1:
			if (!func_265(uParam1))
				return false;
		
			if (!func_266(uParam2))
				return false;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				if (!HUD::TEXT_BLOCK_IS_LOADED(sParam3))
					return false;
		
			return true;
	}

	return false;
}

void func_155(var uParam0, Hash hParam1, BOOL bParam2) // Position - 0x5676 Hash - 0x571C916B ^0x76B26A69
{
	Ped mount;

	if (*uParam0 == 0)
		return;

	uParam0->f_5 = func_267(*uParam0, uParam0->f_1, uParam0->f_4, true, true, 0, true, true, true, false, false, false, false);

	if (!func_185(&(uParam0->f_7), 2))
	{
		if (func_185(&(uParam0->f_7), 8))
		{
			mount = func_267(joaat("a_c_horse_morgan_flaxenchestnut"), uParam0->f_1, uParam0->f_4, true, true, 0, true, true, true, false, false, false, false);
			PED::SET_PED_ONTO_MOUNT(uParam0->f_5, mount, -1, true);
		}
	
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_5);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, hParam1);
	
		if (func_185(&(uParam0->f_7), 4))
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam0->f_5, uParam0->f_1, 2f, true, false, false);
	
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_5, !bParam2);
	}
	else
	{
		func_268(uParam0->f_5, false, false);
	}

	PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
	return;
}

BOOL func_156(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x5746 Hash - 0x41649F50 ^0x41649F50
{
	iParam1 = iParam1 | 1;

	if (bParam2)
		iParam1 = iParam1 | 2;

	return func_1(pedParam0, iParam1);
}

void func_157(var uParam0, Ped pedParam1) // Position - 0x5767 Hash - 0x2765CDF7 ^0x146F5B1C
{
	PED::SET_PED_CONFIG_FLAG(pedParam1, 168, true);
	EVENT::_SET_EVENT_TRACKER_FOR_PED(pedParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(pedParam1, "UsesTracker", true);
	return;
}

Hash func_158(Ped pedParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x578F Hash - 0x77B0C49D ^0x77B0C49D
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;

	flag = func_269(iParam3, 1);
	flag2 = func_269(iParam3, 2);
	flag3 = !func_269(iParam3, 4);
	flag4 = func_269(iParam3, 8);
	flag5 = !func_269(iParam3, 16);
	flag6 = func_269(iParam3, 32);
	flag7 = func_269(iParam3, 64);
	return func_270(pedParam0, iParam1, flag, flag2, bParam4, flag3, flag4, iParam5, iParam6, iParam2, flag5, flag6, bParam7, flag7);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x57FC Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_160() // Position - 0x5826 Hash - 0xF9E092AA ^0xED781DD8
{
	var taskSequenceId;

	if (MISC::IS_BULLET_IN_AREA(-4185.43f, -3416.9382f, 45.6745f, 10f, true))
	{
		if (func_156(uLocal_244[12 /*9*/].f_5, 0, true) && !func_271(uLocal_244[12 /*9*/].f_5, SCRIPT_TASK_PERFORM_SEQUENCE))
		{
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_COWER(0, 3500, 0, 0);
			func_272(uLocal_244[12 /*9*/].f_5, &taskSequenceId, 0f, 0f, true, true);
		}
	}

	return;
}

BOOL func_161() // Position - 0x5894 Hash - 0x7D58C9B4 ^0xBE9B6E06
{
	var taskSequenceId;

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::GET_VOLUME_COORDS(volLocal_15.f_3), Global_36, false) > 25f && MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::GET_VOLUME_COORDS(volLocal_15.f_2), Global_36, false) > 25f)
		return false;

	iLocal_20.f_190 = func_273(&uLocal_244, &iLocal_20, false, false, 0, 3);

	if (iLocal_20.f_190 < 0 || PED::CAN_PED_SEE_ENTITY(uLocal_244[iLocal_20.f_190 /*9*/].f_5, Global_35, true, false) != 1)
		return false;

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::GET_VOLUME_COORDS(volLocal_15.f_3), Global_36, false) < 25f)
		iLocal_20.f_190 = 0;
	else
		iLocal_20.f_190 = 3;

	iLocal_20.f_192 = uLocal_244[iLocal_20.f_190 /*9*/].f_5;
	MISC::REGISTER_INTERACTION_LOCKON_PROMPT(iLocal_20.f_192, "", 24f, 0, 8, 0, 0, 0, false, -1);

	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_15.f_2, true, 0) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_15.f_3, true, 0))
	{
		if (func_162(5, 100))
		{
			func_170(iLocal_20.f_192, Global_35, "ITS_MALE_EXTREME_RECOGNIZE", "", -1082130432, 0, false, 0, 1, true, true, 291934926, true, false, 0);
		}
		else
		{
			func_170(iLocal_20.f_192, 0, "HEADS_UP_HIDEOUT", "", -1f, 1, false, 0, 1, true, true, 291934926, true, false, 0);
			func_274(&uLocal_553, false);
		}
	}

	func_275(iLocal_20.f_192, Global_36, 3, true, 1);
	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
	TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 6000, -1082130432, -1082130432, -1082130432);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_20.f_192, true, false), 30f, 0, false, false, false, false);
	func_272(iLocal_20.f_192, &taskSequenceId, 0, 0, true, true);
	func_276(iLocal_20.f_205);
	func_277();
	return true;
}

BOOL func_162(int iParam0, int iParam1) // Position - 0x5A4E Hash - 0x986996DA ^0x986996DA
{
	int num;
	BOOL flag;

	if (!func_278(iParam0, true))
		return false;

	if (iParam1 >= 0 && iParam1 <= 100)
		num = iParam1;
	else if (iParam1 > 100)
		num = 100;
	else
		num = func_279(iParam0);

	flag = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < num;
	return flag;
}

void func_163() // Position - 0x5AA1 Hash - 0x7D1EC07C ^0x50B43EB1
{
	int i;

	for (i = 0; i < iLocal_20.f_199; i = i + 1)
	{
		func_280(i);
	}

	func_164(&iLocal_20, 5);
	func_171(&uLocal_553);
	func_65(true);
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_ACTION");
	return;
}

void func_164(var uParam0, int iParam1) // Position - 0x5AE3 Hash - 0x6448AA89 ^0xD616D68E
{
	iParam1 == uParam0->f_3;
	uParam0->f_3 = iParam1;
	return;
}

void func_165() // Position - 0x5AFA Hash - 0xA1D39DB7 ^0x896DA760
{
	int i;

	for (i = 0; i <= iLocal_20.f_199 - 1; i = i + 1)
	{
		if (func_156(uLocal_244[i /*9*/].f_5, 0, true))
			PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(PLAYER::PLAYER_ID(), uLocal_244[i /*9*/].f_5, 3, 0, true);
	}

	return;
}

BOOL func_166() // Position - 0x5B3D Hash - 0xAACA7178 ^0x25F4FF0C
{
	if (!func_281(Global_35, volLocal_15, true, 0))
		return false;

	iLocal_20.f_190 = func_273(&uLocal_244, &iLocal_20, false, false, 0, 14);

	if (iLocal_20.f_190 < 0)
		return false;

	iLocal_20.f_192 = uLocal_244[iLocal_20.f_190 /*9*/].f_5;
	return true;
}

void func_167(BOOL bParam0) // Position - 0x5B84 Hash - 0x8C7EB98 ^0x8C7EB98
{
	bLocal_567 = bLocal_567 || bParam0;
	return;
}

BOOL func_168(BOOL bParam0) // Position - 0x5B95 Hash - 0x99ADD940 ^0x99ADD940
{
	return bLocal_567 && bParam0 != false;
}

BOOL func_169() // Position - 0x5BA5 Hash - 0x7F45BD81 ^0x674295AD
{
	float num;

	if (func_168(2))
		return false;

	if (func_282(Global_35, volLocal_15, 0, true))
	{
		if (func_283())
			return true;
	}
	else
	{
		num = func_173(iLocal_20.f_192, Global_35, true, true);
	
		if (num < 10f || func_284(&uLocal_553, 10f))
			return true;
	
		if (func_284(&uLocal_553, 10f))
			if (num < 10f && PED::IS_PED_FACING_PED(Global_35, iLocal_20.f_192, 80f) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_20.f_192))
				return true;
	}

	return false;
}

BOOL func_170(Ped pedParam0, Ped pedParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10, int iParam11, BOOL bParam12, BOOL bParam13, int iParam14) // Position - 0x5C46 Hash - 0x943CD13D ^0x943CD13D
{
	return func_285(pedParam0, pedParam1, sParam2, sParam3, iParam4, iParam5, bParam6, iParam7, iParam8, bParam9, bParam10, iParam11, false, bParam12, bParam13, iParam14) >= 0;
}

void func_171(var uParam0) // Position - 0x5C73 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_286(uParam0, 0f);
	return;
}

BOOL func_172() // Position - 0x5C82 Hash - 0x79D80EF7 ^0x553BD9D6
{
	int i;
	int num;

	switch (iLocal_562)
	{
		case 0:
			if (func_156(iLocal_20.f_192, 0, true))
			{
				func_287(iLocal_20.f_192, Global_35, -1);
				func_274(&uLocal_556, true);
				func_288(1);
			}
			break;
	
		case 1:
			if (PED::IS_PED_FACING_PED(iLocal_20.f_192, Global_35, 60f) || func_284(&uLocal_556, 2f))
			{
				func_171(&uLocal_556);
				TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_20.f_192, Global_35, 8000, false, 1);
				func_170(iLocal_20.f_192, 0, "HEADS_UP_THREATEN", "", -1f, 1, false, 0, 1, true, true, 291934926, true, false, 0);
				func_288(2);
			}
			break;
	
		case 2:
			num = iLocal_20.f_199 - 1;
		
			for (i = 0; i <= num; i = i + 1)
			{
				func_289(&iLocal_20, &uLocal_244, i, "", "", false, 1, false, false);
			}
		
			if (func_284(&uLocal_556, 2f))
				func_288(3);
			break;
	
		case 3:
			return true;
	}

	return false;
}

float func_173(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5D7F Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

float func_174(var uParam0) // Position - 0x5DC7 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_290(uParam0))
		return uParam0->f_1;

	if (func_291(uParam0))
		return uParam0->f_2;

	return func_292() - uParam0->f_1;
}

void func_175() // Position - 0x5DFC Hash - 0xBAC67F0A ^0x511C0BB0
{
	int randomIntInRange;
	int i;
	int randomIntInRange2;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);

	switch (iLocal_563)
	{
		case 0:
			func_274(&uLocal_559, false);
			iLocal_563 = 1;
			break;
	
		case 1:
			if (func_284(&uLocal_559, 16f))
			{
				for (i = 0; i < iLocal_20.f_199; i = i + 1)
				{
					if (func_156(uLocal_244[i /*9*/].f_5, 0, true) && func_293(Global_35, uLocal_244[i /*9*/].f_5) < 20f)
					{
						if (randomIntInRange < 3)
							randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						else
							randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(3, 8);
					
						func_170(uLocal_244[i /*9*/].f_5, 0, uLocal_544[randomIntInRange], "", -1f, randomIntInRange2, false, 0, 1, true, true, 291934926, true, false, 0);
						iLocal_563 = 2;
						break;
					}
				}
			}
			break;
	
		case 2:
			func_274(&uLocal_559, true);
			iLocal_563 = 0;
			break;
	}

	return;
}

int func_176(var uParam0, int iParam1, int iParam2) // Position - 0x5EE1 Hash - 0x8B7CBAA6 ^0xCE22DF6A
{
	int i;
	int num;

	for (i = 0; i < iParam2; i = i + 1)
	{
		if (func_156(uParam0->[i /*9*/].f_5, 0, true))
		{
			num = num + 1;
		
			if (num > iParam1)
				return num;
		}
	}

	return num;
}

void func_177() // Position - 0x5F21 Hash - 0x552BA6BC ^0x5D1AC8AF
{
	int i;

	switch (iLocal_566)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_15, true, 0) && func_294(Global_35, -4183.556f, -3415.0469f, 36.0861f, true) > 50f && func_294(Global_35, -4218.61f, -3514.7246f, 36.0157f, true) > 50f)
			{
				for (i = 0; i < iLocal_20.f_199; i = i + 1)
				{
					if (func_156(uLocal_244[i /*9*/].f_5, 0, true))
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_244[i /*9*/].f_5, BF_0x3AD95F27, true);
				}
			
				iLocal_566 = iLocal_566 + 1;
			}
			break;
	
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_15, true, 0) || func_294(Global_35, -4219.153f, -3462.0828f, 43.7362f, true) < 85f)
			{
				for (i = 0; i < iLocal_20.f_199; i = i + 1)
				{
					if (func_156(uLocal_244[i /*9*/].f_5, 0, true))
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_244[i /*9*/].f_5, BF_0x3AD95F27, false);
				}
			
				iLocal_566 = 0;
			}
			break;
	}

	return;
}

void func_178() // Position - 0x603E Hash - 0xF622A206 ^0xBAC268CB
{
	int i;

	switch (iLocal_565)
	{
		case 0:
			if (iLocal_20.f_198 < 9)
			{
				for (i = 0; i < iLocal_20.f_199; i = i + 1)
				{
					if (func_156(uLocal_244[i /*9*/].f_5, 0, true))
						PED::SET_PED_DEFENSIVE_AREA_VOLUME(uLocal_244[i /*9*/].f_5, volLocal_15, false, false, false);
				}
			
				iLocal_565 = iLocal_565 + 1;
			}
			break;
	
		case 1:
			break;
	}

	return;
}

BOOL func_179() // Position - 0x60A9 Hash - 0x81113FF1 ^0xD0383987
{
	switch (iLocal_564)
	{
		case 0:
			if (func_282(Global_35, volLocal_15.f_3, 0, true))
			{
				if (func_156(uLocal_244[11 /*9*/].f_5, 0, true))
					TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(uLocal_244[11 /*9*/].f_5, -4179.8f, -3431.705f, 41.5212f, 4f);
			
				func_295(1);
			}
			break;
	
		case 1:
			if (func_282(Global_35, volLocal_15.f_4, 0, true))
			{
				func_64();
				func_296();
				func_295(2);
			}
			break;
	
		case 2:
			func_297();
			func_298();
		
			if (func_299())
				func_295(3);
			break;
	
		case 3:
			func_295(5);
			break;
	
		case 5:
			return true;
	}

	return false;
}

BOOL func_180(var uParam0, var uParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x6162 Hash - 0x8B3E2086 ^0x289C6F85
{
	if (!func_300(uParam1, uParam0))
		return false;

	if (!func_135(&(uParam0->f_5), 256))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		func_301(uParam0);
		func_302(uParam0);
	
		if (bParam4)
			func_303(uParam0->f_205, iParam3, false);
	
		func_138(uParam0, false);
		func_189(&(uParam0->f_5), 256);
		func_189(&(uParam0->f_5), 8);
	}

	return true;
}

void func_181(var uParam0, var uParam1) // Position - 0x61CC Hash - 0xC7BB19B3 ^0xE638785C
{
	int i;

	if (!func_304(uParam1->f_205) && !func_78(Global_1935630, 32))
	{
		for (i = 0; i < uParam1->f_199; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->[i /*9*/].f_5))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->[i /*9*/].f_5, Global_35, true, true))
				{
					func_305(uParam1->f_205);
					return;
				}
			}
		}
	}

	return;
}

BOOL func_182(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4) // Position - 0x6233 Hash - 0x89920420 ^0xB5470306
{
	int i;

	if (iParam4 == 0)
		iParam4 = iParam2 - 1;

	for (i = iParam3; i <= iParam4; i = i + 1)
	{
		if (func_306(uParam1->[i /*9*/].f_5, 0, &(uParam0->f_155), &(uParam0->f_183), 0, 0) && !PED::GET_PED_CONFIG_FLAG(uParam1->[i /*9*/].f_5, 9, false))
		{
			uParam0->f_192 = uParam1->[i /*9*/].f_5;
			uParam0->f_190 = i;
			return true;
		}
		else if (func_307(uParam0, &uParam1->[i /*9*/]))
		{
			return true;
		}
	}

	return false;
}

void func_183(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x62B7 Hash - 0xC9EC7BB6 ^0x36A8D7B2
{
	int i;
	BOOL flag;

	flag = func_135(&(uParam1->f_5), 128);

	for (i = 0; i < uParam1->f_199; i = i + 1)
	{
		func_308(&uParam0->[i /*9*/], uParam1->f_202, iParam2, &(uParam1->f_211), iParam3, flag);
	}

	return;
}

float func_184(var uParam0) // Position - 0x62FA Hash - 0xB315CC86 ^0xB315CC86
{
	return 18f;
}

BOOL func_185(var uParam0, int iParam1) // Position - 0x6307 Hash - 0xE46677C2 ^0xE46677C2
{
	return *uParam0 && iParam1 != false;
}

void func_186(var uParam0, int iParam1) // Position - 0x6317 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_187(var uParam0, int iParam1, BOOL bParam2) // Position - 0x632C Hash - 0x35490F39 ^0x35490F39
{
	!bParam2;
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_188(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x6343 Hash - 0x3E30B0B5 ^0x3E30B0B5
{
	float num;

	if (fParam3 > 0f)
		num = fParam3;
	else
		num = func_294(pedParam0, Global_36, true);

	if (fParam2 > 0f)
		if (num < fParam2)
			return true;

	if (num < fParam1)
		if (PED::_IS_PED_VISIBILITY_TRACKED(pedParam0))
			if (fParam4 > 0f)
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(pedParam0, fParam4))
					return true;
			else if (PED::IS_TRACKED_PED_VISIBLE(pedParam0))
				return true;
		else if (!ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
				return true;

	return false;
}

void func_189(var uParam0, int iParam1) // Position - 0x63CC Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_190(var uParam0, Hash hParam1, Hash hParam2) // Position - 0x63DD Hash - 0x2FF17665 ^0x8B540475
{
	if (!func_156(uParam0->f_5, 0, false) || DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "proc_bounty_target"))
		return;

	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
		func_309(&(uParam0->f_6));

	uParam0->f_6 = MAP::BLIP_ADD_FOR_ENTITY(hParam1, uParam0->f_5);

	if (hParam2 != 0)
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, hParam2);

	return;
}

BOOL func_191(var uParam0) // Position - 0x643A Hash - 0x5D1E5EF2 ^0x9E45CCEE
{
	if (!func_135(&(uParam0->f_5), 1024))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_215, Global_36))
		{
			if (func_156(Global_35, 0, true))
			{
				func_310(uParam0, true);
				func_189(&(uParam0->f_5), 1024);
				return true;
			}
		}
	}
	else if (!VOLUME::IS_POINT_IN_VOLUME(uParam0->f_215, Global_36) && func_192(Global_1888801[uParam0->f_205 /*35*/]) != 3)
	{
		if (func_156(Global_35, 0, true))
		{
			func_310(uParam0, false);
			func_249(&(uParam0->f_5), 1024);
			return true;
		}
	}

	return false;
}

int func_192(int iParam0) // Position - 0x64CF Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_37(iParam0))
		return -1;

	return func_311(iParam0);
}

void func_193(var uParam0) // Position - 0x64EB Hash - 0xDB07AFBD ^0x54F10897
{
	int num;
	int num2;

	if (func_312(302))
		return;

	if (func_28() == uParam0->f_205)
		return;

	if (!func_313(uParam0->f_205))
		return;

	if (func_25(32, false, true))
		return;

	if (func_34(83, false))
		return;

	if (!func_5(uParam0->f_205, false))
		return;

	if (func_135(&(uParam0->f_5), 1024))
	{
		if (func_314(uParam0->f_202, 0.2f, 0.8f, 0f, 0.99f))
		{
			func_315(302, &num, &num2);
			func_316(num, num2);
			func_317(&num, &num2);
			func_318("GANG_PROGRESS", "TF_SP_GANG_HIDEOUTS", 0, 0, -2, 0, 0, 0, 0, true, true);
		}
	}

	return;
}

BOOL func_194() // Position - 0x65A6 Hash - 0x40A221D4 ^0x40A221D4
{
	return func_319(2);
}

void func_195(var uParam0, BOOL bParam1) // Position - 0x65B3 Hash - 0x709D81A1 ^0x709D81A1
{
	if (bParam1)
	{
		func_320(uParam0, true);
		func_321(2);
	}
	else
	{
		if (func_319(2))
			func_320(uParam0, false);
	
		func_134(2);
	}

	return;
}

void func_196(var uParam0, BOOL bParam1) // Position - 0x65E3 Hash - 0x4C805147 ^0xF7BCA570
{
	if (bParam1)
	{
		if (!func_135(&(uParam0->f_5), 32768))
		{
			LAW::SET_DISABLE_DISTURBANCE_CRIMES(PLAYER::PLAYER_ID(), true);
			func_189(&(uParam0->f_5), 32768);
		}
	}
	else if (func_135(&(uParam0->f_5), 32768))
	{
		LAW::SET_DISABLE_DISTURBANCE_CRIMES(PLAYER::PLAYER_ID(), false);
		func_249(&(uParam0->f_5), 32768);
	}

	return;
}

void func_197(BOOL bParam0) // Position - 0x663C Hash - 0xC04C9B90 ^0xC04C9B90
{
	if (bParam0)
		if (!func_322())
			func_321(8);
	else if (func_322())
		func_134(8);

	return;
}

BOOL func_198(eStackSize essParam0) // Position - 0x6667 Hash - 0x43A4311 ^0x43A4311
{
	if (essParam0 == 22 || essParam0 == 37 && !func_31())
		return true;

	if (essParam0 == 61)
		return true;

	return false;
}

BOOL func_199() // Position - 0x669C Hash - 0xB5F1D039 ^0x491A8075
{
	if (Global_16)
		return false;

	if (!func_323())
		return false;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266.f_78.f_55))
		return false;

	if (func_25(-1 ^ 9, false, true))
		return false;

	return true;
}

const char* func_200(eStackSize essParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, var uParam6) // Position - 0x66DF Hash - 0xAA95C4FB ^0xB3C7DDA0
{
	const char* str;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
		str = func_324(Global_1894899.f_162);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) && bParam4)
		str = func_326(func_325(Global_36));

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (!func_327(essParam0) || func_328(45))
		{
			switch (essParam0)
			{
				case 1:
					str = "LANDMARK_MACOMBS_END";
					break;
			
				case 2:
					str = "LANDMARK_MERKINS_WALLER";
					break;
			
				case 3:
					str = "SETTLEMENT_LAGRAS";
					break;
			
				case 4:
					str = "HIDEOUT_LAKAY";
					break;
			
				case 5:
					str = "TOWN_SAINTDENIS";
					break;
			
				case 6:
					str = "LANDMARK_HAGEN_ORCHARDS";
					break;
			
				case 8:
					str = "SETTLEMENT_GRAND_KORRIGAN";
					break;
			
				case 9:
					str = "HIDEOUT_SHADY_BELLE";
					break;
			
				case 10:
					str = "LANDMARK_SILTWATER_STRAND";
					break;
			
				case 11:
					str = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
			
				case 12:
					str = "LANDMARK_BERYLS_DREAM";
					break;
			
				case 15:
					str = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
			
				case 16:
					str = "HIDEOUT_HANGING_DOG_RANCH";
					break;
			
				case 17:
					str = "HOMESTEAD_LONE_MULE_STEAD";
					break;
			
				case 19:
					str = "LANDMARK_MONTOS_REST";
					break;
			
				case 20:
					str = "LANDMARK_OWANJILA_DAM";
					break;
			
				case 21:
					str = "HOMESTEAD_PAINTED_SKY";
					break;
			
				case 22:
					str = "SETTLEMENT_PRONGHORN_RANCH";
					break;
			
				case 23:
					str = "LANDMARK_RIGGS_STATION";
					break;
			
				case 25:
					str = "HOMESTEAD_SHEPHERDS_RISE";
					break;
			
				case 26:
					str = "TOWN_STRAWBERRY";
					break;
			
				case 27:
					str = "LANDMARK_VALLEY_VIEW";
					break;
			
				case 28:
					str = "LANDMARK_WALLACE_STATION";
					break;
			
				case 29:
					str = "HOMESTEAD_WATSONS_CABIN";
					break;
			
				case 30:
					str = "LANDMARK_CANEBREAK_MANOR";
					break;
			
				case 31:
					str = "LANDMARK_COPPERHEAD_LANDING";
					break;
			
				case 32:
					str = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
			
				case 33:
					str = "LANDMARK_BACCHUS_BRIDGE";
					break;
			
				case 34:
					str = "HOMESTEAD_FIRWOOD_RISE";
					break;
			
				case 35:
					str = "SETTLEMENT_FORT_WALLACE";
					break;
			
				case 36:
					str = "HIDEOUT_SIX_POINT_CABIN";
					break;
			
				case 37:
					str = "SETTLEMENT_BEECHERS_HOPE";
					break;
			
				case 38:
					str = "TOWN_BLACKWATER";
					break;
			
				case 39:
					str = "LANDMARK_QUAKERS_COVE";
					break;
			
				case 40:
					str = "HOMESTEAD_ADLER_RANCH";
					break;
			
				case 41:
					str = "LANDMARK_WINDOW_ROCK";
					break;
			
				case 42:
					str = "HOMESTEAD_CHEZ_PORTER";
					break;
			
				case 43:
					str = "HIDEOUT_COLTER";
					break;
			
				case 45:
					str = "LANDMARK_MILLESANI_CLAIM";
					break;
			
				case 48:
					str = "LANDMARK_TEMPEST_RIM";
					break;
			
				case 49:
					str = "LANDMARK_EWING_BASIN";
					break;
			
				case 50:
					str = "LANDMARK_CALUMET_RAVINE";
					break;
			
				case 54:
					str = "LANDMARK_THE_LOFT";
					break;
			
				case 56:
					str = "SETTLEMENT_WAPITI";
					break;
			
				case 57:
					str = "SETTLEMENT_AGUASDULCES";
					break;
			
				case 59:
					str = "LANDMARK_CINCO_TORRES";
					break;
			
				case 60:
					str = "LANDMARK_LA_CAPILLA";
					break;
			
				case 61:
					str = "TOWN_MANICATO";
					break;
			
				case 62:
					str = "LANDMARK_OLD_GREENBANK_MILL";
					break;
			
				case 64:
					str = "HOMESTEAD_CARMODY_DELL";
					break;
			
				case 65:
					str = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
			
				case 66:
					str = "HOMESTEAD_GUTHRIE_FARM";
					break;
			
				case 67:
					str = "LANDMARK_CUMBERLAND_FALLS";
					break;
			
				case 68:
					str = "HOMESTEAD_DOWNES_RANCH";
					break;
			
				case 69:
					str = "SETTLEMENT_EMERALD_RANCH";
					break;
			
				case 70:
					str = "LANDMARK_GRANGERS_HOGGERY";
					break;
			
				case 72:
					str = "HOMESTEAD_LARNED_SOD";
					break;
			
				case 74:
					str = "LANDMARK_LUCKYS_CABIN";
					break;
			
				case 75:
					str = "LANDMARK_FLATNECK_STATION";
					break;
			
				case 76:
					str = "TOWN_VALENTINE";
					break;
			
				case 77:
					str = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
			
				case 78:
					str = "TOWN_ANNESBURG";
					break;
			
				case 79:
					str = "HIDEOUT_BEAVER_HOLLOW";
					break;
			
				case 80:
					str = "LANDMARK_BLACK_BALSAM_RISE";
					break;
			
				case 81:
					str = "LANDMARK_BRANDYWINE_DROP";
					break;
			
				case 82:
					str = "SETTLEMENT_BUTCHER_CREEK";
					break;
			
				case 83:
					str = "HOMESTEAD_DOVERHILL";
					break;
			
				case 86:
					str = "HOMESTEAD_MACLEANS_HOUSE";
					break;
			
				case 87:
					str = "LANDMARK_MOSSY_FLATS";
					break;
			
				case 88:
					str = "LANDMARK_ROANOKE_VALLEY";
					break;
			
				case 89:
					str = "HOMESTEAD_WILLARDS_REST";
					break;
			
				case 92:
					str = "TOWN_VANHORN";
					break;
			
				case 93:
					str = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
			
				case 94:
					str = "LANDMARK_BOLGER_GLADE";
					break;
			
				case 95:
					str = "SETTLEMENT_CALIGA_HALL";
					break;
			
				case 96:
					str = "HOMESTEAD_CATFISH_JACKSONS";
					break;
			
				case 98:
					str = "HIDEOUT_CLEMENS_POINT";
					break;
			
				case 99:
					str = "HOMESTEAD_COMPSONS_STEAD";
					break;
			
				case 100:
					str = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
			
				case 102:
					str = "HOMESTEAD_LONNIES_SHACK";
					break;
			
				case 104:
					str = "LANDMARK_RADLEYS_PASTURE";
					break;
			
				case 105:
					str = "TOWN_RHODES";
					break;
			
				case 108:
					str = "LANDMARK_BEAR_CLAW";
					break;
			
				case 110:
					str = "SETTLEMENT_MANZANITA_POST";
					break;
			
				case 111:
					str = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
			
				case 112:
					str = "LANDMARK_TANNERS_REACH";
					break;
			
				case 114:
					str = "HIDEOUT_GAPTOOTH_BREACH";
					break;
			
				case 115:
					str = "TOWN_TUMBLEWEED";
					break;
			
				case 116:
					str = "SETTLEMENT_RATHSKELLER_FORK";
					break;
			
				case 117:
					str = "SETTLEMENT_BENEDICT_POINT";
					break;
			
				case 118:
					str = "HIDEOUT_FORT_MERCER";
					break;
			
				case 119:
					str = "SETTLEMENT_PLAINVIEW";
					break;
			
				case 120:
					str = "TOWN_ARMADILLO";
					break;
			
				case 121:
					str = "SETTLEMENT_COOTS_CHAPEL";
					break;
			
				case 123:
					str = "LANDMARK_RILEYS_CHARGE";
					break;
			
				case 124:
					str = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
			
				case 125:
					str = "HIDEOUT_TWIN_ROCKS";
					break;
			
				case 126:
					str = "TOWN_MACFARLANES_RANCH";
					break;
			
				case 127:
					str = "SETTLEMENT_THIEVES_LANDING";
					break;
			
				case MICRO:
					str = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("water_lannahechee_river"):
				str = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("WATER_O_CREAGHS_RUN"):
				str = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
		
			case joaat("water_upper_montana_river"):
				str = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_san_luis_river"):
				if (iParam1 == 4 || iParam1 == 12)
					str = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				else
					str = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
			
				*uParam6 = 1;
				break;
		
			case joaat("water_little_creek_river"):
				str = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_lake_don_julio"):
				str = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
		
			case joaat("water_flat_iron_lake"):
				str = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
		
			case joaat("water_lower_montana_river"):
				str = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_owanjila"):
				str = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
		
			case joaat("water_stillwater_creek"):
				str = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_hawks_eye_creek"):
				str = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_kamassa_river"):
				if (iParam1 == 10)
					str = "WATER_KAMASSA_RIVER";
				else if (iParam1 == 2)
					str = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				else
					str = "WATER_KAMASSA_RIVER_BAYOU_NWA";
			
				*uParam6 = 1;
				break;
		
			case joaat("water_bahia_de_la_paz"):
				str = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
		
			case joaat("water_cairn_lake"):
				str = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
		
			case joaat("water_southfield_flats"):
				str = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
		
			case joaat("water_moonstone_pond"):
				str = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
		
			case joaat("WATER_CATTIAL_POND"):
				str = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
		
			case joaat("water_bayou_nwa"):
				str = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
		
			case joaat("water_whinyard_strait"):
				str = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
		
			case joaat("water_sea_of_coronado"):
				str = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
		
			case joaat("water_spider_gorge"):
				str = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
		
			case joaat("water_aurora_basin"):
				str = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
		
			case joaat("water_elysian_pool"):
				str = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
		
			case joaat("water_arroyo_de_la_vibora"):
				str = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
		
			case joaat("water_mattlock_pond"):
				str = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
		
			case joaat("water_dakota_river"):
				str = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_lake_isabella"):
				str = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
		
			case joaat("water_barrow_lagoon"):
				str = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
		
			case joaat("water_hot_springs"):
				str = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
		
			case joaat("water_deadboot_creek"):
				str = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_heartlands_overflow"):
				str = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
		
			case joaat("water_ringneck_creek"):
				str = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		switch (iParam1)
		{
			case 0:
				str = "DISTRICT_BAYOU_NWA";
				break;
		
			case 1:
				str = "DISTRICT_BIG_VALLEY";
				break;
		
			case 2:
				str = "DISTRICT_BLUEWATER_MARSH";
				break;
		
			case 3:
				str = "DISTRICT_CUMBERLAND_FOREST";
				break;
		
			case 4:
				str = "DISTRICT_GREAT_PLAINS";
				break;
		
			case 6:
				str = "DISTRICT_GRIZZLIES";
				break;
		
			case 7:
				str = "DISTRICT_GRIZZLIES";
				break;
		
			case 8:
				str = "DISTRICT_GUARMA";
				break;
		
			case 9:
				str = "DISTRICT_HEARTLANDS";
				break;
		
			case 10:
				str = "DISTRICT_ROANOAKE_RIDGE";
				break;
		
			case 11:
				str = "DISTRICT_SCARLETT_MEADOWS";
				break;
		
			case 12:
				str = "DISTRICT_TALL_TREES";
				break;
		
			case 13:
				str = "DISTRICT_GAPTOOTH_RIDGE";
				break;
		
			case 14:
				str = "DISTRICT_RIO_BRAVO";
				break;
		
			case 15:
				str = "DISTRICT_CHOLLA_SPRINGS";
				break;
		
			case 16:
				str = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		switch (iParam3)
		{
			case 0:
				str = "STATE_AMBARINO";
				break;
		
			case 1:
				str = "STATE_NEW_HANOVER";
				break;
		
			case 2:
				str = "STATE_LEMOYNE";
				break;
		
			case 3:
				str = "STATE_WEST_ELIZABETH";
				break;
		
			case 4:
				str = "STATE_NEW_AUSTIN";
				break;
		
			case 5:
				str = "STATE_GUARMA";
				break;
		}
	}

	return str;
}

BOOL func_201(int iParam0) // Position - 0x7145 Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

int func_202(eStackSize essParam0) // Position - 0x715A Hash - 0x224FC50D ^0x224FC50D
{
	if (essParam0 < 0)
		return -1;
	else if (essParam0 <= 10)
		return 0;
	else if (essParam0 <= 29)
		return 1;
	else if (essParam0 <= 32)
		return 2;
	else if (essParam0 <= 36)
		return 3;
	else if (essParam0 <= 39)
		return 4;
	else if (essParam0 <= 49)
		return 7;
	else if (essParam0 <= 56)
		return 6;
	else if (essParam0 <= 61)
		return 8;
	else if (essParam0 <= 76)
		return 9;
	else if (essParam0 <= 92)
		return 10;
	else if (essParam0 <= 106)
		return 11;
	else if (essParam0 <= 113)
		return 12;
	else if (essParam0 <= 116)
		return 13;
	else if (essParam0 <= 119)
		return 14;
	else if (essParam0 <= 125)
		return 15;
	else if (essParam0 <= 127)
		return 16;

	return -1;
}

int func_203(int iParam0) // Position - 0x7256 Hash - 0xA08D7C4E ^0xA08D7C4E
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 3;
	
		case 2:
			return 2;
	
		case 3:
			return 1;
	
		case 4:
			return 3;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 5;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 3;
	
		case 13:
			return 4;
	
		case 14:
			return 4;
	
		case 15:
			return 4;
	
		case 16:
			return 4;
	
		default:
		
	}

	return -1;
}

Hash func_204(int iParam0) // Position - 0x7311 Hash - 0x7493E565 ^0x5CB7541E
{
	if (!func_201(iParam0))
		return -1;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/];

	return Global_1058888.f_42196[iParam0 /*12*/];
}

int func_205(int iParam0) // Position - 0x734B Hash - 0x653F925B ^0x653F925B
{
	switch (iParam0)
	{
		case joaat("water_lannahechee_river"):
			return 1;
	
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
	
		case joaat("water_upper_montana_river"):
			return 1;
	
		case joaat("water_san_luis_river"):
			return 1;
	
		case joaat("water_little_creek_river"):
			return 1;
	
		case joaat("water_lake_don_julio"):
			return 0;
	
		case joaat("water_flat_iron_lake"):
			return 0;
	
		case joaat("water_lower_montana_river"):
			return 1;
	
		case joaat("water_owanjila"):
			return 0;
	
		case joaat("water_stillwater_creek"):
			return 1;
	
		case joaat("water_hawks_eye_creek"):
			return 1;
	
		case joaat("water_kamassa_river"):
			return 1;
	
		case joaat("water_cairn_lake"):
			return 0;
	
		case joaat("water_southfield_flats"):
			return 0;
	
		case joaat("water_moonstone_pond"):
			return 0;
	
		case joaat("WATER_CATTIAL_POND"):
			return 0;
	
		case joaat("water_bayou_nwa"):
			return 2;
	
		case joaat("water_whinyard_strait"):
			return 1;
	
		case joaat("water_sea_of_coronado"):
			return 1;
	
		case joaat("water_spider_gorge"):
			return 1;
	
		case joaat("water_aurora_basin"):
			return 0;
	
		case joaat("water_elysian_pool"):
			return 0;
	
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
	
		case joaat("water_mattlock_pond"):
			return 0;
	
		case joaat("water_dakota_river"):
			return 1;
	
		case joaat("water_dewberry_creek"):
			return 1;
	
		case joaat("water_lake_isabella"):
			return 0;
	
		case joaat("water_beartooth_beck"):
			return 1;
	
		case joaat("water_barrow_lagoon"):
			return 0;
	
		case joaat("water_hot_springs"):
			return 0;
	
		case joaat("water_deadboot_creek"):
			return 1;
	
		case joaat("water_heartlands_overflow"):
			return 0;
	
		case joaat("water_ringneck_creek"):
			return 1;
	
		default:
		
	}

	return -1;
}

char* func_206(int iParam0) // Position - 0x74A6 Hash - 0x92CDDEC ^0x9BE09572
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
	
		case 1:
			return "WATER_TYPE_RIVER";
	
		case 2:
			return "WATER_TYPE_SWAMP";
	
		default:
		
	}

	return "";
}

BOOL func_207(int iParam0, BOOL bParam1) // Position - 0x74E0 Hash - 0x60CCFF55 ^0x376285D7
{
	if (!func_329(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_431[iParam0] && bParam1 != false;

	return Global_1058888.f_42269[iParam0] && bParam1 != false;
}

BOOL func_208(int iParam0, int iParam1) // Position - 0x7524 Hash - 0xD0DCDA48 ^0x4E1FA2FB
{
	if (!func_201(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1 != false;
}

float func_209(float fParam0) // Position - 0x756C Hash - 0xC643B4E3 ^0xC643B4E3
{
	return (fParam0 * 1.8f) + 32f;
}

const char* func_210(var uParam0, int iParam1) // Position - 0x7582 Hash - 0xB0CFF0C3 ^0x4EAB1D5E
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_330(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_211(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x75B8 Hash - 0x10503CC4 ^0x6232183B
{
	int duration;
	var data;
	int num;

	duration = -2;
	duration = iParam2;
	duration.f_1 = iParam3;
	duration.f_2 = iParam4;
	duration.f_3 = iParam5;
	data.f_1 = sParam0;
	data.f_2 = sParam1;
	num = UIFEED::_UI_FEED_POST_LOCATION_SHARD(&duration, &data, bParam6, bParam7);
	return num;
}

BOOL func_212(int iParam0) // Position - 0x75FB Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_213(eStackSize essParam0) // Position - 0x760E Hash - 0xEC19E423 ^0x3F24553E
{
	int num;

	if (func_327(essParam0))
		if (!func_328(45))
			return false;

	num = func_202(essParam0);

	if (func_331())
		if (!func_100(Global_1835011[3 /*74*/].f_1, true))
			return num == 7 || num == 6;

	return true;
}

void func_214(int iParam0, int iParam1) // Position - 0x7660 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

struct<2> func_215(int iParam0, int iParam1) // Position - 0x7671 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_216(var uParam0, var uParam1, int iParam2) // Position - 0x7687 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

eStackSize func_217() // Position - 0x7697 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_218(int iParam0) // Position - 0x76A5 Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

void func_219(int iParam0) // Position - 0x76BB Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1327479.f_3 = iParam0;
	return;
}

int func_220() // Position - 0x76CB Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1310750.f_16037;
}

BOOL func_221(int iParam0, int iParam1) // Position - 0x76DA Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_218(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

BOOL func_222(int iParam0) // Position - 0x76FD Hash - 0x23BA4BD8 ^0x6ABCB1DC
{
	if (!func_218(iParam0))
		return false;

	if (func_332(64) && func_333(iParam0))
		return true;

	return Global_1310750[iParam0 /*111*/].f_46;
}

BOOL func_223(int iParam0) // Position - 0x7735 Hash - 0xE4DA9E55 ^0x745EA523
{
	if (!func_218(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_224(int iParam0) // Position - 0x7755 Hash - 0xA37733A1 ^0x23C2C6AE
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_218(Global_1310750.f_13321[iParam0 /*9*/]))
		return;

	num = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[num /*111*/].f_48 = 0;
	func_334(iParam0);
	Global_1310750.f_16037 = Global_1310750.f_16037 - 1;
	return;
}

int func_225(int iParam0) // Position - 0x77BE Hash - 0xAC39A336 ^0xDF4F13BE
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_1392240.f_1[i /*18*/].f_4 == iParam0)
			return i;
	}

	return -1;
}

void func_226(Hash hParam0) // Position - 0x77F0 Hash - 0xDB9A74EC ^0x13B3F16D
{
	if (func_335(hParam0) && func_336())
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hParam0);

	return;
}

void func_227(int iParam0) // Position - 0x7810 Hash - 0x3CD01C93 ^0xBF009143
{
	int i;
	int num;

	if (func_47(Global_1914319.f_3[iParam0 /*446*/].f_21) && func_337(Global_1914319.f_3[iParam0 /*446*/].f_21))
		func_338(Global_1914319.f_3[iParam0 /*446*/].f_21, false, true, false, false);

	Global_1914319.f_3[iParam0 /*446*/].f_11 = { 0f, 0f, 0f };
	Global_1914319.f_3[iParam0 /*446*/].f_21 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_17 = 0;
	Global_1914319.f_3[iParam0 /*446*/].f_1 = 0;

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1914319.f_3[iParam0 /*446*/].f_34))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1914319.f_3[iParam0 /*446*/].f_34, false);

	func_339(Global_1914319.f_3[iParam0 /*446*/].f_10, false);
	func_340(iParam0, 536870912);
	num = func_341(iParam0);

	if (num >= 15)
	{
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	else
	{
		for (i = 0; i < num; i = i + 1)
		{
			func_226(Global_1914319.f_3[iParam0 /*446*/].f_317[i /*6*/]);
			Global_1914319.f_3[iParam0 /*446*/].f_317[i /*6*/] = 0;
			Global_1914319.f_3[iParam0 /*446*/].f_317[i /*6*/].f_1 = { 0f, 0f, 0f };
			Global_1914319.f_3[iParam0 /*446*/].f_317[i /*6*/].f_4 = 0f;
			Global_1914319.f_3[iParam0 /*446*/].f_317[i /*6*/].f_5 = 0;
		}
	
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}

	if (Global_1914319.f_3[iParam0 /*446*/].f_440 != 0)
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1914319.f_3[iParam0 /*446*/].f_440, false);

	Global_1914319.f_3[iParam0 /*446*/].f_23 = 0;
	func_342(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_10 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = -1;
	func_343(iParam0, false);
	return;
}

BOOL func_228(eStackSize essParam0) // Position - 0x79EF Hash - 0xDA629583 ^0xDA629583
{
	return func_344(essParam0, 16, true);
}

BOOL func_229(eStackSize essParam0) // Position - 0x7A00 Hash - 0xB1ACB968 ^0xB1ACB968
{
	return func_230(essParam0, 32, true);
}

BOOL func_230(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x7A11 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_345(essParam0))
			return false;

	func_346(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_231(eStackSize essParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7A4C Hash - 0x9B607B14 ^0xA19051E3
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_347(essParam0)))
	{
		func_348(essParam0, 4, true);
		func_348(essParam0, 17, true);
		func_348(essParam0, 1, true);
		func_348(essParam0, 2, true);
		return;
	}

	if (!func_349(essParam0))
		return;

	if (func_229(essParam0) && !bParam2)
		return;

	if (func_228(essParam0) && !bParam2)
		return;

	if (essParam0 == Global_1357549.f_1497 && !bParam2)
		return;

	if (!bParam3 && ENTITY::DOES_ENTITY_EXIST(func_347(essParam0)) && func_350(essParam0) < 5000f && !CAM::IS_SCREEN_FADED_OUT())
		return;

	func_348(essParam0, 4, true);
	func_348(essParam0, 17, true);
	func_348(essParam0, 1, true);
	func_348(essParam0, 2, true);
	func_351(essParam0, func_347(essParam0));
	func_352(essParam0, true, true, true, bParam4);
	return;
}

void func_232(int iParam0) // Position - 0x7B3E Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_353(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::SET_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::SET_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	
		MISC::SET_BIT(&Global_1058888.f_40497[num2], offset);
	}

	Global_1934765 = 0;
	return;
}

void func_233(int iParam0) // Position - 0x7BD7 Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_353(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	}

	Global_1934765 = 0;
	return;
}

void func_234() // Position - 0x7C5D Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_233(-939420910);
	func_233(-1187950766);
	func_233(356365161);
	func_233(753127042);
	func_233(-2038424081);
	func_233(1884271742);
	func_233(459290420);
	return;
}

void func_235() // Position - 0x7CA4 Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_233(704802028);
	func_233(588987611);
	func_233(2008888900);
	func_233(1649996811);
	func_233(227918160);
	func_233(168171957);
	func_233(1193080109);
	func_233(-491981251);
	func_233(-639037538);
	func_233(-618620429);
	return;
}

BOOL func_236(int iParam0) // Position - 0x7D06 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_353(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

void func_237(var uParam0, var uParam1, var uParam2, int iParam3, char* sParam4) // Position - 0x7D55 Hash - 0x3FC2BD80 ^0xDD716FD9
{
	int num;
	int i;
	var unk;

	if (!func_135(&(uParam1->f_5), 8) && !func_135(&(uParam1->f_5), 4))
	{
		num = func_36(uParam1->f_205);
	
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (func_260(num))
			{
				if (!func_135(&(uParam1->f_5), 4096))
				{
					func_354(uParam1, true);
					func_189(&(uParam1->f_5), 4096);
				}
			
				func_355(uParam1->f_205);
			}
		}
		else if (func_260(num))
		{
			func_354(uParam1, false);
			func_356(uParam1->f_205, uParam1->f_198);
			func_189(&(uParam1->f_5), 4);
		}
	}

	func_138(uParam1, 0);
	func_196(uParam1, false);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_309(&(uParam0->[i /*9*/].f_6));
	
		if (CAM::IS_SCREEN_FADED_OUT() || func_173(uParam0->[i /*9*/].f_5, Global_35, false, false) > 60f && ENTITY::IS_ENTITY_OCCLUDED(uParam0->[i /*9*/].f_5) || func_173(uParam0->[i /*9*/].f_5, Global_35, false, false) > 100f)
			func_357(&(uParam0->[i /*9*/].f_5));
	}

	func_358(&(uParam1->f_214), true, true);
	func_359(uParam2);
	uParam1->f_201 > 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		HUD::_TEXT_BLOCK_DELETE(sParam4);

	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_360(&unk, 0);

	if (VOLUME::DOES_VOLUME_EXIST(uParam1->f_215))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam1->f_215);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam1->f_215);
		VOLUME::DELETE_VOLUME(uParam1->f_215);
	}

	if (VOLUME::DOES_VOLUME_EXIST(uParam1->f_216))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam1->f_216);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam1->f_216);
	}
	else if (VOLUME::DOES_VOLUME_EXIST(func_248(uParam1->f_205)))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(func_248(uParam1->f_205));
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(func_248(uParam1->f_205));
	}

	PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
	func_195(uParam1, false);
	func_197(false);
	func_361(&Global_1935630, 32);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_238(BOOL bParam0) // Position - 0x7F42 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

var func_239(BOOL bParam0, var uParam1, var uParam2) // Position - 0x7F55 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_240(var uParam0, int iParam1) // Position - 0x7F6C Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_241(var uParam0, int iParam1) // Position - 0x7FF2 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_242(var uParam0, int iParam1) // Position - 0x802E Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_114(*uParam0);
	num2 = func_113(*uParam0);

	if (iParam1 < 1 || iParam1 > func_119(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_243(var uParam0, int iParam1) // Position - 0x8081 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_244(var uParam0, int iParam1) // Position - 0x80BC Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_245(var uParam0, int iParam1) // Position - 0x80F5 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_246(Hash hParam0) // Position - 0x812D Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (hParam0 == -15)
		return false;

	num = func_118(hParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_117(hParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_116(hParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_113(hParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_114(hParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_115(hParam0);

	if (num6 < 1 || num6 > func_119(num5, num4))
		return false;

	return true;
}

struct<4> func_247(int iParam0, int iParam1) // Position - 0x8209 Hash - 0x3C2FFB17 ^0xFAA3DF9B
{
	var unk;

	unk = { func_130(iParam0, iParam1) };
	unk.f_3 = func_131(iParam0, iParam1);
	return unk;
}

Volume func_248(int iParam0) // Position - 0x822D Hash - 0xE4DA9E55 ^0x6DBF788A
{
	if (!func_43(iParam0))
		return 0;

	return Global_1888801[iParam0 /*35*/].f_3;
}

void func_249(var uParam0, int iParam1) // Position - 0x824D Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_250(var uParam0) // Position - 0x8262 Hash - 0xD73B9827 ^0x4905FA06
{
	return uParam0->f_24;
}

void func_251(var uParam0, float fParam1) // Position - 0x826E Hash - 0x4F8BE4B5 ^0xC5C29ABC
{
	uParam0->f_25 = fParam1;
	return;
}

void func_252(var uParam0, BOOL bParam1) // Position - 0x827C Hash - 0xA36879E8 ^0xA36879E8
{
	if (bParam1)
		func_152(uParam0, 1);
	else
		func_153(uParam0, 1);

	return;
}

void func_253(var uParam0, BOOL bParam1) // Position - 0x829A Hash - 0x97140DD8 ^0xF9889272
{
	if (bParam1)
		func_153(&(uParam0->f_1), 16384);
	else
		func_152(&(uParam0->f_1), 16384);

	return;
}

void func_254(var uParam0, BOOL bParam1) // Position - 0x82C0 Hash - 0x97140DD8 ^0xBDBF7A5
{
	if (bParam1)
		func_153(&(uParam0->f_1), 2048);
	else
		func_152(&(uParam0->f_1), 2048);

	return;
}

void func_255(var uParam0, BOOL bParam1) // Position - 0x82E6 Hash - 0x6E38DCCC ^0x27E8693B
{
	if (bParam1)
	{
		func_152(uParam0, 16);
	}
	else
	{
		func_153(uParam0, 67108864);
		func_153(uParam0, 16);
	}

	return;
}

void func_256(var uParam0, BOOL bParam1) // Position - 0x8311 Hash - 0x32CE93C6 ^0x60BFF41C
{
	if (bParam1)
		func_153(&(uParam0->f_1), 128);
	else
		func_152(&(uParam0->f_1), 128);

	return;
}

void func_257(var uParam0, BOOL bParam1) // Position - 0x8335 Hash - 0x9CA625A6 ^0xD96D8959
{
	if (bParam1)
		func_152(uParam0, 256);
	else
		func_153(uParam0, 256);

	return;
}

void func_258(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8357 Hash - 0x3145AA70 ^0xBCD5B3EB
{
	if (!bParam1)
		func_152(uParam0, 268435456);
	else
		func_153(uParam0, 268435456);

	if (!bParam2)
		func_152(uParam0, 1073741824);
	else
		func_153(uParam0, 1073741824);

	if (!bParam3)
		func_152(uParam0, 536870912);
	else
		func_153(uParam0, 536870912);

	return;
}

void func_259(var uParam0, BOOL bParam1) // Position - 0x83BC Hash - 0x9CA625A6 ^0xE048322C
{
	if (bParam1)
		func_152(uParam0, 512);
	else
		func_153(uParam0, 512);

	return;
}

BOOL func_260(int iParam0) // Position - 0x83DE Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_192(iParam0);
	return num == 3 || num == 4;
}

BOOL func_261(var uParam0, Ped pedParam1, char* sParam2) // Position - 0x83FC Hash - 0xFB1C2C0E ^0x6794528D
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

void func_262(var uParam0) // Position - 0x847A Hash - 0xDDCFF27C ^0x34FC5F6
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->[i]))
			STREAMING::REQUEST_ANIM_DICT(uParam0->[i]);
	}

	return;
}

void func_263(var uParam0) // Position - 0x84AE Hash - 0x7167BD49 ^0x3466A9D1
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] != 0)
			STREAMING::REQUEST_MODEL(uParam0->[i], false);
	}

	return;
}

BOOL func_264(char* sParam0, const char* sParam1) // Position - 0x84DF Hash - 0x753D38B7 ^0xBBEB6DF2
{
	int num;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		num = HUD::TEXT_BLOCK_REQUEST(sParam0);
	
		if (num == 0)
			return false;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return true;

	num = HUD::TEXT_BLOCK_REQUEST(sParam1);

	if (num == 0)
		return false;

	return true;
}

BOOL func_265(var uParam0) // Position - 0x8523 Hash - 0xEB73F53F ^0xDB5B7AC7
{
	int i;
	BOOL num;

	num = 1;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->[i]))
			num = 1;
		else if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->[i]))
			num = 0;
	}

	return num;
}

BOOL func_266(var uParam0) // Position - 0x8568 Hash - 0x850A3788 ^0x75717067
{
	int i;
	BOOL num;

	num = 1;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->[i]))
			num = 0;
	}

	return num;
}

Ped func_267(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x85A7 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_362(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_268(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x85E9 Hash - 0xC26AC0FE ^0xFF80BBA5
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (bParam1)
			AUDIO::DISABLE_PED_PAIN_AUDIO(pedParam0, true);
	
		if (bParam2)
			PED::SET_PED_CONFIG_FLAG(pedParam0, 243, true);
	
		Global_35 == pedParam0;
		ENTITY::SET_ENTITY_HEALTH(pedParam0, 0, 0);
	}

	return;
}

BOOL func_269(int iParam0, int iParam1) // Position - 0x8625 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Hash func_270(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13) // Position - 0x8634 Hash - 0xAB9CFACB ^0x8DB6D77C
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
				
					if (func_363(hashKey) && WEAPON::_0xF252A85B8F3F8C58(defaultPedWeaponCollection, hashKey))
						flag = true;
				}
			
				if (!flag)
				{
					weapontypeGroup = WEAPON::GET_WEAPONTYPE_GROUP(weaponHash);
				
					if (weapontypeGroup != 0 && defaultPedWeaponCollection != 0)
					{
						hash = WEAPON::_0x9EEFD670F10656D7(defaultPedWeaponCollection, weapontypeGroup);
					
						if (!Global_43891)
							if (func_363(hash) && hash != weaponHash)
								weaponHash = hash;
						else
							hash == weaponHash;
					}
				}
			}
			break;
	}

	if (func_24() == -1 && !func_364(weaponHash))
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
				if (func_364(joaat("weapon_repeater_carbine")))
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
		if (pedParam0 != Global_35 && func_363(weaponHash))
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
		func_365(weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 752097756, false);
	}
	else if (!bParam13)
	{
		permanentDegradation = 0f;
		func_366(pedParam0, &weaponHash, &permanentDegradation);
		weaponHash = WEAPON::GIVE_WEAPON_TO_PED(pedParam0, weaponHash, iParam9, bParam2, bParam5, bParam4, bParam11, 1056964608, 1065353216, 752097756, bIgnoreUnlocks, permanentDegradation, false);
	}

	if (pedParam0 != Global_35)
		if (func_367(weaponHash))
			WEAPON::SET_PED_INFINITE_AMMO(pedParam0, bParam3, weaponHash);
	else if (bParam10)
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), weaponHash, bParam4);

	return weaponHash;
}

BOOL func_271(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x89E0 Hash - 0xBA023B92 ^0x16E0B707
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

void func_272(Ped pedParam0, int* piParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x8A39 Hash - 0xAB850FC2 ^0x2509CA9B
{
	TASK::CLOSE_SEQUENCE_TASK(*piParam1);

	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam2 > 0f)
		{
			if (iParam3 < iParam2)
				iParam3 = iParam2;
		
			TASK::_TASK_PERFORM_SEQUENCE_2(pedParam0, *piParam1, iParam2, iParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(pedParam0, *piParam1);
		}
	}

	if (bParam4)
		TASK::CLEAR_SEQUENCE_TASK(piParam1);

	return;
}

int func_273(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3, int iParam4, int iParam5) // Position - 0x8A92 Hash - 0x66EFE2A3 ^0x17B8791D
{
	int i;
	int num;
	int num2;

	if (iParam5 == 0)
		if (uParam1->f_199 > 0)
			iParam5 = uParam1->f_199 - 1;
		else
			iParam5 = *uParam0 - 1;

	num = func_368((iParam5 - iParam4) + 1, 5);
	num2 = (iParam5 - iParam4) + 1;

	if (uParam1->f_191 == -1)
		uParam1->f_191 = iParam4;

	for (i = 0; i < num; i = i + 1)
	{
		if (uParam1->f_191 > (iParam4 + num2) - 1 || uParam1->f_191 < iParam4)
			uParam1->f_191 = iParam4;
	
		if (!func_369(uParam0->[uParam1->f_191 /*9*/].f_5) || bParam3)
		{
			if (func_370(uParam0->[uParam1->f_191 /*9*/].f_5, &(uParam1->f_155), &(uParam1->f_183), 0))
			{
				if (bParam2)
					func_190(&uParam0->[uParam1->f_191 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
			
				return uParam1->f_191;
			}
		}
		else if (func_369(uParam0->[uParam1->f_191 /*9*/].f_5))
		{
			if (func_173(uParam0->[uParam1->f_191 /*9*/].f_5, Global_35, false, true) < 2f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uParam0->[uParam1->f_191 /*9*/].f_5, Global_35, 17))
			{
				if (bParam2)
					func_190(&uParam0->[uParam1->f_191 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
			
				return uParam1->f_191;
			}
		}
	
		uParam1->f_191 = uParam1->f_191 + 1;
	}

	return -1;
}

void func_274(var uParam0, BOOL bParam1) // Position - 0x8BD3 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_290(uParam0))
		func_171(uParam0);

	return;
}

void func_275(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x8BF3 Hash - 0xD3ABA9AA ^0x89487E3E
{
	if (!func_1(pedParam0, 0))
		return;

	if (!PED::IS_PED_USING_ANY_SCENARIO(pedParam0))
		return;

	if (bParam5 && PED::_0xF9331B3A314EB49D(pedParam0))
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(pedParam0);
		return;
	}

	_IS_NULL_VECTOR(vParam1);

	switch (iParam4)
	{
		case 1:
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(pedParam0);
			break;
	
		case 2:
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(pedParam0, vParam1, iParam6);
			break;
	
		case 3:
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(pedParam0, vParam1, iParam6);
			break;
	
		case 4:
			PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(pedParam0, vParam1);
			break;
	
		case 5:
			PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(pedParam0, vParam1, iParam6, false);
			break;
	
		case 6:
			PED::SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(pedParam0, vParam1, iParam6, false);
			break;
	
		case 7:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(pedParam0);
			break;
	
		default:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(pedParam0);
			break;
	}

	return;
}

void func_276(eStackSize essParam0) // Position - 0x8CD7 Hash - 0x56DB2414 ^0x56DB2414
{
	if (!func_43(essParam0))
		return;

	return;
}

void func_277() // Position - 0x8CEC Hash - 0x40489623 ^0xA6E7649C
{
	int num;
	int i;
	var taskSequenceId;

	num = 17;

	for (i = 0; i < num; i = i + 1)
	{
		num[i] = -1;
	}

	func_371(&uLocal_244, ENTITY::GET_ENTITY_COORDS(iLocal_20.f_192, false, false), &num, 0, iLocal_569, 20f, true);

	for (i = 0; i < num; i = i + 1)
	{
		if (num[i] != -1 && uLocal_244[num[i] /*9*/].f_5 != iLocal_20.f_192 && func_156(uLocal_244[num[i] /*9*/].f_5, 0, true))
		{
			func_275(uLocal_244[num[i] /*9*/].f_5, Global_36, 3, true, 2);
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
			func_272(uLocal_244[num[i] /*9*/].f_5, &taskSequenceId, 0.5f, 1.2f, true, true);
		}
	}

	return;
}

BOOL func_278(int iParam0, BOOL bParam1) // Position - 0x8DDA Hash - 0x10D5FEC5 ^0xD7F9A967
{
	if (!func_372(iParam0, false))
		return false;

	return Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4;
}

int func_279(int iParam0) // Position - 0x8E1A Hash - 0x2097A164 ^0x2097A164
{
	switch (iParam0)
	{
		case 0:
			return 75;
	
		case 1:
			return 50;
	
		case 2:
			return 50;
	
		case 3:
			return 35;
	
		case 4:
			return 35;
	
		case 5:
			return 50;
	
		default:
		
	}

	return 0;
}

BOOL func_280(int iParam0) // Position - 0x8E6D Hash - 0x84ED4CA3 ^0x2A768FAC
{
	int num;

	num = iParam0;

	switch (num)
	{
		case 1:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_244[num /*9*/].f_5, false, true);
			func_373(&uLocal_244[num /*9*/], false, true, true, false, 0);
			break;
	
		case 2:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_244[num /*9*/].f_5, false, true);
			func_373(&uLocal_244[num /*9*/], false, true, true, false, 0);
			break;
	
		case 16:
			func_373(&uLocal_244[num /*9*/], false, false, true, false, 0);
			break;
	
		default:
			func_373(&uLocal_244[num /*9*/], false, true, true, false, 0);
			break;
	}

	return true;
}

BOOL func_281(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x8EFC Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

BOOL func_282(Ped pedParam0, Volume volParam1, int iParam2, BOOL bParam3) // Position - 0x8F32 Hash - 0x425E360D ^0xB9BEF16F
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, true, 0);
}

BOOL func_283() // Position - 0x8F66 Hash - 0x8FE5765A ^0x5558FE76
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::GET_VOLUME_COORDS(volLocal_15.f_3), Global_36, false) < 25f)
		iLocal_20.f_190 = func_273(&uLocal_244, &iLocal_20, false, false, 0, 1);
	else
		iLocal_20.f_190 = func_273(&uLocal_244, &iLocal_20, false, false, 2, 3);

	if (iLocal_20.f_190 < 0)
	{
		return false;
	}
	else
	{
		iLocal_20.f_192 = uLocal_244[iLocal_20.f_190 /*9*/].f_5;
		func_374(&uLocal_244[iLocal_20.f_190 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
		return true;
	}

	return false;
}

BOOL func_284(var uParam0, int iParam1) // Position - 0x8FE0 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_290(uParam0))
		return false;

	if (func_174(uParam0) > iParam1)
		return true;

	return false;
}

int func_285(Ped pedParam0, Ped pedParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8, BOOL bParam9, BOOL bParam10, int iParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, int iParam15) // Position - 0x9007 Hash - 0xD668806E ^0x3A7B5575
{
	BOOL flag;
	float num;
	int num2;
	char* str;

	iParam5 = iParam5;
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
		if (func_88())
			iParam4 = 50f;
		else
			iParam4 = 75f;

	if (bParam9)
		if (pedParam0 != Global_35 && pedParam1 != Global_35)
			if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
				if (func_375(pedParam0, true, true) > iParam4)
					return -1;

	flag = pedParam0 == pedParam1 || pedParam1 == 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0) || iParam11 == 1718175949 || bParam9 == false)
	{
		if (!flag)
			num = func_173(pedParam0, pedParam1, true, true);
	
		if (flag || bParam7 || num < iParam4 || bParam9 == false)
		{
			func_171(&uLocal_0);
		
			if (!flag && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
					TASK::TASK_LOOK_AT_ENTITY(pedParam0, pedParam1, 7500, 0, 51, 0);
			
				if (func_376(pedParam0, pedParam1, num, bParam13))
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
				str.f_2 = iParam5;
			
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
				num2 = func_377(pedParam0, sParam2, iParam11, pedParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15) ? 1 : -1;
			}
		
			if (num2 >= 0)
			{
			}
		
			return num2;
		}
	}

	return -1;
}

void func_286(var uParam0, float fParam1) // Position - 0x91F8 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_292() - fParam1;
	func_378(uParam0, 1);
	func_379(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_287(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x921E Hash - 0xBE722812 ^0xDEE2B62C
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedParam0, pedParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

void func_288(int iParam0) // Position - 0x923C Hash - 0x7B76730 ^0x7B76730
{
	iLocal_562 = iParam0;
	return;
}

void func_289(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x9249 Hash - 0x20BDF103 ^0x2C690672
{
	var taskSequenceId;
	int num;
	int num2;

	if (uParam1->[iParam2 /*9*/].f_5 == uParam0->f_192 && !bParam8 || !func_156(uParam1->[iParam2 /*9*/].f_5, 0, true))
		return;

	func_380(uParam1, iParam2, &num, &num2);
	func_275(uParam1->[iParam2 /*9*/].f_5, Global_36, 2, true, 1);
	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);

	if (func_185(&(uParam1->[iParam2 /*9*/].f_7), 32) || func_369(uParam1->[iParam2 /*9*/].f_5))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			if (bParam7)
				TASK::TASK_PLAY_ANIM(0, sParam3, sParam4, 4f, -4f, -1, 0, 0, false, 0, false, 0, false);
			else if (func_381())
				TASK::TASK_PLAY_ANIM(0, sParam3, sParam4, 1090519040, -4f, MISC::GET_RANDOM_INT_IN_RANGE(500, 1200), 0, 0, false, 0, false, 0, false);
	
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), -1082130432, -1082130432, -1082130432);
	
		if (func_381() || bParam6 && !func_185(&(uParam1->[iParam2 /*9*/].f_7), 16))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->[iParam2 /*9*/].f_5, 246, true);
			TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 4000, 0, 0, 1);
		}
	}
	else if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam1->[iParam2 /*9*/].f_5))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), -1082130432, -1082130432, -1082130432);
		func_382(uParam1->[iParam2 /*9*/].f_5, Global_35, 500, false, true, 1);
	}

	if (bParam5)
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);

	func_272(uParam1->[iParam2 /*9*/].f_5, &taskSequenceId, num, num2, true, true);
	return;
}

BOOL func_290(var uParam0) // Position - 0x93E9 Hash - 0x5001E582 ^0x5001E582
{
	return func_383(*uParam0, 1);
}

BOOL func_291(var uParam0) // Position - 0x93F9 Hash - 0x39705408 ^0x39705408
{
	return func_383(*uParam0, 2);
}

float func_292() // Position - 0x9409 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

float func_293(Ped pedParam0, Ped pedParam1) // Position - 0x943B Hash - 0xF9959663 ^0xF9959663
{
	return func_173(pedParam0, pedParam1, true, true);
}

float func_294(Ped pedParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0x944D Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), fParam1, bParam4);
}

void func_295(int iParam0) // Position - 0x9475 Hash - 0x7B76730 ^0x7B76730
{
	iLocal_564 = iParam0;
	return;
}

int func_296() // Position - 0x9482 Hash - 0x97D706FD ^0xB491AB2B
{
	var taskSequenceId;
	var taskSequenceId2;

	if (func_156(uLocal_244[10 /*9*/].f_5, 0, true))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(uLocal_244[10 /*9*/].f_5, false);
		PED::SET_PED_COMBAT_RANGE(uLocal_244[10 /*9*/].f_5, 2);
		PED::SET_PED_ACCURACY(uLocal_244[10 /*9*/].f_5, 100);
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_ENTER_VEHICLE(0, uLocal_472[0 /*14*/].f_9, 20000, -1, 1073741824, 1, 0);
		TASK::TASK_VEHICLE_SHOOT_AT_PED(0, Global_35, 90f);
		func_272(uLocal_244[10 /*9*/].f_5, &taskSequenceId, 0, 0, true, true);
		PED::SET_PED_FIRING_PATTERN(uLocal_244[10 /*9*/].f_5, joaat("FIRING_PATTERN_FULL_AUTO"));
		CAM::_REACTIVATE_PED_HEADSHOT_EXECUTE_SLOWCAM(uLocal_244[10 /*9*/].f_5, 1);
	}

	if (func_156(uLocal_244[9 /*9*/].f_5, 0, true))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(uLocal_244[9 /*9*/].f_5, false);
		PED::SET_PED_COMBAT_RANGE(uLocal_244[9 /*9*/].f_5, 2);
		PED::SET_PED_ACCURACY(uLocal_244[9 /*9*/].f_5, 100);
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId2);
		TASK::TASK_ENTER_VEHICLE(0, uLocal_472[1 /*14*/].f_9, 20000, -1, 1073741824, 1, 0);
		TASK::TASK_VEHICLE_SHOOT_AT_PED(0, Global_35, 90f);
		func_272(uLocal_244[9 /*9*/].f_5, &taskSequenceId2, 0, 0, true, true);
		PED::SET_PED_FIRING_PATTERN(uLocal_244[9 /*9*/].f_5, joaat("FIRING_PATTERN_FULL_AUTO"));
		CAM::_REACTIVATE_PED_HEADSHOT_EXECUTE_SLOWCAM(uLocal_244[9 /*9*/].f_5, 1);
	}

	return 1;
}

void func_297() // Position - 0x95B3 Hash - 0x90283A9B ^0xA9E8C35B
{
	if (func_156(uLocal_244[10 /*9*/].f_5, 0, true) && !func_271(uLocal_244[10 /*9*/].f_5, SCRIPT_TASK_ENTER_VEHICLE) && !func_271(uLocal_244[10 /*9*/].f_5, SCRIPT_TASK_VEHICLE_SHOOT_AT_ENTITY) && !func_271(uLocal_244[10 /*9*/].f_5, SCRIPT_TASK_COMBAT) && !PED::IS_PED_IN_VEHICLE(uLocal_244[10 /*9*/].f_5, uLocal_472[0 /*14*/].f_9, true))
		TASK::TASK_COMBAT_PED(uLocal_244[10 /*9*/].f_5, Global_35, 0, 0);

	if (func_156(uLocal_244[9 /*9*/].f_5, 0, true) && !func_271(uLocal_244[9 /*9*/].f_5, SCRIPT_TASK_ENTER_VEHICLE) && !func_271(uLocal_244[9 /*9*/].f_5, SCRIPT_TASK_VEHICLE_SHOOT_AT_ENTITY) && !func_271(uLocal_244[9 /*9*/].f_5, SCRIPT_TASK_COMBAT) && !PED::IS_PED_IN_VEHICLE(uLocal_244[9 /*9*/].f_5, uLocal_472[1 /*14*/].f_9, true))
		TASK::TASK_COMBAT_PED(uLocal_244[9 /*9*/].f_5, Global_35, 0, 0);

	return;
}

void func_298() // Position - 0x96BF Hash - 0xE14B03F1 ^0xEEDF7A2
{
	var taskSequenceId;
	var taskSequenceId2;

	if (func_156(uLocal_244[10 /*9*/].f_5, 0, true) && PED::IS_PED_IN_VEHICLE(uLocal_244[10 /*9*/].f_5, uLocal_472[0 /*14*/].f_9, false) && !func_185(&(uLocal_244[10 /*9*/].f_7), 256))
	{
		if (func_173(Global_35, uLocal_244[10 /*9*/].f_5, false, false) < 10f || !PED::IS_PED_FACING_PED(uLocal_244[10 /*9*/].f_5, Global_35, 30f))
		{
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(0, joaat("group_repeater"), false, 0, true, false);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_272(uLocal_244[10 /*9*/].f_5, &taskSequenceId, 0, 0, true, true);
			PED::SET_PED_DEFENSIVE_AREA_VOLUME(uLocal_244[10 /*9*/].f_5, volLocal_15, false, false, false);
			PED::SET_PED_COMBAT_MOVEMENT(uLocal_244[10 /*9*/].f_5, CM_Defensive);
			func_187(&(uLocal_244[10 /*9*/].f_7), 256, false);
		}
	}

	if (func_156(uLocal_244[9 /*9*/].f_5, 0, true) && PED::IS_PED_IN_VEHICLE(uLocal_244[9 /*9*/].f_5, uLocal_472[1 /*14*/].f_9, false) && !func_185(&(uLocal_244[9 /*9*/].f_7), 256))
	{
		if (func_173(Global_35, uLocal_244[9 /*9*/].f_5, false, false) < 10f || !PED::IS_PED_FACING_PED(uLocal_244[9 /*9*/].f_5, Global_35, 30f))
		{
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId2);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(0, joaat("group_repeater"), false, 0, true, false);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_272(uLocal_244[9 /*9*/].f_5, &taskSequenceId2, 0, 0, true, true);
			PED::SET_PED_DEFENSIVE_AREA_VOLUME(uLocal_244[9 /*9*/].f_5, volLocal_15, false, false, false);
			PED::SET_PED_COMBAT_MOVEMENT(uLocal_244[9 /*9*/].f_5, CM_Defensive);
			func_187(&(uLocal_244[9 /*9*/].f_7), 256, false);
		}
	}

	return;
}

BOOL func_299() // Position - 0x987B Hash - 0xAB26ECCD ^0xECB037D1
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		return false;

	if (PED::IS_PED_IN_VEHICLE(Global_35, uLocal_472[0 /*14*/].f_9, false))
		if (func_384(0))
			return true;

	if (PED::IS_PED_IN_VEHICLE(Global_35, uLocal_472[1 /*14*/].f_9, false))
		if (func_384(1))
			return true;

	return false;
}

BOOL func_300(var uParam0, var uParam1) // Position - 0x98D2 Hash - 0x5926FA00 ^0x535738C0
{
	if (!func_135(&(uParam1->f_5), 33554432))
	{
		if (func_385(uParam0) <= 0)
		{
			func_189(&(uParam1->f_5), 33554432);
			return true;
		}
	}
	else
	{
		return true;
	}

	return false;
}

void func_301(var uParam0) // Position - 0x990E Hash - 0xE3E8CEEA ^0xBA356875
{
	int num;
	int num2;
	int num3;
	int num4;
	var statId;

	num3 = 0;

	switch (uParam0->f_205)
	{
		case 9:
			num = 100;
			num2 = 150;
			num3 = joaat("ex_confed");
			break;
	
		case 16:
			num = 100;
			num2 = 150;
		
			if (!func_31())
				num3 = joaat("odriscolls");
			else
				num3 = joaat("savages");
			break;
	
		case 36:
			num = 75;
			num2 = 100;
			num3 = joaat("odriscolls");
			break;
	
		case 79:
			num = 100;
			num2 = 100;
			num3 = joaat("inbred");
			break;
	
		case 125:
			num = 100;
			num2 = 100;
			num3 = joaat("banditos");
			break;
	
		case 127:
			num = 100;
			num2 = 100;
			num3 = joaat("banditos");
			break;
	
		default:
			num = 0;
			break;
	}

	if (num > 0)
	{
		statId = { func_215(joaat("killed"), num3) };
		STATS::STAT_ID_GET_INT(&statId, &num4);
	
		if (num4 >= uParam0->f_200 + uParam0->f_199)
			func_386(num, 1);
		else
			func_386(num2, 1);
	}

	return;
}

void func_302(var uParam0) // Position - 0x9A08 Hash - 0x174C5533 ^0x174C5533
{
	if (func_387(true) <= 0)
		return;

	return;
}

void func_303(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x9A1C Hash - 0xB9CC5B90 ^0xB9CC5B90
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	num = func_36(essParam0);

	if (!func_37(num))
		return;

	func_388(num, true, iParam1, false, true);
	func_389(essParam0, -1);

	if (bParam2)
	{
		if (func_390(num) >= 1)
			func_391(num, func_390(num) - 1);
	}
	else
	{
		func_392(false, 12);
		num2 = func_393(essParam0);
	
		if (func_390(num) <= 1)
			func_216(func_394(joaat("gang_hideout_completed")), 1);
	
		if (num2 != -1)
		{
			num3 = Global_40.f_9571[num2 /*10*/].f_1;
		
			if (num3 == 2 || num3 == 1)
				Global_1392050[num2 /*14*/].f_1 = Global_1392050[num2 /*14*/].f_1 | 2;
		
			num4 = 0;
			num5 = 12;
			num6 = 0;
		
			if (num2 >= 0 && num2 < 6)
				Global_1393237.f_192[num2] = func_395() / 1000;
		
			switch (num2)
			{
				case 0:
					if (essParam0 == 36)
						Global_1392050[num2 /*14*/].f_1 = Global_1392050[num2 /*14*/].f_1 | 4;
					else if (essParam0 == 16)
						Global_1392050[num2 /*14*/].f_1 = Global_1392050[num2 /*14*/].f_1 | 8;
				
					Global_1393237.f_192[num2] = Global_1393237.f_192[num2] + num6 + (num5 * 60) + (num4 * 3600);
					break;
			
				case 1:
					Global_1393237.f_192[num2] = Global_1393237.f_192[num2] + num6 + (num5 * 60) + (num4 * 3600);
					break;
			
				case 2:
					num4 = 0;
					num5 = 25;
					num6 = 0;
					break;
			
				case 4:
					break;
			}
		
			func_397(func_396(essParam0, true), 350f, 0);
			func_398(0, num2, num6, num5, num4);
		}
	}

	return;
}

BOOL func_304(eStackSize essParam0) // Position - 0x9BCF Hash - 0x68552612 ^0x68552612
{
	int num;

	if (!func_43(essParam0))
		return false;

	num = func_36(essParam0);

	if (!func_37(num))
		return false;

	return func_260(num);
}

void func_305(eStackSize essParam0) // Position - 0x9C01 Hash - 0x6EA988D5 ^0x54EE73E1
{
	int num;
	int num2;

	num = func_36(essParam0);

	if (!func_37(num))
		return;

	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_399(essParam0, 57, func_396(essParam0, true), false);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);

	if (func_192(num) != 4)
		func_214(&Global_1935630, 32);

	if (func_100(num, true))
		func_400(num);

	num2 = func_393(essParam0);

	if (num2 != -1)
		func_398(0, num2, 0, 12, 0);

	func_401(essParam0);
	func_402(num, true);
	func_404(num, true, func_403(PLAYER::PLAYER_ID(), true, false, true));
	func_405(essParam0);
	func_392(false, 12);
	return;
}

BOOL func_306(Ped pedParam0, Entity eParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x9CA1 Hash - 0xED93B9E0 ^0x288D4ED6
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > uParam2->f_5)
		func_406(uParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			uParam2->f_12 = iParam5;
		else
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(uParam2->f_1 & 128 != 0))
		{
			if (func_407(pedParam0, uParam2))
			{
				*uParam3 = 128;
				func_408(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(uParam2->f_1 & 8 != 0))
			{
				if (func_409(pedParam0, uParam2))
				{
					*uParam3 = 8;
					func_408(pedParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_410(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 8;
					func_408(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 32 != 0)
			{
				if (func_411(pedParam0, uParam2))
				{
					*uParam3 = 64;
					func_408(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_403(PLAYER::PLAYER_ID(), false, true, uParam2->f_1 & 524288 == 0))
		{
			if (!(uParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_408(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_412(uParam2, 1065353216))
			{
				if (!(uParam2->f_1 & 4 != 0))
				{
					if (func_413(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 4;
						func_408(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			
				if (!(uParam2->f_1 & 256 != 0))
				{
					if (func_414(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 256;
						func_408(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 16 != 0))
		{
			if (uParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_415(Global_35, pedParam0, uParam2, false))
				{
					*uParam3 = 16;
					func_408(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_415(Global_35, pedParam0, uParam2, true))
			{
				*uParam3 = 16;
				func_408(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_416(pedParam0, uParam2))
				{
					*uParam3 = 32;
					func_408(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_417(&pedParam0, uParam2))
				{
					*uParam3 = 4096;
					func_408(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(uParam2->f_1 & 2 != 0))
			{
				if (func_418(uParam2, 4000))
				{
					if (func_419(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, false, *uParam2 & 256 != 0) && func_420(uParam2, pedParam0) && func_421(uParam2, pedParam0))
					{
						*uParam3 = 2;
						func_408(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 2 != 0))
		{
			if (uParam2->f_12 < 4f)
			{
				if (func_419(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, true, *uParam2 & 256 != 0) && func_420(uParam2, pedParam0) && func_421(uParam2, pedParam0))
				{
					*uParam3 = 2;
					func_408(pedParam0, uParam2, *uParam3);
					return true;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_422(pedParam0, Global_1935630.f_41))
							{
								func_423();
								*uParam3 = 2;
								func_408(pedParam0, uParam2, *uParam3);
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
						if (func_422(pedParam0, Global_1935630.f_41))
						{
							func_423();
							*uParam3 = 2;
							func_408(pedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		
			if (uParam2->f_12 < 10f)
			{
				if (func_424(uParam2, pedParam0) || uParam2->f_9 > 0 && func_395() - uParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_423();
						*uParam3 = 2;
						func_408(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_425())
					{
						if (func_422(pedParam0, Global_1935630.f_42))
						{
							func_423();
							*uParam3 = 2;
							func_408(pedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 1024 != 0))
		{
			if (func_426(uParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_408(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!(uParam2->f_1 & 2048 != 0))
			{
				if (func_427(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 2048;
					func_408(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_428(pedParam0, uParam2))
					{
						*uParam3 = 8192;
						func_408(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*uParam2 & 64 != 0)
			{
				if (func_429(pedParam0, uParam2))
				{
					*uParam3 = 32768;
					func_408(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_430(uParam2, 4000))
				{
					if (func_431(&pedParam0, uParam2))
					{
						*uParam3 = 512;
						func_408(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_432(pedParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_408(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(uParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_433(uParam2, pedParam0))
			{
				*uParam3 = 1;
				func_408(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

BOOL func_307(var uParam0, var uParam1) // Position - 0xA2CA Hash - 0x92FA3DEB ^0x1E091ACB
{
	eStackSize i;
	eStackSize stackSize;
	Ped entity2;

	for (i = 0; i < func_387(true); i = i + 1)
	{
		stackSize = func_434(i);
	
		if (func_349(stackSize))
		{
			entity2 = func_435(stackSize);
		
			if (ENTITY::DOES_ENTITY_EXIST(entity2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
				{
					if (func_156(entity2, 0, true))
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_5, entity2, true, true))
							return true;
				
					if (func_156(uParam1->f_5, 0, true))
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(entity2, uParam1->f_5, true, true))
							return true;
				}
			}
		}
	}

	return false;
}

void func_308(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0xA354 Hash - 0x9AEDF522 ^0x6E655EB6
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		if (func_156(uParam0->f_5, 0, true))
		{
			if (!func_436(uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_5, 518218985, true) == 1 || bParam7)
				{
					if (func_437(uParam0->f_5, uParam1, true) > (float)iParam4 * iParam4)
					{
						MAP::REMOVE_BLIP(&(uParam0->f_6));
					}
					else if (func_284(uParam5, iParam6))
					{
						MAP::REMOVE_BLIP(&(uParam0->f_6));
						func_294(uParam0->f_5, uParam1, true) < (float)iParam4 / 3;
					}
				}
			}
		}
	}

	return;
}

void func_309(Blip* pblParam0) // Position - 0xA3E4 Hash - 0xB0965077 ^0xCF35C455
{
	if (MAP::DOES_BLIP_EXIST(*pblParam0))
		MAP::REMOVE_BLIP(pblParam0);

	return;
}

void func_310(var uParam0, BOOL bParam1) // Position - 0xA3FC Hash - 0x9B98839C ^0x4CE25DE5
{
	if (uParam0->f_205 != 9)
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, bParam1);

	return;
}

int func_311(int iParam0) // Position - 0xA41B Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_438(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_312(int iParam0) // Position - 0xA45C Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_24() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

BOOL func_313(int iParam0) // Position - 0xA4A1 Hash - 0x14DDF3C9 ^0xAD14D790
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] & 32 != 0;

	return Global_1058888.f_40545[iParam0 /*11*/] & 32 != 0;
}

BOOL func_314(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0xA4EA Hash - 0xBF2250D5 ^0x34592C3E
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

void func_315(int iParam0, var uParam1, var uParam2) // Position - 0xA534 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

void func_316(int iParam0, int iParam1) // Position - 0xA550 Hash - 0x978E21B ^0x703A4DC6
{
	int address;

	address = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

void func_317(var uParam0, var uParam1) // Position - 0xA574 Hash - 0xC286D28A ^0xC6E3DBEA
{
	int address;
	int address2;

	if (func_24() != -1)
	{
		address = Global_36638.f_1444[*uParam0];
		MISC::SET_BIT(&address, *uParam1);
		Global_36638.f_1444[*uParam0] = address;
		return;
	}

	address2 = Global_40.f_7832[*uParam0];
	MISC::SET_BIT(&address2, *uParam1);
	Global_40.f_7832[*uParam0] = address2;
	return;
}

int func_318(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0xA5CD Hash - 0xB88D7AA5 ^0x36259347
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam4;
	num.f_1 = iParam5;
	num.f_2 = iParam6;
	num.f_3 = iParam8;
	num2.f_7 = 1;
	num2 = iParam7;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam9, bParam10);
	return num3;
}

BOOL func_319(BOOL bParam0) // Position - 0xA62E Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1898091 && bParam0 != false;
}

void func_320(var uParam0, BOOL bParam1) // Position - 0xA63F Hash - 0xE170C7AA ^0xDBC63C7F
{
	int num;

	num = 0;
	func_439(&num, 0);
	func_439(&num, 17);
	func_439(&num, 28);

	if (bParam1)
		COMPANION::_0x3CAAD93FA5B9579A(uParam0->f_215, 2, num);
	else if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_215))
		COMPANION::_0x7274F84B1501B523(uParam0->f_215);

	return;
}

void func_321(BOOL bParam0) // Position - 0xA687 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898091 = Global_1898091 || bParam0;
	return;
}

BOOL func_322() // Position - 0xA69A Hash - 0x215D4172 ^0x215D4172
{
	return func_319(8);
}

BOOL func_323() // Position - 0xA6A8 Hash - 0x7BF82DA8 ^0x7BF82DA8
{
	if (func_24() != false)
		return true;

	return true;
}

const char* func_324(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xA6BD Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_325(var uParam0, var uParam1, var uParam2) // Position - 0xA6D1 Hash - 0xD993B6FD ^0xD993B6FD
{
	int i;

	for (i = 0; i < 51; i = i + 1)
	{
		if (func_440(uParam0, i))
			return i;
	}

	return -1;
}

const char* func_326(int iParam0) // Position - 0xA6FF Hash - 0xE6862179 ^0x51D48619
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
	
		case 1:
			return "LANDMARK_SCRATCHING_POST";
	
		case 2:
			return "LANDMARK_JORGES_GAP";
	
		case 3:
			return "LANDMARK_MERCER_STATION";
	
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
	
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
	
		case 6:
			return "LANDMARK_SILENT_STEAD";
	
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
	
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
	
		case 9:
			return "LANDMARK_TWO_CROWS";
	
		case 10:
			return "LANDMARK_REPENTANCE";
	
		case 11:
			return "LANDMARK_BENEDICT_PASS";
	
		case 12:
			return "WATER_MANTECA_FALLS";
	
		case 13:
			return "SETTLEMENT_LIMPANY";
	
		case 14:
			return "WATER_MOUNT_SHANN";
	
		case 15:
			return "LANDMARK_THREE_SISTERS";
	
		case 16:
			return "HIDEOUT_PIKES_BASIN";
	
		case 17:
			return "SETTLEMENT_EL_NIDO";
	
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
	
		case 19:
			return "LANDMARK_ERIS_FIELD";
	
		case 20:
			return "LANDMARK_GRANITE_PASS";
	
		case 21:
			return "LANDMARK_VENTERS_PLACE";
	
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
	
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
	
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
	
		case 25:
			return "LANDMARK_CITADEL_ROCK";
	
		case 26:
			return "LANDMARK_CUEVA_SECA";
	
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
	
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
	
		case 29:
			return "LANDMARK_DONNER_FALLS";
	
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
	
		case 32:
			return "LANDMARK_FORT_BRENNAND";
	
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
	
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
	
		case 35:
			return "LANDMARK_MESCALERO";
	
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
	
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
	
		case 38:
			return "LANDMARK_BROKEN_TREE";
	
		case 39:
			return "LANDMARK_BARDS_CROSSING";
	
		case 40:
			return "LANDMARK_FACE_ROCK";
	
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
	}

	return "";
}

BOOL func_327(eStackSize essParam0) // Position - 0xA9E1 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (essParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}

	return false;
}

BOOL func_328(int iParam0) // Position - 0xAA0B Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_441(iParam0))
		return false;

	return func_442(iParam0);
}

BOOL func_329(int iParam0) // Position - 0xAA27 Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

const char* func_330(const char* sParam0, int iParam1) // Position - 0xAA3D Hash - 0x9E99F03 ^0x74E0E7C4
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_331() // Position - 0xAA57 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_332(int iParam0) // Position - 0xAA76 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

BOOL func_333(int iParam0) // Position - 0xAA8A Hash - 0x169E8D3F ^0x169E8D3F
{
	return func_221(iParam0, Global_1310750.f_16072 | 64);
}

void func_334(int iParam0) // Position - 0xAAA2 Hash - 0x3D0B339A ^0xB87B2B3D
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

BOOL func_335(Hash hParam0) // Position - 0xAB2F Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_443(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

BOOL func_336() // Position - 0xAB4A Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

BOOL func_337(int iParam0) // Position - 0xAB53 Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_47(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_338(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xAB78 Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_47(iParam0))
		return;

	if (!func_123(iParam0, 1))
		return;

	if (!func_123(iParam0, 2))
		return;

	if (!bParam4 && !func_337(iParam0) && func_444(iParam0))
		return;

	func_127(iParam0, 1);
	func_445(iParam0);

	if (func_446(func_124(iParam0)))
	{
		persChar = func_126(iParam0);
	
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
	
		func_127(iParam0, 16);
	}

	if (func_123(iParam0, 128) && !bParam3)
		func_447(iParam0, false);

	return;
}

void func_339(int iParam0, BOOL bParam1) // Position - 0xAC64 Hash - 0x6FB1865F ^0x85C63E45
{
	if (!func_448(iParam0))
		return;

	if (bParam1)
	{
		if (!func_449(iParam0, 1024))
		{
			func_450(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_449(iParam0, 1024))
	{
		func_451(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}

	func_452(iParam0);
	return;
}

void func_340(int iParam0, int iParam1) // Position - 0xACBA Hash - 0xD75877A8 ^0xA8B353E5
{
	if (!func_453(iParam0))
		return;

	Global_1914319.f_3[iParam0 /*446*/].f_7 = Global_1914319.f_3[iParam0 /*446*/].f_7 - Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1;
	return;
}

int func_341(int iParam0) // Position - 0xACFA Hash - 0x47F93C28 ^0x59A8BC1F
{
	return Global_1914319.f_3[iParam0 /*446*/].f_408;
}

void func_342(int iParam0) // Position - 0xAD10 Hash - 0x53643336 ^0x7E4A5E20
{
	Global_1914319.f_3[iParam0 /*446*/].f_7 = 0;
	return;
}

void func_343(int iParam0, BOOL bParam1) // Position - 0xAD26 Hash - 0x1BC36FD9 ^0xDFBA1F0
{
	int num;
	int num2;
	int offset;

	if (!func_453(iParam0))
		return;

	num = iParam0;
	num2 = num / 32;
	offset = num % 32;

	if (bParam1)
		MISC::SET_BIT(&Global_1914319.f_15924[num2], offset);
	else
		MISC::CLEAR_BIT(&Global_1914319.f_15924[num2], offset);

	return;
}

BOOL func_344(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xAD77 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_345(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

BOOL func_345(eStackSize essParam0) // Position - 0xADA1 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

int func_346(int iParam0, var uParam1, var uParam2) // Position - 0xADAD Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

Ped func_347(eStackSize essParam0) // Position - 0xADCA Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_345(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

void func_348(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xAE04 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_345(essParam0))
			return;

	func_346(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_349(eStackSize essParam0) // Position - 0xAE3E Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

float func_350(eStackSize essParam0) // Position - 0xAE5D Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_345(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_351(eStackSize essParam0, Ped pedParam1) // Position - 0xAE7E Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_454(pedParam1);

	return;
}

void func_352(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xAE98 Hash - 0x6E8FD624 ^0x6E8FD624
{
	PersChar char;
	Ped ped;

	if (!func_349(essParam0))
		return;

	if (func_228(essParam0))
	{
		if (!func_455(essParam0))
			return;
	
		if (!bParam1)
			return;
	}

	if (func_230(essParam0, 32, true))
		if (!bParam2)
			return;

	char = func_456(essParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_347(essParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_350(essParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_457(essParam0, 2, true);
	}
	else
	{
		func_458(essParam0);
		func_457(essParam0, 1, true);
	}

	return;
}

int func_353(int iParam0, int iParam1) // Position - 0xAFA6 Hash - 0x8FA0E29 ^0xC3F68E87
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

void func_354(var uParam0, BOOL bParam1) // Position - 0xC0C1 Hash - 0x56CDBE76 ^0x2A1AF358
{
	switch (uParam0->f_205)
	{
		case 9:
			if (bParam1)
				AUDIO::TRIGGER_MUSIC_EVENT("SB_HIDEOUT_FAIL");
			else
				AUDIO::TRIGGER_MUSIC_EVENT("SB_HIDEOUT_END");
			break;
	
		case 36:
			if (bParam1)
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_FAIL");
			else
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_ABANDON");
			break;
	
		case 79:
			if (bParam1)
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_BH_FAIL");
			else
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_BH_ABANDON");
			break;
	
		case 125:
		case 127:
			AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
			break;
	}

	return;
}

void func_355(eStackSize essParam0) // Position - 0xC153 Hash - 0x31E52301 ^0x31E52301
{
	int num;

	num = func_36(essParam0);

	if (!func_37(num))
		return;

	if (num != func_26(0))
		func_459(num);
	else
		func_459(num);

	return;
}

void func_356(eStackSize essParam0, var uParam1) // Position - 0xC189 Hash - 0x6339637E ^0x274E6C84
{
	int num;
	int num2;

	num = func_36(essParam0);

	if (!func_37(num))
		return;

	num2 = func_393(essParam0);

	if (num2 != -1)
		Global_1392050[num2 /*14*/].f_1 = Global_1392050[num2 /*14*/].f_1 | 16;

	func_460(num, false, 2);
	func_389(essParam0, uParam1);
	return;
}

void func_357(Ped* ppedParam0) // Position - 0xC1DB Hash - 0xC4826352 ^0x8AD0FF3C
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

void func_358(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC23A Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_461(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_462(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_463(num);
	*uParam0 = 0;
	return;
}

void func_359(var uParam0) // Position - 0xC28E Hash - 0xCAA51832 ^0x33EEAC5C
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] != 0)
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->[i]);
	}

	return;
}

void func_360(var uParam0, int iParam1) // Position - 0xC2BE Hash - 0xFE5D8273 ^0x73A78C82
{
	if (Global_1935630.f_12)
		return;

	func_464(2000);
	Global_16 = false;
	func_465();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_466(*uParam0, 8));

	if (!func_466(*uParam0, 1))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);

	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(PLAYER_CONTROL);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);

	if (func_466(*uParam0, 2) || func_466(*uParam0, 4))
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));

	if (!func_466(*uParam0, 16))
		func_467(true);

	if (func_466(*uParam0, 32))
	{
		func_468(Global_35, -383172193, 0, 1742327865, false, true, false, false, true, false);
		func_469(joaat("kit_bandana"), false);
	}

	func_470(&(Global_1946054.f_1497), Global_35, true, 49217, true, true, true);

	if (Global_1359489.f_16 & 4194304 != 0)
		Global_1359489.f_16 = Global_1359489.f_16 - Global_1359489.f_16 & 4194304;

	*uParam0 = 0;
	return;
}

void func_361(int iParam0, int iParam1) // Position - 0xC3CF Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_362(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0xC3E4 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_471(eptParam1))
		{
			func_472(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_473(pedParam0, 0, true);
	
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
			func_474(pedParam0, false);
			flag = true;
		}
	
		func_475(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_363(Hash hParam0) // Position - 0xC4C5 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_364(Hash hParam0) // Position - 0xC4E0 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_365(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0xC508 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_476(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_477(398 + i, 1);
		
			if (func_478(hParam0, &unk, hash, false))
			{
				if (func_479(hParam0, &unk6, hash))
				{
					unk28 = { func_480(hParam0, unk, hash, false) };
					func_481(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_482(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_483(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_484(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, bParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

void func_366(Ped pedParam0, var uParam1, var uParam2) // Position - 0xC65A Hash - 0x236D39D4 ^0x39F583A
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

BOOL func_367(Hash hParam0) // Position - 0xC871 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

int func_368(int iParam0, int iParam1) // Position - 0xC883 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_369(Ped pedParam0) // Position - 0xC899 Hash - 0xF2F988FE ^0xA63CD631
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

BOOL func_370(Ped pedParam0, var uParam1, var uParam2, int iParam3) // Position - 0xC981 Hash - 0xCEA86481 ^0xC4924FD7
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > uParam1->f_5)
		func_406(uParam1, false, frameCount);

	if (iParam3 > 0f)
		uParam1->f_12 = iParam3;
	else
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, false, false));

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(uParam1->f_1 & 2 != 0))
			{
				if (func_418(uParam1, 4000))
				{
					if (func_419(pedParam0, Global_1935630.f_41, *uParam1 & 128 != 0, false, *uParam1 & 256 != 0) && func_420(uParam1, pedParam0) && func_421(uParam1, pedParam0))
					{
						func_423();
						*uParam2 = 2;
						func_408(pedParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
	
		if (!(uParam1->f_1 & 2 != 0))
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_418(uParam1, 4000))
				{
					if (func_419(pedParam0, Global_1935630.f_41, *uParam1 & 128 != 0, true, *uParam1 & 256 != 0) && func_420(uParam1, pedParam0) && func_421(uParam1, pedParam0))
					{
						func_423();
						*uParam2 = 2;
						func_408(pedParam0, uParam1, *uParam2);
						return true;
					}
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_422(pedParam0, Global_1935630.f_41))
							{
								func_423();
								*uParam2 = 2;
								func_408(pedParam0, uParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (func_422(pedParam0, Global_1935630.f_41))
						{
							func_423();
							*uParam2 = 2;
							func_408(pedParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_425())
					{
						if (func_422(pedParam0, Global_1935630.f_42))
						{
							func_423();
							*uParam2 = 2;
							func_408(pedParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_412(uParam1, 1065353216))
			{
				if (!(uParam1->f_1 & 4 != 0))
				{
					if (func_413(Global_35, pedParam0, uParam1))
					{
						func_423();
						*uParam2 = 4;
						func_408(pedParam0, uParam1, *uParam2);
						return true;
					}
				}
			
				if (!(uParam1->f_1 & 256 != 0))
				{
					if (func_414(Global_35, pedParam0, uParam1))
					{
						func_423();
						*uParam2 = 256;
						func_408(pedParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
	
		if (!(uParam1->f_1 & 131072 != 0))
		{
			if (func_485(pedParam0, uParam1))
			{
				func_423();
				*uParam2 = 131072;
				func_408(pedParam0, uParam1, *uParam2);
				return true;
			}
		}
	
		if (*uParam1 & 4 != 0)
		{
			if (func_486(pedParam0, uParam1))
			{
				func_423();
				*uParam2 = 262144;
				func_408(pedParam0, uParam1, *uParam2);
				return true;
			}
		}
	}

	return false;
}

void func_371(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, float fParam7, BOOL bParam8) // Position - 0xCC80 Hash - 0x86C52084 ^0x3139ED90
{
	float num;
	int i;
	int num2;

	for (i = iParam5; i <= iParam6; i = i + 1)
	{
		if (func_156(uParam0->[i /*9*/].f_5, 0, true) && num2 < *uParam4)
		{
			num = func_294(uParam0->[i /*9*/].f_5, uParam1, bParam8);
		
			if (num < fParam7)
			{
				uParam4->[num2] = i;
				num2 = num2 + 1;
			}
		}
	}

	return;
}

BOOL func_372(int iParam0, BOOL bParam1) // Position - 0xCCE2 Hash - 0xA712060D ^0xA712060D
{
	if (iParam0 < 0)
		return false;

	if (iParam0 >= 6 && !bParam1 || iParam0 > 10 && bParam1)
		return false;

	return true;
}

int func_373(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0xCD1A Hash - 0xD69FD69B ^0x93373EF9
{
	Hash bestPedWeapon;
	var taskSequenceId;

	if (func_156(uParam0->f_5, 0, true))
	{
		bestPedWeapon = WEAPON::GET_BEST_PED_WEAPON(uParam0->f_5, false, false);
	
		if (!func_185(&(uParam0->f_7), 512))
		{
			if (bParam1)
			{
				TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			
				if (bParam4)
					TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 4000, 0, 0, 0);
			
				if (bestPedWeapon != 0)
					if (bParam2 && WEAPON::_IS_WEAPON_ONE_HANDED(bestPedWeapon) || WEAPON::_IS_WEAPON_TWO_HANDED(bestPedWeapon))
						func_382(uParam0->f_5, Global_35, 250, false, true, 1);
			
				TASK::TASK_COMBAT_PED(0, Global_35, iParam5, 0);
				func_272(uParam0->f_5, &taskSequenceId, 0.1f, 0.3f, true, true);
			}
			else
			{
				TASK::TASK_COMBAT_PED(uParam0->f_5, Global_35, 0, 0);
			}
		}
	
		if (bParam3)
			if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "proc_bounty_target"))
				func_190(uParam0, joaat("BLIP_STYLE_ENEMY"), 0);
	
		return 1;
	}

	return 0;
}

void func_374(var uParam0, Hash hParam1, Hash hParam2) // Position - 0xCDF1 Hash - 0x2B5418CC ^0x2B5418CC
{
	func_190(uParam0, hParam1, hParam2);
	return;
}

float func_375(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCE03 Hash - 0x2753566D ^0x575C60D0
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return -1f;

	return func_173(Global_35, pedParam0, bParam1, bParam2);
}

BOOL func_376(Ped pedParam0, Ped pedParam1, float fParam2, BOOL bParam3) // Position - 0xCE2C Hash - 0x3576CBF5 ^0xBF0EF05A
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

BOOL func_377(Ped pedParam0, char* sParam1, int iParam2, Ped pedParam3, BOOL bParam4, int iParam5, int iParam6, int iParam7) // Position - 0xCE65 Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = iParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = pedParam3;
	str.f_5 = bParam4;
	str.f_6 = iParam7;
	return func_487(pedParam0, &str);
}

void func_378(var uParam0, int iParam1) // Position - 0xCEAC Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_379(var uParam0, int iParam1) // Position - 0xCEBD Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_380(var uParam0, int iParam1, var uParam2, var uParam3) // Position - 0xCED2 Hash - 0x1AD9FFE9 ^0xEC2E1615
{
	if (func_185(&(uParam0->[iParam1 /*9*/].f_7), 16))
	{
		*uParam2 = 0.1f;
		*uParam3 = 0.5f;
	}
	else
	{
		*uParam2 = 0.4f;
		*uParam3 = 1f;
	}

	if (!func_369(uParam0->[iParam1 /*9*/].f_5))
	{
		if (PED::IS_PED_FACING_PED(uParam0->[iParam1 /*9*/].f_5, Global_35, 70f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->[iParam1 /*9*/].f_5))
		{
			*uParam2 = *uParam2 / 2f;
			*uParam3 = *uParam3 / 2f;
		}
	}

	return;
}

BOOL func_381() // Position - 0xCF53 Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

void func_382(Ped pedParam0, Ped pedParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0xCF74 Hash - 0xC33E7271 ^0x71DDCB4C
{
	int weaponHash;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
		{
			weaponHash = 0;
		
			if (!WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, 0, false))
				WEAPON::SET_CURRENT_PED_WEAPON(pedParam0, WEAPON::GET_BEST_PED_WEAPON(pedParam0, false, false), true, 0, false, false);
		
			if (WEAPON::_IS_WEAPON_ONE_HANDED(func_488(pedParam0, 0)) || WEAPON::_IS_WEAPON_TWO_HANDED(func_488(pedParam0, 0)))
				if (bParam4)
					TASK::TASK_AIM_GUN_AT_ENTITY(0, pedParam1, iParam2, bParam3, iParam5);
				else
					TASK::TASK_AIM_GUN_AT_ENTITY(pedParam0, pedParam1, iParam2, bParam3, iParam5);
		}
	}

	return;
}

BOOL func_383(int iParam0, int iParam1) // Position - 0xCFF6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_384(int iParam0) // Position - 0xD005 Hash - 0x162CD046 ^0x6C35F191
{
	int i;
	var taskSequenceId;

	switch (iParam0)
	{
		case 0:
			func_489(0);
		
			if (func_62(&iLocal_20, &uLocal_398, joaat("rel_gang_smugglers"), 0, 3))
			{
				for (i = 0; i < 4; i = i + 1)
				{
					if (func_156(uLocal_398[i /*9*/].f_5, 0, true))
					{
						func_158(uLocal_398[i /*9*/].f_5, joaat("group_repeater"), -1, 1, false, 1056964608, 1065353216, false);
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, uLocal_501[i /*9*/].f_1, Global_35, 3f, 1, 0.5f, 1f, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(0, uLocal_501[i /*9*/].f_1, 0.5f, false, false, false);
						PED::SET_PED_COMBAT_RANGE(0, 2);
						PED::SET_PED_COMBAT_MOVEMENT(0, CM_Defensive);
						TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
						func_272(uLocal_398[i /*9*/].f_5, &taskSequenceId, 0, 0, true, true);
						func_374(&uLocal_398[i /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
					}
				}
			
				iLocal_20.f_197 = 0;
				func_66(&iLocal_20, &uLocal_398, 0, 3);
				return true;
			}
			break;
	
		case 1:
			func_489(1);
		
			if (func_62(&iLocal_20, &uLocal_435, joaat("rel_gang_smugglers"), 0, 3))
			{
				for (i = 0; i < 4; i = i + 1)
				{
					if (func_156(uLocal_435[i /*9*/].f_5, 0, true))
					{
						func_158(uLocal_435[i /*9*/].f_5, joaat("group_repeater"), -1, 1, false, 1056964608, 1065353216, false);
						TASK::TASK_SET_CROUCH_MOVEMENT(uLocal_435[i /*9*/].f_5, true, 0, true);
						TASK::TASK_COMBAT_PED(uLocal_435[i /*9*/].f_5, Global_35, 0, 0);
						func_374(&uLocal_435[i /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
					}
				}
			
				iLocal_20.f_197 = 0;
				func_66(&iLocal_20, &uLocal_435, 0, 3);
				return true;
			}
			break;
	}

	return false;
}

int func_385(var uParam0) // Position - 0xD1BC Hash - 0xC08DD2F3 ^0xEA98B389
{
	int i;
	int num;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->[i /*9*/].f_6) && func_156(uParam0->[i /*9*/].f_5, 0, true))
			num = num + 1;
	}

	return num;
}

void func_386(int iParam0, int iParam1) // Position - 0xD202 Hash - 0xC0A0CA7A ^0xC0A0CA7A
{
	var unk;
	int num;

	if (func_24() != -1)
		return;

	if (func_490(&unk))
		return;

	num = iParam1;

	if (func_491())
		num = 0;

	func_492(iParam0, num);
	return;
}

eStackSize func_387(BOOL bParam0) // Position - 0xD237 Hash - 0x7F08FD3B ^0xE97B69AA
{
	int num;
	int numberOfFollowers;
	var hasLeader;
	int i;
	Ped pedAsGroupMember;

	if (bParam0)
		return func_493(Global_1359489.f_4);

	PED::GET_GROUP_SIZE(func_494(), &hasLeader, &numberOfFollowers);

	if (numberOfFollowers == 0)
		return 0;

	for (i = 0; i < numberOfFollowers; i = i + 1)
	{
		pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_494(), i);
	
		if (func_495(pedAsGroupMember))
			num = num + 1;
	}

	return num;
}

void func_388(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xD297 Hash - 0xB10755B6 ^0xB10755B6
{
	int num;
	BOOL flag;
	var statId;
	var statId2;
	int num2;
	var unk3;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	BOOL flag2;
	int rating;
	Hash hash;
	Hash hash2;
	Hash hash3;
	int num8;
	int num9;
	int num10;

	if (!func_37(iParam0))
		return;

	if (func_192(iParam0) == 4)
	{
		func_496(iParam0, func_121());
	
		if (!(func_311(iParam0) == 5) && !(func_311(iParam0) == 6))
		{
			if (bParam3)
				func_497(iParam0, 6);
			else
				func_497(iParam0, 5);
		
			func_498(iParam0);
		}
	
		return;
	}

	if (bParam1)
		func_499(true);

	num = func_27(iParam0);
	flag = func_24() == false;

	if (num == 1 || num == 8)
	{
		func_500(false, 2);
	
		if (!flag && bParam1)
			func_501();
	}
	else
	{
		func_502(false);
	}

	if (!(num == 1) && !(num == 8))
	{
		func_503(iParam0);
	}
	else
	{
		statId = { func_394(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&statId);
	
		if (!func_212(32768))
		{
			statId2 = { func_394(joaat("LAST_MISSION_NAME")) };
		
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_311(iParam0) != 0)
					if (num == 1)
						if (func_106(iParam0) == 77)
							STATS::STAT_ID_SET_GXT_LABEL(&statId2, &(Global_1835011[76 /*74*/].f_8), true);
						else
							STATS::STAT_ID_SET_GXT_LABEL(&statId2, &(Global_1835011[func_106(iParam0) /*74*/].f_8), true);
					else if (func_106(iParam0) != 95 && func_106(iParam0) != 82 && !func_108(Global_1347702[func_106(iParam0) /*49*/].f_12, 512))
						STATS::STAT_ID_SET_GXT_LABEL(&statId2, &(Global_1347702[func_106(iParam0) /*49*/].f_3), true);
			}
			else
			{
				switch (NETWORK::NETWORK_GET_GAME_MODE())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&statId2, &(Global_1835011[func_106(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}

	if (num == 1)
		Global_40.f_1093 = -1;

	num2 = 0;

	if (num == 1)
		func_505(func_106(iParam0), num2, func_504());
	else if (num == 8)
		func_507(func_106(iParam0), num2, func_504(), func_506());

	if (!(func_311(iParam0) == 5) && !(func_311(iParam0) == 6))
	{
		num4 = func_508(iParam0, &unk3, &num3);
	
		if (num4 != 176656832)
			func_509(num4, unk3, -469960592, num3, 1, true, false);
	}

	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (num)
		{
			case 1:
				num5 = func_510(func_106(iParam0), &num6);
			
				if (!Global_17504.f_9)
				{
					num5 = func_511(num5 - 20, 0, num5);
					num6 = func_511(num6 - 10, 0, num6);
				}
			
				func_512(true);
				func_513(num5, num6, true);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
		
			case 2:
				func_513(120, 0, true);
				break;
		
			case 4:
				func_513(45, 0, true);
				break;
		
			case 5:
				func_513(120, 0, true);
				break;
		
			case 6:
				func_513(func_518(func_517(iParam0)), 0, true);
				break;
		
			case 8:
				num5 = func_514(func_106(iParam0), &num6);
			
				if (!Global_17504.f_9)
				{
					num5 = func_511(num5 - 20, 0, num5);
					num6 = func_511(num6 - 10, 0, num6);
				}
			
				func_513(num5, num6, true);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
			
				if (func_515(func_106(iParam0)))
					func_516(14, 0, 0, 0, 0, false, 1065353216, false);
			
				Global_1899528.f_217 = 1;
				break;
		
			case 9:
				func_513(120, 0, true);
				break;
		}
	}

	func_519(iParam0, true);
	func_496(iParam0, func_121());
	func_498(iParam0);

	if (!(func_311(iParam0) == 0) && bParam1 && func_24() == -1)
	{
		num7 = func_520(iParam0);
	
		if (num7 != -1)
		{
			func_521(false);
		}
		else if (num == 8)
		{
			num7 = func_522();
		
			if (num7 != -1)
				func_521(false);
		}
	}

	if (bParam1)
	{
		Global_1898437 = iParam0;
	
		switch (num)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
		
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
		
			case 6:
				switch (func_106(iParam0))
				{
					case 0:
						Global_1898438 = MISC::GET_GAME_TIMER() - 5000;
						break;
				
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
		
			case 8:
				if (func_107(func_106(iParam0)) && func_108(Global_1347702[func_106(iParam0) /*49*/].f_12, 4))
					Global_1898438 = MISC::GET_GAME_TIMER();
				else
					Global_1898438 = MISC::GET_GAME_TIMER() - 5000;
				break;
		
			default:
				break;
		}
	}

	if (bParam4)
	{
		switch (num)
		{
			case 1:
				if (func_106(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_523();
				}
				break;
		
			case 8:
				if (func_106(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_523();
				}
				break;
		}
	}

	if (!(func_311(iParam0) == 5) && !(func_311(iParam0) == 6))
	{
		if (bParam3)
			func_497(iParam0, 6);
		else
			func_497(iParam0, 5);
	
		func_498(iParam0);
		flag2 = true;
	}

	if (flag2)
	{
		switch (num)
		{
			case 1:
				switch (func_106(iParam0))
				{
					case 0:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_MAP_DISCOVER_REGION(-1753910767);
						break;
				
					case 1:
						func_524();
						NETWORK::_0xBB697756309D77EE(true);
						break;
				
					case 2:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_531(10, false)));
						break;
				
					case 4:
						func_525(joaat("consumable_herb_sage"), 3, true, 0, 0, 752097756, 0, 0, 0, 0);
						func_525(joaat("consumable_herb_ginseng"), 4, true, false, false, 752097756, 0, 0, 0, false);
						func_525(joaat("consumable_herb_indian_tobacco"), 3, true, false, false, 752097756, 0, 0, 0, false);
						func_525(joaat("consumable_herb_yarrow"), 2, true, false, false, 752097756, 0, 0, 0, false);
						func_525(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, true, false, false, 752097756, 0, 0, 0, false);
						func_525(joaat("PROVISION_STRINGY_MEAT"), 3, true, false, false, 752097756, 0, 0, 0, false);
						func_525(joaat("PROVISION_ANIMAL_FAT"), 2, true, false, false, 752097756, 0, 0, 0, false);
						func_525(joaat("provision_bird_feather_flight"), 3, true, false, false, 752097756, 0, 0, 0, false);
						func_525(joaat("consumable_coffee_gnds_reg"), 2, true, false, false, 752097756, 0, 0, 0, false);
						func_525(-1267972061, 1, true, false, false, 752097756, 0, 0, 0, false);
						func_526(-1267972061);
						func_525(1619534881, 1, true, false, false, 752097756, 0, 0, 0, false);
						func_526(1619534881);
						func_525(-755457379, 1, true, false, false, 752097756, 0, 0, 0, false);
						func_526(-755457379);
						func_525(1015404643, 1, true, false, false, 752097756, 0, 0, 0, false);
						func_526(1015404643);
						func_525(-1724192342, 1, true, false, false, 752097756, 0, 0, 0, false);
						func_526(-1724192342);
						func_525(joaat("document_pamphlet_improved_throw_knife"), 1, true, false, false, 752097756, 0, 0, 0, false);
						func_526(joaat("document_pamphlet_improved_throw_knife"));
						func_525(-566881549, 1, true, false, false, 752097756, 0, 0, 0, false);
						func_526(-566881549);
						func_525(joaat("document_pamphlet_molotov"), 1, true, false, false, 752097756, 0, 0, 0, false);
						func_526(joaat("document_pamphlet_molotov"));
						func_525(147796381, 1, true, false, false, 752097756, 0, 0, 0, false);
						func_526(147796381);
						func_525(-378547623, 1, true, false, false, 752097756, 0, 0, 0, false);
						func_526(-378547623);
						func_525(829545206, 1, true, false, false, 752097756, 0, 0, 0, false);
						func_526(829545206);
						func_525(891318243, 1, true, false, false, 752097756, 0, 0, 0, false);
						func_526(891318243);
						func_525(joaat("weapon_kit_camera"), 1, true, false, false, 752097756, 0, 0, 0, false);
						func_525(joaat("kit_camp"), 1, true, false, false, 752097756, 0, 0, 0, false);
						func_525(-1448210800, 1, true, false, false, 752097756, 0, 0, 0, false);
						func_525(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, true, false, false, 752097756, 0, 0, 0, false);
						func_527();
						func_528(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						func_529();
						func_530();
						break;
				
					case 5:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
				
					case 8:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
				
					case 10:
						if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("sp_chal_gamb_root")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(joaat("sp_chal_gamb_root"), true);
							func_532(446, false);
						}
						break;
				
					case 14:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
				
					case 15:
						func_525(1030791766, 1, false, false, false, 752097756, 0, 0, 0, false);
					
						if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("sp_chal_hunt_root")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(joaat("sp_chal_hunt_root"), true);
							func_532(449, false);
						}
						break;
				
					case 16:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
				
					case 17:
						func_536(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, true, true);
					
						if (func_33())
							func_537(joaat("weapon_repeater_evans"));
						break;
				
					case 18:
						func_533(304805134, true, true);
					
						if (!func_100(Global_1347702[21 /*49*/].f_15, true))
						{
							func_388(Global_1347702[21 /*49*/].f_15, false, 0, false, false);
						
							if (Global_1425247.f_53)
								rating = 0;
							else
								rating = 2;
						
							MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), rating);
						}
						break;
				
					case 19:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
				
					case 20:
						func_534();
						break;
				
					case 26:
						func_535();
						break;
				
					case 28:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
				
					case 31:
						func_540();
						break;
				
					case 33:
						if (!func_538(joaat("TP_RMAY_LETTER_1"), -1))
						{
							hash = func_121();
							func_40(&hash, 0, 0, 0, 2, 0, 0, false);
							func_539(joaat("TP_RMAY_LETTER_1"), hash, false);
						}
					
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
					
						if (func_33())
							func_537(joaat("weapon_revolver_lemat"));
						break;
				
					case 34:
						if (func_33())
							func_537(joaat("weapon_revolver_doubleaction_gambler"));
						break;
				
					case 37:
						func_541();
					
						if (func_32())
						{
							if (Global_1425247.f_53)
								rating = 0;
							else
								rating = 3;
						
							MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(joaat("cabr01"), rating);
						}
						break;
				
					case 38:
						func_542();
						break;
				
					case 43:
						func_543();
						break;
				
					case 44:
						if (!func_100(Global_1347702[82 /*49*/].f_15, true))
						{
							func_388(Global_1347702[82 /*49*/].f_15, false, 0, false, false);
						
							if (Global_1425247.f_53)
								rating = 0;
							else
								rating = 3;
						
							MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), rating);
						}
					
						if (!func_100(Global_1347702[83 /*49*/].f_15, true))
						{
							func_388(Global_1347702[83 /*49*/].f_15, false, false, false, false);
						
							if (Global_1425247.f_53)
								rating = 0;
							else
								rating = 3;
						
							MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), rating);
						}
						break;
				
					case 45:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
				
					case 47:
						func_544();
						break;
				
					case 48:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
				
					case 49:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
				
					case 50:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
				
					case 52:
						break;
				
					case 58:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
				
					case 59:
						func_545();
						break;
				
					case 60:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
				
					case 61:
						func_546();
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
				
					case 62:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
				
					case 63:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
				
					case 67:
						func_547();
					
						if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("sp_chal_surv_root")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(joaat("sp_chal_surv_root"), true);
							func_532(451, false);
						}
					
						if (!func_548(joaat("taxidermy_order_05")))
						{
							if (func_548(joaat("taxidermy_order_04")))
							{
								hash2 = func_121();
								func_40(&hash2, 0, 0, 6, 0, 0, 0, false);
								func_539(joaat("TP_TAXIDERMY_REWARD_04_ES"), hash2, true);
							}
						}
					
						if (func_549(4))
						{
							if (!func_550(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, false))
							{
								hash3 = func_121();
								func_40(&hash3, 0, 0, 6, 0, 0, 0, false);
								func_539(joaat("TP_RF_INVITATION_01"), hash3, true);
							}
						}
					
						func_525(1224687176, 1, true, false, false, 752097756, 0, 0, 0, false);
						func_525(-4440804, 1, true, false, false, 752097756, 0, 0, 0, false);
						break;
				
					case 68:
						func_552();
						break;
				
					case 69:
						if (func_100(Global_1347702[9 /*49*/].f_15, true))
							func_551(-6000);
						break;
				
					case 70:
						func_551(23400);
						func_551(1900);
						func_551(-15000);
						break;
				
					case 71:
						func_551(-5500);
						break;
				
					case 74:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_551(89200);
						func_551(2300);
						func_551(2300);
						break;
				
					case 76:
						if (Global_1425247.f_53)
							rating = 0;
						else
							rating = 1;
					
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), rating);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), rating);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), rating);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), rating);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), rating);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), rating);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), rating);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), rating);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), rating);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), rating);
						MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), rating);
						func_553();
						func_551(-139100);
						break;
				}
				break;
		
			case 6:
				switch (func_106(iParam0))
				{
					case 0:
						switch (func_517(iParam0))
						{
							case 5:
								PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		
			case 8:
				switch (func_106(iParam0))
				{
					case 0:
						if (!PLAYER::_GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
							PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
					
						if (!PLAYER::_GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
							PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						break;
				
					case 4:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -751847444);
						break;
				
					case 5:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
						break;
				
					case 9:
						if (func_100(Global_1835011[69 /*74*/].f_1, true))
						{
							func_560(0);
							func_551(40500);
						}
						else
						{
							func_560(0);
							func_551(46500);
						}
						break;
				
					case 22:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
				
					case 24:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::PLAYER_ID(), 0, -1230369426);
						break;
				
					case 26:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876);
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -511263105);
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -837057898);
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -258195548);
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082);
						break;
				
					case 28:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767);
						break;
				
					case 30:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -461700465);
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -489179187);
						break;
				
					case 37:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
				
					case 56:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 883682516);
						break;
				
					case 57:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
				
					case 58:
						func_554();
						break;
				
					case 59:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -121001171);
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("discoverable_name_wrobel"));
						break;
				
					case 61:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
				
					case 62:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_555();
						break;
				
					case 66:
						func_556();
						func_557();
						break;
				
					case 67:
						if (!func_558(6))
							func_559(6);
					
						if (!func_558(3))
							func_559(3);
					
						if (func_33())
							func_537(joaat("weapon_pistol_m1899"));
						break;
				
					case 68:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
				
					case 89:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
				
					case 91:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
				
					case 98:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833);
						break;
				
					case 101:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
				
					case 115:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
				
					case 120:
						MAP::_MAP_DISCOVER_REGION(1720279629);
						break;
				
					case 138:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						break;
				
					case 139:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
				
					case 140:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
				
					case 143:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
						break;
				
					case 147:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
				}
				break;
		}
	
		func_561(iParam0);
		func_562();
	
		switch (num)
		{
			case 1:
				switch (func_106(iParam0))
				{
					case 4:
						func_563(iParam0, 1000, false, 1065353216, 1, 0, 0, 1);
						break;
				
					case 12:
						func_563(iParam0, 120000, true, 0.5f, 2, 0, 0, 1);
						break;
				
					case 19:
						func_563(iParam0, 70000, true, 0.5f, 3, 0, 0, 1);
						break;
				
					case 20:
						func_563(iParam0, 85000, true, 0.5f, 2, 0, 0, 1);
						break;
				
					case 24:
						num8 = func_564(iParam0);
						func_563(iParam0, num8, true, 0.5f, 4, 0, 0, 1);
						break;
				
					case 25:
						func_563(iParam0, 150000, true, 0.5f, 4, 0, 0, 1);
						break;
				
					case 28:
						func_563(iParam0, 45000, true, 0.5f, 2, 0, 0, 1);
						break;
				
					case 29:
						func_563(iParam0, 4600, true, 0f, 3, 0, 0, 1);
						break;
				
					case 34:
						func_563(iParam0, 600000, true, 0.5f, 4, 0, 0, 1);
					
						if (!func_550(joaat("provision_pocket_watch_reutlinge"), 1, false))
							func_525(joaat("provision_pocket_watch_reutlinge"), 1, false, false, false, 752097756, 0, 0, 0, false);
						break;
				
					case 37:
						break;
				
					case 53:
						func_563(iParam0, 90000, true, 0.5f, 4, 0, 0, 1);
						break;
				
					case 57:
						func_563(iParam0, 2100000, true, 0.9047619f, 8, 0, 0, 1);
						break;
				
					case 58:
						break;
				
					case 61:
					case 62:
					case 63:
						func_563(iParam0, 300, false, 1065353216, 1, 0, 0, 1);
						break;
				
					case 72:
						if (func_564(iParam0) == 0)
							func_563(iParam0, 20000, false, 1065353216, 1, 0, 0, 1);
						else
							func_563(iParam0, 15000, false, 1065353216, 1, 0, 0, 1);
						break;
				
					case 76:
						func_563(iParam0, 2042100, false, 1065353216, 1, 0, 0, 1);
						break;
				}
				break;
		
			case 8:
				if (func_108(Global_1347702[func_106(iParam0) /*49*/].f_12, 536870912))
					func_565(11, 1);
			
				switch (func_106(iParam0))
				{
					case 9:
						PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				
					case 37:
						func_563(iParam0, 75000, true, 0.5f, 2, 0, 0, 1);
						break;
				
					case 55:
						func_565(8, 1);
						break;
				
					case 63:
						func_563(iParam0, 60000, true, 0.5f, 3, 0, 0, 1);
						break;
				
					case 94:
						func_563(iParam0, 30000, true, 0.5f, 2, 0, 0, 1);
						break;
				
					case 109:
						func_563(iParam0, 1500, false, 1065353216, 1, 0, 0, 1);
						break;
				
					case 116:
						func_563(iParam0, 25000, true, 0.5f, 1, 0, 0, 1);
						break;
				
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
				}
				break;
		
			case 11:
				if (iParam0 == func_566(0, 10, 11, joaat("cabr01")))
					func_563(iParam0, func_564(iParam0), true, 0.5f, 3, 0, 0, 1);
				else if (iParam0 == func_566(0, 7, 11, joaat("cacr02")))
					func_563(iParam0, func_567(9), true, 0.5f, 3, 0, 0, 1);
				else if (iParam0 == func_566(0, 8, 11, joaat("cacr03")))
					func_563(iParam0, func_567(10), true, 0.5f, 2, 0, 0, 1);
				else if (iParam0 == func_566(0, 11, 11, joaat("cacr01")))
					func_563(iParam0, func_567(8), true, 0.5f, 3, 0, 0, 1);
				else if (iParam0 == func_566(0, 12, 11, joaat("cacr04")))
					func_563(iParam0, func_567(11), true, 0.5f, 2, 0, 0, 1);
				break;
		}
	
		if (bParam1)
		{
			if (!(func_311(iParam0) == 0))
			{
				if (func_568(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_568(iParam0)))
				{
					num9 = 0;
				
					if (bParam3)
						num9 = 3;
				
					func_569(func_27(iParam0), func_568(iParam0), num9);
				
					if (bParam4)
					{
						if (num == 8 && func_106(iParam0) == 58)
							Global_1879514.f_1 = iParam0;
					
						func_571(func_570(Global_1879514.f_1));
					
						if (num == 8 && func_106(iParam0) == 58)
							Global_1879514.f_1 = -1;
					}
				}
			}
		
			if (bParam2)
			{
				switch (num)
				{
					case 1:
						num10 = 3;
						break;
				
					case 2:
						num10 = 9;
						break;
				
					case 4:
						num10 = 2;
						break;
				
					case 5:
						num10 = 12;
						break;
				
					case 6:
						num10 = 1;
						break;
				
					case 7:
						num10 = 0;
						break;
				
					case 8:
						if (func_107(func_106(iParam0)) && func_108(Global_1347702[func_106(iParam0) /*49*/].f_12, 1))
							num10 = 3;
						else
							num10 = 8;
						break;
				
					case 9:
					case 11:
						num10 = 0;
						break;
				}
			}
		
			func_392(bParam2, num10);
		}
	}

	func_572(true);

	if (flag2 || func_523() && func_27(iParam0) == 1 || func_27(iParam0) == 8)
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}

	return;
}

void func_389(eStackSize essParam0, int iParam1) // Position - 0xEC38 Hash - 0x5E5D7592 ^0x5E5D7592
{
	int num;

	num = func_573(essParam0);
	Global_40.f_11864[num /*2*/] = iParam1;
	return;
}

int func_390(int iParam0) // Position - 0xEC54 Hash - 0xE67E3975 ^0x6B59BE69
{
	if (!func_37(iParam0))
		return -1;

	return BUILTIN::SHIFT_RIGHT(func_574(iParam0) & 2147418112, 16);
}

void func_391(int iParam0, int iParam1) // Position - 0xEC7C Hash - 0xE770EA35 ^0xAD2CFCF3
{
	int num;
	int num2;

	if (!func_37(iParam0))
		return;

	num = func_574(iParam0) & 65535;
	num2 = BUILTIN::SHIFT_LEFT(iParam1, 16);
	func_575(iParam0, num2 + num);
	return;
}

void func_392(BOOL bParam0, int iParam1) // Position - 0xECB3 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_576(&Global_0, 8);

	if (!func_331() || func_24() != -1)
		return;

	func_576(&Global_0, 1);
	return;
}

int func_393(eStackSize essParam0) // Position - 0xECF9 Hash - 0x79821E0E ^0x79821E0E
{
	switch (essParam0)
	{
		case 9:
			return 2;
	
		case 16:
			if (func_31())
				return 4;
			else
				return 0;
			break;
	
		case 36:
			return 0;
	
		case 79:
			return 1;
	
		case 114:
			return 5;
	
		case 118:
			return 5;
	
		case 125:
			return 5;
	
		case 127:
			return 5;
	
		case 129:
			return 5;
	}

	return -1;
}

struct<2> func_394(int iParam0) // Position - 0xED75 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_395() // Position - 0xED85 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

Vector3 func_396(eStackSize essParam0, BOOL bParam1) // Position - 0xEDA3 Hash - 0x5496E9AE ^0xF55F17AE
{
	Vector3 volumeCoords;
	var groundZ;

	volumeCoords = { 0f, 0f, 0f };

	if (!func_43(essParam0))
		return volumeCoords;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[essParam0 /*35*/].f_3))
	{
		volumeCoords = { VOLUME::GET_VOLUME_COORDS(Global_1888801[essParam0 /*35*/].f_3) };
	
		if (bParam1)
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(volumeCoords, &groundZ, false))
				volumeCoords.f_2 = groundZ;
	}

	return volumeCoords;
}

void func_397(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4) // Position - 0xEE03 Hash - 0x4E468444 ^0x4E468444
{
	int i;
	int num;
	int num2;

	switch (iParam4)
	{
		case 0:
			num = 3;
			num2 = 5;
			break;
	
		case 1:
			num = 0;
			num2 = 2;
			break;
	
		default:
			num = 0;
			num2 = 5;
			break;
	}

	for (i = num; i <= num2; i = i + 1)
	{
		if (BUILTIN::VDIST(Global_1393237.f_11[i /*30*/].f_3, vParam0) < fParam3)
			func_577(i);
	}

	return;
}

void func_398(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xEE70 Hash - 0xB8B96884 ^0x900FE21
{
	int value;

	func_578(&Global_1393447, 1);
	func_579();
	func_580();
	func_581(BUILTIN::TO_FLOAT(200) / 3f);

	if (iParam0 != 8)
	{
		Global_1392135.f_54 = func_395() / 1000;
	
		if (Global_1392135.f_1 & 4 != 0)
			Global_1392135.f_1 = Global_1392135.f_1 - Global_1392135.f_1 & 4;
	
		func_582();
	
		if (iParam1 == -1)
		{
			if (func_583(iParam0, 1))
			{
				func_584(16777216, 2, 0, true);
				value = BUILTIN::FLOOR(240f);
			}
			else if (func_583(iParam0, 2))
			{
				func_584(16777216, 0, 0, true);
				value = BUILTIN::FLOOR(60f);
			}
			else if (func_583(iParam0, 4))
			{
				func_584(16777216, 5, 0, true);
				value = BUILTIN::FLOOR(900f);
			}
		
			Global_1392135.f_4 = Global_1392135.f_54 + value;
		}
		else
		{
			func_585(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = Global_1392135.f_54 + iParam2 + (iParam3 * 60) + (iParam4 * 3600);
		}
	
		func_586(BUILTIN::TO_FLOAT(value), true, false);
	}
	else
	{
		func_586(BUILTIN::TO_FLOAT(200) / 3f, true, false);
	}

	return;
}

void func_399(eStackSize essParam0, int iParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0xEF97 Hash - 0xE0129E1B ^0xE0129E1B
{
	int i;

	for (i = 0; i < Global_36308; i = i + 1)
	{
		if (func_587(i) == essParam0 && func_588(i) == iParam1)
		{
			func_589(i, -1);
			func_590(i, 0);
			func_591(i, 0);
		
			if (MAP::DOES_BLIP_EXIST(Global_36308[i]))
			{
				if (bParam5)
					MAP::SET_RADAR_ZOOM(Global_36308[i]);
			
				MAP::REMOVE_BLIP(&Global_36308[i]);
			}
		
			return;
		}
	}

	return;
}

void func_400(int iParam0) // Position - 0xF00E Hash - 0x53B9F48A ^0x53B9F48A
{
	if (!func_37(iParam0))
		return;

	func_497(iParam0, 0);
	return;
}

void func_401(eStackSize essParam0) // Position - 0xF02A Hash - 0x9FF5758D ^0xA924E89E
{
	int num;
	int num2;

	switch (essParam0)
	{
		case 9:
			num = joaat("gang_exconfed");
			num2 = joaat("shady_belle");
			break;
	
		case 16:
			if (!func_31())
			{
				num = joaat("gang_odriscoll");
				num2 = joaat("hanging_dog_ranch");
			}
			else
			{
				num = joaat("gang_ranchers");
				num2 = joaat("HANGING_DOG_RANCH_LARAMIE");
			}
			break;
	
		case 36:
			num = joaat("gang_odriscoll");
			num2 = joaat("six_point_cabin");
			break;
	
		case 79:
			num = joaat("gang_inbred");
			num2 = joaat("beaver_hollow");
			break;
	
		case 114:
			num = joaat("gang_banditos");
			num2 = joaat("gaptooth_breach");
			break;
	
		case 118:
			num = joaat("gang_banditos");
			num2 = joaat("fort_mercer");
			break;
	
		case 125:
			num = joaat("gang_banditos");
			num2 = joaat("twin_rocks");
			break;
	
		case 127:
			num = joaat("gang_banditos");
			num2 = joaat("thieves_landing");
			break;
	
		case 129:
			num = joaat("gang_banditos");
			num2 = joaat("SOLOMONS_FOLLY");
			break;
	}

	COMPENDIUM::COMPENDIUM_GANG_HIDEOUT_FOUND(num, num2);
	return;
}

void func_402(int iParam0, BOOL bParam1) // Position - 0xF12A Hash - 0x3C4FA973 ^0x67C1D80B
{
	if (!func_37(iParam0))
		return;

	if (!func_592(iParam0))
		return;

	if (bParam1)
	{
		if (func_568(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_568(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_27(iParam0), func_106(iParam0), func_517(iParam0), func_568(iParam0), Global_36);
		}
	}

	func_497(iParam0, 1);
	bParam1 = bParam1;
	return;
}

BOOL func_403(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF19B Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_593(bParam1, bParam2, bParam3);

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

void func_404(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF2D0 Hash - 0x9F2D2B44 ^0xC32EBA43
{
	int num;
	int num2;

	if (!func_37(iParam0))
		return;

	if (!func_594(iParam0))
		return;

	num = func_27(iParam0);

	if (bParam1)
	{
		if (func_568(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_568(iParam0)))
		{
		}
		else
		{
			if (num == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
				func_595(func_106(iParam0));
		
			if (func_24() != false)
				STATS::STATSTRACKER_DEED_STARTED(func_568(iParam0), 0);
			else
				STATS::STATSTRACKER_DEED_STARTED(func_568(iParam0), Global_265073.f_73815.f_208.f_12);
		}
	}

	func_596(iParam0);

	if (!func_37(func_26(0)))
	{
		func_497(iParam0, 3);
		func_499(bParam2);
	
		if (func_24() == -1)
		{
			if (bParam2 == false)
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
		
			func_502(true);
		}
	
		func_597(iParam0, -1);
	
		if (bParam1 && !func_212(2))
			func_576(&Global_0, 1024);
	
		if (func_24() == -1)
		{
			func_598(&(Global_1347343.f_11), 536870912);
			func_599(2);
			Global_1357515 = -1;
		
			if (num == 1)
				func_600(false);
		
			if (num == 1 || num == 8)
				func_601(false);
		}
	
		if (func_24() == -1)
		{
			num2 = func_520(iParam0);
		
			if (num2 != -1)
			{
				num2 = func_522();
			
				switch (num2)
				{
					case 0:
						func_602(0);
						break;
				
					case 1:
						func_602(1);
						break;
				
					case 2:
						func_602(2);
						break;
				
					case 3:
						func_602(3);
						break;
				
					case 4:
						func_602(4);
						break;
				
					case 5:
						func_602(5);
						break;
				
					case 6:
						func_602(5);
						break;
				
					case 7:
						func_602(7);
						break;
				
					case 8:
						func_602(8);
						break;
				}
			}
			else if (num == 1)
			{
				switch (func_106(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_602(11);
						break;
				}
			}
			else if (num == 8)
			{
				switch (func_106(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_602(11);
						break;
				
					default:
						num2 = func_522();
					
						if (num2 != -1)
						{
							switch (num2)
							{
								case 0:
									func_603(0);
									break;
							
								case 1:
									func_603(1);
									break;
							
								case 2:
									func_603(2);
									break;
							
								case 3:
									func_603(3);
									break;
							
								case 4:
									func_603(4);
									break;
							
								case 5:
									func_603(5);
									break;
							
								case 6:
									func_603(5);
									break;
							
								case 7:
									func_603(7);
									break;
							
								case 8:
									func_603(8);
									break;
							
								default:
									break;
							}
						}
						break;
				}
			}
		}
	
		func_572(true);
	}
	else
	{
		func_597(iParam0, -1);
		func_497(iParam0, 4);
	}

	func_519(iParam0, false);
	return;
}

void func_405(eStackSize essParam0) // Position - 0xF5E3 Hash - 0xB4F11D1C ^0xB4F11D1C
{
	int num;

	if (func_604(essParam0))
		return;

	num = func_573(essParam0);
	func_605(num, 16);
	return;
}

void func_406(var uParam0, BOOL bParam1, int iParam2) // Position - 0xF607 Hash - 0x37D64B11 ^0xE7060A9E
{
	func_606(iParam2);

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
		uParam0->f_13 = func_607(0);

	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
				if (!(*uParam0 & 33554432 != 0))
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_152(uParam0, 33554432);
					else if (!(*uParam0 & 8192 != 0))
						if (func_608(true))
							func_152(uParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_608(true) || *uParam0 & 8192 != 0)
					func_153(uParam0, 33554432);
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
			if (func_609(uParam0))
				uParam0->f_15 = func_395();
		}
		else if (uParam0->f_15 > 0)
		{
			if (func_395() - uParam0->f_15 > 500)
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

	func_610(uParam0);
	return;
}

BOOL func_407(Ped pedParam0, var uParam1) // Position - 0xF7D2 Hash - 0x3A755B4E ^0xDBAC23C2
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
		
			if (!func_611(pedParam0, uParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_293(pedParam0, pedIndexFromEntityIndex) <= func_612(uParam1))
				return true;
			break;
	}

	return false;
}

void func_408(Ped pedParam0, var uParam1, int iParam2) // Position - 0xF8AA Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		uParam1->f_10 = pedParam0;

	if (func_613(iParam2, 1, 1, 1, 0))
		func_152(uParam1, 2048);

	uParam1->f_16 = iParam2;
	func_614(uParam1, true);
	func_615();
	return;
}

BOOL func_409(Ped pedParam0, var uParam1) // Position - 0xF8E7 Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_616(pedParam0, !(*uParam1 & 268435456 != 0), !(*uParam1 & 536870912 != 0), !(*uParam1 & 1073741824 != 0), 0, false))
		{
			if (uParam1->f_12 < 5f)
				num = 95f;
			else if (uParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_617(uParam1);
		
			if (func_618(uParam1, pedParam0, num, num2))
			{
				if (uParam1->f_2 == 0)
					uParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - uParam1->f_2;
				num4 = func_619(uParam1);
			
				if (uParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_614(uParam1, true);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_614(uParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_410(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0xF9CE Hash - 0x899101A2 ^0xBCA80002
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

	if (func_620(eParam1, !(*uParam2 & 268435456 != 0), !(*uParam2 & 536870912 != 0), !(*uParam2 & 1073741824 != 0), 0))
	{
		if (uParam2->f_12 < 5f)
			num = 95f;
		else if (uParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_617(uParam2);
	
		if (func_618(uParam2, pedParam0, num, num2))
		{
			if (uParam2->f_2 == 0)
				uParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2 > func_619(uParam2))
				{
					func_614(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_411(Ped pedParam0, var uParam1) // Position - 0xFAA4 Hash - 0xC62373A5 ^0xD1ADE674
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

	if (func_611(pedParam0, uParam1, pedIndexFromEntityIndex))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3 > func_619(uParam1))
		{
			customDistance = func_617(uParam1);
		
			if (uParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_412(var uParam0, int iParam1) // Position - 0xFBAD Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_395();
	num2 = num - uParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_413(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0xFBE4 Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_621(uParam2);
		
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
			if (func_421(uParam2, pedParam1))
			{
				func_614(uParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_414(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0xFCEB Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (uParam2->f_12 < (float)func_622(uParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_421(uParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_614(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_415(Ped pedParam0, Ped pedParam1, var uParam2, BOOL bParam3) // Position - 0xFD56 Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_623(uParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_22))
				{
					func_614(uParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, uParam2->f_27))
				{
					func_614(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords, false, false);
				
					if (func_624(pedParam1, entityCoords, outCoords))
					{
						func_614(uParam2, true);
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
					func_614(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords2, false, false);
				
					if (func_624(pedParam1, entityCoords, outCoords2))
					{
						func_614(uParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_416(Ped pedParam0, var uParam1) // Position - 0xFE9E Hash - 0xEB9C0B04 ^0x4A60CD30
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
		if (!func_611(pedParam0, uParam1, Global_1935630.f_34[i]) || pedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_625(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_626(Global_1935630.f_34[i]))
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
		
			if (func_627(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_628(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_629(uParam1, pedParam0, num, i))
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

BOOL func_417(var uParam0, var uParam1) // Position - 0x10080 Hash - 0xF223CED2 ^0xA472D0A4
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

BOOL func_418(var uParam0, int iParam1) // Position - 0x100F8 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_395();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_419(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x10127 Hash - 0x8119700D ^0x42D5A76B
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
		if (func_630(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_631(entity2, pedParam0))
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

int func_420(var uParam0, Ped pedParam1) // Position - 0x102AD Hash - 0x42A83B1F ^0x59C2CD5C
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

BOOL func_421(var uParam0, Ped pedParam1) // Position - 0x102FD Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_632(uParam0))
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

BOOL func_422(Ped pedParam0, Ped pedParam1) // Position - 0x1039A Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_173(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_423() // Position - 0x103E7 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_424(var uParam0, Ped pedParam1) // Position - 0x103EF Hash - 0x6BE02E92 ^0x188EF1A2
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
	
		if (func_633(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			uParam0->f_9 = func_395();
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
						if (func_294(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								uParam0->f_9 = func_395();
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

BOOL func_425() // Position - 0x104B0 Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_395() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_426(var uParam0, Ped pedParam1) // Position - 0x104FD Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_612(uParam0);

	if (uParam0->f_12 > func_250(uParam0) && uParam0->f_12 > num)
		return false;

	num3 = func_634(pedParam1);
	num2 = func_635(uParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (uParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, uParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, uParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, uParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_427(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0x10619 Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (uParam2->f_12 > 4f)
		return false;

	flag = *uParam2 & 256 != 0;
	flag2 = *uParam2 & 524288 != 0;
	flag3 = *uParam2 & 128 != 0;
	return func_636(pedParam0, eParam1, flag, flag3, uParam2->f_12, flag2);
}

BOOL func_428(Ped pedParam0, var uParam1) // Position - 0x10661 Hash - 0x23BB3370 ^0x36BD6CCF
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
		if (func_637(pedParam0, uParam1, true))
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
					if (!func_638(uParam1, pedParam0))
						if (func_294(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_429(Ped pedParam0, var uParam1) // Position - 0x108BA Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_639(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_430(var uParam0, int iParam1) // Position - 0x108F3 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_395();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_431(var uParam0, var uParam1) // Position - 0x10922 Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_432(Ped pedParam0, var uParam1) // Position - 0x10936 Hash - 0xA06525EC ^0x3DA5C48E
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (uParam1->f_4 == 0)
		uParam1->f_4 = func_395();
	else if (func_395() - uParam1->f_4 > func_640(uParam1))
		return func_641(pedParam0, uParam1, false, -1082130432);

	return false;
}

BOOL func_433(var uParam0, Ped pedParam1) // Position - 0x10983 Hash - 0x2978E171 ^0x280EB8C7
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

eStackSize func_434(eStackSize essParam0) // Position - 0x109D7 Hash - 0xD45AC883 ^0xD45AC883
{
	if (!func_345(essParam0))
		return -1;

	if (essParam0 >= func_387(true))
		return -1;

	if (essParam0 >= 3 || essParam0 < 0)
		return -1;

	return Global_1359489[essParam0];
}

Ped func_435(eStackSize essParam0) // Position - 0x10A18 Hash - 0xFBADD85B ^0xFBADD85B
{
	if (func_349(essParam0))
		return Global_1360165[essParam0 /*1157*/];

	return 0;
}

BOOL func_436(var uParam0) // Position - 0x10A36 Hash - 0x20CC372D ^0xA545B3F1
{
	if (func_185(&(uParam0->f_7), 1))
		return true;

	return false;
}

float func_437(Entity eParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x10A4F Hash - 0x1A58F423 ^0x2317B76D
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(eParam0))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam0, true, false) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam0, false, false) };

	if (bParam4)
		return BUILTIN::VDIST2(entityCoords, vParam1);

	return func_642(entityCoords, vParam1);
}

int func_438(int iParam0) // Position - 0x10A9F Hash - 0x6EC15CF9 ^0xE613EBE0
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

void func_439(var uParam0, int iParam1) // Position - 0x10B20 Hash - 0xDFED97A2 ^0x7CA9A462
{
	int bitShift;

	bitShift = iParam1;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1, bitShift);
	return;
}

BOOL func_440(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x10B3A Hash - 0x5431B0F9 ^0x1E2109F7
{
	var unk;
	float num;
	float num2;

	func_643(iParam3, &unk, &num, &num2);

	if (func_644(uParam0, unk, num, num.f_1, num2))
		return true;

	return false;
}

BOOL func_441(int iParam0) // Position - 0x10B6A Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_442(int iParam0) // Position - 0x10B7D Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL func_443(Hash hParam0) // Position - 0x10BA7 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_444(int iParam0) // Position - 0x10BB3 Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_47(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_445(int iParam0) // Position - 0x10BD7 Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_47(iParam0))
		return;

	ped = func_645(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

BOOL func_446(Hash hParam0) // Position - 0x10C1B Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

int func_447(int iParam0, BOOL bParam1) // Position - 0x10C27 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_47(iParam0))
		return 0;

	if (!func_123(iParam0, 2))
		return 0;

	if (func_124(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_126(iParam0)))
		return 1;

	if (func_123(iParam0, true) && !bParam1)
	{
		func_646(iParam0, 128);
		return 1;
	}

	func_127(iParam0, 129);
	func_445(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_126(iParam0));
	func_125(iParam0, 0);
	return 1;
}

BOOL func_448(int iParam0) // Position - 0x10CAA Hash - 0x91023C9F ^0x91023C9F
{
	return iParam0 > -1 && iParam0 < 153;
}

BOOL func_449(int iParam0, BOOL bParam1) // Position - 0x10CC0 Hash - 0xC3E950D6 ^0xC3E950D6
{
	if (!func_448(iParam0))
		return false;

	return Global_1914319.f_15614[iParam0] && bParam1 != false;
}

void func_450(int iParam0, BOOL bParam1) // Position - 0x10CE6 Hash - 0x7639AFD6 ^0x7639AFD6
{
	if (!func_448(iParam0))
		return;

	Global_1914319.f_15614[iParam0] = Global_1914319.f_15614[iParam0] || bParam1;
	return;
}

void func_451(int iParam0, BOOL bParam1) // Position - 0x10D14 Hash - 0xECD22DFB ^0xECD22DFB
{
	if (!func_448(iParam0))
		return;

	Global_1914319.f_15614[iParam0] = Global_1914319.f_15614[iParam0] - Global_1914319.f_15614[iParam0] && bParam1;
	return;
}

void func_452(int iParam0) // Position - 0x10D4E Hash - 0xB29062D ^0xB29062D
{
	func_648(func_647(iParam0));
	return;
}

BOOL func_453(int iParam0) // Position - 0x10D60 Hash - 0x895544C2 ^0x895544C2
{
	return iParam0 > -1 && iParam0 < 35;
}

void func_454(Ped pedParam0) // Position - 0x10D76 Hash - 0xE7050FE7 ^0xCBBF0935
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

BOOL func_455(eStackSize essParam0) // Position - 0x10DDE Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_349(essParam0))
		return false;

	if (!func_228(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

PersChar func_456(eStackSize essParam0, BOOL bParam1) // Position - 0x10E12 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_349(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_649(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

void func_457(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x10E51 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_345(essParam0))
			return;

	func_346(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_458(eStackSize essParam0) // Position - 0x10E8B Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_347(essParam0);
	persChar = func_456(essParam0, false);
	func_351(essParam0, ped);

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

void func_459(int iParam0) // Position - 0x10EE5 Hash - 0xEAF6A4B0 ^0xEAF6A4B0
{
	int num;

	if (!func_37(iParam0))
		return;

	if (iParam0 != func_26(0))
		return;

	func_568(iParam0) == 0;
	num = func_27(iParam0);

	if (func_311(iParam0) == 3)
	{
		if (func_568(iParam0) == 0)
		{
		}
		else if (STATS::STATSTRACKER_IS_INITIALIZED(func_568(iParam0)))
		{
			if (func_27(iParam0) != 1 && func_27(iParam0) != 8)
				func_569(func_27(iParam0), func_568(iParam0), 1);
		}
	}

	Global_1898438 = MISC::GET_GAME_TIMER() - 10000;
	func_498(iParam0);
	func_499(true);
	func_502(false);
	func_497(iParam0, 0);

	switch (num)
	{
		case 1:
			func_512(true);
			func_513(15, 0, true);
			break;
	
		case 2:
			func_513(10, 0, true);
			break;
	
		case 4:
			func_513(10, 0, true);
			break;
	
		case 5:
			func_513(10, 0, true);
			break;
	
		case 6:
			func_513(10, 0, true);
			break;
	
		case 8:
			func_513(10, 0, true);
			break;
	
		case 9:
			func_513(10, 0, true);
			break;
	}

	func_572(1);
	return;
}

void func_460(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1101B Hash - 0x9DD22E7 ^0x9DD22E7
{
	int num;

	if (!func_37(iParam0))
	{
		!bParam1;
		return;
	}

	if (!func_260(iParam0) && !func_594(iParam0))
	{
		!bParam1;
		return;
	}

	func_568(iParam0) == 0;

	if (iParam2 == 2 && !func_260(iParam0))
		iParam2 = -1;

	if (func_311(iParam0) == 3 || func_311(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_568(iParam0)))
	{
		func_569(func_27(iParam0), func_568(iParam0), iParam2);
	
		if (!func_37(Global_1572864.f_8) && !func_25(0, true, false) && !func_78(Global_1935630, 32768))
		{
			num = func_520(iParam0);
		
			if (num != -1)
			{
				func_521(false);
			}
			else if (func_27(iParam0) == 8)
			{
				num = func_522();
			
				if (num != -1)
					func_521(false);
			}
		}
	}

	func_497(iParam0, 0);

	if (func_26(0) == iParam0)
	{
		func_499(true);
		func_502(false);
		func_572(true);
	}

	func_519(iParam0, true);
	func_498(iParam0);
	return;
}

BOOL func_461(int iParam0) // Position - 0x11140 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

int func_462(var uParam0) // Position - 0x1117F Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

void func_463(int iParam0) // Position - 0x11189 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_650(iParam0))
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

void func_464(int iParam0) // Position - 0x1123C Hash - 0x7AE52724 ^0x9315F21B
{
	func_651();
	Global_1911774.f_1 = MISC::GET_GAME_TIMER();
	Global_1911774.f_2 = iParam0;
	return;
}

void func_465() // Position - 0x1125A Hash - 0x47CA4FE0 ^0xED93DC86
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return;

	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		return;

	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
	return;
}

BOOL func_466(int iParam0, int iParam1) // Position - 0x11281 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_467(BOOL bParam0) // Position - 0x11290 Hash - 0xAD1429D0 ^0xAD1429D0
{
	if (bParam0)
		Global_1945188.f_865 = Global_1945188.f_865 - Global_1945188.f_865 & 2;
	else
		Global_1945188.f_865 = Global_1945188.f_865 | 2;

	func_652(bParam0);
	return;
}

int func_468(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x112CE Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_476(hParam1, true, false) };
		iParam3 = func_653(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_655(hParam1, hParam2, func_654(iParam3, 1), bParam4, bParam9))
		return 0;

	func_656(true, func_24() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_658(32768) && hParam1 != Global_1946054.f_57[func_654(iParam3, 1) /*11*/])
			{
				func_659();
				func_657(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_654(iParam3, 1) /*11*/])
				func_657(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_657(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_660(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_657(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_661(0);
			func_662(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_657(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_469(Hash hParam0, BOOL bParam1) // Position - 0x1143D Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_476(hParam0, false, false) };
	guid = { func_480(hParam0, unk, unk.f_4, false) };

	if (func_663(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_664(false), &guid, bParam1);
	return;
}

void func_470(Hash hParam0, Ped pedParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x11487 Hash - 0xABE0892F ^0x49EF76F7
{
	int i;
	int num;
	Hash componentHash;
	int num2;
	BOOL isMp;

	isMp = func_24() != -1;
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
		
			func_665(262144);
		}
	}
	else
	{
		bParam6 = false;
	
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_666(pedParam1, 29, isMp, true, 0);
			func_666(pedParam1, 31, isMp, true, 0);
			func_666(pedParam1, 30, isMp, true, 0);
			func_666(pedParam1, 22, isMp, true, 0);
			func_666(pedParam1, 37, isMp, true, 0);
		}
	}

	if (func_658(32768) && func_667(1108822547, 8) && func_668(10, iParam3))
		func_669(pedParam1, false, true);

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num2 = func_670(num, 1);
		
			if (func_667(num2, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else
			{
				componentHash = hParam0->f_1[num /*3*/];
			
				if (!func_668(num, iParam3))
				{
				}
				else if (func_667(num2, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/] || hParam0->f_1[num /*3*/].f_1 == 289238755)
				{
					if (!func_667(num2, 1) || bParam2)
					{
						Global_1946054.f_857 = Global_1946054.f_857 + 1;
					
						if (!bParam6)
							func_666(pedParam1, num, isMp, true, 0);
					
						if (hParam0->f_1[num /*3*/].f_1 == 289238755)
							Global_1946054.f_2456[num /*2*/].f_1 = 289238755;
					
						func_671(num2, 1, 6);
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
								func_666(pedParam1, num, isMp, true, hParam0->f_1[num /*3*/]);
						
							Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
							Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
						
							if (func_667(num2, 1))
								func_672(num2, 1, 6);
						
							Global_1946054.f_857 = Global_1946054.f_857 + 1;
							PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
						
							if (hParam0->f_1[num /*3*/].f_1 != 0)
								PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
						}
					}
				
					Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
					Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
				
					if (func_667(num2, 1))
						func_672(num2, 1, 6);
				
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

BOOL func_471(ePedType eptParam0) // Position - 0x117D0 Hash - 0x5000025C ^0x5000025C
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

void func_472(Ped pedParam0, Hash hParam1) // Position - 0x11C23 Hash - 0xEA1C858E ^0xAE8C204D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_673(pedParam0, hParam1))
		{
			if (func_674(pedParam0, hParam1))
			{
				if (func_675(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_676(pedParam0);
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

void func_473(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x11CCD Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_474(Ped pedParam0, BOOL bParam1) // Position - 0x11CFD Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_475(Ped pedParam0, int iParam1) // Position - 0x11D42 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

struct<5> func_476(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11D69 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_677(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_678(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_683(hParam0, -1823706425))
			{
				unk = { func_480(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_683(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_480(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_681(bParam1) };
		
			switch (func_682(hParam0))
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
				unk = { func_480(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_679(bParam1) };
		
			if (bParam2 && func_680(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_478(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_478(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_479(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_684(unk, &unk28, bParam1, false))
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

Hash func_477(int iParam0, int iParam1) // Position - 0x12026 Hash - 0xE1D12727 ^0x71D656A6
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

BOOL func_478(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x14175 Hash - 0x4285A587 ^0x4285A587
{
	return func_663(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_479(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x1418D Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_685(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_480(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x141AE Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_686(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_664(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_481(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0x141DF Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_687(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_684(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_482(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_664(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_482(BOOL bParam0) // Position - 0x1426F Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_24() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_664(bParam0));
}

BOOL func_483(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1428D Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_688(hParam0))
		return false;

	if (!func_482(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

void func_484(Hash hParam0, int iParam1) // Position - 0x142C8 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_368(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

BOOL func_485(Ped pedParam0, var uParam1) // Position - 0x14310 Hash - 0xDD411AC3 ^0x700A89CB
{
	float num;
	float num2;
	float customDistance;

	num = func_689(uParam1);

	if (uParam1->f_12 > num + 5f)
		return false;

	if (!PED::_IS_PED_VISIBILITY_TRACKED(pedParam0))
		PED::REQUEST_PED_VISIBILITY_TRACKING(pedParam0);

	if (uParam1->f_12 < num || PED::IS_TRACKED_PED_VISIBLE(pedParam0))
	{
		num2 = -1f;
		customDistance = func_690(PED::_0x2BA9D7BF629F920C(pedParam0), num + 5f);
	
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, num2) && PED::CAN_PED_SEE_ENTITY(pedParam0, Global_35, true, false) == 1)
			return true;
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1935630.f_44) || WEAPON::_IS_WEAPON_TORCH(Global_1935630.f_44))
				if (uParam1->f_12 <= 5f)
					if (func_691())
						if (PED::IS_PED_FACING_PED(Global_35, pedParam0, 110f))
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
								return true;
	}

	return false;
}

BOOL func_486(Ped pedParam0, var uParam1) // Position - 0x143FD Hash - 0x9E5CF037 ^0xE8A944CE
{
	BOOL num;
	BOOL flag;

	if (func_369(pedParam0))
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);

	if (PED::GET_PED_CROUCH_MOVEMENT(Global_35) || PED::IS_PED_IN_COVER(Global_35, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_35) || *uParam1 & 2097152 != 0)
		flag = false;
	else
		flag = true;

	if (PED::_0x0EA9EACBA3B01601(Global_35, pedParam0, flag) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_35))
				return false;
		
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_35) || PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f && *uParam1 & 2097152 != 0)
				return false;
		}
	
		PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f;
		num = 1;
	}

	return num;
}

BOOL func_487(Ped pedParam0, Any* panParam1) // Position - 0x1450A Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

Hash func_488(Ped pedParam0, int iParam1) // Position - 0x1451A Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

void func_489(int iParam0) // Position - 0x14531 Hash - 0x8D39E02A ^0x89DA7417
{
	int i;
	var unk;

	switch (iParam0)
	{
		case 0:
			for (i = 0; i < 4; i = i + 1)
			{
				func_692(&(uLocal_398[i /*9*/].f_1), &(uLocal_398[i /*9*/].f_4), 2, i);
				uLocal_398[i /*9*/] = joaat("g_m_m_unibanditos_01");
				unk = { func_247(4, i) };
				uLocal_501[i /*9*/].f_1 = { unk };
			}
			break;
	
		case 1:
			for (i = 0; i < 4; i = i + 1)
			{
				unk = { func_247(3, i) };
				uLocal_435[i /*9*/].f_1 = { unk };
				uLocal_435[i /*9*/].f_4 = unk.f_3;
				uLocal_435[i /*9*/] = joaat("g_m_m_unibanditos_01");
			}
			break;
	}

	return;
}

BOOL func_490(var uParam0) // Position - 0x145E9 Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_693(81053684))
		if (func_694(uParam0))
			return true;
	else if (func_695(-525676072, uParam0))
		if (func_694(uParam0))
			return true;

	return false;
}

BOOL func_491() // Position - 0x1462E Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

void func_492(int iParam0, int iParam1) // Position - 0x1464A Hash - 0x6845F46B ^0x1C6B4958
{
	int value;
	int value2;
	int num;
	int value3;
	int num2;
	int num3;
	float num4;
	float num5;
	float num6;
	char* str;
	int num7;

	if (func_24() != -1)
		return;

	value = func_696();

	if (iParam0 <= 0)
		return;
	else if (iParam0 > 0 && value + iParam0 > 3000)
		value2 = 3000 - value;
	else
		value2 = iParam0;

	if (value2 < 0)
	{
		num = MISC::ABSI(value2);
		str = "FAME_EVENT_DEC";
	}
	else
	{
		num = value2;
		str = "FAME_EVENT_INC";
	}

	value3 = value + value2;
	num4 = BUILTIN::TO_FLOAT(value);
	num5 = BUILTIN::TO_FLOAT(Global_1347398);
	num6 = BUILTIN::TO_FLOAT(value3);
	num2 = func_511(BUILTIN::CEIL((num4 / num5) * 100f), 0, 100);
	num3 = func_511(BUILTIN::CEIL((num6 / num5) * 100f), 0, 100);

	if (num3 - num2 == 0)
		return;

	iParam1 & 0;

	if (value3 < 1000)
	{
		if (!func_697())
		{
			func_698(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (value3 >= 1000 && value3 < 2000)
	{
		if (!func_699())
		{
			func_698(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (value3 >= 2000 && value3 < 3000)
	{
		if (!func_700())
		{
			func_698(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_701())
	{
		func_698(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}

	func_216(func_394(joaat("FAME")), value2);
	num7 = func_696();
	AUDIO::_0x078F77FD1A43EAB3(value, num7);
	return;
}

int func_493(BOOL bParam0) // Position - 0x147E4 Hash - 0xB9596906 ^0xEA13D3DB
{
	int num;
	BOOL flag;

	flag = bParam0;

	if (flag < false)
	{
		num = 1;
		func_702(&flag, -2147483648);
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

int func_494() // Position - 0x14824 Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

BOOL func_495(Ped pedParam0) // Position - 0x14834 Hash - 0xCA96D27A ^0x3802A466
{
	int i;
	Ped ped;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_24() != -1)
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = Global_1360165[i /*1157*/];
	
		if (!ENTITY::IS_ENTITY_DEAD(ped) && pedParam0 == ped)
			return true;
	}

	return false;
}

void func_496(int iParam0, Hash hParam1) // Position - 0x1488D Hash - 0xB1BDF10D ^0x18C44304
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_6 = hParam1;
	return;
}

void func_497(int iParam0, int iParam1) // Position - 0x148AD Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_37(iParam0))
		return;

	func_703(iParam0, iParam1);
	return;
}

int func_498(int iParam0) // Position - 0x148CA Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_705(func_704(iParam0));
}

void func_499(BOOL bParam0) // Position - 0x148DC Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_361(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_214(&Global_1935630, 4194304);
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

int func_500(BOOL bParam0, int iParam1) // Position - 0x1497F Hash - 0xCCC8BB79 ^0xE27B8F6E
{
	int num;

	if (!bParam0 && func_236(373691918))
		return 0;

	num = 0;

	if (LAW::_GET_BOUNTY_HUNTER_GLOBAL_COOLDOWN(joaat("bountyhuntersglobalcooldown")) < 2)
		num = LAW::_GET_BOUNTY_HUNTER_GLOBAL_COOLDOWN(joaat("bountyhuntersglobalcooldown")) + iParam1;

	if (num < 0)
		num = 0;

	LAW::_SET_BOUNTY_HUNTER_GLOBAL_COOLDOWN(joaat("bountyhuntersglobalcooldown"), num);
	func_502(bParam0);
	return 1;
}

void func_501() // Position - 0x149D9 Hash - 0x52CA4AAA ^0x69CCE138
{
	Ped args;
	eStackSize i;
	Ped ped;

	args = Global_35;
	args.f_12 = 8;
	args.f_8 = 0;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_349(i))
		{
			ped = func_347(i);
		
			if (ENTITY::DOES_ENTITY_EXIST(ped))
			{
				args.f_14 = ped;
				args.f_3 = ped;
				MISC::_CREATE_AI_MEMORY(&args, 17);
			}
		}
	}

	Global_1359489.f_58 = -15;
	func_706(&(Global_1359489.f_55));

	if (func_707(joaat("CSTAG_PLAYER_AWAY"), true))
		func_708(joaat("CSTAG_PLAYER_AWAY"), true, false);

	return;
}

int func_502(BOOL bParam0) // Position - 0x14A5E Hash - 0x595E3BEF ^0x853F0831
{
	if (!bParam0 && func_236(373691918))
		return 0;

	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), bParam0, 0);
	return 1;
}

void func_503(int iParam0) // Position - 0x14A8B Hash - 0x916D696A ^0xD5AA6E8B
{
	if (!func_37(iParam0))
		return;

	func_575(iParam0, func_574(iParam0) + BUILTIN::SHIFT_LEFT(1, 16));
	return;
}

BOOL func_504() // Position - 0x14AB4 Hash - 0xEDA66953 ^0xEDA66953
{
	return func_709() > 0;
}

void func_505(int iParam0, int iParam1, BOOL bParam2) // Position - 0x14AC2 Hash - 0x12A7FD4 ^0xC4A123F5
{
	switch (iParam0)
	{
		case 0:
			func_710(joaat("journal_entry_chap1_winter1_1"), iParam1);
			func_710(joaat("journal_entry_chap1_winter1_3"), iParam1);
			func_710(joaat("journal_entry_chap1_winter1_5"), iParam1);
			func_710(joaat("journal_entry_chap1_winter1_6"), iParam1);
			break;
	
		case 1:
			func_711(1);
			break;
	
		case 2:
			func_710(joaat("journal_entry_chap1_odriscoll1_1"), iParam1);
			func_710(joaat("journal_entry_chap1_odriscoll1_2"), iParam1);
			func_710(joaat("journal_entry_chap1_odriscoll1_4"), iParam1);
			break;
	
		case 3:
			if (func_32())
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_gt_winter_4")))
					func_710(joaat("journal_gt_winter_4_se"), iParam1);
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_gt_winter_4_se")))
				func_710(joaat("journal_gt_winter_4"), iParam1);
			break;
	
		case 4:
			func_710(joaat("journal_chap2_horseshoe"), iParam1);
			func_710(joaat("journal_entry_chap2_mudtown1_2"), iParam1);
			func_710(joaat("journal_entry_chap2_mudtown1_3"), iParam1);
			func_710(joaat("journal_entry_chap2_mudtown1_5"), iParam1);
			func_711(0);
			break;
	
		case 6:
			func_710(joaat("journal_entry_chap2_mudtown3_2"), iParam1);
		
			if (Global_1357515 == -1)
				func_710(joaat("journal_entry_chap2_mudtown3_2_a"), iParam1);
			else if (Global_1357515 == 0)
				func_710(joaat("journal_entry_chap2_mudtown3_2_b"), iParam1);
			else if (Global_1357515 == 1)
				func_710(joaat("journal_entry_chap2_mudtown3_2_c"), iParam1);
			break;
	
		case 8:
			func_710(joaat("journal_entry_chap2_mary1_1"), iParam1);
			func_710(joaat("journal_entry_chap2_mary1_3"), iParam1);
			break;
	
		case 9:
			if (Global_1357515 == -1)
				func_710(joaat("journal_entry_chap2_saloon1_1"), iParam1);
			else
				func_710(joaat("journal_entry_chap2_saloon1_1b"), iParam1);
		
			func_710(joaat("journal_entry_chap2_saloon1_2"), iParam1);
			break;
	
		case 12:
			func_710(joaat("journal_gt_utopia_2"), iParam1);
			break;
	
		case 13:
			func_710(joaat("journal_entry_chap2_sean1_1"), iParam1);
			func_710(joaat("journal_entry_chap2_sean1_2"), iParam1);
			func_710(joaat("journal_entry_chap2_sean1_3"), iParam1);
			break;
	
		case 15:
			func_710(joaat("journal_entry_chap2_hunting1_1"), iParam1);
			func_710(joaat("journal_entry_chap2_hunting1_1b"), iParam1);
			break;
	
		case 16:
			func_710(joaat("journal_entry_chap3_feud1_1"), iParam1);
			func_710(joaat("journal_entry_chap3_feud1_2_txt"), iParam1);
			func_710(joaat("journal_entry_chap3_feud1_3_txt"), iParam1);
			func_710(joaat("journal_entry_chap3_feud1_4"), iParam1);
			break;
	
		case 17:
			func_710(joaat("journal_entry_chap3_grays1_1"), iParam1);
			func_710(joaat("journal_entry_chap3_grays1_3"), iParam1);
			break;
	
		case 18:
			func_710(joaat("journal_entry_chap3_braithwaite1_1"), iParam1);
			func_710(joaat("journal_entry_chap3_braithwaite1_2"), iParam1);
			func_710(joaat("journal_entry_chap3_braithwaite1_4"), iParam1);
			func_710(joaat("journal_gt_braithwaites_1"), iParam1);
			break;
	
		case 19:
			func_710(joaat("journal_entry_chap3_grays2_1"), iParam1);
			func_710(joaat("journal_entry_chap3_grays2_2"), iParam1);
			func_710(joaat("journal_gt_grays_2"), iParam1);
			break;
	
		case 20:
			func_710(joaat("journal_gt_braithwaites_2"), iParam1);
			break;
	
		case 21:
			func_710(joaat("journal_entry_chap3_grays3_1"), iParam1);
			func_710(joaat("journal_entry_chap3_grays3_2"), iParam1);
			func_711(0);
			break;
	
		case 22:
			func_710(joaat("journal_entry_chap3_trelawny1_1"), iParam1);
			func_710(joaat("journal_entry_chap3_trelawny1_2"), iParam1);
			break;
	
		case 23:
			func_710(joaat("journal_entry_chap3_odriscoll3_1"), iParam1);
			func_710(joaat("journal_entry_chap3_odriscoll3_2"), iParam1);
			func_710(joaat("journal_entry_chap3_odriscoll3_3"), iParam1);
			func_711(1);
			break;
	
		case 24:
			if (Global_1357515 == -1)
				func_710(joaat("journal_gt_mudtwon_5_5000"), iParam1);
			else if (Global_1357515 == 0)
				func_710(joaat("journal_gt_mudtwon_5_7500"), iParam1);
			else if (Global_1357515 == 1)
				func_710(joaat("journal_gt_mudtwon_5_10000"), iParam1);
			break;
	
		case 25:
			func_710(joaat("journal_gt_mudtown_3b"), iParam1);
			break;
	
		case 27:
			func_710(joaat("journal_entry_chap4_mob1_1"), iParam1);
			func_710(joaat("journal_entry_chap4_mob1_2"), iParam1);
			func_710(joaat("journal_entry_chap4_mob1_3"), iParam1);
			func_710(joaat("journal_entry_chap4_mob1_4"), iParam1);
			break;
	
		case 28:
			func_710(joaat("journal_entry_chap4_mob2_1"), iParam1);
			func_710(joaat("journal_entry_chap4_mob2_2"), iParam1);
			func_710(joaat("journal_entry_chap4_mob2_3"), iParam1);
			func_710(joaat("journal_entry_chap4_mob2_4"), iParam1);
			func_710(joaat("journal_gt_mob_2"), iParam1);
			break;
	
		case 29:
			func_710(joaat("journal_entry_chap4_mob3_1"), iParam1);
			func_710(joaat("journal_entry_chap4_mob3_2"), iParam1);
			func_710(joaat("journal_gt_mob_3"), iParam1);
			break;
	
		case 31:
			func_710(joaat("journal_entry_chap4_mob5_1"), iParam1);
			func_710(joaat("journal_entry_chap4_mob5_2"), iParam1);
			func_710(joaat("journal_entry_chap4_mob5_3"), iParam1);
			func_710(joaat("journal_entry_chap4_mob5_4"), iParam1);
			break;
	
		case 32:
			func_710(joaat("journal_entry_chap4_odriscoll4_1"), iParam1);
			break;
	
		case 33:
			func_710(joaat("journal_entry_chap4_industry1_1"), iParam1);
			func_710(joaat("journal_entry_chap4_industry1_2"), iParam1);
			func_710(joaat("journal_entry_chap4_industry1_4"), iParam1);
			break;
	
		case 34:
			func_710(joaat("journal_gt_industry_3"), iParam1);
			break;
	
		case 36:
			func_710(joaat("journal_entry_chap4_mary3_1"), iParam1);
			func_710(joaat("journal_entry_chap4_mary3_2"), iParam1);
		
			if (Global_1357515 == 0)
				func_710(joaat("journal_entry_chap4_mary3_2a"), iParam1);
			else if (Global_1357515 == 1)
				func_710(joaat("journal_entry_chap4_mary3_2b"), iParam1);
			break;
	
		case 37:
			func_710(joaat("journal_gt_saint_denis_1"), iParam1);
			break;
	
		case 44:
			func_710(joaat("journal_entry_chap6_gang1_1"), iParam1);
			func_710(joaat("journal_entry_chap6_gang1_2"), iParam1);
			func_710(joaat("journal_entry_chap6_gang1_3"), iParam1);
			func_710(joaat("journal_entry_chap6_gang1_4"), iParam1);
			func_710(joaat("journal_entry_chap6_gang1_4b"), iParam1);
			break;
	
		case 46:
			func_710(joaat("journal_entry_chap6_gang3_1"), iParam1);
			func_710(joaat("journal_entry_chap6_gang3_2"), iParam1);
			func_710(joaat("journal_entry_chap6_gang3_4"), iParam1);
			break;
	
		case 47:
			func_710(joaat("journal_entry_chap6_mary4_1"), iParam1);
			break;
	
		case 48:
			func_710(joaat("journal_entry_chap6_native1_1"), iParam1);
		
			if (Global_1357515 == -1)
				func_710(joaat("journal_entry_chap6_native1_2"), iParam1);
			else
				func_710(joaat("journal_entry_chap6_native1_2a"), iParam1);
		
			if (func_714(51))
				func_710(joaat("journal_entry_chap6_native1_2b"), iParam1);
			break;
	
		case 49:
			func_710(joaat("journal_entry_chap6_native2_1"), iParam1);
		
			if (Global_1357515 == 0)
				func_710(joaat("journal_entry_chap6_native2_2a"), iParam1);
			else if (Global_1357515 == 1)
				func_710(joaat("journal_entry_chap6_native2_2b"), iParam1);
			else if (Global_1357515 == 2)
				func_710(joaat("journal_entry_chap6_native2_2c"), iParam1);
			break;
	
		case 50:
			func_710(joaat("journal_entry_chap6_nativeson1_1"), iParam1);
			break;
	
		case 52:
			func_710(joaat("journal_entry_chap6_nativeson3_1"), iParam1);
			func_710(joaat("journal_entry_chap6_nativeson3_2"), iParam1);
			func_710(joaat("journal_entry_chap6_nativeson3_2b"), iParam1);
		
			if (bParam2 == true)
			{
				func_710(joaat("journal_entry_chap6_nativeson3_3a"), iParam1);
				func_710(joaat("journal_entry_chap6_nativeson3_3a2"), iParam1);
			}
			else
			{
				func_710(joaat("journal_entry_chap6_nativeson3_3b"), iParam1);
			}
			break;
	
		case 53:
			func_710(joaat("journal_gt_cornwall_1"), iParam1);
			break;
	
		case 54:
			func_710(joaat("journal_entry_chap6_trainrobbery1_1"), iParam1);
			break;
	
		case 56:
			func_710(joaat("journal_entry_chap6_trainrobbery3_1"), iParam1);
			func_710(joaat("journal_entry_chap6_trainrobbery3_3"), iParam1);
			break;
	
		case 57:
			func_710(joaat("journal_gt_train_robbery_4"), iParam1);
			break;
	
		case 58:
			func_710(joaat("journal_gt_native_3"), iParam1);
			break;
	
		case 59:
			func_710(joaat("journal_entry_endless_summer_1"), iParam1);
			func_710(joaat("journal_entry_endless_summer_2"), iParam1);
		
			if (func_712(146))
				func_710(joaat("journal_rc_treasure2_jn"), iParam1);
		
			func_711(1);
			break;
	
		case 60:
			func_710(joaat("journal_chap8_pronghorn"), iParam1);
			func_710(joaat("journal_entry_chap8_marston1_2"), iParam1);
			break;
	
		case 64:
			func_710(joaat("journal_entry_chap8_laramie1_1"), iParam1);
			break;
	
		case 67:
			func_710(joaat("journal_entry_chap8_abigail2x1_1"), iParam1);
			break;
	
		case 69:
			func_710(joaat("journal_entry_chap9_sadie2_1"), iParam1);
		
			if (func_100(Global_1347702[9 /*49*/].f_15, true))
				func_710(joaat("journal_entry_beechers_debt_2b"), iParam1);
			break;
	
		case 70:
			func_710(joaat("journal_entry_chap9_sadie3"), iParam1);
		
			if (func_713() == 0)
				func_710(joaat("journal_entry_beechers_debt_7a"), iParam1);
			else
				func_710(joaat("journal_entry_beechers_debt_8b"), iParam1);
			break;
	
		case 71:
			if (func_713() == 0)
				func_710(joaat("journal_entry_beechers_debt_8a"), iParam1);
			else
				func_710(joaat("journal_entry_beechers_debt_9b"), iParam1);
			break;
	
		case 73:
			func_710(joaat("journal_entry_chap9_marston6_1"), iParam1);
			break;
	
		case 74:
			func_710(joaat("journal_entry_chap9_marston7_1"), iParam1);
		
			if (func_713() == 0)
				func_710(joaat("journal_entry_beechers_debt_4a"), iParam1);
			else
				func_710(joaat("journal_entry_beechers_debt_5b"), iParam1);
			break;
	
		case 76:
			func_710(joaat("journal_entry_chap9_finale2_1"), iParam1);
		
			if (func_713() == 0)
				func_710(joaat("journal_entry_beechers_debt_9a"), iParam1);
			else
				func_710(joaat("journal_entry_beechers_debt_10b"), iParam1);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_506() // Position - 0x15356 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_24() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

void func_507(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1537C Hash - 0x4B9B45C3 ^0x484222B8
{
	switch (iParam0)
	{
		case 0:
			func_710(joaat("journal_entry_chap2_abigail1_1"), iParam1);
			func_710(joaat("journal_entry_chap2_abigail1_3"), iParam1);
			func_710(joaat("journal_entry_chap2_abigail1_4"), iParam1);
			break;
	
		case 1:
			func_710(joaat("journal_entry_chap9_abigail2x2_1"), iParam1);
			break;
	
		case 2:
			func_710(joaat("journal_entry_chap9_abigail3_1"), iParam1);
			break;
	
		case 9:
			func_710(joaat("journal_chap9_beechershope"), iParam1);
			func_710(joaat("journal_entry_chap9_beechers1x3_1"), iParam1);
		
			if (func_100(Global_1835011[69 /*74*/].f_1, true))
				func_710(joaat("journal_entry_beechers_debt_1a"), iParam1);
			else
				func_710(joaat("journal_entry_beechers_debt_1b"), iParam1);
			break;
	
		case 22:
			func_710(joaat("journal_entry_chap4_calderon1x1_1"), iParam1);
			break;
	
		case 26:
			if (bParam3 == true)
			{
				func_710(joaat("journal_rc_calloway_1_ar"), iParam1);
				func_710(joaat("journal_rc_calloway_2_ar"), iParam1);
			}
			else
			{
				func_710(joaat("journal_rc_calloway_1_jn"), iParam1);
				func_710(joaat("journal_rc_calloway_2_jn"), iParam1);
			}
			break;
	
		case 29:
			if (bParam3 == true)
			{
				func_710(joaat("journal_rc_calloway_3_1_ar"), iParam1);
				func_710(joaat("journal_rc_calloway_3_2_ar"), iParam1);
			}
			else if (func_712(26))
			{
				func_710(joaat("journal_rc_calloway_3_jn_b1"), iParam1);
				func_710(joaat("journal_rc_calloway_3_jn_b2"), iParam1);
			}
			else
			{
				func_710(joaat("journal_rc_calloway_3_jn_a"), iParam1);
			}
			break;
	
		case 32:
			if (bParam3 == true)
			{
				if (Global_1357515 == -1)
					func_710(joaat("journal_chap3_rcchaingang_2f_ar"), iParam1);
				else if (Global_1357515 == 0)
					func_710(joaat("journal_chap3_rcchaingang_2a_ar"), iParam1);
				else if (Global_1357515 == 1)
					func_710(joaat("journal_chap3_rcchaingang_2b_ar"), iParam1);
				else if (Global_1357515 == 2)
					func_710(joaat("journal_chap3_rcchaingang_2c_ar"), iParam1);
				else if (Global_1357515 == 3)
					func_710(joaat("journal_chap3_rcchaingang_2d_ar"), iParam1);
				else if (Global_1357515 == 4)
					func_710(joaat("journal_chap3_rcchaingang_2e_ar"), iParam1);
			}
			else
			{
				func_710(joaat("journal_chap3_rcchaingang_2_jn"), iParam1);
			
				if (Global_1357515 == -1)
					func_710(joaat("journal_chap3_rcchaingang_2e_jn"), iParam1);
				else if (Global_1357515 == 0)
					func_710(joaat("journal_chap3_rcchaingang_2a_jn"), iParam1);
				else if (Global_1357515 == 1)
					func_710(joaat("journal_chap3_rcchaingang_2b_jn"), iParam1);
				else if (Global_1357515 == 2)
					func_710(joaat("journal_chap3_rcchaingang_2c_jn"), iParam1);
				else if (Global_1357515 == 3)
					func_710(joaat("journal_chap3_rcchaingang_2d_jn"), iParam1);
				else if (Global_1357515 == 4)
					func_710(joaat("journal_chap3_rcchaingang_2f_jn"), iParam1);
			}
			break;
	
		case 35:
			if (bParam3 == true)
				func_710(joaat("journal_chap3_rcchaingang_3_ar"), iParam1);
			else
				func_710(joaat("journal_chap3_rcchaingang_3_jn"), iParam1);
			break;
	
		case 36:
			if (bParam3 == true)
				func_710(joaat("journal_chap3_rcchaingang_4_ar"), iParam1);
			else
				func_710(joaat("journal_chap3_rcchaingang_4_jn"), iParam1);
			break;
	
		case 37:
			func_710(joaat("journal_gt_coach_rob_rsc"), iParam1);
			break;
	
		case 38:
			if (bParam3 == true)
				func_710(joaat("journal_rc_cig1_1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_cig1_1_jn"), iParam1);
			break;
	
		case 39:
			if (bParam3 == true)
				func_710(joaat("journal_rc_dino1_1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_dino1_1_jn"), iParam1);
			break;
	
		case 40:
			if (bParam3 == true)
				func_710(joaat("journal_rc_dino2_1_ar"), iParam1);
			else if (func_712(39))
				func_710(joaat("journal_rc_dino2_1_b_jn"), iParam1);
			else
				func_710(joaat("journal_rc_dino2_1_a_jn"), iParam1);
			break;
	
		case 41:
			if (bParam3 == true)
				func_710(joaat("journal_rc_fish1_1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_fish1_1_jn"), iParam1);
			break;
	
		case 42:
			if (func_712(41))
				func_710(joaat("journal_rc_fish2_1_jn_b"), iParam1);
			else
				func_710(joaat("journal_rc_fish2_1_jn_a"), iParam1);
			break;
	
		case 43:
			if (bParam3 == true)
				if (func_564(Global_1835011[33 /*74*/].f_1) == 1)
					func_710(joaat("journal_rc_exotic1_1b_ar_a"), iParam1);
				else
					func_710(joaat("journal_rc_exotic1_1a_ar_a"), iParam1);
			else
				func_710(joaat("journal_rc_exotic1_1_jn"), iParam1);
			break;
	
		case 45:
			if (bParam3 == true)
				func_710(joaat("journal_rc_exotic3_1_ar_a"), iParam1);
			else if (func_712(43))
				func_710(joaat("journal_rc_exotic3_1_jn_b"), iParam1);
			else
				func_710(joaat("journal_rc_exotic3_1_jn_a"), iParam1);
			break;
	
		case 49:
			if (bParam3 == true)
				func_710(joaat("journal_rc_rockcarv1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_rockcarv1_jn"), iParam1);
			break;
	
		case 50:
			if (bParam3 == true)
			{
				func_710(joaat("journal_rc_rockcarv2_ar"), iParam1);
			}
			else if (func_712(49))
			{
				func_710(joaat("journal_rc_rockcarv2_jn_b"), iParam1);
				func_710(joaat("journal_rc_rockcarv2_jn_b2"), iParam1);
			}
			else
			{
				func_710(joaat("journal_rc_rockcarv2_jn_a"), iParam1);
			}
			break;
	
		case 51:
			func_710(joaat("journal_rc_tax1_1_jn"), iParam1);
			break;
	
		case 53:
			if (bParam3 == true)
			{
				func_710(joaat("journal_rc_crkpt1_1_ar"), iParam1);
				func_710(joaat("journal_rc_crkpt1_2_ar"), iParam1);
			}
			else
			{
				func_710(joaat("journal_rc_crkpt1_1_jn"), iParam1);
				func_710(joaat("journal_rc_crkpt1_1_jn_b"), iParam1);
			}
			break;
	
		case 54:
			if (bParam3 == true)
				func_710(joaat("journal_rc_crkpt2_1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_crkpt2_1_jn"), iParam1);
			break;
	
		case 55:
			if (bParam3 == true)
				func_710(joaat("journal_rc_crkpt3_1_ar"), iParam1);
			else if (func_712(54))
				func_710(joaat("journal_rc_crkpt3_1b_jn"), iParam1);
			else
				func_710(joaat("journal_rc_crkpt3_1a_jn"), iParam1);
			break;
	
		case 58:
			if (func_100(Global_1347702[23 /*49*/].f_15, true))
				func_710(joaat("journal_entry_chap6_doctors_1"), iParam1);
			else
				func_710(joaat("journal_entry_chap6_doctors_1b"), iParam1);
		
			func_710(joaat("journal_entry_chap6_doctors_2"), iParam1);
			func_710(joaat("journal_entry_chap6_doctors_3"), iParam1);
			break;
	
		case 59:
			func_710(joaat("journal_chap2_downes1_1"), iParam1);
			break;
	
		case 62:
			func_710(joaat("journal_entry_chap2_downes2_1"), iParam1);
			break;
	
		case 63:
			func_710(joaat("journal_entry_chap2_odriscoll2_2b"), iParam1);
			func_710(joaat("journal_gt_odriscoll_2"), iParam1);
			break;
	
		case 65:
			func_710(joaat("journal_entry_chap6_odriscoll6_1"), iParam1);
			func_710(joaat("journal_entry_chap6_odriscoll6_2"), iParam1);
			func_710(joaat("journal_entry_chap6_odriscoll6_3"), iParam1);
			func_710(joaat("journal_entry_chap6_odriscoll6_4"), iParam1);
			break;
	
		case 66:
			func_710(joaat("journal_chap3_clemens"), iParam1);
			func_710(joaat("journal_entry_chap2_dutch1_1"), iParam1);
			func_710(joaat("journal_entry_chap2_dutch1_2"), iParam1);
			func_710(joaat("journal_entry_chap2_dutch1_3"), iParam1);
			func_711(1);
			break;
	
		case 67:
			func_710(joaat("journal_chap4_shadybelle"), iParam1);
			func_710(joaat("journal_entry_chap3_dutch2_1"), iParam1);
			func_710(joaat("journal_entry_chap3_dutch2_2"), iParam1);
			break;
	
		case 68:
			func_710(joaat("journal_chap6_beaverhollow"), iParam1);
			func_710(joaat("journal_entry_chap6_dutch3_2"), iParam1);
			func_710(joaat("journal_entry_chap6_dutch3_2b"), iParam1);
			func_710(joaat("journal_entry_chap6_dutch3_3"), iParam1);
			func_711(0);
			break;
	
		case 70:
			func_710(joaat("journal_entry_chap6_edithdowne2_1"), iParam1);
			break;
	
		case 71:
			func_710(joaat("journal_rc_miller1_jn"), iParam1);
			break;
	
		case 73:
			func_710(joaat("journal_rc_miller3_jn"), iParam1);
			break;
	
		case 75:
			func_710(joaat("journal_rc_miller4_jn"), iParam1);
			break;
	
		case 77:
			if (bParam3 == true)
				func_710(joaat("journal_rc_fma1_1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_fma1_1_jn"), iParam1);
			break;
	
		case 79:
			if (bParam3 == true)
			{
				func_710(joaat("journal_rc_fma3_1_ar"), iParam1);
				func_710(joaat("journal_rc_fma3_2_ar"), iParam1);
			}
			else if (func_712(78))
			{
				func_710(joaat("journal_rc_fma3_2_jn"), iParam1);
			}
			else
			{
				func_710(joaat("journal_rc_fma3_1_jn"), iParam1);
			}
			break;
	
		case 80:
			if (bParam3 == true)
				func_710(joaat("journal_rc_fma4_1_ar"), iParam1);
			else if (func_712(79))
				func_710(joaat("journal_rc_fma4_2_jn"), iParam1);
			else
				func_710(joaat("journal_rc_fma4_1_jn"), iParam1);
			break;
	
		case 85:
			if (bParam3 == true)
				func_710(joaat("journal_rc_gunslinger1_1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_gunslinger1_1_jn"), iParam1);
			break;
	
		case 86:
			if (bParam3 == true)
				func_710(joaat("journal_rc_gunslinger2_1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_gunslinger2_1_jn"), iParam1);
			break;
	
		case 87:
			if (bParam3 == true)
				func_710(joaat("journal_rc_gunslinger3_1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_gunslinger3_1_jn"), iParam1);
			break;
	
		case 88:
			if (bParam3 == true)
				func_710(joaat("journal_rc_gunslinger5_1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_gunslinger5_1_jn"), iParam1);
			break;
	
		case 89:
			if (bParam3 == true)
				func_710(joaat("journal_rc_hkk1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_hkk1_jn"), iParam1);
			break;
	
		case 92:
			if (bParam3 == true)
			{
				func_710(joaat("journal_rc_hkk4_ar"), iParam1);
				func_710(joaat("journal_rc_hkk4b_ar"), iParam1);
			}
			else
			{
				func_710(joaat("journal_rc_hkk4_a_jn"), iParam1);
				func_710(joaat("journal_rc_hkk4_a2_jn"), iParam1);
			}
			break;
	
		case 93:
			if (bParam3 == true)
				func_710(joaat("journal_rc_hkk5_ar"), iParam1);
			else
				func_710(joaat("journal_rc_hkk5_jn"), iParam1);
			break;
	
		case 94:
			func_710(joaat("journal_entry_chap2_homerobbery0_1"), iParam1);
		
			if (Global_1357515 == -1)
				func_710(joaat("journal_entry_chap2_homerobbery0_2a"), iParam1);
			else
				func_710(joaat("journal_entry_chap2_homerobbery0_2b"), iParam1);
		
			func_710(joaat("journal_gt_home_rob"), iParam1);
			break;
	
		case 99:
			func_710(joaat("journal_entry_chap4_mary3x1_1"), iParam1);
			break;
	
		case 101:
			if (bParam3 == true)
			{
				func_710(joaat("journal_rc_mason1_1_ar"), iParam1);
			
				if (Global_1357515 == -1)
					func_710(joaat("journal_rc_mason1_2_ar_b"), iParam1);
				else
					func_710(joaat("journal_rc_mason1_2_ar_a"), iParam1);
			}
			else if (Global_1357515 == -1)
			{
				func_710(joaat("journal_rc_mason1_1b_jn"), iParam1);
			}
			else
			{
				func_710(joaat("journal_rc_mason1_1a_jn"), iParam1);
			}
			break;
	
		case 102:
			if (bParam3 == true)
				func_710(joaat("journal_rc_mason2_1_ar"), iParam1);
			else if (func_712(101))
				func_710(joaat("journal_rc_mason2_1b_jn"), iParam1);
			else
				func_710(joaat("journal_rc_mason2_1a_jn"), iParam1);
			break;
	
		case 103:
			func_710(joaat("journal_rc_mason3_1_ar"), iParam1);
			break;
	
		case 104:
			if (bParam3 == true)
			{
				func_710(joaat("journal_rc_mason4_1_ar"), iParam1);
				func_710(joaat("journal_rc_mason4_2_ar"), iParam1);
			}
			else if (func_712(103))
			{
				func_710(joaat("journal_rc_mason4_1b_jn"), iParam1);
			}
			else
			{
				func_710(joaat("journal_rc_mason4_1a_jn"), iParam1);
			}
			break;
	
		case 105:
			if (bParam3 == true)
				func_710(joaat("journal_rc_mason5_1_ar"), iParam1);
			else if (func_712(104))
				func_710(joaat("journal_rc_mason5_1b_jn"), iParam1);
			else
				func_710(joaat("journal_rc_mason5_1a_jn"), iParam1);
			break;
	
		case 108:
			func_710(joaat("journal_entry_chap6_monroe_1"), iParam1);
			break;
	
		case 109:
			if (bParam3 == true)
			{
				func_710(joaat("journal_rc_mayor1_ar"), iParam1);
				func_710(joaat("journal_rc_mayor1_ar_b"), iParam1);
			}
			else
			{
				func_710(joaat("journal_rc_mayor1_jn"), iParam1);
				func_710(joaat("journal_rc_mayor1b_jn"), iParam1);
			}
			break;
	
		case 110:
			if (bParam3 == true)
				func_710(joaat("journal_rc_mayor2_ar"), iParam1);
			else if (func_712(109))
				func_710(joaat("journal_rc_mayor2b_jn"), iParam1);
			else
				func_710(joaat("journal_rc_mayor2a_jn"), iParam1);
			break;
	
		case 111:
			if (bParam3 == true)
			{
				if (Global_1357515 == 0)
					func_710(joaat("journal_rc_mayor3a_ar"), iParam1);
				else
					func_710(joaat("journal_rc_mayor3b_ar"), iParam1);
			}
			else if (func_712(110))
			{
				if (Global_1357515 == 0)
				{
					func_710(joaat("journal_rc_mayor3c_jn"), iParam1);
				}
				else
				{
					func_710(joaat("journal_rc_mayor3d_jn"), iParam1);
					func_710(joaat("journal_rc_mayor3d_2_jn"), iParam1);
				}
			}
			else if (Global_1357515 == 0)
			{
				func_710(joaat("journal_rc_mayor3a_jn"), iParam1);
			}
			else
			{
				func_710(joaat("journal_rc_mayor3b_jn"), iParam1);
				func_710(joaat("journal_rc_mayor3b_2_jn"), iParam1);
			}
			break;
	
		case 115:
			func_710(joaat("journal_entry_chap4_nativersc1_1"), iParam1);
			func_710(joaat("journal_entry_chap4_nativersc1_2"), iParam1);
			break;
	
		case 117:
			if (bParam3 == true)
			{
				func_710(joaat("journal_rc_ohbro1_1_ar"), iParam1);
				func_710(joaat("journal_rc_ohbro1_2_ar"), iParam1);
			}
			else
			{
				func_710(joaat("journal_rc_ohbro1_1_jn"), iParam1);
			}
			break;
	
		case 118:
			if (bParam3 == true)
				func_710(joaat("journal_rc_ohbro2_1_ar"), iParam1);
			else if (func_712(117))
				func_710(joaat("journal_rc_ohbro2_1b_jn"), iParam1);
			else
				func_710(joaat("journal_rc_ohbro2_1a_jn"), iParam1);
			break;
	
		case 119:
			if (bParam3 == true)
				func_710(joaat("journal_rc_ohbro3_1_ar"), iParam1);
			else if (func_712(118))
				func_710(joaat("journal_rc_ohbro3_2b_jn"), iParam1);
			else
				func_710(joaat("journal_rc_ohbro3_2a_jn"), iParam1);
			break;
	
		case 121:
			if (bParam3 == true)
				func_710(joaat("journal_rc_pw1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_pw1_jn"), iParam1);
			break;
	
		case 122:
			if (bParam3 == true)
				func_710(joaat("journal_rc_pw3_ar"), iParam1);
			else if (func_712(121))
				func_710(joaat("journal_rc_pw3b_jn"), iParam1);
			else
				func_710(joaat("journal_rc_pw3a_jn"), iParam1);
			break;
	
		case 124:
			if (bParam3 == true)
				func_710(joaat("journal_rc_pw4_ar"), iParam1);
			else if (func_712(122))
				func_710(joaat("journal_rc_pw4b_jn"), iParam1);
			else
				func_710(joaat("journal_rc_pw4a_jn"), iParam1);
			break;
	
		case 125:
			if (bParam3 == true)
			{
				func_710(joaat("journal_rc_pw5_ar"), iParam1);
				func_710(joaat("journal_rc_pw5b_ar"), iParam1);
			}
			else
			{
				func_710(joaat("journal_rc_pw5_jn"), iParam1);
				func_710(joaat("journal_rc_pw5b_jn"), iParam1);
			}
			break;
	
		case 127:
			func_710(joaat("journal_rc_rtl1_ar"), iParam1);
			break;
	
		case 129:
			func_710(joaat("journal_rc_rtl3_ar"), iParam1);
			break;
	
		case 131:
			func_710(joaat("journal_rc_rtl5_ar"), iParam1);
			break;
	
		case 133:
			func_710(joaat("journal_rc_rtl7_ar"), iParam1);
			break;
	
		case 134:
			func_710(joaat("journal_entry_chap3_sadie1_1"), iParam1);
			break;
	
		case 135:
			if (bParam3 == true)
				if (Global_1357515 == -1)
					func_710(joaat("journal_rc_killer4a_ar"), iParam1);
				else
					func_710(joaat("journal_rc_killer4b_ar"), iParam1);
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_killer1_ar")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_killer2_ar")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_killer3_ar")))
				if (Global_1357515 == -1)
					func_710(joaat("journal_rc_killer4a_jn"), iParam1);
				else
					func_710(joaat("journal_rc_killer4b_jn"), iParam1);
			else if (Global_1357515 == -1)
				func_710(joaat("journal_rc_killer4c_jn"), iParam1);
			else
				func_710(joaat("journal_rc_killer4d_jn"), iParam1);
			break;
	
		case 136:
			if (bParam3 == true)
				func_710(joaat("journal_rc_slvc1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_slvc1_jn"), iParam1);
			break;
	
		case 137:
			if (bParam3 == true)
			{
				func_710(joaat("journal_rc_slvc2_ar"), iParam1);
				func_710(joaat("journal_rc_slvc3a_ar"), iParam1);
			}
			else if (func_712(136))
			{
				func_710(joaat("journal_rc_slvc2b_jn"), iParam1);
				func_710(joaat("journal_rc_slvc3c_jn"), iParam1);
			}
			else
			{
				func_710(joaat("journal_rc_slvc2a_jn"), iParam1);
				func_710(joaat("journal_rc_slvc3a_jn"), iParam1);
			}
			break;
	
		case 142:
			if (bParam2 == true)
			{
				func_710(joaat("journal_entry_chap6_strauss3_3a"), iParam1);
				func_710(joaat("journal_entry_chap6_strauss3_3b"), iParam1);
			}
			else
			{
				func_710(joaat("journal_entry_chap6_strauss3_3c"), iParam1);
			}
			break;
	
		case 143:
			if (bParam3 == true)
				func_710(joaat("journal_rc_oddf1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_oddf1_jn"), iParam1);
			break;
	
		case 144:
			if (bParam3 == true)
				func_710(joaat("journal_rc_oddf2_ar"), iParam1);
			else
				func_710(joaat("journal_rc_oddf2_jn"), iParam1);
			break;
	
		case 146:
			if (bParam3 == true)
				if (Global_1357515 == 1)
					func_710(joaat("journal_rc_treasure1a_ar"), iParam1);
				else if (Global_1357515 == 0)
					func_710(joaat("journal_rc_treasure1b_ar"), iParam1);
			else if (Global_1357515 == 1)
				func_710(joaat("journal_rc_treasure1a_jn"), iParam1);
			else if (Global_1357515 == 0)
				func_710(joaat("journal_rc_treasure1b_jn"), iParam1);
			break;
	
		case 147:
			if (bParam3 == true)
				func_710(joaat("journal_rc_warvet1_ar"), iParam1);
			else
				func_710(joaat("journal_rc_warvet1_jn"), iParam1);
			break;
	
		case 148:
			if (bParam3 == true)
				func_710(joaat("journal_rc_warvet2_ar"), iParam1);
			else if (func_712(147))
				func_710(joaat("journal_rc_warvet2b_jn"), iParam1);
			else
				func_710(joaat("journal_rc_warvet2a_jn"), iParam1);
			break;
	
		case 149:
			if (bParam3 == true)
				func_710(joaat("journal_rc_warvet3_ar"), iParam1);
			else if (func_712(148))
				func_710(joaat("journal_rc_warvet3b_jn"), iParam1);
			else
				func_710(joaat("journal_rc_warvet3a_jn"), iParam1);
			break;
	
		case 150:
			if (bParam3 == true)
				func_710(joaat("journal_rc_warvet4_ar"), iParam1);
			else if (func_712(149))
				func_710(joaat("journal_rc_warvet4b_jn"), iParam1);
			else
				func_710(joaat("journal_rc_warvet4a_jn"), iParam1);
			break;
	
		default:
			break;
	}

	return;
}

int func_508(int iParam0, var uParam1, var uParam2) // Position - 0x1643E Hash - 0x3C59630F ^0x12A2BA0D
{
	int num;
	int num2;
	int num3;
	int num4;

	*uParam1 = joaat("CSTP_PERSIST_ACROSS_STATES");
	*uParam2 = -1;
	num = func_27(iParam0);

	switch (num)
	{
		case 1:
			num2 = func_715(iParam0);
		
			switch (num2)
			{
				case 0:
					return joaat("CSTAG_FLOW_WNT1_POST");
			
				case 1:
					return joaat("CSTAG_FLOW_WNT2_POST");
			
				case 2:
					return joaat("CSTAG_FLOW_DST1_POST");
			
				case 3:
					return joaat("CSTAG_FLOW_WNT4_POST");
			
				case 4:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_MUD1_POST");
			
				case 5:
					return joaat("CSTAG_FLOW_MUD2_POST");
			
				case 6:
					return joaat("CSTAG_FLOW_MUD3_POST");
			
				case 7:
					return joaat("CSTAG_FLOW_BOU1_POST");
			
				case 8:
					return joaat("CSTAG_FLOW_MRY1_POST");
			
				case 9:
					if (func_564(Global_1835011[9 /*74*/].f_1) == 0)
						return joaat("CSTAG_FLOW_SAL1_SPLITUP_POST");
					else
						return joaat("CSTAG_FLOW_SAL1_POST");
					break;
			
				case 10:
					return joaat("CSTAG_FLOW_REV1_POST");
			
				case 11:
					return joaat("CSTAG_FLOW_UTP1_POST");
			
				case 12:
					return joaat("CSTAG_FLOW_UTP2_POST");
			
				case 13:
					return joaat("CSTAG_FLOW_SEN1_POST");
			
				case 14:
					return joaat("CSTAG_FLOW_MUD4_POST");
			
				case 15:
					return joaat("CSTAG_FLOW_HNT1_POST");
			
				case 16:
					return joaat("CSTAG_FLOW_FUD1_POST");
			
				case 17:
					return joaat("CSTAG_FLOW_GRY1_POST");
			
				case 18:
					return joaat("CSTAG_FLOW_BRT1_POST");
			
				case 19:
					return joaat("CSTAG_FLOW_GRY2_POST");
			
				case 20:
					return joaat("CSTAG_FLOW_BRT2_POST");
			
				case 21:
					return joaat("CSTAG_FLOW_GRY3_POST");
			
				case 22:
					return joaat("CSTAG_FLOW_TRE1_POST");
			
				case 23:
					return joaat("CSTAG_FLOW_DST3_POST");
			
				case 24:
					return joaat("CSTAG_FLOW_MUD5_POST");
			
				case 25:
					return joaat("CSTAG_FLOW_MUD6_POST");
			
				case 26:
					return joaat("CSTAG_FLOW_BRT3_POST");
			
				case 27:
					return joaat("CSTAG_FLOW_MOB1_POST");
			
				case 28:
					return joaat("CSTAG_FLOW_MOB2_POST");
			
				case 29:
					return joaat("CSTAG_FLOW_MOB3_POST");
			
				case 30:
					return joaat("CSTAG_FLOW_MOB4_POST");
			
				case 31:
					return joaat("CSTAG_FLOW_MOB5_POST");
			
				case 32:
					return joaat("CSTAG_FLOW_ODR4_POST");
			
				case 33:
					return joaat("CSTAG_FLOW_IND1_POST");
			
				case 34:
					return joaat("CSTAG_FLOW_IND3_POST");
			
				case 35:
					return joaat("CSTAG_FLOW_SUS1_POST");
			
				case 36:
					return joaat("CSTAG_FLOW_MRY3_POST");
			
				case 37:
					return joaat("CSTAG_FLOW_SDN1_POST");
			
				case 38:
					return joaat("CSTAG_FLOW_GUA1_POST");
			
				case 39:
					return joaat("CSTAG_FLOW_GUA2_POST");
			
				case 40:
					return joaat("CSTAG_FLOW_FUS1_POST");
			
				case 41:
					return joaat("CSTAG_FLOW_FUS2_POST");
			
				case 42:
					return joaat("CSTAG_FLOW_SMG2_POST");
			
				case 43:
					return joaat("CSTAG_FLOW_GUA3_POST");
			
				case 44:
					return joaat("CSTAG_FLOW_GNG1_POST");
			
				case 45:
					return joaat("CSTAG_FLOW_GNG2_POST");
			
				case 46:
					return joaat("CSTAG_FLOW_GNG3_POST");
			
				case 47:
					return joaat("CSTAG_FLOW_DST5_POST");
			
				case 48:
					return joaat("CSTAG_FLOW_NTV1_POST");
			
				case 49:
					return joaat("CSTAG_FLOW_NTV2_POST");
			
				case 50:
					return joaat("CSTAG_FLOW_NTS1_POST");
			
				case 51:
					return joaat("CSTAG_FLOW_NTS2_POST");
			
				case 52:
					return joaat("CSTAG_FLOW_NTS3_POST");
			
				case 53:
					return joaat("CSTAG_FLOW_CRN1_POST");
			
				case 54:
					return joaat("CSTAG_FLOW_TRN1_POST");
			
				case 55:
					return joaat("CSTAG_FLOW_TRN2_POST");
			
				case 56:
					return joaat("CSTAG_FLOW_TRN3_POST");
			
				case 57:
					return joaat("CSTAG_FLOW_TRN4_POST");
			
				case 58:
					return joaat("CSTAG_FLOW_NTV3_POST");
			
				case 59:
					return joaat("CSTAG_FLOW_FIN1_POST");
			
				case 60:
					return joaat("CSTAG_FLOW_MAR1_POST");
			
				case 61:
					return joaat("CSTAG_FLOW_MAR5_POST");
			
				case 62:
					return joaat("CSTAG_FLOW_MR52_POST");
			
				case 63:
					return joaat("CSTAG_FLOW_MR53_POST");
			
				case 64:
					return joaat("CSTAG_FLOW_LAR1_POST");
			
				case 65:
					return joaat("CSTAG_FLOW_MAR2_POST");
			
				case 66:
					return joaat("CSTAG_FLOW_MAR4_POST");
			
				case 67:
					return joaat("CSTAG_FLOW_AB21_POST");
			
				case 68:
					return joaat("CSTAG_FLOW_BE22_POST");
			
				case 69:
					return joaat("CSTAG_FLOW_SAD2_POST");
			
				case 70:
					return joaat("CSTAG_FLOW_SAD3_POST");
			
				case 71:
					return joaat("CSTAG_FLOW_SAD4_POST");
			
				case 72:
					return joaat("CSTAG_FLOW_SAD5_POST");
			
				case 73:
					return joaat("CSTAG_FLOW_MAR6_POST");
			
				case 74:
					return joaat("CSTAG_FLOW_MAR7_POST");
			
				case 75:
					return joaat("CSTAG_FLOW_MAR8_POST");
			
				case 76:
					return joaat("CSTAG_FLOW_FIN2_POST");
			}
			break;
	
		case 8:
			num3 = func_106(iParam0);
		
			switch (num3)
			{
				case 0:
					return joaat("CSTAG_FLOW_RABI1_POST");
			
				case 2:
					return joaat("CSTAG_FLOW_RABI3_POST");
			
				case 3:
					return joaat("CSTAG_FLOW_RBNP10_POST");
			
				case 5:
					return joaat("CSTAG_FLOW_RBNP12_POST");
			
				case 8:
					return joaat("CSTAG_FLOW_RBCH11_POST");
			
				case 10:
					return joaat("CSTAG_FLOW_RBCH21_POST");
			
				case 21:
					return joaat("CSTAG_FLOW_RBRT0_POST");
			
				case 22:
					return joaat("CSTAG_FLOW_RCLDN1_POST");
			
				case 23:
					return joaat("CSTAG_FLOW_RCLDN2_POST");
			
				case 37:
					return joaat("CSTAG_FLOW_RCHRB_POST");
			
				case 52:
					return joaat("CSTAG_FLOW_RCTAX2_POST");
			
				case 58:
					return joaat("CSTAG_FLOW_RDOPN_POST");
			
				case 59:
					return joaat("CSTAG_FLOW_RDOWN1_POST");
			
				case 61:
					return joaat("CSTAG_FLOW_RDOWN2_POST");
			
				case 62:
					return joaat("CSTAG_FLOW_RDOWN3_POST");
			
				case 63:
					return joaat("CSTAG_FLOW_RDST2_POST");
			
				case 64:
					return joaat("CSTAG_FLOW_RDST61_POST");
			
				case 65:
					return joaat("CSTAG_FLOW_RDST62_POST");
			
				case 66:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDTC1_POST");
			
				case 67:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDTC2_POST");
			
				case 68:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDCH3_POST");
			
				case 76:
					return joaat("CSTAG_FLOW_RXCF1_POST");
			
				case 82:
					return joaat("CSTAG_FLOW_RGNG01_POST");
			
				case 94:
					return joaat("CSTAG_FLOW_RHMR0_POST");
			
				case 96:
					return joaat("CSTAG_FLOW_RJCK2_POST");
			
				case 97:
					return joaat("CSTAG_FLOW_RMARY1_POST");
			
				case 98:
					return joaat("CSTAG_FLOW_RMARY2_POST");
			
				case 106:
					return joaat("CSTAG_FLOW_RMOB01_POST");
			
				case 107:
					return joaat("CSTAG_FLOW_RMOB02_POST");
			
				case 108:
					return joaat("CSTAG_FLOW_RMNR1_POST");
			
				case 112:
					return joaat("CSTAG_FLOW_RMUD31_POST");
			
				case 113:
					return joaat("CSTAG_FLOW_RMUD32_POST");
			
				case 114:
					return joaat("CSTAG_FLOW_RMUD33_POST");
			
				case 115:
					return joaat("CSTAG_FLOW_RNATV1_POST");
			
				case 116:
					return joaat("CSTAG_FLOW_RNATV2_POST");
			
				case 120:
					return joaat("CSTAG_FLOW_RPRSN_POST");
			
				case 134:
					return joaat("CSTAG_FLOW_RSAD1_POST");
			
				case 138:
					return joaat("CSTAG_FLOW_RSTR1_POST");
			
				case 140:
					return joaat("CSTAG_FLOW_RSTR31_POST");
			
				case 142:
					return joaat("CSTAG_FLOW_RSTR33_POST");
			
				default:
					break;
			}
			break;
	
		case 11:
			num4 = func_106(iParam0);
		
			switch (num4)
			{
				case joaat("HAI_BANK_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_BR01_POST");
			
				case joaat("HAI_HOME_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_HR01_POST");
			
				case joaat("HAI_COACH_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_CR02_POST");
			
				case joaat("HAI_COACH_ROBBERY_03"):
					return joaat("CSTAG_FLOW_CA_CR01_POST");
			
				case joaat("HAI_COACH_ROBBERY_02"):
					return joaat("CSTAG_FLOW_CA_CR03_POST");
			
				case joaat("HAI_COACH_ROBBERY_04"):
					return joaat("CSTAG_FLOW_CA_CR04_POST");
			
				case joaat("HAI_FISHING_01"):
					return joaat("CSTAG_FLOW_CA_FS01_POST");
			
				case joaat("HAI_FISHING_02"):
					return joaat("CSTAG_FLOW_CA_FS02_POST");
			
				case joaat("HAI_HUNTING_06"):
					return joaat("CSTAG_FLOW_CA_HT06_POST");
			
				default:
					break;
			}
			break;
	}

	return 176656832;
}

int func_509(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x16BD6 Hash - 0x8BF3BA53 ^0xECA3E26
{
	int i;
	Hash hash;
	int num;
	int num2;
	int j;

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return 1;
	}

	num = func_716(iParam0);
	num2 = func_717(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[i /*5*/] = iParam0;
			Global_40.f_4283.f_6[i /*5*/].f_2 = uParam1;
			Global_40.f_4283.f_6[i /*5*/].f_3 = num2;
		
			if (iParam3 > 0)
			{
				hash = func_121();
				func_40(&hash, 0, 0, iParam3, 0, 0, 0, false);
			}
			else
			{
				hash = -15;
			}
		
			Global_40.f_4283.f_6[i /*5*/].f_1 = hash;
			Global_40.f_4283.f_6[i /*5*/].f_4 = num;
			func_718(iParam0, true);
		
			if (func_719(num))
			{
				for (j = 0; j < 60; j = j + 1)
				{
					if (Global_40.f_4283.f_6[j /*5*/].f_4 == num && Global_40.f_4283.f_6[j /*5*/] != iParam0)
						func_720(&Global_40.f_4283.f_6[j /*5*/], true, false);
				}
			}
		
			if (bParam5)
				if (bParam6)
					func_721(1, iParam0);
				else
					func_722(1, iParam0);
		
			return 1;
		}
	}

	return 0;
}

int func_510(int iParam0, var uParam1) // Position - 0x16D2A Hash - 0xBC02C67 ^0xBC02C67
{
	*uParam1 = 0;

	switch (iParam0)
	{
		case 5:
			*uParam1 = 45;
			return 60;
	
		case 8:
			*uParam1 = 50;
			return 100;
	
		case 9:
			*uParam1 = 45;
			return 70;
	
		case 10:
			*uParam1 = 30;
			return 60;
	
		case 11:
			*uParam1 = 35;
			return 70;
	
		case 15:
			*uParam1 = 15;
			return 35;
	
		case 19:
			*uParam1 = 25;
			return 50;
	
		case 21:
			*uParam1 = 35;
			return 70;
	
		case 22:
			*uParam1 = 25;
			return 45;
	
		case 23:
			*uParam1 = 30;
			return 60;
	
		case 27:
			*uParam1 = 30;
			return 60;
	
		case 29:
			*uParam1 = 40;
			return 100;
	
		case 30:
			*uParam1 = 50;
			return 100;
	
		case 32:
			*uParam1 = 35;
			return 70;
	
		case 33:
			*uParam1 = 30;
			return 60;
	
		case 35:
			*uParam1 = 50;
			return 70;
	
		case 36:
			*uParam1 = 40;
			return 80;
	
		case 39:
		case 41:
		case 42:
		case 43:
			*uParam1 = 20;
			return 40;
	
		case 47:
			*uParam1 = 30;
			return 60;
	
		case 48:
			*uParam1 = 35;
			return 70;
	
		case 49:
			*uParam1 = 35;
			return 70;
	
		case 58:
			*uParam1 = 30;
			return 60;
	
		case 60:
			*uParam1 = 35;
			return 70;
	
		case 61:
			*uParam1 = 35;
			return 70;
	
		case 62:
			*uParam1 = 35;
			return 70;
	
		case 63:
			*uParam1 = 35;
			return 70;
	
		case 64:
			*uParam1 = 35;
			return 70;
	
		case 65:
			*uParam1 = 35;
			return 70;
	
		case 66:
			*uParam1 = 35;
			return 70;
	
		case 67:
			*uParam1 = 35;
			return 70;
	
		case 68:
			*uParam1 = 35;
			return 70;
	
		case 70:
			*uParam1 = 35;
			return 70;
	
		case 73:
			*uParam1 = 35;
			return 70;
	
		case 76:
			*uParam1 = 35;
			return 70;
	}

	return 120;
}

int func_511(int iParam0, int iParam1, int iParam2) // Position - 0x16FD8 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

void func_512(BOOL bParam0) // Position - 0x16FFD Hash - 0x27F696AB ^0x27F696AB
{
	if (bParam0)
		Global_1894899 = Global_1894899 | 64;
	else
		Global_1894899 = Global_1894899 - Global_1894899 & 64;

	return;
}

void func_513(int iParam0, int iParam1, BOOL bParam2) // Position - 0x17028 Hash - 0x2EAA804C ^0x50C02423
{
	int num;

	num = iParam0 * 1000;

	if (num + MISC::GET_GAME_TIMER() > Global_1327479.f_4)
	{
		func_723(iParam0, iParam1, bParam2);
	}
	else
	{
		num = num / 2;
	
		if (num + MISC::GET_GAME_TIMER() > Global_1327479.f_5)
			Global_1327479.f_5 = MISC::GET_GAME_TIMER() + num;
	}

	return;
}

int func_514(int iParam0, var uParam1) // Position - 0x17077 Hash - 0x76046DF8 ^0x76046DF8
{
	*uParam1 = 0;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 45;
			return 75;
	
		case 5:
			*uParam1 = 50;
			return 100;
	
		case 6:
			*uParam1 = 30;
			return 50;
	
		case 8:
			*uParam1 = 45;
			return 75;
	
		case 9:
			*uParam1 = 45;
			return 75;
	
		case 10:
			*uParam1 = 45;
			return 75;
	
		case 21:
			*uParam1 = 30;
			return 50;
	
		case 24:
			*uParam1 = 30;
			return 50;
	
		case 25:
			*uParam1 = 30;
			return 50;
	
		case 26:
			*uParam1 = 30;
			return 50;
	
		case 27:
			*uParam1 = 30;
			return 50;
	
		case 28:
			*uParam1 = 30;
			return 50;
	
		case 30:
			*uParam1 = 30;
			return 50;
	
		case 31:
			*uParam1 = 30;
			return 50;
	
		case 32:
			*uParam1 = 30;
			return 50;
	
		case 33:
			*uParam1 = 30;
			return 50;
	
		case 34:
			*uParam1 = 30;
			return 50;
	
		case 35:
			*uParam1 = 30;
			return 50;
	
		case 36:
			*uParam1 = 30;
			return 50;
	
		case 38:
			*uParam1 = 30;
			return 45;
	
		case 39:
			*uParam1 = 30;
			return 45;
	
		case 40:
			*uParam1 = 30;
			return 45;
	
		case 41:
			*uParam1 = 30;
			return 45;
	
		case 42:
			*uParam1 = 30;
			return 45;
	
		case 43:
			*uParam1 = 30;
			return 45;
	
		case 44:
			*uParam1 = 30;
			return 45;
	
		case 45:
			*uParam1 = 30;
			return 45;
	
		case 46:
			*uParam1 = 30;
			return 45;
	
		case 47:
			*uParam1 = 30;
			return 45;
	
		case 48:
			*uParam1 = 30;
			return 45;
	
		case 49:
			*uParam1 = 30;
			return 45;
	
		case 50:
			*uParam1 = 30;
			return 45;
	
		case 51:
			*uParam1 = 30;
			return 45;
	
		case 55:
			*uParam1 = 45;
			return 75;
	
		case 59:
			*uParam1 = 15;
			return 35;
	
		case 60:
			*uParam1 = 0;
			return 0;
	
		case 61:
			*uParam1 = 15;
			return 35;
	
		case 66:
			*uParam1 = 30;
			return 50;
	
		case 67:
			*uParam1 = 50;
			return 100;
	
		case 74:
			*uParam1 = 45;
			return 75;
	
		case 75:
			*uParam1 = 30;
			return 50;
	
		case 77:
			*uParam1 = 30;
			return 50;
	
		case 78:
			*uParam1 = 30;
			return 50;
	
		case 82:
			*uParam1 = 30;
			return 50;
	
		case 83:
			*uParam1 = 30;
			return 50;
	
		case 84:
			*uParam1 = 45;
			return 75;
	
		case 85:
			*uParam1 = 45;
			return 75;
	
		case 89:
			*uParam1 = 30;
			return 50;
	
		case 93:
			*uParam1 = 30;
			return 50;
	
		case 94:
			*uParam1 = 20;
			return 30;
	
		case 97:
			*uParam1 = 15;
			return 35;
	
		case 98:
			*uParam1 = 30;
			return 50;
	
		case 99:
			*uParam1 = 30;
			return 50;
	
		case 105:
			*uParam1 = 30;
			return 50;
	
		case 106:
			*uParam1 = 20;
			return 35;
	
		case 107:
			*uParam1 = 20;
			return 35;
	
		case 112:
			*uParam1 = 10;
			return 20;
	
		case 113:
			*uParam1 = 25;
			return 45;
	
		case 114:
			*uParam1 = 10;
			return 20;
	
		case 115:
			*uParam1 = 30;
			return 60;
	
		case 119:
			*uParam1 = 45;
			return 75;
	
		case 124:
			*uParam1 = 30;
			return 50;
	
		case 125:
			*uParam1 = 30;
			return 50;
	
		case 127:
			*uParam1 = 30;
			return 50;
	
		case 128:
			*uParam1 = 30;
			return 50;
	
		case 131:
			*uParam1 = 30;
			return 50;
	
		case 133:
			*uParam1 = 30;
			return 50;
	
		case 136:
			*uParam1 = 30;
			return 50;
	
		case 137:
			*uParam1 = 40;
			return 80;
	
		case 138:
			*uParam1 = 30;
			return 50;
	
		case 139:
			*uParam1 = 30;
			return 50;
	
		case 140:
			*uParam1 = 30;
			return 50;
	
		case 141:
			*uParam1 = 30;
			return 50;
	
		case 142:
			*uParam1 = 30;
			return 50;
	
		case 146:
			*uParam1 = 30;
			return 50;
	}

	return 120;
}

BOOL func_515(int iParam0) // Position - 0x1761C Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return true;
	}

	return false;
}

void func_516(int iParam0, int iParam1, int iParam2, const char* sParam3, Entity eParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x17646 Hash - 0xA48CCCFA ^0xD20D1AD3
{
	int num;
	int num2;
	int i;

	if (func_24() != -1)
		return;

	if (Global_36616 && func_724(iParam1) != false)
		return;

	num = func_725(iParam0);
	num = BUILTIN::ROUND((float)num * iParam6);

	if (iParam1 != joaat("honor_event_ambient_kill") && iParam1 != joaat("honor_event_ambient_ko") && iParam1 != joaat("honor_event_kill_vermin") && iParam1 != joaat("honor_event_kill_farm_animal") && iParam1 != joaat("honor_event_kill_horse") && iParam1 != joaat("honor_event_trampled_innocent") && iParam1 != joaat("honor_event_abandon_animals"))
	{
		func_726(num, false, iParam0, iParam1, sParam3, eParam4, bParam5, bParam7);
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
			func_727(num2, num, iParam0, iParam1, eParam4, bParam5);
		else
			func_726(num, true, iParam0, iParam1, sParam3, eParam4, bParam5, false);
	}

	return;
}

int func_517(int iParam0) // Position - 0x17745 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_37(iParam0))
		return -1;

	return func_728(func_109(iParam0));
}

int func_518(int iParam0) // Position - 0x17765 Hash - 0x6FE37A2C ^0x6FE37A2C
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}

	return 60;
}

void func_519(int iParam0, BOOL bParam1) // Position - 0x17785 Hash - 0x7075D2FF ^0xF0E29EF6
{
	if (func_24() != -1)
		return;

	if (func_26(0) != iParam0)
		return;

	if (func_729(iParam0))
		if (bParam1)
			func_730(-525676072);
		else
			func_731(-525676072);

	return;
}

int func_520(int iParam0) // Position - 0x177C8 Hash - 0xF4AFA201 ^0x156AC308
{
	int num;
	int num2;

	switch (func_27(iParam0))
	{
		case 1:
			num = func_106(iParam0);
			return func_732(num);
	
		case 8:
			num2 = func_106(iParam0);
		
			if (func_108(Global_1347702[num2 /*49*/].f_12, 1))
				return func_733(num2);
			break;
	}

	return -1;
}

void func_521(BOOL bParam0) // Position - 0x17823 Hash - 0x7B48571 ^0xD88AE50B
{
	int num;

	if (Global_1898077.f_1 == 0 && !bParam0)
		return;

	num = 0;

	if (func_24() != -1)
		num = 1;

	if (Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13 && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_734(num, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = num;
		Global_1898077.f_8 = func_735();
		Global_1898077.f_9 = func_736(Global_1894899.f_2);
		func_737(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}

	Global_1898077.f_2 = 0;
	return;
}

int func_522() // Position - 0x178E1 Hash - 0xF04428FF ^0xD9AF5F7C
{
	if (!func_100(Global_1835011[4 /*74*/].f_1, true))
		return 0;
	else if (!func_100(Global_1347702[66 /*49*/].f_15, true))
		return 1;
	else if (!func_100(Global_1347702[67 /*49*/].f_15, true))
		return 2;
	else if (!func_100(Global_1835011[38 /*74*/].f_1, true))
		return 3;
	else if (!func_100(Global_1347702[68 /*49*/].f_15, true))
		return 4;
	else if (!func_100(Global_1835011[59 /*74*/].f_1, true))
		return 5;
	else if (!func_100(Global_1835011[67 /*74*/].f_1, true))
		return 7;
	else
		return 8;

	return -1;
}

BOOL func_523() // Position - 0x179A4 Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_24() != -1)
		return 0;

	if (!func_331())
		return 0;

	if (!func_100(Global_1835011[1 /*74*/].f_1, true))
		return 1;

	if (func_100(Global_1835011[2 /*74*/].f_1, true) && func_100(Global_1347702[120 /*49*/].f_15, true) && !func_100(Global_1835011[4 /*74*/].f_1, true))
		return 1;

	if (func_100(Global_1835011[37 /*74*/].f_1, true) && !func_100(Global_1835011[39 /*74*/].f_1, true))
		return 1;

	if (func_100(Global_1835011[57 /*74*/].f_1, true) && !func_100(Global_1835011[60 /*74*/].f_1, true))
		return 1;

	if (func_100(Global_1835011[26 /*74*/].f_1, true) && !func_100(Global_1347702[67 /*49*/].f_15, true))
		return 1;

	if (func_100(Global_1835011[62 /*74*/].f_1, true) && func_100(Global_1835011[63 /*74*/].f_1, true) && !func_100(Global_1835011[64 /*74*/].f_1, true))
		return 1;

	if (func_100(Global_1835011[75 /*74*/].f_1, true) && !func_100(Global_1347702[1 /*49*/].f_15, true))
		return 1;

	if (func_100(Global_1835011[76 /*74*/].f_1, true) && !func_100(Global_1835011[77 /*74*/].f_1, true))
		return 1;

	if (func_100(Global_1835011[40 /*74*/].f_1, true) && func_100(Global_1835011[41 /*74*/].f_1, true) && !func_100(Global_1835011[44 /*74*/].f_1, true))
		return 1;

	if (func_100(Global_1835011[62 /*74*/].f_1, true) && func_100(Global_1835011[63 /*74*/].f_1, true) && !func_100(Global_1835011[64 /*74*/].f_1, true))
		return 1;

	if (func_100(Global_1835011[65 /*74*/].f_1, true) && func_100(Global_1835011[66 /*74*/].f_1, true) && !func_100(Global_1835011[67 /*74*/].f_1, true))
		return 1;

	return 0;
}

void func_524() // Position - 0x17BEA Hash - 0x7D4C8505 ^0x6764EEF4
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(13);
		Global_1898441[num /*38*/] = 13;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_WIN2_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_WIN2_COM", 24);
	}

	return;
}

BOOL func_525(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0x17C42 Hash - 0x11449F01 ^0x11449F01
{
	int value;
	Hash ammoTypeForWeapon;
	Hash lootTableKey;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	Hash collectableSubcategory;
	int num;
	Hash hash2;
	Hash hash3;
	Hash hash4;
	int num2;
	int i;
	var statId;
	BOOL flag3;

	if (!func_686(hParam0, 0))
		return false;

	if (!func_739(hParam0, iParam1, bParam2, hParam5))
		return false;

	if (!func_740(hParam0, &value, iParam1))
		return false;

	func_741(hParam0, bParam2);
	lootTableKey = 0;

	if (func_742(hParam0, false, false) == 0)
	{
		if (func_743(hParam0))
		{
			hash = func_744(hParam0);
			collectableSubcategory = func_745(hash);
			num = func_746(collectableSubcategory) + 1;
			func_747(hash);
		
			if (func_748(38))
				func_532(483, false);
			else
				func_532(482, false);
		
			if (num == func_749(collectableSubcategory))
			{
				func_525(func_750(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_331() && func_751(4))
				{
					if (func_331() && func_752(38) || func_748(38))
					{
						func_754(38, func_750(collectableSubcategory), 0, 0, func_753(), false, -1, false);
						func_755(2);
					}
					else
					{
						func_754(38, func_750(collectableSubcategory), 0, 0, func_753(), false, -1, false);
						func_755(1);
					}
				}
			}
			else if (func_331() && func_751(4))
			{
				if (func_331() && func_752(38) || func_748(38))
				{
					func_754(38, 0, 0, 0, func_753(), false, -1, false);
					func_755(2);
				}
				else
				{
					func_754(38, 0, 0, 0, func_753(), false, -1, false);
					func_755(1);
				}
			}
		
			if (func_331() && func_751(4))
				if (!Global_1914319.f_17376)
					if (func_331() && func_752(38) || func_748(38))
						func_756(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_756(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_678(hParam0) == joaat("CLOTHING"))
		if (!func_757(hParam0, 866047851) && !func_757(hParam0, -1979000645) && !func_757(hParam0, 1248798204))
			flag = true;

	if (func_758(hParam0, 8388608) && !func_328(28))
		func_759(28);

	if (!flag)
	{
		if (func_757(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_682(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_761(func_760(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_24() == -1)
						func_762(ammoTypeForWeapon);
				
					if (func_482(false) && func_365(ammoTypeForWeapon, 0, false, true, false, false, hParam5, false))
					{
						func_483(hParam0, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
			else
			{
				ammoTypeForWeapon = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
			
				if (WEAPON::_IS_AMMO_VALID(ammoTypeForWeapon))
				{
					if (func_24() == -1)
						func_762(hParam0);
				
					if (func_482(false) && func_365(hParam0, 0, false, true, false, false, hParam5, false))
					{
						func_483(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_678(hParam0) == joaat("WEAPON"))
		{
			if (!func_763(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_678(hParam0) == joaat("AMMO") && func_688(hParam0))
		{
			if (!func_764(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_757(hParam0, 866047851))
		{
			func_765(hParam0);
		}
		else if (func_757(hParam0, 2000026003))
		{
			func_766(hParam0);
		}
		else if (func_757(hParam0, -103750053))
		{
			func_216(func_767(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_216(func_215(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_757(hParam0, -121341956) && !func_757(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_100(Global_1835011[4 /*74*/].f_1, true))
					func_532(498, false);
		
			if (func_757(hParam0, -2017733358) || func_757(hParam0, -1369131378))
				func_768(hParam0);
		}
		else if (func_757(hParam0, -136654233))
		{
			if (func_757(hParam0, -1021472396))
			{
			}
		}
		else if (func_757(hParam0, -1466706512) && func_757(hParam0, 1147021565))
		{
			func_532(484, false);
		}
		else if (func_757(hParam0, 1147021565) && func_757(hParam0, -524514947))
		{
		}
		else if (func_757(hParam0, 554195525))
		{
		}
		else if (func_757(hParam0, 589988438))
		{
			if (func_769())
			{
				func_770(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_757(hParam0, 787083290) && func_757(hParam0, 949916894))
		{
			func_771(hParam0);
		}
		else if (func_757(hParam0, -1718133314))
		{
			func_772(hParam0);
		}
		else if (func_757(hParam0, -1738650224))
		{
			func_773(hParam0);
		}
		else if (func_757(hParam0, -1112814642) && func_757(hParam0, 949916894))
		{
			func_774(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_757(hParam0, 1841149704))
		{
			func_775();
		}
		else if (func_757(hParam0, 606799272))
		{
			func_776(hParam0, iParam1);
			func_777(hParam0);
		}
		else if (func_757(hParam0, -1112814642) && func_757(hParam0, -1697809989))
		{
			func_778(hParam0, 0, false, false);
		}
		else if (func_757(hParam0, -2017733358) || func_757(hParam0, -1369131378))
		{
			func_768(hParam0);
		}
		else if (func_757(hParam0, -1921346699))
		{
			if (func_24() != -1)
				return false;
		
			func_779(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_757(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_550(471514780, 1, false))
						func_525(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_550(526074061, 1, false))
						func_525(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_550(-967317137, 1, false))
						func_525(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_550(670273567, 1, false))
						func_525(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_550(215778062, 1, false))
						func_525(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_550(-1045488665, 1, false))
						func_525(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_757(hParam0, -839724752) && func_758(hParam0, 4))
		{
			if (!func_748(42))
				func_780(hParam0);
		}
		else if (func_757(hParam0, 1399091007))
		{
			func_781(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_757(hParam0, 1248798204))
		{
			hash2 = 0;
		
			switch (hParam0)
			{
				case joaat("clothing_hl_player_satchel_005_1"):
					hash2 = joaat("kit_pouch_provisions");
					break;
			
				case joaat("clothing_hl_player_satchel_002_1"):
					hash2 = joaat("kit_pouch_remedies");
					break;
			
				case joaat("clothing_hl_player_satchel_003_1"):
					hash2 = joaat("kit_pouch_ingredients");
					break;
			
				case joaat("clothing_hl_player_satchel_008_1"):
					hash2 = joaat("kit_pouch_legendary");
					break;
			
				case joaat("clothing_hl_player_satchel_004_1"):
					hash2 = joaat("kit_pouch_kit");
					break;
			
				case joaat("clothing_hl_player_satchel_006_1"):
					hash2 = joaat("kit_pouch_materials");
					break;
			
				case joaat("clothing_hl_player_satchel_007_1"):
					hash2 = joaat("kit_pouch_valuables");
					break;
			}
		
			if (hash2 != 0)
				func_525(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_24() == -1)
					hParam0 = -1448210800;
				break;
		
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_798(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_798(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_798(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_788(499813453, joaat("treasure_hunt_loot_01"), false);
				func_789(499813453, false);
				func_790(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_788(390004462, joaat("treasure_hunt_loot_17"), false);
				func_789(390004462, false);
				func_794(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_788(6410548, joaat("treasure_hunt_loot_23"), false);
				func_789(6410548, false);
				func_795(8);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_788(6410548, joaat("treasure_hunt_loot_22"), false);
				func_789(6410548, false);
				func_795(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_759(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_468(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_782(&hash3, false))
					func_365(hash3, 0, false, bParam4, 3, false, 752097756, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case -1080874779:
			case joaat("consumable_potent_medicine"):
			case joaat("consumable_medicine"):
			case joaat("consumable_moonshine"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_798(594, 1934060482, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("upgrade_fsh_bait_cricket_tin"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_crickets");
				break;
		
			case joaat("consumable_potent_restorative"):
			case joaat("consumable_cocaine_chewing_gum_used"):
			case joaat("consumable_cocaine_chewing_gum"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("consumable_restorative"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_798(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_532(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_788(6410548, joaat("treasure_hunt_loot_21"), false);
				func_789(6410548, false);
				func_795(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_532(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_525(func_799(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_525(func_800(), 1, false, false, false, 752097756, 0, 0, 0, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("consumable_snake_oil"):
			case joaat("consumable_potent_snake_oil"):
			case joaat("consumable_chewing_tobacco"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("consumable_chewing_tobacco_used"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_798(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_788(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_789(-220219788, false);
				func_792(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_328(1))
					func_532(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_788(666607663, joaat("treasure_hunt_loot_07"), false);
				func_789(666607663, false);
				func_791(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_797(241, func_796(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_788(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_789(-220219788, false);
				func_792(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_797(242, func_796(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_532(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_797(240, func_796(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_788(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_789(-220219788, false);
				func_792(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_788(390004462, joaat("treasure_hunt_loot_16"), false);
				func_789(390004462, false);
				func_794(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_788(499813453, joaat("treasure_hunt_loot_03"), false);
				func_789(499813453, false);
				func_790(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_788(666607663, joaat("treasure_hunt_loot_06"), false);
				func_789(666607663, false);
				func_791(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_788(218622660, joaat("treasure_hunt_loot_14"), false);
				func_789(218622660, false);
				func_793(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_788(666607663, joaat("treasure_hunt_loot_05"), false);
				func_789(666607663, false);
				func_791(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_24() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_468(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_788(218622660, joaat("treasure_hunt_loot_13"), false);
				func_789(218622660, false);
				func_793(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_788(6410548, joaat("treasure_hunt_loot_20"), false);
				func_789(6410548, false);
				func_795(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_532(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_532(491, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("upgrade_fsh_bait_worm_can"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_worms");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_788(499813453, joaat("treasure_hunt_loot_02"), false);
				func_789(499813453, false);
				func_790(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_532(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_783();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_784();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_785();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_786();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_787();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_788(390004462, joaat("treasure_hunt_loot_18"), false);
				func_789(390004462, false);
				func_794(4);
				break;
		
			default:
				break;
		}
	}

	if (!flag2)
	{
		if (value <= 0)
			return false;
	
		hash4 = hParam0;
		func_801(&hash4);
	
		if (!func_802(hash4, value, hParam5))
			return false;
		else if (!func_482(false))
			return true;
	
		if (func_678(hParam0) == joaat("CLOTHING"))
			func_803(hParam0);
	
		if (func_757(hParam0, -1979000645))
			func_804(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_482(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_525(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_805(lootTableKey, 0);
		}
	}

	statId = { func_806(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_807(hParam0);

	if (iParam6 > 0f)
	{
		if (func_757(hParam0, -839724752))
			func_808(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_809(hParam0, value, false, flag3, 0);
	}

	return true;
}

void func_526(Hash hParam0) // Position - 0x18EDB Hash - 0xBDD5F70B ^0xFFB15F73
{
	int num;
	int num2;
	int num3;
	var unk;
	BOOL flag;
	int i;
	Hash hash;

	if (func_757(hParam0, 1989861793))
	{
		num = func_810(hParam0, 1697966752);
	
		if (num != 0)
		{
			unk = { func_811(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num, 0) };
		
			if (func_812(unk, &num2, &num3, 0))
			{
				flag = false;
			
				for (i = 0; i < num3; i = i + 1)
				{
					hash = func_813(i, num2);
				
					if (hash != hParam0 && func_686(hash, 0))
						if (func_814(hash, 0, false, true, 0))
							flag = true;
				}
			
				func_815(num2);
			
				if (flag)
					func_816(hParam0);
				else
					func_532(306, false);
			}
		}
	}

	return;
}

void func_527() // Position - 0x18F94 Hash - 0x53D1236C ^0x53D1236C
{
	if (func_24() != -1)
		return;

	func_817();
	func_818();
	func_819();
	func_820();
	func_821();
	func_822();
	func_823();
	return;
}

void func_528(Hash hParam0) // Position - 0x18FC3 Hash - 0x771653F3 ^0x13D633C3
{
	eStackSize i;
	int j;
	Hash hash;
	BOOL flag;
	Hash hash2;
	BOOL flag2;
	int k;
	var unk3;

	func_824(hParam0, 1, true, -142743235, true);

	if (func_825(hParam0))
		func_826(hParam0, true, true);

	flag = false;
	flag2 = false;
	k = func_654(func_827(hParam0), 1);

	if (k >= 39)
		flag2 = true;

	func_828(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));

	for (j = 0; j < 39; j = j + 1)
	{
		hash2 = Global_1946054.f_57[j /*11*/];
		Global_1946054.f_1616.f_1[j /*3*/] = { hash2 };
		Global_1946054.f_1616.f_1[j /*3*/].f_2 = Global_1946054.f_1497.f_1[j /*3*/].f_2 || Global_1946054.f_1378.f_1[j /*3*/].f_2;
	}

	if (func_829() == -2125499975)
		hash = 2020890174;
	else
		hash = 1105329772;

	func_830(&(Global_1946054.f_1616), hash, &unk3, true, false, false, 0);
	func_830(&(Global_1946054.f_1616), 211609491, &unk3, true, false, false, 0);
	Global_1946054.f_1616.f_1[8 /*3*/] = { func_831(8, 0) };
	Global_1946054.f_1616.f_1[9 /*3*/] = { func_831(9, 0) };
	Global_1946054.f_1616.f_1[0 /*3*/] = { func_831(0, 0) };
	Global_1946054.f_1616.f_1[2 /*3*/] = { func_831(2, 0) };
	Global_1946054.f_1616.f_1[3 /*3*/] = { func_831(3, 0) };
	Global_1946054.f_1616.f_1[1 /*3*/] = { func_831(1, 0) };
	Global_1946054.f_1616.f_1[5 /*3*/] = { func_831(5, 0) };
	Global_1946054.f_1616.f_1[6 /*3*/] = { func_831(6, 0) };
	Global_1946054.f_1616.f_1[7 /*3*/] = { func_831(7, 0) };

	for (i = 0; i < 5; i = i + 1)
	{
		if (flag2)
		{
			for (k = 0; k < 39; k = k + 1)
			{
				if (hParam0 == func_832(k, i))
				{
					func_833(&Global_1946054.f_1616.f_1[k /*3*/], k, i);
					break;
				}
			}
		}
		else if (hParam0 == func_832(k, i))
		{
			func_833(&Global_1946054.f_1616.f_1[k /*3*/], k, i);
		}
	}

	if (flag2)
	{
		for (k = 0; k < 39; k = k + 1)
		{
			if (hParam0 == Global_1946054.f_1497.f_1[k /*3*/])
			{
				Global_1946054.f_1497.f_1[k /*3*/] = { Global_1946054.f_1616.f_1[k /*3*/] };
				flag = true;
			}
		
			if (hParam0 == Global_26796.f_627.f_1.f_1.f_1[k /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[k /*3*/] = { Global_1946054.f_1616.f_1[k /*3*/] };
				flag = true;
			}
		
			if (flag)
				break;
		}
	}
	else
	{
		if (hParam0 == Global_1946054.f_1497.f_1[k /*3*/])
			Global_1946054.f_1497.f_1[k /*3*/] = { Global_1946054.f_1616.f_1[k /*3*/] };
	
		if (hParam0 == Global_26796.f_627.f_1.f_1.f_1[k /*3*/])
			Global_26796.f_627.f_1.f_1.f_1[k /*3*/] = { Global_1946054.f_1616.f_1[k /*3*/] };
	}

	for (j = 0; j < 39; j = j + 1)
	{
		Global_1946054.f_1378.f_1[j /*3*/] = { Global_1946054.f_1616.f_1[j /*3*/] };
	}

	return;
}

void func_529() // Position - 0x1930B Hash - 0xADB7564F ^0x84B68CFA
{
	eStackSize i;
	Hash hash;
	int num;
	int num2;

	num2 = 16;

	for (i = 0; i < 5; i = i + 1)
	{
		hash = func_832(num2, i);
	
		if (hash == Global_1946054.f_57[num2 /*11*/] || hash == 0)
		{
			if (func_829() == -2125499975 || func_829() == -449205311)
			{
				num = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
				num.f_1 = 1530758430;
				func_833(&num, num2, i);
			}
			else
			{
				num = 1734931872;
				num.f_1 = joaat("base");
				func_833(&num, num2, i);
			}
		}
	}

	num = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
	num.f_1 = 1530758430;

	if (Global_1946054.f_57[num2 /*11*/] == Global_26796.f_627.f_1.f_1.f_1[num2 /*3*/] || 0 == Global_26796.f_627.f_1.f_1.f_1[num2 /*3*/])
		Global_26796.f_627.f_1.f_1.f_1[num2 /*3*/] = { num };

	return;
}

void func_530() // Position - 0x193FD Hash - 0x4D0C7D8C ^0x728F4873
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(14);
		Global_1898441[num /*38*/] = 14;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_MUD1_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_MUD1_COM", 24);
	}

	return;
}

char* func_531(int iParam0, BOOL bParam1) // Position - 0x19455 Hash - 0x4B3AAF78 ^0x423354A4
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
	
		case 1:
			return "COMP_JOHN";
	
		case 2:
			return "COMP_JAVIER";
	
		case 3:
			return "COMP_BILL";
	
		case 4:
			return "COMP_UNCLE";
	
		case 5:
			return "COMP_HOSEA";
	
		case 6:
			return "COMP_MICAH";
	
		case 7:
			return "COMP_CHARLES";
	
		case 8:
			return "COMP_SEAN";
	
		case 9:
			return "COMP_LENNY";
	
		case 10:
			return "COMP_KIERAN";
	
		case 11:
			return "COMP_SADIE";
	
		case 12:
			if (func_100(Global_1835011[59 /*74*/].f_1, true) || func_100(Global_1347702[1 /*49*/].f_15, true) || func_260(Global_1347702[1 /*49*/].f_15))
				return "COMP_RUFUS";
			else if (func_707(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), true))
				return "COMP_CAIN";
		
			return "COMP_DOG";
	
		case 13:
			return "COMP_ABIGAIL";
	
		case 14:
			return "COMP_JACK";
	
		case 15:
			return "COMP_MARY_BETH";
	
		case 16:
			return "COMP_MOLLY_OSHEA";
	
		case 17:
			return "COMP_PEARSON";
	
		case 18:
			return "COMP_STRAUSS";
	
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
	
		case 20:
			return "COMP_KAREN";
	
		case 21:
			if (bParam1)
				return "COMP_SWANSON_S";
			else
				return "COMP_SWANSON";
			break;
	
		case 22:
			return "COMP_TILLY";
	
		case 23:
			return "COMP_TRELAWNY";
	
		case 24:
			return "COMP_CLEET";
	
		case 25:
			return "COMP_JOE";
	
		case 26:
			return "COMP_EAGLE_FLIES";
	}

	return "";
}

void func_532(int iParam0, BOOL bParam1) // Position - 0x19630 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_315(iParam0, &num, &num2);

	if (!func_834(iParam0, num, num2, bParam1))
		return;

	func_835(num, num2);
	return;
}

void func_533(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1965D Hash - 0x58E3122A ^0xF1226DA4
{
	int num;
	int i;

	num = func_654(hParam0, 1);
	func_836(&Global_1946054.f_1497.f_1[num /*3*/], 2, 6);
	func_836(&Global_1946054.f_1378.f_1[num /*3*/], 2, 6);

	if (bParam1)
	{
		Global_1946054.f_1497.f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
		Global_1946054.f_1497.f_1[num /*3*/].f_1 = 0;
		Global_1946054.f_1378.f_1[num /*3*/] = { Global_1946054.f_1497.f_1[num /*3*/] };
	
		if (bParam2)
			func_657(17, hParam0, 0, 0, false);
	}

	if (func_24() == -1)
	{
		for (i = 0; i < 5; i = i + 1)
		{
			func_836(&Global_26796.f_26[i /*120*/].f_1.f_1[num /*3*/], 2, 6);
		
			if (bParam1)
			{
				Global_26796.f_26[i /*120*/].f_1.f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
				Global_26796.f_26[i /*120*/].f_1.f_1[num /*3*/].f_1 = 0;
			}
		}
	}
	else
	{
		for (i = 0; i < 5; i = i + 1)
		{
			func_836(&Global_36638.f_45.f_350.f_26[i /*120*/].f_1.f_1[num /*3*/], 2, 6);
		
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[i /*120*/].f_1.f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
				Global_36638.f_45.f_350.f_26[i /*120*/].f_1.f_1[num /*3*/].f_1 = 0;
			}
		}
	}

	return;
}

void func_534() // Position - 0x197C2 Hash - 0xDFDC7EBC ^0x7DEB736E
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(17);
		Global_1898441[num /*38*/] = 17;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_BRA2_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_BRA2_COM", 24);
	}

	return;
}

void func_535() // Position - 0x1981A Hash - 0x843C843B ^0x50679B70
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(18);
		Global_1898441[num /*38*/] = 18;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_BRA3_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_BRA3_COM", 24);
	}

	return;
}

int func_536(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x19872 Hash - 0x7250E314 ^0x26D4E686
{
	var unk;

	if (iParam3 == -358215195)
	{
		unk = { func_476(hParam1, true, false) };
		iParam3 = func_653(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	func_837(iParam3);
	return func_468(pedParam0, hParam1, hParam2, iParam3, bParam4, bParam5, true, false, true, false);
}

void func_537(Hash hParam0) // Position - 0x198C2 Hash - 0xACCBFF65 ^0x7446C9E7
{
	Hash weaponUnlock;

	if (!func_363(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_VISIBLE(weaponUnlock, true);
	return;
}

BOOL func_538(int iParam0, int iParam1) // Position - 0x198EF Hash - 0x268F0522 ^0x268F0522
{
	if (!func_838(iParam0))
		return false;

	if (iParam1 == -1 || iParam1 < 0 || iParam1 > 179)
		iParam1 = func_839(iParam0);

	if (iParam1 == -1)
		return false;

	return func_840(&Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_539(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x19945 Hash - 0xA163EB4F ^0xA163EB4F
{
	int num;

	if (!func_838(iParam0))
		return;

	if (!func_246(hParam1))
		return;

	if (func_41(hParam1, true))
		return;

	num = func_839(iParam0);

	if (num == -1)
		return;

	if (func_538(iParam0, -1))
		return;
	else
		func_841(&Global_40.f_9910[num /*6*/], 2);

	Global_40.f_9910[num /*6*/].f_4 = hParam1;

	if (bParam2)
		if (!func_25(0, false, true))
			func_392(false, 17);

	return;
}

void func_540() // Position - 0x199C9 Hash - 0xF98325E1 ^0xFCF117A
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(19);
		Global_1898441[num /*38*/] = 19;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_MOB5_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_MOB5_COM", 24);
	}

	return;
}

void func_541() // Position - 0x19A21 Hash - 0xE8BC3D24 ^0x3314A1F6
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(20);
		Global_1898441[num /*38*/] = 20;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_SAI1_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_SAI1_COM", 24);
	}

	return;
}

void func_542() // Position - 0x19A7A Hash - 0xAD722284 ^0x554909BB
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(21);
		Global_1898441[num /*38*/] = 21;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_GUA1_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_GUA1_COM", 24);
	}

	return;
}

void func_543() // Position - 0x19AD3 Hash - 0x477867F2 ^0x3C00C456
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(22);
		Global_1898441[num /*38*/] = 22;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_GUA3_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_GUA3_COM", 24);
	}

	return;
}

void func_544() // Position - 0x19B2C Hash - 0xD421DBE8 ^0x656802E4
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(24);
		Global_1898441[num /*38*/] = 24;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_ODR5_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_ODR5_COM", 24);
	}

	return;
}

void func_545() // Position - 0x19B85 Hash - 0xEDCDE301 ^0x76BADDBF
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(25);
		Global_1898441[num /*38*/] = 25;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_FIN1_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_FIN1_COM", 24);
	}

	return;
}

void func_546() // Position - 0x19BDE Hash - 0xFF049E37 ^0x5C47FF36
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(27);
		Global_1898441[num /*38*/] = 27;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_MAR51_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_MAR51_COM", 24);
	}

	return;
}

void func_547() // Position - 0x19C37 Hash - 0x74622234 ^0x5A43560A
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(28);
		Global_1898441[num /*38*/] = 28;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_ABI21_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_ABI_21_COM", 24);
	}

	return;
}

BOOL func_548(Hash hParam0) // Position - 0x19C90 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_549(int iParam0) // Position - 0x19CA0 Hash - 0x9921E361 ^0xB910E238
{
	return Global_40.f_12019.f_4 && iParam0 != false;
}

BOOL func_550(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x19CB5 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_686(hParam0, 0))
		return false;

	num = func_678(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_842(hParam0, 1))
			return false;

	return func_742(hParam0, false, bParam2) >= iParam1;
}

void func_551(int iParam0) // Position - 0x19D1F Hash - 0x75FE095F ^0x198CCDB8
{
	if (func_212(32768))
		return;

	if (iParam0 < 0)
	{
		func_843(MISC::VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
		Global_1879514.f_14 = 1;
		Global_1879514.f_15 = 0;
	}
	else
	{
		func_843(MISC::VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Negative", 0, true);
		Global_1879514.f_14 = 0;
		Global_1879514.f_15 = 1;
	}

	return;
}

void func_552() // Position - 0x19DB6 Hash - 0xF50503CC ^0x81A26086
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(29);
		Global_1898441[num /*38*/] = 29;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_BEE22_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_BEE22_COM", 24);
	}

	return;
}

void func_553() // Position - 0x19E0F Hash - 0x1C20B6FD ^0x327024B1
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(26);
		Global_1898441[num /*38*/] = 26;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_FIN2_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_FIN2_COM", 24);
	}

	return;
}

void func_554() // Position - 0x19E68 Hash - 0x8D203C73 ^0xDFE8FB4A
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(23);
		Global_1898441[num /*38*/] = 23;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_DOC_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_DOC_COM", 24);
	}

	return;
}

void func_555() // Position - 0x19EC1 Hash - 0x821A3D2A ^0xCF3961DA
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(15);
		Global_1898441[num /*38*/] = 15;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_DOW3_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_DOW3_COM", 24);
	}

	return;
}

void func_556() // Position - 0x19F19 Hash - 0x7541A83B ^0x33A61D4D
{
	int num;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);

	if (MISC::IS_ORBIS_VERSION())
	{
		num = func_738(16);
		Global_1898441[num /*38*/] = 16;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_2), "AF_DUT1_TITLE", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_18), "AF_CAP1", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1898441[num /*38*/].f_21), "AF_DUT1_COM", 24);
	}

	return;
}

void func_557() // Position - 0x19F71 Hash - 0x56BA1A84 ^0xE501A5F6
{
	if (func_844() > 1)
	{
		func_845();
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("sp_chal_band_root")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("sp_chal_band_root"), true);
			func_532(444, true);
		}
	
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("sp_chal_herb_root")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("sp_chal_herb_root"), true);
			func_532(447, true);
		}
	
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("sp_chal_horse_root")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("sp_chal_horse_root"), true);
			func_532(448, true);
		}
	
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("sp_chal_shot_root")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("sp_chal_shot_root"), true);
			func_532(450, true);
		}
	
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("sp_chal_weap_root")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("sp_chal_weap_root"), true);
			func_532(452, true);
		}
	}

	return;
}

BOOL func_558(eStackSize essParam0) // Position - 0x1A021 Hash - 0x261B98DE ^0x261B98DE
{
	return func_344(essParam0, 4, true);
}

void func_559(eStackSize essParam0) // Position - 0x1A031 Hash - 0x202D286E ^0x202D286E
{
	func_846(essParam0, 4, true);
	return;
}

void func_560(int iParam0) // Position - 0x1A041 Hash - 0x7237E1A2 ^0xFECD9E9
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_326 = iParam0;
	statId = { func_394(joaat("BANK_DEBT_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

void func_561(int iParam0) // Position - 0x1A074 Hash - 0x8908ECF3 ^0x5325C08C
{
	int num;
	int num2;
	BOOL flag;

	if (func_212(32768))
		return;

	if (!func_37(iParam0))
		return;

	func_214(&Global_1935630, 8192);
	flag = true;

	switch (func_27(iParam0))
	{
		case 1:
			func_216(func_215(joaat("completed"), joaat("missions")), 1);
			num = func_106(iParam0);
			func_216(func_394(joaat("MISSIONS_PROGRESSED")), 1);
		
			switch (func_732(num))
			{
				case 0:
					func_216(func_215(joaat("completed"), joaat("missions_chp1")), 1);
					break;
			
				case 1:
					func_216(func_215(joaat("completed"), joaat("missions_chp2")), 1);
					break;
			
				case 2:
					func_216(func_215(joaat("completed"), joaat("missions_chp3")), 1);
					break;
			
				case 3:
					func_216(func_215(joaat("completed"), joaat("missions_chp4")), 1);
					break;
			
				case 4:
					func_216(func_215(joaat("completed"), joaat("missions_chp5")), 1);
					break;
			
				case 5:
					func_216(func_215(joaat("completed"), joaat("missions_chp6")), 1);
					break;
			
				case 6:
					func_216(func_215(joaat("completed"), joaat("missions_chp7")), 1);
					break;
			
				case 7:
					func_216(func_215(joaat("completed"), joaat("missions_chp8")), 1);
					break;
			
				case 8:
					func_216(func_215(joaat("completed"), joaat("missions_chp9")), 1);
					break;
			
				default:
					flag = false;
					break;
			}
		
			if (num == 7)
				func_216(func_215(joaat("completed"), joaat("rc_strands_bounty")), 1);
		
			if (flag && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1835011[num /*74*/].f_8))))
				func_216(func_215(joaat("completed"), joaat("required_missions")), 1);
			break;
	
		case 8:
			num2 = func_106(iParam0);
		
			if (func_108(Global_1347702[num2 /*49*/].f_12, 1))
				func_216(func_394(joaat("MISSIONS_PROGRESSED")), 1);
		
			if (func_108(Global_1347702[num2 /*49*/].f_12, 4) || num2 == 59)
				if (func_108(Global_1347702[num2 /*49*/].f_12, 1))
					func_216(func_215(joaat("completed"), joaat("missions")), 1);
				else
					func_216(func_215(joaat("completed"), joaat("rc")), 1);
		
			if (func_108(Global_1347702[num2 /*49*/].f_12, 1))
			{
				switch (func_733(num2))
				{
					case 0:
						func_216(func_215(joaat("completed"), joaat("missions_chp1")), 1);
						break;
				
					case 1:
						func_216(func_215(joaat("completed"), joaat("missions_chp2")), 1);
						break;
				
					case 2:
						func_216(func_215(joaat("completed"), joaat("missions_chp3")), 1);
						break;
				
					case 3:
						func_216(func_215(joaat("completed"), joaat("missions_chp4")), 1);
						break;
				
					case 4:
						func_216(func_215(joaat("completed"), joaat("missions_chp5")), 1);
						break;
				
					case 5:
						func_216(func_215(joaat("completed"), joaat("missions_chp6")), 1);
						break;
				
					case 6:
						func_216(func_215(joaat("completed"), joaat("missions_chp7")), 1);
						break;
				
					case 7:
						func_216(func_215(joaat("completed"), joaat("missions_chp8")), 1);
						break;
				
					case 8:
						func_216(func_215(joaat("completed"), joaat("missions_chp9")), 1);
						break;
				
					default:
						flag = false;
						break;
				}
			
				if (flag && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1347702[num2 /*49*/].f_3))))
					func_216(func_215(joaat("completed"), joaat("required_missions")), 1);
			}
			else if (func_108(Global_1347702[num2 /*49*/].f_12, 4))
			{
				if (func_108(Global_1347702[num2 /*49*/].f_12, 4194304))
				{
				}
				else if (!func_108(Global_1347702[num2 /*49*/].f_12, 512))
				{
					func_216(func_215(joaat("completed"), joaat("rc_strands")), 1);
				}
				else
				{
					func_216(func_215(joaat("completed"), joaat("rc_strands_bounty")), 1);
				}
			}
			break;
	}

	return;
}

void func_562() // Position - 0x1A47F Hash - 0x20111554 ^0x48BCF795
{
	int num;
	int num2;
	int num3;
	int num4;
	Any data;

	if (func_24() != -1)
		return;

	if (Global_1955825 != 2)
		return;

	if (Global_1955825.f_4)
		return;

	if (!func_847(64))
		return;
	else if (func_78(Global_1935630, 131072))
		return;
	else if (func_25(0, false, true) || func_848() || func_523())
		return;

	num = func_522();

	if (num == 0 || num == 4 || num == 6 || num == 7)
		return;

	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&data))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(data, func_849(&data, &num2, &num3, &num4)))
			break;
	}

	if (num2 == 1)
		func_318(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("hud_toasts"), -576888982, -2, 0, 0, 0, 0, true, true);
	else if (num2 > 1)
		func_318(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", num2), joaat("hud_toasts"), -576888982, -2, 0, 0, 0, 0, true, true);

	if (num4 > 0)
		func_850(num4, 0, 0);

	if (num2 > 0)
		func_392(false, -1);

	if (num3 > 0)
		func_851("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, true);

	func_852(true, false);
	Global_1955825.f_4 = 1;
	return;
}

void func_563(int iParam0, int iParam1, BOOL bParam2, int iParam3, int iParam4, const char* sParam5, int iParam6, int iParam7) // Position - 0x1A5E5 Hash - 0x1077FD1E ^0x5DBB07B2
{
	if (func_212(32768))
		return;

	func_853(iParam1, bParam2, iParam3, iParam4, sParam5, iParam6, iParam7, 752097756);

	if (bParam2)
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER")))
			Global_1879514.f_12 = 1;
		else
			Global_1879514.f_12 = 0;
	
		func_854(iParam0, iParam1, iParam3, iParam4);
	}

	return;
}

int func_564(int iParam0) // Position - 0x1A641 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_37(iParam0))
		return -1;

	return func_855(iParam0);
}

int func_565(int iParam0, int iParam1) // Position - 0x1A65D Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_856(iParam0))
		return 0;

	if (!func_331())
		return 0;

	if (!func_857(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

int func_566(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x1A6B8 Hash - 0x71EF3E96 ^0x557A7961
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
				num = 16201;
				num2 = 19200;
				break;
		
			default:
				return -1;
		}
	}

	if (num2 >= func_858())
		num2 = func_858();

	flag = func_859(num3, num4, iParam2);

	if (Global_1572887.f_12 == -1)
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_109(num5) == flag)
				return num5;
		
			if (func_109(num5) == false)
				return func_860(num3, num4, iParam2, i, hParam3);
		}
	
		num = 751;
		num2 = 770;
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_109(num5) == flag)
				return num5;
		
			if (func_109(num5) == false)
				return func_860(num3, num4, iParam2, i, hParam3);
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
				return func_860(num3, num4, iParam2, i, 0);
		}
	}

	return -1;
}

int func_567(int iParam0) // Position - 0x1A973 Hash - 0x41FAEDA9 ^0x4612D8EA
{
	switch (iParam0)
	{
		case 0:
			return func_861(joaat("REWARD_MONEYSTACK_LARGE"), false, -1);
	
		case 1:
			return func_861(joaat("REWARD_MONEYSTACK_LARGE"), false, -1);
	
		case 2:
			return func_861(joaat("REWARD_MONEYSTACK_LARGE"), false, -1) * 2;
	
		case 4:
			return func_861(joaat("REWARD_MONEYSTACK_LARGE"), false, -1);
	
		case 5:
			return func_861(joaat("REWARD_MONEYSTACK_LARGE"), false, -1);
	
		case 6:
			return func_861(joaat("REWARD_MONEYSTACK_LARGE"), false, -1) * 2;
	
		case 8:
			return func_861(joaat("REWARD_MONEYSTACK_LARGE"), false, -1) * 3;
	
		case 9:
			return func_861(joaat("REWARD_MONEYSTACK_LARGE"), false, -1) * 3;
	
		case 10:
			return func_861(joaat("REWARD_MONEYSTACK_LARGE"), false, -1) * 3;
	
		case 11:
			return func_861(joaat("REWARD_MONEYSTACK_LARGE"), false, -1);
	
		case 12:
			return 75000;
	
		default:
		
	}

	return 0;
}

Hash func_568(int iParam0) // Position - 0x1AA63 Hash - 0x2F57FA7D ^0x914B8AA9
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_5;

	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

void func_569(int iParam0, Hash hParam1, int iParam2) // Position - 0x1AA8E Hash - 0xF39224E1 ^0xD56E494F
{
	int data;

	data.f_1 = 0;
	data = 0;
	data.f_2 = 0;

	if (func_24() == false)
		data = Global_265073.f_73815.f_208.f_12;

	STATS::_STATSTRACKER_DEED_STATUS(iParam0, hParam1, iParam2, &data);
	return;
}

const char* func_570(int iParam0) // Position - 0x1AAC6 Hash - 0x88866CBF ^0x968A3C4C
{
	const char* str;

	if (!func_37(iParam0))
		return str;

	switch (func_27(iParam0))
	{
		case 1:
			str = Global_1835011[func_715(iParam0) /*74*/].f_8;
			break;
	
		case 8:
			str = Global_1347702[func_106(iParam0) /*49*/].f_3;
			break;
	
		case 11:
			if (iParam0 == func_566(0, 10, 11, joaat("cabr01")))
				TEXT_LABEL_ASSIGN_STRING(&str, "CABR01", 8);
			break;
	}

	return str;
}

void func_571(const char* sParam0) // Position - 0x1AB40 Hash - 0x883DA5E0 ^0x949DA11F
{
	int rating;
	Hash hashKey;

	if (!Global_1879514.f_11)
	{
		rating = func_862();
		hashKey = MISC::GET_HASH_KEY(&sParam0);
	
		if (MISSIONDATA::MISSIONDATA_GET_RATING(hashKey) != 5 && rating == 5)
			if (func_27(Global_1879514.f_1) == 1)
				func_565(5, 1);
			else if (func_27(Global_1879514.f_1) == 8 && func_108(Global_1347702[func_106(Global_1879514.f_1) /*49*/].f_12, 1) || func_108(Global_1347702[func_106(Global_1879514.f_1) /*49*/].f_12, 33554432))
				func_565(5, 1);
	
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&sParam0), rating);
	}
	else
	{
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&sParam0), 3);
	}

	return;
}

void func_572(BOOL bParam0) // Position - 0x1ABFA Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898164 = Global_1898164 || bParam0;
	return;
}

int func_573(eStackSize essParam0) // Position - 0x1AC0D Hash - 0x17D48B45 ^0x17D48B45
{
	switch (essParam0)
	{
		case 9:
			return 0;
	
		case 16:
			return 1;
	
		case 36:
			return 2;
	
		case 79:
			return 3;
	
		case 114:
			return 8;
	
		case 118:
			return 6;
	
		case 125:
			return 4;
	
		case 127:
			return 5;
	
		case 129:
			return 7;
	
		default:
		
	}

	return -1;
}

int func_574(int iParam0) // Position - 0x1AC79 Hash - 0x6A809E0B ^0xD5C1247E
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_2;

	return -1;
}

void func_575(int iParam0, int iParam1) // Position - 0x1AC98 Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_576(Hash hParam0, int iParam1) // Position - 0x1ACB8 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_577(int iParam0) // Position - 0x1ACCB Hash - 0x7C292CDC ^0x28CDA9CE
{
	int i;

	if (iParam0 < 0)
		return;

	if (!_IS_NULL_VECTOR(Global_1393237.f_11[iParam0 /*30*/].f_3))
	{
		func_863(Global_1393237.f_11[iParam0 /*30*/].f_3, 0);
		PED::_0x9851DE7AEC10B4E1(Global_1393237.f_11[iParam0 /*30*/].f_3, 20f, 1, 0);
	}

	Global_1393237.f_11[iParam0 /*30*/] = -15;
	Global_1393237.f_11[iParam0 /*30*/].f_2 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_3 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_6 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_9 = 0f;

	if (func_864(iParam0, 8388608))
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 8388608;
	}
	else
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 0;
		Global_1393237.f_11[iParam0 /*30*/].f_17 != func_865();
		Global_1393237.f_11[iParam0 /*30*/].f_17 = func_865();
	}

	Global_1393237.f_11[iParam0 /*30*/].f_11 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_12 = 0;
	Global_1393237.f_11[iParam0 /*30*/].f_13 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_14[i] = 0;
	}

	func_866(iParam0, 1);
	Global_1393237.f_11[iParam0 /*30*/].f_29 = 0;

	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[0]))
			MAP::REMOVE_BLIP(&Global_1393237.f_11[iParam0 /*30*/].f_18[0]);
	
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[1]))
			MAP::REMOVE_BLIP(&Global_1393237.f_11[iParam0 /*30*/].f_18[1]);
	
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1393237.f_11[iParam0 /*30*/].f_21))
		func_863(Global_1393237.f_11[iParam0 /*30*/].f_3, 1);

	return;
}

void func_578(var uParam0, int iParam1) // Position - 0x1AE9D Hash - 0x53A96DDB ^0xB6A79257
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

void func_579() // Position - 0x1AEB0 Hash - 0x52492FF9 ^0xA2D9D9EC
{
	int i;

	for (i = 3; i <= 5; i = i + 1)
	{
		if (!func_867(i, 128))
			func_868(i, 4096);
	}

	return;
}

void func_580() // Position - 0x1AEDF Hash - 0x3868EDBD ^0x9E3E5EA5
{
	int i;

	for (i = 0; i <= 2; i = i + 1)
	{
		if (!func_867(i, 128) && func_867(i, 1))
			func_868(i, 4096);
	}

	return;
}

void func_581(float fParam0) // Position - 0x1AF1A Hash - 0xF0148F71 ^0x8D35552C
{
	int num;

	num = BUILTIN::FLOOR(fParam0 * 1000f);

	if (Global_1393237.f_3 < MISC::GET_GAME_TIMER() + num)
		Global_1393237.f_3 = MISC::GET_GAME_TIMER() + num;

	return;
}

void func_582() // Position - 0x1AF4D Hash - 0xA00912CF ^0xF6ECFE01
{
	int i;

	for (i = 0; i < 120; i = i + 1)
	{
		if (func_221(i, 16777216))
			if (!func_869(i))
				func_870(i, 4096);
	}

	return;
}

BOOL func_583(BOOL bParam0, int iParam1) // Position - 0x1AF89 Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && iParam1 != false;
}

void func_584(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1AF98 Hash - 0xB7DFAC0B ^0xE8A27630
{
	int i;
	int num;

	for (i = 0; i < 120; i = i + 1)
	{
		num = 0;
	
		if (func_871(Global_1310750[i /*111*/], iParam0))
		{
			if (!func_872(i))
				num = 1;
			else if (iParam0 == 16777216)
				if (func_873(i) < func_874(iParam1))
					num = 1;
		
			func_875(i, iParam1, 1f, num || iParam2, bParam3);
		}
	}

	return;
}

void func_585(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1B008 Hash - 0xE914DE80 ^0x3F75BDDD
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
			func_876(92, true, num5, num4, num3, 0, true, true);
			func_876(99, true, num5, num4, num3, 0, true, true);
			func_876(44, true, num5, num4, num3, 0, true, true);
			func_876(12, true, num5, num4, num3, 0, true, true);
			func_876(64, true, num5, num4, num3, 0, true, true);
			break;
	
		case 1:
			func_876(5, true, num5, num4, num3, 0, true, true);
			func_876(6, true, num5, num4, num3, 0, true, true);
			func_876(13, true, num5, num4, num3, 0, true, true);
			func_876(25, true, num5, num4, num3, 0, true, true);
			func_876(29, true, num5, num4, num3, 0, true, true);
			func_876(46, true, num5, num4, num3, 0, true, true);
			func_876(67, true, num5, num4, num3, 0, true, true);
			func_876(9, true, num5, num4, num3, 0, true, true);
			break;
	
		case 2:
			func_876(3, true, num5, num4, num3, 0, true, true);
			func_876(11, true, num5, num4, num3, 0, true, true);
			func_876(18, true, num5, num4, num3, 0, true, true);
			func_876(92, true, num5, num4, num3, 0, true, true);
			func_876(95, true, num5, num4, num3, 0, true, true);
			func_876(96, true, num5, num4, num3, 0, true, true);
			func_876(101, true, num5, num4, num3, 0, true, true);
			func_876(51, true, num5, num4, num3, 0, true, true);
			break;
	
		case 3:
			func_876(53, true, num5, num4, num3, 0, true, true);
			func_876(54, true, num5, num4, num3, 0, true, true);
			func_876(52, true, num5, num4, num3, 0, true, true);
			func_876(12, true, num5, num4, num3, 0, true, true);
			func_876(56, true, num5, num4, num3, 0, true, true);
			break;
	
		case 4:
			func_876(70, true, num5, num4, num3, 0, true, true);
			func_876(63, true, num5, num4, num3, 0, true, true);
			func_876(35, true, num5, num4, num3, 0, true, true);
			break;
	
		case 5:
			func_876(117, true, num5, num4, num3, 0, true, true);
			func_876(75, true, num5, num4, num3, 0, true, true);
			func_876(76, true, num5, num4, num3, 0, true, true);
			func_876(64, true, num5, num4, num3, 0, true, true);
			func_876(15, true, num5, num4, num3, 0, true, true);
			func_876(108, true, num5, num4, num3, 0, true, true);
			func_876(12, true, num5, num4, num3, 0, true, true);
			break;
	}

	return;
}

void func_586(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B2B5 Hash - 0x34E92140 ^0x216EC835
{
	float num;
	float num2;
	BOOL flag;

	num = func_292();
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

eStackSize func_587(int iParam0) // Position - 0x1B308 Hash - 0x28677675 ^0xD6005963
{
	if (Global_1572887.f_12 == -1)
		return Global_40.f_7862[iParam0 /*4*/];

	return Global_42606[iParam0 /*4*/];
}

int func_588(int iParam0) // Position - 0x1B32E Hash - 0x9D68FB33 ^0x4832040D
{
	if (Global_1572887.f_12 == -1)
		return Global_40.f_7862[iParam0 /*4*/].f_1;

	return Global_42606[iParam0 /*4*/].f_1;
}

void func_589(int iParam0, eStackSize essParam1) // Position - 0x1B358 Hash - 0x3A863EAC ^0xECB3FAF8
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = essParam1;
		return;
	}

	Global_42606[iParam0 /*4*/] = essParam1;
	return;
}

void func_590(int iParam0, int iParam1) // Position - 0x1B385 Hash - 0x90093024 ^0xBB5CF78A
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_591(int iParam0, int iParam1) // Position - 0x1B3B6 Hash - 0x90093024 ^0x830112D0
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

BOOL func_592(int iParam0) // Position - 0x1B3E7 Hash - 0x93C8DA75 ^0x93C8DA75
{
	return func_192(iParam0) == 0;
}

BOOL func_593(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B3F7 Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_594(int iParam0) // Position - 0x1B495 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_311(iParam0);
	}

	if (num == 1)
		return true;

	if (num == 2)
		return true;

	return false;
}

void func_595(int iParam0) // Position - 0x1B500 Hash - 0x353ECB1E ^0x7492E51F
{
	const char* str;
	Hash hashKey;
	Vector3 vector;
	var unk3;
	var unk11;
	Any any;

	if (!func_877(iParam0))
		return;

	str = Global_1835011[iParam0 /*74*/].f_8;
	hashKey = MISC::GET_HASH_KEY(&str);

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, hashKey))
		UILOG::_UILOG_REMOVE_ENTRY(1, hashKey);

	if (iParam0 == 77 || iParam0 == 38)
		return;

	vector = { Global_1835011[iParam0 /*74*/].f_18 };
	TEXT_LABEL_COPY(&unk3, { Global_1835011[iParam0 /*74*/].f_8 }, 8);
	unk11 = { unk3 };
	TEXT_LABEL_APPEND_STRING(&unk11, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, hashKey, vector, Global_1835011[iParam0 /*74*/].f_26, MISC::GET_HASH_KEY(&unk11), any);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, hashKey, Global_1835011[iParam0 /*74*/].f_26, joaat("toast_log_blips"));
	return;
}

void func_596(int iParam0) // Position - 0x1B5B8 Hash - 0x84E45CF3 ^0x84E45CF3
{
	if (!func_37(iParam0))
		return;

	func_575(iParam0, func_574(iParam0) + 1);
	return;
}

int func_597(int iParam0, int iParam1) // Position - 0x1B5DB Hash - 0xD0889B29 ^0xA908D477
{
	int num;

	num = func_704(iParam0);

	if (num >= 0)
		return num;

	if (Global_1898164.f_162 >= 32)
		return -1;

	num = Global_1898164.f_162;
	func_878(iParam0, num);
	Global_1898164.f_162 = Global_1898164.f_162 + 1;

	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
		return num;

	func_879(num, iParam1);
	return iParam1;
}

void func_598(int iParam0, int iParam1) // Position - 0x1B648 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_599(int iParam0) // Position - 0x1B65D Hash - 0xDD4F2B2E ^0x9E400283
{
	Global_1572864.f_3 = Global_1572864.f_3 - Global_1572864.f_3 && iParam0;
	return;
}

void func_600(BOOL bParam0) // Position - 0x1B67B Hash - 0xB3088780 ^0xB3088780
{
	func_880(bParam0);
	func_881(bParam0);
	func_882(bParam0);
	func_883(bParam0);
	func_884(bParam0);
	func_885(bParam0);
	func_886(bParam0);
	func_887(bParam0);
	return;
}

void func_601(BOOL bParam0) // Position - 0x1B6B3 Hash - 0x9114E741 ^0x8984E174
{
	if (func_24() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_532(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_532(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_888(1, bParam0, true);
	func_787();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

void func_602(int iParam0) // Position - 0x1B721 Hash - 0x72B3FC21 ^0x3909C54
{
	int num;

	num = 0;

	if (func_24() != -1)
		num = 1;

	Global_1898077.f_1 = 2;
	Global_1898077.f_2 = 0;
	Global_1898077.f_3 = iParam0;
	Global_1898077.f_7 = num;
	func_889(Global_1898077.f_7, Global_1898077.f_3);
	return;
}

void func_603(int iParam0) // Position - 0x1B765 Hash - 0x6D69048D ^0xDB432840
{
	int num;

	if (Global_1898077.f_1 == 2)
		return;

	num = 0;

	if (func_24() != -1)
		num = 1;

	Global_1898077.f_1 = 5;
	Global_1898077.f_2 = 0;
	Global_1898077.f_4 = iParam0;
	Global_1898077.f_7 = num;
	func_890(Global_1898077.f_7, Global_1898077.f_4);
	return;
}

BOOL func_604(eStackSize essParam0) // Position - 0x1B7B6 Hash - 0x3FEAAF38 ^0x3FEAAF38
{
	int num;

	num = func_573(essParam0);
	return func_891(num, 16);
}

void func_605(int iParam0, int iParam1) // Position - 0x1B7CE Hash - 0xA82DD43C ^0x529E4B7C
{
	func_152(&(Global_40.f_11864[iParam0 /*2*/].f_1), iParam1);
	return;
}

void func_606(int iParam0) // Position - 0x1B7E8 Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_892();

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
			func_893(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_607(int iParam0) // Position - 0x1B954 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

BOOL func_608(BOOL bParam0) // Position - 0x1B967 Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_894(bParam0, &unk, &unk2))
		return true;

	return false;
}

BOOL func_609(var uParam0) // Position - 0x1B981 Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_24() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_895(uParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_895(uParam0);

	if (ped == 0)
		return false;

	if (func_635(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	uParam0->f_14 = ped;
	return true;
}

void func_610(var uParam0) // Position - 0x1BA1B Hash - 0x256C27DD ^0x256C27DD
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
		func_896(uParam0);

	return;
}

BOOL func_611(Ped pedParam0, var uParam1, Ped pedParam2) // Position - 0x1BA42 Hash - 0x7FBD27D8 ^0x4C0BB7C4
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
		num2 = func_635(pedParam2);
	else
		num2 = func_634(pedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_635(pedParam0);
	else
		num = func_634(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_583(*uParam1, 8388608))
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

float func_612(var uParam0) // Position - 0x1BB3B Hash - 0xD73B9827 ^0xDE12990D
{
	return uParam0->f_26;
}

BOOL func_613(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1BB47 Hash - 0x5A9E12AC ^0x5A9E12AC
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

void func_614(var uParam0, BOOL bParam1) // Position - 0x1BBAC Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_152(uParam0, 134217728);
	else
		func_153(uParam0, 134217728);

	return;
}

void func_615() // Position - 0x1BBD2 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_616(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x1BBE6 Hash - 0x7ED53456 ^0xD7A590DD
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
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_173(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_488(ped, 0)))
			if (func_897(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_617(var uParam0) // Position - 0x1BD46 Hash - 0xD73B9827 ^0x8CE07B2A
{
	return uParam0->f_17;
}

BOOL func_618(var uParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0x1BD52 Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (uParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_583(*uParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*uParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17))
			return true;

	return false;
}

int func_619(var uParam0) // Position - 0x1BDB3 Hash - 0xD73B9827 ^0x372EC0B
{
	return uParam0->f_18;
}

BOOL func_620(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x1BDBF Hash - 0x838BDEFB ^0xB1D5C032
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_488(ped, 0)))
			if (func_314(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_621(var uParam0) // Position - 0x1BE81 Hash - 0xD73B9827 ^0x9F7F0764
{
	return uParam0->f_23;
}

int func_622(var uParam0) // Position - 0x1BE8D Hash - 0xD73B9827 ^0x303D0BA3
{
	return uParam0->f_21;
}

int func_623(var uParam0) // Position - 0x1BE99 Hash - 0xB202FF2A ^0xFD1BAB10
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

BOOL func_624(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x1BFD6 Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_898(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_625(Ped pedParam0) // Position - 0x1C019 Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_899(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_626(Ped pedParam0) // Position - 0x1C07F Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_627(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1C0AB Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_369(pedParam1))
			return false;

	num = 5f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_628(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1C0F2 Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_369(pedParam1))
			return false;

	num = 10f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_629(var uParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0x1C13D Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_369(pedParam1))
		return false;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_630(Ped pedParam0, var uParam1) // Position - 0x1C1B6 Hash - 0x64FF5121 ^0xD9ABCD76
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

BOOL func_631(Ped pedParam0, Ped pedParam1) // Position - 0x1C203 Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (func_900(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_632(var uParam0) // Position - 0x1C24B Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*uParam0 & 2 != 0);
}

BOOL func_633(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1C25B Hash - 0x94A6C6F0 ^0xC51111A6
{
	float num;

	num = func_294(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

int func_634(Ped pedParam0) // Position - 0x1C287 Hash - 0xEB445B10 ^0x2826D9BF
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_635(Ped pedParam0) // Position - 0x1C2DF Hash - 0x6E063231 ^0x8559ECB6
{
	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(pedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_636(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0x1C34F Hash - 0x89708384 ^0x6760E23F
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
			if (func_630(Global_35, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_173(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_173(pedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_637(Ped pedParam0, var uParam1, BOOL bParam2) // Position - 0x1C4BF Hash - 0x3E8B6245 ^0x84E29058
{
	Ped ped;
	Ped ped2;

	func_894(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!bParam2 || !func_638(uParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
				if (!bParam2 || !func_638(uParam1, ped2))
					if (func_294(ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_638(var uParam0, Ped pedParam1) // Position - 0x1C5AD Hash - 0x27FC2906 ^0x3E0019C4
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

BOOL func_639(int iParam0) // Position - 0x1C623 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_31())
		return false;

	return func_100(Global_1347702[58 /*49*/].f_15, true);
}

int func_640(var uParam0) // Position - 0x1C645 Hash - 0xD73B9827 ^0xAC2E3C80
{
	return uParam0->f_20;
}

BOOL func_641(Ped pedParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0x1C651 Hash - 0x9E17B061 ^0x19F2F061
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

float func_642(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1C6CC Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_643(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1C6EA Hash - 0x7A16E50C ^0x7A16E50C
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
	
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
	
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
	
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
	
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
	
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
	
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
	
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
	
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
	
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
	
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
	
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
	
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
	
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
	
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
	
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
	
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
	
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
	
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
	
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
	
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
	
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
	
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
	
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
	
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
	
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
	
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
	
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
	
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
	
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
	
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
	
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
	
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
	
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
	
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
	
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
	
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
	
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
	
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
	
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
	
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
	
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
	
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
	
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}

	return;
}

BOOL func_644(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8) // Position - 0x1D187 Hash - 0x3D2F8087 ^0xB0BC8DD5
{
	float num;
	float num2;
	float num3;

	num = { uParam0 - uParam3 };
	num2 = (num * BUILTIN::COS(fParam8)) + (num.f_1 * BUILTIN::SIN(fParam8));
	num2.f_1 = (num * BUILTIN::SIN(fParam8)) - (num.f_1 * BUILTIN::COS(fParam8));
	num3 = ((num2 * num2) / (fParam6 * fParam6)) + ((num2.f_1 * num2.f_1) / (fParam7 * fParam7));
	return num3 <= 1f;
}

Ped func_645(int iParam0) // Position - 0x1D1ED Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_126(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

void func_646(int iParam0, BOOL bParam1) // Position - 0x1D21B Hash - 0x61515A20 ^0x61515A20
{
	if (func_24() != -1)
		return;

	if (!func_47(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

int func_647(int iParam0) // Position - 0x1D24C Hash - 0x1497AC6A ^0x1497AC6A
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

void func_648(int iParam0) // Position - 0x1D6A0 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1914319.f_15923 = iParam0;
	return;
}

void func_649(eStackSize essParam0) // Position - 0x1D6B1 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_345(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_901(essParam0);
	
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

BOOL func_650(int iParam0) // Position - 0x1D719 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_902(iParam0, 2);
}

void func_651() // Position - 0x1D728 Hash - 0xEB0D43DD ^0xEB0D43DD
{
	Global_1911774 = true;
	return;
}

void func_652(BOOL bParam0) // Position - 0x1D735 Hash - 0x70EE66C ^0x88F73934
{
	Global_1935496.f_18 = !bParam0;
	return;
}

int func_653(var uParam0) // Position - 0x1D746 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_670(i, 1);
	}

	return -358215195;
}

int func_654(Hash hParam0, int iParam1) // Position - 0x1D781 Hash - 0x9D981F95 ^0x9D981F95
{
	switch (hParam0)
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

BOOL func_655(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1D952 Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_903();

	if (iParam2 == 39)
	{
		unk = { func_476(hParam0, true, false) };
		iParam2 = func_654(func_653(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_757(hParam0, 866047851) && func_904(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_658(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_905(func_670(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_906(iParam2);
	func_907(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_908(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_908(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_909(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_910(hParam0, iParam2, hParam1, func_24() != -1);

	if (bParam4)
		func_911(&(Global_1946054.f_1378), true, 3);
	else
		func_911(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_672(func_670(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_656(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1DB5F Hash - 0x5AF76643 ^0x5AF76643
{
	func_912(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_657(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x1DB78 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_665(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_913(num);
	return;
}

BOOL func_658(BOOL bParam0) // Position - 0x1DBAA Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_659() // Position - 0x1DBBB Hash - 0xB6203BF0 ^0x217DD714
{
	func_914(&(Global_1946054.f_2776));
	func_915(32768);
	func_672(1108822547, 8, 6);
	return;
}

int func_660(int iParam0) // Position - 0x1DBE2 Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_654(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_661(int iParam0) // Position - 0x1DC46 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_916(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_917(num);
	return;
}

void func_662(int iParam0, int iParam1, int iParam2) // Position - 0x1DC8A Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_917(num);
	return;
}

int func_663(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1DCAA Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_686(hParam0, 0))
		return 0;

	guid = { func_480(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_664(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

int func_664(BOOL bParam0) // Position - 0x1DCF2 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_24() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

void func_665(BOOL bParam0) // Position - 0x1DD33 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_666(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x1DD46 Hash - 0x767FA5CE ^0x6D58A5B0
{
	int i;
	Hash shopItemComponentCategory;
	int num;

	num = func_670(iParam1, 1);

	if (!bParam2 && num == joaat("MP_COMPONENT_TYPE_BEARD"))
		bParam3 = false;

	if (hParam4 != 0)
		if (num == 1108822547)
			shopItemComponentCategory = func_918(hParam4);
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

BOOL func_667(int iParam0, int iParam1) // Position - 0x1DE43 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_654(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

BOOL func_668(int iParam0, int iParam1) // Position - 0x1DE61 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_669(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1DE7A Hash - 0x1EA557EC ^0xC168425
{
	int num;

	num = 10;

	if (func_667(1108822547, 6))
	{
		if (bParam2)
		{
			func_666(pedParam0, num, func_24() != -1, false, 0);
			func_671(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(pedParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_672(1108822547, 1, 6);
	}

	Global_1946054.f_857 = Global_1946054.f_857 + 1;

	if (!bParam1)
		return;

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
	return;
}

int func_670(int iParam0, int iParam1) // Position - 0x1DF42 Hash - 0xE1D12727 ^0xA46110B3
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

void func_671(int iParam0, int iParam1, int iParam2) // Position - 0x1E191 Hash - 0x10354A04 ^0xEB1297F4
{
	Global_1946054.f_57[func_654(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_654(iParam0, 1) /*11*/].f_10 || iParam1;
	return;
}

void func_672(int iParam0, int iParam1, int iParam2) // Position - 0x1E1BE Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_654(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_654(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_654(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

BOOL func_673(Ped pedParam0, Hash hParam1) // Position - 0x1E1FD Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_674(Ped pedParam0, Hash hParam1) // Position - 0x1E22B Hash - 0xA54F3032 ^0xD2D815BE
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

BOOL func_675(Ped pedParam0, Hash hParam1) // Position - 0x1E27C Hash - 0xA54F3032 ^0xD2D815BE
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_673(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_676(Ped pedParam0) // Position - 0x1E2EE Hash - 0x446F1BDD ^0xCF754109
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

struct<4> func_677(BOOL bParam0) // Position - 0x1E30C Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_480(joaat("character"), func_919(), joaat("SLOTID_NONE"), bParam0);
}

int func_678(Hash hParam0) // Position - 0x1E328 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_686(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_679(BOOL bParam0) // Position - 0x1E353 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_664(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_480(923904168, func_677(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_480(923904168, func_677(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_480(923904168, func_677(bParam0), -740156546, false);
}

BOOL func_680(Hash hParam0, BOOL bParam1) // Position - 0x1E3E8 Hash - 0x62864AB ^0xBC339691
{
	if (func_682(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_328(24);
		else
			return true;

	return false;
}

struct<4> func_681(BOOL bParam0) // Position - 0x1E421 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_664(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_480(271701509, func_677(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_480(271701509, func_677(bParam0), 12999093, false);
}

Hash func_682(Hash hParam0) // Position - 0x1E485 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_686(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_683(Hash hParam0, Hash hParam1) // Position - 0x1E4B0 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_682(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_684(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1E50F Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_664(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_685(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x1E53F Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_664(false);
	*panParam1 = { func_480(hParam0, func_679(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_686(Hash hParam0, int iParam1) // Position - 0x1E584 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_687(Hash hParam0) // Position - 0x1E59E Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_688(Hash hParam0) // Position - 0x1E5B4 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

float func_689(var uParam0) // Position - 0x1E5C2 Hash - 0xE0241B1C ^0xFDC54395
{
	if (!(*uParam0 & 1 != 0))
		return func_250(uParam0);

	if (GRAPHICS::_GET_MODIFIED_VISIBILITY_DISTANCE() > 0.833f)
		return func_920(uParam0);

	return func_250(uParam0);
}

float func_690(float fParam0, float fParam1) // Position - 0x1E5FA Hash - 0xAB447DEC ^0xAB447DEC
{
	if (fParam0 > fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_691() // Position - 0x1E611 Hash - 0x83C7275F ^0x83C7275F
{
	int num;
	int num2;

	num = func_116(func_121());
	num2 = func_117(func_121());

	if (num >= 21)
		return true;
	else if (num < 5)
		return true;
	else if (num >= 20)
		if (num2 >= 20)
			return true;
	else if (num < 6)
		if (num2 <= 20)
			return true;

	return false;
}

void func_692(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x1E66F Hash - 0xC031C331 ^0xC031C331
{
	*uParam0 = { func_130(iParam2, iParam3) };
	*uParam1 = func_131(iParam2, iParam3);
	return;
}

Hash func_693(Hash hParam0) // Position - 0x1E68E Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_654(func_921(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_694(var uParam0) // Position - 0x1E6BD Hash - 0x313F44CF ^0x6235E18A
{
	if (func_695(81053684, uParam0))
		return true;

	if (func_695(-525676072, uParam0))
		return true;

	return false;
}

BOOL func_695(Hash hParam0, var uParam1) // Position - 0x1E6EA Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_654(func_921(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_682(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_696() // Position - 0x1E761 Hash - 0xF0AA04BD ^0x32A5DDEA
{
	if (func_24() != -1)
		return 0;

	return func_922(joaat("FAME"));
}

BOOL func_697() // Position - 0x1E77E Hash - 0x977C1DDD ^0xC3E256B5
{
	return Global_1347398.f_1 == 0;
}

void func_698(int iParam0) // Position - 0x1E78E Hash - 0x29A8F290 ^0x6E801A78
{
	Global_1347398.f_1 = iParam0;
	return;
}

BOOL func_699() // Position - 0x1E79E Hash - 0xED2BCA69 ^0xC0192F0A
{
	return Global_1347398.f_1 == 1000;
}

BOOL func_700() // Position - 0x1E7B0 Hash - 0xED2BCA69 ^0x7BC9E36A
{
	return Global_1347398.f_1 == 2000;
}

BOOL func_701() // Position - 0x1E7C2 Hash - 0xED2BCA69 ^0xC3B8992
{
	return Global_1347398.f_1 == 3000;
}

void func_702(var uParam0, int iParam1) // Position - 0x1E7D4 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_703(int iParam0, int iParam1) // Position - 0x1E7E9 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_923(iParam0);
	else
		func_924(iParam0, iParam1);

	func_925();
	return;
}

int func_704(int iParam0) // Position - 0x1E831 Hash - 0xBA803397 ^0x906286B5
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

int func_705(int iParam0) // Position - 0x1E879 Hash - 0xD83A1109 ^0x154A194E
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
	func_879(iParam0, Global_1898164.f_162);
	return 1;
}

void func_706(var uParam0) // Position - 0x1E8E8 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_707(int iParam0, BOOL bParam1) // Position - 0x1E8FE Hash - 0xB6F2B948 ^0x8948B8BB
{
	int i;

	if (bParam1)
		return func_926(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return true;
	}

	return false;
}

int func_708(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1E93D Hash - 0x1F89A3D9 ^0x9E235389
{
	int i;

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
		{
			func_720(&Global_40.f_4283.f_6[i /*5*/], bParam1, bParam2);
			return 1;
		}
	}

	return 0;
}

int func_709() // Position - 0x1E982 Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

void func_710(int iParam0, int iParam1) // Position - 0x1E992 Hash - 0xF5E9551B ^0xF5E9551B
{
	int i;

	if (iParam1 == 1)
	{
		func_927(iParam0, 0);
	}
	else
	{
		for (i = 0; i < 20; i = i + 1)
		{
			if (Global_40.f_11922[i] == 0)
			{
				Global_40.f_11922[i] = iParam0;
				return;
			}
		}
	
		func_711(1);
		Global_40.f_11922[0] = iParam0;
	}

	return;
}

void func_711(int iParam0) // Position - 0x1E9EA Hash - 0x23AE6B73 ^0x23AE6B73
{
	int i;
	int num;

	num = 0;

	if (iParam0 == 0 && Global_43891 == true)
		return;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_40.f_11922[i] == 0)
			break;
	
		func_927(Global_40.f_11922[i], 0);
		Global_40.f_11922[i] = 0;
		num = 1;
	}

	if (num == 1)
		func_928(true);

	return;
}

BOOL func_712(int iParam0) // Position - 0x1EA58 Hash - 0xBF2B4762 ^0xBF2B4762
{
	return Global_40.f_490.f_402[iParam0] & true != 0;
}

int func_713() // Position - 0x1EA71 Hash - 0xA320294C ^0x13AF3D16
{
	Hash hash;
	Hash hash2;

	hash = func_38(Global_1347702[9 /*49*/].f_15);
	hash2 = func_38(Global_1835011[69 /*74*/].f_1);

	if (func_122(hash, hash2, true))
		return 0;

	return 1;
}

BOOL func_714(int iParam0) // Position - 0x1EAAA Hash - 0xEE16DF98 ^0x63293906
{
	if (!func_877(iParam0))
		return false;

	return func_100(Global_1835011[iParam0 /*74*/].f_1, true);
}

int func_715(int iParam0) // Position - 0x1EACF Hash - 0xDEBCA2F ^0xDEBCA2F
{
	if (func_27(iParam0) == 1)
		return func_106(iParam0);

	return -1;
}

int func_716(int iParam0) // Position - 0x1EAEB Hash - 0xF16A350D ^0xF7851618
{
	var unk;
	int num;
	var unk6;

	unk = Global_1357549.f_576;
	unk.f_1 = 0;
	unk.f_3 = iParam0;
	num = 0;

	if (func_929(unk, 70005598, &unk6, false))
		num = func_930(unk6);

	return num;
}

int func_717(int iParam0) // Position - 0x1EB2A Hash - 0x5374F99F ^0x22946EC9
{
	var unk;
	int num;

	unk = Global_1357549.f_576;
	unk.f_1 = 0;
	unk.f_3 = iParam0;
	num = 1;

	if (func_931(unk, -1875502208, &num, false))
	{
	}

	return num;
}

void func_718(int iParam0, BOOL bParam1) // Position - 0x1EB61 Hash - 0x1E270DC5 ^0x18D204F7
{
	int num;
	int offset;

	func_932(iParam0, &num, &offset);

	if (bParam1)
		MISC::SET_BIT(&Global_1357549.f_1848[num], offset);
	else
		MISC::CLEAR_BIT(&Global_1357549.f_1848[num], offset);

	return;
}

BOOL func_719(int iParam0) // Position - 0x1EB9E Hash - 0x27CE23B1 ^0x27CE23B1
{
	switch (iParam0)
	{
		case 0:
			return false;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		case 3:
			return true;
	
		case 4:
			return true;
	
		case 5:
			return false;
	
		case 7:
			return false;
	
		case 8:
			return true;
	
		case 9:
			return true;
	
		case 10:
			return false;
	
		case 11:
			return true;
	
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
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return false;
	
		default:
		
	}

	return false;
}

void func_720(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1ECAB Hash - 0x24EF2016 ^0x7F590678
{
	if (*iParam0 == 176656832)
		return;

	func_718(*iParam0, false);

	if (bParam1)
		if (bParam2)
			func_721(2, *iParam0);
		else
			func_722(2, *iParam0);

	func_933(iParam0);
	return;
}

void func_721(int iParam0, int iParam1) // Position - 0x1ECEC Hash - 0xBEB4F573 ^0xDF718DD5
{
	if (Global_1357549.f_1483 >= 25)
		Global_1357549.f_1483 = 0;

	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/] = iParam0;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_1 = iParam1;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_2 = 0;
	Global_1357549.f_1483 = Global_1357549.f_1483 + 1;
	return;
}

void func_722(int iParam0, int iParam1) // Position - 0x1ED51 Hash - 0xB8F35FB ^0xB8F35FB
{
	if (Global_1357549.f_1406 >= 50)
		return;

	if (Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] != 0)
		return;

	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] = iParam0;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_1 = iParam1;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_2 = 0;
	Global_1357549.f_1403 = Global_1357549.f_1403 + 1;
	Global_1357549.f_1406 = Global_1357549.f_1406 + 1;
	return;
}

void func_723(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1EDD8 Hash - 0xD61623D0 ^0x48AE56A
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_934(iParam0, iParam1, bParam2);
	return;
}

BOOL func_724(int iParam0) // Position - 0x1EDF4 Hash - 0xA05361F6 ^0xF8A0FD3E
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

int func_725(int iParam0) // Position - 0x1EF0A Hash - 0xC25EDEC0 ^0x47BF4274
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

void func_726(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, Entity eParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1EFF1 Hash - 0x9A51185A ^0x97F2DA3C
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

	num = func_935();

	if (iParam3 == joaat("honor_event_ambient_kill") || iParam3 == joaat("honor_event_ambient_ko"))
	{
		if (bParam6)
			iParam0 = func_936(iParam0);
	
		if (ENTITY::DOES_ENTITY_EXIST(eParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_override"))
			{
				iParam0 = DECORATOR::DECOR_GET_INT(eParam5, "honor_override") * -1;
				DECORATOR::DECOR_REMOVE(eParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_bank"))
			{
				iParam0 = iParam0 - DECORATOR::DECOR_GET_INT(eParam5, "honor_bank");
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", 0);
			}
		}
	}

	num3 = 240;
	num4 = -240;
	num5 = 1f;

	if (func_328(6))
	{
		num3 = 320;
		num4 = -320;
	
		if (!func_31())
			if (iParam2 >= 0 && iParam2 <= 4 || iParam2 >= 10 && iParam2 <= 14 && iParam3 != joaat("honor_event_animal_bleedout"))
				num5 = 1.5f;
	}

	if (iParam0 > 0)
		num6 = BUILTIN::CEIL((float)iParam0 * num5);
	else
		num6 = BUILTIN::FLOOR((float)iParam0 * num5);

	Global_40.f_11095.f_35 = Global_40.f_11095.f_35 + num6;
	Global_40.f_11095.f_35 = func_511(Global_40.f_11095.f_35, num4, num3);
	num2 = func_935();

	if (num2 != num && num2 != 0 || iParam3 == joaat("honor_event_cheat") || bParam7)
	{
		num7 = func_937(num2);
		func_939(func_938(), false, 4000);
		func_940(Global_40.f_11095.f_35);
	
		if (num7 > Global_40.f_11095.f_36 && num2 > 0 || num7 > Global_40.f_11095.f_37 && num2 < 0)
			if (num2 < 0)
				Global_40.f_11095.f_37 = num7;
			else
				Global_40.f_11095.f_36 = num7;
	
		func_941(false);
	}

	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_216(func_394(joaat("honor_positive_total")), 1);
			Global_1347477.f_204 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(eParam5))
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", iParam0);
		
			if (!bParam1)
			{
				if (iParam0 > func_725(14))
				{
					str = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					str = "Honor_Increase_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
				else
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
			}
		}
		else
		{
			func_216(func_394(joaat("honor_negative_total")), 1);
			Global_1347477.f_204 = 0;
		
			if (!bParam1)
			{
				if (iParam0 < func_725(4))
				{
					str = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					str = "Honor_Decrease_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
				else
					func_843(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
			}
		}
	}

	statId = { func_394(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&statId, Global_40.f_11095.f_35, true);

	if (!bParam1)
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);

	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
		func_565(10, 1);

	return;
}

void func_727(int iParam0, int iParam1, int iParam2, int iParam3, Entity eParam4, BOOL bParam5) // Position - 0x1F396 Hash - 0x686957A ^0x8F82E8D6
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = eParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
	return;
}

int func_728(BOOL bParam0) // Position - 0x1F3F5 Hash - 0xFA7B3D3 ^0x826FC8D8
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 15) & 16383;
}

BOOL func_729(int iParam0) // Position - 0x1F409 Hash - 0x18F20B33 ^0x18F20B33
{
	if (!func_37(iParam0))
		return false;

	switch (func_27(iParam0))
	{
		case 1:
			switch (func_106(iParam0))
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
			switch (func_106(iParam0))
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

void func_730(int iParam0) // Position - 0x1F4E2 Hash - 0xF69051DC ^0xF3C89D36
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_664(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_682(item) == iParam0)
			INVENTORY::_INVENTORY_ENABLE_ITEM(inventoryId, item);
	}

	func_944(func_943(iParam0), 6);
	return;
}

void func_731(int iParam0) // Position - 0x1F536 Hash - 0xF11E3100 ^0x54576133
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_664(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_682(item) == iParam0)
			INVENTORY::_INVENTORY_DISABLE_ITEM(inventoryId, item, 0);
	}

	func_945(func_943(iParam0), 6);
	return;
}

int func_732(int iParam0) // Position - 0x1F58B Hash - 0xEE599357 ^0xEE599357
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

int func_733(int iParam0) // Position - 0x1F792 Hash - 0xBC835308 ^0xBC835308
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

void func_734(int iParam0, var uParam1) // Position - 0x1F89A Hash - 0x86BC6E12 ^0x31271D44
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &num, 2, 2);
	return;
}

int func_735() // Position - 0x1F8B5 Hash - 0xD5B66211 ^0x9B76C225
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

int func_736(eStackSize essParam0) // Position - 0x1F91A Hash - 0x6761E6A0 ^0x6761E6A0
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

void func_737(int iParam0, var uParam1, var uParam2) // Position - 0x1FD2F Hash - 0xD64E984D ^0x9D3A2521
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	num.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &num, 3, 3);
	return;
}

int func_738(int iParam0) // Position - 0x1FD50 Hash - 0x871E8B4C ^0x871E8B4C
{
	int num;
	int i;

	num = 19;

	for (i = 0; i <= 19; i = i + 1)
	{
		if (Global_1898441[i /*38*/] == iParam0)
		{
			num = i;
			i = 20;
		}
		else if (Global_1898441[i /*38*/] == 0)
		{
			num = i;
			i = 20;
		}
	}

	return num;
}

BOOL func_739(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x1FD9D Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_24() == -1)
	{
		if (func_946(hParam0) && func_947(hParam0))
		{
			func_948(hParam0, iParam1, true, &bParam2, iParam3);
			return false;
		}
	}
	else if (hParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (hParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}

	return true;
}

BOOL func_740(Hash hParam0, var uParam1, int iParam2) // Position - 0x1FDF4 Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_949(hParam0, uParam1);
	unk = { func_476(hParam0, false, true) };
	num = func_950(hParam0, &unk, false, false);
	num2 = func_951(hParam0, false);

	if (num > 1 && !func_523() && num2 + iParam2 >= num)
		if (func_757(hParam0, -2051813666))
			func_532(583, true);
		else
			func_532(582, false);

	if (func_952(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_741(Hash hParam0, BOOL bParam1) // Position - 0x1FE90 Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_810(hParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = hParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}

	return;
}

int func_742(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1FF3C Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_686(hParam0, 0))
		return 0;

	num = func_678(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_953(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_954(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_664(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_743(Hash hParam0) // Position - 0x1FFBE Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_24() != -1)
		return false;

	return func_744(hParam0) != 0;
}

Hash func_744(Hash hParam0) // Position - 0x1FFDA Hash - 0x9A46CFC8 ^0xE4716D37
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_955(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_956(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_745(Hash hParam0) // Position - 0x20019 Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_746(Hash hParam0) // Position - 0x20027 Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_955(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_745(collectableItemHash))
			if (func_550(func_956(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_747(Hash hParam0) // Position - 0x20074 Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_957(48);
	func_392(false, -1);
	return;
}

BOOL func_748(int iParam0) // Position - 0x2008F Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_24() != -1)
		return false;

	return func_100(Global_1347702[iParam0 /*49*/].f_15, true);
}

int func_749(Hash hParam0) // Position - 0x200B2 Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_750(Hash hParam0) // Position - 0x200C5 Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_751(int iParam0) // Position - 0x200D8 Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_24() != -1)
		return false;

	return func_100(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_752(int iParam0) // Position - 0x200FB Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_24() != -1)
		return false;

	if (!func_107(iParam0))
		return false;

	return func_260(Global_1347702[iParam0 /*49*/].f_15);
}

int func_753() // Position - 0x2012B Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_550(func_958(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_754(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x20160 Hash - 0x2D6CF941 ^0xFD2ABE7A
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	char* str5;
	char* str6;
	var unk;
	int num;
	int num2;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	Hash hash2;

	switch (iParam0)
	{
		case 38:
			str = "MISSION_RCCIG";
			str2 = "SP_MISSIONS_13";
		
			if (func_331() && func_752(38) || func_748(38))
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				str6 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				hash = joaat("col_cc_intro");
			}
			else
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				str6 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				hash = joaat("col_cc_intro_pre");
			}
		
			str5 = "COL_CC_TITLE";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = 12;
			hash2 = joaat("CIGARETTE_CARDS");
			break;
	
		case 39:
			if (func_331() && func_752(39) || func_748(39))
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_02";
				str6 = "COL_DB_INTRO";
				num = 3;
				hashKey = joaat("blip_rc_deborah");
				hash = joaat("col_db_intro");
			}
			else
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_01";
				str6 = "COL_DB_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				hash = joaat("col_db_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_DB_TITLE";
			unk = { 122.7758f, -185.4978f, 116.4383f };
			num2 = 30;
			hash2 = joaat("dino_bones");
			break;
	
		case 41:
			if (func_331() && func_752(41) || func_748(41))
				str = "MISSION_RCFSH2";
			else
				str = "MISSION_RCFSH1";
		
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_RARE_FISH_01";
			str5 = "COL_LF_TITLE";
			str6 = "COL_LF_INTRO";
			unk = { 337.3075f, -684.5404f, 41.8362f };
			num = 13;
			hash2 = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
			if (hParam3 == joaat("exotic_stage_01"))
			{
				str = "MISSION_RCEXO1";
				str4 = "RCEXO1_DESC";
				num2 = 30;
			}
			else if (hParam3 == joaat("exotic_stage_02"))
			{
				str = "MISSION_RCEXO2";
				str4 = "RCEXO2_DESC";
				num2 = 37;
			}
			else if (hParam3 == joaat("exotic_stage_03"))
			{
				str = "MISSION_RCEXO3";
				str4 = "RCEXO3_DESC";
				num2 = 40;
			}
			else if (hParam3 == joaat("exotic_stage_04"))
			{
				str = "MISSION_RCEXO4";
				str4 = "RCEXO4_DESC";
				num2 = 50;
			}
			else if (hParam3 == joaat("exotic_stage_05"))
			{
				str = "MISSION_RCEXO5";
				str4 = "RCEXO5_DESC";
				num2 = 25;
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_EX_TITLE";
			str6 = "COL_EX_INTRO";
			unk = { 2585.6682f, -1009.6161f, 44.979717f };
			num = func_959(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_331() && func_752(49) || func_748(49))
			{
				str = "MISSION_RCRKF2";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				str6 = "COL_RC_INTRO";
				num = 3;
				hashKey = joaat("blip_scm_frances");
				hash = joaat("col_rc_intro");
			}
			else
			{
				str = "MISSION_RCRKF1";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				str6 = "COL_RC_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				hash = joaat("col_rc_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_RC_TITLE";
			unk = { -2178.646f, -245.6886f, 191.1569f };
			num2 = 10;
			hash2 = joaat("rock_carvings");
			break;
	
		case 51:
			str = "MISSION_RCTAX1";
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			str5 = "COL_TX_TITLE";
			str6 = "COL_TX_INTRO";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = func_959(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_960(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_961(iParam0, hash, hash2);
	func_962(iParam0, hash, unk, str5, str4);
	func_963(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_964(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_965(iParam0, hash, hash2, iParam6);
	func_966(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_755(int iParam0) // Position - 0x2059D Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

void func_756(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0x205B4 Hash - 0xD806FABF ^0x38EE45F3
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	int num;

	switch (iParam0)
	{
		case 38:
			str = "COL_CC_TITLE";
			str4 = "COL_CC_CARD_FOUND";
			num = joaat("CIGARETTE_CARDS");
		
			if (func_331() && func_752(38) || func_748(38))
			{
				str2 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				str2 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
		
			hash = joaat("col_cc_intro");
			break;
	
		case 39:
			str = "COL_DB_TITLE";
			str4 = "COL_DB_FOUND";
			num = joaat("dino_bones");
		
			if (func_331() && func_752(39) || func_748(39))
			{
				str2 = "COL_DB_INTRO";
				hashKey = joaat("blip_rc_deborah");
			}
			else
			{
				str2 = "COL_DB_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
		
			hash = joaat("col_db_intro");
			break;
	
		case 41:
			str = "COL_LF_TITLE";
			str4 = "COL_LF_CAUGHT";
			str2 = "COL_LF_INTRO";
			num = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			str = "COL_EX_TITLE";
			str4 = "COL_EX_ITEMS_COLLECTED";
			str2 = "COL_EX_INTRO";
			num = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			str = "COL_RC_TITLE";
			str4 = "COL_RC_FOUND";
			num = joaat("rock_carvings");
		
			if (func_331() && func_752(49) || func_748(49))
			{
				str2 = "COL_RC_INTRO";
				hashKey = joaat("blip_scm_frances");
			}
			else
			{
				str2 = "COL_RC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
		
			hash = joaat("col_rc_intro");
			break;
	
		case 51:
			str = "COL_TX_TITLE";
			str4 = "COL_TX_CARCASS_COLLECTED";
			str2 = "COL_TX_INTRO";
			num = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	if (iParam5 == 2)
	{
		str = "MISSION_COMPLETE";
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
		str2 = "COL_ALL_LOG_UPDATED";
	}

	str3 = "COL_CTX_PLAYER_LOG";

	if (num == joaat("CIGARETTE_CARDS"))
	{
		if (func_331() && func_752(38) || func_748(38))
			hash = joaat("col_cc_intro");
		else
			hash = joaat("col_cc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 0)
		{
			hashKey2 = hParam1;
			hashKey = hParam2;
		}
	
		if (iParam5 == 2)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_967(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_967(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_318(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_750(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_967(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_967(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_331() && func_752(39) || func_748(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_967(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_967(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_331() && func_752(49) || func_748(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_967(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_967(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_967(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_967(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

BOOL func_757(Hash hParam0, Hash hParam1) // Position - 0x20B62 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_758(Hash hParam0, int iParam1) // Position - 0x20B93 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_686(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

void func_759(int iParam0) // Position - 0x20BB2 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_441(iParam0))
		return;

	func_969(iParam0);
	func_970(iParam0);
	return;
}

Hash func_760(Hash hParam0, BOOL bParam1) // Position - 0x20BD3 Hash - 0x27CC99BE ^0x9BD61A93
{
	Hash hash;

	switch (hParam0)
	{
		case joaat("ammo_hatchet_hewing"):
			hash = joaat("weapon_melee_hatchet_hewing");
			break;
	
		case joaat("ammo_molotov_volatile"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_throwing_knives"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_hatchet_ancient"):
			hash = joaat("weapon_melee_ancient_hatchet");
			break;
	
		case joaat("ammo_tomahawk_homing"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_cleaver"):
			hash = joaat("weapon_melee_cleaver");
			break;
	
		case joaat("ammo_hatchet_hunter_rusted"):
			hash = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
	
		case joaat("ammo_hatchet_double_bit_rusted"):
			hash = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
	
		case joaat("ammo_tomahawk_improved"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_viking"):
			hash = joaat("weapon_melee_hatchet_viking");
			break;
	
		case joaat("ammo_tomahawk_ancient"):
			hash = joaat("weapon_thrown_tomahawk_ancient");
			break;
	
		case joaat("ammo_hatchet"):
			hash = joaat("weapon_melee_hatchet");
			break;
	
		case joaat("ammo_hatchet_hunter"):
			hash = joaat("weapon_melee_hatchet_hunter");
			break;
	
		case joaat("ammo_dynamite"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_dynamite_volatile"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_throwing_knives_improved"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_tomahawk"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("AMMO_MOLOTOV"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_hatchet_double_bit"):
			hash = joaat("weapon_melee_hatchet_double_bit");
			break;
	
		case joaat("ammo_throwing_knives_poison"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		default:
			break;
	}

	if (func_686(hash, 0))
		if (bParam1)
			if (func_971(hash) || func_364(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_761(Hash hParam0, BOOL bParam1) // Position - 0x20D59 Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_686(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_762(Hash hParam0) // Position - 0x20D85 Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_363(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_763(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x20DBF Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_761(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_24() == -1)
		{
			func_762(weaponHash);
		
			if (hParam1 == 1248274121)
				func_972(weaponHash);
		}
	
		if (!func_952(hParam0, &unk, 1, false, false))
		{
			func_948(hParam0, 1, false, uParam2, hParam1);
			num = func_973(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_365(weaponHash, num, bParam3, bParam4, false, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_365(weaponHash, 0, bParam3, bParam4, false, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_365(weaponHash, 1, bParam3, bParam4, false, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_31())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_367(weaponHash))
				{
					func_365(weaponHash, 1, bParam3, bParam4, false, false, hParam1, false);
				}
				else
				{
					func_365(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, false, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_974(Global_35, 2, false, true);
			
				if (func_363(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_328(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_363(weaponHash2) && func_328(24))
					if (!func_365(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_365(weaponHash, num, bParam3, bParam4, false, flag, hParam1, false))
					return false;
			}
			else if (!func_365(weaponHash, num, bParam3, bParam4, false, false, hParam1, false))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}

	if (WEAPON::_0x9F0E1892C7F228A8(true) != 0 && hParam1 == 1248274121)
		func_532(480, true);

	return true;
}

BOOL func_764(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x20FCB Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_688(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_363(weaponTypeFromAmmoType))
		WEAPON::GET_MAX_AMMO(Global_35, &ammo, weaponTypeFromAmmoType);

	num2 = ammo - pedAmmoByType;

	if (WEAPON::IS_WEAPON_BOW(weaponTypeFromAmmoType))
		weaponClipSize = 5;
	else
		weaponClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(weaponTypeFromAmmoType);

	if (*uParam1 > 0)
		num3 = *uParam1;
	else if (*uParam1 < 0)
		num3 = weaponClipSize * MISC::ABSI(*uParam1);

	if (func_550(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
		num3 = BUILTIN::CEIL((float)num3 * 1.1f);

	if (num2 >= num3)
	{
		num = num3;
	}
	else if (num2 < num3 && num2 >= 1)
	{
		num = num2;
	}
	else
	{
		func_797(func_975(hParam0), func_796(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_24() == -1)
			if (func_100(Global_1835011[14 /*74*/].f_1, true))
				func_532(416, false);

	if (num == 0)
		return false;

	if (func_482(false))
	{
		if (func_483(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_802(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_765(Hash hParam0) // Position - 0x21114 Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_32() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_976(Global_35, hParam0, &unk))
			func_468(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_787();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_787();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_785();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_783();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_787();
			break;
	}

	return;
}

void func_766(Hash hParam0) // Position - 0x2121B Hash - 0xA92CE7CF ^0x8CEA2EC6
{
	switch (hParam0)
	{
		case joaat("provision_trinket_shark_tooth"):
			Global_40.f_11095.f_68 = Global_40.f_11095.f_68 + 0.1f;
			break;
	
		case joaat("provision_trinket_cat_eye"):
			Global_40.f_11095.f_70 = Global_40.f_11095.f_70 + 0.2f;
			break;
	
		case joaat("provision_trinket_turtle_shell"):
			Global_40.f_11095.f_69 = Global_40.f_11095.f_69 + 0.1f;
			func_978();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_785();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_977();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_783();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_786();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_784();
			break;
	
		case joaat("provision_trinket_lion_paw"):
			Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
			break;
	
		case joaat("provision_trinket_cougar_fang"):
			Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
			break;
	
		case joaat("provision_trinket_moose_antler"):
			Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
			break;
	
		case joaat("provision_trinket_owl_feather"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.15f;
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.15f;
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.15f;
			func_787();
			break;
	}

	return;
}

struct<2> func_767(int iParam0) // Position - 0x21406 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_768(Hash hParam0) // Position - 0x21418 Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_757(hParam0, -2017733358);

	if (func_979() < 3)
		if (flag)
			if (func_981(func_980(hParam0), hParam0))
				func_797(79, func_796(func_980(hParam0)), true);
			else
				func_797(78, func_796(func_980(hParam0)), true);
		else
			func_797(80, func_796(func_982(hParam0)), true);

	return;
}

BOOL func_769() // Position - 0x21485 Hash - 0x452521BB ^0x7FA3002C
{
	if (func_983(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_983(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_983(joaat("document_arthur_high_bounty_1"), 400) || func_983(joaat("document_arthur_high_bounty_2"), 400) || func_983(joaat("document_arthur_has_poster_1"), 400) || func_983(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_770(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x214FB Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_861(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_984(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_985(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_771(Hash hParam0) // Position - 0x21542 Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_754(43, 0, 0, joaat("exotic_stage_01"), func_990(1), false, -1, false);
			func_991(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_754(39, 0, 0, 0, 0, false, 1, false);
			func_756(39, 0, 0, 0, 0, -1, 0);
			func_987(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_754(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_756(51, 0, 0, 0, 0, -1, 0);
			func_986(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_754(43, 0, 0, joaat("exotic_stage_02"), func_990(2), false, -1, false);
			func_991(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_754(43, 0, 0, joaat("exotic_stage_03"), func_990(4), false, -1, false);
			func_991(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_754(49, 0, 0, 0, 0, false, 1, false);
			func_756(49, 0, 0, 0, 0, -1, 0);
			func_989(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_754(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_756(51, 0, 0, 0, 0, -1, 0);
			func_986(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_754(41, 0, 0, 0, 0, false, 1, false);
			func_756(41, 0, 0, 0, 0, -1, 0);
			func_988(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_754(43, 0, 0, joaat("exotic_stage_05"), func_990(16), false, -1, false);
			func_991(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_754(43, 0, 0, joaat("exotic_stage_04"), func_990(8), false, -1, false);
			func_991(8);
			break;
	}

	return;
}

void func_772(Hash hParam0) // Position - 0x216D8 Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_992() == 1)
	{
		if (func_748(39))
		{
			func_532(342, false);
		}
		else
		{
			func_532(343, false);
			func_987(1);
		}
	}

	if (func_992() >= 30)
		func_532(344, false);

	func_754(39, 0, 0, 0, 0, false, -1, false);
	func_756(39, 0, 0, func_992(), 30, 1, 0);
	return;
}

void func_773(Hash hParam0) // Position - 0x21737 Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_993() == 1)
	{
		if (func_748(49))
		{
			func_532(409, false);
		}
		else
		{
			func_532(410, false);
			func_989(1);
		}
	}

	if (func_993() >= 10)
		func_532(411, false);

	func_754(49, 0, 0, 0, 0, false, -1, false);
	func_756(49, 0, 0, func_993(), 10, 1, 0);
	return;
}

void func_774(Hash hParam0) // Position - 0x21796 Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_532(438, false);
			func_994(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_754(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_756(51, 0, 0, num, func_959(joaat("taxidermy_order_05"), 20), 1, 0);
			func_986(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_994(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_754(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_756(51, 0, 0, num, func_959(joaat("taxidermy_order_04"), 20), 1, 0);
			func_986(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_994(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_754(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_756(51, 0, 0, num, func_959(joaat("taxidermy_order_03"), 20), 1, 0);
			func_986(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_532(437, false);
			func_532(440, false);
			func_994(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_754(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_756(51, 0, 0, num, func_959(joaat("taxidermy_order_01"), 20), 1, 0);
			func_986(1);
			func_102(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_994(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_754(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_756(51, 0, 0, num, func_959(joaat("taxidermy_order_02"), 20), 1, 0);
			func_986(8);
			break;
	
		default:
			func_532(439, false);
			break;
	}

	return;
}

void func_775() // Position - 0x21984 Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_776(Hash hParam0, int iParam1) // Position - 0x219A8 Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_24() == -1)
	{
		if (!func_748(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_532(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_532(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_532(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_532(400, false);
		}
		else if (func_757(hParam0, 412399755))
		{
			func_995(joaat("exotic_stage_01"));
		
			if (func_996() == 0)
			{
				func_392(false, 10);
				num2 = func_997(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_998(hParam0) < func_999(hParam0))
					{
						func_754(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_756(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_748(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_532(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_532(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_532(401, false);
		}
		else if (func_757(hParam0, 709057512))
		{
			func_995(joaat("exotic_stage_02"));
		
			if (func_996() == 1)
			{
				func_392(false, 10);
				num2 = func_997(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_998(hParam0) < func_999(hParam0))
					{
						func_754(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_756(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_748(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_532(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_532(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_532(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_532(398, false);
		}
		else if (func_757(hParam0, -1478961327))
		{
			func_995(joaat("exotic_stage_03"));
		
			if (func_996() == 2)
			{
				func_392(false, 10);
				num2 = func_997(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_1000(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_1001(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_957(48);
					}
				
					if (func_998(hParam0) < func_999(hParam0))
					{
						func_754(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_756(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_998(hParam0) < func_999(hParam0))
					{
						func_754(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_756(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_748(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_532(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_532(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_532(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_532(406, false);
		}
		else if (func_757(hParam0, -1238404098))
		{
			func_995(joaat("exotic_stage_04"));
		
			if (func_996() == 3)
			{
				func_392(false, 10);
				num2 = func_997(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_998(hParam0) < func_999(hParam0))
					{
						func_754(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_756(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_748(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_532(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_532(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_532(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_532(403, false);
		}
		else if (func_757(hParam0, 1160548794))
		{
			func_995(joaat("exotic_stage_05"));
		
			if (func_996() == 4)
			{
				func_392(false, 10);
				num2 = func_997(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_998(hParam0) < func_999(hParam0))
					{
						func_754(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_756(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_777(Hash hParam0) // Position - 0x21EC1 Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_1000(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_1001(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_957(48);
		}
	}

	return;
}

void func_778(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x21F01 Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_550(func_1002(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_1003(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_1004(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_779(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0x21F61 Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_24() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_770(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_770(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_770(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_770(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_770(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_770(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_770(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_770(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_770(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_1005())
				func_770(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_770(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_770(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_770(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_770(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_770(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_770(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_770(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_770(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_770(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_770(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_770(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_770(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_770(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_770(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_770(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_770(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_770(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

void func_780(Hash hParam0) // Position - 0x22339 Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_748(41))
		func_532(363, false);
	else
		func_532(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_1006(joaat("legendary_fish_02"));
			func_1007(joaat("legendary_fishing_spot_02"));
			func_1008(joaat("legendary_fishing_spot_02"));
			func_392(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_1006(joaat("legendary_fish_06"));
			func_1007(joaat("legendary_fishing_spot_06"));
			func_1008(joaat("legendary_fishing_spot_06"));
			func_392(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_1006(joaat("legendary_fish_13"));
			func_1007(joaat("legendary_fishing_spot_13"));
			func_1008(joaat("legendary_fishing_spot_13"));
			func_392(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_1006(joaat("legendary_fish_03"));
			func_1007(joaat("legendary_fishing_spot_03"));
			func_1008(joaat("legendary_fishing_spot_03"));
			func_392(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_1006(joaat("legendary_fish_08"));
			func_1007(joaat("legendary_fishing_spot_08"));
			func_1008(joaat("legendary_fishing_spot_08"));
			func_392(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_1006(joaat("legendary_fish_12"));
			func_1007(joaat("legendary_fishing_spot_12"));
			func_1008(joaat("legendary_fishing_spot_12"));
			func_392(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_1006(joaat("legendary_fish_05"));
			func_1007(joaat("legendary_fishing_spot_05"));
			func_1008(joaat("legendary_fishing_spot_05"));
			func_392(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_1006(joaat("legendary_fish_04"));
			func_1007(joaat("legendary_fishing_spot_04"));
			func_1008(joaat("legendary_fishing_spot_04"));
			func_392(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_1006(joaat("legendary_fish_14"));
			func_1007(joaat("legendary_fishing_spot_14"));
			func_1008(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_1006(joaat("legendary_fish_09"));
			func_1007(joaat("legendary_fishing_spot_09"));
			func_1008(joaat("legendary_fishing_spot_09"));
			func_392(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_1006(joaat("legendary_fish_07"));
			func_1007(joaat("legendary_fishing_spot_07"));
			func_1008(joaat("legendary_fishing_spot_07"));
			func_392(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_1006(joaat("legendary_fish_01"));
			func_1007(joaat("legendary_fishing_spot_01"));
			func_1008(joaat("legendary_fishing_spot_01"));
			func_392(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_1006(joaat("legendary_fish_11"));
			func_1007(joaat("legendary_fishing_spot_11"));
			func_1008(joaat("legendary_fishing_spot_11"));
			func_392(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_1006(joaat("legendary_fish_10"));
			func_1007(joaat("legendary_fishing_spot_10"));
			func_1008(joaat("legendary_fishing_spot_10"));
			func_392(false, 10);
			break;
	}

	return;
}

void func_781(Hash hParam0, var uParam1) // Position - 0x225B8 Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_1009(hParam0, uParam1, &unk);
	return;
}

BOOL func_782(var uParam0, BOOL bParam1) // Position - 0x225CA Hash - 0x2DC8D50 ^0x79739B7E
{
	int num;
	int num2;
	int i;
	var unk;
	BOOL flag;
	Hash hash;
	Hash hash2;

	unk.f_9 = joaat("SLOTID_NONE");
	flag = false;
	*uParam0 = 0;
	hash = func_974(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_974(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_1010("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_1011(&unk, i, num, num2))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(unk.f_4))
				{
					if (!bParam1)
					{
						if (unk.f_4 == hash || unk.f_4 == hash2)
						{
						}
						else if (!flag)
						{
							*uParam0 = unk.f_4;
							flag = true;
						}
					}
				
					if (!flag)
					{
						*uParam0 = unk.f_4;
						flag = true;
					}
				}
			}
		}
	
		func_1012(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_783() // Position - 0x22693 Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_784() // Position - 0x226AD Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_785() // Position - 0x226E2 Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_786() // Position - 0x226FE Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_787() // Position - 0x22718 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_1013();
	func_1014();
	func_1015();
	return;
}

void func_788(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2272F Hash - 0x968DA278 ^0x4C2DDE40
{
	Hash hash;
	char* str;
	char* str2;
	char* str3;
	Vector3 vector;

	switch (iParam0)
	{
		case -220219788:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_poisonous_trail");
			break;
	
		case 6410548:
			str3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_landmarks_of_riches");
			break;
	
		case 218622660:
			str3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_tresor_des_morts");
			break;
	
		case 390004462:
			str3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_elemental_trail");
			break;
	
		case 499813453:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_JACK_HALL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_jack_hall");
			break;
	
		case 666607663:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_HIGH_STAKES";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_high_stakes");
			break;
	}

	switch (iParam1)
	{
		case joaat("treasure_hunt_loot_12"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
	
		case joaat("treasure_hunt_loot_13"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
	
		case joaat("treasure_hunt_loot_02"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
	
		case joaat("treasure_hunt_loot_18"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
	
		case joaat("treasure_hunt_loot_03"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
	
		case joaat("treasure_hunt_loot_19"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
	
		case joaat("treasure_hunt_loot_04"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
	
		case joaat("treasure_hunt_loot_16"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
	
		case joaat("treasure_hunt_loot_17"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
	
		case joaat("treasure_hunt_loot_05"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
	
		case joaat("treasure_hunt_loot_10"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
	
		case joaat("treasure_hunt_loot_07"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
	
		case joaat("treasure_hunt_loot_21"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
	
		case joaat("treasure_hunt_loot_01"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
	
		case joaat("treasure_hunt_loot_11"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
	
		case joaat("treasure_hunt_loot_06"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
	
		case joaat("treasure_hunt_loot_24"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	
		case joaat("treasure_hunt_loot_20"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
	
		case joaat("treasure_hunt_loot_09"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
	
		case joaat("treasure_hunt_loot_23"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
	
		case joaat("treasure_hunt_loot_22"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
	
		case joaat("treasure_hunt_loot_08"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
	
		case joaat("treasure_hunt_loot_14"):
			str = "COL_TH_OBJ_RDL";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
	
		case joaat("treasure_hunt_loot_15"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
	}

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_REMOVE_ENTRY(3, hash);

	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hash, vector, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(str2), 0);

	if (bParam2)
	{
		switch (iParam0)
		{
			case -220219788:
				str = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
		
			case 6410548:
				str = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		
			case 218622660:
				str = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
		
			case 390004462:
				str = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
		
			case 499813453:
				str = "COL_TH_JACK_HALL_COMPLETE";
				break;
		
			case 666607663:
				str = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
		}
	}

	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hash, MISC::GET_HASH_KEY(str), str, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hash, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hash, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hash, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hash, MISC::VAR_STRING(2, str3));
	return;
}

void func_789(int iParam0, BOOL bParam1) // Position - 0x22B07 Hash - 0x922C415B ^0xA0EC21C9
{
	Hash hash;
	char* str;
	char* str2;
	char* str3;

	switch (iParam0)
	{
		case -220219788:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_POISONOUS_TRAIL";
			hash = joaat("col_th_sub_poisonous_trail");
			break;
	
		case 6410548:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			hash = joaat("col_th_sub_landmarks_of_riches");
			break;
	
		case 218622660:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			hash = joaat("col_th_sub_tresor_des_morts");
			break;
	
		case 390004462:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			hash = joaat("col_th_sub_elemental_trail");
			break;
	
		case 499813453:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_JACK_HALL";
			hash = joaat("col_th_sub_jack_hall");
			break;
	
		case 666607663:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_HIGH_STAKES";
			hash = joaat("col_th_sub_high_stakes");
			break;
	}

	str3 = "COL_CTX_PLAYER_LOG";

	if (bParam1)
		str = "MISSION_COMPLETE";

	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	func_967(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_790(int iParam0) // Position - 0x22C1E Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_791(int iParam0) // Position - 0x22C39 Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_792(int iParam0) // Position - 0x22C54 Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_793(int iParam0) // Position - 0x22C6F Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_794(int iParam0) // Position - 0x22C8A Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_795(int iParam0) // Position - 0x22CA5 Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

eBlipSprite func_796(Hash hParam0) // Position - 0x22CC0 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_686(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_797(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x22CD9 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_315(iParam0, &num, &num2);

	if (!func_834(iParam0, num, num2, bParam2))
		return;

	if (!func_1016(iParam0, 1024))
		return;

	func_835(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_798(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0x22D39 Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_315(iParam0, &num, &num2);

	if (!func_834(iParam0, num, num2, bParam2))
		return;

	if (!func_1016(iParam0, 1024))
		return;

	func_835(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_799() // Position - 0x22DB4 Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_955())
		return func_800();

	endRange = func_955() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_955(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_1017(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_956(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_800() // Position - 0x22E2E Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_955());
	return func_956(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_801(var uParam0) // Position - 0x22E51 Hash - 0x26E9B20B ^0x108E1842
{
	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			break;
	
		case joaat("consumable_cigarette_box_cheap_used"):
			*uParam0 = joaat("consumable_cigarette_box_cheap");
			break;
	}

	return;
}

BOOL func_802(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x22EA6 Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_686(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_476(hParam0, false, true) };
	unk6 = { func_480(hParam0, unk, unk.f_4, false) };
	return func_1018(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_803(Hash hParam0) // Position - 0x22EF5 Hash - 0x90E372CB ^0xEE55522E
{
	eStackSize stackSize;
	Hash hash;
	Hash hash2;

	if (func_24() != -1)
		return;

	switch (func_682(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_657(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			stackSize = func_1020(hParam0);
		
			if (func_1021(stackSize))
				func_1022(stackSize, stackSize >= 0 && stackSize <= 5, true);
			else
				func_657(30, hParam0, 0, 0, false);
		
			if (func_829() == -2125499975 || func_829() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_657(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_829() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_657(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_1023(-525676072, false))
				if (func_1024(-525676072, &hash))
					func_657(33, hash, 0, 0, false);
		
			func_657(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_1019(81053684, false) <= 0)
				func_657(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_1025(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_468(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_759(24);
	
		if (func_782(&hash2, false))
			func_365(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_804(Hash hParam0) // Position - 0x230C7 Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_757(hParam0, 943695443))
		func_1026(0, hParam0);
	else if (func_757(hParam0, -2096528786))
		func_1026(1, hParam0);
	else if (func_757(hParam0, -1094167013))
		func_1026(2, hParam0);
	else if (func_757(hParam0, 1936654645))
		func_1026(3, hParam0);
	else if (func_757(hParam0, 1306489306))
		func_1026(4, hParam0);
	else if (func_757(hParam0, 435762317))
		func_1026(5, hParam0);
	else if (func_757(hParam0, 1259363210))
		func_1026(6, hParam0);
	else if (func_757(hParam0, 881398259))
		func_1026(7, hParam0);
	else if (func_757(hParam0, -541549214))
		func_1026(8, hParam0);
	else if (func_757(hParam0, 130796156))
		func_1026(-1, hParam0);

	return;
}

int func_805(Hash hParam0, int iParam1) // Position - 0x231BD Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_1027(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_1028(hParam0, &unk5, &unk, iParam1);
}

struct<2> func_806(Hash hParam0) // Position - 0x231E6 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_686(hParam0, 0))
		return unk;

	if (func_757(hParam0, -305066475))
		if (func_24() == -1)
			if (func_757(hParam0, -537818634))
				return func_394(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_394(joaat("deadeye_items"));
	else if (func_757(hParam0, -537818634))
		return func_394(joaat("medicine_items"));

	if (func_757(hParam0, 2084895747))
		return func_394(joaat("lock_breaker_items"));

	return unk3;
}

void func_807(Hash hParam0) // Position - 0x2327A Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_24() == -1)
				if (func_100(Global_1835011[4 /*74*/].f_1, true))
					func_532(109, true);
			break;
	}

	return;
}

void func_808(Hash hParam0, int iParam1) // Position - 0x232B3 Hash - 0x3053C451 ^0xA801E37A
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(func_1029(0));
	func_843(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_1031(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_809(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x232F3 Hash - 0xB6CF78C ^0x845E9244
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	char* str;
	int num3;
	int num4;
	int num5;
	char* str2;
	int num6;
	const char* str3;

	if (hParam0 == joaat("ammo_moonshinejug"))
		return;

	if (!func_686(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_1032())
	{
		func_1033(hParam0, iParam1, bParam2, bParam4);
		return;
	}

	flag = false;
	num = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
			TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		else if (bParam2 && func_758(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_678(hParam0);
	num3 = 0;
	num4 = joaat("Inventory");

	if (num2 == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver"))
	{
		num3 = joaat("ammo_types");
		num4 = joaat("ammo_types");
	}

	if (num2 == joaat("weapon_mod") || num2 == joaat("weapon_decoration"))
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_1035(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num5 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	num6 = 0;

	if (flag)
	{
		num5 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num6 = 1;
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_rpg_special_1");
		else
			num5 = joaat("color_yellowdark");

	str3 = func_330(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_796(hParam0)), num), num5);

	if (iParam1 == 1 || func_757(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_796(hParam0));

	func_843(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

int func_810(Hash hParam0, int iParam1) // Position - 0x23548 Hash - 0x7A1C2599 ^0xFF9B5634
{
	var outData;
	int outIndex;
	int i;

	outData = 20;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &outData, &outIndex, 20))
	{
		for (i = 0; i < outIndex; i = i + 1)
		{
			if (outData[i /*2*/].f_1 == iParam1)
				return outData[i /*2*/];
		}
	}

	return 0;
}

struct<10> func_811(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x23592 Hash - 0x440EE211 ^0xAE2816F9
{
	int num;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_4 = -1;
	num.f_5 = -1;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;

	if (iParam0 != 0 && iParam0 != joaat("SLOTID_NONE"))
		num = iParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1)
		num.f_2 = iParam2;

	if (iParam3 != 0)
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != -1)
		num.f_6 = iParam6;

	if (iParam7 != 0)
		num.f_8 = iParam7;

	if (iParam8 != 0)
		num.f_7 = iParam8;

	return num;
}

BOOL func_812(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x23666 Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

Hash func_813(int iParam0, int iParam1) // Position - 0x23687 Hash - 0x3644D28E ^0x6DB2088F
{
	int outKey;

	if (iParam1 < 0)
		return 0;

	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(iParam1))
		return 0;

	outKey = 0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iParam1, iParam0, &outKey))
		return 0;

	return outKey;
}

BOOL func_814(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x236CA Hash - 0x9850C0DA ^0x9850C0DA
{
	BOOL flag;
	int acquireCostsCount;
	Hash outData;
	int i;

	if (!func_686(hParam0, 0))
		return false;

	if (hParam1 != 0 && !func_1036(hParam0, hParam1, true))
		return false;

	flag = false;

	if (hParam1 == 0)
	{
		acquireCostsCount = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(hParam0);
		outData.f_4 = 15;
		outData.f_36 = 10;
	
		for (i = 0; i < acquireCostsCount; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(hParam0, i, &outData))
				if (outData.f_2 == joaat("cost_type_craft") && func_1036(hParam0, outData, true))
					if (func_1037(hParam0, outData))
						flag = true;
		}
	}
	else if (func_1037(hParam0, hParam1))
	{
		flag = true;
	}

	if (flag)
		if (!bParam2)
			func_532(206, false);

	if (bParam3)
		if (!func_25(0, false, true))
			func_392(true, 5);

	if (flag)
		return true;

	return false;
}

int func_815(int iParam0) // Position - 0x237A9 Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_816(Hash hParam0) // Position - 0x237CA Hash - 0x7652572 ^0x985F29FB
{
	int num;

	num = -1;

	switch (hParam0)
	{
		case joaat("document_pamphlet_molotov"):
			num = 326;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_HOMING_TOMAHAWK"):
			num = 328;
			break;
	
		case -1724192342:
			num = 330;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_REVIVER"):
			num = 308;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_MEDICINE"):
			num = 307;
			break;
	
		case -1267972061:
			num = 309;
			break;
	
		case -755457379:
			num = 322;
			break;
	
		case -566881549:
			num = 332;
			break;
	
		case -378547623:
			num = 316;
			break;
	
		case joaat("document_pamphlet_special_horse_stimulant"):
			num = 310;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_INCENDIARY_BUCKSHOT"):
			num = 334;
			break;
	
		case joaat("document_pamphlet_special_medicine"):
			num = 312;
			break;
	
		case 147796381:
			num = 333;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_DYNAMITE_ARROW"):
			num = 320;
			break;
	
		case joaat("document_pamphlet_special_tonic"):
			num = 315;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_SNAKE_OIL"):
			num = 314;
			break;
	
		case 829545206:
			num = 317;
			break;
	
		case 890514341:
			num = 311;
			break;
	
		case 891318243:
			num = 319;
			break;
	
		case joaat("document_pamphlet_poison_throwing_knife"):
			num = 331;
			break;
	
		case joaat("document_pamphlet_volatile_dynamite"):
			num = 325;
			break;
	
		case 1015404643:
			num = 324;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_SLUG_EXPLOSIVE"):
			num = 335;
			break;
	
		case joaat("document_pamphlet_improved_throw_knife"):
			num = 329;
			break;
	
		case 1619534881:
			num = 321;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_RESTORATIVE"):
			num = 313;
			break;
	
		case joaat("document_pamphlet_volatile_molotov"):
			num = 327;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_POISON_ARROW"):
			num = 323;
			break;
	}

	if (num != -1)
		func_532(num, false);

	return;
}

void func_817() // Position - 0x23972 Hash - 0x6A9A2124 ^0xDECB3CDD
{
	BOOL isDlcPresent;

	isDlcPresent = DLC::IS_DLC_PRESENT(joaat("dlc_specialedition"));

	if (!isDlcPresent)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(joaat("cabr01"), 0);
			func_1038(false);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_1039();
		}
	
		return;
	}

	if (!func_100(Global_1835011[4 /*74*/].f_1, true))
		return;

	func_1040();

	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("nbd1")) >= 2)
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("cabr01")) < 2)
			MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(joaat("cabr01"), 2);

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
		return;

	func_1038(true);
	return;
}

void func_818() // Position - 0x23A28 Hash - 0x8D4F27DA ^0x39F8024F
{
	if (!func_100(Global_1835011[4 /*74*/].f_1, true))
		return;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
		return;

	func_525(1351927599, 1, false, false, false, 752097756, 0, 0, 0, false);
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
	return;
}

void func_819() // Position - 0x23A8E Hash - 0x5F1EB628 ^0x7D2399B0
{
	BOOL isDlcPresent;

	isDlcPresent = DLC::IS_DLC_PRESENT(joaat("dlc_physpreordercontent"));

	if (!isDlcPresent)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1041(false);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
	
		return;
	}

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		return;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
		return;

	if (!func_100(Global_1835011[4 /*74*/].f_1, true))
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_1041(true);
	return;
}

void func_820() // Position - 0x23B07 Hash - 0xF4244BFD ^0xA07A49A
{
	BOOL isDlcPresent;

	isDlcPresent = DLC::IS_DLC_PRESENT(joaat("dlc_preordercontent"));

	if (!isDlcPresent)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			func_1042(15000, 0, 0, false, 1);
			func_1041(false);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
	
		return;
	}

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		return;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
		return;

	if (!func_100(Global_1835011[4 /*74*/].f_1, true))
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	func_853(15000, false, 1065353216, 1, 0, 0, 1, 752097756);
	func_1041(true);
	return;
}

void func_821() // Position - 0x23BA1 Hash - 0x69FF87CC ^0xF3710DA2
{
	BOOL isDlcPresent;

	isDlcPresent = DLC::IS_DLC_PRESENT(-679138445);

	if (isDlcPresent)
	{
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("treasure_hunt_loot_13")) > 0)
		{
			if (!func_550(joaat("DOCUMENT_TREASURE_MAP_10"), 1, false) && !func_260(Global_1835011[23 /*74*/].f_1) && !Global_43891)
				func_525(joaat("DOCUMENT_TREASURE_MAP_10"), 1, true, false, false, 752097756, 0, 0, 0, false);
		
			if (!func_1043(1))
				func_793(1);
		}
	
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("treasure_hunt_loot_14")) > 0)
		{
			if (!func_550(joaat("DOCUMENT_TREASURE_MAP_11"), 1, false) && !func_260(Global_1835011[23 /*74*/].f_1) && !Global_43891)
				func_525(joaat("DOCUMENT_TREASURE_MAP_11"), 1, true, false, false, 752097756, 0, 0, 0, false);
		
			if (!func_1043(2))
				func_793(2);
		}
	
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("treasure_hunt_loot_15")) > 0 && !func_1043(4))
			func_793(4);
	
		if (func_1043(0))
			func_1044(0);
	}
	else
	{
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("treasure_hunt_loot_13")) > 0)
			if (func_550(joaat("DOCUMENT_TREASURE_MAP_10"), 1, false))
				func_824(joaat("DOCUMENT_TREASURE_MAP_10"), 1, true, -142743235, false);
	
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("treasure_hunt_loot_14")) > 0)
			if (func_550(joaat("DOCUMENT_TREASURE_MAP_11"), 1, false))
				func_824(joaat("DOCUMENT_TREASURE_MAP_11"), 1, true, -142743235, false);
	
		if (func_1043(1))
			func_1044(1);
	
		if (func_1043(2))
			func_1044(2);
	
		if (func_1043(4))
			func_1044(4);
	
		if (!func_1043(0))
			func_793(0);
	}

	return;
}

void func_822() // Position - 0x23D32 Hash - 0x2E36502F ^0x8173C152
{
	BOOL flag;
	var guid;
	Hash weaponHash;
	Hash weaponHash2;

	flag = UNLOCK::UNLOCK_IS_UNLOCKED(joaat("sp_game_content_cross_promotion_revolver"));

	if (!flag)
		return;

	if (!func_100(Global_1835011[4 /*74*/].f_1, true))
		return;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED")))
		return;

	guid = { func_1045() };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
	{
		func_762(joaat("weapon_revolver_doubleaction"));
	
		if (func_365(joaat("weapon_revolver_doubleaction"), 0, false, false, false, false, 752097756, false))
			guid = { func_1045() };
	}

	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
	{
		func_1046(joaat("component_revolver_doubleaction_grip_pearl"), guid, 1423542233);
		func_1046(joaat("component_revolver_doubleaction_barrel_long"), guid, -1264898804);
		func_1046(joaat("component_shortarm_barrel_material_7"), guid, 1592019450);
		func_1046(joaat("component_shortarm_cylinder_material_7"), guid, 1117400455);
		func_1046(joaat("component_shortarm_hammer_material_7"), guid, 1150213537);
		func_1046(joaat("component_shortarm_sight_material_7"), guid, 1598825281);
		func_1046(joaat("component_shortarm_trigger_material_7"), guid, -712527121);
		func_1046(joaat("component_shortarm_frame_engraving_1"), guid, 454332195);
		func_1046(joaat("component_shortarm_frame_material_7"), guid, 256105670);
		func_1046(joaat("component_shortarm_frame_engraving_material_7"), guid, -1328061889);
		func_1046(joaat("component_shortarm_barrel_engraving_1"), guid, -782241404);
		func_1046(joaat("component_shortarm_barrel_engraving_material_7"), guid, 1669853467);
		func_1046(joaat("component_shortarm_cylinder_engraving_1"), guid, -1559225678);
		func_1046(joaat("component_shortarm_cylinder_engraving_material_7"), guid, -266425508);
	
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !func_491())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash2, false, 0, false);
		
			if (func_363(weaponHash2))
			{
				if (weaponHash2 != joaat("weapon_revolver_doubleaction"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash2))
					{
						if (func_328(24))
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash2, true, 3, false, false);
					
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash2))
					{
						if (func_328(24) && func_363(weaponHash) && weaponHash != joaat("weapon_revolver_doubleaction"))
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 3, false, false);
					
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
					}
				}
			}
			else if (!func_363(weaponHash))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
			else if (weaponHash != joaat("weapon_revolver_doubleaction"))
			{
				if (func_328(24))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 3, false, false);
			
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
		}
	
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}

	return;
}

void func_823() // Position - 0x23FCF Hash - 0xF18A4396 ^0xE96935A2
{
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE")))
		return;

	if (MISC::IS_PC_VERSION() || MISC::IS_STADIA_VERSION())
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);

	if (MISC::IS_ORBIS_VERSION())
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);

	if (MISC::IS_DURANGO_VERSION())
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);

	return;
}

int func_824(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0x24025 Hash - 0x3C2EC293 ^0xC2A7C7CB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_686(hParam0, 0))
		return 0;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_953(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_809(hParam0, -iParam1, flag, flag2, flag3);
	
		return 0;
	}

	if (!func_550(hParam0, 1, bParam4))
		return 0;

	statId = { func_806(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_742(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_742(hParam0, false, false) - iParam1 < 0)
		{
			func_824(hParam0, func_742(hParam0, false, false), bParam2, hParam3, bParam4);
			return 0;
		}
	}

	if (func_678(hParam0) == joaat("WEAPON"))
		if (!func_1047(hParam0, iParam1, false, hParam3))
			return 0;
	else if (!func_1048(hParam0, iParam1, hParam3, bParam2, bParam4))
		return 0;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_482(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_809(hParam0, -iParam1, flag, flag2, flag3);

	func_1049(hParam0, iParam1);
	return 1;
}

BOOL func_825(Hash hParam0) // Position - 0x24199 Hash - 0x8EDDF1C2 ^0x8EDDF1C2
{
	switch (func_682(hParam0))
	{
		case -2061583405:
			return true;
	
		case -1719060085:
			return true;
	
		case -999503751:
			return true;
	
		case -525676072:
			return true;
	
		case -413129408:
			return true;
	
		case 81053684:
			return true;
	
		default:
		
	}

	return false;
}

void func_826(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x241EA Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_682(hParam0))
	{
		case -2061583405:
			flag = func_1050(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_1050(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_1050(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_1050(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_1050(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_1050(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_1051();

	if (bParam1)
		func_1052(false, false);

	return;
}

int func_827(Hash hParam0) // Position - 0x242B7 Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_476(hParam0, true, false) };
	return func_653(unk.f_4);
}

void func_828(int iParam0) // Position - 0x242D3 Hash - 0x4C07C929 ^0x1ED333E9
{
	int num;
	int num2;
	int num3;

	if (func_24() == -1)
		num3 = -1394038466;
	else
		num3 = 545953470;

	num3.f_1 = iParam0;
	num3.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num3);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num3, -2008906477))
			return;
	
		num = func_654(num2, 1);
	
		if (num < 0 || num >= 39)
		{
		}
		else
		{
			func_908(&Global_1946054.f_1378.f_1[num /*3*/], 2, 6);
		}
	}

	return;
}

int func_829() // Position - 0x24356 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_830(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6) // Position - 0x24364 Hash - 0xC258D89B ^0x96AA147F
{
	int num;
	int i;
	BOOL flag;
	int num2;
	int num3;

	num3 = func_1053(iParam6);
	num3.f_1 = hParam1;
	num3.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num3);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
		return false;

	DATAFILE::_PARSEDDATA_GET_BOOL(&flag, &num3, -1516819610);
	DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 2049745650);
	*uParam2 = flag;
	Global_1946054.f_2652 = 0;

	if (!flag && !bParam3)
		func_1055(uParam0, func_1054(num), true);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1409451727))
		{
		}
		else
		{
			num2 = num;
			i = func_654(num2, 1);
		
			if (i < 0 || i > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, joaat("Component")))
			{
			}
			else
			{
				Global_1946054.f_2612[Global_1946054.f_2652] = i;
				Global_1946054.f_2652 = Global_1946054.f_2652 + 1;
				uParam0->f_1[i /*3*/] = num;
			
				if (bParam5)
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1441384))
						uParam0->f_1[i /*3*/].f_1 = joaat("base");
					else
						goto 0x157;
			
				if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1194786549))
					if (func_1056(num2) && func_1057(uParam0->f_1[i /*3*/], num2, &num))
						uParam0->f_1[i /*3*/].f_1 = num;
				else
					uParam0->f_1[i /*3*/].f_1 = num;
			}
		}
	}

	if (flag)
	{
		for (i = 0; i < Global_1946054.f_2652; i = i + 1)
		{
			func_909(uParam0, uParam0->f_1[Global_1946054.f_2612[i] /*3*/], Global_1946054.f_2612[i], false, false);
		}
	}

	if (bParam4)
		*uParam0 = hParam1;

	return true;
}

Vector3 func_831(int iParam0, eStackSize essParam1) // Position - 0x24519 Hash - 0x6854E748 ^0xA730727C
{
	if (func_24() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		return Global_26796.f_26[essParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	return Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

Hash func_832(int iParam0, eStackSize essParam1) // Position - 0x24578 Hash - 0x95660DAB ^0x95660DAB
{
	var unk;

	unk = { func_831(iParam0, essParam1) };
	return unk;
}

void func_833(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x2458E Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

BOOL func_834(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x245E9 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_1058(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_1059(iParam0))
		return false;

	if (func_1060(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_1016(iParam0, 1) || func_212(32768))
		if (!func_1016(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_1061())
		return false;

	return true;
}

void func_835(int iParam0, int iParam1) // Position - 0x2468B Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

void func_836(Hash hParam0, int iParam1, int iParam2) // Position - 0x246AF Hash - 0xDF73904B ^0xEE91821F
{
	hParam0->f_2 = hParam0->f_2 - hParam0->f_2 && iParam1;
	return;
}

void func_837(int iParam0) // Position - 0x246C7 Hash - 0xD4C1919D ^0x19CCBAD9
{
	func_908(&Global_1946054.f_1497.f_1[func_654(iParam0, 1) /*3*/], 2, 6);
	func_908(&Global_1946054.f_1378.f_1[func_654(iParam0, 1) /*3*/], 2, 6);
	return;
}

BOOL func_838(int iParam0) // Position - 0x246FF Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

int func_839(int iParam0) // Position - 0x2470B Hash - 0x8FEE6E56 ^0x8FEE6E56
{
	int num;
	int i;

	num = -1;

	if (!func_838(iParam0))
		return num;

	for (i = 0; i < 180; i = i + 1)
	{
		if (Global_40.f_9910[i /*6*/] == iParam0)
		{
			num = i;
			break;
		}
	}

	return num;
}

BOOL func_840(int iParam0, int iParam1) // Position - 0x24750 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_841(int iParam0, int iParam1) // Position - 0x24761 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

BOOL func_842(Hash hParam0, int iParam1) // Position - 0x24774 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_686(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_953(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_1010("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_1011(&unk, i, num, num2))
			{
			}
			else if (!func_363(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_1012(num);
				return true;
			}
		}
	
		func_1012(num);
	}

	return false;
}

int func_843(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x2481C Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_1062(sParam0, sParam1, hParam2);
	return num2;
}

int func_844() // Position - 0x2487F Hash - 0x717C9433 ^0x6F8C01FC
{
	int num;
	int i;
	int num2;

	for (i = 0; i < 5; i = i + 1)
	{
		num2 = func_1063(i);
	
		if (!UNLOCK::UNLOCK_IS_VISIBLE(func_1064(num2)))
			num = num + 1;
	}

	return num;
}

void func_845() // Position - 0x248B7 Hash - 0x7D11DF75 ^0x93EC97E1
{
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		num = func_1063(i);
	
		if (!UNLOCK::UNLOCK_IS_VISIBLE(func_1064(num)))
			UNLOCK::UNLOCK_SET_VISIBLE(func_1064(num), true);
	}

	return;
}

void func_846(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x248F2 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_349(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

BOOL func_847(int iParam0) // Position - 0x24923 Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_21 && iParam0 != false;
}

BOOL func_848() // Position - 0x24933 Hash - 0x7DF1A9A5 ^0x80A37AC6
{
	return func_78(Global_1935630, 4096) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("respawn_dump_body")) > 0;
}

BOOL func_849(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x24957 Hash - 0xAFE0BDE2 ^0x81A4812A
{
	Hash hash;
	Hash hash2;
	int num;
	int value;
	int num2;
	var unk;
	int value2;
	int num3;

	if (func_24() != -1)
		return false;

	if (Global_1955825 != 2)
		return false;

	hash = uParam0->f_5;
	hash2 = uParam0->f_5.f_1;
	num = uParam0->f_5.f_3;

	if (!func_686(hash, 0))
		return false;

	if (!func_1065(hash))
	{
		*uParam2 = *uParam2 + num;
		return false;
	}

	value = 1;
	func_1066(hash, hash2, &value, false);
	num2 = num * value;

	if (func_757(hash, 58855631))
		num2 = num;

	unk = { func_476(hash, false, true) };
	value2 = func_1067(hash, &unk, false, false);

	if (value2 == 0)
	{
		return false;
	}
	else if (value2 < num2)
	{
		num = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value2) / BUILTIN::TO_FLOAT(value));
		num2 = value2;
	}

	num3 = func_1068(hash, hash2, true, false, false) * num;

	if (num3 <= 0)
		return false;

	if (!func_1069(num3))
	{
		*uParam2 = *uParam2 + num;
		return false;
	}

	if (!func_525(hash, num2, true, false, false, 1248274121, 0, 0, 0, false))
	{
		*uParam2 = *uParam2 + num;
		return false;
	}

	func_1042(num3, 0, 0, false, 1);
	*uParam3 = *uParam3 + num3;
	*uParam1 = *uParam1 + num;
	return true;
}

void func_850(int iParam0, const char* sParam1, int iParam2) // Position - 0x24A91 Hash - 0xA31E0DC ^0xD9212874
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_SPEND";

	func_843(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 1, joaat("COLOR_RED"), 0, 0, 0, true);
	return;
}

int func_851(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x24AD2 Hash - 0x8EBD6187 ^0x42F0F0AC
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

void func_852(BOOL bParam0, BOOL bParam1) // Position - 0x24B0D Hash - 0x821066DC ^0x78F408CF
{
	Any data;
	Any data2;

	if (func_24() != -1)
		return;

	if (Global_1955825 != 2)
		return;

	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&data))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(data, false))
				break;
		}
	}

	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&data2))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(data2, false))
				break;
		}
	}

	return;
}

void func_853(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, int iParam6, Hash hParam7) // Position - 0x24B69 Hash - 0x63AC4944 ^0x63AC4944
{
	if (!bParam1)
		func_984(iParam0, sParam4, iParam5);

	func_985(iParam0, bParam1, iParam2, iParam3, hParam7);
	return;
}

void func_854(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x24B8F Hash - 0x809E478 ^0x7DC35117
{
	int num;
	int value;
	int num2;
	int num3;
	int num4;

	num = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(iParam1) * iParam2);
	value = (iParam1 - num) / iParam3;

	if (func_1070())
	{
		num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, joaat("hud_toasts"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", num), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, joaat("hud_toasts"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", num), -1689362167);
	}

	num3 = value;

	if (func_1070())
		num3 = num3 + num2;

	TELEMETRY::_TELEMETRY_GANG_SHARES(func_568(iParam0), num3, value, iParam3);
	num4 = func_106(iParam0);

	if (func_27(iParam0) != 1 || num4 != 37 && num4 != 58)
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", num3), 601389479);

	switch (func_27(iParam0))
	{
		case 1:
			switch (num4)
			{
				case 12:
					func_1071(6, value);
					break;
			
				case 19:
					func_1071(1, value);
					func_1071(2, value);
					break;
			
				case 20:
					func_1071(8, value);
					break;
			
				case 24:
					func_1071(3, value);
					func_1071(9, value);
					func_1071(20, value);
					break;
			
				case 25:
					func_1071(1, value);
					func_1071(8, value);
					func_1071(7, value);
					break;
			
				case 28:
					func_1071(1, value);
					break;
			
				case 29:
					func_1071(0, value);
					func_1071(9, value);
					break;
			
				case 34:
					func_1071(23, value);
					func_1071(2, value);
					func_1071(18, value);
					break;
			
				case 37:
					break;
			
				case 53:
					func_1071(3, value);
					func_1071(7, value);
					func_1071(4, value);
					break;
			
				case 57:
					func_1071(0, value);
					func_1071(3, value);
					func_1071(2, value);
					func_1071(11, value);
					func_1071(6, value);
					func_1071(25, value);
					func_1071(24, value);
					break;
			
				case 58:
					break;
			}
			break;
	
		case 8:
			switch (num4)
			{
				case 37:
					func_1071(23, value);
					break;
			
				case 63:
					func_1071(1, value);
					func_1071(3, value);
					break;
			
				case 94:
					func_1071(5, value);
					break;
			
				case 116:
					break;
			}
			break;
	
		case 11:
			if (iParam0 == func_566(0, 10, 11, joaat("cabr01")))
			{
				func_1071(7, value);
				func_1071(4, value);
			}
			else if (iParam0 == func_566(0, 7, 11, joaat("cacr02")))
			{
				func_1071(8, value);
				func_1071(15, value);
			}
			else if (iParam0 == func_566(0, 8, 11, joaat("cacr03")))
			{
				func_1071(3, value);
			}
			else if (iParam0 == func_566(0, 11, 11, joaat("cacr01")))
			{
				func_1071(6, value);
				func_1071(3, value);
			}
			else if (iParam0 == func_566(0, 12, 11, joaat("cacr04")))
			{
				func_1071(9, value);
			}
			break;
	}

	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1072()));

	if (!func_312(629))
		func_532(629, false);

	return;
}

int func_855(int iParam0) // Position - 0x24EFF Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

BOOL func_856(int iParam0) // Position - 0x24F1E Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_857(int iParam0, var uParam1, var uParam2) // Position - 0x24F3D Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_856(iParam0))
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

int func_858() // Position - 0x2510C Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

BOOL func_859(int iParam0, int iParam1, int iParam2) // Position - 0x25127 Hash - 0x932A04D5 ^0x39A8988D
{
	return iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

int func_860(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x2514D Hash - 0x4E72835D ^0x57C5ACE0
{
	BOOL flag;
	int num;

	if (!func_1073(iParam2))
		return -1;

	if (iParam0 < 0 || iParam0 > 511)
		return -1;

	if (iParam1 < 0 || iParam1 > 255)
		return -1;

	if (iParam3 < 0 || iParam3 > func_858())
		return -1;

	flag = func_859(iParam0, iParam1, iParam2);
	num = iParam3;
	func_703(num, 0);
	func_575(num, 0);
	func_1074(num, 0);
	func_1075(num, 0);
	func_1076(num, flag);

	if (hParam4 != 0)
		func_1077(num, hParam4);

	return num;
}

int func_861(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x251EC Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_550(joaat("provision_trinket_elk_antler"), 1, false))
		num = num + 0.1f;

	num2.f_1 = 10;
	num2.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_35, true, true, hParam0, &num2, 0);

	for (i = 0; i < num2; i = i + 1)
	{
		if (num2.f_1[i] == joaat("currency_cash"))
		{
			return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
		else
		{
			hash = num2.f_1[i];
		
			if (func_686(hash, 0) && func_757(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

int func_862() // Position - 0x252B1 Hash - 0x469165C8 ^0x86AE7E88
{
	Hash missionHash;
	int numGoals;
	int numGoalsComplete;
	int num;

	missionHash = func_1078(Global_1879514.f_1);

	if (Global_1425247.f_53)
		return 0;

	if (func_1079(missionHash))
	{
		if (Global_1879514.f_18)
			return Global_1879514.f_19;
	
		numGoals = STATS::CHAL_MISSION_GET_NUM_GOALS(missionHash);
		numGoalsComplete = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(missionHash);
	
		if (numGoals > 0)
		{
			num = (100 * numGoalsComplete) / numGoals;
		
			if (num >= 100)
				return 5;
			else if (num >= 50)
				return 4;
			else
				return 3;
		}
	}

	return 3;
}

void func_863(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x2532E Hash - 0x303BFB8D ^0xBCF80455
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
		
			if (func_1080(vector, uParam0, 2f, true))
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

BOOL func_864(int iParam0, int iParam1) // Position - 0x253B2 Hash - 0x4F089875 ^0x2D4019CD
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return false;

	return func_583(Global_1393237.f_11[iParam0 /*30*/].f_10, iParam1);
}

Hash func_865() // Position - 0x253E6 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return 0;
}

void func_866(int iParam0, int iParam1) // Position - 0x253EF Hash - 0x3095F76B ^0x9DAA87F4
{
	if (iParam0 >= 0 && iParam0 < 6)
		Global_1393237.f_11[iParam0 /*30*/].f_24 = iParam1;

	return;
}

BOOL func_867(int iParam0, int iParam1) // Position - 0x25415 Hash - 0xB179A71 ^0xB7E8A74F
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return false;

	return Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1 != false;
}

void func_868(int iParam0, int iParam1) // Position - 0x25448 Hash - 0x64E216F2 ^0x314CECED
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return;

	Global_1393237.f_11[iParam0 /*30*/].f_10 = Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1;
	return;
}

BOOL func_869(int iParam0) // Position - 0x25484 Hash - 0x5000025C ^0x5000025C
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

void func_870(int iParam0, int iParam1) // Position - 0x254B1 Hash - 0xD320CA35 ^0x5C62EB93
{
	if (!func_218(iParam0))
		return;

	Global_1310750[iParam0 /*111*/].f_1 = Global_1310750[iParam0 /*111*/].f_1 - Global_1310750[iParam0 /*111*/].f_1 && iParam1;
	return;
}

BOOL func_871(int iParam0, int iParam1) // Position - 0x254E8 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_872(int iParam0) // Position - 0x254F7 Hash - 0xBC0CCBA5 ^0x80D3F3F5
{
	if (!func_218(iParam0))
		return true;

	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_873(int iParam0) // Position - 0x2551A Hash - 0xA8723863 ^0xEBF84F39
{
	if (func_218(iParam0))
		return Global_17504.f_42[iParam0 /*8*/].f_4;

	return 0;
}

int func_874(int iParam0) // Position - 0x2553A Hash - 0x2117305A ^0x2117305A
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

void func_875(int iParam0, int iParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x256E7 Hash - 0x191FF204 ^0x191FF204
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

	func_876(iParam0, bParam3, BUILTIN::ROUND(num * fParam2), BUILTIN::ROUND(num2 * fParam2), BUILTIN::ROUND(num3 * fParam2), BUILTIN::ROUND(num4 * fParam2), bParam4, true);
	return;
}

void func_876(int iParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x2589E Hash - 0x4654DD91 ^0x21FEF3E7
{
	int num;

	num = iParam2 + (60 * iParam3) + (3600 * iParam4) + (86400 * iParam5);

	if (func_1081(iParam0) == 1 && bParam7)
		return;

	if (bParam6)
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > num)
			return;

	if (bParam1 || bParam6 || func_24() != -1)
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;

	Global_17504.f_42[iParam0 /*8*/].f_4 = Global_17504.f_42[iParam0 /*8*/].f_4 + num;
	return;
}

BOOL func_877(int iParam0) // Position - 0x2592A Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

void func_878(int iParam0, int iParam1) // Position - 0x25940 Hash - 0xCE0BB2C4 ^0x23B010DC
{
	var unk;

	if (iParam0 == -1 || iParam0 == 0)
	{
		Global_1898164.f_1[iParam1 /*5*/] = { unk };
	}
	else
	{
		Global_1898164.f_1[iParam1 /*5*/] = iParam0;
		Global_1898164.f_1[iParam1 /*5*/].f_1 = func_109(iParam0);
		func_1082(Global_1898164.f_1[iParam1 /*5*/].f_1, &(Global_1898164.f_1[iParam1 /*5*/].f_3), &(Global_1898164.f_1[iParam1 /*5*/].f_4), &(Global_1898164.f_1[iParam1 /*5*/].f_2));
	}

	return;
}

void func_879(int iParam0, int iParam1) // Position - 0x259BE Hash - 0x6861752C ^0x6861752C
{
	int i;

	if (iParam0 == iParam1)
		return;

	if (iParam1 < iParam0)
	{
		for (i = iParam0; i > iParam1; i = i - 1)
		{
			func_1083(i - 1, i);
		}
	}
	else
	{
		for (i = iParam0; i < iParam1; i = i + 1)
		{
			func_1083(i, i + 1);
		}
	}

	if (func_37(Global_1898164.f_1[0 /*5*/]))
		func_497(Global_1898164.f_1[0 /*5*/], 3);

	return;
}

void func_880(BOOL bParam0) // Position - 0x25A34 Hash - 0xABC71D04 ^0x7FAB5AFE
{
	int i;

	for (i = 0; i < 153; i = i + 1)
	{
		if (Global_1914319.f_15936[i /*6*/].f_5)
			Global_1914319.f_15936[i /*6*/].f_5 = 0;
	
		func_1084(&Global_1914319.f_15936[i /*6*/], bParam0);
	}

	return;
}

void func_881(BOOL bParam0) // Position - 0x25A7E Hash - 0x75A38704 ^0x669CA416
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		func_1084(&Global_1934051.f_23[i], bParam0);
	}

	return;
}

void func_882(BOOL bParam0) // Position - 0x25AA9 Hash - 0xEE9EF61F ^0x6F45D5CB
{
	int i;

	for (i = 0; i < 33; i = i + 1)
	{
		func_1084(&Global_1899778.f_34[i], bParam0);
		Global_1899778[i] = 0;
	}

	return;
}

void func_883(BOOL bParam0) // Position - 0x25ADD Hash - 0x990D8E53 ^0x990D8E53
{
	func_1084(&Global_1955864, bParam0);
	return;
}

void func_884(BOOL bParam0) // Position - 0x25AEF Hash - 0x44C39101 ^0xB6988EF7
{
	func_1084(&(Global_1415412.f_3), bParam0);
	return;
}

void func_885(BOOL bParam0) // Position - 0x25B03 Hash - 0x15F28904 ^0x5BE4C56F
{
	if (func_1085(Global_1934051.f_33))
		func_1086(Global_1934051.f_33, joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));

	func_1084(&(Global_1934051.f_33), bParam0);
	return;
}

void func_886(BOOL bParam0) // Position - 0x25B32 Hash - 0xB1376D99 ^0x20D49D2D
{
	int i;
	Hash hash;

	for (i = 0; i < 11; i = i + 1)
	{
		hash = func_1088(func_1087(i));
	
		if (hash != 0)
			func_1086(Global_1934051[i /*2*/], hash);
	
		if (Global_1934051[i /*2*/].f_1)
			Global_1934051[i /*2*/].f_1 = 0;
	
		func_1084(&Global_1934051[i /*2*/], bParam0);
	}

	return;
}

void func_887(BOOL bParam0) // Position - 0x25B93 Hash - 0x2B0F2EE5 ^0xCD361E26
{
	int i;

	for (i = 0; i < Global_36308; i = i + 1)
	{
		func_589(i, -1);
		func_590(i, 0);
		func_591(i, 0);
	
		if (MAP::DOES_BLIP_EXIST(Global_36308[i]))
		{
			if (bParam0)
				MAP::SET_RADAR_ZOOM(Global_36308[i]);
		
			MAP::REMOVE_BLIP(&Global_36308[i]);
		}
	}

	return;
}

void func_888(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x25BED Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

void func_889(int iParam0, var uParam1) // Position - 0x25C1D Hash - 0x852438A3 ^0xED82E692
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &num, 2, 2);
	return;
}

void func_890(int iParam0, var uParam1) // Position - 0x25C38 Hash - 0x3F2FCA40 ^0x9574484A
{
	int num;

	num = iParam0;
	num.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &num, 2, 2);
	return;
}

BOOL func_891(int iParam0, int iParam1) // Position - 0x25C53 Hash - 0x331B7828 ^0x84AB2DAA
{
	return func_583(Global_40.f_11864[iParam0 /*2*/].f_1, iParam1);
}

BOOL func_892() // Position - 0x25C6D Hash - 0x60155C48 ^0x6CED0E68
{
	if (func_1089())
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

void func_893(int iParam0, int iParam1) // Position - 0x25CC3 Hash - 0x787BB1AC ^0x11099E69
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

BOOL func_894(BOOL bParam0, var uParam1, var uParam2) // Position - 0x25D6E Hash - 0x2A9340EF ^0xAD765E32
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

Ped func_895(var uParam0) // Position - 0x25E35 Hash - 0xF229F24F ^0x47381422
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

void func_896(var uParam0) // Position - 0x25EDD Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_153(uParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_152(uParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

BOOL func_897(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x25F42 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_314(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_898(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x25F70 Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

BOOL func_899(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x25FB1 Hash - 0x1D055735 ^0x5D260F19
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

int func_900(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x2602A Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

Hash func_901(eStackSize essParam0) // Position - 0x2606C Hash - 0xBA965109 ^0xCB1D208B
{
	switch (essParam0)
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

BOOL func_902(int iParam0, int iParam1) // Position - 0x26248 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_903() // Position - 0x26269 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

int func_904(Hash hParam0) // Position - 0x262B0 Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_757(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_757(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_757(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_757(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_757(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_757(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

void func_905(int iParam0) // Position - 0x26401 Hash - 0x65A082AE ^0x65A082AE
{
	func_672(iParam0, 8, 6);
	return;
}

void func_906(int iParam0) // Position - 0x26412 Hash - 0x20214C72 ^0x20214C72
{
	func_1090(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_907(int iParam0, int iParam1) // Position - 0x26427 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_1091(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_908(Hash hParam0, int iParam1, int iParam2) // Position - 0x2643E Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_909(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x26451 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_682(uParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_668(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_907(num2, num3);
	}

	if (func_1025(-1586649372) && func_668(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_907(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_1092(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_1092(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_907(num2, num3);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_907(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_907(num2, num3);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_1093(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_757(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_907(num2, num3);
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
						func_907(num2, num3);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_907(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_682(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_907(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_1093(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_682(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_907(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_1092(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_1092(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_907(num2, num3);
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
						func_907(num2, num3);
				}
			}
		
			func_1092(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_757(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_907(num2, num3);
			}
			break;
	
		case 1868067663:
			func_1092(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_907(num2, num3);
			}
			break;
	}

	switch (func_682(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_682(uParam0->f_1[num2 /*3*/]) || func_757(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_907(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_682(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_907(num2, num3);
			}
			break;
	}

	return;
}

Hash func_910(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x26A95 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_1094(0);

	if (hParam2 != 0 && func_1095(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_1057(hParam0, func_670(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_911(var uParam0, BOOL bParam1, int iParam2) // Position - 0x26ADB Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_24() != -1;
	flag2 = func_1094(0);

	if (func_658(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_670(num, 1);
		
			if (func_667(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_667(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_1096(uParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_1097(uParam0);

	if (num3 > 0)
	{
		if (!func_658(524288))
		{
			func_665(524288);
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
				num5 = func_670(num, 1);
			
				if (func_667(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_667(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_1096(uParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_907(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_915(524288);

	return;
}

void func_912(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x26CF8 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_1098(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_24() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_1099(2, Global_26796.f_776) || Global_1946054.f_1497 != func_1100(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_1100(Global_40.f_7729);
				Global_1946054.f_1378 = func_1100(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1101(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_1052(false, true);

	return;
}

void func_913(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x26E17 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_1102(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_1103(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_665(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_1102(iParam0))
				return;
		
			func_1103(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_665(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_662(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_914(var uParam0) // Position - 0x27023 Hash - 0x7C3D914C ^0xB1998A7B
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

void func_915(BOOL bParam0) // Position - 0x27081 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_916(int iParam0, int iParam1) // Position - 0x27099 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_917(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x270A8 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_1102(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_1102(20))
				return;
		}
	}

	func_1103(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_665(8);
	return;
}

Hash func_918(Hash hParam0) // Position - 0x271AC Hash - 0xBBE66644 ^0xEC72F4B4
{
	Hash hash;

	hash = func_682(hParam0);

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

struct<4> func_919() // Position - 0x271E1 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

float func_920(var uParam0) // Position - 0x271ED Hash - 0xD73B9827 ^0x49D6D849
{
	return uParam0->f_25;
}

int func_921(Hash hParam0) // Position - 0x271F9 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_653(outSlotId);
}

int func_922(int iParam0) // Position - 0x2721C Hash - 0x7AAD0EAA ^0x7F622D62
{
	var unk;
	var statId;

	statId = { func_394(iParam0) };
	STATS::STAT_ID_GET_INT(&statId, &unk);
	return unk;
}

int func_923(int iParam0) // Position - 0x27239 Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_438(iParam0);

	if (num < 0)
		return 0;

	return func_1104(num);
}

int func_924(int iParam0, int iParam1) // Position - 0x27259 Hash - 0xF3EA5EAF ^0xA48F5774
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
			func_1105(num2);
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

void func_925() // Position - 0x273C9 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

BOOL func_926(int iParam0) // Position - 0x273EC Hash - 0x8232DC08 ^0x5AF1E79C
{
	int num;
	int offset;

	func_932(iParam0, &num, &offset);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[num], offset);
}

void func_927(int iParam0, int iParam1) // Position - 0x27410 Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_928(true);

	return;
}

void func_928(BOOL bParam0) // Position - 0x27429 Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_152(&(Global_40.f_12019.f_42), 1);
	else
		func_153(&(Global_40.f_12019.f_42), 1);

	return;
}

BOOL func_929(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0x27453 Hash - 0x6EB69AE6 ^0xE9AB1EC1
{
	var unk;

	uParam0.f_2 = iParam5;
	unk = *uParam6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &uParam0))
	{
		*uParam6 = unk;
		return true;
	}
	else
	{
		bParam7;
	}

	return false;
}

int func_930(int iParam0) // Position - 0x27483 Hash - 0x696B5244 ^0x696B5244
{
	switch (iParam0)
	{
		case joaat("MOOD_JACK"):
			return 26;
	
		case joaat("MOOD_SEAN"):
			return 21;
	
		case joaat("MOOD_PEARSON"):
			return 29;
	
		case joaat("event"):
			return 6;
	
		case joaat("Griefing"):
			return 4;
	
		case joaat("MOOD_KAREN"):
			return 32;
	
		case joaat("MOOD_TRELAWNY"):
			return 35;
	
		case joaat("MOOD_ABIGAIL"):
			return 25;
	
		case joaat("MOOD_SADIE_ADLER"):
			return 24;
	
		case joaat("MOOD_SWANSON"):
			return 33;
	
		case joaat("MOOD_JAVIER"):
			return 15;
	
		case joaat("MOOD_ARTHUR"):
			return 12;
	
		case 1871598:
			return 9;
	
		case joaat("MOOD_LENNY"):
			return 22;
	
		case joaat("MOOD_TILLY"):
			return 34;
	
		case joaat("MOOD_SUSAN_GRIMSHAW"):
			return 31;
	
		case joaat("MOOD_UNCLE"):
			return 17;
	
		case joaat("MOOD_DUTCH"):
			return 13;
	
		case joaat("ARRANGEMENT"):
			return 2;
	
		case joaat("base"):
			return 1;
	
		case joaat("SUPPLY"):
			return 3;
	
		case joaat("MOOD_MOLLY_OSHEA"):
			return 28;
	
		case joaat("MOOD_HOSEA"):
			return 18;
	
		case joaat("MOOD_BILL"):
			return 16;
	
		case joaat("MOOD_MARY_BETH"):
			return 27;
	
		case joaat("MOOD_CHARLES"):
			return 20;
	
		case joaat("MOOD_STRAUSS"):
			return 30;
	
		case joaat("MOOD_ODRISCOLL"):
			return 23;
	
		case joaat("MOOD_MICAH"):
			return 19;
	
		case joaat("Vignette"):
			return 10;
	
		case joaat("FLOW_FIRST_VISIT"):
			return 8;
	
		case joaat("flow"):
			return 7;
	
		case joaat("MOOD_JOHN"):
			return 14;
	
		case joaat("VIG_CAMP_ONLY"):
			return 11;
	
		default:
		
	}

	return 0;
}

BOOL func_931(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int* piParam6, BOOL bParam7) // Position - 0x27604 Hash - 0x75EEBFEF ^0xD9E5F860
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam6, &uParam0))
		return true;
	else
		bParam7;

	return false;
}

int func_932(int iParam0, var uParam1, var uParam2) // Position - 0x2762A Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_1106(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_933(int iParam0) // Position - 0x2764C Hash - 0xE426C523 ^0x42DA665A
{
	*iParam0 = 176656832;
	iParam0->f_1 = -15;
	iParam0->f_2 = 1017034651;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	return;
}

void func_934(int iParam0, int iParam1, BOOL bParam2) // Position - 0x27676 Hash - 0x4464293B ^0x680D2F86
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

int func_935() // Position - 0x276FB Hash - 0x990ADDDC ^0x7D78C12
{
	int num;

	num = func_709();

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

int func_936(int iParam0) // Position - 0x2780E Hash - 0xFA6423C1 ^0xB73AD7F1
{
	float num;
	float value;

	if (func_24() != -1)
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

int func_937(int iParam0) // Position - 0x278B3 Hash - 0xEE599357 ^0xEE599357
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

Hash func_938() // Position - 0x2796A Hash - 0xA46C8CCA ^0x71ABACD2
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

void func_939(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x27AC2 Hash - 0x25ED411C ^0xE6F9BEA9
{
	func_1108(MISC::GET_GAME_TIMER() + iParam2, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, hParam0);
	func_1109(hParam0);
	return;
}

void func_940(int iParam0) // Position - 0x27AEE Hash - 0x1FF74488 ^0xA40278BB
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_1110(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_941(BOOL bParam0) // Position - 0x27B52 Hash - 0x9BEFE017 ^0x9BEFE017
{
	int num;
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	int num2;
	int i;

	flag = false;

	if (func_1111(&num2))
	{
		if (num2 <= 0)
			return;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_1112(i, &hash, &num))
			{
				if (!func_686(hash, 0))
				{
				}
				else
				{
					unlockHash = func_1113(hash);
				
					if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						if (bParam0)
							UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, false);
						else
							goto 0xB5;
				
					if (func_678(hash) == joaat("weapon_mod"))
						if (num == 1014511709)
							flag = func_935() <= -160;
						else if (num == joaat("SHOP_HONOR_GOOD_4"))
							flag = func_935() >= 160;
					else
						flag = num == func_1114();
				
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

const char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x27C13 Hash - 0xA17D549C ^0x1070BB1B
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

int func_943(Hash hParam0) // Position - 0x27D5E Hash - 0x497B15BA ^0x497B15BA
{
	switch (hParam0)
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

void func_944(int iParam0, int iParam1) // Position - 0x27DAE Hash - 0x2FE2A1EE ^0xFDF1F02E
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 - Global_1946054.f_2657.f_26.f_6 && iParam0;
	return;
}

void func_945(int iParam0, int iParam1) // Position - 0x27DDB Hash - 0xB0EA57B9 ^0x395CD962
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 || iParam0;
	return;
}

BOOL func_946(Hash hParam0) // Position - 0x27DFC Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_678(hParam0) == joaat("WEAPON");
}

BOOL func_947(Hash hParam0) // Position - 0x27E10 Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_24() != -1)
		return false;

	if (func_758(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_952(hParam0, &unk, 1, false, false);

	return func_550(hParam0, 1, false);
}

void func_948(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x27E54 Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_678(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_761(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_364(weaponHash))
	{
		if (func_24() == -1)
			func_762(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_742(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_809(hParam0, iParam1, false, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_949(Hash hParam0, var uParam1) // Position - 0x27EFB Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_757(hParam0, 58855631))
	{
		func_1066(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

int func_950(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x27F29 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_686(hParam0, 0))
		return 0;

	if (!func_482(false))
		bParam2 = true;

	if (bParam2 || !func_1115(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_664(bParam3), hParam0);
}

int func_951(Hash hParam0, BOOL bParam1) // Position - 0x27F77 Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_688(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_664(bParam1), hParam0, false);
}

BOOL func_952(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x27FA1 Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_1116(&hParam0);

	if (!func_686(hParam0, 0))
		return 0;

	if (!func_482(false))
		bParam3 = true;

	if (func_946(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_679(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_478(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return 0;
			else if (func_479(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return 0;
		
			if (func_680(hParam0, true))
				if (!func_478(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return 0;
				else if (func_479(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return 0;
		}
		else if (!func_1117(hParam0, &unk27, false))
		{
			return 0;
		}
	
		return 1;
	}

	num = func_950(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	if (bParam3 || !func_1115(hParam0))
		inventoryItemCountWithItemid = func_663(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_664(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return 1;

	return 0;
}

Hash func_953(Hash hParam0, int iParam1) // Position - 0x280E7 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_686(hParam0, 0))
		return 0;

	num = func_678(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_757(hParam0, 1399091007))
	{
		func_1009(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_954(Hash hParam0, BOOL bParam1) // Position - 0x28161 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_1118(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_1119(&unk, func_679(false));

	if (!func_1120(&unk, &num, &num2, false))
		return 0;

	func_1012(num);
	return num2;
}

int func_955() // Position - 0x281BF Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_956(Hash hParam0) // Position - 0x281D1 Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_957(int iParam0) // Position - 0x281DF Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_24() != -1)
		return;

	num = func_1121(iParam0);
	value = func_1122(iParam0);

	if (Global_1347477.f_117 || !func_328(31) || !func_1123(num))
		return;

	if (value <= 0f)
		return;

	if (func_1124(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_1125(num, Global_40.f_11095.f_11[num] + value, false);
	func_843(MISC::VAR_STRING(6, func_1126(iParam0), value), "itemtype_textures", func_1127(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

Hash func_958(int iParam0) // Position - 0x282DE Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

int func_959(Hash hParam0, int iParam1) // Position - 0x28397 Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_1128(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_960(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x283C6 Hash - 0xF20034E5 ^0xF718A84A
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_753() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1129(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1130(), 12);
			break;
	
		case -1531394072:
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_EX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", iParam4, iParam5);
			break;
	
		case joaat("dino_bones"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_DB_COMPLETE";
			else if (func_992() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1131(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_992(), 30);
			break;
	
		case joaat("taxidermy"):
			if (iParam2 == 3)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 4)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_VACATION");
			else if (iParam2 == 5)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_ON_VACATION");
			else if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			else if (iParam2 == 8)
				sParam3 = "COL_TX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_959(iParam6, 20));
			break;
	
		case 1995362678:
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_LF_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1132(), 13);
			break;
	
		case joaat("rock_carvings"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_RC_COMPLETE";
			else if (func_993() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1133(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_993(), 10);
			break;
	}

	return sParam3;
}

BOOL func_961(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x286B3 Hash - 0xC978E890 ^0x1621426E
{
	if (hParam2 == joaat("CIGARETTE_CARDS"))
		if (hParam1 == joaat("col_cc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_cc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_cc_intro_pre"));
	else if (hParam2 == joaat("dino_bones"))
		if (hParam1 == joaat("col_db_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_db_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_db_intro_pre"));
	else if (hParam2 == joaat("rock_carvings"))
		if (hParam1 == joaat("col_rc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_rc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_rc_intro_pre"));

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_REMOVE_ENTRY(3, hParam1);

	return true;
}

BOOL func_962(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x28760 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_963(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x2878C Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_964(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x287DB Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_1134(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_550(hash, 1, false) || func_1136(func_1135(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_1134(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_1134(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_992() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1137(i)), func_1137(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_1131() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1137(i)), func_1137(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1137(i)), func_1137(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_1002(iParam3, func_1138(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_998(hash) - iParam7 >= func_959(iParam3, func_1139(i));
				else
					flag = func_998(hash) >= func_959(iParam3, func_1139(i));
			else if (hParam4 == hash)
				flag = func_998(hash) + iParam7 >= func_959(iParam3, func_1139(i));
			else
				flag = func_998(hash) >= func_959(iParam3, func_1139(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_1141(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
				flag = true;
			else if (iParam5 == 8)
				flag = true;
			else
				flag = false;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0)), flag, true, false);
		}
	
		if (hParam2 == joaat("rock_carvings"))
		{
			if (i == 0)
			{
				flag = func_993() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1143(i)), func_1143(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_1133() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1143(i)), func_1143(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1143(i)), func_1143(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_1002(iParam3, func_1138(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_998(hash) - iParam7 >= 1;
				else
					flag = func_1144(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_1144(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1145(hash)), func_1145(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_965(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x28B50 Hash - 0x3C34F826 ^0x883ADF28
{
	BOOL flag;

	flag = false;

	if (iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("CIGARETTE_CARDS"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == -1531394072)
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == 1995362678)
	{
		if (func_1132() >= 13)
			flag = true;
		else
			flag = false;
	
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", flag, true, false);
	}

	if (iParam3 == 7 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 || iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("taxidermy"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", flag, true, false);

	return true;
}

BOOL func_966(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x28C59 Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_37(func_26(0)) && func_1146(0) == 1 || func_1146(0) == 8 || func_1146(0) == 6)
		iParam3 = 7;

	if (hParam2 == joaat("dino_bones") || hParam2 == 1995362678 || hParam2 == joaat("rock_carvings"))
	{
		if (iParam3 == 7)
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
	}
	else if (hParam2 == joaat("taxidermy"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
			}
		}
	}

	return true;
}

int func_967(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x28CF9 Hash - 0x51CE9407 ^0x19439D00
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam7;
	num.f_1 = sParam8;
	num.f_2 = sParam9;
	num.f_3 = iParam11;
	num.f_4 = iParam4;
	num.f_4.f_1 = iParam6;
	num.f_4.f_2 = sParam5;
	num2.f_7 = 1;
	num2 = iParam10;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam12, bParam13);
	return num3;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Hash hParam0) // Position - 0x28D70 Hash - 0xA17D549C ^0x852A6C70
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return "COL_CC_INV_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return "COL_CC_ACT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return "COL_CC_GRL_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return "COL_CC_ART_SET";
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return "COL_CC_LND_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return "COL_CC_PAM_SET";
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return "COL_CC_SPT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return "COL_CC_AML_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return "COL_CC_PLT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return "COL_CC_GUN_SET";
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return "COL_CC_HOR_SET";
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return "COL_CC_VEH_SET";
	
		default:
		
	}

	return "";
}

void func_969(int iParam0) // Position - 0x28E1F Hash - 0x48EBE6BD ^0x358C7E90
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_40.f_7857[num2];
	MISC::SET_BIT(&address, offset);
	Global_40.f_7857[num2] = address;
	return;
}

void func_970(int iParam0) // Position - 0x28E59 Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_331() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_318("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_532(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_331() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_318("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_532(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_331() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_318("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_532(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_331() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_318("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_532(589, false);
			break;
	
		case 6:
			break;
	
		case 7:
			break;
	
		case 8:
			break;
	
		case 9:
			break;
	
		case 10:
			break;
	
		case 11:
			func_1147(true);
			break;
	
		case 12:
			break;
	
		case 13:
			break;
	
		case 14:
			break;
	
		case 15:
			break;
	
		case 16:
			break;
	
		case 17:
			break;
	
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1148(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1148(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1148(3);
			break;
	
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
	
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
	
		case 23:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
	
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
		
			if (func_24() == -1)
			{
				if (!func_1025(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_1155(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_31())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_550(hash, 1, false))
						func_802(hash, 1, 752097756);
				
					func_468(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
				}
			}
			break;
	
		case 25:
			break;
	
		case 26:
			break;
	
		case 27:
			break;
	
		case 28:
			break;
	
		case 29:
			break;
	
		case 30:
			break;
	
		case 31:
			break;
	
		case 32:
			break;
	
		case 33:
			func_1149(true);
			break;
	
		case 34:
			func_1150(true);
			break;
	
		case 35:
			func_1151(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_1152(false);
			break;
	
		case 38:
			func_1153(false);
			break;
	
		case 39:
			func_1154(false);
			break;
	
		case 40:
			break;
	
		case 41:
			break;
	
		case 42:
			break;
	
		case 43:
			break;
	
		case 44:
			break;
	
		case 45:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
	
		case 46:
			func_1156();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_24() == -1)
				if (!func_550(1013902307, 1, false))
					func_802(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_24() == -1)
				if (!func_550(786809402, 1, false))
					func_802(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_24() == -1)
			{
				if (!func_550(1013902307, 1, false))
					func_802(1013902307, 1, 752097756);
			
				if (!func_550(142640135, 1, false))
					func_802(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_24() == -1)
			{
				if (!func_550(786809402, 1, false))
					func_802(786809402, 1, 752097756);
			
				if (!func_550(-518019409, 1, false))
					func_802(-518019409, 1, 752097756);
			}
			break;
	
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
	
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
	
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
	
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
	
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}

	return;
}

BOOL func_971(Hash hParam0) // Position - 0x29481 Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

void func_972(Hash hParam0) // Position - 0x294A9 Hash - 0x708BD33E ^0xEC251BF0
{
	char* propertyName;
	char* propertyName2;
	Hash value;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		return;

	if (WEAPON::IS_WEAPON_BOW(hParam0))
		return;

	propertyName = "player_newWeaponType";
	propertyName2 = "player_newWeaponTime";

	if (WEAPON::IS_WEAPON_PISTOL(hParam0))
	{
		propertyName = "player_newPistolWeaponType";
		propertyName2 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(hParam0))
	{
		propertyName = "player_newRevolverWeaponType";
		propertyName2 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(hParam0))
	{
		propertyName = "player_newRifleWeaponType";
		propertyName2 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(hParam0))
	{
		propertyName = "player_newShotgunWeaponType";
		propertyName2 = "player_newShotgunWeaponTime";
	}

	DECORATOR::DECOR_SET_INT(Global_35, propertyName, hParam0);
	value = func_121();
	func_40(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_973(Hash hParam0) // Position - 0x29578 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_1157(hParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("ammo_arrow")) <= 0)
			num = 10;
		else
			num = 0;
	}
	else if (WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(hParam0))
			num = 12;
		else
			num = WEAPON::GET_WEAPON_CLIP_SIZE(hParam0) * 4;
	
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
	
		if (pedAmmoByType >= num)
			num = 0;
		else if (pedAmmoByType > 0)
			num = num - pedAmmoByType;
	}

	return num;
}

Hash func_974(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x295F4 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_975(Hash hParam0) // Position - 0x2961A Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_328(50))
			{
				if (!func_328(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_328(51))
			{
				if (!func_328(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_976(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x29686 Hash - 0x4FC4FA99 ^0x540DBE26
{
	var unk;
	BOOL isMP;
	BOOL metaPedType;
	Hash hash;
	int num;
	int num2;
	int num3;
	BOOL flag;
	Hash componentHash;
	int num4;
	int num5;
	int numComponentsInPed;

	if (!func_686(hParam1, 0))
		return false;

	if (func_678(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_24() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_682(hParam1) == -999503751)
		return true;

	num = func_827(hParam1);

	if (num == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_757(hParam1, 866047851))
	{
		num2 = func_654(num, 1);
	
		if (func_904(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num2 /*3*/] != componentHash)
		{
			*uParam2 = -265166256;
			return false;
		}
	
		flag = true;
	}

	switch (num)
	{
		case -1944638739:
			num2 = 35;
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_757(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_695(1868067663, &unk))
			{
				*uParam2 = 939463734;
				return false;
			}
		
			[[fallthrough]];
	
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!flag)
				break;
		
			numComponentsInPed = PED::_GET_NUM_COMPONENTS_IN_PED(pedParam0);
			num5 = func_1096(componentHash, num, metaPedType, isMP);
			num4 = func_1096(Global_1946054.f_1497.f_1[num2 /*3*/], num, metaPedType, isMP);
		
			if ((numComponentsInPed + num5) - num4 > 31)
			{
				*uParam2 = -1608241763;
				return false;
			}
			break;
	
		case 1742327865:
			if (PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(componentHash, metaPedType, isMP) == joaat("neckties") && PED::_IS_META_PED_USING_COMPONENT(pedParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
		
			num2 = 10;
			hash = func_682(Global_1946054.f_1497.f_1[num2 /*3*/]);
		
			if (flag && hash == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
	
		case 1900541263:
			num2 = 36;
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
		
			if (PED::_IS_META_PED_USING_COMPONENT(pedParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
	
		case 1958421083:
			hash = func_682(hParam1);
			num2 = 36;
			num3 = 35;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_757(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_1093(Global_1946054.f_1497.f_1[num2 /*3*/]))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			break;
	}

	*uParam2 = 0;
	return true;
}

void func_977() // Position - 0x29996 Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_978() // Position - 0x299B7 Hash - 0xDC6E219D ^0xBD2A18DD
{
	float num;
	var unk;

	num = Global_40.f_11095.f_44;
	unk = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num - Global_40.f_11095.f_69);
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - unk);
	return;
}

int func_979() // Position - 0x29A0C Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_550(func_1158(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_980(Hash hParam0) // Position - 0x29A3E Hash - 0xBD10D1A2 ^0xAD2FE305
{
	switch (hParam0)
	{
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("provision_earring_silver"):
		case joaat("provision_rs_abalone_shell_fragment"):
			return joaat("provision_talisman_buffalo_horn");
	
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("provision_bracelet_silver"):
		case joaat("provision_rc_quartz_chunk"):
			return joaat("provision_talisman_bear_claw");
	
		case joaat("provision_bracelet_gold"):
		case joaat("provision_cc_vintage_handcuffs"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("provision_talisman_alligator_tooth");
	
		case joaat("provision_rf_wood_cobalt"):
		case joaat("provision_earring_gold"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("provision_talisman_boar_tusk");
	
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("provision_talisman_raven_claw");
	}

	return 0;
}

BOOL func_981(int iParam0, Hash hParam1) // Position - 0x29AD4 Hash - 0x33707815 ^0xEA5B7C5C
{
	Hash hash;
	Hash hash2;

	switch (iParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			if (hParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				hash = joaat("provision_rs_abalone_shell_fragment");
				hash2 = joaat("provision_earring_silver");
			}
			else if (hParam1 == joaat("provision_rs_abalone_shell_fragment"))
			{
				hash = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				hash2 = joaat("provision_earring_silver");
			}
			else
			{
				hash = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				hash2 = joaat("provision_rs_abalone_shell_fragment");
			}
			break;
	
		case joaat("provision_talisman_bear_claw"):
			if (hParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				hash = joaat("provision_rc_quartz_chunk");
				hash2 = joaat("provision_bracelet_silver");
			}
			else if (hParam1 == joaat("provision_rc_quartz_chunk"))
			{
				hash = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				hash2 = joaat("provision_bracelet_silver");
			}
			else
			{
				hash = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				hash2 = joaat("provision_rc_quartz_chunk");
			}
			break;
	
		case joaat("provision_talisman_boar_tusk"):
			if (hParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				hash = joaat("provision_rf_wood_cobalt");
				hash2 = joaat("provision_earring_gold");
			}
			else if (hParam1 == joaat("provision_rf_wood_cobalt"))
			{
				hash = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				hash2 = joaat("provision_earring_gold");
			}
			else
			{
				hash = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				hash2 = joaat("provision_rf_wood_cobalt");
			}
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			if (hParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				hash = joaat("provision_cc_vintage_handcuffs");
				hash2 = joaat("provision_bracelet_gold");
			}
			else if (hParam1 == joaat("provision_cc_vintage_handcuffs"))
			{
				hash = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				hash2 = joaat("provision_bracelet_gold");
			}
			else
			{
				hash = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				hash2 = joaat("provision_cc_vintage_handcuffs");
			}
			break;
	}

	if (func_550(hash, 1, false) && func_550(hash2, 1, false))
		return true;

	return false;
}

Hash func_982(Hash hParam0) // Position - 0x29C35 Hash - 0xB8EC44B7 ^0x8CFD1640
{
	switch (hParam0)
	{
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("provision_trinket_wolf_heart");
	
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_pronghorn_antler");
	
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("provision_trinket_fox_claw");
	
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("provision_trinket_coyote_fang");
	
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("provision_trinket_ram_horn");
	
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_buck_antler");
	
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_elk_antler");
	
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("provision_trinket_cougar_fang");
	
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("provision_trinket_bison_horn");
	
		case joaat("provision_lions_paw"):
			return joaat("provision_trinket_lion_paw");
	
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_moose_antler");
	
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("provision_trinket_beaver_tooth");
	
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("provision_trinket_panther_eye");
	
		default:
		
	}

	return 0;
}

BOOL func_983(Hash hParam0, int iParam1) // Position - 0x29CFC Hash - 0xB78A2FC ^0x6E3EB1C7
{
	int num;

	num = func_1159(hParam0);

	if (num != -15)
	{
		func_40(&num, 0, iParam1, 0, 0, 0, 0, false);
		return !func_41(num, true);
	}

	return false;
}

void func_984(int iParam0, const char* sParam1, int iParam2) // Position - 0x29D2E Hash - 0x4DF85B80 ^0xB498AFEF
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_843(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_985(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x29D6F Hash - 0x9636EF60 ^0x355C8D65
{
	int num;
	int value;
	int num2;

	if (iParam0 <= 0)
		return;

	if (bParam1)
	{
		num = BUILTIN::ROUND(BUILTIN::TO_FLOAT(iParam0) * iParam2);
		value = (iParam0 - num) / iParam3;
	
		if (func_1070())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_843(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_1160(num);
			func_1161(num, 0, 0);
		}
	
		func_843(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_216(func_394(joaat("CAREER_CASH")), value);
	}

	return;
}

void func_986(int iParam0) // Position - 0x29E4B Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

void func_987(int iParam0) // Position - 0x29E66 Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

void func_988(int iParam0) // Position - 0x29E81 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

void func_989(int iParam0) // Position - 0x29E9C Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

int func_990(int iParam0) // Position - 0x29EB7 Hash - 0xC69F7374 ^0xCEC8F963
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam0)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_998(hash);
	num3 = func_998(hash2);
	num4 = func_998(hash3);
	num6 = func_999(hash);
	num7 = func_999(hash2);
	num8 = func_999(hash3);

	if (iParam0 != 2)
	{
		num5 = func_998(hash4);
		num9 = func_999(hash4);
	}

	if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam0 != 2)
		if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

void func_991(int iParam0) // Position - 0x2A02A Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_992() // Position - 0x2A045 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_1162(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_993() // Position - 0x2A07E Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_994(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x2A090 Hash - 0x9548C303 ^0x2CDF6383
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	switch (hParam0)
	{
		case joaat("taxidermy_order_05"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_02"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_01"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			break;
	
		case joaat("taxidermy_order_04"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_03"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
	}

	if (hParam0 == joaat("taxidermy_order_01"))
	{
		if (bParam3)
			if (func_1144(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1144(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1144(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1144(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_1144(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1144(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1144(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1144(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_1144(hash) && func_1144(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_1144(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1144(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1144(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1144(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_1144(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_1144(hash) && func_1144(hash2) && func_1144(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_1144(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1144(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1144(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1144(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_1144(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_1144(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_1144(hash) && func_1144(hash2) && func_1144(hash3) && func_1144(hash4))
			return true;
	}

	return false;
}

void func_995(Hash hParam0) // Position - 0x2A555 Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_1163(hParam0))
		func_1165(func_1164(hParam0));

	return;
}

int func_996() // Position - 0x2A571 Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_1163(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_997(Hash hParam0, int iParam1, int iParam2) // Position - 0x2A5A9 Hash - 0xED49A216 ^0x75828FFF
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam2)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_998(hash);
	num3 = func_998(hash2);
	num4 = func_998(hash3);
	num6 = func_999(hash);
	num7 = func_999(hash2);
	num8 = func_999(hash3);

	if (iParam2 != 2)
	{
		num5 = func_998(hash4);
		num9 = func_999(hash4);
	}

	if (hParam0 == hash)
		if (num2 + iParam1 >= num6)
			num = num + num6;
		else
			num = num + num2 + iParam1;
	else if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (hParam0 == hash2)
		if (num3 + iParam1 >= num7)
			num = num + num7;
		else
			num = num + num3 + iParam1;
	else if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (hParam0 == hash3)
		if (num4 + iParam1 >= num8)
			num = num + num8;
		else
			num = num + num4 + iParam1;
	else if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam2 != 2)
		if (hParam0 == hash4)
			if (num5 + iParam1 >= num9)
				num = num + num9;
			else
				num = num + num5 + iParam1;
		else if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

int func_998(Hash hParam0) // Position - 0x2A7BC Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_550(hParam0, 1, false))
		num = func_742(hParam0, false, false);

	return num;
}

int func_999(Hash hParam0) // Position - 0x2A7DB Hash - 0xEED5739D ^0xEED5739D
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
	
		case joaat("provision_ro_flower_acunas_star"):
			return 3;
	
		case joaat("provision_ro_flower_cigar"):
			return 7;
	
		case joaat("provision_ro_flower_rat_tail"):
			return 10;
	
		case joaat("PROVISION_HERON_FEATHER"):
			return 20;
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
	
		case joaat("provision_ro_flower_night_scented"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
	
		case joaat("provision_ro_flower_lady_of_night"):
			return 15;
	
		case joaat("provision_ro_flower_sparrows"):
			return 10;
	
		case joaat("provision_ro_flower_queens"):
			return 5;
	
		case joaat("provision_ro_flower_spider"):
			return 5;
	
		case joaat("provision_ro_flower_dragons"):
			return 5;
	
		case joaat("provision_ro_flower_lady_slipper"):
			return 7;
	
		case joaat("provision_ro_flower_moccasin"):
			return 10;
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 30;
	
		case joaat("provision_ro_flower_ghost"):
			return 5;
	
		case joaat("PROVISION_GATOR_EGG"):
			return 25;
	
		default:
		
	}

	return 0;
}

int func_1000(Hash hParam0) // Position - 0x2A8B4 Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_1001(Hash hParam0, int iParam1) // Position - 0x2A8C2 Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_1002(Hash hParam0, int iParam1) // Position - 0x2A8D2 Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_1128(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_1003(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x2A901 Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_1002(hParam1, 5) || hParam0 == func_1002(hParam1, 6) || hParam0 == func_1002(hParam1, 7) || hParam0 == func_1002(hParam1, 8) || hParam0 == func_1002(hParam1, 9))
	{
		func_994(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_754(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_756(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_1004(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x2A983 Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_1002(hParam1, 5) || hParam0 == func_1002(hParam1, 6) || hParam0 == func_1002(hParam1, 7) || hParam0 == func_1002(hParam1, 8) || hParam0 == func_1002(hParam1, 9))
	{
		if (func_994(hParam1, hParam0, &num, false, 0, false))
		{
			func_754(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_756(51, 0, 0, num, func_959(hParam1, 20), 1, 0);
		}
		else
		{
			func_754(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_756(51, 0, 0, num, func_959(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_1005() // Position - 0x2AA44 Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_260(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

void func_1006(Hash hParam0) // Position - 0x2AA6D Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_1007(Hash hParam0) // Position - 0x2AA7C Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_1166(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_1008(Hash hParam0) // Position - 0x2AA95 Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

void func_1009(Hash hParam0, var uParam1, var uParam2) // Position - 0x2AAA4 Hash - 0x38E6C2DD ^0xA4FE6475
{
	*uParam1 = 0;
	*uParam2 = 0;

	switch (hParam0)
	{
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("repeater_ammo_box_express");
			*uParam2 = joaat("ammo_repeater_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("repeater_ammo_box");
			*uParam2 = joaat("ammo_repeater");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("revolver_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_revolver_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("pistol_ammo_box");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("revolver_ammo_box_used");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("shotgun_ammo_box_used");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("rifle_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_rifle_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("pistol_ammo_box_express");
			*uParam2 = joaat("ammo_pistol_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("rifle_ammo_box_express");
			*uParam2 = joaat("ammo_rifle_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("repeater_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_repeater_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("shotgun_ammo_box_slug");
			*uParam2 = joaat("ammo_shotgun_slug");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("rifle_ammo_box");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_ammo_box");
			*uParam2 = joaat("ammo_22");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("revolver_ammo_box");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("revolver_ammo_box_express");
			*uParam2 = joaat("ammo_revolver_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("rifle_ammo_box_used");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("pistol_ammo_box_used");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("pistol_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_pistol_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("shotgun_ammo_box");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("repeater_ammo_box_used");
			*uParam2 = joaat("ammo_repeater");
			break;
	}

	return;
}

BOOL func_1010(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x2ACB0 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_664(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_1011(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2ACD7 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_1012(int iParam0) // Position - 0x2AD12 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

float func_1013() // Position - 0x2AD33 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_1167())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_1168(2);

	if (Global_1347477.f_119)
		return func_1168(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_1169();
	num3 = func_1170();
	num4 = func_1171();
	num5 = func_1172();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_1173());
	num8 = func_1168(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_1174(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_1175(3, num9, num9 > 100f);
	return func_1176(num8, -100f, 100f);
}

float func_1014() // Position - 0x2AE5C Hash - 0x951B1CCC ^0x7B312694
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

	if (func_1167())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_1168(1);

	if (Global_1347477.f_119)
		return func_1168(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_1169();
	num3 = func_1170();
	num4 = func_1171();
	num5 = func_1172();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_1173());
	num8 = func_1168(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_1174(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_1175(2, num9, num9 > 100f);
	return func_1176(num8, -100f, 100f);
}

float func_1015() // Position - 0x2AF85 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_1167())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_1168(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_1177())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_1178())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_1168(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_1169();
	num3 = func_1170();
	num4 = func_1171();
	num5 = func_1172();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_1173());
	num8 = func_1168(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_1174(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_1175(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_1168(0);

	return func_1176(num8, -100f, 100f);
}

BOOL func_1016(int iParam0, int iParam1) // Position - 0x2B12C Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_1017(Hash hParam0) // Position - 0x2B145 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_1018(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x2B155 Hash - 0x86E39CDA ^0xCF922D1
{
	!func_686(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_952(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_482(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_664(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

int func_1019(int iParam0, BOOL bParam1) // Position - 0x2B1B7 Hash - 0x6C404ADF ^0x7D516F33
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946054.f_2657.f_21;
	
		case -1719060085:
			return Global_1946054.f_2657.f_24;
	
		case -999503751:
			if (bParam1)
				return Global_1946054.f_2657.f_20;
			else
				return func_1179();
			break;
	
		case -525676072:
			return Global_1946054.f_2657.f_22;
	
		case -413129408:
			return Global_1946054.f_2657.f_25;
	
		case 81053684:
			return Global_1946054.f_2657.f_23;
	}

	return 0;
}

eStackSize func_1020(Hash hParam0) // Position - 0x2B246 Hash - 0x9830D1FB ^0x9830D1FB
{
	switch (hParam0)
	{
		case -2114499732:
			return 18;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
	
		case -1951220140:
			return 78;
	
		case -1914506115:
			return 71;
	
		case -1826731591:
			return 24;
	
		case -1725704631:
			return 81;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
	
		case -1611873049:
			return 91;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
	
		case -1476781101:
			return 10;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
	
		case -1303643297:
			return 86;
	
		case -1300731953:
			return 74;
	
		case -1243402388:
			return 66;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
	
		case -1205612021:
			return 70;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
	
		case -978578725:
			return 94;
	
		case -926815459:
			return 72;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
	
		case -769081407:
			return 16;
	
		case -659341240:
			return 85;
	
		case -535599244:
			return 89;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
	
		case -409616653:
			return 65;
	
		case -389591806:
			return 73;
	
		case -361635024:
			return 62;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
	
		case -291256376:
			return 23;
	
		case -272211555:
			return 61;
	
		case -55563408:
			return 64;
	
		case -19271249:
			return 82;
	
		case 65931886:
			return 67;
	
		case 162509669:
			return 3;
	
		case 166243423:
			return 0;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
	
		case 214175524:
			return 84;
	
		case 274995506:
			return 5;
	
		case 294553332:
			return 11;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
	
		case 411856831:
			return 88;
	
		case 439606975:
			return 14;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
	
		case 523337834:
			return 80;
	
		case 594312243:
			return 92;
	
		case 624063935:
			return 9;
	
		case 635948769:
			return 4;
	
		case 688004210:
			return 20;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
	
		case 800827126:
			return 19;
	
		case 802495462:
			return 75;
	
		case 842905332:
			return 77;
	
		case 890706995:
			return 93;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
	
		case 1156438275:
			return 90;
	
		case 1160643979:
			return 8;
	
		case 1164374808:
			return 7;
	
		case 1201189539:
			return 28;
	
		case 1257427489:
			return 83;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
	
		case 1351927599:
			return 21;
	
		case 1352942778:
			return 26;
	
		case 1371678229:
			return 68;
	
		case 1383300684:
			return 1;
	
		case 1389254668:
			return 58;
	
		case 1460520700:
			return 76;
	
		case 1511551084:
			return 79;
	
		case 1560492757:
			return 15;
	
		case 1661121390:
			return 6;
	
		case 1784889667:
			return 13;
	
		case 1788874135:
			return 12;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
	
		case 1902428294:
			return 17;
	
		case 1964379549:
			return 27;
	
		case 2032023096:
			return 22;
	
		case 2038771525:
			return 87;
	
		case 2051441678:
			return 2;
	
		case 2102263084:
			return 69;
	
		case 2119049229:
			return 25;
	
		default:
		
	}

	return -1;
}

BOOL func_1021(eStackSize essParam0) // Position - 0x2B659 Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (essParam0 < 0 || essParam0 >= 95)
		return false;

	return true;
}

void func_1022(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2B678 Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_1021(essParam0))
		return;

	if (func_1180(essParam0))
		return;

	if (!func_1181(essParam0))
		func_1182(essParam0, true, false);

	hash = func_1100(essParam0);

	if (hash != 0 && !(essParam0 >= 0 && essParam0 <= 5))
		if (func_1183(essParam0, 512))
			func_657(30, hash, 0, 0, false);

	if (!func_1184() && !bParam1 && !func_25(0, false, true))
		func_851(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_1185(essParam0, 6);

	if (bParam2)
		if (!func_25(0, false, true))
			func_392(true, 4);

	return;
}

BOOL func_1023(int iParam0, BOOL bParam1) // Position - 0x2B73E Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_1019(iParam0, false) < func_1186(iParam0, bParam1);
}

BOOL func_1024(Hash hParam0, var uParam1) // Position - 0x2B756 Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_682(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_1025(int iParam0) // Position - 0x2B79A Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_654(iParam0, 1) /*3*/] != Global_1946054.f_57[func_654(iParam0, 1) /*11*/];
}

void func_1026(int iParam0, Hash hParam1) // Position - 0x2B7D2 Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_757(hParam1, 130796156))
	{
		func_1187(hParam1, false);
	}
	else if (func_757(hParam1, 930141731))
	{
		func_1187(hParam1, true);
		func_1188(iParam0);
	}

	return;
}

void func_1027(var uParam0, int iParam1) // Position - 0x2B80D Hash - 0x84556899 ^0xA18AFCFA
{
	int i;

	if (iParam1 == 0)
		return;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->f_1[i] == iParam1)
			return;
	
		if (iParam1 == joaat("LOOTER_PED_IS_MALE") && uParam0->f_1[i] == joaat("LOOTER_PED_IS_FEMALE") || iParam1 == joaat("LOOTER_PED_IS_FEMALE") && uParam0->f_1[i] == joaat("LOOTER_PED_IS_MALE") || iParam1 == joaat("LOOT_TYPE_NORMAL") && uParam0->f_1[i] == joaat("LOOT_TYPE_SKINNING") || iParam1 == joaat("LOOT_TYPE_SKINNING") && uParam0->f_1[i] == joaat("LOOT_TYPE_NORMAL"))
		{
			uParam0->f_1[i] = iParam1;
			return;
		}
	}

	if (*uParam0 >= 10)
		return;

	uParam0->f_1[*uParam0] = iParam1;
	*uParam0 = *uParam0 + 1;
	return;
}

int func_1028(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x2B8EE Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_1189(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_1190(anParam2, hParam0, num);
	return 1;
}

int func_1029(int iParam0) // Position - 0x2B957 Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x2B969 Hash - 0xA17D549C ^0x690C0657
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
	
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
	
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
	
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
	
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
	
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
	
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
	
		case 7:
			return "PROVISION_FISH_MUSKIE";
	
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
	
		case 9:
			return "PROVISION_FISH_PERCH";
	
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
	
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
	
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
	
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
	
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
	
		default:
		
	}

	return "FISHTYPE_UNKNOWN";
}

Hash func_1031(Hash hParam0) // Position - 0x2BA40 Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_1191(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

BOOL func_1032() // Position - 0x2BA6A Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_1033(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2BA77 Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = iParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_1034(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2BAE1 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_1035(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x2BAF8 Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE3;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE3;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE3;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE3;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = { outData.f_2[i /*3*/] };
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_1036(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x2BBEB Hash - 0xEAB06984 ^0xE37CC970
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	unk = 10;

	if (bParam2 && func_24() == false && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return false;

	if (!func_1192(hParam0, hParam1, &unk, &num) || num < 1)
		return false;

	for (i = 0; i < num; i = i + 1)
	{
		unlockHash = unk[i];
	
		if (unlockHash == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		{
			return true;
		}
	}

	return false;
}

BOOL func_1037(Hash hParam0, Hash hParam1) // Position - 0x2BC6A Hash - 0xD62E0B98 ^0xD62E0B98
{
	BOOL flag;
	int num;
	var unk;
	Hash unlockHash;
	int i;

	if (func_24() != -1)
		return false;

	unk = 10;

	if (func_1192(hParam0, hParam1, &unk, &num))
	{
		for (i = 0; i < num; i = i + 1)
		{
			unlockHash = unk[i];
		
			if (unlockHash == 0)
			{
			}
			else
			{
				if (!flag)
					if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						flag = true;
			
				UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, true);
			}
		}
	}

	return flag;
}

void func_1038(BOOL bParam0) // Position - 0x2BCD3 Hash - 0x69118B05 ^0x7131E351
{
	var unk;
	int i;
	int num;
	int num2;
	int num3;
	Hash hash;

	if (bParam0)
	{
		func_525(2032023096, 1, false, false, false, 752097756, 0, 0, 0, false);
		func_525(joaat("provision_talisman_eagle_talon"), 1, true, false, false, 752097756, 0, 0, 0, false);
		func_525(joaat("provision_trinket_iguana_scale"), 1, true, false, false, 752097756, 0, 0, 0, false);
		func_1039();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1193(2032023096);
		func_528(joaat("provision_talisman_eagle_talon"));
		func_824(joaat("provision_trinket_iguana_scale"), 1, true, -142743235, true);
		func_1195(146323340, func_1194());
		unk = { func_1196() };
	
		if (_STOPWATCH_IS_INITIALIZED(&unk) == -1387633835)
		{
			func_1198(&unk);
			func_1199(unk);
		}
	
		num = joaat("breed_tennesseewalker_chestnut");
		num2 = joaat("a_c_horse_tennesseewalker_chestnut");
		num3 = 1;
		func_1200(&num, &num2, &num3);
	
		for (i = 0; i < 7; i = i + 1)
		{
			if (func_1201(i) == joaat("breed_thoroughbred_reversedappleblack"))
			{
				func_1202(i, num);
				func_1203(i, num2);
				func_1204(i, num3);
				func_1205(i, 0);
			
				if (func_1206(i))
					func_1207(i);
			
				hash = func_1208(num2);
				func_1209(i, hash);
			}
		}
	
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}

	return;
}

int func_1039() // Position - 0x2BE13 Hash - 0x8A3E9350 ^0x1E0E30DC
{
	if (!func_1210(-1898635967, func_1194(), true))
		return 0;

	if (func_32())
		if (!func_1210(146323340, func_1194(), false))
			return 0;

	return 1;
}

void func_1040() // Position - 0x2BE4F Hash - 0x7B8A0507 ^0x807104D6
{
	func_537(joaat("weapon_pistol_volcanic"));
	func_537(joaat("WEAPON_SHOTGUN_PUMP"));
	func_537(joaat("weapon_rifle_varmint"));
	return;
}

void func_1041(BOOL bParam0) // Position - 0x2BE72 Hash - 0xBACB87F5 ^0xBE63DBD4
{
	int i;
	int num;
	int num2;
	int num3;
	Hash hash;

	if (bParam0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
			return;
	
		func_525(-1080874779, 3, false, false, false, 752097756, 0, 0, 0, false);
		func_525(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, false, false, false, 752097756, 0, 0, 0, false);
		func_525(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, false, false, false, 752097756, 0, 0, 0, false);
		func_525(joaat("consumable_tender_pork_wild_mint_cooked"), 5, false, false, false, 752097756, 0, 0, 0, false);
		func_525(joaat("consumable_prime_beef_oregano_cooked"), 5, false, false, false, 752097756, 0, 0, 0, false);
		func_525(joaat("consumable_game_meat_thyme_cooked"), 5, false, false, false, 752097756, 0, 0, 0, false);
		func_525(joaat("consumable_herb_oleander_sage"), 5, false, false, false, 752097756, 0, 0, 0, false);
		func_525(joaat("PROVISION_ANIMAL_FAT"), 5, false, false, false, 752097756, 0, 0, 0, false);
		func_525(joaat("consumable_special_horse_reviver_crafted"), 3, false, false, false, 752097756, 0, 0, 0, false);
		func_525(joaat("consumable_crafted_super_meal"), 3, false, false, false, 752097756, 0, 0, 0, false);
		func_525(joaat("consumable_oat_cakes"), 3, false, false, false, 752097756, 0, 0, 0, false);
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
			return;
	
		func_824(-1080874779, 3, true, -142743235, true);
		func_824(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, true, -142743235, true);
		func_824(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, true, -142743235, true);
		func_824(joaat("consumable_tender_pork_wild_mint_cooked"), 5, true, -142743235, true);
		func_824(joaat("consumable_prime_beef_oregano_cooked"), 5, true, -142743235, true);
		func_824(joaat("consumable_game_meat_thyme_cooked"), 5, true, -142743235, true);
		func_824(joaat("consumable_herb_oleander_sage"), 5, true, -142743235, true);
		func_824(joaat("PROVISION_ANIMAL_FAT"), 5, true, -142743235, true);
		func_824(joaat("consumable_special_horse_reviver_crafted"), 3, true, -142743235, true);
		func_824(joaat("consumable_crafted_super_meal"), 3, true, -142743235, true);
		func_824(joaat("consumable_oat_cakes"), 10, true, -142743235, true);
		num = joaat("breed_tennesseewalker_chestnut");
		num2 = joaat("a_c_horse_tennesseewalker_chestnut");
		num3 = 1;
		func_1200(&num, &num2, &num3);
	
		for (i = 0; i < 7; i = i + 1)
		{
			if (func_1201(i) == joaat("breed_ardennes_irongreyroan"))
			{
				func_1202(i, num);
				func_1203(i, num2);
				func_1204(i, num3);
				func_1205(i, 0);
			
				if (func_1206(i))
					func_1207(i);
			
				hash = func_1208(num2);
				func_1209(i, hash);
			}
		}
	
		func_1039();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}

	return;
}

void func_1042(int iParam0, const char* sParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x2C0FB Hash - 0x144F6B91 ^0x144F6B91
{
	func_1211(iParam0);

	if (bParam3)
		func_850(iParam0, sParam1, iParam2);

	return;
}

BOOL func_1043(int iParam0) // Position - 0x2C118 Hash - 0x9921E361 ^0xC192E1E1
{
	return Global_40.f_12004.f_10 && iParam0 != false;
}

void func_1044(int iParam0) // Position - 0x2C12D Hash - 0x68BAC935 ^0x8D460FEA
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 - Global_40.f_12004.f_10 && iParam0;
	return;
}

// Unhandled jump detected. Output should be considered invalid
struct<14> func_1045() // Position - 0x2C151 Hash - 0x43D0CF6E ^0x5F313D59
{
	int num;
	int num2;
	int i;
	var unk;
	var unk15;
	var unk37;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (func_1010("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_1011(&unk, i, num, num2))
				goto 0x88;
		
			if (unk.f_4 != joaat("weapon_revolver_doubleaction"))
			{
			}
			else if (func_479(unk.f_4, &unk15, unk.f_9))
			{
			}
			else
			{
				func_1012(num);
				return unk;
			}
		}
	
		func_1012(num);
	}

	unk37.f_9 = joaat("SLOTID_NONE");
	return unk37;
}

void func_1046(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5) // Position - 0x2C1FE Hash - 0x81F08C4D ^0x6CF7CF9C
{
	var unk;
	var unk6;
	var unk20;

	unk = { uParam1 };
	unk.f_4 = hParam5;
	unk6.f_9 = joaat("SLOTID_NONE");

	if (func_1212(uParam1, hParam5, &unk6, false))
		func_481(unk6.f_4, &unk6, &unk, -1, -142743235, true, false);

	func_1018(hParam0, &unk20, &unk, 1, 752097756, false);
	func_1213(unk20, true);
	return;
}

BOOL func_1047(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x2C262 Hash - 0x17E58D7C ^0xB0311DE1
{
	var unk;
	int num;
	int num2;
	var unk19;
	var unk33;
	int i;
	int num3;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return false;

	unk = { func_1118(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_1119(&unk, func_679(false));

	if (!func_1120(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_1011(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_481(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_1012(num);
	num3 < iParam1;
	return true;
}

BOOL func_1048(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2C32D Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_686(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_476(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_1214(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_480(hParam0, unk, unk.f_4, bParam4) };
	return func_481(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

void func_1049(Hash hParam0, int iParam1) // Position - 0x2C39E Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_757(hParam0, 606799272))
			func_1215(hParam0, iParam1);
	
		if (func_757(hParam0, -1112814642) && func_757(hParam0, -1697809989))
			func_778(hParam0, iParam1, true, false);
	}

	return;
}

BOOL func_1050(Hash hParam0, int iParam1) // Position - 0x2C3F1 Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_1216(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_682(hParam0) != -999503751)
			func_1217(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_682(hParam0) != -999503751)
		func_1217(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_1218(hParam0, true);
	return 1;
}

void func_1051() // Position - 0x2C4D7 Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_24() == -1)
	{
		for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
		{
			Global_26796[i] = Global_1946054.f_2657[i];
		}
	
		Global_26796.f_20 = Global_1946054.f_2657.f_20;
		Global_26796.f_21 = Global_1946054.f_2657.f_21;
		Global_26796.f_22 = Global_1946054.f_2657.f_22;
		Global_26796.f_23 = Global_1946054.f_2657.f_23;
		Global_26796.f_24 = Global_1946054.f_2657.f_24;
		Global_26796.f_19 = Global_1946054.f_2657.f_19;
		return;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		Global_36638.f_45.f_350[i] = Global_1946054.f_2657[i];
	}

	Global_36638.f_45.f_350.f_20 = Global_1946054.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946054.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946054.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946054.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946054.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946054.f_2657.f_19;
	return;
}

void func_1052(BOOL bParam0, BOOL bParam1) // Position - 0x2C60D Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_1219(0);

	if (bParam0)
	{
		func_665(8);
		func_665(512);
	}
	else
	{
		func_665(8);
		func_665(16);
	}

	return;
}

int func_1053(int iParam0) // Position - 0x2C640 Hash - 0x68D06F4A ^0x14E98A5E
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_829();

	if (func_24() == -1)
		if (iParam0 == 1160113249)
			num = 1583685020;
		else
			num = -572793833;
	else
		num = -2109211296;

	return num;
}

int func_1054(int iParam0) // Position - 0x2C683 Hash - 0xE69D9203 ^0x5667FA7E
{
	switch (iParam0)
	{
		case -2125161702:
			return 131072;
	
		case -1932005642:
			return 65536;
	
		case -1925540957:
			return 32768;
	
		case -1886898087:
			return 16496;
	
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
	
		case -1678578495:
			return 16384;
	
		case -1674046782:
			return 139376;
	
		case -1283403230:
			return 2048;
	
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
	
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
	
		case -1062102573:
			return 32833;
	
		case -915377750:
			return 1024;
	
		case -884591393:
			return 96;
	
		case -663436545:
			return 112;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
	
		case -376594188:
			return -1;
	
		case -366477279:
			return 0;
	
		case -141044514:
			return 4208;
	
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 128;
	
		case 75507907:
			return 8192;
	
		case 315750675:
			return 524288;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 512;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 256;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
	
		case 836721350:
			return 20480;
	
		case 884232794:
			return 8304;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
	
		case 1024778115:
			return 4096;
	
		case 1042019528:
			return 1136;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
	
		case 1481630954:
			return 262256;
	
		case 1929486675:
			return 262144;
	
		default:
		
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
void func_1055(var uParam0, int iParam1, BOOL bParam2) // Position - 0x2C80B Hash - 0xBA3A30EB ^0xCBF87037
{
	int i;
	Hash hash;
	Hash hash2;
	int num;

	for (i = 0; i < 39; i = i + 1)
	{
		if (func_1220(&uParam0->f_1[i /*3*/], 2))
		{
			num = func_670(i, 1);
		
			if (func_668(i, iParam1))
			{
				hash2 = { func_831(i, -1) };
			
				if (hash2 != Global_1946054.f_57[i /*11*/] && hash2 != 0 && uParam0->f_1[i /*3*/] != hash2 || uParam0->f_1[i /*3*/].f_1 != hash2.f_1)
					uParam0->f_1[i /*3*/] = { hash2 };
			
				if (func_667(num, 4))
					func_672(num, 4, 6);
			}
			else
			{
				func_671(num, 4, 6);
				goto 0xC9;
			}
		}
	
		if (bParam2)
		{
			hash = Global_1946054.f_57[i /*11*/];
			uParam0->f_1[i /*3*/] = { hash };
		}
	}

	return;
}

BOOL func_1056(int iParam0) // Position - 0x2C8E0 Hash - 0x9D8F4245 ^0x3C0C5BB1
{
	int num;
	var unk;

	Global_1946054.f_964.f_2 = 0;

	if (func_24() == -1)
		num = -380731322;
	else
		num = 1226838104;

	func_1221(&(Global_1946054.f_964), num, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &(Global_1946054.f_964), 1409451727))
		return false;

	return true;
}

BOOL func_1057(Hash hParam0, int iParam1, var uParam2) // Position - 0x2C94B Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_1058(int iParam0, int iParam1) // Position - 0x2C95C Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_24() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_1059(int iParam0) // Position - 0x2C98F Hash - 0x3E25647A ^0x3E25647A
{
	if (func_24() != -1)
		if (func_1016(iParam0, 4))
			return false;
	else if (func_1016(iParam0, 2))
		return false;

	return true;
}

BOOL func_1060(int iParam0) // Position - 0x2C9BF Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_1016(iParam0, 65536) && !func_1016(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_1016(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_1016(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_1061() // Position - 0x2CA6B Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

void func_1062(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x2CA7A Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

int func_1063(int iParam0) // Position - 0x2CAAB Hash - 0x8826FB16 ^0x38085FBA
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

Hash func_1064(int iParam0) // Position - 0x2CAC2 Hash - 0xB22BA10D ^0x6122E986
{
	switch (iParam0)
	{
		case 1:
			return joaat("sp_chal_band_root");
	
		case 2:
			return joaat("sp_chal_herb_root");
	
		case 4:
			return joaat("sp_chal_horse_root");
	
		case 8:
			return joaat("sp_chal_shot_root");
	
		case 16:
			return joaat("sp_chal_weap_root");
	
		default:
		
	}

	return 0;
}

BOOL func_1065(Hash hParam0) // Position - 0x2CB18 Hash - 0xBF9BC979 ^0x2C23A458
{
	BOOL flag;
	Hash weaponUnlock;

	if (hParam0 == 0)
		return false;

	flag = false;

	if (func_24() == -1)
	{
		if (func_946(hParam0))
		{
			weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);
			flag = UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock);
		}
		else
		{
			return true;
		}
	}
	else
	{
		flag = UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	}

	return flag;
}

int func_1066(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x2CB62 Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_686(hParam0, 0))
		return 0;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam3;
		return 0;
	}

	!bParam3;
	*uParam2 = outData.f_1;
	return 1;
}

int func_1067(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2CBB0 Hash - 0x7336E6C7 ^0x7336E6C7
{
	int num;
	int inventoryItemCountWithItemid;

	func_1116(&hParam0);

	if (!func_686(hParam0, 0))
		return 0;

	if (!func_482(false))
		bParam2 = true;

	num = func_950(hParam0, uParam1, bParam2, bParam3);

	if (num < 0)
		return 2147483647;

	if (bParam2 || !func_1115(hParam0))
		inventoryItemCountWithItemid = func_663(hParam0, *uParam1, uParam1->f_4, bParam3);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_664(bParam3), hParam0, false);

	if (num > inventoryItemCountWithItemid)
		return num - inventoryItemCountWithItemid;

	return 0;
}

int func_1068(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2CC3C Hash - 0x9C65FCD1 ^0x9391B601
{
	var unk;
	int num;
	int i;
	int collectionId;
	int numInCollection;
	Hash filter;
	int num2;
	var data;
	int size;
	int collectionId2;
	int j;
	Hash hash;
	int num3;

	unk = 15;

	if (func_757(hParam0, -5284486))
	{
		filter = -1;
		filter.f_1 = -1;
		filter.f_2 = -1;
		filter.f_3 = -1;
		filter.f_4 = -1;
		filter.f_5 = -1;
		filter.f_6 = -1;
		filter.f_7 = -1;
		filter.f_8 = -1;
		filter.f_13 = -1;
		filter.f_14 = -1;
		filter.f_15 = -1;
		filter.f_16 = -1;
		filter.f_17 = -1;
		filter = hParam0;
		collectionId = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &filter, &numInCollection);
	
		if (collectionId != -1)
		{
			if (numInCollection > 0)
				bParam4 = true;
		
			INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(collectionId);
		}
	
		num2 = 0;
	
		if (func_1222(hParam0, hParam1, &unk, &num, bParam2, bParam3))
		{
			for (i = 0; i < num; i = i + 1)
			{
				if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
				{
					num2 = num2 + unk[i /*2*/].f_1;
					break;
				}
			
				if (unk[i /*2*/] == 0)
					break;
			}
		}
	
		data = -1;
		data.f_1 = -1;
		data.f_2 = -1;
		data.f_3 = -1;
		data.f_4 = -1;
		data.f_5 = -1;
		data.f_6 = -1;
		data.f_7 = -1;
		data.f_8 = -1;
		num3 = func_810(hParam0, 862142561);
	
		if (num3 != 0)
		{
			data.f_8 = num3;
			collectionId2 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&data, &size, 1);
		
			if (collectionId2 != -1)
			{
				for (j = 0; j < size; j = j + 1)
				{
					hash = func_813(j, collectionId2);
				
					if (func_686(hash, 0) && hash != hParam0)
					{
						if (bParam4)
						{
							num2 = num2 + func_1068(hash, -915411861, true, false, false);
						}
						else
						{
							filter = hash;
							collectionId = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &filter, &numInCollection);
						
							if (collectionId != -1)
							{
								if (numInCollection == 0)
									num2 = num2 + func_1068(hash, -915411861, true, false, false);
							
								INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(collectionId);
							}
						}
					}
				}
			
				ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(collectionId2);
			}
		}
	
		return num2;
	}

	if (!func_1222(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

BOOL func_1069(int iParam0) // Position - 0x2CE9E Hash - 0x891F222E ^0x891F222E
{
	if (iParam0 < 0)
		return false;

	return iParam0 <= func_1223(1);
}

BOOL func_1070() // Position - 0x2CEB8 Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_32())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_1071(int iParam0, int iParam1) // Position - 0x2CECF Hash - 0x60CE9C0B ^0x696C2D6F
{
	if (iParam0 != 18 && iParam0 != 7)
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(iParam0)), 1997120069, MISC::VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP", MISC::VAR_STRING(2, func_531(iParam0, false))), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iParam1), 601389479);
	else
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(iParam0)), 1997120069, MISC::VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP_NOS", MISC::VAR_STRING(2, func_531(iParam0, false))), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iParam1), 601389479);

	return;
}

int func_1072() // Position - 0x2CF5D Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_4283.f_325;
}

BOOL func_1073(int iParam0) // Position - 0x2CF6E Hash - 0x2BF73E21 ^0x2BF73E21
{
	return iParam0 > 0 && iParam0 < 13;
}

void func_1074(int iParam0, int iParam1) // Position - 0x2CF84 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

void func_1075(int iParam0, int iParam1) // Position - 0x2CFA4 Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = iParam1;
	return;
}

void func_1076(int iParam0, BOOL bParam1) // Position - 0x2CFC4 Hash - 0x5CF9514E ^0x8B449709
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = bParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/] = bParam1;
	return;
}

void func_1077(int iParam0, Hash hParam1) // Position - 0x2CFEF Hash - 0x634DE727 ^0xC7F71E9D
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = hParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/].f_1 = hParam1;
	return;
}

Hash func_1078(int iParam0) // Position - 0x2D01E Hash - 0x2C59F506 ^0x6E850891
{
	const char* str;
	Hash hashKey;
	Hash hash;

	if (!func_37(iParam0))
		return 0;

	str = func_570(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&str))
		return 0;

	hashKey = MISC::GET_HASH_KEY(&str);
	hash = hashKey;
	return hash;
}

BOOL func_1079(Hash hParam0) // Position - 0x2D057 Hash - 0xD6E12BEB ^0xDB5CAE55
{
	return STATS::_0x4DAC398297981B87(hParam0);
}

BOOL func_1080(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x2D065 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

int func_1081(int iParam0) // Position - 0x2D0BA Hash - 0x69AF6CF8 ^0x64DBA37A
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

void func_1082(BOOL bParam0, eStackSize essParam1, int iParam2, int iParam3) // Position - 0x2D0CD Hash - 0x4C217CF1 ^0x4C217CF1
{
	*iParam3 = func_110(bParam0);
	*essParam1 = func_238(bParam0);
	*iParam2 = func_728(bParam0);
	return;
}

void func_1083(int iParam0, int iParam1) // Position - 0x2D0F0 Hash - 0x676FADFF ^0x1734896
{
	var unk;

	unk = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { unk };
	return;
}

void func_1084(int iParam0, BOOL bParam1) // Position - 0x2D130 Hash - 0x2A73BCD4 ^0xFA31BBCB
{
	if (*iParam0 != -1)
	{
		func_589(*iParam0, -1);
		func_590(*iParam0, 0);
		func_591(*iParam0, 0);
	
		if (MAP::DOES_BLIP_EXIST(Global_36308[*iParam0]))
		{
			if (bParam1)
				MAP::SET_RADAR_ZOOM(Global_36308[*iParam0]);
		
			MAP::REMOVE_BLIP(&Global_36308[*iParam0]);
		}
	}

	*iParam0 = -1;
	return;
}

BOOL func_1085(int iParam0) // Position - 0x2D187 Hash - 0xC62F3EC7 ^0x941BF203
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);

	return false;
}

void func_1086(int iParam0, Hash hParam1) // Position - 0x2D1B0 Hash - 0x24A4BE93 ^0x70B16AB7
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], hParam1);

	return;
}

int func_1087(int iParam0) // Position - 0x2D1E6 Hash - 0xB26DA715 ^0xB26DA715
{
	switch (iParam0)
	{
		case 0:
			return 3;
	
		case 1:
			return 5;
	
		case 2:
			return 26;
	
		case 3:
			return 38;
	
		case 4:
			return 69;
	
		case 5:
			return 76;
	
		case 6:
			return 78;
	
		case 7:
			return 92;
	
		case 8:
			return 105;
	
		case 9:
			return 115;
	
		case 10:
			return 120;
	
		default:
		
	}

	return -1;
}

Hash func_1088(int iParam0) // Position - 0x2D26E Hash - 0xB8EC44B7 ^0xFC24309D
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_MODIFIER_GROUPING_LAGRAS_LEADER");
	
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER");
	
		case 5:
			return joaat("BLIP_MODIFIER_GROUPING_SAINT_DENIS_LEADER");
	
		case 26:
			return joaat("BLIP_MODIFIER_GROUPING_STRAWBERRY_LEADER");
	
		case 38:
			return joaat("BLIP_MODIFIER_GROUPING_BLACKWATER_LEADER");
	
		case 69:
			return joaat("BLIP_MODIFIER_GROUPING_EMERALD_RANCH_LEADER");
	
		case 76:
			return joaat("BLIP_MODIFIER_GROUPING_VALENTINE_LEADER");
	
		case 78:
			return joaat("BLIP_MODIFIER_GROUPING_ANNESBURG_LEADER");
	
		case 92:
			return joaat("BLIP_MODIFIER_GROUPING_VAN_HORN_LEADER");
	
		case 105:
			return joaat("BLIP_MODIFIER_GROUPING_RHODES_LEADER");
	
		case 115:
			return joaat("BLIP_MODIFIER_GROUPING_TUMBLEWEED_LEADER");
	
		case 120:
			return joaat("BLIP_MODIFIER_GROUPING_ARMADILLO_LEADER");
	
		default:
		
	}

	return 0;
}

BOOL func_1089() // Position - 0x2D356 Hash - 0x50F36DAB ^0xF55A49EF
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

void func_1090(int iParam0, int iParam1) // Position - 0x2D387 Hash - 0x19A9221A ^0x79EEA925
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
			if (func_1225(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_1225(&iParam0->f_2[i /*2*/], 1))
					func_1226(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_1091(int iParam0, int iParam1, int iParam2) // Position - 0x2D4B3 Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_1227(iParam0, 1))
		func_1228(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

void func_1092(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2D4FA Hash - 0xE34B9CEC ^0xAFBB60FB
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
			func_907(num2, num);
	
		if (bParam1)
			func_907(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_907(num3, num);
	}

	return;
}

BOOL func_1093(Hash hParam0) // Position - 0x2D5E6 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

BOOL func_1094(int iParam0) // Position - 0x2D629 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_829();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_1095(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x2D64F Hash - 0x3A135443 ^0x969430D9
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

int func_1096(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2D693 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_654(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_658(524288))
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

int func_1097(var uParam0) // Position - 0x2D6FE Hash - 0x3AB81F84 ^0x2BD03E57
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

void func_1098(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2D749 Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_24() == -1)
		func_833(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_1229(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_1099(BOOL bParam0, eStackSize essParam1) // Position - 0x2D7BF Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_24() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			return Global_26796.f_26[essParam1 /*120*/] && bParam0 != false;
	
		return false;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		return Global_36638.f_45.f_350.f_26[essParam1 /*120*/] && bParam0 != false;

	return false;
}

Hash func_1100(eStackSize essParam0) // Position - 0x2D83C Hash - 0xB8EC44B7 ^0xE877E9C4
{
	switch (essParam0)
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

void func_1101(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x2DD71 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_1230(&(Global_1946054.f_1378), essParam0);
	func_1231(2, essParam0, 6);

	if (bParam1)
		func_1052(false, true);

	return;
}

BOOL func_1102(int iParam0) // Position - 0x2DD99 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_1103(int iParam0) // Position - 0x2DDAE Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

int func_1104(int iParam0) // Position - 0x2DDCE Hash - 0x78E19743 ^0x6ACC64F5
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

int func_1105(int iParam0) // Position - 0x2DE82 Hash - 0x6DD34799 ^0x352A62D8
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

int func_1106(int iParam0, int iParam1) // Position - 0x2DF23 Hash - 0x99A93628 ^0x27AE8C83
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
			return 423;
	
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
			return &func_1;
	
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

var func_1107(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2F630 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_1108(int iParam0, BOOL bParam1) // Position - 0x2F647 Hash - 0xE5C16A63 ^0x600C7934
{
	Global_1954819.f_1 = iParam0;

	if (bParam1)
		func_1232(bParam1);

	return;
}

void func_1109(Hash hParam0) // Position - 0x2F662 Hash - 0x246AED7E ^0x92A2F577
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HonorMeterValue"), hParam0);
	return;
}

char* func_1110(int iParam0) // Position - 0x2F675 Hash - 0x8FB6A40C ^0xFA4431
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

BOOL func_1111(var uParam0) // Position - 0x2F796 Hash - 0x89D7A86C ^0xC5CDC47A
{
	var unk;

	if (!func_1128(23, &unk))
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

BOOL func_1112(int iParam0, var uParam1, var uParam2) // Position - 0x2F7DE Hash - 0x2D6E55B7 ^0xC1202559
{
	var unk;
	var unk6;

	if (!func_1128(23, &unk))
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

Hash func_1113(Hash hParam0) // Position - 0x2F85E Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_1114() // Position - 0x2F868 Hash - 0xE17CEFF5 ^0x60DBA116
{
	int num;

	num = func_935();

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

BOOL func_1115(Hash hParam0) // Position - 0x2F8B7 Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_1233(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_1116(var uParam0) // Position - 0x2F8D3 Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_686(*uParam0, 0))
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

BOOL func_1117(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x2F94F Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_686(hParam0, 0))
		return false;

	unk = { func_476(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_477(398 + i, 1);
	
		if (func_478(hParam0, &unk, hash, false))
		{
			flag = func_479(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

struct<18> func_1118(Hash hParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2F9E3 Hash - 0x84700F53 ^0xB9E7AA96
{
	Hash hash;

	hash = -1;
	hash.f_1 = -1;
	hash.f_2 = -1;
	hash.f_3 = -1;
	hash.f_4 = -1;
	hash.f_5 = -1;
	hash.f_6 = -1;
	hash.f_7 = -1;
	hash.f_8 = -1;
	hash.f_13 = -1;
	hash.f_14 = -1;
	hash.f_15 = -1;
	hash.f_16 = -1;
	hash.f_17 = -1;

	if (hParam0 != 0)
		hash = hParam0;

	if (hParam1 != 0 && hParam1 != joaat("SLOTID_NONE"))
		hash.f_1 = hParam1;

	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
		hash.f_2 = iParam2;

	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
		hash.f_3 = iParam3;

	if (iParam4 != 0)
		hash.f_4 = iParam4;

	if (iParam5 != 0)
		hash.f_5 = iParam5;

	return hash;
}

void func_1119(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x2FAB5 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_1120(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x2FAD0 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_664(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_1121(int iParam0) // Position - 0x2FAF5 Hash - 0x92F940EE ^0x92F940EE
{
	int num;

	num = iParam0;

	if (num >= 1 && num <= 23)
		return 0;
	else if (num >= 24 && num <= 34)
		return 1;
	else if (num >= 35 && num <= 55)
		return 2;

	return 0;
}

float func_1122(int iParam0) // Position - 0x2FB49 Hash - 0xBAFBA316 ^0xBAFBA316
{
	switch (iParam0)
	{
		case 1:
			return 5f;
	
		case 2:
			return 20f;
	
		case 3:
			return 10f;
	
		case 4:
			return 10f;
	
		case 5:
			return 20f;
	
		case 6:
			return 10f;
	
		case 7:
			return 15f;
	
		case 8:
			return 15f;
	
		case 9:
			return 20f;
	
		case 10:
			return 5f;
	
		case 11:
			return 5f;
	
		case 12:
			return 10f;
	
		case 13:
			return 20f;
	
		case 14:
			return 30f;
	
		case 15:
			return 5f;
	
		case 16:
			return 5f;
	
		case 17:
			return 3f;
	
		case 18:
			return 20f;
	
		case 19:
			return func_1234(iParam0);
	
		case 20:
			return 25f;
	
		case 21:
			return 50f;
	
		case 22:
			return 100f;
	
		case 23:
			return 150f;
	
		case 24:
			return 20f;
	
		case 25:
			return 10f;
	
		case 26:
			return 20f;
	
		case 27:
			return 20f;
	
		case 28:
			return 20f;
	
		case 29:
			return 20f;
	
		case 30:
			return func_1234(iParam0);
	
		case 31:
			return 25f;
	
		case 32:
			return 50f;
	
		case 33:
			return 100f;
	
		case 34:
			return 150f;
	
		case 35:
			return 1f;
	
		case 36:
			return 5f;
	
		case 37:
			return 1f;
	
		case 38:
			return 3f;
	
		case 39:
			return 1f;
	
		case 40:
			return 1f;
	
		case 41:
			return 1f;
	
		case 42:
			return 5f;
	
		case 43:
			return 10f;
	
		case 44:
			return 5f;
	
		case 45:
			return 5f;
	
		case 46:
			return 10f;
	
		case 47:
			return 10f;
	
		case 48:
			return 5f;
	
		case 49:
			return 20f;
	
		case 50:
			return func_1234(iParam0);
	
		case 51:
			return 25f;
	
		case 52:
			return 50f;
	
		case 53:
			return 100f;
	
		case 54:
			return 150f;
	
		case 55:
			return 5f;
	
		default:
		
	}

	return 0f;
}

BOOL func_1123(int iParam0) // Position - 0x2FE17 Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_328(18);
	
		case 1:
			return func_328(19);
	
		case 2:
			return func_328(20);
	
		default:
		
	}

	return true;
}

int func_1124(int iParam0) // Position - 0x2FE55 Hash - 0xBCE241D5 ^0x339AC097
{
	return func_1235(Global_40.f_11095.f_11[iParam0]);
}

void func_1125(int iParam0, float fParam1, BOOL bParam2) // Position - 0x2FE6D Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_24() != -1)
		return;

	if (Global_1347477.f_117 || !func_328(31))
		return;

	num = func_1124(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_1124(iParam0);

	if (func_1236(iParam0) && func_1237(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_1238(num2, fParam1);
		
			if (fParam1 > (float)func_1239(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_532(func_1240(iParam0), false);
				
					func_1241(iParam0, num3, num4);
					func_1242(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_1126(int iParam0) // Position - 0x2FF6F Hash - 0xEB40D7A4 ^0x298C0275
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_1127(int iParam0) // Position - 0x2FF7B Hash - 0x21FAF347 ^0xAF7D8F21
{
	switch (iParam0)
	{
		case 0:
			return joaat("itemtype_player_health");
	
		case 1:
			return joaat("itemtype_player_stamina");
	
		case 2:
			return joaat("itemtype_player_deadeye");
	
		default:
		
	}

	return 0;
}

BOOL func_1128(int iParam0, var uParam1) // Position - 0x2FFB6 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_1243(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_1129() // Position - 0x2FFE3 Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_1244(Global_40.f_12019);
}

int func_1130() // Position - 0x2FFF5 Hash - 0x9FBA9636 ^0x9FBA9636
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_958(i);
	
		if (func_550(hash, 1, false) || func_1136(func_1135(hash)))
			num = num + 1;
	}

	return num;
}

int func_1131() // Position - 0x30040 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_1245(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_1132() // Position - 0x30079 Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_1141(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_1133() // Position - 0x300B2 Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_1134(int iParam0) // Position - 0x300C4 Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

BOOL func_1135(Hash hParam0) // Position - 0x3017D Hash - 0x6931DCCD ^0x96AB98B4
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return true;
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return 1024;
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return 512;
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return 2048;
	
		default:
		
	}

	return false;
}

BOOL func_1136(BOOL bParam0) // Position - 0x30213 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_1137(int iParam0) // Position - 0x30226 Hash - 0x92CDDEC ^0x390692C3
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
	
		case 1:
			return "COL_DB_SEND";
	
		case 2:
			return "COL_DB_COLLECT";
	
		default:
		
	}

	return "";
}

int func_1138(int iParam0) // Position - 0x30260 Hash - 0xDD8DC1C4 ^0xDD8DC1C4
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 1:
			return 6;
	
		case 2:
			return 7;
	
		case 3:
			return 8;
	
		case 4:
			return 9;
	
		default:
		
	}

	return 5;
}

int func_1139(int iParam0) // Position - 0x302A5 Hash - 0x499196F8 ^0x499196F8
{
	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 16;
	
		case 2:
			return 17;
	
		case 3:
			return 18;
	
		case 4:
			return 19;
	
		default:
		
	}

	return 15;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x302EE Hash - 0xA17D549C ^0xAB4BCE77
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return "COL_RO_CLAMSHELL_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
	
		case joaat("provision_ro_flower_acunas_star"):
			return "COL_RO_ACUNAS_STAR_FOUND";
	
		case joaat("provision_ro_flower_cigar"):
			return "COL_RO_CIGAR_FOUND";
	
		case joaat("provision_ro_flower_rat_tail"):
			return "COL_RO_RAT_TAIL_FOUND";
	
		case joaat("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
	
		case joaat("provision_ro_flower_night_scented"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
	
		case joaat("provision_ro_flower_lady_of_night"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
	
		case joaat("provision_ro_flower_sparrows"):
			return "COL_RO_SPARROWS_FOUND";
	
		case joaat("provision_ro_flower_queens"):
			return "COL_RO_QUEENS_FOUND";
	
		case joaat("provision_ro_flower_spider"):
			return "COL_RO_SPIDER_FOUND";
	
		case joaat("provision_ro_flower_dragons"):
			return "COL_RO_DRAGONS_FOUND";
	
		case joaat("provision_ro_flower_lady_slipper"):
			return "COL_RO_LADY_SLIPPER_FOUND";
	
		case joaat("provision_ro_flower_moccasin"):
			return "COL_RO_MOCCASIN_FOUND";
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
	
		case joaat("provision_ro_flower_ghost"):
			return "COL_RO_GHOST_FOUND";
	
		case joaat("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
	
		default:
		
	}

	return "";
}

BOOL func_1141(Hash hParam0) // Position - 0x303FB Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(Hash hParam0) // Position - 0x3040B Hash - 0xA17D549C ^0xFB10FBD0
{
	switch (hParam0)
	{
		case joaat("legendary_fish_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
	
		case joaat("legendary_fish_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
	
		case joaat("legendary_fish_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
	
		case joaat("legendary_fish_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
	
		case joaat("legendary_fish_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
	
		case joaat("legendary_fish_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
	
		case joaat("legendary_fish_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
	
		case joaat("legendary_fish_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
	
		case joaat("legendary_fish_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
	
		case joaat("legendary_fish_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
	
		case joaat("legendary_fish_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
	
		default:
		
	}

	return "";
}

char* func_1143(int iParam0) // Position - 0x304C7 Hash - 0x92CDDEC ^0x464AC7DD
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
	
		case 1:
			return "COL_RC_SEND";
	
		case 2:
			return "COL_RC_COLLECT";
	
		default:
		
	}

	return "";
}

BOOL func_1144(Hash hParam0) // Position - 0x30501 Hash - 0x5C411CF ^0x5C411CF
{
	if (func_1246(hParam0) && func_550(hParam0, 1, false))
		return 1;
	else if (func_1247(hParam0) && func_1248(hParam0))
		return 1;

	return 0;
}

char* func_1145(Hash hParam0) // Position - 0x3053F Hash - 0xE8A3A2FC ^0x55ACFE33
{
	if (!func_686(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_796(hParam0));
}

int func_1146(int iParam0) // Position - 0x30562 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_1147(BOOL bParam0) // Position - 0x30576 Hash - 0xB584A39F ^0xFC4CA802
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}

	return;
}

void func_1148(int iParam0) // Position - 0x305B4 Hash - 0x2EDDC601 ^0xD5F96979
{
	Hash itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1954819.f_5.f_1))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954819.f_5.f_1) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954819.f_5.f_1, iParam0);
	
		if (itemContextByIndex == Global_1954819.f_5.f_2[iParam0 /*36*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_1, iParam0, "pause_info_panel_list", Global_1954819.f_5.f_2[iParam0 /*36*/]);
	return;
}

void func_1149(BOOL bParam0) // Position - 0x30622 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_1150(BOOL bParam0) // Position - 0x3065C Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_1151(BOOL bParam0) // Position - 0x30696 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_1152(BOOL bParam0) // Position - 0x306D0 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_1153(BOOL bParam0) // Position - 0x306F3 Hash - 0x15EA8A2D ^0x6EE74130
{
	int promptType;
	Player player;

	promptType = 50;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

void func_1154(BOOL bParam0) // Position - 0x30735 Hash - 0xBAD014C9 ^0x3FDE3E28
{
	int promptType;
	Player player;

	promptType = 49;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

Hash func_1155(int iParam0) // Position - 0x30777 Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_654(iParam0, 1) /*3*/];
}

void func_1156() // Position - 0x3079F Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1249();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_762(joaat("weapon_revolver_cattleman_john"));
		func_802(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_762(joaat("weapon_melee_knife_john"));
		func_802(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

BOOL func_1157(Hash hParam0) // Position - 0x30817 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

Hash func_1158(int iParam0) // Position - 0x30825 Hash - 0xB8EC44B7 ^0xD4FF48D5
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
	
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
	
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
	
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
	
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
	
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
	
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
	
		case 7:
			return joaat("provision_lions_paw");
	
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
	
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
	
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
	
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
	
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
	
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
	
		case 14:
			return joaat("provision_cc_vintage_handcuffs");
	
		case 15:
			return joaat("provision_bracelet_gold");
	
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
	
		case 17:
			return joaat("provision_rc_quartz_chunk");
	
		case 18:
			return joaat("provision_bracelet_silver");
	
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
	
		case 20:
			return joaat("provision_rf_wood_cobalt");
	
		case 21:
			return joaat("provision_earring_gold");
	
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
	
		case 23:
			return joaat("provision_rs_abalone_shell_fragment");
	
		case 24:
			return joaat("provision_earring_silver");
	
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
	
		default:
		
	}

	return 0;
}

int func_1159(Hash hParam0) // Position - 0x309A2 Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_1250(hParam0, -1);
}

void func_1160(int iParam0) // Position - 0x309B1 Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_1251(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_1161(int iParam0, const char* sParam1, int iParam2) // Position - 0x309E5 Hash - 0x56940320 ^0xA498AFF
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_1070())
		func_843(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_843(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_1162(Hash hParam0) // Position - 0x30A51 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_1163(Hash hParam0) // Position - 0x30A61 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_1164(Hash hParam0) // Position - 0x30A71 Hash - 0xEAAB2463 ^0xEAAB2463
{
	switch (hParam0)
	{
		case joaat("exotic_stage_02"):
			return 2;
	
		case joaat("exotic_stage_01"):
			return 1;
	
		case joaat("exotic_stage_05"):
			return 16;
	
		case joaat("exotic_stage_04"):
			return 8;
	
		case joaat("exotic_stage_03"):
			return 4;
	
		default:
		
	}

	return 0;
}

void func_1165(int iParam0) // Position - 0x30AB6 Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_1166(Hash hParam0) // Position - 0x30AD1 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_1167() // Position - 0x30AE1 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_1168(int iParam0) // Position - 0x30AFD Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_1169() // Position - 0x30B0F Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_1252(13);
	num2 = func_1253(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_1170() // Position - 0x30B52 Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_1171() // Position - 0x30B6D Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_32())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_1172() // Position - 0x30B8C Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_1173() // Position - 0x30BCE Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_1174(int iParam0, int iParam1, BOOL bParam2) // Position - 0x30BDC Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_1254(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_1175(int iParam0, float fParam1, BOOL bParam2) // Position - 0x30C28 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_1254(iParam0, 2, false, false);
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

float func_1176(float fParam0, float fParam1, float fParam2) // Position - 0x30D6E Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_1177() // Position - 0x30D95 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_1252(12) <= -99f;
}

BOOL func_1178() // Position - 0x30DA9 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_1252(12) >= 99f;
}

int func_1179() // Position - 0x30DBD Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_682(hash) == -999503751)
			if (func_1255() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_1180(eStackSize essParam0) // Position - 0x30E0E Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_1021(essParam0))
		return false;

	if (func_1183(essParam0, 4))
		return true;

	return false;
}

BOOL func_1181(eStackSize essParam0) // Position - 0x30E33 Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_1021(essParam0))
		return false;

	if (func_1183(essParam0, 2))
		return true;

	return false;
}

void func_1182(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x30E58 Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_1021(essParam0))
		return;

	if (!func_1181(essParam0))
	{
		func_1185(essParam0, 2);
	
		if (bParam2)
			if (!func_25(0, false, true))
				func_392(true, 4);
	
		if (!func_1184() && !bParam1 && !func_25(0, false, true))
			func_851(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_1256(essParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

BOOL func_1183(eStackSize essParam0, BOOL bParam1) // Position - 0x30ECD Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_1021(essParam0))
		return false;

	return Global_40.f_7157[essParam0 /*3*/] && bParam1 != false;
}

BOOL func_1184() // Position - 0x30EF2 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

void func_1185(eStackSize essParam0, BOOL bParam1) // Position - 0x30F12 Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_1021(essParam0))
		return;

	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] || bParam1;
	return;
}

int func_1186(int iParam0, BOOL bParam1) // Position - 0x30F3E Hash - 0x14DDA26B ^0xFFF4A8D0
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -2061583405:
			num = Global_1946054.f_2657.f_26.f_1;
			break;
	
		case -1719060085:
			num = 1;
			break;
	
		case -999503751:
			num = Global_1946054.f_2657.f_26;
			break;
	
		case -525676072:
			num = Global_1946054.f_2657.f_26.f_2;
			break;
	
		case -413129408:
			num = 1;
			break;
	
		case 81053684:
			num = 1;
			break;
	
		default:
			return 0;
	}

	switch (iParam0)
	{
		case -999503751:
			if (num > 0 && !bParam1)
				num = num - 1;
			break;
	}

	return num;
}

void func_1187(Hash hParam0, BOOL bParam1) // Position - 0x30FE1 Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_1257(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_759(50);
			else
				func_759(48);
			break;
	
		case 1:
			if (bParam1)
				func_759(51);
			else
				func_759(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_1258(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_783();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_783();
			}
			break;
	
		case 3:
			func_759(24);
		
			if (bParam1)
			{
				if (!func_1258(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_783();
				}
			}
			break;
	}

	return;
}

void func_1188(int iParam0) // Position - 0x310C0 Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1259(0))
				num = num + 1;
		
			if (func_1259(2))
				num = num + 1;
		
			if (func_1259(4))
				num = num + 1;
		
			if (!func_1260(16))
			{
				if (num == 1)
				{
					func_1261();
					func_532(456, true);
					func_1262(16);
				}
			}
		
			if (!func_1260(32))
			{
				if (num >= 3)
				{
					func_1261();
					func_532(456, true);
					func_1262(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_1259(1))
				num = num + 1;
		
			if (func_1259(3))
				num = num + 1;
		
			if (func_1259(7))
				num = num + 1;
		
			if (!func_1260(1))
			{
				if (num == 1)
				{
					func_1263();
					func_532(457, true);
					func_1262(1);
				}
			}
		
			if (!func_1260(2))
			{
				if (num >= 3)
				{
					func_1263();
					func_532(457, true);
					func_1262(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_1259(5))
				num = num + 1;
		
			if (func_1259(6))
				num = num + 1;
		
			if (func_1259(8))
				num = num + 1;
		
			if (!func_1260(4))
			{
				if (num == 1)
				{
					func_1264();
					func_532(455, true);
					func_1262(4);
				}
			}
		
			if (!func_1260(8))
			{
				if (num >= 3)
				{
					func_1264();
					func_532(455, true);
					func_1262(8);
				}
			}
			break;
	}

	return;
}

void func_1189(var uParam0) // Position - 0x31257 Hash - 0x2CE00B72 ^0x958A4727
{
	func_1027(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_1027(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_1027(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_1190(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x31291 Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_1265(anParam0))
		return;

	if (Global_1223851 < 20)
	{
		Global_1223851 = Global_1223851 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223851.f_1[i /*21*/] = { Global_1223851.f_1[i + 1 /*21*/] };
		}
	}

	unk.f_7.f_2.f_1 = 10;
	unk = { *anParam0 };
	unk.f_4 = hParam1;
	unk.f_6 = 1;
	unk.f_7 = { uParam2 };
	Global_1223851.f_1[Global_1223851 - 1 /*21*/] = { unk };
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_1191(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x31332 Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE6;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE6;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE6;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE6;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = hashKey;
					uParam1->f_1 = hashKey2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_1192(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x31428 Hash - 0xE87847ED ^0xAF7DC6D
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_686(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return false;

	*uParam3 = outData.f_35;

	for (i = 0; i < outData.f_35; i = i + 1)
	{
		uParam2->[i] = outData.f_36[i];
	}

	return true;
}

void func_1193(Hash hParam0) // Position - 0x3149D Hash - 0xEDF7DA1B ^0xE1C109C6
{
	var unk;
	BOOL flag;
	BOOL flag2;
	var unk17;
	int num;
	eStackSize i;
	int j;
	int k;
	int num2;
	var unk33;
	BOOL flag3;

	func_824(hParam0, 1, true, -142743235, true);
	unk = 15;
	unk17 = 15;
	num = func_1266(hParam0, &unk17);
	func_1267(hParam0, &unk17, &num, true);

	if (func_829() == -2125499975)
		num2 = 2020890174;
	else
		num2 = 1105329772;

	func_1268(hParam0, &(Global_26796.f_627.f_121.f_20));
	func_826(hParam0, true, true);

	for (j = 0; j < num; j = j + 1)
	{
		func_824(unk17[j], 1, true, -142743235, true);
	
		switch (func_682(unk17[j]))
		{
			case -2061583405:
				func_1268(unk17[j], &(Global_26796.f_627.f_121.f_21));
				break;
		
			case -1719060085:
				func_1268(unk17[j], &(Global_26796.f_627.f_121.f_24));
				break;
		
			case -525676072:
				func_1268(unk17[j], &(Global_26796.f_627.f_121.f_22));
				break;
		
			case -413129408:
				func_1268(unk17[j], &(Global_26796.f_627.f_121.f_25));
				break;
		
			case 81053684:
				func_1268(unk17[j], &(Global_26796.f_627.f_121.f_23));
				break;
		}
	
		func_826(unk17[j], true, true);
		unk[j] = func_654(func_827(unk17[j]), 1);
	}

	func_1269(&(Global_1946054.f_1616));
	func_830(&(Global_1946054.f_1616), num2, &unk33, true, false, false, 0);
	Global_1946054.f_1616.f_1[8 /*3*/] = { func_831(8, 0) };
	Global_1946054.f_1616.f_1[9 /*3*/] = { func_831(9, 0) };
	Global_1946054.f_1616.f_1[0 /*3*/] = { func_831(0, 0) };
	Global_1946054.f_1616.f_1[2 /*3*/] = { func_831(2, 0) };
	Global_1946054.f_1616.f_1[3 /*3*/] = { func_831(3, 0) };
	Global_1946054.f_1616.f_1[1 /*3*/] = { func_831(1, 0) };
	Global_1946054.f_1616.f_1[5 /*3*/] = { func_831(5, 0) };
	Global_1946054.f_1616.f_1[6 /*3*/] = { func_831(6, 0) };
	Global_1946054.f_1616.f_1[7 /*3*/] = { func_831(7, 0) };

	for (i = 0; i < 5; i = i + 1)
	{
		for (j = 0; j < num; j = j + 1)
		{
			if (unk17[j] == func_832(unk[j], i))
			{
				func_826(func_1270(i), true, true);
				func_1271(i);
			
				if (i == 0)
				{
					flag2 = 1;
				
					for (k = 0; k < 39; k = k + 1)
					{
						if (!func_1220(&Global_1946054.f_1616.f_1[k /*3*/], 2))
						{
						}
						else
						{
							func_833(&Global_1946054.f_1616.f_1[k /*3*/], k, 0);
							Global_1946054.f_1497.f_1[k /*3*/] = { Global_1946054.f_1616.f_1[k /*3*/] };
						}
					}
				}
			
				break;
			}
		}
	}

	for (j = 0; j < num; j = j + 1)
	{
		if (unk17[j] == Global_1946054.f_1497.f_1[unk[j] /*3*/])
		{
			flag = true;
			break;
		}
	}

	if (flag || flag2 || Global_40.f_7729 == func_1020(hParam0))
	{
		if (!func_1272(8))
		{
			if (func_829() == -2125499975)
			{
				if (flag2)
				{
					func_830(&(Global_1946054.f_1616), 1661121390, &unk33, false, true, false, -2125499975);
					Global_1946054.f_1616 = 166243423;
					func_1230(&(Global_1946054.f_1616), 0);
				
					if (Global_40.f_7729 == 0)
						func_1231(2, 0, 6);
				}
			
				if (flag || Global_40.f_7729 == func_1020(hParam0))
					Global_1905941 = 6;
			}
			else
			{
				if (flag2)
				{
					func_830(&(Global_1946054.f_1616), -361635024, &unk33, false, true, false, 1160113249);
					Global_1946054.f_1616 = 166243423;
					func_1230(&(Global_1946054.f_1616), 0);
				
					if (Global_40.f_7729 == 0)
						func_1231(2, 0, 6);
				}
			
				if (flag || Global_40.f_7729 == func_1020(hParam0))
					Global_1905941 = 62;
			}
		
			if (flag || Global_40.f_7729 == func_1020(hParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_1273(Global_40.f_7729, 4096);
					func_1185(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					func_1274(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, true, false, 0);
				}
			}
		}
	}

	flag3 = false;

	for (j = 0; j < num; j = j + 1)
	{
		if (unk17[j] == Global_26796.f_627.f_1.f_1.f_1[unk[j] /*3*/])
		{
			flag3 = true;
			break;
		}
	}

	if (!flag3)
		return;

	func_830(&(Global_1946054.f_1616), 1661121390, &unk33, false, true, false, -2125499975);
	func_830(&(Global_1946054.f_1616), 2020890174, &unk33, true, false, false, -2125499975);
	Global_1946054.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946054.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946054.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946054.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946054.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946054.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946054.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946054.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946054.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946054.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946054.f_1616;

	for (j = 0; j < 39; j = j + 1)
	{
		Global_26796.f_627.f_1.f_1.f_1[j /*3*/] = { Global_1946054.f_1616.f_1[j /*3*/] };
	}

	return;
}

struct<4> func_1194() // Position - 0x31AFE Hash - 0xF51D0C3D ^0xA1188D4B
{
	var unk;

	unk = { func_677(false) };
	return func_480(856287005, unk, -218846335, false);
}

int func_1195(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x31B22 Hash - 0x6D8F94CF ^0x1BC2C8AF
{
	int i;
	var data;
	Hash outBundle;
	var unk5;
	int bundleItemCount;
	var unk9;

	if (iParam0 == 0)
		return 0;

	data = 1;
	bundleItemCount = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &data);
	unk9 = { uParam1 };

	for (i = 0; i < bundleItemCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &data, i, &outBundle))
		{
			if (func_686(outBundle, 0))
			{
				unk9.f_4 = outBundle.f_1;
			
				if (func_663(outBundle, uParam1, unk9.f_4, false) > 0)
				{
				}
				else
				{
					func_1275(&unk5);
				
					if (func_481(outBundle, &unk5, &unk9, -1, -142743235, false, false))
					{
					}
				}
			}
		}
	}

	return 1;
}

struct<6> func_1196() // Position - 0x31BB4 Hash - 0x98D1204F ^0xBF85383B
{
	var unk;
	var unk7;
	var unk8;
	var unk9;
	var unk10;
	var unk11;
	var unk12;

	if (func_1276(joaat("SLOTID_HORSE_BEDROLL"), &unk7))
		unk.f_4 = unk7;

	if (func_1276(joaat("SLOTID_HORSE_BLANKET"), &unk8))
		unk = unk8;

	if (func_1276(joaat("SLOTID_HORSE_HORN"), &unk9))
		unk.f_2 = unk9;

	if (func_1276(joaat("SLOTID_HORSE_SADDLEBAG"), &unk10))
		unk.f_5 = unk10;

	if (func_1276(joaat("SLOTID_HORSE_STIRRUP"), &unk11))
		unk.f_3 = unk11;

	if (func_1276(joaat("SLOTID_HORSE_SADDLE"), &unk12))
		unk.f_1 = unk12;

	return unk;
}

int _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x31C36 Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

void func_1198(var uParam0) // Position - 0x31C42 Hash - 0xA17153D4 ^0xA3A2AA75
{
	func_1277(uParam0);
	func_1279(uParam0, func_1278(-1346384396));
	func_1280(uParam0, func_1278(-712836614));
	func_1281(uParam0, func_1278(-1629133289));
	func_1282(uParam0, func_1278(1302066700));
	func_1283(uParam0, func_1278(599669344));
	func_1284(uParam0, func_1278(-1555511632));
	return;
}

void func_1199(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x31CAA Hash - 0x80C2C490 ^0xE2D89887
{
	!func_1285(hParam0.f_4, true);
	!func_1285(hParam0, true);
	!func_1285(hParam0.f_2, true);
	!func_1285(hParam0.f_5, true);
	!func_1285(hParam0.f_3, true);
	!func_1285(hParam0.f_1, true);
	return;
}

int func_1200(var uParam0, var uParam1, var uParam2) // Position - 0x31CFE Hash - 0xEEC53156 ^0xA03BD067
{
	BOOL flag;

	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;

	if (func_331())
	{
		if (func_506())
		{
			flag = false;
		
			if (!func_100(Global_1835011[15 /*74*/].f_1, true) && !func_328(42))
				flag = true;
		
			if (flag)
			{
				*uParam0 = func_1286();
				*uParam1 = func_1287();
				*uParam2 = func_1288();
				return 1;
			}
			else
			{
				*uParam0 = func_1289();
				*uParam1 = func_1290();
				*uParam2 = func_1291();
				return 1;
			}
		}
		else if (func_31())
		{
			if (!func_100(Global_1835011[60 /*74*/].f_1, true))
			{
				*uParam0 = func_1292();
				*uParam1 = func_1293();
				*uParam2 = func_1294();
				return 1;
			}
			else
			{
				*uParam0 = func_1295();
				*uParam1 = func_1296();
				*uParam2 = func_1297();
				return 1;
			}
		}
	}
	else if (func_506())
	{
		*uParam0 = func_1298();
		*uParam1 = func_1299();
		*uParam2 = func_1300();
		return 1;
	}
	else if (func_31())
	{
		*uParam0 = func_1301();
		*uParam1 = func_1302();
		*uParam2 = func_1303();
		return 1;
	}

	return 0;
}

int func_1201(int iParam0) // Position - 0x31E18 Hash - 0xACA56E21 ^0xEE9738B3
{
	iParam0 = func_1304(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

void func_1202(int iParam0, int iParam1) // Position - 0x31E4B Hash - 0x42DB579F ^0x4C67AD4
{
	iParam0 = func_1304(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = iParam1;
	return;
}

void func_1203(int iParam0, int iParam1) // Position - 0x31E7E Hash - 0x42DB579F ^0xF1492904
{
	iParam0 = func_1304(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = iParam1;
	return;
}

void func_1204(int iParam0, int iParam1) // Position - 0x31EB1 Hash - 0x42DB579F ^0x8D4EBF0
{
	iParam0 = func_1304(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = iParam1;
	return;
}

void func_1205(int iParam0, int iParam1) // Position - 0x31EE4 Hash - 0xA8C13CC2 ^0x5A312A36
{
	iParam0 = func_1304(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = iParam1;
	return;
}

BOOL func_1206(int iParam0) // Position - 0x31F18 Hash - 0xDEA08A5F ^0xDEA08A5F
{
	Hash hash;
	var unk;

	hash = func_1305(iParam0);

	if (hash == 0)
		return false;

	unk = { func_677(false) };

	if (func_1306(&unk, hash, false) > 0)
		return true;

	return false;
}

int func_1207(int iParam0) // Position - 0x31F4D Hash - 0x13121903 ^0xB823C4F3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_1307(iParam0, &unk))
		return 0;

	unk30 = { unk.f_5 };
	unk30.f_4 = unk.f_9;

	if (!func_481(unk.f_4, &unk, &unk30, -1, -142743235, false, false))
		return 0;

	return 1;
}

Hash func_1208(int iParam0) // Position - 0x31FA3 Hash - 0xCBA0DE6B ^0x47A29D9A
{
	if (iParam0 == joaat("a_c_horse_mp_mangy_backup"))
		return joaat("HORSE_BREED_MANGY_BACKUP");

	switch (iParam0)
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

int func_1209(int iParam0, Hash hParam1) // Position - 0x32437 Hash - 0x25A74014 ^0x25A74014
{
	Hash hash;
	var unk;
	var unk6;

	if (!func_686(hParam1, 0))
		return 0;

	if (!func_1308(hParam1))
		return 0;

	if (func_1206(iParam0))
		return 0;

	hash = func_1305(iParam0);

	if (hash == 0)
		return 0;

	unk = { func_677(false) };
	unk.f_4 = hash;

	if (!func_1018(hParam1, &unk6, &unk, 1, 752097756, false))
		return 0;

	return 1;
}

BOOL func_1210(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0x324A4 Hash - 0xB7A16C08 ^0x95A2653
{
	int i;
	var data;
	Hash outBundle;
	var unk5;
	int bundleItemCount;
	var unk9;

	if (iParam0 == 0)
		return false;

	data = 1;
	bundleItemCount = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &data);
	unk9 = { uParam1 };

	for (i = 0; i < bundleItemCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &data, i, &outBundle))
		{
			if (func_686(outBundle, 0))
			{
				unk9.f_4 = outBundle.f_1;
			
				if (func_663(outBundle, uParam1, unk9.f_4, false) > 0)
				{
				}
				else
				{
					func_1275(&unk5);
				
					if (func_1018(outBundle, &unk5, &unk9, 1, 752097756, true))
						if (bParam5)
							func_1213(unk5, 1);
				}
			}
		}
	}

	return true;
}

void func_1211(int iParam0) // Position - 0x32544 Hash - 0xEA427C10 ^0xAE8C4401
{
	var statId;

	if (iParam0 <= 0)
		return;

	if (func_1223(1) < iParam0)
		iParam0 = func_1223(1);

	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	statId = { func_394(joaat("CAREER_CASH")) };
	STATS::_STAT_ID_DECREMENT_INT(&statId, iParam0);
	return;
}

BOOL func_1212(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6) // Position - 0x32582 Hash - 0x80B0B89C ^0x78EC1C55
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_664(bParam6), &uParam0, hParam4, &outGuid))
		return false;

	if (!func_684(outGuid, panParam5, bParam6, false))
		return false;

	return true;
}

BOOL func_1213(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x325C6 Hash - 0x1DD1BE14 ^0x90608F32
{
	var unk;

	if (!func_482(false))
		return func_1309(uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_684(uParam0, &unk, false, false))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_664(false), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_1214(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x32639 Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_687(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_482(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_664(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

void func_1215(Hash hParam0, int iParam1) // Position - 0x32685 Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_24() == -1)
	{
		if (func_748(43))
		{
			if (func_757(hParam0, 412399755))
			{
				func_995(joaat("exotic_stage_01"));
			
				if (func_996() == 0)
				{
					func_392(false, 10);
					num = func_1310(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_998(hParam0) < func_999(hParam0))
							func_754(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_748(44))
		{
			if (func_757(hParam0, 709057512))
			{
				func_995(joaat("exotic_stage_02"));
			
				if (func_996() == 1)
				{
					func_392(false, 10);
					num = func_1310(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_998(hParam0) < func_999(hParam0))
							func_754(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_748(45))
		{
			if (func_757(hParam0, -1478961327))
			{
				func_995(joaat("exotic_stage_03"));
			
				if (func_996() == 2)
				{
					func_392(false, 10);
					num = func_1310(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_998(hParam0) < func_999(hParam0))
							func_754(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_748(46))
		{
			if (func_757(hParam0, -1238404098))
			{
				func_995(joaat("exotic_stage_04"));
			
				if (func_996() == 3)
				{
					func_392(false, 10);
					num = func_1310(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_998(hParam0) < func_999(hParam0))
							func_754(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_748(47))
		{
			if (func_757(hParam0, 1160548794))
			{
				func_995(joaat("exotic_stage_05"));
			
				if (func_996() == 4)
				{
					func_392(false, 10);
					num = func_1310(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_998(hParam0) < func_999(hParam0))
							func_754(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

BOOL func_1216(Hash hParam0, var uParam1) // Position - 0x32969 Hash - 0x4A27386E ^0xBC93C855
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (hParam0 == Global_1946054.f_2657[*uParam1])
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

void func_1217(int iParam0, int iParam1, int iParam2) // Position - 0x329A9 Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_1311(iParam1);
	func_1312(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_1313(&(iParam0->f_26), num2);
	
		if (func_1314(iParam0->f_26, &num))
			func_1315(num, num2);
	}

	return;
}

BOOL func_1218(Hash hParam0, BOOL bParam1) // Position - 0x329F2 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_476(hParam0, false, false) };
	guid = { func_480(hParam0, unk, unk.f_4, false) };

	if (func_663(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_664(false), &guid, bParam1);
	return true;
}

void func_1219(int iParam0) // Position - 0x32A3E Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_1220(Hash hParam0, int iParam1) // Position - 0x32A4F Hash - 0x718DD1EF ^0xD9260236
{
	return hParam0->f_2 && iParam1 != false;
}

void func_1221(Any* panParam0, int iParam1, Hash hParam2, int iParam3, int iParam4, int iParam5) // Position - 0x32A60 Hash - 0x2E9AB941 ^0x44CE1BA8
{
	*panParam0 = iParam1;
	panParam0->f_1 = hParam2;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = iParam4;
	panParam0->f_4 = iParam5;
	panParam0->f_6 = 0;
	panParam0->f_5 = 0;
	return;
}

BOOL func_1222(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x32A8F Hash - 0x72399051 ^0x6D1C1C66
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_686(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam5;
		return false;
	}

	!bParam5;
	*uParam3 = outData.f_3;

	for (i = 0; i < outData.f_3; i = i + 1)
	{
		!bParam5;
		uParam2->[i /*2*/] = { outData.f_4[i /*2*/] };
	}

	if (bParam4)
		func_1316(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

int func_1223(int iParam0) // Position - 0x32B2C Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(int iParam0) // Position - 0x32B38 Hash - 0xA17D549C ^0x2E5C0F40
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
	
		case 1:
			return "HEADSHOT_JOHN";
	
		case 2:
			return "HEADSHOT_JAVIER";
	
		case 3:
			return "HEADSHOT_BILL";
	
		case 4:
			return "HEADSHOT_UNCLE";
	
		case 5:
			return "HEADSHOT_HOSEA";
	
		case 6:
			return "HEADSHOT_MICAH";
	
		case 7:
			return "HEADSHOT_CHARLES";
	
		case 8:
			return "HEADSHOT_SEAN";
	
		case 9:
			return "HEADSHOT_LENNY";
	
		case 10:
			return "HEADSHOT_KIERAN";
	
		case 11:
			return "HEADSHOT_SADIE";
	
		case 13:
			return "HEADSHOT_ABIGAIL";
	
		case 14:
			return "HEADSHOT_JACK";
	
		case 15:
			return "HEADSHOT_MARYBETH";
	
		case 16:
			return "HEADSHOT_MOLLY";
	
		case 17:
			return "HEADSHOT_PEARSON";
	
		case 18:
			return "HEADSHOT_STRAUSS";
	
		case 19:
			return "HEADSHOT_SUSAN";
	
		case 20:
			return "HEADSHOT_KAREN";
	
		case 21:
			return "HEADSHOT_SWANSON";
	
		case 22:
			return "HEADSHOT_TILLY";
	
		case 23:
			return "HEADSHOT_TRELAWNY";
	
		case 24:
			return "HEADSHOT_CLEET";
	
		case 25:
			return "HEADSHOT_JOE";
	
		default:
		
	}

	return "";
}

BOOL func_1225(var uParam0, int iParam1) // Position - 0x32C90 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_1226(var uParam0, int iParam1, int iParam2) // Position - 0x32CA1 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_1227(int iParam0, int iParam1) // Position - 0x32CB4 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_1228(int iParam0, int iParam1) // Position - 0x32CC5 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_1229(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x32CD8 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_1230(var uParam0, eStackSize essParam1) // Position - 0x32D42 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_24() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *uParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_833(&uParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_1229(&uParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_1231(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x32DDD Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_24() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			Global_26796.f_26[essParam1 /*120*/] = Global_26796.f_26[essParam1 /*120*/] || bParam0;
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		Global_36638.f_45.f_350.f_26[essParam1 /*120*/] = Global_36638.f_45.f_350.f_26[essParam1 /*120*/] || bParam0;

	return;
}

void func_1232(BOOL bParam0) // Position - 0x32E65 Hash - 0x970FE035 ^0x92589DF6
{
	func_1317(bParam0);
	Global_1954819.f_1.f_1 = bParam0;

	if (bParam0 == true)
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));

	return;
}

int func_1233(Hash hParam0, Hash hParam1) // Position - 0x32E98 Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

float func_1234(int iParam0) // Position - 0x32EB2 Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_1121(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_1235(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_1318(num7) - func_1318(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_1235(float fParam0) // Position - 0x32F1C Hash - 0x3E9B0DE9 ^0x3E9B0DE9
{
	if (fParam0 <= (float)-1)
		return -1;

	if (fParam0 < (float)50)
		return 0;

	if (fParam0 < (float)100)
		return 1;

	if (fParam0 < (float)200)
		return 2;

	if (fParam0 < (float)350)
		return 3;

	if (fParam0 < (float)550)
		return 4;

	if (fParam0 < (float)800)
		return 5;

	if (fParam0 < (float)1100)
		return 6;

	return 7;
}

int func_1236(int iParam0) // Position - 0x32FA8 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1237(int iParam0) // Position - 0x32FE1 Hash - 0xB8632262 ^0xB8632262
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 16:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1238(float fParam0, float fParam1) // Position - 0x33060 Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_1235(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_1318(num));
	num3 = BUILTIN::TO_FLOAT(func_1318(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_1239(int iParam0) // Position - 0x330D3 Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_1319(iParam0, &num))
		return func_1318(num);

	switch (iParam0)
	{
		case 0:
			if (func_1320())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_1320())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_1320())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_1240(int iParam0) // Position - 0x3315F Hash - 0xEE6D3E20 ^0xEE6D3E20
{
	switch (iParam0)
	{
		case 0:
			return 246;
	
		case 1:
			return 248;
	
		case 2:
			return 247;
	
		default:
		
	}

	return -1;
}

void func_1241(int iParam0, int iParam1, int iParam2) // Position - 0x33191 Hash - 0x29688DE6 ^0x6F1A8431
{
	char* str;
	const char* str2;
	BOOL flag;
	int num;
	const char* str3;
	char* str4;
	char* str5;
	const char* str6;
	int num2;
	Hash hashKey;
	const char* data;

	if (iParam1 == 0)
		return;

	num = iParam1 + 1;

	if (iParam2 != 0)
	{
		str = "RPG_LEVEL_PROGRESS_TOAST";
		str2 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, num + 1);
	}
	else
	{
		str = "RPG_LEVEL_INCREASED_TOAST";
		str2 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", num);
		flag = true;
	}

	num = num + func_1321(iParam0);
	str3 = func_1323(func_1322(num, iParam2));
	str5 = func_1324(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_1325(iParam0));
	num2 = func_1326(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_1327(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_967(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_1328(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_1242(int iParam0, int iParam1) // Position - 0x33289 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

BOOL func_1243(int iParam0) // Position - 0x332A2 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_1244(BOOL bParam0) // Position - 0x332B8 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_1245(Hash hParam0) // Position - 0x332DD Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_1246(Hash hParam0) // Position - 0x332ED Hash - 0xB8632262 ^0xB8632262
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return true;
	
		default:
		
	}

	return false;
}

int func_1247(Hash hParam0) // Position - 0x33394 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1248(Hash hParam0) // Position - 0x333CD Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_1329(&entity, 0, i, &model) && !func_1329(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_1330(entity, &model);
		
			if (func_686(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

void func_1249() // Position - 0x33439 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_1331(Global_35, &unk);
	unk31 = { func_677(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1332(false);
	func_1333(7);
	func_1334(joaat("kit_bandana"), true, true, false);

	if (func_829() == 1160113249)
	{
		func_1334(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_1334(-361635024, true, true, true);
	}

	func_1335(Global_35, &unk);
	return;
}

int func_1250(Hash hParam0, int iParam1) // Position - 0x334C2 Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_664(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_240(&num, year);
	func_241(&num, month);
	func_242(&num, day);
	func_243(&num, hour);
	func_244(&num, minute);
	func_245(&num, second);
	return num;
}

void func_1251(int iParam0) // Position - 0x33527 Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_394(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

float func_1252(int iParam0) // Position - 0x3355A Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_1253(float fParam0) // Position - 0x3356E Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

char* func_1254(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x33589 Hash - 0xC24B5846 ^0xB94D612F
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

Hash func_1255() // Position - 0x33631 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

char* func_1256(eStackSize essParam0) // Position - 0x33640 Hash - 0xCCDB3731 ^0x1AFEED0
{
	Hash hash;

	hash = func_1100(essParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_1145(hash);
}

int func_1257(Hash hParam0) // Position - 0x33663 Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_1336(hParam0))
		num = 0;
	else if (func_1337(hParam0))
		num = 1;
	else if (func_1338(hParam0))
		num = 2;
	else if (func_1339(hParam0))
		num = 3;

	return num;
}

BOOL func_1258(int iParam0) // Position - 0x336A6 Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_550(func_1340(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_1259(int iParam0) // Position - 0x336E6 Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_550(func_1341(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_1260(int iParam0) // Position - 0x33725 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_1261() // Position - 0x33738 Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_24() != -1)
		return;

	func_802(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_1124(1);
	func_1241(1, num, 0);
	return;
}

void func_1262(int iParam0) // Position - 0x3376A Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_1263() // Position - 0x33781 Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_24() != -1)
		return;

	func_802(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_1124(2);
	func_1241(2, num, 0);
	return;
}

void func_1264() // Position - 0x337B3 Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_24() != -1)
		return;

	func_802(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_1124(0);
	func_1241(0, num, 0);
	return;
}

BOOL func_1265(Any anParam0) // Position - 0x337E5 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

int func_1266(Hash hParam0, var uParam1) // Position - 0x3381B Hash - 0xAD15D504 ^0x7CCA8C1E
{
	var unk;
	int num;
	int num2;

	num2 = 0;

	if (!func_1342(hParam0, func_829()))
		return 0;

	num = func_1053(func_829());
	num.f_1 = hParam0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
		return 0;

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &num, joaat("Component")))
		{
		}
		else
		{
			uParam1->[num2] = unk;
			num2 = num2 + 1;
		}
	}

	return num2;
}

int func_1267(Hash hParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x3388C Hash - 0x98D198FE ^0x14244304
{
	int num;
	int num2;
	int i;
	int j;
	eStackSize stackSize;
	var unk;
	int num3;
	var unk15;

	unk.f_9 = joaat("SLOTID_NONE");
	num3 = func_1053(func_829());
	unk15 = { func_1118(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), -999503751, 0) };

	if (!func_1120(&unk15, &num, &num2, bParam3))
		return 0;

	for (i = 0; i < num2; i = i + 1)
	{
		if (!func_1011(&unk, i, num, num2))
		{
		}
		else if (hParam0 == unk.f_4)
		{
		}
		else
		{
			stackSize = func_1020(unk.f_4);
		
			if (stackSize >= 0 && stackSize <= 5)
			{
			}
			else
			{
				for (j = *uParam2 - 1; j >= 0; j = j + -1)
				{
					func_1221(&(Global_1946054.f_964), num3, unk.f_4, joaat("Component"), 1, uParam1->[j]);
					DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
				
					if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964)))
					{
					}
					else
					{
						*uParam2 = *uParam2 - 1;
						uParam1->[j] = uParam1->[*uParam2];
						uParam1->[*uParam2] = 0;
					}
				}
			}
		}
	}

	func_1012(num);
	return 1;
}

void func_1268(Hash hParam0, var uParam1) // Position - 0x339A2 Hash - 0x78605AC7 ^0xE339C812
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;
	hash = hParam0;

	if (!func_1216(hash, &i))
		return;

	for (i = 0; i < Global_26796.f_627.f_121.f_19; i = i + 1)
	{
		if (hash == Global_26796.f_627.f_121[i])
		{
			flag = true;
			break;
		}
	}

	if (!flag)
		return;

	if (Global_26796.f_627.f_121.f_19 == 1)
	{
		Global_26796.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26796.f_627.f_121[0] = 0;
		return;
	}

	Global_26796.f_627.f_121.f_19 = Global_26796.f_627.f_121.f_19 - 1;
	*uParam1 = *uParam1 - 1;
	Global_26796.f_627.f_121[i] = Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19];
	Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19] = 0;
	return;
}

void func_1269(var uParam0) // Position - 0x33A7A Hash - 0xA72C1C9C ^0xF572AAFB
{
	int i;

	*uParam0 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		uParam0->f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

Hash func_1270(eStackSize essParam0) // Position - 0x33AB8 Hash - 0x7B091E14 ^0x2ED2329F
{
	if (essParam0 == -1)
		essParam0 = func_1343();

	if (func_24() == -1)
		return Global_26796.f_26[essParam0 /*120*/].f_1;

	return Global_36638.f_45.f_350.f_26[essParam0 /*120*/].f_1;
}

void func_1271(eStackSize essParam0) // Position - 0x33AF2 Hash - 0xFA8AF984 ^0x28B499F1
{
	int i;
	Hash hash;

	if (func_24() == -1)
	{
		Global_26796.f_26[essParam0 /*120*/] = false;
		Global_26796.f_26[essParam0 /*120*/].f_1 = 0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			hash = Global_1946054.f_57[i /*11*/];
			func_833(&hash, i, essParam0);
		}
	
		return;
	}

	Global_36638.f_45.f_350.f_26[essParam0 /*120*/] = false;
	Global_36638.f_45.f_350.f_26[essParam0 /*120*/].f_1 = 0;

	for (i = 0; i < 39; i = i + 1)
	{
		hash = Global_1946054.f_57[i /*11*/];
		func_1229(&hash, i, essParam0);
	}

	return;
}

BOOL func_1272(int iParam0) // Position - 0x33B8D Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_26796.f_774 && iParam0 != false;
}

void func_1273(eStackSize essParam0, BOOL bParam1) // Position - 0x33BA0 Hash - 0x5B5DA81B ^0x5B5DA81B
{
	BOOL flag;

	if (!func_1021(essParam0))
		return;

	flag = Global_40.f_7157[essParam0 /*3*/] && bParam1;
	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] - flag;
	return;
}

int func_1274(Ped pedParam0, eStackSize essParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x33BDB Hash - 0x72B1BAB5 ^0x553ECF8
{
	Hash hash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (essParam1 == -1)
		return 0;

	hash = func_1100(essParam1);

	if (hParam4 != 0)
		hash = hParam4;
	else if (essParam1 > -1 && essParam1 <= 5)
		hash = func_1270(essParam1);

	if (bParam3 && func_1183(essParam1, 4096) && Global_1946054.f_1497 == hParam4)
		return 1;

	Global_1905941 = essParam1;

	if (essParam1 > 5 || hParam4 != 0 && !func_1342(hash, Global_1946054.f_1))
		return 0;

	if (bParam2)
	{
		func_1273(Global_40.f_7729, 4096);
		func_1185(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		func_676(pedParam0);

	func_1344();

	if (!func_1345(essParam1))
		func_1347(hash, pedParam0, func_1346(essParam1), true, false, true);

	func_1348(pedParam0);
	return 1;
}

void func_1275(var uParam0) // Position - 0x33CEA Hash - 0xA4B72113 ^0x62A5EAE1
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

BOOL func_1276(Hash hParam0, var uParam1) // Position - 0x33D05 Hash - 0x9965E721 ^0x4526F41
{
	var unk;

	if (!func_1349(856287005, hParam0))
		return false;

	unk = { func_1194() };
	*uParam1 = func_1350(unk, hParam0, false);

	if (!func_686(*uParam1, 0))
		return false;

	return true;
}

void func_1277(var uParam0) // Position - 0x33D47 Hash - 0x99F7243D ^0x36B2A3DE
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	return;
}

int func_1278(int iParam0) // Position - 0x33D6C Hash - 0xD824C907 ^0x698D3C9F
{
	if (func_506())
	{
		switch (iParam0)
		{
			case -1629133289:
				return joaat("horse_equipment_horn_new_000");
		
			case -1555511632:
				return joaat("horse_equipment_horse_saddlebag_used_000");
		
			case -1346384396:
				return joaat("horse_equipment_horse_blanket_00_new_000");
		
			case -712836614:
				return joaat("horse_equipment_motherhubbard_01_stock_new_saddle_000");
		
			case 599669344:
				return joaat("horse_equipment_horse_bedroll_01_used_000");
		
			case 1302066700:
				return joaat("horse_equipment_stirrup_new_000");
		}
	}
	else if (func_31())
	{
		switch (iParam0)
		{
			case -1629133289:
				return joaat("horse_equipment_horn_new_012");
		
			case -1555511632:
				return joaat("horse_equipment_horse_saddlebag_new_003");
		
			case -1346384396:
				return joaat("horse_equipment_horse_blanket_09_new_001");
		
			case -712836614:
				return joaat("horse_equipment_western_04_stock_new_saddle_005");
		
			case 599669344:
				return joaat("horse_equipment_horse_bedroll_00_used_003");
		
			case 1302066700:
				return joaat("horse_equipment_stirrup_new_006");
		}
	}

	return 0;
}

void func_1279(var uParam0, int iParam1) // Position - 0x33E62 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_1280(var uParam0, int iParam1) // Position - 0x33E6F Hash - 0x4F8BE4B5 ^0x2E599B99
{
	uParam0->f_1 = iParam1;
	return;
}

void func_1281(var uParam0, int iParam1) // Position - 0x33E7D Hash - 0x4F8BE4B5 ^0x5AE41537
{
	uParam0->f_2 = iParam1;
	return;
}

void func_1282(var uParam0, int iParam1) // Position - 0x33E8B Hash - 0x4F8BE4B5 ^0xCB719C1
{
	uParam0->f_3 = iParam1;
	return;
}

void func_1283(var uParam0, int iParam1) // Position - 0x33E99 Hash - 0x4F8BE4B5 ^0xFF22C7C
{
	uParam0->f_4 = iParam1;
	return;
}

void func_1284(var uParam0, int iParam1) // Position - 0x33EA7 Hash - 0x4F8BE4B5 ^0x8A18C31F
{
	uParam0->f_5 = iParam1;
	return;
}

BOOL func_1285(Hash hParam0, BOOL bParam1) // Position - 0x33EB5 Hash - 0x148943C8 ^0x2BF2CC5F
{
	var unk;
	var unk6;
	Hash hash;
	var unk10;
	var unk14;
	Hash hash2;
	Hash hash3;
	Hash hash4;
	Hash hash5;

	if (!func_686(hParam0, 0))
		return false;

	if (!func_1351(hParam0, 856287005, &hash, &unk6, &unk, true, 0))
		return false;

	unk10 = { func_1194() };
	unk14 = { func_480(hParam0, unk10, hash, false) };

	if (func_1213(unk14, bParam1))
	{
		if (func_1352(hParam0))
		{
			if (func_1276(joaat("SLOTID_HORSE_HORN"), &hash2))
				func_1285(hash2, false);
		}
		else if (func_1353(hParam0))
		{
			if (func_1276(joaat("SLOTID_HORSE_HORN"), &hash3))
				func_1285(hash3, false);
		
			if (func_1276(joaat("SLOTID_HORSE_STIRRUP"), &hash4))
				func_1285(hash4, false);
		
			hash5 = func_1354(hParam0);
		
			if (func_686(hash5, 0))
				func_1285(hash5, true);
		}
	
		func_1355();
		return true;
	}

	return false;
}

int func_1286() // Position - 0x33F90 Hash - 0x9F572D68 ^0x8E3583E8
{
	return joaat("breed_tennesseewalker_mahoganybay");
}

int func_1287() // Position - 0x33F9D Hash - 0x9F572D68 ^0xBDF2A68A
{
	return joaat("a_c_horse_tennesseewalker_mahoganybay");
}

int func_1288() // Position - 0x33FAA Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_1289() // Position - 0x33FB3 Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_1290() // Position - 0x33FC0 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_1291() // Position - 0x33FCD Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_1292() // Position - 0x33FD6 Hash - 0x9F572D68 ^0xC65FFCB9
{
	return joaat("breed_john_endlesssummer");
}

int func_1293() // Position - 0x33FE3 Hash - 0x9F572D68 ^0xEE9A2A30
{
	return joaat("a_c_horse_john_endlesssummer");
}

int func_1294() // Position - 0x33FF0 Hash - 0x1FFCF868 ^0x1FFCF868
{
	return 2;
}

int func_1295() // Position - 0x33FF9 Hash - 0xA16CE143 ^0x56AA164E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_1296() // Position - 0x34008 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_1297() // Position - 0x34015 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_1298() // Position - 0x3401E Hash - 0x9F572D68 ^0x1E5C2934
{
	return joaat("breed_morgan_bay");
}

int func_1299() // Position - 0x3402B Hash - 0x9F572D68 ^0xD70F756D
{
	return joaat("a_c_horse_morgan_bay");
}

int func_1300() // Position - 0x34038 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_1301() // Position - 0x34041 Hash - 0x9F572D68 ^0xE2D55F1F
{
	return joaat("breed_kentuckysaddle_grey");
}

int func_1302() // Position - 0x3404E Hash - 0x9F572D68 ^0xD5B858DC
{
	return joaat("a_c_horse_kentuckysaddle_grey");
}

int func_1303() // Position - 0x3405B Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_1304(int iParam0) // Position - 0x34064 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

Hash func_1305(int iParam0) // Position - 0x3407D Hash - 0xBD10D1A2 ^0xE9C9558B
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

int func_1306(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0x340E9 Hash - 0x3D67507D ^0xEF2F6729
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_664(bParam2), panParam0, hParam1);
}

BOOL func_1307(int iParam0, Any* panParam1) // Position - 0x340FF Hash - 0xDE4C4094 ^0x8E8A73E7
{
	Hash hash;
	var unk;
	var unk15;

	if (!func_1206(iParam0))
		return false;

	hash = func_1305(iParam0);

	if (hash == 0)
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15 = { func_677(false) };

	if (!func_1356(unk15, hash, &unk, 0, false))
		return false;

	if (!func_1357(&unk, panParam1))
		return false;

	return true;
}

BOOL func_1308(Hash hParam0) // Position - 0x34164 Hash - 0x1B551CF7 ^0xB80375AC
{
	return func_678(hParam0) == joaat("HORSE");
}

int func_1309(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x34178 Hash - 0x4C6CAF1 ^0xEE857D47
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

	if (!func_684(uParam0, &unk, true, false))
		return num;

	if (unk.f_10 == iParam4)
		return num;

	num2 = func_678(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_1358(uParam0, true) };
		unk15.f_10 = iParam4;
		num = func_1359(joaat("UPDATE"), &unk15, bParam5);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk44 = { func_1360(uParam0, true) };
		unk44.f_10 = iParam4;
		num = func_1361(joaat("UPDATE"), &unk44, bParam5);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk62 = { func_1362(&unk) };
		unk62.f_10 = iParam4;
		num = func_1363(joaat("UPDATE"), &unk62, bParam5);
	
		if (num == -1)
			return num;
	}

	return num;
}

int func_1310(Hash hParam0, int iParam1, int iParam2) // Position - 0x3426F Hash - 0xED49A216 ^0x75828FFF
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam2)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_998(hash);
	num3 = func_998(hash2);
	num4 = func_998(hash3);

	if (iParam2 != 2)
		num5 = func_998(hash4);

	num6 = func_999(hash);
	num7 = func_999(hash2);
	num8 = func_999(hash3);

	if (iParam2 != 2)
		num9 = func_999(hash4);

	if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam2 != 2)
		if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

int func_1311(int iParam0) // Position - 0x343E8 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_1312(int iParam0, int iParam1) // Position - 0x343FF Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_1313(var uParam0, int iParam1) // Position - 0x34447 Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_1364(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_1314(int iParam0, var uParam1) // Position - 0x34478 Hash - 0xE231A73F ^0x924E070C
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (Global_1946054.f_2657.f_26.f_7[*uParam1] == iParam0)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

void func_1315(int iParam0, int iParam1) // Position - 0x344BC Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_1316(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x344D5 Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i /*2*/] = uParam2->[i /*2*/];
		unk13[i /*2*/].f_1 = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (unk13[i /*2*/] == outData2)
							{
								unk13[i /*2*/].f_1 = unk13[i /*2*/].f_1 - outData2.f_1;
								break;
							}
						}
					}
				}
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i /*2*/].f_1 != 1f)
			uParam2->[i /*2*/].f_1 = BUILTIN::FLOOR((float)uParam2->[i /*2*/].f_1 * (unk13[i /*2*/].f_1 / 1f));
	}

	return;
}

void func_1317(BOOL bParam0) // Position - 0x3463C Hash - 0x246AED7E ^0xB30D729F
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HonorMeterVisible"), bParam0);
	return;
}

int func_1318(int iParam0) // Position - 0x3464F Hash - 0xD14E7A6C ^0x65ACC420
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 0;
	
		case 1:
			return 50;
	
		case 2:
			return 100;
	
		case 3:
			return 200;
	
		case 4:
			return 350;
	
		case 5:
			return 550;
	
		case 6:
			return 800;
	
		case 7:
			return 1100;
	
		default:
		
	}

	return 0;
}

BOOL func_1319(int iParam0, var uParam1) // Position - 0x346C5 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_1320() // Position - 0x346CE Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_1321(int iParam0) // Position - 0x346D7 Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_664(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_664(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_664(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_1322(int iParam0, int iParam1) // Position - 0x34739 Hash - 0xD5391B76 ^0xA65343AC
{
	var unk;

	if (iParam0 >= 10)
		iParam1 = 0;

	TEXT_LABEL_ASSIGN_STRING(&unk, "TOAST_RPG_LEVEL_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 32);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam1, 32);
	return unk;
}

const char* func_1323(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x3476B Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1324(int iParam0) // Position - 0x3477F Hash - 0x92CDDEC ^0xAAA33D80
{
	switch (iParam0)
	{
		case 0:
			return "stamina" /*Stamina*/;
	
		case 1:
			return "health";
	
		case 2:
			return "dead_eye_level_up";
	
		default:
		
	}

	return "";
}

char* func_1325(int iParam0) // Position - 0x347B9 Hash - 0x92CDDEC ^0x5EEFF9CA
{
	switch (iParam0)
	{
		case 0:
			return "RPG_HEALTH";
	
		case 1:
			return "RPG_STAMINA";
	
		case 2:
			return "RPG_DEADEYE";
	
		default:
		
	}

	return "";
}

int func_1326(int iParam0) // Position - 0x347F3 Hash - 0x21FAF347 ^0x467E3BE5
{
	switch (iParam0)
	{
		case 0:
			return joaat("toast_rpg_level_health");
	
		case 1:
			return joaat("toast_rpg_level_stamina");
	
		case 2:
			return joaat("toast_rpg_level_deadeye");
	
		default:
		
	}

	return 0;
}

int func_1327(int iParam0) // Position - 0x3482E Hash - 0x5163992 ^0x5163992
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

int func_1328(int iParam0) // Position - 0x3485D Hash - 0x21FAF347 ^0xA8C8F0DA
{
	switch (iParam0)
	{
		case 0:
			return joaat("stats_health");
	
		case 1:
			return joaat("stats_stamina");
	
		case 2:
			return joaat("stats_deadeye");
	
		default:
		
	}

	return 0;
}

BOOL func_1329(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x34898 Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_1365(iParam1) && !func_1366(iParam1))
		ped = func_1367(iParam1);
	else
		return false;

	func_1368(uParam3);
	num = func_1369(iParam2);

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, ped, num, 0))
		return false;

	*uParam0 = unk.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(*uParam0))
		return false;

	*uParam3 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*uParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*uParam0);
	return true;
}

void func_1330(Entity eParam0, var uParam1) // Position - 0x34937 Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_1370(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_1371(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

void func_1331(Ped pedParam0, Any* panParam1) // Position - 0x34981 Hash - 0x2B5AFE28 ^0xF454BB04
{
	var src;
	int i;
	Hash weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	src = 29;
	MISC::COPY_SCRIPT_STRUCT(panParam1, &src, 30);

	for (i = 0; i < 29; i = i + 1)
	{
		weaponHash = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
	
		if (func_363(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_1332(BOOL bParam0) // Position - 0x349E6 Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_686(hash, 0))
			func_826(hash, false, bParam0);
	
		Global_1946054.f_2657[i] = 0;
	}

	Global_1946054.f_2657.f_20 = 0;
	Global_1946054.f_2657.f_21 = 0;
	Global_1946054.f_2657.f_22 = 0;
	Global_1946054.f_2657.f_23 = 0;
	Global_1946054.f_2657.f_24 = 0;
	Global_1946054.f_2657.f_25 = 0;
	Global_1946054.f_2657.f_19 = 0;
	Global_1946054.f_2657.f_26.f_6 = 0;
	return;
}

void func_1333(int iParam0) // Position - 0x34A7F Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_24() == -1)
	{
		func_1372(352481484);
	
		for (i = 0; i < Global_26796.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_26796[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_26796.f_20;
		Global_1946054.f_2657.f_21 = Global_26796.f_21;
		Global_1946054.f_2657.f_22 = Global_26796.f_22;
		Global_1946054.f_2657.f_23 = Global_26796.f_23;
		Global_1946054.f_2657.f_24 = Global_26796.f_24;
		Global_1946054.f_2657.f_25 = Global_26796.f_25;
		Global_1946054.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		for (i = 0; i < Global_36638.f_45.f_350.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_36638.f_45.f_350[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946054.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946054.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946054.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946054.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946054.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946054.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_682(hash) != -999503751)
			func_1373(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_1218(hash, false))
			func_469(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_1334(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x34C6F Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_1374(hParam0))
		return;

	hash = func_682(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_1375(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_1375(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_1375(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_1375(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_1375(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_1375(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_1376(0))
	{
		func_1377(hParam0, true);
	
		if (func_829() == 1160113249)
			func_1377(func_1376(-2125499975), false);
		else
			func_1377(func_1376(1160113249), false);
	}

	func_1051();

	if (func_1378(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_664(false), hParam0, 0);

	func_469(hParam0, bParam3);

	if (bParam2)
		func_1052(false, false);

	return;
}

void func_1335(Ped pedParam0, var uParam1) // Position - 0x34DD5 Hash - 0xEFD384E2 ^0xD2D4DFA3
{
	int i;
	int weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	for (i = 0; i < 29; i = i + 1)
	{
		if (uParam1->[i] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam1->[i], 0, false))
				if (func_364(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

BOOL func_1336(Hash hParam0) // Position - 0x34E7E Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_686(hParam0, 0))
		return false;

	if (func_757(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_1337(Hash hParam0) // Position - 0x34EA8 Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_686(hParam0, 0))
		return false;

	if (func_757(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_1338(Hash hParam0) // Position - 0x34ED2 Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_686(hParam0, 0))
		return false;

	if (func_757(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_1339(Hash hParam0) // Position - 0x34EFC Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_686(hParam0, 0))
		return false;

	if (func_757(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_1340(int iParam0, int iParam1) // Position - 0x34F26 Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_1379(iParam0);
	
		case 1:
			return func_1380(iParam0);
	
		case 2:
			return func_1381(iParam0);
	
		case 3:
			return func_1382(iParam0);
	}

	return 0;
}

Hash func_1341(int iParam0, int iParam1) // Position - 0x34F7F Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_1383(iParam0);
	
		case 1:
			return func_1384(iParam0);
	
		case 2:
			return func_1385(iParam0);
	
		case 3:
			return func_1386(iParam0);
	
		case 4:
			return func_1387(iParam0);
	
		case 5:
			return func_1388(iParam0);
	
		case 6:
			return func_1389(iParam0);
	
		case 7:
			return func_1390(iParam0);
	
		case 8:
			return func_1391(iParam0);
	}

	return 0;
}

BOOL func_1342(Hash hParam0, int iParam1) // Position - 0x35032 Hash - 0xD3FACC08 ^0xE7B5B402
{
	int num;

	num = func_1053(iParam1);
	func_1221(&(Global_1946054.f_964), num, hParam0, -897569541, 1, iParam1);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	return DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964));
}

eStackSize func_1343() // Position - 0x3506F Hash - 0x2BA7679 ^0x402F4D9C
{
	if (func_24() == -1)
		return Global_26796.f_776;

	return Global_36638.f_45.f_350.f_1011;
}

void func_1344() // Position - 0x35093 Hash - 0x8102D3EE ^0x44253793
{
	char* animName;

	if (PED::IS_PED_RAGDOLL(Global_35))
		return;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
		return;

	if (!func_658(true))
		return;

	animName = "outfit_change_unarmed";

	switch (Global_1946054.f_859)
	{
		case 0:
			animName = "outfit_change_offhand";
			break;
	
		case 1:
			animName = "outfit_change_longarms";
			break;
	
		case 2:
			animName = "outfit_change_unarmed";
			break;
	}

	TASK::TASK_PLAY_ANIM(Global_35, func_1392(), animName, 1090519040, -1056964608, -1, 67108880, 0, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_915(true);
	STREAMING::REMOVE_ANIM_DICT(func_1392());
	return;
}

BOOL func_1345(eStackSize essParam0) // Position - 0x35134 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

int func_1346(eStackSize essParam0) // Position - 0x3513D Hash - 0x3D48653D ^0x3D48653D
{
	switch (essParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	
		case 5:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_1347(Hash hParam0, Ped pedParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x3518A Hash - 0xBF38E26 ^0xBF38E26
{
	BOOL flag;
	Hash hash;
	Hash hash2;
	eStackSize stackSize;
	eStackSize stackSize2;

	flag = false;
	hash = 0;
	hash2 = hParam0;
	stackSize = -1;
	stackSize2 = func_1020(hParam0);

	if (stackSize2 >= 0 && stackSize2 <= 5)
		stackSize = stackSize2;

	if (func_24() != -1)
		return;

	func_903();

	if (bParam5)
		if (!func_1393(&(Global_1946054.f_1378), &flag, hash2, stackSize, true, 0))
			return;

	if (func_658(32768) && Global_1946054.f_1378.f_1[10 /*3*/] != Global_1946054.f_57[10 /*11*/])
		func_659();

	func_1394(stackSize, true, true, 1, true, true);
	func_657(31, 0, 0, 0, false);
	func_661(0);

	if (!bParam3)
		return;

	if (flag)
		hash = 8;

	if (!bParam4)
		if (PED::IS_PED_A_PLAYER(pedParam1))
			func_657(2, hash, 2, 0, false);
		else
			func_657(2, hash, 3, pedParam1, false);
	else
		func_470(&(Global_1946054.f_1497), pedParam1, true, -1, true, true, true);

	return;
}

void func_1348(Ped pedParam0) // Position - 0x3527D Hash - 0x26B6C274 ^0x4474788E
{
	PED::_SET_PED_DIRT_CLEANED(pedParam0, 0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(pedParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
	return;
}

BOOL func_1349(Hash hParam0, int iParam1) // Position - 0x352A8 Hash - 0xD9D79AE0 ^0x7D4DF544
{
	int i;
	int outSlotId;
	int num;
	Hash category;
	int num2;

	if (hParam0 != 0)
	{
		category = func_682(hParam0);
	
		if (category != 0)
		{
			num2 = func_1395(hParam0);
		
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

Hash func_1350(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5) // Position - 0x352FC Hash - 0x730D74FA ^0xBEE364CC
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_1212(uParam0, hParam4, &unk, bParam5))
		return unk.f_4;

	return 0;
}

BOOL func_1351(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, int iParam6) // Position - 0x3532A Hash - 0x47A4DDC0 ^0xD98F8579
{
	int i;
	Hash category;
	Hash outSlotId;
	int hasSlotCount;
	var outInventoryItem;
	var unk16;
	int inventoryId;
	int childrenCount;
	int j;
	var unk30;
	var parentGuid;

	if (hParam0 != 0 && hParam1 != 0)
	{
		category = func_682(hParam1);
		hasSlotCount = func_1395(hParam1);
	
		for (i = 0; i < hasSlotCount; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
			{
				if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, category, outSlotId))
				{
					*uParam4 = { func_476(hParam1, false, false) };
				
					if (iParam6 != 0)
						uParam4->f_4 = iParam6;
				
					*uParam3 = { func_480(hParam1, *uParam4, uParam4->f_4, false) };
					*uParam2 = outSlotId;
					return true;
				}
			}
		}
	
		if (bParam5)
		{
			outInventoryItem.f_9 = joaat("SLOTID_NONE");
			unk16.f_9 = joaat("SLOTID_NONE");
			inventoryId = func_664(false);
			unk30 = { func_476(hParam1, false, false) };
		
			if (iParam6 != 0)
				unk30.f_4 = iParam6;
		
			parentGuid = { func_480(hParam1, unk30, unk30.f_4, false) };
			childrenCount = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(inventoryId, &parentGuid);
		
			for (j = 0; j < childrenCount; j = j + 1)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(inventoryId, &parentGuid, j, &outInventoryItem))
				{
					category = func_682(outInventoryItem.f_4);
					hasSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
				
					for (i = 0; i < hasSlotCount; i = i + 1)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
						{
							if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, category, outSlotId))
							{
								if (func_1212(parentGuid, outInventoryItem.f_9, &unk16, false))
								{
									uParam4->f_4 = outInventoryItem.f_9;
									*uParam4 = { outInventoryItem.f_5 };
									*uParam3 = { unk16 };
									*uParam2 = outSlotId;
									return true;
								}
							}
						}
					}
				}
			}
		}
	}

	*uParam2 = 0;
	return false;
}

BOOL func_1352(Hash hParam0) // Position - 0x354A9 Hash - 0x5E6E1858 ^0x6F4DE1DC
{
	!func_686(hParam0, 0);

	if (func_757(hParam0, 162787671))
		return true;

	return false;
}

BOOL func_1353(Hash hParam0) // Position - 0x354CF Hash - 0x1FFCC90D ^0x9E730FBF
{
	if (!func_686(hParam0, 0))
		return false;

	if (func_757(hParam0, -251515357))
		return true;

	return false;
}

Hash func_1354(Hash hParam0) // Position - 0x354F9 Hash - 0xBD10D1A2 ^0xB99ADD5C
{
	switch (hParam0)
	{
		case joaat("horse_equipment_western_01_special_new_saddle_000"):
			return 263080063;
	
		case joaat("horse_equipment_western_04_special_new_saddle_000"):
			return 1104489688;
	
		case joaat("horse_equipment_motherhubbard_01_special_new_saddle_000"):
			return -34331381;
	
		case joaat("horse_equipment_western_03_special_new_saddle_000"):
			return 579268144;
	
		case joaat("horse_equipment_mcclellan_01_special_new_saddle_000"):
			return -993578318;
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
int func_1355() // Position - 0x3555F Hash - 0x79A7BF3 ^0x80B436A4
{
	var unk;
	var unk6;
	int i;
	Hash category;
	Hash outSlotId;
	Hash hash;
	BOOL flag;
	var unk12;
	int num;
	Hash hash2;

	unk = { func_476(856287005, false, false) };
	unk6 = { func_480(856287005, unk, unk.f_4, false) };
	category = func_682(856287005);

	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, 0, &outSlotId))
		hash = func_1350(unk6, joaat("SLOTID_HORSE_SADDLE"), false);

	if (!func_686(hash, 0))
		return 0;

	flag = false;
	num = func_1395(856287005);

	for (i = 0; i < num; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
		{
			flag = false;
			hash2 = func_1350(unk6, outSlotId, false);
		
			if (!func_686(hash2, 0))
			{
				if (outSlotId == joaat("SLOTID_HORSE_HORN"))
				{
					if (func_1353(hash) || func_1352(hash))
					{
					}
					else
					{
						goto 0xDB;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_STIRRUP"))
				{
					if (func_1353(hash))
					{
					}
					else
					{
						flag = true;
						goto 0x103;
					}
				}
			
				flag = true;
			}
			else if (outSlotId == joaat("SLOTID_HORSE_BLANKET"))
			{
				if (!func_1353(hash) && func_1396(hash2))
					flag = true;
			}
		
			if (flag)
			{
				if (func_1397(outSlotId, &unk12, true))
				{
					if (!func_1213(unk12, true))
					{
					}
				}
			}
		}
	}

	return 1;
}

BOOL func_1356(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x35693 Hash - 0xA6C1C993 ^0x7035E80B
{
	int inventoryId;

	inventoryId = func_664(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

BOOL func_1357(Any* panParam0, Any* panParam1) // Position - 0x356CD Hash - 0x2AD3981E ^0x984186D0
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_664(false), panParam0, panParam1, 29, 1))
		return false;

	return true;
}

struct<29> func_1358(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x356FC Hash - 0xD34D8048 ^0xAE0F4AAB
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_664(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_1362(&unk30) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_1359(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x35795 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1398(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1399(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_1399(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29))
	{
		func_1399(num, 1);
		return num;
	}

	return -1;
}

struct<18> func_1360(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x3581C Hash - 0x3EBED8E9 ^0x3FFB16B
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_664(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_1362(&unk19) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_1361(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x3588F Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1400(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1399(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_1399(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18))
	{
		func_1399(num, 1);
		return num;
	}

	return -1;
}

struct<17> func_1362(var uParam0) // Position - 0x35916 Hash - 0x4CD39800 ^0x7DC5804
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

int func_1363(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x3596A Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1401(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1399(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_1399(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17))
	{
		func_1399(num, 1);
		return num;
	}

	return -1;
}

void func_1364(var uParam0) // Position - 0x359F1 Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1402(&(uParam0->f_3));
	return;
}

BOOL func_1365(int iParam0) // Position - 0x35A0F Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_1304(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_1366(int iParam0) // Position - 0x35A47 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_1304(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_1365(iParam0))
		return false;

	ped = func_1367(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

Ped func_1367(int iParam0) // Position - 0x35A9B Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_1304(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_1368(var uParam0) // Position - 0x35AC7 Hash - 0x6843C143 ^0xA531F0D1
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

int func_1369(int iParam0) // Position - 0x35B6E Hash - 0x1B64DC55 ^0x1B64DC55
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

void func_1370(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x35BA6 Hash - 0x125E1FB8 ^0x58C5F328
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(pedParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(pedParam0);

	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(pedParam0);
	
		switch (*uParam4)
		{
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		
			case 0:
				*uParam1 = 0;
				break;
		
			case 1:
				*uParam1 = 1;
				break;
		}
	}

	return;
}

BOOL func_1371(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x35C1B Hash - 0xF684EE16 ^0xD8F147D7
{
	int num;
	var unk;
	BOOL flag;

	num = uParam3;
	unk = iParam2;

	if (num < unk)
		iParam2 = num;

	flag = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(anParam0, pedParam1, iParam2);
	return flag;
}

void func_1372(int iParam0) // Position - 0x35C44 Hash - 0x958E8FB2 ^0x9CA4541C
{
	int num;
	int num2;
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk = { func_1118(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_1120(&unk, &num, &num2, false))
	{
		if (num2 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946054.f_2657.f_26.f_2 = 5;
					Global_1946054.f_2657.f_26.f_1 = 5;
					Global_1946054.f_2657.f_26 = 5;
					break;
			}
		}
	
		func_1012(num);
	}

	return;
}

void func_1373(var uParam0, Hash hParam1, int iParam2) // Position - 0x35D0E Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_1403(iParam2, *uParam0);
	func_1404(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_1374(Hash hParam0) // Position - 0x35D44 Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_24() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_1375(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x35D6D Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_1216(hash, &unk))
		return 0;

	if (bParam3 && !func_1218(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_682(hParam0) != -999503751)
		func_1373(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

Hash func_1376(int iParam0) // Position - 0x35E15 Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_829();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

int func_1377(Hash hParam0, BOOL bParam1) // Position - 0x35E40 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_476(hParam0, false, false) };
	guid = { func_480(hParam0, unk, unk.f_4, false) };

	if (func_663(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_664(false), &guid);
	return 1;
}

BOOL func_1378(Hash hParam0) // Position - 0x35E8C Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_1405(func_943(hParam0));
}

Hash func_1379(int iParam0) // Position - 0x35E9E Hash - 0xC02FF737 ^0xE6E3E291
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_gator");
	
		case 1:
			return joaat("provision_reinforced_bandolier_bear");
	
		case 2:
			return joaat("provision_reinforced_bandolier_boar");
	
		case 3:
			return joaat("provision_reinforced_bandolier_buffalo");
	
		case 4:
			return joaat("provision_reinforced_bandolier_cougar");
	
		case 5:
			return joaat("provision_reinforced_bandolier_deer");
	
		case 6:
			return joaat("provision_reinforced_bandolier_panther");
	
		case 7:
			return joaat("provision_reinforced_bandolier_rabbit");
	
		case 8:
			return joaat("provision_reinforced_bandolier_snake");
	
		default:
		
	}

	return 0;
}

Hash func_1380(int iParam0) // Position - 0x35F2D Hash - 0xC02FF737 ^0x9CC78C98
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_gunbelt_gator");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_bear");
	
		case 2:
			return joaat("provision_reinforced_gunbelt_boar");
	
		case 3:
			return joaat("provision_reinforced_gunbelt_buffalo");
	
		case 4:
			return joaat("provision_reinforced_gunbelt_cougar");
	
		case 5:
			return joaat("provision_reinforced_gunbelt_deer");
	
		case 6:
			return joaat("provision_reinforced_gunbelt_panther");
	
		case 7:
			return joaat("provision_reinforced_gunbelt_rabbit");
	
		case 8:
			return joaat("provision_reinforced_gunbelt_snake");
	
		default:
		
	}

	return 0;
}

Hash func_1381(int iParam0) // Position - 0x35FBC Hash - 0xC02FF737 ^0x26BFE76B
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_holster_gator");
	
		case 1:
			return joaat("provision_reinforced_holster_bear");
	
		case 2:
			return joaat("provision_reinforced_holster_boar");
	
		case 3:
			return joaat("provision_reinforced_holster_buffalo");
	
		case 4:
			return joaat("provision_reinforced_holster_cougar");
	
		case 5:
			return joaat("provision_reinforced_holster_deer");
	
		case 6:
			return joaat("provision_reinforced_holster_panther");
	
		case 7:
			return joaat("provision_reinforced_holster_rabbit");
	
		case 8:
			return joaat("provision_reinforced_holster_snake");
	
		default:
		
	}

	return 0;
}

Hash func_1382(int iParam0) // Position - 0x3604B Hash - 0xC02FF737 ^0xC89D76B1
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_offhand_gator");
	
		case 1:
			return joaat("provision_reinforced_offhand_bear");
	
		case 2:
			return joaat("provision_reinforced_offhand_boar");
	
		case 3:
			return joaat("provision_reinforced_offhand_buffalo");
	
		case 4:
			return joaat("provision_reinforced_offhand_cougar");
	
		case 5:
			return joaat("provision_reinforced_offhand_deer");
	
		case 6:
			return joaat("provision_reinforced_offhand_panther");
	
		case 7:
			return joaat("provision_reinforced_offhand_rabbit");
	
		case 8:
			return joaat("provision_reinforced_offhand_snake");
	
		default:
		
	}

	return 0;
}

Hash func_1383(int iParam0) // Position - 0x360DA Hash - 0x51E02475 ^0x6FAD83C9
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_gator");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_gator");
	
		case 2:
			return joaat("provision_reinforced_holster_gator");
	
		case 3:
			return joaat("provision_reinforced_offhand_gator");
	
		default:
		
	}

	return 0;
}

Hash func_1384(int iParam0) // Position - 0x36123 Hash - 0x51E02475 ^0x73BA00BD
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_bear");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_bear");
	
		case 2:
			return joaat("provision_reinforced_holster_bear");
	
		case 3:
			return joaat("provision_reinforced_offhand_bear");
	
		default:
		
	}

	return 0;
}

Hash func_1385(int iParam0) // Position - 0x3616C Hash - 0x51E02475 ^0xD39CAF97
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_boar");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_boar");
	
		case 2:
			return joaat("provision_reinforced_holster_boar");
	
		case 3:
			return joaat("provision_reinforced_offhand_boar");
	
		default:
		
	}

	return 0;
}

Hash func_1386(int iParam0) // Position - 0x361B5 Hash - 0x51E02475 ^0xB8F3F001
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_buffalo");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_buffalo");
	
		case 2:
			return joaat("provision_reinforced_holster_buffalo");
	
		case 3:
			return joaat("provision_reinforced_offhand_buffalo");
	
		default:
		
	}

	return 0;
}

Hash func_1387(int iParam0) // Position - 0x361FE Hash - 0x51E02475 ^0xCED8E5FA
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_cougar");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_cougar");
	
		case 2:
			return joaat("provision_reinforced_holster_cougar");
	
		case 3:
			return joaat("provision_reinforced_offhand_cougar");
	
		default:
		
	}

	return 0;
}

Hash func_1388(int iParam0) // Position - 0x36247 Hash - 0x51E02475 ^0x25F7B61
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_deer");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_deer");
	
		case 2:
			return joaat("provision_reinforced_holster_deer");
	
		case 3:
			return joaat("provision_reinforced_offhand_deer");
	
		default:
		
	}

	return 0;
}

Hash func_1389(int iParam0) // Position - 0x36290 Hash - 0x51E02475 ^0xE0DEBCEF
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_panther");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_panther");
	
		case 2:
			return joaat("provision_reinforced_holster_panther");
	
		case 3:
			return joaat("provision_reinforced_offhand_panther");
	
		default:
		
	}

	return 0;
}

Hash func_1390(int iParam0) // Position - 0x362D9 Hash - 0x51E02475 ^0x50FB5131
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_rabbit");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_rabbit");
	
		case 2:
			return joaat("provision_reinforced_holster_rabbit");
	
		case 3:
			return joaat("provision_reinforced_offhand_rabbit");
	
		default:
		
	}

	return 0;
}

Hash func_1391(int iParam0) // Position - 0x36322 Hash - 0x51E02475 ^0x8656D204
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_snake");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_snake");
	
		case 2:
			return joaat("provision_reinforced_holster_snake");
	
		case 3:
			return joaat("provision_reinforced_offhand_snake");
	
		default:
		
	}

	return 0;
}

char* func_1392() // Position - 0x3636B Hash - 0x306ACA3A ^0xFB64D5E2
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

BOOL func_1393(var uParam0, var uParam1, Hash hParam2, eStackSize essParam3, BOOL bParam4, int iParam5) // Position - 0x36377 Hash - 0x27046CB6 ^0xE856FDF2
{
	int num;

	if (!func_1406(uParam0, essParam3, hParam2) && !func_830(uParam0, hParam2, uParam1, false, bParam4, false, 0))
		return false;

	num = 10;

	if (func_658(32768))
		if (!*uParam1 || *uParam1 && uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
			func_905(1108822547);
		else
			func_1407(1108822547);

	func_911(uParam0, false, 0);
	func_1219(iParam5);
	return true;
}

void func_1394(eStackSize essParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x36401 Hash - 0x733B4F28 ^0x697CB5F2
{
	eStackSize stackSize;
	int num;

	num = 1;

	if (bParam2)
		if (essParam0 == -1 || essParam0 == func_1343() || bParam5)
			func_1408();

	if (func_24() == -1)
	{
		stackSize = Global_40.f_7729;
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
			stackSize = Global_1905941;
	
		if (bParam4 && stackSize > 5 && func_1409(Global_1946054.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				stackSize = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_1100(Global_40.f_7729);
				Global_1946054.f_1378 = func_1100(Global_40.f_7729);
				iParam3 = 1;
			}
		}
	
		num = func_1346(stackSize);
	}

	if (iParam3 && num)
		func_1101(essParam0, false, 6);

	if (bParam1)
		func_1052(false, true);

	func_1219(0);
	return;
}

int func_1395(Hash hParam0) // Position - 0x36552 Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_686(hParam0, 0))
		return 0;

	category = func_682(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

BOOL func_1396(Hash hParam0) // Position - 0x36581 Hash - 0x37EEAC8A ^0x201FD0EE
{
	if (hParam0 == 263080063 || hParam0 == -34331381 || hParam0 == -993578318 || hParam0 == 579268144 || hParam0 == 1104489688)
		return true;

	return false;
}

BOOL func_1397(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x365D1 Hash - 0x7D2A9D5F ^0xA6A7295C
{
	int num;
	int num2;
	var unk;
	var unk19;
	int i;

	if (hParam0 == 0)
		return false;

	unk = { func_1118(0, hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };
	func_1119(&unk, func_1194());

	if (func_1120(&unk, &num, &num2, false))
	{
		unk19.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_1011(&unk19, i, num, num2))
			{
				if (func_686(unk19.f_4, 0) && !unk19.f_10)
				{
					if (bParam2 && func_1396(unk19.f_4))
					{
					}
					else
					{
						*uParam1 = { unk19 };
						func_1012(num);
						return true;
					}
				}
			}
		}
	
		func_1012(num);
	}

	return false;
}

BOOL func_1398(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x36688 Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

void func_1399(int iParam0, int iParam1) // Position - 0x3669F Hash - 0x18C74423 ^0xA1132A0
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

	func_1410(iParam0, iParam1);
	return;
}

BOOL func_1400(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x36701 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_1401(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x36718 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

void func_1402(var uParam0) // Position - 0x3672F Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_1403(int iParam0, int iParam1) // Position - 0x3675B Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_1404(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x36774 Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_1364(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_654(func_827(hParam1), 1);
		uParam0->f_1 == -1;
	}
	else
	{
		uParam0->f_1 = iParam2;
	}

	uParam0->f_2 = iParam4;
	*uParam0 = hParam1;
	uParam0->f_3 = 0;

	if (bParam3)
		func_1411(uParam0);

	return;
}

BOOL func_1405(int iParam0) // Position - 0x367D0 Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

BOOL func_1406(var uParam0, eStackSize essParam1, Hash hParam2) // Position - 0x367E8 Hash - 0xF7A7FB9C ^0xF7A7FB9C
{
	if (essParam1 == -1)
		return false;

	if (hParam2 != 0 && func_1270(essParam1) != hParam2)
		return false;

	if (func_1099(2, essParam1))
	{
		func_1412(uParam0, essParam1);
		return true;
	}

	return false;
}

void func_1407(int iParam0) // Position - 0x3682A Hash - 0x65A082AE ^0x65A082AE
{
	func_671(iParam0, 8, 6);
	return;
}

void func_1408() // Position - 0x3683B Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1497 = Global_1946054.f_1378;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1497.f_1[i /*3*/] = { Global_1946054.f_1378.f_1[i /*3*/] };
	}

	return;
}

BOOL func_1409(Hash hParam0) // Position - 0x36882 Hash - 0x3C376408 ^0xEF328608
{
	int num;
	BOOL num2;

	num = func_1053(0);
	num2 = 0;
	func_1221(&(Global_1946054.f_964), num, hParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964)))
		return false;

	if (!DATAFILE::_PARSEDDATA_GET_BOOL(&num2, &(Global_1946054.f_964), -1516819610))
		return false;

	return num2;
}

void func_1410(int iParam0, int iParam1) // Position - 0x368E0 Hash - 0x26256B16 ^0x79A35F4E
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

void func_1411(var uParam0) // Position - 0x3695D Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_1413(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

void func_1412(var uParam0, eStackSize essParam1) // Position - 0x3697E Hash - 0x532E3FFC ^0x8CC1CDDF
{
	int i;

	if (func_24() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		*uParam0 = Global_26796.f_26[essParam1 /*120*/].f_1;
	
		for (i = 0; i < 39; i = i + 1)
		{
			uParam0->f_1[i /*3*/] = { Global_26796.f_26[essParam1 /*120*/].f_1.f_1[i /*3*/] };
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	*uParam0 = Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1;

	for (i = 0; i < 39; i = i + 1)
	{
		uParam0->f_1[i /*3*/] = { Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1.f_1[i /*3*/] };
	}

	return;
}

void func_1413(var uParam0, Any anParam1, int iParam2) // Position - 0x36A38 Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_1414(func_829());

	if (*uParam0)
		func_1402(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_24() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_1414(int iParam0) // Position - 0x36A6F Hash - 0xB4860741 ^0xB4860741
{
	if (func_24() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
		
			case -449205311:
				return 0;
		
			case 1160113249:
				return 0;
		
			default:
			
		}
	
		return 0;
	}

	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
	
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
	
		default:
		
	}

	return 0;
}

